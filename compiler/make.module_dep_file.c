/*
** Automatically generated from `make.module_dep_file.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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
#include "tree_bitset.mih"
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
#include "parse_tree.file_names.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.modules.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_io_sym_name.mih"
#include "parse_tree.prog_io_util.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.read_modules.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.write_module_interface_files.mih"
#include "top_level.mercury_compile.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 671 "make.module_dep_file.m"
struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s {
#line 671 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3;
#line 671 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4;
#line 674 "make.module_dep_file.m"
  MR_bool make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded;
#line 674 "make.module_dep_file.m"
  jmp_buf make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0;
#line 674 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27;
#line 674 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28;
#line 674 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30;
#line 674 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5;
#line 674 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_6_6;
#line 674 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_7_7;
#line 674 "make.module_dep_file.m"
  MR_Word make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_29_29;
#line 675 "make.module_dep_file.m"
  MR_Box make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5;
#line 671 "make.module_dep_file.m"
};


#line 199 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

#line 202 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0;

#line 205 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 208 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 211 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0;

#line 214 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 217 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__module_dep_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 220 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct2 make__module_dep_file__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 223 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0;

#line 226 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1builtin__type_ctor_info_string_0;

#line 229 "make.module_dep_file.c"
static const MR_VA_PseudoTypeInfo_Struct7 make__module_dep_file____vpti_pred_7__plain_libs__globals__type_ctor_info_globals_0__plain_list__ti_list_1builtin__type_ctor_info_string_0__plain_bool__type_ctor_info_bool_0__plain_make__type_ctor_info_make_info_0__plain_make__type_ctor_info_make_info_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

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

#line 852 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1(
#line 852 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 852 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 852 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 852 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 845 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(
#line 845 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 845 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 845 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleList_13,
#line 845 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 845 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 845 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_25,
#line 845 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_26);

#line 298 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0_1(
#line 301 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 303 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 305 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 610 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0(
#line 610 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 610 "make.module_dep_file.m"
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

#line 610 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0(
#line 610 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 610 "make.module_dep_file.m"
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

#line 610 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0(
#line 610 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 610 "make.module_dep_file.m"
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

#line 610 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0(
#line 610 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 610 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 878 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__878__1_6_p_0(
#line 878 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 878 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 878 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 878 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25);

#line 866 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__866__1_6_p_0(
#line 866 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 866 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 866 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 866 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25);

#line 852 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_short_interfaces__852__1_5_p_0(
#line 852 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 852 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 852 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_34);

#line 828 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__826__1_7_p_0_1(
#line 828 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 828 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 828 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 828 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 826 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__826__1_7_p_0(
#line 826 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 826 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleImportList_34,
#line 826 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_114,
#line 826 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__4_115,
#line 826 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__5_116);

#line 798 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__798__1_3_p_0(
#line 798 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_91,
#line 798 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_92,
#line 798 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_93);

#line 619 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__619__1_2_p_0(
#line 619 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_6,
#line 619 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_7);

#line 341 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__341__1_3_p_0(
#line 341 "make.module_dep_file.m"
  MR_String make__module_dep_file__HeadVar__1_370);

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

#line 885 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_write_importing_module_4_p_0(
#line 885 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_1,
#line 885 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2);

#line 878 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0_1(
#line 878 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 878 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 878 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 878 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 878 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 878 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 874 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0(
#line 874 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 874 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 874 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 874 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13);

#line 866 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0_1(
#line 866 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 866 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 866 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 866 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 866 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 866 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 862 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0(
#line 862 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 862 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 862 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 862 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13);

#line 845 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_short_interfaces_10_p_0(
#line 845 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 845 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 845 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleList_13,
#line 845 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 845 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__5_15,
#line 845 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 845 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_25,
#line 845 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_26);

#line 831 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_7(
#line 831 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 831 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 831 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 831 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 831 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4);

#line 826 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_6(
#line 826 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 826 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 826 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 826 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 826 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 826 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 820 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_5(
#line 820 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 820 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 820 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 820 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 820 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4);

#line 815 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_4(
#line 815 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 815 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 815 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 815 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 815 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 815 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 817 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_3(
#line 817 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 817 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 817 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 817 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 817 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 817 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 817 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 817 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7);

#line 798 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_2(
#line 798 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 798 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 798 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 798 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 795 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_1(
#line 795 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 795 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 795 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 746 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
#line 746 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 746 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_8,
#line 746 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_44,
#line 746 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_45);

#line 729 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(
#line 729 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_6,
#line 729 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_7,
#line 729 "make.module_dep_file.m"
  MR_String make__module_dep_file__Msg_8);

#line 678 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__check_regular_file_exists_4_p_0(
#line 678 "make.module_dep_file.m"
  MR_String make__module_dep_file__FileName_5,
#line 678 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__FileExists_6);

#line 674 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_1(
#line 674 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 675 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_3(
#line 675 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 674 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_2(
#line 674 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 674 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_4(
#line 674 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg);

#line 671 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0(
#line 671 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Info_3,
#line 671 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleNames_4);

#line 665 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__has_main_term_2_p_0(
#line 665 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 665 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HasMain_4);

#line 658 "make.module_dep_file.m"
static MR_Word MR_CALL 
make__module_dep_file__contains_foreign_code_1_f_0(
#line 658 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1);

#line 651 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__contains_foreign_export_term_2_p_0(
#line 651 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 651 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ContainsForeignExport_4);

#line 642 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_include_term_2_p_0(
#line 642 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 642 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignInclude_4);

#line 632 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_import_term_2_p_0(
#line 632 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 632 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignImport_4);

#line 626 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_language_term_2_p_0(
#line 626 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 626 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Lang_4);

#line 621 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__fact_dep_term_2_p_0(
#line 621 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 621 "make.module_dep_file.m"
  MR_String * make__module_dep_file__FactDep_4);

#line 774 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0_1(
#line 777 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 779 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 781 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 616 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0(
#line 616 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 616 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__SymNames_4);

#line 604 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__atom_term_3_p_0(
#line 604 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_4,
#line 604 "make.module_dep_file.m"
  MR_String * make__module_dep_file__Atom_5,
#line 604 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6);

#line 599 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__string_term_2_p_0(
#line 599 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 599 "make.module_dep_file.m"
  MR_String * make__module_dep_file__String_4);

#line 593 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__version_number_term_2_p_0(
#line 593 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 593 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Version_4);

#line 577 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_2(
#line 577 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 577 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 577 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 577 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 577 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 577 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 577 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_1(
#line 577 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 577 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 577 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 577 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 577 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 577 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5);

#line 480 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0(
#line 480 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_12,
#line 480 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_13,
#line 480 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_14,
#line 480 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDir_15,
#line 480 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDepFile_16,
#line 480 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_17,
#line 480 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Result_18,
#line 480 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_65,
#line 480 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_66);

#line 722 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_4(
#line 722 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 722 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 722 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 722 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_3(
#line 722 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 722 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 722 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 722 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_2(
#line 722 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 722 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 722 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 722 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_1(
#line 722 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 722 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 722 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2);

#line 439 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0(
#line 439 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 439 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 439 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_11,
#line 439 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_12,
#line 439 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_28,
#line 439 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_29);

#line 430 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_no_search_7_p_0(
#line 430 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 430 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 430 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 430 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_13,
#line 430 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_14);

#line 420 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_search_7_p_0(
#line 420 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 420 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 420 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 420 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_14,
#line 420 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_15);

#line 406 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__has_main_to_string_2_p_0(
#line 406 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HasMain_3,
#line 406 "make.module_dep_file.m"
  MR_String * make__module_dep_file__HasMainStr_4);

#line 390 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__contains_foreign_export_to_string_2_p_0(
#line 390 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ContainsForeignExport_3,
#line 390 "make.module_dep_file.m"
  MR_String * make__module_dep_file__ContainsForeignExportStr_4);

#line 380 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_include_file_info_3_p_0(
#line 380 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignInclude_4);

#line 371 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_import_module_info_3_p_0(
#line 371 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignImportModule_4);

#line 366 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_9(
#line 366 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 366 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 366 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 366 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 352 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_8(
#line 352 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 352 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 352 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 352 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 349 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_7(
#line 349 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 349 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 349 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 349 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 341 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_6(
#line 341 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 341 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 341 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 341 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 338 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_5(
#line 338 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 338 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 338 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 338 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 335 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_4(
#line 335 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 335 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 335 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 335 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 332 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_3(
#line 332 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 332 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 332 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 332 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 329 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_2(
#line 329 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 329 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 329 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 329 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 326 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_1(
#line 326 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 326 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 326 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 326 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3);

#line 312 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0(
#line 312 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Imports_5,
#line 312 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Version_6);

#line 278 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0(
#line 278 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_5,
#line 278 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Imports_6);

#line 156 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0(
#line 156 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 156 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 156 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_11,
#line 156 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_MaybeImports_34,
#line 156 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_35,
#line 156 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_36);

#line 143 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_get_module_dependencies_8_p_0(
#line 143 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 143 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 143 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_11,
#line 143 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__MaybeImports_12,
#line 143 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_16,
#line 143 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_17);

#line 125 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__generate_ancestor_dependencies_9_p_0(
#line 125 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_1,
#line 125 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_2,
#line 125 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_3,
#line 125 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__4_4,
#line 125 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__5_5,
#line 125 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__6_6,
#line 125 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_7);

#line 77 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__version_number_2_p_0(
#line 77 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1,
#line 77 "make.module_dep_file.m"
  MR_Integer * make__module_dep_file__HeadVar__2_2);

#line 108 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__get_module_dependencies_7_p_0_1(
#line 108 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 108 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 108 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 108 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 108 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 108 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 108 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 108 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7);


static /* final */ const MR_Box make__module_dep_file_scalar_common_1[6][2];

static /* final */ const MR_Box make__module_dep_file_scalar_common_2[16][3];

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[2][12];

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[6][6];

static /* final */ const MR_Box make__module_dep_file_scalar_common_5[2][8];

static /* final */ const MR_Box make__module_dep_file_scalar_common_6[2][11];

static /* final */ const MR_Box make__module_dep_file_scalar_common_7[4][1];

static /* final */ const MR_Box make__module_dep_file_scalar_common_8[5][5];

static /* final */ const MR_Box make__module_dep_file_scalar_common_9[1][13];

static /* final */ const MR_Box make__module_dep_file_scalar_common_10[2][9];

static /* final */ const MR_Box make__module_dep_file_scalar_common_11[1][10];

static /* final */ const MR_Box make__module_dep_file_scalar_common_12[1][7];




static /* final */ const MR_Box make__module_dep_file_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_term_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_generic_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__module_dep_file_scalar_common_1[1]))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "--make-short-interface")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_2[16][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_dep_file_scalar_common_1[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[0])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[1])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[2])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_7)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[3])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_8)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_4[4])),
    ((MR_Box) (make__module_dep_file__do_write_module_dep_file_2_4_p_0_9)),
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
    ((MR_Box) (&make__module_dep_file_scalar_common_4[5])),
    ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_8[1])),
    ((MR_Box) (make__module_dep_file__braces_term__ho2_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_8[2])),
    ((MR_Box) (make__module_dep_file__braces_term__ho3_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_8[3])),
    ((MR_Box) (make__module_dep_file__braces_term__ho4_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&make__module_dep_file_scalar_common_8[4])),
    ((MR_Box) (make__module_dep_file__braces_term__ho5_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_3[2][12] = {
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

static /* final */ const MR_Box make__module_dep_file_scalar_common_4[6][6] = {
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_dep_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0)),
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&make__module_dep_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_7[4][1] = {
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
    ((MR_Box) ((MR_Integer) 10000))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box make__module_dep_file_scalar_common_8[5][5] = {
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
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0))
  },
  /* row 4 */
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
    ((MR_Box) (&make__module_dep_file__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0)),
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
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1654 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1662 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__term__pti_term_1__plain_term__type_ctor_info_generic_0 = {
  &mercury__term__term__type_ctor_info_term_1,
  {
    (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_generic_0
  }
};

#line 1670 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1678 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 1686 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_io_error__type_ctor_info_read_module_error_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0
  }
};

#line 1694 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1702 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 make__module_dep_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &make__module_dep_file__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1711 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct2 make__module_dep_file__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &make__module_dep_file__list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1720 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &make__module_dep_file__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0list__ti_list_1parse_tree__prog_item__type_ctor_info_item_0
  }
};

#line 1728 "make.module_dep_file.c"
static const MR_FA_TypeInfo_Struct1 make__module_dep_file__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1736 "make.module_dep_file.c"
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

#line 1751 "make.module_dep_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 make__module_dep_file__list__pti_list_1__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

#line 1759 "make.module_dep_file.c"
static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0 = {
  (MR_String) "module_dep_file_v1",
  (MR_Integer) 0
};

#line 1765 "make.module_dep_file.c"
static const MR_EnumFunctorDesc make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1 = {
  (MR_String) "module_dep_file_v2",
  (MR_Integer) 1
};

#line 1771 "make.module_dep_file.c"
static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_value_ordered_module_dep_file_version_0[2] = {
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0,
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1
};

#line 1777 "make.module_dep_file.c"
static const MR_EnumFunctorDescPtr make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0[2] = {
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_0,
  &make__module_dep_file__make__module_dep_file__enum_functor_desc_module_dep_file_version_0_1
};

#line 1783 "make.module_dep_file.c"
static const MR_Integer make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1789 "make.module_dep_file.c"
const MR_TypeCtorInfo_Struct make__module_dep_file__make__module_dep_file__type_ctor_info_module_dep_file_version_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__module_dep_file____Unify____module_dep_file_version_0_0_10001)),
  ((MR_Box) (make__module_dep_file____Compare____module_dep_file_version_0_0_10001)),
  (MR_String) "make.module_dep_file",
  (MR_String) "module_dep_file_version",
  {
    make__module_dep_file__make__module_dep_file__enum_name_ordered_module_dep_file_version_0
  },
  {
    make__module_dep_file__make__module_dep_file__enum_value_ordered_module_dep_file_version_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  make__module_dep_file__make__module_dep_file__functor_number_map_module_dep_file_version_0
};

#line 1810 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file____Unify____module_dep_file_version_0_0_10001(
#line 1813 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 1815 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_2)
#line 1817 "make.module_dep_file.c"
{
#line 1819 "make.module_dep_file.c"
  {
#line 1821 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;

#line 1824 "make.module_dep_file.c"
    {
#line 1826 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file____Unify____module_dep_file_version_0_0(((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2));
    }
#line 1829 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 1831 "make.module_dep_file.c"
  }
#line 1833 "make.module_dep_file.c"
}

#line 1836 "make.module_dep_file.c"
static void MR_CALL 
make__module_dep_file____Compare____module_dep_file_version_0_0_10001(
#line 1839 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 1841 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 1843 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_3)
#line 1845 "make.module_dep_file.c"
{
#line 1847 "make.module_dep_file.c"
  {
#line 1849 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_HeadVar__1_1;

#line 1852 "make.module_dep_file.c"
    {
#line 1854 "make.module_dep_file.c"
      make__module_dep_file____Compare____module_dep_file_version_0_0(&make__module_dep_file__conv0_HeadVar__1_1, ((MR_Word) make__module_dep_file__wrapper_arg_2), ((MR_Word) make__module_dep_file__wrapper_arg_3));
    }
#line 1857 "make.module_dep_file.c"
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__1_1));
#line 1859 "make.module_dep_file.c"
  }
#line 1861 "make.module_dep_file.c"
}

#line 852 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1(
#line 852 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 852 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 852 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 852 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 852 "make.module_dep_file.m"
{
#line 852 "make.module_dep_file.m"
  {
#line 852 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 852 "make.module_dep_file.m"
    {
#line 852 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__make_short_interfaces__852__1_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 852 "make.module_dep_file.m"
      return;
    }
#line 852 "make.module_dep_file.m"
  }
#line 852 "make.module_dep_file.m"
}

#line 845 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(
#line 845 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 845 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 845 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleList_13,
#line 845 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 845 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 845 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_25,
#line 845 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_26)
#line 845 "make.module_dep_file.m"
{
#line 850 "make.module_dep_file.m"
  {
#line 850 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 850 "make.module_dep_file.m"
    MR_Word make__module_dep_file__OutputStream_19;
#line 850 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__ExitStatus_24;
#line 850 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_30_30;
#line 852 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv0_STATE_VARIABLE_IO_31_31;
#line 858 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_23_23;

#line 851 "make.module_dep_file.m"
    {
#line 851 "make.module_dep_file.m"
      mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_11, &make__module_dep_file__OutputStream_19);
    }
#line 852 "make.module_dep_file.m"
    {
#line 852 "make.module_dep_file.m"
      make__module_dep_file__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 852 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_30_30, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[1]));
#line 852 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_30_30, 1) = ((MR_Box) (make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0_1));
#line 852 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 852 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_30_30, 3) = ((MR_Box) (make__module_dep_file__SourceFileName_12));
#line 852 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_30_30, 4) = ((MR_Box) (make__module_dep_file__Globals_14));
#line 852 "make.module_dep_file.m"
    }
#line 852 "make.module_dep_file.m"
    {
#line 852 "make.module_dep_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &make__module_dep_file_scalar_common_2[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_30_30, make__module_dep_file__SubModuleList_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv0_STATE_VARIABLE_IO_31_31);
    }
#line 858 "make.module_dep_file.m"
    {
#line 858 "make.module_dep_file.m"
      mercury__io__set_output_stream_4_p_0(make__module_dep_file__OutputStream_19, &make__module_dep_file__V_23_23);
    }
#line 859 "make.module_dep_file.m"
    {
#line 859 "make.module_dep_file.m"
      mercury__io__get_exit_status_3_p_0(&make__module_dep_file__ExitStatus_24);
    }
#line 860 "make.module_dep_file.m"
    make__module_dep_file__succeeded = (make__module_dep_file__ExitStatus_24 == (MR_Integer) 0);
#line 860 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 860 "make.module_dep_file.m"
      *make__module_dep_file__Succeeded_16 = (MR_Integer) 1;
#line 860 "make.module_dep_file.m"
    else
#line 860 "make.module_dep_file.m"
      *make__module_dep_file__Succeeded_16 = (MR_Integer) 0;
#line 860 "make.module_dep_file.m"
    *make__module_dep_file__STATE_VARIABLE_Info_26 = make__module_dep_file__STATE_VARIABLE_Info_0_25;
#line 850 "make.module_dep_file.m"
  }
#line 845 "make.module_dep_file.m"
}

#line 1981 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0_1(
#line 1984 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 1986 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 1988 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 1990 "make.module_dep_file.c"
{
#line 1992 "make.module_dep_file.c"
  {
#line 1994 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 1996 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 1998 "make.module_dep_file.c"
    MR_String make__module_dep_file__conv0_FactDep_4;

#line 2001 "make.module_dep_file.c"
    {
#line 2003 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__fact_dep_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_FactDep_4);
    }
#line 2006 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 2008 "make.module_dep_file.c"
      {
#line 2010 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_FactDep_4));
#line 2012 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2014 "make.module_dep_file.c"
      }
#line 2016 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2018 "make.module_dep_file.c"
  }
#line 2020 "make.module_dep_file.c"
}

#line 610 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho5_3_p_0(
#line 610 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 610 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 610 "make.module_dep_file.m"
{
#line 612 "make.module_dep_file.m"
  {
#line 612 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 612 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 612 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 612 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 612 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 607 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 607 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 607 "make.module_dep_file.m"
      {
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 607 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 607 "make.module_dep_file.m"
          {
#line 607 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 613 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 612 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 612 "make.module_dep_file.m"
              {
#line 2071 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[1];
#line 614 "make.module_dep_file.m"
                {
#line 614 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &make__module_dep_file_scalar_common_2[15], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 612 "make.module_dep_file.m"
              }
#line 607 "make.module_dep_file.m"
          }
#line 607 "make.module_dep_file.m"
      }
#line 612 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 612 "make.module_dep_file.m"
  }
#line 610 "make.module_dep_file.m"
}

#line 2091 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0_1(
#line 2094 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 2096 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 2098 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 2100 "make.module_dep_file.c"
{
#line 2102 "make.module_dep_file.c"
  {
#line 2104 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 2106 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 2108 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_Lang_4;

#line 2111 "make.module_dep_file.c"
    {
#line 2113 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__foreign_language_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_Lang_4);
    }
#line 2116 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 2118 "make.module_dep_file.c"
      {
#line 2120 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_Lang_4));
#line 2122 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2124 "make.module_dep_file.c"
      }
#line 2126 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2128 "make.module_dep_file.c"
  }
#line 2130 "make.module_dep_file.c"
}

#line 610 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho4_3_p_0(
#line 610 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 610 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 610 "make.module_dep_file.m"
{
#line 612 "make.module_dep_file.m"
  {
#line 612 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 612 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 612 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 612 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 612 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 607 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 607 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 607 "make.module_dep_file.m"
      {
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 607 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 607 "make.module_dep_file.m"
          {
#line 607 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 613 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 612 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 612 "make.module_dep_file.m"
              {
#line 2181 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[1];
#line 614 "make.module_dep_file.m"
                {
#line 614 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, (MR_Word) &make__module_dep_file_scalar_common_2[14], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 612 "make.module_dep_file.m"
              }
#line 607 "make.module_dep_file.m"
          }
#line 607 "make.module_dep_file.m"
      }
#line 612 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 612 "make.module_dep_file.m"
  }
#line 610 "make.module_dep_file.m"
}

#line 2201 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0_1(
#line 2204 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 2206 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 2208 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 2210 "make.module_dep_file.c"
{
#line 2212 "make.module_dep_file.c"
  {
#line 2214 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 2216 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 2218 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_ForeignImport_4;

#line 2221 "make.module_dep_file.c"
    {
#line 2223 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__foreign_import_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_ForeignImport_4);
    }
#line 2226 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 2228 "make.module_dep_file.c"
      {
#line 2230 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_ForeignImport_4));
#line 2232 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2234 "make.module_dep_file.c"
      }
#line 2236 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2238 "make.module_dep_file.c"
  }
#line 2240 "make.module_dep_file.c"
}

#line 610 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho3_3_p_0(
#line 610 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 610 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 610 "make.module_dep_file.m"
{
#line 612 "make.module_dep_file.m"
  {
#line 612 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 612 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 612 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 612 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 612 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 607 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 607 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 607 "make.module_dep_file.m"
      {
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 607 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 607 "make.module_dep_file.m"
          {
#line 607 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 613 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 612 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 612 "make.module_dep_file.m"
              {
#line 2291 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[1];
#line 614 "make.module_dep_file.m"
                {
#line 614 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, (MR_Word) &make__module_dep_file_scalar_common_2[13], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 612 "make.module_dep_file.m"
              }
#line 607 "make.module_dep_file.m"
          }
#line 607 "make.module_dep_file.m"
      }
#line 612 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 612 "make.module_dep_file.m"
  }
#line 610 "make.module_dep_file.m"
}

#line 2311 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0_1(
#line 2314 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 2316 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 2318 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 2320 "make.module_dep_file.c"
{
#line 2322 "make.module_dep_file.c"
  {
#line 2324 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 2326 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 2328 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_ForeignInclude_4;

#line 2331 "make.module_dep_file.c"
    {
#line 2333 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__foreign_include_term_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_ForeignInclude_4);
    }
#line 2336 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 2338 "make.module_dep_file.c"
      {
#line 2340 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_ForeignInclude_4));
#line 2342 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 2344 "make.module_dep_file.c"
      }
#line 2346 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2348 "make.module_dep_file.c"
  }
#line 2350 "make.module_dep_file.c"
}

#line 610 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__braces_term__ho2_3_p_0(
#line 610 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_5,
#line 610 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 610 "make.module_dep_file.m"
{
#line 612 "make.module_dep_file.m"
  {
#line 612 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_5)) == (MR_mktag((MR_Integer) 0)));
#line 612 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_10;
#line 612 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_7;
#line 612 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_11_11;
#line 612 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 607 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_15_15;

#line 607 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 607 "make.module_dep_file.m"
      {
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 0)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 1)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_5, (MR_Integer) 2)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_16_16)) == (MR_mktag((MR_Integer) 0)));
#line 607 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 607 "make.module_dep_file.m"
          {
#line 607 "make.module_dep_file.m"
            make__module_dep_file__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, (MR_Integer) 0)));
#line 613 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_11_11) == 0);
#line 612 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 612 "make.module_dep_file.m"
              {
#line 2401 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_10 = (MR_Word) &make__module_dep_file_scalar_common_1[1];
#line 614 "make.module_dep_file.m"
                {
#line 614 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_10, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, (MR_Word) &make__module_dep_file_scalar_common_2[12], make__module_dep_file__ArgTerms_7, make__module_dep_file__Args_6);
                }
#line 612 "make.module_dep_file.m"
              }
#line 607 "make.module_dep_file.m"
          }
#line 607 "make.module_dep_file.m"
      }
#line 612 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 612 "make.module_dep_file.m"
  }
#line 610 "make.module_dep_file.m"
}

#line 878 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__878__1_6_p_0(
#line 878 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 878 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 878 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 878 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25)
#line 878 "make.module_dep_file.m"
{
#line 878 "make.module_dep_file.m"
  {
#line 878 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 878 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_29_29;

#line 882 "make.module_dep_file.m"
    {
#line 882 "make.module_dep_file.m"
      make__module_dep_file__V_29_29 = make__make_module_dep_file_extension_0_f_0();
    }
#line 881 "make.module_dep_file.m"
    {
#line 881 "make.module_dep_file.m"
      make__util__make_remove_module_file_8_p_0(make__module_dep_file__Globals_7, (MR_Integer) 50, make__module_dep_file__HeadVar__2_23, make__module_dep_file__V_29_29, make__module_dep_file__HeadVar__3_24, make__module_dep_file__HeadVar__4_25);
#line 881 "make.module_dep_file.m"
      return;
    }
#line 878 "make.module_dep_file.m"
  }
#line 878 "make.module_dep_file.m"
}

#line 866 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__866__1_6_p_0(
#line 866 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 866 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_23,
#line 866 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_24,
#line 866 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__4_25)
#line 866 "make.module_dep_file.m"
{
#line 866 "make.module_dep_file.m"
  {
#line 866 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 869 "make.module_dep_file.m"
    {
#line 869 "make.module_dep_file.m"
      make__util__make_remove_target_file_by_name_8_p_0(make__module_dep_file__Globals_7, (MR_Integer) 46, make__module_dep_file__HeadVar__2_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), make__module_dep_file__HeadVar__3_24, make__module_dep_file__HeadVar__4_25);
#line 869 "make.module_dep_file.m"
      return;
    }
#line 866 "make.module_dep_file.m"
  }
#line 866 "make.module_dep_file.m"
}

#line 852 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_short_interfaces__852__1_5_p_0(
#line 852 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 852 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 852 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__3_34)
#line 852 "make.module_dep_file.m"
{
#line 852 "make.module_dep_file.m"
  {
#line 852 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SubModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__3_34, (MR_Integer) 0)));
#line 852 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SubModuleItems_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__3_34, (MR_Integer) 1)));

#line 855 "make.module_dep_file.m"
    {
#line 855 "make.module_dep_file.m"
      parse_tree__write_module_interface_files__write_short_interface_file_6_p_0(make__module_dep_file__Globals_14, make__module_dep_file__SourceFileName_12, make__module_dep_file__SubModuleName_21, make__module_dep_file__SubModuleItems_22);
#line 855 "make.module_dep_file.m"
      return;
    }
#line 852 "make.module_dep_file.m"
  }
#line 852 "make.module_dep_file.m"
}

#line 828 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__826__1_7_p_0_1(
#line 828 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 828 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 828 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 828 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 828 "make.module_dep_file.m"
{
#line 828 "make.module_dep_file.m"
  {
#line 828 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 828 "make.module_dep_file.m"
    {
#line 828 "make.module_dep_file.m"
      make__module_dep_file__do_write_module_dep_file_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 828 "make.module_dep_file.m"
      return;
    }
#line 828 "make.module_dep_file.m"
  }
#line 828 "make.module_dep_file.m"
}

#line 826 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__826__1_7_p_0(
#line 826 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 826 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleImportList_34,
#line 826 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_114,
#line 826 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__4_115,
#line 826 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__5_116)
#line 826 "make.module_dep_file.m"
{
#line 826 "make.module_dep_file.m"
  {
#line 826 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 826 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_119_119;
#line 828 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv0_HeadVar__7_118;

#line 828 "make.module_dep_file.m"
    {
#line 828 "make.module_dep_file.m"
      make__module_dep_file__V_119_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 828 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_119_119, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_12[0]));
#line 828 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_119_119, 1) = ((MR_Box) (make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__826__1_7_p_0_1));
#line 828 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_119_119, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 828 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_119_119, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 828 "make.module_dep_file.m"
    }
#line 828 "make.module_dep_file.m"
    {
#line 828 "make.module_dep_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_119_119, make__module_dep_file__ModuleImportList_34, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv0_HeadVar__7_118);
    }
#line 827 "make.module_dep_file.m"
    *make__module_dep_file__HeadVar__3_114 = (MR_Integer) 1;
#line 827 "make.module_dep_file.m"
    *make__module_dep_file__HeadVar__5_116 = make__module_dep_file__HeadVar__4_115;
#line 826 "make.module_dep_file.m"
  }
#line 826 "make.module_dep_file.m"
}

#line 798 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__798__1_3_p_0(
#line 798 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_91,
#line 798 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_92,
#line 798 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__3_93)
#line 798 "make.module_dep_file.m"
{
#line 798 "make.module_dep_file.m"
  {
#line 798 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 798 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SubModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_91, (MR_Integer) 2)));
#line 798 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_94_94;
#line 798 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_95_95;
#line 798 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_96_96;
#line 800 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_195_195 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_91, (MR_Integer) 0)));
#line 800 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_91, (MR_Integer) 1)));
#line 800 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_91, (MR_Integer) 3)));
#line 800 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_91, (MR_Integer) 4)));
#line 800 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_91, (MR_Integer) 5)));
#line 800 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_91, (MR_Integer) 6)));
#line 800 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_91, (MR_Integer) 7)));
#line 800 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_91, (MR_Integer) 8)));
#line 800 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_91, (MR_Integer) 9)));
#line 800 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_91, (MR_Integer) 10)));
#line 800 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_91, (MR_Integer) 11)));
#line 800 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_91, (MR_Integer) 12)));
#line 800 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_91, (MR_Integer) 13)));
#line 800 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_91, (MR_Integer) 14)));
#line 800 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_91, (MR_Integer) 15)));
#line 800 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_91, (MR_Integer) 16)));
#line 800 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_91, (MR_Integer) 17)));
#line 800 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_91, (MR_Integer) 18)));
#line 800 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_91, (MR_Integer) 19)));
#line 800 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_214_214 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__1_91, (MR_Integer) 20)));
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_215_215;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_216_216;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_217_217;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_218_218;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_219_219;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_220_220;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_221_221;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_222_222;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_223_223;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_224_224;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_225_225;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_226_226;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_227_227;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_228_228;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_229_229;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_230_230;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_231_231;
#line 801 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_232_232;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_233_233;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_235_235;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_236_236;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_237_237;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_238_238;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_239_239;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_240_240;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_241_241;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_242_242;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_243_243;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_244_244;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_245_245;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_246_246;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_247_247;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_248_248;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_249_249;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_250_250;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_251_251;
#line 801 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_252_252;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_253_253;
#line 801 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_234_234;

#line 802 "make.module_dep_file.m"
    {
#line 802 "make.module_dep_file.m"
      make__module_dep_file__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 802 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_94_94, 0) = ((MR_Box) (make__module_dep_file__HeadVar__1_91));
#line 802 "make.module_dep_file.m"
    }
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 0)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 1)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 2)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 3)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 4)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 5)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 6)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 7)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 8)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 9)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 10)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 11)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 12)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 13)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 14)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 15)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 16)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 17)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_232_232 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 18)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 19)));
#line 801 "make.module_dep_file.m"
    {
#line 801 "make.module_dep_file.m"
      make__module_dep_file__V_96_96 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__SubModuleName_37)), make__module_dep_file__V_95_95, ((MR_Box) (make__module_dep_file__V_94_94)));
    }
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 0)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 1)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 2)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 3)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 4)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 5)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 6)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 7)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 8)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 9)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 10)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 11)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 12)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 13)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 14)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 15)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 16)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 17)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_252_252 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 18)));
#line 801 "make.module_dep_file.m"
    make__module_dep_file__V_253_253 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__2_92, (MR_Integer) 19)));
#line 801 "make.module_dep_file.m"
    {
#line 801 "make.module_dep_file.m"
      MR_Word base;
#line 801 "make.module_dep_file.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 801 "make.module_dep_file.m"
      *make__module_dep_file__HeadVar__3_93 = base;
#line 801 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__V_96_96));
#line 801 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_235_235));
#line 801 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_236_236));
#line 801 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_237_237));
#line 801 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_238_238));
#line 801 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_239_239));
#line 801 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_240_240));
#line 801 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_241_241));
#line 801 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_242_242));
#line 801 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_243_243));
#line 801 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_244_244));
#line 801 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_245_245));
#line 801 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_246_246));
#line 801 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_247_247));
#line 801 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_248_248));
#line 801 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_249_249));
#line 801 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_250_250));
#line 801 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_251_251));
#line 801 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_252_252));
#line 801 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_253_253));
#line 801 "make.module_dep_file.m"
    }
#line 798 "make.module_dep_file.m"
  }
#line 798 "make.module_dep_file.m"
}

#line 619 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__IntroducedFrom__pred__sym_names_term__619__1_2_p_0(
#line 619 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_6,
#line 619 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__2_7)
#line 619 "make.module_dep_file.m"
{
#line 619 "make.module_dep_file.m"
  {
#line 619 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 619 "make.module_dep_file.m"
    {
#line 619 "make.module_dep_file.m"
      return make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, make__module_dep_file__HeadVar__1_6, make__module_dep_file__HeadVar__2_7);
    }
#line 619 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 619 "make.module_dep_file.m"
  }
#line 619 "make.module_dep_file.m"
}

#line 341 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__341__1_3_p_0(
#line 341 "make.module_dep_file.m"
  MR_String make__module_dep_file__HeadVar__1_370)
#line 341 "make.module_dep_file.m"
{
#line 341 "make.module_dep_file.m"
  {
#line 341 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 341 "make.module_dep_file.m"
    {
#line 341 "make.module_dep_file.m"
      mercury__io__write_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (make__module_dep_file__HeadVar__1_370)));
#line 341 "make.module_dep_file.m"
      return;
    }
#line 341 "make.module_dep_file.m"
  }
#line 341 "make.module_dep_file.m"
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
#line 2983 "make.module_dep_file.c"
  {
#line 2985 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded = (make__module_dep_file__HeadVar__2_1 == make__module_dep_file__HeadVar__2_2);

#line 2988 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 2990 "make.module_dep_file.c"
  }
