/*
** Automatically generated from `write_deps_file.m'
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


/* :- module parse_tree.write_deps_file. */
/* :- implementation. */

/*
INIT mercury__parse_tree__write_deps_file__init
ENDINIT
*/

#include "parse_tree.write_deps_file.mih"


#include "array.mih"
#include "assoc_list.mih"
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
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "library.mih"
#include "libs.mih"
#include "list.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.options_file.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "parse_tree.deps_map.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_deps_graph.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_io_find.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 2107 "write_deps_file.m"
struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s {
#line 2107 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17;
#line 2113 "write_deps_file.m"
  MR_bool parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded;
#line 2131 "write_deps_file.m"
  jmp_buf parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0;
#line 2131 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__TypeCtorInfo_366_366;
#line 2131 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_44_44;
#line 2131 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_45_45;
#line 2131 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339;
#line 2131 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_29_29;
#line 2131 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_V_29_29;
#line 2131 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_V_44_44;
#line 2107 "write_deps_file.m"
};


#line 137 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 140 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;

#line 143 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 146 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 149 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

#line 152 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

#line 155 "parse_tree.write_deps_file.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 158 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 161 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

#line 1747 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(
#line 1747 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1747 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 1747 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4,
#line 1747 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5);

#line 1740 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(
#line 1740 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_5,
#line 1740 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_6,
#line 1740 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__ExtraLinkObjs_8);

#line 1169 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0_1(
#line 1169 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1169 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 1712 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1710__1_3_p_0_1(
#line 1712 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1712 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1712 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 1710 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1710__1_3_p_0(
#line 1710 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_5,
#line 1710 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_15,
#line 1710 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_16);

#line 1712 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__foreign_modules__1712__1_2_f_0(
#line 1712 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_15,
#line 1712 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_18,
#line 1712 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_19);

#line 1361 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1361__1_5_p_0(
#line 1361 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1361 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_117,
#line 1361 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__HeadVar__3_118);

#line 1312 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1312__1_2_p_0(
#line 1312 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1312 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_90);

#line 1203 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1203__1_4_p_0(
#line 1203 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsGraph_8,
#line 1203 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_15,
#line 1203 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_16,
#line 1203 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__4_17);

#line 1062 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__write_foreign_dependency_for_il__1062__1_2_f_0(
#line 1062 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_11,
#line 1062 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_63);

#line 869 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__submodules__869__1_3_p_0(
#line 869 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 869 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Str_7,
#line 869 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_10);

#line 2486 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__referenced_dlls__2486__1_1_f_0(
#line 2486 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_17);

#line 1170 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_files__1170__1_2_p_0(
#line 1170 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_33,
#line 1170 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_59);

#line 664 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__664__1_7_p_0(
#line 664 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 664 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_48,
#line 664 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImportedModuleNames_158,
#line 664 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ForeignImportExt_160,
#line 664 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_654);

#line 626 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__626__1_3_p_0(
#line 626 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SourceFileModuleName_13,
#line 626 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_644,
#line 626 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_645);

#line 294 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__294__1_7_p_0(
#line 294 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 294 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_14,
#line 294 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__NestedDeps_22,
#line 294 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_48,
#line 294 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_343);

#line 2603 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__compare_module_names_3_p_0(
#line 2603 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym1_4,
#line 2603 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym2_5,
#line 2603 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__Result_6);

#line 2511 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_both_opt_deps_8_p_0(
#line 2511 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 2511 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__BuildOptFiles_2,
#line 2511 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IntermodDirs_3,
#line 2511 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4,
#line 2511 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__5_5,
#line 2511 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__6_6);

#line 2471 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0_1(
#line 2471 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2471 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2471 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2471 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 2466 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0(
#line 2466 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Stream_5,
#line 2466 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SCC0_6);

#line 2422 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_source_file_3_p_0(
#line 2422 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_4,
#line 2422 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_5,
#line 2422 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__FileName_6);

#line 2332 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(
#line 2332 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_17,
#line 2332 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_18,
#line 2332 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_19,
#line 2332 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_20,
#line 2332 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ExeFileName_21,
#line 2332 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_22,
#line 2332 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_23,
#line 2332 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitPicObjFileName_24,
#line 2332 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_25,
#line 2332 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__LibFileName_26,
#line 2332 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SharedLibFileName_27,
#line 2332 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__JarFileName_28,
#line 2332 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DepFileName_29,
#line 2332 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DvFileName_30);

#line 2319 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(
#line 2319 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 2319 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_9,
#line 2319 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 2319 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_11,
#line 2319 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__5_5);

#line 2302 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1(
#line 2302 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2302 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2302 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2302 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 2296 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(
#line 2296 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 2296 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 2296 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 2296 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_10);

#line 2131 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(
#line 2131 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 2131 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3(
#line 2131 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 2131 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(
#line 2131 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 2131 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(
#line 2131 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 2107 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(
#line 2107 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_14,
#line 2107 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_15,
#line 2107 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_16,
#line 2107 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_17,
#line 2107 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_18,
#line 2107 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_19,
#line 2107 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_20,
#line 2107 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_21,
#line 2107 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_22,
#line 2107 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeOptsVar_23,
#line 2107 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeTransOptsVar_24);

#line 2064 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(
#line 2064 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_11,
#line 2064 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12,
#line 2064 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_13,
#line 2064 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_14,
#line 2064 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_15,
#line 2064 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_16,
#line 2064 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DepFileName_17,
#line 2064 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DvFileName_18);

#line 1830 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(
#line 1830 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_19,
#line 1830 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_20,
#line 1830 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_21,
#line 1830 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_22,
#line 1830 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_23,
#line 1830 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_24,
#line 1830 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_25,
#line 1830 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_26,
#line 1830 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_27,
#line 1830 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeOptsVar_28,
#line 1830 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeTransOptsVar_29,
#line 1830 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeModuleDepsVar_30,
#line 1830 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__ExeFileName_31,
#line 1830 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__JarFileName_32,
#line 1830 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__LibFileName_33,
#line 1830 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__SharedLibFileName_34);

#line 1772 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_7_p_0(
#line 1772 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1772 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1772 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1772 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1772 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12);

#line 1710 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__foreign_modules_2_f_0_1(
#line 1710 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1710 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1710 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 1706 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__foreign_modules_2_f_0(
#line 1706 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_4,
#line 1706 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_5);

#line 1686 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__select_ok_modules_3_p_0(
#line 1686 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1686 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_2,
#line 1686 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_3);

#line 1361 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_4(
#line 1361 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1361 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1361 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
#line 1361 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
#line 1361 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4);

#line 1312 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_3(
#line 1312 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1312 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 1293 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_2(
#line 1293 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1293 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1293 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 1290 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_1(
#line 1290 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1290 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1290 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 1290 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 1266 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0(
#line 1266 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1266 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1266 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1266 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1266 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12);

#line 1203 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1(
#line 1203 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1203 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1203 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 1203 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 1197 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(
#line 1197 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsGraph0_4,
#line 1197 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_5,
#line 1197 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__Dependencies_6);

#line 1084 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(
#line 1084 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 1084 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 1084 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 1084 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Ext_10);

#line 1060 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0_1(
#line 1060 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1060 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 1016 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0(
#line 1016 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 1016 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_10,
#line 1016 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_11,
#line 1016 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__AllDeps_12,
#line 1016 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImports_13,
#line 1016 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignLang_14);

#line 991 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(
#line 991 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_1,
#line 991 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_2,
#line 991 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3);

#line 978 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(
#line 978 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 978 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_2,
#line 978 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 978 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4);

#line 965 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(
#line 965 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 965 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_2,
#line 965 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 965 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 965 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__5_5);

#line 955 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependency_5_p_0(
#line 955 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 955 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 955 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFile_8);

#line 952 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0_1(
#line 952 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 952 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 952 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 952 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 946 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0(
#line 946 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 946 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 946 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFiles_8);

#line 927 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dll_dependencies_list_6_p_0(
#line 927 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 927 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 927 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__3_3,
#line 927 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4);

#line 920 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(
#line 920 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 920 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2);

#line 898 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(
#line 898 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 898 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_10,
#line 898 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Prefix_11,
#line 898 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_12,
#line 898 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Basis_13,
#line 898 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_14);

#line 887 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_list_6_p_0(
#line 887 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 887 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_2,
#line 887 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 887 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4);

#line 880 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_set_6_p_0(
#line 880 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 880 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 880 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_9,
#line 880 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_10);

#line 869 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__submodules_2_f_0_1(
#line 869 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 869 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 862 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__submodules_2_f_0(
#line 862 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 862 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules0_5);

#line 2486 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__referenced_dlls_2_f_0_1(
#line 2486 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2486 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 2450 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1(
#line 2450 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2450 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2450 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2450 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 759 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_7(
#line 759 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 759 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 759 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 759 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 682 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_6(
#line 682 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 682 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 682 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 682 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 664 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_5(
#line 664 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 664 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 664 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 664 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 626 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_4(
#line 626 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 626 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 626 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 404 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_3(
#line 404 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 404 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 382 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_2(
#line 382 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 382 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 294 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_1(
#line 294 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 294 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 294 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 294 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[128][2];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[9][3];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[3][1];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[3][10];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[3][5];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[7][6];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_7[1][11];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[1][9];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[2][7];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_10[2][8];




static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[128][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
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
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_2[1]))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) ".java_date")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) ".il_date")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) ".dir/*.\044O")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) ".pic_s_date")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) ".s_date")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) ".c_date")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) ".trans_opt_date")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) ".optdate")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) " endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "\t\100:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) ".dll")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) ".il")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) ".class")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) ".java")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) ".pic_s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) ".s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) ".pic_o")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) ".\044O")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) ".c")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[14])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "endif\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) " \044(ALL_MLLIBS)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[31])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "\tdone\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) "\t\t} || exit 1; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044(INSTALL_INT_DIR)\"/*.\044\044ext \"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "\t\t\t{ [ -d \"\044\044dir\" ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(LN_S) .. \"\044\044dir\" || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_String) "\t\trm -rf \"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_String) "\t\tdir=\"\044(INSTALL_INT_DIR)/Mercury/\044\044{ext}s\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_String) "; do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\t\"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[34])))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044(INSTALL_GRADE_INT_DIR)\"/*.\044\044ext \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_String) "\t\t\t{ [ -d \"\044\044dir\" ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(LN_S) .. \"\044\044dir\" || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_String) "\t\trm -rf \"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_String) "\t\tdir=\"\044(INSTALL_GRADE_INT_DIR)/Mercury/\044\044{ext}s\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[47])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_String) "; do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_String) "\tdone\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[31])))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_INC_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_String) ".mhs); do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[52])))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_String) "\t} || exit 1\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[31])))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_INT_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_String) "\t\t} && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_INT_DIR)/Mercury/mihs; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[58])))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \044(INSTALL_INT_DIR)/Mercury/mihs ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[59])))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \044(INSTALL_INT_DIR)/Mercury/mihs || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \044(INSTALL_INT_DIR)/Mercury/mihs\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_String) "\t} || exit 1\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_GRADE_INC_SUBDIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[63])))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[64])))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_String) "\t\t} && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[65])))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \044(INSTALL_GRADE_INC_SUBDIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[66])))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \044(INSTALL_GRADE_INC_SUBDIR) ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[67])))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \044(INSTALL_GRADE_INC_SUBDIR) || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[68])))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \044(INSTALL_GRADE_INC_SUBDIR)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[69])))
  },
  /* row 71 */
  {
    ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[70])))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails, then we just use\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[71])))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_String) "\t# The following is needed to support the \140--use-subdirs\' option\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[72])))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_String) "\tdone\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[73])))
  },
  /* row 75 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_GRADE_INC_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[74])))
  },
  /* row 76 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[75])))
  },
  /* row 77 */
  {
    ((MR_Box) ((MR_String) ".mihs); do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[76])))
  },
  /* row 78 */
  {
    ((MR_Box) ((MR_String) ".all_trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 79 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[78])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 80 */
  {
    ((MR_Box) ((MR_String) ".all_opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 81 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[80])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[79])))
  },
  /* row 82 */
  {
    ((MR_Box) ((MR_String) ".all_int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 83 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[82])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[81])))
  },
  /* row 84 */
  {
    ((MR_Box) ((MR_String) ".all_ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 85 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[84])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[83])))
  },
  /* row 86 */
  {
    ((MR_Box) ((MR_String) ".classes")),
    ((MR_Box) ((MR_String) ".classes"))
  },
  /* row 87 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[86])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[85])))
  },
  /* row 88 */
  {
    ((MR_Box) ((MR_String) ".javas")),
    ((MR_Box) ((MR_String) ".javas"))
  },
  /* row 89 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[88])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[87])))
  },
  /* row 90 */
  {
    ((MR_Box) ((MR_String) ".ils")),
    ((MR_Box) ((MR_String) ".ils"))
  },
  /* row 91 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[90])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[89])))
  },
  /* row 92 */
  {
    ((MR_Box) ((MR_String) ".trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 93 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[92])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[91])))
  },
  /* row 94 */
  {
    ((MR_Box) ((MR_String) ".opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 95 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[94])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[93])))
  },
  /* row 96 */
  {
    ((MR_Box) ((MR_String) ".int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 97 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[96])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[95])))
  },
  /* row 98 */
  {
    ((MR_Box) ((MR_String) ".ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 99 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[98])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[97])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_String) ".check")),
    ((MR_Box) ((MR_String) ".errs"))
  },
  /* row 101 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[100])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[99])))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_String) ".foreign_cs) | xargs rm -f\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_String) " :")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_String) ".fact_tables =")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_String) ".fact_tables.cs =")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_String) ".fact_tables.os =")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_String) ".fact_tables:%=\044(cs_subdir)%.c)\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_String) " : ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_String) " : mercury.sn\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_String) " \044(ERR_REDIRECT)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_String) "\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_String) "=")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_String) ".cs)\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLLIBS_DEP))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLOBJS))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 117 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLOBJS)))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 118 */
  {
    ((MR_Box) ((MR_String) "ifeq (\044(findstring il,\044(GRADE)),il)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 119 */
  {
    ((MR_Box) ((MR_String) ".foreign_dlls)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_String) " ifeq (\044(findstring java,\044(GRADE)),java)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 121 */
  {
    ((MR_Box) ((MR_String) ".classes)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_String) "else\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 123 */
  {
    ((MR_Box) ((MR_String) " else\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 124 */
  {
    ((MR_Box) ((MR_String) " endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 125 */
  {
    ((MR_Box) ((MR_String) " \044(ALL_MLLIBS)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 126 */
  {
    ((MR_Box) ((MR_String) ")\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 127 */
  {
    ((MR_Box) ((MR_String) ".classes) | xargs rm -f\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[4]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0])),
    ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0])),
    ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[1])),
    ((MR_Box) (parse_tree__write_deps_file__referenced_dlls_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[2])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[5])),
    ((MR_Box) (parse_tree__write_deps_file__write_module_scc_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "mercury_il"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "mercury_dotnet"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "mercury"))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[7][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_7[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_10[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1916 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1924 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0
  }
};

#line 1932 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1940 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1948 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0
  }
};

#line 1957 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1966 "parse_tree.write_deps_file.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1975 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__write_deps_file__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0
  }
};

#line 1983 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1747 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(
#line 1747 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1747 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 1747 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4,
#line 1747 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5)
#line 1747 "write_deps_file.m"
{
#line 1752 "write_deps_file.m"
  while (MR_TRUE)
#line 1752 "write_deps_file.m"
    {
#line 1752 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 1752 "write_deps_file.m"
      {
#line 1752 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 1752 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1752 "write_deps_file.m"
          *parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4;
#line 1752 "write_deps_file.m"
        else
#line 1754 "write_deps_file.m"
          {
#line 1754 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_54_54 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1754 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_56_56;
#line 1754 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1754 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Modules_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1754 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ModuleImports_17;
#line 1754 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FactDeps_18;
#line 1754 "write_deps_file.m"
            MR_Integer parse_tree__write_deps_file__NumFactDeps_19;
#line 1754 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ModuleList_20;
#line 1754 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__NewLinkObjs_22;
#line 1754 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_25_25;
#line 1754 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26;
#line 1755 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv0_V_25_25;
#line 1755 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_16_16;
#line 1758 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_28_28;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_29_29;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_30_30;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_31_31;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_32_32;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_33_33;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_34_34;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_35_35;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_36_36;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_37_37;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_38_38;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_39_39;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_40_40;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_41_41;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_42_42;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_43_43;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_44_44;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_45_45;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_46_46;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_47_47;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_48_48;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_49_49;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_50_50;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_51_51;
#line 1758 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_52_52;
#line 1758 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_53_53;

#line 1755 "write_deps_file.m"
            {
#line 1755 "write_deps_file.m"
              mercury__map__lookup_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_54_54, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__HeadVar__2_2, ((MR_Box) (parse_tree__write_deps_file__Module_11)), &parse_tree__write_deps_file__conv0_V_25_25);
            }
#line 1755 "write_deps_file.m"
            parse_tree__write_deps_file__V_25_25 = ((MR_Word) parse_tree__write_deps_file__conv0_V_25_25);
#line 1755 "write_deps_file.m"
            parse_tree__write_deps_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_25_25, (MR_Integer) 0)));
#line 1755 "write_deps_file.m"
            parse_tree__write_deps_file__ModuleImports_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_25_25, (MR_Integer) 1)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 0)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 1)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 2)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 3)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 4)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 5)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 6)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 7)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 8)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 9)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 10)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__FactDeps_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 11)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 12)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 13)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 14)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 15)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 16)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 17)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 18)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 19)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 20)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 21)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 22)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 23)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 24)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 25)));
#line 1758 "write_deps_file.m"
            parse_tree__write_deps_file__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 26)));
#line 2168 "parse_tree.write_deps_file.c"
            parse_tree__write_deps_file__TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1759 "write_deps_file.m"
            {
#line 1759 "write_deps_file.m"
              mercury__list__length_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_56_56, parse_tree__write_deps_file__FactDeps_18, &parse_tree__write_deps_file__NumFactDeps_19);
            }
#line 1760 "write_deps_file.m"
            {
#line 1760 "write_deps_file.m"
              mercury__list__duplicate_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_54_54, parse_tree__write_deps_file__NumFactDeps_19, ((MR_Box) (parse_tree__write_deps_file__Module_11)), &parse_tree__write_deps_file__ModuleList_20);
            }
#line 1761 "write_deps_file.m"
            {
#line 1761 "write_deps_file.m"
              mercury__assoc_list__from_corresponding_lists_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_56_56, parse_tree__write_deps_file__TypeCtorInfo_54_54, parse_tree__write_deps_file__FactDeps_18, parse_tree__write_deps_file__ModuleList_20, &parse_tree__write_deps_file__NewLinkObjs_22);
            }
#line 1767 "write_deps_file.m"
            {
#line 1767 "write_deps_file.m"
              mercury__list__append_3_p_1((MR_Word) &parse_tree__write_deps_file_scalar_common_2[2], parse_tree__write_deps_file__NewLinkObjs_22, parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4, &parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26);
            }
#line 1768 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 1768 "write_deps_file.m"
            {
#line 1768 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__1__tmp_copy_1 = parse_tree__write_deps_file__Modules_12;
#line 1768 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0__tmp_copy_4 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26;

#line 1768 "write_deps_file.m"
              parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0__tmp_copy_4;
#line 1768 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__1_1 = parse_tree__write_deps_file__HeadVar__1__tmp_copy_1;
#line 1768 "write_deps_file.m"
            }
#line 1768 "write_deps_file.m"
            continue;
#line 1754 "write_deps_file.m"
          }
#line 1752 "write_deps_file.m"
      }
#line 1752 "write_deps_file.m"
      break;
#line 1752 "write_deps_file.m"
    }
#line 1747 "write_deps_file.m"
}

#line 1740 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(
#line 1740 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_5,
#line 1740 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_6,
#line 1740 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__ExtraLinkObjs_8)
#line 1740 "write_deps_file.m"
{
#line 1743 "write_deps_file.m"
  {
#line 1743 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1743 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ExtraLinkObjs0_9;

#line 1744 "write_deps_file.m"
    {
#line 1744 "write_deps_file.m"
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(parse_tree__write_deps_file__Modules_5, parse_tree__write_deps_file__DepsMap_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_deps_file__ExtraLinkObjs0_9);
    }
#line 1745 "write_deps_file.m"
    {
#line 1745 "write_deps_file.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_2[2], parse_tree__write_deps_file__ExtraLinkObjs0_9, parse_tree__write_deps_file__ExtraLinkObjs_8);
#line 1745 "write_deps_file.m"
      return;
    }
#line 1743 "write_deps_file.m"
  }
#line 1740 "write_deps_file.m"
}

#line 1169 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0_1(
#line 1169 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1169 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 1169 "write_deps_file.m"
{
#line 1169 "write_deps_file.m"
  {
#line 1169 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1169 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 1169 "write_deps_file.m"
    {
#line 1169 "write_deps_file.m"
      return parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_files__1170__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 1169 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1169 "write_deps_file.m"
  }
#line 1169 "write_deps_file.m"
}

#line 59 "write_deps_file.m"
void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0(
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IntDepsGraph_3,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ImpDepsGraph_4,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IndirectDepsGraph_5,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IndirectOptDepsGraph_6,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOptOrder_7)
#line 59 "write_deps_file.m"
{
#line 1102 "write_deps_file.m"
  while (MR_TRUE)
#line 1102 "write_deps_file.m"
    {
#line 1102 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 1102 "write_deps_file.m"
      {
#line 1102 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 1102 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1102 "write_deps_file.m"
          {
#line 1102 "write_deps_file.m"
          }
#line 1102 "write_deps_file.m"
        else
#line 1105 "write_deps_file.m"
          {
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_144_144;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Dep_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 0)));
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Deps_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 1)));
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ModuleName_33;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__IndirectOptDeps_34;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Intermod_35;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__IntDeps_36;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ImpDeps_37;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__IndirectDeps_38;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ForeignImportModules0_39;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Target_40;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ForeignImportModules_41;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FindModule_42;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDeps0_45;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDeps_48;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Errors_49;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FatalErrors_50;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Dep_22, (MR_Integer) 1)));
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_56_56;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_57_57;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_60_60;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_145_145;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_146_146;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_147_147;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_148_148;
#line 1105 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_149_149;
#line 1107 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Dep_22, (MR_Integer) 0)));
#line 1159 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_90_90;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_91_91;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_92_92;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_93_93;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_94_94;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_95_95;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_96_96;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_97_97;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_98_98;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_99_99;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_100_100;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_101_101;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_103_103;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_104_104;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_105_105;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_106_106;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_107_107;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_108_108;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_109_109;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_110_110;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_111_111;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_112_112;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_113_113;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_114_114;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_115_115;
#line 1159 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_116_116;
#line 1159 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_102_102;
#line 1172 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_44_44;
#line 1176 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDeps1_47;
#line 1173 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_46_46;
#line 1183 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_117_117;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_118_118;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_119_119;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_120_120;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_121_121;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_122_122;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_123_123;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_124_124;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_125_125;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_126_126;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_127_127;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_128_128;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_129_129;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_130_130;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_131_131;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_132_132;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_133_133;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_134_134;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_135_135;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_136_136;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_137_137;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_138_138;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_139_139;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_140_140;
#line 1183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_141_141;
#line 1183 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_142_142;

#line 1113 "write_deps_file.m"
            {
#line 1113 "write_deps_file.m"
              parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, &parse_tree__write_deps_file__ModuleName_33);
            }
#line 1114 "write_deps_file.m"
            {
#line 1114 "write_deps_file.m"
              parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__IndirectOptDepsGraph_6, parse_tree__write_deps_file__ModuleName_33, &parse_tree__write_deps_file__IndirectOptDeps_34);
            }
#line 1116 "write_deps_file.m"
            {
#line 1116 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_1, (MR_Integer) 330, &parse_tree__write_deps_file__Intermod_35);
            }
#line 1126 "write_deps_file.m"
#line 1126 "write_deps_file.m"
            switch (parse_tree__write_deps_file__Intermod_35) {
#line 1126 "write_deps_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1126 "write_deps_file.m"
              case (MR_Integer) 0:
#line 1127 "write_deps_file.m"
                {
#line 1128 "write_deps_file.m"
                  {
#line 1128 "write_deps_file.m"
                    parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__IntDepsGraph_3, parse_tree__write_deps_file__ModuleName_33, &parse_tree__write_deps_file__IntDeps_36);
                  }
#line 1129 "write_deps_file.m"
                  {
#line 1129 "write_deps_file.m"
                    parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__ImpDepsGraph_4, parse_tree__write_deps_file__ModuleName_33, &parse_tree__write_deps_file__ImpDeps_37);
                  }
#line 1130 "write_deps_file.m"
                  {
#line 1130 "write_deps_file.m"
                    parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__IndirectDepsGraph_5, parse_tree__write_deps_file__ModuleName_33, &parse_tree__write_deps_file__IndirectDeps_38);
                  }
#line 1127 "write_deps_file.m"
                }
#line 1126 "write_deps_file.m"
                break;
#line 1126 "write_deps_file.m"
              case (MR_Integer) 1:
#line 1119 "write_deps_file.m"
                {
#line 1123 "write_deps_file.m"
                  parse_tree__write_deps_file__IntDeps_36 = parse_tree__write_deps_file__IndirectOptDeps_34;
#line 1124 "write_deps_file.m"
                  parse_tree__write_deps_file__ImpDeps_37 = parse_tree__write_deps_file__IndirectOptDeps_34;
#line 1125 "write_deps_file.m"
                  parse_tree__write_deps_file__IndirectDeps_38 = parse_tree__write_deps_file__IndirectOptDeps_34;
#line 1119 "write_deps_file.m"
                }
#line 1126 "write_deps_file.m"
                break;
#line 1126 "write_deps_file.m"
            }
#line 1136 "write_deps_file.m"
            {
#line 1136 "write_deps_file.m"
              parse_tree__write_deps_file__ForeignImportModules0_39 = parse_tree__prog_data__init_foreign_import_modules_0_f_0();
            }
#line 1137 "write_deps_file.m"
            {
#line 1137 "write_deps_file.m"
              libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_1, &parse_tree__write_deps_file__Target_40);
            }
#line 1140 "write_deps_file.m"
            parse_tree__write_deps_file__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_39, (MR_Integer) 0)));
#line 1140 "write_deps_file.m"
            parse_tree__write_deps_file__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_39, (MR_Integer) 1)));
#line 1140 "write_deps_file.m"
            parse_tree__write_deps_file__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_39, (MR_Integer) 2)));
#line 1140 "write_deps_file.m"
            parse_tree__write_deps_file__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_39, (MR_Integer) 3)));
#line 1140 "write_deps_file.m"
            parse_tree__write_deps_file__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_39, (MR_Integer) 4)));
#line 1142 "write_deps_file.m"
#line 1142 "write_deps_file.m"
            switch (parse_tree__write_deps_file__Target_40) {
#line 1142 "write_deps_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1142 "write_deps_file.m"
              case (MR_Integer) 0:
#line 1140 "write_deps_file.m"
                {
#line 1140 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportModules_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1140 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 0) = ((MR_Box) (parse_tree__write_deps_file__IndirectOptDeps_34));
#line 1140 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_148_148));
#line 1140 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 2) = ((MR_Box) (parse_tree__write_deps_file__V_147_147));
#line 1140 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 3) = ((MR_Box) (parse_tree__write_deps_file__V_146_146));
#line 1140 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 4) = ((MR_Box) (parse_tree__write_deps_file__V_145_145));
#line 1140 "write_deps_file.m"
                }
#line 1142 "write_deps_file.m"
                break;
#line 1142 "write_deps_file.m"
              case (MR_Integer) 2:
#line 1144 "write_deps_file.m"
                {
#line 1144 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportModules_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1144 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 0) = ((MR_Box) (parse_tree__write_deps_file__V_149_149));
#line 1144 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 1) = ((MR_Box) (parse_tree__write_deps_file__IndirectOptDeps_34));
#line 1144 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 2) = ((MR_Box) (parse_tree__write_deps_file__V_147_147));
#line 1144 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 3) = ((MR_Box) (parse_tree__write_deps_file__V_146_146));
#line 1144 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 4) = ((MR_Box) (parse_tree__write_deps_file__V_145_145));
#line 1144 "write_deps_file.m"
                }
#line 1142 "write_deps_file.m"
                break;
#line 1142 "write_deps_file.m"
              case (MR_Integer) 4:
#line 1156 "write_deps_file.m"
                {
#line 1156 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportModules_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1156 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 0) = ((MR_Box) (parse_tree__write_deps_file__V_149_149));
#line 1156 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_148_148));
#line 1156 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 2) = ((MR_Box) (parse_tree__write_deps_file__V_147_147));
#line 1156 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 3) = ((MR_Box) (parse_tree__write_deps_file__V_146_146));
#line 1156 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 4) = ((MR_Box) (parse_tree__write_deps_file__IndirectOptDeps_34));
#line 1156 "write_deps_file.m"
                }
#line 1142 "write_deps_file.m"
                break;
#line 1142 "write_deps_file.m"
              case (MR_Integer) 1:
#line 1152 "write_deps_file.m"
                {
#line 1152 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportModules_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1152 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 0) = ((MR_Box) (parse_tree__write_deps_file__V_149_149));
#line 1152 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_148_148));
#line 1152 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 2) = ((MR_Box) (parse_tree__write_deps_file__V_147_147));
#line 1152 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 3) = ((MR_Box) (parse_tree__write_deps_file__IndirectOptDeps_34));
#line 1152 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 4) = ((MR_Box) (parse_tree__write_deps_file__V_145_145));
#line 1152 "write_deps_file.m"
                }
#line 1142 "write_deps_file.m"
                break;
#line 1142 "write_deps_file.m"
              case (MR_Integer) 3:
#line 1148 "write_deps_file.m"
                {
#line 1148 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportModules_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1148 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 0) = ((MR_Box) (parse_tree__write_deps_file__V_149_149));
#line 1148 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_148_148));
#line 1148 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 2) = ((MR_Box) (parse_tree__write_deps_file__IndirectOptDeps_34));
#line 1148 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 3) = ((MR_Box) (parse_tree__write_deps_file__V_146_146));
#line 1148 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 4) = ((MR_Box) (parse_tree__write_deps_file__V_145_145));
#line 1148 "write_deps_file.m"
                }
#line 1142 "write_deps_file.m"
                break;
#line 1142 "write_deps_file.m"
            }
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 0)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 1)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 2)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 3)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 4)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 5)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 6)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 7)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 8)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 9)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 10)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 11)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 12)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 13)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 14)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 15)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 16)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 17)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 18)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 19)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 20)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 21)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 22)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 23)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 24)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 25)));
#line 1159 "write_deps_file.m"
            parse_tree__write_deps_file__V_116_116 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 26)));
#line 1159 "write_deps_file.m"
            {
#line 1159 "write_deps_file.m"
              parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 0) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 2) = ((MR_Box) (parse_tree__write_deps_file__V_92_92));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 3) = ((MR_Box) (parse_tree__write_deps_file__V_93_93));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 4) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 5) = ((MR_Box) (parse_tree__write_deps_file__V_95_95));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 6) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 7) = ((MR_Box) (parse_tree__write_deps_file__V_97_97));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 8) = ((MR_Box) (parse_tree__write_deps_file__V_98_98));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 9) = ((MR_Box) (parse_tree__write_deps_file__V_99_99));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 10) = ((MR_Box) (parse_tree__write_deps_file__V_100_100));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 11) = ((MR_Box) (parse_tree__write_deps_file__V_101_101));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 12) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportModules_41));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 13) = ((MR_Box) (parse_tree__write_deps_file__V_103_103));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 14) = ((MR_Box) (parse_tree__write_deps_file__V_104_104));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 15) = ((MR_Box) (parse_tree__write_deps_file__V_105_105));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 16) = ((MR_Box) (parse_tree__write_deps_file__V_106_106));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 17) = ((MR_Box) (parse_tree__write_deps_file__V_107_107));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 18) = ((MR_Box) (parse_tree__write_deps_file__V_108_108));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 19) = ((MR_Box) (parse_tree__write_deps_file__V_109_109));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 20) = ((MR_Box) (parse_tree__write_deps_file__V_110_110));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 21) = ((MR_Box) (parse_tree__write_deps_file__V_111_111));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 22) = ((MR_Box) (parse_tree__write_deps_file__V_112_112));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 23) = ((MR_Box) (parse_tree__write_deps_file__V_113_113));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 24) = ((MR_Box) (parse_tree__write_deps_file__V_114_114));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 25) = ((MR_Box) (parse_tree__write_deps_file__V_115_115));
#line 1159 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 26) = ((MR_Box) (parse_tree__write_deps_file__V_116_116));
#line 1159 "write_deps_file.m"
            }
#line 1161 "write_deps_file.m"
            {
#line 1161 "write_deps_file.m"
              parse_tree__module_imports__module_and_imports_set_int_deps_3_p_0(parse_tree__write_deps_file__IntDeps_36, parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, &parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_56_56);
            }
#line 1162 "write_deps_file.m"
            {
#line 1162 "write_deps_file.m"
              parse_tree__module_imports__module_and_imports_set_imp_deps_3_p_0(parse_tree__write_deps_file__ImpDeps_37, parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_56_56, &parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_57_57);
            }
#line 1163 "write_deps_file.m"
            {
#line 1163 "write_deps_file.m"
              parse_tree__module_imports__module_and_imports_set_indirect_deps_3_p_0(parse_tree__write_deps_file__IndirectDeps_38, parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_57_57, &parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58);
            }
#line 1169 "write_deps_file.m"
            {
#line 1169 "write_deps_file.m"
              parse_tree__write_deps_file__FindModule_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1169 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_42, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[1]));
#line 1169 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_42, 1) = ((MR_Box) (parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0_1));
#line 1169 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1169 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_42, 3) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_33));
#line 1169 "write_deps_file.m"
            }
#line 1172 "write_deps_file.m"
            {
#line 1172 "write_deps_file.m"
              mercury__list__takewhile_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_deps_file__FindModule_42, parse_tree__write_deps_file__TransOptOrder_7, &parse_tree__write_deps_file__V_44_44, &parse_tree__write_deps_file__TransOptDeps0_45);
            }
#line 1173 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__TransOptDeps0_45)) == (MR_mktag((MR_Integer) 1)));
#line 1173 "write_deps_file.m"
            if (parse_tree__write_deps_file__succeeded)
#line 1173 "write_deps_file.m"
              {
#line 1173 "write_deps_file.m"
                parse_tree__write_deps_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__TransOptDeps0_45, (MR_Integer) 0)));
#line 1173 "write_deps_file.m"
                parse_tree__write_deps_file__TransOptDeps1_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__TransOptDeps0_45, (MR_Integer) 1)));
#line 1175 "write_deps_file.m"
                parse_tree__write_deps_file__TransOptDeps_48 = parse_tree__write_deps_file__TransOptDeps1_47;
#line 1173 "write_deps_file.m"
              }
#line 1173 "write_deps_file.m"
            else
#line 1177 "write_deps_file.m"
              parse_tree__write_deps_file__TransOptDeps_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_117_117 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 0)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 1)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 2)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 3)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 4)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 5)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 6)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 7)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 8)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 9)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 10)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 11)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 12)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 13)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 14)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 15)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 16)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 17)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 18)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 19)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 20)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 21)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 22)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__Errors_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 23)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 24)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 25)));
#line 1183 "write_deps_file.m"
            parse_tree__write_deps_file__V_142_142 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 26)));
#line 1184 "write_deps_file.m"
            {
#line 1184 "write_deps_file.m"
              parse_tree__write_deps_file__V_60_60 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
            }
#line 2903 "parse_tree.write_deps_file.c"
            parse_tree__write_deps_file__TypeCtorInfo_144_144 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1184 "write_deps_file.m"
            {
#line 1184 "write_deps_file.m"
              mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_144_144, parse_tree__write_deps_file__Errors_49, parse_tree__write_deps_file__V_60_60, &parse_tree__write_deps_file__FatalErrors_50);
            }
#line 1185 "write_deps_file.m"
            {
#line 1185 "write_deps_file.m"
              parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_144_144, parse_tree__write_deps_file__FatalErrors_50);
            }
#line 1188 "write_deps_file.m"
            if (parse_tree__write_deps_file__succeeded)
#line 1186 "write_deps_file.m"
              {
#line 1186 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_61_61;

#line 1187 "write_deps_file.m"
                {
#line 1187 "write_deps_file.m"
                  parse_tree__write_deps_file__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1187 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_61_61, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDeps_48));
#line 1187 "write_deps_file.m"
                }
#line 1186 "write_deps_file.m"
                {
#line 1186 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependency_file_6_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, parse_tree__write_deps_file__IndirectOptDeps_34, parse_tree__write_deps_file__V_61_61);
                }
#line 1186 "write_deps_file.m"
              }
#line 1188 "write_deps_file.m"
            else
#line 1188 "write_deps_file.m"
              {
#line 1188 "write_deps_file.m"
              }
#line 1191 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 1191 "write_deps_file.m"
            {
#line 1191 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__2__tmp_copy_2 = parse_tree__write_deps_file__Deps_23;

#line 1191 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__2_2 = parse_tree__write_deps_file__HeadVar__2__tmp_copy_2;
#line 1191 "write_deps_file.m"
            }
#line 1191 "write_deps_file.m"
            continue;
#line 1105 "write_deps_file.m"
          }
#line 1102 "write_deps_file.m"
      }
#line 1102 "write_deps_file.m"
      break;
#line 1102 "write_deps_file.m"
    }
#line 59 "write_deps_file.m"
}

#line 1712 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1710__1_3_p_0_1(
#line 1712 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1712 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1712 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 1712 "write_deps_file.m"
{
#line 1712 "write_deps_file.m"
  {
#line 1712 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1712 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1712 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv1_HeadVar__3_19;

#line 1712 "write_deps_file.m"
    {
#line 1712 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__func__foreign_modules__1712__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv1_HeadVar__3_19);
    }
#line 1712 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1712 "write_deps_file.m"
      {
#line 1712 "write_deps_file.m"
        *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_HeadVar__3_19));
#line 1712 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 1712 "write_deps_file.m"
      }
#line 1712 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1712 "write_deps_file.m"
  }
#line 1712 "write_deps_file.m"
}

#line 1710 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1710__1_3_p_0(
#line 1710 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_5,
#line 1710 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_15,
#line 1710 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_16)
#line 1710 "write_deps_file.m"
{
#line 1710 "write_deps_file.m"
  {
#line 1710 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1710 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_23_23;
#line 1710 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeInfo_24_24;
#line 1710 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_40_64;
#line 1710 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__LangList_10;
#line 1710 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_17_17;
#line 1710 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleImports_32;
#line 1710 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Langs_33;
#line 1710 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_34_34;
#line 1710 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_35_35;
#line 1728 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_V_34_34;
#line 1728 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_31_31;
#line 1729 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_36_36;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_37_37;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_38_38;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_39_39;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_40_40;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_41_41;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_42_42;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_43_43;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_44_44;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_45_45;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_46_46;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_47_47;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_48_48;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_49_49;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_50_50;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_51_51;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_52_52;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_53_53;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_54_54;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_55_55;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_56_56;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_57_57;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_58_58;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_59_59;
#line 1729 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_60_60;
#line 1729 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_61_61;

#line 1728 "write_deps_file.m"
    {
#line 1728 "write_deps_file.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_5, ((MR_Box) (parse_tree__write_deps_file__HeadVar__2_15)), &parse_tree__write_deps_file__conv0_V_34_34);
    }
#line 1728 "write_deps_file.m"
    parse_tree__write_deps_file__V_34_34 = ((MR_Word) parse_tree__write_deps_file__conv0_V_34_34);
#line 1728 "write_deps_file.m"
    parse_tree__write_deps_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_34_34, (MR_Integer) 0)));
#line 1728 "write_deps_file.m"
    parse_tree__write_deps_file__ModuleImports_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_34_34, (MR_Integer) 1)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 0)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 1)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 2)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 3)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 4)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 5)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 6)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 7)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 8)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 9)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 10)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 11)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 12)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 13)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 14)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 15)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 16)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 17)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 18)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 19)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 20)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 21)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 22)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 23)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 24)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 25)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 26)));
#line 1729 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 1729 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1729 "write_deps_file.m"
      {
#line 1729 "write_deps_file.m"
        parse_tree__write_deps_file__Langs_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_35_35, (MR_Integer) 0)));
#line 3172 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_40_64 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 1730 "write_deps_file.m"
        {
#line 1730 "write_deps_file.m"
          parse_tree__write_deps_file__LangList_10 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_40_64, parse_tree__write_deps_file__Langs_33);
        }
#line 3179 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_23_23 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 3181 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeInfo_24_24 = (MR_Word) &parse_tree__write_deps_file_scalar_common_2[1];
#line 1712 "write_deps_file.m"
        {
#line 1712 "write_deps_file.m"
          parse_tree__write_deps_file__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1712 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_17_17, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[6]));
#line 1712 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_17_17, 1) = ((MR_Box) (parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1710__1_3_p_0_1));
#line 1712 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1712 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_17_17, 3) = ((MR_Box) (parse_tree__write_deps_file__HeadVar__2_15));
#line 1712 "write_deps_file.m"
        }
#line 1712 "write_deps_file.m"
        {
#line 1712 "write_deps_file.m"
          *parse_tree__write_deps_file__HeadVar__3_16 = mercury__list__filter_map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, parse_tree__write_deps_file__TypeInfo_24_24, parse_tree__write_deps_file__V_17_17, parse_tree__write_deps_file__LangList_10);
        }
#line 1712 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 1729 "write_deps_file.m"
      }
#line 1710 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1710 "write_deps_file.m"
  }
#line 1710 "write_deps_file.m"
}

#line 1712 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__foreign_modules__1712__1_2_f_0(
#line 1712 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_15,
#line 1712 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_18,
#line 1712 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_19)
#line 1712 "write_deps_file.m"
{
#line 1712 "write_deps_file.m"
  {
#line 1712 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1712 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__NewM_12;
#line 1712 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Ext_13;

#line 1713 "write_deps_file.m"
    {
#line 1713 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(parse_tree__write_deps_file__HeadVar__1_15, parse_tree__write_deps_file__HeadVar__2_18, &parse_tree__write_deps_file__NewM_12);
    }
#line 1712 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1712 "write_deps_file.m"
      {
#line 1714 "write_deps_file.m"
        {
#line 1714 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(parse_tree__write_deps_file__HeadVar__2_18, &parse_tree__write_deps_file__Ext_13);
        }
#line 1712 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 1712 "write_deps_file.m"
          {
#line 1712 "write_deps_file.m"
            {
#line 1712 "write_deps_file.m"
              MR_Word base;
#line 1712 "write_deps_file.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1712 "write_deps_file.m"
              *parse_tree__write_deps_file__HeadVar__3_19 = base;
#line 1712 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__write_deps_file__NewM_12));
#line 1712 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__write_deps_file__Ext_13));
#line 1712 "write_deps_file.m"
            }
#line 1712 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 1712 "write_deps_file.m"
          }
#line 1712 "write_deps_file.m"
      }
#line 1712 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1712 "write_deps_file.m"
  }
#line 1712 "write_deps_file.m"
}

#line 1361 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1361__1_5_p_0(
#line 1361 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1361 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_117,
#line 1361 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__HeadVar__3_118)
#line 1361 "write_deps_file.m"
{
#line 1361 "write_deps_file.m"
  {
#line 1361 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1361 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__F0_43;
#line 1361 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__M_459 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__2_117, (MR_Integer) 0)));
#line 1361 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__E_460 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__2_117, (MR_Integer) 1)));

#line 1362 "write_deps_file.m"
    {
#line 1362 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__M_459, parse_tree__write_deps_file__E_460, (MR_Integer) 0, &parse_tree__write_deps_file__F0_43);
    }
#line 1363 "write_deps_file.m"
    {
#line 1363 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__3_118 = mercury__string__f_43_43_2_f_0((MR_String) "\044(os_subdir)", parse_tree__write_deps_file__F0_43);
    }
#line 1361 "write_deps_file.m"
  }
#line 1361 "write_deps_file.m"
}

#line 1312 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1312__1_2_p_0(
#line 1312 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1312 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_90)
#line 1312 "write_deps_file.m"
{
#line 1312 "write_deps_file.m"
  {
#line 1312 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1312 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_497_497 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1312 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleImports_26;
#line 1312 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 1312 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_92_92;
#line 1314 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_V_91_91;
#line 1314 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_25_25;
#line 1315 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_463_463;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_464_464;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_465_465;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_466_466;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_467_467;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_468_468;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_469_469;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_470_470;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_471_471;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_472_472;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_473_473;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_474_474;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_475_475;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_476_476;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_477_477;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_478_478;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_479_479;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_480_480;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_481_481;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_482_482;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_483_483;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_484_484;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_485_485;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_486_486;
#line 1315 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_487_487;
#line 1315 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_488_488;

#line 1314 "write_deps_file.m"
    {
#line 1314 "write_deps_file.m"
      mercury__map__lookup_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_497_497, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_11, ((MR_Box) (parse_tree__write_deps_file__HeadVar__2_90)), &parse_tree__write_deps_file__conv0_V_91_91);
    }
#line 1314 "write_deps_file.m"
    parse_tree__write_deps_file__V_91_91 = ((MR_Word) parse_tree__write_deps_file__conv0_V_91_91);
#line 1314 "write_deps_file.m"
    parse_tree__write_deps_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_91_91, (MR_Integer) 0)));
#line 1314 "write_deps_file.m"
    parse_tree__write_deps_file__ModuleImports_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_91_91, (MR_Integer) 1)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_463_463 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 0)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_464_464 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 1)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_465_465 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 2)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_466_466 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 3)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_467_467 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 4)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_468_468 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 5)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_469_469 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 6)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_470_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 7)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 8)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_471_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 9)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_472_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 10)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_473_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 11)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_474_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 12)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_475_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 13)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_476_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 14)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_477_477 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 15)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_478_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 16)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_479_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 17)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_480_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 18)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_481_481 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 19)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_482_482 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 20)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_483_483 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 21)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_484_484 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 22)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_485_485 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 23)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_486_486 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 24)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_487_487 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 25)));
#line 1315 "write_deps_file.m"
    parse_tree__write_deps_file__V_488_488 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 26)));
#line 1315 "write_deps_file.m"
    {
#line 1315 "write_deps_file.m"
      return parse_tree__write_deps_file__succeeded = mercury__set__non_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_497_497, parse_tree__write_deps_file__V_92_92);
    }
#line 1312 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1312 "write_deps_file.m"
  }
#line 1312 "write_deps_file.m"
}

#line 1203 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1203__1_4_p_0(
#line 1203 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsGraph_8,
#line 1203 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_15,
#line 1203 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_16,
#line 1203 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__4_17)
#line 1203 "write_deps_file.m"
{
#line 1203 "write_deps_file.m"
  {
#line 1203 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1203 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_23_23 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1203 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Dep_14;
#line 1205 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_Dep_14;

#line 1205 "write_deps_file.m"
    {
#line 1205 "write_deps_file.m"
      mercury__digraph__lookup_vertex_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, parse_tree__write_deps_file__DepsGraph_8, parse_tree__write_deps_file__HeadVar__2_15, &parse_tree__write_deps_file__conv0_Dep_14);
    }
#line 1205 "write_deps_file.m"
    parse_tree__write_deps_file__Dep_14 = ((MR_Word) parse_tree__write_deps_file__conv0_Dep_14);
#line 1206 "write_deps_file.m"
    {
#line 1206 "write_deps_file.m"
      mercury__set__insert_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, ((MR_Box) (parse_tree__write_deps_file__Dep_14)), parse_tree__write_deps_file__HeadVar__3_16, parse_tree__write_deps_file__HeadVar__4_17);
#line 1206 "write_deps_file.m"
      return;
    }
#line 1203 "write_deps_file.m"
  }
#line 1203 "write_deps_file.m"
}

#line 1062 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__write_foreign_dependency_for_il__1062__1_2_f_0(
#line 1062 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_11,
#line 1062 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_63)
#line 1062 "write_deps_file.m"
{
#line 1062 "write_deps_file.m"
  {
#line 1062 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1062 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__HeadVar__3_64;

#line 1062 "write_deps_file.m"
    {
#line 1062 "write_deps_file.m"
      return parse_tree__write_deps_file__HeadVar__3_64 = parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(parse_tree__write_deps_file__HeadVar__2_63, parse_tree__write_deps_file__ModuleName_11);
    }
#line 1062 "write_deps_file.m"
    return parse_tree__write_deps_file__HeadVar__3_64;
#line 1062 "write_deps_file.m"
  }
#line 1062 "write_deps_file.m"
}

#line 869 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__submodules__869__1_3_p_0(
#line 869 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 869 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Str_7,
#line 869 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_10)
#line 869 "write_deps_file.m"
{
#line 869 "write_deps_file.m"
  {
#line 869 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 869 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_14_14;

#line 870 "write_deps_file.m"
    {
#line 870 "write_deps_file.m"
      parse_tree__write_deps_file__V_14_14 = mdbcomp__sym_name__outermost_qualifier_1_f_0(parse_tree__write_deps_file__HeadVar__3_10);
    }
#line 870 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__Str_7, parse_tree__write_deps_file__V_14_14) == 0);
#line 869 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 869 "write_deps_file.m"
      {
#line 871 "write_deps_file.m"
        {
#line 871 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__write_deps_file__HeadVar__3_10, parse_tree__write_deps_file__Module_4);
        }
#line 871 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 869 "write_deps_file.m"
      }
#line 869 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 869 "write_deps_file.m"
  }
#line 869 "write_deps_file.m"
}

#line 2486 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__referenced_dlls__2486__1_1_f_0(
#line 2486 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_17)
#line 2486 "write_deps_file.m"
{
#line 2486 "write_deps_file.m"
  {
#line 2486 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2486 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__HeadVar__2_18;

#line 2487 "write_deps_file.m"
    {
#line 2487 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__HeadVar__1_17);
    }
#line 2486 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 2488 "write_deps_file.m"
      {
#line 2488 "write_deps_file.m"
        parse_tree__write_deps_file__HeadVar__2_18 = (MR_Word) &parse_tree__write_deps_file_scalar_common_3[2];
#line 2488 "write_deps_file.m"
      }
#line 2486 "write_deps_file.m"
    else
#line 2491 "write_deps_file.m"
      {
#line 2491 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_20_20;

#line 2491 "write_deps_file.m"
        {
#line 2491 "write_deps_file.m"
          parse_tree__write_deps_file__V_20_20 = mdbcomp__sym_name__outermost_qualifier_1_f_0(parse_tree__write_deps_file__HeadVar__1_17);
        }
#line 2491 "write_deps_file.m"
        {
#line 2491 "write_deps_file.m"
          parse_tree__write_deps_file__HeadVar__2_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2491 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__2_18, 0) = ((MR_Box) (parse_tree__write_deps_file__V_20_20));
#line 2491 "write_deps_file.m"
        }
#line 2491 "write_deps_file.m"
      }
#line 2486 "write_deps_file.m"
    return parse_tree__write_deps_file__HeadVar__2_18;
#line 2486 "write_deps_file.m"
  }
#line 2486 "write_deps_file.m"
}

#line 1170 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_files__1170__1_2_p_0(
#line 1170 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_33,
#line 1170 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_59)
#line 1170 "write_deps_file.m"
{
#line 1170 "write_deps_file.m"
  {
#line 1170 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 1170 "write_deps_file.m"
    {
#line 1170 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__write_deps_file__ModuleName_33, parse_tree__write_deps_file__HeadVar__2_59);
    }
#line 1170 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 1170 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1170 "write_deps_file.m"
  }
#line 1170 "write_deps_file.m"
}

#line 664 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__664__1_7_p_0(
#line 664 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 664 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_48,
#line 664 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImportedModuleNames_158,
#line 664 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ForeignImportExt_160,
#line 664 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_654)
#line 664 "write_deps_file.m"
{
#line 664 "write_deps_file.m"
  {
#line 664 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 664 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_662_662;

#line 666 "write_deps_file.m"
    {
#line 666 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_48, (MR_String) "\n\n");
    }
#line 667 "write_deps_file.m"
    {
#line 667 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__HeadVar__5_654);
    }
#line 668 "write_deps_file.m"
    {
#line 668 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_48, (MR_String) " : ");
    }
#line 671 "write_deps_file.m"
    {
#line 671 "write_deps_file.m"
      parse_tree__write_deps_file__V_662_662 = mercury__set__to_sorted_list_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_deps_file__ForeignImportedModuleNames_158);
    }
#line 669 "write_deps_file.m"
    {
#line 669 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__ForeignImportExt_160, parse_tree__write_deps_file__V_662_662);
    }
#line 672 "write_deps_file.m"
    {
#line 672 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_48, (MR_String) "\n\n");
#line 672 "write_deps_file.m"
      return;
    }
#line 664 "write_deps_file.m"
  }
#line 664 "write_deps_file.m"
}

#line 626 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__626__1_3_p_0(
#line 626 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SourceFileModuleName_13,
#line 626 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_644,
#line 626 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_645)
#line 626 "write_deps_file.m"
{
#line 626 "write_deps_file.m"
  {
#line 626 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 633 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_646_646;

#line 628 "write_deps_file.m"
    {
#line 628 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__3_645 = parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(parse_tree__write_deps_file__HeadVar__2_644, parse_tree__write_deps_file__SourceFileModuleName_13);
    }
#line 633 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) *parse_tree__write_deps_file__HeadVar__3_645)) == (MR_mktag((MR_Integer) 0)));
#line 633 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 633 "write_deps_file.m"
      {
#line 633 "write_deps_file.m"
        parse_tree__write_deps_file__V_646_646 = ((MR_String) (MR_hl_field(MR_mktag(0), *parse_tree__write_deps_file__HeadVar__3_645, (MR_Integer) 0)));
#line 633 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__V_646_646, (MR_String) "mercury") == 0);
#line 633 "write_deps_file.m"
      }
#line 633 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 626 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 626 "write_deps_file.m"
  }
#line 626 "write_deps_file.m"
}

#line 294 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__294__1_7_p_0(
#line 294 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 294 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_14,
#line 294 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__NestedDeps_22,
#line 294 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_48,
#line 294 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_343)
#line 294 "write_deps_file.m"
{
#line 294 "write_deps_file.m"
  {
#line 294 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 294 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ExtName_75;
#line 294 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_348_348;
#line 294 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_351_351;

#line 295 "write_deps_file.m"
    {
#line 295 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__HeadVar__5_343, (MR_Integer) 1, &parse_tree__write_deps_file__ExtName_75);
    }
#line 297 "write_deps_file.m"
    {
#line 297 "write_deps_file.m"
      parse_tree__write_deps_file__V_351_351 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_351_351, 0) = ((MR_Box) (parse_tree__write_deps_file__ExtName_75));
#line 297 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_351_351, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[109])));
#line 297 "write_deps_file.m"
    }
#line 297 "write_deps_file.m"
    {
#line 297 "write_deps_file.m"
      parse_tree__write_deps_file__V_348_348 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_348_348, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 297 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_348_348, 1) = ((MR_Box) (parse_tree__write_deps_file__V_351_351));
#line 297 "write_deps_file.m"
    }
#line 297 "write_deps_file.m"
    {
#line 297 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_348_348);
    }
#line 298 "write_deps_file.m"
    {
#line 298 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__HeadVar__5_343, parse_tree__write_deps_file__NestedDeps_22);
#line 298 "write_deps_file.m"
      return;
    }
#line 294 "write_deps_file.m"
  }
#line 294 "write_deps_file.m"
}

#line 2603 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__compare_module_names_3_p_0(
#line 2603 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym1_4,
#line 2603 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym2_5,
#line 2603 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__Result_6)
#line 2603 "write_deps_file.m"
{
#line 2606 "write_deps_file.m"
  {
#line 2606 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2606 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Str1_7;
#line 2606 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Str2_8;

#line 2607 "write_deps_file.m"
    {
#line 2607 "write_deps_file.m"
      parse_tree__write_deps_file__Str1_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__Sym1_4);
    }
#line 2608 "write_deps_file.m"
    {
#line 2608 "write_deps_file.m"
      parse_tree__write_deps_file__Str2_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__Sym2_5);
    }
#line 2609 "write_deps_file.m"
    {
#line 2609 "write_deps_file.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__write_deps_file__Result_6, parse_tree__write_deps_file__Str1_7, parse_tree__write_deps_file__Str2_8);
#line 2609 "write_deps_file.m"
      return;
    }
#line 2606 "write_deps_file.m"
  }
#line 2603 "write_deps_file.m"
}

#line 2511 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_both_opt_deps_8_p_0(
#line 2511 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 2511 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__BuildOptFiles_2,
#line 2511 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IntermodDirs_3,
#line 2511 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4,
#line 2511 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__5_5,
#line 2511 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__6_6)
#line 2511 "write_deps_file.m"
{
#line 2515 "write_deps_file.m"
  {
#line 2515 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 2515 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2515 "write_deps_file.m"
      {
#line 2515 "write_deps_file.m"
        *parse_tree__write_deps_file__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2515 "write_deps_file.m"
        *parse_tree__write_deps_file__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2515 "write_deps_file.m"
      }
#line 2515 "write_deps_file.m"
    else
#line 2517 "write_deps_file.m"
      {
#line 2517 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Dep_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 0)));
#line 2517 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Deps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 1)));
#line 2517 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
#line 2517 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;

#line 2518 "write_deps_file.m"
        {
#line 2518 "write_deps_file.m"
          parse_tree__write_deps_file__get_both_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__BuildOptFiles_2, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__Deps_19, &parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39, &parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40);
        }
#line 3933 "parse_tree.write_deps_file.c"
#line 3934 "parse_tree.write_deps_file.c"
        switch (parse_tree__write_deps_file__BuildOptFiles_2) {
#line 3936 "parse_tree.write_deps_file.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 3938 "parse_tree.write_deps_file.c"
          case (MR_Integer) 0:
#line 3940 "parse_tree.write_deps_file.c"
            {
#line 3942 "parse_tree.write_deps_file.c"
              MR_String parse_tree__write_deps_file__OptName_27;
#line 3944 "parse_tree.write_deps_file.c"
              MR_Word parse_tree__write_deps_file__Result2_28;
#line 3946 "parse_tree.write_deps_file.c"
              MR_String parse_tree__write_deps_file__TransOptName_31;
#line 3948 "parse_tree.write_deps_file.c"
              MR_Word parse_tree__write_deps_file__Result3_32;

#line 2541 "write_deps_file.m"
              {
#line 2541 "write_deps_file.m"
                parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptName_27);
              }
#line 2543 "write_deps_file.m"
              {
#line 2543 "write_deps_file.m"
                libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__OptName_27, &parse_tree__write_deps_file__Result2_28);
              }
#line 2548 "write_deps_file.m"
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_28)) == (MR_mktag((MR_Integer) 1))))
#line 2549 "write_deps_file.m"
                *parse_tree__write_deps_file__HeadVar__5_5 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
#line 2548 "write_deps_file.m"
              else
#line 2547 "write_deps_file.m"
                {
#line 2547 "write_deps_file.m"
                  MR_Word base;
#line 2547 "write_deps_file.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2547 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__5_5 = base;
#line 2547 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2547 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
#line 2547 "write_deps_file.m"
                }
#line 2551 "write_deps_file.m"
              {
#line 2551 "write_deps_file.m"
                parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptName_31);
              }
#line 2553 "write_deps_file.m"
              {
#line 2553 "write_deps_file.m"
                libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__TransOptName_31, &parse_tree__write_deps_file__Result3_32);
              }
#line 2558 "write_deps_file.m"
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result3_32)) == (MR_mktag((MR_Integer) 1))))
#line 2559 "write_deps_file.m"
                *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;
#line 2558 "write_deps_file.m"
              else
#line 2557 "write_deps_file.m"
                {
#line 2557 "write_deps_file.m"
                  MR_Word base;
#line 2557 "write_deps_file.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2557 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2557 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2557 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
#line 2557 "write_deps_file.m"
                }
#line 4011 "parse_tree.write_deps_file.c"
            }
#line 4013 "parse_tree.write_deps_file.c"
            break;
#line 4015 "parse_tree.write_deps_file.c"
          case (MR_Integer) 1:
#line 4017 "parse_tree.write_deps_file.c"
            {
#line 4019 "parse_tree.write_deps_file.c"
              MR_Word parse_tree__write_deps_file__Result1_23;

#line 2523 "write_deps_file.m"
              {
#line 2523 "write_deps_file.m"
                parse_tree__prog_io_find__search_for_module_source_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__Dep_18, &parse_tree__write_deps_file__Result1_23);
              }
#line 4027 "parse_tree.write_deps_file.c"
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result1_23)) == (MR_mktag((MR_Integer) 1))))
#line 4029 "parse_tree.write_deps_file.c"
                {
#line 4031 "parse_tree.write_deps_file.c"
                  MR_String parse_tree__write_deps_file__OptName_59;
#line 4033 "parse_tree.write_deps_file.c"
                  MR_Word parse_tree__write_deps_file__Result2_60;
#line 4035 "parse_tree.write_deps_file.c"
                  MR_String parse_tree__write_deps_file__TransOptName_61;
#line 4037 "parse_tree.write_deps_file.c"
                  MR_Word parse_tree__write_deps_file__Result3_62;

#line 2541 "write_deps_file.m"
                  {
#line 2541 "write_deps_file.m"
                    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptName_59);
                  }
#line 2543 "write_deps_file.m"
                  {
#line 2543 "write_deps_file.m"
                    libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__OptName_59, &parse_tree__write_deps_file__Result2_60);
                  }
#line 2548 "write_deps_file.m"
                  if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_60)) == (MR_mktag((MR_Integer) 1))))
#line 2549 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__5_5 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
#line 2548 "write_deps_file.m"
                  else
#line 2547 "write_deps_file.m"
                    {
#line 2547 "write_deps_file.m"
                      MR_Word base;
#line 2547 "write_deps_file.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2547 "write_deps_file.m"
                      *parse_tree__write_deps_file__HeadVar__5_5 = base;
#line 2547 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2547 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
#line 2547 "write_deps_file.m"
                    }
#line 2551 "write_deps_file.m"
                  {
#line 2551 "write_deps_file.m"
                    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptName_61);
                  }
#line 2553 "write_deps_file.m"
                  {
#line 2553 "write_deps_file.m"
                    libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__TransOptName_61, &parse_tree__write_deps_file__Result3_62);
                  }
#line 2558 "write_deps_file.m"
                  if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result3_62)) == (MR_mktag((MR_Integer) 1))))
#line 2559 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;
#line 2558 "write_deps_file.m"
                  else
#line 2557 "write_deps_file.m"
                    {
#line 2557 "write_deps_file.m"
                      MR_Word base;
#line 2557 "write_deps_file.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2557 "write_deps_file.m"
                      *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2557 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2557 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
#line 2557 "write_deps_file.m"
                    }
#line 4100 "parse_tree.write_deps_file.c"
                }
#line 4102 "parse_tree.write_deps_file.c"
              else
#line 4104 "parse_tree.write_deps_file.c"
                {
#line 2527 "write_deps_file.m"
                  {
#line 2527 "write_deps_file.m"
                    MR_Word base;
#line 2527 "write_deps_file.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2527 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__5_5 = base;
#line 2527 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2527 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
#line 2527 "write_deps_file.m"
                  }
#line 2528 "write_deps_file.m"
                  {
#line 2528 "write_deps_file.m"
                    MR_Word base;
#line 2528 "write_deps_file.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2528 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2528 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2528 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
#line 2528 "write_deps_file.m"
                  }
#line 2529 "write_deps_file.m"
                  {
#line 2529 "write_deps_file.m"
                    mercury__io__seen_2_p_0();
#line 2529 "write_deps_file.m"
                    return;
                  }
#line 4141 "parse_tree.write_deps_file.c"
                }
#line 4143 "parse_tree.write_deps_file.c"
            }
#line 4145 "parse_tree.write_deps_file.c"
            break;
#line 4147 "parse_tree.write_deps_file.c"
        }
#line 2517 "write_deps_file.m"
      }
#line 2515 "write_deps_file.m"
  }
#line 2511 "write_deps_file.m"
}

#line 2471 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0_1(
#line 2471 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2471 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2471 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2471 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 2471 "write_deps_file.m"
{
#line 2471 "write_deps_file.m"
  {
#line 2471 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 2471 "write_deps_file.m"
    {
#line 2471 "write_deps_file.m"
      parse_tree__prog_out__write_sym_name_3_p_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 2471 "write_deps_file.m"
      return;
    }
#line 2471 "write_deps_file.m"
  }
#line 2471 "write_deps_file.m"
}

#line 2466 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0(
#line 2466 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Stream_5,
#line 2466 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SCC0_6)
#line 2466 "write_deps_file.m"
{
#line 2469 "write_deps_file.m"
  {
#line 2469 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2469 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_14_14 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2469 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SCC_8;

#line 2470 "write_deps_file.m"
    {
#line 2470 "write_deps_file.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_14_14, parse_tree__write_deps_file__SCC0_6, &parse_tree__write_deps_file__SCC_8);
    }
#line 2471 "write_deps_file.m"
    {
#line 2471 "write_deps_file.m"
      mercury__io__write_list_6_p_0(parse_tree__write_deps_file__TypeCtorInfo_14_14, parse_tree__write_deps_file__Stream_5, parse_tree__write_deps_file__SCC_8, (MR_String) "\n", (MR_Word) &parse_tree__write_deps_file_scalar_common_2[8]);
#line 2471 "write_deps_file.m"
      return;
    }
#line 2469 "write_deps_file.m"
  }
#line 2466 "write_deps_file.m"
}

#line 2422 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_source_file_3_p_0(
#line 2422 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_4,
#line 2422 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_5,
#line 2422 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__FileName_6)
#line 2422 "write_deps_file.m"
{
#line 2424 "write_deps_file.m"
  {
#line 2424 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2424 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Deps_7;
#line 2424 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleAndImports_9;
#line 2424 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SourceFileName_10;
#line 2425 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_Deps_7;
#line 2426 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_8_8;
#line 2430 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SourceFileBase_11;

#line 2425 "write_deps_file.m"
    {
#line 2425 "write_deps_file.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_4, ((MR_Box) (parse_tree__write_deps_file__ModuleName_5)), &parse_tree__write_deps_file__conv0_Deps_7);
    }
#line 2425 "write_deps_file.m"
    parse_tree__write_deps_file__Deps_7 = ((MR_Word) parse_tree__write_deps_file__conv0_Deps_7);
#line 2426 "write_deps_file.m"
    parse_tree__write_deps_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Deps_7, (MR_Integer) 0)));
#line 2426 "write_deps_file.m"
    parse_tree__write_deps_file__ModuleAndImports_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Deps_7, (MR_Integer) 1)));
#line 2427 "write_deps_file.m"
    {
#line 2427 "write_deps_file.m"
      parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(parse_tree__write_deps_file__ModuleAndImports_9, &parse_tree__write_deps_file__SourceFileName_10);
    }
#line 2428 "write_deps_file.m"
    {
#line 2428 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__write_deps_file__SourceFileName_10, (MR_String) ".m", &parse_tree__write_deps_file__SourceFileBase_11);
    }
#line 2430 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 2429 "write_deps_file.m"
      *parse_tree__write_deps_file__FileName_6 = parse_tree__write_deps_file__SourceFileBase_11;
#line 2430 "write_deps_file.m"
    else
#line 2431 "write_deps_file.m"
      {
#line 2431 "write_deps_file.m"
        {
#line 2431 "write_deps_file.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_deps_file", (MR_String) "predicate \140parse_tree.write_deps_file.get_source_file\'/3", (MR_String) "source file name doesn\'t end in \140.m\'");
#line 2431 "write_deps_file.m"
          return;
        }
#line 2431 "write_deps_file.m"
      }
#line 2424 "write_deps_file.m"
  }
#line 2422 "write_deps_file.m"
}

#line 2332 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(
#line 2332 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_17,
#line 2332 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_18,
#line 2332 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_19,
#line 2332 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_20,
#line 2332 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ExeFileName_21,
#line 2332 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_22,
#line 2332 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_23,
#line 2332 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitPicObjFileName_24,
#line 2332 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_25,
#line 2332 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__LibFileName_26,
#line 2332 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SharedLibFileName_27,
#line 2332 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__JarFileName_28,
#line 2332 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DepFileName_29,
#line 2332 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DvFileName_30)
#line 2332 "write_deps_file.m"
{
#line 2340 "write_deps_file.m"
  {
#line 2340 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2340 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__CleanTargetName_32;
#line 2340 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__RealCleanTargetName_33;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_39_39;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_42_42;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_43_43;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_46_46;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_49_49;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_50_50;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_52_52;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_53_53;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_55_55;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_57_57;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_58_58;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_60_60;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_62_62;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_63_63;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_65_65;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_66_66;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_68_68;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_70_70;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_71_71;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_73_73;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_75_75;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_76_76;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_78_78;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_79_79;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_81_81;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_83_83;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_84_84;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_86_86;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_87_87;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_89_89;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_92_92;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_94_94;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_96_96;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_97_97;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_99_99;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_101_101;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_102_102;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_104_104;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_106_106;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_107_107;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_109_109;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_111_111;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_112_112;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_114_114;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_116_116;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_117_117;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_119_119;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_121_121;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_122_122;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_124_124;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_126_126;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_127_127;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_129_129;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_131_131;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_140_140;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_143_143;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_147_147;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_150_150;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_151_151;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_153_153;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_154_154;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_156_156;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_157_157;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_159_159;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_161_161;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_162_162;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_164_164;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_166_166;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_167_167;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_169_169;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_171_171;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_172_172;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_174_174;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_176_176;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_177_177;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_179_179;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_181_181;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_182_182;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_184_184;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_186_186;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_187_187;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_189_189;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_191_191;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_192_192;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_194_194;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_196_196;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_197_197;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_199_199;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_201_201;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_202_202;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_204_204;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_206_206;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_207_207;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_209_209;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_211_211;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_212_212;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_214_214;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_216_216;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_217_217;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_219_219;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_221_221;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_222_222;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_224_224;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_226_226;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_227_227;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_229_229;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_231_231;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_232_232;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_234_234;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_236_236;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_237_237;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_239_239;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_241_241;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_242_242;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_244_244;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_246_246;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_247_247;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_249_249;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_251_251;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_252_252;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_254_254;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_256_256;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_260_260;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_263_263;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_264_264;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_266_266;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_267_267;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_269_269;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_270_270;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_272_272;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_273_273;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_275_275;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_276_276;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_278_278;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_279_279;
#line 2340 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_281_281;

#line 2349 "write_deps_file.m"
    {
#line 2349 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_17, parse_tree__write_deps_file__ModuleName_19, (MR_String) ".clean", (MR_Integer) 1, &parse_tree__write_deps_file__CleanTargetName_32);
    }
#line 2353 "write_deps_file.m"
    parse_tree__write_deps_file__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[102]);
#line 2352 "write_deps_file.m"
    {
#line 2352 "write_deps_file.m"
      parse_tree__write_deps_file__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2352 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2352 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 2352 "write_deps_file.m"
    }
#line 2352 "write_deps_file.m"
    {
#line 2352 "write_deps_file.m"
      parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2352 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) ((MR_String) "clean_local : "));
#line 2352 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (parse_tree__write_deps_file__V_42_42));
#line 2352 "write_deps_file.m"
    }
#line 2351 "write_deps_file.m"
    {
#line 2351 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_39_39);
    }
#line 2373 "write_deps_file.m"
    {
#line 2373 "write_deps_file.m"
      parse_tree__write_deps_file__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2373 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2373 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103])));
#line 2373 "write_deps_file.m"
    }
#line 2373 "write_deps_file.m"
    {
#line 2373 "write_deps_file.m"
      parse_tree__write_deps_file__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2373 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2373 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 1) = ((MR_Box) (parse_tree__write_deps_file__V_131_131));
#line 2373 "write_deps_file.m"
    }
#line 2372 "write_deps_file.m"
    {
#line 2372 "write_deps_file.m"
      parse_tree__write_deps_file__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2372 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_127_127, 0) = ((MR_Box) ((MR_String) ".errs) | xargs rm -f\n"));
#line 2372 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_127_127, 1) = ((MR_Box) (parse_tree__write_deps_file__V_129_129));
#line 2372 "write_deps_file.m"
    }
#line 2372 "write_deps_file.m"
    {
#line 2372 "write_deps_file.m"
      parse_tree__write_deps_file__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2372 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2372 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 1) = ((MR_Box) (parse_tree__write_deps_file__V_127_127));
#line 2372 "write_deps_file.m"
    }
#line 2372 "write_deps_file.m"
    {
#line 2372 "write_deps_file.m"
      parse_tree__write_deps_file__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2372 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_124_124, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2372 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_124_124, 1) = ((MR_Box) (parse_tree__write_deps_file__V_126_126));
#line 2372 "write_deps_file.m"
    }
#line 2371 "write_deps_file.m"
    {
#line 2371 "write_deps_file.m"
      parse_tree__write_deps_file__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2371 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_122_122, 0) = ((MR_Box) ((MR_String) ".profs) | xargs rm -f\n"));
#line 2371 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_122_122, 1) = ((MR_Box) (parse_tree__write_deps_file__V_124_124));
#line 2371 "write_deps_file.m"
    }
#line 2371 "write_deps_file.m"
    {
#line 2371 "write_deps_file.m"
      parse_tree__write_deps_file__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2371 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_121_121, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2371 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_121_121, 1) = ((MR_Box) (parse_tree__write_deps_file__V_122_122));
#line 2371 "write_deps_file.m"
    }
#line 2371 "write_deps_file.m"
    {
#line 2371 "write_deps_file.m"
      parse_tree__write_deps_file__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2371 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_119_119, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2371 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_119_119, 1) = ((MR_Box) (parse_tree__write_deps_file__V_121_121));
#line 2371 "write_deps_file.m"
    }
#line 2370 "write_deps_file.m"
    {
#line 2370 "write_deps_file.m"
      parse_tree__write_deps_file__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2370 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_117_117, 0) = ((MR_Box) ((MR_String) ".javas) | xargs rm -f\n"));
#line 2370 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_117_117, 1) = ((MR_Box) (parse_tree__write_deps_file__V_119_119));
#line 2370 "write_deps_file.m"
    }
#line 2370 "write_deps_file.m"
    {
#line 2370 "write_deps_file.m"
      parse_tree__write_deps_file__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2370 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_116_116, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2370 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_116_116, 1) = ((MR_Box) (parse_tree__write_deps_file__V_117_117));
#line 2370 "write_deps_file.m"
    }
#line 2370 "write_deps_file.m"
    {
#line 2370 "write_deps_file.m"
      parse_tree__write_deps_file__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2370 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_114_114, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2370 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_114_114, 1) = ((MR_Box) (parse_tree__write_deps_file__V_116_116));
#line 2370 "write_deps_file.m"
    }
#line 2369 "write_deps_file.m"
    {
#line 2369 "write_deps_file.m"
      parse_tree__write_deps_file__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2369 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 0) = ((MR_Box) ((MR_String) ".ils) | xargs rm -f\n"));
#line 2369 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 1) = ((MR_Box) (parse_tree__write_deps_file__V_114_114));
#line 2369 "write_deps_file.m"
    }
#line 2369 "write_deps_file.m"
    {
#line 2369 "write_deps_file.m"
      parse_tree__write_deps_file__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2369 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2369 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 1) = ((MR_Box) (parse_tree__write_deps_file__V_112_112));
#line 2369 "write_deps_file.m"
    }
#line 2369 "write_deps_file.m"
    {
#line 2369 "write_deps_file.m"
      parse_tree__write_deps_file__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2369 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2369 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 1) = ((MR_Box) (parse_tree__write_deps_file__V_111_111));
#line 2369 "write_deps_file.m"
    }
#line 2368 "write_deps_file.m"
    {
#line 2368 "write_deps_file.m"
      parse_tree__write_deps_file__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2368 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_107_107, 0) = ((MR_Box) ((MR_String) ".useds) | xargs rm -f\n"));
#line 2368 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_107_107, 1) = ((MR_Box) (parse_tree__write_deps_file__V_109_109));
#line 2368 "write_deps_file.m"
    }
#line 2368 "write_deps_file.m"
    {
#line 2368 "write_deps_file.m"
      parse_tree__write_deps_file__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2368 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2368 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 1) = ((MR_Box) (parse_tree__write_deps_file__V_107_107));
#line 2368 "write_deps_file.m"
    }
#line 2368 "write_deps_file.m"
    {
#line 2368 "write_deps_file.m"
      parse_tree__write_deps_file__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2368 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2368 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 1) = ((MR_Box) (parse_tree__write_deps_file__V_106_106));
#line 2368 "write_deps_file.m"
    }
#line 2367 "write_deps_file.m"
    {
#line 2367 "write_deps_file.m"
      parse_tree__write_deps_file__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2367 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 0) = ((MR_Box) ((MR_String) ".java_dates) | xargs rm -f\n"));
#line 2367 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 1) = ((MR_Box) (parse_tree__write_deps_file__V_104_104));
#line 2367 "write_deps_file.m"
    }
#line 2367 "write_deps_file.m"
    {
#line 2367 "write_deps_file.m"
      parse_tree__write_deps_file__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2367 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2367 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 1) = ((MR_Box) (parse_tree__write_deps_file__V_102_102));
#line 2367 "write_deps_file.m"
    }
#line 2367 "write_deps_file.m"
    {
#line 2367 "write_deps_file.m"
      parse_tree__write_deps_file__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2367 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2367 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 1) = ((MR_Box) (parse_tree__write_deps_file__V_101_101));
#line 2367 "write_deps_file.m"
    }
#line 2366 "write_deps_file.m"
    {
#line 2366 "write_deps_file.m"
      parse_tree__write_deps_file__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2366 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_97_97, 0) = ((MR_Box) ((MR_String) ".il_dates) | xargs rm -f\n"));
#line 2366 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_97_97, 1) = ((MR_Box) (parse_tree__write_deps_file__V_99_99));
#line 2366 "write_deps_file.m"
    }
#line 2366 "write_deps_file.m"
    {
#line 2366 "write_deps_file.m"
      parse_tree__write_deps_file__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2366 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2366 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 1) = ((MR_Box) (parse_tree__write_deps_file__V_97_97));
#line 2366 "write_deps_file.m"
    }
#line 2366 "write_deps_file.m"
    {
#line 2366 "write_deps_file.m"
      parse_tree__write_deps_file__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2366 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2366 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 1) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 2366 "write_deps_file.m"
    }
#line 2365 "write_deps_file.m"
    {
#line 2365 "write_deps_file.m"
      parse_tree__write_deps_file__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2365 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 0) = ((MR_Box) ((MR_String) ".c_dates) | xargs rm -f\n"));
#line 2365 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 1) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 2365 "write_deps_file.m"
    }
#line 2365 "write_deps_file.m"
    {
#line 2365 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2365 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2365 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__V_92_92));
#line 2365 "write_deps_file.m"
    }
#line 2365 "write_deps_file.m"
    {
#line 2365 "write_deps_file.m"
      parse_tree__write_deps_file__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2365 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_89_89, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2365 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_89_89, 1) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 2365 "write_deps_file.m"
    }
#line 2364 "write_deps_file.m"
    {
#line 2364 "write_deps_file.m"
      parse_tree__write_deps_file__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2364 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
#line 2364 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 1) = ((MR_Box) (parse_tree__write_deps_file__V_89_89));
#line 2364 "write_deps_file.m"
    }
#line 2364 "write_deps_file.m"
    {
#line 2364 "write_deps_file.m"
      parse_tree__write_deps_file__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2364 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 0) = ((MR_Box) (parse_tree__write_deps_file__InitPicObjFileName_24));
#line 2364 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 1) = ((MR_Box) (parse_tree__write_deps_file__V_87_87));
#line 2364 "write_deps_file.m"
    }
#line 2363 "write_deps_file.m"
    {
#line 2363 "write_deps_file.m"
      parse_tree__write_deps_file__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2363 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 0) = ((MR_Box) ((MR_String) ".all_pic_os) "));
#line 2363 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 1) = ((MR_Box) (parse_tree__write_deps_file__V_86_86));
#line 2363 "write_deps_file.m"
    }
#line 2363 "write_deps_file.m"
    {
#line 2363 "write_deps_file.m"
      parse_tree__write_deps_file__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2363 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2363 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 1) = ((MR_Box) (parse_tree__write_deps_file__V_84_84));
#line 2363 "write_deps_file.m"
    }
#line 2363 "write_deps_file.m"
    {
#line 2363 "write_deps_file.m"
      parse_tree__write_deps_file__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2363 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2363 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 1) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 2363 "write_deps_file.m"
    }
#line 2362 "write_deps_file.m"
    {
#line 2362 "write_deps_file.m"
      parse_tree__write_deps_file__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2362 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
#line 2362 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 1) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 2362 "write_deps_file.m"
    }
#line 2361 "write_deps_file.m"
    {
#line 2361 "write_deps_file.m"
      parse_tree__write_deps_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2361 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_23));
#line 2361 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 1) = ((MR_Box) (parse_tree__write_deps_file__V_79_79));
#line 2361 "write_deps_file.m"
    }
#line 2361 "write_deps_file.m"
    {
#line 2361 "write_deps_file.m"
      parse_tree__write_deps_file__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2361 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_76_76, 0) = ((MR_Box) ((MR_String) ".all_os) "));
#line 2361 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_76_76, 1) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 2361 "write_deps_file.m"
    }
#line 2361 "write_deps_file.m"
    {
#line 2361 "write_deps_file.m"
      parse_tree__write_deps_file__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2361 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2361 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 1) = ((MR_Box) (parse_tree__write_deps_file__V_76_76));
#line 2361 "write_deps_file.m"
    }
#line 2361 "write_deps_file.m"
    {
#line 2361 "write_deps_file.m"
      parse_tree__write_deps_file__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2361 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2361 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 1) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 2361 "write_deps_file.m"
    }
#line 2360 "write_deps_file.m"
    {
#line 2360 "write_deps_file.m"
      parse_tree__write_deps_file__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2360 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 0) = ((MR_Box) ((MR_String) ".mihs) | xargs rm -f\n"));
#line 2360 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 1) = ((MR_Box) (parse_tree__write_deps_file__V_73_73));
#line 2360 "write_deps_file.m"
    }
#line 2360 "write_deps_file.m"
    {
#line 2360 "write_deps_file.m"
      parse_tree__write_deps_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2360 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2360 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 1) = ((MR_Box) (parse_tree__write_deps_file__V_71_71));
#line 2360 "write_deps_file.m"
    }
#line 2360 "write_deps_file.m"
    {
#line 2360 "write_deps_file.m"
      parse_tree__write_deps_file__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2360 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2360 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 1) = ((MR_Box) (parse_tree__write_deps_file__V_70_70));
#line 2360 "write_deps_file.m"
    }
#line 2359 "write_deps_file.m"
    {
#line 2359 "write_deps_file.m"
      parse_tree__write_deps_file__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2359 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
#line 2359 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 1) = ((MR_Box) (parse_tree__write_deps_file__V_68_68));
#line 2359 "write_deps_file.m"
    }
#line 2358 "write_deps_file.m"
    {
#line 2358 "write_deps_file.m"
      parse_tree__write_deps_file__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2358 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_22));
#line 2358 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 1) = ((MR_Box) (parse_tree__write_deps_file__V_66_66));
#line 2358 "write_deps_file.m"
    }
#line 2358 "write_deps_file.m"
    {
#line 2358 "write_deps_file.m"
      parse_tree__write_deps_file__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2358 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_63_63, 0) = ((MR_Box) ((MR_String) ".cs) "));
#line 2358 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_63_63, 1) = ((MR_Box) (parse_tree__write_deps_file__V_65_65));
#line 2358 "write_deps_file.m"
    }
#line 2358 "write_deps_file.m"
    {
#line 2358 "write_deps_file.m"
      parse_tree__write_deps_file__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2358 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_62_62, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2358 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_62_62, 1) = ((MR_Box) (parse_tree__write_deps_file__V_63_63));
#line 2358 "write_deps_file.m"
    }
#line 2358 "write_deps_file.m"
    {
#line 2358 "write_deps_file.m"
      parse_tree__write_deps_file__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2358 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2358 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 1) = ((MR_Box) (parse_tree__write_deps_file__V_62_62));
#line 2358 "write_deps_file.m"
    }
#line 2357 "write_deps_file.m"
    {
#line 2357 "write_deps_file.m"
      parse_tree__write_deps_file__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2357 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 0) = ((MR_Box) ((MR_String) ".dirs) | xargs rm -rf \n"));
#line 2357 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 1) = ((MR_Box) (parse_tree__write_deps_file__V_60_60));
#line 2357 "write_deps_file.m"
    }
#line 2357 "write_deps_file.m"
    {
#line 2357 "write_deps_file.m"
      parse_tree__write_deps_file__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2357 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_57_57, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2357 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_57_57, 1) = ((MR_Box) (parse_tree__write_deps_file__V_58_58));
#line 2357 "write_deps_file.m"
    }
#line 2357 "write_deps_file.m"
    {
#line 2357 "write_deps_file.m"
      parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2357 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2357 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_57_57));
#line 2357 "write_deps_file.m"
    }
#line 2356 "write_deps_file.m"
    {
#line 2356 "write_deps_file.m"
      parse_tree__write_deps_file__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2356 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 0) = ((MR_Box) ((MR_String) " :\n"));
#line 2356 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 1) = ((MR_Box) (parse_tree__write_deps_file__V_55_55));
#line 2356 "write_deps_file.m"
    }
#line 2356 "write_deps_file.m"
    {
#line 2356 "write_deps_file.m"
      parse_tree__write_deps_file__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2356 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2356 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 1) = ((MR_Box) (parse_tree__write_deps_file__V_53_53));
#line 2356 "write_deps_file.m"
    }
#line 2355 "write_deps_file.m"
    {
#line 2355 "write_deps_file.m"
      parse_tree__write_deps_file__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2355 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2355 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 1) = ((MR_Box) (parse_tree__write_deps_file__V_52_52));
#line 2355 "write_deps_file.m"
    }
#line 2355 "write_deps_file.m"
    {
#line 2355 "write_deps_file.m"
      parse_tree__write_deps_file__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2355 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2355 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 1) = ((MR_Box) (parse_tree__write_deps_file__V_50_50));
#line 2355 "write_deps_file.m"
    }
#line 2355 "write_deps_file.m"
    {
#line 2355 "write_deps_file.m"
      parse_tree__write_deps_file__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2355 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_46_46, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2355 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_46_46, 1) = ((MR_Box) (parse_tree__write_deps_file__V_49_49));
#line 2355 "write_deps_file.m"
    }
#line 2354 "write_deps_file.m"
    {
#line 2354 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_46_46);
    }
#line 2377 "write_deps_file.m"
    {
#line 2377 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_17, parse_tree__write_deps_file__ModuleName_19, (MR_String) ".realclean", (MR_Integer) 1, &parse_tree__write_deps_file__RealCleanTargetName_33);
    }
#line 2380 "write_deps_file.m"
    {
#line 2380 "write_deps_file.m"
      parse_tree__write_deps_file__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2380 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
#line 2380 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 2380 "write_deps_file.m"
    }
#line 2380 "write_deps_file.m"
    {
#line 2380 "write_deps_file.m"
      parse_tree__write_deps_file__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2380 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 0) = ((MR_Box) ((MR_String) "realclean_local : "));
#line 2380 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 1) = ((MR_Box) (parse_tree__write_deps_file__V_143_143));
#line 2380 "write_deps_file.m"
    }
#line 2379 "write_deps_file.m"
    {
#line 2379 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_140_140);
    }
#line 2407 "write_deps_file.m"
    {
#line 2407 "write_deps_file.m"
      parse_tree__write_deps_file__V_256_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2407 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_256_256, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2407 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_256_256, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[127])));
#line 2407 "write_deps_file.m"
    }
#line 2407 "write_deps_file.m"
    {
#line 2407 "write_deps_file.m"
      parse_tree__write_deps_file__V_254_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2407 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_254_254, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2407 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_254_254, 1) = ((MR_Box) (parse_tree__write_deps_file__V_256_256));
#line 2407 "write_deps_file.m"
    }
#line 2406 "write_deps_file.m"
    {
#line 2406 "write_deps_file.m"
      parse_tree__write_deps_file__V_252_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2406 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 0) = ((MR_Box) ((MR_String) ".foreign_dlls) | xargs rm -f\n"));
#line 2406 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 1) = ((MR_Box) (parse_tree__write_deps_file__V_254_254));
#line 2406 "write_deps_file.m"
    }
#line 2406 "write_deps_file.m"
    {
#line 2406 "write_deps_file.m"
      parse_tree__write_deps_file__V_251_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2406 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_251_251, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2406 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_251_251, 1) = ((MR_Box) (parse_tree__write_deps_file__V_252_252));
#line 2406 "write_deps_file.m"
    }
#line 2406 "write_deps_file.m"
    {
#line 2406 "write_deps_file.m"
      parse_tree__write_deps_file__V_249_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2406 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2406 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 1) = ((MR_Box) (parse_tree__write_deps_file__V_251_251));
#line 2406 "write_deps_file.m"
    }
#line 2405 "write_deps_file.m"
    {
#line 2405 "write_deps_file.m"
      parse_tree__write_deps_file__V_247_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2405 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 0) = ((MR_Box) ((MR_String) ".dlls) | xargs rm -f\n"));
#line 2405 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 1) = ((MR_Box) (parse_tree__write_deps_file__V_249_249));
#line 2405 "write_deps_file.m"
    }
#line 2405 "write_deps_file.m"
    {
#line 2405 "write_deps_file.m"
      parse_tree__write_deps_file__V_246_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2405 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2405 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 1) = ((MR_Box) (parse_tree__write_deps_file__V_247_247));
#line 2405 "write_deps_file.m"
    }
#line 2405 "write_deps_file.m"
    {
#line 2405 "write_deps_file.m"
      parse_tree__write_deps_file__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2405 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2405 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 1) = ((MR_Box) (parse_tree__write_deps_file__V_246_246));
#line 2405 "write_deps_file.m"
    }
#line 2404 "write_deps_file.m"
    {
#line 2404 "write_deps_file.m"
      parse_tree__write_deps_file__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2404 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 0) = ((MR_Box) ((MR_String) ".all_mihs) | xargs rm -f\n"));
#line 2404 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 1) = ((MR_Box) (parse_tree__write_deps_file__V_244_244));
#line 2404 "write_deps_file.m"
    }
#line 2404 "write_deps_file.m"
    {
#line 2404 "write_deps_file.m"
      parse_tree__write_deps_file__V_241_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2404 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_241_241, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2404 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_241_241, 1) = ((MR_Box) (parse_tree__write_deps_file__V_242_242));
#line 2404 "write_deps_file.m"
    }
#line 2404 "write_deps_file.m"
    {
#line 2404 "write_deps_file.m"
      parse_tree__write_deps_file__V_239_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2404 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2404 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 1) = ((MR_Box) (parse_tree__write_deps_file__V_241_241));
#line 2404 "write_deps_file.m"
    }
#line 2403 "write_deps_file.m"
    {
#line 2403 "write_deps_file.m"
      parse_tree__write_deps_file__V_237_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2403 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 0) = ((MR_Box) ((MR_String) ".all_mhs) | xargs rm -f\n"));
#line 2403 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 1) = ((MR_Box) (parse_tree__write_deps_file__V_239_239));
#line 2403 "write_deps_file.m"
    }
#line 2403 "write_deps_file.m"
    {
#line 2403 "write_deps_file.m"
      parse_tree__write_deps_file__V_236_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2403 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_236_236, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2403 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_236_236, 1) = ((MR_Box) (parse_tree__write_deps_file__V_237_237));
#line 2403 "write_deps_file.m"
    }
#line 2403 "write_deps_file.m"
    {
#line 2403 "write_deps_file.m"
      parse_tree__write_deps_file__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2403 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2403 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 1) = ((MR_Box) (parse_tree__write_deps_file__V_236_236));
#line 2403 "write_deps_file.m"
    }
#line 2402 "write_deps_file.m"
    {
#line 2402 "write_deps_file.m"
      parse_tree__write_deps_file__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2402 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 0) = ((MR_Box) ((MR_String) ".module_deps) | xargs rm -f\n"));
#line 2402 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 1) = ((MR_Box) (parse_tree__write_deps_file__V_234_234));
#line 2402 "write_deps_file.m"
    }
#line 2402 "write_deps_file.m"
    {
#line 2402 "write_deps_file.m"
      parse_tree__write_deps_file__V_231_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2402 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2402 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 1) = ((MR_Box) (parse_tree__write_deps_file__V_232_232));
#line 2402 "write_deps_file.m"
    }
#line 2402 "write_deps_file.m"
    {
#line 2402 "write_deps_file.m"
      parse_tree__write_deps_file__V_229_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2402 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2402 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 1) = ((MR_Box) (parse_tree__write_deps_file__V_231_231));
#line 2402 "write_deps_file.m"
    }
#line 2401 "write_deps_file.m"
    {
#line 2401 "write_deps_file.m"
      parse_tree__write_deps_file__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2401 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_227_227, 0) = ((MR_Box) ((MR_String) ".ds) | xargs rm -f\n"));
#line 2401 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_227_227, 1) = ((MR_Box) (parse_tree__write_deps_file__V_229_229));
#line 2401 "write_deps_file.m"
    }
#line 2401 "write_deps_file.m"
    {
#line 2401 "write_deps_file.m"
      parse_tree__write_deps_file__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2401 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2401 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 2401 "write_deps_file.m"
    }
#line 2401 "write_deps_file.m"
    {
#line 2401 "write_deps_file.m"
      parse_tree__write_deps_file__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2401 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2401 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 1) = ((MR_Box) (parse_tree__write_deps_file__V_226_226));
#line 2401 "write_deps_file.m"
    }
#line 2400 "write_deps_file.m"
    {
#line 2400 "write_deps_file.m"
      parse_tree__write_deps_file__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2400 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 0) = ((MR_Box) ((MR_String) ".imdgs) | xargs rm -f\n"));
#line 2400 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 1) = ((MR_Box) (parse_tree__write_deps_file__V_224_224));
#line 2400 "write_deps_file.m"
    }
#line 2400 "write_deps_file.m"
    {
#line 2400 "write_deps_file.m"
      parse_tree__write_deps_file__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2400 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2400 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 1) = ((MR_Box) (parse_tree__write_deps_file__V_222_222));
#line 2400 "write_deps_file.m"
    }
#line 2400 "write_deps_file.m"
    {
#line 2400 "write_deps_file.m"
      parse_tree__write_deps_file__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2400 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2400 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 1) = ((MR_Box) (parse_tree__write_deps_file__V_221_221));
#line 2400 "write_deps_file.m"
    }
#line 2399 "write_deps_file.m"
    {
#line 2399 "write_deps_file.m"
      parse_tree__write_deps_file__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2399 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 0) = ((MR_Box) ((MR_String) ".requests) | xargs rm -f\n"));
#line 2399 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 1) = ((MR_Box) (parse_tree__write_deps_file__V_219_219));
#line 2399 "write_deps_file.m"
    }
#line 2399 "write_deps_file.m"
    {
#line 2399 "write_deps_file.m"
      parse_tree__write_deps_file__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2399 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2399 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 1) = ((MR_Box) (parse_tree__write_deps_file__V_217_217));
#line 2399 "write_deps_file.m"
    }
#line 2399 "write_deps_file.m"
    {
#line 2399 "write_deps_file.m"
      parse_tree__write_deps_file__V_214_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2399 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_214_214, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2399 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_214_214, 1) = ((MR_Box) (parse_tree__write_deps_file__V_216_216));
#line 2399 "write_deps_file.m"
    }
#line 2398 "write_deps_file.m"
    {
#line 2398 "write_deps_file.m"
      parse_tree__write_deps_file__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2398 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_212_212, 0) = ((MR_Box) ((MR_String) ".analysiss) | xargs rm -f\n"));
#line 2398 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_212_212, 1) = ((MR_Box) (parse_tree__write_deps_file__V_214_214));
#line 2398 "write_deps_file.m"
    }
#line 2398 "write_deps_file.m"
    {
#line 2398 "write_deps_file.m"
      parse_tree__write_deps_file__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2398 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_211_211, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2398 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_211_211, 1) = ((MR_Box) (parse_tree__write_deps_file__V_212_212));
#line 2398 "write_deps_file.m"
    }
#line 2398 "write_deps_file.m"
    {
#line 2398 "write_deps_file.m"
      parse_tree__write_deps_file__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2398 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2398 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 1) = ((MR_Box) (parse_tree__write_deps_file__V_211_211));
#line 2398 "write_deps_file.m"
    }
#line 2397 "write_deps_file.m"
    {
#line 2397 "write_deps_file.m"
      parse_tree__write_deps_file__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2397 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_207_207, 0) = ((MR_Box) ((MR_String) ".trans_opts) | xargs rm -f\n"));
#line 2397 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_207_207, 1) = ((MR_Box) (parse_tree__write_deps_file__V_209_209));
#line 2397 "write_deps_file.m"
    }
#line 2397 "write_deps_file.m"
    {
#line 2397 "write_deps_file.m"
      parse_tree__write_deps_file__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2397 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2397 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 1) = ((MR_Box) (parse_tree__write_deps_file__V_207_207));
#line 2397 "write_deps_file.m"
    }
#line 2397 "write_deps_file.m"
    {
#line 2397 "write_deps_file.m"
      parse_tree__write_deps_file__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2397 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_204_204, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2397 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_204_204, 1) = ((MR_Box) (parse_tree__write_deps_file__V_206_206));
#line 2397 "write_deps_file.m"
    }
#line 2396 "write_deps_file.m"
    {
#line 2396 "write_deps_file.m"
      parse_tree__write_deps_file__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2396 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_202_202, 0) = ((MR_Box) ((MR_String) ".opts) | xargs rm -f\n"));
#line 2396 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_202_202, 1) = ((MR_Box) (parse_tree__write_deps_file__V_204_204));
#line 2396 "write_deps_file.m"
    }
#line 2396 "write_deps_file.m"
    {
#line 2396 "write_deps_file.m"
      parse_tree__write_deps_file__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2396 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2396 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 1) = ((MR_Box) (parse_tree__write_deps_file__V_202_202));
#line 2396 "write_deps_file.m"
    }
#line 2396 "write_deps_file.m"
    {
#line 2396 "write_deps_file.m"
      parse_tree__write_deps_file__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2396 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2396 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 1) = ((MR_Box) (parse_tree__write_deps_file__V_201_201));
#line 2396 "write_deps_file.m"
    }
#line 2395 "write_deps_file.m"
    {
#line 2395 "write_deps_file.m"
      parse_tree__write_deps_file__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2395 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 0) = ((MR_Box) ((MR_String) ".int3s) | xargs rm -f\n"));
#line 2395 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 1) = ((MR_Box) (parse_tree__write_deps_file__V_199_199));
#line 2395 "write_deps_file.m"
    }
#line 2395 "write_deps_file.m"
    {
#line 2395 "write_deps_file.m"
      parse_tree__write_deps_file__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2395 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_196_196, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2395 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_196_196, 1) = ((MR_Box) (parse_tree__write_deps_file__V_197_197));
#line 2395 "write_deps_file.m"
    }
#line 2395 "write_deps_file.m"
    {
#line 2395 "write_deps_file.m"
      parse_tree__write_deps_file__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2395 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_194_194, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2395 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_194_194, 1) = ((MR_Box) (parse_tree__write_deps_file__V_196_196));
#line 2395 "write_deps_file.m"
    }
#line 2394 "write_deps_file.m"
    {
#line 2394 "write_deps_file.m"
      parse_tree__write_deps_file__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2394 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 0) = ((MR_Box) ((MR_String) ".all_int0s) | xargs rm -f\n"));
#line 2394 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 1) = ((MR_Box) (parse_tree__write_deps_file__V_194_194));
#line 2394 "write_deps_file.m"
    }
#line 2394 "write_deps_file.m"
    {
#line 2394 "write_deps_file.m"
      parse_tree__write_deps_file__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2394 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2394 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 1) = ((MR_Box) (parse_tree__write_deps_file__V_192_192));
#line 2394 "write_deps_file.m"
    }
#line 2394 "write_deps_file.m"
    {
#line 2394 "write_deps_file.m"
      parse_tree__write_deps_file__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2394 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_189_189, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2394 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_189_189, 1) = ((MR_Box) (parse_tree__write_deps_file__V_191_191));
#line 2394 "write_deps_file.m"
    }
#line 2390 "write_deps_file.m"
    {
#line 2390 "write_deps_file.m"
      parse_tree__write_deps_file__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2390 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_187_187, 0) = ((MR_Box) ((MR_String) ".ints) | xargs rm -f\n"));
#line 2390 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_187_187, 1) = ((MR_Box) (parse_tree__write_deps_file__V_189_189));
#line 2390 "write_deps_file.m"
    }
#line 2390 "write_deps_file.m"
    {
#line 2390 "write_deps_file.m"
      parse_tree__write_deps_file__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2390 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2390 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 1) = ((MR_Box) (parse_tree__write_deps_file__V_187_187));
#line 2390 "write_deps_file.m"
    }
#line 2390 "write_deps_file.m"
    {
#line 2390 "write_deps_file.m"
      parse_tree__write_deps_file__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2390 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2390 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 1) = ((MR_Box) (parse_tree__write_deps_file__V_186_186));
#line 2390 "write_deps_file.m"
    }
#line 2389 "write_deps_file.m"
    {
#line 2389 "write_deps_file.m"
      parse_tree__write_deps_file__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2389 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 0) = ((MR_Box) ((MR_String) ".trans_opt_dates) | xargs rm -f\n"));
#line 2389 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 1) = ((MR_Box) (parse_tree__write_deps_file__V_184_184));
#line 2389 "write_deps_file.m"
    }
#line 2389 "write_deps_file.m"
    {
#line 2389 "write_deps_file.m"
      parse_tree__write_deps_file__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2389 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_181_181, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2389 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_181_181, 1) = ((MR_Box) (parse_tree__write_deps_file__V_182_182));
#line 2389 "write_deps_file.m"
    }
#line 2389 "write_deps_file.m"
    {
#line 2389 "write_deps_file.m"
      parse_tree__write_deps_file__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2389 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_179_179, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2389 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_179_179, 1) = ((MR_Box) (parse_tree__write_deps_file__V_181_181));
#line 2389 "write_deps_file.m"
    }
#line 2388 "write_deps_file.m"
    {
#line 2388 "write_deps_file.m"
      parse_tree__write_deps_file__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2388 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_177_177, 0) = ((MR_Box) ((MR_String) ".optdates) | xargs rm -f\n"));
#line 2388 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_177_177, 1) = ((MR_Box) (parse_tree__write_deps_file__V_179_179));
#line 2388 "write_deps_file.m"
    }
#line 2388 "write_deps_file.m"
    {
#line 2388 "write_deps_file.m"
      parse_tree__write_deps_file__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2388 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2388 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 1) = ((MR_Box) (parse_tree__write_deps_file__V_177_177));
#line 2388 "write_deps_file.m"
    }
#line 2388 "write_deps_file.m"
    {
#line 2388 "write_deps_file.m"
      parse_tree__write_deps_file__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2388 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2388 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 1) = ((MR_Box) (parse_tree__write_deps_file__V_176_176));
#line 2388 "write_deps_file.m"
    }
#line 2387 "write_deps_file.m"
    {
#line 2387 "write_deps_file.m"
      parse_tree__write_deps_file__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2387 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 0) = ((MR_Box) ((MR_String) ".date3s) | xargs rm -f\n"));
#line 2387 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 1) = ((MR_Box) (parse_tree__write_deps_file__V_174_174));
#line 2387 "write_deps_file.m"
    }
#line 2387 "write_deps_file.m"
    {
#line 2387 "write_deps_file.m"
      parse_tree__write_deps_file__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2387 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2387 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 1) = ((MR_Box) (parse_tree__write_deps_file__V_172_172));
#line 2387 "write_deps_file.m"
    }
#line 2387 "write_deps_file.m"
    {
#line 2387 "write_deps_file.m"
      parse_tree__write_deps_file__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2387 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2387 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 1) = ((MR_Box) (parse_tree__write_deps_file__V_171_171));
#line 2387 "write_deps_file.m"
    }
#line 2386 "write_deps_file.m"
    {
#line 2386 "write_deps_file.m"
      parse_tree__write_deps_file__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2386 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 0) = ((MR_Box) ((MR_String) ".date0s) | xargs rm -f\n"));
#line 2386 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 1) = ((MR_Box) (parse_tree__write_deps_file__V_169_169));
#line 2386 "write_deps_file.m"
    }
#line 2386 "write_deps_file.m"
    {
#line 2386 "write_deps_file.m"
      parse_tree__write_deps_file__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2386 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2386 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 1) = ((MR_Box) (parse_tree__write_deps_file__V_167_167));
#line 2386 "write_deps_file.m"
    }
#line 2386 "write_deps_file.m"
    {
#line 2386 "write_deps_file.m"
      parse_tree__write_deps_file__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2386 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2386 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 1) = ((MR_Box) (parse_tree__write_deps_file__V_166_166));
#line 2386 "write_deps_file.m"
    }
#line 2385 "write_deps_file.m"
    {
#line 2385 "write_deps_file.m"
      parse_tree__write_deps_file__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2385 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 0) = ((MR_Box) ((MR_String) ".dates) | xargs rm -f\n"));
#line 2385 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 1) = ((MR_Box) (parse_tree__write_deps_file__V_164_164));
#line 2385 "write_deps_file.m"
    }
#line 2385 "write_deps_file.m"
    {
#line 2385 "write_deps_file.m"
      parse_tree__write_deps_file__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2385 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2385 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 1) = ((MR_Box) (parse_tree__write_deps_file__V_162_162));
#line 2385 "write_deps_file.m"
    }
#line 2385 "write_deps_file.m"
    {
#line 2385 "write_deps_file.m"
      parse_tree__write_deps_file__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2385 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2385 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 1) = ((MR_Box) (parse_tree__write_deps_file__V_161_161));
#line 2385 "write_deps_file.m"
    }
#line 2384 "write_deps_file.m"
    {
#line 2384 "write_deps_file.m"
      parse_tree__write_deps_file__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2384 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2384 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 1) = ((MR_Box) (parse_tree__write_deps_file__V_159_159));
#line 2384 "write_deps_file.m"
    }
#line 2384 "write_deps_file.m"
    {
#line 2384 "write_deps_file.m"
      parse_tree__write_deps_file__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2384 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2384 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 1) = ((MR_Box) (parse_tree__write_deps_file__V_157_157));
#line 2384 "write_deps_file.m"
    }
#line 2384 "write_deps_file.m"
    {
#line 2384 "write_deps_file.m"
      parse_tree__write_deps_file__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2384 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 0) = ((MR_Box) ((MR_String) " : "));
#line 2384 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 1) = ((MR_Box) (parse_tree__write_deps_file__V_156_156));
#line 2384 "write_deps_file.m"
    }
#line 2384 "write_deps_file.m"
    {
#line 2384 "write_deps_file.m"
      parse_tree__write_deps_file__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2384 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
#line 2384 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 1) = ((MR_Box) (parse_tree__write_deps_file__V_154_154));
#line 2384 "write_deps_file.m"
    }
#line 2383 "write_deps_file.m"
    {
#line 2383 "write_deps_file.m"
      parse_tree__write_deps_file__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2383 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2383 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 1) = ((MR_Box) (parse_tree__write_deps_file__V_153_153));
#line 2383 "write_deps_file.m"
    }
#line 2383 "write_deps_file.m"
    {
#line 2383 "write_deps_file.m"
      parse_tree__write_deps_file__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2383 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_150_150, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
#line 2383 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_150_150, 1) = ((MR_Box) (parse_tree__write_deps_file__V_151_151));
#line 2383 "write_deps_file.m"
    }
#line 2383 "write_deps_file.m"
    {
#line 2383 "write_deps_file.m"
      parse_tree__write_deps_file__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2383 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2383 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 1) = ((MR_Box) (parse_tree__write_deps_file__V_150_150));
#line 2383 "write_deps_file.m"
    }
#line 2382 "write_deps_file.m"
    {
#line 2382 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_147_147);
    }
#line 2417 "write_deps_file.m"
    {
#line 2417 "write_deps_file.m"
      parse_tree__write_deps_file__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2417 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 0) = ((MR_Box) (parse_tree__write_deps_file__DvFileName_30));
#line 2417 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[112])));
#line 2417 "write_deps_file.m"
    }
#line 2416 "write_deps_file.m"
    {
#line 2416 "write_deps_file.m"
      parse_tree__write_deps_file__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2416 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 0) = ((MR_Box) ((MR_String) " "));
#line 2416 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 1) = ((MR_Box) (parse_tree__write_deps_file__V_281_281));
#line 2416 "write_deps_file.m"
    }
#line 2416 "write_deps_file.m"
    {
#line 2416 "write_deps_file.m"
      parse_tree__write_deps_file__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2416 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 0) = ((MR_Box) (parse_tree__write_deps_file__DepFileName_29));
#line 2416 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 1) = ((MR_Box) (parse_tree__write_deps_file__V_279_279));
#line 2416 "write_deps_file.m"
    }
#line 2415 "write_deps_file.m"
    {
#line 2415 "write_deps_file.m"
      parse_tree__write_deps_file__V_276_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2415 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 0) = ((MR_Box) ((MR_String) " "));
#line 2415 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 1) = ((MR_Box) (parse_tree__write_deps_file__V_278_278));
#line 2415 "write_deps_file.m"
    }
#line 2415 "write_deps_file.m"
    {
#line 2415 "write_deps_file.m"
      parse_tree__write_deps_file__V_275_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2415 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 0) = ((MR_Box) (parse_tree__write_deps_file__JarFileName_28));
#line 2415 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 1) = ((MR_Box) (parse_tree__write_deps_file__V_276_276));
#line 2415 "write_deps_file.m"
    }
#line 2414 "write_deps_file.m"
    {
#line 2414 "write_deps_file.m"
      parse_tree__write_deps_file__V_273_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2414 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 0) = ((MR_Box) ((MR_String) " "));
#line 2414 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 1) = ((MR_Box) (parse_tree__write_deps_file__V_275_275));
#line 2414 "write_deps_file.m"
    }
#line 2414 "write_deps_file.m"
    {
#line 2414 "write_deps_file.m"
      parse_tree__write_deps_file__V_272_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2414 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 0) = ((MR_Box) (parse_tree__write_deps_file__SharedLibFileName_27));
#line 2414 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 1) = ((MR_Box) (parse_tree__write_deps_file__V_273_273));
#line 2414 "write_deps_file.m"
    }
#line 2413 "write_deps_file.m"
    {
#line 2413 "write_deps_file.m"
      parse_tree__write_deps_file__V_270_270 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2413 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_270_270, 0) = ((MR_Box) ((MR_String) " "));
#line 2413 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_270_270, 1) = ((MR_Box) (parse_tree__write_deps_file__V_272_272));
#line 2413 "write_deps_file.m"
    }
#line 2413 "write_deps_file.m"
    {
#line 2413 "write_deps_file.m"
      parse_tree__write_deps_file__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2413 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 0) = ((MR_Box) (parse_tree__write_deps_file__LibFileName_26));
#line 2413 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 1) = ((MR_Box) (parse_tree__write_deps_file__V_270_270));
#line 2413 "write_deps_file.m"
    }
#line 2412 "write_deps_file.m"
    {
#line 2412 "write_deps_file.m"
      parse_tree__write_deps_file__V_267_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2412 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_267_267, 0) = ((MR_Box) ((MR_String) " "));
#line 2412 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_267_267, 1) = ((MR_Box) (parse_tree__write_deps_file__V_269_269));
#line 2412 "write_deps_file.m"
    }
#line 2412 "write_deps_file.m"
    {
#line 2412 "write_deps_file.m"
      parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2412 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_25));
#line 2412 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__V_267_267));
#line 2412 "write_deps_file.m"
    }
#line 2411 "write_deps_file.m"
    {
#line 2411 "write_deps_file.m"
      parse_tree__write_deps_file__V_264_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2411 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) "));
#line 2411 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 2411 "write_deps_file.m"
    }
#line 2411 "write_deps_file.m"
    {
#line 2411 "write_deps_file.m"
      parse_tree__write_deps_file__V_263_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2411 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 0) = ((MR_Box) (parse_tree__write_deps_file__ExeFileName_21));
#line 2411 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 1) = ((MR_Box) (parse_tree__write_deps_file__V_264_264));
#line 2411 "write_deps_file.m"
    }
#line 2410 "write_deps_file.m"
    {
#line 2410 "write_deps_file.m"
      parse_tree__write_deps_file__V_260_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2410 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 0) = ((MR_Box) ((MR_String) "\t-rm -f "));
#line 2410 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 1) = ((MR_Box) (parse_tree__write_deps_file__V_263_263));
#line 2410 "write_deps_file.m"
    }
#line 2409 "write_deps_file.m"
    {
#line 2409 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_260_260);
#line 2409 "write_deps_file.m"
      return;
    }
#line 2340 "write_deps_file.m"
  }
#line 2332 "write_deps_file.m"
}

#line 2319 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(
#line 2319 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 2319 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_9,
#line 2319 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 2319 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_11,
#line 2319 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__5_5)
#line 2319 "write_deps_file.m"
{
#line 2324 "write_deps_file.m"
  {
#line 2324 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2324 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Extension_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 0)));
#line 2324 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__VarExtension_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 1)));
#line 2324 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TargetName_15;
#line 2324 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_20_20;
#line 2324 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_23_23;
#line 2324 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_24_24;
#line 2324 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_26_26;
#line 2324 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_27_27;
#line 2324 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_29_29;
#line 2324 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_30_30;

#line 2325 "write_deps_file.m"
    {
#line 2325 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__Extension_12, (MR_Integer) 1, &parse_tree__write_deps_file__TargetName_15);
    }
#line 2329 "write_deps_file.m"
    {
#line 2329 "write_deps_file.m"
      parse_tree__write_deps_file__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2329 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_30_30, 0) = ((MR_Box) (parse_tree__write_deps_file__VarExtension_13));
#line 2329 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[126])));
#line 2329 "write_deps_file.m"
    }
#line 2329 "write_deps_file.m"
    {
#line 2329 "write_deps_file.m"
      parse_tree__write_deps_file__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2329 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_29_29, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_11));
#line 2329 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_29_29, 1) = ((MR_Box) (parse_tree__write_deps_file__V_30_30));
#line 2329 "write_deps_file.m"
    }
#line 2329 "write_deps_file.m"
    {
#line 2329 "write_deps_file.m"
      parse_tree__write_deps_file__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2329 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_27_27, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 2329 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_27_27, 1) = ((MR_Box) (parse_tree__write_deps_file__V_29_29));
#line 2329 "write_deps_file.m"
    }
#line 2329 "write_deps_file.m"
    {
#line 2329 "write_deps_file.m"
      parse_tree__write_deps_file__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2329 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_26_26, 0) = ((MR_Box) (parse_tree__write_deps_file__TargetName_15));
#line 2329 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_26_26, 1) = ((MR_Box) (parse_tree__write_deps_file__V_27_27));
#line 2329 "write_deps_file.m"
    }
#line 2328 "write_deps_file.m"
    {
#line 2328 "write_deps_file.m"
      parse_tree__write_deps_file__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2328 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_24_24, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2328 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_24_24, 1) = ((MR_Box) (parse_tree__write_deps_file__V_26_26));
#line 2328 "write_deps_file.m"
    }
#line 2328 "write_deps_file.m"
    {
#line 2328 "write_deps_file.m"
      parse_tree__write_deps_file__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2328 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_23_23, 0) = ((MR_Box) (parse_tree__write_deps_file__TargetName_15));
#line 2328 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_23_23, 1) = ((MR_Box) (parse_tree__write_deps_file__V_24_24));
#line 2328 "write_deps_file.m"
    }
#line 2328 "write_deps_file.m"
    {
#line 2328 "write_deps_file.m"
      parse_tree__write_deps_file__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2328 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_20_20, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2328 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_20_20, 1) = ((MR_Box) (parse_tree__write_deps_file__V_23_23));
#line 2328 "write_deps_file.m"
    }
#line 2327 "write_deps_file.m"
    {
#line 2327 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_9, parse_tree__write_deps_file__V_20_20);
#line 2327 "write_deps_file.m"
      return;
    }
#line 2324 "write_deps_file.m"
  }
#line 2319 "write_deps_file.m"
}

#line 2302 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1(
#line 2302 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2302 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2302 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2302 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 2302 "write_deps_file.m"
{
#line 2302 "write_deps_file.m"
  {
#line 2302 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 2302 "write_deps_file.m"
    {
#line 2302 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 2302 "write_deps_file.m"
      return;
    }
#line 2302 "write_deps_file.m"
  }
#line 2302 "write_deps_file.m"
}

#line 2296 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(
#line 2296 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 2296 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 2296 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 2296 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_10)
#line 2296 "write_deps_file.m"
{
#line 2300 "write_deps_file.m"
  {
#line 2300 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2300 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_14_14;
#line 2301 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_13;

#line 2302 "write_deps_file.m"
    {
#line 2302 "write_deps_file.m"
      parse_tree__write_deps_file__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2302 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[2]));
#line 2302 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1));
#line 2302 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2302 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 2302 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_8));
#line 2302 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_9));
#line 2302 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 6) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_10));
#line 2302 "write_deps_file.m"
    }
#line 2301 "write_deps_file.m"
    {
#line 2301 "write_deps_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__write_deps_file_scalar_common_2[3], (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_14_14, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[101]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_13);
    }
#line 2300 "write_deps_file.m"
  }
#line 2296 "write_deps_file.m"
}

#line 2131 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(
#line 2131 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 2131 "write_deps_file.m"
{
#line 2131 "write_deps_file.m"
  {
#line 2131 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 2131 "write_deps_file.m"
    MR_builtin_longjmp((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0, 1);
#line 2131 "write_deps_file.m"
  }
#line 2131 "write_deps_file.m"
}

#line 2131 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3(
#line 2131 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 2131 "write_deps_file.m"
{
#line 2131 "write_deps_file.m"
  {
#line 2131 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 2131 "write_deps_file.m"
    (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_29_29 = ((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_V_29_29);
#line 2131 "write_deps_file.m"
    (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_44_44 = ((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_V_44_44);
#line 2131 "write_deps_file.m"
    {
#line 2131 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(parse_tree__write_deps_file__env_ptr);
#line 2131 "write_deps_file.m"
      return;
    }
#line 2131 "write_deps_file.m"
  }
#line 2131 "write_deps_file.m"
}

#line 2131 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(
#line 2131 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 2131 "write_deps_file.m"
{
#line 2131 "write_deps_file.m"
  {
#line 2131 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 2131 "write_deps_file.m"
    {
#line 2131 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_44_44, (MR_Integer) 0)));
#line 2132 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__V_340_340;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_341_341;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_342_342;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_343_343;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_344_344;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_345_345;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_346_346;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_347_347;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_348_348;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_349_349;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_350_350;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_351_351;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_352_352;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_353_353;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_354_354;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_355_355;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_356_356;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_357_357;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_358_358;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_359_359;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_360_360;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_361_361;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_362_362;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_363_363;
#line 2132 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_364_364;
#line 2132 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__V_365_365;

#line 2131 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_44_44, (MR_Integer) 1)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_340_340 = ((MR_String) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 0)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 1)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 2)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 3)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 4)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 5)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 6)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 7)));
#line 2132 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 8)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 9)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 10)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 11)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 12)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 13)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 14)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 15)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 16)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 17)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 18)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 19)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_359_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 20)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_360_360 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 21)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_361_361 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 22)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_362_362 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 23)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_363_363 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 24)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_364_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 25)));
#line 2132 "write_deps_file.m"
      parse_tree__write_deps_file__V_365_365 = ((MR_String) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 26)));
#line 2132 "write_deps_file.m"
      {
#line 2132 "write_deps_file.m"
        (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = mercury__set__non_empty_1_p_0((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__TypeCtorInfo_366_366, (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_45_45);
      }
#line 2132 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 2132 "write_deps_file.m"
        {
#line 2132 "write_deps_file.m"
          parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(parse_tree__write_deps_file__env_ptr);
#line 2132 "write_deps_file.m"
          return;
        }
#line 2131 "write_deps_file.m"
    }
#line 2131 "write_deps_file.m"
  }
#line 2131 "write_deps_file.m"
}

#line 2131 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(
#line 2131 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 2131 "write_deps_file.m"
{
#line 2131 "write_deps_file.m"
  {
#line 2131 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 2131 "write_deps_file.m"
    if (MR_builtin_setjmp((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0) == 0)
#line 2131 "write_deps_file.m"
      {
#line 2131 "write_deps_file.m"
        {
#line 6432 "parse_tree.write_deps_file.c"
          (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__TypeCtorInfo_366_366 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2131 "write_deps_file.m"
          {
#line 2131 "write_deps_file.m"
            mercury__map__member_3_p_0((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__TypeCtorInfo_366_366, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17, &(parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_V_29_29, &(parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_V_44_44, parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3, parse_tree__write_deps_file__env_ptr);
          }
#line 2131 "write_deps_file.m"
        }
#line 2131 "write_deps_file.m"
        (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = MR_FALSE;
#line 2131 "write_deps_file.m"
      }
#line 2131 "write_deps_file.m"
    else
#line 2131 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = MR_TRUE;
#line 2131 "write_deps_file.m"
  }
#line 2131 "write_deps_file.m"
}

#line 2107 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(
#line 2107 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_14,
#line 2107 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_15,
#line 2107 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_16,
#line 2107 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_17,
#line 2107 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_18,
#line 2107 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_19,
#line 2107 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_20,
#line 2107 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_21,
#line 2107 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_22,
#line 2107 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeOptsVar_23,
#line 2107 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeTransOptsVar_24)
#line 2107 "write_deps_file.m"
{
#line 2107 "write_deps_file.m"
  {
#line 2107 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s parse_tree__write_deps_file__env;

#line 2107 "write_deps_file.m"
    (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17 = parse_tree__write_deps_file__DepsMap_17;
#line 2113 "write_deps_file.m"
    {
#line 2113 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallIntsTargetName_26;
#line 2113 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__OptStr_27;
#line 2113 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__Int0Str_31;
#line 2113 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__MaybeInt0sVar_32;
#line 2113 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__TransOptStr_33;
#line 2113 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__DepStr_34;
#line 2113 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallOptsTargetName_35;
#line 2113 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallHdrsTargetName_36;
#line 2113 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_37;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_49_49;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_52_52;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_53_53;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_55_55;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_56_56;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_58_58;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_59_59;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_61_61;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_62_62;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_64_64;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_65_65;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_66_66;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_67_67;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_68_68;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_70_70;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_72_72;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_73_73;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_75_75;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_76_76;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_78_78;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_79_79;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_80_80;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_81_81;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_82_82;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_84_84;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_86_86;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_88_88;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_90_90;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_92_92;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_94_94;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_96_96;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_98_98;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_100_100;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_102_102;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_104_104;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_106_106;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_108_108;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_110_110;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_111_111;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_112_112;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_113_113;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_137_137;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_140_140;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_141_141;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_143_143;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_217_217;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_220_220;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_221_221;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_223_223;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_224_224;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_226_226;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_228_228;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_229_229;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_231_231;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_233_233;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_235_235;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_236_236;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_238_238;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_240_240;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_242_242;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_244_244;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_260_260;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_263_263;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_264_264;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_266_266;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_267_267;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_269_269;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_271_271;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_272_272;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_274_274;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_276_276;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_278_278;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_279_279;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_281_281;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_283_283;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_285_285;
#line 2113 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_287_287;

#line 2119 "write_deps_file.m"
      {
#line 2119 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_ints", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallIntsTargetName_26);
      }
#line 2124 "write_deps_file.m"
#line 2124 "write_deps_file.m"
      switch (parse_tree__write_deps_file__Intermod_20) {
#line 2124 "write_deps_file.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 2124 "write_deps_file.m"
        case (MR_Integer) 0:
#line 2126 "write_deps_file.m"
          parse_tree__write_deps_file__OptStr_27 = (MR_String) "";
#line 2124 "write_deps_file.m"
          break;
#line 2124 "write_deps_file.m"
        case (MR_Integer) 1:
#line 2123 "write_deps_file.m"
          parse_tree__write_deps_file__OptStr_27 = (MR_String) " opt";
#line 2124 "write_deps_file.m"
          break;
#line 2124 "write_deps_file.m"
      }
#line 2129 "write_deps_file.m"
      (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = (parse_tree__write_deps_file__Intermod_20 == (MR_Integer) 1);
#line 2129 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 2131 "write_deps_file.m"
        {
#line 2131 "write_deps_file.m"
          parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(&parse_tree__write_deps_file__env);
        }
#line 2139 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 2137 "write_deps_file.m"
        {
#line 2137 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__V_47_47;

#line 2137 "write_deps_file.m"
          parse_tree__write_deps_file__Int0Str_31 = (MR_String) " int0";
#line 2138 "write_deps_file.m"
          {
#line 2138 "write_deps_file.m"
            parse_tree__write_deps_file__V_47_47 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_18, (MR_String) ".int0s) ");
          }
#line 2138 "write_deps_file.m"
          {
#line 2138 "write_deps_file.m"
            parse_tree__write_deps_file__MaybeInt0sVar_32 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_47_47);
          }
#line 2137 "write_deps_file.m"
        }
#line 2139 "write_deps_file.m"
      else
#line 2140 "write_deps_file.m"
        {
#line 2140 "write_deps_file.m"
          parse_tree__write_deps_file__Int0Str_31 = (MR_String) "";
#line 2141 "write_deps_file.m"
          parse_tree__write_deps_file__MaybeInt0sVar_32 = (MR_String) "";
#line 2140 "write_deps_file.m"
        }
#line 2146 "write_deps_file.m"
#line 2146 "write_deps_file.m"
      switch (parse_tree__write_deps_file__TransOpt_21) {
#line 2146 "write_deps_file.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 2146 "write_deps_file.m"
        case (MR_Integer) 0:
#line 2148 "write_deps_file.m"
          parse_tree__write_deps_file__TransOptStr_33 = (MR_String) "";
#line 2146 "write_deps_file.m"
          break;
#line 2146 "write_deps_file.m"
        case (MR_Integer) 1:
#line 2145 "write_deps_file.m"
          parse_tree__write_deps_file__TransOptStr_33 = (MR_String) " trans_opt";
#line 2146 "write_deps_file.m"
          break;
#line 2146 "write_deps_file.m"
      }
#line 2153 "write_deps_file.m"
#line 2153 "write_deps_file.m"
      switch (parse_tree__write_deps_file__MmcMakeDeps_19) {
#line 2153 "write_deps_file.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 2153 "write_deps_file.m"
        case (MR_Integer) 0:
#line 2155 "write_deps_file.m"
          parse_tree__write_deps_file__DepStr_34 = (MR_String) "";
#line 2153 "write_deps_file.m"
          break;
#line 2153 "write_deps_file.m"
        case (MR_Integer) 1:
#line 2152 "write_deps_file.m"
          parse_tree__write_deps_file__DepStr_34 = (MR_String) " module_dep";
#line 2153 "write_deps_file.m"
          break;
#line 2153 "write_deps_file.m"
      }
#line 2180 "write_deps_file.m"
      {
#line 2180 "write_deps_file.m"
        parse_tree__write_deps_file__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2180 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_113_113, 0) = ((MR_Box) (parse_tree__write_deps_file__DepStr_34));
#line 2180 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[41])));
#line 2180 "write_deps_file.m"
      }
#line 2180 "write_deps_file.m"
      {
#line 2180 "write_deps_file.m"
        parse_tree__write_deps_file__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2180 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptStr_33));
#line 2180 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 1) = ((MR_Box) (parse_tree__write_deps_file__V_113_113));
#line 2180 "write_deps_file.m"
      }
#line 2180 "write_deps_file.m"
      {
#line 2180 "write_deps_file.m"
        parse_tree__write_deps_file__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2180 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 0) = ((MR_Box) (parse_tree__write_deps_file__OptStr_27));
#line 2180 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 1) = ((MR_Box) (parse_tree__write_deps_file__V_112_112));
#line 2180 "write_deps_file.m"
      }
#line 2180 "write_deps_file.m"
      {
#line 2180 "write_deps_file.m"
        parse_tree__write_deps_file__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2180 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_110_110, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0Str_31));
#line 2180 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_110_110, 1) = ((MR_Box) (parse_tree__write_deps_file__V_111_111));
#line 2180 "write_deps_file.m"
      }
#line 2179 "write_deps_file.m"
      {
#line 2179 "write_deps_file.m"
        parse_tree__write_deps_file__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2179 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_108_108, 0) = ((MR_Box) ((MR_String) "\tfor ext in int int2 int3"));
#line 2179 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_108_108, 1) = ((MR_Box) (parse_tree__write_deps_file__V_110_110));
#line 2179 "write_deps_file.m"
      }
#line 2178 "write_deps_file.m"
      {
#line 2178 "write_deps_file.m"
        parse_tree__write_deps_file__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2178 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 0) = ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n"));
#line 2178 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 1) = ((MR_Box) (parse_tree__write_deps_file__V_108_108));
#line 2178 "write_deps_file.m"
      }
#line 2177 "write_deps_file.m"
      {
#line 2177 "write_deps_file.m"
        parse_tree__write_deps_file__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2177 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 0) = ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails, then we just use\n"));
#line 2177 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 1) = ((MR_Box) (parse_tree__write_deps_file__V_106_106));
#line 2177 "write_deps_file.m"
      }
#line 2176 "write_deps_file.m"
      {
#line 2176 "write_deps_file.m"
        parse_tree__write_deps_file__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2176 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 0) = ((MR_Box) ((MR_String) "\t# The following is needed to support the \140--use-subdirs\' option\n"));
#line 2176 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 1) = ((MR_Box) (parse_tree__write_deps_file__V_104_104));
#line 2176 "write_deps_file.m"
      }
#line 2175 "write_deps_file.m"
      {
#line 2175 "write_deps_file.m"
        parse_tree__write_deps_file__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2175 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_100_100, 0) = ((MR_Box) ((MR_String) "\tdone\n"));
#line 2175 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_100_100, 1) = ((MR_Box) (parse_tree__write_deps_file__V_102_102));
#line 2175 "write_deps_file.m"
      }
#line 2174 "write_deps_file.m"
      {
#line 2174 "write_deps_file.m"
        parse_tree__write_deps_file__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2174 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 0) = ((MR_Box) ((MR_String) "\t\tfi; \\\n"));
#line 2174 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 1) = ((MR_Box) (parse_tree__write_deps_file__V_100_100));
#line 2174 "write_deps_file.m"
      }
#line 2173 "write_deps_file.m"
      {
#line 2173 "write_deps_file.m"
        parse_tree__write_deps_file__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2173 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 0) = ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\\n"));
#line 2173 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 1) = ((MR_Box) (parse_tree__write_deps_file__V_98_98));
#line 2173 "write_deps_file.m"
      }
#line 2172 "write_deps_file.m"
      {
#line 2172 "write_deps_file.m"
        parse_tree__write_deps_file__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2172 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"installing \044\044target\"; \\\n"));
#line 2172 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 1) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 2172 "write_deps_file.m"
      }
#line 2171 "write_deps_file.m"
      {
#line 2171 "write_deps_file.m"
        parse_tree__write_deps_file__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2171 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 0) = ((MR_Box) ((MR_String) "\t\telse \\\n"));
#line 2171 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 1) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 2171 "write_deps_file.m"
      }
#line 2170 "write_deps_file.m"
      {
#line 2170 "write_deps_file.m"
        parse_tree__write_deps_file__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2170 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"\044\044target unchanged\"; \\\n"));
#line 2170 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 1) = ((MR_Box) (parse_tree__write_deps_file__V_92_92));
#line 2170 "write_deps_file.m"
      }
#line 2169 "write_deps_file.m"
      {
#line 2169 "write_deps_file.m"
        parse_tree__write_deps_file__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2169 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 0) = ((MR_Box) ((MR_String) "\t\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\\n"));
#line 2169 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 1) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 2169 "write_deps_file.m"
      }
#line 2168 "write_deps_file.m"
      {
#line 2168 "write_deps_file.m"
        parse_tree__write_deps_file__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2168 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 0) = ((MR_Box) ((MR_String) "\t\ttarget=\"\044(INSTALL_INT_DIR)/\140basename \044\044file\140\"; \\\n"));
#line 2168 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 1) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 2168 "write_deps_file.m"
      }
#line 2167 "write_deps_file.m"
      {
#line 2167 "write_deps_file.m"
        parse_tree__write_deps_file__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2167 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 0) = ((MR_Box) ((MR_String) "\tfor file in \044\044files; do \\\n"));
#line 2167 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 1) = ((MR_Box) (parse_tree__write_deps_file__V_86_86));
#line 2167 "write_deps_file.m"
      }
#line 2166 "write_deps_file.m"
      {
#line 2166 "write_deps_file.m"
        parse_tree__write_deps_file__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2166 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_82_82, 0) = ((MR_Box) ((MR_String) "\"; \\\n"));
#line 2166 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_82_82, 1) = ((MR_Box) (parse_tree__write_deps_file__V_84_84));
#line 2166 "write_deps_file.m"
      }
#line 2166 "write_deps_file.m"
      {
#line 2166 "write_deps_file.m"
        parse_tree__write_deps_file__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2166 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeModuleDepsVar_22));
#line 2166 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 1) = ((MR_Box) (parse_tree__write_deps_file__V_82_82));
#line 2166 "write_deps_file.m"
      }
#line 2166 "write_deps_file.m"
      {
#line 2166 "write_deps_file.m"
        parse_tree__write_deps_file__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2166 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 2166 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 1) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 2166 "write_deps_file.m"
      }
#line 2165 "write_deps_file.m"
      {
#line 2165 "write_deps_file.m"
        parse_tree__write_deps_file__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2165 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 2165 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 1) = ((MR_Box) (parse_tree__write_deps_file__V_80_80));
#line 2165 "write_deps_file.m"
      }
#line 2165 "write_deps_file.m"
      {
#line 2165 "write_deps_file.m"
        parse_tree__write_deps_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2165 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeInt0sVar_32));
#line 2165 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 1) = ((MR_Box) (parse_tree__write_deps_file__V_79_79));
#line 2165 "write_deps_file.m"
      }
#line 2165 "write_deps_file.m"
      {
#line 2165 "write_deps_file.m"
        parse_tree__write_deps_file__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2165 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_76_76, 0) = ((MR_Box) ((MR_String) ".int3s) "));
#line 2165 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_76_76, 1) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 2165 "write_deps_file.m"
      }
#line 2164 "write_deps_file.m"
      {
#line 2164 "write_deps_file.m"
        parse_tree__write_deps_file__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2164 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2164 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 1) = ((MR_Box) (parse_tree__write_deps_file__V_76_76));
#line 2164 "write_deps_file.m"
      }
#line 2164 "write_deps_file.m"
      {
#line 2164 "write_deps_file.m"
        parse_tree__write_deps_file__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2164 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 0) = ((MR_Box) ((MR_String) ".ints) \044("));
#line 2164 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 1) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 2164 "write_deps_file.m"
      }
#line 2164 "write_deps_file.m"
      {
#line 2164 "write_deps_file.m"
        parse_tree__write_deps_file__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2164 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2164 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 1) = ((MR_Box) (parse_tree__write_deps_file__V_73_73));
#line 2164 "write_deps_file.m"
      }
#line 2164 "write_deps_file.m"
      {
#line 2164 "write_deps_file.m"
        parse_tree__write_deps_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2164 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 0) = ((MR_Box) ((MR_String) "\tfiles=\"\044("));
#line 2164 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 1) = ((MR_Box) (parse_tree__write_deps_file__V_72_72));
#line 2164 "write_deps_file.m"
      }
#line 2163 "write_deps_file.m"
      {
#line 2163 "write_deps_file.m"
        parse_tree__write_deps_file__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2163 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 0) = ((MR_Box) ((MR_String) " install_lib_dirs\n"));
#line 2163 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 1) = ((MR_Box) (parse_tree__write_deps_file__V_70_70));
#line 2163 "write_deps_file.m"
      }
#line 2162 "write_deps_file.m"
      {
#line 2162 "write_deps_file.m"
        parse_tree__write_deps_file__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2162 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeModuleDepsVar_22));
#line 2162 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 1) = ((MR_Box) (parse_tree__write_deps_file__V_68_68));
#line 2162 "write_deps_file.m"
      }
#line 2162 "write_deps_file.m"
      {
#line 2162 "write_deps_file.m"
        parse_tree__write_deps_file__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2162 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 2162 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 1) = ((MR_Box) (parse_tree__write_deps_file__V_67_67));
#line 2162 "write_deps_file.m"
      }
#line 2161 "write_deps_file.m"
      {
#line 2161 "write_deps_file.m"
        parse_tree__write_deps_file__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2161 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 2161 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 1) = ((MR_Box) (parse_tree__write_deps_file__V_66_66));
#line 2161 "write_deps_file.m"
      }
#line 2161 "write_deps_file.m"
      {
#line 2161 "write_deps_file.m"
        parse_tree__write_deps_file__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2161 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_64_64, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeInt0sVar_32));
#line 2161 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_64_64, 1) = ((MR_Box) (parse_tree__write_deps_file__V_65_65));
#line 2161 "write_deps_file.m"
      }
#line 2161 "write_deps_file.m"
      {
#line 2161 "write_deps_file.m"
        parse_tree__write_deps_file__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2161 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_62_62, 0) = ((MR_Box) ((MR_String) ".int3s) "));
#line 2161 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_62_62, 1) = ((MR_Box) (parse_tree__write_deps_file__V_64_64));
#line 2161 "write_deps_file.m"
      }
#line 2161 "write_deps_file.m"
      {
#line 2161 "write_deps_file.m"
        parse_tree__write_deps_file__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2161 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_61_61, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2161 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_61_61, 1) = ((MR_Box) (parse_tree__write_deps_file__V_62_62));
#line 2161 "write_deps_file.m"
      }
#line 2160 "write_deps_file.m"
      {
#line 2160 "write_deps_file.m"
        parse_tree__write_deps_file__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2160 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_59_59, 0) = ((MR_Box) ((MR_String) ".ints) \044("));
#line 2160 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_59_59, 1) = ((MR_Box) (parse_tree__write_deps_file__V_61_61));
#line 2160 "write_deps_file.m"
      }
#line 2160 "write_deps_file.m"
      {
#line 2160 "write_deps_file.m"
        parse_tree__write_deps_file__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2160 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2160 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 1) = ((MR_Box) (parse_tree__write_deps_file__V_59_59));
#line 2160 "write_deps_file.m"
      }
#line 2160 "write_deps_file.m"
      {
#line 2160 "write_deps_file.m"
        parse_tree__write_deps_file__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2160 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_56_56, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 2160 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_56_56, 1) = ((MR_Box) (parse_tree__write_deps_file__V_58_58));
#line 2160 "write_deps_file.m"
      }
#line 2160 "write_deps_file.m"
      {
#line 2160 "write_deps_file.m"
        parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2160 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallIntsTargetName_26));
#line 2160 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_56_56));
#line 2160 "write_deps_file.m"
      }
#line 2159 "write_deps_file.m"
      {
#line 2159 "write_deps_file.m"
        parse_tree__write_deps_file__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2159 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2159 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 1) = ((MR_Box) (parse_tree__write_deps_file__V_55_55));
#line 2159 "write_deps_file.m"
      }
#line 2159 "write_deps_file.m"
      {
#line 2159 "write_deps_file.m"
        parse_tree__write_deps_file__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2159 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallIntsTargetName_26));
#line 2159 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 1) = ((MR_Box) (parse_tree__write_deps_file__V_53_53));
#line 2159 "write_deps_file.m"
      }
#line 2159 "write_deps_file.m"
      {
#line 2159 "write_deps_file.m"
        parse_tree__write_deps_file__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2159 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2159 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 1) = ((MR_Box) (parse_tree__write_deps_file__V_52_52));
#line 2159 "write_deps_file.m"
      }
#line 2158 "write_deps_file.m"
      {
#line 2158 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_49_49);
      }
#line 2192 "write_deps_file.m"
      {
#line 2192 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_opts", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallOptsTargetName_35);
      }
#line 2196 "write_deps_file.m"
      {
#line 2196 "write_deps_file.m"
        parse_tree__write_deps_file__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2196 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsTargetName_35));
#line 2196 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[109])));
#line 2196 "write_deps_file.m"
      }
#line 2195 "write_deps_file.m"
      {
#line 2195 "write_deps_file.m"
        parse_tree__write_deps_file__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2195 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_141_141, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2195 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_141_141, 1) = ((MR_Box) (parse_tree__write_deps_file__V_143_143));
#line 2195 "write_deps_file.m"
      }
#line 2195 "write_deps_file.m"
      {
#line 2195 "write_deps_file.m"
        parse_tree__write_deps_file__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2195 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsTargetName_35));
#line 2195 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 1) = ((MR_Box) (parse_tree__write_deps_file__V_141_141));
#line 2195 "write_deps_file.m"
      }
#line 2195 "write_deps_file.m"
      {
#line 2195 "write_deps_file.m"
        parse_tree__write_deps_file__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2195 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_137_137, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2195 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_137_137, 1) = ((MR_Box) (parse_tree__write_deps_file__V_140_140));
#line 2195 "write_deps_file.m"
      }
#line 2194 "write_deps_file.m"
      {
#line 2194 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_137_137);
      }
#line 2198 "write_deps_file.m"
      (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = (parse_tree__write_deps_file__Intermod_20 == (MR_Integer) 0);
#line 2198 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 2199 "write_deps_file.m"
        (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = (parse_tree__write_deps_file__TransOpt_21 == (MR_Integer) 0);
#line 2202 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 2201 "write_deps_file.m"
        {
#line 2201 "write_deps_file.m"
          {
#line 2201 "write_deps_file.m"
            mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_15, (MR_String) "\n\t\100:\n\n");
          }
#line 2201 "write_deps_file.m"
        }
#line 2202 "write_deps_file.m"
      else
#line 2203 "write_deps_file.m"
        {
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_149_149;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_151_151;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_152_152;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_154_154;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_156_156;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_157_157;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_158_158;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_160_160;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_162_162;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_164_164;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_166_166;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_168_168;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_170_170;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_172_172;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_174_174;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_176_176;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_178_178;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_180_180;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_182_182;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_184_184;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_186_186;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_188_188;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_190_190;
#line 2203 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_191_191;

#line 2220 "write_deps_file.m"
          {
#line 2220 "write_deps_file.m"
            parse_tree__write_deps_file__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2220 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptStr_33));
#line 2220 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[49])));
#line 2220 "write_deps_file.m"
          }
#line 2220 "write_deps_file.m"
          {
#line 2220 "write_deps_file.m"
            parse_tree__write_deps_file__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2220 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_190_190, 0) = ((MR_Box) (parse_tree__write_deps_file__OptStr_27));
#line 2220 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_190_190, 1) = ((MR_Box) (parse_tree__write_deps_file__V_191_191));
#line 2220 "write_deps_file.m"
          }
#line 2220 "write_deps_file.m"
          {
#line 2220 "write_deps_file.m"
            parse_tree__write_deps_file__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2220 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_188_188, 0) = ((MR_Box) ((MR_String) "\tfor ext in "));
#line 2220 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_188_188, 1) = ((MR_Box) (parse_tree__write_deps_file__V_190_190));
#line 2220 "write_deps_file.m"
          }
#line 2219 "write_deps_file.m"
          {
#line 2219 "write_deps_file.m"
            parse_tree__write_deps_file__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2219 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 0) = ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n"));
#line 2219 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 1) = ((MR_Box) (parse_tree__write_deps_file__V_188_188));
#line 2219 "write_deps_file.m"
          }
#line 2218 "write_deps_file.m"
          {
#line 2218 "write_deps_file.m"
            parse_tree__write_deps_file__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2218 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 0) = ((MR_Box) ((MR_String) " then we just use\n"));
#line 2218 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 1) = ((MR_Box) (parse_tree__write_deps_file__V_186_186));
#line 2218 "write_deps_file.m"
          }
#line 2217 "write_deps_file.m"
          {
#line 2217 "write_deps_file.m"
            parse_tree__write_deps_file__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2217 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 0) = ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails,"));
#line 2217 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 1) = ((MR_Box) (parse_tree__write_deps_file__V_184_184));
#line 2217 "write_deps_file.m"
          }
#line 2216 "write_deps_file.m"
          {
#line 2216 "write_deps_file.m"
            parse_tree__write_deps_file__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2216 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_180_180, 0) = ((MR_Box) ((MR_String) " \140--use-subdirs\' option\n"));
#line 2216 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_180_180, 1) = ((MR_Box) (parse_tree__write_deps_file__V_182_182));
#line 2216 "write_deps_file.m"
          }
#line 2215 "write_deps_file.m"
          {
#line 2215 "write_deps_file.m"
            parse_tree__write_deps_file__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2215 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_178_178, 0) = ((MR_Box) ((MR_String) "\t# The following is needed to support the"));
#line 2215 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_178_178, 1) = ((MR_Box) (parse_tree__write_deps_file__V_180_180));
#line 2215 "write_deps_file.m"
          }
#line 2214 "write_deps_file.m"
          {
#line 2214 "write_deps_file.m"
            parse_tree__write_deps_file__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2214 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 0) = ((MR_Box) ((MR_String) "\tdone\n"));
#line 2214 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 1) = ((MR_Box) (parse_tree__write_deps_file__V_178_178));
#line 2214 "write_deps_file.m"
          }
#line 2213 "write_deps_file.m"
          {
#line 2213 "write_deps_file.m"
            parse_tree__write_deps_file__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2213 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 0) = ((MR_Box) ((MR_String) "\t\tfi; \\\n"));
#line 2213 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 1) = ((MR_Box) (parse_tree__write_deps_file__V_176_176));
#line 2213 "write_deps_file.m"
          }
#line 2212 "write_deps_file.m"
          {
#line 2212 "write_deps_file.m"
            parse_tree__write_deps_file__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2212 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 0) = ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\\n"));
#line 2212 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 1) = ((MR_Box) (parse_tree__write_deps_file__V_174_174));
#line 2212 "write_deps_file.m"
          }
#line 2211 "write_deps_file.m"
          {
#line 2211 "write_deps_file.m"
            parse_tree__write_deps_file__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2211 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_170_170, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"installing \044\044target\"; \\\n"));
#line 2211 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_170_170, 1) = ((MR_Box) (parse_tree__write_deps_file__V_172_172));
#line 2211 "write_deps_file.m"
          }
#line 2210 "write_deps_file.m"
          {
#line 2210 "write_deps_file.m"
            parse_tree__write_deps_file__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2210 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_168_168, 0) = ((MR_Box) ((MR_String) "\t\telse \\\n"));
#line 2210 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_168_168, 1) = ((MR_Box) (parse_tree__write_deps_file__V_170_170));
#line 2210 "write_deps_file.m"
          }
#line 2209 "write_deps_file.m"
          {
#line 2209 "write_deps_file.m"
            parse_tree__write_deps_file__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2209 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"\044\044target unchanged\"; \\\n"));
#line 2209 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 1) = ((MR_Box) (parse_tree__write_deps_file__V_168_168));
#line 2209 "write_deps_file.m"
          }
#line 2208 "write_deps_file.m"
          {
#line 2208 "write_deps_file.m"
            parse_tree__write_deps_file__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2208 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 0) = ((MR_Box) ((MR_String) "\t\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\\n"));
#line 2208 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 1) = ((MR_Box) (parse_tree__write_deps_file__V_166_166));
#line 2208 "write_deps_file.m"
          }
#line 2207 "write_deps_file.m"
          {
#line 2207 "write_deps_file.m"
            parse_tree__write_deps_file__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2207 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 0) = ((MR_Box) ((MR_String) "\t\ttarget=\"\044(INSTALL_GRADE_INT_DIR)/\140basename \044\044file\140\";\\\n"));
#line 2207 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 1) = ((MR_Box) (parse_tree__write_deps_file__V_164_164));
#line 2207 "write_deps_file.m"
          }
#line 2206 "write_deps_file.m"
          {
#line 2206 "write_deps_file.m"
            parse_tree__write_deps_file__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2206 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_160_160, 0) = ((MR_Box) ((MR_String) "\tfor file in \044\044files; do \\\n"));
#line 2206 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_160_160, 1) = ((MR_Box) (parse_tree__write_deps_file__V_162_162));
#line 2206 "write_deps_file.m"
          }
#line 2205 "write_deps_file.m"
          {
#line 2205 "write_deps_file.m"
            parse_tree__write_deps_file__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2205 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_158_158, 0) = ((MR_Box) ((MR_String) "\"; \\\n"));
#line 2205 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_158_158, 1) = ((MR_Box) (parse_tree__write_deps_file__V_160_160));
#line 2205 "write_deps_file.m"
          }
#line 2205 "write_deps_file.m"
          {
#line 2205 "write_deps_file.m"
            parse_tree__write_deps_file__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2205 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 2205 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 1) = ((MR_Box) (parse_tree__write_deps_file__V_158_158));
#line 2205 "write_deps_file.m"
          }
#line 2205 "write_deps_file.m"
          {
#line 2205 "write_deps_file.m"
            parse_tree__write_deps_file__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2205 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 2205 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 1) = ((MR_Box) (parse_tree__write_deps_file__V_157_157));
#line 2205 "write_deps_file.m"
          }
#line 2205 "write_deps_file.m"
          {
#line 2205 "write_deps_file.m"
            parse_tree__write_deps_file__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2205 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 0) = ((MR_Box) ((MR_String) "\tfiles=\""));
#line 2205 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 1) = ((MR_Box) (parse_tree__write_deps_file__V_156_156));
#line 2205 "write_deps_file.m"
          }
#line 2204 "write_deps_file.m"
          {
#line 2204 "write_deps_file.m"
            parse_tree__write_deps_file__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2204 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_152_152, 0) = ((MR_Box) ((MR_String) "install_grade_dirs\n"));
#line 2204 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_152_152, 1) = ((MR_Box) (parse_tree__write_deps_file__V_154_154));
#line 2204 "write_deps_file.m"
          }
#line 2204 "write_deps_file.m"
          {
#line 2204 "write_deps_file.m"
            parse_tree__write_deps_file__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2204 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 2204 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 1) = ((MR_Box) (parse_tree__write_deps_file__V_152_152));
#line 2204 "write_deps_file.m"
          }
#line 2204 "write_deps_file.m"
          {
#line 2204 "write_deps_file.m"
            parse_tree__write_deps_file__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2204 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_149_149, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 2204 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_149_149, 1) = ((MR_Box) (parse_tree__write_deps_file__V_151_151));
#line 2204 "write_deps_file.m"
          }
#line 2203 "write_deps_file.m"
          {
#line 2203 "write_deps_file.m"
            mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_149_149);
          }
#line 2203 "write_deps_file.m"
        }
#line 2243 "write_deps_file.m"
      {
#line 2243 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_hdrs", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallHdrsTargetName_36);
      }
#line 2253 "write_deps_file.m"
      {
#line 2253 "write_deps_file.m"
        parse_tree__write_deps_file__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2253 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2253 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[53])));
#line 2253 "write_deps_file.m"
      }
#line 2253 "write_deps_file.m"
      {
#line 2253 "write_deps_file.m"
        parse_tree__write_deps_file__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2253 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 0) = ((MR_Box) ((MR_String) "\tfor hdr in \044("));
#line 2253 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 1) = ((MR_Box) (parse_tree__write_deps_file__V_244_244));
#line 2253 "write_deps_file.m"
      }
#line 2252 "write_deps_file.m"
      {
#line 2252 "write_deps_file.m"
        parse_tree__write_deps_file__V_240_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2252 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 0) = ((MR_Box) ((MR_String) "else\n"));
#line 2252 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 1) = ((MR_Box) (parse_tree__write_deps_file__V_242_242));
#line 2252 "write_deps_file.m"
      }
#line 2251 "write_deps_file.m"
      {
#line 2251 "write_deps_file.m"
        parse_tree__write_deps_file__V_238_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2251 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_238_238, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 2251 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_238_238, 1) = ((MR_Box) (parse_tree__write_deps_file__V_240_240));
#line 2251 "write_deps_file.m"
      }
#line 2250 "write_deps_file.m"
      {
#line 2250 "write_deps_file.m"
        parse_tree__write_deps_file__V_236_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2250 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_236_236, 0) = ((MR_Box) ((MR_String) ".mhs),)\n"));
#line 2250 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_236_236, 1) = ((MR_Box) (parse_tree__write_deps_file__V_238_238));
#line 2250 "write_deps_file.m"
      }
#line 2250 "write_deps_file.m"
      {
#line 2250 "write_deps_file.m"
        parse_tree__write_deps_file__V_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2250 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2250 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 1) = ((MR_Box) (parse_tree__write_deps_file__V_236_236));
#line 2250 "write_deps_file.m"
      }
#line 2250 "write_deps_file.m"
      {
#line 2250 "write_deps_file.m"
        parse_tree__write_deps_file__V_233_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2250 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_233_233, 0) = ((MR_Box) ((MR_String) "ifeq (\044("));
#line 2250 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_233_233, 1) = ((MR_Box) (parse_tree__write_deps_file__V_235_235));
#line 2250 "write_deps_file.m"
      }
#line 2249 "write_deps_file.m"
      {
#line 2249 "write_deps_file.m"
        parse_tree__write_deps_file__V_231_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2249 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 0) = ((MR_Box) ((MR_String) "install_lib_dirs\n"));
#line 2249 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 1) = ((MR_Box) (parse_tree__write_deps_file__V_233_233));
#line 2249 "write_deps_file.m"
      }
#line 2248 "write_deps_file.m"
      {
#line 2248 "write_deps_file.m"
        parse_tree__write_deps_file__V_229_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2248 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 0) = ((MR_Box) ((MR_String) ".mhs) "));
#line 2248 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 1) = ((MR_Box) (parse_tree__write_deps_file__V_231_231));
#line 2248 "write_deps_file.m"
      }
#line 2248 "write_deps_file.m"
      {
#line 2248 "write_deps_file.m"
        parse_tree__write_deps_file__V_228_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2248 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_228_228, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2248 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_228_228, 1) = ((MR_Box) (parse_tree__write_deps_file__V_229_229));
#line 2248 "write_deps_file.m"
      }
#line 2248 "write_deps_file.m"
      {
#line 2248 "write_deps_file.m"
        parse_tree__write_deps_file__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2248 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 0) = ((MR_Box) ((MR_String) "\044("));
#line 2248 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 1) = ((MR_Box) (parse_tree__write_deps_file__V_228_228));
#line 2248 "write_deps_file.m"
      }
#line 2247 "write_deps_file.m"
      {
#line 2247 "write_deps_file.m"
        parse_tree__write_deps_file__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2247 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 0) = ((MR_Box) ((MR_String) " : "));
#line 2247 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 1) = ((MR_Box) (parse_tree__write_deps_file__V_226_226));
#line 2247 "write_deps_file.m"
      }
#line 2247 "write_deps_file.m"
      {
#line 2247 "write_deps_file.m"
        parse_tree__write_deps_file__V_223_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2247 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_223_223, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallHdrsTargetName_36));
#line 2247 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_223_223, 1) = ((MR_Box) (parse_tree__write_deps_file__V_224_224));
#line 2247 "write_deps_file.m"
      }
#line 2246 "write_deps_file.m"
      {
#line 2246 "write_deps_file.m"
        parse_tree__write_deps_file__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2246 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2246 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 1) = ((MR_Box) (parse_tree__write_deps_file__V_223_223));
#line 2246 "write_deps_file.m"
      }
#line 2246 "write_deps_file.m"
      {
#line 2246 "write_deps_file.m"
        parse_tree__write_deps_file__V_220_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2246 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_220_220, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallHdrsTargetName_36));
#line 2246 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_220_220, 1) = ((MR_Box) (parse_tree__write_deps_file__V_221_221));
#line 2246 "write_deps_file.m"
      }
#line 2246 "write_deps_file.m"
      {
#line 2246 "write_deps_file.m"
        parse_tree__write_deps_file__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2246 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2246 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 1) = ((MR_Box) (parse_tree__write_deps_file__V_220_220));
#line 2246 "write_deps_file.m"
      }
#line 2245 "write_deps_file.m"
      {
#line 2245 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_217_217);
      }
#line 2259 "write_deps_file.m"
      {
#line 2259 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_grade_hdrs", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_37);
      }
#line 2270 "write_deps_file.m"
      {
#line 2270 "write_deps_file.m"
        parse_tree__write_deps_file__V_287_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2270 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_287_287, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2270 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_287_287, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[77])));
#line 2270 "write_deps_file.m"
      }
#line 2270 "write_deps_file.m"
      {
#line 2270 "write_deps_file.m"
        parse_tree__write_deps_file__V_285_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2270 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 0) = ((MR_Box) ((MR_String) "\tfor hdr in \044("));
#line 2270 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 1) = ((MR_Box) (parse_tree__write_deps_file__V_287_287));
#line 2270 "write_deps_file.m"
      }
#line 2269 "write_deps_file.m"
      {
#line 2269 "write_deps_file.m"
        parse_tree__write_deps_file__V_283_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2269 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 0) = ((MR_Box) ((MR_String) "else\n"));
#line 2269 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 1) = ((MR_Box) (parse_tree__write_deps_file__V_285_285));
#line 2269 "write_deps_file.m"
      }
#line 2268 "write_deps_file.m"
      {
#line 2268 "write_deps_file.m"
        parse_tree__write_deps_file__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2268 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 2268 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 1) = ((MR_Box) (parse_tree__write_deps_file__V_283_283));
#line 2268 "write_deps_file.m"
      }
#line 2267 "write_deps_file.m"
      {
#line 2267 "write_deps_file.m"
        parse_tree__write_deps_file__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2267 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 0) = ((MR_Box) ((MR_String) ".mihs),)\n"));
#line 2267 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 1) = ((MR_Box) (parse_tree__write_deps_file__V_281_281));
#line 2267 "write_deps_file.m"
      }
#line 2267 "write_deps_file.m"
      {
#line 2267 "write_deps_file.m"
        parse_tree__write_deps_file__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2267 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2267 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 1) = ((MR_Box) (parse_tree__write_deps_file__V_279_279));
#line 2267 "write_deps_file.m"
      }
#line 2267 "write_deps_file.m"
      {
#line 2267 "write_deps_file.m"
        parse_tree__write_deps_file__V_276_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2267 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 0) = ((MR_Box) ((MR_String) "ifeq (\044("));
#line 2267 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 1) = ((MR_Box) (parse_tree__write_deps_file__V_278_278));
#line 2267 "write_deps_file.m"
      }
#line 2266 "write_deps_file.m"
      {
#line 2266 "write_deps_file.m"
        parse_tree__write_deps_file__V_274_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2266 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 0) = ((MR_Box) ((MR_String) "install_grade_dirs\n"));
#line 2266 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 1) = ((MR_Box) (parse_tree__write_deps_file__V_276_276));
#line 2266 "write_deps_file.m"
      }
#line 2265 "write_deps_file.m"
      {
#line 2265 "write_deps_file.m"
        parse_tree__write_deps_file__V_272_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2265 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 0) = ((MR_Box) ((MR_String) ".mihs) "));
#line 2265 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 1) = ((MR_Box) (parse_tree__write_deps_file__V_274_274));
#line 2265 "write_deps_file.m"
      }
#line 2265 "write_deps_file.m"
      {
#line 2265 "write_deps_file.m"
        parse_tree__write_deps_file__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2265 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2265 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 1) = ((MR_Box) (parse_tree__write_deps_file__V_272_272));
#line 2265 "write_deps_file.m"
      }
#line 2265 "write_deps_file.m"
      {
#line 2265 "write_deps_file.m"
        parse_tree__write_deps_file__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2265 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 0) = ((MR_Box) ((MR_String) "\044("));
#line 2265 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 1) = ((MR_Box) (parse_tree__write_deps_file__V_271_271));
#line 2265 "write_deps_file.m"
      }
#line 2264 "write_deps_file.m"
      {
#line 2264 "write_deps_file.m"
        parse_tree__write_deps_file__V_267_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2264 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_267_267, 0) = ((MR_Box) ((MR_String) " : "));
#line 2264 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_267_267, 1) = ((MR_Box) (parse_tree__write_deps_file__V_269_269));
#line 2264 "write_deps_file.m"
      }
#line 2264 "write_deps_file.m"
      {
#line 2264 "write_deps_file.m"
        parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2264 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_37));
#line 2264 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__V_267_267));
#line 2264 "write_deps_file.m"
      }
#line 2263 "write_deps_file.m"
      {
#line 2263 "write_deps_file.m"
        parse_tree__write_deps_file__V_264_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2263 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2263 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 2263 "write_deps_file.m"
      }
#line 2263 "write_deps_file.m"
      {
#line 2263 "write_deps_file.m"
        parse_tree__write_deps_file__V_263_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2263 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_37));
#line 2263 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 1) = ((MR_Box) (parse_tree__write_deps_file__V_264_264));
#line 2263 "write_deps_file.m"
      }
#line 2263 "write_deps_file.m"
      {
#line 2263 "write_deps_file.m"
        parse_tree__write_deps_file__V_260_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2263 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2263 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 1) = ((MR_Box) (parse_tree__write_deps_file__V_263_263));
#line 2263 "write_deps_file.m"
      }
#line 2262 "write_deps_file.m"
      {
#line 2262 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_260_260);
#line 2262 "write_deps_file.m"
        return;
      }
#line 2113 "write_deps_file.m"
    }
#line 2107 "write_deps_file.m"
  }
#line 2107 "write_deps_file.m"
}

#line 2064 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(
#line 2064 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_11,
#line 2064 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12,
#line 2064 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_13,
#line 2064 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_14,
#line 2064 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_15,
#line 2064 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_16,
#line 2064 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DepFileName_17,
#line 2064 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DvFileName_18)
#line 2064 "write_deps_file.m"
{
#line 2070 "write_deps_file.m"
  {
#line 2070 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2070 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleFileName_20;
#line 2070 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ForceC2InitTarget_21;
#line 2070 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TmpInitCFileName_22;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_31_31;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_33_33;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_35_35;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_36_36;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_38_38;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_39_39;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_41_41;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_43_43;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_47_47;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_50_50;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_52_52;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_53_53;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_55_55;
#line 2070 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_67_67;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_70_70;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_72_72;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_74_74;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_75_75;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_77_77;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_78_78;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_80_80;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_81_81;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_83_83;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_85_85;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_87_87;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_88_88;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_90_90;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_93_93;
#line 2070 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_95_95;

#line 2071 "write_deps_file.m"
    {
#line 2071 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_11, parse_tree__write_deps_file__ModuleName_13, (MR_String) ".dep", (MR_Integer) 1, parse_tree__write_deps_file__DepFileName_17);
    }
#line 2073 "write_deps_file.m"
    {
#line 2073 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_11, parse_tree__write_deps_file__ModuleName_13, (MR_String) ".dv", (MR_Integer) 1, parse_tree__write_deps_file__DvFileName_18);
    }
#line 2078 "write_deps_file.m"
    {
#line 2078 "write_deps_file.m"
      parse_tree__write_deps_file__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2078 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_43_43, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_16));
#line 2078 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[102])));
#line 2078 "write_deps_file.m"
    }
#line 2078 "write_deps_file.m"
    {
#line 2078 "write_deps_file.m"
      parse_tree__write_deps_file__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2078 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_41_41, 0) = ((MR_Box) ((MR_String) "\techo > "));
#line 2078 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_41_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 2078 "write_deps_file.m"
    }
#line 2077 "write_deps_file.m"
    {
#line 2077 "write_deps_file.m"
      parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2077 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) ((MR_String) ".cs)\n"));
#line 2077 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (parse_tree__write_deps_file__V_41_41));
#line 2077 "write_deps_file.m"
    }
#line 2077 "write_deps_file.m"
    {
#line 2077 "write_deps_file.m"
      parse_tree__write_deps_file__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2077 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_38_38, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 2077 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_38_38, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 2077 "write_deps_file.m"
    }
#line 2077 "write_deps_file.m"
    {
#line 2077 "write_deps_file.m"
      parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2077 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) ((MR_String) " \044("));
#line 2077 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_38_38));
#line 2077 "write_deps_file.m"
    }
#line 2077 "write_deps_file.m"
    {
#line 2077 "write_deps_file.m"
      parse_tree__write_deps_file__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2077 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_35_35, 0) = ((MR_Box) (*parse_tree__write_deps_file__DepFileName_17));
#line 2077 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_35_35, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 2077 "write_deps_file.m"
    }
#line 2077 "write_deps_file.m"
    {
#line 2077 "write_deps_file.m"
      parse_tree__write_deps_file__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2077 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_33_33, 0) = ((MR_Box) ((MR_String) " : "));
#line 2077 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_33_33, 1) = ((MR_Box) (parse_tree__write_deps_file__V_35_35));
#line 2077 "write_deps_file.m"
    }
#line 2077 "write_deps_file.m"
    {
#line 2077 "write_deps_file.m"
      parse_tree__write_deps_file__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2077 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_31_31, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_16));
#line 2077 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_31_31, 1) = ((MR_Box) (parse_tree__write_deps_file__V_33_33));
#line 2077 "write_deps_file.m"
    }
#line 2076 "write_deps_file.m"
    {
#line 2076 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_31_31);
    }
#line 2081 "write_deps_file.m"
    {
#line 2081 "write_deps_file.m"
      parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) " >> "));
#line 2081 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 2081 "write_deps_file.m"
    }
#line 2081 "write_deps_file.m"
    {
#line 2081 "write_deps_file.m"
      parse_tree__write_deps_file__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 0) = ((MR_Box) ((MR_String) ".cs)"));
#line 2081 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 1) = ((MR_Box) (parse_tree__write_deps_file__V_55_55));
#line 2081 "write_deps_file.m"
    }
#line 2081 "write_deps_file.m"
    {
#line 2081 "write_deps_file.m"
      parse_tree__write_deps_file__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 2081 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 1) = ((MR_Box) (parse_tree__write_deps_file__V_53_53));
#line 2081 "write_deps_file.m"
    }
#line 2081 "write_deps_file.m"
    {
#line 2081 "write_deps_file.m"
      parse_tree__write_deps_file__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 0) = ((MR_Box) ((MR_String) "\044("));
#line 2081 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 1) = ((MR_Box) (parse_tree__write_deps_file__V_52_52));
#line 2081 "write_deps_file.m"
    }
#line 2081 "write_deps_file.m"
    {
#line 2081 "write_deps_file.m"
      parse_tree__write_deps_file__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 0) = ((MR_Box) ((MR_String) "\t\044(MKLIBINIT) "));
#line 2081 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 1) = ((MR_Box) (parse_tree__write_deps_file__V_50_50));
#line 2081 "write_deps_file.m"
    }
#line 2080 "write_deps_file.m"
    {
#line 2080 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_47_47);
    }
#line 2088 "write_deps_file.m"
    {
#line 2088 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\t\044(EXTRA_INIT_COMMAND) >> ");
    }
#line 2089 "write_deps_file.m"
    {
#line 2089 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__InitFileName_16);
    }
#line 2090 "write_deps_file.m"
    {
#line 2090 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 2095 "write_deps_file.m"
    {
#line 2095 "write_deps_file.m"
      parse_tree__write_deps_file__ModuleFileName_20 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_13);
    }
#line 2096 "write_deps_file.m"
    {
#line 2096 "write_deps_file.m"
      parse_tree__write_deps_file__V_67_67 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleFileName_20, (MR_String) "_init");
    }
#line 2096 "write_deps_file.m"
    {
#line 2096 "write_deps_file.m"
      parse_tree__write_deps_file__ForceC2InitTarget_21 = mercury__string__f_43_43_2_f_0((MR_String) "force-", parse_tree__write_deps_file__V_67_67);
    }
#line 2097 "write_deps_file.m"
    {
#line 2097 "write_deps_file.m"
      parse_tree__write_deps_file__TmpInitCFileName_22 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__InitCFileName_15, (MR_String) ".tmp");
    }
#line 2104 "write_deps_file.m"
    {
#line 2104 "write_deps_file.m"
      parse_tree__write_deps_file__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2104 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_95_95, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_15));
#line 2104 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[112])));
#line 2104 "write_deps_file.m"
    }
#line 2104 "write_deps_file.m"
    {
#line 2104 "write_deps_file.m"
      parse_tree__write_deps_file__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2104 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 0) = ((MR_Box) ((MR_String) "\t\100mercury_update_interface "));
#line 2104 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 1) = ((MR_Box) (parse_tree__write_deps_file__V_95_95));
#line 2104 "write_deps_file.m"
    }
#line 2103 "write_deps_file.m"
    {
#line 2103 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2103 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) ((MR_String) ".init_cs) \044(ALL_C2INITARGS)\n"));
#line 2103 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__V_93_93));
#line 2103 "write_deps_file.m"
    }
#line 2103 "write_deps_file.m"
    {
#line 2103 "write_deps_file.m"
      parse_tree__write_deps_file__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2103 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 2103 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 1) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 2103 "write_deps_file.m"
    }
#line 2103 "write_deps_file.m"
    {
#line 2103 "write_deps_file.m"
      parse_tree__write_deps_file__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2103 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 0) = ((MR_Box) ((MR_String) " \044("));
#line 2103 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 1) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 2103 "write_deps_file.m"
    }
#line 2102 "write_deps_file.m"
    {
#line 2102 "write_deps_file.m"
      parse_tree__write_deps_file__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2102 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpInitCFileName_22));
#line 2102 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 1) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 2102 "write_deps_file.m"
    }
#line 2102 "write_deps_file.m"
    {
#line 2102 "write_deps_file.m"
      parse_tree__write_deps_file__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2102 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_85_85, 0) = ((MR_Box) ((MR_String) "--init-c-file "));
#line 2102 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_85_85, 1) = ((MR_Box) (parse_tree__write_deps_file__V_87_87));
#line 2102 "write_deps_file.m"
    }
#line 2101 "write_deps_file.m"
    {
#line 2101 "write_deps_file.m"
      parse_tree__write_deps_file__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2101 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 0) = ((MR_Box) ((MR_String) "\t\100\044(C2INIT) \044(ALL_GRADEFLAGS) \044(ALL_C2INITFLAGS) "));
#line 2101 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 1) = ((MR_Box) (parse_tree__write_deps_file__V_85_85));
#line 2101 "write_deps_file.m"
    }
#line 2100 "write_deps_file.m"
    {
#line 2100 "write_deps_file.m"
      parse_tree__write_deps_file__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2100 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 0) = ((MR_Box) ((MR_String) ".cs)\n"));
#line 2100 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 1) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 2100 "write_deps_file.m"
    }
#line 2100 "write_deps_file.m"
    {
#line 2100 "write_deps_file.m"
      parse_tree__write_deps_file__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2100 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 2100 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 1) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 2100 "write_deps_file.m"
    }
#line 2100 "write_deps_file.m"
    {
#line 2100 "write_deps_file.m"
      parse_tree__write_deps_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2100 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 0) = ((MR_Box) ((MR_String) " \044("));
#line 2100 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 1) = ((MR_Box) (parse_tree__write_deps_file__V_80_80));
#line 2100 "write_deps_file.m"
    }
#line 2100 "write_deps_file.m"
    {
#line 2100 "write_deps_file.m"
      parse_tree__write_deps_file__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2100 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 0) = ((MR_Box) (parse_tree__write_deps_file__ForceC2InitTarget_21));
#line 2100 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 1) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 2100 "write_deps_file.m"
    }
#line 2100 "write_deps_file.m"
    {
#line 2100 "write_deps_file.m"
      parse_tree__write_deps_file__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2100 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 0) = ((MR_Box) ((MR_String) " : "));
#line 2100 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 1) = ((MR_Box) (parse_tree__write_deps_file__V_77_77));
#line 2100 "write_deps_file.m"
    }
#line 2100 "write_deps_file.m"
    {
#line 2100 "write_deps_file.m"
      parse_tree__write_deps_file__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2100 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_15));
#line 2100 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 1) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 2100 "write_deps_file.m"
    }
#line 2099 "write_deps_file.m"
    {
#line 2099 "write_deps_file.m"
      parse_tree__write_deps_file__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2099 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 0) = ((MR_Box) ((MR_String) " :\n\n"));
#line 2099 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 1) = ((MR_Box) (parse_tree__write_deps_file__V_74_74));
#line 2099 "write_deps_file.m"
    }
#line 2099 "write_deps_file.m"
    {
#line 2099 "write_deps_file.m"
      parse_tree__write_deps_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2099 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 0) = ((MR_Box) (parse_tree__write_deps_file__ForceC2InitTarget_21));
#line 2099 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 1) = ((MR_Box) (parse_tree__write_deps_file__V_72_72));
#line 2099 "write_deps_file.m"
    }
#line 2098 "write_deps_file.m"
    {
#line 2098 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_70_70);
#line 2098 "write_deps_file.m"
      return;
    }
#line 2070 "write_deps_file.m"
  }
#line 2064 "write_deps_file.m"
}

#line 1830 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(
#line 1830 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_19,
#line 1830 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_20,
#line 1830 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_21,
#line 1830 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_22,
#line 1830 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_23,
#line 1830 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_24,
#line 1830 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_25,
#line 1830 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_26,
#line 1830 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_27,
#line 1830 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeOptsVar_28,
#line 1830 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeTransOptsVar_29,
#line 1830 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeModuleDepsVar_30,
#line 1830 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__ExeFileName_31,
#line 1830 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__JarFileName_32,
#line 1830 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__LibFileName_33,
#line 1830 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__SharedLibFileName_34)
#line 1830 "write_deps_file.m"
{
#line 1839 "write_deps_file.m"
  {
#line 1839 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Gmake_36;
#line 1839 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__All_MLLibsDepString_37;
#line 1839 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__All_MLObjsString_38;
#line 1839 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__All_MLPicObjsString_39;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IfIL_40;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ILMainRule_41;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IfJava2_42;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__JavaMainRule_43;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Else_44;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Else2_45;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__EndIf_46;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__EndIf2_47;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__MainRule_48;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Target_49;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Rules_50;
#line 1839 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__LibTargetName_51;
#line 1839 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeSharedLibFileName_52;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__UseInstallName_53;
#line 1839 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InstallNameOpt_54;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__AllInts_55;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ILLibRule_56;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__JavaLibRule_57;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__LibRule_58;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__LibRules_59;
#line 1839 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ClassFiles_60;
#line 1839 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ListClassFiles_61;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_88_88;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_90_90;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_93_93;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_94_94;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_96_96;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_98_98;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_99_99;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_101_101;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_103_103;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_109_109;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_111_111;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_123_123;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_126_126;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_128_128;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_129_129;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_131_131;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_132_132;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_134_134;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_140_140;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_142_142;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_143_143;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_145_145;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_147_147;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_148_148;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_150_150;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_151_151;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_153_153;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_154_154;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_156_156;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_157_157;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_159_159;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_161_161;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_163_163;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_164_164;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_166_166;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_167_167;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_169_169;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_171_171;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_172_172;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_174_174;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_216_216;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_217_217;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_219_219;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_221_221;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_222_222;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_224_224;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_225_225;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_226_226;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_227_227;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_230_230;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_232_232;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_234_234;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_235_235;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_237_237;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_239_239;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_240_240;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_242_242;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_244_244;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_245_245;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_247_247;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_249_249;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_250_250;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_252_252;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_262_262;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_265_265;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_266_266;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_268_268;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_271_271;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_272_272;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_274_274;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_275_275;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_277_277;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_279_279;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_280_280;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_282_282;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_283_283;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_285_285;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_286_286;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_288_288;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_290_290;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_292_292;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_293_293;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_295_295;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_296_296;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_298_298;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_300_300;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_301_301;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_303_303;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_309_309;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_311_311;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_313_313;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_314_314;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_316_316;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_318_318;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_319_319;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_321_321;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_322_322;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_324_324;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_326_326;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_327_327;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_329_329;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_331_331;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_332_332;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_334_334;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_336_336;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_337_337;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_339_339;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_340_340;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_342_342;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_344_344;
#line 1839 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_349_349;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_351_351;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_353_353;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_355_355;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_357_357;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_358_358;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_360_360;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_362_362;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_363_363;
#line 1839 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_365_365;

#line 1845 "write_deps_file.m"
    {
#line 1845 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_19, (MR_Integer) 119, &parse_tree__write_deps_file__Gmake_36);
    }
#line 1858 "write_deps_file.m"
#line 1858 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Gmake_36) {
#line 1858 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1858 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1859 "write_deps_file.m"
        {
#line 1860 "write_deps_file.m"
          parse_tree__write_deps_file__All_MLLibsDepString_37 = (MR_String) "\044(ALL_MLLIBS_DEP)";
#line 1861 "write_deps_file.m"
          parse_tree__write_deps_file__All_MLObjsString_38 = (MR_String) "\044(ALL_MLOBJS)";
#line 1862 "write_deps_file.m"
          parse_tree__write_deps_file__All_MLPicObjsString_39 = (MR_String) "\044(ALL_MLPICOBJS)";
#line 1859 "write_deps_file.m"
        }
#line 1858 "write_deps_file.m"
        break;
#line 1858 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1847 "write_deps_file.m"
        {
#line 1847 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_65_65;
#line 1847 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_67_67;
#line 1847 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_71_71;
#line 1847 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_73_73;
#line 1847 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_77_77;
#line 1847 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_79_79;

#line 1848 "write_deps_file.m"
          {
#line 1848 "write_deps_file.m"
            parse_tree__write_deps_file__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1848 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1848 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[115])));
#line 1848 "write_deps_file.m"
          }
#line 1848 "write_deps_file.m"
          {
#line 1848 "write_deps_file.m"
            parse_tree__write_deps_file__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1848 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(foreach \100,"));
#line 1848 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 1) = ((MR_Box) (parse_tree__write_deps_file__V_67_67));
#line 1848 "write_deps_file.m"
          }
#line 1848 "write_deps_file.m"
          {
#line 1848 "write_deps_file.m"
            mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_65_65, &parse_tree__write_deps_file__All_MLLibsDepString_37);
          }
#line 1851 "write_deps_file.m"
          {
#line 1851 "write_deps_file.m"
            parse_tree__write_deps_file__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1851 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1851 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[116])));
#line 1851 "write_deps_file.m"
          }
#line 1851 "write_deps_file.m"
          {
#line 1851 "write_deps_file.m"
            parse_tree__write_deps_file__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1851 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(foreach \100,"));
#line 1851 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 1) = ((MR_Box) (parse_tree__write_deps_file__V_73_73));
#line 1851 "write_deps_file.m"
          }
#line 1851 "write_deps_file.m"
          {
#line 1851 "write_deps_file.m"
            mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_71_71, &parse_tree__write_deps_file__All_MLObjsString_38);
          }
#line 1856 "write_deps_file.m"
          {
#line 1856 "write_deps_file.m"
            parse_tree__write_deps_file__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1856 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1856 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[117])));
#line 1856 "write_deps_file.m"
          }
#line 1855 "write_deps_file.m"
          {
#line 1855 "write_deps_file.m"
            parse_tree__write_deps_file__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1855 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(patsubst %.o,%.\044(EXT_FOR_PIC_OBJECTS),\044(foreach \100,"));
#line 1855 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 1) = ((MR_Box) (parse_tree__write_deps_file__V_79_79));
#line 1855 "write_deps_file.m"
          }
#line 1854 "write_deps_file.m"
          {
#line 1854 "write_deps_file.m"
            mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_77_77, &parse_tree__write_deps_file__All_MLPicObjsString_39);
          }
#line 1847 "write_deps_file.m"
        }
#line 1858 "write_deps_file.m"
        break;
#line 1858 "write_deps_file.m"
    }
#line 1876 "write_deps_file.m"
    {
#line 1876 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ModuleName_21, (MR_String) "", (MR_Integer) 1, parse_tree__write_deps_file__ExeFileName_31);
    }
#line 1879 "write_deps_file.m"
    parse_tree__write_deps_file__IfIL_40 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[118]);
#line 1882 "write_deps_file.m"
    {
#line 1882 "write_deps_file.m"
      parse_tree__write_deps_file__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1882 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_103_103, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1882 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[119])));
#line 1882 "write_deps_file.m"
    }
#line 1882 "write_deps_file.m"
    {
#line 1882 "write_deps_file.m"
      parse_tree__write_deps_file__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1882 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1882 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 1) = ((MR_Box) (parse_tree__write_deps_file__V_103_103));
#line 1882 "write_deps_file.m"
    }
#line 1881 "write_deps_file.m"
    {
#line 1881 "write_deps_file.m"
      parse_tree__write_deps_file__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1881 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 0) = ((MR_Box) ((MR_String) ".dlls) "));
#line 1881 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 1) = ((MR_Box) (parse_tree__write_deps_file__V_101_101));
#line 1881 "write_deps_file.m"
    }
#line 1881 "write_deps_file.m"
    {
#line 1881 "write_deps_file.m"
      parse_tree__write_deps_file__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1881 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1881 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 1) = ((MR_Box) (parse_tree__write_deps_file__V_99_99));
#line 1881 "write_deps_file.m"
    }
#line 1881 "write_deps_file.m"
    {
#line 1881 "write_deps_file.m"
      parse_tree__write_deps_file__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1881 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1881 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 1) = ((MR_Box) (parse_tree__write_deps_file__V_98_98));
#line 1881 "write_deps_file.m"
    }
#line 1881 "write_deps_file.m"
    {
#line 1881 "write_deps_file.m"
      parse_tree__write_deps_file__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1881 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 0) = ((MR_Box) ((MR_String) ".exe : "));
#line 1881 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 1) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 1881 "write_deps_file.m"
    }
#line 1881 "write_deps_file.m"
    {
#line 1881 "write_deps_file.m"
      parse_tree__write_deps_file__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1881 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1881 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 1) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 1881 "write_deps_file.m"
    }
#line 1880 "write_deps_file.m"
    {
#line 1880 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1880 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) ((MR_String) ".exe\n"));
#line 1880 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__V_93_93));
#line 1880 "write_deps_file.m"
    }
#line 1880 "write_deps_file.m"
    {
#line 1880 "write_deps_file.m"
      parse_tree__write_deps_file__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1880 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1880 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 1) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 1880 "write_deps_file.m"
    }
#line 1880 "write_deps_file.m"
    {
#line 1880 "write_deps_file.m"
      parse_tree__write_deps_file__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1880 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 0) = ((MR_Box) ((MR_String) " : "));
#line 1880 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 1) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 1880 "write_deps_file.m"
    }
#line 1880 "write_deps_file.m"
    {
#line 1880 "write_deps_file.m"
      parse_tree__write_deps_file__ILMainRule_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1880 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILMainRule_41, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1880 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILMainRule_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 1880 "write_deps_file.m"
    }
#line 1883 "write_deps_file.m"
    parse_tree__write_deps_file__IfJava2_42 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[120]);
#line 1884 "write_deps_file.m"
    {
#line 1884 "write_deps_file.m"
      parse_tree__write_deps_file__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1884 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1884 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[121])));
#line 1884 "write_deps_file.m"
    }
#line 1884 "write_deps_file.m"
    {
#line 1884 "write_deps_file.m"
      parse_tree__write_deps_file__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1884 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1884 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 1) = ((MR_Box) (parse_tree__write_deps_file__V_111_111));
#line 1884 "write_deps_file.m"
    }
#line 1884 "write_deps_file.m"
    {
#line 1884 "write_deps_file.m"
      parse_tree__write_deps_file__JavaMainRule_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1884 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaMainRule_43, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1884 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaMainRule_43, 1) = ((MR_Box) (parse_tree__write_deps_file__V_109_109));
#line 1884 "write_deps_file.m"
    }
#line 1886 "write_deps_file.m"
    parse_tree__write_deps_file__Else_44 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[122]);
#line 1887 "write_deps_file.m"
    parse_tree__write_deps_file__Else2_45 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[123]);
#line 1888 "write_deps_file.m"
    parse_tree__write_deps_file__EndIf_46 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[14]);
#line 1889 "write_deps_file.m"
    parse_tree__write_deps_file__EndIf2_47 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[124]);
#line 1895 "write_deps_file.m"
    {
#line 1895 "write_deps_file.m"
      parse_tree__write_deps_file__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1895 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_134_134, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1895 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[30])));
#line 1895 "write_deps_file.m"
    }
#line 1895 "write_deps_file.m"
    {
#line 1895 "write_deps_file.m"
      parse_tree__write_deps_file__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1895 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_132_132, 0) = ((MR_Box) ((MR_String) " : "));
#line 1895 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_132_132, 1) = ((MR_Box) (parse_tree__write_deps_file__V_134_134));
#line 1895 "write_deps_file.m"
    }
#line 1895 "write_deps_file.m"
    {
#line 1895 "write_deps_file.m"
      parse_tree__write_deps_file__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1895 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1895 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 1) = ((MR_Box) (parse_tree__write_deps_file__V_132_132));
#line 1895 "write_deps_file.m"
    }
#line 1894 "write_deps_file.m"
    {
#line 1894 "write_deps_file.m"
      parse_tree__write_deps_file__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1894 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1894 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 1) = ((MR_Box) (parse_tree__write_deps_file__V_131_131));
#line 1894 "write_deps_file.m"
    }
#line 1894 "write_deps_file.m"
    {
#line 1894 "write_deps_file.m"
      parse_tree__write_deps_file__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1894 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_128_128, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1894 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_128_128, 1) = ((MR_Box) (parse_tree__write_deps_file__V_129_129));
#line 1894 "write_deps_file.m"
    }
#line 1894 "write_deps_file.m"
    {
#line 1894 "write_deps_file.m"
      parse_tree__write_deps_file__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1894 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 1894 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 1) = ((MR_Box) (parse_tree__write_deps_file__V_128_128));
#line 1894 "write_deps_file.m"
    }
#line 1893 "write_deps_file.m"
    {
#line 1893 "write_deps_file.m"
      parse_tree__write_deps_file__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1893 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_123_123, 0) = ((MR_Box) ((MR_String) "ifneq (\044(EXT_FOR_EXE),)\n"));
#line 1893 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_123_123, 1) = ((MR_Box) (parse_tree__write_deps_file__V_126_126));
#line 1893 "write_deps_file.m"
    }
#line 1892 "write_deps_file.m"
    {
#line 1892 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_123_123);
    }
#line 1906 "write_deps_file.m"
    {
#line 1906 "write_deps_file.m"
      parse_tree__write_deps_file__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1906 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1906 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[125])));
#line 1906 "write_deps_file.m"
    }
#line 1906 "write_deps_file.m"
    {
#line 1906 "write_deps_file.m"
      parse_tree__write_deps_file__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1906 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1906 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 1) = ((MR_Box) (parse_tree__write_deps_file__V_174_174));
#line 1906 "write_deps_file.m"
    }
#line 1906 "write_deps_file.m"
    {
#line 1906 "write_deps_file.m"
      parse_tree__write_deps_file__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1906 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1906 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 1) = ((MR_Box) (parse_tree__write_deps_file__V_172_172));
#line 1906 "write_deps_file.m"
    }
#line 1906 "write_deps_file.m"
    {
#line 1906 "write_deps_file.m"
      parse_tree__write_deps_file__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1906 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 0) = ((MR_Box) ((MR_String) "\t\t\044("));
#line 1906 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 1) = ((MR_Box) (parse_tree__write_deps_file__V_171_171));
#line 1906 "write_deps_file.m"
    }
#line 1905 "write_deps_file.m"
    {
#line 1905 "write_deps_file.m"
      parse_tree__write_deps_file__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1905 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 0) = ((MR_Box) ((MR_String) " \\\n"));
#line 1905 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 1) = ((MR_Box) (parse_tree__write_deps_file__V_169_169));
#line 1905 "write_deps_file.m"
    }
#line 1905 "write_deps_file.m"
    {
#line 1905 "write_deps_file.m"
      parse_tree__write_deps_file__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1905 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_24));
#line 1905 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 1) = ((MR_Box) (parse_tree__write_deps_file__V_167_167));
#line 1905 "write_deps_file.m"
    }
#line 1904 "write_deps_file.m"
    {
#line 1904 "write_deps_file.m"
      parse_tree__write_deps_file__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1904 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) "));
#line 1904 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 1) = ((MR_Box) (parse_tree__write_deps_file__V_166_166));
#line 1904 "write_deps_file.m"
    }
#line 1904 "write_deps_file.m"
    {
#line 1904 "write_deps_file.m"
      parse_tree__write_deps_file__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1904 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_163_163, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1904 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_163_163, 1) = ((MR_Box) (parse_tree__write_deps_file__V_164_164));
#line 1904 "write_deps_file.m"
    }
#line 1904 "write_deps_file.m"
    {
#line 1904 "write_deps_file.m"
      parse_tree__write_deps_file__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1904 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 0) = ((MR_Box) ((MR_String) "\044(EXEFILE_OPT)"));
#line 1904 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 1) = ((MR_Box) (parse_tree__write_deps_file__V_163_163));
#line 1904 "write_deps_file.m"
    }
#line 1903 "write_deps_file.m"
    {
#line 1903 "write_deps_file.m"
      parse_tree__write_deps_file__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1903 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 0) = ((MR_Box) ((MR_String) "\t\044(ML) \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) -- \044(ALL_LDFLAGS) "));
#line 1903 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 1) = ((MR_Box) (parse_tree__write_deps_file__V_161_161));
#line 1903 "write_deps_file.m"
    }
#line 1902 "write_deps_file.m"
    {
#line 1902 "write_deps_file.m"
      parse_tree__write_deps_file__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1902 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1902 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 1) = ((MR_Box) (parse_tree__write_deps_file__V_159_159));
#line 1902 "write_deps_file.m"
    }
#line 1902 "write_deps_file.m"
    {
#line 1902 "write_deps_file.m"
      parse_tree__write_deps_file__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1902 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLLibsDepString_37));
#line 1902 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 1) = ((MR_Box) (parse_tree__write_deps_file__V_157_157));
#line 1902 "write_deps_file.m"
    }
#line 1902 "write_deps_file.m"
    {
#line 1902 "write_deps_file.m"
      parse_tree__write_deps_file__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1902 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 0) = ((MR_Box) ((MR_String) " "));
#line 1902 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 1) = ((MR_Box) (parse_tree__write_deps_file__V_156_156));
#line 1902 "write_deps_file.m"
    }
#line 1902 "write_deps_file.m"
    {
#line 1902 "write_deps_file.m"
      parse_tree__write_deps_file__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1902 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1902 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 1) = ((MR_Box) (parse_tree__write_deps_file__V_154_154));
#line 1902 "write_deps_file.m"
    }
#line 1901 "write_deps_file.m"
    {
#line 1901 "write_deps_file.m"
      parse_tree__write_deps_file__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1901 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 0) = ((MR_Box) ((MR_String) " "));
#line 1901 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 1) = ((MR_Box) (parse_tree__write_deps_file__V_153_153));
#line 1901 "write_deps_file.m"
    }
#line 1901 "write_deps_file.m"
    {
#line 1901 "write_deps_file.m"
      parse_tree__write_deps_file__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1901 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_150_150, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_24));
#line 1901 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_150_150, 1) = ((MR_Box) (parse_tree__write_deps_file__V_151_151));
#line 1901 "write_deps_file.m"
    }
#line 1901 "write_deps_file.m"
    {
#line 1901 "write_deps_file.m"
      parse_tree__write_deps_file__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1901 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_148_148, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1901 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_148_148, 1) = ((MR_Box) (parse_tree__write_deps_file__V_150_150));
#line 1901 "write_deps_file.m"
    }
#line 1901 "write_deps_file.m"
    {
#line 1901 "write_deps_file.m"
      parse_tree__write_deps_file__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1901 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1901 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 1) = ((MR_Box) (parse_tree__write_deps_file__V_148_148));
#line 1901 "write_deps_file.m"
    }
#line 1901 "write_deps_file.m"
    {
#line 1901 "write_deps_file.m"
      parse_tree__write_deps_file__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1901 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_145_145, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1901 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_145_145, 1) = ((MR_Box) (parse_tree__write_deps_file__V_147_147));
#line 1901 "write_deps_file.m"
    }
#line 1900 "write_deps_file.m"
    {
#line 1900 "write_deps_file.m"
      parse_tree__write_deps_file__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1900 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
#line 1900 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 1) = ((MR_Box) (parse_tree__write_deps_file__V_145_145));
#line 1900 "write_deps_file.m"
    }
#line 1900 "write_deps_file.m"
    {
#line 1900 "write_deps_file.m"
      parse_tree__write_deps_file__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1900 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_142_142, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1900 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_142_142, 1) = ((MR_Box) (parse_tree__write_deps_file__V_143_143));
#line 1900 "write_deps_file.m"
    }
#line 1900 "write_deps_file.m"
    {
#line 1900 "write_deps_file.m"
      parse_tree__write_deps_file__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1900 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) : \044("));
#line 1900 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 1) = ((MR_Box) (parse_tree__write_deps_file__V_142_142));
#line 1900 "write_deps_file.m"
    }
#line 1900 "write_deps_file.m"
    {
#line 1900 "write_deps_file.m"
      parse_tree__write_deps_file__MainRule_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1900 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MainRule_48, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1900 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MainRule_48, 1) = ((MR_Box) (parse_tree__write_deps_file__V_140_140));
#line 1900 "write_deps_file.m"
    }
#line 1908 "write_deps_file.m"
    {
#line 1908 "write_deps_file.m"
      libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_19, &parse_tree__write_deps_file__Target_49);
    }
#line 1914 "write_deps_file.m"
#line 1914 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Gmake_36) {
#line 1914 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1914 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1919 "write_deps_file.m"
#line 1919 "write_deps_file.m"
        switch (parse_tree__write_deps_file__Target_49) {
#line 1919 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1919 "write_deps_file.m"
          case (MR_Integer) 0:
#line 1932 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_50 = parse_tree__write_deps_file__MainRule_48;
#line 1919 "write_deps_file.m"
            break;
#line 1919 "write_deps_file.m"
          case (MR_Integer) 2:
#line 1922 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1919 "write_deps_file.m"
            break;
#line 1919 "write_deps_file.m"
          case (MR_Integer) 4:
#line 1929 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1919 "write_deps_file.m"
            break;
#line 1919 "write_deps_file.m"
          case (MR_Integer) 1:
#line 1918 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_50 = parse_tree__write_deps_file__ILMainRule_41;
#line 1919 "write_deps_file.m"
            break;
#line 1919 "write_deps_file.m"
          case (MR_Integer) 3:
#line 1925 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_50 = parse_tree__write_deps_file__JavaMainRule_43;
#line 1919 "write_deps_file.m"
            break;
#line 1919 "write_deps_file.m"
        }
#line 1914 "write_deps_file.m"
        break;
#line 1914 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1910 "write_deps_file.m"
        {
#line 1910 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__TypeCtorInfo_369_369 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1910 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_178_178;
#line 1910 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_179_179;
#line 1910 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_180_180;
#line 1910 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_181_181;
#line 1910 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_182_182;
#line 1910 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_183_183;
#line 1910 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_184_184;

#line 1913 "write_deps_file.m"
          {
#line 1913 "write_deps_file.m"
            parse_tree__write_deps_file__V_184_184 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__EndIf2_47, parse_tree__write_deps_file__EndIf_46);
          }
#line 1913 "write_deps_file.m"
          {
#line 1913 "write_deps_file.m"
            parse_tree__write_deps_file__V_183_183 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__MainRule_48, parse_tree__write_deps_file__V_184_184);
          }
#line 1912 "write_deps_file.m"
          {
#line 1912 "write_deps_file.m"
            parse_tree__write_deps_file__V_182_182 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__Else2_45, parse_tree__write_deps_file__V_183_183);
          }
#line 1912 "write_deps_file.m"
          {
#line 1912 "write_deps_file.m"
            parse_tree__write_deps_file__V_181_181 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__JavaMainRule_43, parse_tree__write_deps_file__V_182_182);
          }
#line 1912 "write_deps_file.m"
          {
#line 1912 "write_deps_file.m"
            parse_tree__write_deps_file__V_180_180 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__IfJava2_42, parse_tree__write_deps_file__V_181_181);
          }
#line 1911 "write_deps_file.m"
          {
#line 1911 "write_deps_file.m"
            parse_tree__write_deps_file__V_179_179 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__Else_44, parse_tree__write_deps_file__V_180_180);
          }
#line 1911 "write_deps_file.m"
          {
#line 1911 "write_deps_file.m"
            parse_tree__write_deps_file__V_178_178 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__ILMainRule_41, parse_tree__write_deps_file__V_179_179);
          }
#line 1911 "write_deps_file.m"
          {
#line 1911 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_50 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__IfIL_40, parse_tree__write_deps_file__V_178_178);
          }
#line 1910 "write_deps_file.m"
        }
#line 1914 "write_deps_file.m"
        break;
#line 1914 "write_deps_file.m"
    }
#line 1935 "write_deps_file.m"
    {
#line 1935 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__Rules_50);
    }
#line 1940 "write_deps_file.m"
#line 1940 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Intermod_25) {
#line 1940 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1940 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1942 "write_deps_file.m"
        *parse_tree__write_deps_file__MaybeOptsVar_28 = (MR_String) "";
#line 1940 "write_deps_file.m"
        break;
#line 1940 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1938 "write_deps_file.m"
        {
#line 1938 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__V_187_187;

#line 1939 "write_deps_file.m"
          {
#line 1939 "write_deps_file.m"
            parse_tree__write_deps_file__V_187_187 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".opts) ");
          }
#line 1939 "write_deps_file.m"
          {
#line 1939 "write_deps_file.m"
            *parse_tree__write_deps_file__MaybeOptsVar_28 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_187_187);
          }
#line 1938 "write_deps_file.m"
        }
#line 1940 "write_deps_file.m"
        break;
#line 1940 "write_deps_file.m"
    }
#line 1947 "write_deps_file.m"
#line 1947 "write_deps_file.m"
    switch (parse_tree__write_deps_file__TransOpt_26) {
#line 1947 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1947 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1949 "write_deps_file.m"
        *parse_tree__write_deps_file__MaybeTransOptsVar_29 = (MR_String) "";
#line 1947 "write_deps_file.m"
        break;
#line 1947 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1945 "write_deps_file.m"
        {
#line 1945 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__V_190_190;

#line 1946 "write_deps_file.m"
          {
#line 1946 "write_deps_file.m"
            parse_tree__write_deps_file__V_190_190 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".trans_opts) ");
          }
#line 1946 "write_deps_file.m"
          {
#line 1946 "write_deps_file.m"
            *parse_tree__write_deps_file__MaybeTransOptsVar_29 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_190_190);
          }
#line 1945 "write_deps_file.m"
        }
#line 1947 "write_deps_file.m"
        break;
#line 1947 "write_deps_file.m"
    }
#line 1954 "write_deps_file.m"
#line 1954 "write_deps_file.m"
    switch (parse_tree__write_deps_file__MmcMakeDeps_27) {
#line 1954 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1954 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1956 "write_deps_file.m"
        *parse_tree__write_deps_file__MaybeModuleDepsVar_30 = (MR_String) "";
#line 1954 "write_deps_file.m"
        break;
#line 1954 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1952 "write_deps_file.m"
        {
#line 1952 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__V_193_193;

#line 1953 "write_deps_file.m"
          {
#line 1953 "write_deps_file.m"
            parse_tree__write_deps_file__V_193_193 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".module_deps) ");
          }
#line 1953 "write_deps_file.m"
          {
#line 1953 "write_deps_file.m"
            *parse_tree__write_deps_file__MaybeModuleDepsVar_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_193_193);
          }
#line 1952 "write_deps_file.m"
        }
#line 1954 "write_deps_file.m"
        break;
#line 1954 "write_deps_file.m"
    }
#line 1959 "write_deps_file.m"
    {
#line 1959 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) "", (MR_Integer) 1, &parse_tree__write_deps_file__LibTargetName_51);
    }
#line 1961 "write_deps_file.m"
    {
#line 1961 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044A", (MR_Integer) 0, parse_tree__write_deps_file__LibFileName_33);
    }
#line 1963 "write_deps_file.m"
    {
#line 1963 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 0, parse_tree__write_deps_file__SharedLibFileName_34);
    }
#line 1965 "write_deps_file.m"
    {
#line 1965 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 1, &parse_tree__write_deps_file__MaybeSharedLibFileName_52);
    }
#line 1968 "write_deps_file.m"
    {
#line 1968 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ModuleName_21, (MR_String) ".jar", (MR_Integer) 1, parse_tree__write_deps_file__JarFileName_32);
    }
#line 1973 "write_deps_file.m"
    {
#line 1973 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_19, (MR_Integer) 618, &parse_tree__write_deps_file__UseInstallName_53);
    }
#line 1978 "write_deps_file.m"
#line 1978 "write_deps_file.m"
    switch (parse_tree__write_deps_file__UseInstallName_53) {
#line 1978 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1978 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1980 "write_deps_file.m"
        parse_tree__write_deps_file__InstallNameOpt_54 = (MR_String) "";
#line 1978 "write_deps_file.m"
        break;
#line 1978 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1977 "write_deps_file.m"
        {
#line 1977 "write_deps_file.m"
          libs__file_util__get_install_name_option_3_p_0(parse_tree__write_deps_file__Globals_19, *parse_tree__write_deps_file__SharedLibFileName_34, &parse_tree__write_deps_file__InstallNameOpt_54);
        }
#line 1978 "write_deps_file.m"
        break;
#line 1978 "write_deps_file.m"
    }
#line 1988 "write_deps_file.m"
    parse_tree__write_deps_file__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[112]);
#line 1987 "write_deps_file.m"
    {
#line 1987 "write_deps_file.m"
      parse_tree__write_deps_file__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1987 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_23));
#line 1987 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 1987 "write_deps_file.m"
    }
#line 1986 "write_deps_file.m"
    {
#line 1986 "write_deps_file.m"
      parse_tree__write_deps_file__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1986 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 0) = ((MR_Box) (*parse_tree__write_deps_file__MaybeTransOptsVar_29));
#line 1986 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 1) = ((MR_Box) (parse_tree__write_deps_file__V_226_226));
#line 1986 "write_deps_file.m"
    }
#line 1986 "write_deps_file.m"
    {
#line 1986 "write_deps_file.m"
      parse_tree__write_deps_file__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1986 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 0) = ((MR_Box) (*parse_tree__write_deps_file__MaybeOptsVar_28));
#line 1986 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 1) = ((MR_Box) (parse_tree__write_deps_file__V_225_225));
#line 1986 "write_deps_file.m"
    }
#line 1985 "write_deps_file.m"
    {
#line 1985 "write_deps_file.m"
      parse_tree__write_deps_file__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1985 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 0) = ((MR_Box) ((MR_String) ".int3s) "));
#line 1985 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 1) = ((MR_Box) (parse_tree__write_deps_file__V_224_224));
#line 1985 "write_deps_file.m"
    }
#line 1985 "write_deps_file.m"
    {
#line 1985 "write_deps_file.m"
      parse_tree__write_deps_file__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1985 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1985 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 1) = ((MR_Box) (parse_tree__write_deps_file__V_222_222));
#line 1985 "write_deps_file.m"
    }
#line 1985 "write_deps_file.m"
    {
#line 1985 "write_deps_file.m"
      parse_tree__write_deps_file__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1985 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1985 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 1) = ((MR_Box) (parse_tree__write_deps_file__V_221_221));
#line 1985 "write_deps_file.m"
    }
#line 1984 "write_deps_file.m"
    {
#line 1984 "write_deps_file.m"
      parse_tree__write_deps_file__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1984 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 0) = ((MR_Box) ((MR_String) ".ints) "));
#line 1984 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 1) = ((MR_Box) (parse_tree__write_deps_file__V_219_219));
#line 1984 "write_deps_file.m"
    }
#line 1984 "write_deps_file.m"
    {
#line 1984 "write_deps_file.m"
      parse_tree__write_deps_file__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1984 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1984 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 1) = ((MR_Box) (parse_tree__write_deps_file__V_217_217));
#line 1984 "write_deps_file.m"
    }
#line 1984 "write_deps_file.m"
    {
#line 1984 "write_deps_file.m"
      parse_tree__write_deps_file__AllInts_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1984 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__AllInts_55, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1984 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__AllInts_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_216_216));
#line 1984 "write_deps_file.m"
    }
#line 1992 "write_deps_file.m"
    {
#line 1992 "write_deps_file.m"
      parse_tree__write_deps_file__V_240_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1992 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 0) = ((MR_Box) ((MR_String) ".foreign_dlls) \\\n\t\t"));
#line 1992 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 1) = ((MR_Box) (parse_tree__write_deps_file__AllInts_55));
#line 1992 "write_deps_file.m"
    }
#line 1991 "write_deps_file.m"
    {
#line 1991 "write_deps_file.m"
      parse_tree__write_deps_file__V_239_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1991 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1991 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 1) = ((MR_Box) (parse_tree__write_deps_file__V_240_240));
#line 1991 "write_deps_file.m"
    }
#line 1991 "write_deps_file.m"
    {
#line 1991 "write_deps_file.m"
      parse_tree__write_deps_file__V_237_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1991 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1991 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 1) = ((MR_Box) (parse_tree__write_deps_file__V_239_239));
#line 1991 "write_deps_file.m"
    }
#line 1990 "write_deps_file.m"
    {
#line 1990 "write_deps_file.m"
      parse_tree__write_deps_file__V_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1990 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 0) = ((MR_Box) ((MR_String) ".dlls) "));
#line 1990 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 1) = ((MR_Box) (parse_tree__write_deps_file__V_237_237));
#line 1990 "write_deps_file.m"
    }
#line 1990 "write_deps_file.m"
    {
#line 1990 "write_deps_file.m"
      parse_tree__write_deps_file__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1990 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1990 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 1) = ((MR_Box) (parse_tree__write_deps_file__V_235_235));
#line 1990 "write_deps_file.m"
    }
#line 1990 "write_deps_file.m"
    {
#line 1990 "write_deps_file.m"
      parse_tree__write_deps_file__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1990 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1990 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 1) = ((MR_Box) (parse_tree__write_deps_file__V_234_234));
#line 1990 "write_deps_file.m"
    }
#line 1990 "write_deps_file.m"
    {
#line 1990 "write_deps_file.m"
      parse_tree__write_deps_file__V_230_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1990 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 0) = ((MR_Box) ((MR_String) " : "));
#line 1990 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 1) = ((MR_Box) (parse_tree__write_deps_file__V_232_232));
#line 1990 "write_deps_file.m"
    }
#line 1990 "write_deps_file.m"
    {
#line 1990 "write_deps_file.m"
      parse_tree__write_deps_file__ILLibRule_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1990 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILLibRule_56, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1990 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILLibRule_56, 1) = ((MR_Box) (parse_tree__write_deps_file__V_230_230));
#line 1990 "write_deps_file.m"
    }
#line 1996 "write_deps_file.m"
    {
#line 1996 "write_deps_file.m"
      parse_tree__write_deps_file__V_245_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1996 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_245_245, 0) = ((MR_Box) ((MR_String) " \\\n\t\t"));
#line 1996 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_245_245, 1) = ((MR_Box) (parse_tree__write_deps_file__AllInts_55));
#line 1996 "write_deps_file.m"
    }
#line 1995 "write_deps_file.m"
    {
#line 1995 "write_deps_file.m"
      parse_tree__write_deps_file__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1995 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
#line 1995 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 1) = ((MR_Box) (parse_tree__write_deps_file__V_245_245));
#line 1995 "write_deps_file.m"
    }
#line 1995 "write_deps_file.m"
    {
#line 1995 "write_deps_file.m"
      parse_tree__write_deps_file__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1995 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 0) = ((MR_Box) ((MR_String) " : "));
#line 1995 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 1) = ((MR_Box) (parse_tree__write_deps_file__V_244_244));
#line 1995 "write_deps_file.m"
    }
#line 1995 "write_deps_file.m"
    {
#line 1995 "write_deps_file.m"
      parse_tree__write_deps_file__JavaLibRule_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1995 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaLibRule_57, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1995 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaLibRule_57, 1) = ((MR_Box) (parse_tree__write_deps_file__V_242_242));
#line 1995 "write_deps_file.m"
    }
#line 2000 "write_deps_file.m"
    {
#line 2000 "write_deps_file.m"
      parse_tree__write_deps_file__V_252_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2000 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeSharedLibFileName_52));
#line 2000 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 1) = ((MR_Box) (parse_tree__write_deps_file__V_245_245));
#line 2000 "write_deps_file.m"
    }
#line 1999 "write_deps_file.m"
    {
#line 1999 "write_deps_file.m"
      parse_tree__write_deps_file__V_250_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1999 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_250_250, 0) = ((MR_Box) ((MR_String) " "));
#line 1999 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_250_250, 1) = ((MR_Box) (parse_tree__write_deps_file__V_252_252));
#line 1999 "write_deps_file.m"
    }
#line 1999 "write_deps_file.m"
    {
#line 1999 "write_deps_file.m"
      parse_tree__write_deps_file__V_249_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1999 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1999 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 1) = ((MR_Box) (parse_tree__write_deps_file__V_250_250));
#line 1999 "write_deps_file.m"
    }
#line 1999 "write_deps_file.m"
    {
#line 1999 "write_deps_file.m"
      parse_tree__write_deps_file__V_247_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1999 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 0) = ((MR_Box) ((MR_String) " : "));
#line 1999 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 1) = ((MR_Box) (parse_tree__write_deps_file__V_249_249));
#line 1999 "write_deps_file.m"
    }
#line 1999 "write_deps_file.m"
    {
#line 1999 "write_deps_file.m"
      parse_tree__write_deps_file__LibRule_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1999 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibRule_58, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1999 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibRule_58, 1) = ((MR_Box) (parse_tree__write_deps_file__V_247_247));
#line 1999 "write_deps_file.m"
    }
#line 2008 "write_deps_file.m"
#line 2008 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Gmake_36) {
#line 2008 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2008 "write_deps_file.m"
      case (MR_Integer) 0:
#line 2013 "write_deps_file.m"
#line 2013 "write_deps_file.m"
        switch (parse_tree__write_deps_file__Target_49) {
#line 2013 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 2013 "write_deps_file.m"
          case (MR_Integer) 0:
#line 2026 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_59 = parse_tree__write_deps_file__LibRule_58;
#line 2013 "write_deps_file.m"
            break;
#line 2013 "write_deps_file.m"
          case (MR_Integer) 2:
#line 2016 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2013 "write_deps_file.m"
            break;
#line 2013 "write_deps_file.m"
          case (MR_Integer) 4:
#line 2023 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2013 "write_deps_file.m"
            break;
#line 2013 "write_deps_file.m"
          case (MR_Integer) 1:
#line 2012 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_59 = parse_tree__write_deps_file__ILLibRule_56;
#line 2013 "write_deps_file.m"
            break;
#line 2013 "write_deps_file.m"
          case (MR_Integer) 3:
#line 2019 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_59 = parse_tree__write_deps_file__JavaLibRule_57;
#line 2013 "write_deps_file.m"
            break;
#line 2013 "write_deps_file.m"
        }
#line 2008 "write_deps_file.m"
        break;
#line 2008 "write_deps_file.m"
      case (MR_Integer) 1:
#line 2004 "write_deps_file.m"
        {
#line 2004 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__TypeCtorInfo_370_370 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 2004 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_255_255;
#line 2004 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_256_256;
#line 2004 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_257_257;
#line 2004 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_258_258;
#line 2004 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_259_259;
#line 2004 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_260_260;
#line 2004 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_261_261;

#line 2007 "write_deps_file.m"
          {
#line 2007 "write_deps_file.m"
            parse_tree__write_deps_file__V_261_261 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__EndIf2_47, parse_tree__write_deps_file__EndIf_46);
          }
#line 2007 "write_deps_file.m"
          {
#line 2007 "write_deps_file.m"
            parse_tree__write_deps_file__V_260_260 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__LibRule_58, parse_tree__write_deps_file__V_261_261);
          }
#line 2006 "write_deps_file.m"
          {
#line 2006 "write_deps_file.m"
            parse_tree__write_deps_file__V_259_259 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__Else2_45, parse_tree__write_deps_file__V_260_260);
          }
#line 2006 "write_deps_file.m"
          {
#line 2006 "write_deps_file.m"
            parse_tree__write_deps_file__V_258_258 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__JavaLibRule_57, parse_tree__write_deps_file__V_259_259);
          }
#line 2006 "write_deps_file.m"
          {
#line 2006 "write_deps_file.m"
            parse_tree__write_deps_file__V_257_257 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__IfJava2_42, parse_tree__write_deps_file__V_258_258);
          }
#line 2005 "write_deps_file.m"
          {
#line 2005 "write_deps_file.m"
            parse_tree__write_deps_file__V_256_256 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__Else_44, parse_tree__write_deps_file__V_257_257);
          }
#line 2005 "write_deps_file.m"
          {
#line 2005 "write_deps_file.m"
            parse_tree__write_deps_file__V_255_255 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__ILLibRule_56, parse_tree__write_deps_file__V_256_256);
          }
#line 2005 "write_deps_file.m"
          {
#line 2005 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_59 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__IfIL_40, parse_tree__write_deps_file__V_255_255);
          }
#line 2004 "write_deps_file.m"
        }
#line 2008 "write_deps_file.m"
        break;
#line 2008 "write_deps_file.m"
    }
#line 2030 "write_deps_file.m"
    {
#line 2030 "write_deps_file.m"
      parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2030 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2030 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__LibRules_59));
#line 2030 "write_deps_file.m"
    }
#line 2030 "write_deps_file.m"
    {
#line 2030 "write_deps_file.m"
      parse_tree__write_deps_file__V_265_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2030 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 2030 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 2030 "write_deps_file.m"
    }
#line 2030 "write_deps_file.m"
    {
#line 2030 "write_deps_file.m"
      parse_tree__write_deps_file__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2030 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2030 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 1) = ((MR_Box) (parse_tree__write_deps_file__V_265_265));
#line 2030 "write_deps_file.m"
    }
#line 2029 "write_deps_file.m"
    {
#line 2029 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_262_262);
    }
#line 2042 "write_deps_file.m"
    {
#line 2042 "write_deps_file.m"
      parse_tree__write_deps_file__V_303_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2042 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_303_303, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLPicObjsString_39));
#line 2042 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_303_303, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[32])));
#line 2042 "write_deps_file.m"
    }
#line 2042 "write_deps_file.m"
    {
#line 2042 "write_deps_file.m"
      parse_tree__write_deps_file__V_301_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2042 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_301_301, 0) = ((MR_Box) ((MR_String) ".pic_os) "));
#line 2042 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_301_301, 1) = ((MR_Box) (parse_tree__write_deps_file__V_303_303));
#line 2042 "write_deps_file.m"
    }
#line 2042 "write_deps_file.m"
    {
#line 2042 "write_deps_file.m"
      parse_tree__write_deps_file__V_300_300 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2042 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_300_300, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 2042 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_300_300, 1) = ((MR_Box) (parse_tree__write_deps_file__V_301_301));
#line 2042 "write_deps_file.m"
    }
#line 2042 "write_deps_file.m"
    {
#line 2042 "write_deps_file.m"
      parse_tree__write_deps_file__V_298_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2042 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_298_298, 0) = ((MR_Box) ((MR_String) "\t\t\044("));
#line 2042 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_298_298, 1) = ((MR_Box) (parse_tree__write_deps_file__V_300_300));
#line 2042 "write_deps_file.m"
    }
#line 2041 "write_deps_file.m"
    {
#line 2041 "write_deps_file.m"
      parse_tree__write_deps_file__V_296_296 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2041 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_296_296, 0) = ((MR_Box) ((MR_String) " \\\n"));
#line 2041 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_296_296, 1) = ((MR_Box) (parse_tree__write_deps_file__V_298_298));
#line 2041 "write_deps_file.m"
    }
#line 2041 "write_deps_file.m"
    {
#line 2041 "write_deps_file.m"
      parse_tree__write_deps_file__V_295_295 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2041 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_295_295, 0) = ((MR_Box) (*parse_tree__write_deps_file__SharedLibFileName_34));
#line 2041 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_295_295, 1) = ((MR_Box) (parse_tree__write_deps_file__V_296_296));
#line 2041 "write_deps_file.m"
    }
#line 2040 "write_deps_file.m"
    {
#line 2040 "write_deps_file.m"
      parse_tree__write_deps_file__V_293_293 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2040 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_293_293, 0) = ((MR_Box) ((MR_String) " \044(ALL_LD_LIBFLAGS) -o "));
#line 2040 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_293_293, 1) = ((MR_Box) (parse_tree__write_deps_file__V_295_295));
#line 2040 "write_deps_file.m"
    }
#line 2040 "write_deps_file.m"
    {
#line 2040 "write_deps_file.m"
      parse_tree__write_deps_file__V_292_292 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2040 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_292_292, 0) = ((MR_Box) (parse_tree__write_deps_file__InstallNameOpt_54));
#line 2040 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_292_292, 1) = ((MR_Box) (parse_tree__write_deps_file__V_293_293));
#line 2040 "write_deps_file.m"
    }
#line 2040 "write_deps_file.m"
    {
#line 2040 "write_deps_file.m"
      parse_tree__write_deps_file__V_290_290 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2040 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_290_290, 0) = ((MR_Box) ((MR_String) "-- "));
#line 2040 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_290_290, 1) = ((MR_Box) (parse_tree__write_deps_file__V_292_292));
#line 2040 "write_deps_file.m"
    }
#line 2039 "write_deps_file.m"
    {
#line 2039 "write_deps_file.m"
      parse_tree__write_deps_file__V_288_288 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2039 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_288_288, 0) = ((MR_Box) ((MR_String) "\t\044(ML) --make-shared-lib \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) "));
#line 2039 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_288_288, 1) = ((MR_Box) (parse_tree__write_deps_file__V_290_290));
#line 2039 "write_deps_file.m"
    }
#line 2038 "write_deps_file.m"
    {
#line 2038 "write_deps_file.m"
      parse_tree__write_deps_file__V_286_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2038 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_286_286, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2038 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_286_286, 1) = ((MR_Box) (parse_tree__write_deps_file__V_288_288));
#line 2038 "write_deps_file.m"
    }
#line 2038 "write_deps_file.m"
    {
#line 2038 "write_deps_file.m"
      parse_tree__write_deps_file__V_285_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2038 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLLibsDepString_37));
#line 2038 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 1) = ((MR_Box) (parse_tree__write_deps_file__V_286_286));
#line 2038 "write_deps_file.m"
    }
#line 2038 "write_deps_file.m"
    {
#line 2038 "write_deps_file.m"
      parse_tree__write_deps_file__V_283_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2038 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 0) = ((MR_Box) ((MR_String) " "));
#line 2038 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 1) = ((MR_Box) (parse_tree__write_deps_file__V_285_285));
#line 2038 "write_deps_file.m"
    }
#line 2038 "write_deps_file.m"
    {
#line 2038 "write_deps_file.m"
      parse_tree__write_deps_file__V_282_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2038 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_282_282, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLPicObjsString_39));
#line 2038 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_282_282, 1) = ((MR_Box) (parse_tree__write_deps_file__V_283_283));
#line 2038 "write_deps_file.m"
    }
#line 2037 "write_deps_file.m"
    {
#line 2037 "write_deps_file.m"
      parse_tree__write_deps_file__V_280_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2037 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_280_280, 0) = ((MR_Box) ((MR_String) ".pic_os) "));
#line 2037 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_280_280, 1) = ((MR_Box) (parse_tree__write_deps_file__V_282_282));
#line 2037 "write_deps_file.m"
    }
#line 2037 "write_deps_file.m"
    {
#line 2037 "write_deps_file.m"
      parse_tree__write_deps_file__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2037 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 2037 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 1) = ((MR_Box) (parse_tree__write_deps_file__V_280_280));
#line 2037 "write_deps_file.m"
    }
#line 2037 "write_deps_file.m"
    {
#line 2037 "write_deps_file.m"
      parse_tree__write_deps_file__V_277_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2037 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_277_277, 0) = ((MR_Box) ((MR_String) "\044("));
#line 2037 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_277_277, 1) = ((MR_Box) (parse_tree__write_deps_file__V_279_279));
#line 2037 "write_deps_file.m"
    }
#line 2036 "write_deps_file.m"
    {
#line 2036 "write_deps_file.m"
      parse_tree__write_deps_file__V_275_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2036 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
#line 2036 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 1) = ((MR_Box) (parse_tree__write_deps_file__V_277_277));
#line 2036 "write_deps_file.m"
    }
#line 2036 "write_deps_file.m"
    {
#line 2036 "write_deps_file.m"
      parse_tree__write_deps_file__V_274_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2036 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 2036 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 1) = ((MR_Box) (parse_tree__write_deps_file__V_275_275));
#line 2036 "write_deps_file.m"
    }
#line 2036 "write_deps_file.m"
    {
#line 2036 "write_deps_file.m"
      parse_tree__write_deps_file__V_272_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2036 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 2036 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 1) = ((MR_Box) (parse_tree__write_deps_file__V_274_274));
#line 2036 "write_deps_file.m"
    }
#line 2036 "write_deps_file.m"
    {
#line 2036 "write_deps_file.m"
      parse_tree__write_deps_file__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2036 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 0) = ((MR_Box) (*parse_tree__write_deps_file__SharedLibFileName_34));
#line 2036 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 1) = ((MR_Box) (parse_tree__write_deps_file__V_272_272));
#line 2036 "write_deps_file.m"
    }
#line 2035 "write_deps_file.m"
    {
#line 2035 "write_deps_file.m"
      parse_tree__write_deps_file__V_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2035 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 0) = ((MR_Box) ((MR_String) "ifneq (\044(EXT_FOR_SHARED_LIB),\044A)\n"));
#line 2035 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 1) = ((MR_Box) (parse_tree__write_deps_file__V_271_271));
#line 2035 "write_deps_file.m"
    }
#line 2034 "write_deps_file.m"
    {
#line 2034 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_268_268);
    }
#line 2053 "write_deps_file.m"
    {
#line 2053 "write_deps_file.m"
      parse_tree__write_deps_file__V_344_344 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2053 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_344_344, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 2053 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_344_344, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 2053 "write_deps_file.m"
    }
#line 2053 "write_deps_file.m"
    {
#line 2053 "write_deps_file.m"
      parse_tree__write_deps_file__V_342_342 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2053 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_342_342, 0) = ((MR_Box) ((MR_String) "\t\044(RANLIB) \044(ALL_RANLIBFLAGS) "));
#line 2053 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_342_342, 1) = ((MR_Box) (parse_tree__write_deps_file__V_344_344));
#line 2053 "write_deps_file.m"
    }
#line 2052 "write_deps_file.m"
    {
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_340_340 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2052 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_340_340, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2052 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_340_340, 1) = ((MR_Box) (parse_tree__write_deps_file__V_342_342));
#line 2052 "write_deps_file.m"
    }
#line 2052 "write_deps_file.m"
    {
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_339_339 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2052 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_339_339, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 2052 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_339_339, 1) = ((MR_Box) (parse_tree__write_deps_file__V_340_340));
#line 2052 "write_deps_file.m"
    }
#line 2052 "write_deps_file.m"
    {
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_337_337 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2052 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_337_337, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 2052 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_337_337, 1) = ((MR_Box) (parse_tree__write_deps_file__V_339_339));
#line 2052 "write_deps_file.m"
    }
#line 2052 "write_deps_file.m"
    {
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_336_336 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2052 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_336_336, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 2052 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_336_336, 1) = ((MR_Box) (parse_tree__write_deps_file__V_337_337));
#line 2052 "write_deps_file.m"
    }
#line 2052 "write_deps_file.m"
    {
#line 2052 "write_deps_file.m"
      parse_tree__write_deps_file__V_334_334 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2052 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_334_334, 0) = ((MR_Box) ((MR_String) "\044("));
#line 2052 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_334_334, 1) = ((MR_Box) (parse_tree__write_deps_file__V_336_336));
#line 2052 "write_deps_file.m"
    }
#line 2051 "write_deps_file.m"
    {
#line 2051 "write_deps_file.m"
      parse_tree__write_deps_file__V_332_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2051 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_332_332, 0) = ((MR_Box) ((MR_String) " "));
#line 2051 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_332_332, 1) = ((MR_Box) (parse_tree__write_deps_file__V_334_334));
#line 2051 "write_deps_file.m"
    }
#line 2051 "write_deps_file.m"
    {
#line 2051 "write_deps_file.m"
      parse_tree__write_deps_file__V_331_331 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2051 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_331_331, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 2051 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_331_331, 1) = ((MR_Box) (parse_tree__write_deps_file__V_332_332));
#line 2051 "write_deps_file.m"
    }
#line 2051 "write_deps_file.m"
    {
#line 2051 "write_deps_file.m"
      parse_tree__write_deps_file__V_329_329 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2051 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_329_329, 0) = ((MR_Box) ((MR_String) "\t\044(AR) \044(ALL_ARFLAGS) \044(AR_LIBFILE_OPT)"));
#line 2051 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_329_329, 1) = ((MR_Box) (parse_tree__write_deps_file__V_331_331));
#line 2051 "write_deps_file.m"
    }
#line 2050 "write_deps_file.m"
    {
#line 2050 "write_deps_file.m"
      parse_tree__write_deps_file__V_327_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2050 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_327_327, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2050 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_327_327, 1) = ((MR_Box) (parse_tree__write_deps_file__V_329_329));
#line 2050 "write_deps_file.m"
    }
#line 2050 "write_deps_file.m"
    {
#line 2050 "write_deps_file.m"
      parse_tree__write_deps_file__V_326_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2050 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_326_326, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 2050 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_326_326, 1) = ((MR_Box) (parse_tree__write_deps_file__V_327_327));
#line 2050 "write_deps_file.m"
    }
#line 2050 "write_deps_file.m"
    {
#line 2050 "write_deps_file.m"
      parse_tree__write_deps_file__V_324_324 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2050 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_324_324, 0) = ((MR_Box) ((MR_String) "\trm -f "));
#line 2050 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_324_324, 1) = ((MR_Box) (parse_tree__write_deps_file__V_326_326));
#line 2050 "write_deps_file.m"
    }
#line 2049 "write_deps_file.m"
    {
#line 2049 "write_deps_file.m"
      parse_tree__write_deps_file__V_322_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2049 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_322_322, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2049 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_322_322, 1) = ((MR_Box) (parse_tree__write_deps_file__V_324_324));
#line 2049 "write_deps_file.m"
    }
#line 2049 "write_deps_file.m"
    {
#line 2049 "write_deps_file.m"
      parse_tree__write_deps_file__V_321_321 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2049 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_321_321, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 2049 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_321_321, 1) = ((MR_Box) (parse_tree__write_deps_file__V_322_322));
#line 2049 "write_deps_file.m"
    }
#line 2049 "write_deps_file.m"
    {
#line 2049 "write_deps_file.m"
      parse_tree__write_deps_file__V_319_319 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2049 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_319_319, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 2049 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_319_319, 1) = ((MR_Box) (parse_tree__write_deps_file__V_321_321));
#line 2049 "write_deps_file.m"
    }
#line 2049 "write_deps_file.m"
    {
#line 2049 "write_deps_file.m"
      parse_tree__write_deps_file__V_318_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2049 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_318_318, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 2049 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_318_318, 1) = ((MR_Box) (parse_tree__write_deps_file__V_319_319));
#line 2049 "write_deps_file.m"
    }
#line 2049 "write_deps_file.m"
    {
#line 2049 "write_deps_file.m"
      parse_tree__write_deps_file__V_316_316 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2049 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_316_316, 0) = ((MR_Box) ((MR_String) "\044("));
#line 2049 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_316_316, 1) = ((MR_Box) (parse_tree__write_deps_file__V_318_318));
#line 2049 "write_deps_file.m"
    }
#line 2048 "write_deps_file.m"
    {
#line 2048 "write_deps_file.m"
      parse_tree__write_deps_file__V_314_314 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2048 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_314_314, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
#line 2048 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_314_314, 1) = ((MR_Box) (parse_tree__write_deps_file__V_316_316));
#line 2048 "write_deps_file.m"
    }
#line 2048 "write_deps_file.m"
    {
#line 2048 "write_deps_file.m"
      parse_tree__write_deps_file__V_313_313 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2048 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_313_313, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 2048 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_313_313, 1) = ((MR_Box) (parse_tree__write_deps_file__V_314_314));
#line 2048 "write_deps_file.m"
    }
#line 2048 "write_deps_file.m"
    {
#line 2048 "write_deps_file.m"
      parse_tree__write_deps_file__V_311_311 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2048 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_311_311, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 2048 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_311_311, 1) = ((MR_Box) (parse_tree__write_deps_file__V_313_313));
#line 2048 "write_deps_file.m"
    }
#line 2048 "write_deps_file.m"
    {
#line 2048 "write_deps_file.m"
      parse_tree__write_deps_file__V_309_309 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2048 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_309_309, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 2048 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_309_309, 1) = ((MR_Box) (parse_tree__write_deps_file__V_311_311));
#line 2048 "write_deps_file.m"
    }
#line 2047 "write_deps_file.m"
    {
#line 2047 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_309_309);
    }
#line 2056 "write_deps_file.m"
    {
#line 2056 "write_deps_file.m"
      parse_tree__write_deps_file__V_349_349 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".classes)");
    }
#line 2056 "write_deps_file.m"
    {
#line 2056 "write_deps_file.m"
      parse_tree__write_deps_file__ClassFiles_60 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_349_349);
    }
#line 2057 "write_deps_file.m"
    {
#line 2057 "write_deps_file.m"
      parse_tree__module_cmds__list_class_files_for_jar_mmake_3_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ClassFiles_60, &parse_tree__write_deps_file__ListClassFiles_61);
    }
#line 2061 "write_deps_file.m"
    {
#line 2061 "write_deps_file.m"
      parse_tree__write_deps_file__V_365_365 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2061 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_365_365, 0) = ((MR_Box) (parse_tree__write_deps_file__ListClassFiles_61));
#line 2061 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_365_365, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 2061 "write_deps_file.m"
    }
#line 2060 "write_deps_file.m"
    {
#line 2060 "write_deps_file.m"
      parse_tree__write_deps_file__V_363_363 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2060 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_363_363, 0) = ((MR_Box) ((MR_String) " "));
#line 2060 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_363_363, 1) = ((MR_Box) (parse_tree__write_deps_file__V_365_365));
#line 2060 "write_deps_file.m"
    }
#line 2060 "write_deps_file.m"
    {
#line 2060 "write_deps_file.m"
      parse_tree__write_deps_file__V_362_362 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2060 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_362_362, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
#line 2060 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_362_362, 1) = ((MR_Box) (parse_tree__write_deps_file__V_363_363));
#line 2060 "write_deps_file.m"
    }
#line 2060 "write_deps_file.m"
    {
#line 2060 "write_deps_file.m"
      parse_tree__write_deps_file__V_360_360 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2060 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_360_360, 0) = ((MR_Box) ((MR_String) "\t\044(JAR) \044(JAR_CREATE_FLAGS) "));
#line 2060 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_360_360, 1) = ((MR_Box) (parse_tree__write_deps_file__V_362_362));
#line 2060 "write_deps_file.m"
    }
#line 2059 "write_deps_file.m"
    {
#line 2059 "write_deps_file.m"
      parse_tree__write_deps_file__V_358_358 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2059 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_358_358, 0) = ((MR_Box) ((MR_String) ".classes)\n"));
#line 2059 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_358_358, 1) = ((MR_Box) (parse_tree__write_deps_file__V_360_360));
#line 2059 "write_deps_file.m"
    }
#line 2059 "write_deps_file.m"
    {
#line 2059 "write_deps_file.m"
      parse_tree__write_deps_file__V_357_357 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2059 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_357_357, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 2059 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_357_357, 1) = ((MR_Box) (parse_tree__write_deps_file__V_358_358));
#line 2059 "write_deps_file.m"
    }
#line 2059 "write_deps_file.m"
    {
#line 2059 "write_deps_file.m"
      parse_tree__write_deps_file__V_355_355 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2059 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_355_355, 0) = ((MR_Box) ((MR_String) "\044("));
#line 2059 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_355_355, 1) = ((MR_Box) (parse_tree__write_deps_file__V_357_357));
#line 2059 "write_deps_file.m"
    }
#line 2059 "write_deps_file.m"
    {
#line 2059 "write_deps_file.m"
      parse_tree__write_deps_file__V_353_353 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2059 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_353_353, 0) = ((MR_Box) ((MR_String) " : "));
#line 2059 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_353_353, 1) = ((MR_Box) (parse_tree__write_deps_file__V_355_355));
#line 2059 "write_deps_file.m"
    }
#line 2059 "write_deps_file.m"
    {
#line 2059 "write_deps_file.m"
      parse_tree__write_deps_file__V_351_351 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2059 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_351_351, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
#line 2059 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_351_351, 1) = ((MR_Box) (parse_tree__write_deps_file__V_353_353));
#line 2059 "write_deps_file.m"
    }
#line 2058 "write_deps_file.m"
    {
#line 2058 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_351_351);
#line 2058 "write_deps_file.m"
      return;
    }
#line 1839 "write_deps_file.m"
  }
#line 1830 "write_deps_file.m"
}

#line 1772 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_7_p_0(
#line 1772 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1772 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1772 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1772 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1772 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12)
#line 1772 "write_deps_file.m"
{
#line 1776 "write_deps_file.m"
  {
#line 1776 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1776 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleNameString_14;
#line 1776 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Version_15;
#line 1776 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Fullarch_16;
#line 1776 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MakeVarName_17;
#line 1776 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitFileName_18;
#line 1776 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitCFileName_19;
#line 1776 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitObjFileName_20;
#line 1776 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitPicObjFileName_21;
#line 1776 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Intermod_22;
#line 1776 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TransOpt_23;
#line 1776 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__MmcMakeDeps_24;
#line 1776 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeOptsVar_25;
#line 1776 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeTransOptsVar_26;
#line 1776 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_27;
#line 1776 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ExeFileName_28;
#line 1776 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__JarFileName_29;
#line 1776 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__LibFileName_30;
#line 1776 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SharedLibFileName_31;
#line 1776 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DepFileName_32;
#line 1776 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DvFileName_33;

#line 1777 "write_deps_file.m"
    {
#line 1777 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Automatically generated dependencies for module \140");
    }
#line 1779 "write_deps_file.m"
    {
#line 1779 "write_deps_file.m"
      parse_tree__write_deps_file__ModuleNameString_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_10);
    }
#line 1780 "write_deps_file.m"
    {
#line 1780 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleNameString_14);
    }
#line 1781 "write_deps_file.m"
    {
#line 1781 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1782 "write_deps_file.m"
    {
#line 1782 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# generated from source file \140");
    }
#line 1784 "write_deps_file.m"
    {
#line 1784 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__SourceFileName_9);
    }
#line 1785 "write_deps_file.m"
    {
#line 1785 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1787 "write_deps_file.m"
    {
#line 1787 "write_deps_file.m"
      mercury__library__version_2_p_0(&parse_tree__write_deps_file__Version_15, &parse_tree__write_deps_file__Fullarch_16);
    }
#line 1788 "write_deps_file.m"
    {
#line 1788 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Generated by the Mercury compiler, version ");
    }
#line 1790 "write_deps_file.m"
    {
#line 1790 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Version_15);
    }
#line 1791 "write_deps_file.m"
    {
#line 1791 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n# configured for ");
    }
#line 1792 "write_deps_file.m"
    {
#line 1792 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Fullarch_16);
    }
#line 1793 "write_deps_file.m"
    {
#line 1793 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".\n\n");
    }
#line 1795 "write_deps_file.m"
    {
#line 1795 "write_deps_file.m"
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__MakeVarName_17);
    }
#line 1797 "write_deps_file.m"
    {
#line 1797 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) ".init", (MR_Integer) 0, &parse_tree__write_deps_file__InitFileName_18);
    }
#line 1799 "write_deps_file.m"
    {
#line 1799 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.c", (MR_Integer) 0, &parse_tree__write_deps_file__InitCFileName_19);
    }
#line 1801 "write_deps_file.m"
    {
#line 1801 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.\044O", (MR_Integer) 0, &parse_tree__write_deps_file__InitObjFileName_20);
    }
#line 1803 "write_deps_file.m"
    {
#line 1803 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.pic_o", (MR_Integer) 0, &parse_tree__write_deps_file__InitPicObjFileName_21);
    }
#line 1806 "write_deps_file.m"
    {
#line 1806 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 330, &parse_tree__write_deps_file__Intermod_22);
    }
#line 1807 "write_deps_file.m"
    {
#line 1807 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 334, &parse_tree__write_deps_file__TransOpt_23);
    }
#line 1808 "write_deps_file.m"
    {
#line 1808 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 118, &parse_tree__write_deps_file__MmcMakeDeps_24);
    }
#line 1811 "write_deps_file.m"
    {
#line 1811 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__InitFileName_18, parse_tree__write_deps_file__InitObjFileName_20, parse_tree__write_deps_file__Intermod_22, parse_tree__write_deps_file__TransOpt_23, parse_tree__write_deps_file__MmcMakeDeps_24, &parse_tree__write_deps_file__MaybeOptsVar_25, &parse_tree__write_deps_file__MaybeTransOptsVar_26, &parse_tree__write_deps_file__MaybeModuleDepsVar_27, &parse_tree__write_deps_file__ExeFileName_28, &parse_tree__write_deps_file__JarFileName_29, &parse_tree__write_deps_file__LibFileName_30, &parse_tree__write_deps_file__SharedLibFileName_31);
    }
#line 1816 "write_deps_file.m"
    {
#line 1816 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__InitCFileName_19, parse_tree__write_deps_file__InitFileName_18, &parse_tree__write_deps_file__DepFileName_32, &parse_tree__write_deps_file__DvFileName_33);
    }
#line 1819 "write_deps_file.m"
    {
#line 1819 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__DepsMap_11, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__MmcMakeDeps_24, parse_tree__write_deps_file__Intermod_22, parse_tree__write_deps_file__TransOpt_23, parse_tree__write_deps_file__MaybeModuleDepsVar_27, parse_tree__write_deps_file__MaybeOptsVar_25, parse_tree__write_deps_file__MaybeTransOptsVar_26);
    }
#line 1822 "write_deps_file.m"
    {
#line 1822 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17);
    }
#line 1824 "write_deps_file.m"
    {
#line 1824 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__ExeFileName_28, parse_tree__write_deps_file__InitCFileName_19, parse_tree__write_deps_file__InitObjFileName_20, parse_tree__write_deps_file__InitPicObjFileName_21, parse_tree__write_deps_file__InitFileName_18, parse_tree__write_deps_file__LibFileName_30, parse_tree__write_deps_file__SharedLibFileName_31, parse_tree__write_deps_file__JarFileName_29, parse_tree__write_deps_file__DepFileName_32, parse_tree__write_deps_file__DvFileName_33);
#line 1824 "write_deps_file.m"
      return;
    }
#line 1776 "write_deps_file.m"
  }
#line 1772 "write_deps_file.m"
}

#line 1710 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__foreign_modules_2_f_0_1(
#line 1710 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1710 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1710 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 1710 "write_deps_file.m"
{
#line 1710 "write_deps_file.m"
  {
#line 1710 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1710 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1710 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_HeadVar__3_16;

#line 1710 "write_deps_file.m"
    {
#line 1710 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1710__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv0_HeadVar__3_16);
    }
#line 1710 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1710 "write_deps_file.m"
      {
#line 1710 "write_deps_file.m"
        *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__3_16));
#line 1710 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 1710 "write_deps_file.m"
      }
#line 1710 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1710 "write_deps_file.m"
  }
#line 1710 "write_deps_file.m"
}

#line 1706 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__foreign_modules_2_f_0(
#line 1706 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_4,
#line 1706 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_5)
#line 1706 "write_deps_file.m"
{
#line 1709 "write_deps_file.m"
  {
#line 1709 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1709 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModules_6;
#line 1709 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__P_7;
#line 1709 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModulesList_14;

#line 1710 "write_deps_file.m"
    {
#line 1710 "write_deps_file.m"
      parse_tree__write_deps_file__P_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1710 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_7, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[4]));
#line 1710 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_7, 1) = ((MR_Box) (parse_tree__write_deps_file__foreign_modules_2_f_0_1));
#line 1710 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1710 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_7, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_5));
#line 1710 "write_deps_file.m"
    }
#line 1718 "write_deps_file.m"
    {
#line 1718 "write_deps_file.m"
      mercury__list__filter_map_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[5], parse_tree__write_deps_file__P_7, parse_tree__write_deps_file__Modules_4, &parse_tree__write_deps_file__ForeignModulesList_14);
    }
#line 1719 "write_deps_file.m"
    {
#line 1719 "write_deps_file.m"
      parse_tree__write_deps_file__ForeignModules_6 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__write_deps_file_scalar_common_2[1], parse_tree__write_deps_file__ForeignModulesList_14);
    }
#line 1709 "write_deps_file.m"
    return parse_tree__write_deps_file__ForeignModules_6;
#line 1709 "write_deps_file.m"
  }
#line 1706 "write_deps_file.m"
}

#line 1686 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__select_ok_modules_3_p_0(
#line 1686 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1686 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_2,
#line 1686 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_3)
#line 1686 "write_deps_file.m"
{
#line 1689 "write_deps_file.m"
  {
#line 1689 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 1689 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1689 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1689 "write_deps_file.m"
    else
#line 1690 "write_deps_file.m"
      {
#line 1690 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_18_18;
#line 1690 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1690 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Modules0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1690 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ModulesTail_9;
#line 1690 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ModuleImports_11;
#line 1690 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Errors_12;
#line 1690 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__FatalErrors_13;
#line 1690 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_14_14;
#line 1690 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_15_15;
#line 1692 "write_deps_file.m"
        MR_Box parse_tree__write_deps_file__conv0_V_14_14;
#line 1692 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_10_10;

#line 1691 "write_deps_file.m"
        {
#line 1691 "write_deps_file.m"
          parse_tree__write_deps_file__select_ok_modules_3_p_0(parse_tree__write_deps_file__Modules0_6, parse_tree__write_deps_file__DepsMap_2, &parse_tree__write_deps_file__ModulesTail_9);
        }
#line 1692 "write_deps_file.m"
        {
#line 1692 "write_deps_file.m"
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_2, ((MR_Box) (parse_tree__write_deps_file__Module_5)), &parse_tree__write_deps_file__conv0_V_14_14);
        }
#line 1692 "write_deps_file.m"
        parse_tree__write_deps_file__V_14_14 = ((MR_Word) parse_tree__write_deps_file__conv0_V_14_14);
#line 1692 "write_deps_file.m"
        parse_tree__write_deps_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, (MR_Integer) 0)));
#line 1692 "write_deps_file.m"
        parse_tree__write_deps_file__ModuleImports_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, (MR_Integer) 1)));
#line 1693 "write_deps_file.m"
        {
#line 1693 "write_deps_file.m"
          parse_tree__module_imports__module_and_imports_get_errors_2_p_0(parse_tree__write_deps_file__ModuleImports_11, &parse_tree__write_deps_file__Errors_12);
        }
#line 1694 "write_deps_file.m"
        {
#line 1694 "write_deps_file.m"
          parse_tree__write_deps_file__V_15_15 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 10882 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1694 "write_deps_file.m"
        {
#line 1694 "write_deps_file.m"
          mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_18_18, parse_tree__write_deps_file__Errors_12, parse_tree__write_deps_file__V_15_15, &parse_tree__write_deps_file__FatalErrors_13);
        }
#line 1695 "write_deps_file.m"
        {
#line 1695 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_18_18, parse_tree__write_deps_file__FatalErrors_13);
        }
#line 1697 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 1696 "write_deps_file.m"
          {
#line 1696 "write_deps_file.m"
            MR_Word base;
#line 1696 "write_deps_file.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1696 "write_deps_file.m"
            *parse_tree__write_deps_file__HeadVar__3_3 = base;
#line 1696 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Module_5));
#line 1696 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__ModulesTail_9));
#line 1696 "write_deps_file.m"
          }
#line 1697 "write_deps_file.m"
        else
#line 1698 "write_deps_file.m"
          *parse_tree__write_deps_file__HeadVar__3_3 = parse_tree__write_deps_file__ModulesTail_9;
#line 1690 "write_deps_file.m"
      }
#line 1689 "write_deps_file.m"
  }
#line 1686 "write_deps_file.m"
}

#line 1361 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_4(
#line 1361 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1361 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1361 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
#line 1361 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
#line 1361 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4)
#line 1361 "write_deps_file.m"
{
#line 1361 "write_deps_file.m"
  {
#line 1361 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1361 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__conv2_HeadVar__3_118;

#line 1361 "write_deps_file.m"
    {
#line 1361 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1361__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv2_HeadVar__3_118);
    }
#line 1361 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv2_HeadVar__3_118));
#line 1361 "write_deps_file.m"
  }
#line 1361 "write_deps_file.m"
}

#line 1312 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_3(
#line 1312 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1312 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 1312 "write_deps_file.m"
{
#line 1312 "write_deps_file.m"
  {
#line 1312 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1312 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 1312 "write_deps_file.m"
    {
#line 1312 "write_deps_file.m"
      return parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1312__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 1312 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1312 "write_deps_file.m"
  }
#line 1312 "write_deps_file.m"
}

#line 1293 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_2(
#line 1293 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1293 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1293 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 1293 "write_deps_file.m"
{
#line 1293 "write_deps_file.m"
  {
#line 1293 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1293 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__conv1_FileName_6;

#line 1293 "write_deps_file.m"
    {
#line 1293 "write_deps_file.m"
      parse_tree__write_deps_file__get_source_file_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv1_FileName_6);
    }
#line 1293 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_FileName_6));
#line 1293 "write_deps_file.m"
  }
#line 1293 "write_deps_file.m"
}

#line 1290 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_1(
#line 1290 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1290 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1290 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 1290 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 1290 "write_deps_file.m"
{
#line 1290 "write_deps_file.m"
  {
#line 1290 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1290 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_Result_6;

#line 1290 "write_deps_file.m"
    {
#line 1290 "write_deps_file.m"
      parse_tree__write_deps_file__compare_module_names_3_p_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_2), &parse_tree__write_deps_file__conv0_Result_6);
    }
#line 1290 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_3 = ((MR_Box) (parse_tree__write_deps_file__conv0_Result_6));
#line 1290 "write_deps_file.m"
  }
#line 1290 "write_deps_file.m"
}

#line 1266 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0(
#line 1266 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1266 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1266 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1266 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1266 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12)
#line 1266 "write_deps_file.m"
{
#line 1270 "write_deps_file.m"
  {
#line 1270 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_489_489;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_496_496;
#line 1270 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleNameString_14;
#line 1270 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Version_15;
#line 1270 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Fullarch_16;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules0_17;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules1_18;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules_19;
#line 1270 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MakeVarName_20;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SourceFiles0_21;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SourceFiles_22;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModulesWithSubModules_23;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Target_27;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModulesAndExts_28;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModules_29;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Gmake_30;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Basis_32;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignBasis_34;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ParentBasis_36;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ExtraLinkObjs_37;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__MakeFileName_38;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignFileNames_44;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__HighLevelCode_45;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_67_67;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_89_89;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_197_197;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_199_199;
#line 1270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_201_201;
#line 1270 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_336_336;
#line 1366 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv3_STATE_VARIABLE_IO_123_123;

#line 1271 "write_deps_file.m"
    {
#line 1271 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Automatically generated dependency variables for module \140");
    }
#line 1273 "write_deps_file.m"
    {
#line 1273 "write_deps_file.m"
      parse_tree__write_deps_file__ModuleNameString_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_10);
    }
#line 1274 "write_deps_file.m"
    {
#line 1274 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleNameString_14);
    }
#line 1275 "write_deps_file.m"
    {
#line 1275 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1276 "write_deps_file.m"
    {
#line 1276 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# generated from source file \140");
    }
#line 1277 "write_deps_file.m"
    {
#line 1277 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__SourceFileName_9);
    }
#line 1278 "write_deps_file.m"
    {
#line 1278 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1280 "write_deps_file.m"
    {
#line 1280 "write_deps_file.m"
      mercury__library__version_2_p_0(&parse_tree__write_deps_file__Version_15, &parse_tree__write_deps_file__Fullarch_16);
    }
#line 1281 "write_deps_file.m"
    {
#line 1281 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Generated by the Mercury compiler, version ");
    }
#line 1283 "write_deps_file.m"
    {
#line 1283 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Version_15);
    }
#line 1284 "write_deps_file.m"
    {
#line 1284 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ",\n# configured for ");
    }
#line 1285 "write_deps_file.m"
    {
#line 1285 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Fullarch_16);
    }
#line 1286 "write_deps_file.m"
    {
#line 1286 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".\n\n");
    }
#line 11190 "parse_tree.write_deps_file.c"
    parse_tree__write_deps_file__TypeCtorInfo_489_489 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1288 "write_deps_file.m"
    {
#line 1288 "write_deps_file.m"
      mercury__map__keys_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_489_489, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__Modules0_17);
    }
#line 1289 "write_deps_file.m"
    {
#line 1289 "write_deps_file.m"
      parse_tree__write_deps_file__select_ok_modules_3_p_0(parse_tree__write_deps_file__Modules0_17, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__Modules1_18);
    }
#line 1290 "write_deps_file.m"
    {
#line 1290 "write_deps_file.m"
      mercury__list__sort_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_489_489, (MR_Word) &parse_tree__write_deps_file_scalar_common_2[7], parse_tree__write_deps_file__Modules1_18, &parse_tree__write_deps_file__Modules_19);
    }
#line 1292 "write_deps_file.m"
    {
#line 1292 "write_deps_file.m"
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1293 "write_deps_file.m"
    {
#line 1293 "write_deps_file.m"
      parse_tree__write_deps_file__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1293 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_67_67, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[3]));
#line 1293 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_67_67, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_2));
#line 1293 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1293 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_67_67, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_11));
#line 1293 "write_deps_file.m"
    }
#line 11226 "parse_tree.write_deps_file.c"
    parse_tree__write_deps_file__TypeCtorInfo_496_496 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1293 "write_deps_file.m"
    {
#line 1293 "write_deps_file.m"
      mercury__list__map_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_489_489, parse_tree__write_deps_file__TypeCtorInfo_496_496, parse_tree__write_deps_file__V_67_67, parse_tree__write_deps_file__Modules_19, &parse_tree__write_deps_file__SourceFiles0_21);
    }
#line 1294 "write_deps_file.m"
    {
#line 1294 "write_deps_file.m"
      mercury__list__sort_and_remove_dups_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_496_496, parse_tree__write_deps_file__SourceFiles0_21, &parse_tree__write_deps_file__SourceFiles_22);
    }
#line 1296 "write_deps_file.m"
    {
#line 1296 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1297 "write_deps_file.m"
    {
#line 1297 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ms =");
    }
#line 1298 "write_deps_file.m"
    {
#line 1298 "write_deps_file.m"
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".m", parse_tree__write_deps_file__SourceFiles_22);
    }
#line 1299 "write_deps_file.m"
    {
#line 1299 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1301 "write_deps_file.m"
    {
#line 1301 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1302 "write_deps_file.m"
    {
#line 1302 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".errs =");
    }
#line 1303 "write_deps_file.m"
    {
#line 1303 "write_deps_file.m"
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".err", parse_tree__write_deps_file__SourceFiles_22);
    }
#line 1304 "write_deps_file.m"
    {
#line 1304 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1306 "write_deps_file.m"
    {
#line 1306 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1307 "write_deps_file.m"
    {
#line 1307 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mods =");
    }
#line 1308 "write_deps_file.m"
    {
#line 1308 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", parse_tree__write_deps_file__Modules_19);
    }
#line 1309 "write_deps_file.m"
    {
#line 1309 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1312 "write_deps_file.m"
    {
#line 1312 "write_deps_file.m"
      parse_tree__write_deps_file__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1312 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_89_89, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[2]));
#line 1312 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_89_89, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_3));
#line 1312 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1312 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_89_89, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_11));
#line 1312 "write_deps_file.m"
    }
#line 1312 "write_deps_file.m"
    {
#line 1312 "write_deps_file.m"
      parse_tree__write_deps_file__ModulesWithSubModules_23 = mercury__list__filter_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_489_489, parse_tree__write_deps_file__V_89_89, parse_tree__write_deps_file__Modules_19);
    }
#line 1317 "write_deps_file.m"
    {
#line 1317 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1318 "write_deps_file.m"
    {
#line 1318 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".parent_mods =");
    }
#line 1319 "write_deps_file.m"
    {
#line 1319 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", parse_tree__write_deps_file__ModulesWithSubModules_23);
    }
#line 1321 "write_deps_file.m"
    {
#line 1321 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1323 "write_deps_file.m"
    {
#line 1323 "write_deps_file.m"
      libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_8, &parse_tree__write_deps_file__Target_27);
    }
#line 1327 "write_deps_file.m"
#line 1327 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Target_27) {
#line 1327 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1327 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1327 "write_deps_file.m"
      case (MR_Integer) 2:
#line 1327 "write_deps_file.m"
      case (MR_Integer) 4:
#line 1327 "write_deps_file.m"
      case (MR_Integer) 3:
#line 1333 "write_deps_file.m"
        parse_tree__write_deps_file__ForeignModulesAndExts_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1327 "write_deps_file.m"
        break;
#line 1327 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1326 "write_deps_file.m"
        {
#line 1326 "write_deps_file.m"
          parse_tree__write_deps_file__ForeignModulesAndExts_28 = parse_tree__write_deps_file__foreign_modules_2_f_0(parse_tree__write_deps_file__Modules_19, parse_tree__write_deps_file__DepsMap_11);
        }
#line 1327 "write_deps_file.m"
        break;
#line 1327 "write_deps_file.m"
    }
#line 1335 "write_deps_file.m"
    {
#line 1335 "write_deps_file.m"
      parse_tree__write_deps_file__ForeignModules_29 = mercury__assoc_list__keys_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_489_489, parse_tree__write_deps_file__TypeCtorInfo_496_496, parse_tree__write_deps_file__ForeignModulesAndExts_28);
    }
#line 1336 "write_deps_file.m"
    {
#line 1336 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1337 "write_deps_file.m"
    {
#line 1337 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign =");
    }
#line 1338 "write_deps_file.m"
    {
#line 1338 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", parse_tree__write_deps_file__ForeignModules_29);
    }
#line 1339 "write_deps_file.m"
    {
#line 1339 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n\n");
    }
#line 1341 "write_deps_file.m"
    {
#line 1341 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 119, &parse_tree__write_deps_file__Gmake_30);
    }
#line 1352 "write_deps_file.m"
#line 1352 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Gmake_30) {
#line 1352 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1352 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1353 "write_deps_file.m"
        {
#line 1354 "write_deps_file.m"
          parse_tree__write_deps_file__Basis_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1355 "write_deps_file.m"
          parse_tree__write_deps_file__ForeignBasis_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1356 "write_deps_file.m"
          parse_tree__write_deps_file__ParentBasis_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1353 "write_deps_file.m"
        }
#line 1352 "write_deps_file.m"
        break;
#line 1352 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1343 "write_deps_file.m"
        {
#line 1343 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__ModsVarName_31;
#line 1343 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__ForeignVarName_33;
#line 1343 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__ParentModsVarName_35;
#line 1343 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_109_109;
#line 1343 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_112_112;
#line 1343 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_115_115;

#line 1344 "write_deps_file.m"
          {
#line 1344 "write_deps_file.m"
            mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_20, (MR_String) ".mods", &parse_tree__write_deps_file__ModsVarName_31);
          }
#line 1345 "write_deps_file.m"
          {
#line 1345 "write_deps_file.m"
            parse_tree__write_deps_file__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1345 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_109_109, 0) = ((MR_Box) (parse_tree__write_deps_file__ModsVarName_31));
#line 1345 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_109_109, 1) = ((MR_Box) ((MR_String) ""));
#line 1345 "write_deps_file.m"
          }
#line 1345 "write_deps_file.m"
          {
#line 1345 "write_deps_file.m"
            parse_tree__write_deps_file__Basis_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1345 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Basis_32, 0) = ((MR_Box) (parse_tree__write_deps_file__V_109_109));
#line 1345 "write_deps_file.m"
          }
#line 1347 "write_deps_file.m"
          {
#line 1347 "write_deps_file.m"
            mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_20, (MR_String) ".foreign", &parse_tree__write_deps_file__ForeignVarName_33);
          }
#line 1348 "write_deps_file.m"
          {
#line 1348 "write_deps_file.m"
            parse_tree__write_deps_file__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1348 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_112_112, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignVarName_33));
#line 1348 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_112_112, 1) = ((MR_Box) ((MR_String) ""));
#line 1348 "write_deps_file.m"
          }
#line 1348 "write_deps_file.m"
          {
#line 1348 "write_deps_file.m"
            parse_tree__write_deps_file__ForeignBasis_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1348 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignBasis_34, 0) = ((MR_Box) (parse_tree__write_deps_file__V_112_112));
#line 1348 "write_deps_file.m"
          }
#line 1350 "write_deps_file.m"
          {
#line 1350 "write_deps_file.m"
            mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_20, (MR_String) ".parent_mods", &parse_tree__write_deps_file__ParentModsVarName_35);
          }
#line 1351 "write_deps_file.m"
          {
#line 1351 "write_deps_file.m"
            parse_tree__write_deps_file__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1351 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_115_115, 0) = ((MR_Box) (parse_tree__write_deps_file__ParentModsVarName_35));
#line 1351 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_115_115, 1) = ((MR_Box) ((MR_String) ""));
#line 1351 "write_deps_file.m"
          }
#line 1351 "write_deps_file.m"
          {
#line 1351 "write_deps_file.m"
            parse_tree__write_deps_file__ParentBasis_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1351 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ParentBasis_36, 0) = ((MR_Box) (parse_tree__write_deps_file__V_115_115));
#line 1351 "write_deps_file.m"
          }
#line 1343 "write_deps_file.m"
        }
#line 1352 "write_deps_file.m"
        break;
#line 1352 "write_deps_file.m"
    }
#line 1359 "write_deps_file.m"
    {
#line 1359 "write_deps_file.m"
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(parse_tree__write_deps_file__Modules_19, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__ExtraLinkObjs_37);
    }
#line 1361 "write_deps_file.m"
    {
#line 1361 "write_deps_file.m"
      parse_tree__write_deps_file__MakeFileName_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1361 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_38, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_10[1]));
#line 1361 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_38, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_4));
#line 1361 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1361 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_38, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_8));
#line 1361 "write_deps_file.m"
    }
#line 1366 "write_deps_file.m"
    {
#line 1366 "write_deps_file.m"
      mercury__list__map_foldl_5_p_2((MR_Word) &parse_tree__write_deps_file_scalar_common_2[1], parse_tree__write_deps_file__TypeCtorInfo_496_496, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__MakeFileName_38, parse_tree__write_deps_file__ForeignModulesAndExts_28, &parse_tree__write_deps_file__ForeignFileNames_44, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv3_STATE_VARIABLE_IO_123_123);
    }
#line 1370 "write_deps_file.m"
    {
#line 1370 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1371 "write_deps_file.m"
    {
#line 1371 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign_cs = ");
    }
#line 1372 "write_deps_file.m"
    {
#line 1372 "write_deps_file.m"
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "", parse_tree__write_deps_file__ForeignFileNames_44);
    }
#line 1373 "write_deps_file.m"
    {
#line 1373 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1376 "write_deps_file.m"
    {
#line 1376 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1377 "write_deps_file.m"
    {
#line 1377 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign_dlls = ");
    }
#line 1378 "write_deps_file.m"
    {
#line 1378 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dlls_subdir)", (MR_String) ".dll", parse_tree__write_deps_file__ForeignBasis_34, parse_tree__write_deps_file__ForeignModules_29);
    }
#line 1380 "write_deps_file.m"
    {
#line 1380 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1382 "write_deps_file.m"
    {
#line 1382 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1383 "write_deps_file.m"
    {
#line 1383 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".init_cs = ");
    }
#line 1384 "write_deps_file.m"
    {
#line 1384 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(cs_subdir)", (MR_String) ".c", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1386 "write_deps_file.m"
    {
#line 1386 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1388 "write_deps_file.m"
    {
#line 1388 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1389 "write_deps_file.m"
    {
#line 1389 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".cs = \044(");
    }
#line 1390 "write_deps_file.m"
    {
#line 1390 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1391 "write_deps_file.m"
    {
#line 1391 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".init_cs) ");
    }
#line 1392 "write_deps_file.m"
    {
#line 1392 "write_deps_file.m"
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) ".c", parse_tree__write_deps_file__ExtraLinkObjs_37);
    }
#line 1394 "write_deps_file.m"
    {
#line 1394 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1396 "write_deps_file.m"
    {
#line 1396 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1397 "write_deps_file.m"
    {
#line 1397 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dlls = ");
    }
#line 1398 "write_deps_file.m"
    {
#line 1398 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dlls_subdir)", (MR_String) ".dll", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1400 "write_deps_file.m"
    {
#line 1400 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1402 "write_deps_file.m"
    {
#line 1402 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1403 "write_deps_file.m"
    {
#line 1403 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_os = ");
    }
#line 1404 "write_deps_file.m"
    {
#line 1404 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(os_subdir)", (MR_String) ".\044O", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1406 "write_deps_file.m"
    {
#line 1406 "write_deps_file.m"
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) ".\044O", parse_tree__write_deps_file__ExtraLinkObjs_37);
    }
#line 1408 "write_deps_file.m"
    {
#line 1408 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1410 "write_deps_file.m"
    {
#line 1410 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1411 "write_deps_file.m"
    {
#line 1411 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_pic_os = ");
    }
#line 1412 "write_deps_file.m"
    {
#line 1412 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(os_subdir)", (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1414 "write_deps_file.m"
    {
#line 1414 "write_deps_file.m"
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)", parse_tree__write_deps_file__ExtraLinkObjs_37);
    }
#line 1416 "write_deps_file.m"
    {
#line 1416 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1418 "write_deps_file.m"
    {
#line 1418 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1419 "write_deps_file.m"
    {
#line 1419 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".os = \044(");
    }
#line 1420 "write_deps_file.m"
    {
#line 1420 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1421 "write_deps_file.m"
    {
#line 1421 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_os)\n");
    }
#line 1423 "write_deps_file.m"
    {
#line 1423 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1424 "write_deps_file.m"
    {
#line 1424 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".pic_os = \044(");
    }
#line 1425 "write_deps_file.m"
    {
#line 1425 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1426 "write_deps_file.m"
    {
#line 1426 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_pic_os)\n");
    }
#line 1437 "write_deps_file.m"
    {
#line 1437 "write_deps_file.m"
      parse_tree__write_deps_file__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 1437 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[114])));
#line 1437 "write_deps_file.m"
    }
#line 1437 "write_deps_file.m"
    {
#line 1437 "write_deps_file.m"
      parse_tree__write_deps_file__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 0) = ((MR_Box) ((MR_String) ".cs_or_ss =\044("));
#line 1437 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 1) = ((MR_Box) (parse_tree__write_deps_file__V_201_201));
#line 1437 "write_deps_file.m"
    }
#line 1437 "write_deps_file.m"
    {
#line 1437 "write_deps_file.m"
      parse_tree__write_deps_file__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1437 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 1437 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 1) = ((MR_Box) (parse_tree__write_deps_file__V_199_199));
#line 1437 "write_deps_file.m"
    }
#line 1436 "write_deps_file.m"
    {
#line 1436 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_197_197);
    }
#line 1440 "write_deps_file.m"
    {
#line 1440 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1441 "write_deps_file.m"
    {
#line 1441 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".useds = ");
    }
#line 1442 "write_deps_file.m"
    {
#line 1442 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(useds_subdir)", (MR_String) ".used", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1444 "write_deps_file.m"
    {
#line 1444 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1446 "write_deps_file.m"
    {
#line 1446 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1447 "write_deps_file.m"
    {
#line 1447 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ils = ");
    }
#line 1448 "write_deps_file.m"
    {
#line 1448 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(ils_subdir)", (MR_String) ".il", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1450 "write_deps_file.m"
    {
#line 1450 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1452 "write_deps_file.m"
    {
#line 1452 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1453 "write_deps_file.m"
    {
#line 1453 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".javas = ");
    }
#line 1454 "write_deps_file.m"
    {
#line 1454 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(javas_subdir)", (MR_String) ".java", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1456 "write_deps_file.m"
    {
#line 1456 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1458 "write_deps_file.m"
    {
#line 1458 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1459 "write_deps_file.m"
    {
#line 1459 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".classes = ");
    }
#line 1460 "write_deps_file.m"
    {
#line 1460 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(classes_subdir)", (MR_String) ".class", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1462 "write_deps_file.m"
    {
#line 1462 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) " ");
    }
#line 1469 "write_deps_file.m"
    {
#line 1469 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(wildcard ");
    }
#line 1470 "write_deps_file.m"
    {
#line 1470 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(classes_subdir)", (MR_String) "\\\044\044*.class", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1472 "write_deps_file.m"
    {
#line 1472 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ")\n");
    }
#line 1474 "write_deps_file.m"
    {
#line 1474 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1475 "write_deps_file.m"
    {
#line 1475 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dirs = ");
    }
#line 1476 "write_deps_file.m"
    {
#line 1476 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dirs_subdir)", (MR_String) ".dir", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1478 "write_deps_file.m"
    {
#line 1478 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1480 "write_deps_file.m"
    {
#line 1480 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1481 "write_deps_file.m"
    {
#line 1481 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dir_os = ");
    }
#line 1482 "write_deps_file.m"
    {
#line 1482 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dirs_subdir)", (MR_String) ".dir/*.\044O", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1484 "write_deps_file.m"
    {
#line 1484 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1486 "write_deps_file.m"
    {
#line 1486 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1487 "write_deps_file.m"
    {
#line 1487 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dates = ");
    }
#line 1488 "write_deps_file.m"
    {
#line 1488 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dates_subdir)", (MR_String) ".date", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1490 "write_deps_file.m"
    {
#line 1490 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1492 "write_deps_file.m"
    {
#line 1492 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1493 "write_deps_file.m"
    {
#line 1493 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".date0s = ");
    }
#line 1494 "write_deps_file.m"
    {
#line 1494 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(date0s_subdir)", (MR_String) ".date0", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1496 "write_deps_file.m"
    {
#line 1496 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1498 "write_deps_file.m"
    {
#line 1498 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1499 "write_deps_file.m"
    {
#line 1499 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".date3s = ");
    }
#line 1500 "write_deps_file.m"
    {
#line 1500 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(date3s_subdir)", (MR_String) ".date3", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1502 "write_deps_file.m"
    {
#line 1502 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1504 "write_deps_file.m"
    {
#line 1504 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1505 "write_deps_file.m"
    {
#line 1505 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".optdates = ");
    }
#line 1506 "write_deps_file.m"
    {
#line 1506 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(optdates_subdir)", (MR_String) ".optdate", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1508 "write_deps_file.m"
    {
#line 1508 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1510 "write_deps_file.m"
    {
#line 1510 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1511 "write_deps_file.m"
    {
#line 1511 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".trans_opt_dates = ");
    }
#line 1512 "write_deps_file.m"
    {
#line 1512 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(trans_opt_dates_subdir)", (MR_String) ".trans_opt_date", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1514 "write_deps_file.m"
    {
#line 1514 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1516 "write_deps_file.m"
    {
#line 1516 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1517 "write_deps_file.m"
    {
#line 1517 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".c_dates = ");
    }
#line 1518 "write_deps_file.m"
    {
#line 1518 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(c_dates_subdir)", (MR_String) ".c_date", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1520 "write_deps_file.m"
    {
#line 1520 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1522 "write_deps_file.m"
    {
#line 1522 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1523 "write_deps_file.m"
    {
#line 1523 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".il_dates = ");
    }
#line 1524 "write_deps_file.m"
    {
#line 1524 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(il_dates_subdir)", (MR_String) ".il_date", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1526 "write_deps_file.m"
    {
#line 1526 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1528 "write_deps_file.m"
    {
#line 1528 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1529 "write_deps_file.m"
    {
#line 1529 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".java_dates = ");
    }
#line 1530 "write_deps_file.m"
    {
#line 1530 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(java_dates_subdir)", (MR_String) ".java_date", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1532 "write_deps_file.m"
    {
#line 1532 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1534 "write_deps_file.m"
    {
#line 1534 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1535 "write_deps_file.m"
    {
#line 1535 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ds = ");
    }
#line 1536 "write_deps_file.m"
    {
#line 1536 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(ds_subdir)", (MR_String) ".d", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1538 "write_deps_file.m"
    {
#line 1538 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1540 "write_deps_file.m"
    {
#line 1540 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1541 "write_deps_file.m"
    {
#line 1541 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".module_deps = ");
    }
#line 1543 "write_deps_file.m"
    {
#line 1543 "write_deps_file.m"
      parse_tree__write_deps_file__V_336_336 = make__make_module_dep_file_extension_0_f_0();
    }
#line 1542 "write_deps_file.m"
    {
#line 1542 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(module_deps_subdir)", parse_tree__write_deps_file__V_336_336, parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1545 "write_deps_file.m"
    {
#line 1545 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1547 "write_deps_file.m"
    {
#line 1547 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1548 "write_deps_file.m"
    {
#line 1548 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mihs = ");
    }
#line 1549 "write_deps_file.m"
    {
#line 1549 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 256, &parse_tree__write_deps_file__HighLevelCode_45);
    }
#line 1567 "write_deps_file.m"
#line 1567 "write_deps_file.m"
    switch (parse_tree__write_deps_file__HighLevelCode_45) {
#line 1567 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1567 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1569 "write_deps_file.m"
        {
#line 1569 "write_deps_file.m"
        }
#line 1567 "write_deps_file.m"
        break;
#line 1567 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1558 "write_deps_file.m"
#line 1558 "write_deps_file.m"
        switch (parse_tree__write_deps_file__Target_27) {
#line 1558 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1558 "write_deps_file.m"
          case (MR_Integer) 0:
#line 1553 "write_deps_file.m"
            {
#line 1556 "write_deps_file.m"
              {
#line 1556 "write_deps_file.m"
                parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(mihs_subdir)", (MR_String) ".mih", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
              }
#line 1553 "write_deps_file.m"
            }
#line 1558 "write_deps_file.m"
            break;
#line 1558 "write_deps_file.m"
          case (MR_Integer) 2:
#line 1562 "write_deps_file.m"
            {
#line 1562 "write_deps_file.m"
            }
#line 1558 "write_deps_file.m"
            break;
#line 1558 "write_deps_file.m"
          case (MR_Integer) 4:
#line 1564 "write_deps_file.m"
            {
#line 1564 "write_deps_file.m"
            }
#line 1558 "write_deps_file.m"
            break;
#line 1558 "write_deps_file.m"
          case (MR_Integer) 1:
#line 1561 "write_deps_file.m"
            {
#line 1561 "write_deps_file.m"
            }
#line 1558 "write_deps_file.m"
            break;
#line 1558 "write_deps_file.m"
          case (MR_Integer) 3:
#line 1563 "write_deps_file.m"
            {
#line 1563 "write_deps_file.m"
            }
#line 1558 "write_deps_file.m"
            break;
#line 1558 "write_deps_file.m"
        }
#line 1567 "write_deps_file.m"
        break;
#line 1567 "write_deps_file.m"
    }
#line 1571 "write_deps_file.m"
    {
#line 1571 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1573 "write_deps_file.m"
    {
#line 1573 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1574 "write_deps_file.m"
    {
#line 1574 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mhs = ");
    }
#line 1579 "write_deps_file.m"
#line 1579 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Target_27) {
#line 1579 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1579 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1576 "write_deps_file.m"
        {
#line 1577 "write_deps_file.m"
          {
#line 1577 "write_deps_file.m"
            parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", (MR_String) ".mh", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
          }
#line 1576 "write_deps_file.m"
        }
#line 1579 "write_deps_file.m"
        break;
#line 1579 "write_deps_file.m"
      case (MR_Integer) 2:
#line 1581 "write_deps_file.m"
        {
#line 1581 "write_deps_file.m"
        }
#line 1579 "write_deps_file.m"
        break;
#line 1579 "write_deps_file.m"
      case (MR_Integer) 4:
#line 1583 "write_deps_file.m"
        {
#line 1583 "write_deps_file.m"
        }
#line 1579 "write_deps_file.m"
        break;
#line 1579 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1580 "write_deps_file.m"
        {
#line 1580 "write_deps_file.m"
        }
#line 1579 "write_deps_file.m"
        break;
#line 1579 "write_deps_file.m"
      case (MR_Integer) 3:
#line 1582 "write_deps_file.m"
        {
#line 1582 "write_deps_file.m"
        }
#line 1579 "write_deps_file.m"
        break;
#line 1579 "write_deps_file.m"
    }
#line 1586 "write_deps_file.m"
    {
#line 1586 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1594 "write_deps_file.m"
    {
#line 1594 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1595 "write_deps_file.m"
    {
#line 1595 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_mihs = ");
    }
#line 1596 "write_deps_file.m"
    {
#line 1596 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(mihs_subdir)", (MR_String) ".mih", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1598 "write_deps_file.m"
    {
#line 1598 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1603 "write_deps_file.m"
    {
#line 1603 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1604 "write_deps_file.m"
    {
#line 1604 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_mhs = ");
    }
#line 1605 "write_deps_file.m"
    {
#line 1605 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", (MR_String) ".mh", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1607 "write_deps_file.m"
    {
#line 1607 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1609 "write_deps_file.m"
    {
#line 1609 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1610 "write_deps_file.m"
    {
#line 1610 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ints = ");
    }
#line 1611 "write_deps_file.m"
    {
#line 1611 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(ints_subdir)", (MR_String) ".int", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1613 "write_deps_file.m"
    {
#line 1613 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Basis_32);
    }
#line 1614 "write_deps_file.m"
    {
#line 1614 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(int2s_subdir)", (MR_String) ".int2", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1616 "write_deps_file.m"
    {
#line 1616 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1623 "write_deps_file.m"
    {
#line 1623 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1624 "write_deps_file.m"
    {
#line 1624 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".int0s = ");
    }
#line 1625 "write_deps_file.m"
    {
#line 1625 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(int0s_subdir)", (MR_String) ".int0", parse_tree__write_deps_file__ParentBasis_36, parse_tree__write_deps_file__ModulesWithSubModules_23);
    }
#line 1627 "write_deps_file.m"
    {
#line 1627 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1636 "write_deps_file.m"
    {
#line 1636 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1637 "write_deps_file.m"
    {
#line 1637 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_int0s = ");
    }
#line 1638 "write_deps_file.m"
    {
#line 1638 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(int0s_subdir)", (MR_String) ".int0", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1640 "write_deps_file.m"
    {
#line 1640 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1642 "write_deps_file.m"
    {
#line 1642 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1643 "write_deps_file.m"
    {
#line 1643 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".int3s = ");
    }
#line 1644 "write_deps_file.m"
    {
#line 1644 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(int3s_subdir)", (MR_String) ".int3", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1646 "write_deps_file.m"
    {
#line 1646 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1648 "write_deps_file.m"
    {
#line 1648 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1649 "write_deps_file.m"
    {
#line 1649 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".opts = ");
    }
#line 1650 "write_deps_file.m"
    {
#line 1650 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(opts_subdir)", (MR_String) ".opt", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1652 "write_deps_file.m"
    {
#line 1652 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1654 "write_deps_file.m"
    {
#line 1654 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1655 "write_deps_file.m"
    {
#line 1655 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".trans_opts = ");
    }
#line 1656 "write_deps_file.m"
    {
#line 1656 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(trans_opts_subdir)", (MR_String) ".trans_opt", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1658 "write_deps_file.m"
    {
#line 1658 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1660 "write_deps_file.m"
    {
#line 1660 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1661 "write_deps_file.m"
    {
#line 1661 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".analysiss = ");
    }
#line 1662 "write_deps_file.m"
    {
#line 1662 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(analysiss_subdir)", (MR_String) ".analysis", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1664 "write_deps_file.m"
    {
#line 1664 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1666 "write_deps_file.m"
    {
#line 1666 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1667 "write_deps_file.m"
    {
#line 1667 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".requests = ");
    }
#line 1668 "write_deps_file.m"
    {
#line 1668 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(requests_subdir)", (MR_String) ".request", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1670 "write_deps_file.m"
    {
#line 1670 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1672 "write_deps_file.m"
    {
#line 1672 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1673 "write_deps_file.m"
    {
#line 1673 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".imdgs = ");
    }
#line 1674 "write_deps_file.m"
    {
#line 1674 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(imdgs_subdir)", (MR_String) ".imdg", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1676 "write_deps_file.m"
    {
#line 1676 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1678 "write_deps_file.m"
    {
#line 1678 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1679 "write_deps_file.m"
    {
#line 1679 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".profs = ");
    }
#line 1680 "write_deps_file.m"
    {
#line 1680 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", (MR_String) ".prof", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1682 "write_deps_file.m"
    {
#line 1682 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n\n");
#line 1682 "write_deps_file.m"
      return;
    }
#line 1270 "write_deps_file.m"
  }
#line 1266 "write_deps_file.m"
}

#line 1203 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1(
#line 1203 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1203 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1203 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 1203 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 1203 "write_deps_file.m"
{
#line 1203 "write_deps_file.m"
  {
#line 1203 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1203 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_HeadVar__4_17;

#line 1203 "write_deps_file.m"
    {
#line 1203 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1203__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_2), &parse_tree__write_deps_file__conv0_HeadVar__4_17);
    }
#line 1203 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_3 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__4_17));
#line 1203 "write_deps_file.m"
  }
#line 1203 "write_deps_file.m"
}

#line 1197 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(
#line 1197 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsGraph0_4,
#line 1197 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_5,
#line 1197 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__Dependencies_6)
#line 1197 "write_deps_file.m"
{
#line 1200 "write_deps_file.m"
  {
#line 1200 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1200 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_22_22 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1200 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleKey_7;
#line 1200 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DepsGraph_8;
#line 1200 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DepsKeysSet_9;
#line 1200 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__AddKeyDep_10;
#line 1200 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_18_18;
#line 1208 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv1_Dependencies_6;

#line 1201 "write_deps_file.m"
    {
#line 1201 "write_deps_file.m"
      mercury__digraph__add_vertex_4_p_0(parse_tree__write_deps_file__TypeCtorInfo_22_22, ((MR_Box) (parse_tree__write_deps_file__ModuleName_5)), &parse_tree__write_deps_file__ModuleKey_7, parse_tree__write_deps_file__DepsGraph0_4, &parse_tree__write_deps_file__DepsGraph_8);
    }
#line 1202 "write_deps_file.m"
    {
#line 1202 "write_deps_file.m"
      mercury__digraph__lookup_key_set_from_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_22_22, parse_tree__write_deps_file__DepsGraph_8, parse_tree__write_deps_file__ModuleKey_7, &parse_tree__write_deps_file__DepsKeysSet_9);
    }
#line 1203 "write_deps_file.m"
    {
#line 1203 "write_deps_file.m"
      parse_tree__write_deps_file__AddKeyDep_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1203 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__AddKeyDep_10, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_9[1]));
#line 1203 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__AddKeyDep_10, 1) = ((MR_Box) (parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1));
#line 1203 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__AddKeyDep_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1203 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__AddKeyDep_10, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsGraph_8));
#line 1203 "write_deps_file.m"
    }
#line 1208 "write_deps_file.m"
    {
#line 1208 "write_deps_file.m"
      parse_tree__write_deps_file__V_18_18 = mercury__set__init_0_f_0(parse_tree__write_deps_file__TypeCtorInfo_22_22);
    }
#line 1208 "write_deps_file.m"
    {
#line 1208 "write_deps_file.m"
      mercury__sparse_bitset__foldl_4_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[0], parse_tree__write_deps_file__AddKeyDep_10, parse_tree__write_deps_file__DepsKeysSet_9, ((MR_Box) (parse_tree__write_deps_file__V_18_18)), &parse_tree__write_deps_file__conv1_Dependencies_6);
    }
#line 1208 "write_deps_file.m"
    *parse_tree__write_deps_file__Dependencies_6 = ((MR_Word) parse_tree__write_deps_file__conv1_Dependencies_6);
#line 1200 "write_deps_file.m"
  }
#line 1197 "write_deps_file.m"
}

#line 1084 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(
#line 1084 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 1084 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 1084 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 1084 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Ext_10)
#line 1084 "write_deps_file.m"
{
#line 1087 "write_deps_file.m"
  {
#line 1087 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1087 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleStr_12;
#line 1087 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Target_13;
#line 1087 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ShorthandTarget_14;

#line 1088 "write_deps_file.m"
    {
#line 1088 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__write_deps_file__ModuleName_9, &parse_tree__write_deps_file__ModuleStr_12);
    }
#line 1089 "write_deps_file.m"
    {
#line 1089 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__Ext_10, (MR_Integer) 1, &parse_tree__write_deps_file__Target_13);
    }
#line 1091 "write_deps_file.m"
    {
#line 1091 "write_deps_file.m"
      parse_tree__write_deps_file__ShorthandTarget_14 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleStr_12, parse_tree__write_deps_file__Ext_10);
    }
#line 1092 "write_deps_file.m"
    {
#line 1092 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) ".PHONY: ");
    }
#line 1093 "write_deps_file.m"
    {
#line 1093 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__ShorthandTarget_14);
    }
#line 1094 "write_deps_file.m"
    {
#line 1094 "write_deps_file.m"
      mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_8);
    }
#line 1095 "write_deps_file.m"
    {
#line 1095 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__ShorthandTarget_14);
    }
#line 1096 "write_deps_file.m"
    {
#line 1096 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) ": ");
    }
#line 1097 "write_deps_file.m"
    {
#line 1097 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Target_13);
    }
#line 1098 "write_deps_file.m"
    {
#line 1098 "write_deps_file.m"
      mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_8);
#line 1098 "write_deps_file.m"
      return;
    }
#line 1087 "write_deps_file.m"
  }
#line 1084 "write_deps_file.m"
}

#line 1060 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0_1(
#line 1060 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1060 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 1060 "write_deps_file.m"
{
#line 1060 "write_deps_file.m"
  {
#line 1060 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 1060 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1060 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_HeadVar__3_64;

#line 1060 "write_deps_file.m"
    {
#line 1060 "write_deps_file.m"
      parse_tree__write_deps_file__conv0_HeadVar__3_64 = parse_tree__write_deps_file__IntroducedFrom__func__write_foreign_dependency_for_il__1062__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 1060 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__3_64));
#line 1060 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 1060 "write_deps_file.m"
  }
#line 1060 "write_deps_file.m"
}

#line 1016 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0(
#line 1016 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 1016 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_10,
#line 1016 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_11,
#line 1016 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__AllDeps_12,
#line 1016 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImports_13,
#line 1016 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignLang_14)
#line 1016 "write_deps_file.m"
{
#line 1075 "write_deps_file.m"
  {
#line 1075 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1075 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModuleName_16;
#line 1075 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ForeignExt_17;

#line 1023 "write_deps_file.m"
    {
#line 1023 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(parse_tree__write_deps_file__ModuleName_11, parse_tree__write_deps_file__ForeignLang_14, &parse_tree__write_deps_file__ForeignModuleName_16);
    }
#line 1024 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1025 "write_deps_file.m"
      {
#line 1025 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(parse_tree__write_deps_file__ForeignLang_14, &parse_tree__write_deps_file__ForeignExt_17);
      }
#line 1075 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1028 "write_deps_file.m"
      {
#line 1028 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ForeignModuleNameString_18;
#line 1028 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ForeignFileName_19;
#line 1028 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IlFileName_20;
#line 1028 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DllFileName_21;
#line 1028 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ForeignDllFileName_22;
#line 1028 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_40_40;
#line 1028 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_42_42;
#line 1028 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_44_44;
#line 1028 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_47_47;
#line 1028 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_49_49;
#line 1028 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_51_51;

#line 1027 "write_deps_file.m"
        {
#line 1027 "write_deps_file.m"
          parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ForeignModuleName_16, &parse_tree__write_deps_file__ForeignModuleNameString_18);
        }
#line 1029 "write_deps_file.m"
        {
#line 1029 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ForeignModuleName_16, parse_tree__write_deps_file__ForeignExt_17, (MR_Integer) 1, &parse_tree__write_deps_file__ForeignFileName_19);
        }
#line 1031 "write_deps_file.m"
        {
#line 1031 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ModuleName_11, (MR_String) ".il", (MR_Integer) 1, &parse_tree__write_deps_file__IlFileName_20);
        }
#line 1033 "write_deps_file.m"
        {
#line 1033 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ModuleName_11, (MR_String) ".dll", (MR_Integer) 1, &parse_tree__write_deps_file__DllFileName_21);
        }
#line 1035 "write_deps_file.m"
        {
#line 1035 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ForeignModuleName_16, (MR_String) ".dll", (MR_Integer) 1, &parse_tree__write_deps_file__ForeignDllFileName_22);
        }
#line 1039 "write_deps_file.m"
        {
#line 1039 "write_deps_file.m"
          parse_tree__write_deps_file__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_44_44, 0) = ((MR_Box) (parse_tree__write_deps_file__DllFileName_21));
#line 1039 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1039 "write_deps_file.m"
        }
#line 1039 "write_deps_file.m"
        {
#line 1039 "write_deps_file.m"
          parse_tree__write_deps_file__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 0) = ((MR_Box) ((MR_String) " : "));
#line 1039 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 1) = ((MR_Box) (parse_tree__write_deps_file__V_44_44));
#line 1039 "write_deps_file.m"
        }
#line 1039 "write_deps_file.m"
        {
#line 1039 "write_deps_file.m"
          parse_tree__write_deps_file__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_40_40, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignDllFileName_22));
#line 1039 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_40_40, 1) = ((MR_Box) (parse_tree__write_deps_file__V_42_42));
#line 1039 "write_deps_file.m"
        }
#line 1038 "write_deps_file.m"
        {
#line 1038 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__V_40_40);
        }
#line 1043 "write_deps_file.m"
        {
#line 1043 "write_deps_file.m"
          mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_10);
        }
#line 1046 "write_deps_file.m"
        {
#line 1046 "write_deps_file.m"
          parse_tree__write_deps_file__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_51_51, 0) = ((MR_Box) (parse_tree__write_deps_file__IlFileName_20));
#line 1046 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[112])));
#line 1046 "write_deps_file.m"
        }
#line 1046 "write_deps_file.m"
        {
#line 1046 "write_deps_file.m"
          parse_tree__write_deps_file__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 0) = ((MR_Box) ((MR_String) " : "));
#line 1046 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 1) = ((MR_Box) (parse_tree__write_deps_file__V_51_51));
#line 1046 "write_deps_file.m"
        }
#line 1046 "write_deps_file.m"
        {
#line 1046 "write_deps_file.m"
          parse_tree__write_deps_file__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1046 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignFileName_19));
#line 1046 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 1) = ((MR_Box) (parse_tree__write_deps_file__V_49_49));
#line 1046 "write_deps_file.m"
        }
#line 1045 "write_deps_file.m"
        {
#line 1045 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__V_47_47);
        }
#line 1068 "write_deps_file.m"
#line 1068 "write_deps_file.m"
        switch (parse_tree__write_deps_file__ForeignLang_14) {
#line 1068 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1068 "write_deps_file.m"
          case (MR_Integer) 0:
#line 1069 "write_deps_file.m"
            {
#line 1069 "write_deps_file.m"
            }
#line 1068 "write_deps_file.m"
            break;
#line 1068 "write_deps_file.m"
          case (MR_Integer) 1:
#line 1049 "write_deps_file.m"
            {
#line 1049 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__TypeCtorInfo_71_71;
#line 1049 "write_deps_file.m"
              MR_String parse_tree__write_deps_file__Prefix_23;
#line 1049 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__ForeignDeps_24;
#line 1049 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__Deps_26;
#line 1049 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_55_55;
#line 1049 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_58_58;
#line 1049 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_62_62;
#line 1049 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_65_65;
#line 1049 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_67_67;

#line 1054 "write_deps_file.m"
              {
#line 1054 "write_deps_file.m"
                parse_tree__write_deps_file__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1054 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignModuleNameString_18));
#line 1054 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[113])));
#line 1054 "write_deps_file.m"
              }
#line 1054 "write_deps_file.m"
              {
#line 1054 "write_deps_file.m"
                parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1054 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) "CSHARP_ASSEMBLY_REFS-"));
#line 1054 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_58_58));
#line 1054 "write_deps_file.m"
              }
#line 1053 "write_deps_file.m"
              {
#line 1053 "write_deps_file.m"
                mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__V_55_55);
              }
#line 1055 "write_deps_file.m"
              {
#line 1055 "write_deps_file.m"
                parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__ModuleName_11);
              }
#line 1057 "write_deps_file.m"
              if (parse_tree__write_deps_file__succeeded)
#line 1056 "write_deps_file.m"
                parse_tree__write_deps_file__Prefix_23 = (MR_String) "/addmodule:";
#line 1057 "write_deps_file.m"
              else
#line 1058 "write_deps_file.m"
                parse_tree__write_deps_file__Prefix_23 = (MR_String) "/r:";
#line 12980 "parse_tree.write_deps_file.c"
              parse_tree__write_deps_file__TypeCtorInfo_71_71 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1060 "write_deps_file.m"
              {
#line 1060 "write_deps_file.m"
                parse_tree__write_deps_file__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1060 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_62_62, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
#line 1060 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_62_62, 1) = ((MR_Box) (parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0_1));
#line 1060 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1060 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_62_62, 3) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_11));
#line 1060 "write_deps_file.m"
              }
#line 1060 "write_deps_file.m"
              {
#line 1060 "write_deps_file.m"
                parse_tree__write_deps_file__ForeignDeps_24 = mercury__set__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, parse_tree__write_deps_file__TypeCtorInfo_71_71, parse_tree__write_deps_file__V_62_62, parse_tree__write_deps_file__ForeignImports_13);
              }
#line 1064 "write_deps_file.m"
              {
#line 1064 "write_deps_file.m"
                mercury__set__union_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_71_71, parse_tree__write_deps_file__ForeignDeps_24, parse_tree__write_deps_file__AllDeps_12, &parse_tree__write_deps_file__Deps_26);
              }
#line 1066 "write_deps_file.m"
              {
#line 1066 "write_deps_file.m"
                parse_tree__write_deps_file__V_67_67 = parse_tree__write_deps_file__referenced_dlls_2_f_0(parse_tree__write_deps_file__ModuleName_11, parse_tree__write_deps_file__Deps_26);
              }
#line 1066 "write_deps_file.m"
              {
#line 1066 "write_deps_file.m"
                parse_tree__write_deps_file__V_65_65 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_71_71, parse_tree__write_deps_file__V_67_67);
              }
#line 1065 "write_deps_file.m"
              {
#line 1065 "write_deps_file.m"
                parse_tree__write_deps_file__write_dll_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Prefix_23, parse_tree__write_deps_file__V_65_65);
              }
#line 1067 "write_deps_file.m"
              {
#line 1067 "write_deps_file.m"
                mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_10);
#line 1067 "write_deps_file.m"
                return;
              }
#line 1049 "write_deps_file.m"
            }
#line 1068 "write_deps_file.m"
            break;
#line 1068 "write_deps_file.m"
          case (MR_Integer) 4:
#line 1072 "write_deps_file.m"
            {
#line 1072 "write_deps_file.m"
            }
#line 1068 "write_deps_file.m"
            break;
#line 1068 "write_deps_file.m"
          case (MR_Integer) 3:
#line 1071 "write_deps_file.m"
            {
#line 1071 "write_deps_file.m"
            }
#line 1068 "write_deps_file.m"
            break;
#line 1068 "write_deps_file.m"
          case (MR_Integer) 2:
#line 1070 "write_deps_file.m"
            {
#line 1070 "write_deps_file.m"
            }
#line 1068 "write_deps_file.m"
            break;
#line 1068 "write_deps_file.m"
        }
#line 1028 "write_deps_file.m"
      }
#line 1075 "write_deps_file.m"
    else
#line 1075 "write_deps_file.m"
      {
#line 1075 "write_deps_file.m"
      }
#line 1075 "write_deps_file.m"
  }
#line 1016 "write_deps_file.m"
}

#line 991 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(
#line 991 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_1,
#line 991 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_2,
#line 991 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3)
#line 991 "write_deps_file.m"
{
#line 994 "write_deps_file.m"
  while (MR_TRUE)
#line 994 "write_deps_file.m"
    {
#line 994 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 994 "write_deps_file.m"
      {
#line 994 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 994 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 994 "write_deps_file.m"
          {
#line 994 "write_deps_file.m"
          }
#line 994 "write_deps_file.m"
        else
#line 995 "write_deps_file.m"
          {
#line 995 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_13 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 0)));
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FileNames_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 1)));

#line 996 "write_deps_file.m"
            {
#line 996 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_1, (MR_String) " \\\n\t");
            }
#line 997 "write_deps_file.m"
            {
#line 997 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_1, parse_tree__write_deps_file__FileName_13);
            }
#line 998 "write_deps_file.m"
            {
#line 998 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_1, parse_tree__write_deps_file__Suffix_2);
            }
#line 999 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 999 "write_deps_file.m"
            {
#line 999 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__3__tmp_copy_3 = parse_tree__write_deps_file__FileNames_14;

#line 999 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__3_3 = parse_tree__write_deps_file__HeadVar__3__tmp_copy_3;
#line 999 "write_deps_file.m"
            }
#line 999 "write_deps_file.m"
            continue;
#line 995 "write_deps_file.m"
          }
#line 994 "write_deps_file.m"
      }
#line 994 "write_deps_file.m"
      break;
#line 994 "write_deps_file.m"
    }
#line 991 "write_deps_file.m"
}

#line 978 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(
#line 978 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 978 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_2,
#line 978 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 978 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4)
#line 978 "write_deps_file.m"
{
#line 981 "write_deps_file.m"
  while (MR_TRUE)
#line 981 "write_deps_file.m"
    {
#line 981 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 981 "write_deps_file.m"
      {
#line 981 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 981 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 981 "write_deps_file.m"
          {
#line 981 "write_deps_file.m"
          }
#line 981 "write_deps_file.m"
        else
#line 983 "write_deps_file.m"
          {
#line 983 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__ExtraLink_16;
#line 983 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_17;
#line 983 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ExtraLinks_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 1)));
#line 983 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_20;
#line 983 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 0)));

#line 983 "write_deps_file.m"
            parse_tree__write_deps_file__ExtraLink_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_23_23, (MR_Integer) 0)));
#line 983 "write_deps_file.m"
            parse_tree__write_deps_file__Module_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_23_23, (MR_Integer) 1)));
#line 984 "write_deps_file.m"
            {
#line 984 "write_deps_file.m"
              parse_tree__file_names__extra_link_obj_file_name_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_17, parse_tree__write_deps_file__ExtraLink_16, parse_tree__write_deps_file__Suffix_3, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_20);
            }
#line 986 "write_deps_file.m"
            {
#line 986 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, (MR_String) " \\\n\t");
            }
#line 987 "write_deps_file.m"
            {
#line 987 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, parse_tree__write_deps_file__FileName_20);
            }
#line 988 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 988 "write_deps_file.m"
            {
#line 988 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__4__tmp_copy_4 = parse_tree__write_deps_file__ExtraLinks_18;

#line 988 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__4_4 = parse_tree__write_deps_file__HeadVar__4__tmp_copy_4;
#line 988 "write_deps_file.m"
            }
#line 988 "write_deps_file.m"
            continue;
#line 983 "write_deps_file.m"
          }
#line 981 "write_deps_file.m"
      }
#line 981 "write_deps_file.m"
      break;
#line 981 "write_deps_file.m"
    }
#line 978 "write_deps_file.m"
}

#line 965 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(
#line 965 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 965 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_2,
#line 965 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 965 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 965 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__5_5)
#line 965 "write_deps_file.m"
{
#line 968 "write_deps_file.m"
  while (MR_TRUE)
#line 968 "write_deps_file.m"
    {
#line 968 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 968 "write_deps_file.m"
      {
#line 968 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 968 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 968 "write_deps_file.m"
          {
#line 968 "write_deps_file.m"
          }
#line 968 "write_deps_file.m"
        else
#line 970 "write_deps_file.m"
          {
#line 970 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FactTable_19 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 0)));
#line 970 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FactTables_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 1)));
#line 970 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_22;

#line 971 "write_deps_file.m"
            {
#line 971 "write_deps_file.m"
              parse_tree__file_names__fact_table_file_name_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_4, parse_tree__write_deps_file__FactTable_19, parse_tree__write_deps_file__Suffix_3, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_22);
            }
#line 973 "write_deps_file.m"
            {
#line 973 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, (MR_String) " \\\n\t");
            }
#line 974 "write_deps_file.m"
            {
#line 974 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, parse_tree__write_deps_file__FileName_22);
            }
#line 975 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 975 "write_deps_file.m"
            {
#line 975 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__5__tmp_copy_5 = parse_tree__write_deps_file__FactTables_20;

#line 975 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__5_5 = parse_tree__write_deps_file__HeadVar__5__tmp_copy_5;
#line 975 "write_deps_file.m"
            }
#line 975 "write_deps_file.m"
            continue;
#line 970 "write_deps_file.m"
          }
#line 968 "write_deps_file.m"
      }
#line 968 "write_deps_file.m"
      break;
#line 968 "write_deps_file.m"
    }
#line 965 "write_deps_file.m"
}

#line 955 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependency_5_p_0(
#line 955 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 955 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 955 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFile_8)
#line 955 "write_deps_file.m"
{
#line 959 "write_deps_file.m"
  {
#line 959 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 959 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__IncludeFileName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IncludeFile_8, (MR_Integer) 1)));
#line 959 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__IncludePath_12;
#line 960 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IncludeFile_8, (MR_Integer) 0)));

#line 961 "write_deps_file.m"
    {
#line 961 "write_deps_file.m"
      parse_tree__file_names__make_include_file_path_3_p_0(parse_tree__write_deps_file__SourceFileName_7, parse_tree__write_deps_file__IncludeFileName_11, &parse_tree__write_deps_file__IncludePath_12);
    }
#line 962 "write_deps_file.m"
    {
#line 962 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_6, (MR_String) " \\\n\t");
    }
#line 963 "write_deps_file.m"
    {
#line 963 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_6, parse_tree__write_deps_file__IncludePath_12);
#line 963 "write_deps_file.m"
      return;
    }
#line 959 "write_deps_file.m"
  }
#line 955 "write_deps_file.m"
}

#line 952 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0_1(
#line 952 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 952 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 952 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 952 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 952 "write_deps_file.m"
{
#line 952 "write_deps_file.m"
  {
#line 952 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 952 "write_deps_file.m"
    {
#line 952 "write_deps_file.m"
      parse_tree__write_deps_file__write_foreign_include_file_dependency_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 952 "write_deps_file.m"
      return;
    }
#line 952 "write_deps_file.m"
  }
#line 952 "write_deps_file.m"
}

#line 946 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0(
#line 946 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 946 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 946 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFiles_8)
#line 946 "write_deps_file.m"
{
#line 950 "write_deps_file.m"
  {
#line 950 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 950 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_12_12;
#line 951 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_11;

#line 952 "write_deps_file.m"
    {
#line 952 "write_deps_file.m"
      parse_tree__write_deps_file__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 952 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_10[0]));
#line 952 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 1) = ((MR_Box) (parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0_1));
#line 952 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 952 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 3) = ((MR_Box) (parse_tree__write_deps_file__DepStream_6));
#line 952 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 4) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_7));
#line 952 "write_deps_file.m"
    }
#line 951 "write_deps_file.m"
    {
#line 951 "write_deps_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_12_12, parse_tree__write_deps_file__IncludeFiles_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_11);
    }
#line 950 "write_deps_file.m"
  }
#line 946 "write_deps_file.m"
}

#line 927 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dll_dependencies_list_6_p_0(
#line 927 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 927 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 927 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__3_3,
#line 927 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4)
#line 927 "write_deps_file.m"
{
#line 930 "write_deps_file.m"
  while (MR_TRUE)
#line 930 "write_deps_file.m"
    {
#line 930 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 930 "write_deps_file.m"
      {
#line 930 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 930 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 930 "write_deps_file.m"
          {
#line 930 "write_deps_file.m"
          }
#line 930 "write_deps_file.m"
        else
#line 932 "write_deps_file.m"
          {
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 0)));
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Modules_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 1)));
#line 932 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_30;

#line 940 "write_deps_file.m"
            {
#line 940 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__Module_16, (MR_String) ".dll", (MR_Integer) 1, &parse_tree__write_deps_file__FileName_30);
            }
#line 942 "write_deps_file.m"
            {
#line 942 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__2_2, (MR_String) " \\\n\t");
            }
#line 943 "write_deps_file.m"
            {
#line 943 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__2_2, parse_tree__write_deps_file__HeadVar__3_3);
            }
#line 944 "write_deps_file.m"
            {
#line 944 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__2_2, parse_tree__write_deps_file__FileName_30);
            }
#line 934 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 934 "write_deps_file.m"
            {
#line 934 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__4__tmp_copy_4 = parse_tree__write_deps_file__Modules_17;

#line 934 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__4_4 = parse_tree__write_deps_file__HeadVar__4__tmp_copy_4;
#line 934 "write_deps_file.m"
            }
#line 934 "write_deps_file.m"
            continue;
#line 932 "write_deps_file.m"
          }
#line 930 "write_deps_file.m"
      }
#line 930 "write_deps_file.m"
      break;
#line 930 "write_deps_file.m"
    }
#line 927 "write_deps_file.m"
}

#line 920 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(
#line 920 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 920 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2)
#line 920 "write_deps_file.m"
{
#line 923 "write_deps_file.m"
  {
#line 923 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 923 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 923 "write_deps_file.m"
      {
#line 923 "write_deps_file.m"
      }
#line 923 "write_deps_file.m"
    else
#line 924 "write_deps_file.m"
      {
#line 925 "write_deps_file.m"
        {
#line 925 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__1_1, (MR_String) " ");
#line 925 "write_deps_file.m"
          return;
        }
#line 924 "write_deps_file.m"
      }
#line 923 "write_deps_file.m"
  }
#line 920 "write_deps_file.m"
}

#line 898 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(
#line 898 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 898 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_10,
#line 898 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Prefix_11,
#line 898 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_12,
#line 898 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Basis_13,
#line 898 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_14)
#line 898 "write_deps_file.m"
{
#line 905 "write_deps_file.m"
  {
#line 905 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 905 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Basis_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 917 "write_deps_file.m"
      {
#line 917 "write_deps_file.m"
        parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Suffix_12, parse_tree__write_deps_file__Modules_14);
#line 917 "write_deps_file.m"
        return;
      }
#line 905 "write_deps_file.m"
    else
#line 905 "write_deps_file.m"
      {
#line 905 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__VarName_16;
#line 905 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__OldSuffix_17;
#line 905 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Basis_13, (MR_Integer) 0)));

#line 905 "write_deps_file.m"
        parse_tree__write_deps_file__VarName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_21_21, (MR_Integer) 0)));
#line 905 "write_deps_file.m"
        parse_tree__write_deps_file__OldSuffix_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_21_21, (MR_Integer) 1)));
#line 906 "write_deps_file.m"
        {
#line 906 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) "\044(");
        }
#line 907 "write_deps_file.m"
        {
#line 907 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__VarName_16);
        }
#line 908 "write_deps_file.m"
        {
#line 908 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) ":%");
        }
#line 909 "write_deps_file.m"
        {
#line 909 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__OldSuffix_17);
        }
#line 910 "write_deps_file.m"
        {
#line 910 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) "=");
        }
#line 911 "write_deps_file.m"
        {
#line 911 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Prefix_11);
        }
#line 912 "write_deps_file.m"
        {
#line 912 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) "%");
        }
#line 913 "write_deps_file.m"
        {
#line 913 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Suffix_12);
        }
#line 914 "write_deps_file.m"
        {
#line 914 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) ")");
#line 914 "write_deps_file.m"
          return;
        }
#line 905 "write_deps_file.m"
      }
#line 905 "write_deps_file.m"
  }
#line 898 "write_deps_file.m"
}

#line 887 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_list_6_p_0(
#line 887 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 887 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_2,
#line 887 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 887 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4)
#line 887 "write_deps_file.m"
{
#line 890 "write_deps_file.m"
  while (MR_TRUE)
#line 890 "write_deps_file.m"
    {
#line 890 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 890 "write_deps_file.m"
      {
#line 890 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 890 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 890 "write_deps_file.m"
          {
#line 890 "write_deps_file.m"
          }
#line 890 "write_deps_file.m"
        else
#line 891 "write_deps_file.m"
          {
#line 891 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 0)));
#line 891 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Modules_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 1)));
#line 891 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_19;

#line 892 "write_deps_file.m"
            {
#line 892 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_16, parse_tree__write_deps_file__Suffix_3, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_19);
            }
#line 894 "write_deps_file.m"
            {
#line 894 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, (MR_String) " \\\n\t");
            }
#line 895 "write_deps_file.m"
            {
#line 895 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, parse_tree__write_deps_file__FileName_19);
            }
#line 896 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 896 "write_deps_file.m"
            {
#line 896 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__4__tmp_copy_4 = parse_tree__write_deps_file__Modules_17;

#line 896 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__4_4 = parse_tree__write_deps_file__HeadVar__4__tmp_copy_4;
#line 896 "write_deps_file.m"
            }
#line 896 "write_deps_file.m"
            continue;
#line 891 "write_deps_file.m"
          }
#line 890 "write_deps_file.m"
      }
#line 890 "write_deps_file.m"
      break;
#line 890 "write_deps_file.m"
    }
#line 887 "write_deps_file.m"
}

#line 880 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_set_6_p_0(
#line 880 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 880 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 880 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_9,
#line 880 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_10)
#line 880 "write_deps_file.m"
{
#line 883 "write_deps_file.m"
  {
#line 883 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 883 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_14_14;

#line 885 "write_deps_file.m"
    {
#line 885 "write_deps_file.m"
      parse_tree__write_deps_file__V_14_14 = mercury__set__to_sorted_list_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_deps_file__Modules_10);
    }
#line 884 "write_deps_file.m"
    {
#line 884 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Suffix_9, parse_tree__write_deps_file__V_14_14);
#line 884 "write_deps_file.m"
      return;
    }
#line 883 "write_deps_file.m"
  }
#line 880 "write_deps_file.m"
}

#line 869 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__submodules_2_f_0_1(
#line 869 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 869 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 869 "write_deps_file.m"
{
#line 869 "write_deps_file.m"
  {
#line 869 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 869 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 869 "write_deps_file.m"
    {
#line 869 "write_deps_file.m"
      return parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__submodules__869__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 869 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 869 "write_deps_file.m"
  }
#line 869 "write_deps_file.m"
}

#line 862 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__submodules_2_f_0(
#line 862 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 862 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules0_5)
#line 862 "write_deps_file.m"
{
#line 874 "write_deps_file.m"
  {
#line 874 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__Module_4)) == (MR_mktag((MR_Integer) 0)));
#line 874 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules_6;
#line 874 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Str_7;

#line 866 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 866 "write_deps_file.m"
      {
#line 866 "write_deps_file.m"
        parse_tree__write_deps_file__Str_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_4, (MR_Integer) 0)));
#line 867 "write_deps_file.m"
        {
#line 867 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__Module_4);
        }
#line 867 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 866 "write_deps_file.m"
      }
#line 874 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 872 "write_deps_file.m"
      {
#line 872 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__P_8;

#line 869 "write_deps_file.m"
        {
#line 869 "write_deps_file.m"
          parse_tree__write_deps_file__P_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 869 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[1]));
#line 869 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 1) = ((MR_Box) (parse_tree__write_deps_file__submodules_2_f_0_1));
#line 869 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 869 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 3) = ((MR_Box) (parse_tree__write_deps_file__Module_4));
#line 869 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 4) = ((MR_Box) (parse_tree__write_deps_file__Str_7));
#line 869 "write_deps_file.m"
        }
#line 873 "write_deps_file.m"
        {
#line 873 "write_deps_file.m"
          mercury__set__filter_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_deps_file__P_8, parse_tree__write_deps_file__Modules0_5, &parse_tree__write_deps_file__Modules_6);
        }
#line 872 "write_deps_file.m"
      }
#line 874 "write_deps_file.m"
    else
#line 875 "write_deps_file.m"
      {
#line 875 "write_deps_file.m"
        {
#line 875 "write_deps_file.m"
          parse_tree__write_deps_file__Modules_6 = mercury__set__init_0_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
        }
#line 875 "write_deps_file.m"
      }
#line 874 "write_deps_file.m"
    return parse_tree__write_deps_file__Modules_6;
#line 874 "write_deps_file.m"
  }
#line 862 "write_deps_file.m"
}

#line 104 "write_deps_file.m"
void MR_CALL 
parse_tree__write_deps_file__get_opt_deps_8_p_0(
#line 104 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 104 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 104 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
#line 104 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__4_4,
#line 104 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__5_5,
#line 104 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__6_6)
#line 104 "write_deps_file.m"
{
#line 2565 "write_deps_file.m"
  {
#line 2565 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 2565 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2565 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2565 "write_deps_file.m"
    else
#line 2567 "write_deps_file.m"
      {
#line 2567 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Dep_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 0)));
#line 2567 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Deps_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 1)));
#line 2567 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;

#line 2568 "write_deps_file.m"
        {
#line 2568 "write_deps_file.m"
          parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__HeadVar__2_2, parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__HeadVar__4_4, parse_tree__write_deps_file__Deps_21, &parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35);
        }
#line 13928 "parse_tree.write_deps_file.c"
#line 13929 "parse_tree.write_deps_file.c"
        switch (parse_tree__write_deps_file__HeadVar__2_2) {
#line 13931 "parse_tree.write_deps_file.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 13933 "parse_tree.write_deps_file.c"
          case (MR_Integer) 0:
#line 13935 "parse_tree.write_deps_file.c"
            {
#line 13937 "parse_tree.write_deps_file.c"
              MR_String parse_tree__write_deps_file__OptName_28;
#line 13939 "parse_tree.write_deps_file.c"
              MR_Word parse_tree__write_deps_file__Result2_29;

#line 2589 "write_deps_file.m"
              {
#line 2589 "write_deps_file.m"
                parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__Dep_20, parse_tree__write_deps_file__HeadVar__4_4, &parse_tree__write_deps_file__OptName_28);
              }
#line 2590 "write_deps_file.m"
              {
#line 2590 "write_deps_file.m"
                libs__file_util__search_for_file_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__OptName_28, &parse_tree__write_deps_file__Result2_29);
              }
#line 2594 "write_deps_file.m"
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_29)) == (MR_mktag((MR_Integer) 1))))
#line 2595 "write_deps_file.m"
                *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;
#line 2594 "write_deps_file.m"
              else
#line 2593 "write_deps_file.m"
                {
#line 2593 "write_deps_file.m"
                  MR_Word base;
#line 2593 "write_deps_file.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2593 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2593 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_20));
#line 2593 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
#line 2593 "write_deps_file.m"
                }
#line 13972 "parse_tree.write_deps_file.c"
            }
#line 13974 "parse_tree.write_deps_file.c"
            break;
#line 13976 "parse_tree.write_deps_file.c"
          case (MR_Integer) 1:
#line 13978 "parse_tree.write_deps_file.c"
            {
#line 13980 "parse_tree.write_deps_file.c"
              MR_Word parse_tree__write_deps_file__Result1_24;

#line 2572 "write_deps_file.m"
              {
#line 2572 "write_deps_file.m"
                parse_tree__prog_io_find__search_for_module_source_7_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__Dep_20, &parse_tree__write_deps_file__Result1_24);
              }
#line 13988 "parse_tree.write_deps_file.c"
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result1_24)) == (MR_mktag((MR_Integer) 1))))
#line 13990 "parse_tree.write_deps_file.c"
                {
#line 13992 "parse_tree.write_deps_file.c"
                  MR_String parse_tree__write_deps_file__OptName_45;
#line 13994 "parse_tree.write_deps_file.c"
                  MR_Word parse_tree__write_deps_file__Result2_46;

#line 2589 "write_deps_file.m"
                  {
#line 2589 "write_deps_file.m"
                    parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__Dep_20, parse_tree__write_deps_file__HeadVar__4_4, &parse_tree__write_deps_file__OptName_45);
                  }
#line 2590 "write_deps_file.m"
                  {
#line 2590 "write_deps_file.m"
                    libs__file_util__search_for_file_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__OptName_45, &parse_tree__write_deps_file__Result2_46);
                  }
#line 2594 "write_deps_file.m"
                  if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_46)) == (MR_mktag((MR_Integer) 1))))
#line 2595 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;
#line 2594 "write_deps_file.m"
                  else
#line 2593 "write_deps_file.m"
                    {
#line 2593 "write_deps_file.m"
                      MR_Word base;
#line 2593 "write_deps_file.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2593 "write_deps_file.m"
                      *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2593 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_20));
#line 2593 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
#line 2593 "write_deps_file.m"
                    }
#line 14027 "parse_tree.write_deps_file.c"
                }
#line 14029 "parse_tree.write_deps_file.c"
              else
#line 14031 "parse_tree.write_deps_file.c"
                {
#line 2576 "write_deps_file.m"
                  {
#line 2576 "write_deps_file.m"
                    MR_Word base;
#line 2576 "write_deps_file.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2576 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2576 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_20));
#line 2576 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
#line 2576 "write_deps_file.m"
                  }
#line 2578 "write_deps_file.m"
                  {
#line 2578 "write_deps_file.m"
                    mercury__io__seen_2_p_0();
#line 2578 "write_deps_file.m"
                    return;
                  }
#line 14054 "parse_tree.write_deps_file.c"
                }
#line 14056 "parse_tree.write_deps_file.c"
            }
#line 14058 "parse_tree.write_deps_file.c"
            break;
#line 14060 "parse_tree.write_deps_file.c"
        }
#line 2567 "write_deps_file.m"
      }
#line 2565 "write_deps_file.m"
  }
#line 104 "write_deps_file.m"
}

#line 2486 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__referenced_dlls_2_f_0_1(
#line 2486 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2486 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 2486 "write_deps_file.m"
{
#line 2486 "write_deps_file.m"
  {
#line 2486 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 2486 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 2486 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_HeadVar__2_18;

#line 2486 "write_deps_file.m"
    {
#line 2486 "write_deps_file.m"
      parse_tree__write_deps_file__conv0_HeadVar__2_18 = parse_tree__write_deps_file__IntroducedFrom__func__referenced_dlls__2486__1_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 2486 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__2_18));
#line 2486 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 2486 "write_deps_file.m"
  }
#line 2486 "write_deps_file.m"
}

#line 88 "write_deps_file.m"
MR_Word MR_CALL 
parse_tree__write_deps_file__referenced_dlls_2_f_0(
#line 88 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 88 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepModules0_5)
#line 88 "write_deps_file.m"
{
#line 2475 "write_deps_file.m"
  {
#line 2475 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2475 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules_6;
#line 2475 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_22_22 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2475 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DepModules_7;

#line 2476 "write_deps_file.m"
    {
#line 2476 "write_deps_file.m"
      mercury__set__insert_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_22_22, ((MR_Box) (parse_tree__write_deps_file__Module_4)), parse_tree__write_deps_file__DepModules0_5, &parse_tree__write_deps_file__DepModules_7);
    }
#line 2480 "write_deps_file.m"
    {
#line 2480 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__Module_4);
    }
#line 2485 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 2483 "write_deps_file.m"
      {
#line 2484 "write_deps_file.m"
        {
#line 2484 "write_deps_file.m"
          mercury__set__insert_list_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_22_22, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[29]), parse_tree__write_deps_file__DepModules_7, &parse_tree__write_deps_file__Modules_6);
        }
#line 2483 "write_deps_file.m"
      }
#line 2485 "write_deps_file.m"
    else
#line 2493 "write_deps_file.m"
      {
#line 2494 "write_deps_file.m"
        {
#line 2494 "write_deps_file.m"
          parse_tree__write_deps_file__Modules_6 = mercury__set__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_22_22, parse_tree__write_deps_file__TypeCtorInfo_22_22, (MR_Word) &parse_tree__write_deps_file_scalar_common_2[6], parse_tree__write_deps_file__DepModules_7);
        }
#line 2493 "write_deps_file.m"
      }
#line 2475 "write_deps_file.m"
    return parse_tree__write_deps_file__Modules_6;
#line 2475 "write_deps_file.m"
  }
#line 88 "write_deps_file.m"
}

#line 2450 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1(
#line 2450 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2450 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2450 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2450 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 2450 "write_deps_file.m"
{
#line 2450 "write_deps_file.m"
  {
#line 2450 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 2450 "write_deps_file.m"
    {
#line 2450 "write_deps_file.m"
      parse_tree__write_deps_file__write_module_scc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 2450 "write_deps_file.m"
      return;
    }
#line 2450 "write_deps_file.m"
  }
#line 2450 "write_deps_file.m"
}

#line 75 "write_deps_file.m"
void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0(
#line 75 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_6,
#line 75 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_7,
#line 75 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsOrdering_8)
#line 75 "write_deps_file.m"
{
#line 2436 "write_deps_file.m"
  {
#line 2436 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2436 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Order_10;
#line 2436 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_11;

#line 2437 "write_deps_file.m"
    {
#line 2437 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_6, (MR_Integer) 94, &parse_tree__write_deps_file__Order_10);
    }
#line 2438 "write_deps_file.m"
    {
#line 2438 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_6, (MR_Integer) 45, &parse_tree__write_deps_file__Verbose_11);
    }
#line 2462 "write_deps_file.m"
#line 2462 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Order_10) {
#line 2462 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2462 "write_deps_file.m"
      case (MR_Integer) 0:
#line 2463 "write_deps_file.m"
        {
#line 2463 "write_deps_file.m"
        }
#line 2462 "write_deps_file.m"
        break;
#line 2462 "write_deps_file.m"
      case (MR_Integer) 1:
#line 2440 "write_deps_file.m"
        {
#line 2440 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__OrdFileName_12;
#line 2440 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__OrdResult_13;

#line 2441 "write_deps_file.m"
          {
#line 2441 "write_deps_file.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_6, parse_tree__write_deps_file__Module_7, (MR_String) ".order", (MR_Integer) 0, &parse_tree__write_deps_file__OrdFileName_12);
          }
#line 2443 "write_deps_file.m"
          {
#line 2443 "write_deps_file.m"
            libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) "% Creating module order file \140");
          }
#line 2444 "write_deps_file.m"
          {
#line 2444 "write_deps_file.m"
            libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, parse_tree__write_deps_file__OrdFileName_12);
          }
#line 2445 "write_deps_file.m"
          {
#line 2445 "write_deps_file.m"
            libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) "\'...");
          }
#line 2446 "write_deps_file.m"
          {
#line 2446 "write_deps_file.m"
            mercury__io__open_output_4_p_0(parse_tree__write_deps_file__OrdFileName_12, &parse_tree__write_deps_file__OrdResult_13);
          }
#line 2453 "write_deps_file.m"
          if (((MR_tag((MR_Word) parse_tree__write_deps_file__OrdResult_13)) == (MR_mktag((MR_Integer) 1))))
#line 2454 "write_deps_file.m"
            {
#line 2454 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__IOError_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__OrdResult_13, (MR_Integer) 0)));
#line 2454 "write_deps_file.m"
              MR_String parse_tree__write_deps_file__IOErrorMessage_16;
#line 2454 "write_deps_file.m"
              MR_String parse_tree__write_deps_file__OrdMessage_17;
#line 2454 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_34_34;
#line 2454 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_36_36;
#line 2454 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_37_37;
#line 2454 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_39_39;

#line 2455 "write_deps_file.m"
              {
#line 2455 "write_deps_file.m"
                libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) " failed.\n");
              }
#line 2456 "write_deps_file.m"
              {
#line 2456 "write_deps_file.m"
                libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_11);
              }
#line 2457 "write_deps_file.m"
              {
#line 2457 "write_deps_file.m"
                mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_15, &parse_tree__write_deps_file__IOErrorMessage_16);
              }
#line 2459 "write_deps_file.m"
              {
#line 2459 "write_deps_file.m"
                parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2459 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_16));
#line 2459 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2459 "write_deps_file.m"
              }
#line 2459 "write_deps_file.m"
              {
#line 2459 "write_deps_file.m"
                parse_tree__write_deps_file__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2459 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 2459 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 2459 "write_deps_file.m"
              }
#line 2458 "write_deps_file.m"
              {
#line 2458 "write_deps_file.m"
                parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2458 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) (parse_tree__write_deps_file__OrdFileName_12));
#line 2458 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_37_37));
#line 2458 "write_deps_file.m"
              }
#line 2458 "write_deps_file.m"
              {
#line 2458 "write_deps_file.m"
                parse_tree__write_deps_file__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2458 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 2458 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 2458 "write_deps_file.m"
              }
#line 2458 "write_deps_file.m"
              {
#line 2458 "write_deps_file.m"
                mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_34_34, &parse_tree__write_deps_file__OrdMessage_17);
              }
#line 2460 "write_deps_file.m"
              {
#line 2460 "write_deps_file.m"
                libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__OrdMessage_17);
#line 2460 "write_deps_file.m"
                return;
              }
#line 2454 "write_deps_file.m"
            }
#line 2453 "write_deps_file.m"
          else
#line 2448 "write_deps_file.m"
            {
#line 2448 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__OrdStream_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OrdResult_13, (MR_Integer) 0)));
#line 2448 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_43_43;

#line 2450 "write_deps_file.m"
              {
#line 2450 "write_deps_file.m"
                parse_tree__write_deps_file__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2450 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_43_43, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_9[0]));
#line 2450 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_43_43, 1) = ((MR_Box) (parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1));
#line 2450 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2450 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_43_43, 3) = ((MR_Box) (parse_tree__write_deps_file__OrdStream_14));
#line 2450 "write_deps_file.m"
              }
#line 2449 "write_deps_file.m"
              {
#line 2449 "write_deps_file.m"
                mercury__io__write_list_6_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], parse_tree__write_deps_file__OrdStream_14, parse_tree__write_deps_file__DepsOrdering_8, (MR_String) "\n\n", parse_tree__write_deps_file__V_43_43);
              }
#line 2451 "write_deps_file.m"
              {
#line 2451 "write_deps_file.m"
                mercury__io__close_output_3_p_0(parse_tree__write_deps_file__OrdStream_14);
              }
#line 2452 "write_deps_file.m"
              {
#line 2452 "write_deps_file.m"
                libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) " done.\n");
#line 2452 "write_deps_file.m"
                return;
              }
#line 2448 "write_deps_file.m"
            }
#line 2440 "write_deps_file.m"
        }
#line 2462 "write_deps_file.m"
        break;
#line 2462 "write_deps_file.m"
    }
#line 2436 "write_deps_file.m"
  }
#line 75 "write_deps_file.m"
}

#line 72 "write_deps_file.m"
void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_dep_file_6_p_0(
#line 72 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 72 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_8,
#line 72 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 72 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_10)
#line 72 "write_deps_file.m"
{
#line 1240 "write_deps_file.m"
  {
#line 1240 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1240 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_12;
#line 1240 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DepFileName_13;
#line 1240 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DepResult_14;

#line 1241 "write_deps_file.m"
    {
#line 1241 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 45, &parse_tree__write_deps_file__Verbose_12);
    }
#line 1242 "write_deps_file.m"
    {
#line 1242 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, (MR_String) ".dep", (MR_Integer) 0, &parse_tree__write_deps_file__DepFileName_13);
    }
#line 1244 "write_deps_file.m"
    {
#line 1244 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    }
#line 1245 "write_deps_file.m"
    {
#line 1245 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, parse_tree__write_deps_file__DepFileName_13);
    }
#line 1246 "write_deps_file.m"
    {
#line 1246 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "\'...\n");
    }
#line 1247 "write_deps_file.m"
    {
#line 1247 "write_deps_file.m"
      mercury__io__open_output_4_p_0(parse_tree__write_deps_file__DepFileName_13, &parse_tree__write_deps_file__DepResult_14);
    }
#line 1254 "write_deps_file.m"
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__DepResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 1255 "write_deps_file.m"
      {
#line 1255 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DepResult_14, (MR_Integer) 0)));
#line 1255 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IOErrorMessage_17;
#line 1255 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DepMessage_18;
#line 1255 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_34_34;
#line 1255 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_36_36;
#line 1255 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_37_37;
#line 1255 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_39_39;

#line 1256 "write_deps_file.m"
        {
#line 1256 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
        }
#line 1257 "write_deps_file.m"
        {
#line 1257 "write_deps_file.m"
          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
        }
#line 1258 "write_deps_file.m"
        {
#line 1258 "write_deps_file.m"
          mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_16, &parse_tree__write_deps_file__IOErrorMessage_17);
        }
#line 1260 "write_deps_file.m"
        {
#line 1260 "write_deps_file.m"
          parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1260 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_17));
#line 1260 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1260 "write_deps_file.m"
        }
#line 1260 "write_deps_file.m"
        {
#line 1260 "write_deps_file.m"
          parse_tree__write_deps_file__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1260 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 1260 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 1260 "write_deps_file.m"
        }
#line 1259 "write_deps_file.m"
        {
#line 1259 "write_deps_file.m"
          parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) (parse_tree__write_deps_file__DepFileName_13));
#line 1259 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_37_37));
#line 1259 "write_deps_file.m"
        }
#line 1259 "write_deps_file.m"
        {
#line 1259 "write_deps_file.m"
          parse_tree__write_deps_file__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 1259 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 1259 "write_deps_file.m"
        }
#line 1259 "write_deps_file.m"
        {
#line 1259 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_34_34, &parse_tree__write_deps_file__DepMessage_18);
        }
#line 1261 "write_deps_file.m"
        {
#line 1261 "write_deps_file.m"
          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__DepMessage_18);
#line 1261 "write_deps_file.m"
          return;
        }
#line 1255 "write_deps_file.m"
      }
#line 1254 "write_deps_file.m"
    else
#line 1249 "write_deps_file.m"
      {
#line 1249 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__DepStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__DepResult_14, (MR_Integer) 0)));

#line 1250 "write_deps_file.m"
        {
#line 1250 "write_deps_file.m"
          parse_tree__write_deps_file__generate_dep_file_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SourceFileName_8, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__DepsMap_10, parse_tree__write_deps_file__DepStream_15);
        }
#line 1252 "write_deps_file.m"
        {
#line 1252 "write_deps_file.m"
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DepStream_15);
        }
#line 1253 "write_deps_file.m"
        {
#line 1253 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% done.\n");
#line 1253 "write_deps_file.m"
          return;
        }
#line 1249 "write_deps_file.m"
      }
#line 1240 "write_deps_file.m"
  }
#line 72 "write_deps_file.m"
}

#line 66 "write_deps_file.m"
void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_dv_file_6_p_0(
#line 66 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 66 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_8,
#line 66 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 66 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_10)
#line 66 "write_deps_file.m"
{
#line 1213 "write_deps_file.m"
  {
#line 1213 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1213 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_12;
#line 1213 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DvFileName_13;
#line 1213 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DvResult_14;

#line 1214 "write_deps_file.m"
    {
#line 1214 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 45, &parse_tree__write_deps_file__Verbose_12);
    }
#line 1215 "write_deps_file.m"
    {
#line 1215 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, (MR_String) ".dv", (MR_Integer) 0, &parse_tree__write_deps_file__DvFileName_13);
    }
#line 1217 "write_deps_file.m"
    {
#line 1217 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    }
#line 1218 "write_deps_file.m"
    {
#line 1218 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, parse_tree__write_deps_file__DvFileName_13);
    }
#line 1219 "write_deps_file.m"
    {
#line 1219 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "\'...\n");
    }
#line 1220 "write_deps_file.m"
    {
#line 1220 "write_deps_file.m"
      mercury__io__open_output_4_p_0(parse_tree__write_deps_file__DvFileName_13, &parse_tree__write_deps_file__DvResult_14);
    }
#line 1227 "write_deps_file.m"
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__DvResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 1228 "write_deps_file.m"
      {
#line 1228 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DvResult_14, (MR_Integer) 0)));
#line 1228 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IOErrorMessage_17;
#line 1228 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DvMessage_18;
#line 1228 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_34_34;
#line 1228 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_36_36;
#line 1228 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_37_37;
#line 1228 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_39_39;

#line 1229 "write_deps_file.m"
        {
#line 1229 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
        }
#line 1230 "write_deps_file.m"
        {
#line 1230 "write_deps_file.m"
          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
        }
#line 1231 "write_deps_file.m"
        {
#line 1231 "write_deps_file.m"
          mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_16, &parse_tree__write_deps_file__IOErrorMessage_17);
        }
#line 1233 "write_deps_file.m"
        {
#line 1233 "write_deps_file.m"
          parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1233 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_17));
#line 1233 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1233 "write_deps_file.m"
        }
#line 1233 "write_deps_file.m"
        {
#line 1233 "write_deps_file.m"
          parse_tree__write_deps_file__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1233 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 1233 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 1233 "write_deps_file.m"
        }
#line 1232 "write_deps_file.m"
        {
#line 1232 "write_deps_file.m"
          parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1232 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) (parse_tree__write_deps_file__DvFileName_13));
#line 1232 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_37_37));
#line 1232 "write_deps_file.m"
        }
#line 1232 "write_deps_file.m"
        {
#line 1232 "write_deps_file.m"
          parse_tree__write_deps_file__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1232 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 1232 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 1232 "write_deps_file.m"
        }
#line 1232 "write_deps_file.m"
        {
#line 1232 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_34_34, &parse_tree__write_deps_file__DvMessage_18);
        }
#line 1234 "write_deps_file.m"
        {
#line 1234 "write_deps_file.m"
          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__DvMessage_18);
#line 1234 "write_deps_file.m"
          return;
        }
#line 1228 "write_deps_file.m"
      }
#line 1227 "write_deps_file.m"
    else
#line 1222 "write_deps_file.m"
      {
#line 1222 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__DvStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__DvResult_14, (MR_Integer) 0)));

#line 1223 "write_deps_file.m"
        {
#line 1223 "write_deps_file.m"
          parse_tree__write_deps_file__generate_dv_file_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SourceFileName_8, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__DepsMap_10, parse_tree__write_deps_file__DvStream_15);
        }
#line 1225 "write_deps_file.m"
        {
#line 1225 "write_deps_file.m"
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DvStream_15);
        }
#line 1226 "write_deps_file.m"
        {
#line 1226 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% done.\n");
#line 1226 "write_deps_file.m"
          return;
        }
#line 1222 "write_deps_file.m"
      }
#line 1213 "write_deps_file.m"
  }
#line 66 "write_deps_file.m"
}

#line 59 "write_deps_file.m"
void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_d_files_10_p_0(
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IntDepsGraph_3,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ImpDepsGraph_4,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IndirectDepsGraph_5,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IndirectOptDepsGraph_6,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOptOrder_7,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_8)
#line 59 "write_deps_file.m"
{
#line 1102 "write_deps_file.m"
  {
#line 1102 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 1102 "write_deps_file.m"
    {
#line 1102 "write_deps_file.m"
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__HeadVar__2_2, parse_tree__write_deps_file__IntDepsGraph_3, parse_tree__write_deps_file__ImpDepsGraph_4, parse_tree__write_deps_file__IndirectDepsGraph_5, parse_tree__write_deps_file__IndirectOptDepsGraph_6, parse_tree__write_deps_file__TransOptOrder_7);
#line 1102 "write_deps_file.m"
      return;
    }
#line 1102 "write_deps_file.m"
  }
#line 59 "write_deps_file.m"
}

#line 759 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_7(
#line 759 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 759 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 759 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 759 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 759 "write_deps_file.m"
{
#line 759 "write_deps_file.m"
  {
#line 759 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 759 "write_deps_file.m"
    {
#line 759 "write_deps_file.m"
      parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
#line 759 "write_deps_file.m"
      return;
    }
#line 759 "write_deps_file.m"
  }
#line 759 "write_deps_file.m"
}

#line 682 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_6(
#line 682 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 682 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 682 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 682 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 682 "write_deps_file.m"
{
#line 682 "write_deps_file.m"
  {
#line 682 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 682 "write_deps_file.m"
    {
#line 682 "write_deps_file.m"
      parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 7))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 682 "write_deps_file.m"
      return;
    }
#line 682 "write_deps_file.m"
  }
#line 682 "write_deps_file.m"
}

#line 664 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_5(
#line 664 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 664 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 664 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 664 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 664 "write_deps_file.m"
{
#line 664 "write_deps_file.m"
  {
#line 664 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 664 "write_deps_file.m"
    {
#line 664 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__664__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
#line 664 "write_deps_file.m"
      return;
    }
#line 664 "write_deps_file.m"
  }
#line 664 "write_deps_file.m"
}

#line 626 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_4(
#line 626 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 626 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 626 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 626 "write_deps_file.m"
{
#line 626 "write_deps_file.m"
  {
#line 626 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 626 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 626 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv3_HeadVar__3_645;

#line 626 "write_deps_file.m"
    {
#line 626 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__626__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv3_HeadVar__3_645);
    }
#line 626 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 626 "write_deps_file.m"
      {
#line 626 "write_deps_file.m"
        *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv3_HeadVar__3_645));
#line 626 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 626 "write_deps_file.m"
      }
#line 626 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 626 "write_deps_file.m"
  }
#line 626 "write_deps_file.m"
}

#line 404 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_3(
#line 404 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 404 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 404 "write_deps_file.m"
{
#line 404 "write_deps_file.m"
  {
#line 404 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 404 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 404 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv2_HeadVar__2_2;

#line 404 "write_deps_file.m"
    {
#line 404 "write_deps_file.m"
      parse_tree__write_deps_file__conv2_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 404 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv2_HeadVar__2_2));
#line 404 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 404 "write_deps_file.m"
  }
#line 404 "write_deps_file.m"
}

#line 382 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_2(
#line 382 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 382 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 382 "write_deps_file.m"
{
#line 382 "write_deps_file.m"
  {
#line 382 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 382 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 382 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv1_HeadVar__2_2;

#line 382 "write_deps_file.m"
    {
#line 382 "write_deps_file.m"
      parse_tree__write_deps_file__conv1_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 382 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_HeadVar__2_2));
#line 382 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 382 "write_deps_file.m"
  }
#line 382 "write_deps_file.m"
}

#line 294 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_1(
#line 294 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 294 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 294 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 294 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 294 "write_deps_file.m"
{
#line 294 "write_deps_file.m"
  {
#line 294 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 294 "write_deps_file.m"
    {
#line 294 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__294__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
#line 294 "write_deps_file.m"
      return;
    }
#line 294 "write_deps_file.m"
  }
#line 294 "write_deps_file.m"
}

#line 40 "write_deps_file.m"
void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0(
#line 40 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 40 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleAndImports_8,
#line 40 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__AllDeps_9,
#line 40 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MaybeTransOptDeps_10)
#line 40 "write_deps_file.m"
{
#line 139 "write_deps_file.m"
  {
#line 139 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 139 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SourceFileName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 0)));
#line 139 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SourceFileModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 1)));
#line 139 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 2)));
#line 139 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ParentDeps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 4)));
#line 139 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IntDeps_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 5)));
#line 139 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ImpDeps_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 6)));
#line 139 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IndirectDeps_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 7)));
#line 139 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__InclDeps_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 9)));
#line 139 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__NestedDeps_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 10)));
#line 139 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__FactDeps0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 11)));
#line 139 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignImportModules0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 12)));
#line 139 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignIncludeFilesCord_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 13)));
#line 139 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ContainsForeignCode_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 14)));
#line 139 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SrcItemBlocks_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 16)));
#line 139 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DirectIntItemBlocksCord_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 17)));
#line 139 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IndirectIntItemBlocksCord_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 18)));
#line 139 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__OptItemBlocksCord_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 19)));
#line 139 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IntForOptItemBlocksCord_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 20)));
#line 139 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_39;
#line 139 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MakeVarName_40;
#line 139 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DependencyFileName_41;
#line 139 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TransOptDateFileName_42;
#line 139 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TmpDependencyFileName_43;
#line 139 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Result_44;
#line 139 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_189_189;
#line 140 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___ModuleNameContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 3)));
#line 140 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Children_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 8)));
#line 140 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___ContainsForeignExport_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 15)));
#line 140 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___ModuleVersionNumbersCord_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 21)));
#line 140 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Specs_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 22)));
#line 140 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Error_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 23)));
#line 140 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Timestamps_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 24)));
#line 140 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___HasMain_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 25)));
#line 140 "write_deps_file.m"
    MR_String parse_tree__write_deps_file___Dir_38 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 26)));

#line 149 "write_deps_file.m"
    {
#line 149 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 45, &parse_tree__write_deps_file__Verbose_39);
    }
#line 150 "write_deps_file.m"
    {
#line 150 "write_deps_file.m"
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_14, &parse_tree__write_deps_file__MakeVarName_40);
    }
#line 151 "write_deps_file.m"
    {
#line 151 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".d", (MR_Integer) 0, &parse_tree__write_deps_file__DependencyFileName_41);
    }
#line 153 "write_deps_file.m"
    {
#line 153 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".trans_opt_date", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptDateFileName_42);
    }
#line 160 "write_deps_file.m"
    {
#line 160 "write_deps_file.m"
      parse_tree__write_deps_file__V_189_189 = mercury__dir__dirname_1_f_0(parse_tree__write_deps_file__DependencyFileName_41);
    }
#line 160 "write_deps_file.m"
    {
#line 160 "write_deps_file.m"
      mercury__io__make_temp_5_p_0(parse_tree__write_deps_file__V_189_189, (MR_String) "tmp_d", &parse_tree__write_deps_file__TmpDependencyFileName_43);
    }
#line 162 "write_deps_file.m"
    {
#line 162 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_39, (MR_String) "% Writing auto-dependency file \140");
    }
#line 163 "write_deps_file.m"
    {
#line 163 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_39, parse_tree__write_deps_file__DependencyFileName_41);
    }
#line 164 "write_deps_file.m"
    {
#line 164 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_39, (MR_String) "\'...");
    }
#line 165 "write_deps_file.m"
    {
#line 165 "write_deps_file.m"
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_39);
    }
#line 166 "write_deps_file.m"
    {
#line 166 "write_deps_file.m"
      mercury__io__open_output_4_p_0(parse_tree__write_deps_file__TmpDependencyFileName_43, &parse_tree__write_deps_file__Result_44);
    }
#line 176 "write_deps_file.m"
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result_44)) == (MR_mktag((MR_Integer) 1))))
#line 168 "write_deps_file.m"
      {
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IOError_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result_44, (MR_Integer) 0)));
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IOErrorMessage_46;
#line 168 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Message_47;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_911_911;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_913_913;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_914_914;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_916_916;

#line 169 "write_deps_file.m"
        {
#line 169 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_39, (MR_String) " failed.\n");
        }
#line 170 "write_deps_file.m"
        {
#line 170 "write_deps_file.m"
          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_39);
        }
#line 171 "write_deps_file.m"
        {
#line 171 "write_deps_file.m"
          mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_45, &parse_tree__write_deps_file__IOErrorMessage_46);
        }
#line 174 "write_deps_file.m"
        {
#line 174 "write_deps_file.m"
          parse_tree__write_deps_file__V_916_916 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 174 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_916_916, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_46));
#line 174 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_916_916, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 174 "write_deps_file.m"
        }
#line 173 "write_deps_file.m"
        {
#line 173 "write_deps_file.m"
          parse_tree__write_deps_file__V_914_914 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_914_914, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 173 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_914_914, 1) = ((MR_Box) (parse_tree__write_deps_file__V_916_916));
#line 173 "write_deps_file.m"
        }
#line 173 "write_deps_file.m"
        {
#line 173 "write_deps_file.m"
          parse_tree__write_deps_file__V_913_913 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_913_913, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpDependencyFileName_43));
#line 173 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_913_913, 1) = ((MR_Box) (parse_tree__write_deps_file__V_914_914));
#line 173 "write_deps_file.m"
        }
#line 172 "write_deps_file.m"
        {
#line 172 "write_deps_file.m"
          parse_tree__write_deps_file__V_911_911 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 172 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_911_911, 0) = ((MR_Box) ((MR_String) "error opening temporary file \140"));
#line 172 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_911_911, 1) = ((MR_Box) (parse_tree__write_deps_file__V_913_913));
#line 172 "write_deps_file.m"
        }
#line 172 "write_deps_file.m"
        {
#line 172 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_911_911, &parse_tree__write_deps_file__Message_47);
        }
#line 175 "write_deps_file.m"
        {
#line 175 "write_deps_file.m"
          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_47);
#line 175 "write_deps_file.m"
          return;
        }
#line 168 "write_deps_file.m"
      }
#line 176 "write_deps_file.m"
    else
#line 177 "write_deps_file.m"
      {
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_941_941 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_942_942;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__DepStream_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Result_44, (MR_Integer) 0)));
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LongDeps0_49;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LongDeps_51;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ShortDeps1_52;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ShortDeps_53;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__FactDeps_54;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ErrFileName_61;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__OptDateFileName_62;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__CDateFileName_63;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__AsmDateFileName_64;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__PicAsmDateFileName_65;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ObjFileName_66;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ILDateFileName_67;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__JavaDateFileName_68;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__PicObjFileName_69;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Int0FileName_70;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ForeignIncludeFiles_76;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__UseOptFiles_79;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Intermod_80;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IntermodDirs_81;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__HighLevelCode_88;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__CompilationTarget_89;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__CFileName_90;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__HeaderFileName_91;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__HeaderFileName2_92;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ILFileName_93;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__JavaFileName_94;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ModuleDepFileName_95;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DateFileName_96;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Date0FileName_97;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__HaveMap_98;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ModuleArg_99;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Target_100;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__SignAssembly_101;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DllFileName_102;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ClassFileName_103;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__BeamFileName_104;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__SubModules_105;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LangSet_106;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ForeignImportModules_107;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ForeignImports_155;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ForeignImportedModuleNames_158;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IntFileName_166;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Int2FileName_167;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Int3FileName_168;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__OptFileName_169;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__TransOptFileName_170;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Date3FileName_171;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__UseSubdirs_172;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Result3_173;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_283_283;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_286_286;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_287_287;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_289_289;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_290_290;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_292_292;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_293_293;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_295_295;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_296_296;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_298_298;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_299_299;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_301_301;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_302_302;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_304_304;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_305_305;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_307_307;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_309_309;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_312_312;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_489_489;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_492_492;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_493_493;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_495_495;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_496_496;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_498_498;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_508_508;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_511_511;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_514_514;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_516_516;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_517_517;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_519_519;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_520_520;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_522_522;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_524_524;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_526_526;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_527_527;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_529_529;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_530_530;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_532_532;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_534_534;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_535_535;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_537_537;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_551_551;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_554_554;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_555_555;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_557_557;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_572_572;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_643_643;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_700_700;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_703_703;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_704_704;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_706_706;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_707_707;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_709_709;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_711_711;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_712_712;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_714_714;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_715_715;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_717_717;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_719_719;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_720_720;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_722_722;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_723_723;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_725_725;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_727_727;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_728_728;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_730_730;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_731_731;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_733_733;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_735_735;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_736_736;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_738_738;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_739_739;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_741_741;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_743_743;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_744_744;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_746_746;
#line 234 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__SourceFileBase_60;
#line 678 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_963_963;
#line 766 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_973_973;

#line 178 "write_deps_file.m"
        {
#line 178 "write_deps_file.m"
          mercury__set__union_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__IntDeps_17, parse_tree__write_deps_file__ImpDeps_18, &parse_tree__write_deps_file__LongDeps0_49);
        }
#line 180 "write_deps_file.m"
        {
#line 180 "write_deps_file.m"
          mercury__set__delete_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, ((MR_Box) (parse_tree__write_deps_file__ModuleName_14)), parse_tree__write_deps_file__LongDeps0_49, &parse_tree__write_deps_file__LongDeps_51);
        }
#line 181 "write_deps_file.m"
        {
#line 181 "write_deps_file.m"
          mercury__set__difference_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__IndirectDeps_19, parse_tree__write_deps_file__LongDeps_51, &parse_tree__write_deps_file__ShortDeps1_52);
        }
#line 182 "write_deps_file.m"
        {
#line 182 "write_deps_file.m"
          mercury__set__delete_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, ((MR_Box) (parse_tree__write_deps_file__ModuleName_14)), parse_tree__write_deps_file__ShortDeps1_52, &parse_tree__write_deps_file__ShortDeps_53);
        }
#line 15534 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_942_942 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 183 "write_deps_file.m"
        {
#line 183 "write_deps_file.m"
          mercury__list__sort_and_remove_dups_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_942_942, parse_tree__write_deps_file__FactDeps0_23, &parse_tree__write_deps_file__FactDeps_54);
        }
#line 195 "write_deps_file.m"
        if ((parse_tree__write_deps_file__MaybeTransOptDeps_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 196 "write_deps_file.m"
          {
#line 196 "write_deps_file.m"
          }
#line 195 "write_deps_file.m"
        else
#line 186 "write_deps_file.m"
          {
#line 186 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDeps0_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeTransOptDeps_10, (MR_Integer) 0)));
#line 186 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDateDeps_56;
#line 186 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_199_199;
#line 186 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_200_200;

#line 187 "write_deps_file.m"
            {
#line 187 "write_deps_file.m"
              parse_tree__write_deps_file__V_199_199 = mercury__set__list_to_set_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__TransOptDeps0_55);
            }
#line 187 "write_deps_file.m"
            {
#line 187 "write_deps_file.m"
              mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__V_199_199, parse_tree__write_deps_file__LongDeps_51, &parse_tree__write_deps_file__TransOptDateDeps_56);
            }
#line 192 "write_deps_file.m"
            {
#line 192 "write_deps_file.m"
              parse_tree__write_deps_file__V_200_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_200_200, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_42));
#line 192 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_200_200, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[104])));
#line 192 "write_deps_file.m"
            }
#line 192 "write_deps_file.m"
            {
#line 192 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_200_200);
            }
#line 193 "write_deps_file.m"
            {
#line 193 "write_deps_file.m"
              parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".trans_opt", parse_tree__write_deps_file__TransOptDateDeps_56);
            }
#line 186 "write_deps_file.m"
          }
#line 228 "write_deps_file.m"
        if ((parse_tree__write_deps_file__FactDeps_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 229 "write_deps_file.m"
          {
#line 229 "write_deps_file.m"
          }
#line 228 "write_deps_file.m"
        else
#line 200 "write_deps_file.m"
          {
#line 200 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__AssumeGmake_59;
#line 200 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_207_207;
#line 200 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_210_210;

#line 202 "write_deps_file.m"
            {
#line 202 "write_deps_file.m"
              parse_tree__write_deps_file__V_210_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_210_210, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 202 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_210_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[105])));
#line 202 "write_deps_file.m"
            }
#line 202 "write_deps_file.m"
            {
#line 202 "write_deps_file.m"
              parse_tree__write_deps_file__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_207_207, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 202 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_207_207, 1) = ((MR_Box) (parse_tree__write_deps_file__V_210_210));
#line 202 "write_deps_file.m"
            }
#line 201 "write_deps_file.m"
            {
#line 201 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_207_207);
            }
#line 203 "write_deps_file.m"
            {
#line 203 "write_deps_file.m"
              parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_48, (MR_String) "", parse_tree__write_deps_file__FactDeps_54);
            }
#line 204 "write_deps_file.m"
            {
#line 204 "write_deps_file.m"
              mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_48);
            }
#line 205 "write_deps_file.m"
            {
#line 205 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 119, &parse_tree__write_deps_file__AssumeGmake_59);
            }
#line 216 "write_deps_file.m"
#line 216 "write_deps_file.m"
            switch (parse_tree__write_deps_file__AssumeGmake_59) {
#line 216 "write_deps_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 216 "write_deps_file.m"
              case (MR_Integer) 0:
#line 217 "write_deps_file.m"
                {
#line 217 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_218_218;
#line 217 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_225_225;
#line 217 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_228_228;

#line 219 "write_deps_file.m"
                  {
#line 219 "write_deps_file.m"
                    parse_tree__write_deps_file__V_218_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_218_218, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 219 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_218_218, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[106])));
#line 219 "write_deps_file.m"
                  }
#line 218 "write_deps_file.m"
                  {
#line 218 "write_deps_file.m"
                    mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_218_218);
                  }
#line 220 "write_deps_file.m"
                  {
#line 220 "write_deps_file.m"
                    parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".c", parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__FactDeps_54);
                  }
#line 222 "write_deps_file.m"
                  {
#line 222 "write_deps_file.m"
                    parse_tree__write_deps_file__V_228_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_228_228, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 222 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_228_228, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[107])));
#line 222 "write_deps_file.m"
                  }
#line 222 "write_deps_file.m"
                  {
#line 222 "write_deps_file.m"
                    parse_tree__write_deps_file__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 222 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 1) = ((MR_Box) (parse_tree__write_deps_file__V_228_228));
#line 222 "write_deps_file.m"
                  }
#line 222 "write_deps_file.m"
                  {
#line 222 "write_deps_file.m"
                    mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_225_225);
                  }
#line 224 "write_deps_file.m"
                  {
#line 224 "write_deps_file.m"
                    parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".\044O", parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__FactDeps_54);
                  }
#line 226 "write_deps_file.m"
                  {
#line 226 "write_deps_file.m"
                    mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_48);
                  }
#line 217 "write_deps_file.m"
                }
#line 216 "write_deps_file.m"
                break;
#line 216 "write_deps_file.m"
              case (MR_Integer) 1:
#line 207 "write_deps_file.m"
                {
#line 207 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_235_235;
#line 207 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_238_238;
#line 207 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_239_239;
#line 207 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_241_241;
#line 207 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_242_242;
#line 207 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_244_244;
#line 207 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_245_245;
#line 207 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_247_247;

#line 213 "write_deps_file.m"
                  {
#line 213 "write_deps_file.m"
                    parse_tree__write_deps_file__V_247_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 213 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[108])));
#line 213 "write_deps_file.m"
                  }
#line 213 "write_deps_file.m"
                  {
#line 213 "write_deps_file.m"
                    parse_tree__write_deps_file__V_245_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_245_245, 0) = ((MR_Box) ((MR_String) ".fact_tables.cs = \044("));
#line 213 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_245_245, 1) = ((MR_Box) (parse_tree__write_deps_file__V_247_247));
#line 213 "write_deps_file.m"
                  }
#line 212 "write_deps_file.m"
                  {
#line 212 "write_deps_file.m"
                    parse_tree__write_deps_file__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 212 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 1) = ((MR_Box) (parse_tree__write_deps_file__V_245_245));
#line 212 "write_deps_file.m"
                  }
#line 211 "write_deps_file.m"
                  {
#line 211 "write_deps_file.m"
                    parse_tree__write_deps_file__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 0) = ((MR_Box) ((MR_String) ".fact_tables:%=\044(os_subdir)%.\044O)\n\n"));
#line 211 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 1) = ((MR_Box) (parse_tree__write_deps_file__V_244_244));
#line 211 "write_deps_file.m"
                  }
#line 210 "write_deps_file.m"
                  {
#line 210 "write_deps_file.m"
                    parse_tree__write_deps_file__V_241_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_241_241, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 210 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_241_241, 1) = ((MR_Box) (parse_tree__write_deps_file__V_242_242));
#line 210 "write_deps_file.m"
                  }
#line 210 "write_deps_file.m"
                  {
#line 210 "write_deps_file.m"
                    parse_tree__write_deps_file__V_239_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 0) = ((MR_Box) ((MR_String) ".fact_tables.os = \044("));
#line 210 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 1) = ((MR_Box) (parse_tree__write_deps_file__V_241_241));
#line 210 "write_deps_file.m"
                  }
#line 209 "write_deps_file.m"
                  {
#line 209 "write_deps_file.m"
                    parse_tree__write_deps_file__V_238_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_238_238, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 209 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_238_238, 1) = ((MR_Box) (parse_tree__write_deps_file__V_239_239));
#line 209 "write_deps_file.m"
                  }
#line 209 "write_deps_file.m"
                  {
#line 209 "write_deps_file.m"
                    parse_tree__write_deps_file__V_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 209 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 1) = ((MR_Box) (parse_tree__write_deps_file__V_238_238));
#line 209 "write_deps_file.m"
                  }
#line 208 "write_deps_file.m"
                  {
#line 208 "write_deps_file.m"
                    mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_235_235);
                  }
#line 207 "write_deps_file.m"
                }
#line 216 "write_deps_file.m"
                break;
#line 216 "write_deps_file.m"
            }
#line 200 "write_deps_file.m"
          }
#line 232 "write_deps_file.m"
        {
#line 232 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__write_deps_file__SourceFileName_12, (MR_String) ".m", &parse_tree__write_deps_file__SourceFileBase_60);
        }
#line 234 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 233 "write_deps_file.m"
          {
#line 233 "write_deps_file.m"
            {
#line 233 "write_deps_file.m"
              parse_tree__write_deps_file__ErrFileName_61 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__SourceFileBase_60, (MR_String) ".err");
            }
#line 233 "write_deps_file.m"
          }
#line 234 "write_deps_file.m"
        else
#line 235 "write_deps_file.m"
          {
#line 235 "write_deps_file.m"
            {
#line 235 "write_deps_file.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_deps_file", (MR_String) "predicate \140parse_tree.write_deps_file.write_dependency_file\'/6", (MR_String) "source file doesn\'t end in \140.m\'");
#line 235 "write_deps_file.m"
              return;
            }
#line 235 "write_deps_file.m"
          }
#line 237 "write_deps_file.m"
        {
#line 237 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".optdate", (MR_Integer) 1, &parse_tree__write_deps_file__OptDateFileName_62);
        }
#line 239 "write_deps_file.m"
        {
#line 239 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".c_date", (MR_Integer) 1, &parse_tree__write_deps_file__CDateFileName_63);
        }
#line 241 "write_deps_file.m"
        {
#line 241 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".s_date", (MR_Integer) 1, &parse_tree__write_deps_file__AsmDateFileName_64);
        }
#line 243 "write_deps_file.m"
        {
#line 243 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".pic_s_date", (MR_Integer) 1, &parse_tree__write_deps_file__PicAsmDateFileName_65);
        }
#line 245 "write_deps_file.m"
        {
#line 245 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".\044O", (MR_Integer) 1, &parse_tree__write_deps_file__ObjFileName_66);
        }
#line 247 "write_deps_file.m"
        {
#line 247 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".il_date", (MR_Integer) 1, &parse_tree__write_deps_file__ILDateFileName_67);
        }
#line 249 "write_deps_file.m"
        {
#line 249 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".java_date", (MR_Integer) 1, &parse_tree__write_deps_file__JavaDateFileName_68);
        }
#line 253 "write_deps_file.m"
        {
#line 253 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".pic_o", (MR_Integer) 1, &parse_tree__write_deps_file__PicObjFileName_69);
        }
#line 255 "write_deps_file.m"
        {
#line 255 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int0", (MR_Integer) 1, &parse_tree__write_deps_file__Int0FileName_70);
        }
#line 266 "write_deps_file.m"
        {
#line 266 "write_deps_file.m"
          parse_tree__write_deps_file__V_307_307 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_307_307, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_68));
#line 266 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_307_307, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 266 "write_deps_file.m"
        }
#line 264 "write_deps_file.m"
        {
#line 264 "write_deps_file.m"
          parse_tree__write_deps_file__V_305_305 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_305_305, 0) = ((MR_Box) ((MR_String) " "));
#line 264 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_305_305, 1) = ((MR_Box) (parse_tree__write_deps_file__V_307_307));
#line 264 "write_deps_file.m"
        }
#line 264 "write_deps_file.m"
        {
#line 264 "write_deps_file.m"
          parse_tree__write_deps_file__V_304_304 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_304_304, 0) = ((MR_Box) (parse_tree__write_deps_file__ILDateFileName_67));
#line 264 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_304_304, 1) = ((MR_Box) (parse_tree__write_deps_file__V_305_305));
#line 264 "write_deps_file.m"
        }
#line 263 "write_deps_file.m"
        {
#line 263 "write_deps_file.m"
          parse_tree__write_deps_file__V_302_302 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_302_302, 0) = ((MR_Box) ((MR_String) " "));
#line 263 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_302_302, 1) = ((MR_Box) (parse_tree__write_deps_file__V_304_304));
#line 263 "write_deps_file.m"
        }
#line 263 "write_deps_file.m"
        {
#line 263 "write_deps_file.m"
          parse_tree__write_deps_file__V_301_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_301_301, 0) = ((MR_Box) (parse_tree__write_deps_file__PicAsmDateFileName_65));
#line 263 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_301_301, 1) = ((MR_Box) (parse_tree__write_deps_file__V_302_302));
#line 263 "write_deps_file.m"
        }
#line 262 "write_deps_file.m"
        {
#line 262 "write_deps_file.m"
          parse_tree__write_deps_file__V_299_299 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_299_299, 0) = ((MR_Box) ((MR_String) " "));
#line 262 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_299_299, 1) = ((MR_Box) (parse_tree__write_deps_file__V_301_301));
#line 262 "write_deps_file.m"
        }
#line 262 "write_deps_file.m"
        {
#line 262 "write_deps_file.m"
          parse_tree__write_deps_file__V_298_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_298_298, 0) = ((MR_Box) (parse_tree__write_deps_file__AsmDateFileName_64));
#line 262 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_298_298, 1) = ((MR_Box) (parse_tree__write_deps_file__V_299_299));
#line 262 "write_deps_file.m"
        }
#line 261 "write_deps_file.m"
        {
#line 261 "write_deps_file.m"
          parse_tree__write_deps_file__V_296_296 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_296_296, 0) = ((MR_Box) ((MR_String) " "));
#line 261 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_296_296, 1) = ((MR_Box) (parse_tree__write_deps_file__V_298_298));
#line 261 "write_deps_file.m"
        }
#line 261 "write_deps_file.m"
        {
#line 261 "write_deps_file.m"
          parse_tree__write_deps_file__V_295_295 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_295_295, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_63));
#line 261 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_295_295, 1) = ((MR_Box) (parse_tree__write_deps_file__V_296_296));
#line 261 "write_deps_file.m"
        }
#line 260 "write_deps_file.m"
        {
#line 260 "write_deps_file.m"
          parse_tree__write_deps_file__V_293_293 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_293_293, 0) = ((MR_Box) ((MR_String) " "));
#line 260 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_293_293, 1) = ((MR_Box) (parse_tree__write_deps_file__V_295_295));
#line 260 "write_deps_file.m"
        }
#line 260 "write_deps_file.m"
        {
#line 260 "write_deps_file.m"
          parse_tree__write_deps_file__V_292_292 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_292_292, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrFileName_61));
#line 260 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_292_292, 1) = ((MR_Box) (parse_tree__write_deps_file__V_293_293));
#line 260 "write_deps_file.m"
        }
#line 259 "write_deps_file.m"
        {
#line 259 "write_deps_file.m"
          parse_tree__write_deps_file__V_290_290 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_290_290, 0) = ((MR_Box) ((MR_String) " "));
#line 259 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_290_290, 1) = ((MR_Box) (parse_tree__write_deps_file__V_292_292));
#line 259 "write_deps_file.m"
        }
#line 259 "write_deps_file.m"
        {
#line 259 "write_deps_file.m"
          parse_tree__write_deps_file__V_289_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_289_289, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_42));
#line 259 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_289_289, 1) = ((MR_Box) (parse_tree__write_deps_file__V_290_290));
#line 259 "write_deps_file.m"
        }
#line 258 "write_deps_file.m"
        {
#line 258 "write_deps_file.m"
          parse_tree__write_deps_file__V_287_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_287_287, 0) = ((MR_Box) ((MR_String) " "));
#line 258 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_287_287, 1) = ((MR_Box) (parse_tree__write_deps_file__V_289_289));
#line 258 "write_deps_file.m"
        }
#line 258 "write_deps_file.m"
        {
#line 258 "write_deps_file.m"
          parse_tree__write_deps_file__V_286_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_286_286, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_62));
#line 258 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_286_286, 1) = ((MR_Box) (parse_tree__write_deps_file__V_287_287));
#line 258 "write_deps_file.m"
        }
#line 257 "write_deps_file.m"
        {
#line 257 "write_deps_file.m"
          parse_tree__write_deps_file__V_283_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 257 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 1) = ((MR_Box) (parse_tree__write_deps_file__V_286_286));
#line 257 "write_deps_file.m"
        }
#line 257 "write_deps_file.m"
        {
#line 257 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_283_283);
        }
#line 267 "write_deps_file.m"
        {
#line 267 "write_deps_file.m"
          parse_tree__write_deps_file__V_312_312 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_312_312, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 267 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_312_312, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 267 "write_deps_file.m"
        }
#line 267 "write_deps_file.m"
        {
#line 267 "write_deps_file.m"
          parse_tree__write_deps_file__V_309_309 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_309_309, 0) = ((MR_Box) ((MR_String) " : "));
#line 267 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_309_309, 1) = ((MR_Box) (parse_tree__write_deps_file__V_312_312));
#line 267 "write_deps_file.m"
        }
#line 267 "write_deps_file.m"
        {
#line 267 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_309_309);
        }
#line 270 "write_deps_file.m"
        {
#line 270 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__InclDeps_21);
        }
#line 272 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 272 "write_deps_file.m"
          {
#line 272 "write_deps_file.m"
          }
#line 272 "write_deps_file.m"
        else
#line 273 "write_deps_file.m"
          {
#line 273 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_314_314;
#line 273 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_317_317;

#line 273 "write_deps_file.m"
            {
#line 273 "write_deps_file.m"
              parse_tree__write_deps_file__V_317_317 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_317_317, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0FileName_70));
#line 273 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_317_317, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 273 "write_deps_file.m"
            }
#line 273 "write_deps_file.m"
            {
#line 273 "write_deps_file.m"
              parse_tree__write_deps_file__V_314_314 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_314_314, 0) = ((MR_Box) ((MR_String) " "));
#line 273 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_314_314, 1) = ((MR_Box) (parse_tree__write_deps_file__V_317_317));
#line 273 "write_deps_file.m"
            }
#line 273 "write_deps_file.m"
            {
#line 273 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_314_314);
            }
#line 273 "write_deps_file.m"
          }
#line 275 "write_deps_file.m"
        {
#line 275 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int0", parse_tree__write_deps_file__ParentDeps_16);
        }
#line 276 "write_deps_file.m"
        {
#line 276 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int", parse_tree__write_deps_file__LongDeps_51);
        }
#line 277 "write_deps_file.m"
        {
#line 277 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int2", parse_tree__write_deps_file__ShortDeps_53);
        }
#line 291 "write_deps_file.m"
        {
#line 291 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__NestedDeps_22);
        }
#line 293 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 293 "write_deps_file.m"
          {
#line 293 "write_deps_file.m"
          }
#line 293 "write_deps_file.m"
        else
#line 300 "write_deps_file.m"
          {
#line 300 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Write_72;
#line 301 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_356_356;

#line 294 "write_deps_file.m"
            {
#line 294 "write_deps_file.m"
              parse_tree__write_deps_file__Write_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 294 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_72, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[0]));
#line 294 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_72, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_1));
#line 294 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_72, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 294 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_72, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 294 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_72, 4) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 294 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_72, 5) = ((MR_Box) (parse_tree__write_deps_file__NestedDeps_22));
#line 294 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_72, 6) = ((MR_Box) (parse_tree__write_deps_file__DepStream_48));
#line 294 "write_deps_file.m"
            }
#line 301 "write_deps_file.m"
            {
#line 301 "write_deps_file.m"
              mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_942_942, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Write_72, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[13]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_356_356);
            }
#line 300 "write_deps_file.m"
          }
#line 304 "write_deps_file.m"
        {
#line 304 "write_deps_file.m"
          parse_tree__write_deps_file__ForeignIncludeFiles_76 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, parse_tree__write_deps_file__ForeignIncludeFilesCord_25);
        }
#line 307 "write_deps_file.m"
        {
#line 307 "write_deps_file.m"
          parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__SourceFileName_12, parse_tree__write_deps_file__ForeignIncludeFiles_76);
        }
#line 320 "write_deps_file.m"
        if ((parse_tree__write_deps_file__FactDeps_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 321 "write_deps_file.m"
          {
#line 321 "write_deps_file.m"
          }
#line 320 "write_deps_file.m"
        else
#line 311 "write_deps_file.m"
          {
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_358_358;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_361_361;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_362_362;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_364_364;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_366_366;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_367_367;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_369_369;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_370_370;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_372_372;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_373_373;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_375_375;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_377_377;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_378_378;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_380_380;

#line 318 "write_deps_file.m"
            {
#line 318 "write_deps_file.m"
              parse_tree__write_deps_file__V_380_380 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_380_380, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_66));
#line 318 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_380_380, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[102])));
#line 318 "write_deps_file.m"
            }
#line 317 "write_deps_file.m"
            {
#line 317 "write_deps_file.m"
              parse_tree__write_deps_file__V_378_378 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_378_378, 0) = ((MR_Box) ((MR_String) ".fact_tables.cs) : "));
#line 317 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_378_378, 1) = ((MR_Box) (parse_tree__write_deps_file__V_380_380));
#line 317 "write_deps_file.m"
            }
#line 317 "write_deps_file.m"
            {
#line 317 "write_deps_file.m"
              parse_tree__write_deps_file__V_377_377 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_377_377, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 317 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_377_377, 1) = ((MR_Box) (parse_tree__write_deps_file__V_378_378));
#line 317 "write_deps_file.m"
            }
#line 317 "write_deps_file.m"
            {
#line 317 "write_deps_file.m"
              parse_tree__write_deps_file__V_375_375 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_375_375, 0) = ((MR_Box) ((MR_String) "\044("));
#line 317 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_375_375, 1) = ((MR_Box) (parse_tree__write_deps_file__V_377_377));
#line 317 "write_deps_file.m"
            }
#line 316 "write_deps_file.m"
            {
#line 316 "write_deps_file.m"
              parse_tree__write_deps_file__V_373_373 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_373_373, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 316 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_373_373, 1) = ((MR_Box) (parse_tree__write_deps_file__V_375_375));
#line 316 "write_deps_file.m"
            }
#line 316 "write_deps_file.m"
            {
#line 316 "write_deps_file.m"
              parse_tree__write_deps_file__V_372_372 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_372_372, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 316 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_372_372, 1) = ((MR_Box) (parse_tree__write_deps_file__V_373_373));
#line 316 "write_deps_file.m"
            }
#line 315 "write_deps_file.m"
            {
#line 315 "write_deps_file.m"
              parse_tree__write_deps_file__V_370_370 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_370_370, 0) = ((MR_Box) ((MR_String) ".fact_tables) "));
#line 315 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_370_370, 1) = ((MR_Box) (parse_tree__write_deps_file__V_372_372));
#line 315 "write_deps_file.m"
            }
#line 315 "write_deps_file.m"
            {
#line 315 "write_deps_file.m"
              parse_tree__write_deps_file__V_369_369 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_369_369, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 315 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_369_369, 1) = ((MR_Box) (parse_tree__write_deps_file__V_370_370));
#line 315 "write_deps_file.m"
            }
#line 314 "write_deps_file.m"
            {
#line 314 "write_deps_file.m"
              parse_tree__write_deps_file__V_367_367 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_367_367, 0) = ((MR_Box) ((MR_String) ".fact_tables.os) : \044("));
#line 314 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_367_367, 1) = ((MR_Box) (parse_tree__write_deps_file__V_369_369));
#line 314 "write_deps_file.m"
            }
#line 314 "write_deps_file.m"
            {
#line 314 "write_deps_file.m"
              parse_tree__write_deps_file__V_366_366 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_366_366, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 314 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_366_366, 1) = ((MR_Box) (parse_tree__write_deps_file__V_367_367));
#line 314 "write_deps_file.m"
            }
#line 314 "write_deps_file.m"
            {
#line 314 "write_deps_file.m"
              parse_tree__write_deps_file__V_364_364 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_364_364, 0) = ((MR_Box) ((MR_String) "\044("));
#line 314 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_364_364, 1) = ((MR_Box) (parse_tree__write_deps_file__V_366_366));
#line 314 "write_deps_file.m"
            }
#line 313 "write_deps_file.m"
            {
#line 313 "write_deps_file.m"
              parse_tree__write_deps_file__V_362_362 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_362_362, 0) = ((MR_Box) ((MR_String) ".fact_tables)\n\n"));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_362_362, 1) = ((MR_Box) (parse_tree__write_deps_file__V_364_364));
#line 313 "write_deps_file.m"
            }
#line 313 "write_deps_file.m"
            {
#line 313 "write_deps_file.m"
              parse_tree__write_deps_file__V_361_361 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_361_361, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_361_361, 1) = ((MR_Box) (parse_tree__write_deps_file__V_362_362));
#line 313 "write_deps_file.m"
            }
#line 313 "write_deps_file.m"
            {
#line 313 "write_deps_file.m"
              parse_tree__write_deps_file__V_358_358 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_358_358, 0) = ((MR_Box) ((MR_String) " \\\n\t\044("));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_358_358, 1) = ((MR_Box) (parse_tree__write_deps_file__V_361_361));
#line 313 "write_deps_file.m"
            }
#line 312 "write_deps_file.m"
            {
#line 312 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_358_358);
            }
#line 311 "write_deps_file.m"
          }
#line 324 "write_deps_file.m"
        {
#line 324 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 332, &parse_tree__write_deps_file__UseOptFiles_79);
        }
#line 325 "write_deps_file.m"
        {
#line 325 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 330, &parse_tree__write_deps_file__Intermod_80);
        }
#line 327 "write_deps_file.m"
        {
#line 327 "write_deps_file.m"
          libs__globals__lookup_accumulating_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 651, &parse_tree__write_deps_file__IntermodDirs_81);
        }
#line 338 "write_deps_file.m"
#line 338 "write_deps_file.m"
        switch (parse_tree__write_deps_file__Intermod_80) {
#line 338 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 338 "write_deps_file.m"
          case (MR_Integer) 0:
#line 339 "write_deps_file.m"
            {
#line 339 "write_deps_file.m"
            }
#line 338 "write_deps_file.m"
            break;
#line 338 "write_deps_file.m"
          case (MR_Integer) 1:
#line 334 "write_deps_file.m"
            {
#line 334 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_387_387;
#line 334 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_390_390;
#line 334 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_395_395;

#line 335 "write_deps_file.m"
              {
#line 335 "write_deps_file.m"
                parse_tree__write_deps_file__V_390_390 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_390_390, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_66));
#line 335 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_390_390, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[109])));
#line 335 "write_deps_file.m"
              }
#line 335 "write_deps_file.m"
              {
#line 335 "write_deps_file.m"
                parse_tree__write_deps_file__V_387_387 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_387_387, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 335 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_387_387, 1) = ((MR_Box) (parse_tree__write_deps_file__V_390_390));
#line 335 "write_deps_file.m"
              }
#line 335 "write_deps_file.m"
              {
#line 335 "write_deps_file.m"
                mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_387_387);
              }
#line 337 "write_deps_file.m"
              {
#line 337 "write_deps_file.m"
                parse_tree__write_deps_file__V_395_395 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__AllDeps_9);
              }
#line 336 "write_deps_file.m"
              {
#line 336 "write_deps_file.m"
                parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".mh", parse_tree__write_deps_file__V_395_395);
              }
#line 334 "write_deps_file.m"
            }
#line 338 "write_deps_file.m"
            break;
#line 338 "write_deps_file.m"
        }
#line 342 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Intermod_80 == (MR_Integer) 1);
#line 343 "write_deps_file.m"
        if (!(parse_tree__write_deps_file__succeeded))
#line 343 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__UseOptFiles_79 == (MR_Integer) 1);
#line 410 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 355 "write_deps_file.m"
          {
#line 355 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOpt_82;
#line 355 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__UseTransOpt_83;
#line 355 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_397_397;
#line 355 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_400_400;
#line 355 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_401_401;
#line 355 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_403_403;
#line 355 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_404_404;
#line 355 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_406_406;
#line 355 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_407_407;
#line 355 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_409_409;
#line 355 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_410_410;
#line 355 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_412_412;
#line 355 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_413_413;
#line 355 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_415_415;
#line 355 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_416_416;
#line 355 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_418_418;

#line 354 "write_deps_file.m"
            {
#line 354 "write_deps_file.m"
              parse_tree__write_deps_file__V_418_418 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_418_418, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_68));
#line 354 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_418_418, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[109])));
#line 354 "write_deps_file.m"
            }
#line 353 "write_deps_file.m"
            {
#line 353 "write_deps_file.m"
              parse_tree__write_deps_file__V_416_416 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_416_416, 0) = ((MR_Box) ((MR_String) " "));
#line 353 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_416_416, 1) = ((MR_Box) (parse_tree__write_deps_file__V_418_418));
#line 353 "write_deps_file.m"
            }
#line 353 "write_deps_file.m"
            {
#line 353 "write_deps_file.m"
              parse_tree__write_deps_file__V_415_415 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_415_415, 0) = ((MR_Box) (parse_tree__write_deps_file__ILDateFileName_67));
#line 353 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_415_415, 1) = ((MR_Box) (parse_tree__write_deps_file__V_416_416));
#line 353 "write_deps_file.m"
            }
#line 352 "write_deps_file.m"
            {
#line 352 "write_deps_file.m"
              parse_tree__write_deps_file__V_413_413 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_413_413, 0) = ((MR_Box) ((MR_String) " "));
#line 352 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_413_413, 1) = ((MR_Box) (parse_tree__write_deps_file__V_415_415));
#line 352 "write_deps_file.m"
            }
#line 352 "write_deps_file.m"
            {
#line 352 "write_deps_file.m"
              parse_tree__write_deps_file__V_412_412 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_412_412, 0) = ((MR_Box) (parse_tree__write_deps_file__PicAsmDateFileName_65));
#line 352 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_412_412, 1) = ((MR_Box) (parse_tree__write_deps_file__V_413_413));
#line 352 "write_deps_file.m"
            }
#line 351 "write_deps_file.m"
            {
#line 351 "write_deps_file.m"
              parse_tree__write_deps_file__V_410_410 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_410_410, 0) = ((MR_Box) ((MR_String) " "));
#line 351 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_410_410, 1) = ((MR_Box) (parse_tree__write_deps_file__V_412_412));
#line 351 "write_deps_file.m"
            }
#line 351 "write_deps_file.m"
            {
#line 351 "write_deps_file.m"
              parse_tree__write_deps_file__V_409_409 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_409_409, 0) = ((MR_Box) (parse_tree__write_deps_file__AsmDateFileName_64));
#line 351 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_409_409, 1) = ((MR_Box) (parse_tree__write_deps_file__V_410_410));
#line 351 "write_deps_file.m"
            }
#line 350 "write_deps_file.m"
            {
#line 350 "write_deps_file.m"
              parse_tree__write_deps_file__V_407_407 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_407_407, 0) = ((MR_Box) ((MR_String) " "));
#line 350 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_407_407, 1) = ((MR_Box) (parse_tree__write_deps_file__V_409_409));
#line 350 "write_deps_file.m"
            }
#line 350 "write_deps_file.m"
            {
#line 350 "write_deps_file.m"
              parse_tree__write_deps_file__V_406_406 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_406_406, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_63));
#line 350 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_406_406, 1) = ((MR_Box) (parse_tree__write_deps_file__V_407_407));
#line 350 "write_deps_file.m"
            }
#line 349 "write_deps_file.m"
            {
#line 349 "write_deps_file.m"
              parse_tree__write_deps_file__V_404_404 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_404_404, 0) = ((MR_Box) ((MR_String) " "));
#line 349 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_404_404, 1) = ((MR_Box) (parse_tree__write_deps_file__V_406_406));
#line 349 "write_deps_file.m"
            }
#line 349 "write_deps_file.m"
            {
#line 349 "write_deps_file.m"
              parse_tree__write_deps_file__V_403_403 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_403_403, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrFileName_61));
#line 349 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_403_403, 1) = ((MR_Box) (parse_tree__write_deps_file__V_404_404));
#line 349 "write_deps_file.m"
            }
#line 348 "write_deps_file.m"
            {
#line 348 "write_deps_file.m"
              parse_tree__write_deps_file__V_401_401 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_401_401, 0) = ((MR_Box) ((MR_String) " "));
#line 348 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_401_401, 1) = ((MR_Box) (parse_tree__write_deps_file__V_403_403));
#line 348 "write_deps_file.m"
            }
#line 348 "write_deps_file.m"
            {
#line 348 "write_deps_file.m"
              parse_tree__write_deps_file__V_400_400 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_400_400, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_42));
#line 348 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_400_400, 1) = ((MR_Box) (parse_tree__write_deps_file__V_401_401));
#line 348 "write_deps_file.m"
            }
#line 347 "write_deps_file.m"
            {
#line 347 "write_deps_file.m"
              parse_tree__write_deps_file__V_397_397 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_397_397, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 347 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_397_397, 1) = ((MR_Box) (parse_tree__write_deps_file__V_400_400));
#line 347 "write_deps_file.m"
            }
#line 346 "write_deps_file.m"
            {
#line 346 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_397_397);
            }
#line 367 "write_deps_file.m"
            {
#line 367 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 334, &parse_tree__write_deps_file__TransOpt_82);
            }
#line 369 "write_deps_file.m"
            {
#line 369 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 333, &parse_tree__write_deps_file__UseTransOpt_83);
            }
#line 373 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__TransOpt_82 == (MR_Integer) 1);
#line 374 "write_deps_file.m"
            if (!(parse_tree__write_deps_file__succeeded))
#line 374 "write_deps_file.m"
              parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__UseTransOpt_83 == (MR_Integer) 1);
#line 399 "write_deps_file.m"
            if (parse_tree__write_deps_file__succeeded)
#line 377 "write_deps_file.m"
              {
#line 377 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__BuildOptFiles_84;
#line 377 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptDeps_85;
#line 377 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__TransOptDeps_86;
#line 377 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptInt0Deps_87;
#line 377 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_424_424;
#line 377 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_426_426;
#line 377 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_427_427;
#line 377 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_433_433;

#line 377 "write_deps_file.m"
                {
#line 377 "write_deps_file.m"
                  mercury__bool__not_2_p_0(parse_tree__write_deps_file__UseTransOpt_83, &parse_tree__write_deps_file__BuildOptFiles_84);
                }
#line 379 "write_deps_file.m"
                {
#line 379 "write_deps_file.m"
                  parse_tree__write_deps_file__V_426_426 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__LongDeps_51);
                }
#line 379 "write_deps_file.m"
                {
#line 379 "write_deps_file.m"
                  parse_tree__write_deps_file__V_424_424 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 379 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_424_424, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 379 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_424_424, 1) = ((MR_Box) (parse_tree__write_deps_file__V_426_426));
#line 379 "write_deps_file.m"
                }
#line 378 "write_deps_file.m"
                {
#line 378 "write_deps_file.m"
                  parse_tree__write_deps_file__get_both_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__BuildOptFiles_84, parse_tree__write_deps_file__IntermodDirs_81, parse_tree__write_deps_file__V_424_424, &parse_tree__write_deps_file__OptDeps_85, &parse_tree__write_deps_file__TransOptDeps_86);
                }
#line 382 "write_deps_file.m"
                {
#line 382 "write_deps_file.m"
                  parse_tree__write_deps_file__V_427_427 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[4], parse_tree__write_deps_file__OptDeps_85);
                }
#line 381 "write_deps_file.m"
                {
#line 381 "write_deps_file.m"
                  parse_tree__write_deps_file__OptInt0Deps_87 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__V_427_427);
                }
#line 383 "write_deps_file.m"
                {
#line 383 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".opt", parse_tree__write_deps_file__OptDeps_85);
                }
#line 385 "write_deps_file.m"
                {
#line 385 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int0", parse_tree__write_deps_file__OptInt0Deps_87);
                }
#line 389 "write_deps_file.m"
                {
#line 389 "write_deps_file.m"
                  parse_tree__write_deps_file__V_433_433 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_433_433, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 389 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_433_433, 1) = ((MR_Box) (parse_tree__write_deps_file__V_403_403));
#line 389 "write_deps_file.m"
                }
#line 388 "write_deps_file.m"
                {
#line 388 "write_deps_file.m"
                  mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_433_433);
                }
#line 397 "write_deps_file.m"
                {
#line 397 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".trans_opt", parse_tree__write_deps_file__TransOptDeps_86);
                }
#line 377 "write_deps_file.m"
              }
#line 399 "write_deps_file.m"
            else
#line 400 "write_deps_file.m"
              {
#line 400 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_458_458;
#line 400 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_460_460;
#line 400 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_461_461;
#line 400 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__BuildOptFiles_922;
#line 400 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptDeps_923;
#line 400 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptInt0Deps_924;

#line 400 "write_deps_file.m"
                {
#line 400 "write_deps_file.m"
                  mercury__bool__not_2_p_0(parse_tree__write_deps_file__UseOptFiles_79, &parse_tree__write_deps_file__BuildOptFiles_922);
                }
#line 402 "write_deps_file.m"
                {
#line 402 "write_deps_file.m"
                  parse_tree__write_deps_file__V_460_460 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__LongDeps_51);
                }
#line 402 "write_deps_file.m"
                {
#line 402 "write_deps_file.m"
                  parse_tree__write_deps_file__V_458_458 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_458_458, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 402 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_458_458, 1) = ((MR_Box) (parse_tree__write_deps_file__V_460_460));
#line 402 "write_deps_file.m"
                }
#line 401 "write_deps_file.m"
                {
#line 401 "write_deps_file.m"
                  parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__BuildOptFiles_922, parse_tree__write_deps_file__IntermodDirs_81, (MR_String) ".opt", parse_tree__write_deps_file__V_458_458, &parse_tree__write_deps_file__OptDeps_923);
                }
#line 404 "write_deps_file.m"
                {
#line 404 "write_deps_file.m"
                  parse_tree__write_deps_file__V_461_461 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[5], parse_tree__write_deps_file__OptDeps_923);
                }
#line 403 "write_deps_file.m"
                {
#line 403 "write_deps_file.m"
                  parse_tree__write_deps_file__OptInt0Deps_924 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__V_461_461);
                }
#line 405 "write_deps_file.m"
                {
#line 405 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".opt", parse_tree__write_deps_file__OptDeps_923);
                }
#line 407 "write_deps_file.m"
                {
#line 407 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int0", parse_tree__write_deps_file__OptInt0Deps_924);
                }
#line 400 "write_deps_file.m"
              }
#line 355 "write_deps_file.m"
          }
#line 410 "write_deps_file.m"
        else
#line 410 "write_deps_file.m"
          {
#line 410 "write_deps_file.m"
          }
#line 414 "write_deps_file.m"
        {
#line 414 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 256, &parse_tree__write_deps_file__HighLevelCode_88);
        }
#line 415 "write_deps_file.m"
        {
#line 415 "write_deps_file.m"
          libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_7, &parse_tree__write_deps_file__CompilationTarget_89);
        }
#line 417 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__HighLevelCode_88 == (MR_Integer) 1);
#line 417 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 418 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__CompilationTarget_89 == (MR_Integer) 0);
#line 431 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 429 "write_deps_file.m"
          {
#line 429 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_468_468;
#line 429 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_471_471;
#line 429 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_472_472;
#line 429 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_474_474;

#line 428 "write_deps_file.m"
            {
#line 428 "write_deps_file.m"
              parse_tree__write_deps_file__V_474_474 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_474_474, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_66));
#line 428 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_474_474, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[104])));
#line 428 "write_deps_file.m"
            }
#line 427 "write_deps_file.m"
            {
#line 427 "write_deps_file.m"
              parse_tree__write_deps_file__V_472_472 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_472_472, 0) = ((MR_Box) ((MR_String) " "));
#line 427 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_472_472, 1) = ((MR_Box) (parse_tree__write_deps_file__V_474_474));
#line 427 "write_deps_file.m"
            }
#line 427 "write_deps_file.m"
            {
#line 427 "write_deps_file.m"
              parse_tree__write_deps_file__V_471_471 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_471_471, 0) = ((MR_Box) (parse_tree__write_deps_file__PicObjFileName_69));
#line 427 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_471_471, 1) = ((MR_Box) (parse_tree__write_deps_file__V_472_472));
#line 427 "write_deps_file.m"
            }
#line 426 "write_deps_file.m"
            {
#line 426 "write_deps_file.m"
              parse_tree__write_deps_file__V_468_468 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_468_468, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 426 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_468_468, 1) = ((MR_Box) (parse_tree__write_deps_file__V_471_471));
#line 426 "write_deps_file.m"
            }
#line 425 "write_deps_file.m"
            {
#line 425 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_468_468);
            }
#line 430 "write_deps_file.m"
            {
#line 430 "write_deps_file.m"
              parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".mih", parse_tree__write_deps_file__AllDeps_9);
            }
#line 429 "write_deps_file.m"
          }
#line 431 "write_deps_file.m"
        else
#line 431 "write_deps_file.m"
          {
#line 431 "write_deps_file.m"
          }
#line 444 "write_deps_file.m"
        {
#line 444 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".c", (MR_Integer) 1, &parse_tree__write_deps_file__CFileName_90);
        }
#line 446 "write_deps_file.m"
        {
#line 446 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".mh", (MR_Integer) 1, &parse_tree__write_deps_file__HeaderFileName_91);
        }
#line 448 "write_deps_file.m"
        {
#line 448 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".mih", (MR_Integer) 1, &parse_tree__write_deps_file__HeaderFileName2_92);
        }
#line 452 "write_deps_file.m"
        {
#line 452 "write_deps_file.m"
          parse_tree__write_deps_file__V_498_498 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 452 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_498_498, 0) = ((MR_Box) (parse_tree__write_deps_file__CFileName_90));
#line 452 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_498_498, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[102])));
#line 452 "write_deps_file.m"
        }
#line 452 "write_deps_file.m"
        {
#line 452 "write_deps_file.m"
          parse_tree__write_deps_file__V_496_496 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 452 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_496_496, 0) = ((MR_Box) ((MR_String) " : "));
#line 452 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_496_496, 1) = ((MR_Box) (parse_tree__write_deps_file__V_498_498));
#line 452 "write_deps_file.m"
        }
#line 452 "write_deps_file.m"
        {
#line 452 "write_deps_file.m"
          parse_tree__write_deps_file__V_495_495 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 452 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_495_495, 0) = ((MR_Box) (parse_tree__write_deps_file__HeaderFileName2_92));
#line 452 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_495_495, 1) = ((MR_Box) (parse_tree__write_deps_file__V_496_496));
#line 452 "write_deps_file.m"
        }
#line 452 "write_deps_file.m"
        {
#line 452 "write_deps_file.m"
          parse_tree__write_deps_file__V_493_493 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 452 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_493_493, 0) = ((MR_Box) ((MR_String) " "));
#line 452 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_493_493, 1) = ((MR_Box) (parse_tree__write_deps_file__V_495_495));
#line 452 "write_deps_file.m"
        }
#line 452 "write_deps_file.m"
        {
#line 452 "write_deps_file.m"
          parse_tree__write_deps_file__V_492_492 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 452 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_492_492, 0) = ((MR_Box) (parse_tree__write_deps_file__HeaderFileName_91));
#line 452 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_492_492, 1) = ((MR_Box) (parse_tree__write_deps_file__V_493_493));
#line 452 "write_deps_file.m"
        }
#line 451 "write_deps_file.m"
        {
#line 451 "write_deps_file.m"
          parse_tree__write_deps_file__V_489_489 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_489_489, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 451 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_489_489, 1) = ((MR_Box) (parse_tree__write_deps_file__V_492_492));
#line 451 "write_deps_file.m"
        }
#line 450 "write_deps_file.m"
        {
#line 450 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_489_489);
        }
#line 458 "write_deps_file.m"
        {
#line 458 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".il", (MR_Integer) 1, &parse_tree__write_deps_file__ILFileName_93);
        }
#line 460 "write_deps_file.m"
        {
#line 460 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".java", (MR_Integer) 1, &parse_tree__write_deps_file__JavaFileName_94);
        }
#line 463 "write_deps_file.m"
        {
#line 463 "write_deps_file.m"
          parse_tree__write_deps_file__V_508_508 = make__make_module_dep_file_extension_0_f_0();
        }
#line 462 "write_deps_file.m"
        {
#line 462 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__V_508_508, (MR_Integer) 1, &parse_tree__write_deps_file__ModuleDepFileName_95);
        }
#line 473 "write_deps_file.m"
        {
#line 473 "write_deps_file.m"
          parse_tree__write_deps_file__V_537_537 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_537_537, 0) = ((MR_Box) (parse_tree__write_deps_file__CFileName_90));
#line 473 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_537_537, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[16])));
#line 473 "write_deps_file.m"
        }
#line 473 "write_deps_file.m"
        {
#line 473 "write_deps_file.m"
          parse_tree__write_deps_file__V_535_535 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_535_535, 0) = ((MR_Box) ((MR_String) " : "));
#line 473 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_535_535, 1) = ((MR_Box) (parse_tree__write_deps_file__V_537_537));
#line 473 "write_deps_file.m"
        }
#line 473 "write_deps_file.m"
        {
#line 473 "write_deps_file.m"
          parse_tree__write_deps_file__V_534_534 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_534_534, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_95));
#line 473 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_534_534, 1) = ((MR_Box) (parse_tree__write_deps_file__V_535_535));
#line 473 "write_deps_file.m"
        }
#line 472 "write_deps_file.m"
        {
#line 472 "write_deps_file.m"
          parse_tree__write_deps_file__V_532_532 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_532_532, 0) = ((MR_Box) ((MR_String) " else\n"));
#line 472 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_532_532, 1) = ((MR_Box) (parse_tree__write_deps_file__V_534_534));
#line 472 "write_deps_file.m"
        }
#line 471 "write_deps_file.m"
        {
#line 471 "write_deps_file.m"
          parse_tree__write_deps_file__V_530_530 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_530_530, 0) = ((MR_Box) ((MR_String) "\n"));
#line 471 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_530_530, 1) = ((MR_Box) (parse_tree__write_deps_file__V_532_532));
#line 471 "write_deps_file.m"
        }
#line 471 "write_deps_file.m"
        {
#line 471 "write_deps_file.m"
          parse_tree__write_deps_file__V_529_529 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_529_529, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaFileName_94));
#line 471 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_529_529, 1) = ((MR_Box) (parse_tree__write_deps_file__V_530_530));
#line 471 "write_deps_file.m"
        }
#line 471 "write_deps_file.m"
        {
#line 471 "write_deps_file.m"
          parse_tree__write_deps_file__V_527_527 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_527_527, 0) = ((MR_Box) ((MR_String) " : "));
#line 471 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_527_527, 1) = ((MR_Box) (parse_tree__write_deps_file__V_529_529));
#line 471 "write_deps_file.m"
        }
#line 471 "write_deps_file.m"
        {
#line 471 "write_deps_file.m"
          parse_tree__write_deps_file__V_526_526 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_526_526, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_95));
#line 471 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_526_526, 1) = ((MR_Box) (parse_tree__write_deps_file__V_527_527));
#line 471 "write_deps_file.m"
        }
#line 470 "write_deps_file.m"
        {
#line 470 "write_deps_file.m"
          parse_tree__write_deps_file__V_524_524 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_524_524, 0) = ((MR_Box) ((MR_String) " ifeq (\044(findstring java,\044(GRADE)),java)\n"));
#line 470 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_524_524, 1) = ((MR_Box) (parse_tree__write_deps_file__V_526_526));
#line 470 "write_deps_file.m"
        }
#line 469 "write_deps_file.m"
        {
#line 469 "write_deps_file.m"
          parse_tree__write_deps_file__V_522_522 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_522_522, 0) = ((MR_Box) ((MR_String) "else\n"));
#line 469 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_522_522, 1) = ((MR_Box) (parse_tree__write_deps_file__V_524_524));
#line 469 "write_deps_file.m"
        }
#line 468 "write_deps_file.m"
        {
#line 468 "write_deps_file.m"
          parse_tree__write_deps_file__V_520_520 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_520_520, 0) = ((MR_Box) ((MR_String) "\n"));
#line 468 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_520_520, 1) = ((MR_Box) (parse_tree__write_deps_file__V_522_522));
#line 468 "write_deps_file.m"
        }
#line 468 "write_deps_file.m"
        {
#line 468 "write_deps_file.m"
          parse_tree__write_deps_file__V_519_519 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_519_519, 0) = ((MR_Box) (parse_tree__write_deps_file__ILFileName_93));
#line 468 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_519_519, 1) = ((MR_Box) (parse_tree__write_deps_file__V_520_520));
#line 468 "write_deps_file.m"
        }
#line 468 "write_deps_file.m"
        {
#line 468 "write_deps_file.m"
          parse_tree__write_deps_file__V_517_517 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_517_517, 0) = ((MR_Box) ((MR_String) " : "));
#line 468 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_517_517, 1) = ((MR_Box) (parse_tree__write_deps_file__V_519_519));
#line 468 "write_deps_file.m"
        }
#line 468 "write_deps_file.m"
        {
#line 468 "write_deps_file.m"
          parse_tree__write_deps_file__V_516_516 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_516_516, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_95));
#line 468 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_516_516, 1) = ((MR_Box) (parse_tree__write_deps_file__V_517_517));
#line 468 "write_deps_file.m"
        }
#line 467 "write_deps_file.m"
        {
#line 467 "write_deps_file.m"
          parse_tree__write_deps_file__V_514_514 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_514_514, 0) = ((MR_Box) ((MR_String) "ifeq (\044(findstring il,\044(GRADE)),il)\n"));
#line 467 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_514_514, 1) = ((MR_Box) (parse_tree__write_deps_file__V_516_516));
#line 467 "write_deps_file.m"
        }
#line 466 "write_deps_file.m"
        {
#line 466 "write_deps_file.m"
          parse_tree__write_deps_file__V_511_511 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_511_511, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 466 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_511_511, 1) = ((MR_Box) (parse_tree__write_deps_file__V_514_514));
#line 466 "write_deps_file.m"
        }
#line 465 "write_deps_file.m"
        {
#line 465 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_511_511);
        }
#line 491 "write_deps_file.m"
        {
#line 491 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".date", (MR_Integer) 1, &parse_tree__write_deps_file__DateFileName_96);
        }
#line 493 "write_deps_file.m"
        {
#line 493 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".date0", (MR_Integer) 1, &parse_tree__write_deps_file__Date0FileName_97);
        }
#line 497 "write_deps_file.m"
        {
#line 497 "write_deps_file.m"
          parse_tree__write_deps_file__V_557_557 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_557_557, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_97));
#line 497 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_557_557, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 497 "write_deps_file.m"
        }
#line 496 "write_deps_file.m"
        {
#line 496 "write_deps_file.m"
          parse_tree__write_deps_file__V_555_555 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_555_555, 0) = ((MR_Box) ((MR_String) " "));
#line 496 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_555_555, 1) = ((MR_Box) (parse_tree__write_deps_file__V_557_557));
#line 496 "write_deps_file.m"
        }
#line 496 "write_deps_file.m"
        {
#line 496 "write_deps_file.m"
          parse_tree__write_deps_file__V_554_554 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_554_554, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_96));
#line 496 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_554_554, 1) = ((MR_Box) (parse_tree__write_deps_file__V_555_555));
#line 496 "write_deps_file.m"
        }
#line 496 "write_deps_file.m"
        {
#line 496 "write_deps_file.m"
          parse_tree__write_deps_file__V_551_551 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_551_551, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 496 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_551_551, 1) = ((MR_Box) (parse_tree__write_deps_file__V_554_554));
#line 496 "write_deps_file.m"
        }
#line 495 "write_deps_file.m"
        {
#line 495 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_551_551);
        }
#line 498 "write_deps_file.m"
        {
#line 498 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".date", parse_tree__write_deps_file__ParentDeps_16);
        }
#line 499 "write_deps_file.m"
        {
#line 499 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_309_309);
        }
#line 500 "write_deps_file.m"
        {
#line 500 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int0", parse_tree__write_deps_file__ParentDeps_16);
        }
#line 501 "write_deps_file.m"
        {
#line 501 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int3", parse_tree__write_deps_file__LongDeps_51);
        }
#line 502 "write_deps_file.m"
        {
#line 502 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int3", parse_tree__write_deps_file__ShortDeps_53);
        }
#line 504 "write_deps_file.m"
        {
#line 504 "write_deps_file.m"
          parse_tree__write_deps_file__V_572_572 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_572_572, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 504 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_572_572, 1) = ((MR_Box) (parse_tree__write_deps_file__V_557_557));
#line 504 "write_deps_file.m"
        }
#line 504 "write_deps_file.m"
        {
#line 504 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_572_572);
        }
#line 505 "write_deps_file.m"
        {
#line 505 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".date0", parse_tree__write_deps_file__ParentDeps_16);
        }
#line 506 "write_deps_file.m"
        {
#line 506 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_309_309);
        }
#line 507 "write_deps_file.m"
        {
#line 507 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int3", parse_tree__write_deps_file__LongDeps_51);
        }
#line 508 "write_deps_file.m"
        {
#line 508 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int3", parse_tree__write_deps_file__ShortDeps_53);
        }
#line 509 "write_deps_file.m"
        {
#line 509 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_48, (MR_String) "\n\n");
        }
#line 515 "write_deps_file.m"
        {
#line 515 "write_deps_file.m"
          parse_tree__source_file_map__have_source_file_map_3_p_0(&parse_tree__write_deps_file__HaveMap_98);
        }
#line 519 "write_deps_file.m"
#line 519 "write_deps_file.m"
        switch (parse_tree__write_deps_file__HaveMap_98) {
#line 519 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 519 "write_deps_file.m"
          case (MR_Integer) 0:
#line 521 "write_deps_file.m"
            parse_tree__write_deps_file__ModuleArg_99 = parse_tree__write_deps_file__SourceFileName_12;
#line 519 "write_deps_file.m"
            break;
#line 519 "write_deps_file.m"
          case (MR_Integer) 1:
#line 518 "write_deps_file.m"
            {
#line 518 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__write_deps_file__SourceFileModuleName_13, &parse_tree__write_deps_file__ModuleArg_99);
            }
#line 519 "write_deps_file.m"
            break;
#line 519 "write_deps_file.m"
        }
#line 524 "write_deps_file.m"
        {
#line 524 "write_deps_file.m"
          libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_7, &parse_tree__write_deps_file__Target_100);
        }
#line 525 "write_deps_file.m"
        {
#line 525 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 163, &parse_tree__write_deps_file__SignAssembly_101);
        }
#line 533 "write_deps_file.m"
        {
#line 533 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".dll", (MR_Integer) 1, &parse_tree__write_deps_file__DllFileName_102);
        }
#line 535 "write_deps_file.m"
        {
#line 535 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".class", (MR_Integer) 1, &parse_tree__write_deps_file__ClassFileName_103);
        }
#line 537 "write_deps_file.m"
        {
#line 537 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".beam", (MR_Integer) 1, &parse_tree__write_deps_file__BeamFileName_104);
        }
#line 539 "write_deps_file.m"
        {
#line 539 "write_deps_file.m"
          parse_tree__write_deps_file__SubModules_105 = parse_tree__write_deps_file__submodules_2_f_0(parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__AllDeps_9);
        }
#line 541 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Target_100 == (MR_Integer) 1);
#line 541 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 542 "write_deps_file.m"
          {
#line 542 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = mercury__set__non_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__SubModules_105);
          }
#line 548 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 544 "write_deps_file.m"
          {
#line 544 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_601_601;
#line 544 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_607_607;

#line 544 "write_deps_file.m"
            {
#line 544 "write_deps_file.m"
              parse_tree__write_deps_file__V_601_601 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 544 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_601_601, 0) = ((MR_Box) (parse_tree__write_deps_file__DllFileName_102));
#line 544 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_601_601, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[109])));
#line 544 "write_deps_file.m"
            }
#line 544 "write_deps_file.m"
            {
#line 544 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_601_601);
            }
#line 546 "write_deps_file.m"
            {
#line 546 "write_deps_file.m"
              parse_tree__write_deps_file__V_607_607 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__SubModules_105);
            }
#line 545 "write_deps_file.m"
            {
#line 545 "write_deps_file.m"
              parse_tree__write_deps_file__write_dll_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) "", parse_tree__write_deps_file__V_607_607);
            }
#line 547 "write_deps_file.m"
            {
#line 547 "write_deps_file.m"
              mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_48);
            }
#line 544 "write_deps_file.m"
          }
#line 548 "write_deps_file.m"
        else
#line 548 "write_deps_file.m"
          {
#line 548 "write_deps_file.m"
          }
#line 555 "write_deps_file.m"
#line 555 "write_deps_file.m"
        switch (MR_tag((MR_Word) parse_tree__write_deps_file__ContainsForeignCode_26)) {
#line 555 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 555 "write_deps_file.m"
          case (MR_Integer) 0:
#line 555 "write_deps_file.m"
#line 555 "write_deps_file.m"
            switch (MR_unmkbody(parse_tree__write_deps_file__ContainsForeignCode_26)) {
#line 555 "write_deps_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 555 "write_deps_file.m"
              case (MR_Integer) 0:
#line 615 "write_deps_file.m"
                {
#line 616 "write_deps_file.m"
                  {
#line 616 "write_deps_file.m"
                    mercury__set__init_1_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, &parse_tree__write_deps_file__LangSet_106);
                  }
#line 617 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportModules_107 = parse_tree__write_deps_file__ForeignImportModules0_24;
#line 615 "write_deps_file.m"
                }
#line 555 "write_deps_file.m"
                break;
#line 555 "write_deps_file.m"
              case (MR_Integer) 1:
#line 556 "write_deps_file.m"
                {
#line 556 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__TypeInfo_952_952;
#line 556 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__SrcLangSet_108;
#line 556 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__SrcForeignImportModules_109;
#line 556 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__IntItemBlocksCord_112;
#line 556 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__IntLangSet_113;
#line 556 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__IntForeignImportModules_114;
#line 556 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__OptLangSet_117;
#line 556 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__OptForeignImportModules_118;
#line 556 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__IntForOptLangSet_121;
#line 556 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__IntForOptForeignImportModules_122;
#line 556 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_610_610;
#line 556 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_611_611;
#line 556 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_612_612;
#line 556 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_613_613;
#line 556 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_614_614;
#line 556 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_615_615;
#line 556 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_616_616;
#line 557 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_110_110;
#line 557 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_111_111;
#line 564 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_115_115;
#line 564 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_116_116;
#line 567 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_119_119;
#line 567 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_120_120;
#line 570 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_123_123;
#line 570 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_124_124;
#line 583 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__C0_125;
#line 583 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__CSharp0_126;
#line 583 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__Java0_127;
#line 583 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__IL0_128;
#line 583 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__Erlang0_129;

#line 557 "write_deps_file.m"
                  {
#line 557 "write_deps_file.m"
                    parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0, parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SrcItemBlocks_28, &parse_tree__write_deps_file__SrcLangSet_108, &parse_tree__write_deps_file__SrcForeignImportModules_109, &parse_tree__write_deps_file__V_110_110, &parse_tree__write_deps_file__V_111_111);
                  }
#line 17533 "parse_tree.write_deps_file.c"
                  parse_tree__write_deps_file__TypeInfo_952_952 = (MR_Word) &parse_tree__write_deps_file_scalar_common_1[1];
#line 562 "write_deps_file.m"
                  {
#line 562 "write_deps_file.m"
                    parse_tree__write_deps_file__IntItemBlocksCord_112 = mercury__cord__f_43_43_2_f_0(parse_tree__write_deps_file__TypeInfo_952_952, parse_tree__write_deps_file__DirectIntItemBlocksCord_29, parse_tree__write_deps_file__IndirectIntItemBlocksCord_30);
                  }
#line 565 "write_deps_file.m"
                  {
#line 565 "write_deps_file.m"
                    parse_tree__write_deps_file__V_610_610 = mercury__cord__list_1_f_0(parse_tree__write_deps_file__TypeInfo_952_952, parse_tree__write_deps_file__IntItemBlocksCord_112);
                  }
#line 564 "write_deps_file.m"
                  {
#line 564 "write_deps_file.m"
                    parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0, parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__V_610_610, &parse_tree__write_deps_file__IntLangSet_113, &parse_tree__write_deps_file__IntForeignImportModules_114, &parse_tree__write_deps_file__V_115_115, &parse_tree__write_deps_file__V_116_116);
                  }
#line 568 "write_deps_file.m"
                  {
#line 568 "write_deps_file.m"
                    parse_tree__write_deps_file__V_611_611 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[2], parse_tree__write_deps_file__OptItemBlocksCord_31);
                  }
#line 567 "write_deps_file.m"
                  {
#line 567 "write_deps_file.m"
                    parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0, parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__V_611_611, &parse_tree__write_deps_file__OptLangSet_117, &parse_tree__write_deps_file__OptForeignImportModules_118, &parse_tree__write_deps_file__V_119_119, &parse_tree__write_deps_file__V_120_120);
                  }
#line 571 "write_deps_file.m"
                  {
#line 571 "write_deps_file.m"
                    parse_tree__write_deps_file__V_612_612 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[3], parse_tree__write_deps_file__IntForOptItemBlocksCord_32);
                  }
#line 570 "write_deps_file.m"
                  {
#line 570 "write_deps_file.m"
                    parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0, parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__V_612_612, &parse_tree__write_deps_file__IntForOptLangSet_121, &parse_tree__write_deps_file__IntForOptForeignImportModules_122, &parse_tree__write_deps_file__V_123_123, &parse_tree__write_deps_file__V_124_124);
                  }
#line 574 "write_deps_file.m"
                  {
#line 574 "write_deps_file.m"
                    parse_tree__write_deps_file__V_616_616 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_616_616, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptLangSet_121));
#line 574 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_616_616, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 574 "write_deps_file.m"
                  }
#line 573 "write_deps_file.m"
                  {
#line 573 "write_deps_file.m"
                    parse_tree__write_deps_file__V_615_615 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_615_615, 0) = ((MR_Box) (parse_tree__write_deps_file__OptLangSet_117));
#line 573 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_615_615, 1) = ((MR_Box) (parse_tree__write_deps_file__V_616_616));
#line 573 "write_deps_file.m"
                  }
#line 573 "write_deps_file.m"
                  {
#line 573 "write_deps_file.m"
                    parse_tree__write_deps_file__V_614_614 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_614_614, 0) = ((MR_Box) (parse_tree__write_deps_file__IntLangSet_113));
#line 573 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_614_614, 1) = ((MR_Box) (parse_tree__write_deps_file__V_615_615));
#line 573 "write_deps_file.m"
                  }
#line 573 "write_deps_file.m"
                  {
#line 573 "write_deps_file.m"
                    parse_tree__write_deps_file__V_613_613 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_613_613, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcLangSet_108));
#line 573 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_613_613, 1) = ((MR_Box) (parse_tree__write_deps_file__V_614_614));
#line 573 "write_deps_file.m"
                  }
#line 573 "write_deps_file.m"
                  {
#line 573 "write_deps_file.m"
                    parse_tree__write_deps_file__LangSet_106 = mercury__set__union_list_1_f_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, parse_tree__write_deps_file__V_613_613);
                  }
#line 582 "write_deps_file.m"
                  parse_tree__write_deps_file__C0_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_24, (MR_Integer) 0)));
#line 582 "write_deps_file.m"
                  parse_tree__write_deps_file__CSharp0_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_24, (MR_Integer) 1)));
#line 582 "write_deps_file.m"
                  parse_tree__write_deps_file__Java0_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_24, (MR_Integer) 2)));
#line 582 "write_deps_file.m"
                  parse_tree__write_deps_file__IL0_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_24, (MR_Integer) 3)));
#line 582 "write_deps_file.m"
                  parse_tree__write_deps_file__Erlang0_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_24, (MR_Integer) 4)));
#line 584 "write_deps_file.m"
                  {
#line 584 "write_deps_file.m"
                    parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__C0_125);
                  }
#line 583 "write_deps_file.m"
                  if (parse_tree__write_deps_file__succeeded)
#line 583 "write_deps_file.m"
                    {
#line 585 "write_deps_file.m"
                      {
#line 585 "write_deps_file.m"
                        parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__CSharp0_126);
                      }
#line 583 "write_deps_file.m"
                      if (parse_tree__write_deps_file__succeeded)
#line 583 "write_deps_file.m"
                        {
#line 586 "write_deps_file.m"
                          {
#line 586 "write_deps_file.m"
                            parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__Java0_127);
                          }
#line 583 "write_deps_file.m"
                          if (parse_tree__write_deps_file__succeeded)
#line 583 "write_deps_file.m"
                            {
#line 587 "write_deps_file.m"
                              {
#line 587 "write_deps_file.m"
                                parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__IL0_128);
                              }
#line 583 "write_deps_file.m"
                              if (parse_tree__write_deps_file__succeeded)
#line 588 "write_deps_file.m"
                                {
#line 588 "write_deps_file.m"
                                  parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__Erlang0_129);
                                }
#line 583 "write_deps_file.m"
                            }
#line 583 "write_deps_file.m"
                        }
#line 583 "write_deps_file.m"
                    }
#line 611 "write_deps_file.m"
                  if (parse_tree__write_deps_file__succeeded)
#line 591 "write_deps_file.m"
                    {
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__SrcC_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_109, (MR_Integer) 0)));
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__SrcCSharp_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_109, (MR_Integer) 1)));
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__SrcJava_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_109, (MR_Integer) 2)));
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__SrcIL_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_109, (MR_Integer) 3)));
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__SrcErlang_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_109, (MR_Integer) 4)));
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntC_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_114, (MR_Integer) 0)));
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntCSharp_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_114, (MR_Integer) 1)));
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntJava_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_114, (MR_Integer) 2)));
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntIL_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_114, (MR_Integer) 3)));
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntErlang_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_114, (MR_Integer) 4)));
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__OptC_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_118, (MR_Integer) 0)));
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__OptCSharp_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_118, (MR_Integer) 1)));
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__OptJava_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_118, (MR_Integer) 2)));
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__OptIL_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_118, (MR_Integer) 3)));
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__OptErlang_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_118, (MR_Integer) 4)));
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntForOptC_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_122, (MR_Integer) 0)));
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntForOptCSharp_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_122, (MR_Integer) 1)));
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntForOptJava_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_122, (MR_Integer) 2)));
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntForOptIL_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_122, (MR_Integer) 3)));
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntForOptErlang_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_122, (MR_Integer) 4)));
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__C_150;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__CSharp_151;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__Java_152;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IL_153;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__Erlang_154;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_618_618;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_619_619;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_620_620;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_621_621;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_623_623;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_624_624;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_625_625;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_626_626;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_628_628;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_629_629;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_630_630;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_631_631;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_633_633;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_634_634;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_635_635;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_636_636;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_638_638;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_639_639;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_640_640;
#line 591 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_641_641;

#line 600 "write_deps_file.m"
                      {
#line 600 "write_deps_file.m"
                        parse_tree__write_deps_file__V_621_621 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_621_621, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptC_145));
#line 600 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_621_621, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 600 "write_deps_file.m"
                      }
#line 600 "write_deps_file.m"
                      {
#line 600 "write_deps_file.m"
                        parse_tree__write_deps_file__V_620_620 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_620_620, 0) = ((MR_Box) (parse_tree__write_deps_file__OptC_140));
#line 600 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_620_620, 1) = ((MR_Box) (parse_tree__write_deps_file__V_621_621));
#line 600 "write_deps_file.m"
                      }
#line 600 "write_deps_file.m"
                      {
#line 600 "write_deps_file.m"
                        parse_tree__write_deps_file__V_619_619 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_619_619, 0) = ((MR_Box) (parse_tree__write_deps_file__IntC_135));
#line 600 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_619_619, 1) = ((MR_Box) (parse_tree__write_deps_file__V_620_620));
#line 600 "write_deps_file.m"
                      }
#line 600 "write_deps_file.m"
                      {
#line 600 "write_deps_file.m"
                        parse_tree__write_deps_file__V_618_618 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_618_618, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcC_130));
#line 600 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_618_618, 1) = ((MR_Box) (parse_tree__write_deps_file__V_619_619));
#line 600 "write_deps_file.m"
                      }
#line 599 "write_deps_file.m"
                      {
#line 599 "write_deps_file.m"
                        parse_tree__write_deps_file__C_150 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__V_618_618);
                      }
#line 602 "write_deps_file.m"
                      {
#line 602 "write_deps_file.m"
                        parse_tree__write_deps_file__V_626_626 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 602 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_626_626, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptCSharp_146));
#line 602 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_626_626, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "write_deps_file.m"
                      }
#line 602 "write_deps_file.m"
                      {
#line 602 "write_deps_file.m"
                        parse_tree__write_deps_file__V_625_625 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 602 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_625_625, 0) = ((MR_Box) (parse_tree__write_deps_file__OptCSharp_141));
#line 602 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_625_625, 1) = ((MR_Box) (parse_tree__write_deps_file__V_626_626));
#line 602 "write_deps_file.m"
                      }
#line 602 "write_deps_file.m"
                      {
#line 602 "write_deps_file.m"
                        parse_tree__write_deps_file__V_624_624 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 602 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_624_624, 0) = ((MR_Box) (parse_tree__write_deps_file__IntCSharp_136));
#line 602 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_624_624, 1) = ((MR_Box) (parse_tree__write_deps_file__V_625_625));
#line 602 "write_deps_file.m"
                      }
#line 602 "write_deps_file.m"
                      {
#line 602 "write_deps_file.m"
                        parse_tree__write_deps_file__V_623_623 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 602 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_623_623, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcCSharp_131));
#line 602 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_623_623, 1) = ((MR_Box) (parse_tree__write_deps_file__V_624_624));
#line 602 "write_deps_file.m"
                      }
#line 601 "write_deps_file.m"
                      {
#line 601 "write_deps_file.m"
                        parse_tree__write_deps_file__CSharp_151 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__V_623_623);
                      }
#line 604 "write_deps_file.m"
                      {
#line 604 "write_deps_file.m"
                        parse_tree__write_deps_file__V_631_631 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_631_631, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptJava_147));
#line 604 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_631_631, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 604 "write_deps_file.m"
                      }
#line 604 "write_deps_file.m"
                      {
#line 604 "write_deps_file.m"
                        parse_tree__write_deps_file__V_630_630 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_630_630, 0) = ((MR_Box) (parse_tree__write_deps_file__OptJava_142));
#line 604 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_630_630, 1) = ((MR_Box) (parse_tree__write_deps_file__V_631_631));
#line 604 "write_deps_file.m"
                      }
#line 604 "write_deps_file.m"
                      {
#line 604 "write_deps_file.m"
                        parse_tree__write_deps_file__V_629_629 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_629_629, 0) = ((MR_Box) (parse_tree__write_deps_file__IntJava_137));
#line 604 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_629_629, 1) = ((MR_Box) (parse_tree__write_deps_file__V_630_630));
#line 604 "write_deps_file.m"
                      }
#line 604 "write_deps_file.m"
                      {
#line 604 "write_deps_file.m"
                        parse_tree__write_deps_file__V_628_628 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_628_628, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcJava_132));
#line 604 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_628_628, 1) = ((MR_Box) (parse_tree__write_deps_file__V_629_629));
#line 604 "write_deps_file.m"
                      }
#line 603 "write_deps_file.m"
                      {
#line 603 "write_deps_file.m"
                        parse_tree__write_deps_file__Java_152 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__V_628_628);
                      }
#line 606 "write_deps_file.m"
                      {
#line 606 "write_deps_file.m"
                        parse_tree__write_deps_file__V_636_636 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_636_636, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptIL_148));
#line 606 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_636_636, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 606 "write_deps_file.m"
                      }
#line 606 "write_deps_file.m"
                      {
#line 606 "write_deps_file.m"
                        parse_tree__write_deps_file__V_635_635 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_635_635, 0) = ((MR_Box) (parse_tree__write_deps_file__OptIL_143));
#line 606 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_635_635, 1) = ((MR_Box) (parse_tree__write_deps_file__V_636_636));
#line 606 "write_deps_file.m"
                      }
#line 606 "write_deps_file.m"
                      {
#line 606 "write_deps_file.m"
                        parse_tree__write_deps_file__V_634_634 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_634_634, 0) = ((MR_Box) (parse_tree__write_deps_file__IntIL_138));
#line 606 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_634_634, 1) = ((MR_Box) (parse_tree__write_deps_file__V_635_635));
#line 606 "write_deps_file.m"
                      }
#line 606 "write_deps_file.m"
                      {
#line 606 "write_deps_file.m"
                        parse_tree__write_deps_file__V_633_633 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_633_633, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcIL_133));
#line 606 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_633_633, 1) = ((MR_Box) (parse_tree__write_deps_file__V_634_634));
#line 606 "write_deps_file.m"
                      }
#line 605 "write_deps_file.m"
                      {
#line 605 "write_deps_file.m"
                        parse_tree__write_deps_file__IL_153 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__V_633_633);
                      }
#line 608 "write_deps_file.m"
                      {
#line 608 "write_deps_file.m"
                        parse_tree__write_deps_file__V_641_641 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_641_641, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptErlang_149));
#line 608 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_641_641, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 608 "write_deps_file.m"
                      }
#line 608 "write_deps_file.m"
                      {
#line 608 "write_deps_file.m"
                        parse_tree__write_deps_file__V_640_640 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_640_640, 0) = ((MR_Box) (parse_tree__write_deps_file__OptErlang_144));
#line 608 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_640_640, 1) = ((MR_Box) (parse_tree__write_deps_file__V_641_641));
#line 608 "write_deps_file.m"
                      }
#line 608 "write_deps_file.m"
                      {
#line 608 "write_deps_file.m"
                        parse_tree__write_deps_file__V_639_639 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_639_639, 0) = ((MR_Box) (parse_tree__write_deps_file__IntErlang_139));
#line 608 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_639_639, 1) = ((MR_Box) (parse_tree__write_deps_file__V_640_640));
#line 608 "write_deps_file.m"
                      }
#line 608 "write_deps_file.m"
                      {
#line 608 "write_deps_file.m"
                        parse_tree__write_deps_file__V_638_638 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_638_638, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcErlang_134));
#line 608 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_638_638, 1) = ((MR_Box) (parse_tree__write_deps_file__V_639_639));
#line 608 "write_deps_file.m"
                      }
#line 607 "write_deps_file.m"
                      {
#line 607 "write_deps_file.m"
                        parse_tree__write_deps_file__Erlang_154 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__V_638_638);
                      }
#line 609 "write_deps_file.m"
                      {
#line 609 "write_deps_file.m"
                        parse_tree__write_deps_file__ForeignImportModules_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 609 "write_deps_file.m"
                        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_107, 0) = ((MR_Box) (parse_tree__write_deps_file__C_150));
#line 609 "write_deps_file.m"
                        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_107, 1) = ((MR_Box) (parse_tree__write_deps_file__CSharp_151));
#line 609 "write_deps_file.m"
                        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_107, 2) = ((MR_Box) (parse_tree__write_deps_file__Java_152));
#line 609 "write_deps_file.m"
                        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_107, 3) = ((MR_Box) (parse_tree__write_deps_file__IL_153));
#line 609 "write_deps_file.m"
                        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_107, 4) = ((MR_Box) (parse_tree__write_deps_file__Erlang_154));
#line 609 "write_deps_file.m"
                      }
#line 591 "write_deps_file.m"
                    }
#line 611 "write_deps_file.m"
                  else
#line 612 "write_deps_file.m"
                    parse_tree__write_deps_file__ForeignImportModules_107 = parse_tree__write_deps_file__ForeignImportModules0_24;
#line 556 "write_deps_file.m"
                }
#line 555 "write_deps_file.m"
                break;
#line 555 "write_deps_file.m"
            }
#line 555 "write_deps_file.m"
            break;
#line 555 "write_deps_file.m"
          case (MR_Integer) 1:
#line 553 "write_deps_file.m"
            {
#line 553 "write_deps_file.m"
              parse_tree__write_deps_file__LangSet_106 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ContainsForeignCode_26, (MR_Integer) 0)));
#line 554 "write_deps_file.m"
              parse_tree__write_deps_file__ForeignImportModules_107 = parse_tree__write_deps_file__ForeignImportModules0_24;
#line 553 "write_deps_file.m"
            }
#line 555 "write_deps_file.m"
            break;
#line 555 "write_deps_file.m"
        }
#line 620 "write_deps_file.m"
        {
#line 620 "write_deps_file.m"
          parse_tree__write_deps_file__ForeignImports_155 = parse_tree__prog_data__get_all_foreign_import_module_infos_1_f_0(parse_tree__write_deps_file__ForeignImportModules_107);
        }
#line 626 "write_deps_file.m"
        {
#line 626 "write_deps_file.m"
          parse_tree__write_deps_file__V_643_643 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 626 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_643_643, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
#line 626 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_643_643, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_4));
#line 626 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_643_643, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 626 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_643_643, 3) = ((MR_Box) (parse_tree__write_deps_file__SourceFileModuleName_13));
#line 626 "write_deps_file.m"
        }
#line 626 "write_deps_file.m"
        {
#line 626 "write_deps_file.m"
          mercury__set__filter_map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__V_643_643, parse_tree__write_deps_file__ForeignImports_155, &parse_tree__write_deps_file__ForeignImportedModuleNames_158);
        }
#line 635 "write_deps_file.m"
        {
#line 635 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_941_941, parse_tree__write_deps_file__ForeignImportedModuleNames_158);
        }
#line 637 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 637 "write_deps_file.m"
          {
#line 637 "write_deps_file.m"
          }
#line 637 "write_deps_file.m"
        else
#line 663 "write_deps_file.m"
          {
#line 663 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ForeignImportTargets_159;
#line 663 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__ForeignImportExt_160;
#line 663 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__WriteForeignImportTarget_161;
#line 674 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv4_STATE_VARIABLE_IO_666_666;

#line 642 "write_deps_file.m"
#line 642 "write_deps_file.m"
            switch (parse_tree__write_deps_file__Target_100) {
#line 642 "write_deps_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 642 "write_deps_file.m"
              case (MR_Integer) 0:
#line 656 "write_deps_file.m"
                {
#line 656 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_647_647;

#line 661 "write_deps_file.m"
                  {
#line 661 "write_deps_file.m"
                    parse_tree__write_deps_file__V_647_647 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 661 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_647_647, 0) = ((MR_Box) (parse_tree__write_deps_file__PicObjFileName_69));
#line 661 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_647_647, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 661 "write_deps_file.m"
                  }
#line 661 "write_deps_file.m"
                  {
#line 661 "write_deps_file.m"
                    parse_tree__write_deps_file__ForeignImportTargets_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 661 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_159, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_66));
#line 661 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_159, 1) = ((MR_Box) (parse_tree__write_deps_file__V_647_647));
#line 661 "write_deps_file.m"
                  }
#line 662 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportExt_160 = (MR_String) ".mh";
#line 656 "write_deps_file.m"
                }
#line 642 "write_deps_file.m"
                break;
#line 642 "write_deps_file.m"
              case (MR_Integer) 2:
#line 643 "write_deps_file.m"
                {
#line 645 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportTargets_159 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 646 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportExt_160 = (MR_String) ".cs";
#line 643 "write_deps_file.m"
                }
#line 642 "write_deps_file.m"
                break;
#line 642 "write_deps_file.m"
              case (MR_Integer) 4:
#line 652 "write_deps_file.m"
                {
#line 653 "write_deps_file.m"
                  {
#line 653 "write_deps_file.m"
                    parse_tree__write_deps_file__ForeignImportTargets_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_159, 0) = ((MR_Box) (parse_tree__write_deps_file__BeamFileName_104));
#line 653 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 653 "write_deps_file.m"
                  }
#line 654 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportExt_160 = (MR_String) ".hrl";
#line 652 "write_deps_file.m"
                }
#line 642 "write_deps_file.m"
                break;
#line 642 "write_deps_file.m"
              case (MR_Integer) 1:
#line 639 "write_deps_file.m"
                {
#line 640 "write_deps_file.m"
                  {
#line 640 "write_deps_file.m"
                    parse_tree__write_deps_file__ForeignImportTargets_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_159, 0) = ((MR_Box) (parse_tree__write_deps_file__DllFileName_102));
#line 640 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 640 "write_deps_file.m"
                  }
#line 641 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportExt_160 = (MR_String) ".dll";
#line 639 "write_deps_file.m"
                }
#line 642 "write_deps_file.m"
                break;
#line 642 "write_deps_file.m"
              case (MR_Integer) 3:
#line 648 "write_deps_file.m"
                {
#line 649 "write_deps_file.m"
                  {
#line 649 "write_deps_file.m"
                    parse_tree__write_deps_file__ForeignImportTargets_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 649 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_159, 0) = ((MR_Box) (parse_tree__write_deps_file__ClassFileName_103));
#line 649 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 649 "write_deps_file.m"
                  }
#line 650 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportExt_160 = (MR_String) ".java";
#line 648 "write_deps_file.m"
                }
#line 642 "write_deps_file.m"
                break;
#line 642 "write_deps_file.m"
            }
#line 664 "write_deps_file.m"
            {
#line 664 "write_deps_file.m"
              parse_tree__write_deps_file__WriteForeignImportTarget_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 664 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_161, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[1]));
#line 664 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_161, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_5));
#line 664 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_161, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 664 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_161, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 664 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_161, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_48));
#line 664 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_161, 5) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportedModuleNames_158));
#line 664 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_161, 6) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportExt_160));
#line 664 "write_deps_file.m"
            }
#line 674 "write_deps_file.m"
            {
#line 674 "write_deps_file.m"
              mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_942_942, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__WriteForeignImportTarget_161, parse_tree__write_deps_file__ForeignImportTargets_159, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv4_STATE_VARIABLE_IO_666_666);
            }
#line 663 "write_deps_file.m"
          }
#line 678 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Target_100 == (MR_Integer) 1);
#line 678 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 678 "write_deps_file.m"
          {
#line 18227 "parse_tree.write_deps_file.c"
            parse_tree__write_deps_file__TypeCtorInfo_963_963 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 679 "write_deps_file.m"
            {
#line 679 "write_deps_file.m"
              parse_tree__write_deps_file__succeeded = mercury__set__is_non_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_963_963, parse_tree__write_deps_file__LangSet_106);
            }
#line 678 "write_deps_file.m"
          }
#line 684 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 681 "write_deps_file.m"
          {
#line 681 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_964_964 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 681 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Langs_163;
#line 681 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_667_667;
#line 682 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv5_STATE_VARIABLE_IO_668_668;

#line 681 "write_deps_file.m"
            {
#line 681 "write_deps_file.m"
              parse_tree__write_deps_file__Langs_163 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_964_964, parse_tree__write_deps_file__LangSet_106);
            }
#line 682 "write_deps_file.m"
            {
#line 682 "write_deps_file.m"
              parse_tree__write_deps_file__V_667_667 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 682 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_667_667, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[0]));
#line 682 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_667_667, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_6));
#line 682 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_667_667, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 682 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_667_667, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 682 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_667_667, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_48));
#line 682 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_667_667, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 682 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_667_667, 6) = ((MR_Box) (parse_tree__write_deps_file__AllDeps_9));
#line 682 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_667_667, 7) = ((MR_Box) (parse_tree__write_deps_file__ForeignImports_155));
#line 682 "write_deps_file.m"
            }
#line 682 "write_deps_file.m"
            {
#line 682 "write_deps_file.m"
              mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_964_964, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_667_667, parse_tree__write_deps_file__Langs_163, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv5_STATE_VARIABLE_IO_668_668);
            }
#line 681 "write_deps_file.m"
          }
#line 684 "write_deps_file.m"
        else
#line 684 "write_deps_file.m"
          {
#line 684 "write_deps_file.m"
          }
#line 694 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Target_100 == (MR_Integer) 1);
#line 694 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 695 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__SignAssembly_101 == (MR_Integer) 1);
#line 705 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 697 "write_deps_file.m"
          {
#line 697 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__ModuleNameString_164;
#line 697 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__IlFileName_165;
#line 697 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_672_672;
#line 697 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_675_675;
#line 697 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_676_676;
#line 697 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_678_678;

#line 697 "write_deps_file.m"
            {
#line 697 "write_deps_file.m"
              parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_14, &parse_tree__write_deps_file__ModuleNameString_164);
            }
#line 698 "write_deps_file.m"
            {
#line 698 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".il", (MR_Integer) 1, &parse_tree__write_deps_file__IlFileName_165);
            }
#line 704 "write_deps_file.m"
            {
#line 704 "write_deps_file.m"
              parse_tree__write_deps_file__V_678_678 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_678_678, 0) = ((MR_Box) (parse_tree__write_deps_file__IlFileName_165));
#line 704 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_678_678, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[110])));
#line 704 "write_deps_file.m"
            }
#line 703 "write_deps_file.m"
            {
#line 703 "write_deps_file.m"
              parse_tree__write_deps_file__V_676_676 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_676_676, 0) = ((MR_Box) ((MR_String) " = /keyf=mercury.sn\n"));
#line 703 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_676_676, 1) = ((MR_Box) (parse_tree__write_deps_file__V_678_678));
#line 703 "write_deps_file.m"
            }
#line 702 "write_deps_file.m"
            {
#line 702 "write_deps_file.m"
              parse_tree__write_deps_file__V_675_675 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_675_675, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleNameString_164));
#line 702 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_675_675, 1) = ((MR_Box) (parse_tree__write_deps_file__V_676_676));
#line 702 "write_deps_file.m"
            }
#line 702 "write_deps_file.m"
            {
#line 702 "write_deps_file.m"
              parse_tree__write_deps_file__V_672_672 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_672_672, 0) = ((MR_Box) ((MR_String) "ILASM_KEYFLAG-"));
#line 702 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_672_672, 1) = ((MR_Box) (parse_tree__write_deps_file__V_675_675));
#line 702 "write_deps_file.m"
            }
#line 701 "write_deps_file.m"
            {
#line 701 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_672_672);
            }
#line 697 "write_deps_file.m"
          }
#line 705 "write_deps_file.m"
        else
#line 705 "write_deps_file.m"
          {
#line 705 "write_deps_file.m"
          }
#line 709 "write_deps_file.m"
        {
#line 709 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int", (MR_Integer) 1, &parse_tree__write_deps_file__IntFileName_166);
        }
#line 711 "write_deps_file.m"
        {
#line 711 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int2", (MR_Integer) 1, &parse_tree__write_deps_file__Int2FileName_167);
        }
#line 713 "write_deps_file.m"
        {
#line 713 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int3", (MR_Integer) 1, &parse_tree__write_deps_file__Int3FileName_168);
        }
#line 715 "write_deps_file.m"
        {
#line 715 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptFileName_169);
        }
#line 717 "write_deps_file.m"
        {
#line 717 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptFileName_170);
        }
#line 719 "write_deps_file.m"
        {
#line 719 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".date3", (MR_Integer) 1, &parse_tree__write_deps_file__Date3FileName_171);
        }
#line 750 "write_deps_file.m"
        {
#line 750 "write_deps_file.m"
          parse_tree__write_deps_file__V_746_746 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_746_746, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_42));
#line 750 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_746_746, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[18])));
#line 750 "write_deps_file.m"
        }
#line 750 "write_deps_file.m"
        {
#line 750 "write_deps_file.m"
          parse_tree__write_deps_file__V_744_744 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_744_744, 0) = ((MR_Box) ((MR_String) " : "));
#line 750 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_744_744, 1) = ((MR_Box) (parse_tree__write_deps_file__V_746_746));
#line 750 "write_deps_file.m"
        }
#line 750 "write_deps_file.m"
        {
#line 750 "write_deps_file.m"
          parse_tree__write_deps_file__V_743_743 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_743_743, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptFileName_170));
#line 750 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_743_743, 1) = ((MR_Box) (parse_tree__write_deps_file__V_744_744));
#line 750 "write_deps_file.m"
        }
#line 749 "write_deps_file.m"
        {
#line 749 "write_deps_file.m"
          parse_tree__write_deps_file__V_741_741 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_741_741, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 749 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_741_741, 1) = ((MR_Box) (parse_tree__write_deps_file__V_743_743));
#line 749 "write_deps_file.m"
        }
#line 748 "write_deps_file.m"
        {
#line 748 "write_deps_file.m"
          parse_tree__write_deps_file__V_739_739 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_739_739, 0) = ((MR_Box) ((MR_String) "\n"));
#line 748 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_739_739, 1) = ((MR_Box) (parse_tree__write_deps_file__V_741_741));
#line 748 "write_deps_file.m"
        }
#line 748 "write_deps_file.m"
        {
#line 748 "write_deps_file.m"
          parse_tree__write_deps_file__V_738_738 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_738_738, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_62));
#line 748 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_738_738, 1) = ((MR_Box) (parse_tree__write_deps_file__V_739_739));
#line 748 "write_deps_file.m"
        }
#line 748 "write_deps_file.m"
        {
#line 748 "write_deps_file.m"
          parse_tree__write_deps_file__V_736_736 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_736_736, 0) = ((MR_Box) ((MR_String) " : "));
#line 748 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_736_736, 1) = ((MR_Box) (parse_tree__write_deps_file__V_738_738));
#line 748 "write_deps_file.m"
        }
#line 748 "write_deps_file.m"
        {
#line 748 "write_deps_file.m"
          parse_tree__write_deps_file__V_735_735 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_735_735, 0) = ((MR_Box) (parse_tree__write_deps_file__OptFileName_169));
#line 748 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_735_735, 1) = ((MR_Box) (parse_tree__write_deps_file__V_736_736));
#line 748 "write_deps_file.m"
        }
#line 747 "write_deps_file.m"
        {
#line 747 "write_deps_file.m"
          parse_tree__write_deps_file__V_733_733 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_733_733, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 747 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_733_733, 1) = ((MR_Box) (parse_tree__write_deps_file__V_735_735));
#line 747 "write_deps_file.m"
        }
#line 746 "write_deps_file.m"
        {
#line 746 "write_deps_file.m"
          parse_tree__write_deps_file__V_731_731 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_731_731, 0) = ((MR_Box) ((MR_String) "\n"));
#line 746 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_731_731, 1) = ((MR_Box) (parse_tree__write_deps_file__V_733_733));
#line 746 "write_deps_file.m"
        }
#line 746 "write_deps_file.m"
        {
#line 746 "write_deps_file.m"
          parse_tree__write_deps_file__V_730_730 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_730_730, 0) = ((MR_Box) (parse_tree__write_deps_file__Date3FileName_171));
#line 746 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_730_730, 1) = ((MR_Box) (parse_tree__write_deps_file__V_731_731));
#line 746 "write_deps_file.m"
        }
#line 746 "write_deps_file.m"
        {
#line 746 "write_deps_file.m"
          parse_tree__write_deps_file__V_728_728 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_728_728, 0) = ((MR_Box) ((MR_String) " : "));
#line 746 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_728_728, 1) = ((MR_Box) (parse_tree__write_deps_file__V_730_730));
#line 746 "write_deps_file.m"
        }
#line 746 "write_deps_file.m"
        {
#line 746 "write_deps_file.m"
          parse_tree__write_deps_file__V_727_727 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_727_727, 0) = ((MR_Box) (parse_tree__write_deps_file__Int3FileName_168));
#line 746 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_727_727, 1) = ((MR_Box) (parse_tree__write_deps_file__V_728_728));
#line 746 "write_deps_file.m"
        }
#line 745 "write_deps_file.m"
        {
#line 745 "write_deps_file.m"
          parse_tree__write_deps_file__V_725_725 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_725_725, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 745 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_725_725, 1) = ((MR_Box) (parse_tree__write_deps_file__V_727_727));
#line 745 "write_deps_file.m"
        }
#line 744 "write_deps_file.m"
        {
#line 744 "write_deps_file.m"
          parse_tree__write_deps_file__V_723_723 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_723_723, 0) = ((MR_Box) ((MR_String) "\n"));
#line 744 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_723_723, 1) = ((MR_Box) (parse_tree__write_deps_file__V_725_725));
#line 744 "write_deps_file.m"
        }
#line 744 "write_deps_file.m"
        {
#line 744 "write_deps_file.m"
          parse_tree__write_deps_file__V_722_722 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_722_722, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_96));
#line 744 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_722_722, 1) = ((MR_Box) (parse_tree__write_deps_file__V_723_723));
#line 744 "write_deps_file.m"
        }
#line 744 "write_deps_file.m"
        {
#line 744 "write_deps_file.m"
          parse_tree__write_deps_file__V_720_720 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_720_720, 0) = ((MR_Box) ((MR_String) " : "));
#line 744 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_720_720, 1) = ((MR_Box) (parse_tree__write_deps_file__V_722_722));
#line 744 "write_deps_file.m"
        }
#line 744 "write_deps_file.m"
        {
#line 744 "write_deps_file.m"
          parse_tree__write_deps_file__V_719_719 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_719_719, 0) = ((MR_Box) (parse_tree__write_deps_file__Int2FileName_167));
#line 744 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_719_719, 1) = ((MR_Box) (parse_tree__write_deps_file__V_720_720));
#line 744 "write_deps_file.m"
        }
#line 743 "write_deps_file.m"
        {
#line 743 "write_deps_file.m"
          parse_tree__write_deps_file__V_717_717 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_717_717, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 743 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_717_717, 1) = ((MR_Box) (parse_tree__write_deps_file__V_719_719));
#line 743 "write_deps_file.m"
        }
#line 742 "write_deps_file.m"
        {
#line 742 "write_deps_file.m"
          parse_tree__write_deps_file__V_715_715 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_715_715, 0) = ((MR_Box) ((MR_String) "\n"));
#line 742 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_715_715, 1) = ((MR_Box) (parse_tree__write_deps_file__V_717_717));
#line 742 "write_deps_file.m"
        }
#line 742 "write_deps_file.m"
        {
#line 742 "write_deps_file.m"
          parse_tree__write_deps_file__V_714_714 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_714_714, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_96));
#line 742 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_714_714, 1) = ((MR_Box) (parse_tree__write_deps_file__V_715_715));
#line 742 "write_deps_file.m"
        }
#line 742 "write_deps_file.m"
        {
#line 742 "write_deps_file.m"
          parse_tree__write_deps_file__V_712_712 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_712_712, 0) = ((MR_Box) ((MR_String) " : "));
#line 742 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_712_712, 1) = ((MR_Box) (parse_tree__write_deps_file__V_714_714));
#line 742 "write_deps_file.m"
        }
#line 742 "write_deps_file.m"
        {
#line 742 "write_deps_file.m"
          parse_tree__write_deps_file__V_711_711 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_711_711, 0) = ((MR_Box) (parse_tree__write_deps_file__IntFileName_166));
#line 742 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_711_711, 1) = ((MR_Box) (parse_tree__write_deps_file__V_712_712));
#line 742 "write_deps_file.m"
        }
#line 741 "write_deps_file.m"
        {
#line 741 "write_deps_file.m"
          parse_tree__write_deps_file__V_709_709 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_709_709, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 741 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_709_709, 1) = ((MR_Box) (parse_tree__write_deps_file__V_711_711));
#line 741 "write_deps_file.m"
        }
#line 740 "write_deps_file.m"
        {
#line 740 "write_deps_file.m"
          parse_tree__write_deps_file__V_707_707 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_707_707, 0) = ((MR_Box) ((MR_String) "\n"));
#line 740 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_707_707, 1) = ((MR_Box) (parse_tree__write_deps_file__V_709_709));
#line 740 "write_deps_file.m"
        }
#line 740 "write_deps_file.m"
        {
#line 740 "write_deps_file.m"
          parse_tree__write_deps_file__V_706_706 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_706_706, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_97));
#line 740 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_706_706, 1) = ((MR_Box) (parse_tree__write_deps_file__V_707_707));
#line 740 "write_deps_file.m"
        }
#line 740 "write_deps_file.m"
        {
#line 740 "write_deps_file.m"
          parse_tree__write_deps_file__V_704_704 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_704_704, 0) = ((MR_Box) ((MR_String) " : "));
#line 740 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_704_704, 1) = ((MR_Box) (parse_tree__write_deps_file__V_706_706));
#line 740 "write_deps_file.m"
        }
#line 740 "write_deps_file.m"
        {
#line 740 "write_deps_file.m"
          parse_tree__write_deps_file__V_703_703 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_703_703, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0FileName_70));
#line 740 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_703_703, 1) = ((MR_Box) (parse_tree__write_deps_file__V_704_704));
#line 740 "write_deps_file.m"
        }
#line 739 "write_deps_file.m"
        {
#line 739 "write_deps_file.m"
          parse_tree__write_deps_file__V_700_700 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_700_700, 0) = ((MR_Box) ((MR_String) "\n"));
#line 739 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_700_700, 1) = ((MR_Box) (parse_tree__write_deps_file__V_703_703));
#line 739 "write_deps_file.m"
        }
#line 738 "write_deps_file.m"
        {
#line 738 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_700_700);
        }
#line 754 "write_deps_file.m"
        {
#line 754 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 648, &parse_tree__write_deps_file__UseSubdirs_172);
        }
#line 762 "write_deps_file.m"
#line 762 "write_deps_file.m"
        switch (parse_tree__write_deps_file__UseSubdirs_172) {
#line 762 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 762 "write_deps_file.m"
          case (MR_Integer) 0:
#line 763 "write_deps_file.m"
            {
#line 763 "write_deps_file.m"
            }
#line 762 "write_deps_file.m"
            break;
#line 762 "write_deps_file.m"
          case (MR_Integer) 1:
#line 756 "write_deps_file.m"
            {
#line 756 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_754_754;
#line 758 "write_deps_file.m"
              MR_Box parse_tree__write_deps_file__conv6_STATE_VARIABLE_IO_756_756;

#line 757 "write_deps_file.m"
              {
#line 757 "write_deps_file.m"
                mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_48);
              }
#line 759 "write_deps_file.m"
              {
#line 759 "write_deps_file.m"
                parse_tree__write_deps_file__V_754_754 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 759 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_754_754, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[0]));
#line 759 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_754_754, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_7));
#line 759 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_754_754, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 759 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_754_754, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 759 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_754_754, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_48));
#line 759 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_754_754, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 759 "write_deps_file.m"
              }
#line 758 "write_deps_file.m"
              {
#line 758 "write_deps_file.m"
                mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_942_942, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_754_754, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[27]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv6_STATE_VARIABLE_IO_756_756);
              }
#line 756 "write_deps_file.m"
            }
#line 762 "write_deps_file.m"
            break;
#line 762 "write_deps_file.m"
        }
#line 766 "write_deps_file.m"
        {
#line 766 "write_deps_file.m"
          parse_tree__write_deps_file__V_973_973 = parse_tree__source_file_map__default_source_file_1_f_0(parse_tree__write_deps_file__ModuleName_14);
        }
#line 766 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__SourceFileName_12, parse_tree__write_deps_file__V_973_973) == 0);
#line 768 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 768 "write_deps_file.m"
          {
#line 768 "write_deps_file.m"
          }
#line 768 "write_deps_file.m"
        else
#line 784 "write_deps_file.m"
          {
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_775_775;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_778_778;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_779_779;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_781_781;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_782_782;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_784_784;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_786_786;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_788_788;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_789_789;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_791_791;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_792_792;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_794_794;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_795_795;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_797_797;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_799_799;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_800_800;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_802_802;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_803_803;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_805_805;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_806_806;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_808_808;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_810_810;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_811_811;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_813_813;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_814_814;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_816_816;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_817_817;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_819_819;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_821_821;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_822_822;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_824_824;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_825_825;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_827_827;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_828_828;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_830_830;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_832_832;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_834_834;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_835_835;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_837_837;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_838_838;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_840_840;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_841_841;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_843_843;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_845_845;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_846_846;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_848_848;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_849_849;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_851_851;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_852_852;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_854_854;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_856_856;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_858_858;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_859_859;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_861_861;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_862_862;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_864_864;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_865_865;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_867_867;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_869_869;
#line 784 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_871_871;

#line 811 "write_deps_file.m"
            {
#line 811 "write_deps_file.m"
              parse_tree__write_deps_file__V_871_871 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_871_871, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_99));
#line 811 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_871_871, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[111])));
#line 811 "write_deps_file.m"
            }
#line 811 "write_deps_file.m"
            {
#line 811 "write_deps_file.m"
              parse_tree__write_deps_file__V_869_869 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_869_869, 0) = ((MR_Box) ((MR_String) "--java-only "));
#line 811 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_869_869, 1) = ((MR_Box) (parse_tree__write_deps_file__V_871_871));
#line 811 "write_deps_file.m"
            }
#line 810 "write_deps_file.m"
            {
#line 810 "write_deps_file.m"
              parse_tree__write_deps_file__V_867_867 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_867_867, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
#line 810 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_867_867, 1) = ((MR_Box) (parse_tree__write_deps_file__V_869_869));
#line 810 "write_deps_file.m"
            }
#line 809 "write_deps_file.m"
            {
#line 809 "write_deps_file.m"
              parse_tree__write_deps_file__V_865_865 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_865_865, 0) = ((MR_Box) ((MR_String) "\n"));
#line 809 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_865_865, 1) = ((MR_Box) (parse_tree__write_deps_file__V_867_867));
#line 809 "write_deps_file.m"
            }
#line 809 "write_deps_file.m"
            {
#line 809 "write_deps_file.m"
              parse_tree__write_deps_file__V_864_864 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_864_864, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 809 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_864_864, 1) = ((MR_Box) (parse_tree__write_deps_file__V_865_865));
#line 809 "write_deps_file.m"
            }
#line 809 "write_deps_file.m"
            {
#line 809 "write_deps_file.m"
              parse_tree__write_deps_file__V_862_862 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_862_862, 0) = ((MR_Box) ((MR_String) " : "));
#line 809 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_862_862, 1) = ((MR_Box) (parse_tree__write_deps_file__V_864_864));
#line 809 "write_deps_file.m"
            }
#line 809 "write_deps_file.m"
            {
#line 809 "write_deps_file.m"
              parse_tree__write_deps_file__V_861_861 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_861_861, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_68));
#line 809 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_861_861, 1) = ((MR_Box) (parse_tree__write_deps_file__V_862_862));
#line 809 "write_deps_file.m"
            }
#line 808 "write_deps_file.m"
            {
#line 808 "write_deps_file.m"
              parse_tree__write_deps_file__V_859_859 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_859_859, 0) = ((MR_Box) ((MR_String) " \044(ERR_REDIRECT)\n"));
#line 808 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_859_859, 1) = ((MR_Box) (parse_tree__write_deps_file__V_861_861));
#line 808 "write_deps_file.m"
            }
#line 807 "write_deps_file.m"
            {
#line 807 "write_deps_file.m"
              parse_tree__write_deps_file__V_858_858 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_858_858, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_99));
#line 807 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_858_858, 1) = ((MR_Box) (parse_tree__write_deps_file__V_859_859));
#line 807 "write_deps_file.m"
            }
#line 807 "write_deps_file.m"
            {
#line 807 "write_deps_file.m"
              parse_tree__write_deps_file__V_856_856 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_856_856, 0) = ((MR_Box) ((MR_String) "--il-only "));
#line 807 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_856_856, 1) = ((MR_Box) (parse_tree__write_deps_file__V_858_858));
#line 807 "write_deps_file.m"
            }
#line 806 "write_deps_file.m"
            {
#line 806 "write_deps_file.m"
              parse_tree__write_deps_file__V_854_854 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_854_854, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
#line 806 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_854_854, 1) = ((MR_Box) (parse_tree__write_deps_file__V_856_856));
#line 806 "write_deps_file.m"
            }
#line 805 "write_deps_file.m"
            {
#line 805 "write_deps_file.m"
              parse_tree__write_deps_file__V_852_852 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_852_852, 0) = ((MR_Box) ((MR_String) "\n"));
#line 805 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_852_852, 1) = ((MR_Box) (parse_tree__write_deps_file__V_854_854));
#line 805 "write_deps_file.m"
            }
#line 805 "write_deps_file.m"
            {
#line 805 "write_deps_file.m"
              parse_tree__write_deps_file__V_851_851 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_851_851, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 805 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_851_851, 1) = ((MR_Box) (parse_tree__write_deps_file__V_852_852));
#line 805 "write_deps_file.m"
            }
#line 805 "write_deps_file.m"
            {
#line 805 "write_deps_file.m"
              parse_tree__write_deps_file__V_849_849 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_849_849, 0) = ((MR_Box) ((MR_String) " : "));
#line 805 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_849_849, 1) = ((MR_Box) (parse_tree__write_deps_file__V_851_851));
#line 805 "write_deps_file.m"
            }
#line 805 "write_deps_file.m"
            {
#line 805 "write_deps_file.m"
              parse_tree__write_deps_file__V_848_848 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_848_848, 0) = ((MR_Box) (parse_tree__write_deps_file__ILDateFileName_67));
#line 805 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_848_848, 1) = ((MR_Box) (parse_tree__write_deps_file__V_849_849));
#line 805 "write_deps_file.m"
            }
#line 804 "write_deps_file.m"
            {
#line 804 "write_deps_file.m"
              parse_tree__write_deps_file__V_846_846 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_846_846, 0) = ((MR_Box) ((MR_String) " \044(ERR_REDIRECT)\n"));
#line 804 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_846_846, 1) = ((MR_Box) (parse_tree__write_deps_file__V_848_848));
#line 804 "write_deps_file.m"
            }
#line 804 "write_deps_file.m"
            {
#line 804 "write_deps_file.m"
              parse_tree__write_deps_file__V_845_845 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_845_845, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_99));
#line 804 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_845_845, 1) = ((MR_Box) (parse_tree__write_deps_file__V_846_846));
#line 804 "write_deps_file.m"
            }
#line 803 "write_deps_file.m"
            {
#line 803 "write_deps_file.m"
              parse_tree__write_deps_file__V_843_843 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_843_843, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
#line 803 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_843_843, 1) = ((MR_Box) (parse_tree__write_deps_file__V_845_845));
#line 803 "write_deps_file.m"
            }
#line 802 "write_deps_file.m"
            {
#line 802 "write_deps_file.m"
              parse_tree__write_deps_file__V_841_841 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_841_841, 0) = ((MR_Box) ((MR_String) "\n"));
#line 802 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_841_841, 1) = ((MR_Box) (parse_tree__write_deps_file__V_843_843));
#line 802 "write_deps_file.m"
            }
#line 802 "write_deps_file.m"
            {
#line 802 "write_deps_file.m"
              parse_tree__write_deps_file__V_840_840 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_840_840, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 802 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_840_840, 1) = ((MR_Box) (parse_tree__write_deps_file__V_841_841));
#line 802 "write_deps_file.m"
            }
#line 802 "write_deps_file.m"
            {
#line 802 "write_deps_file.m"
              parse_tree__write_deps_file__V_838_838 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_838_838, 0) = ((MR_Box) ((MR_String) " : "));
#line 802 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_838_838, 1) = ((MR_Box) (parse_tree__write_deps_file__V_840_840));
#line 802 "write_deps_file.m"
            }
#line 802 "write_deps_file.m"
            {
#line 802 "write_deps_file.m"
              parse_tree__write_deps_file__V_837_837 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_837_837, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_63));
#line 802 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_837_837, 1) = ((MR_Box) (parse_tree__write_deps_file__V_838_838));
#line 802 "write_deps_file.m"
            }
#line 801 "write_deps_file.m"
            {
#line 801 "write_deps_file.m"
              parse_tree__write_deps_file__V_835_835 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_835_835, 0) = ((MR_Box) ((MR_String) "\n"));
#line 801 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_835_835, 1) = ((MR_Box) (parse_tree__write_deps_file__V_837_837));
#line 801 "write_deps_file.m"
            }
#line 801 "write_deps_file.m"
            {
#line 801 "write_deps_file.m"
              parse_tree__write_deps_file__V_834_834 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_834_834, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_99));
#line 801 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_834_834, 1) = ((MR_Box) (parse_tree__write_deps_file__V_835_835));
#line 801 "write_deps_file.m"
            }
#line 801 "write_deps_file.m"
            {
#line 801 "write_deps_file.m"
              parse_tree__write_deps_file__V_832_832 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_832_832, 0) = ((MR_Box) ((MR_String) "\044(ALL_MCTOIFLAGS) "));
#line 801 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_832_832, 1) = ((MR_Box) (parse_tree__write_deps_file__V_834_834));
#line 801 "write_deps_file.m"
            }
#line 800 "write_deps_file.m"
            {
#line 800 "write_deps_file.m"
              parse_tree__write_deps_file__V_830_830 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_830_830, 0) = ((MR_Box) ((MR_String) "\t\044(MCTOI) \044(ALL_GRADEFLAGS) "));
#line 800 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_830_830, 1) = ((MR_Box) (parse_tree__write_deps_file__V_832_832));
#line 800 "write_deps_file.m"
            }
#line 799 "write_deps_file.m"
            {
#line 799 "write_deps_file.m"
              parse_tree__write_deps_file__V_828_828 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 799 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_828_828, 0) = ((MR_Box) ((MR_String) "\n"));
#line 799 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_828_828, 1) = ((MR_Box) (parse_tree__write_deps_file__V_830_830));
#line 799 "write_deps_file.m"
            }
#line 798 "write_deps_file.m"
            {
#line 798 "write_deps_file.m"
              parse_tree__write_deps_file__V_827_827 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_827_827, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 798 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_827_827, 1) = ((MR_Box) (parse_tree__write_deps_file__V_828_828));
#line 798 "write_deps_file.m"
            }
#line 798 "write_deps_file.m"
            {
#line 798 "write_deps_file.m"
              parse_tree__write_deps_file__V_825_825 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_825_825, 0) = ((MR_Box) ((MR_String) " : "));
#line 798 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_825_825, 1) = ((MR_Box) (parse_tree__write_deps_file__V_827_827));
#line 798 "write_deps_file.m"
            }
#line 798 "write_deps_file.m"
            {
#line 798 "write_deps_file.m"
              parse_tree__write_deps_file__V_824_824 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_824_824, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_42));
#line 798 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_824_824, 1) = ((MR_Box) (parse_tree__write_deps_file__V_825_825));
#line 798 "write_deps_file.m"
            }
#line 797 "write_deps_file.m"
            {
#line 797 "write_deps_file.m"
              parse_tree__write_deps_file__V_822_822 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_822_822, 0) = ((MR_Box) ((MR_String) "\n"));
#line 797 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_822_822, 1) = ((MR_Box) (parse_tree__write_deps_file__V_824_824));
#line 797 "write_deps_file.m"
            }
#line 797 "write_deps_file.m"
            {
#line 797 "write_deps_file.m"
              parse_tree__write_deps_file__V_821_821 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_821_821, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_99));
#line 797 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_821_821, 1) = ((MR_Box) (parse_tree__write_deps_file__V_822_822));
#line 797 "write_deps_file.m"
            }
#line 796 "write_deps_file.m"
            {
#line 796 "write_deps_file.m"
              parse_tree__write_deps_file__V_819_819 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_819_819, 0) = ((MR_Box) ((MR_String) "\t\044(MCOI) \044(ALL_GRADEFLAGS) \044(ALL_MCOIFLAGS) "));
#line 796 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_819_819, 1) = ((MR_Box) (parse_tree__write_deps_file__V_821_821));
#line 796 "write_deps_file.m"
            }
#line 795 "write_deps_file.m"
            {
#line 795 "write_deps_file.m"
              parse_tree__write_deps_file__V_817_817 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_817_817, 0) = ((MR_Box) ((MR_String) "\n"));
#line 795 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_817_817, 1) = ((MR_Box) (parse_tree__write_deps_file__V_819_819));
#line 795 "write_deps_file.m"
            }
#line 795 "write_deps_file.m"
            {
#line 795 "write_deps_file.m"
              parse_tree__write_deps_file__V_816_816 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_816_816, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 795 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_816_816, 1) = ((MR_Box) (parse_tree__write_deps_file__V_817_817));
#line 795 "write_deps_file.m"
            }
#line 795 "write_deps_file.m"
            {
#line 795 "write_deps_file.m"
              parse_tree__write_deps_file__V_814_814 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_814_814, 0) = ((MR_Box) ((MR_String) " : "));
#line 795 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_814_814, 1) = ((MR_Box) (parse_tree__write_deps_file__V_816_816));
#line 795 "write_deps_file.m"
            }
#line 795 "write_deps_file.m"
            {
#line 795 "write_deps_file.m"
              parse_tree__write_deps_file__V_813_813 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_813_813, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_62));
#line 795 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_813_813, 1) = ((MR_Box) (parse_tree__write_deps_file__V_814_814));
#line 795 "write_deps_file.m"
            }
#line 794 "write_deps_file.m"
            {
#line 794 "write_deps_file.m"
              parse_tree__write_deps_file__V_811_811 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_811_811, 0) = ((MR_Box) ((MR_String) "\n"));
#line 794 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_811_811, 1) = ((MR_Box) (parse_tree__write_deps_file__V_813_813));
#line 794 "write_deps_file.m"
            }
#line 794 "write_deps_file.m"
            {
#line 794 "write_deps_file.m"
              parse_tree__write_deps_file__V_810_810 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_810_810, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_99));
#line 794 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_810_810, 1) = ((MR_Box) (parse_tree__write_deps_file__V_811_811));
#line 794 "write_deps_file.m"
            }
#line 793 "write_deps_file.m"
            {
#line 793 "write_deps_file.m"
              parse_tree__write_deps_file__V_808_808 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_808_808, 0) = ((MR_Box) ((MR_String) "\t\044(MCSI) \044(ALL_GRADEFLAGS) \044(ALL_MCSIFLAGS) "));
#line 793 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_808_808, 1) = ((MR_Box) (parse_tree__write_deps_file__V_810_810));
#line 793 "write_deps_file.m"
            }
#line 792 "write_deps_file.m"
            {
#line 792 "write_deps_file.m"
              parse_tree__write_deps_file__V_806_806 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_806_806, 0) = ((MR_Box) ((MR_String) "\n"));
#line 792 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_806_806, 1) = ((MR_Box) (parse_tree__write_deps_file__V_808_808));
#line 792 "write_deps_file.m"
            }
#line 792 "write_deps_file.m"
            {
#line 792 "write_deps_file.m"
              parse_tree__write_deps_file__V_805_805 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_805_805, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 792 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_805_805, 1) = ((MR_Box) (parse_tree__write_deps_file__V_806_806));
#line 792 "write_deps_file.m"
            }
#line 792 "write_deps_file.m"
            {
#line 792 "write_deps_file.m"
              parse_tree__write_deps_file__V_803_803 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_803_803, 0) = ((MR_Box) ((MR_String) " : "));
#line 792 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_803_803, 1) = ((MR_Box) (parse_tree__write_deps_file__V_805_805));
#line 792 "write_deps_file.m"
            }
#line 792 "write_deps_file.m"
            {
#line 792 "write_deps_file.m"
              parse_tree__write_deps_file__V_802_802 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_802_802, 0) = ((MR_Box) (parse_tree__write_deps_file__Date3FileName_171));
#line 792 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_802_802, 1) = ((MR_Box) (parse_tree__write_deps_file__V_803_803));
#line 792 "write_deps_file.m"
            }
#line 791 "write_deps_file.m"
            {
#line 791 "write_deps_file.m"
              parse_tree__write_deps_file__V_800_800 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_800_800, 0) = ((MR_Box) ((MR_String) "\n"));
#line 791 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_800_800, 1) = ((MR_Box) (parse_tree__write_deps_file__V_802_802));
#line 791 "write_deps_file.m"
            }
#line 791 "write_deps_file.m"
            {
#line 791 "write_deps_file.m"
              parse_tree__write_deps_file__V_799_799 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_799_799, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_99));
#line 791 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_799_799, 1) = ((MR_Box) (parse_tree__write_deps_file__V_800_800));
#line 791 "write_deps_file.m"
            }
#line 790 "write_deps_file.m"
            {
#line 790 "write_deps_file.m"
              parse_tree__write_deps_file__V_797_797 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_797_797, 0) = ((MR_Box) ((MR_String) "\t\044(MCI) \044(ALL_GRADEFLAGS) \044(ALL_MCIFLAGS) "));
#line 790 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_797_797, 1) = ((MR_Box) (parse_tree__write_deps_file__V_799_799));
#line 790 "write_deps_file.m"
            }
#line 789 "write_deps_file.m"
            {
#line 789 "write_deps_file.m"
              parse_tree__write_deps_file__V_795_795 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_795_795, 0) = ((MR_Box) ((MR_String) "\n"));
#line 789 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_795_795, 1) = ((MR_Box) (parse_tree__write_deps_file__V_797_797));
#line 789 "write_deps_file.m"
            }
#line 789 "write_deps_file.m"
            {
#line 789 "write_deps_file.m"
              parse_tree__write_deps_file__V_794_794 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_794_794, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 789 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_794_794, 1) = ((MR_Box) (parse_tree__write_deps_file__V_795_795));
#line 789 "write_deps_file.m"
            }
#line 789 "write_deps_file.m"
            {
#line 789 "write_deps_file.m"
              parse_tree__write_deps_file__V_792_792 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_792_792, 0) = ((MR_Box) ((MR_String) " : "));
#line 789 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_792_792, 1) = ((MR_Box) (parse_tree__write_deps_file__V_794_794));
#line 789 "write_deps_file.m"
            }
#line 789 "write_deps_file.m"
            {
#line 789 "write_deps_file.m"
              parse_tree__write_deps_file__V_791_791 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_791_791, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_96));
#line 789 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_791_791, 1) = ((MR_Box) (parse_tree__write_deps_file__V_792_792));
#line 789 "write_deps_file.m"
            }
#line 788 "write_deps_file.m"
            {
#line 788 "write_deps_file.m"
              parse_tree__write_deps_file__V_789_789 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_789_789, 0) = ((MR_Box) ((MR_String) "\n"));
#line 788 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_789_789, 1) = ((MR_Box) (parse_tree__write_deps_file__V_791_791));
#line 788 "write_deps_file.m"
            }
#line 788 "write_deps_file.m"
            {
#line 788 "write_deps_file.m"
              parse_tree__write_deps_file__V_788_788 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_788_788, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_99));
#line 788 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_788_788, 1) = ((MR_Box) (parse_tree__write_deps_file__V_789_789));
#line 788 "write_deps_file.m"
            }
#line 788 "write_deps_file.m"
            {
#line 788 "write_deps_file.m"
              parse_tree__write_deps_file__V_786_786 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_786_786, 0) = ((MR_Box) ((MR_String) "\044(ALL_MCPIFLAGS) "));
#line 788 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_786_786, 1) = ((MR_Box) (parse_tree__write_deps_file__V_788_788));
#line 788 "write_deps_file.m"
            }
#line 787 "write_deps_file.m"
            {
#line 787 "write_deps_file.m"
              parse_tree__write_deps_file__V_784_784 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_784_784, 0) = ((MR_Box) ((MR_String) "\t\044(MCPI) \044(ALL_GRADEFLAGS) "));
#line 787 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_784_784, 1) = ((MR_Box) (parse_tree__write_deps_file__V_786_786));
#line 787 "write_deps_file.m"
            }
#line 786 "write_deps_file.m"
            {
#line 786 "write_deps_file.m"
              parse_tree__write_deps_file__V_782_782 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_782_782, 0) = ((MR_Box) ((MR_String) "\n"));
#line 786 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_782_782, 1) = ((MR_Box) (parse_tree__write_deps_file__V_784_784));
#line 786 "write_deps_file.m"
            }
#line 786 "write_deps_file.m"
            {
#line 786 "write_deps_file.m"
              parse_tree__write_deps_file__V_781_781 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_781_781, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 786 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_781_781, 1) = ((MR_Box) (parse_tree__write_deps_file__V_782_782));
#line 786 "write_deps_file.m"
            }
#line 786 "write_deps_file.m"
            {
#line 786 "write_deps_file.m"
              parse_tree__write_deps_file__V_779_779 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_779_779, 0) = ((MR_Box) ((MR_String) " : "));
#line 786 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_779_779, 1) = ((MR_Box) (parse_tree__write_deps_file__V_781_781));
#line 786 "write_deps_file.m"
            }
#line 786 "write_deps_file.m"
            {
#line 786 "write_deps_file.m"
              parse_tree__write_deps_file__V_778_778 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_778_778, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_97));
#line 786 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_778_778, 1) = ((MR_Box) (parse_tree__write_deps_file__V_779_779));
#line 786 "write_deps_file.m"
            }
#line 785 "write_deps_file.m"
            {
#line 785 "write_deps_file.m"
              parse_tree__write_deps_file__V_775_775 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_775_775, 0) = ((MR_Box) ((MR_String) "\n"));
#line 785 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_775_775, 1) = ((MR_Box) (parse_tree__write_deps_file__V_778_778));
#line 785 "write_deps_file.m"
            }
#line 784 "write_deps_file.m"
            {
#line 784 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_775_775);
            }
#line 784 "write_deps_file.m"
          }
#line 816 "write_deps_file.m"
        {
#line 816 "write_deps_file.m"
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DepStream_48);
        }
#line 817 "write_deps_file.m"
        {
#line 817 "write_deps_file.m"
          mercury__io__rename_file_5_p_0(parse_tree__write_deps_file__TmpDependencyFileName_43, parse_tree__write_deps_file__DependencyFileName_41, &parse_tree__write_deps_file__Result3_173);
        }
#line 850 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Result3_173 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 851 "write_deps_file.m"
          {
#line 852 "write_deps_file.m"
            {
#line 852 "write_deps_file.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_39, (MR_String) " done.\n");
#line 852 "write_deps_file.m"
              return;
            }
#line 851 "write_deps_file.m"
          }
#line 850 "write_deps_file.m"
        else
#line 820 "write_deps_file.m"
          {
#line 820 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Result4_175;

#line 823 "write_deps_file.m"
            {
#line 823 "write_deps_file.m"
              mercury__io__remove_file_4_p_0(parse_tree__write_deps_file__DependencyFileName_41, &parse_tree__write_deps_file__Result4_175);
            }
#line 832 "write_deps_file.m"
            if ((parse_tree__write_deps_file__Result4_175 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 833 "write_deps_file.m"
              {
#line 833 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__Result5_178;

#line 834 "write_deps_file.m"
                {
#line 834 "write_deps_file.m"
                  mercury__io__rename_file_5_p_0(parse_tree__write_deps_file__TmpDependencyFileName_43, parse_tree__write_deps_file__DependencyFileName_41, &parse_tree__write_deps_file__Result5_178);
                }
#line 845 "write_deps_file.m"
                if ((parse_tree__write_deps_file__Result5_178 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 846 "write_deps_file.m"
                  {
#line 847 "write_deps_file.m"
                    {
#line 847 "write_deps_file.m"
                      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_39, (MR_String) " done.\n");
#line 847 "write_deps_file.m"
                      return;
                    }
#line 846 "write_deps_file.m"
                  }
#line 845 "write_deps_file.m"
                else
#line 837 "write_deps_file.m"
                  {
#line 837 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__Error5_179 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result5_178, (MR_Integer) 0)));
#line 837 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_886_886;
#line 837 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_888_888;
#line 837 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_889_889;
#line 837 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_891_891;
#line 837 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_892_892;
#line 837 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_894_894;
#line 837 "write_deps_file.m"
                    MR_String parse_tree__write_deps_file__Message_931;
#line 837 "write_deps_file.m"
                    MR_String parse_tree__write_deps_file__ErrorMsg_932;

#line 838 "write_deps_file.m"
                    {
#line 838 "write_deps_file.m"
                      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_39, (MR_String) " failed.\n");
                    }
#line 839 "write_deps_file.m"
                    {
#line 839 "write_deps_file.m"
                      libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_39);
                    }
#line 840 "write_deps_file.m"
                    {
#line 840 "write_deps_file.m"
                      mercury__io__error_message_2_p_0(parse_tree__write_deps_file__Error5_179, &parse_tree__write_deps_file__ErrorMsg_932);
                    }
#line 843 "write_deps_file.m"
                    {
#line 843 "write_deps_file.m"
                      parse_tree__write_deps_file__V_894_894 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 843 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_894_894, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrorMsg_932));
#line 843 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_894_894, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 843 "write_deps_file.m"
                    }
#line 843 "write_deps_file.m"
                    {
#line 843 "write_deps_file.m"
                      parse_tree__write_deps_file__V_892_892 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 843 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_892_892, 0) = ((MR_Box) ((MR_String) "\': "));
#line 843 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_892_892, 1) = ((MR_Box) (parse_tree__write_deps_file__V_894_894));
#line 843 "write_deps_file.m"
                    }
#line 842 "write_deps_file.m"
                    {
#line 842 "write_deps_file.m"
                      parse_tree__write_deps_file__V_891_891 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_891_891, 0) = ((MR_Box) (parse_tree__write_deps_file__DependencyFileName_41));
#line 842 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_891_891, 1) = ((MR_Box) (parse_tree__write_deps_file__V_892_892));
#line 842 "write_deps_file.m"
                    }
#line 842 "write_deps_file.m"
                    {
#line 842 "write_deps_file.m"
                      parse_tree__write_deps_file__V_889_889 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_889_889, 0) = ((MR_Box) ((MR_String) "\' as \140"));
#line 842 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_889_889, 1) = ((MR_Box) (parse_tree__write_deps_file__V_891_891));
#line 842 "write_deps_file.m"
                    }
#line 842 "write_deps_file.m"
                    {
#line 842 "write_deps_file.m"
                      parse_tree__write_deps_file__V_888_888 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_888_888, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpDependencyFileName_43));
#line 842 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_888_888, 1) = ((MR_Box) (parse_tree__write_deps_file__V_889_889));
#line 842 "write_deps_file.m"
                    }
#line 841 "write_deps_file.m"
                    {
#line 841 "write_deps_file.m"
                      parse_tree__write_deps_file__V_886_886 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 841 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_886_886, 0) = ((MR_Box) ((MR_String) "can\'t rename file \140"));
#line 841 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_886_886, 1) = ((MR_Box) (parse_tree__write_deps_file__V_888_888));
#line 841 "write_deps_file.m"
                    }
#line 841 "write_deps_file.m"
                    {
#line 841 "write_deps_file.m"
                      mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_886_886, &parse_tree__write_deps_file__Message_931);
                    }
#line 844 "write_deps_file.m"
                    {
#line 844 "write_deps_file.m"
                      libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_931);
#line 844 "write_deps_file.m"
                      return;
                    }
#line 837 "write_deps_file.m"
                  }
#line 833 "write_deps_file.m"
              }
#line 832 "write_deps_file.m"
            else
#line 825 "write_deps_file.m"
              {
#line 825 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__Error4_176 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result4_175, (MR_Integer) 0)));
#line 825 "write_deps_file.m"
                MR_String parse_tree__write_deps_file__ErrorMsg_177;
#line 825 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_900_900;
#line 825 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_902_902;
#line 825 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_903_903;
#line 825 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_905_905;
#line 825 "write_deps_file.m"
                MR_String parse_tree__write_deps_file__Message_930;

#line 826 "write_deps_file.m"
                {
#line 826 "write_deps_file.m"
                  libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_39, (MR_String) " failed.\n");
                }
#line 827 "write_deps_file.m"
                {
#line 827 "write_deps_file.m"
                  libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_39);
                }
#line 828 "write_deps_file.m"
                {
#line 828 "write_deps_file.m"
                  mercury__io__error_message_2_p_0(parse_tree__write_deps_file__Error4_176, &parse_tree__write_deps_file__ErrorMsg_177);
                }
#line 830 "write_deps_file.m"
                {
#line 830 "write_deps_file.m"
                  parse_tree__write_deps_file__V_905_905 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_905_905, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrorMsg_177));
#line 830 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_905_905, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 830 "write_deps_file.m"
                }
#line 830 "write_deps_file.m"
                {
#line 830 "write_deps_file.m"
                  parse_tree__write_deps_file__V_903_903 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_903_903, 0) = ((MR_Box) ((MR_String) "\': "));
#line 830 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_903_903, 1) = ((MR_Box) (parse_tree__write_deps_file__V_905_905));
#line 830 "write_deps_file.m"
                }
#line 829 "write_deps_file.m"
                {
#line 829 "write_deps_file.m"
                  parse_tree__write_deps_file__V_902_902 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 829 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_902_902, 0) = ((MR_Box) (parse_tree__write_deps_file__DependencyFileName_41));
#line 829 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_902_902, 1) = ((MR_Box) (parse_tree__write_deps_file__V_903_903));
#line 829 "write_deps_file.m"
                }
#line 829 "write_deps_file.m"
                {
#line 829 "write_deps_file.m"
                  parse_tree__write_deps_file__V_900_900 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 829 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_900_900, 0) = ((MR_Box) ((MR_String) "can\'t remove file \140"));
#line 829 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_900_900, 1) = ((MR_Box) (parse_tree__write_deps_file__V_902_902));
#line 829 "write_deps_file.m"
                }
#line 829 "write_deps_file.m"
                {
#line 829 "write_deps_file.m"
                  mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_900_900, &parse_tree__write_deps_file__Message_930);
                }
#line 831 "write_deps_file.m"
                {
#line 831 "write_deps_file.m"
                  libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_930);
#line 831 "write_deps_file.m"
                  return;
                }
#line 825 "write_deps_file.m"
              }
#line 820 "write_deps_file.m"
          }
#line 177 "write_deps_file.m"
      }
#line 139 "write_deps_file.m"
  }
#line 40 "write_deps_file.m"
}

void mercury__parse_tree__write_deps_file__init(void)
{
}

void mercury__parse_tree__write_deps_file__init_type_tables(void)
{
}

void mercury__parse_tree__write_deps_file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module parse_tree.write_deps_file. */