#line 72 "make.module_dep_file.m"
}

#line 885 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_write_importing_module_4_p_0(
#line 885 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_1,
#line 885 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__2_2)
#line 885 "make.module_dep_file.m"
{
#line 888 "make.module_dep_file.m"
  {
#line 888 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 888 "make.module_dep_file.m"
    if ((make__module_dep_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 888 "make.module_dep_file.m"
      {
#line 888 "make.module_dep_file.m"
      }
#line 888 "make.module_dep_file.m"
    else
#line 889 "make.module_dep_file.m"
      {
#line 889 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ImportingModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__2_2, (MR_Integer) 0)));

#line 890 "make.module_dep_file.m"
        {
#line 890 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "** Module \140");
        }
#line 891 "make.module_dep_file.m"
        {
#line 891 "make.module_dep_file.m"
          parse_tree__prog_out__write_sym_name_3_p_0(make__module_dep_file__ModuleName_1);
        }
#line 892 "make.module_dep_file.m"
        {
#line 892 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\' is imported or included by module \140");
        }
#line 893 "make.module_dep_file.m"
        {
#line 893 "make.module_dep_file.m"
          parse_tree__prog_out__write_sym_name_3_p_0(make__module_dep_file__ImportingModuleName_10);
        }
#line 894 "make.module_dep_file.m"
        {
#line 894 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "\'.\n");
#line 894 "make.module_dep_file.m"
          return;
        }
#line 889 "make.module_dep_file.m"
      }
#line 888 "make.module_dep_file.m"
  }
#line 885 "make.module_dep_file.m"
}

#line 878 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0_1(
#line 878 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 878 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
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
    MR_Word make__module_dep_file__conv0_HeadVar__4_25;

#line 878 "make.module_dep_file.m"
    {
#line 878 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__cleanup_module_dep_files__878__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_HeadVar__4_25);
    }
#line 878 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__4_25));
#line 878 "make.module_dep_file.m"
  }
#line 878 "make.module_dep_file.m"
}

#line 874 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_module_dep_files_6_p_0(
#line 874 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 874 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 874 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 874 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13)
#line 874 "make.module_dep_file.m"
{
#line 877 "make.module_dep_file.m"
  {
#line 877 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 877 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 878 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_13;
#line 878 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv1_STATE_VARIABLE_IO_15;

#line 878 "make.module_dep_file.m"
    {
#line 878 "make.module_dep_file.m"
      make__module_dep_file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 878 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[1]));
#line 878 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 1) = ((MR_Box) (make__module_dep_file__cleanup_module_dep_files_6_p_0_1));
#line 878 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 878 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 878 "make.module_dep_file.m"
    }
#line 878 "make.module_dep_file.m"
    {
#line 878 "make.module_dep_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_16_16, make__module_dep_file__SubModuleNames_8, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_0_12)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv1_STATE_VARIABLE_IO_15);
    }
#line 878 "make.module_dep_file.m"
    *make__module_dep_file__STATE_VARIABLE_Info_13 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_13);
#line 877 "make.module_dep_file.m"
  }
#line 874 "make.module_dep_file.m"
}

#line 866 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0_1(
#line 866 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 866 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 866 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 866 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 866 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 866 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 866 "make.module_dep_file.m"
{
#line 866 "make.module_dep_file.m"
  {
#line 866 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 866 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_HeadVar__4_25;

#line 866 "make.module_dep_file.m"
    {
#line 866 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__cleanup_short_interfaces__866__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_HeadVar__4_25);
    }
#line 866 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__4_25));
#line 866 "make.module_dep_file.m"
  }
#line 866 "make.module_dep_file.m"
}

#line 862 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__cleanup_short_interfaces_6_p_0(
#line 862 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 862 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleNames_8,
#line 862 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_12,
#line 862 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_13)
#line 862 "make.module_dep_file.m"
{
#line 865 "make.module_dep_file.m"
  {
#line 865 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 865 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 866 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_13;
#line 866 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv1_STATE_VARIABLE_IO_15;

#line 866 "make.module_dep_file.m"
    {
#line 866 "make.module_dep_file.m"
      make__module_dep_file__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 866 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[1]));
#line 866 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 1) = ((MR_Box) (make__module_dep_file__cleanup_short_interfaces_6_p_0_1));
#line 866 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 866 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_16_16, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 866 "make.module_dep_file.m"
    }
#line 866 "make.module_dep_file.m"
    {
#line 866 "make.module_dep_file.m"
      mercury__list__foldl2_6_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_16_16, make__module_dep_file__SubModuleNames_8, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_0_12)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_13, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv1_STATE_VARIABLE_IO_15);
    }
#line 866 "make.module_dep_file.m"
    *make__module_dep_file__STATE_VARIABLE_Info_13 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_13);
#line 865 "make.module_dep_file.m"
  }
#line 862 "make.module_dep_file.m"
}

#line 845 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_short_interfaces_10_p_0(
#line 845 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ErrorStream_11,
#line 845 "make.module_dep_file.m"
  MR_String make__module_dep_file__SourceFileName_12,
#line 845 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SubModuleList_13,
#line 845 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_14,
#line 845 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__5_15,
#line 845 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Succeeded_16,
#line 845 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_25,
#line 845 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_26)
#line 845 "make.module_dep_file.m"
{
#line 850 "make.module_dep_file.m"
  {
#line 850 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 850 "make.module_dep_file.m"
    {
#line 850 "make.module_dep_file.m"
      make__module_dep_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_115_104_111_114_116_95_105_110_116_101_114_102_97_99_101_115_95_95_91_53_93_95_48_10_p_0(make__module_dep_file__ErrorStream_11, make__module_dep_file__SourceFileName_12, make__module_dep_file__SubModuleList_13, make__module_dep_file__Globals_14, make__module_dep_file__Succeeded_16, make__module_dep_file__STATE_VARIABLE_Info_0_25, make__module_dep_file__STATE_VARIABLE_Info_26);
#line 850 "make.module_dep_file.m"
      return;
    }
#line 850 "make.module_dep_file.m"
  }
#line 845 "make.module_dep_file.m"
}

#line 831 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_7(
#line 831 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 831 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 831 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 831 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 831 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4)
#line 831 "make.module_dep_file.m"
{
#line 831 "make.module_dep_file.m"
  {
#line 831 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 831 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv11_STATE_VARIABLE_Info_13;

#line 831 "make.module_dep_file.m"
    {
#line 831 "make.module_dep_file.m"
      make__module_dep_file__cleanup_module_dep_files_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv11_STATE_VARIABLE_Info_13);
    }
#line 831 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv11_STATE_VARIABLE_Info_13));
#line 831 "make.module_dep_file.m"
  }
#line 831 "make.module_dep_file.m"
}

#line 826 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_6(
#line 826 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 826 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 826 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 826 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 826 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 826 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 826 "make.module_dep_file.m"
{
#line 826 "make.module_dep_file.m"
  {
#line 826 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 826 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv10_HeadVar__3_114;
#line 826 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv9_HeadVar__5_116;

#line 826 "make.module_dep_file.m"
    {
#line 826 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__826__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), &make__module_dep_file__conv10_HeadVar__3_114, ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv9_HeadVar__5_116);
    }
#line 826 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv10_HeadVar__3_114));
#line 826 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv9_HeadVar__5_116));
#line 826 "make.module_dep_file.m"
  }
#line 826 "make.module_dep_file.m"
}

#line 820 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_5(
#line 820 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 820 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 820 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2,
#line 820 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_3,
#line 820 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_4)
#line 820 "make.module_dep_file.m"
{
#line 820 "make.module_dep_file.m"
  {
#line 820 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 820 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv7_STATE_VARIABLE_Info_13;

#line 820 "make.module_dep_file.m"
    {
#line 820 "make.module_dep_file.m"
      make__module_dep_file__cleanup_short_interfaces_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv7_STATE_VARIABLE_Info_13);
    }
#line 820 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv7_STATE_VARIABLE_Info_13));
#line 820 "make.module_dep_file.m"
  }
#line 820 "make.module_dep_file.m"
}

#line 815 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_4(
#line 815 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 815 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_1,
#line 815 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 815 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 815 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 815 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 815 "make.module_dep_file.m"
{
#line 815 "make.module_dep_file.m"
  {
#line 815 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 815 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv6_HeadVar__5_5;
#line 815 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv5_HeadVar__7_7;

#line 815 "make.module_dep_file.m"
    {
#line 815 "make.module_dep_file.m"
      make__util__build_with_module_options_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 6))), &make__module_dep_file__conv6_HeadVar__5_5, ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv5_HeadVar__7_7);
    }
#line 815 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_1 = ((MR_Box) (make__module_dep_file__conv6_HeadVar__5_5));
#line 815 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv5_HeadVar__7_7));
#line 815 "make.module_dep_file.m"
  }
#line 815 "make.module_dep_file.m"
}

#line 817 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_3(
#line 817 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 817 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 817 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 817 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 817 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 817 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 817 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 817 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7)
#line 817 "make.module_dep_file.m"
{
#line 817 "make.module_dep_file.m"
  {
#line 817 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 817 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv4_Succeeded_16;
#line 817 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv3_STATE_VARIABLE_Info_26;

#line 817 "make.module_dep_file.m"
    {
#line 817 "make.module_dep_file.m"
      make__module_dep_file__make_short_interfaces_10_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv4_Succeeded_16, ((MR_Word) make__module_dep_file__wrapper_arg_4), &make__module_dep_file__conv3_STATE_VARIABLE_Info_26);
    }
#line 817 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv4_Succeeded_16));
#line 817 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_5 = ((MR_Box) (make__module_dep_file__conv3_STATE_VARIABLE_Info_26));
#line 817 "make.module_dep_file.m"
  }
#line 817 "make.module_dep_file.m"
}

#line 798 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_2(
#line 798 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 798 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 798 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 798 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 798 "make.module_dep_file.m"
{
#line 798 "make.module_dep_file.m"
  {
#line 798 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 798 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv1_HeadVar__3_93;

#line 798 "make.module_dep_file.m"
    {
#line 798 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__make_module_dependencies__798__1_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv1_HeadVar__3_93);
    }
#line 798 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv1_HeadVar__3_93));
#line 798 "make.module_dep_file.m"
  }
#line 798 "make.module_dep_file.m"
}

#line 795 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0_1(
#line 795 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 795 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 795 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 795 "make.module_dep_file.m"
{
#line 795 "make.module_dep_file.m"
  {
#line 795 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 795 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_HeadVar__8_8;

#line 795 "make.module_dep_file.m"
    {
#line 795 "make.module_dep_file.m"
      parse_tree__module_imports__init_dependencies_8_p_0(((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 8))), ((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_HeadVar__8_8);
    }
#line 795 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__8_8));
#line 795 "make.module_dep_file.m"
  }
#line 795 "make.module_dep_file.m"
}

#line 746 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__make_module_dependencies_6_p_0(
#line 746 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_7,
#line 746 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_8,
#line 746 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_44,
#line 746 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_45)
#line 746 "make.module_dep_file.m"
{
#line 749 "make.module_dep_file.m"
  {
#line 749 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 749 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeErrorStream_11;
#line 749 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_48_48;

#line 750 "make.module_dep_file.m"
    {
#line 750 "make.module_dep_file.m"
      make__util__redirect_output_6_p_0(make__module_dep_file__ModuleName_8, &make__module_dep_file__MaybeErrorStream_11, make__module_dep_file__STATE_VARIABLE_Info_0_44, &make__module_dep_file__STATE_VARIABLE_Info_48_48);
    }
#line 841 "make.module_dep_file.m"
    if ((make__module_dep_file__MaybeErrorStream_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 842 "make.module_dep_file.m"
      *make__module_dep_file__STATE_VARIABLE_Info_45 = make__module_dep_file__STATE_VARIABLE_Info_48_48;
#line 841 "make.module_dep_file.m"
    else
#line 752 "make.module_dep_file.m"
      {
#line 752 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TypeCtorInfo_254_254;
#line 752 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ErrorStream_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__MaybeErrorStream_11, (MR_Integer) 0)));
#line 752 "make.module_dep_file.m"
        MR_Word make__module_dep_file__OldOutputStream_13;
#line 752 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Items_14;
#line 752 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Specs0_15;
#line 752 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Errors_16;
#line 752 "make.module_dep_file.m"
        MR_String make__module_dep_file__SourceFileName_17;
#line 752 "make.module_dep_file.m"
        MR_Word make__module_dep_file__FatalErrors_19;
#line 752 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_56_56;
#line 755 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_18_18;

#line 753 "make.module_dep_file.m"
        {
#line 753 "make.module_dep_file.m"
          mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__OldOutputStream_13);
        }
#line 755 "make.module_dep_file.m"
        {
#line 755 "make.module_dep_file.m"
          parse_tree__read_modules__read_module_13_p_0(make__module_dep_file__Globals_7, make__module_dep_file__ModuleName_8, (MR_String) ".m", (MR_String) "Getting dependencies for module", (MR_Integer) 1, (MR_Integer) 0, &make__module_dep_file__Items_14, &make__module_dep_file__Specs0_15, &make__module_dep_file__Errors_16, &make__module_dep_file__SourceFileName_17, &make__module_dep_file__V_18_18);
        }
#line 759 "make.module_dep_file.m"
        {
#line 759 "make.module_dep_file.m"
          make__module_dep_file__V_56_56 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 3591 "make.module_dep_file.c"
        make__module_dep_file__TypeCtorInfo_254_254 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 759 "make.module_dep_file.m"
        {
#line 759 "make.module_dep_file.m"
          mercury__set__intersect_3_p_0(make__module_dep_file__TypeCtorInfo_254_254, make__module_dep_file__Errors_16, make__module_dep_file__V_56_56, &make__module_dep_file__FatalErrors_19);
        }
#line 760 "make.module_dep_file.m"
        {
#line 760 "make.module_dep_file.m"
          make__module_dep_file__succeeded = mercury__set__is_non_empty_1_p_0(make__module_dep_file__TypeCtorInfo_254_254, make__module_dep_file__FatalErrors_19);
        }
#line 785 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 761 "make.module_dep_file.m"
          {
#line 761 "make.module_dep_file.m"
            MR_Word make__module_dep_file__UnredirectGlobals_24;
#line 761 "make.module_dep_file.m"
            MR_String make__module_dep_file__ErrFileName_25;
#line 761 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleDepMap0_27;
#line 761 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleDepMap_28;
#line 761 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_67_67;
#line 761 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_72_72;
#line 761 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_20_20;
#line 762 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumWarnings_21;
#line 762 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumErrors_22;
#line 764 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_23_23;
#line 768 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_137_137;
#line 768 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_138_138;
#line 768 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_139_139;
#line 768 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_140_140;
#line 768 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_141_141;
#line 768 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_142_142;
#line 768 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_143_143;
#line 768 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_144_144;
#line 768 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_145_145;
#line 768 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_146_146;
#line 768 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_147_147;
#line 768 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_148_148;
#line 768 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_149_149;
#line 768 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_150_150;
#line 768 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_151_151;
#line 768 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_152_152;
#line 768 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_153_153;
#line 768 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_154_154;
#line 768 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_155_155;
#line 780 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_26_26;
#line 781 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_156_156;
#line 781 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_157_157;
#line 781 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_158_158;
#line 781 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_159_159;
#line 781 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_160_160;
#line 781 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_161_161;
#line 781 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_162_162;
#line 781 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_163_163;
#line 781 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_164_164;
#line 781 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_165_165;
#line 781 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_166_166;
#line 781 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_167_167;
#line 781 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_168_168;
#line 781 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_169_169;
#line 781 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_170_170;
#line 781 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_171_171;
#line 781 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_172_172;
#line 781 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_173_173;
#line 781 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_174_174;
#line 784 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_176_176;
#line 784 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_177_177;
#line 784 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_178_178;
#line 784 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_179_179;
#line 784 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_180_180;
#line 784 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_181_181;
#line 784 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_182_182;
#line 784 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_183_183;
#line 784 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_184_184;
#line 784 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_185_185;
#line 784 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_186_186;
#line 784 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_187_187;
#line 784 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_188_188;
#line 784 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_189_189;
#line 784 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_190_190;
#line 784 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_191_191;
#line 784 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_192_192;
#line 784 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_193_193;
#line 784 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_194_194;
#line 784 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_175_175;

#line 761 "make.module_dep_file.m"
            {
#line 761 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__V_20_20);
            }
#line 762 "make.module_dep_file.m"
            {
#line 762 "make.module_dep_file.m"
              parse_tree__error_util__write_error_specs_8_p_0(make__module_dep_file__Specs0_15, make__module_dep_file__Globals_7, (MR_Integer) 0, &make__module_dep_file___NumWarnings_21, (MR_Integer) 0, &make__module_dep_file___NumErrors_22);
            }
#line 764 "make.module_dep_file.m"
            {
#line 764 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_13, &make__module_dep_file__V_23_23);
            }
#line 765 "make.module_dep_file.m"
            {
#line 765 "make.module_dep_file.m"
              mercury__io__write_string_3_p_0((MR_String) "** Error: error reading file \140");
            }
#line 766 "make.module_dep_file.m"
            {
#line 766 "make.module_dep_file.m"
              mercury__io__write_string_3_p_0(make__module_dep_file__SourceFileName_17);
            }
#line 767 "make.module_dep_file.m"
            {
#line 767 "make.module_dep_file.m"
              mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies.\n");
            }
#line 768 "make.module_dep_file.m"
            make__module_dep_file__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 0)));
#line 768 "make.module_dep_file.m"
            make__module_dep_file__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 1)));
#line 768 "make.module_dep_file.m"
            make__module_dep_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 2)));
#line 768 "make.module_dep_file.m"
            make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 3)));
#line 768 "make.module_dep_file.m"
            make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 4)));
#line 768 "make.module_dep_file.m"
            make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 5)));
#line 768 "make.module_dep_file.m"
            make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 6)));
#line 768 "make.module_dep_file.m"
            make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 7)));
#line 768 "make.module_dep_file.m"
            make__module_dep_file__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 8)));
#line 768 "make.module_dep_file.m"
            make__module_dep_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 9)));
#line 768 "make.module_dep_file.m"
            make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 10)));
#line 768 "make.module_dep_file.m"
            make__module_dep_file__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 11)));
#line 768 "make.module_dep_file.m"
            make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 12)));
#line 768 "make.module_dep_file.m"
            make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 13)));
#line 768 "make.module_dep_file.m"
            make__module_dep_file__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 14)));
#line 768 "make.module_dep_file.m"
            make__module_dep_file__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 15)));
#line 768 "make.module_dep_file.m"
            make__module_dep_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 16)));
#line 768 "make.module_dep_file.m"
            make__module_dep_file__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 17)));
#line 768 "make.module_dep_file.m"
            make__module_dep_file__V_154_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 18)));
#line 768 "make.module_dep_file.m"
            make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_48_48, (MR_Integer) 19)));
#line 768 "make.module_dep_file.m"
            {
#line 768 "make.module_dep_file.m"
              make__module_dep_file__maybe_write_importing_module_4_p_0(make__module_dep_file__ModuleName_8, make__module_dep_file__V_67_67);
            }
#line 774 "make.module_dep_file.m"
            {
#line 774 "make.module_dep_file.m"
              libs__globals__set_option_4_p_0((MR_Integer) 52, (MR_Word) MR_mkword(MR_mktag(2), &make__module_dep_file_scalar_common_7[2]), make__module_dep_file__Globals_7, &make__module_dep_file__UnredirectGlobals_24);
            }
#line 776 "make.module_dep_file.m"
            {
#line 776 "make.module_dep_file.m"
              make__util__unredirect_output_7_p_0(make__module_dep_file__UnredirectGlobals_24, make__module_dep_file__ModuleName_8, make__module_dep_file__ErrorStream_12, make__module_dep_file__STATE_VARIABLE_Info_48_48, &make__module_dep_file__STATE_VARIABLE_Info_72_72);
            }
#line 778 "make.module_dep_file.m"
            {
#line 778 "make.module_dep_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_7, make__module_dep_file__ModuleName_8, (MR_String) ".err", (MR_Integer) 1, &make__module_dep_file__ErrFileName_25);
            }
#line 780 "make.module_dep_file.m"
            {
#line 780 "make.module_dep_file.m"
              mercury__io__remove_file_4_p_0(make__module_dep_file__ErrFileName_25, &make__module_dep_file__V_26_26);
            }
#line 781 "make.module_dep_file.m"
            make__module_dep_file__ModuleDepMap0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 0)));
#line 781 "make.module_dep_file.m"
            make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 1)));
#line 781 "make.module_dep_file.m"
            make__module_dep_file__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 2)));
#line 781 "make.module_dep_file.m"
            make__module_dep_file__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 3)));
#line 781 "make.module_dep_file.m"
            make__module_dep_file__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 4)));
#line 781 "make.module_dep_file.m"
            make__module_dep_file__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 5)));
#line 781 "make.module_dep_file.m"
            make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 6)));
#line 781 "make.module_dep_file.m"
            make__module_dep_file__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 7)));
#line 781 "make.module_dep_file.m"
            make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 8)));
#line 781 "make.module_dep_file.m"
            make__module_dep_file__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 9)));
#line 781 "make.module_dep_file.m"
            make__module_dep_file__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 10)));
#line 781 "make.module_dep_file.m"
            make__module_dep_file__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 11)));
#line 781 "make.module_dep_file.m"
            make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 12)));
#line 781 "make.module_dep_file.m"
            make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 13)));
#line 781 "make.module_dep_file.m"
            make__module_dep_file__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 14)));
#line 781 "make.module_dep_file.m"
            make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 15)));
#line 781 "make.module_dep_file.m"
            make__module_dep_file__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 16)));
#line 781 "make.module_dep_file.m"
            make__module_dep_file__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 17)));
#line 781 "make.module_dep_file.m"
            make__module_dep_file__V_173_173 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 18)));
#line 781 "make.module_dep_file.m"
            make__module_dep_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 19)));
#line 783 "make.module_dep_file.m"
            {
#line 783 "make.module_dep_file.m"
              mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_8)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), make__module_dep_file__ModuleDepMap0_27, &make__module_dep_file__ModuleDepMap_28);
            }
#line 784 "make.module_dep_file.m"
            make__module_dep_file__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 0)));
#line 784 "make.module_dep_file.m"
            make__module_dep_file__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 1)));
#line 784 "make.module_dep_file.m"
            make__module_dep_file__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 2)));
#line 784 "make.module_dep_file.m"
            make__module_dep_file__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 3)));
#line 784 "make.module_dep_file.m"
            make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 4)));
#line 784 "make.module_dep_file.m"
            make__module_dep_file__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 5)));
#line 784 "make.module_dep_file.m"
            make__module_dep_file__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 6)));
#line 784 "make.module_dep_file.m"
            make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 7)));
#line 784 "make.module_dep_file.m"
            make__module_dep_file__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 8)));
#line 784 "make.module_dep_file.m"
            make__module_dep_file__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 9)));
#line 784 "make.module_dep_file.m"
            make__module_dep_file__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 10)));
#line 784 "make.module_dep_file.m"
            make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 11)));
#line 784 "make.module_dep_file.m"
            make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 12)));
#line 784 "make.module_dep_file.m"
            make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 13)));
#line 784 "make.module_dep_file.m"
            make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 14)));
#line 784 "make.module_dep_file.m"
            make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 15)));
#line 784 "make.module_dep_file.m"
            make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 16)));
#line 784 "make.module_dep_file.m"
            make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 17)));
#line 784 "make.module_dep_file.m"
            make__module_dep_file__V_193_193 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 18)));
#line 784 "make.module_dep_file.m"
            make__module_dep_file__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_72_72, (MR_Integer) 19)));
#line 784 "make.module_dep_file.m"
            {
#line 784 "make.module_dep_file.m"
              MR_Word base;
#line 784 "make.module_dep_file.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 784 "make.module_dep_file.m"
              *make__module_dep_file__STATE_VARIABLE_Info_45 = base;
#line 784 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_28));
#line 784 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_176_176));
#line 784 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_177_177));
#line 784 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_178_178));
#line 784 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_179_179));
#line 784 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_180_180));
#line 784 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_181_181));
#line 784 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_182_182));
#line 784 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_183_183));
#line 784 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_184_184));
#line 784 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_185_185));
#line 784 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_186_186));
#line 784 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_187_187));
#line 784 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_188_188));
#line 784 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_189_189));
#line 784 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_190_190));
#line 784 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_191_191));
#line 784 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_192_192));
#line 784 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_193_193));
#line 784 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_194_194));
#line 784 "make.module_dep_file.m"
            }
#line 761 "make.module_dep_file.m"
          }
#line 785 "make.module_dep_file.m"
        else
#line 786 "make.module_dep_file.m"
          {
#line 786 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_262_262;
#line 786 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_265_265;
#line 786 "make.module_dep_file.m"
            MR_Word make__module_dep_file__SubModuleList_30;
#line 786 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Specs_31;
#line 786 "make.module_dep_file.m"
            MR_Word make__module_dep_file__SubModuleNames_33;
#line 786 "make.module_dep_file.m"
            MR_Word make__module_dep_file__ModuleImportList_34;
#line 786 "make.module_dep_file.m"
            MR_Word make__module_dep_file__VeryVerbose_38;
#line 786 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Succeeded_40;
#line 786 "make.module_dep_file.m"
            MR_Word make__module_dep_file__MadeTarget_43;
#line 786 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_87_87;
#line 786 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_90_90;
#line 786 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_102_102;
#line 786 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_108_108;
#line 786 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_109_109;
#line 786 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_110_110;
#line 786 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_122_122;
#line 786 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_29_29;
#line 790 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumWarnings_127;
#line 790 "make.module_dep_file.m"
            MR_Integer make__module_dep_file___NumErrors_128;
#line 792 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_32_32;
#line 798 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_90_90;
#line 826 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_42_42;
#line 826 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv12_STATE_VARIABLE_Info_110_110;

#line 786 "make.module_dep_file.m"
            {
#line 786 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__ErrorStream_12, &make__module_dep_file__V_29_29);
            }
#line 787 "make.module_dep_file.m"
            {
#line 787 "make.module_dep_file.m"
              parse_tree__modules__split_into_submodules_5_p_0(make__module_dep_file__ModuleName_8, make__module_dep_file__Items_14, &make__module_dep_file__SubModuleList_30, make__module_dep_file__Specs0_15, &make__module_dep_file__Specs_31);
            }
#line 789 "make.module_dep_file.m"
            {
#line 789 "make.module_dep_file.m"
              mercury__io__set_exit_status_3_p_0((MR_Integer) 0);
            }
#line 790 "make.module_dep_file.m"
            {
#line 790 "make.module_dep_file.m"
              parse_tree__error_util__write_error_specs_8_p_0(make__module_dep_file__Specs_31, make__module_dep_file__Globals_7, (MR_Integer) 0, &make__module_dep_file___NumWarnings_127, (MR_Integer) 0, &make__module_dep_file___NumErrors_128);
            }
#line 792 "make.module_dep_file.m"
            {
#line 792 "make.module_dep_file.m"
              mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_13, &make__module_dep_file__V_32_32);
            }
#line 794 "make.module_dep_file.m"
            {
#line 794 "make.module_dep_file.m"
              mercury__assoc_list__keys_2_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[2], make__module_dep_file__SubModuleList_30, &make__module_dep_file__SubModuleNames_33);
            }
#line 795 "make.module_dep_file.m"
            {
#line 795 "make.module_dep_file.m"
              make__module_dep_file__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 795 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_87_87, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_6[1]));
#line 795 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_87_87, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_1));
#line 795 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 795 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_87_87, 3) = ((MR_Box) (make__module_dep_file__SourceFileName_17));
#line 795 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_87_87, 4) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 795 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_87_87, 5) = ((MR_Box) (make__module_dep_file__SubModuleNames_33));
#line 795 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_87_87, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 795 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_87_87, 7) = ((MR_Box) (make__module_dep_file__Errors_16));
#line 795 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_87_87, 8) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 795 "make.module_dep_file.m"
            }
#line 4083 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_262_262 = (MR_Word) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0;
#line 795 "make.module_dep_file.m"
            {
#line 795 "make.module_dep_file.m"
              mercury__list__map_3_p_0((MR_Word) &make__module_dep_file_scalar_common_2[0], make__module_dep_file__TypeCtorInfo_262_262, make__module_dep_file__V_87_87, make__module_dep_file__SubModuleList_30, &make__module_dep_file__ModuleImportList_34);
            }
#line 4090 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_265_265 = (MR_Word) &make__make__type_ctor_info_make_info_0;
#line 798 "make.module_dep_file.m"
            {
#line 798 "make.module_dep_file.m"
              mercury__list__foldl_4_p_0(make__module_dep_file__TypeCtorInfo_262_262, make__module_dep_file__TypeCtorInfo_265_265, (MR_Word) &make__module_dep_file_scalar_common_2[11], make__module_dep_file__ModuleImportList_34, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_48_48)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_90_90);
            }
#line 798 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_Info_90_90 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_90_90);
#line 808 "make.module_dep_file.m"
            {
#line 808 "make.module_dep_file.m"
              libs__globals__lookup_bool_option_3_p_0(make__module_dep_file__Globals_7, (MR_Integer) 46, &make__module_dep_file__VeryVerbose_38);
            }
#line 809 "make.module_dep_file.m"
            {
#line 809 "make.module_dep_file.m"
              make__module_dep_file__succeeded = mercury__set__is_empty_1_p_0(make__module_dep_file__TypeCtorInfo_254_254, make__module_dep_file__Errors_16);
            }
#line 822 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 811 "make.module_dep_file.m"
              {
#line 811 "make.module_dep_file.m"
                MR_Word make__module_dep_file__Target_39;
#line 811 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_100_100;
#line 811 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_101_101;
#line 811 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_107_107;
#line 814 "make.module_dep_file.m"
                MR_Box make__module_dep_file__conv8_STATE_VARIABLE_Info_102_102;

#line 810 "make.module_dep_file.m"
                {
#line 810 "make.module_dep_file.m"
                  make__module_dep_file__Target_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 810 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__Target_39, 0) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 810 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__Target_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 810 "make.module_dep_file.m"
                }
#line 812 "make.module_dep_file.m"
                {
#line 812 "make.module_dep_file.m"
                  make__util__maybe_make_target_message_to_stream_5_p_0(make__module_dep_file__Globals_7, make__module_dep_file__OldOutputStream_13, make__module_dep_file__Target_39);
                }
#line 817 "make.module_dep_file.m"
                {
#line 817 "make.module_dep_file.m"
                  make__module_dep_file__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 817 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_107_107, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_9[0]));
#line 817 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_107_107, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_3));
#line 817 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_107_107, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 817 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_107_107, 3) = ((MR_Box) (make__module_dep_file__ErrorStream_12));
#line 817 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_107_107, 4) = ((MR_Box) (make__module_dep_file__SourceFileName_17));
#line 817 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_107_107, 5) = ((MR_Box) (make__module_dep_file__SubModuleList_30));
#line 817 "make.module_dep_file.m"
                }
#line 815 "make.module_dep_file.m"
                {
#line 815 "make.module_dep_file.m"
                  make__module_dep_file__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 815 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_100_100, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_3[1]));
#line 815 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_100_100, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_4));
#line 815 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_100_100, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 815 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_100_100, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 815 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_100_100, 4) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 815 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_100_100, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_1[5])));
#line 815 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_100_100, 6) = ((MR_Box) (make__module_dep_file__V_107_107));
#line 815 "make.module_dep_file.m"
                }
#line 820 "make.module_dep_file.m"
                {
#line 820 "make.module_dep_file.m"
                  make__module_dep_file__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 820 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_101_101, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[0]));
#line 820 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_101_101, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_5));
#line 820 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_101_101, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 820 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_101_101, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 820 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_101_101, 4) = ((MR_Box) (make__module_dep_file__SubModuleNames_33));
#line 820 "make.module_dep_file.m"
                }
#line 814 "make.module_dep_file.m"
                {
#line 814 "make.module_dep_file.m"
                  libs__process_util__build_with_check_for_interrupt_8_p_0(make__module_dep_file__TypeCtorInfo_265_265, make__module_dep_file__VeryVerbose_38, make__module_dep_file__V_100_100, make__module_dep_file__V_101_101, &make__module_dep_file__Succeeded_40, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_90_90)), &make__module_dep_file__conv8_STATE_VARIABLE_Info_102_102);
                }
#line 814 "make.module_dep_file.m"
                make__module_dep_file__STATE_VARIABLE_Info_102_102 = ((MR_Word) make__module_dep_file__conv8_STATE_VARIABLE_Info_102_102);
#line 811 "make.module_dep_file.m"
              }
#line 822 "make.module_dep_file.m"
            else
#line 823 "make.module_dep_file.m"
              {
#line 823 "make.module_dep_file.m"
                make__module_dep_file__Succeeded_40 = (MR_Integer) 0;
#line 823 "make.module_dep_file.m"
                make__module_dep_file__STATE_VARIABLE_Info_102_102 = make__module_dep_file__STATE_VARIABLE_Info_90_90;
#line 823 "make.module_dep_file.m"
              }
#line 826 "make.module_dep_file.m"
            {
#line 826 "make.module_dep_file.m"
              make__module_dep_file__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 826 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_108_108, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_11[0]));
#line 826 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_108_108, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_6));
#line 826 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_108_108, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 826 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_108_108, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 826 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_108_108, 4) = ((MR_Box) (make__module_dep_file__ModuleImportList_34));
#line 826 "make.module_dep_file.m"
            }
#line 831 "make.module_dep_file.m"
            {
#line 831 "make.module_dep_file.m"
              make__module_dep_file__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 831 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_109_109, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_10[0]));
#line 831 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_109_109, 1) = ((MR_Box) (make__module_dep_file__make_module_dependencies_6_p_0_7));
#line 831 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_109_109, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 831 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_109_109, 3) = ((MR_Box) (make__module_dep_file__Globals_7));
#line 831 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_109_109, 4) = ((MR_Box) (make__module_dep_file__SubModuleNames_33));
#line 831 "make.module_dep_file.m"
            }
#line 826 "make.module_dep_file.m"
            {
#line 826 "make.module_dep_file.m"
              libs__process_util__build_with_check_for_interrupt_8_p_0(make__module_dep_file__TypeCtorInfo_265_265, make__module_dep_file__VeryVerbose_38, make__module_dep_file__V_108_108, make__module_dep_file__V_109_109, &make__module_dep_file__V_42_42, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_102_102)), &make__module_dep_file__conv12_STATE_VARIABLE_Info_110_110);
            }
#line 826 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_Info_110_110 = ((MR_Word) make__module_dep_file__conv12_STATE_VARIABLE_Info_110_110);
#line 834 "make.module_dep_file.m"
            {
#line 834 "make.module_dep_file.m"
              make__module_dep_file__MadeTarget_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 834 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__MadeTarget_43, 0) = ((MR_Box) (make__module_dep_file__ModuleName_8));
#line 834 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__MadeTarget_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 834 "make.module_dep_file.m"
            }
#line 836 "make.module_dep_file.m"
            {
#line 836 "make.module_dep_file.m"
              make__module_target__record_made_target_8_p_0(make__module_dep_file__Globals_7, make__module_dep_file__MadeTarget_43, (MR_Word) &make__module_dep_file_scalar_common_7[3], make__module_dep_file__Succeeded_40, make__module_dep_file__STATE_VARIABLE_Info_110_110, &make__module_dep_file__STATE_VARIABLE_Info_122_122);
            }
#line 839 "make.module_dep_file.m"
            {
#line 839 "make.module_dep_file.m"
              make__util__unredirect_output_7_p_0(make__module_dep_file__Globals_7, make__module_dep_file__ModuleName_8, make__module_dep_file__ErrorStream_12, make__module_dep_file__STATE_VARIABLE_Info_122_122, make__module_dep_file__STATE_VARIABLE_Info_45);
#line 839 "make.module_dep_file.m"
              return;
            }
#line 786 "make.module_dep_file.m"
          }
#line 752 "make.module_dep_file.m"
      }
#line 749 "make.module_dep_file.m"
  }
#line 746 "make.module_dep_file.m"
}

#line 729 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(
#line 729 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_6,
#line 729 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_7,
#line 729 "make.module_dep_file.m"
  MR_String make__module_dep_file__Msg_8)
#line 729 "make.module_dep_file.m"
{
#line 732 "make.module_dep_file.m"
  {
#line 732 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 732 "make.module_dep_file.m"
    MR_String make__module_dep_file__ModuleDepsFile_10;
#line 732 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_13_13;

#line 734 "make.module_dep_file.m"
    {
#line 734 "make.module_dep_file.m"
      make__module_dep_file__V_13_13 = make__make_module_dep_file_extension_0_f_0();
    }
#line 733 "make.module_dep_file.m"
    {
#line 733 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_6, make__module_dep_file__ModuleName_7, make__module_dep_file__V_13_13, (MR_Integer) 1, &make__module_dep_file__ModuleDepsFile_10);
    }
#line 736 "make.module_dep_file.m"
    {
#line 736 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "Error reading file \140");
    }
#line 737 "make.module_dep_file.m"
    {
#line 737 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__ModuleDepsFile_10);
    }
#line 738 "make.module_dep_file.m"
    {
#line 738 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\', rebuilding: ");
    }
#line 739 "make.module_dep_file.m"
    {
#line 739 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__Msg_8);
    }
#line 740 "make.module_dep_file.m"
    {
#line 740 "make.module_dep_file.m"
      mercury__io__nl_2_p_0();
#line 740 "make.module_dep_file.m"
      return;
    }
#line 732 "make.module_dep_file.m"
  }
#line 729 "make.module_dep_file.m"
}

#line 678 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__check_regular_file_exists_4_p_0(
#line 678 "make.module_dep_file.m"
  MR_String make__module_dep_file__FileName_5,
#line 678 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__FileExists_6)
#line 678 "make.module_dep_file.m"
{
#line 681 "make.module_dep_file.m"
  {
#line 681 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 681 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ResFileType_9;

#line 683 "make.module_dep_file.m"
    {
#line 683 "make.module_dep_file.m"
      mercury__io__file_type_5_p_0((MR_Integer) 1, make__module_dep_file__FileName_5, &make__module_dep_file__ResFileType_9);
    }
#line 704 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__ResFileType_9)) == (MR_mktag((MR_Integer) 1))))
#line 705 "make.module_dep_file.m"
      {
#line 705 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ResFileType_9, (MR_Integer) 0)));
#line 705 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_15_15;
#line 705 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_16_16;
#line 705 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_18_18;

#line 706 "make.module_dep_file.m"
        {
#line 706 "make.module_dep_file.m"
          make__module_dep_file__V_18_18 = mercury__io__error_message_1_f_0(make__module_dep_file__Error_11);
        }
#line 706 "make.module_dep_file.m"
        {
#line 706 "make.module_dep_file.m"
          make__module_dep_file__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) ": ", make__module_dep_file__V_18_18);
        }
#line 706 "make.module_dep_file.m"
        {
#line 706 "make.module_dep_file.m"
          make__module_dep_file__V_15_15 = mercury__string__f_43_43_2_f_0(make__module_dep_file__FileName_5, make__module_dep_file__V_16_16);
        }
#line 706 "make.module_dep_file.m"
        {
#line 706 "make.module_dep_file.m"
          MR_Word base;
#line 706 "make.module_dep_file.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 706 "make.module_dep_file.m"
          *make__module_dep_file__FileExists_6 = base;
#line 706 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_dep_file__V_15_15));
#line 706 "make.module_dep_file.m"
        }
#line 705 "make.module_dep_file.m"
      }
#line 704 "make.module_dep_file.m"
    else
#line 685 "make.module_dep_file.m"
      {
#line 685 "make.module_dep_file.m"
        MR_Word make__module_dep_file__FileType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ResFileType_9, (MR_Integer) 0)));

#line 691 "make.module_dep_file.m"
        if ((((make__module_dep_file__FileType_10 == (MR_Integer) 0)) || ((make__module_dep_file__FileType_10 == (MR_Integer) 10))))
#line 690 "make.module_dep_file.m"
          *make__module_dep_file__FileExists_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 691 "make.module_dep_file.m"
        else
#line 701 "make.module_dep_file.m"
          {
#line 701 "make.module_dep_file.m"
            MR_String make__module_dep_file__V_19_19;

#line 702 "make.module_dep_file.m"
            {
#line 702 "make.module_dep_file.m"
              make__module_dep_file__V_19_19 = mercury__string__f_43_43_2_f_0(make__module_dep_file__FileName_5, (MR_String) ": not a regular file");
            }
#line 702 "make.module_dep_file.m"
            {
#line 702 "make.module_dep_file.m"
              MR_Word base;
#line 702 "make.module_dep_file.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 702 "make.module_dep_file.m"
              *make__module_dep_file__FileExists_6 = base;
#line 702 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (make__module_dep_file__V_19_19));
#line 702 "make.module_dep_file.m"
            }
#line 701 "make.module_dep_file.m"
          }
#line 685 "make.module_dep_file.m"
      }
#line 681 "make.module_dep_file.m"
  }
#line 678 "make.module_dep_file.m"
}

#line 674 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_1(
#line 674 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 674 "make.module_dep_file.m"
{
#line 674 "make.module_dep_file.m"
  {
#line 674 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 674 "make.module_dep_file.m"
    MR_builtin_longjmp((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0, 1);
#line 674 "make.module_dep_file.m"
  }
#line 674 "make.module_dep_file.m"
}

#line 675 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_3(
#line 675 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 675 "make.module_dep_file.m"
{
#line 675 "make.module_dep_file.m"
  {
#line 675 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 675 "make.module_dep_file.m"
    (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5 = ((MR_Word) (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5);
#line 675 "make.module_dep_file.m"
    {
#line 675 "make.module_dep_file.m"
      make__module_dep_file__some_bad_module_dependency_2_p_0_2(make__module_dep_file__env_ptr);
#line 675 "make.module_dep_file.m"
      return;
    }
#line 675 "make.module_dep_file.m"
  }
#line 675 "make.module_dep_file.m"
}

#line 674 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_2(
#line 674 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 674 "make.module_dep_file.m"
{
#line 674 "make.module_dep_file.m"
  {
#line 674 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 674 "make.module_dep_file.m"
    {
#line 676 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_8_8;
#line 676 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_9_9;
#line 676 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_10_10;
#line 676 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_11_11;
#line 676 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_12_12;
#line 676 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_13_13;
#line 676 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_14_14;
#line 676 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_15_15;
#line 676 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_16_16;
#line 676 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_17_17;
#line 676 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_18_18;
#line 676 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_19_19;
#line 676 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_20_20;
#line 676 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_21_21;
#line 676 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_22_22;
#line 676 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_23_23;
#line 676 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_24_24;
#line 676 "make.module_dep_file.m"
      MR_Integer make__module_dep_file__V_25_25;
#line 676 "make.module_dep_file.m"
      MR_Word make__module_dep_file__V_26_26;
#line 676 "make.module_dep_file.m"
      MR_Box make__module_dep_file__conv1_V_29_29;

#line 676 "make.module_dep_file.m"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 0)));
#line 676 "make.module_dep_file.m"
      make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 1)));
#line 676 "make.module_dep_file.m"
      make__module_dep_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 2)));
#line 676 "make.module_dep_file.m"
      make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 3)));
#line 676 "make.module_dep_file.m"
      make__module_dep_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 4)));
#line 676 "make.module_dep_file.m"
      make__module_dep_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 5)));
#line 676 "make.module_dep_file.m"
      make__module_dep_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 6)));
#line 676 "make.module_dep_file.m"
      make__module_dep_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 7)));
#line 676 "make.module_dep_file.m"
      make__module_dep_file__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 8)));
#line 676 "make.module_dep_file.m"
      make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 9)));
#line 676 "make.module_dep_file.m"
      make__module_dep_file__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 10)));
#line 676 "make.module_dep_file.m"
      make__module_dep_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 11)));
#line 676 "make.module_dep_file.m"
      make__module_dep_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 12)));
#line 676 "make.module_dep_file.m"
      make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 13)));
#line 676 "make.module_dep_file.m"
      make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 14)));
#line 676 "make.module_dep_file.m"
      make__module_dep_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 15)));
#line 676 "make.module_dep_file.m"
      make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 16)));
#line 676 "make.module_dep_file.m"
      make__module_dep_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 17)));
#line 676 "make.module_dep_file.m"
      make__module_dep_file__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 18)));
#line 676 "make.module_dep_file.m"
      make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3, (MR_Integer) 19)));
#line 676 "make.module_dep_file.m"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 4593 "make.module_dep_file.c"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28 = (MR_Word) &make__module_dep_file_scalar_common_1[0];
#line 676 "make.module_dep_file.m"
      {
#line 676 "make.module_dep_file.m"
        (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = mercury__map__search_3_p_0((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27, (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_28_28, (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_6_6, ((MR_Box) ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleName_5)), &make__module_dep_file__conv1_V_29_29);
      }
#line 676 "make.module_dep_file.m"
      if ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
#line 676 "make.module_dep_file.m"
        {
#line 676 "make.module_dep_file.m"
          (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_29_29 = ((MR_Word) make__module_dep_file__conv1_V_29_29);
#line 676 "make.module_dep_file.m"
          (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_TRUE;
#line 676 "make.module_dep_file.m"
        }
#line 674 "make.module_dep_file.m"
      if ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
#line 674 "make.module_dep_file.m"
        {
#line 4614 "make.module_dep_file.c"
          (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30 = (MR_Word) &make__module_dep_file_scalar_common_1[0];
#line 676 "make.module_dep_file.m"
          {
#line 676 "make.module_dep_file.m"
            (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeInfo_30_30, ((MR_Box) ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_7_7)), ((MR_Box) ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__V_29_29)));
          }
#line 676 "make.module_dep_file.m"
          if ((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded)
#line 676 "make.module_dep_file.m"
            {
#line 676 "make.module_dep_file.m"
              make__module_dep_file__some_bad_module_dependency_2_p_0_1(make__module_dep_file__env_ptr);
#line 676 "make.module_dep_file.m"
              return;
            }
#line 674 "make.module_dep_file.m"
        }
#line 674 "make.module_dep_file.m"
    }
#line 674 "make.module_dep_file.m"
  }
#line 674 "make.module_dep_file.m"
}

#line 674 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0_4(
#line 674 "make.module_dep_file.m"
  void * make__module_dep_file__env_ptr_arg)
#line 674 "make.module_dep_file.m"
{
#line 674 "make.module_dep_file.m"
  {
#line 674 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s * make__module_dep_file__env_ptr = (struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s *) make__module_dep_file__env_ptr_arg;

#line 674 "make.module_dep_file.m"
    if (MR_builtin_setjmp((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__commit_0) == 0)
#line 674 "make.module_dep_file.m"
      {
#line 4655 "make.module_dep_file.c"
        (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 675 "make.module_dep_file.m"
        {
#line 675 "make.module_dep_file.m"
          mercury__list__member_2_p_1((make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__TypeCtorInfo_27_27, &(make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__conv0_ModuleName_5, (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4, make__module_dep_file__some_bad_module_dependency_2_p_0_3, make__module_dep_file__env_ptr);
        }
#line 674 "make.module_dep_file.m"
        (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_FALSE;
#line 674 "make.module_dep_file.m"
      }
#line 674 "make.module_dep_file.m"
    else
#line 674 "make.module_dep_file.m"
      (make__module_dep_file__env_ptr)->make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded = MR_TRUE;
#line 674 "make.module_dep_file.m"
  }
#line 674 "make.module_dep_file.m"
}

#line 671 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__some_bad_module_dependency_2_p_0(
#line 671 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Info_3,
#line 671 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleNames_4)
#line 671 "make.module_dep_file.m"
{
#line 671 "make.module_dep_file.m"
  {
#line 671 "make.module_dep_file.m"
    struct make__module_dep_file__some_bad_module_dependency_2_p_0_env_0_s make__module_dep_file__env;

#line 671 "make.module_dep_file.m"
    (make__module_dep_file__env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__Info_3 = make__module_dep_file__Info_3;
#line 671 "make.module_dep_file.m"
    (make__module_dep_file__env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__ModuleNames_4 = make__module_dep_file__ModuleNames_4;
#line 674 "make.module_dep_file.m"
    {
#line 674 "make.module_dep_file.m"
      make__module_dep_file__some_bad_module_dependency_2_p_0_4(&make__module_dep_file__env);
    }
#line 674 "make.module_dep_file.m"
    return (make__module_dep_file__env).make__module_dep_file__some_bad_module_dependency_2_p_0_env_0__succeeded;
#line 671 "make.module_dep_file.m"
  }
#line 671 "make.module_dep_file.m"
}

#line 665 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__has_main_term_2_p_0(
#line 665 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 665 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HasMain_4)
#line 665 "make.module_dep_file.m"
{
#line 667 "make.module_dep_file.m"
  {
#line 667 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 667 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_8_8;
#line 667 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_5;
#line 667 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 667 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_13_13;
#line 607 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_12_12;

#line 607 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 607 "make.module_dep_file.m"
      {
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 607 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 607 "make.module_dep_file.m"
          {
#line 607 "make.module_dep_file.m"
            make__module_dep_file__String_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_13_13, (MR_Integer) 0)));
#line 4747 "make.module_dep_file.c"
            make__module_dep_file__TypeInfo_8_8 = (MR_Word) &make__module_dep_file_scalar_common_1[3];
#line 668 "make.module_dep_file.m"
            {
#line 668 "make.module_dep_file.m"
              make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_8_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_7_7)));
            }
#line 667 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 411 "make.module_dep_file.m"
              {
#line 411 "make.module_dep_file.m"
                if ((strcmp(make__module_dep_file__String_5, (MR_String) "no_main") == 0))
#line 414 "make.module_dep_file.m"
                  {
#line 414 "make.module_dep_file.m"
                    *make__module_dep_file__HasMain_4 = (MR_Integer) 1;
#line 414 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 414 "make.module_dep_file.m"
                  }
#line 411 "make.module_dep_file.m"
                else
#line 411 "make.module_dep_file.m"
                  if ((strcmp(make__module_dep_file__String_5, (MR_String) "has_main") == 0))
#line 411 "make.module_dep_file.m"
                    {
#line 411 "make.module_dep_file.m"
                      *make__module_dep_file__HasMain_4 = (MR_Integer) 0;
#line 411 "make.module_dep_file.m"
                      make__module_dep_file__succeeded = MR_TRUE;
#line 411 "make.module_dep_file.m"
                    }
#line 411 "make.module_dep_file.m"
                  else
#line 411 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_FALSE;
#line 411 "make.module_dep_file.m"
              }
#line 607 "make.module_dep_file.m"
          }
#line 607 "make.module_dep_file.m"
      }
#line 667 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 667 "make.module_dep_file.m"
  }
#line 665 "make.module_dep_file.m"
}

#line 658 "make.module_dep_file.m"
static MR_Word MR_CALL 
make__module_dep_file__contains_foreign_code_1_f_0(
#line 658 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__1_1)
#line 658 "make.module_dep_file.m"
{
#line 660 "make.module_dep_file.m"
  {
#line 660 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 660 "make.module_dep_file.m"
    MR_Word make__module_dep_file__HeadVar__2_2;

#line 660 "make.module_dep_file.m"
    if ((make__module_dep_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 660 "make.module_dep_file.m"
      make__module_dep_file__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 660 "make.module_dep_file.m"
    else
#line 661 "make.module_dep_file.m"
      {
#line 661 "make.module_dep_file.m"
        MR_Word make__module_dep_file__LangSet_4;

#line 663 "make.module_dep_file.m"
        {
#line 663 "make.module_dep_file.m"
          make__module_dep_file__LangSet_4 = mercury__set__from_list_1_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, make__module_dep_file__HeadVar__1_1);
        }
#line 661 "make.module_dep_file.m"
        {
#line 661 "make.module_dep_file.m"
          make__module_dep_file__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 661 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__HeadVar__2_2, 0) = ((MR_Box) (make__module_dep_file__LangSet_4));
#line 661 "make.module_dep_file.m"
        }
#line 661 "make.module_dep_file.m"
      }
#line 660 "make.module_dep_file.m"
    return make__module_dep_file__HeadVar__2_2;
#line 660 "make.module_dep_file.m"
  }
#line 658 "make.module_dep_file.m"
}

#line 651 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__contains_foreign_export_term_2_p_0(
#line 651 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 651 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ContainsForeignExport_4)
#line 651 "make.module_dep_file.m"
{
#line 654 "make.module_dep_file.m"
  {
#line 654 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 654 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_8_8;
#line 654 "make.module_dep_file.m"
    MR_String make__module_dep_file__Atom_5;
#line 654 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 654 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_13_13;
#line 607 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_12_12;

#line 607 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 607 "make.module_dep_file.m"
      {
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 607 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 607 "make.module_dep_file.m"
          {
#line 607 "make.module_dep_file.m"
            make__module_dep_file__Atom_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_13_13, (MR_Integer) 0)));
#line 4886 "make.module_dep_file.c"
            make__module_dep_file__TypeInfo_8_8 = (MR_Word) &make__module_dep_file_scalar_common_1[3];
#line 655 "make.module_dep_file.m"
            {
#line 655 "make.module_dep_file.m"
              make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_8_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_7_7)));
            }
#line 654 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 396 "make.module_dep_file.m"
              {
#line 396 "make.module_dep_file.m"
                if ((strcmp(make__module_dep_file__Atom_5, (MR_String) "no_foreign_export") == 0))
#line 399 "make.module_dep_file.m"
                  {
#line 399 "make.module_dep_file.m"
                    *make__module_dep_file__ContainsForeignExport_4 = (MR_Integer) 1;
#line 399 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 399 "make.module_dep_file.m"
                  }
#line 396 "make.module_dep_file.m"
                else
#line 396 "make.module_dep_file.m"
                  if ((strcmp(make__module_dep_file__Atom_5, (MR_String) "contains_foreign_export") == 0))
#line 396 "make.module_dep_file.m"
                    {
#line 396 "make.module_dep_file.m"
                      *make__module_dep_file__ContainsForeignExport_4 = (MR_Integer) 0;
#line 396 "make.module_dep_file.m"
                      make__module_dep_file__succeeded = MR_TRUE;
#line 396 "make.module_dep_file.m"
                    }
#line 396 "make.module_dep_file.m"
                  else
#line 396 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_FALSE;
#line 396 "make.module_dep_file.m"
              }
#line 607 "make.module_dep_file.m"
          }
#line 607 "make.module_dep_file.m"
      }
#line 654 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 654 "make.module_dep_file.m"
  }
#line 651 "make.module_dep_file.m"
}

#line 642 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_include_term_2_p_0(
#line 642 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 642 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignInclude_4)
#line 642 "make.module_dep_file.m"
{
#line 645 "make.module_dep_file.m"
  {
#line 645 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 645 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_15_15;
#line 645 "make.module_dep_file.m"
    MR_Word make__module_dep_file__LanguageTerm_5;
#line 645 "make.module_dep_file.m"
    MR_Word make__module_dep_file__FileNameTerm_6;
#line 645 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Language_7;
#line 645 "make.module_dep_file.m"
    MR_String make__module_dep_file__FileName_8;
#line 645 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_10_10;
#line 645 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_11_11;
#line 645 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_13_13;
#line 645 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_14_14;
#line 645 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_20_20;
#line 645 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_23;
#line 645 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27;
#line 645 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28;
#line 645 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_32_32;
#line 645 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_33_33;
#line 607 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_19_19;
#line 602 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_26_26;
#line 602 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_31_31;

#line 607 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 607 "make.module_dep_file.m"
      {
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_20_20)) == (MR_mktag((MR_Integer) 0)));
#line 607 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 607 "make.module_dep_file.m"
          {
#line 607 "make.module_dep_file.m"
            make__module_dep_file__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_20_20, (MR_Integer) 0)));
#line 646 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "-", make__module_dep_file__V_13_13) == 0);
#line 645 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 645 "make.module_dep_file.m"
              {
#line 646 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 646 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 646 "make.module_dep_file.m"
                  {
#line 646 "make.module_dep_file.m"
                    make__module_dep_file__LanguageTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 0)));
#line 646 "make.module_dep_file.m"
                    make__module_dep_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 1)));
#line 646 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 646 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 646 "make.module_dep_file.m"
                      {
#line 646 "make.module_dep_file.m"
                        make__module_dep_file__FileNameTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 0)));
#line 646 "make.module_dep_file.m"
                        make__module_dep_file__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 1)));
#line 5030 "make.module_dep_file.c"
                        make__module_dep_file__TypeInfo_15_15 = (MR_Word) &make__module_dep_file_scalar_common_1[3];
#line 646 "make.module_dep_file.m"
                        {
#line 646 "make.module_dep_file.m"
                          make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_15_15, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_14_14)));
                        }
#line 645 "make.module_dep_file.m"
                        if (make__module_dep_file__succeeded)
#line 645 "make.module_dep_file.m"
                          {
#line 602 "make.module_dep_file.m"
                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__LanguageTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 602 "make.module_dep_file.m"
                            if (make__module_dep_file__succeeded)
#line 602 "make.module_dep_file.m"
                              {
#line 602 "make.module_dep_file.m"
                                make__module_dep_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 0)));
#line 602 "make.module_dep_file.m"
                                make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 1)));
#line 602 "make.module_dep_file.m"
                                make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 2)));
#line 602 "make.module_dep_file.m"
                                make__module_dep_file__succeeded = (make__module_dep_file__V_28_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "make.module_dep_file.m"
                                if (make__module_dep_file__succeeded)
#line 645 "make.module_dep_file.m"
                                  {
#line 602 "make.module_dep_file.m"
                                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_27_27)) == (MR_mktag((MR_Integer) 2)));
#line 602 "make.module_dep_file.m"
                                    if (make__module_dep_file__succeeded)
#line 602 "make.module_dep_file.m"
                                      {
#line 602 "make.module_dep_file.m"
                                        make__module_dep_file__String_23 = ((MR_String) (MR_hl_field(MR_mktag(2), make__module_dep_file__V_27_27, (MR_Integer) 0)));
#line 630 "make.module_dep_file.m"
                                        {
#line 630 "make.module_dep_file.m"
                                          make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__String_23, &make__module_dep_file__Language_7);
                                        }
#line 645 "make.module_dep_file.m"
                                        if (make__module_dep_file__succeeded)
#line 645 "make.module_dep_file.m"
                                          {
#line 602 "make.module_dep_file.m"
                                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__FileNameTerm_6)) == (MR_mktag((MR_Integer) 0)));
#line 602 "make.module_dep_file.m"
                                            if (make__module_dep_file__succeeded)
#line 602 "make.module_dep_file.m"
                                              {
#line 602 "make.module_dep_file.m"
                                                make__module_dep_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FileNameTerm_6, (MR_Integer) 0)));
#line 602 "make.module_dep_file.m"
                                                make__module_dep_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FileNameTerm_6, (MR_Integer) 1)));
#line 602 "make.module_dep_file.m"
                                                make__module_dep_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__FileNameTerm_6, (MR_Integer) 2)));
#line 602 "make.module_dep_file.m"
                                                make__module_dep_file__succeeded = (make__module_dep_file__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "make.module_dep_file.m"
                                                if (make__module_dep_file__succeeded)
#line 645 "make.module_dep_file.m"
                                                  {
#line 602 "make.module_dep_file.m"
                                                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_32_32)) == (MR_mktag((MR_Integer) 2)));
#line 602 "make.module_dep_file.m"
                                                    if (make__module_dep_file__succeeded)
#line 602 "make.module_dep_file.m"
                                                      {
#line 602 "make.module_dep_file.m"
                                                        make__module_dep_file__FileName_8 = ((MR_String) (MR_hl_field(MR_mktag(2), make__module_dep_file__V_32_32, (MR_Integer) 0)));
#line 649 "make.module_dep_file.m"
                                                        {
#line 649 "make.module_dep_file.m"
                                                          MR_Word base;
#line 649 "make.module_dep_file.m"
                                                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 649 "make.module_dep_file.m"
                                                          *make__module_dep_file__ForeignInclude_4 = base;
#line 649 "make.module_dep_file.m"
                                                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__Language_7));
#line 649 "make.module_dep_file.m"
                                                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__FileName_8));
#line 649 "make.module_dep_file.m"
                                                        }
#line 649 "make.module_dep_file.m"
                                                        make__module_dep_file__succeeded = MR_TRUE;
#line 602 "make.module_dep_file.m"
                                                      }
#line 645 "make.module_dep_file.m"
                                                  }
#line 602 "make.module_dep_file.m"
                                              }
#line 645 "make.module_dep_file.m"
                                          }
#line 602 "make.module_dep_file.m"
                                      }
#line 645 "make.module_dep_file.m"
                                  }
#line 602 "make.module_dep_file.m"
                              }
#line 645 "make.module_dep_file.m"
                          }
#line 646 "make.module_dep_file.m"
                      }
#line 646 "make.module_dep_file.m"
                  }
#line 645 "make.module_dep_file.m"
              }
#line 607 "make.module_dep_file.m"
          }
#line 607 "make.module_dep_file.m"
      }
#line 645 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 645 "make.module_dep_file.m"
  }
#line 642 "make.module_dep_file.m"
}

#line 632 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_import_term_2_p_0(
#line 632 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 632 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__ForeignImport_4)
#line 632 "make.module_dep_file.m"
{
#line 635 "make.module_dep_file.m"
  {
#line 635 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 635 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_14_14;
#line 635 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_17_17;
#line 635 "make.module_dep_file.m"
    MR_Word make__module_dep_file__LanguageTerm_5;
#line 635 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImportedModuleTerm_6;
#line 635 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Language_7;
#line 635 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImportedModuleName_8;
#line 635 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_10_10;
#line 635 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_11_11;
#line 635 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_13_13;
#line 635 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_15_15;
#line 635 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_16_16;
#line 635 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_22_22;
#line 635 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_25;
#line 635 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_29_29;
#line 635 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_30_30;
#line 607 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_21_21;
#line 602 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28;

#line 607 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 607 "make.module_dep_file.m"
      {
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_22_22)) == (MR_mktag((MR_Integer) 0)));
#line 607 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 607 "make.module_dep_file.m"
          {
#line 607 "make.module_dep_file.m"
            make__module_dep_file__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_22_22, (MR_Integer) 0)));
#line 636 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "-", make__module_dep_file__V_15_15) == 0);
#line 635 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 635 "make.module_dep_file.m"
              {
#line 636 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 636 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 636 "make.module_dep_file.m"
                  {
#line 636 "make.module_dep_file.m"
                    make__module_dep_file__LanguageTerm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 0)));
#line 636 "make.module_dep_file.m"
                    make__module_dep_file__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_10_10, (MR_Integer) 1)));
#line 636 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 636 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 636 "make.module_dep_file.m"
                      {
#line 636 "make.module_dep_file.m"
                        make__module_dep_file__ImportedModuleTerm_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 0)));
#line 636 "make.module_dep_file.m"
                        make__module_dep_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_11_11, (MR_Integer) 1)));
#line 5243 "make.module_dep_file.c"
                        make__module_dep_file__TypeInfo_17_17 = (MR_Word) &make__module_dep_file_scalar_common_1[3];
#line 636 "make.module_dep_file.m"
                        {
#line 636 "make.module_dep_file.m"
                          make__module_dep_file__succeeded = mercury__builtin__unify_2_p_0(make__module_dep_file__TypeInfo_17_17, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (make__module_dep_file__V_16_16)));
                        }
#line 635 "make.module_dep_file.m"
                        if (make__module_dep_file__succeeded)
#line 635 "make.module_dep_file.m"
                          {
#line 602 "make.module_dep_file.m"
                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__LanguageTerm_5)) == (MR_mktag((MR_Integer) 0)));
#line 602 "make.module_dep_file.m"
                            if (make__module_dep_file__succeeded)
#line 602 "make.module_dep_file.m"
                              {
#line 602 "make.module_dep_file.m"
                                make__module_dep_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 0)));
#line 602 "make.module_dep_file.m"
                                make__module_dep_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 1)));
#line 602 "make.module_dep_file.m"
                                make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__LanguageTerm_5, (MR_Integer) 2)));
#line 602 "make.module_dep_file.m"
                                make__module_dep_file__succeeded = (make__module_dep_file__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 635 "make.module_dep_file.m"
                                if (make__module_dep_file__succeeded)
#line 635 "make.module_dep_file.m"
                                  {
#line 602 "make.module_dep_file.m"
                                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_29_29)) == (MR_mktag((MR_Integer) 2)));
#line 602 "make.module_dep_file.m"
                                    if (make__module_dep_file__succeeded)
#line 602 "make.module_dep_file.m"
                                      {
#line 602 "make.module_dep_file.m"
                                        make__module_dep_file__String_25 = ((MR_String) (MR_hl_field(MR_mktag(2), make__module_dep_file__V_29_29, (MR_Integer) 0)));
#line 630 "make.module_dep_file.m"
                                        {
#line 630 "make.module_dep_file.m"
                                          make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__String_25, &make__module_dep_file__Language_7);
                                        }
#line 635 "make.module_dep_file.m"
                                        if (make__module_dep_file__succeeded)
#line 635 "make.module_dep_file.m"
                                          {
#line 5289 "make.module_dep_file.c"
                                            make__module_dep_file__TypeCtorInfo_14_14 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 638 "make.module_dep_file.m"
                                            {
#line 638 "make.module_dep_file.m"
                                              make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(make__module_dep_file__TypeCtorInfo_14_14, make__module_dep_file__ImportedModuleTerm_6, &make__module_dep_file__ImportedModuleName_8);
                                            }
#line 635 "make.module_dep_file.m"
                                            if (make__module_dep_file__succeeded)
#line 635 "make.module_dep_file.m"
                                              {
#line 640 "make.module_dep_file.m"
                                                {
#line 640 "make.module_dep_file.m"
                                                  make__module_dep_file__V_13_13 = mercury__term__context_init_0_f_0();
                                                }
#line 639 "make.module_dep_file.m"
                                                {
#line 639 "make.module_dep_file.m"
                                                  MR_Word base;
#line 639 "make.module_dep_file.m"
                                                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 639 "make.module_dep_file.m"
                                                  *make__module_dep_file__ForeignImport_4 = base;
#line 639 "make.module_dep_file.m"
                                                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__Language_7));
#line 639 "make.module_dep_file.m"
                                                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__ImportedModuleName_8));
#line 639 "make.module_dep_file.m"
                                                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_13_13));
#line 639 "make.module_dep_file.m"
                                                }
#line 639 "make.module_dep_file.m"
                                                make__module_dep_file__succeeded = MR_TRUE;
#line 635 "make.module_dep_file.m"
                                              }
#line 635 "make.module_dep_file.m"
                                          }
#line 602 "make.module_dep_file.m"
                                      }
#line 635 "make.module_dep_file.m"
                                  }
#line 602 "make.module_dep_file.m"
                              }
#line 635 "make.module_dep_file.m"
                          }
#line 636 "make.module_dep_file.m"
                      }
#line 636 "make.module_dep_file.m"
                  }
#line 635 "make.module_dep_file.m"
              }
#line 607 "make.module_dep_file.m"
          }
#line 607 "make.module_dep_file.m"
      }
#line 635 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 635 "make.module_dep_file.m"
  }
#line 632 "make.module_dep_file.m"
}

#line 626 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__foreign_language_term_2_p_0(
#line 626 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 626 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Lang_4)
#line 626 "make.module_dep_file.m"
{
#line 628 "make.module_dep_file.m"
  {
#line 628 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 628 "make.module_dep_file.m"
    MR_String make__module_dep_file__String_5;
#line 628 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_9_9;
#line 628 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_10_10;
#line 602 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;

#line 602 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 602 "make.module_dep_file.m"
      {
#line 602 "make.module_dep_file.m"
        make__module_dep_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 602 "make.module_dep_file.m"
        make__module_dep_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 602 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 602 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_9_9)) == (MR_mktag((MR_Integer) 2)));
#line 602 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 602 "make.module_dep_file.m"
          {
#line 602 "make.module_dep_file.m"
            make__module_dep_file__String_5 = ((MR_String) (MR_hl_field(MR_mktag(2), make__module_dep_file__V_9_9, (MR_Integer) 0)));
#line 602 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_10_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 628 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 630 "make.module_dep_file.m"
              {
#line 630 "make.module_dep_file.m"
                return make__module_dep_file__succeeded = libs__globals__convert_foreign_language_2_p_0(make__module_dep_file__String_5, make__module_dep_file__Lang_4);
              }
#line 602 "make.module_dep_file.m"
          }
#line 602 "make.module_dep_file.m"
      }
#line 628 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 628 "make.module_dep_file.m"
  }
#line 626 "make.module_dep_file.m"
}

#line 621 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__fact_dep_term_2_p_0(
#line 621 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 621 "make.module_dep_file.m"
  MR_String * make__module_dep_file__FactDep_4)
#line 621 "make.module_dep_file.m"
{
#line 601 "make.module_dep_file.m"
  {
#line 601 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 601 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;
#line 601 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_9_9;
#line 602 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;

#line 602 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 602 "make.module_dep_file.m"
      {
#line 602 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 602 "make.module_dep_file.m"
        make__module_dep_file__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 602 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 602 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_8_8)) == (MR_mktag((MR_Integer) 2)));
#line 602 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 602 "make.module_dep_file.m"
          {
#line 602 "make.module_dep_file.m"
            *make__module_dep_file__FactDep_4 = ((MR_String) (MR_hl_field(MR_mktag(2), make__module_dep_file__V_8_8, (MR_Integer) 0)));
#line 602 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "make.module_dep_file.m"
          }
#line 602 "make.module_dep_file.m"
      }
#line 601 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 601 "make.module_dep_file.m"
  }
#line 621 "make.module_dep_file.m"
}

#line 5463 "make.module_dep_file.c"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0_1(
#line 5466 "make.module_dep_file.c"
  MR_Box make__module_dep_file__closure_arg,
#line 5468 "make.module_dep_file.c"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 5470 "make.module_dep_file.c"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 5472 "make.module_dep_file.c"
{
#line 5474 "make.module_dep_file.c"
  {
#line 5476 "make.module_dep_file.c"
    MR_bool make__module_dep_file__succeeded;
#line 5478 "make.module_dep_file.c"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 5480 "make.module_dep_file.c"
    MR_Word make__module_dep_file__conv0_HeadVar__2_7;

#line 5483 "make.module_dep_file.c"
    {
#line 5485 "make.module_dep_file.c"
      make__module_dep_file__succeeded = make__module_dep_file__IntroducedFrom__pred__sym_names_term__619__1_2_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1), &make__module_dep_file__conv0_HeadVar__2_7);
    }
#line 5488 "make.module_dep_file.c"
    if (make__module_dep_file__succeeded)
#line 5490 "make.module_dep_file.c"
      {
#line 5492 "make.module_dep_file.c"
        *make__module_dep_file__wrapper_arg_2 = ((MR_Box) (make__module_dep_file__conv0_HeadVar__2_7));
#line 5494 "make.module_dep_file.c"
        make__module_dep_file__succeeded = MR_TRUE;
#line 5496 "make.module_dep_file.c"
      }
#line 5498 "make.module_dep_file.c"
    return make__module_dep_file__succeeded;
#line 5500 "make.module_dep_file.c"
  }
#line 5502 "make.module_dep_file.c"
}

#line 616 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__sym_names_term_2_p_0(
#line 616 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 616 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__SymNames_4)
#line 616 "make.module_dep_file.m"
{
#line 618 "make.module_dep_file.m"
  {
#line 618 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 618 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeInfo_10_17;
#line 618 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ArgTerms_14;
#line 618 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_18_18;
#line 618 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_23_23;
#line 607 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_22_22;

#line 607 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 607 "make.module_dep_file.m"
      {
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__ArgTerms_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_23_23)) == (MR_mktag((MR_Integer) 0)));
#line 607 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 607 "make.module_dep_file.m"
          {
#line 607 "make.module_dep_file.m"
            make__module_dep_file__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_23_23, (MR_Integer) 0)));
#line 613 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (strcmp((MR_String) "{}", make__module_dep_file__V_18_18) == 0);
#line 618 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 618 "make.module_dep_file.m"
              {
#line 5553 "make.module_dep_file.c"
                make__module_dep_file__TypeInfo_10_17 = (MR_Word) &make__module_dep_file_scalar_common_1[1];
#line 614 "make.module_dep_file.m"
                {
#line 614 "make.module_dep_file.m"
                  return make__module_dep_file__succeeded = mercury__list__map_3_p_2(make__module_dep_file__TypeInfo_10_17, (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_2[10], make__module_dep_file__ArgTerms_14, make__module_dep_file__SymNames_4);
                }
#line 618 "make.module_dep_file.m"
              }
#line 607 "make.module_dep_file.m"
          }
#line 607 "make.module_dep_file.m"
      }
#line 618 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 618 "make.module_dep_file.m"
  }
#line 616 "make.module_dep_file.m"
}

#line 604 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__atom_term_3_p_0(
#line 604 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_4,
#line 604 "make.module_dep_file.m"
  MR_String * make__module_dep_file__Atom_5,
#line 604 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Args_6)
#line 604 "make.module_dep_file.m"
{
#line 606 "make.module_dep_file.m"
  {
#line 606 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_4)) == (MR_mktag((MR_Integer) 0)));
#line 606 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;
#line 607 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;

#line 607 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 607 "make.module_dep_file.m"
      {
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_4, (MR_Integer) 0)));
#line 607 "make.module_dep_file.m"
        *make__module_dep_file__Args_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_4, (MR_Integer) 1)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_4, (MR_Integer) 2)));
#line 607 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_8_8)) == (MR_mktag((MR_Integer) 0)));
#line 607 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 607 "make.module_dep_file.m"
          *make__module_dep_file__Atom_5 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__V_8_8, (MR_Integer) 0)));
#line 607 "make.module_dep_file.m"
      }
#line 606 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 606 "make.module_dep_file.m"
  }
#line 604 "make.module_dep_file.m"
}

#line 599 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__string_term_2_p_0(
#line 599 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 599 "make.module_dep_file.m"
  MR_String * make__module_dep_file__String_4)
#line 599 "make.module_dep_file.m"
{
#line 601 "make.module_dep_file.m"
  {
#line 601 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 601 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_6_6;
#line 601 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 602 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_5_5;

#line 602 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 602 "make.module_dep_file.m"
      {
#line 602 "make.module_dep_file.m"
        make__module_dep_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 602 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 602 "make.module_dep_file.m"
        make__module_dep_file__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 602 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_6_6)) == (MR_mktag((MR_Integer) 2)));
#line 602 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 602 "make.module_dep_file.m"
          {
#line 602 "make.module_dep_file.m"
            *make__module_dep_file__String_4 = ((MR_String) (MR_hl_field(MR_mktag(2), make__module_dep_file__V_6_6, (MR_Integer) 0)));
#line 602 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "make.module_dep_file.m"
          }
#line 602 "make.module_dep_file.m"
      }
#line 601 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 601 "make.module_dep_file.m"
  }
#line 599 "make.module_dep_file.m"
}

#line 593 "make.module_dep_file.m"
static MR_bool MR_CALL 
make__module_dep_file__version_number_term_2_p_0(
#line 593 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_3,
#line 593 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Version_4)
#line 593 "make.module_dep_file.m"
{
#line 595 "make.module_dep_file.m"
  {
#line 595 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__Term_3)) == (MR_mktag((MR_Integer) 0)));
#line 595 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__Int_5;
#line 595 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_7_7;
#line 595 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8;
#line 596 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_6_6;

#line 596 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 596 "make.module_dep_file.m"
      {
#line 596 "make.module_dep_file.m"
        make__module_dep_file__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 0)));
#line 596 "make.module_dep_file.m"
        make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 1)));
#line 596 "make.module_dep_file.m"
        make__module_dep_file__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Term_3, (MR_Integer) 2)));
#line 596 "make.module_dep_file.m"
        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 596 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 596 "make.module_dep_file.m"
          {
#line 596 "make.module_dep_file.m"
            make__module_dep_file__Int_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_7_7, (MR_Integer) 0)));
#line 596 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 595 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 80 "make.module_dep_file.m"
              {
#line 80 "make.module_dep_file.m"
                if ((make__module_dep_file__Int_5 == (MR_Integer) 1))
#line 80 "make.module_dep_file.m"
                  {
#line 80 "make.module_dep_file.m"
                    *make__module_dep_file__Version_4 = (MR_Integer) 0;
#line 80 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_TRUE;
#line 80 "make.module_dep_file.m"
                  }
#line 80 "make.module_dep_file.m"
                else
#line 80 "make.module_dep_file.m"
                  if ((make__module_dep_file__Int_5 == (MR_Integer) 2))
#line 81 "make.module_dep_file.m"
                    {
#line 81 "make.module_dep_file.m"
                      *make__module_dep_file__Version_4 = (MR_Integer) 1;
#line 81 "make.module_dep_file.m"
                      make__module_dep_file__succeeded = MR_TRUE;
#line 81 "make.module_dep_file.m"
                    }
#line 80 "make.module_dep_file.m"
                  else
#line 80 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = MR_FALSE;
#line 80 "make.module_dep_file.m"
              }
#line 596 "make.module_dep_file.m"
          }
#line 596 "make.module_dep_file.m"
      }
#line 595 "make.module_dep_file.m"
    return make__module_dep_file__succeeded;
#line 595 "make.module_dep_file.m"
  }
#line 593 "make.module_dep_file.m"
}

#line 577 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_2(
#line 577 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 577 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 577 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 577 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 577 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 577 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 577 "make.module_dep_file.m"
{
#line 577 "make.module_dep_file.m"
  {
#line 577 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 577 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv3_STATE_VARIABLE_Info_29;

#line 577 "make.module_dep_file.m"
    {
#line 577 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv3_STATE_VARIABLE_Info_29);
    }
#line 577 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv3_STATE_VARIABLE_Info_29));
#line 577 "make.module_dep_file.m"
  }
#line 577 "make.module_dep_file.m"
}

#line 577 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0_1(
#line 577 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 577 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 577 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 577 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 577 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 577 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5)
#line 577 "make.module_dep_file.m"
{
#line 577 "make.module_dep_file.m"
  {
#line 577 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 577 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv0_STATE_VARIABLE_Info_29;

#line 577 "make.module_dep_file.m"
    {
#line 577 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv0_STATE_VARIABLE_Info_29);
    }
#line 577 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv0_STATE_VARIABLE_Info_29));
#line 577 "make.module_dep_file.m"
  }
#line 577 "make.module_dep_file.m"
}

#line 480 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_3_11_p_0(
#line 480 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_12,
#line 480 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_13,
#line 480 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_14,
#line 480 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDir_15,
#line 480 "make.module_dep_file.m"
  MR_String make__module_dep_file__ModuleDepFile_16,
#line 480 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Term_17,
#line 480 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__Result_18,
#line 480 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_65,
#line 480 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_66)
#line 480 "make.module_dep_file.m"
{
#line 589 "make.module_dep_file.m"
  {
#line 589 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 589 "make.module_dep_file.m"
    MR_String make__module_dep_file__SourceFileName_37;
#line 589 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SourceFileModuleName_38;
#line 589 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Parents_39;
#line 589 "make.module_dep_file.m"
    MR_Word make__module_dep_file__IntDeps_40;
#line 589 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImplDeps_41;
#line 589 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Children_42;
#line 589 "make.module_dep_file.m"
    MR_Word make__module_dep_file__NestedChildren_43;
#line 589 "make.module_dep_file.m"
    MR_Word make__module_dep_file__FactDeps_44;
#line 589 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignLanguages_45;
#line 589 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImports_46;
#line 589 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ContainsForeignExport_47;
#line 589 "make.module_dep_file.m"
    MR_Word make__module_dep_file__HasMain_48;
#line 589 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignIncludes_49;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_138_138;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleArgs_21;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__VersionNumberTerm_22;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SourceFileTerm_23;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SourceFileModuleNameTerm_24;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ParentsTerm_25;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__IntDepsTerm_26;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ImplDepsTerm_27;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ChildrenTerm_28;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__NestedChildrenTerm_29;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__FactDepsTerm_30;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignLanguagesTerm_31;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImportsTerm_32;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ContainsForeignExportTerm_33;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__HasMainTerm_34;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleArgsTail_35;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Version_36;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_70_70;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_71_71;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_72_72;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_73_73;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_74_74;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_75_75;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_76_76;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_77_77;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_78_78;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_79_79;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_80_80;
#line 487 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_81_81;
#line 487 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_164_164;

#line 487 "make.module_dep_file.m"
    {
#line 487 "make.module_dep_file.m"
      make__module_dep_file__succeeded = make__module_dep_file__atom_term_3_p_0(make__module_dep_file__Term_17, &make__module_dep_file__V_164_164, &make__module_dep_file__ModuleArgs_21);
    }
#line 487 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 487 "make.module_dep_file.m"
      {
#line 487 "make.module_dep_file.m"
        make__module_dep_file__succeeded = (strcmp((MR_String) "module", make__module_dep_file__V_164_164) == 0);
#line 487 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 487 "make.module_dep_file.m"
          {
#line 489 "make.module_dep_file.m"
            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__ModuleArgs_21)) == (MR_mktag((MR_Integer) 1)));
#line 489 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 489 "make.module_dep_file.m"
              {
#line 489 "make.module_dep_file.m"
                make__module_dep_file__VersionNumberTerm_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgs_21, (MR_Integer) 0)));
#line 489 "make.module_dep_file.m"
                make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgs_21, (MR_Integer) 1)));
#line 490 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_70_70)) == (MR_mktag((MR_Integer) 1)));
#line 490 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 490 "make.module_dep_file.m"
                  {
#line 490 "make.module_dep_file.m"
                    make__module_dep_file__SourceFileTerm_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_70_70, (MR_Integer) 0)));
#line 490 "make.module_dep_file.m"
                    make__module_dep_file__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_70_70, (MR_Integer) 1)));
#line 491 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_71_71)) == (MR_mktag((MR_Integer) 1)));
#line 491 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 491 "make.module_dep_file.m"
                      {
#line 491 "make.module_dep_file.m"
                        make__module_dep_file__SourceFileModuleNameTerm_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_71_71, (MR_Integer) 0)));
#line 491 "make.module_dep_file.m"
                        make__module_dep_file__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_71_71, (MR_Integer) 1)));
#line 492 "make.module_dep_file.m"
                        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_72_72)) == (MR_mktag((MR_Integer) 1)));
#line 492 "make.module_dep_file.m"
                        if (make__module_dep_file__succeeded)
#line 492 "make.module_dep_file.m"
                          {
#line 492 "make.module_dep_file.m"
                            make__module_dep_file__ParentsTerm_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_72_72, (MR_Integer) 0)));
#line 492 "make.module_dep_file.m"
                            make__module_dep_file__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_72_72, (MR_Integer) 1)));
#line 493 "make.module_dep_file.m"
                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_73_73)) == (MR_mktag((MR_Integer) 1)));
#line 493 "make.module_dep_file.m"
                            if (make__module_dep_file__succeeded)
#line 493 "make.module_dep_file.m"
                              {
#line 493 "make.module_dep_file.m"
                                make__module_dep_file__IntDepsTerm_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_73_73, (MR_Integer) 0)));
#line 493 "make.module_dep_file.m"
                                make__module_dep_file__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_73_73, (MR_Integer) 1)));
#line 494 "make.module_dep_file.m"
                                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_74_74)) == (MR_mktag((MR_Integer) 1)));
#line 494 "make.module_dep_file.m"
                                if (make__module_dep_file__succeeded)
#line 494 "make.module_dep_file.m"
                                  {
#line 494 "make.module_dep_file.m"
                                    make__module_dep_file__ImplDepsTerm_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_74_74, (MR_Integer) 0)));
#line 494 "make.module_dep_file.m"
                                    make__module_dep_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_74_74, (MR_Integer) 1)));
#line 495 "make.module_dep_file.m"
                                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_75_75)) == (MR_mktag((MR_Integer) 1)));
#line 495 "make.module_dep_file.m"
                                    if (make__module_dep_file__succeeded)
#line 495 "make.module_dep_file.m"
                                      {
#line 495 "make.module_dep_file.m"
                                        make__module_dep_file__ChildrenTerm_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_75_75, (MR_Integer) 0)));
#line 495 "make.module_dep_file.m"
                                        make__module_dep_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_75_75, (MR_Integer) 1)));
#line 496 "make.module_dep_file.m"
                                        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_76_76)) == (MR_mktag((MR_Integer) 1)));
#line 496 "make.module_dep_file.m"
                                        if (make__module_dep_file__succeeded)
#line 496 "make.module_dep_file.m"
                                          {
#line 496 "make.module_dep_file.m"
                                            make__module_dep_file__NestedChildrenTerm_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_76_76, (MR_Integer) 0)));
#line 496 "make.module_dep_file.m"
                                            make__module_dep_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_76_76, (MR_Integer) 1)));
#line 497 "make.module_dep_file.m"
                                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_77_77)) == (MR_mktag((MR_Integer) 1)));
#line 497 "make.module_dep_file.m"
                                            if (make__module_dep_file__succeeded)
#line 497 "make.module_dep_file.m"
                                              {
#line 497 "make.module_dep_file.m"
                                                make__module_dep_file__FactDepsTerm_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_77_77, (MR_Integer) 0)));
#line 497 "make.module_dep_file.m"
                                                make__module_dep_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_77_77, (MR_Integer) 1)));
#line 498 "make.module_dep_file.m"
                                                make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_78_78)) == (MR_mktag((MR_Integer) 1)));
#line 498 "make.module_dep_file.m"
                                                if (make__module_dep_file__succeeded)
#line 498 "make.module_dep_file.m"
                                                  {
#line 498 "make.module_dep_file.m"
                                                    make__module_dep_file__ForeignLanguagesTerm_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_78_78, (MR_Integer) 0)));
#line 498 "make.module_dep_file.m"
                                                    make__module_dep_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_78_78, (MR_Integer) 1)));
#line 499 "make.module_dep_file.m"
                                                    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_79_79)) == (MR_mktag((MR_Integer) 1)));
#line 499 "make.module_dep_file.m"
                                                    if (make__module_dep_file__succeeded)
#line 499 "make.module_dep_file.m"
                                                      {
#line 499 "make.module_dep_file.m"
                                                        make__module_dep_file__ForeignImportsTerm_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_79_79, (MR_Integer) 0)));
#line 499 "make.module_dep_file.m"
                                                        make__module_dep_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_79_79, (MR_Integer) 1)));
#line 500 "make.module_dep_file.m"
                                                        make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_80_80)) == (MR_mktag((MR_Integer) 1)));
#line 500 "make.module_dep_file.m"
                                                        if (make__module_dep_file__succeeded)
#line 500 "make.module_dep_file.m"
                                                          {
#line 500 "make.module_dep_file.m"
                                                            make__module_dep_file__ContainsForeignExportTerm_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_80_80, (MR_Integer) 0)));
#line 500 "make.module_dep_file.m"
                                                            make__module_dep_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_80_80, (MR_Integer) 1)));
#line 502 "make.module_dep_file.m"
                                                            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_81_81)) == (MR_mktag((MR_Integer) 1)));
#line 502 "make.module_dep_file.m"
                                                            if (make__module_dep_file__succeeded)
#line 502 "make.module_dep_file.m"
                                                              {
#line 502 "make.module_dep_file.m"
                                                                make__module_dep_file__HasMainTerm_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_81_81, (MR_Integer) 0)));
#line 502 "make.module_dep_file.m"
                                                                make__module_dep_file__ModuleArgsTail_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_81_81, (MR_Integer) 1)));
#line 505 "make.module_dep_file.m"
                                                                {
#line 505 "make.module_dep_file.m"
                                                                  make__module_dep_file__succeeded = make__module_dep_file__version_number_term_2_p_0(make__module_dep_file__VersionNumberTerm_22, &make__module_dep_file__Version_36);
                                                                }
#line 487 "make.module_dep_file.m"
                                                                if (make__module_dep_file__succeeded)
#line 487 "make.module_dep_file.m"
                                                                  {
#line 506 "make.module_dep_file.m"
                                                                    {
#line 506 "make.module_dep_file.m"
                                                                      make__module_dep_file__succeeded = make__module_dep_file__string_term_2_p_0(make__module_dep_file__SourceFileTerm_23, &make__module_dep_file__SourceFileName_37);
                                                                    }
#line 487 "make.module_dep_file.m"
                                                                    if (make__module_dep_file__succeeded)
#line 487 "make.module_dep_file.m"
                                                                      {
#line 6103 "make.module_dep_file.c"
                                                                        make__module_dep_file__TypeCtorInfo_138_138 = (MR_Word) &mercury__term__term__type_ctor_info_generic_0;
#line 507 "make.module_dep_file.m"
                                                                        {
#line 507 "make.module_dep_file.m"
                                                                          make__module_dep_file__succeeded = parse_tree__prog_io_sym_name__try_parse_sym_name_and_no_args_2_p_0(make__module_dep_file__TypeCtorInfo_138_138, make__module_dep_file__SourceFileModuleNameTerm_24, &make__module_dep_file__SourceFileModuleName_38);
                                                                        }
#line 487 "make.module_dep_file.m"
                                                                        if (make__module_dep_file__succeeded)
#line 487 "make.module_dep_file.m"
                                                                          {
#line 510 "make.module_dep_file.m"
                                                                            {
#line 510 "make.module_dep_file.m"
                                                                              make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__ParentsTerm_25, &make__module_dep_file__Parents_39);
                                                                            }
#line 487 "make.module_dep_file.m"
                                                                            if (make__module_dep_file__succeeded)
#line 487 "make.module_dep_file.m"
                                                                              {
#line 511 "make.module_dep_file.m"
                                                                                {
#line 511 "make.module_dep_file.m"
                                                                                  make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__IntDepsTerm_26, &make__module_dep_file__IntDeps_40);
                                                                                }
#line 487 "make.module_dep_file.m"
                                                                                if (make__module_dep_file__succeeded)
#line 487 "make.module_dep_file.m"
                                                                                  {
#line 512 "make.module_dep_file.m"
                                                                                    {
#line 512 "make.module_dep_file.m"
                                                                                      make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__ImplDepsTerm_27, &make__module_dep_file__ImplDeps_41);
                                                                                    }
#line 487 "make.module_dep_file.m"
                                                                                    if (make__module_dep_file__succeeded)
#line 487 "make.module_dep_file.m"
                                                                                      {
#line 513 "make.module_dep_file.m"
                                                                                        {
#line 513 "make.module_dep_file.m"
                                                                                          make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__ChildrenTerm_28, &make__module_dep_file__Children_42);
                                                                                        }
#line 487 "make.module_dep_file.m"
                                                                                        if (make__module_dep_file__succeeded)
#line 487 "make.module_dep_file.m"
                                                                                          {
#line 514 "make.module_dep_file.m"
                                                                                            {
#line 514 "make.module_dep_file.m"
                                                                                              make__module_dep_file__succeeded = make__module_dep_file__sym_names_term_2_p_0(make__module_dep_file__NestedChildrenTerm_29, &make__module_dep_file__NestedChildren_43);
                                                                                            }
#line 487 "make.module_dep_file.m"
                                                                                            if (make__module_dep_file__succeeded)
#line 487 "make.module_dep_file.m"
                                                                                              {
#line 516 "make.module_dep_file.m"
                                                                                                {
#line 516 "make.module_dep_file.m"
                                                                                                  make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho5_3_p_0(make__module_dep_file__FactDepsTerm_30, &make__module_dep_file__FactDeps_44);
                                                                                                }
#line 487 "make.module_dep_file.m"
                                                                                                if (make__module_dep_file__succeeded)
#line 487 "make.module_dep_file.m"
                                                                                                  {
#line 517 "make.module_dep_file.m"
                                                                                                    {
#line 517 "make.module_dep_file.m"
                                                                                                      make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho4_3_p_0(make__module_dep_file__ForeignLanguagesTerm_31, &make__module_dep_file__ForeignLanguages_45);
                                                                                                    }
#line 487 "make.module_dep_file.m"
                                                                                                    if (make__module_dep_file__succeeded)
#line 487 "make.module_dep_file.m"
                                                                                                      {
#line 519 "make.module_dep_file.m"
                                                                                                        {
#line 519 "make.module_dep_file.m"
                                                                                                          make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho3_3_p_0(make__module_dep_file__ForeignImportsTerm_32, &make__module_dep_file__ForeignImports_46);
                                                                                                        }
#line 487 "make.module_dep_file.m"
                                                                                                        if (make__module_dep_file__succeeded)
#line 487 "make.module_dep_file.m"
                                                                                                          {
#line 521 "make.module_dep_file.m"
                                                                                                            {
#line 521 "make.module_dep_file.m"
                                                                                                              make__module_dep_file__succeeded = make__module_dep_file__contains_foreign_export_term_2_p_0(make__module_dep_file__ContainsForeignExportTerm_33, &make__module_dep_file__ContainsForeignExport_47);
                                                                                                            }
#line 487 "make.module_dep_file.m"
                                                                                                            if (make__module_dep_file__succeeded)
#line 487 "make.module_dep_file.m"
                                                                                                              {
#line 524 "make.module_dep_file.m"
                                                                                                                {
#line 524 "make.module_dep_file.m"
                                                                                                                  make__module_dep_file__succeeded = make__module_dep_file__has_main_term_2_p_0(make__module_dep_file__HasMainTerm_34, &make__module_dep_file__HasMain_48);
                                                                                                                }
#line 487 "make.module_dep_file.m"
                                                                                                                if (make__module_dep_file__succeeded)
#line 530 "make.module_dep_file.m"
                                                                                                                  {
#line 530 "make.module_dep_file.m"
                                                                                                                    if ((make__module_dep_file__ModuleArgsTail_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 527 "make.module_dep_file.m"
                                                                                                                      {
#line 527 "make.module_dep_file.m"
                                                                                                                        make__module_dep_file__succeeded = (make__module_dep_file__Version_36 == (MR_Integer) 0);
#line 527 "make.module_dep_file.m"
                                                                                                                        if (make__module_dep_file__succeeded)
#line 527 "make.module_dep_file.m"
                                                                                                                          {
#line 529 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__ForeignIncludes_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 529 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__succeeded = MR_TRUE;
#line 527 "make.module_dep_file.m"
                                                                                                                          }
#line 527 "make.module_dep_file.m"
                                                                                                                      }
#line 530 "make.module_dep_file.m"
                                                                                                                    else
#line 531 "make.module_dep_file.m"
                                                                                                                      {
#line 531 "make.module_dep_file.m"
                                                                                                                        MR_Word make__module_dep_file__ForeignIncludesTerm_50;
#line 531 "make.module_dep_file.m"
                                                                                                                        MR_Word make__module_dep_file__V_85_85;

#line 531 "make.module_dep_file.m"
                                                                                                                        make__module_dep_file__succeeded = (make__module_dep_file__Version_36 == (MR_Integer) 1);
#line 531 "make.module_dep_file.m"
                                                                                                                        if (make__module_dep_file__succeeded)
#line 531 "make.module_dep_file.m"
                                                                                                                          {
#line 532 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__ForeignIncludesTerm_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgsTail_35, (MR_Integer) 0)));
#line 532 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ModuleArgsTail_35, (MR_Integer) 1)));
#line 532 "make.module_dep_file.m"
                                                                                                                            make__module_dep_file__succeeded = (make__module_dep_file__V_85_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 531 "make.module_dep_file.m"
                                                                                                                            if (make__module_dep_file__succeeded)
#line 533 "make.module_dep_file.m"
                                                                                                                              {
#line 533 "make.module_dep_file.m"
                                                                                                                                make__module_dep_file__succeeded = make__module_dep_file__braces_term__ho2_3_p_0(make__module_dep_file__ForeignIncludesTerm_50, &make__module_dep_file__ForeignIncludes_49);
                                                                                                                              }
#line 531 "make.module_dep_file.m"
                                                                                                                          }
#line 531 "make.module_dep_file.m"
                                                                                                                      }
#line 530 "make.module_dep_file.m"
                                                                                                                  }
#line 487 "make.module_dep_file.m"
                                                                                                              }
#line 487 "make.module_dep_file.m"
                                                                                                          }
#line 487 "make.module_dep_file.m"
                                                                                                      }
#line 487 "make.module_dep_file.m"
                                                                                                  }
#line 487 "make.module_dep_file.m"
                                                                                              }
#line 487 "make.module_dep_file.m"
                                                                                          }
#line 487 "make.module_dep_file.m"
                                                                                      }
#line 487 "make.module_dep_file.m"
                                                                                  }
#line 487 "make.module_dep_file.m"
                                                                              }
#line 487 "make.module_dep_file.m"
                                                                          }
#line 487 "make.module_dep_file.m"
                                                                      }
#line 487 "make.module_dep_file.m"
                                                                  }
#line 502 "make.module_dep_file.m"
                                                              }
#line 500 "make.module_dep_file.m"
                                                          }
#line 499 "make.module_dep_file.m"
                                                      }
#line 498 "make.module_dep_file.m"
                                                  }
#line 497 "make.module_dep_file.m"
                                              }
#line 496 "make.module_dep_file.m"
                                          }
#line 495 "make.module_dep_file.m"
                                      }
#line 494 "make.module_dep_file.m"
                                  }
#line 493 "make.module_dep_file.m"
                              }
#line 492 "make.module_dep_file.m"
                          }
#line 491 "make.module_dep_file.m"
                      }
#line 490 "make.module_dep_file.m"
                  }
#line 489 "make.module_dep_file.m"
              }
#line 487 "make.module_dep_file.m"
          }
#line 487 "make.module_dep_file.m"
      }
#line 589 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 537 "make.module_dep_file.m"
      {
#line 537 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ContainsForeignCode_51;
#line 537 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Items_54;
#line 537 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Errors_56;
#line 537 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Imports_58;
#line 537 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_87_87;
#line 537 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_88_88;
#line 553 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_165_165;

#line 537 "make.module_dep_file.m"
        {
#line 537 "make.module_dep_file.m"
          make__module_dep_file__ContainsForeignCode_51 = make__module_dep_file__contains_foreign_code_1_f_0(make__module_dep_file__ForeignLanguages_45);
        }
#line 540 "make.module_dep_file.m"
        {
#line 540 "make.module_dep_file.m"
          make__module_dep_file__Items_54 = mercury__cord__empty_0_f_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_0);
        }
#line 542 "make.module_dep_file.m"
        {
#line 542 "make.module_dep_file.m"
          mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0, &make__module_dep_file__Errors_56);
        }
#line 547 "make.module_dep_file.m"
        {
#line 547 "make.module_dep_file.m"
          make__module_dep_file__V_87_87 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, make__module_dep_file__ForeignImports_46);
        }
#line 547 "make.module_dep_file.m"
        {
#line 547 "make.module_dep_file.m"
          make__module_dep_file__V_88_88 = mercury__cord__from_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, make__module_dep_file__ForeignIncludes_49);
        }
#line 544 "make.module_dep_file.m"
        {
#line 544 "make.module_dep_file.m"
          make__module_dep_file__Imports_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 21 * sizeof(MR_Word)), NULL, NULL);
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 0) = ((MR_Box) (make__module_dep_file__SourceFileName_37));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 1) = ((MR_Box) (make__module_dep_file__SourceFileModuleName_38));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 2) = ((MR_Box) (make__module_dep_file__ModuleName_14));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 3) = ((MR_Box) (make__module_dep_file__Parents_39));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 4) = ((MR_Box) (make__module_dep_file__IntDeps_40));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 5) = ((MR_Box) (make__module_dep_file__ImplDeps_41));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 7) = ((MR_Box) (make__module_dep_file__Children_42));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 9) = ((MR_Box) (make__module_dep_file__NestedChildren_43));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 10) = ((MR_Box) (make__module_dep_file__FactDeps_44));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 11) = ((MR_Box) (make__module_dep_file__V_87_87));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 12) = ((MR_Box) (make__module_dep_file__V_88_88));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 13) = ((MR_Box) (make__module_dep_file__ContainsForeignCode_51));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 14) = ((MR_Box) (make__module_dep_file__ContainsForeignExport_47));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 15) = ((MR_Box) (make__module_dep_file__Items_54));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 16) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 17) = ((MR_Box) (make__module_dep_file__Errors_56));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 18) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 19) = ((MR_Box) (make__module_dep_file__HasMain_48));
#line 544 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_58, 20) = ((MR_Box) (make__module_dep_file__ModuleDir_15));
#line 544 "make.module_dep_file.m"
        }
#line 553 "make.module_dep_file.m"
        {
#line 553 "make.module_dep_file.m"
          make__module_dep_file__V_165_165 = mercury__dir__this_directory_0_f_0();
        }
#line 553 "make.module_dep_file.m"
        make__module_dep_file__succeeded = (strcmp(make__module_dep_file__ModuleDir_15, make__module_dep_file__V_165_165) == 0);
#line 6409 "make.module_dep_file.c"
        if (make__module_dep_file__succeeded)
#line 6411 "make.module_dep_file.c"
          {
#line 6413 "make.module_dep_file.c"
            MR_Word make__module_dep_file__SourceFileExists_59;

#line 554 "make.module_dep_file.m"
            {
#line 554 "make.module_dep_file.m"
              make__module_dep_file__check_regular_file_exists_4_p_0(make__module_dep_file__SourceFileName_37, &make__module_dep_file__SourceFileExists_59);
            }
#line 6421 "make.module_dep_file.c"
            if ((make__module_dep_file__SourceFileExists_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6423 "make.module_dep_file.c"
              {
#line 6425 "make.module_dep_file.c"
                MR_Word make__module_dep_file__TypeCtorInfo_155_155;
#line 6427 "make.module_dep_file.c"
                MR_Word make__module_dep_file__ModuleDepMap0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 0)));
#line 6429 "make.module_dep_file.c"
                MR_Word make__module_dep_file__ModuleDepMap_63;
#line 6431 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_91_91;
#line 6433 "make.module_dep_file.c"
                MR_Word make__module_dep_file__STATE_VARIABLE_Info_92_92;
#line 6435 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_93_93;
#line 6437 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 1)));
#line 6439 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 2)));
#line 6441 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 3)));
#line 6443 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 4)));
#line 6445 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 5)));
#line 6447 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 6)));
#line 6449 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 7)));
#line 6451 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 8)));
#line 6453 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 9)));
#line 6455 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 10)));
#line 6457 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 11)));
#line 6459 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 12)));
#line 6461 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 13)));
#line 6463 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 14)));
#line 6465 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 15)));
#line 6467 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 16)));
#line 6469 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 17)));
#line 6471 "make.module_dep_file.c"
                MR_Integer make__module_dep_file__V_116_116 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 18)));
#line 6473 "make.module_dep_file.c"
                MR_Word make__module_dep_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 19)));
#line 576 "make.module_dep_file.m"
                MR_Box make__module_dep_file__conv2_STATE_VARIABLE_Info_66;
#line 576 "make.module_dep_file.m"
                MR_Box make__module_dep_file__conv1_STATE_VARIABLE_IO_68;

#line 568 "make.module_dep_file.m"
                {
#line 568 "make.module_dep_file.m"
                  make__module_dep_file__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 568 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(1), make__module_dep_file__V_91_91, 0) = ((MR_Box) (make__module_dep_file__Imports_58));
#line 568 "make.module_dep_file.m"
                }
#line 6488 "make.module_dep_file.c"
                make__module_dep_file__TypeCtorInfo_155_155 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 568 "make.module_dep_file.m"
                {
#line 568 "make.module_dep_file.m"
                  mercury__map__set_4_p_0(make__module_dep_file__TypeCtorInfo_155_155, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_14)), ((MR_Box) (make__module_dep_file__V_91_91)), make__module_dep_file__ModuleDepMap0_62, &make__module_dep_file__ModuleDepMap_63);
                }
#line 569 "make.module_dep_file.m"
                {
#line 569 "make.module_dep_file.m"
                  make__module_dep_file__STATE_VARIABLE_Info_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 569 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_92, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_63));
#line 569 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_92, 1) = ((MR_Box) (make__module_dep_file__V_99_99));
#line 569 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_92, 2) = ((MR_Box) (make__module_dep_file__V_100_100));
#line 569 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_92, 3) = ((MR_Box) (make__module_dep_file__V_101_101));
#line 569 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_92, 4) = ((MR_Box) (make__module_dep_file__V_102_102));
#line 569 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_92, 5) = ((MR_Box) (make__module_dep_file__V_103_103));
#line 569 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_92, 6) = ((MR_Box) (make__module_dep_file__V_104_104));
#line 569 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_92, 7) = ((MR_Box) (make__module_dep_file__V_105_105));
#line 569 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_92, 8) = ((MR_Box) (make__module_dep_file__V_106_106));
#line 569 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_92, 9) = ((MR_Box) (make__module_dep_file__V_107_107));
#line 569 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_92, 10) = ((MR_Box) (make__module_dep_file__V_108_108));
#line 569 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_92, 11) = ((MR_Box) (make__module_dep_file__V_109_109));
#line 569 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_92, 12) = ((MR_Box) (make__module_dep_file__V_110_110));
#line 569 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_92, 13) = ((MR_Box) (make__module_dep_file__V_111_111));
#line 569 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_92, 14) = ((MR_Box) (make__module_dep_file__V_112_112));
#line 569 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_92, 15) = ((MR_Box) (make__module_dep_file__V_113_113));
#line 569 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_92, 16) = ((MR_Box) (make__module_dep_file__V_114_114));
#line 569 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_92, 17) = ((MR_Box) (make__module_dep_file__V_115_115));
#line 569 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_92, 18) = ((MR_Box) (make__module_dep_file__V_116_116));
#line 569 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_92, 19) = ((MR_Box) (make__module_dep_file__V_117_117));
#line 569 "make.module_dep_file.m"
                }
#line 577 "make.module_dep_file.m"
                {
#line 577 "make.module_dep_file.m"
                  make__module_dep_file__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 577 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_93_93, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_6[0]));
#line 577 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_93_93, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_1));
#line 577 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_93_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 577 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_93_93, 3) = ((MR_Box) (make__module_dep_file__Globals_12));
#line 577 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_93_93, 4) = ((MR_Box) ((MR_Integer) 1));
#line 577 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_93_93, 5) = ((MR_Box) (make__module_dep_file__SearchDirs_13));
#line 577 "make.module_dep_file.m"
                }
#line 576 "make.module_dep_file.m"
                {
#line 576 "make.module_dep_file.m"
                  mercury__list__foldl2_6_p_2(make__module_dep_file__TypeCtorInfo_155_155, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_93_93, make__module_dep_file__NestedChildren_43, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_92_92)), &make__module_dep_file__conv2_STATE_VARIABLE_Info_66, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv1_STATE_VARIABLE_IO_68);
                }
#line 576 "make.module_dep_file.m"
                *make__module_dep_file__STATE_VARIABLE_Info_66 = ((MR_Word) make__module_dep_file__conv2_STATE_VARIABLE_Info_66);
#line 580 "make.module_dep_file.m"
                {
#line 580 "make.module_dep_file.m"
                  make__module_dep_file__succeeded = make__module_dep_file__some_bad_module_dependency_2_p_0(*make__module_dep_file__STATE_VARIABLE_Info_66, make__module_dep_file__NestedChildren_43);
                }
#line 582 "make.module_dep_file.m"
                if (make__module_dep_file__succeeded)
#line 581 "make.module_dep_file.m"
                  {
#line 581 "make.module_dep_file.m"
                    *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_7[0]);
#line 581 "make.module_dep_file.m"
                  }
#line 582 "make.module_dep_file.m"
                else
#line 583 "make.module_dep_file.m"
                  *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 6583 "make.module_dep_file.c"
              }
#line 6585 "make.module_dep_file.c"
            else
#line 6587 "make.module_dep_file.c"
              {
#line 559 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_61_61;

#line 559 "make.module_dep_file.m"
                {
#line 559 "make.module_dep_file.m"
                  mercury__io__remove_file_4_p_0(make__module_dep_file__ModuleDepFile_16, &make__module_dep_file__V_61_61);
                }
#line 587 "make.module_dep_file.m"
                *make__module_dep_file__Result_18 = make__module_dep_file__SourceFileExists_59;
#line 587 "make.module_dep_file.m"
                *make__module_dep_file__STATE_VARIABLE_Info_66 = make__module_dep_file__STATE_VARIABLE_Info_0_65;
#line 6601 "make.module_dep_file.c"
              }
#line 6603 "make.module_dep_file.c"
          }
#line 6605 "make.module_dep_file.c"
        else
#line 6607 "make.module_dep_file.c"
          {
#line 6609 "make.module_dep_file.c"
            MR_Word make__module_dep_file__TypeCtorInfo_155_258;
#line 6611 "make.module_dep_file.c"
            MR_Word make__module_dep_file__ModuleDepMap0_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 0)));
#line 6613 "make.module_dep_file.c"
            MR_Word make__module_dep_file__ModuleDepMap_212;
#line 6615 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_214_214;
#line 6617 "make.module_dep_file.c"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_92_215;
#line 6619 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_216_216;
#line 6621 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 1)));
#line 6623 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 2)));
#line 6625 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 3)));
#line 6627 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 4)));
#line 6629 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 5)));
#line 6631 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 6)));
#line 6633 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 7)));
#line 6635 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 8)));
#line 6637 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 9)));
#line 6639 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 10)));
#line 6641 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 11)));
#line 6643 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 12)));
#line 6645 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 13)));
#line 6647 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 14)));
#line 6649 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 15)));
#line 6651 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 16)));
#line 6653 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 17)));
#line 6655 "make.module_dep_file.c"
            MR_Integer make__module_dep_file__V_236_236 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 18)));
#line 6657 "make.module_dep_file.c"
            MR_Word make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_65, (MR_Integer) 19)));
#line 576 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv5_STATE_VARIABLE_Info_66;
#line 576 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv4_STATE_VARIABLE_IO_68;

#line 568 "make.module_dep_file.m"
            {
#line 568 "make.module_dep_file.m"
              make__module_dep_file__V_214_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 568 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(1), make__module_dep_file__V_214_214, 0) = ((MR_Box) (make__module_dep_file__Imports_58));
#line 568 "make.module_dep_file.m"
            }
#line 6672 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_155_258 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 568 "make.module_dep_file.m"
            {
#line 568 "make.module_dep_file.m"
              mercury__map__set_4_p_0(make__module_dep_file__TypeCtorInfo_155_258, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_14)), ((MR_Box) (make__module_dep_file__V_214_214)), make__module_dep_file__ModuleDepMap0_211, &make__module_dep_file__ModuleDepMap_212);
            }
#line 569 "make.module_dep_file.m"
            {
#line 569 "make.module_dep_file.m"
              make__module_dep_file__STATE_VARIABLE_Info_92_215 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 569 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_215, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_212));
#line 569 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_215, 1) = ((MR_Box) (make__module_dep_file__V_219_219));
#line 569 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_215, 2) = ((MR_Box) (make__module_dep_file__V_220_220));
#line 569 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_215, 3) = ((MR_Box) (make__module_dep_file__V_221_221));
#line 569 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_215, 4) = ((MR_Box) (make__module_dep_file__V_222_222));
#line 569 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_215, 5) = ((MR_Box) (make__module_dep_file__V_223_223));
#line 569 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_215, 6) = ((MR_Box) (make__module_dep_file__V_224_224));
#line 569 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_215, 7) = ((MR_Box) (make__module_dep_file__V_225_225));
#line 569 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_215, 8) = ((MR_Box) (make__module_dep_file__V_226_226));
#line 569 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_215, 9) = ((MR_Box) (make__module_dep_file__V_227_227));
#line 569 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_215, 10) = ((MR_Box) (make__module_dep_file__V_228_228));
#line 569 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_215, 11) = ((MR_Box) (make__module_dep_file__V_229_229));
#line 569 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_215, 12) = ((MR_Box) (make__module_dep_file__V_230_230));
#line 569 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_215, 13) = ((MR_Box) (make__module_dep_file__V_231_231));
#line 569 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_215, 14) = ((MR_Box) (make__module_dep_file__V_232_232));
#line 569 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_215, 15) = ((MR_Box) (make__module_dep_file__V_233_233));
#line 569 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_215, 16) = ((MR_Box) (make__module_dep_file__V_234_234));
#line 569 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_215, 17) = ((MR_Box) (make__module_dep_file__V_235_235));
#line 569 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_215, 18) = ((MR_Box) (make__module_dep_file__V_236_236));
#line 569 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_92_215, 19) = ((MR_Box) (make__module_dep_file__V_237_237));
#line 569 "make.module_dep_file.m"
            }
#line 577 "make.module_dep_file.m"
            {
#line 577 "make.module_dep_file.m"
              make__module_dep_file__V_216_216 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 577 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_216_216, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_6[0]));
#line 577 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_216_216, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_3_11_p_0_2));
#line 577 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_216_216, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 577 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_216_216, 3) = ((MR_Box) (make__module_dep_file__Globals_12));
#line 577 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_216_216, 4) = ((MR_Box) ((MR_Integer) 1));
#line 577 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_216_216, 5) = ((MR_Box) (make__module_dep_file__SearchDirs_13));
#line 577 "make.module_dep_file.m"
            }
#line 576 "make.module_dep_file.m"
            {
#line 576 "make.module_dep_file.m"
              mercury__list__foldl2_6_p_2(make__module_dep_file__TypeCtorInfo_155_258, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_216_216, make__module_dep_file__NestedChildren_43, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_92_215)), &make__module_dep_file__conv5_STATE_VARIABLE_Info_66, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv4_STATE_VARIABLE_IO_68);
            }
#line 576 "make.module_dep_file.m"
            *make__module_dep_file__STATE_VARIABLE_Info_66 = ((MR_Word) make__module_dep_file__conv5_STATE_VARIABLE_Info_66);
#line 580 "make.module_dep_file.m"
            {
#line 580 "make.module_dep_file.m"
              make__module_dep_file__succeeded = make__module_dep_file__some_bad_module_dependency_2_p_0(*make__module_dep_file__STATE_VARIABLE_Info_66, make__module_dep_file__NestedChildren_43);
            }
#line 582 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 581 "make.module_dep_file.m"
              {
#line 581 "make.module_dep_file.m"
                *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_7[0]);
#line 581 "make.module_dep_file.m"
              }
#line 582 "make.module_dep_file.m"
            else
#line 583 "make.module_dep_file.m"
              *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 6767 "make.module_dep_file.c"
          }
#line 537 "make.module_dep_file.m"
      }
#line 589 "make.module_dep_file.m"
    else
#line 590 "make.module_dep_file.m"
      {
#line 590 "make.module_dep_file.m"
        *make__module_dep_file__Result_18 = (MR_Word) MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_7[1]);
#line 590 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_Info_66 = make__module_dep_file__STATE_VARIABLE_Info_0_65;
#line 590 "make.module_dep_file.m"
      }
#line 589 "make.module_dep_file.m"
  }
#line 480 "make.module_dep_file.m"
}

#line 722 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_4(
#line 722 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 722 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 722 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 722 "make.module_dep_file.m"
{
#line 722 "make.module_dep_file.m"
  {
#line 722 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 722 "make.module_dep_file.m"
    {
#line 722 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
#line 722 "make.module_dep_file.m"
      return;
    }
#line 722 "make.module_dep_file.m"
  }
#line 722 "make.module_dep_file.m"
}

#line 722 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_3(
#line 722 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 722 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 722 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 722 "make.module_dep_file.m"
{
#line 722 "make.module_dep_file.m"
  {
#line 722 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 722 "make.module_dep_file.m"
    {
#line 722 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
#line 722 "make.module_dep_file.m"
      return;
    }
#line 722 "make.module_dep_file.m"
  }
#line 722 "make.module_dep_file.m"
}

#line 722 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_2(
#line 722 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 722 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 722 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 722 "make.module_dep_file.m"
{
#line 722 "make.module_dep_file.m"
  {
#line 722 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 722 "make.module_dep_file.m"
    {
#line 722 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
#line 722 "make.module_dep_file.m"
      return;
    }
#line 722 "make.module_dep_file.m"
  }
#line 722 "make.module_dep_file.m"
}

#line 722 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0_1(
#line 722 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 722 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 722 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_2)
#line 722 "make.module_dep_file.m"
{
#line 722 "make.module_dep_file.m"
  {
#line 722 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 722 "make.module_dep_file.m"
    {
#line 722 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_remake_msg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 5))));
#line 722 "make.module_dep_file.m"
      return;
    }
#line 722 "make.module_dep_file.m"
  }
#line 722 "make.module_dep_file.m"
}

#line 439 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_2_8_p_0(
#line 439 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 439 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 439 "make.module_dep_file.m"
  MR_Word make__module_dep_file__SearchDirs_11,
#line 439 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_12,
#line 439 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_28,
#line 439 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_29)
#line 439 "make.module_dep_file.m"
{
#line 444 "make.module_dep_file.m"
  {
#line 444 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 444 "make.module_dep_file.m"
    MR_String make__module_dep_file__ModuleDepFile_15;
#line 444 "make.module_dep_file.m"
    MR_Word make__module_dep_file__OldInputStream_16;
#line 444 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SearchResult_17;
#line 444 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_32_32;

#line 446 "make.module_dep_file.m"
    {
#line 446 "make.module_dep_file.m"
      make__module_dep_file__V_32_32 = make__make_module_dep_file_extension_0_f_0();
    }
#line 445 "make.module_dep_file.m"
    {
#line 445 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_search_file_name_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__V_32_32, &make__module_dep_file__ModuleDepFile_15);
    }
#line 447 "make.module_dep_file.m"
    {
#line 447 "make.module_dep_file.m"
      mercury__io__input_stream_3_p_0(&make__module_dep_file__OldInputStream_16);
    }
#line 448 "make.module_dep_file.m"
    {
#line 448 "make.module_dep_file.m"
      libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 0, make__module_dep_file__SearchDirs_11, make__module_dep_file__ModuleDepFile_15, &make__module_dep_file__SearchResult_17);
    }
#line 473 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__SearchResult_17)) == (MR_mktag((MR_Integer) 1))))
#line 474 "make.module_dep_file.m"
      {
#line 720 "make.module_dep_file.m"
        if ((make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1))
#line 726 "make.module_dep_file.m"
          *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_0_28;
#line 720 "make.module_dep_file.m"
        else
#line 720 "make.module_dep_file.m"
          {
#line 720 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_61_61;

#line 722 "make.module_dep_file.m"
            {
#line 722 "make.module_dep_file.m"
              make__module_dep_file__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 722 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
#line 722 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_1));
#line 722 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 722 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 3) = ((MR_Box) (make__module_dep_file__Globals_9));
#line 722 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 4) = ((MR_Box) (make__module_dep_file__ModuleName_12));
#line 722 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_61_61, 5) = ((MR_Box) ((MR_String) "couldn\'t find \140.module_dep\' file"));
#line 722 "make.module_dep_file.m"
            }
#line 721 "make.module_dep_file.m"
            {
#line 721 "make.module_dep_file.m"
              make__util__debug_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_61_61);
            }
#line 724 "make.module_dep_file.m"
            {
#line 724 "make.module_dep_file.m"
              make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_0_28, make__module_dep_file__STATE_VARIABLE_Info_29);
#line 724 "make.module_dep_file.m"
              return;
            }
#line 720 "make.module_dep_file.m"
          }
#line 474 "make.module_dep_file.m"
      }
#line 473 "make.module_dep_file.m"
    else
#line 451 "make.module_dep_file.m"
      {
#line 451 "make.module_dep_file.m"
        MR_String make__module_dep_file__ModuleDir_18 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__SearchResult_17, (MR_Integer) 0)));
#line 451 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TermResult_19;
#line 451 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleDepStream_20;

#line 452 "make.module_dep_file.m"
        {
#line 452 "make.module_dep_file.m"
          mercury__parser__read_term_3_p_0((MR_Word) &mercury__term__term__type_ctor_info_generic_0, &make__module_dep_file__TermResult_19);
        }
#line 453 "make.module_dep_file.m"
        {
#line 453 "make.module_dep_file.m"
          mercury__io__set_input_stream_4_p_0(make__module_dep_file__OldInputStream_16, &make__module_dep_file__ModuleDepStream_20);
        }
#line 454 "make.module_dep_file.m"
        {
#line 454 "make.module_dep_file.m"
          mercury__io__close_input_3_p_0(make__module_dep_file__ModuleDepStream_20);
        }
#line 7023 "make.module_dep_file.c"
        if ((make__module_dep_file__TermResult_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7025 "make.module_dep_file.c"
          {
#line 720 "make.module_dep_file.m"
            if ((make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1))
#line 726 "make.module_dep_file.m"
              *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_0_28;
#line 720 "make.module_dep_file.m"
            else
#line 720 "make.module_dep_file.m"
              {
#line 720 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_77_77;

#line 722 "make.module_dep_file.m"
                {
#line 722 "make.module_dep_file.m"
                  make__module_dep_file__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 722 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
#line 722 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_2));
#line 722 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 722 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 3) = ((MR_Box) (make__module_dep_file__Globals_9));
#line 722 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 4) = ((MR_Box) (make__module_dep_file__ModuleName_12));
#line 722 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), make__module_dep_file__V_77_77, 5) = ((MR_Box) ((MR_String) "unexpected eof"));
#line 722 "make.module_dep_file.m"
                }
#line 721 "make.module_dep_file.m"
                {
#line 721 "make.module_dep_file.m"
                  make__util__debug_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_77_77);
                }
#line 724 "make.module_dep_file.m"
                {
#line 724 "make.module_dep_file.m"
                  make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_0_28, make__module_dep_file__STATE_VARIABLE_Info_29);
#line 724 "make.module_dep_file.m"
                  return;
                }
#line 720 "make.module_dep_file.m"
              }
#line 7070 "make.module_dep_file.c"
          }
#line 7072 "make.module_dep_file.c"
        else
#line 7074 "make.module_dep_file.c"
          if (((MR_tag((MR_Word) make__module_dep_file__TermResult_19)) == (MR_mktag((MR_Integer) 1))))
#line 7076 "make.module_dep_file.c"
            {
#line 7078 "make.module_dep_file.c"
              MR_String make__module_dep_file__ParseError_24 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__TermResult_19, (MR_Integer) 0)));
#line 7080 "make.module_dep_file.c"
              MR_String make__module_dep_file__Msg_89;
#line 463 "make.module_dep_file.m"
              MR_Integer make__module_dep_file__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), make__module_dep_file__TermResult_19, (MR_Integer) 1)));

#line 464 "make.module_dep_file.m"
              {
#line 464 "make.module_dep_file.m"
                make__module_dep_file__Msg_89 = mercury__string__f_43_43_2_f_0((MR_String) "parse error: ", make__module_dep_file__ParseError_24);
              }
#line 720 "make.module_dep_file.m"
              if ((make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1))
#line 726 "make.module_dep_file.m"
                *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_0_28;
#line 720 "make.module_dep_file.m"
              else
#line 720 "make.module_dep_file.m"
                {
#line 720 "make.module_dep_file.m"
                  MR_Word make__module_dep_file__V_84_84;

#line 722 "make.module_dep_file.m"
                  {
#line 722 "make.module_dep_file.m"
                    make__module_dep_file__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 722 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
#line 722 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_3));
#line 722 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 722 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 3) = ((MR_Box) (make__module_dep_file__Globals_9));
#line 722 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 4) = ((MR_Box) (make__module_dep_file__ModuleName_12));
#line 722 "make.module_dep_file.m"
                    MR_hl_field(MR_mktag(0), make__module_dep_file__V_84_84, 5) = ((MR_Box) (make__module_dep_file__Msg_89));
#line 722 "make.module_dep_file.m"
                  }
#line 721 "make.module_dep_file.m"
                  {
#line 721 "make.module_dep_file.m"
                    make__util__debug_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_84_84);
                  }
#line 724 "make.module_dep_file.m"
                  {
#line 724 "make.module_dep_file.m"
                    make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_0_28, make__module_dep_file__STATE_VARIABLE_Info_29);
#line 724 "make.module_dep_file.m"
                    return;
                  }
#line 720 "make.module_dep_file.m"
                }
#line 7133 "make.module_dep_file.c"
            }
#line 7135 "make.module_dep_file.c"
          else
#line 7137 "make.module_dep_file.c"
            {
#line 7139 "make.module_dep_file.c"
              MR_Word make__module_dep_file__Term_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_dep_file__TermResult_19, (MR_Integer) 1)));
#line 7141 "make.module_dep_file.c"
              MR_Word make__module_dep_file__Result_104;
#line 7143 "make.module_dep_file.c"
              MR_Word make__module_dep_file__STATE_VARIABLE_Info_46_106;
#line 456 "make.module_dep_file.m"
              MR_Word make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), make__module_dep_file__TermResult_19, (MR_Integer) 0)));

#line 457 "make.module_dep_file.m"
              {
#line 457 "make.module_dep_file.m"
                make__module_dep_file__read_module_dependencies_3_11_p_0(make__module_dep_file__Globals_9, make__module_dep_file__SearchDirs_11, make__module_dep_file__ModuleName_12, make__module_dep_file__ModuleDir_18, make__module_dep_file__ModuleDepFile_15, make__module_dep_file__Term_22, &make__module_dep_file__Result_104, make__module_dep_file__STATE_VARIABLE_Info_0_28, &make__module_dep_file__STATE_VARIABLE_Info_46_106);
              }
#line 468 "make.module_dep_file.m"
              if ((make__module_dep_file__Result_104 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 467 "make.module_dep_file.m"
                *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_46_106;
#line 468 "make.module_dep_file.m"
              else
#line 469 "make.module_dep_file.m"
                {
#line 469 "make.module_dep_file.m"
                  MR_String make__module_dep_file__Msg_98 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__Result_104, (MR_Integer) 0)));

#line 720 "make.module_dep_file.m"
                  if ((make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1))
#line 726 "make.module_dep_file.m"
                    *make__module_dep_file__STATE_VARIABLE_Info_29 = make__module_dep_file__STATE_VARIABLE_Info_46_106;
#line 720 "make.module_dep_file.m"
                  else
#line 720 "make.module_dep_file.m"
                    {
#line 720 "make.module_dep_file.m"
                      MR_Word make__module_dep_file__V_94_94;

#line 722 "make.module_dep_file.m"
                      {
#line 722 "make.module_dep_file.m"
                        make__module_dep_file__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 722 "make.module_dep_file.m"
                        MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_5[0]));
#line 722 "make.module_dep_file.m"
                        MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 1) = ((MR_Box) (make__module_dep_file__read_module_dependencies_2_8_p_0_4));
#line 722 "make.module_dep_file.m"
                        MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 722 "make.module_dep_file.m"
                        MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 3) = ((MR_Box) (make__module_dep_file__Globals_9));
#line 722 "make.module_dep_file.m"
                        MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 4) = ((MR_Box) (make__module_dep_file__ModuleName_12));
#line 722 "make.module_dep_file.m"
                        MR_hl_field(MR_mktag(0), make__module_dep_file__V_94_94, 5) = ((MR_Box) (make__module_dep_file__Msg_98));
#line 722 "make.module_dep_file.m"
                      }
#line 721 "make.module_dep_file.m"
                      {
#line 721 "make.module_dep_file.m"
                        make__util__debug_msg_4_p_0(make__module_dep_file__Globals_9, make__module_dep_file__V_94_94);
                      }
#line 724 "make.module_dep_file.m"
                      {
#line 724 "make.module_dep_file.m"
                        make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_12, make__module_dep_file__STATE_VARIABLE_Info_46_106, make__module_dep_file__STATE_VARIABLE_Info_29);
#line 724 "make.module_dep_file.m"
                        return;
                      }
#line 720 "make.module_dep_file.m"
                    }
#line 469 "make.module_dep_file.m"
                }
#line 7209 "make.module_dep_file.c"
            }
#line 451 "make.module_dep_file.m"
      }
#line 444 "make.module_dep_file.m"
  }
#line 439 "make.module_dep_file.m"
}

#line 430 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_no_search_7_p_0(
#line 430 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 430 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 430 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 430 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_13,
#line 430 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_14)
#line 430 "make.module_dep_file.m"
{
#line 435 "make.module_dep_file.m"
  {
#line 435 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 435 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_17_17;
#line 435 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_20_20;

#line 437 "make.module_dep_file.m"
    {
#line 437 "make.module_dep_file.m"
      make__module_dep_file__V_20_20 = mercury__dir__this_directory_0_f_0();
    }
#line 437 "make.module_dep_file.m"
    {
#line 437 "make.module_dep_file.m"
      make__module_dep_file__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 437 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_17_17, 0) = ((MR_Box) (make__module_dep_file__V_20_20));
#line 437 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 437 "make.module_dep_file.m"
    }
#line 436 "make.module_dep_file.m"
    {
#line 436 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_9, make__module_dep_file__V_17_17, make__module_dep_file__ModuleName_10, make__module_dep_file__STATE_VARIABLE_Info_0_13, make__module_dep_file__STATE_VARIABLE_Info_14);
#line 436 "make.module_dep_file.m"
      return;
    }
#line 435 "make.module_dep_file.m"
  }
#line 430 "make.module_dep_file.m"
}

#line 420 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__read_module_dependencies_search_7_p_0(
#line 420 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 420 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_9,
#line 420 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_10,
#line 420 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_14,
#line 420 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_15)
#line 420 "make.module_dep_file.m"
{
#line 424 "make.module_dep_file.m"
  {
#line 424 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 424 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SearchDirs_13;

#line 425 "make.module_dep_file.m"
    {
#line 425 "make.module_dep_file.m"
      libs__globals__lookup_accumulating_option_3_p_0(make__module_dep_file__Globals_8, (MR_Integer) 646, &make__module_dep_file__SearchDirs_13);
    }
#line 427 "make.module_dep_file.m"
    {
#line 427 "make.module_dep_file.m"
      make__module_dep_file__read_module_dependencies_2_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_9, make__module_dep_file__SearchDirs_13, make__module_dep_file__ModuleName_10, make__module_dep_file__STATE_VARIABLE_Info_0_14, make__module_dep_file__STATE_VARIABLE_Info_15);
#line 427 "make.module_dep_file.m"
      return;
    }
#line 424 "make.module_dep_file.m"
  }
#line 420 "make.module_dep_file.m"
}

#line 406 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__has_main_to_string_2_p_0(
#line 406 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HasMain_3,
#line 406 "make.module_dep_file.m"
  MR_String * make__module_dep_file__HasMainStr_4)
#line 406 "make.module_dep_file.m"
{
#line 411 "make.module_dep_file.m"
  {
#line 411 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 411 "make.module_dep_file.m"
    if ((make__module_dep_file__HasMain_3 == (MR_Integer) 0))
#line 412 "make.module_dep_file.m"
      *make__module_dep_file__HasMainStr_4 = (MR_String) "has_main";
#line 411 "make.module_dep_file.m"
    else
#line 415 "make.module_dep_file.m"
      *make__module_dep_file__HasMainStr_4 = (MR_String) "no_main";
#line 411 "make.module_dep_file.m"
  }
#line 406 "make.module_dep_file.m"
}

#line 390 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__contains_foreign_export_to_string_2_p_0(
#line 390 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ContainsForeignExport_3,
#line 390 "make.module_dep_file.m"
  MR_String * make__module_dep_file__ContainsForeignExportStr_4)
#line 390 "make.module_dep_file.m"
{
#line 396 "make.module_dep_file.m"
  {
#line 396 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 396 "make.module_dep_file.m"
    if ((make__module_dep_file__ContainsForeignExport_3 == (MR_Integer) 0))
#line 397 "make.module_dep_file.m"
      *make__module_dep_file__ContainsForeignExportStr_4 = (MR_String) "contains_foreign_export";
#line 396 "make.module_dep_file.m"
    else
#line 402 "make.module_dep_file.m"
      *make__module_dep_file__ContainsForeignExportStr_4 = (MR_String) "no_foreign_export";
#line 396 "make.module_dep_file.m"
  }
#line 390 "make.module_dep_file.m"
}

#line 380 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_include_file_info_3_p_0(
#line 380 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignInclude_4)
#line 380 "make.module_dep_file.m"
{
#line 383 "make.module_dep_file.m"
  {
#line 383 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 383 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignInclude_4, (MR_Integer) 0)));
#line 383 "make.module_dep_file.m"
    MR_String make__module_dep_file__FileName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignInclude_4, (MR_Integer) 1)));

#line 385 "make.module_dep_file.m"
    {
#line 385 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(make__module_dep_file__Lang_6);
    }
#line 386 "make.module_dep_file.m"
    {
#line 386 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) " - ");
    }
#line 387 "make.module_dep_file.m"
    {
#line 387 "make.module_dep_file.m"
      mercury__term_io__quote_string_3_p_0(make__module_dep_file__FileName_7);
#line 387 "make.module_dep_file.m"
      return;
    }
#line 383 "make.module_dep_file.m"
  }
#line 380 "make.module_dep_file.m"
}

#line 371 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__write_foreign_import_module_info_3_p_0(
#line 371 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ForeignImportModule_4)
#line 371 "make.module_dep_file.m"
{
#line 374 "make.module_dep_file.m"
  {
#line 374 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 374 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Lang_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignImportModule_4, (MR_Integer) 0)));
#line 374 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignImport_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignImportModule_4, (MR_Integer) 1)));
#line 375 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ForeignImportModule_4, (MR_Integer) 2)));

#line 376 "make.module_dep_file.m"
    {
#line 376 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(make__module_dep_file__Lang_6);
    }
#line 377 "make.module_dep_file.m"
    {
#line 377 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) " - ");
    }
#line 378 "make.module_dep_file.m"
    {
#line 378 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(make__module_dep_file__ForeignImport_7);
#line 378 "make.module_dep_file.m"
      return;
    }
#line 374 "make.module_dep_file.m"
  }
#line 371 "make.module_dep_file.m"
}

#line 366 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_9(
#line 366 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 366 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 366 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 366 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 366 "make.module_dep_file.m"
{
#line 366 "make.module_dep_file.m"
  {
#line 366 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 366 "make.module_dep_file.m"
    {
#line 366 "make.module_dep_file.m"
      make__module_dep_file__write_foreign_include_file_info_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 366 "make.module_dep_file.m"
      return;
    }
#line 366 "make.module_dep_file.m"
  }
#line 366 "make.module_dep_file.m"
}

#line 352 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_8(
#line 352 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 352 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 352 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 352 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 352 "make.module_dep_file.m"
{
#line 352 "make.module_dep_file.m"
  {
#line 352 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 352 "make.module_dep_file.m"
    {
#line 352 "make.module_dep_file.m"
      make__module_dep_file__write_foreign_import_module_info_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 352 "make.module_dep_file.m"
      return;
    }
#line 352 "make.module_dep_file.m"
  }
#line 352 "make.module_dep_file.m"
}

#line 349 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_7(
#line 349 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 349 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 349 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 349 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 349 "make.module_dep_file.m"
{
#line 349 "make.module_dep_file.m"
  {
#line 349 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 349 "make.module_dep_file.m"
    {
#line 349 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_foreign_language_string_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 349 "make.module_dep_file.m"
      return;
    }
#line 349 "make.module_dep_file.m"
  }
#line 349 "make.module_dep_file.m"
}

#line 341 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_6(
#line 341 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 341 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 341 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 341 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 341 "make.module_dep_file.m"
{
#line 341 "make.module_dep_file.m"
  {
#line 341 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 341 "make.module_dep_file.m"
    {
#line 341 "make.module_dep_file.m"
      make__module_dep_file__IntroducedFrom__pred__do_write_module_dep_file_2__341__1_3_p_0(((MR_String) make__module_dep_file__wrapper_arg_1));
#line 341 "make.module_dep_file.m"
      return;
    }
#line 341 "make.module_dep_file.m"
  }
#line 341 "make.module_dep_file.m"
}

#line 338 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_5(
#line 338 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 338 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 338 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 338 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 338 "make.module_dep_file.m"
{
#line 338 "make.module_dep_file.m"
  {
#line 338 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 338 "make.module_dep_file.m"
    {
#line 338 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 338 "make.module_dep_file.m"
      return;
    }
#line 338 "make.module_dep_file.m"
  }
#line 338 "make.module_dep_file.m"
}

#line 335 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_4(
#line 335 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 335 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 335 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 335 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 335 "make.module_dep_file.m"
{
#line 335 "make.module_dep_file.m"
  {
#line 335 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 335 "make.module_dep_file.m"
    {
#line 335 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 335 "make.module_dep_file.m"
      return;
    }
#line 335 "make.module_dep_file.m"
  }
#line 335 "make.module_dep_file.m"
}

#line 332 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_3(
#line 332 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 332 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 332 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 332 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 332 "make.module_dep_file.m"
{
#line 332 "make.module_dep_file.m"
  {
#line 332 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 332 "make.module_dep_file.m"
    {
#line 332 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 332 "make.module_dep_file.m"
      return;
    }
#line 332 "make.module_dep_file.m"
  }
#line 332 "make.module_dep_file.m"
}

#line 329 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_2(
#line 329 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 329 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 329 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 329 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 329 "make.module_dep_file.m"
{
#line 329 "make.module_dep_file.m"
  {
#line 329 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 329 "make.module_dep_file.m"
    {
#line 329 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 329 "make.module_dep_file.m"
      return;
    }
#line 329 "make.module_dep_file.m"
  }
#line 329 "make.module_dep_file.m"
}

#line 326 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0_1(
#line 326 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 326 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 326 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 326 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3)
#line 326 "make.module_dep_file.m"
{
#line 326 "make.module_dep_file.m"
  {
#line 326 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;

#line 326 "make.module_dep_file.m"
    {
#line 326 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(((MR_Word) make__module_dep_file__wrapper_arg_1));
#line 326 "make.module_dep_file.m"
      return;
    }
#line 326 "make.module_dep_file.m"
  }
#line 326 "make.module_dep_file.m"
}

#line 312 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_2_4_p_0(
#line 312 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Imports_5,
#line 312 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Version_6)
#line 312 "make.module_dep_file.m"
{
#line 315 "make.module_dep_file.m"
  {
#line 315 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 315 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_357_357;
#line 315 "make.module_dep_file.m"
    MR_Word make__module_dep_file__TypeCtorInfo_380_380;
#line 315 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__VersionNumber_8;
#line 315 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ForeignLanguages_10;
#line 315 "make.module_dep_file.m"
    MR_String make__module_dep_file__ContainsForeignExportStr_11;
#line 315 "make.module_dep_file.m"
    MR_String make__module_dep_file__HasMainStr_12;
#line 315 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_20_20;
#line 315 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_24_24;
#line 315 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28;
#line 315 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_34_34;
#line 315 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_40_40;
#line 315 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_46_46;
#line 315 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_52_52;
#line 315 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_58_58;
#line 315 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_70_70;
#line 315 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_74_74;
#line 315 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_77_77;
#line 315 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_81_81;
#line 320 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_94_94;
#line 320 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_95_95;
#line 320 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_96_96;
#line 320 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_97_97;
#line 320 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_98_98;
#line 320 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_99_99;
#line 320 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_100_100;
#line 320 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_101_101;
#line 320 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_102_102;
#line 320 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_103_103;
#line 320 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_104_104;
#line 320 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_105_105;
#line 320 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_106_106;
#line 320 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_107_107;
#line 320 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_108_108;
#line 320 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_109_109;
#line 320 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_110_110;
#line 320 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_111_111;
#line 320 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_112_112;
#line 320 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_113_113;
#line 322 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_114_114;
#line 322 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_115_115;
#line 322 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_116_116;
#line 322 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_117_117;
#line 322 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_118_118;
#line 322 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_119_119;
#line 322 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_120_120;
#line 322 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_121_121;
#line 322 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_122_122;
#line 322 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_123_123;
#line 322 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_124_124;
#line 322 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_125_125;
#line 322 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_126_126;
#line 322 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_127_127;
#line 322 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_128_128;
#line 322 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_129_129;
#line 322 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_130_130;
#line 322 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_131_131;
#line 322 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_132_132;
#line 322 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_133_133;
#line 325 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_134_134;
#line 325 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_135_135;
#line 325 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_136_136;
#line 325 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_137_137;
#line 325 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_138_138;
#line 325 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_139_139;
#line 325 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_140_140;
#line 325 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_141_141;
#line 325 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_142_142;
#line 325 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_143_143;
#line 325 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_144_144;
#line 325 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_145_145;
#line 325 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_146_146;
#line 325 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_147_147;
#line 325 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_148_148;
#line 325 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_149_149;
#line 325 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_150_150;
#line 325 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_151_151;
#line 325 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_152_152;
#line 325 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_153_153;
#line 328 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_154_154;
#line 328 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_155_155;
#line 328 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_156_156;
#line 328 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_157_157;
#line 328 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_158_158;
#line 328 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_159_159;
#line 328 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_160_160;
#line 328 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_161_161;
#line 328 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_162_162;
#line 328 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_163_163;
#line 328 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_164_164;
#line 328 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_165_165;
#line 328 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_166_166;
#line 328 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_167_167;
#line 328 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_168_168;
#line 328 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_169_169;
#line 328 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_170_170;
#line 328 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_171_171;
#line 328 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_172_172;
#line 328 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_173_173;
#line 331 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_174_174;
#line 331 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_175_175;
#line 331 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_176_176;
#line 331 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_177_177;
#line 331 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_178_178;
#line 331 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_179_179;
#line 331 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_180_180;
#line 331 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_181_181;
#line 331 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_182_182;
#line 331 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_183_183;
#line 331 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_184_184;
#line 331 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_185_185;
#line 331 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_186_186;
#line 331 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_187_187;
#line 331 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_188_188;
#line 331 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_189_189;
#line 331 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_190_190;
#line 331 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_191_191;
#line 331 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_192_192;
#line 331 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_193_193;
#line 334 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_194_194;
#line 334 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_195_195;
#line 334 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_196_196;
#line 334 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_197_197;
#line 334 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_198_198;
#line 334 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_199_199;
#line 334 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_200_200;
#line 334 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_201_201;
#line 334 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_202_202;
#line 334 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_203_203;
#line 334 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_204_204;
#line 334 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_205_205;
#line 334 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_206_206;
#line 334 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_207_207;
#line 334 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_208_208;
#line 334 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_209_209;
#line 334 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_210_210;
#line 334 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_211_211;
#line 334 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_212_212;
#line 334 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_213_213;
#line 337 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_214_214;
#line 337 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_215_215;
#line 337 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_216_216;
#line 337 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_217_217;
#line 337 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_218_218;
#line 337 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_219_219;
#line 337 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_220_220;
#line 337 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_221_221;
#line 337 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_222_222;
#line 337 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_223_223;
#line 337 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_224_224;
#line 337 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_225_225;
#line 337 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_226_226;
#line 337 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_227_227;
#line 337 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_228_228;
#line 337 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_229_229;
#line 337 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_230_230;
#line 337 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_231_231;
#line 337 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_232_232;
#line 337 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_233_233;
#line 340 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_234_234;
#line 340 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_235_235;
#line 340 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_236_236;
#line 340 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_237_237;
#line 340 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_238_238;
#line 340 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_239_239;
#line 340 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_240_240;
#line 340 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_241_241;
#line 340 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_242_242;
#line 340 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_243_243;
#line 340 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_244_244;
#line 340 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_245_245;
#line 340 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_246_246;
#line 340 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_247_247;
#line 340 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_248_248;
#line 340 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_249_249;
#line 340 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_250_250;
#line 340 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_251_251;
#line 340 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_252_252;
#line 340 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_253_253;
#line 345 "make.module_dep_file.m"
    MR_Word make__module_dep_file__LangList_9;
#line 343 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_64_64;
#line 343 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_254_254;
#line 343 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_255_255;
#line 343 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_256_256;
#line 343 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_257_257;
#line 343 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_258_258;
#line 343 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_259_259;
#line 343 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_260_260;
#line 343 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_261_261;
#line 343 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_262_262;
#line 343 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_263_263;
#line 343 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_264_264;
#line 343 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_265_265;
#line 343 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_266_266;
#line 343 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_267_267;
#line 343 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_268_268;
#line 343 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_269_269;
#line 343 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_270_270;
#line 343 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_271_271;
#line 343 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_272_272;
#line 343 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_273_273;
#line 351 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_274_274;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_275_275;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_276_276;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_277_277;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_278_278;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_279_279;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_280_280;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_281_281;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_282_282;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_283_283;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_284_284;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_285_285;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_286_286;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_287_287;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_288_288;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_289_289;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_290_290;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_291_291;
#line 351 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_292_292;
#line 351 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_293_293;
#line 354 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_294_294;
#line 354 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_295_295;
#line 354 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_296_296;
#line 354 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_297_297;
#line 354 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_298_298;
#line 354 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_299_299;
#line 354 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_300_300;
#line 354 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_301_301;
#line 354 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_302_302;
#line 354 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_303_303;
#line 354 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_304_304;
#line 354 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_305_305;
#line 354 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_306_306;
#line 354 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_307_307;
#line 354 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_308_308;
#line 354 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_309_309;
#line 354 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_310_310;
#line 354 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_311_311;
#line 354 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_312_312;
#line 354 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_313_313;
#line 358 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_314_314;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_315_315;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_316_316;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_317_317;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_318_318;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_319_319;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_320_320;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_321_321;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_322_322;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_323_323;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_324_324;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_325_325;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_326_326;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_327_327;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_328_328;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_329_329;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_330_330;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_331_331;
#line 358 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_332_332;
#line 358 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_333_333;

#line 316 "make.module_dep_file.m"
    {
#line 316 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "module(");
    }
#line 317 "make.module_dep_file.m"
    {
#line 317 "make.module_dep_file.m"
      make__module_dep_file__version_number_2_p_0(make__module_dep_file__Version_6, &make__module_dep_file__VersionNumber_8);
    }
#line 318 "make.module_dep_file.m"
    {
#line 318 "make.module_dep_file.m"
      mercury__io__write_int_3_p_0(make__module_dep_file__VersionNumber_8);
    }
#line 319 "make.module_dep_file.m"
    {
#line 319 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) ", \"");
    }
#line 320 "make.module_dep_file.m"
    make__module_dep_file__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 320 "make.module_dep_file.m"
    make__module_dep_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 320 "make.module_dep_file.m"
    make__module_dep_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 320 "make.module_dep_file.m"
    make__module_dep_file__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 320 "make.module_dep_file.m"
    make__module_dep_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 320 "make.module_dep_file.m"
    make__module_dep_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 320 "make.module_dep_file.m"
    make__module_dep_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 320 "make.module_dep_file.m"
    make__module_dep_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 320 "make.module_dep_file.m"
    make__module_dep_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 320 "make.module_dep_file.m"
    make__module_dep_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 320 "make.module_dep_file.m"
    make__module_dep_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 320 "make.module_dep_file.m"
    make__module_dep_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 320 "make.module_dep_file.m"
    make__module_dep_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 320 "make.module_dep_file.m"
    make__module_dep_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 320 "make.module_dep_file.m"
    make__module_dep_file__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 320 "make.module_dep_file.m"
    make__module_dep_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 320 "make.module_dep_file.m"
    make__module_dep_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 320 "make.module_dep_file.m"
    make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 320 "make.module_dep_file.m"
    make__module_dep_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 320 "make.module_dep_file.m"
    make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 320 "make.module_dep_file.m"
    make__module_dep_file__V_113_113 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 320 "make.module_dep_file.m"
    {
#line 320 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__V_20_20);
    }
#line 321 "make.module_dep_file.m"
    {
#line 321 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\",\n\t");
    }
#line 322 "make.module_dep_file.m"
    make__module_dep_file__V_114_114 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 322 "make.module_dep_file.m"
    make__module_dep_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 322 "make.module_dep_file.m"
    make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 322 "make.module_dep_file.m"
    make__module_dep_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 322 "make.module_dep_file.m"
    make__module_dep_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 322 "make.module_dep_file.m"
    make__module_dep_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 322 "make.module_dep_file.m"
    make__module_dep_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 322 "make.module_dep_file.m"
    make__module_dep_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 322 "make.module_dep_file.m"
    make__module_dep_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 322 "make.module_dep_file.m"
    make__module_dep_file__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 322 "make.module_dep_file.m"
    make__module_dep_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 322 "make.module_dep_file.m"
    make__module_dep_file__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 322 "make.module_dep_file.m"
    make__module_dep_file__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 322 "make.module_dep_file.m"
    make__module_dep_file__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 322 "make.module_dep_file.m"
    make__module_dep_file__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 322 "make.module_dep_file.m"
    make__module_dep_file__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 322 "make.module_dep_file.m"
    make__module_dep_file__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 322 "make.module_dep_file.m"
    make__module_dep_file__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 322 "make.module_dep_file.m"
    make__module_dep_file__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 322 "make.module_dep_file.m"
    make__module_dep_file__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 322 "make.module_dep_file.m"
    make__module_dep_file__V_133_133 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 322 "make.module_dep_file.m"
    {
#line 322 "make.module_dep_file.m"
      parse_tree__mercury_to_mercury__mercury_output_bracketed_sym_name_3_p_0(make__module_dep_file__V_24_24);
    }
#line 324 "make.module_dep_file.m"
    {
#line 324 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t{");
    }
#line 325 "make.module_dep_file.m"
    make__module_dep_file__V_134_134 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 325 "make.module_dep_file.m"
    make__module_dep_file__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 325 "make.module_dep_file.m"
    make__module_dep_file__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 325 "make.module_dep_file.m"
    make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 325 "make.module_dep_file.m"
    make__module_dep_file__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 325 "make.module_dep_file.m"
    make__module_dep_file__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 325 "make.module_dep_file.m"
    make__module_dep_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 325 "make.module_dep_file.m"
    make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 325 "make.module_dep_file.m"
    make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 325 "make.module_dep_file.m"
    make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 325 "make.module_dep_file.m"
    make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 325 "make.module_dep_file.m"
    make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 325 "make.module_dep_file.m"
    make__module_dep_file__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 325 "make.module_dep_file.m"
    make__module_dep_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 325 "make.module_dep_file.m"
    make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 325 "make.module_dep_file.m"
    make__module_dep_file__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 325 "make.module_dep_file.m"
    make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 325 "make.module_dep_file.m"
    make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 325 "make.module_dep_file.m"
    make__module_dep_file__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 325 "make.module_dep_file.m"
    make__module_dep_file__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 325 "make.module_dep_file.m"
    make__module_dep_file__V_153_153 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 8410 "make.module_dep_file.c"
    make__module_dep_file__TypeCtorInfo_357_357 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 325 "make.module_dep_file.m"
    {
#line 325 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_357_357, make__module_dep_file__V_28_28, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[1]);
    }
#line 327 "make.module_dep_file.m"
    {
#line 327 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 328 "make.module_dep_file.m"
    make__module_dep_file__V_154_154 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 328 "make.module_dep_file.m"
    make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 328 "make.module_dep_file.m"
    make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 328 "make.module_dep_file.m"
    make__module_dep_file__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 328 "make.module_dep_file.m"
    make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 328 "make.module_dep_file.m"
    make__module_dep_file__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 328 "make.module_dep_file.m"
    make__module_dep_file__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 328 "make.module_dep_file.m"
    make__module_dep_file__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 328 "make.module_dep_file.m"
    make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 328 "make.module_dep_file.m"
    make__module_dep_file__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 328 "make.module_dep_file.m"
    make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 328 "make.module_dep_file.m"
    make__module_dep_file__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 328 "make.module_dep_file.m"
    make__module_dep_file__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 328 "make.module_dep_file.m"
    make__module_dep_file__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 328 "make.module_dep_file.m"
    make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 328 "make.module_dep_file.m"
    make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 328 "make.module_dep_file.m"
    make__module_dep_file__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 328 "make.module_dep_file.m"
    make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 328 "make.module_dep_file.m"
    make__module_dep_file__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 328 "make.module_dep_file.m"
    make__module_dep_file__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 328 "make.module_dep_file.m"
    make__module_dep_file__V_173_173 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 328 "make.module_dep_file.m"
    {
#line 328 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_357_357, make__module_dep_file__V_34_34, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[2]);
    }
#line 330 "make.module_dep_file.m"
    {
#line 330 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 331 "make.module_dep_file.m"
    make__module_dep_file__V_174_174 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 331 "make.module_dep_file.m"
    make__module_dep_file__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 331 "make.module_dep_file.m"
    make__module_dep_file__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 331 "make.module_dep_file.m"
    make__module_dep_file__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 331 "make.module_dep_file.m"
    make__module_dep_file__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 331 "make.module_dep_file.m"
    make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 331 "make.module_dep_file.m"
    make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 331 "make.module_dep_file.m"
    make__module_dep_file__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 331 "make.module_dep_file.m"
    make__module_dep_file__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 331 "make.module_dep_file.m"
    make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 331 "make.module_dep_file.m"
    make__module_dep_file__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 331 "make.module_dep_file.m"
    make__module_dep_file__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 331 "make.module_dep_file.m"
    make__module_dep_file__V_185_185 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 331 "make.module_dep_file.m"
    make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 331 "make.module_dep_file.m"
    make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 331 "make.module_dep_file.m"
    make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 331 "make.module_dep_file.m"
    make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 331 "make.module_dep_file.m"
    make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 331 "make.module_dep_file.m"
    make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 331 "make.module_dep_file.m"
    make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 331 "make.module_dep_file.m"
    make__module_dep_file__V_193_193 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 331 "make.module_dep_file.m"
    {
#line 331 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_357_357, make__module_dep_file__V_40_40, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[3]);
    }
#line 333 "make.module_dep_file.m"
    {
#line 333 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 334 "make.module_dep_file.m"
    make__module_dep_file__V_194_194 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 334 "make.module_dep_file.m"
    make__module_dep_file__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 334 "make.module_dep_file.m"
    make__module_dep_file__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 334 "make.module_dep_file.m"
    make__module_dep_file__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 334 "make.module_dep_file.m"
    make__module_dep_file__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 334 "make.module_dep_file.m"
    make__module_dep_file__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 334 "make.module_dep_file.m"
    make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 334 "make.module_dep_file.m"
    make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 334 "make.module_dep_file.m"
    make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 334 "make.module_dep_file.m"
    make__module_dep_file__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 334 "make.module_dep_file.m"
    make__module_dep_file__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 334 "make.module_dep_file.m"
    make__module_dep_file__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 334 "make.module_dep_file.m"
    make__module_dep_file__V_205_205 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 334 "make.module_dep_file.m"
    make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 334 "make.module_dep_file.m"
    make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 334 "make.module_dep_file.m"
    make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 334 "make.module_dep_file.m"
    make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 334 "make.module_dep_file.m"
    make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 334 "make.module_dep_file.m"
    make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 334 "make.module_dep_file.m"
    make__module_dep_file__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 334 "make.module_dep_file.m"
    make__module_dep_file__V_213_213 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 334 "make.module_dep_file.m"
    {
#line 334 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_357_357, make__module_dep_file__V_46_46, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[4]);
    }
#line 336 "make.module_dep_file.m"
    {
#line 336 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 337 "make.module_dep_file.m"
    make__module_dep_file__V_214_214 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 337 "make.module_dep_file.m"
    make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 337 "make.module_dep_file.m"
    make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 337 "make.module_dep_file.m"
    make__module_dep_file__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 337 "make.module_dep_file.m"
    make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 337 "make.module_dep_file.m"
    make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 337 "make.module_dep_file.m"
    make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 337 "make.module_dep_file.m"
    make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 337 "make.module_dep_file.m"
    make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 337 "make.module_dep_file.m"
    make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 337 "make.module_dep_file.m"
    make__module_dep_file__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 337 "make.module_dep_file.m"
    make__module_dep_file__V_224_224 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 337 "make.module_dep_file.m"
    make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 337 "make.module_dep_file.m"
    make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 337 "make.module_dep_file.m"
    make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 337 "make.module_dep_file.m"
    make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 337 "make.module_dep_file.m"
    make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 337 "make.module_dep_file.m"
    make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 337 "make.module_dep_file.m"
    make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 337 "make.module_dep_file.m"
    make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 337 "make.module_dep_file.m"
    make__module_dep_file__V_233_233 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 337 "make.module_dep_file.m"
    {
#line 337 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_357_357, make__module_dep_file__V_52_52, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[5]);
    }
#line 339 "make.module_dep_file.m"
    {
#line 339 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 340 "make.module_dep_file.m"
    make__module_dep_file__V_234_234 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 340 "make.module_dep_file.m"
    make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 340 "make.module_dep_file.m"
    make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 340 "make.module_dep_file.m"
    make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 340 "make.module_dep_file.m"
    make__module_dep_file__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 340 "make.module_dep_file.m"
    make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 340 "make.module_dep_file.m"
    make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 340 "make.module_dep_file.m"
    make__module_dep_file__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 340 "make.module_dep_file.m"
    make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 340 "make.module_dep_file.m"
    make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 340 "make.module_dep_file.m"
    make__module_dep_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 340 "make.module_dep_file.m"
    make__module_dep_file__V_244_244 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 340 "make.module_dep_file.m"
    make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 340 "make.module_dep_file.m"
    make__module_dep_file__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 340 "make.module_dep_file.m"
    make__module_dep_file__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 340 "make.module_dep_file.m"
    make__module_dep_file__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 340 "make.module_dep_file.m"
    make__module_dep_file__V_249_249 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 340 "make.module_dep_file.m"
    make__module_dep_file__V_250_250 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 340 "make.module_dep_file.m"
    make__module_dep_file__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 340 "make.module_dep_file.m"
    make__module_dep_file__V_252_252 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 340 "make.module_dep_file.m"
    make__module_dep_file__V_253_253 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 340 "make.module_dep_file.m"
    {
#line 340 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, make__module_dep_file__V_58_58, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[6]);
    }
#line 342 "make.module_dep_file.m"
    {
#line 342 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 343 "make.module_dep_file.m"
    make__module_dep_file__V_254_254 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 343 "make.module_dep_file.m"
    make__module_dep_file__V_255_255 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 343 "make.module_dep_file.m"
    make__module_dep_file__V_256_256 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 343 "make.module_dep_file.m"
    make__module_dep_file__V_257_257 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 343 "make.module_dep_file.m"
    make__module_dep_file__V_258_258 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 343 "make.module_dep_file.m"
    make__module_dep_file__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 343 "make.module_dep_file.m"
    make__module_dep_file__V_260_260 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 343 "make.module_dep_file.m"
    make__module_dep_file__V_261_261 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 343 "make.module_dep_file.m"
    make__module_dep_file__V_262_262 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 343 "make.module_dep_file.m"
    make__module_dep_file__V_263_263 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 343 "make.module_dep_file.m"
    make__module_dep_file__V_264_264 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 343 "make.module_dep_file.m"
    make__module_dep_file__V_265_265 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 343 "make.module_dep_file.m"
    make__module_dep_file__V_266_266 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 343 "make.module_dep_file.m"
    make__module_dep_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 343 "make.module_dep_file.m"
    make__module_dep_file__V_267_267 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 343 "make.module_dep_file.m"
    make__module_dep_file__V_268_268 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 343 "make.module_dep_file.m"
    make__module_dep_file__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 343 "make.module_dep_file.m"
    make__module_dep_file__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 343 "make.module_dep_file.m"
    make__module_dep_file__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 343 "make.module_dep_file.m"
    make__module_dep_file__V_272_272 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 343 "make.module_dep_file.m"
    make__module_dep_file__V_273_273 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 343 "make.module_dep_file.m"
    make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__V_64_64)) == (MR_mktag((MR_Integer) 1)));
#line 343 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 343 "make.module_dep_file.m"
      {
#line 343 "make.module_dep_file.m"
        make__module_dep_file__LangList_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__V_64_64, (MR_Integer) 0)));
#line 344 "make.module_dep_file.m"
        {
#line 344 "make.module_dep_file.m"
          make__module_dep_file__ForeignLanguages_10 = mercury__set__to_sorted_list_1_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, make__module_dep_file__LangList_9);
        }
#line 343 "make.module_dep_file.m"
      }
#line 343 "make.module_dep_file.m"
    else
#line 346 "make.module_dep_file.m"
      make__module_dep_file__ForeignLanguages_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 348 "make.module_dep_file.m"
    {
#line 348 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, make__module_dep_file__ForeignLanguages_10, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[7]);
    }
#line 350 "make.module_dep_file.m"
    {
#line 350 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t{");
    }
#line 8753 "make.module_dep_file.c"
    make__module_dep_file__TypeCtorInfo_380_380 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
#line 351 "make.module_dep_file.m"
    make__module_dep_file__V_274_274 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 351 "make.module_dep_file.m"
    make__module_dep_file__V_275_275 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 351 "make.module_dep_file.m"
    make__module_dep_file__V_276_276 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 351 "make.module_dep_file.m"
    make__module_dep_file__V_277_277 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 351 "make.module_dep_file.m"
    make__module_dep_file__V_278_278 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 351 "make.module_dep_file.m"
    make__module_dep_file__V_279_279 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 351 "make.module_dep_file.m"
    make__module_dep_file__V_280_280 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 351 "make.module_dep_file.m"
    make__module_dep_file__V_281_281 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 351 "make.module_dep_file.m"
    make__module_dep_file__V_282_282 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 351 "make.module_dep_file.m"
    make__module_dep_file__V_283_283 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 351 "make.module_dep_file.m"
    make__module_dep_file__V_284_284 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 351 "make.module_dep_file.m"
    make__module_dep_file__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 351 "make.module_dep_file.m"
    make__module_dep_file__V_285_285 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 351 "make.module_dep_file.m"
    make__module_dep_file__V_286_286 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 351 "make.module_dep_file.m"
    make__module_dep_file__V_287_287 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 351 "make.module_dep_file.m"
    make__module_dep_file__V_288_288 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 351 "make.module_dep_file.m"
    make__module_dep_file__V_289_289 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 351 "make.module_dep_file.m"
    make__module_dep_file__V_290_290 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 351 "make.module_dep_file.m"
    make__module_dep_file__V_291_291 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 351 "make.module_dep_file.m"
    make__module_dep_file__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 351 "make.module_dep_file.m"
    make__module_dep_file__V_293_293 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 351 "make.module_dep_file.m"
    {
#line 351 "make.module_dep_file.m"
      make__module_dep_file__V_70_70 = mercury__cord__list_1_f_0(make__module_dep_file__TypeCtorInfo_380_380, make__module_dep_file__V_74_74);
    }
#line 351 "make.module_dep_file.m"
    {
#line 351 "make.module_dep_file.m"
      mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_380_380, make__module_dep_file__V_70_70, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[8]);
    }
#line 353 "make.module_dep_file.m"
    {
#line 353 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "},\n\t");
    }
#line 354 "make.module_dep_file.m"
    make__module_dep_file__V_294_294 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 354 "make.module_dep_file.m"
    make__module_dep_file__V_295_295 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 354 "make.module_dep_file.m"
    make__module_dep_file__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 354 "make.module_dep_file.m"
    make__module_dep_file__V_297_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 354 "make.module_dep_file.m"
    make__module_dep_file__V_298_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 354 "make.module_dep_file.m"
    make__module_dep_file__V_299_299 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 354 "make.module_dep_file.m"
    make__module_dep_file__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 354 "make.module_dep_file.m"
    make__module_dep_file__V_301_301 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 354 "make.module_dep_file.m"
    make__module_dep_file__V_302_302 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 354 "make.module_dep_file.m"
    make__module_dep_file__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 354 "make.module_dep_file.m"
    make__module_dep_file__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 354 "make.module_dep_file.m"
    make__module_dep_file__V_305_305 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 354 "make.module_dep_file.m"
    make__module_dep_file__V_306_306 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 354 "make.module_dep_file.m"
    make__module_dep_file__V_307_307 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 354 "make.module_dep_file.m"
    make__module_dep_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 354 "make.module_dep_file.m"
    make__module_dep_file__V_308_308 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 354 "make.module_dep_file.m"
    make__module_dep_file__V_309_309 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 354 "make.module_dep_file.m"
    make__module_dep_file__V_310_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 354 "make.module_dep_file.m"
    make__module_dep_file__V_311_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 354 "make.module_dep_file.m"
    make__module_dep_file__V_312_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 354 "make.module_dep_file.m"
    make__module_dep_file__V_313_313 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 354 "make.module_dep_file.m"
    {
#line 354 "make.module_dep_file.m"
      make__module_dep_file__contains_foreign_export_to_string_2_p_0(make__module_dep_file__V_77_77, &make__module_dep_file__ContainsForeignExportStr_11);
    }
#line 356 "make.module_dep_file.m"
    {
#line 356 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__ContainsForeignExportStr_11);
    }
#line 357 "make.module_dep_file.m"
    {
#line 357 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) ",\n\t");
    }
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_314_314 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_315_315 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_316_316 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_317_317 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_318_318 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_319_319 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_320_320 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_321_321 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_322_322 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_323_323 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_324_324 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_325_325 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_326_326 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_327_327 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_329_329 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_330_330 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_331_331 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_332_332 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 358 "make.module_dep_file.m"
    make__module_dep_file__V_333_333 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 358 "make.module_dep_file.m"
    {
#line 358 "make.module_dep_file.m"
      make__module_dep_file__has_main_to_string_2_p_0(make__module_dep_file__V_81_81, &make__module_dep_file__HasMainStr_12);
    }
#line 359 "make.module_dep_file.m"
    {
#line 359 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0(make__module_dep_file__HasMainStr_12);
    }
#line 362 "make.module_dep_file.m"
    if ((make__module_dep_file__Version_6 == (MR_Integer) 0))
#line 361 "make.module_dep_file.m"
      {
#line 361 "make.module_dep_file.m"
      }
#line 362 "make.module_dep_file.m"
    else
#line 363 "make.module_dep_file.m"
      {
#line 363 "make.module_dep_file.m"
        MR_Word make__module_dep_file__TypeCtorInfo_384_384;
#line 363 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_85_85;
#line 363 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_89_89;
#line 365 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_334_334;
#line 365 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_335_335;
#line 365 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_336_336;
#line 365 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_337_337;
#line 365 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_338_338;
#line 365 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_339_339;
#line 365 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_340_340;
#line 365 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_341_341;
#line 365 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_342_342;
#line 365 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_343_343;
#line 365 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_344_344;
#line 365 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_345_345;
#line 365 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_346_346;
#line 365 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_347_347;
#line 365 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_348_348;
#line 365 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_349_349;
#line 365 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_350_350;
#line 365 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_351_351;
#line 365 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_352_352;
#line 365 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_353_353;

#line 364 "make.module_dep_file.m"
        {
#line 364 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) ",\n\t{");
        }
#line 8983 "make.module_dep_file.c"
        make__module_dep_file__TypeCtorInfo_384_384 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0;
#line 365 "make.module_dep_file.m"
        make__module_dep_file__V_334_334 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 0)));
#line 365 "make.module_dep_file.m"
        make__module_dep_file__V_335_335 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 1)));
#line 365 "make.module_dep_file.m"
        make__module_dep_file__V_336_336 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 2)));
#line 365 "make.module_dep_file.m"
        make__module_dep_file__V_337_337 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 3)));
#line 365 "make.module_dep_file.m"
        make__module_dep_file__V_338_338 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 4)));
#line 365 "make.module_dep_file.m"
        make__module_dep_file__V_339_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 5)));
#line 365 "make.module_dep_file.m"
        make__module_dep_file__V_340_340 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 6)));
#line 365 "make.module_dep_file.m"
        make__module_dep_file__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 7)));
#line 365 "make.module_dep_file.m"
        make__module_dep_file__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 8)));
#line 365 "make.module_dep_file.m"
        make__module_dep_file__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 9)));
#line 365 "make.module_dep_file.m"
        make__module_dep_file__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 10)));
#line 365 "make.module_dep_file.m"
        make__module_dep_file__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 11)));
#line 365 "make.module_dep_file.m"
        make__module_dep_file__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 12)));
#line 365 "make.module_dep_file.m"
        make__module_dep_file__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 13)));
#line 365 "make.module_dep_file.m"
        make__module_dep_file__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 14)));
#line 365 "make.module_dep_file.m"
        make__module_dep_file__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 15)));
#line 365 "make.module_dep_file.m"
        make__module_dep_file__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 16)));
#line 365 "make.module_dep_file.m"
        make__module_dep_file__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 17)));
#line 365 "make.module_dep_file.m"
        make__module_dep_file__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 18)));
#line 365 "make.module_dep_file.m"
        make__module_dep_file__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 19)));
#line 365 "make.module_dep_file.m"
        make__module_dep_file__V_353_353 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_5, (MR_Integer) 20)));
#line 365 "make.module_dep_file.m"
        {
#line 365 "make.module_dep_file.m"
          make__module_dep_file__V_85_85 = mercury__cord__list_1_f_0(make__module_dep_file__TypeCtorInfo_384_384, make__module_dep_file__V_89_89);
        }
#line 365 "make.module_dep_file.m"
        {
#line 365 "make.module_dep_file.m"
          mercury__io__write_list_5_p_0(make__module_dep_file__TypeCtorInfo_384_384, make__module_dep_file__V_85_85, (MR_String) ", ", (MR_Word) &make__module_dep_file_scalar_common_2[9]);
        }
#line 367 "make.module_dep_file.m"
        {
#line 367 "make.module_dep_file.m"
          mercury__io__write_string_3_p_0((MR_String) "}");
        }
#line 363 "make.module_dep_file.m"
      }
#line 369 "make.module_dep_file.m"
    {
#line 369 "make.module_dep_file.m"
      mercury__io__write_string_3_p_0((MR_String) "\n).\n");
#line 369 "make.module_dep_file.m"
      return;
    }
#line 315 "make.module_dep_file.m"
  }
#line 312 "make.module_dep_file.m"
}

#line 278 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_write_module_dep_file_4_p_0(
#line 278 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_5,
#line 278 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Imports_6)
#line 278 "make.module_dep_file.m"
{
#line 281 "make.module_dep_file.m"
  {
#line 281 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 281 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleName_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 2)));
#line 281 "make.module_dep_file.m"
    MR_String make__module_dep_file__ProgDepFile_9;
#line 281 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ProgDepResult_10;
#line 281 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_19_19;
#line 282 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 0)));
#line 282 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 1)));
#line 282 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 3)));
#line 282 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 4)));
#line 282 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 5)));
#line 282 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 6)));
#line 282 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 7)));
#line 282 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 8)));
#line 282 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 9)));
#line 282 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 10)));
#line 282 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 11)));
#line 282 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 12)));
#line 282 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 13)));
#line 282 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 14)));
#line 282 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 15)));
#line 282 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 16)));
#line 282 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 17)));
#line 282 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 18)));
#line 282 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 19)));
#line 282 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 20)));

#line 284 "make.module_dep_file.m"
    {
#line 284 "make.module_dep_file.m"
      make__module_dep_file__V_19_19 = make__make_module_dep_file_extension_0_f_0();
    }
#line 283 "make.module_dep_file.m"
    {
#line 283 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_5, make__module_dep_file__ModuleName_8, make__module_dep_file__V_19_19, (MR_Integer) 0, &make__module_dep_file__ProgDepFile_9);
    }
#line 285 "make.module_dep_file.m"
    {
#line 285 "make.module_dep_file.m"
      mercury__io__open_output_4_p_0(make__module_dep_file__ProgDepFile_9, &make__module_dep_file__ProgDepResult_10);
    }
#line 293 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__ProgDepResult_10)) == (MR_mktag((MR_Integer) 1))))
#line 294 "make.module_dep_file.m"
      {
#line 294 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__ProgDepResult_10, (MR_Integer) 0)));
#line 294 "make.module_dep_file.m"
        MR_String make__module_dep_file__Msg_16;
#line 294 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_23_23;
#line 294 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_26_26;
#line 294 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_27_27;
#line 294 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_29_29;

#line 295 "make.module_dep_file.m"
        {
#line 295 "make.module_dep_file.m"
          mercury__io__error_message_2_p_0(make__module_dep_file__Error_15, &make__module_dep_file__Msg_16);
        }
#line 297 "make.module_dep_file.m"
        {
#line 297 "make.module_dep_file.m"
          make__module_dep_file__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_29_29, 0) = ((MR_Box) (make__module_dep_file__Msg_16));
#line 297 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &make__module_dep_file_scalar_common_1[4])));
#line 297 "make.module_dep_file.m"
        }
#line 296 "make.module_dep_file.m"
        {
#line 296 "make.module_dep_file.m"
          make__module_dep_file__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_27_27, 0) = ((MR_Box) ((MR_String) " for output: "));
#line 296 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_27_27, 1) = ((MR_Box) (make__module_dep_file__V_29_29));
#line 296 "make.module_dep_file.m"
        }
#line 296 "make.module_dep_file.m"
        {
#line 296 "make.module_dep_file.m"
          make__module_dep_file__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_26_26, 0) = ((MR_Box) (make__module_dep_file__ProgDepFile_9));
#line 296 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_26_26, 1) = ((MR_Box) (make__module_dep_file__V_27_27));
#line 296 "make.module_dep_file.m"
        }
#line 296 "make.module_dep_file.m"
        {
#line 296 "make.module_dep_file.m"
          make__module_dep_file__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_23_23, 0) = ((MR_Box) ((MR_String) "Error opening "));
#line 296 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(1), make__module_dep_file__V_23_23, 1) = ((MR_Box) (make__module_dep_file__V_26_26));
#line 296 "make.module_dep_file.m"
        }
#line 296 "make.module_dep_file.m"
        {
#line 296 "make.module_dep_file.m"
          mercury__io__write_strings_3_p_0(make__module_dep_file__V_23_23);
        }
#line 298 "make.module_dep_file.m"
        {
#line 298 "make.module_dep_file.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 298 "make.module_dep_file.m"
          return;
        }
#line 294 "make.module_dep_file.m"
      }
#line 293 "make.module_dep_file.m"
    else
#line 287 "make.module_dep_file.m"
      {
#line 287 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ProgDepStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__ProgDepResult_10, (MR_Integer) 0)));
#line 287 "make.module_dep_file.m"
        MR_Word make__module_dep_file__OldOutputStream_12;
#line 287 "make.module_dep_file.m"
        MR_Word make__module_dep_file__Version_13;
#line 287 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ForeignIncludeFilesCord_61;
#line 305 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_62_62;
#line 305 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_63_63;
#line 305 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_64_64;
#line 305 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_65_65;
#line 305 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_66_66;
#line 305 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_67_67;
#line 305 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_68_68;
#line 305 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_69_69;
#line 305 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_70_70;
#line 305 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_71_71;
#line 305 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_72_72;
#line 305 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_73_73;
#line 305 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_74_74;
#line 305 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_75_75;
#line 305 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_76_76;
#line 305 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_77_77;
#line 305 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_78_78;
#line 305 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_79_79;
#line 305 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_80_80;
#line 305 "make.module_dep_file.m"
        MR_String make__module_dep_file__V_81_81;
#line 291 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_14_14;

#line 288 "make.module_dep_file.m"
        {
#line 288 "make.module_dep_file.m"
          mercury__io__set_output_stream_4_p_0(make__module_dep_file__ProgDepStream_11, &make__module_dep_file__OldOutputStream_12);
        }
#line 305 "make.module_dep_file.m"
        make__module_dep_file__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 0)));
#line 305 "make.module_dep_file.m"
        make__module_dep_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 1)));
#line 305 "make.module_dep_file.m"
        make__module_dep_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 2)));
#line 305 "make.module_dep_file.m"
        make__module_dep_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 3)));
#line 305 "make.module_dep_file.m"
        make__module_dep_file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 4)));
#line 305 "make.module_dep_file.m"
        make__module_dep_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 5)));
#line 305 "make.module_dep_file.m"
        make__module_dep_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 6)));
#line 305 "make.module_dep_file.m"
        make__module_dep_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 7)));
#line 305 "make.module_dep_file.m"
        make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 8)));
#line 305 "make.module_dep_file.m"
        make__module_dep_file__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 9)));
#line 305 "make.module_dep_file.m"
        make__module_dep_file__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 10)));
#line 305 "make.module_dep_file.m"
        make__module_dep_file__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 11)));
#line 305 "make.module_dep_file.m"
        make__module_dep_file__ForeignIncludeFilesCord_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 12)));
#line 305 "make.module_dep_file.m"
        make__module_dep_file__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 13)));
#line 305 "make.module_dep_file.m"
        make__module_dep_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 14)));
#line 305 "make.module_dep_file.m"
        make__module_dep_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 15)));
#line 305 "make.module_dep_file.m"
        make__module_dep_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 16)));
#line 305 "make.module_dep_file.m"
        make__module_dep_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 17)));
#line 305 "make.module_dep_file.m"
        make__module_dep_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 18)));
#line 305 "make.module_dep_file.m"
        make__module_dep_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 19)));
#line 305 "make.module_dep_file.m"
        make__module_dep_file__V_81_81 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports_6, (MR_Integer) 20)));
#line 306 "make.module_dep_file.m"
        {
#line 306 "make.module_dep_file.m"
          make__module_dep_file__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, make__module_dep_file__ForeignIncludeFilesCord_61);
        }
#line 308 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 307 "make.module_dep_file.m"
          make__module_dep_file__Version_13 = (MR_Integer) 0;
#line 308 "make.module_dep_file.m"
        else
#line 309 "make.module_dep_file.m"
          make__module_dep_file__Version_13 = (MR_Integer) 1;
#line 290 "make.module_dep_file.m"
        {
#line 290 "make.module_dep_file.m"
          make__module_dep_file__do_write_module_dep_file_2_4_p_0(make__module_dep_file__Imports_6, make__module_dep_file__Version_13);
        }
#line 291 "make.module_dep_file.m"
        {
#line 291 "make.module_dep_file.m"
          mercury__io__set_output_stream_4_p_0(make__module_dep_file__OldOutputStream_12, &make__module_dep_file__V_14_14);
        }
#line 292 "make.module_dep_file.m"
        {
#line 292 "make.module_dep_file.m"
          mercury__io__close_output_3_p_0(make__module_dep_file__ProgDepStream_11);
#line 292 "make.module_dep_file.m"
          return;
        }
#line 287 "make.module_dep_file.m"
      }
#line 281 "make.module_dep_file.m"
  }
#line 278 "make.module_dep_file.m"
}

#line 156 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__do_get_module_dependencies_8_p_0(
#line 156 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 156 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 156 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_11,
#line 156 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_MaybeImports_34,
#line 156 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_35,
#line 156 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_36)
#line 156 "make.module_dep_file.m"
{
#line 161 "make.module_dep_file.m"
  {
#line 161 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 161 "make.module_dep_file.m"
    MR_String make__module_dep_file__SourceFileName_15;
#line 161 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeSourceFileTimestamp_16;
#line 161 "make.module_dep_file.m"
    MR_String make__module_dep_file__DepFileName_17;
#line 161 "make.module_dep_file.m"
    MR_Word make__module_dep_file__SearchDirs_18;
#line 161 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeDepFileTimestamp_19;
#line 161 "make.module_dep_file.m"
    MR_Word make__module_dep_file__ModuleDepMap2_31;
#line 161 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_42_42;
#line 161 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_43_43;
#line 161 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_45_45;
#line 161 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_47_47;
#line 161 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_51_51;
#line 161 "make.module_dep_file.m"
    MR_Word make__module_dep_file__STATE_VARIABLE_Info_81_81;
#line 256 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_207_207;
#line 256 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_208_208;
#line 256 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_209_209;
#line 256 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_210_210;
#line 256 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_211_211;
#line 256 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_212_212;
#line 256 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_213_213;
#line 256 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_214_214;
#line 256 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_215_215;
#line 256 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_216_216;
#line 256 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_217_217;
#line 256 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_218_218;
#line 256 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_219_219;
#line 256 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_220_220;
#line 256 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_221_221;
#line 256 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_222_222;
#line 256 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_223_223;
#line 256 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_224_224;
#line 256 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_225_225;
#line 259 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeImportsPrime_32;
#line 257 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv1_MaybeImportsPrime_32;

#line 168 "make.module_dep_file.m"
    {
#line 168 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, (MR_String) ".m", (MR_Integer) 1, &make__module_dep_file__SourceFileName_15);
    }
#line 170 "make.module_dep_file.m"
    {
#line 170 "make.module_dep_file.m"
      make__module_dep_file__V_45_45 = mercury__dir__this_directory_0_f_0();
    }
#line 170 "make.module_dep_file.m"
    {
#line 170 "make.module_dep_file.m"
      make__module_dep_file__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_42_42, 0) = ((MR_Box) (make__module_dep_file__V_45_45));
#line 170 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(1), make__module_dep_file__V_42_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 170 "make.module_dep_file.m"
    }
#line 170 "make.module_dep_file.m"
    {
#line 170 "make.module_dep_file.m"
      make__util__get_file_timestamp_7_p_0(make__module_dep_file__V_42_42, make__module_dep_file__SourceFileName_15, &make__module_dep_file__MaybeSourceFileTimestamp_16, make__module_dep_file__STATE_VARIABLE_Info_0_35, &make__module_dep_file__STATE_VARIABLE_Info_43_43);
    }
#line 174 "make.module_dep_file.m"
    {
#line 174 "make.module_dep_file.m"
      make__module_dep_file__V_47_47 = make__make_module_dep_file_extension_0_f_0();
    }
#line 173 "make.module_dep_file.m"
    {
#line 173 "make.module_dep_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__V_47_47, (MR_Integer) 1, &make__module_dep_file__DepFileName_17);
    }
#line 175 "make.module_dep_file.m"
    {
#line 175 "make.module_dep_file.m"
      libs__globals__lookup_accumulating_option_3_p_0(make__module_dep_file__Globals_9, (MR_Integer) 646, &make__module_dep_file__SearchDirs_18);
    }
#line 177 "make.module_dep_file.m"
    {
#line 177 "make.module_dep_file.m"
      make__util__get_file_timestamp_7_p_0(make__module_dep_file__SearchDirs_18, make__module_dep_file__DepFileName_17, &make__module_dep_file__MaybeDepFileTimestamp_19, make__module_dep_file__STATE_VARIABLE_Info_43_43, &make__module_dep_file__STATE_VARIABLE_Info_51_51);
    }
#line 195 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__MaybeDepFileTimestamp_19)) == (MR_mktag((MR_Integer) 1))))
#line 248 "make.module_dep_file.m"
      if ((make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1))
#line 249 "make.module_dep_file.m"
        {
#line 249 "make.module_dep_file.m"
          MR_Word make__module_dep_file__ModuleDepMap0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 0)));
#line 249 "make.module_dep_file.m"
          MR_Word make__module_dep_file__ModuleDepMap1_30;
#line 250 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 1)));
#line 250 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 2)));
#line 250 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 3)));
#line 250 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 4)));
#line 250 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 5)));
#line 250 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 6)));
#line 250 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 7)));
#line 250 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 8)));
#line 250 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 9)));
#line 250 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 10)));
#line 250 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 11)));
#line 250 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 12)));
#line 250 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 13)));
#line 250 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_181_181 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 14)));
#line 250 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_182_182 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 15)));
#line 250 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_183_183 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 16)));
#line 250 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_184_184 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 17)));
#line 250 "make.module_dep_file.m"
          MR_Integer make__module_dep_file__V_185_185 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 18)));
#line 250 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_186_186 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 19)));
#line 253 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_188_188;
#line 253 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_189_189;
#line 253 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_190_190;
#line 253 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_191_191;
#line 253 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_192_192;
#line 253 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_193_193;
#line 253 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_194_194;
#line 253 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_195_195;
#line 253 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_196_196;
#line 253 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_197_197;
#line 253 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_198_198;
#line 253 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_199_199;
#line 253 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_200_200;
#line 253 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_201_201;
#line 253 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_202_202;
#line 253 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_203_203;
#line 253 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_204_204;
#line 253 "make.module_dep_file.m"
          MR_Integer make__module_dep_file__V_205_205;
#line 253 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_206_206;
#line 253 "make.module_dep_file.m"
          MR_Word make__module_dep_file__V_187_187;

#line 252 "make.module_dep_file.m"
          {
#line 252 "make.module_dep_file.m"
            mercury__map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_11)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), make__module_dep_file__ModuleDepMap0_29, &make__module_dep_file__ModuleDepMap1_30);
          }
#line 253 "make.module_dep_file.m"
          make__module_dep_file__V_187_187 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 0)));
#line 253 "make.module_dep_file.m"
          make__module_dep_file__V_188_188 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 1)));
#line 253 "make.module_dep_file.m"
          make__module_dep_file__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 2)));
#line 253 "make.module_dep_file.m"
          make__module_dep_file__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 3)));
#line 253 "make.module_dep_file.m"
          make__module_dep_file__V_191_191 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 4)));
#line 253 "make.module_dep_file.m"
          make__module_dep_file__V_192_192 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 5)));
#line 253 "make.module_dep_file.m"
          make__module_dep_file__V_193_193 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 6)));
#line 253 "make.module_dep_file.m"
          make__module_dep_file__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 7)));
#line 253 "make.module_dep_file.m"
          make__module_dep_file__V_195_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 8)));
#line 253 "make.module_dep_file.m"
          make__module_dep_file__V_196_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 9)));
#line 253 "make.module_dep_file.m"
          make__module_dep_file__V_197_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 10)));
#line 253 "make.module_dep_file.m"
          make__module_dep_file__V_198_198 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 11)));
#line 253 "make.module_dep_file.m"
          make__module_dep_file__V_199_199 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 12)));
#line 253 "make.module_dep_file.m"
          make__module_dep_file__V_200_200 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 13)));
#line 253 "make.module_dep_file.m"
          make__module_dep_file__V_201_201 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 14)));
#line 253 "make.module_dep_file.m"
          make__module_dep_file__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 15)));
#line 253 "make.module_dep_file.m"
          make__module_dep_file__V_203_203 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 16)));
#line 253 "make.module_dep_file.m"
          make__module_dep_file__V_204_204 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 17)));
#line 253 "make.module_dep_file.m"
          make__module_dep_file__V_205_205 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 18)));
#line 253 "make.module_dep_file.m"
          make__module_dep_file__V_206_206 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_51_51, (MR_Integer) 19)));
#line 253 "make.module_dep_file.m"
          {
#line 253 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_Info_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 253 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap1_30));
#line 253 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 1) = ((MR_Box) (make__module_dep_file__V_188_188));
#line 253 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 2) = ((MR_Box) (make__module_dep_file__V_189_189));
#line 253 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 3) = ((MR_Box) (make__module_dep_file__V_190_190));
#line 253 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 4) = ((MR_Box) (make__module_dep_file__V_191_191));
#line 253 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 5) = ((MR_Box) (make__module_dep_file__V_192_192));
#line 253 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 6) = ((MR_Box) (make__module_dep_file__V_193_193));
#line 253 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 7) = ((MR_Box) (make__module_dep_file__V_194_194));
#line 253 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 8) = ((MR_Box) (make__module_dep_file__V_195_195));
#line 253 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 9) = ((MR_Box) (make__module_dep_file__V_196_196));
#line 253 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 10) = ((MR_Box) (make__module_dep_file__V_197_197));
#line 253 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 11) = ((MR_Box) (make__module_dep_file__V_198_198));
#line 253 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 12) = ((MR_Box) (make__module_dep_file__V_199_199));
#line 253 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 13) = ((MR_Box) (make__module_dep_file__V_200_200));
#line 253 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 14) = ((MR_Box) (make__module_dep_file__V_201_201));
#line 253 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 15) = ((MR_Box) (make__module_dep_file__V_202_202));
#line 253 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 16) = ((MR_Box) (make__module_dep_file__V_203_203));
#line 253 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 17) = ((MR_Box) (make__module_dep_file__V_204_204));
#line 253 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 18) = ((MR_Box) (make__module_dep_file__V_205_205));
#line 253 "make.module_dep_file.m"
            MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, 19) = ((MR_Box) (make__module_dep_file__V_206_206));
#line 253 "make.module_dep_file.m"
          }
#line 249 "make.module_dep_file.m"
        }
#line 248 "make.module_dep_file.m"
      else
#line 246 "make.module_dep_file.m"
        {
#line 246 "make.module_dep_file.m"
          make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_51_51, &make__module_dep_file__STATE_VARIABLE_Info_81_81);
        }
#line 195 "make.module_dep_file.m"
    else
#line 195 "make.module_dep_file.m"
      {
#line 195 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_259_259 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__MaybeDepFileTimestamp_19, (MR_Integer) 0)));

#line 195 "make.module_dep_file.m"
        if (((MR_tag((MR_Word) make__module_dep_file__MaybeSourceFileTimestamp_16)) == (MR_mktag((MR_Integer) 1))))
#line 196 "make.module_dep_file.m"
          {
#line 196 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_57_57;
#line 196 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_59_59;
#line 196 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_MaybeImports_60_60;
#line 206 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_90_90;
#line 206 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_91_91;
#line 206 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_92_92;
#line 206 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_93_93;
#line 206 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_94_94;
#line 206 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_95_95;
#line 206 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_96_96;
#line 206 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_97_97;
#line 206 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_98_98;
#line 206 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_99_99;
#line 206 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_100_100;
#line 206 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_101_101;
#line 206 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_102_102;
#line 206 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_103_103;
#line 206 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_104_104;
#line 206 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_105_105;
#line 206 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_106_106;
#line 206 "make.module_dep_file.m"
            MR_Integer make__module_dep_file__V_107_107;
#line 206 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_108_108;
#line 206 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv0_STATE_VARIABLE_MaybeImports_60_60;
#line 235 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Imports0_23;
#line 208 "make.module_dep_file.m"
            MR_String make__module_dep_file__V_61_61;
#line 208 "make.module_dep_file.m"
            MR_String make__module_dep_file__V_257_257;
#line 209 "make.module_dep_file.m"
            MR_String make__module_dep_file__V_109_109;
#line 209 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_110_110;
#line 209 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_111_111;
#line 209 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_112_112;
#line 209 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_113_113;
#line 209 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_114_114;
#line 209 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_115_115;
#line 209 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_116_116;
#line 209 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_117_117;
#line 209 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_118_118;
#line 209 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_119_119;
#line 209 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_120_120;
#line 209 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_121_121;
#line 209 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_122_122;
#line 209 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_123_123;
#line 209 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_124_124;
#line 209 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_125_125;
#line 209 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_126_126;
#line 209 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_127_127;
#line 209 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_128_128;

#line 198 "make.module_dep_file.m"
            {
#line 198 "make.module_dep_file.m"
              make__module_dep_file__read_module_dependencies_search_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_51_51, &make__module_dep_file__STATE_VARIABLE_Info_57_57);
            }
#line 206 "make.module_dep_file.m"
            make__module_dep_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 0)));
#line 206 "make.module_dep_file.m"
            make__module_dep_file__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 1)));
#line 206 "make.module_dep_file.m"
            make__module_dep_file__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 2)));
#line 206 "make.module_dep_file.m"
            make__module_dep_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 3)));
#line 206 "make.module_dep_file.m"
            make__module_dep_file__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 4)));
#line 206 "make.module_dep_file.m"
            make__module_dep_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 5)));
#line 206 "make.module_dep_file.m"
            make__module_dep_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 6)));
#line 206 "make.module_dep_file.m"
            make__module_dep_file__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 7)));
#line 206 "make.module_dep_file.m"
            make__module_dep_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 8)));
#line 206 "make.module_dep_file.m"
            make__module_dep_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 9)));
#line 206 "make.module_dep_file.m"
            make__module_dep_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 10)));
#line 206 "make.module_dep_file.m"
            make__module_dep_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 11)));
#line 206 "make.module_dep_file.m"
            make__module_dep_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 12)));
#line 206 "make.module_dep_file.m"
            make__module_dep_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 13)));
#line 206 "make.module_dep_file.m"
            make__module_dep_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 14)));
#line 206 "make.module_dep_file.m"
            make__module_dep_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 15)));
#line 206 "make.module_dep_file.m"
            make__module_dep_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 16)));
#line 206 "make.module_dep_file.m"
            make__module_dep_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 17)));
#line 206 "make.module_dep_file.m"
            make__module_dep_file__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 18)));
#line 206 "make.module_dep_file.m"
            make__module_dep_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_57_57, (MR_Integer) 19)));
#line 206 "make.module_dep_file.m"
            {
#line 206 "make.module_dep_file.m"
              mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__V_59_59, ((MR_Box) (make__module_dep_file__ModuleName_11)), &make__module_dep_file__conv0_STATE_VARIABLE_MaybeImports_60_60);
            }
#line 206 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_MaybeImports_60_60 = ((MR_Word) make__module_dep_file__conv0_STATE_VARIABLE_MaybeImports_60_60);
#line 208 "make.module_dep_file.m"
            make__module_dep_file__succeeded = ((MR_tag((MR_Word) make__module_dep_file__STATE_VARIABLE_MaybeImports_60_60)) == (MR_mktag((MR_Integer) 1)));
#line 208 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 208 "make.module_dep_file.m"
              {
#line 208 "make.module_dep_file.m"
                make__module_dep_file__Imports0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), make__module_dep_file__STATE_VARIABLE_MaybeImports_60_60, (MR_Integer) 0)));
#line 209 "make.module_dep_file.m"
                make__module_dep_file__V_109_109 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 0)));
#line 209 "make.module_dep_file.m"
                make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 1)));
#line 209 "make.module_dep_file.m"
                make__module_dep_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 2)));
#line 209 "make.module_dep_file.m"
                make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 3)));
#line 209 "make.module_dep_file.m"
                make__module_dep_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 4)));
#line 209 "make.module_dep_file.m"
                make__module_dep_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 5)));
#line 209 "make.module_dep_file.m"
                make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 6)));
#line 209 "make.module_dep_file.m"
                make__module_dep_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 7)));
#line 209 "make.module_dep_file.m"
                make__module_dep_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 8)));
#line 209 "make.module_dep_file.m"
                make__module_dep_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 9)));
#line 209 "make.module_dep_file.m"
                make__module_dep_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 10)));
#line 209 "make.module_dep_file.m"
                make__module_dep_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 11)));
#line 209 "make.module_dep_file.m"
                make__module_dep_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 12)));
#line 209 "make.module_dep_file.m"
                make__module_dep_file__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 13)));
#line 209 "make.module_dep_file.m"
                make__module_dep_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 14)));
#line 209 "make.module_dep_file.m"
                make__module_dep_file__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 15)));
#line 209 "make.module_dep_file.m"
                make__module_dep_file__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 16)));
#line 209 "make.module_dep_file.m"
                make__module_dep_file__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 17)));
#line 209 "make.module_dep_file.m"
                make__module_dep_file__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 18)));
#line 209 "make.module_dep_file.m"
                make__module_dep_file__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 19)));
#line 209 "make.module_dep_file.m"
                make__module_dep_file__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 20)));
#line 209 "make.module_dep_file.m"
                {
#line 209 "make.module_dep_file.m"
                  make__module_dep_file__V_257_257 = mercury__dir__this_directory_0_f_0();
                }
#line 209 "make.module_dep_file.m"
                make__module_dep_file__succeeded = (strcmp(make__module_dep_file__V_61_61, make__module_dep_file__V_257_257) == 0);
#line 208 "make.module_dep_file.m"
              }
#line 235 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 211 "make.module_dep_file.m"
              {
#line 211 "make.module_dep_file.m"
                MR_String make__module_dep_file__SourceFileName1_24 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 0)));
#line 211 "make.module_dep_file.m"
                MR_Word make__module_dep_file__MaybeSourceFileTimestamp1_25;
#line 211 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_62_62;
#line 211 "make.module_dep_file.m"
                MR_Word make__module_dep_file__STATE_VARIABLE_Info_63_63;
#line 211 "make.module_dep_file.m"
                MR_String make__module_dep_file__V_65_65;
#line 211 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 1)));
#line 211 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 2)));
#line 211 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 3)));
#line 211 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 4)));
#line 211 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 5)));
#line 211 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 6)));
#line 211 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 7)));
#line 211 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 8)));
#line 211 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 9)));
#line 211 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 10)));
#line 211 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 11)));
#line 211 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 12)));
#line 211 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 13)));
#line 211 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 14)));
#line 211 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 15)));
#line 211 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 16)));
#line 211 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 17)));
#line 211 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 18)));
#line 211 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 19)));
#line 211 "make.module_dep_file.m"
                MR_String make__module_dep_file__V_148_148 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_23, (MR_Integer) 20)));

#line 212 "make.module_dep_file.m"
                {
#line 212 "make.module_dep_file.m"
                  make__module_dep_file__V_65_65 = mercury__dir__this_directory_0_f_0();
                }
#line 212 "make.module_dep_file.m"
                {
#line 212 "make.module_dep_file.m"
                  make__module_dep_file__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(1), make__module_dep_file__V_62_62, 0) = ((MR_Box) (make__module_dep_file__V_65_65));
#line 212 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(1), make__module_dep_file__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 212 "make.module_dep_file.m"
                }
#line 212 "make.module_dep_file.m"
                {
#line 212 "make.module_dep_file.m"
                  make__util__get_file_timestamp_7_p_0(make__module_dep_file__V_62_62, make__module_dep_file__SourceFileName1_24, &make__module_dep_file__MaybeSourceFileTimestamp1_25, make__module_dep_file__STATE_VARIABLE_Info_57_57, &make__module_dep_file__STATE_VARIABLE_Info_63_63);
                }
#line 225 "make.module_dep_file.m"
                if (((MR_tag((MR_Word) make__module_dep_file__MaybeSourceFileTimestamp1_25)) == (MR_mktag((MR_Integer) 1))))
#line 226 "make.module_dep_file.m"
                  {
#line 226 "make.module_dep_file.m"
                    MR_String make__module_dep_file__Message_27 = ((MR_String) (MR_hl_field(MR_mktag(1), make__module_dep_file__MaybeSourceFileTimestamp1_25, (MR_Integer) 0)));
#line 226 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_75_75;
#line 232 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_149_149;
#line 232 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_150_150;
#line 232 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_151_151;
#line 232 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_152_152;
#line 232 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_153_153;
#line 232 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_154_154;
#line 232 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_155_155;
#line 232 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_156_156;
#line 232 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_157_157;
#line 232 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_158_158;
#line 232 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_159_159;
#line 232 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_160_160;
#line 232 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_161_161;
#line 232 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_162_162;
#line 232 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_163_163;
#line 232 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_164_164;
#line 232 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_165_165;
#line 232 "make.module_dep_file.m"
                    MR_Integer make__module_dep_file__V_166_166;
#line 232 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__V_167_167;

#line 227 "make.module_dep_file.m"
                    {
#line 227 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0((MR_String) "** Error reading file \140");
                    }
#line 228 "make.module_dep_file.m"
                    {
#line 228 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0(make__module_dep_file__SourceFileName1_24);
                    }
#line 229 "make.module_dep_file.m"
                    {
#line 229 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0((MR_String) "\' to generate dependencies: ");
                    }
#line 230 "make.module_dep_file.m"
                    {
#line 230 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0(make__module_dep_file__Message_27);
                    }
#line 231 "make.module_dep_file.m"
                    {
#line 231 "make.module_dep_file.m"
                      mercury__io__write_string_3_p_0((MR_String) ".\n");
                    }
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 0)));
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 1)));
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 2)));
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 3)));
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 4)));
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 5)));
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 6)));
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 7)));
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 8)));
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 9)));
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 10)));
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 11)));
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 12)));
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 13)));
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 14)));
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 15)));
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 16)));
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 17)));
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__V_166_166 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 18)));
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_63_63, (MR_Integer) 19)));
#line 232 "make.module_dep_file.m"
                    {
#line 232 "make.module_dep_file.m"
                      make__module_dep_file__maybe_write_importing_module_4_p_0(make__module_dep_file__ModuleName_11, make__module_dep_file__V_75_75);
                    }
#line 232 "make.module_dep_file.m"
                    make__module_dep_file__STATE_VARIABLE_Info_81_81 = make__module_dep_file__STATE_VARIABLE_Info_63_63;
#line 226 "make.module_dep_file.m"
                  }
#line 225 "make.module_dep_file.m"
                else
#line 215 "make.module_dep_file.m"
                  {
#line 215 "make.module_dep_file.m"
                    MR_Word make__module_dep_file__SourceFileTimestamp1_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__MaybeSourceFileTimestamp1_25, (MR_Integer) 0)));

#line 217 "make.module_dep_file.m"
                    make__module_dep_file__succeeded = (make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1);
#line 218 "make.module_dep_file.m"
                    if (!(make__module_dep_file__succeeded))
#line 218 "make.module_dep_file.m"
                      {
#line 218 "make.module_dep_file.m"
                        MR_Word make__module_dep_file__V_258_258;

#line 218 "make.module_dep_file.m"
                        {
#line 218 "make.module_dep_file.m"
                          libs__timestamp____Compare____timestamp_0_0(&make__module_dep_file__V_258_258, make__module_dep_file__V_259_259, make__module_dep_file__SourceFileTimestamp1_26);
                        }
#line 218 "make.module_dep_file.m"
                        make__module_dep_file__succeeded = ((MR_Integer) 2 == make__module_dep_file__V_258_258);
#line 218 "make.module_dep_file.m"
                      }
#line 222 "make.module_dep_file.m"
                    if (make__module_dep_file__succeeded)
#line 221 "make.module_dep_file.m"
                      make__module_dep_file__STATE_VARIABLE_Info_81_81 = make__module_dep_file__STATE_VARIABLE_Info_63_63;
#line 222 "make.module_dep_file.m"
                    else
#line 223 "make.module_dep_file.m"
                      {
#line 223 "make.module_dep_file.m"
                        make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_63_63, &make__module_dep_file__STATE_VARIABLE_Info_81_81);
                      }
#line 215 "make.module_dep_file.m"
                  }
#line 211 "make.module_dep_file.m"
              }
#line 235 "make.module_dep_file.m"
            else
#line 236 "make.module_dep_file.m"
              make__module_dep_file__STATE_VARIABLE_Info_81_81 = make__module_dep_file__STATE_VARIABLE_Info_57_57;
#line 196 "make.module_dep_file.m"
          }
#line 195 "make.module_dep_file.m"
        else
#line 180 "make.module_dep_file.m"
          {
#line 180 "make.module_dep_file.m"
            MR_Word make__module_dep_file__SourceFileTimestamp_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__MaybeSourceFileTimestamp_16, (MR_Integer) 0)));

#line 183 "make.module_dep_file.m"
            make__module_dep_file__succeeded = (make__module_dep_file__RebuildModuleDeps_10 == (MR_Integer) 1);
#line 184 "make.module_dep_file.m"
            if (!(make__module_dep_file__succeeded))
#line 184 "make.module_dep_file.m"
              {
#line 184 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_256_256;

#line 184 "make.module_dep_file.m"
                {
#line 184 "make.module_dep_file.m"
                  libs__timestamp____Compare____timestamp_0_0(&make__module_dep_file__V_256_256, make__module_dep_file__V_259_259, make__module_dep_file__SourceFileTimestamp_20);
                }
#line 184 "make.module_dep_file.m"
                make__module_dep_file__succeeded = ((MR_Integer) 2 == make__module_dep_file__V_256_256);
#line 184 "make.module_dep_file.m"
              }
#line 192 "make.module_dep_file.m"
            if (make__module_dep_file__succeeded)
#line 190 "make.module_dep_file.m"
              {
#line 190 "make.module_dep_file.m"
                make__module_dep_file__read_module_dependencies_no_search_7_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_51_51, &make__module_dep_file__STATE_VARIABLE_Info_81_81);
              }
#line 192 "make.module_dep_file.m"
            else
#line 193 "make.module_dep_file.m"
              {
#line 193 "make.module_dep_file.m"
                make__module_dep_file__make_module_dependencies_6_p_0(make__module_dep_file__Globals_9, make__module_dep_file__ModuleName_11, make__module_dep_file__STATE_VARIABLE_Info_51_51, &make__module_dep_file__STATE_VARIABLE_Info_81_81);
              }
#line 180 "make.module_dep_file.m"
          }
#line 195 "make.module_dep_file.m"
      }
#line 256 "make.module_dep_file.m"
    make__module_dep_file__ModuleDepMap2_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 0)));
#line 256 "make.module_dep_file.m"
    make__module_dep_file__V_207_207 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 1)));
#line 256 "make.module_dep_file.m"
    make__module_dep_file__V_208_208 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 2)));
#line 256 "make.module_dep_file.m"
    make__module_dep_file__V_209_209 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 3)));
#line 256 "make.module_dep_file.m"
    make__module_dep_file__V_210_210 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 4)));
#line 256 "make.module_dep_file.m"
    make__module_dep_file__V_211_211 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 5)));
#line 256 "make.module_dep_file.m"
    make__module_dep_file__V_212_212 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 6)));
#line 256 "make.module_dep_file.m"
    make__module_dep_file__V_213_213 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 7)));
#line 256 "make.module_dep_file.m"
    make__module_dep_file__V_214_214 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 8)));
#line 256 "make.module_dep_file.m"
    make__module_dep_file__V_215_215 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 9)));
#line 256 "make.module_dep_file.m"
    make__module_dep_file__V_216_216 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 10)));
#line 256 "make.module_dep_file.m"
    make__module_dep_file__V_217_217 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 11)));
#line 256 "make.module_dep_file.m"
    make__module_dep_file__V_218_218 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 12)));
#line 256 "make.module_dep_file.m"
    make__module_dep_file__V_219_219 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 13)));
#line 256 "make.module_dep_file.m"
    make__module_dep_file__V_220_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 14)));
#line 256 "make.module_dep_file.m"
    make__module_dep_file__V_221_221 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 15)));
#line 256 "make.module_dep_file.m"
    make__module_dep_file__V_222_222 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 16)));
#line 256 "make.module_dep_file.m"
    make__module_dep_file__V_223_223 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 17)));
#line 256 "make.module_dep_file.m"
    make__module_dep_file__V_224_224 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 18)));
#line 256 "make.module_dep_file.m"
    make__module_dep_file__V_225_225 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 19)));
#line 257 "make.module_dep_file.m"
    {
#line 257 "make.module_dep_file.m"
      make__module_dep_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__ModuleDepMap2_31, ((MR_Box) (make__module_dep_file__ModuleName_11)), &make__module_dep_file__conv1_MaybeImportsPrime_32);
    }
#line 257 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 257 "make.module_dep_file.m"
      {
#line 257 "make.module_dep_file.m"
        make__module_dep_file__MaybeImportsPrime_32 = ((MR_Word) make__module_dep_file__conv1_MaybeImportsPrime_32);
#line 257 "make.module_dep_file.m"
        make__module_dep_file__succeeded = MR_TRUE;
#line 257 "make.module_dep_file.m"
      }
#line 259 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 258 "make.module_dep_file.m"
      {
#line 258 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_MaybeImports_34 = make__module_dep_file__MaybeImportsPrime_32;
#line 258 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_Info_36 = make__module_dep_file__STATE_VARIABLE_Info_81_81;
#line 258 "make.module_dep_file.m"
      }
#line 259 "make.module_dep_file.m"
    else
#line 260 "make.module_dep_file.m"
      {
#line 260 "make.module_dep_file.m"
        MR_Word make__module_dep_file__ModuleDepMap_33;
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
        MR_Word make__module_dep_file__V_236_236;
#line 262 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_237_237;
#line 262 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_238_238;
#line 262 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_239_239;
#line 262 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_240_240;
#line 262 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_241_241;
#line 262 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_242_242;
#line 262 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_243_243;
#line 262 "make.module_dep_file.m"
        MR_Integer make__module_dep_file__V_244_244;
#line 262 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_245_245;
#line 262 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_226_226;

#line 260 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_MaybeImports_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 261 "make.module_dep_file.m"
        {
#line 261 "make.module_dep_file.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_11)), ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), make__module_dep_file__ModuleDepMap2_31, &make__module_dep_file__ModuleDepMap_33);
        }
#line 262 "make.module_dep_file.m"
        make__module_dep_file__V_226_226 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 0)));
#line 262 "make.module_dep_file.m"
        make__module_dep_file__V_227_227 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 1)));
#line 262 "make.module_dep_file.m"
        make__module_dep_file__V_228_228 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 2)));
#line 262 "make.module_dep_file.m"
        make__module_dep_file__V_229_229 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 3)));
#line 262 "make.module_dep_file.m"
        make__module_dep_file__V_230_230 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 4)));
#line 262 "make.module_dep_file.m"
        make__module_dep_file__V_231_231 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 5)));
#line 262 "make.module_dep_file.m"
        make__module_dep_file__V_232_232 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 6)));
#line 262 "make.module_dep_file.m"
        make__module_dep_file__V_233_233 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 7)));
#line 262 "make.module_dep_file.m"
        make__module_dep_file__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 8)));
#line 262 "make.module_dep_file.m"
        make__module_dep_file__V_235_235 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 9)));
#line 262 "make.module_dep_file.m"
        make__module_dep_file__V_236_236 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 10)));
#line 262 "make.module_dep_file.m"
        make__module_dep_file__V_237_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 11)));
#line 262 "make.module_dep_file.m"
        make__module_dep_file__V_238_238 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 12)));
#line 262 "make.module_dep_file.m"
        make__module_dep_file__V_239_239 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 13)));
#line 262 "make.module_dep_file.m"
        make__module_dep_file__V_240_240 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 14)));
#line 262 "make.module_dep_file.m"
        make__module_dep_file__V_241_241 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 15)));
#line 262 "make.module_dep_file.m"
        make__module_dep_file__V_242_242 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 16)));
#line 262 "make.module_dep_file.m"
        make__module_dep_file__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 17)));
#line 262 "make.module_dep_file.m"
        make__module_dep_file__V_244_244 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 18)));
#line 262 "make.module_dep_file.m"
        make__module_dep_file__V_245_245 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_81_81, (MR_Integer) 19)));
#line 262 "make.module_dep_file.m"
        {
#line 262 "make.module_dep_file.m"
          MR_Word base;
#line 262 "make.module_dep_file.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 262 "make.module_dep_file.m"
          *make__module_dep_file__STATE_VARIABLE_Info_36 = base;
#line 262 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_33));
#line 262 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_227_227));
#line 262 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_228_228));
#line 262 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_229_229));
#line 262 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_230_230));
#line 262 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_231_231));
#line 262 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_232_232));
#line 262 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_233_233));
#line 262 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_234_234));
#line 262 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_235_235));
#line 262 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_236_236));
#line 262 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_237_237));
#line 262 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_238_238));
#line 262 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_239_239));
#line 262 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_240_240));
#line 262 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_241_241));
#line 262 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_242_242));
#line 262 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_243_243));
#line 262 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_244_244));
#line 262 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_245_245));
#line 262 "make.module_dep_file.m"
        }
#line 260 "make.module_dep_file.m"
      }
#line 161 "make.module_dep_file.m"
  }
#line 156 "make.module_dep_file.m"
}

#line 143 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__maybe_get_module_dependencies_8_p_0(
#line 143 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_9,
#line 143 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_10,
#line 143 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_11,
#line 143 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__MaybeImports_12,
#line 143 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_16,
#line 143 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_17)
#line 143 "make.module_dep_file.m"
{
#line 151 "make.module_dep_file.m"
  {
#line 151 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 151 "make.module_dep_file.m"
    MR_Word make__module_dep_file__MaybeImports0_15;
#line 149 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 0)));
#line 149 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 1)));
#line 149 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 2)));
#line 149 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 3)));
#line 149 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 4)));
#line 149 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 5)));
#line 149 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 6)));
#line 149 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 7)));
#line 149 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 8)));
#line 149 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 9)));
#line 149 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 10)));
#line 149 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 11)));
#line 149 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 12)));
#line 149 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 13)));
#line 149 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 14)));
#line 149 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 15)));
#line 149 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 16)));
#line 149 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 17)));
#line 149 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 18)));
#line 149 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_16, (MR_Integer) 19)));
#line 149 "make.module_dep_file.m"
    MR_Box make__module_dep_file__conv0_MaybeImports0_15;

#line 149 "make.module_dep_file.m"
    {
#line 149 "make.module_dep_file.m"
      make__module_dep_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__V_20_20, ((MR_Box) (make__module_dep_file__ModuleName_11)), &make__module_dep_file__conv0_MaybeImports0_15);
    }
#line 149 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 149 "make.module_dep_file.m"
      {
#line 149 "make.module_dep_file.m"
        make__module_dep_file__MaybeImports0_15 = ((MR_Word) make__module_dep_file__conv0_MaybeImports0_15);
#line 149 "make.module_dep_file.m"
        make__module_dep_file__succeeded = MR_TRUE;
#line 149 "make.module_dep_file.m"
      }
#line 151 "make.module_dep_file.m"
    if (make__module_dep_file__succeeded)
#line 150 "make.module_dep_file.m"
      {
#line 150 "make.module_dep_file.m"
        *make__module_dep_file__MaybeImports_12 = make__module_dep_file__MaybeImports0_15;
#line 150 "make.module_dep_file.m"
        *make__module_dep_file__STATE_VARIABLE_Info_17 = make__module_dep_file__STATE_VARIABLE_Info_0_16;
#line 150 "make.module_dep_file.m"
      }
#line 151 "make.module_dep_file.m"
    else
#line 152 "make.module_dep_file.m"
      {
#line 152 "make.module_dep_file.m"
        make__module_dep_file__do_get_module_dependencies_8_p_0(make__module_dep_file__Globals_9, make__module_dep_file__RebuildModuleDeps_10, make__module_dep_file__ModuleName_11, make__module_dep_file__MaybeImports_12, make__module_dep_file__STATE_VARIABLE_Info_0_16, make__module_dep_file__STATE_VARIABLE_Info_17);
#line 152 "make.module_dep_file.m"
        return;
      }
#line 151 "make.module_dep_file.m"
  }
#line 143 "make.module_dep_file.m"
}

#line 125 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__generate_ancestor_dependencies_9_p_0(
#line 125 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_1,
#line 125 "make.module_dep_file.m"
  MR_Word make__module_dep_file__RebuildModuleDeps_2,
#line 125 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_3,
#line 125 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__4_4,
#line 125 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__HeadVar__5_5,
#line 125 "make.module_dep_file.m"
  MR_Word make__module_dep_file__HeadVar__6_6,
#line 125 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_7)
#line 125 "make.module_dep_file.m"
{
#line 129 "make.module_dep_file.m"
  {
#line 129 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;

#line 129 "make.module_dep_file.m"
    if ((make__module_dep_file__HeadVar__4_4 == (MR_Integer) 0))
#line 132 "make.module_dep_file.m"
      {
#line 132 "make.module_dep_file.m"
        MR_Word make__module_dep_file__MaybeImports_26;

#line 133 "make.module_dep_file.m"
        {
#line 133 "make.module_dep_file.m"
          make__module_dep_file__maybe_get_module_dependencies_8_p_0(make__module_dep_file__Globals_1, make__module_dep_file__RebuildModuleDeps_2, make__module_dep_file__ModuleName_3, &make__module_dep_file__MaybeImports_26, make__module_dep_file__HeadVar__6_6, make__module_dep_file__STATE_VARIABLE_Info_7);
        }
#line 138 "make.module_dep_file.m"
        if ((make__module_dep_file__MaybeImports_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 140 "make.module_dep_file.m"
          *make__module_dep_file__HeadVar__5_5 = (MR_Integer) 1;
#line 138 "make.module_dep_file.m"
        else
#line 137 "make.module_dep_file.m"
          *make__module_dep_file__HeadVar__5_5 = (MR_Integer) 0;
#line 132 "make.module_dep_file.m"
      }
#line 129 "make.module_dep_file.m"
    else
#line 129 "make.module_dep_file.m"
      {
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_18_18;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_19_19;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_34_34;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_35_35;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_36_36;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_37_37;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_38_38;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_39_39;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_40_40;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_41_41;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_42_42;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_43_43;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_44_44;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_45_45;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_46_46;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_47_47;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_48_48;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_49_49;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_50_50;
#line 129 "make.module_dep_file.m"
        MR_Integer make__module_dep_file__V_51_51;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_52_52;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_54_54;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_55_55;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_56_56;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_57_57;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_58_58;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_59_59;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_60_60;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_61_61;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_62_62;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_63_63;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_64_64;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_65_65;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_66_66;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_67_67;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_68_68;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_69_69;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_70_70;
#line 129 "make.module_dep_file.m"
        MR_Integer make__module_dep_file__V_71_71;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_72_72;
#line 129 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_53_53;

#line 129 "make.module_dep_file.m"
        *make__module_dep_file__HeadVar__5_5 = (MR_Integer) 1;
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 0)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 1)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 2)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 3)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 4)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 5)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 6)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 7)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 8)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 9)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 10)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 11)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 12)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 13)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 14)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 15)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 16)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 17)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 18)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 19)));
#line 129 "make.module_dep_file.m"
        {
#line 129 "make.module_dep_file.m"
          make__module_dep_file__V_19_19 = mercury__map__f_101_108_101_109_32_58_61_3_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_3)), make__module_dep_file__V_18_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
        }
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 0)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 1)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 2)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 3)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 4)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 5)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 6)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 7)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 8)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 9)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 10)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 11)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 12)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 13)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 14)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 15)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 16)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 17)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 18)));
#line 129 "make.module_dep_file.m"
        make__module_dep_file__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__HeadVar__6_6, (MR_Integer) 19)));
#line 129 "make.module_dep_file.m"
        {
#line 129 "make.module_dep_file.m"
          MR_Word base;
#line 129 "make.module_dep_file.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 129 "make.module_dep_file.m"
          *make__module_dep_file__STATE_VARIABLE_Info_7 = base;
#line 129 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__V_19_19));
#line 129 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_54_54));
#line 129 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_55_55));
#line 129 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_56_56));
#line 129 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_57_57));
#line 129 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_58_58));
#line 129 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_59_59));
#line 129 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_60_60));
#line 129 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_61_61));
#line 129 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_62_62));
#line 129 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_63_63));
#line 129 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_64_64));
#line 129 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_65_65));
#line 129 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_66_66));
#line 129 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_67_67));
#line 129 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_68_68));
#line 129 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_69_69));
#line 129 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_70_70));
#line 129 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_71_71));
#line 129 "make.module_dep_file.m"
          MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_72_72));
#line 129 "make.module_dep_file.m"
        }
#line 129 "make.module_dep_file.m"
      }
#line 129 "make.module_dep_file.m"
  }
#line 125 "make.module_dep_file.m"
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
    if ((make__module_dep_file__HeadVar__1_1 == (MR_Integer) 0))
#line 80 "make.module_dep_file.m"
      *make__module_dep_file__HeadVar__2_2 = (MR_Integer) 1;
#line 80 "make.module_dep_file.m"
    else
#line 81 "make.module_dep_file.m"
      *make__module_dep_file__HeadVar__2_2 = (MR_Integer) 2;
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
  MR_Word make__module_dep_file__Imports0_6)
#line 37 "make.module_dep_file.m"
{
#line 267 "make.module_dep_file.m"
  {
#line 267 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 267 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Items0_8;
#line 267 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Items_11;
#line 267 "make.module_dep_file.m"
    MR_Word make__module_dep_file__Imports_12;
#line 267 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_15_15;
#line 267 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_19_19;
#line 267 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_20_20;
#line 267 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_21_21;
#line 267 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_23_23;
#line 267 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_31_31;
#line 267 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_38_38;
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file___Specs_9;
#line 269 "make.module_dep_file.m"
    MR_Word make__module_dep_file___Errors_10;
#line 271 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_24_24;
#line 271 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_25_25;
#line 271 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_26_26;
#line 271 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_27_27;
#line 271 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_28_28;
#line 271 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_29_29;
#line 271 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_30_30;
#line 271 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_32_32;
#line 271 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_33_33;
#line 271 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_34_34;
#line 271 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_35_35;
#line 271 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_36_36;
#line 271 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_37_37;
#line 271 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_39_39;
#line 271 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_40_40;
#line 271 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_41_41;
#line 271 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_42_42;
#line 275 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_103_103;
#line 275 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_104_104;
#line 275 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_105_105;
#line 275 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_106_106;
#line 275 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_107_107;
#line 275 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_108_108;
#line 275 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_109_109;
#line 275 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_110_110;
#line 275 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_111_111;
#line 275 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_112_112;
#line 275 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_113_113;
#line 275 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_114_114;
#line 275 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_115_115;
#line 275 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_116_116;
#line 275 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_117_117;
#line 275 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_118_118;
#line 275 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_119_119;
#line 275 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_120_120;
#line 275 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_121_121;
#line 275 "make.module_dep_file.m"
    MR_String make__module_dep_file__V_122_122;

#line 269 "make.module_dep_file.m"
    {
#line 269 "make.module_dep_file.m"
      parse_tree__module_imports__module_and_imports_get_results_4_p_0(make__module_dep_file__Imports0_6, &make__module_dep_file__Items0_8, &make__module_dep_file___Specs_9, &make__module_dep_file___Errors_10);
    }
#line 270 "make.module_dep_file.m"
    {
#line 270 "make.module_dep_file.m"
      parse_tree__write_module_interface_files__strip_imported_items_2_p_0(make__module_dep_file__Items0_8, &make__module_dep_file__Items_11);
    }
#line 271 "make.module_dep_file.m"
    make__module_dep_file__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 0)));
#line 271 "make.module_dep_file.m"
    make__module_dep_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 1)));
#line 271 "make.module_dep_file.m"
    make__module_dep_file__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 2)));
#line 271 "make.module_dep_file.m"
    make__module_dep_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 3)));
#line 271 "make.module_dep_file.m"
    make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 4)));
#line 271 "make.module_dep_file.m"
    make__module_dep_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 5)));
#line 271 "make.module_dep_file.m"
    make__module_dep_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 6)));
#line 271 "make.module_dep_file.m"
    make__module_dep_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 7)));
#line 271 "make.module_dep_file.m"
    make__module_dep_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 8)));
#line 271 "make.module_dep_file.m"
    make__module_dep_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 9)));
#line 271 "make.module_dep_file.m"
    make__module_dep_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 10)));
#line 271 "make.module_dep_file.m"
    make__module_dep_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 11)));
#line 271 "make.module_dep_file.m"
    make__module_dep_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 12)));
#line 271 "make.module_dep_file.m"
    make__module_dep_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 13)));
#line 271 "make.module_dep_file.m"
    make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 14)));
#line 271 "make.module_dep_file.m"
    make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 15)));
#line 271 "make.module_dep_file.m"
    make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 16)));
#line 271 "make.module_dep_file.m"
    make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 17)));
#line 271 "make.module_dep_file.m"
    make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 18)));
#line 271 "make.module_dep_file.m"
    make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 19)));
#line 271 "make.module_dep_file.m"
    make__module_dep_file__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 20)));
#line 274 "make.module_dep_file.m"
    {
#line 274 "make.module_dep_file.m"
      make__module_dep_file__V_19_19 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0);
    }
#line 275 "make.module_dep_file.m"
    make__module_dep_file__V_103_103 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 0)));
#line 275 "make.module_dep_file.m"
    make__module_dep_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 1)));
#line 275 "make.module_dep_file.m"
    make__module_dep_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 2)));
#line 275 "make.module_dep_file.m"
    make__module_dep_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 3)));
#line 275 "make.module_dep_file.m"
    make__module_dep_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 4)));
#line 275 "make.module_dep_file.m"
    make__module_dep_file__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 5)));
#line 275 "make.module_dep_file.m"
    make__module_dep_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 6)));
#line 275 "make.module_dep_file.m"
    make__module_dep_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 7)));
#line 275 "make.module_dep_file.m"
    make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 8)));
#line 275 "make.module_dep_file.m"
    make__module_dep_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 9)));
#line 275 "make.module_dep_file.m"
    make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 10)));
#line 275 "make.module_dep_file.m"
    make__module_dep_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 11)));
#line 275 "make.module_dep_file.m"
    make__module_dep_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 12)));
#line 275 "make.module_dep_file.m"
    make__module_dep_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 13)));
#line 275 "make.module_dep_file.m"
    make__module_dep_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 14)));
#line 275 "make.module_dep_file.m"
    make__module_dep_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 15)));
#line 275 "make.module_dep_file.m"
    make__module_dep_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 16)));
#line 275 "make.module_dep_file.m"
    make__module_dep_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 17)));
#line 275 "make.module_dep_file.m"
    make__module_dep_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 18)));
#line 275 "make.module_dep_file.m"
    make__module_dep_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 19)));
#line 275 "make.module_dep_file.m"
    make__module_dep_file__V_122_122 = ((MR_String) (MR_hl_field(MR_mktag(0), make__module_dep_file__Imports0_6, (MR_Integer) 20)));
#line 275 "make.module_dep_file.m"
    {
#line 275 "make.module_dep_file.m"
      make__module_dep_file__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 275 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_20_20, 0) = ((MR_Box) (make__module_dep_file__V_21_21));
#line 275 "make.module_dep_file.m"
      MR_hl_field(MR_mktag(0), make__module_dep_file__V_20_20, 1) = ((MR_Box) (make__module_dep_file__Items_11));
#line 275 "make.module_dep_file.m"
    }
#line 271 "make.module_dep_file.m"
    {
#line 271 "make.module_dep_file.m"
      parse_tree__module_imports__init_dependencies_8_p_0(make__module_dep_file__V_15_15, make__module_dep_file__V_23_23, make__module_dep_file__V_31_31, make__module_dep_file__V_38_38, make__module_dep_file__V_19_19, make__module_dep_file__Globals_5, make__module_dep_file__V_20_20, &make__module_dep_file__Imports_12);
    }
#line 276 "make.module_dep_file.m"
    {
#line 276 "make.module_dep_file.m"
      make__module_dep_file__do_write_module_dep_file_4_p_0(make__module_dep_file__Globals_5, make__module_dep_file__Imports_12);
#line 276 "make.module_dep_file.m"
      return;
    }
#line 267 "make.module_dep_file.m"
  }
#line 37 "make.module_dep_file.m"
}

#line 108 "make.module_dep_file.m"
static void MR_CALL 
make__module_dep_file__get_module_dependencies_7_p_0_1(
#line 108 "make.module_dep_file.m"
  MR_Box make__module_dep_file__closure_arg,
#line 108 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_1,
#line 108 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_2,
#line 108 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_3,
#line 108 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_4,
#line 108 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_5,
#line 108 "make.module_dep_file.m"
  MR_Box make__module_dep_file__wrapper_arg_6,
#line 108 "make.module_dep_file.m"
  MR_Box * make__module_dep_file__wrapper_arg_7)
#line 108 "make.module_dep_file.m"
{
#line 108 "make.module_dep_file.m"
  {
#line 108 "make.module_dep_file.m"
    MR_Box make__module_dep_file__closure = make__module_dep_file__closure_arg;
#line 108 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv2_HeadVar__5_5;
#line 108 "make.module_dep_file.m"
    MR_Word make__module_dep_file__conv1_STATE_VARIABLE_Info_7;

#line 108 "make.module_dep_file.m"
    {
#line 108 "make.module_dep_file.m"
      make__module_dep_file__generate_ancestor_dependencies_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__closure, (MR_Integer) 4))), ((MR_Word) make__module_dep_file__wrapper_arg_1), ((MR_Word) make__module_dep_file__wrapper_arg_2), &make__module_dep_file__conv2_HeadVar__5_5, ((MR_Word) make__module_dep_file__wrapper_arg_4), &make__module_dep_file__conv1_STATE_VARIABLE_Info_7);
    }
#line 108 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_3 = ((MR_Box) (make__module_dep_file__conv2_HeadVar__5_5));
#line 108 "make.module_dep_file.m"
    *make__module_dep_file__wrapper_arg_5 = ((MR_Box) (make__module_dep_file__conv1_STATE_VARIABLE_Info_7));
#line 108 "make.module_dep_file.m"
  }
#line 108 "make.module_dep_file.m"
}

#line 33 "make.module_dep_file.m"
void MR_CALL 
make__module_dep_file__get_module_dependencies_7_p_0(
#line 33 "make.module_dep_file.m"
  MR_Word make__module_dep_file__Globals_8,
#line 33 "make.module_dep_file.m"
  MR_Word make__module_dep_file__ModuleName_9,
#line 33 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__MaybeImports_10,
#line 33 "make.module_dep_file.m"
  MR_Word make__module_dep_file__STATE_VARIABLE_Info_0_22,
#line 33 "make.module_dep_file.m"
  MR_Word * make__module_dep_file__STATE_VARIABLE_Info_23)
#line 33 "make.module_dep_file.m"
{
#line 85 "make.module_dep_file.m"
  {
#line 85 "make.module_dep_file.m"
    MR_bool make__module_dep_file__succeeded;
#line 85 "make.module_dep_file.m"
    MR_Word make__module_dep_file__RebuildModuleDeps_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 13)));
#line 86 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 86 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 86 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 86 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 86 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 86 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 86 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 86 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 86 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 86 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 86 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 86 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 11)));
#line 86 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 12)));
#line 86 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 14)));
#line 86 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 15)));
#line 86 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 16)));
#line 86 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 17)));
#line 86 "make.module_dep_file.m"
    MR_Integer make__module_dep_file__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 18)));
#line 86 "make.module_dep_file.m"
    MR_Word make__module_dep_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 19)));

#line 91 "make.module_dep_file.m"
    if (((MR_tag((MR_Word) make__module_dep_file__ModuleName_9)) == (MR_mktag((MR_Integer) 1))))
#line 98 "make.module_dep_file.m"
      {
#line 98 "make.module_dep_file.m"
        MR_Word make__module_dep_file__MaybeImportsPrime_17;
#line 94 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 0)));
#line 94 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 1)));
#line 94 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 2)));
#line 94 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 3)));
#line 94 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 4)));
#line 94 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 5)));
#line 94 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 6)));
#line 94 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 7)));
#line 94 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 8)));
#line 94 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 9)));
#line 94 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 10)));
#line 94 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 11)));
#line 94 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 12)));
#line 94 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 13)));
#line 94 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 14)));
#line 94 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 15)));
#line 94 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 16)));
#line 94 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 17)));
#line 94 "make.module_dep_file.m"
        MR_Integer make__module_dep_file__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 18)));
#line 94 "make.module_dep_file.m"
        MR_Word make__module_dep_file__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_0_22, (MR_Integer) 19)));
#line 94 "make.module_dep_file.m"
        MR_Box make__module_dep_file__conv0_MaybeImportsPrime_17;

#line 94 "make.module_dep_file.m"
        {
#line 94 "make.module_dep_file.m"
          make__module_dep_file__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &make__module_dep_file_scalar_common_1[0], make__module_dep_file__V_26_26, ((MR_Box) (make__module_dep_file__ModuleName_9)), &make__module_dep_file__conv0_MaybeImportsPrime_17);
        }
#line 94 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 94 "make.module_dep_file.m"
          {
#line 94 "make.module_dep_file.m"
            make__module_dep_file__MaybeImportsPrime_17 = ((MR_Word) make__module_dep_file__conv0_MaybeImportsPrime_17);
#line 94 "make.module_dep_file.m"
            make__module_dep_file__succeeded = MR_TRUE;
#line 94 "make.module_dep_file.m"
          }
#line 98 "make.module_dep_file.m"
        if (make__module_dep_file__succeeded)
#line 97 "make.module_dep_file.m"
          {
#line 97 "make.module_dep_file.m"
            *make__module_dep_file__MaybeImports_10 = make__module_dep_file__MaybeImportsPrime_17;
#line 97 "make.module_dep_file.m"
            *make__module_dep_file__STATE_VARIABLE_Info_23 = make__module_dep_file__STATE_VARIABLE_Info_0_22;
#line 97 "make.module_dep_file.m"
          }
#line 98 "make.module_dep_file.m"
        else
#line 106 "make.module_dep_file.m"
          {
#line 106 "make.module_dep_file.m"
            MR_Word make__module_dep_file__TypeCtorInfo_122_122;
#line 106 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Ancestors_18;
#line 106 "make.module_dep_file.m"
            MR_Word make__module_dep_file__Error_19;
#line 106 "make.module_dep_file.m"
            MR_Word make__module_dep_file__V_27_27;
#line 106 "make.module_dep_file.m"
            MR_Word make__module_dep_file__STATE_VARIABLE_Info_29_29;
#line 107 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv5_Error_19;
#line 107 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv4_STATE_VARIABLE_Info_29_29;
#line 107 "make.module_dep_file.m"
            MR_Box make__module_dep_file__conv3_STATE_VARIABLE_IO_30_30;

#line 106 "make.module_dep_file.m"
            {
#line 106 "make.module_dep_file.m"
              make__module_dep_file__Ancestors_18 = mdbcomp__sym_name__get_ancestors_1_f_0(make__module_dep_file__ModuleName_9);
            }
#line 108 "make.module_dep_file.m"
            {
#line 108 "make.module_dep_file.m"
              make__module_dep_file__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 108 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 0) = ((MR_Box) (&make__module_dep_file_scalar_common_3[0]));
#line 108 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 1) = ((MR_Box) (make__module_dep_file__get_module_dependencies_7_p_0_1));
#line 108 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 108 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 3) = ((MR_Box) (make__module_dep_file__Globals_8));
#line 108 "make.module_dep_file.m"
              MR_hl_field(MR_mktag(0), make__module_dep_file__V_27_27, 4) = ((MR_Box) (make__module_dep_file__RebuildModuleDeps_13));
#line 108 "make.module_dep_file.m"
            }
#line 11253 "make.module_dep_file.c"
            make__module_dep_file__TypeCtorInfo_122_122 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 107 "make.module_dep_file.m"
            {
#line 107 "make.module_dep_file.m"
              mercury__list__foldl3_8_p_2(make__module_dep_file__TypeCtorInfo_122_122, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_Word) &make__make__type_ctor_info_make_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, make__module_dep_file__V_27_27, make__module_dep_file__Ancestors_18, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv5_Error_19, ((MR_Box) (make__module_dep_file__STATE_VARIABLE_Info_0_22)), &make__module_dep_file__conv4_STATE_VARIABLE_Info_29_29, ((MR_Box) ((MR_Integer) 0)), &make__module_dep_file__conv3_STATE_VARIABLE_IO_30_30);
            }
#line 107 "make.module_dep_file.m"
            make__module_dep_file__Error_19 = ((MR_Word) make__module_dep_file__conv5_Error_19);
#line 107 "make.module_dep_file.m"
            make__module_dep_file__STATE_VARIABLE_Info_29_29 = ((MR_Word) make__module_dep_file__conv4_STATE_VARIABLE_Info_29_29);
#line 117 "make.module_dep_file.m"
            if ((make__module_dep_file__Error_19 == (MR_Integer) 0))
#line 119 "make.module_dep_file.m"
              {
#line 119 "make.module_dep_file.m"
                make__module_dep_file__maybe_get_module_dependencies_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_13, make__module_dep_file__ModuleName_9, make__module_dep_file__MaybeImports_10, make__module_dep_file__STATE_VARIABLE_Info_29_29, make__module_dep_file__STATE_VARIABLE_Info_23);
#line 119 "make.module_dep_file.m"
                return;
              }
#line 117 "make.module_dep_file.m"
            else
#line 111 "make.module_dep_file.m"
              {
#line 111 "make.module_dep_file.m"
                MR_Word make__module_dep_file__ModuleDepMap0_20;
#line 111 "make.module_dep_file.m"
                MR_Word make__module_dep_file__ModuleDepMap_21;
#line 113 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_74_74;
#line 113 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_75_75;
#line 113 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_76_76;
#line 113 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_77_77;
#line 113 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_78_78;
#line 113 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_79_79;
#line 113 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_80_80;
#line 113 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_81_81;
#line 113 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_82_82;
#line 113 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_83_83;
#line 113 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_84_84;
#line 113 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_85_85;
#line 113 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_86_86;
#line 113 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_87_87;
#line 113 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_88_88;
#line 113 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_89_89;
#line 113 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_90_90;
#line 113 "make.module_dep_file.m"
                MR_Integer make__module_dep_file__V_91_91;
#line 113 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_92_92;
#line 116 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_94_94;
#line 116 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_95_95;
#line 116 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_96_96;
#line 116 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_97_97;
#line 116 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_98_98;
#line 116 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_99_99;
#line 116 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_100_100;
#line 116 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_101_101;
#line 116 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_102_102;
#line 116 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_103_103;
#line 116 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_104_104;
#line 116 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_105_105;
#line 116 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_106_106;
#line 116 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_107_107;
#line 116 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_108_108;
#line 116 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_109_109;
#line 116 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_110_110;
#line 116 "make.module_dep_file.m"
                MR_Integer make__module_dep_file__V_111_111;
#line 116 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_112_112;
#line 116 "make.module_dep_file.m"
                MR_Word make__module_dep_file__V_93_93;

#line 112 "make.module_dep_file.m"
                *make__module_dep_file__MaybeImports_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 113 "make.module_dep_file.m"
                make__module_dep_file__ModuleDepMap0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 0)));
#line 113 "make.module_dep_file.m"
                make__module_dep_file__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 1)));
#line 113 "make.module_dep_file.m"
                make__module_dep_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 2)));
#line 113 "make.module_dep_file.m"
                make__module_dep_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 3)));
#line 113 "make.module_dep_file.m"
                make__module_dep_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 4)));
#line 113 "make.module_dep_file.m"
                make__module_dep_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 5)));
#line 113 "make.module_dep_file.m"
                make__module_dep_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 6)));
#line 113 "make.module_dep_file.m"
                make__module_dep_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 7)));
#line 113 "make.module_dep_file.m"
                make__module_dep_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 8)));
#line 113 "make.module_dep_file.m"
                make__module_dep_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 9)));
#line 113 "make.module_dep_file.m"
                make__module_dep_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 10)));
#line 113 "make.module_dep_file.m"
                make__module_dep_file__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 11)));
#line 113 "make.module_dep_file.m"
                make__module_dep_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 12)));
#line 113 "make.module_dep_file.m"
                make__module_dep_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 13)));
#line 113 "make.module_dep_file.m"
                make__module_dep_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 14)));
#line 113 "make.module_dep_file.m"
                make__module_dep_file__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 15)));
#line 113 "make.module_dep_file.m"
                make__module_dep_file__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 16)));
#line 113 "make.module_dep_file.m"
                make__module_dep_file__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 17)));
#line 113 "make.module_dep_file.m"
                make__module_dep_file__V_91_91 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 18)));
#line 113 "make.module_dep_file.m"
                make__module_dep_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 19)));
#line 115 "make.module_dep_file.m"
                {
#line 115 "make.module_dep_file.m"
                  mercury__map__set_4_p_0(make__module_dep_file__TypeCtorInfo_122_122, (MR_Word) &make__module_dep_file_scalar_common_1[0], ((MR_Box) (make__module_dep_file__ModuleName_9)), ((MR_Box) (*make__module_dep_file__MaybeImports_10)), make__module_dep_file__ModuleDepMap0_20, &make__module_dep_file__ModuleDepMap_21);
                }
#line 116 "make.module_dep_file.m"
                make__module_dep_file__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 0)));
#line 116 "make.module_dep_file.m"
                make__module_dep_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 1)));
#line 116 "make.module_dep_file.m"
                make__module_dep_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 2)));
#line 116 "make.module_dep_file.m"
                make__module_dep_file__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 3)));
#line 116 "make.module_dep_file.m"
                make__module_dep_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 4)));
#line 116 "make.module_dep_file.m"
                make__module_dep_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 5)));
#line 116 "make.module_dep_file.m"
                make__module_dep_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 6)));
#line 116 "make.module_dep_file.m"
                make__module_dep_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 7)));
#line 116 "make.module_dep_file.m"
                make__module_dep_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 8)));
#line 116 "make.module_dep_file.m"
                make__module_dep_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 9)));
#line 116 "make.module_dep_file.m"
                make__module_dep_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 10)));
#line 116 "make.module_dep_file.m"
                make__module_dep_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 11)));
#line 116 "make.module_dep_file.m"
                make__module_dep_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 12)));
#line 116 "make.module_dep_file.m"
                make__module_dep_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 13)));
#line 116 "make.module_dep_file.m"
                make__module_dep_file__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 14)));
#line 116 "make.module_dep_file.m"
                make__module_dep_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 15)));
#line 116 "make.module_dep_file.m"
                make__module_dep_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 16)));
#line 116 "make.module_dep_file.m"
                make__module_dep_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 17)));
#line 116 "make.module_dep_file.m"
                make__module_dep_file__V_111_111 = ((MR_Integer) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 18)));
#line 116 "make.module_dep_file.m"
                make__module_dep_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), make__module_dep_file__STATE_VARIABLE_Info_29_29, (MR_Integer) 19)));
#line 116 "make.module_dep_file.m"
                {
#line 116 "make.module_dep_file.m"
                  MR_Word base;
#line 116 "make.module_dep_file.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 20 * sizeof(MR_Word)), NULL, NULL);
#line 116 "make.module_dep_file.m"
                  *make__module_dep_file__STATE_VARIABLE_Info_23 = base;
#line 116 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (make__module_dep_file__ModuleDepMap_21));
#line 116 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (make__module_dep_file__V_94_94));
#line 116 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (make__module_dep_file__V_95_95));
#line 116 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (make__module_dep_file__V_96_96));
#line 116 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (make__module_dep_file__V_97_97));
#line 116 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (make__module_dep_file__V_98_98));
#line 116 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (make__module_dep_file__V_99_99));
#line 116 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (make__module_dep_file__V_100_100));
#line 116 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (make__module_dep_file__V_101_101));
#line 116 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (make__module_dep_file__V_102_102));
#line 116 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (make__module_dep_file__V_103_103));
#line 116 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (make__module_dep_file__V_104_104));
#line 116 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (make__module_dep_file__V_105_105));
#line 116 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (make__module_dep_file__V_106_106));
#line 116 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (make__module_dep_file__V_107_107));
#line 116 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (make__module_dep_file__V_108_108));
#line 116 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (make__module_dep_file__V_109_109));
#line 116 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (make__module_dep_file__V_110_110));
#line 116 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (make__module_dep_file__V_111_111));
#line 116 "make.module_dep_file.m"
                  MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (make__module_dep_file__V_112_112));
#line 116 "make.module_dep_file.m"
                }
#line 111 "make.module_dep_file.m"
              }
#line 106 "make.module_dep_file.m"
          }
#line 98 "make.module_dep_file.m"
      }
#line 91 "make.module_dep_file.m"
    else
#line 89 "make.module_dep_file.m"
      {
#line 89 "make.module_dep_file.m"
        make__module_dep_file__maybe_get_module_dependencies_8_p_0(make__module_dep_file__Globals_8, make__module_dep_file__RebuildModuleDeps_13, make__module_dep_file__ModuleName_9, make__module_dep_file__MaybeImports_10, make__module_dep_file__STATE_VARIABLE_Info_0_22, make__module_dep_file__STATE_VARIABLE_Info_23);
#line 89 "make.module_dep_file.m"
        return;
      }
#line 85 "make.module_dep_file.m"
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
