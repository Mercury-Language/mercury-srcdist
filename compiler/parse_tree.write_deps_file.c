/*
** Automatically generated from `write_deps_file.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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
#include "parse_tree.status.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 2031 "write_deps_file.m"
struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s {
#line 2031 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17;
#line 2031 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Intermod_20;
#line 2037 "write_deps_file.m"
  MR_bool parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded;
#line 2053 "write_deps_file.m"
  jmp_buf parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0;
#line 2053 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30;
#line 2053 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_46_46;
#line 2053 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_47_47;
#line 2054 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_28_28;
#line 2054 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_V_28_28;
#line 2054 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_V_46_46;
#line 2031 "write_deps_file.m"
};


#line 137 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 140 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;

#line 143 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 146 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

#line 149 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

#line 152 "parse_tree.write_deps_file.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 155 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

#line 158 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

#line 1671 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(
#line 1671 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1671 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 1671 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4,
#line 1671 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5);

#line 1664 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(
#line 1664 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_5,
#line 1664 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_6,
#line 1664 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__ExtraLinkObjs_8);

#line 1105 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0_2(
#line 1105 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1105 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 1091 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0_1(
#line 1091 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1091 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 1636 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1634__1_3_p_0_1(
#line 1636 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1636 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1636 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 1634 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1634__1_3_p_0(
#line 1634 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_5,
#line 1634 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_15,
#line 1634 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_16);

#line 1636 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__foreign_modules__1636__1_2_f_0(
#line 1636 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_15,
#line 1636 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_18,
#line 1636 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_19);

#line 1284 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1284__1_5_p_0(
#line 1284 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1284 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_119,
#line 1284 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__HeadVar__3_120);

#line 1235 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1235__1_2_p_0(
#line 1235 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1235 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_92);

#line 1009 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__write_foreign_dependency_for_il__1009__1_2_f_0(
#line 1009 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_11,
#line 1009 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_63);

#line 821 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__submodules__821__1_3_p_0(
#line 821 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 821 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Str_7,
#line 821 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_10);

#line 2408 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__referenced_dlls__2408__1_1_f_0(
#line 2408 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_16);

#line 1106 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_files__1106__1_2_p_0(
#line 1106 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_33,
#line 1106 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_65);

#line 1091 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__generate_dependencies_write_d_files__1091__1_2_f_0(
#line 1091 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Lang_40,
#line 1091 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_57);

#line 617 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__617__1_7_p_0(
#line 617 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 617 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_43,
#line 617 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImportedModules_122,
#line 617 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ForeignImportExt_126,
#line 617 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_585);

#line 578 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__578__1_3_p_0(
#line 578 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SourceFileModuleName_13,
#line 578 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_575,
#line 578 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_576);

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
  MR_Word parse_tree__write_deps_file__DepStream_43,
#line 294 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_308);

#line 2524 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__compare_module_names_3_p_0(
#line 2524 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym1_4,
#line 2524 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym2_5,
#line 2524 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__Result_6);

#line 2433 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_both_opt_deps_8_p_0(
#line 2433 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 2433 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__BuildOptFiles_2,
#line 2433 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
#line 2433 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IntermodDirs_4,
#line 2433 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__5_5,
#line 2433 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__6_6);

#line 2393 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0_1(
#line 2393 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2393 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2393 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2393 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 2388 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0(
#line 2388 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Stream_5,
#line 2388 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SCC0_6);

#line 2344 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_source_file_3_p_0(
#line 2344 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_4,
#line 2344 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_5,
#line 2344 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__FileName_6);

#line 2254 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(
#line 2254 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_17,
#line 2254 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_18,
#line 2254 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_19,
#line 2254 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_20,
#line 2254 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ExeFileName_21,
#line 2254 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_22,
#line 2254 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_23,
#line 2254 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitPicObjFileName_24,
#line 2254 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_25,
#line 2254 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__LibFileName_26,
#line 2254 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SharedLibFileName_27,
#line 2254 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__JarFileName_28,
#line 2254 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DepFileName_29,
#line 2254 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DvFileName_30);

#line 2241 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(
#line 2241 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 2241 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_9,
#line 2241 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 2241 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_11,
#line 2241 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__5_5);

#line 2224 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1(
#line 2224 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2224 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2224 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2224 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 2218 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(
#line 2218 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 2218 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 2218 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 2218 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_10);

#line 2053 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(
#line 2053 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 2054 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3(
#line 2054 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 2053 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(
#line 2053 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 2053 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(
#line 2053 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 2031 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(
#line 2031 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_14,
#line 2031 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_15,
#line 2031 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_16,
#line 2031 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_17,
#line 2031 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_18,
#line 2031 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_19,
#line 2031 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_20,
#line 2031 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_21,
#line 2031 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_22,
#line 2031 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeOptsVar_23,
#line 2031 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeTransOptsVar_24);

#line 1988 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(
#line 1988 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_11,
#line 1988 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12,
#line 1988 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_13,
#line 1988 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_14,
#line 1988 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_15,
#line 1988 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_16,
#line 1988 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DepFileName_17,
#line 1988 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DvFileName_18);

#line 1754 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(
#line 1754 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_19,
#line 1754 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_20,
#line 1754 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_21,
#line 1754 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_22,
#line 1754 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_23,
#line 1754 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_24,
#line 1754 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_25,
#line 1754 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_26,
#line 1754 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_27,
#line 1754 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeOptsVar_28,
#line 1754 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeTransOptsVar_29,
#line 1754 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeModuleDepsVar_30,
#line 1754 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__ExeFileName_31,
#line 1754 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__JarFileName_32,
#line 1754 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__LibFileName_33,
#line 1754 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__SharedLibFileName_34);

#line 1696 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_7_p_0(
#line 1696 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1696 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1696 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1696 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1696 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12);

#line 1634 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__foreign_modules_2_f_0_1(
#line 1634 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1634 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1634 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 1630 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__foreign_modules_2_f_0(
#line 1630 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_4,
#line 1630 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_5);

#line 1610 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__select_ok_modules_3_p_0(
#line 1610 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1610 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_2,
#line 1610 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_3);

#line 1284 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_4(
#line 1284 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1284 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1284 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
#line 1284 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
#line 1284 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4);

#line 1235 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_3(
#line 1235 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1235 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 1216 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_2(
#line 1216 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1216 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1216 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 1213 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_1(
#line 1213 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1213 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1213 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 1213 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 1189 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0(
#line 1189 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1189 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1189 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1189 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1189 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12);

#line 1032 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(
#line 1032 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 1032 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 1032 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 1032 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Ext_10);

#line 1008 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0_1(
#line 1008 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1008 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 964 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0(
#line 964 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 964 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_10,
#line 964 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_11,
#line 964 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__AllDeps_12,
#line 964 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImports_13,
#line 964 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignLang_14);

#line 938 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(
#line 938 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 938 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_2,
#line 938 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_3);

#line 924 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(
#line 924 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 924 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 924 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 924 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_4);

#line 910 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(
#line 910 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 910 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_2,
#line 910 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
#line 910 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_4,
#line 910 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_5);

#line 900 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependency_5_p_0(
#line 900 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 900 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 900 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFile_8);

#line 897 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0_1(
#line 897 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 897 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 897 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 897 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 891 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0(
#line 891 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 891 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 891 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFiles_8);

#line 872 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dll_dependencies_list_6_p_0(
#line 872 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 872 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 872 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__3_3,
#line 872 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4);

#line 865 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(
#line 865 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 865 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2);

#line 843 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(
#line 843 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 843 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_10,
#line 843 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Prefix_11,
#line 843 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_12,
#line 843 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Basis_13,
#line 843 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_14);

#line 832 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_list_6_p_0(
#line 832 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 832 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 832 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 832 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_4);

#line 821 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__submodules_2_f_0_1(
#line 821 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 821 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 814 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__submodules_2_f_0(
#line 814 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 814 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules0_5);

#line 2408 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__referenced_dlls_2_f_0_1(
#line 2408 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2408 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 2372 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1(
#line 2372 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2372 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2372 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2372 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 711 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_7(
#line 711 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 711 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 711 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 711 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 634 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_6(
#line 634 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 634 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 634 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 634 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 617 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_5(
#line 617 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 617 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 617 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 617 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 578 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_4(
#line 578 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 578 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 578 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 403 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_3(
#line 403 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 403 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 381 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_2(
#line 381 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 381 "write_deps_file.m"
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


static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[124][2];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[8][3];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[3][10];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[3][5];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[8][6];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[1][11];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_7[1][9];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[1][7];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[3][1];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_10[2][8];


#line 1084 "write_deps_file.m"
/* sealed */ struct parse_tree__write_deps_file__vector_common_type_11_0_s {
#line 1084 "write_deps_file.m"
  const MR_Word parse_tree__write_deps_file__vector_common_type_11_0__vct_11_f_0;
#line 1084 "write_deps_file.m"
};

static /* final */ const struct parse_tree__write_deps_file__vector_common_type_11_0_s parse_tree__write_deps_file_vector_common_11[5];



static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[124][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_item_block_1)),
    ((MR_Box) (&parse_tree__status__parse_tree__status__type_ctor_info_aug_module_section_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_2[0]))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) ".java_date")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) ".il_date")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) ".dir/*.\044O")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) ".pic_s_date")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) ".s_date")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) ".c_date")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) ".trans_opt_date")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) ".optdate")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) " endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "\t\100:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) ".dll")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) ".il")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) ".class")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) ".java")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) ".pic_s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) ".s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) ".pic_o")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) ".\044O")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) ".c")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[12])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "endif\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) " \044(ALL_MLLIBS)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "\tdone\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "\t\t} || exit 1; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044(INSTALL_INT_DIR)\"/*.\044\044ext \"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[31])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "\t\t\t{ [ -d \"\044\044dir\" ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(LN_S) .. \"\044\044dir\" || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "\t\trm -rf \"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "\t\tdir=\"\044(INSTALL_INT_DIR)/Mercury/\044\044{ext}s\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "; do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\t\"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[30])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044(INSTALL_GRADE_INT_DIR)\"/*.\044\044ext \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_String) "\t\t\t{ [ -d \"\044\044dir\" ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(LN_S) .. \"\044\044dir\" || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_String) "\t\trm -rf \"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_String) "\t\tdir=\"\044(INSTALL_GRADE_INT_DIR)/Mercury/\044\044{ext}s\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_String) "; do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_String) "\tdone\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[27])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_INC_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[47])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_String) ".mhs); do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_String) "\t} || exit 1\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[27])))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_INT_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_String) "\t\t} && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[52])))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_INT_DIR)/Mercury/mihs; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[53])))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \044(INSTALL_INT_DIR)/Mercury/mihs ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \044(INSTALL_INT_DIR)/Mercury/mihs || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \044(INSTALL_INT_DIR)/Mercury/mihs\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_String) "\t} || exit 1\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[58])))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_GRADE_INC_SUBDIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[59])))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_String) "\t\t} && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \044(INSTALL_GRADE_INC_SUBDIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \044(INSTALL_GRADE_INC_SUBDIR) ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[63])))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \044(INSTALL_GRADE_INC_SUBDIR) || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[64])))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \044(INSTALL_GRADE_INC_SUBDIR)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[65])))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[66])))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails, then we just use\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[67])))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_String) "\t# The following is needed to support the \140--use-subdirs\' option\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[68])))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_String) "\tdone\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[69])))
  },
  /* row 71 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_GRADE_INC_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[70])))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[71])))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_String) ".mihs); do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[72])))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_String) ".all_trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 75 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[74])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 76 */
  {
    ((MR_Box) ((MR_String) ".all_opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 77 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[76])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[75])))
  },
  /* row 78 */
  {
    ((MR_Box) ((MR_String) ".all_int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 79 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[78])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[77])))
  },
  /* row 80 */
  {
    ((MR_Box) ((MR_String) ".all_ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 81 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[80])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[79])))
  },
  /* row 82 */
  {
    ((MR_Box) ((MR_String) ".classes")),
    ((MR_Box) ((MR_String) ".classes"))
  },
  /* row 83 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[82])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[81])))
  },
  /* row 84 */
  {
    ((MR_Box) ((MR_String) ".javas")),
    ((MR_Box) ((MR_String) ".javas"))
  },
  /* row 85 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[84])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[83])))
  },
  /* row 86 */
  {
    ((MR_Box) ((MR_String) ".ils")),
    ((MR_Box) ((MR_String) ".ils"))
  },
  /* row 87 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[86])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[85])))
  },
  /* row 88 */
  {
    ((MR_Box) ((MR_String) ".trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 89 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[88])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[87])))
  },
  /* row 90 */
  {
    ((MR_Box) ((MR_String) ".opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 91 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[90])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[89])))
  },
  /* row 92 */
  {
    ((MR_Box) ((MR_String) ".int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 93 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[92])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[91])))
  },
  /* row 94 */
  {
    ((MR_Box) ((MR_String) ".ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 95 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[94])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[93])))
  },
  /* row 96 */
  {
    ((MR_Box) ((MR_String) ".check")),
    ((MR_Box) ((MR_String) ".errs"))
  },
  /* row 97 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[96])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[95])))
  },
  /* row 98 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 99 */
  {
    ((MR_Box) ((MR_String) ".foreign_cs) | xargs rm -f\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[98])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_String) " :")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_String) ".fact_tables =")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_String) ".fact_tables.cs =")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_String) ".fact_tables.os =")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_String) ".fact_tables:%=\044(cs_subdir)%.c)\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_String) " : ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_String) " : mercury.sn\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_String) " \044(ERR_REDIRECT)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_String) "\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_String) "=")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_String) ".cs)\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLLIBS_DEP))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLOBJS))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLOBJS)))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_String) "ifeq (\044(findstring il,\044(GRADE)),il)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_String) ".foreign_dlls)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_String) " ifeq (\044(findstring java,\044(GRADE)),java)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 117 */
  {
    ((MR_Box) ((MR_String) ".classes)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 118 */
  {
    ((MR_Box) ((MR_String) "else\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 119 */
  {
    ((MR_Box) ((MR_String) " else\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_String) " endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 121 */
  {
    ((MR_Box) ((MR_String) " \044(ALL_MLLIBS)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_String) ")\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 123 */
  {
    ((MR_Box) ((MR_String) ".classes) | xargs rm -f\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[0])),
    ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[0])),
    ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[1])),
    ((MR_Box) (parse_tree__write_deps_file__referenced_dlls_2_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[2])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[5])),
    ((MR_Box) (parse_tree__write_deps_file__write_module_scc_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
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

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[8][6] = {
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
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_7[1][9] = {
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

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[1][7] = {
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
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "mercury_dotnet"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "mercury_il"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "mercury"))
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


static /* final */ const struct parse_tree__write_deps_file__vector_common_type_11_0_s parse_tree__write_deps_file_vector_common_11[5] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 3 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 2 },
  /* row 4 */   {     (MR_Integer) 4 },
};


#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "dir.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1876 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1884 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0
  }
};

#line 1892 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1900 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0
  }
};

#line 1909 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1918 "parse_tree.write_deps_file.c"
static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1927 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__write_deps_file__pair__ti_pair_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0
  }
};

#line 1935 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1671 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(
#line 1671 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1671 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 1671 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4,
#line 1671 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5)
#line 1671 "write_deps_file.m"
{
#line 1676 "write_deps_file.m"
  while (MR_TRUE)
#line 1676 "write_deps_file.m"
    {
#line 1676 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 1676 "write_deps_file.m"
      {
#line 1676 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 1676 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1676 "write_deps_file.m"
          *parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4;
#line 1676 "write_deps_file.m"
        else
#line 1678 "write_deps_file.m"
          {
#line 1678 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_49_49 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1678 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_51_51;
#line 1678 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1678 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Modules_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1678 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ModuleImports_17;
#line 1678 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FactDeps_18;
#line 1678 "write_deps_file.m"
            MR_Integer parse_tree__write_deps_file__NumFactDeps_19;
#line 1678 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ModuleList_20;
#line 1678 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__NewLinkObjs_22;
#line 1678 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_25_25;
#line 1678 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26;
#line 1679 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv0_V_25_25;
#line 1679 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_16_16;
#line 1682 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_28_28;
#line 1682 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_29_29;
#line 1682 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_30_30;
#line 1682 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_31_31;
#line 1682 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_32_32;
#line 1682 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_33_33;
#line 1682 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_34_34;
#line 1682 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_35_35;
#line 1682 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_36_36;
#line 1682 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_37_37;
#line 1682 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_38_38;
#line 1682 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_39_39;
#line 1682 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_40_40;
#line 1682 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_41_41;
#line 1682 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_42_42;
#line 1682 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_43_43;
#line 1682 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_44_44;
#line 1682 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_45_45;
#line 1682 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_46_46;
#line 1682 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_47_47;
#line 1682 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_48_48;

#line 1679 "write_deps_file.m"
            {
#line 1679 "write_deps_file.m"
              mercury__map__lookup_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_49_49, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__HeadVar__2_2, ((MR_Box) (parse_tree__write_deps_file__Module_11)), &parse_tree__write_deps_file__conv0_V_25_25);
            }
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__V_25_25 = ((MR_Word) parse_tree__write_deps_file__conv0_V_25_25);
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_25_25, (MR_Integer) 0)));
#line 1679 "write_deps_file.m"
            parse_tree__write_deps_file__ModuleImports_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_25_25, (MR_Integer) 1)));
#line 1682 "write_deps_file.m"
            parse_tree__write_deps_file__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 0)));
#line 1682 "write_deps_file.m"
            parse_tree__write_deps_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 1)));
#line 1682 "write_deps_file.m"
            parse_tree__write_deps_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 2)));
#line 1682 "write_deps_file.m"
            parse_tree__write_deps_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 3)));
#line 1682 "write_deps_file.m"
            parse_tree__write_deps_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 4)));
#line 1682 "write_deps_file.m"
            parse_tree__write_deps_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 5)));
#line 1682 "write_deps_file.m"
            parse_tree__write_deps_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 6)));
#line 1682 "write_deps_file.m"
            parse_tree__write_deps_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 7)));
#line 1682 "write_deps_file.m"
            parse_tree__write_deps_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 8)));
#line 1682 "write_deps_file.m"
            parse_tree__write_deps_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 9)));
#line 1682 "write_deps_file.m"
            parse_tree__write_deps_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 10)));
#line 1682 "write_deps_file.m"
            parse_tree__write_deps_file__FactDeps_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 11)));
#line 1682 "write_deps_file.m"
            parse_tree__write_deps_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 12)));
#line 1682 "write_deps_file.m"
            parse_tree__write_deps_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 13)));
#line 1682 "write_deps_file.m"
            parse_tree__write_deps_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 14)));
#line 1682 "write_deps_file.m"
            parse_tree__write_deps_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 15)));
#line 1682 "write_deps_file.m"
            parse_tree__write_deps_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 16)));
#line 1682 "write_deps_file.m"
            parse_tree__write_deps_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 17)));
#line 1682 "write_deps_file.m"
            parse_tree__write_deps_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 18)));
#line 1682 "write_deps_file.m"
            parse_tree__write_deps_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 19)));
#line 1682 "write_deps_file.m"
            parse_tree__write_deps_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 20)));
#line 1682 "write_deps_file.m"
            parse_tree__write_deps_file__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 21)));
#line 2100 "parse_tree.write_deps_file.c"
            parse_tree__write_deps_file__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1683 "write_deps_file.m"
            {
#line 1683 "write_deps_file.m"
              mercury__list__length_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_51_51, parse_tree__write_deps_file__FactDeps_18, &parse_tree__write_deps_file__NumFactDeps_19);
            }
#line 1684 "write_deps_file.m"
            {
#line 1684 "write_deps_file.m"
              mercury__list__duplicate_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_49_49, parse_tree__write_deps_file__NumFactDeps_19, ((MR_Box) (parse_tree__write_deps_file__Module_11)), &parse_tree__write_deps_file__ModuleList_20);
            }
#line 1685 "write_deps_file.m"
            {
#line 1685 "write_deps_file.m"
              mercury__assoc_list__from_corresponding_lists_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_51_51, parse_tree__write_deps_file__TypeCtorInfo_49_49, parse_tree__write_deps_file__FactDeps_18, parse_tree__write_deps_file__ModuleList_20, &parse_tree__write_deps_file__NewLinkObjs_22);
            }
#line 1691 "write_deps_file.m"
            {
#line 1691 "write_deps_file.m"
              mercury__list__append_3_p_1((MR_Word) &parse_tree__write_deps_file_scalar_common_2[1], parse_tree__write_deps_file__NewLinkObjs_22, parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4, &parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26);
            }
#line 1692 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 1692 "write_deps_file.m"
            {
#line 1692 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__1__tmp_copy_1 = parse_tree__write_deps_file__Modules_12;
#line 1692 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0__tmp_copy_4 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26;

#line 1692 "write_deps_file.m"
              parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0__tmp_copy_4;
#line 1692 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__1_1 = parse_tree__write_deps_file__HeadVar__1__tmp_copy_1;
#line 1692 "write_deps_file.m"
            }
#line 1692 "write_deps_file.m"
            continue;
#line 1678 "write_deps_file.m"
          }
#line 1676 "write_deps_file.m"
      }
#line 1676 "write_deps_file.m"
      break;
#line 1676 "write_deps_file.m"
    }
#line 1671 "write_deps_file.m"
}

#line 1664 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(
#line 1664 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_5,
#line 1664 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_6,
#line 1664 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__ExtraLinkObjs_8)
#line 1664 "write_deps_file.m"
{
#line 1667 "write_deps_file.m"
  {
#line 1667 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1667 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ExtraLinkObjs0_9;

#line 1668 "write_deps_file.m"
    {
#line 1668 "write_deps_file.m"
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(parse_tree__write_deps_file__Modules_5, parse_tree__write_deps_file__DepsMap_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_deps_file__ExtraLinkObjs0_9);
    }
#line 1669 "write_deps_file.m"
    {
#line 1669 "write_deps_file.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_2[1], parse_tree__write_deps_file__ExtraLinkObjs0_9, parse_tree__write_deps_file__ExtraLinkObjs_8);
#line 1669 "write_deps_file.m"
      return;
    }
#line 1667 "write_deps_file.m"
  }
#line 1664 "write_deps_file.m"
}

#line 1105 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0_2(
#line 1105 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1105 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 1105 "write_deps_file.m"
{
#line 1105 "write_deps_file.m"
  {
#line 1105 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1105 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 1105 "write_deps_file.m"
    {
#line 1105 "write_deps_file.m"
      return parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_files__1106__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 1105 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1105 "write_deps_file.m"
  }
#line 1105 "write_deps_file.m"
}

#line 1091 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0_1(
#line 1091 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1091 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 1091 "write_deps_file.m"
{
#line 1091 "write_deps_file.m"
  {
#line 1091 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 1091 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1091 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_HeadVar__3_58;

#line 1091 "write_deps_file.m"
    {
#line 1091 "write_deps_file.m"
      parse_tree__write_deps_file__conv0_HeadVar__3_58 = parse_tree__write_deps_file__IntroducedFrom__func__generate_dependencies_write_d_files__1091__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 1091 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__3_58));
#line 1091 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 1091 "write_deps_file.m"
  }
#line 1091 "write_deps_file.m"
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
  MR_Word parse_tree__write_deps_file__ImplDepsGraph_4,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IndirectDepsGraph_5,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IndirectOptDepsGraph_6,
#line 59 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOptOrder_7)
#line 59 "write_deps_file.m"
{
#line 1050 "write_deps_file.m"
  while (MR_TRUE)
#line 1050 "write_deps_file.m"
    {
#line 1050 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 1050 "write_deps_file.m"
      {
#line 1050 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 1050 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1050 "write_deps_file.m"
          {
#line 1050 "write_deps_file.m"
          }
#line 1050 "write_deps_file.m"
        else
#line 1053 "write_deps_file.m"
          {
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_116_116;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_117_117;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_118_118;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Dep_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 0)));
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Deps_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 1)));
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ModuleName_33;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__IndirectOptDeps_34;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Intermod_35;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__IntDeps_36;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ImplDeps_37;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__IndirectDeps_38;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Target_39;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Lang_40;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ForeignImports_41;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FindModule_43;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDeps0_46;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDeps_49;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Errors_50;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FatalErrors_51;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Dep_22, (MR_Integer) 1)));
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_56_56;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_61_61;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_Module_62_62;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64;
#line 1053 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_66_66;
#line 1055 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Dep_22, (MR_Integer) 0)));
#line 1095 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_73_73;
#line 1095 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_74_74;
#line 1095 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_75_75;
#line 1095 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_76_76;
#line 1095 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_77_77;
#line 1095 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_78_78;
#line 1095 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_79_79;
#line 1095 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_80_80;
#line 1095 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_81_81;
#line 1095 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_82_82;
#line 1095 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_83_83;
#line 1095 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_84_84;
#line 1095 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_86_86;
#line 1095 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_87_87;
#line 1095 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_88_88;
#line 1095 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_89_89;
#line 1095 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_90_90;
#line 1095 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_91_91;
#line 1095 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_92_92;
#line 1095 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_93_93;
#line 1095 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_94_94;
#line 1095 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_85_85;
#line 1108 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_45_45;
#line 1112 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDeps1_48;
#line 1109 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_47_47;
#line 1119 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_95_95;
#line 1119 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_96_96;
#line 1119 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_97_97;
#line 1119 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_98_98;
#line 1119 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_99_99;
#line 1119 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_100_100;
#line 1119 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_101_101;
#line 1119 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_102_102;
#line 1119 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_103_103;
#line 1119 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_104_104;
#line 1119 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_105_105;
#line 1119 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_106_106;
#line 1119 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_107_107;
#line 1119 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_108_108;
#line 1119 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_109_109;
#line 1119 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_110_110;
#line 1119 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_111_111;
#line 1119 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_112_112;
#line 1119 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_113_113;
#line 1119 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_114_114;
#line 1119 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_115_115;

#line 1061 "write_deps_file.m"
            {
#line 1061 "write_deps_file.m"
              parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, &parse_tree__write_deps_file__ModuleName_33);
            }
#line 1062 "write_deps_file.m"
            {
#line 1062 "write_deps_file.m"
              parse_tree__module_deps_graph__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__IndirectOptDepsGraph_6, parse_tree__write_deps_file__ModuleName_33, &parse_tree__write_deps_file__IndirectOptDeps_34);
            }
#line 1064 "write_deps_file.m"
            {
#line 1064 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_1, (MR_Integer) 329, &parse_tree__write_deps_file__Intermod_35);
            }
#line 1074 "write_deps_file.m"
#line 1074 "write_deps_file.m"
            switch (parse_tree__write_deps_file__Intermod_35) {
#line 1074 "write_deps_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1074 "write_deps_file.m"
              case (MR_Integer) 0:
#line 1075 "write_deps_file.m"
                {
#line 1076 "write_deps_file.m"
                  {
#line 1076 "write_deps_file.m"
                    parse_tree__module_deps_graph__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__IntDepsGraph_3, parse_tree__write_deps_file__ModuleName_33, &parse_tree__write_deps_file__IntDeps_36);
                  }
#line 1077 "write_deps_file.m"
                  {
#line 1077 "write_deps_file.m"
                    parse_tree__module_deps_graph__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__ImplDepsGraph_4, parse_tree__write_deps_file__ModuleName_33, &parse_tree__write_deps_file__ImplDeps_37);
                  }
#line 1078 "write_deps_file.m"
                  {
#line 1078 "write_deps_file.m"
                    parse_tree__module_deps_graph__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__IndirectDepsGraph_5, parse_tree__write_deps_file__ModuleName_33, &parse_tree__write_deps_file__IndirectDeps_38);
                  }
#line 1075 "write_deps_file.m"
                }
#line 1074 "write_deps_file.m"
                break;
#line 1074 "write_deps_file.m"
              case (MR_Integer) 1:
#line 1067 "write_deps_file.m"
                {
#line 1071 "write_deps_file.m"
                  parse_tree__write_deps_file__IntDeps_36 = parse_tree__write_deps_file__IndirectOptDeps_34;
#line 1072 "write_deps_file.m"
                  parse_tree__write_deps_file__ImplDeps_37 = parse_tree__write_deps_file__IndirectOptDeps_34;
#line 1073 "write_deps_file.m"
                  parse_tree__write_deps_file__IndirectDeps_38 = parse_tree__write_deps_file__IndirectOptDeps_34;
#line 1067 "write_deps_file.m"
                }
#line 1074 "write_deps_file.m"
                break;
#line 1074 "write_deps_file.m"
            }
#line 1082 "write_deps_file.m"
            {
#line 1082 "write_deps_file.m"
              libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_1, &parse_tree__write_deps_file__Target_39);
            }
#line 1084 "write_deps_file.m"
            parse_tree__write_deps_file__Lang_40 = ((&parse_tree__write_deps_file_vector_common_11[0 + parse_tree__write_deps_file__Target_39]))->parse_tree__write_deps_file__vector_common_type_11_0__vct_11_f_0;
#line 2500 "parse_tree.write_deps_file.c"
            parse_tree__write_deps_file__TypeCtorInfo_116_116 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2502 "parse_tree.write_deps_file.c"
            parse_tree__write_deps_file__TypeCtorInfo_117_117 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
#line 1091 "write_deps_file.m"
            {
#line 1091 "write_deps_file.m"
              parse_tree__write_deps_file__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1091 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_56_56, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[7]));
#line 1091 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_56_56, 1) = ((MR_Box) (parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0_1));
#line 1091 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1091 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_56_56, 3) = ((MR_Box) (parse_tree__write_deps_file__Lang_40));
#line 1091 "write_deps_file.m"
            }
#line 1091 "write_deps_file.m"
            {
#line 1091 "write_deps_file.m"
              parse_tree__write_deps_file__ForeignImports_41 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_116_116, parse_tree__write_deps_file__TypeCtorInfo_117_117, parse_tree__write_deps_file__V_56_56, parse_tree__write_deps_file__IndirectOptDeps_34);
            }
#line 1095 "write_deps_file.m"
            {
#line 1095 "write_deps_file.m"
              parse_tree__write_deps_file__V_61_61 = mercury__cord__from_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_117_117, parse_tree__write_deps_file__ForeignImports_41);
            }
#line 1095 "write_deps_file.m"
            parse_tree__write_deps_file__V_73_73 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 0)));
#line 1095 "write_deps_file.m"
            parse_tree__write_deps_file__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 1)));
#line 1095 "write_deps_file.m"
            parse_tree__write_deps_file__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 2)));
#line 1095 "write_deps_file.m"
            parse_tree__write_deps_file__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 3)));
#line 1095 "write_deps_file.m"
            parse_tree__write_deps_file__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 4)));
#line 1095 "write_deps_file.m"
            parse_tree__write_deps_file__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 5)));
#line 1095 "write_deps_file.m"
            parse_tree__write_deps_file__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 6)));
#line 1095 "write_deps_file.m"
            parse_tree__write_deps_file__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 7)));
#line 1095 "write_deps_file.m"
            parse_tree__write_deps_file__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 8)));
#line 1095 "write_deps_file.m"
            parse_tree__write_deps_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 9)));
#line 1095 "write_deps_file.m"
            parse_tree__write_deps_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 10)));
#line 1095 "write_deps_file.m"
            parse_tree__write_deps_file__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 11)));
#line 1095 "write_deps_file.m"
            parse_tree__write_deps_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 12)));
#line 1095 "write_deps_file.m"
            parse_tree__write_deps_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 13)));
#line 1095 "write_deps_file.m"
            parse_tree__write_deps_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 14)));
#line 1095 "write_deps_file.m"
            parse_tree__write_deps_file__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 15)));
#line 1095 "write_deps_file.m"
            parse_tree__write_deps_file__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 16)));
#line 1095 "write_deps_file.m"
            parse_tree__write_deps_file__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 17)));
#line 1095 "write_deps_file.m"
            parse_tree__write_deps_file__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 18)));
#line 1095 "write_deps_file.m"
            parse_tree__write_deps_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 19)));
#line 1095 "write_deps_file.m"
            parse_tree__write_deps_file__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 20)));
#line 1095 "write_deps_file.m"
            parse_tree__write_deps_file__V_94_94 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_54_54, (MR_Integer) 21)));
#line 1095 "write_deps_file.m"
            {
#line 1095 "write_deps_file.m"
              parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 22 * sizeof(MR_Word)), NULL, NULL);
#line 1095 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 0) = ((MR_Box) (parse_tree__write_deps_file__V_73_73));
#line 1095 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 1) = ((MR_Box) (parse_tree__write_deps_file__V_74_74));
#line 1095 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 2) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 1095 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 3) = ((MR_Box) (parse_tree__write_deps_file__V_76_76));
#line 1095 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 4) = ((MR_Box) (parse_tree__write_deps_file__V_77_77));
#line 1095 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 5) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 1095 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 6) = ((MR_Box) (parse_tree__write_deps_file__V_79_79));
#line 1095 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 7) = ((MR_Box) (parse_tree__write_deps_file__V_80_80));
#line 1095 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 8) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 1095 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 9) = ((MR_Box) (parse_tree__write_deps_file__V_82_82));
#line 1095 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 10) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 1095 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 11) = ((MR_Box) (parse_tree__write_deps_file__V_84_84));
#line 1095 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 12) = ((MR_Box) (parse_tree__write_deps_file__V_61_61));
#line 1095 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 13) = ((MR_Box) (parse_tree__write_deps_file__V_86_86));
#line 1095 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 14) = ((MR_Box) (parse_tree__write_deps_file__V_87_87));
#line 1095 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 15) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 1095 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 16) = ((MR_Box) (parse_tree__write_deps_file__V_89_89));
#line 1095 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 17) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 1095 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 18) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 1095 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 19) = ((MR_Box) (parse_tree__write_deps_file__V_92_92));
#line 1095 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 20) = ((MR_Box) (parse_tree__write_deps_file__V_93_93));
#line 1095 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, 21) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 1095 "write_deps_file.m"
            }
#line 1097 "write_deps_file.m"
            {
#line 1097 "write_deps_file.m"
              parse_tree__module_imports__module_and_imports_set_int_deps_3_p_0(parse_tree__write_deps_file__IntDeps_36, parse_tree__write_deps_file__STATE_VARIABLE_Module_60_60, &parse_tree__write_deps_file__STATE_VARIABLE_Module_62_62);
            }
#line 1098 "write_deps_file.m"
            {
#line 1098 "write_deps_file.m"
              parse_tree__module_imports__module_and_imports_set_impl_deps_3_p_0(parse_tree__write_deps_file__ImplDeps_37, parse_tree__write_deps_file__STATE_VARIABLE_Module_62_62, &parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63);
            }
#line 1099 "write_deps_file.m"
            {
#line 1099 "write_deps_file.m"
              parse_tree__module_imports__module_and_imports_set_indirect_deps_3_p_0(parse_tree__write_deps_file__IndirectDeps_38, parse_tree__write_deps_file__STATE_VARIABLE_Module_63_63, &parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64);
            }
#line 1105 "write_deps_file.m"
            {
#line 1105 "write_deps_file.m"
              parse_tree__write_deps_file__FindModule_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1105 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_43, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[1]));
#line 1105 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_43, 1) = ((MR_Box) (parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0_2));
#line 1105 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1105 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_43, 3) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_33));
#line 1105 "write_deps_file.m"
            }
#line 1108 "write_deps_file.m"
            {
#line 1108 "write_deps_file.m"
              mercury__list__takewhile_4_p_0(parse_tree__write_deps_file__TypeCtorInfo_116_116, parse_tree__write_deps_file__FindModule_43, parse_tree__write_deps_file__TransOptOrder_7, &parse_tree__write_deps_file__V_45_45, &parse_tree__write_deps_file__TransOptDeps0_46);
            }
#line 1109 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__TransOptDeps0_46)) == (MR_mktag((MR_Integer) 1)));
#line 1109 "write_deps_file.m"
            if (parse_tree__write_deps_file__succeeded)
#line 1109 "write_deps_file.m"
              {
#line 1109 "write_deps_file.m"
                parse_tree__write_deps_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__TransOptDeps0_46, (MR_Integer) 0)));
#line 1109 "write_deps_file.m"
                parse_tree__write_deps_file__TransOptDeps1_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__TransOptDeps0_46, (MR_Integer) 1)));
#line 1111 "write_deps_file.m"
                parse_tree__write_deps_file__TransOptDeps_49 = parse_tree__write_deps_file__TransOptDeps1_48;
#line 1109 "write_deps_file.m"
              }
#line 1109 "write_deps_file.m"
            else
#line 1113 "write_deps_file.m"
              parse_tree__write_deps_file__TransOptDeps_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1119 "write_deps_file.m"
            parse_tree__write_deps_file__V_95_95 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, (MR_Integer) 0)));
#line 1119 "write_deps_file.m"
            parse_tree__write_deps_file__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, (MR_Integer) 1)));
#line 1119 "write_deps_file.m"
            parse_tree__write_deps_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, (MR_Integer) 2)));
#line 1119 "write_deps_file.m"
            parse_tree__write_deps_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, (MR_Integer) 3)));
#line 1119 "write_deps_file.m"
            parse_tree__write_deps_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, (MR_Integer) 4)));
#line 1119 "write_deps_file.m"
            parse_tree__write_deps_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, (MR_Integer) 5)));
#line 1119 "write_deps_file.m"
            parse_tree__write_deps_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, (MR_Integer) 6)));
#line 1119 "write_deps_file.m"
            parse_tree__write_deps_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, (MR_Integer) 7)));
#line 1119 "write_deps_file.m"
            parse_tree__write_deps_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, (MR_Integer) 8)));
#line 1119 "write_deps_file.m"
            parse_tree__write_deps_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, (MR_Integer) 9)));
#line 1119 "write_deps_file.m"
            parse_tree__write_deps_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, (MR_Integer) 10)));
#line 1119 "write_deps_file.m"
            parse_tree__write_deps_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, (MR_Integer) 11)));
#line 1119 "write_deps_file.m"
            parse_tree__write_deps_file__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, (MR_Integer) 12)));
#line 1119 "write_deps_file.m"
            parse_tree__write_deps_file__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, (MR_Integer) 13)));
#line 1119 "write_deps_file.m"
            parse_tree__write_deps_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, (MR_Integer) 14)));
#line 1119 "write_deps_file.m"
            parse_tree__write_deps_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, (MR_Integer) 15)));
#line 1119 "write_deps_file.m"
            parse_tree__write_deps_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, (MR_Integer) 16)));
#line 1119 "write_deps_file.m"
            parse_tree__write_deps_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, (MR_Integer) 17)));
#line 1119 "write_deps_file.m"
            parse_tree__write_deps_file__Errors_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, (MR_Integer) 18)));
#line 1119 "write_deps_file.m"
            parse_tree__write_deps_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, (MR_Integer) 19)));
#line 1119 "write_deps_file.m"
            parse_tree__write_deps_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, (MR_Integer) 20)));
#line 1119 "write_deps_file.m"
            parse_tree__write_deps_file__V_115_115 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, (MR_Integer) 21)));
#line 1120 "write_deps_file.m"
            {
#line 1120 "write_deps_file.m"
              parse_tree__write_deps_file__V_66_66 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
            }
#line 2723 "parse_tree.write_deps_file.c"
            parse_tree__write_deps_file__TypeCtorInfo_118_118 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1120 "write_deps_file.m"
            {
#line 1120 "write_deps_file.m"
              mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_118_118, parse_tree__write_deps_file__Errors_50, parse_tree__write_deps_file__V_66_66, &parse_tree__write_deps_file__FatalErrors_51);
            }
#line 1121 "write_deps_file.m"
            {
#line 1121 "write_deps_file.m"
              parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_118_118, parse_tree__write_deps_file__FatalErrors_51);
            }
#line 1124 "write_deps_file.m"
            if (parse_tree__write_deps_file__succeeded)
#line 1122 "write_deps_file.m"
              {
#line 1122 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_67_67;
#line 1122 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_68_68;

#line 1123 "write_deps_file.m"
                {
#line 1123 "write_deps_file.m"
                  parse_tree__write_deps_file__V_67_67 = mercury__set__list_to_set_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_116_116, parse_tree__write_deps_file__IndirectOptDeps_34);
                }
#line 1123 "write_deps_file.m"
                {
#line 1123 "write_deps_file.m"
                  parse_tree__write_deps_file__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1123 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDeps_49));
#line 1123 "write_deps_file.m"
                }
#line 1122 "write_deps_file.m"
                {
#line 1122 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependency_file_6_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__STATE_VARIABLE_Module_64_64, parse_tree__write_deps_file__V_67_67, parse_tree__write_deps_file__V_68_68);
                }
#line 1122 "write_deps_file.m"
              }
#line 1124 "write_deps_file.m"
            else
#line 1124 "write_deps_file.m"
              {
#line 1124 "write_deps_file.m"
              }
#line 1127 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 1127 "write_deps_file.m"
            {
#line 1127 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__2__tmp_copy_2 = parse_tree__write_deps_file__Deps_23;

#line 1127 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__2_2 = parse_tree__write_deps_file__HeadVar__2__tmp_copy_2;
#line 1127 "write_deps_file.m"
            }
#line 1127 "write_deps_file.m"
            continue;
#line 1053 "write_deps_file.m"
          }
#line 1050 "write_deps_file.m"
      }
#line 1050 "write_deps_file.m"
      break;
#line 1050 "write_deps_file.m"
    }
#line 59 "write_deps_file.m"
}

#line 1636 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1634__1_3_p_0_1(
#line 1636 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1636 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1636 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 1636 "write_deps_file.m"
{
#line 1636 "write_deps_file.m"
  {
#line 1636 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1636 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1636 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv1_HeadVar__3_19;

#line 1636 "write_deps_file.m"
    {
#line 1636 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__func__foreign_modules__1636__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv1_HeadVar__3_19);
    }
#line 1636 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1636 "write_deps_file.m"
      {
#line 1636 "write_deps_file.m"
        *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_HeadVar__3_19));
#line 1636 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 1636 "write_deps_file.m"
      }
#line 1636 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1636 "write_deps_file.m"
  }
#line 1636 "write_deps_file.m"
}

#line 1634 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1634__1_3_p_0(
#line 1634 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_5,
#line 1634 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_15,
#line 1634 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_16)
#line 1634 "write_deps_file.m"
{
#line 1634 "write_deps_file.m"
  {
#line 1634 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1634 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_23_23;
#line 1634 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeInfo_24_24;
#line 1634 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_35_59;
#line 1634 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__LangList_10;
#line 1634 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_17_17;
#line 1634 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleImports_32;
#line 1634 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Langs_33;
#line 1634 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_34_34;
#line 1634 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_35_35;
#line 1652 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_V_34_34;
#line 1652 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_31_31;
#line 1653 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_36_36;
#line 1653 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_37_37;
#line 1653 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_38_38;
#line 1653 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_39_39;
#line 1653 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_40_40;
#line 1653 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_41_41;
#line 1653 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_42_42;
#line 1653 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_43_43;
#line 1653 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_44_44;
#line 1653 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_45_45;
#line 1653 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_46_46;
#line 1653 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_47_47;
#line 1653 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_48_48;
#line 1653 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_49_49;
#line 1653 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_50_50;
#line 1653 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_51_51;
#line 1653 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_52_52;
#line 1653 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_53_53;
#line 1653 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_54_54;
#line 1653 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_55_55;
#line 1653 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_56_56;

#line 1652 "write_deps_file.m"
    {
#line 1652 "write_deps_file.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_5, ((MR_Box) (parse_tree__write_deps_file__HeadVar__2_15)), &parse_tree__write_deps_file__conv0_V_34_34);
    }
#line 1652 "write_deps_file.m"
    parse_tree__write_deps_file__V_34_34 = ((MR_Word) parse_tree__write_deps_file__conv0_V_34_34);
#line 1652 "write_deps_file.m"
    parse_tree__write_deps_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_34_34, (MR_Integer) 0)));
#line 1652 "write_deps_file.m"
    parse_tree__write_deps_file__ModuleImports_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_34_34, (MR_Integer) 1)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 0)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 1)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 2)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 3)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 4)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 5)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 6)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 7)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 8)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 9)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 10)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 11)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 12)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 13)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 14)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 15)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 16)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 17)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 18)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 19)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 20)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 21)));
#line 1653 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__V_35_35)) == (MR_mktag((MR_Integer) 1)));
#line 1653 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1653 "write_deps_file.m"
      {
#line 1653 "write_deps_file.m"
        parse_tree__write_deps_file__Langs_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_35_35, (MR_Integer) 0)));
#line 2979 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_35_59 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 1654 "write_deps_file.m"
        {
#line 1654 "write_deps_file.m"
          parse_tree__write_deps_file__LangList_10 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_35_59, parse_tree__write_deps_file__Langs_33);
        }
#line 2986 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_23_23 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 2988 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeInfo_24_24 = (MR_Word) &parse_tree__write_deps_file_scalar_common_2[0];
#line 1636 "write_deps_file.m"
        {
#line 1636 "write_deps_file.m"
          parse_tree__write_deps_file__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1636 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_17_17, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[6]));
#line 1636 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_17_17, 1) = ((MR_Box) (parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1634__1_3_p_0_1));
#line 1636 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1636 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_17_17, 3) = ((MR_Box) (parse_tree__write_deps_file__HeadVar__2_15));
#line 1636 "write_deps_file.m"
        }
#line 1636 "write_deps_file.m"
        {
#line 1636 "write_deps_file.m"
          *parse_tree__write_deps_file__HeadVar__3_16 = mercury__list__filter_map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, parse_tree__write_deps_file__TypeInfo_24_24, parse_tree__write_deps_file__V_17_17, parse_tree__write_deps_file__LangList_10);
        }
#line 1636 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 1653 "write_deps_file.m"
      }
#line 1634 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1634 "write_deps_file.m"
  }
#line 1634 "write_deps_file.m"
}

#line 1636 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__foreign_modules__1636__1_2_f_0(
#line 1636 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_15,
#line 1636 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_18,
#line 1636 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_19)
#line 1636 "write_deps_file.m"
{
#line 1636 "write_deps_file.m"
  {
#line 1636 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1636 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__NewM_12;
#line 1636 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Ext_13;

#line 1637 "write_deps_file.m"
    {
#line 1637 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(parse_tree__write_deps_file__HeadVar__1_15, parse_tree__write_deps_file__HeadVar__2_18, &parse_tree__write_deps_file__NewM_12);
    }
#line 1636 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1636 "write_deps_file.m"
      {
#line 1638 "write_deps_file.m"
        {
#line 1638 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(parse_tree__write_deps_file__HeadVar__2_18, &parse_tree__write_deps_file__Ext_13);
        }
#line 1636 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 1636 "write_deps_file.m"
          {
#line 1636 "write_deps_file.m"
            {
#line 1636 "write_deps_file.m"
              MR_Word base;
#line 1636 "write_deps_file.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1636 "write_deps_file.m"
              *parse_tree__write_deps_file__HeadVar__3_19 = base;
#line 1636 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (parse_tree__write_deps_file__NewM_12));
#line 1636 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (parse_tree__write_deps_file__Ext_13));
#line 1636 "write_deps_file.m"
            }
#line 1636 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 1636 "write_deps_file.m"
          }
#line 1636 "write_deps_file.m"
      }
#line 1636 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1636 "write_deps_file.m"
  }
#line 1636 "write_deps_file.m"
}

#line 1284 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1284__1_5_p_0(
#line 1284 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1284 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_119,
#line 1284 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__HeadVar__3_120)
#line 1284 "write_deps_file.m"
{
#line 1284 "write_deps_file.m"
  {
#line 1284 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1284 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__F0_45;
#line 1284 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__M_461 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__2_119, (MR_Integer) 0)));
#line 1284 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__E_462 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__2_119, (MR_Integer) 1)));

#line 1285 "write_deps_file.m"
    {
#line 1285 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__M_461, parse_tree__write_deps_file__E_462, (MR_Integer) 0, &parse_tree__write_deps_file__F0_45);
    }
#line 1286 "write_deps_file.m"
    {
#line 1286 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__3_120 = mercury__string__f_43_43_2_f_0((MR_String) "\044(os_subdir)", parse_tree__write_deps_file__F0_45);
    }
#line 1284 "write_deps_file.m"
  }
#line 1284 "write_deps_file.m"
}

#line 1235 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1235__1_2_p_0(
#line 1235 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1235 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_92)
#line 1235 "write_deps_file.m"
{
#line 1235 "write_deps_file.m"
  {
#line 1235 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleImports_26;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_93_93;
#line 1235 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_94_94;
#line 1237 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_V_93_93;
#line 1237 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_25_25;
#line 1238 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_465_465;
#line 1238 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_466_466;
#line 1238 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_467_467;
#line 1238 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_468_468;
#line 1238 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_469_469;
#line 1238 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_470_470;
#line 1238 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_471_471;
#line 1238 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_472_472;
#line 1238 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_473_473;
#line 1238 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_474_474;
#line 1238 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_475_475;
#line 1238 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_476_476;
#line 1238 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_477_477;
#line 1238 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_478_478;
#line 1238 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_479_479;
#line 1238 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_480_480;
#line 1238 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_481_481;
#line 1238 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_482_482;
#line 1238 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_483_483;
#line 1238 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_484_484;
#line 1238 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_485_485;
#line 1238 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_27_27;
#line 1238 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_28_28;

#line 1237 "write_deps_file.m"
    {
#line 1237 "write_deps_file.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_11, ((MR_Box) (parse_tree__write_deps_file__HeadVar__2_92)), &parse_tree__write_deps_file__conv0_V_93_93);
    }
#line 1237 "write_deps_file.m"
    parse_tree__write_deps_file__V_93_93 = ((MR_Word) parse_tree__write_deps_file__conv0_V_93_93);
#line 1237 "write_deps_file.m"
    parse_tree__write_deps_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_93_93, (MR_Integer) 0)));
#line 1237 "write_deps_file.m"
    parse_tree__write_deps_file__ModuleImports_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_93_93, (MR_Integer) 1)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__V_465_465 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 0)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__V_466_466 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 1)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__V_467_467 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 2)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__V_468_468 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 3)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__V_469_469 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 4)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__V_470_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 5)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__V_471_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 6)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__V_472_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 7)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 8)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__V_473_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 9)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__V_474_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 10)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__V_475_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 11)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__V_476_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 12)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__V_477_477 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 13)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__V_478_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 14)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__V_479_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 15)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__V_480_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 16)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__V_481_481 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 17)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__V_482_482 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 18)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__V_483_483 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 19)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__V_484_484 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 20)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__V_485_485 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 21)));
#line 1238 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__V_94_94)) == (MR_mktag((MR_Integer) 1)));
#line 1238 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1238 "write_deps_file.m"
      {
#line 1238 "write_deps_file.m"
        parse_tree__write_deps_file__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, (MR_Integer) 0)));
#line 1238 "write_deps_file.m"
        parse_tree__write_deps_file__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, (MR_Integer) 1)));
#line 1238 "write_deps_file.m"
      }
#line 1235 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1235 "write_deps_file.m"
  }
#line 1235 "write_deps_file.m"
}

#line 1009 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__write_foreign_dependency_for_il__1009__1_2_f_0(
#line 1009 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_11,
#line 1009 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_63)
#line 1009 "write_deps_file.m"
{
#line 1009 "write_deps_file.m"
  {
#line 1009 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1009 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__HeadVar__3_64;

#line 1009 "write_deps_file.m"
    {
#line 1009 "write_deps_file.m"
      return parse_tree__write_deps_file__HeadVar__3_64 = parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(parse_tree__write_deps_file__HeadVar__2_63, parse_tree__write_deps_file__ModuleName_11);
    }
#line 1009 "write_deps_file.m"
    return parse_tree__write_deps_file__HeadVar__3_64;
#line 1009 "write_deps_file.m"
  }
#line 1009 "write_deps_file.m"
}

#line 821 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__submodules__821__1_3_p_0(
#line 821 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 821 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Str_7,
#line 821 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_10)
#line 821 "write_deps_file.m"
{
#line 821 "write_deps_file.m"
  {
#line 821 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 821 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_13_13;

#line 822 "write_deps_file.m"
    {
#line 822 "write_deps_file.m"
      parse_tree__write_deps_file__V_13_13 = mdbcomp__sym_name__outermost_qualifier_1_f_0(parse_tree__write_deps_file__HeadVar__3_10);
    }
#line 822 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__Str_7, parse_tree__write_deps_file__V_13_13) == 0);
#line 821 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 821 "write_deps_file.m"
      {
#line 823 "write_deps_file.m"
        {
#line 823 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__write_deps_file__HeadVar__3_10, parse_tree__write_deps_file__Module_4);
        }
#line 823 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 821 "write_deps_file.m"
      }
#line 821 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 821 "write_deps_file.m"
  }
#line 821 "write_deps_file.m"
}

#line 2408 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__referenced_dlls__2408__1_1_f_0(
#line 2408 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_16)
#line 2408 "write_deps_file.m"
{
#line 2408 "write_deps_file.m"
  {
#line 2408 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2408 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__HeadVar__2_17;

#line 2409 "write_deps_file.m"
    {
#line 2409 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__HeadVar__1_16);
    }
#line 2408 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 2410 "write_deps_file.m"
      {
#line 2410 "write_deps_file.m"
        parse_tree__write_deps_file__HeadVar__2_17 = (MR_Word) &parse_tree__write_deps_file_scalar_common_9[2];
#line 2410 "write_deps_file.m"
      }
#line 2408 "write_deps_file.m"
    else
#line 2413 "write_deps_file.m"
      {
#line 2413 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_19_19;

#line 2413 "write_deps_file.m"
        {
#line 2413 "write_deps_file.m"
          parse_tree__write_deps_file__V_19_19 = mdbcomp__sym_name__outermost_qualifier_1_f_0(parse_tree__write_deps_file__HeadVar__1_16);
        }
#line 2413 "write_deps_file.m"
        {
#line 2413 "write_deps_file.m"
          parse_tree__write_deps_file__HeadVar__2_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2413 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__2_17, 0) = ((MR_Box) (parse_tree__write_deps_file__V_19_19));
#line 2413 "write_deps_file.m"
        }
#line 2413 "write_deps_file.m"
      }
#line 2408 "write_deps_file.m"
    return parse_tree__write_deps_file__HeadVar__2_17;
#line 2408 "write_deps_file.m"
  }
#line 2408 "write_deps_file.m"
}

#line 1106 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_files__1106__1_2_p_0(
#line 1106 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_33,
#line 1106 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_65)
#line 1106 "write_deps_file.m"
{
#line 1106 "write_deps_file.m"
  {
#line 1106 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 1106 "write_deps_file.m"
    {
#line 1106 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__write_deps_file__ModuleName_33, parse_tree__write_deps_file__HeadVar__2_65);
    }
#line 1106 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 1106 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1106 "write_deps_file.m"
  }
#line 1106 "write_deps_file.m"
}

#line 1091 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__generate_dependencies_write_d_files__1091__1_2_f_0(
#line 1091 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Lang_40,
#line 1091 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_57)
#line 1091 "write_deps_file.m"
{
#line 1091 "write_deps_file.m"
  {
#line 1091 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1091 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__HeadVar__3_58;
#line 1091 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_59_59;

#line 1093 "write_deps_file.m"
    {
#line 1093 "write_deps_file.m"
      parse_tree__write_deps_file__V_59_59 = mercury__term__context_init_0_f_0();
    }
#line 1092 "write_deps_file.m"
    {
#line 1092 "write_deps_file.m"
      parse_tree__write_deps_file__HeadVar__3_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1092 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__3_58, 0) = ((MR_Box) (parse_tree__write_deps_file__Lang_40));
#line 1092 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__3_58, 1) = ((MR_Box) (parse_tree__write_deps_file__HeadVar__2_57));
#line 1092 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__3_58, 2) = ((MR_Box) (parse_tree__write_deps_file__V_59_59));
#line 1092 "write_deps_file.m"
    }
#line 1091 "write_deps_file.m"
    return parse_tree__write_deps_file__HeadVar__3_58;
#line 1091 "write_deps_file.m"
  }
#line 1091 "write_deps_file.m"
}

#line 617 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__617__1_7_p_0(
#line 617 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 617 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_43,
#line 617 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImportedModules_122,
#line 617 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ForeignImportExt_126,
#line 617 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_585)
#line 617 "write_deps_file.m"
{
#line 617 "write_deps_file.m"
  {
#line 617 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 619 "write_deps_file.m"
    {
#line 619 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_43, (MR_String) "\n\n");
    }
#line 620 "write_deps_file.m"
    {
#line 620 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__HeadVar__5_585);
    }
#line 621 "write_deps_file.m"
    {
#line 621 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_43, (MR_String) " : ");
    }
#line 622 "write_deps_file.m"
    {
#line 622 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ForeignImportedModules_122, parse_tree__write_deps_file__ForeignImportExt_126, parse_tree__write_deps_file__DepStream_43);
    }
#line 624 "write_deps_file.m"
    {
#line 624 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_43, (MR_String) "\n\n");
#line 624 "write_deps_file.m"
      return;
    }
#line 617 "write_deps_file.m"
  }
#line 617 "write_deps_file.m"
}

#line 578 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__578__1_3_p_0(
#line 578 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SourceFileModuleName_13,
#line 578 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_575,
#line 578 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_576)
#line 578 "write_deps_file.m"
{
#line 578 "write_deps_file.m"
  {
#line 578 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 585 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_577_577;

#line 580 "write_deps_file.m"
    {
#line 580 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__3_576 = parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(parse_tree__write_deps_file__HeadVar__2_575, parse_tree__write_deps_file__SourceFileModuleName_13);
    }
#line 585 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) *parse_tree__write_deps_file__HeadVar__3_576)) == (MR_mktag((MR_Integer) 0)));
#line 585 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 585 "write_deps_file.m"
      {
#line 585 "write_deps_file.m"
        parse_tree__write_deps_file__V_577_577 = ((MR_String) (MR_hl_field(MR_mktag(0), *parse_tree__write_deps_file__HeadVar__3_576, (MR_Integer) 0)));
#line 585 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__V_577_577, (MR_String) "mercury") == 0);
#line 585 "write_deps_file.m"
      }
#line 585 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 578 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 578 "write_deps_file.m"
  }
#line 578 "write_deps_file.m"
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
  MR_Word parse_tree__write_deps_file__DepStream_43,
#line 294 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_308)
#line 294 "write_deps_file.m"
{
#line 294 "write_deps_file.m"
  {
#line 294 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 294 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ExtName_81;
#line 294 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_313_313;
#line 294 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_316_316;

#line 295 "write_deps_file.m"
    {
#line 295 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__HeadVar__5_308, (MR_Integer) 1, &parse_tree__write_deps_file__ExtName_81);
    }
#line 297 "write_deps_file.m"
    {
#line 297 "write_deps_file.m"
      parse_tree__write_deps_file__V_316_316 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_316_316, 0) = ((MR_Box) (parse_tree__write_deps_file__ExtName_81));
#line 297 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_316_316, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[105])));
#line 297 "write_deps_file.m"
    }
#line 297 "write_deps_file.m"
    {
#line 297 "write_deps_file.m"
      parse_tree__write_deps_file__V_313_313 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_313_313, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 297 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_313_313, 1) = ((MR_Box) (parse_tree__write_deps_file__V_316_316));
#line 297 "write_deps_file.m"
    }
#line 297 "write_deps_file.m"
    {
#line 297 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_313_313);
    }
#line 298 "write_deps_file.m"
    {
#line 298 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__NestedDeps_22, parse_tree__write_deps_file__HeadVar__5_308, parse_tree__write_deps_file__DepStream_43);
#line 298 "write_deps_file.m"
      return;
    }
#line 294 "write_deps_file.m"
  }
#line 294 "write_deps_file.m"
}

#line 2524 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__compare_module_names_3_p_0(
#line 2524 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym1_4,
#line 2524 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym2_5,
#line 2524 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__Result_6)
#line 2524 "write_deps_file.m"
{
#line 2527 "write_deps_file.m"
  {
#line 2527 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2527 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Str1_7;
#line 2527 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Str2_8;

#line 2528 "write_deps_file.m"
    {
#line 2528 "write_deps_file.m"
      parse_tree__write_deps_file__Str1_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__Sym1_4);
    }
#line 2529 "write_deps_file.m"
    {
#line 2529 "write_deps_file.m"
      parse_tree__write_deps_file__Str2_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__Sym2_5);
    }
#line 2530 "write_deps_file.m"
    {
#line 2530 "write_deps_file.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__write_deps_file__Result_6, parse_tree__write_deps_file__Str1_7, parse_tree__write_deps_file__Str2_8);
#line 2530 "write_deps_file.m"
      return;
    }
#line 2527 "write_deps_file.m"
  }
#line 2524 "write_deps_file.m"
}

#line 2433 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_both_opt_deps_8_p_0(
#line 2433 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 2433 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__BuildOptFiles_2,
#line 2433 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
#line 2433 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IntermodDirs_4,
#line 2433 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__5_5,
#line 2433 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__6_6)
#line 2433 "write_deps_file.m"
{
#line 2437 "write_deps_file.m"
  {
#line 2437 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 2437 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2437 "write_deps_file.m"
      {
#line 2437 "write_deps_file.m"
        *parse_tree__write_deps_file__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2437 "write_deps_file.m"
        *parse_tree__write_deps_file__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2437 "write_deps_file.m"
      }
#line 2437 "write_deps_file.m"
    else
#line 2439 "write_deps_file.m"
      {
#line 2439 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Dep_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 0)));
#line 2439 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Deps_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 1)));
#line 2439 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
#line 2439 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;

#line 2440 "write_deps_file.m"
        {
#line 2440 "write_deps_file.m"
          parse_tree__write_deps_file__get_both_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__BuildOptFiles_2, parse_tree__write_deps_file__Deps_18, parse_tree__write_deps_file__IntermodDirs_4, &parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39, &parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40);
        }
#line 3721 "parse_tree.write_deps_file.c"
#line 3722 "parse_tree.write_deps_file.c"
        switch (parse_tree__write_deps_file__BuildOptFiles_2) {
#line 3724 "parse_tree.write_deps_file.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 3726 "parse_tree.write_deps_file.c"
          case (MR_Integer) 0:
#line 3728 "parse_tree.write_deps_file.c"
            {
#line 3730 "parse_tree.write_deps_file.c"
              MR_String parse_tree__write_deps_file__OptName_27;
#line 3732 "parse_tree.write_deps_file.c"
              MR_Word parse_tree__write_deps_file__Result2_28;
#line 3734 "parse_tree.write_deps_file.c"
              MR_String parse_tree__write_deps_file__TransOptName_31;
#line 3736 "parse_tree.write_deps_file.c"
              MR_Word parse_tree__write_deps_file__Result3_32;

#line 2462 "write_deps_file.m"
              {
#line 2462 "write_deps_file.m"
                parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_17, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptName_27);
              }
#line 2464 "write_deps_file.m"
              {
#line 2464 "write_deps_file.m"
                libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__OptName_27, &parse_tree__write_deps_file__Result2_28);
              }
#line 2469 "write_deps_file.m"
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_28)) == (MR_mktag((MR_Integer) 1))))
#line 2470 "write_deps_file.m"
                *parse_tree__write_deps_file__HeadVar__5_5 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
#line 2469 "write_deps_file.m"
              else
#line 2468 "write_deps_file.m"
                {
#line 2468 "write_deps_file.m"
                  MR_Word base;
#line 2468 "write_deps_file.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2468 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__5_5 = base;
#line 2468 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2468 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
#line 2468 "write_deps_file.m"
                }
#line 2472 "write_deps_file.m"
              {
#line 2472 "write_deps_file.m"
                parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_17, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptName_31);
              }
#line 2474 "write_deps_file.m"
              {
#line 2474 "write_deps_file.m"
                libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__TransOptName_31, &parse_tree__write_deps_file__Result3_32);
              }
#line 2479 "write_deps_file.m"
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result3_32)) == (MR_mktag((MR_Integer) 1))))
#line 2480 "write_deps_file.m"
                *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;
#line 2479 "write_deps_file.m"
              else
#line 2478 "write_deps_file.m"
                {
#line 2478 "write_deps_file.m"
                  MR_Word base;
#line 2478 "write_deps_file.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2478 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2478 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2478 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
#line 2478 "write_deps_file.m"
                }
#line 3799 "parse_tree.write_deps_file.c"
            }
#line 3801 "parse_tree.write_deps_file.c"
            break;
#line 3803 "parse_tree.write_deps_file.c"
          case (MR_Integer) 1:
#line 3805 "parse_tree.write_deps_file.c"
            {
#line 3807 "parse_tree.write_deps_file.c"
              MR_Word parse_tree__write_deps_file__Result1_23;

#line 2444 "write_deps_file.m"
              {
#line 2444 "write_deps_file.m"
                parse_tree__prog_io_find__search_for_module_source_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__Dep_17, &parse_tree__write_deps_file__Result1_23);
              }
#line 3815 "parse_tree.write_deps_file.c"
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result1_23)) == (MR_mktag((MR_Integer) 1))))
#line 3817 "parse_tree.write_deps_file.c"
                {
#line 3819 "parse_tree.write_deps_file.c"
                  MR_String parse_tree__write_deps_file__OptName_59;
#line 3821 "parse_tree.write_deps_file.c"
                  MR_Word parse_tree__write_deps_file__Result2_60;
#line 3823 "parse_tree.write_deps_file.c"
                  MR_String parse_tree__write_deps_file__TransOptName_61;
#line 3825 "parse_tree.write_deps_file.c"
                  MR_Word parse_tree__write_deps_file__Result3_62;

#line 2462 "write_deps_file.m"
                  {
#line 2462 "write_deps_file.m"
                    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_17, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptName_59);
                  }
#line 2464 "write_deps_file.m"
                  {
#line 2464 "write_deps_file.m"
                    libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__OptName_59, &parse_tree__write_deps_file__Result2_60);
                  }
#line 2469 "write_deps_file.m"
                  if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_60)) == (MR_mktag((MR_Integer) 1))))
#line 2470 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__5_5 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
#line 2469 "write_deps_file.m"
                  else
#line 2468 "write_deps_file.m"
                    {
#line 2468 "write_deps_file.m"
                      MR_Word base;
#line 2468 "write_deps_file.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2468 "write_deps_file.m"
                      *parse_tree__write_deps_file__HeadVar__5_5 = base;
#line 2468 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2468 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
#line 2468 "write_deps_file.m"
                    }
#line 2472 "write_deps_file.m"
                  {
#line 2472 "write_deps_file.m"
                    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_17, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptName_61);
                  }
#line 2474 "write_deps_file.m"
                  {
#line 2474 "write_deps_file.m"
                    libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__TransOptName_61, &parse_tree__write_deps_file__Result3_62);
                  }
#line 2479 "write_deps_file.m"
                  if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result3_62)) == (MR_mktag((MR_Integer) 1))))
#line 2480 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;
#line 2479 "write_deps_file.m"
                  else
#line 2478 "write_deps_file.m"
                    {
#line 2478 "write_deps_file.m"
                      MR_Word base;
#line 2478 "write_deps_file.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2478 "write_deps_file.m"
                      *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2478 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2478 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
#line 2478 "write_deps_file.m"
                    }
#line 3888 "parse_tree.write_deps_file.c"
                }
#line 3890 "parse_tree.write_deps_file.c"
              else
#line 3892 "parse_tree.write_deps_file.c"
                {
#line 2448 "write_deps_file.m"
                  {
#line 2448 "write_deps_file.m"
                    MR_Word base;
#line 2448 "write_deps_file.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2448 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__5_5 = base;
#line 2448 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2448 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
#line 2448 "write_deps_file.m"
                  }
#line 2449 "write_deps_file.m"
                  {
#line 2449 "write_deps_file.m"
                    MR_Word base;
#line 2449 "write_deps_file.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2449 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2449 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_17));
#line 2449 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
#line 2449 "write_deps_file.m"
                  }
#line 2450 "write_deps_file.m"
                  {
#line 2450 "write_deps_file.m"
                    mercury__io__seen_2_p_0();
#line 2450 "write_deps_file.m"
                    return;
                  }
#line 3929 "parse_tree.write_deps_file.c"
                }
#line 3931 "parse_tree.write_deps_file.c"
            }
#line 3933 "parse_tree.write_deps_file.c"
            break;
#line 3935 "parse_tree.write_deps_file.c"
        }
#line 2439 "write_deps_file.m"
      }
#line 2437 "write_deps_file.m"
  }
#line 2433 "write_deps_file.m"
}

#line 2393 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0_1(
#line 2393 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2393 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2393 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2393 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 2393 "write_deps_file.m"
{
#line 2393 "write_deps_file.m"
  {
#line 2393 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 2393 "write_deps_file.m"
    {
#line 2393 "write_deps_file.m"
      parse_tree__prog_out__write_sym_name_3_p_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 2393 "write_deps_file.m"
      return;
    }
#line 2393 "write_deps_file.m"
  }
#line 2393 "write_deps_file.m"
}

#line 2388 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0(
#line 2388 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Stream_5,
#line 2388 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SCC0_6)
#line 2388 "write_deps_file.m"
{
#line 2391 "write_deps_file.m"
  {
#line 2391 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2391 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_14_14 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2391 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SCC_8;

#line 2392 "write_deps_file.m"
    {
#line 2392 "write_deps_file.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_14_14, parse_tree__write_deps_file__SCC0_6, &parse_tree__write_deps_file__SCC_8);
    }
#line 2393 "write_deps_file.m"
    {
#line 2393 "write_deps_file.m"
      mercury__io__write_list_6_p_0(parse_tree__write_deps_file__TypeCtorInfo_14_14, parse_tree__write_deps_file__Stream_5, parse_tree__write_deps_file__SCC_8, (MR_String) "\n", (MR_Word) &parse_tree__write_deps_file_scalar_common_2[7]);
#line 2393 "write_deps_file.m"
      return;
    }
#line 2391 "write_deps_file.m"
  }
#line 2388 "write_deps_file.m"
}

#line 2344 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_source_file_3_p_0(
#line 2344 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_4,
#line 2344 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_5,
#line 2344 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__FileName_6)
#line 2344 "write_deps_file.m"
{
#line 2346 "write_deps_file.m"
  {
#line 2346 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2346 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Deps_7;
#line 2346 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleImports_9;
#line 2346 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SourceFileName_10;
#line 2347 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_Deps_7;
#line 2348 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_8_8;
#line 2352 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SourceFileBase_11;

#line 2347 "write_deps_file.m"
    {
#line 2347 "write_deps_file.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_4, ((MR_Box) (parse_tree__write_deps_file__ModuleName_5)), &parse_tree__write_deps_file__conv0_Deps_7);
    }
#line 2347 "write_deps_file.m"
    parse_tree__write_deps_file__Deps_7 = ((MR_Word) parse_tree__write_deps_file__conv0_Deps_7);
#line 2348 "write_deps_file.m"
    parse_tree__write_deps_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Deps_7, (MR_Integer) 0)));
#line 2348 "write_deps_file.m"
    parse_tree__write_deps_file__ModuleImports_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Deps_7, (MR_Integer) 1)));
#line 2349 "write_deps_file.m"
    {
#line 2349 "write_deps_file.m"
      parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(parse_tree__write_deps_file__ModuleImports_9, &parse_tree__write_deps_file__SourceFileName_10);
    }
#line 2350 "write_deps_file.m"
    {
#line 2350 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__write_deps_file__SourceFileName_10, (MR_String) ".m", &parse_tree__write_deps_file__SourceFileBase_11);
    }
#line 2352 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 2351 "write_deps_file.m"
      *parse_tree__write_deps_file__FileName_6 = parse_tree__write_deps_file__SourceFileBase_11;
#line 2352 "write_deps_file.m"
    else
#line 2353 "write_deps_file.m"
      {
#line 2353 "write_deps_file.m"
        {
#line 2353 "write_deps_file.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_deps_file", (MR_String) "predicate \140parse_tree.write_deps_file.get_source_file\'/3", (MR_String) "source file name doesn\'t end in \140.m\'");
#line 2353 "write_deps_file.m"
          return;
        }
#line 2353 "write_deps_file.m"
      }
#line 2346 "write_deps_file.m"
  }
#line 2344 "write_deps_file.m"
}

#line 2254 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(
#line 2254 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_17,
#line 2254 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_18,
#line 2254 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_19,
#line 2254 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_20,
#line 2254 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ExeFileName_21,
#line 2254 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_22,
#line 2254 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_23,
#line 2254 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitPicObjFileName_24,
#line 2254 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_25,
#line 2254 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__LibFileName_26,
#line 2254 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SharedLibFileName_27,
#line 2254 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__JarFileName_28,
#line 2254 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DepFileName_29,
#line 2254 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DvFileName_30)
#line 2254 "write_deps_file.m"
{
#line 2262 "write_deps_file.m"
  {
#line 2262 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2262 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__CleanTargetName_32;
#line 2262 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__RealCleanTargetName_33;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_39_39;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_42_42;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_43_43;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_46_46;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_49_49;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_50_50;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_52_52;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_53_53;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_55_55;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_57_57;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_58_58;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_60_60;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_62_62;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_63_63;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_65_65;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_66_66;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_68_68;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_70_70;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_71_71;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_73_73;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_75_75;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_76_76;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_78_78;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_79_79;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_81_81;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_83_83;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_84_84;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_86_86;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_87_87;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_89_89;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_92_92;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_94_94;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_96_96;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_97_97;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_99_99;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_101_101;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_102_102;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_104_104;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_106_106;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_107_107;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_109_109;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_111_111;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_112_112;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_114_114;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_116_116;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_117_117;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_119_119;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_121_121;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_122_122;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_124_124;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_126_126;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_127_127;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_129_129;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_131_131;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_140_140;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_143_143;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_147_147;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_150_150;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_151_151;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_153_153;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_154_154;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_156_156;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_157_157;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_159_159;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_161_161;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_162_162;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_164_164;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_166_166;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_167_167;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_169_169;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_171_171;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_172_172;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_174_174;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_176_176;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_177_177;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_179_179;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_181_181;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_182_182;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_184_184;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_186_186;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_187_187;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_189_189;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_191_191;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_192_192;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_194_194;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_196_196;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_197_197;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_199_199;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_201_201;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_202_202;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_204_204;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_206_206;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_207_207;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_209_209;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_211_211;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_212_212;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_214_214;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_216_216;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_217_217;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_219_219;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_221_221;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_222_222;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_224_224;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_226_226;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_227_227;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_229_229;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_231_231;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_232_232;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_234_234;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_236_236;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_237_237;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_239_239;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_241_241;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_242_242;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_244_244;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_246_246;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_247_247;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_249_249;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_251_251;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_252_252;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_254_254;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_256_256;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_260_260;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_263_263;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_264_264;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_266_266;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_267_267;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_269_269;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_270_270;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_272_272;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_273_273;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_275_275;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_276_276;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_278_278;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_279_279;
#line 2262 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_281_281;

#line 2271 "write_deps_file.m"
    {
#line 2271 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_17, parse_tree__write_deps_file__ModuleName_19, (MR_String) ".clean", (MR_Integer) 1, &parse_tree__write_deps_file__CleanTargetName_32);
    }
#line 2275 "write_deps_file.m"
    parse_tree__write_deps_file__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[98]);
#line 2274 "write_deps_file.m"
    {
#line 2274 "write_deps_file.m"
      parse_tree__write_deps_file__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2274 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2274 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 2274 "write_deps_file.m"
    }
#line 2274 "write_deps_file.m"
    {
#line 2274 "write_deps_file.m"
      parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2274 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) ((MR_String) "clean_local : "));
#line 2274 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (parse_tree__write_deps_file__V_42_42));
#line 2274 "write_deps_file.m"
    }
#line 2273 "write_deps_file.m"
    {
#line 2273 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_39_39);
    }
#line 2295 "write_deps_file.m"
    {
#line 2295 "write_deps_file.m"
      parse_tree__write_deps_file__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2295 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2295 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[99])));
#line 2295 "write_deps_file.m"
    }
#line 2295 "write_deps_file.m"
    {
#line 2295 "write_deps_file.m"
      parse_tree__write_deps_file__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2295 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2295 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 1) = ((MR_Box) (parse_tree__write_deps_file__V_131_131));
#line 2295 "write_deps_file.m"
    }
#line 2294 "write_deps_file.m"
    {
#line 2294 "write_deps_file.m"
      parse_tree__write_deps_file__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2294 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_127_127, 0) = ((MR_Box) ((MR_String) ".errs) | xargs rm -f\n"));
#line 2294 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_127_127, 1) = ((MR_Box) (parse_tree__write_deps_file__V_129_129));
#line 2294 "write_deps_file.m"
    }
#line 2294 "write_deps_file.m"
    {
#line 2294 "write_deps_file.m"
      parse_tree__write_deps_file__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2294 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2294 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 1) = ((MR_Box) (parse_tree__write_deps_file__V_127_127));
#line 2294 "write_deps_file.m"
    }
#line 2294 "write_deps_file.m"
    {
#line 2294 "write_deps_file.m"
      parse_tree__write_deps_file__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2294 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_124_124, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2294 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_124_124, 1) = ((MR_Box) (parse_tree__write_deps_file__V_126_126));
#line 2294 "write_deps_file.m"
    }
#line 2293 "write_deps_file.m"
    {
#line 2293 "write_deps_file.m"
      parse_tree__write_deps_file__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2293 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_122_122, 0) = ((MR_Box) ((MR_String) ".profs) | xargs rm -f\n"));
#line 2293 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_122_122, 1) = ((MR_Box) (parse_tree__write_deps_file__V_124_124));
#line 2293 "write_deps_file.m"
    }
#line 2293 "write_deps_file.m"
    {
#line 2293 "write_deps_file.m"
      parse_tree__write_deps_file__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2293 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_121_121, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2293 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_121_121, 1) = ((MR_Box) (parse_tree__write_deps_file__V_122_122));
#line 2293 "write_deps_file.m"
    }
#line 2293 "write_deps_file.m"
    {
#line 2293 "write_deps_file.m"
      parse_tree__write_deps_file__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2293 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_119_119, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2293 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_119_119, 1) = ((MR_Box) (parse_tree__write_deps_file__V_121_121));
#line 2293 "write_deps_file.m"
    }
#line 2292 "write_deps_file.m"
    {
#line 2292 "write_deps_file.m"
      parse_tree__write_deps_file__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2292 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_117_117, 0) = ((MR_Box) ((MR_String) ".javas) | xargs rm -f\n"));
#line 2292 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_117_117, 1) = ((MR_Box) (parse_tree__write_deps_file__V_119_119));
#line 2292 "write_deps_file.m"
    }
#line 2292 "write_deps_file.m"
    {
#line 2292 "write_deps_file.m"
      parse_tree__write_deps_file__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2292 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_116_116, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2292 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_116_116, 1) = ((MR_Box) (parse_tree__write_deps_file__V_117_117));
#line 2292 "write_deps_file.m"
    }
#line 2292 "write_deps_file.m"
    {
#line 2292 "write_deps_file.m"
      parse_tree__write_deps_file__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2292 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_114_114, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2292 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_114_114, 1) = ((MR_Box) (parse_tree__write_deps_file__V_116_116));
#line 2292 "write_deps_file.m"
    }
#line 2291 "write_deps_file.m"
    {
#line 2291 "write_deps_file.m"
      parse_tree__write_deps_file__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2291 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 0) = ((MR_Box) ((MR_String) ".ils) | xargs rm -f\n"));
#line 2291 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 1) = ((MR_Box) (parse_tree__write_deps_file__V_114_114));
#line 2291 "write_deps_file.m"
    }
#line 2291 "write_deps_file.m"
    {
#line 2291 "write_deps_file.m"
      parse_tree__write_deps_file__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2291 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2291 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 1) = ((MR_Box) (parse_tree__write_deps_file__V_112_112));
#line 2291 "write_deps_file.m"
    }
#line 2291 "write_deps_file.m"
    {
#line 2291 "write_deps_file.m"
      parse_tree__write_deps_file__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2291 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2291 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 1) = ((MR_Box) (parse_tree__write_deps_file__V_111_111));
#line 2291 "write_deps_file.m"
    }
#line 2290 "write_deps_file.m"
    {
#line 2290 "write_deps_file.m"
      parse_tree__write_deps_file__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2290 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_107_107, 0) = ((MR_Box) ((MR_String) ".useds) | xargs rm -f\n"));
#line 2290 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_107_107, 1) = ((MR_Box) (parse_tree__write_deps_file__V_109_109));
#line 2290 "write_deps_file.m"
    }
#line 2290 "write_deps_file.m"
    {
#line 2290 "write_deps_file.m"
      parse_tree__write_deps_file__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2290 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2290 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 1) = ((MR_Box) (parse_tree__write_deps_file__V_107_107));
#line 2290 "write_deps_file.m"
    }
#line 2290 "write_deps_file.m"
    {
#line 2290 "write_deps_file.m"
      parse_tree__write_deps_file__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2290 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2290 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 1) = ((MR_Box) (parse_tree__write_deps_file__V_106_106));
#line 2290 "write_deps_file.m"
    }
#line 2289 "write_deps_file.m"
    {
#line 2289 "write_deps_file.m"
      parse_tree__write_deps_file__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2289 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 0) = ((MR_Box) ((MR_String) ".java_dates) | xargs rm -f\n"));
#line 2289 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 1) = ((MR_Box) (parse_tree__write_deps_file__V_104_104));
#line 2289 "write_deps_file.m"
    }
#line 2289 "write_deps_file.m"
    {
#line 2289 "write_deps_file.m"
      parse_tree__write_deps_file__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2289 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2289 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 1) = ((MR_Box) (parse_tree__write_deps_file__V_102_102));
#line 2289 "write_deps_file.m"
    }
#line 2289 "write_deps_file.m"
    {
#line 2289 "write_deps_file.m"
      parse_tree__write_deps_file__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2289 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2289 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 1) = ((MR_Box) (parse_tree__write_deps_file__V_101_101));
#line 2289 "write_deps_file.m"
    }
#line 2288 "write_deps_file.m"
    {
#line 2288 "write_deps_file.m"
      parse_tree__write_deps_file__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2288 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_97_97, 0) = ((MR_Box) ((MR_String) ".il_dates) | xargs rm -f\n"));
#line 2288 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_97_97, 1) = ((MR_Box) (parse_tree__write_deps_file__V_99_99));
#line 2288 "write_deps_file.m"
    }
#line 2288 "write_deps_file.m"
    {
#line 2288 "write_deps_file.m"
      parse_tree__write_deps_file__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2288 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2288 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 1) = ((MR_Box) (parse_tree__write_deps_file__V_97_97));
#line 2288 "write_deps_file.m"
    }
#line 2288 "write_deps_file.m"
    {
#line 2288 "write_deps_file.m"
      parse_tree__write_deps_file__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2288 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2288 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 1) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 2288 "write_deps_file.m"
    }
#line 2287 "write_deps_file.m"
    {
#line 2287 "write_deps_file.m"
      parse_tree__write_deps_file__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2287 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 0) = ((MR_Box) ((MR_String) ".c_dates) | xargs rm -f\n"));
#line 2287 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 1) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 2287 "write_deps_file.m"
    }
#line 2287 "write_deps_file.m"
    {
#line 2287 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2287 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2287 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__V_92_92));
#line 2287 "write_deps_file.m"
    }
#line 2287 "write_deps_file.m"
    {
#line 2287 "write_deps_file.m"
      parse_tree__write_deps_file__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2287 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_89_89, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2287 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_89_89, 1) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 2287 "write_deps_file.m"
    }
#line 2286 "write_deps_file.m"
    {
#line 2286 "write_deps_file.m"
      parse_tree__write_deps_file__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2286 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
#line 2286 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 1) = ((MR_Box) (parse_tree__write_deps_file__V_89_89));
#line 2286 "write_deps_file.m"
    }
#line 2286 "write_deps_file.m"
    {
#line 2286 "write_deps_file.m"
      parse_tree__write_deps_file__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2286 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 0) = ((MR_Box) (parse_tree__write_deps_file__InitPicObjFileName_24));
#line 2286 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 1) = ((MR_Box) (parse_tree__write_deps_file__V_87_87));
#line 2286 "write_deps_file.m"
    }
#line 2285 "write_deps_file.m"
    {
#line 2285 "write_deps_file.m"
      parse_tree__write_deps_file__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2285 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 0) = ((MR_Box) ((MR_String) ".all_pic_os) "));
#line 2285 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 1) = ((MR_Box) (parse_tree__write_deps_file__V_86_86));
#line 2285 "write_deps_file.m"
    }
#line 2285 "write_deps_file.m"
    {
#line 2285 "write_deps_file.m"
      parse_tree__write_deps_file__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2285 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2285 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 1) = ((MR_Box) (parse_tree__write_deps_file__V_84_84));
#line 2285 "write_deps_file.m"
    }
#line 2285 "write_deps_file.m"
    {
#line 2285 "write_deps_file.m"
      parse_tree__write_deps_file__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2285 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2285 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 1) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 2285 "write_deps_file.m"
    }
#line 2284 "write_deps_file.m"
    {
#line 2284 "write_deps_file.m"
      parse_tree__write_deps_file__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2284 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
#line 2284 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 1) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 2284 "write_deps_file.m"
    }
#line 2283 "write_deps_file.m"
    {
#line 2283 "write_deps_file.m"
      parse_tree__write_deps_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2283 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_23));
#line 2283 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 1) = ((MR_Box) (parse_tree__write_deps_file__V_79_79));
#line 2283 "write_deps_file.m"
    }
#line 2283 "write_deps_file.m"
    {
#line 2283 "write_deps_file.m"
      parse_tree__write_deps_file__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2283 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_76_76, 0) = ((MR_Box) ((MR_String) ".all_os) "));
#line 2283 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_76_76, 1) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 2283 "write_deps_file.m"
    }
#line 2283 "write_deps_file.m"
    {
#line 2283 "write_deps_file.m"
      parse_tree__write_deps_file__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2283 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2283 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 1) = ((MR_Box) (parse_tree__write_deps_file__V_76_76));
#line 2283 "write_deps_file.m"
    }
#line 2283 "write_deps_file.m"
    {
#line 2283 "write_deps_file.m"
      parse_tree__write_deps_file__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2283 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2283 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 1) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 2283 "write_deps_file.m"
    }
#line 2282 "write_deps_file.m"
    {
#line 2282 "write_deps_file.m"
      parse_tree__write_deps_file__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2282 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 0) = ((MR_Box) ((MR_String) ".mihs) | xargs rm -f\n"));
#line 2282 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 1) = ((MR_Box) (parse_tree__write_deps_file__V_73_73));
#line 2282 "write_deps_file.m"
    }
#line 2282 "write_deps_file.m"
    {
#line 2282 "write_deps_file.m"
      parse_tree__write_deps_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2282 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2282 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 1) = ((MR_Box) (parse_tree__write_deps_file__V_71_71));
#line 2282 "write_deps_file.m"
    }
#line 2282 "write_deps_file.m"
    {
#line 2282 "write_deps_file.m"
      parse_tree__write_deps_file__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2282 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2282 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 1) = ((MR_Box) (parse_tree__write_deps_file__V_70_70));
#line 2282 "write_deps_file.m"
    }
#line 2281 "write_deps_file.m"
    {
#line 2281 "write_deps_file.m"
      parse_tree__write_deps_file__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2281 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
#line 2281 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 1) = ((MR_Box) (parse_tree__write_deps_file__V_68_68));
#line 2281 "write_deps_file.m"
    }
#line 2280 "write_deps_file.m"
    {
#line 2280 "write_deps_file.m"
      parse_tree__write_deps_file__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2280 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_22));
#line 2280 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 1) = ((MR_Box) (parse_tree__write_deps_file__V_66_66));
#line 2280 "write_deps_file.m"
    }
#line 2280 "write_deps_file.m"
    {
#line 2280 "write_deps_file.m"
      parse_tree__write_deps_file__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2280 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_63_63, 0) = ((MR_Box) ((MR_String) ".cs) "));
#line 2280 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_63_63, 1) = ((MR_Box) (parse_tree__write_deps_file__V_65_65));
#line 2280 "write_deps_file.m"
    }
#line 2280 "write_deps_file.m"
    {
#line 2280 "write_deps_file.m"
      parse_tree__write_deps_file__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2280 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_62_62, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2280 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_62_62, 1) = ((MR_Box) (parse_tree__write_deps_file__V_63_63));
#line 2280 "write_deps_file.m"
    }
#line 2280 "write_deps_file.m"
    {
#line 2280 "write_deps_file.m"
      parse_tree__write_deps_file__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2280 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2280 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 1) = ((MR_Box) (parse_tree__write_deps_file__V_62_62));
#line 2280 "write_deps_file.m"
    }
#line 2279 "write_deps_file.m"
    {
#line 2279 "write_deps_file.m"
      parse_tree__write_deps_file__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2279 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 0) = ((MR_Box) ((MR_String) ".dirs) | xargs rm -rf \n"));
#line 2279 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 1) = ((MR_Box) (parse_tree__write_deps_file__V_60_60));
#line 2279 "write_deps_file.m"
    }
#line 2279 "write_deps_file.m"
    {
#line 2279 "write_deps_file.m"
      parse_tree__write_deps_file__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2279 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_57_57, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2279 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_57_57, 1) = ((MR_Box) (parse_tree__write_deps_file__V_58_58));
#line 2279 "write_deps_file.m"
    }
#line 2279 "write_deps_file.m"
    {
#line 2279 "write_deps_file.m"
      parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2279 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2279 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_57_57));
#line 2279 "write_deps_file.m"
    }
#line 2278 "write_deps_file.m"
    {
#line 2278 "write_deps_file.m"
      parse_tree__write_deps_file__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2278 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 0) = ((MR_Box) ((MR_String) " :\n"));
#line 2278 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 1) = ((MR_Box) (parse_tree__write_deps_file__V_55_55));
#line 2278 "write_deps_file.m"
    }
#line 2278 "write_deps_file.m"
    {
#line 2278 "write_deps_file.m"
      parse_tree__write_deps_file__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2278 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2278 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 1) = ((MR_Box) (parse_tree__write_deps_file__V_53_53));
#line 2278 "write_deps_file.m"
    }
#line 2277 "write_deps_file.m"
    {
#line 2277 "write_deps_file.m"
      parse_tree__write_deps_file__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2277 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2277 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 1) = ((MR_Box) (parse_tree__write_deps_file__V_52_52));
#line 2277 "write_deps_file.m"
    }
#line 2277 "write_deps_file.m"
    {
#line 2277 "write_deps_file.m"
      parse_tree__write_deps_file__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2277 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2277 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 1) = ((MR_Box) (parse_tree__write_deps_file__V_50_50));
#line 2277 "write_deps_file.m"
    }
#line 2277 "write_deps_file.m"
    {
#line 2277 "write_deps_file.m"
      parse_tree__write_deps_file__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2277 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_46_46, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2277 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_46_46, 1) = ((MR_Box) (parse_tree__write_deps_file__V_49_49));
#line 2277 "write_deps_file.m"
    }
#line 2276 "write_deps_file.m"
    {
#line 2276 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_46_46);
    }
#line 2299 "write_deps_file.m"
    {
#line 2299 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_17, parse_tree__write_deps_file__ModuleName_19, (MR_String) ".realclean", (MR_Integer) 1, &parse_tree__write_deps_file__RealCleanTargetName_33);
    }
#line 2302 "write_deps_file.m"
    {
#line 2302 "write_deps_file.m"
      parse_tree__write_deps_file__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2302 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
#line 2302 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 2302 "write_deps_file.m"
    }
#line 2302 "write_deps_file.m"
    {
#line 2302 "write_deps_file.m"
      parse_tree__write_deps_file__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2302 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 0) = ((MR_Box) ((MR_String) "realclean_local : "));
#line 2302 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 1) = ((MR_Box) (parse_tree__write_deps_file__V_143_143));
#line 2302 "write_deps_file.m"
    }
#line 2301 "write_deps_file.m"
    {
#line 2301 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_140_140);
    }
#line 2329 "write_deps_file.m"
    {
#line 2329 "write_deps_file.m"
      parse_tree__write_deps_file__V_256_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2329 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_256_256, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2329 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_256_256, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[123])));
#line 2329 "write_deps_file.m"
    }
#line 2329 "write_deps_file.m"
    {
#line 2329 "write_deps_file.m"
      parse_tree__write_deps_file__V_254_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2329 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_254_254, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2329 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_254_254, 1) = ((MR_Box) (parse_tree__write_deps_file__V_256_256));
#line 2329 "write_deps_file.m"
    }
#line 2328 "write_deps_file.m"
    {
#line 2328 "write_deps_file.m"
      parse_tree__write_deps_file__V_252_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2328 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 0) = ((MR_Box) ((MR_String) ".foreign_dlls) | xargs rm -f\n"));
#line 2328 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 1) = ((MR_Box) (parse_tree__write_deps_file__V_254_254));
#line 2328 "write_deps_file.m"
    }
#line 2328 "write_deps_file.m"
    {
#line 2328 "write_deps_file.m"
      parse_tree__write_deps_file__V_251_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2328 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_251_251, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2328 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_251_251, 1) = ((MR_Box) (parse_tree__write_deps_file__V_252_252));
#line 2328 "write_deps_file.m"
    }
#line 2328 "write_deps_file.m"
    {
#line 2328 "write_deps_file.m"
      parse_tree__write_deps_file__V_249_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2328 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2328 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 1) = ((MR_Box) (parse_tree__write_deps_file__V_251_251));
#line 2328 "write_deps_file.m"
    }
#line 2327 "write_deps_file.m"
    {
#line 2327 "write_deps_file.m"
      parse_tree__write_deps_file__V_247_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2327 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 0) = ((MR_Box) ((MR_String) ".dlls) | xargs rm -f\n"));
#line 2327 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 1) = ((MR_Box) (parse_tree__write_deps_file__V_249_249));
#line 2327 "write_deps_file.m"
    }
#line 2327 "write_deps_file.m"
    {
#line 2327 "write_deps_file.m"
      parse_tree__write_deps_file__V_246_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2327 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2327 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 1) = ((MR_Box) (parse_tree__write_deps_file__V_247_247));
#line 2327 "write_deps_file.m"
    }
#line 2327 "write_deps_file.m"
    {
#line 2327 "write_deps_file.m"
      parse_tree__write_deps_file__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2327 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2327 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 1) = ((MR_Box) (parse_tree__write_deps_file__V_246_246));
#line 2327 "write_deps_file.m"
    }
#line 2326 "write_deps_file.m"
    {
#line 2326 "write_deps_file.m"
      parse_tree__write_deps_file__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2326 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 0) = ((MR_Box) ((MR_String) ".all_mihs) | xargs rm -f\n"));
#line 2326 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 1) = ((MR_Box) (parse_tree__write_deps_file__V_244_244));
#line 2326 "write_deps_file.m"
    }
#line 2326 "write_deps_file.m"
    {
#line 2326 "write_deps_file.m"
      parse_tree__write_deps_file__V_241_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2326 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_241_241, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2326 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_241_241, 1) = ((MR_Box) (parse_tree__write_deps_file__V_242_242));
#line 2326 "write_deps_file.m"
    }
#line 2326 "write_deps_file.m"
    {
#line 2326 "write_deps_file.m"
      parse_tree__write_deps_file__V_239_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2326 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2326 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 1) = ((MR_Box) (parse_tree__write_deps_file__V_241_241));
#line 2326 "write_deps_file.m"
    }
#line 2325 "write_deps_file.m"
    {
#line 2325 "write_deps_file.m"
      parse_tree__write_deps_file__V_237_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2325 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 0) = ((MR_Box) ((MR_String) ".all_mhs) | xargs rm -f\n"));
#line 2325 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 1) = ((MR_Box) (parse_tree__write_deps_file__V_239_239));
#line 2325 "write_deps_file.m"
    }
#line 2325 "write_deps_file.m"
    {
#line 2325 "write_deps_file.m"
      parse_tree__write_deps_file__V_236_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2325 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_236_236, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2325 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_236_236, 1) = ((MR_Box) (parse_tree__write_deps_file__V_237_237));
#line 2325 "write_deps_file.m"
    }
#line 2325 "write_deps_file.m"
    {
#line 2325 "write_deps_file.m"
      parse_tree__write_deps_file__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2325 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2325 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 1) = ((MR_Box) (parse_tree__write_deps_file__V_236_236));
#line 2325 "write_deps_file.m"
    }
#line 2324 "write_deps_file.m"
    {
#line 2324 "write_deps_file.m"
      parse_tree__write_deps_file__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2324 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 0) = ((MR_Box) ((MR_String) ".module_deps) | xargs rm -f\n"));
#line 2324 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 1) = ((MR_Box) (parse_tree__write_deps_file__V_234_234));
#line 2324 "write_deps_file.m"
    }
#line 2324 "write_deps_file.m"
    {
#line 2324 "write_deps_file.m"
      parse_tree__write_deps_file__V_231_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2324 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2324 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 1) = ((MR_Box) (parse_tree__write_deps_file__V_232_232));
#line 2324 "write_deps_file.m"
    }
#line 2324 "write_deps_file.m"
    {
#line 2324 "write_deps_file.m"
      parse_tree__write_deps_file__V_229_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2324 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2324 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 1) = ((MR_Box) (parse_tree__write_deps_file__V_231_231));
#line 2324 "write_deps_file.m"
    }
#line 2323 "write_deps_file.m"
    {
#line 2323 "write_deps_file.m"
      parse_tree__write_deps_file__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2323 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_227_227, 0) = ((MR_Box) ((MR_String) ".ds) | xargs rm -f\n"));
#line 2323 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_227_227, 1) = ((MR_Box) (parse_tree__write_deps_file__V_229_229));
#line 2323 "write_deps_file.m"
    }
#line 2323 "write_deps_file.m"
    {
#line 2323 "write_deps_file.m"
      parse_tree__write_deps_file__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2323 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2323 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 2323 "write_deps_file.m"
    }
#line 2323 "write_deps_file.m"
    {
#line 2323 "write_deps_file.m"
      parse_tree__write_deps_file__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2323 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2323 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 1) = ((MR_Box) (parse_tree__write_deps_file__V_226_226));
#line 2323 "write_deps_file.m"
    }
#line 2322 "write_deps_file.m"
    {
#line 2322 "write_deps_file.m"
      parse_tree__write_deps_file__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2322 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 0) = ((MR_Box) ((MR_String) ".imdgs) | xargs rm -f\n"));
#line 2322 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 1) = ((MR_Box) (parse_tree__write_deps_file__V_224_224));
#line 2322 "write_deps_file.m"
    }
#line 2322 "write_deps_file.m"
    {
#line 2322 "write_deps_file.m"
      parse_tree__write_deps_file__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2322 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2322 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 1) = ((MR_Box) (parse_tree__write_deps_file__V_222_222));
#line 2322 "write_deps_file.m"
    }
#line 2322 "write_deps_file.m"
    {
#line 2322 "write_deps_file.m"
      parse_tree__write_deps_file__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2322 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2322 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 1) = ((MR_Box) (parse_tree__write_deps_file__V_221_221));
#line 2322 "write_deps_file.m"
    }
#line 2321 "write_deps_file.m"
    {
#line 2321 "write_deps_file.m"
      parse_tree__write_deps_file__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2321 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 0) = ((MR_Box) ((MR_String) ".requests) | xargs rm -f\n"));
#line 2321 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 1) = ((MR_Box) (parse_tree__write_deps_file__V_219_219));
#line 2321 "write_deps_file.m"
    }
#line 2321 "write_deps_file.m"
    {
#line 2321 "write_deps_file.m"
      parse_tree__write_deps_file__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2321 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2321 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 1) = ((MR_Box) (parse_tree__write_deps_file__V_217_217));
#line 2321 "write_deps_file.m"
    }
#line 2321 "write_deps_file.m"
    {
#line 2321 "write_deps_file.m"
      parse_tree__write_deps_file__V_214_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2321 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_214_214, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2321 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_214_214, 1) = ((MR_Box) (parse_tree__write_deps_file__V_216_216));
#line 2321 "write_deps_file.m"
    }
#line 2320 "write_deps_file.m"
    {
#line 2320 "write_deps_file.m"
      parse_tree__write_deps_file__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2320 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_212_212, 0) = ((MR_Box) ((MR_String) ".analysiss) | xargs rm -f\n"));
#line 2320 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_212_212, 1) = ((MR_Box) (parse_tree__write_deps_file__V_214_214));
#line 2320 "write_deps_file.m"
    }
#line 2320 "write_deps_file.m"
    {
#line 2320 "write_deps_file.m"
      parse_tree__write_deps_file__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2320 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_211_211, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2320 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_211_211, 1) = ((MR_Box) (parse_tree__write_deps_file__V_212_212));
#line 2320 "write_deps_file.m"
    }
#line 2320 "write_deps_file.m"
    {
#line 2320 "write_deps_file.m"
      parse_tree__write_deps_file__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2320 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2320 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 1) = ((MR_Box) (parse_tree__write_deps_file__V_211_211));
#line 2320 "write_deps_file.m"
    }
#line 2319 "write_deps_file.m"
    {
#line 2319 "write_deps_file.m"
      parse_tree__write_deps_file__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2319 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_207_207, 0) = ((MR_Box) ((MR_String) ".trans_opts) | xargs rm -f\n"));
#line 2319 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_207_207, 1) = ((MR_Box) (parse_tree__write_deps_file__V_209_209));
#line 2319 "write_deps_file.m"
    }
#line 2319 "write_deps_file.m"
    {
#line 2319 "write_deps_file.m"
      parse_tree__write_deps_file__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2319 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2319 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 1) = ((MR_Box) (parse_tree__write_deps_file__V_207_207));
#line 2319 "write_deps_file.m"
    }
#line 2319 "write_deps_file.m"
    {
#line 2319 "write_deps_file.m"
      parse_tree__write_deps_file__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2319 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_204_204, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2319 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_204_204, 1) = ((MR_Box) (parse_tree__write_deps_file__V_206_206));
#line 2319 "write_deps_file.m"
    }
#line 2318 "write_deps_file.m"
    {
#line 2318 "write_deps_file.m"
      parse_tree__write_deps_file__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2318 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_202_202, 0) = ((MR_Box) ((MR_String) ".opts) | xargs rm -f\n"));
#line 2318 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_202_202, 1) = ((MR_Box) (parse_tree__write_deps_file__V_204_204));
#line 2318 "write_deps_file.m"
    }
#line 2318 "write_deps_file.m"
    {
#line 2318 "write_deps_file.m"
      parse_tree__write_deps_file__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2318 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2318 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 1) = ((MR_Box) (parse_tree__write_deps_file__V_202_202));
#line 2318 "write_deps_file.m"
    }
#line 2318 "write_deps_file.m"
    {
#line 2318 "write_deps_file.m"
      parse_tree__write_deps_file__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2318 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2318 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 1) = ((MR_Box) (parse_tree__write_deps_file__V_201_201));
#line 2318 "write_deps_file.m"
    }
#line 2317 "write_deps_file.m"
    {
#line 2317 "write_deps_file.m"
      parse_tree__write_deps_file__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2317 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 0) = ((MR_Box) ((MR_String) ".int3s) | xargs rm -f\n"));
#line 2317 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 1) = ((MR_Box) (parse_tree__write_deps_file__V_199_199));
#line 2317 "write_deps_file.m"
    }
#line 2317 "write_deps_file.m"
    {
#line 2317 "write_deps_file.m"
      parse_tree__write_deps_file__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2317 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_196_196, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2317 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_196_196, 1) = ((MR_Box) (parse_tree__write_deps_file__V_197_197));
#line 2317 "write_deps_file.m"
    }
#line 2317 "write_deps_file.m"
    {
#line 2317 "write_deps_file.m"
      parse_tree__write_deps_file__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2317 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_194_194, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2317 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_194_194, 1) = ((MR_Box) (parse_tree__write_deps_file__V_196_196));
#line 2317 "write_deps_file.m"
    }
#line 2316 "write_deps_file.m"
    {
#line 2316 "write_deps_file.m"
      parse_tree__write_deps_file__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2316 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 0) = ((MR_Box) ((MR_String) ".all_int0s) | xargs rm -f\n"));
#line 2316 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 1) = ((MR_Box) (parse_tree__write_deps_file__V_194_194));
#line 2316 "write_deps_file.m"
    }
#line 2316 "write_deps_file.m"
    {
#line 2316 "write_deps_file.m"
      parse_tree__write_deps_file__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2316 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2316 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 1) = ((MR_Box) (parse_tree__write_deps_file__V_192_192));
#line 2316 "write_deps_file.m"
    }
#line 2316 "write_deps_file.m"
    {
#line 2316 "write_deps_file.m"
      parse_tree__write_deps_file__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2316 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_189_189, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2316 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_189_189, 1) = ((MR_Box) (parse_tree__write_deps_file__V_191_191));
#line 2316 "write_deps_file.m"
    }
#line 2312 "write_deps_file.m"
    {
#line 2312 "write_deps_file.m"
      parse_tree__write_deps_file__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2312 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_187_187, 0) = ((MR_Box) ((MR_String) ".ints) | xargs rm -f\n"));
#line 2312 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_187_187, 1) = ((MR_Box) (parse_tree__write_deps_file__V_189_189));
#line 2312 "write_deps_file.m"
    }
#line 2312 "write_deps_file.m"
    {
#line 2312 "write_deps_file.m"
      parse_tree__write_deps_file__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2312 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2312 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 1) = ((MR_Box) (parse_tree__write_deps_file__V_187_187));
#line 2312 "write_deps_file.m"
    }
#line 2312 "write_deps_file.m"
    {
#line 2312 "write_deps_file.m"
      parse_tree__write_deps_file__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2312 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2312 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 1) = ((MR_Box) (parse_tree__write_deps_file__V_186_186));
#line 2312 "write_deps_file.m"
    }
#line 2311 "write_deps_file.m"
    {
#line 2311 "write_deps_file.m"
      parse_tree__write_deps_file__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2311 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 0) = ((MR_Box) ((MR_String) ".trans_opt_dates) | xargs rm -f\n"));
#line 2311 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 1) = ((MR_Box) (parse_tree__write_deps_file__V_184_184));
#line 2311 "write_deps_file.m"
    }
#line 2311 "write_deps_file.m"
    {
#line 2311 "write_deps_file.m"
      parse_tree__write_deps_file__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2311 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_181_181, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2311 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_181_181, 1) = ((MR_Box) (parse_tree__write_deps_file__V_182_182));
#line 2311 "write_deps_file.m"
    }
#line 2311 "write_deps_file.m"
    {
#line 2311 "write_deps_file.m"
      parse_tree__write_deps_file__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2311 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_179_179, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2311 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_179_179, 1) = ((MR_Box) (parse_tree__write_deps_file__V_181_181));
#line 2311 "write_deps_file.m"
    }
#line 2310 "write_deps_file.m"
    {
#line 2310 "write_deps_file.m"
      parse_tree__write_deps_file__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2310 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_177_177, 0) = ((MR_Box) ((MR_String) ".optdates) | xargs rm -f\n"));
#line 2310 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_177_177, 1) = ((MR_Box) (parse_tree__write_deps_file__V_179_179));
#line 2310 "write_deps_file.m"
    }
#line 2310 "write_deps_file.m"
    {
#line 2310 "write_deps_file.m"
      parse_tree__write_deps_file__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2310 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2310 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 1) = ((MR_Box) (parse_tree__write_deps_file__V_177_177));
#line 2310 "write_deps_file.m"
    }
#line 2310 "write_deps_file.m"
    {
#line 2310 "write_deps_file.m"
      parse_tree__write_deps_file__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2310 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2310 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 1) = ((MR_Box) (parse_tree__write_deps_file__V_176_176));
#line 2310 "write_deps_file.m"
    }
#line 2309 "write_deps_file.m"
    {
#line 2309 "write_deps_file.m"
      parse_tree__write_deps_file__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2309 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 0) = ((MR_Box) ((MR_String) ".date3s) | xargs rm -f\n"));
#line 2309 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 1) = ((MR_Box) (parse_tree__write_deps_file__V_174_174));
#line 2309 "write_deps_file.m"
    }
#line 2309 "write_deps_file.m"
    {
#line 2309 "write_deps_file.m"
      parse_tree__write_deps_file__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2309 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2309 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 1) = ((MR_Box) (parse_tree__write_deps_file__V_172_172));
#line 2309 "write_deps_file.m"
    }
#line 2309 "write_deps_file.m"
    {
#line 2309 "write_deps_file.m"
      parse_tree__write_deps_file__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2309 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2309 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 1) = ((MR_Box) (parse_tree__write_deps_file__V_171_171));
#line 2309 "write_deps_file.m"
    }
#line 2308 "write_deps_file.m"
    {
#line 2308 "write_deps_file.m"
      parse_tree__write_deps_file__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2308 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 0) = ((MR_Box) ((MR_String) ".date0s) | xargs rm -f\n"));
#line 2308 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 1) = ((MR_Box) (parse_tree__write_deps_file__V_169_169));
#line 2308 "write_deps_file.m"
    }
#line 2308 "write_deps_file.m"
    {
#line 2308 "write_deps_file.m"
      parse_tree__write_deps_file__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2308 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2308 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 1) = ((MR_Box) (parse_tree__write_deps_file__V_167_167));
#line 2308 "write_deps_file.m"
    }
#line 2308 "write_deps_file.m"
    {
#line 2308 "write_deps_file.m"
      parse_tree__write_deps_file__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2308 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2308 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 1) = ((MR_Box) (parse_tree__write_deps_file__V_166_166));
#line 2308 "write_deps_file.m"
    }
#line 2307 "write_deps_file.m"
    {
#line 2307 "write_deps_file.m"
      parse_tree__write_deps_file__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2307 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 0) = ((MR_Box) ((MR_String) ".dates) | xargs rm -f\n"));
#line 2307 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 1) = ((MR_Box) (parse_tree__write_deps_file__V_164_164));
#line 2307 "write_deps_file.m"
    }
#line 2307 "write_deps_file.m"
    {
#line 2307 "write_deps_file.m"
      parse_tree__write_deps_file__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2307 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2307 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 1) = ((MR_Box) (parse_tree__write_deps_file__V_162_162));
#line 2307 "write_deps_file.m"
    }
#line 2307 "write_deps_file.m"
    {
#line 2307 "write_deps_file.m"
      parse_tree__write_deps_file__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2307 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2307 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 1) = ((MR_Box) (parse_tree__write_deps_file__V_161_161));
#line 2307 "write_deps_file.m"
    }
#line 2306 "write_deps_file.m"
    {
#line 2306 "write_deps_file.m"
      parse_tree__write_deps_file__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2306 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2306 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 1) = ((MR_Box) (parse_tree__write_deps_file__V_159_159));
#line 2306 "write_deps_file.m"
    }
#line 2306 "write_deps_file.m"
    {
#line 2306 "write_deps_file.m"
      parse_tree__write_deps_file__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2306 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2306 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 1) = ((MR_Box) (parse_tree__write_deps_file__V_157_157));
#line 2306 "write_deps_file.m"
    }
#line 2306 "write_deps_file.m"
    {
#line 2306 "write_deps_file.m"
      parse_tree__write_deps_file__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2306 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 0) = ((MR_Box) ((MR_String) " : "));
#line 2306 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 1) = ((MR_Box) (parse_tree__write_deps_file__V_156_156));
#line 2306 "write_deps_file.m"
    }
#line 2306 "write_deps_file.m"
    {
#line 2306 "write_deps_file.m"
      parse_tree__write_deps_file__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2306 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
#line 2306 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 1) = ((MR_Box) (parse_tree__write_deps_file__V_154_154));
#line 2306 "write_deps_file.m"
    }
#line 2305 "write_deps_file.m"
    {
#line 2305 "write_deps_file.m"
      parse_tree__write_deps_file__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2305 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2305 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 1) = ((MR_Box) (parse_tree__write_deps_file__V_153_153));
#line 2305 "write_deps_file.m"
    }
#line 2305 "write_deps_file.m"
    {
#line 2305 "write_deps_file.m"
      parse_tree__write_deps_file__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2305 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_150_150, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
#line 2305 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_150_150, 1) = ((MR_Box) (parse_tree__write_deps_file__V_151_151));
#line 2305 "write_deps_file.m"
    }
#line 2305 "write_deps_file.m"
    {
#line 2305 "write_deps_file.m"
      parse_tree__write_deps_file__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2305 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2305 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 1) = ((MR_Box) (parse_tree__write_deps_file__V_150_150));
#line 2305 "write_deps_file.m"
    }
#line 2304 "write_deps_file.m"
    {
#line 2304 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_147_147);
    }
#line 2339 "write_deps_file.m"
    {
#line 2339 "write_deps_file.m"
      parse_tree__write_deps_file__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2339 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 0) = ((MR_Box) (parse_tree__write_deps_file__DvFileName_30));
#line 2339 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[108])));
#line 2339 "write_deps_file.m"
    }
#line 2338 "write_deps_file.m"
    {
#line 2338 "write_deps_file.m"
      parse_tree__write_deps_file__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2338 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 0) = ((MR_Box) ((MR_String) " "));
#line 2338 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 1) = ((MR_Box) (parse_tree__write_deps_file__V_281_281));
#line 2338 "write_deps_file.m"
    }
#line 2338 "write_deps_file.m"
    {
#line 2338 "write_deps_file.m"
      parse_tree__write_deps_file__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2338 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 0) = ((MR_Box) (parse_tree__write_deps_file__DepFileName_29));
#line 2338 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 1) = ((MR_Box) (parse_tree__write_deps_file__V_279_279));
#line 2338 "write_deps_file.m"
    }
#line 2337 "write_deps_file.m"
    {
#line 2337 "write_deps_file.m"
      parse_tree__write_deps_file__V_276_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2337 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 0) = ((MR_Box) ((MR_String) " "));
#line 2337 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 1) = ((MR_Box) (parse_tree__write_deps_file__V_278_278));
#line 2337 "write_deps_file.m"
    }
#line 2337 "write_deps_file.m"
    {
#line 2337 "write_deps_file.m"
      parse_tree__write_deps_file__V_275_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2337 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 0) = ((MR_Box) (parse_tree__write_deps_file__JarFileName_28));
#line 2337 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 1) = ((MR_Box) (parse_tree__write_deps_file__V_276_276));
#line 2337 "write_deps_file.m"
    }
#line 2336 "write_deps_file.m"
    {
#line 2336 "write_deps_file.m"
      parse_tree__write_deps_file__V_273_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2336 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 0) = ((MR_Box) ((MR_String) " "));
#line 2336 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 1) = ((MR_Box) (parse_tree__write_deps_file__V_275_275));
#line 2336 "write_deps_file.m"
    }
#line 2336 "write_deps_file.m"
    {
#line 2336 "write_deps_file.m"
      parse_tree__write_deps_file__V_272_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2336 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 0) = ((MR_Box) (parse_tree__write_deps_file__SharedLibFileName_27));
#line 2336 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 1) = ((MR_Box) (parse_tree__write_deps_file__V_273_273));
#line 2336 "write_deps_file.m"
    }
#line 2335 "write_deps_file.m"
    {
#line 2335 "write_deps_file.m"
      parse_tree__write_deps_file__V_270_270 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2335 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_270_270, 0) = ((MR_Box) ((MR_String) " "));
#line 2335 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_270_270, 1) = ((MR_Box) (parse_tree__write_deps_file__V_272_272));
#line 2335 "write_deps_file.m"
    }
#line 2335 "write_deps_file.m"
    {
#line 2335 "write_deps_file.m"
      parse_tree__write_deps_file__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2335 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 0) = ((MR_Box) (parse_tree__write_deps_file__LibFileName_26));
#line 2335 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 1) = ((MR_Box) (parse_tree__write_deps_file__V_270_270));
#line 2335 "write_deps_file.m"
    }
#line 2334 "write_deps_file.m"
    {
#line 2334 "write_deps_file.m"
      parse_tree__write_deps_file__V_267_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2334 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_267_267, 0) = ((MR_Box) ((MR_String) " "));
#line 2334 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_267_267, 1) = ((MR_Box) (parse_tree__write_deps_file__V_269_269));
#line 2334 "write_deps_file.m"
    }
#line 2334 "write_deps_file.m"
    {
#line 2334 "write_deps_file.m"
      parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2334 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_25));
#line 2334 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__V_267_267));
#line 2334 "write_deps_file.m"
    }
#line 2333 "write_deps_file.m"
    {
#line 2333 "write_deps_file.m"
      parse_tree__write_deps_file__V_264_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2333 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) "));
#line 2333 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 2333 "write_deps_file.m"
    }
#line 2333 "write_deps_file.m"
    {
#line 2333 "write_deps_file.m"
      parse_tree__write_deps_file__V_263_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2333 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 0) = ((MR_Box) (parse_tree__write_deps_file__ExeFileName_21));
#line 2333 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 1) = ((MR_Box) (parse_tree__write_deps_file__V_264_264));
#line 2333 "write_deps_file.m"
    }
#line 2332 "write_deps_file.m"
    {
#line 2332 "write_deps_file.m"
      parse_tree__write_deps_file__V_260_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2332 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 0) = ((MR_Box) ((MR_String) "\t-rm -f "));
#line 2332 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 1) = ((MR_Box) (parse_tree__write_deps_file__V_263_263));
#line 2332 "write_deps_file.m"
    }
#line 2331 "write_deps_file.m"
    {
#line 2331 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_260_260);
#line 2331 "write_deps_file.m"
      return;
    }
#line 2262 "write_deps_file.m"
  }
#line 2254 "write_deps_file.m"
}

#line 2241 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(
#line 2241 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 2241 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_9,
#line 2241 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 2241 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_11,
#line 2241 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__5_5)
#line 2241 "write_deps_file.m"
{
#line 2246 "write_deps_file.m"
  {
#line 2246 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2246 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Extension_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 0)));
#line 2246 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__VarExtension_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 1)));
#line 2246 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TargetName_15;
#line 2246 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_20_20;
#line 2246 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_23_23;
#line 2246 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_24_24;
#line 2246 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_26_26;
#line 2246 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_27_27;
#line 2246 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_29_29;
#line 2246 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_30_30;

#line 2247 "write_deps_file.m"
    {
#line 2247 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__Extension_12, (MR_Integer) 1, &parse_tree__write_deps_file__TargetName_15);
    }
#line 2251 "write_deps_file.m"
    {
#line 2251 "write_deps_file.m"
      parse_tree__write_deps_file__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2251 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_30_30, 0) = ((MR_Box) (parse_tree__write_deps_file__VarExtension_13));
#line 2251 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[122])));
#line 2251 "write_deps_file.m"
    }
#line 2251 "write_deps_file.m"
    {
#line 2251 "write_deps_file.m"
      parse_tree__write_deps_file__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2251 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_29_29, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_11));
#line 2251 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_29_29, 1) = ((MR_Box) (parse_tree__write_deps_file__V_30_30));
#line 2251 "write_deps_file.m"
    }
#line 2251 "write_deps_file.m"
    {
#line 2251 "write_deps_file.m"
      parse_tree__write_deps_file__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2251 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_27_27, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 2251 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_27_27, 1) = ((MR_Box) (parse_tree__write_deps_file__V_29_29));
#line 2251 "write_deps_file.m"
    }
#line 2251 "write_deps_file.m"
    {
#line 2251 "write_deps_file.m"
      parse_tree__write_deps_file__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2251 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_26_26, 0) = ((MR_Box) (parse_tree__write_deps_file__TargetName_15));
#line 2251 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_26_26, 1) = ((MR_Box) (parse_tree__write_deps_file__V_27_27));
#line 2251 "write_deps_file.m"
    }
#line 2250 "write_deps_file.m"
    {
#line 2250 "write_deps_file.m"
      parse_tree__write_deps_file__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2250 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_24_24, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2250 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_24_24, 1) = ((MR_Box) (parse_tree__write_deps_file__V_26_26));
#line 2250 "write_deps_file.m"
    }
#line 2250 "write_deps_file.m"
    {
#line 2250 "write_deps_file.m"
      parse_tree__write_deps_file__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2250 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_23_23, 0) = ((MR_Box) (parse_tree__write_deps_file__TargetName_15));
#line 2250 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_23_23, 1) = ((MR_Box) (parse_tree__write_deps_file__V_24_24));
#line 2250 "write_deps_file.m"
    }
#line 2250 "write_deps_file.m"
    {
#line 2250 "write_deps_file.m"
      parse_tree__write_deps_file__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2250 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_20_20, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2250 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_20_20, 1) = ((MR_Box) (parse_tree__write_deps_file__V_23_23));
#line 2250 "write_deps_file.m"
    }
#line 2249 "write_deps_file.m"
    {
#line 2249 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_9, parse_tree__write_deps_file__V_20_20);
#line 2249 "write_deps_file.m"
      return;
    }
#line 2246 "write_deps_file.m"
  }
#line 2241 "write_deps_file.m"
}

#line 2224 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1(
#line 2224 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2224 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2224 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2224 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 2224 "write_deps_file.m"
{
#line 2224 "write_deps_file.m"
  {
#line 2224 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 2224 "write_deps_file.m"
    {
#line 2224 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 2224 "write_deps_file.m"
      return;
    }
#line 2224 "write_deps_file.m"
  }
#line 2224 "write_deps_file.m"
}

#line 2218 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(
#line 2218 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 2218 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 2218 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 2218 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_10)
#line 2218 "write_deps_file.m"
{
#line 2222 "write_deps_file.m"
  {
#line 2222 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2222 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_14_14;
#line 2223 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_13;

#line 2224 "write_deps_file.m"
    {
#line 2224 "write_deps_file.m"
      parse_tree__write_deps_file__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2224 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[2]));
#line 2224 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1));
#line 2224 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2224 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 2224 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_8));
#line 2224 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_9));
#line 2224 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 6) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_10));
#line 2224 "write_deps_file.m"
    }
#line 2223 "write_deps_file.m"
    {
#line 2223 "write_deps_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__write_deps_file_scalar_common_2[2], (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_14_14, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[97]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_13);
    }
#line 2222 "write_deps_file.m"
  }
#line 2218 "write_deps_file.m"
}

#line 2053 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(
#line 2053 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 2053 "write_deps_file.m"
{
#line 2053 "write_deps_file.m"
  {
#line 2053 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 2053 "write_deps_file.m"
    MR_builtin_longjmp((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0, 1);
#line 2053 "write_deps_file.m"
  }
#line 2053 "write_deps_file.m"
}

#line 2054 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3(
#line 2054 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 2054 "write_deps_file.m"
{
#line 2054 "write_deps_file.m"
  {
#line 2054 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 2054 "write_deps_file.m"
    (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_28_28 = ((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_V_28_28);
#line 2054 "write_deps_file.m"
    (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_46_46 = ((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_V_46_46);
#line 2054 "write_deps_file.m"
    {
#line 2054 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(parse_tree__write_deps_file__env_ptr);
#line 2054 "write_deps_file.m"
      return;
    }
#line 2054 "write_deps_file.m"
  }
#line 2054 "write_deps_file.m"
}

#line 2053 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(
#line 2053 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 2053 "write_deps_file.m"
{
#line 2053 "write_deps_file.m"
  {
#line 2053 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 2053 "write_deps_file.m"
    {
#line 2054 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_46_46, (MR_Integer) 0)));
#line 2055 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__V_341_341;
#line 2055 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_342_342;
#line 2055 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_343_343;
#line 2055 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_344_344;
#line 2055 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_345_345;
#line 2055 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_346_346;
#line 2055 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_347_347;
#line 2055 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_348_348;
#line 2055 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_349_349;
#line 2055 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_350_350;
#line 2055 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_351_351;
#line 2055 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_352_352;
#line 2055 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_353_353;
#line 2055 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_354_354;
#line 2055 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_355_355;
#line 2055 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_356_356;
#line 2055 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_357_357;
#line 2055 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_358_358;
#line 2055 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_359_359;
#line 2055 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_360_360;
#line 2055 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__V_361_361;
#line 2055 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_31_31;
#line 2055 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_32_32;

#line 2054 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_46_46, (MR_Integer) 1)));
#line 2055 "write_deps_file.m"
      parse_tree__write_deps_file__V_341_341 = ((MR_String) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 0)));
#line 2055 "write_deps_file.m"
      parse_tree__write_deps_file__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 1)));
#line 2055 "write_deps_file.m"
      parse_tree__write_deps_file__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 2)));
#line 2055 "write_deps_file.m"
      parse_tree__write_deps_file__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 3)));
#line 2055 "write_deps_file.m"
      parse_tree__write_deps_file__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 4)));
#line 2055 "write_deps_file.m"
      parse_tree__write_deps_file__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 5)));
#line 2055 "write_deps_file.m"
      parse_tree__write_deps_file__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 6)));
#line 2055 "write_deps_file.m"
      parse_tree__write_deps_file__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 7)));
#line 2055 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 8)));
#line 2055 "write_deps_file.m"
      parse_tree__write_deps_file__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 9)));
#line 2055 "write_deps_file.m"
      parse_tree__write_deps_file__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 10)));
#line 2055 "write_deps_file.m"
      parse_tree__write_deps_file__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 11)));
#line 2055 "write_deps_file.m"
      parse_tree__write_deps_file__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 12)));
#line 2055 "write_deps_file.m"
      parse_tree__write_deps_file__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 13)));
#line 2055 "write_deps_file.m"
      parse_tree__write_deps_file__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 14)));
#line 2055 "write_deps_file.m"
      parse_tree__write_deps_file__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 15)));
#line 2055 "write_deps_file.m"
      parse_tree__write_deps_file__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 16)));
#line 2055 "write_deps_file.m"
      parse_tree__write_deps_file__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 17)));
#line 2055 "write_deps_file.m"
      parse_tree__write_deps_file__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 18)));
#line 2055 "write_deps_file.m"
      parse_tree__write_deps_file__V_359_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 19)));
#line 2055 "write_deps_file.m"
      parse_tree__write_deps_file__V_360_360 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 20)));
#line 2055 "write_deps_file.m"
      parse_tree__write_deps_file__V_361_361 = ((MR_String) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Imports_30, (MR_Integer) 21)));
#line 2055 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = ((MR_tag((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_47_47)) == (MR_mktag((MR_Integer) 1)));
#line 2055 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 2055 "write_deps_file.m"
        {
#line 2055 "write_deps_file.m"
          {
#line 2055 "write_deps_file.m"
            parse_tree__write_deps_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_47_47, (MR_Integer) 0)));
#line 2055 "write_deps_file.m"
            parse_tree__write_deps_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_47_47, (MR_Integer) 1)));
#line 2055 "write_deps_file.m"
          }
#line 2055 "write_deps_file.m"
          {
#line 2055 "write_deps_file.m"
            parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(parse_tree__write_deps_file__env_ptr);
#line 2055 "write_deps_file.m"
            return;
          }
#line 2055 "write_deps_file.m"
        }
#line 2053 "write_deps_file.m"
    }
#line 2053 "write_deps_file.m"
  }
#line 2053 "write_deps_file.m"
}

#line 2053 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(
#line 2053 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 2053 "write_deps_file.m"
{
#line 2053 "write_deps_file.m"
  {
#line 2053 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 2053 "write_deps_file.m"
    if (MR_builtin_setjmp((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0) == 0)
#line 2053 "write_deps_file.m"
      {
#line 2053 "write_deps_file.m"
        {
#line 2053 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__TypeCtorInfo_362_362;
#line 2053 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__TypeCtorInfo_363_363;

#line 2053 "write_deps_file.m"
          (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = ((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Intermod_20 == (MR_Integer) 1);
#line 2053 "write_deps_file.m"
          if ((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 2053 "write_deps_file.m"
            {
#line 6224 "parse_tree.write_deps_file.c"
              parse_tree__write_deps_file__TypeCtorInfo_362_362 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 6226 "parse_tree.write_deps_file.c"
              parse_tree__write_deps_file__TypeCtorInfo_363_363 = (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0;
#line 2054 "write_deps_file.m"
              {
#line 2054 "write_deps_file.m"
                mercury__map__member_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_362_362, parse_tree__write_deps_file__TypeCtorInfo_363_363, (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17, &(parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_V_28_28, &(parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_V_46_46, parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3, parse_tree__write_deps_file__env_ptr);
              }
#line 2053 "write_deps_file.m"
            }
#line 2053 "write_deps_file.m"
        }
#line 2053 "write_deps_file.m"
        (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = MR_FALSE;
#line 2053 "write_deps_file.m"
      }
#line 2053 "write_deps_file.m"
    else
#line 2053 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = MR_TRUE;
#line 2053 "write_deps_file.m"
  }
#line 2053 "write_deps_file.m"
}

#line 2031 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(
#line 2031 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_14,
#line 2031 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_15,
#line 2031 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_16,
#line 2031 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_17,
#line 2031 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_18,
#line 2031 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_19,
#line 2031 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_20,
#line 2031 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_21,
#line 2031 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_22,
#line 2031 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeOptsVar_23,
#line 2031 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeTransOptsVar_24)
#line 2031 "write_deps_file.m"
{
#line 2031 "write_deps_file.m"
  {
#line 2031 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s parse_tree__write_deps_file__env;

#line 2031 "write_deps_file.m"
    (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17 = parse_tree__write_deps_file__DepsMap_17;
#line 2031 "write_deps_file.m"
    (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Intermod_20 = parse_tree__write_deps_file__Intermod_20;
#line 2037 "write_deps_file.m"
    {
#line 2037 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallIntsTargetName_26;
#line 2037 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__OptStr_27;
#line 2037 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__Int0Str_33;
#line 2037 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__MaybeInt0sVar_34;
#line 2037 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__TransOptStr_35;
#line 2037 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__DepStr_36;
#line 2037 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallOptsTargetName_37;
#line 2037 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallHdrsTargetName_38;
#line 2037 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_39;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_51_51;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_54_54;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_55_55;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_57_57;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_58_58;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_60_60;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_61_61;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_63_63;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_64_64;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_66_66;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_67_67;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_68_68;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_69_69;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_70_70;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_72_72;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_74_74;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_75_75;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_77_77;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_78_78;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_80_80;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_81_81;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_82_82;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_83_83;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_84_84;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_86_86;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_88_88;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_90_90;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_92_92;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_94_94;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_96_96;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_98_98;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_100_100;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_102_102;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_104_104;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_106_106;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_108_108;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_110_110;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_112_112;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_113_113;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_114_114;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_115_115;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_139_139;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_142_142;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_143_143;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_145_145;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_219_219;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_222_222;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_223_223;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_225_225;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_226_226;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_228_228;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_230_230;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_231_231;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_233_233;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_235_235;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_237_237;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_238_238;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_240_240;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_242_242;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_244_244;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_246_246;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_262_262;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_265_265;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_266_266;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_268_268;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_269_269;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_271_271;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_273_273;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_274_274;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_276_276;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_278_278;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_280_280;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_281_281;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_283_283;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_285_285;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_287_287;
#line 2037 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_289_289;

#line 2043 "write_deps_file.m"
      {
#line 2043 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_ints", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallIntsTargetName_26);
      }
#line 2048 "write_deps_file.m"
#line 2048 "write_deps_file.m"
      switch ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Intermod_20) {
#line 2048 "write_deps_file.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 2048 "write_deps_file.m"
        case (MR_Integer) 0:
#line 2050 "write_deps_file.m"
          parse_tree__write_deps_file__OptStr_27 = (MR_String) "";
#line 2048 "write_deps_file.m"
          break;
#line 2048 "write_deps_file.m"
        case (MR_Integer) 1:
#line 2047 "write_deps_file.m"
          parse_tree__write_deps_file__OptStr_27 = (MR_String) " opt";
#line 2048 "write_deps_file.m"
          break;
#line 2048 "write_deps_file.m"
      }
#line 2053 "write_deps_file.m"
      {
#line 2053 "write_deps_file.m"
        parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(&parse_tree__write_deps_file__env);
      }
#line 2061 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 2059 "write_deps_file.m"
        {
#line 2059 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__V_49_49;

#line 2059 "write_deps_file.m"
          parse_tree__write_deps_file__Int0Str_33 = (MR_String) " int0";
#line 2060 "write_deps_file.m"
          {
#line 2060 "write_deps_file.m"
            parse_tree__write_deps_file__V_49_49 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_18, (MR_String) ".int0s) ");
          }
#line 2060 "write_deps_file.m"
          {
#line 2060 "write_deps_file.m"
            parse_tree__write_deps_file__MaybeInt0sVar_34 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_49_49);
          }
#line 2059 "write_deps_file.m"
        }
#line 2061 "write_deps_file.m"
      else
#line 2062 "write_deps_file.m"
        {
#line 2062 "write_deps_file.m"
          parse_tree__write_deps_file__Int0Str_33 = (MR_String) "";
#line 2063 "write_deps_file.m"
          parse_tree__write_deps_file__MaybeInt0sVar_34 = (MR_String) "";
#line 2062 "write_deps_file.m"
        }
#line 2068 "write_deps_file.m"
#line 2068 "write_deps_file.m"
      switch (parse_tree__write_deps_file__TransOpt_21) {
#line 2068 "write_deps_file.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 2068 "write_deps_file.m"
        case (MR_Integer) 0:
#line 2070 "write_deps_file.m"
          parse_tree__write_deps_file__TransOptStr_35 = (MR_String) "";
#line 2068 "write_deps_file.m"
          break;
#line 2068 "write_deps_file.m"
        case (MR_Integer) 1:
#line 2067 "write_deps_file.m"
          parse_tree__write_deps_file__TransOptStr_35 = (MR_String) " trans_opt";
#line 2068 "write_deps_file.m"
          break;
#line 2068 "write_deps_file.m"
      }
#line 2075 "write_deps_file.m"
#line 2075 "write_deps_file.m"
      switch (parse_tree__write_deps_file__MmcMakeDeps_19) {
#line 2075 "write_deps_file.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 2075 "write_deps_file.m"
        case (MR_Integer) 0:
#line 2077 "write_deps_file.m"
          parse_tree__write_deps_file__DepStr_36 = (MR_String) "";
#line 2075 "write_deps_file.m"
          break;
#line 2075 "write_deps_file.m"
        case (MR_Integer) 1:
#line 2074 "write_deps_file.m"
          parse_tree__write_deps_file__DepStr_36 = (MR_String) " module_dep";
#line 2075 "write_deps_file.m"
          break;
#line 2075 "write_deps_file.m"
      }
#line 2102 "write_deps_file.m"
      {
#line 2102 "write_deps_file.m"
        parse_tree__write_deps_file__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2102 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_115_115, 0) = ((MR_Box) (parse_tree__write_deps_file__DepStr_36));
#line 2102 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_115_115, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[37])));
#line 2102 "write_deps_file.m"
      }
#line 2102 "write_deps_file.m"
      {
#line 2102 "write_deps_file.m"
        parse_tree__write_deps_file__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2102 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_114_114, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptStr_35));
#line 2102 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_114_114, 1) = ((MR_Box) (parse_tree__write_deps_file__V_115_115));
#line 2102 "write_deps_file.m"
      }
#line 2102 "write_deps_file.m"
      {
#line 2102 "write_deps_file.m"
        parse_tree__write_deps_file__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2102 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_113_113, 0) = ((MR_Box) (parse_tree__write_deps_file__OptStr_27));
#line 2102 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_113_113, 1) = ((MR_Box) (parse_tree__write_deps_file__V_114_114));
#line 2102 "write_deps_file.m"
      }
#line 2102 "write_deps_file.m"
      {
#line 2102 "write_deps_file.m"
        parse_tree__write_deps_file__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2102 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0Str_33));
#line 2102 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 1) = ((MR_Box) (parse_tree__write_deps_file__V_113_113));
#line 2102 "write_deps_file.m"
      }
#line 2101 "write_deps_file.m"
      {
#line 2101 "write_deps_file.m"
        parse_tree__write_deps_file__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2101 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_110_110, 0) = ((MR_Box) ((MR_String) "\tfor ext in int int2 int3"));
#line 2101 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_110_110, 1) = ((MR_Box) (parse_tree__write_deps_file__V_112_112));
#line 2101 "write_deps_file.m"
      }
#line 2100 "write_deps_file.m"
      {
#line 2100 "write_deps_file.m"
        parse_tree__write_deps_file__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2100 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_108_108, 0) = ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n"));
#line 2100 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_108_108, 1) = ((MR_Box) (parse_tree__write_deps_file__V_110_110));
#line 2100 "write_deps_file.m"
      }
#line 2099 "write_deps_file.m"
      {
#line 2099 "write_deps_file.m"
        parse_tree__write_deps_file__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2099 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 0) = ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails, then we just use\n"));
#line 2099 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 1) = ((MR_Box) (parse_tree__write_deps_file__V_108_108));
#line 2099 "write_deps_file.m"
      }
#line 2098 "write_deps_file.m"
      {
#line 2098 "write_deps_file.m"
        parse_tree__write_deps_file__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2098 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 0) = ((MR_Box) ((MR_String) "\t# The following is needed to support the \140--use-subdirs\' option\n"));
#line 2098 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 1) = ((MR_Box) (parse_tree__write_deps_file__V_106_106));
#line 2098 "write_deps_file.m"
      }
#line 2097 "write_deps_file.m"
      {
#line 2097 "write_deps_file.m"
        parse_tree__write_deps_file__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2097 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 0) = ((MR_Box) ((MR_String) "\tdone\n"));
#line 2097 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 1) = ((MR_Box) (parse_tree__write_deps_file__V_104_104));
#line 2097 "write_deps_file.m"
      }
#line 2096 "write_deps_file.m"
      {
#line 2096 "write_deps_file.m"
        parse_tree__write_deps_file__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2096 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_100_100, 0) = ((MR_Box) ((MR_String) "\t\tfi; \\\n"));
#line 2096 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_100_100, 1) = ((MR_Box) (parse_tree__write_deps_file__V_102_102));
#line 2096 "write_deps_file.m"
      }
#line 2095 "write_deps_file.m"
      {
#line 2095 "write_deps_file.m"
        parse_tree__write_deps_file__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2095 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 0) = ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\\n"));
#line 2095 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 1) = ((MR_Box) (parse_tree__write_deps_file__V_100_100));
#line 2095 "write_deps_file.m"
      }
#line 2094 "write_deps_file.m"
      {
#line 2094 "write_deps_file.m"
        parse_tree__write_deps_file__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2094 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"installing \044\044target\"; \\\n"));
#line 2094 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 1) = ((MR_Box) (parse_tree__write_deps_file__V_98_98));
#line 2094 "write_deps_file.m"
      }
#line 2093 "write_deps_file.m"
      {
#line 2093 "write_deps_file.m"
        parse_tree__write_deps_file__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2093 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 0) = ((MR_Box) ((MR_String) "\t\telse \\\n"));
#line 2093 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 1) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 2093 "write_deps_file.m"
      }
#line 2092 "write_deps_file.m"
      {
#line 2092 "write_deps_file.m"
        parse_tree__write_deps_file__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2092 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"\044\044target unchanged\"; \\\n"));
#line 2092 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 1) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 2092 "write_deps_file.m"
      }
#line 2091 "write_deps_file.m"
      {
#line 2091 "write_deps_file.m"
        parse_tree__write_deps_file__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2091 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 0) = ((MR_Box) ((MR_String) "\t\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\\n"));
#line 2091 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 1) = ((MR_Box) (parse_tree__write_deps_file__V_92_92));
#line 2091 "write_deps_file.m"
      }
#line 2090 "write_deps_file.m"
      {
#line 2090 "write_deps_file.m"
        parse_tree__write_deps_file__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2090 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 0) = ((MR_Box) ((MR_String) "\t\ttarget=\"\044(INSTALL_INT_DIR)/\140basename \044\044file\140\"; \\\n"));
#line 2090 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 1) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 2090 "write_deps_file.m"
      }
#line 2089 "write_deps_file.m"
      {
#line 2089 "write_deps_file.m"
        parse_tree__write_deps_file__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2089 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 0) = ((MR_Box) ((MR_String) "\tfor file in \044\044files; do \\\n"));
#line 2089 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 1) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 2089 "write_deps_file.m"
      }
#line 2088 "write_deps_file.m"
      {
#line 2088 "write_deps_file.m"
        parse_tree__write_deps_file__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2088 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 0) = ((MR_Box) ((MR_String) "\"; \\\n"));
#line 2088 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 1) = ((MR_Box) (parse_tree__write_deps_file__V_86_86));
#line 2088 "write_deps_file.m"
      }
#line 2088 "write_deps_file.m"
      {
#line 2088 "write_deps_file.m"
        parse_tree__write_deps_file__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2088 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeModuleDepsVar_22));
#line 2088 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 1) = ((MR_Box) (parse_tree__write_deps_file__V_84_84));
#line 2088 "write_deps_file.m"
      }
#line 2088 "write_deps_file.m"
      {
#line 2088 "write_deps_file.m"
        parse_tree__write_deps_file__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2088 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_82_82, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 2088 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_82_82, 1) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 2088 "write_deps_file.m"
      }
#line 2087 "write_deps_file.m"
      {
#line 2087 "write_deps_file.m"
        parse_tree__write_deps_file__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2087 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 2087 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 1) = ((MR_Box) (parse_tree__write_deps_file__V_82_82));
#line 2087 "write_deps_file.m"
      }
#line 2087 "write_deps_file.m"
      {
#line 2087 "write_deps_file.m"
        parse_tree__write_deps_file__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2087 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeInt0sVar_34));
#line 2087 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 1) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 2087 "write_deps_file.m"
      }
#line 2087 "write_deps_file.m"
      {
#line 2087 "write_deps_file.m"
        parse_tree__write_deps_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2087 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 0) = ((MR_Box) ((MR_String) ".int3s) "));
#line 2087 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 1) = ((MR_Box) (parse_tree__write_deps_file__V_80_80));
#line 2087 "write_deps_file.m"
      }
#line 2086 "write_deps_file.m"
      {
#line 2086 "write_deps_file.m"
        parse_tree__write_deps_file__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2086 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2086 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 1) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 2086 "write_deps_file.m"
      }
#line 2086 "write_deps_file.m"
      {
#line 2086 "write_deps_file.m"
        parse_tree__write_deps_file__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2086 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 0) = ((MR_Box) ((MR_String) ".ints) \044("));
#line 2086 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 1) = ((MR_Box) (parse_tree__write_deps_file__V_77_77));
#line 2086 "write_deps_file.m"
      }
#line 2086 "write_deps_file.m"
      {
#line 2086 "write_deps_file.m"
        parse_tree__write_deps_file__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2086 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2086 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 1) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 2086 "write_deps_file.m"
      }
#line 2086 "write_deps_file.m"
      {
#line 2086 "write_deps_file.m"
        parse_tree__write_deps_file__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2086 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 0) = ((MR_Box) ((MR_String) "\tfiles=\"\044("));
#line 2086 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 1) = ((MR_Box) (parse_tree__write_deps_file__V_74_74));
#line 2086 "write_deps_file.m"
      }
#line 2085 "write_deps_file.m"
      {
#line 2085 "write_deps_file.m"
        parse_tree__write_deps_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2085 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 0) = ((MR_Box) ((MR_String) " install_lib_dirs\n"));
#line 2085 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 1) = ((MR_Box) (parse_tree__write_deps_file__V_72_72));
#line 2085 "write_deps_file.m"
      }
#line 2084 "write_deps_file.m"
      {
#line 2084 "write_deps_file.m"
        parse_tree__write_deps_file__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2084 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_69_69, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeModuleDepsVar_22));
#line 2084 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_69_69, 1) = ((MR_Box) (parse_tree__write_deps_file__V_70_70));
#line 2084 "write_deps_file.m"
      }
#line 2084 "write_deps_file.m"
      {
#line 2084 "write_deps_file.m"
        parse_tree__write_deps_file__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2084 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 2084 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 1) = ((MR_Box) (parse_tree__write_deps_file__V_69_69));
#line 2084 "write_deps_file.m"
      }
#line 2083 "write_deps_file.m"
      {
#line 2083 "write_deps_file.m"
        parse_tree__write_deps_file__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2083 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 2083 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 1) = ((MR_Box) (parse_tree__write_deps_file__V_68_68));
#line 2083 "write_deps_file.m"
      }
#line 2083 "write_deps_file.m"
      {
#line 2083 "write_deps_file.m"
        parse_tree__write_deps_file__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2083 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeInt0sVar_34));
#line 2083 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 1) = ((MR_Box) (parse_tree__write_deps_file__V_67_67));
#line 2083 "write_deps_file.m"
      }
#line 2083 "write_deps_file.m"
      {
#line 2083 "write_deps_file.m"
        parse_tree__write_deps_file__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2083 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_64_64, 0) = ((MR_Box) ((MR_String) ".int3s) "));
#line 2083 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_64_64, 1) = ((MR_Box) (parse_tree__write_deps_file__V_66_66));
#line 2083 "write_deps_file.m"
      }
#line 2083 "write_deps_file.m"
      {
#line 2083 "write_deps_file.m"
        parse_tree__write_deps_file__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2083 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_63_63, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2083 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_63_63, 1) = ((MR_Box) (parse_tree__write_deps_file__V_64_64));
#line 2083 "write_deps_file.m"
      }
#line 2082 "write_deps_file.m"
      {
#line 2082 "write_deps_file.m"
        parse_tree__write_deps_file__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2082 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_61_61, 0) = ((MR_Box) ((MR_String) ".ints) \044("));
#line 2082 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_61_61, 1) = ((MR_Box) (parse_tree__write_deps_file__V_63_63));
#line 2082 "write_deps_file.m"
      }
#line 2082 "write_deps_file.m"
      {
#line 2082 "write_deps_file.m"
        parse_tree__write_deps_file__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2082 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2082 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 1) = ((MR_Box) (parse_tree__write_deps_file__V_61_61));
#line 2082 "write_deps_file.m"
      }
#line 2082 "write_deps_file.m"
      {
#line 2082 "write_deps_file.m"
        parse_tree__write_deps_file__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2082 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 2082 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 1) = ((MR_Box) (parse_tree__write_deps_file__V_60_60));
#line 2082 "write_deps_file.m"
      }
#line 2082 "write_deps_file.m"
      {
#line 2082 "write_deps_file.m"
        parse_tree__write_deps_file__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2082 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_57_57, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallIntsTargetName_26));
#line 2082 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_57_57, 1) = ((MR_Box) (parse_tree__write_deps_file__V_58_58));
#line 2082 "write_deps_file.m"
      }
#line 2081 "write_deps_file.m"
      {
#line 2081 "write_deps_file.m"
        parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2081 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_57_57));
#line 2081 "write_deps_file.m"
      }
#line 2081 "write_deps_file.m"
      {
#line 2081 "write_deps_file.m"
        parse_tree__write_deps_file__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_54_54, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallIntsTargetName_26));
#line 2081 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_54_54, 1) = ((MR_Box) (parse_tree__write_deps_file__V_55_55));
#line 2081 "write_deps_file.m"
      }
#line 2081 "write_deps_file.m"
      {
#line 2081 "write_deps_file.m"
        parse_tree__write_deps_file__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_51_51, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2081 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_51_51, 1) = ((MR_Box) (parse_tree__write_deps_file__V_54_54));
#line 2081 "write_deps_file.m"
      }
#line 2080 "write_deps_file.m"
      {
#line 2080 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_51_51);
      }
#line 2114 "write_deps_file.m"
      {
#line 2114 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_opts", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallOptsTargetName_37);
      }
#line 2118 "write_deps_file.m"
      {
#line 2118 "write_deps_file.m"
        parse_tree__write_deps_file__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2118 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_145_145, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsTargetName_37));
#line 2118 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_145_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[105])));
#line 2118 "write_deps_file.m"
      }
#line 2117 "write_deps_file.m"
      {
#line 2117 "write_deps_file.m"
        parse_tree__write_deps_file__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2117 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2117 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 1) = ((MR_Box) (parse_tree__write_deps_file__V_145_145));
#line 2117 "write_deps_file.m"
      }
#line 2117 "write_deps_file.m"
      {
#line 2117 "write_deps_file.m"
        parse_tree__write_deps_file__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2117 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_142_142, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsTargetName_37));
#line 2117 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_142_142, 1) = ((MR_Box) (parse_tree__write_deps_file__V_143_143));
#line 2117 "write_deps_file.m"
      }
#line 2117 "write_deps_file.m"
      {
#line 2117 "write_deps_file.m"
        parse_tree__write_deps_file__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2117 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_139_139, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2117 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_139_139, 1) = ((MR_Box) (parse_tree__write_deps_file__V_142_142));
#line 2117 "write_deps_file.m"
      }
#line 2116 "write_deps_file.m"
      {
#line 2116 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_139_139);
      }
#line 2120 "write_deps_file.m"
      (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Intermod_20 == (MR_Integer) 0);
#line 2120 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 2121 "write_deps_file.m"
        (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = (parse_tree__write_deps_file__TransOpt_21 == (MR_Integer) 0);
#line 2124 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 2123 "write_deps_file.m"
        {
#line 2123 "write_deps_file.m"
          {
#line 2123 "write_deps_file.m"
            mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_15, (MR_String) "\n\t\100:\n\n");
          }
#line 2123 "write_deps_file.m"
        }
#line 2124 "write_deps_file.m"
      else
#line 2125 "write_deps_file.m"
        {
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_151_151;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_153_153;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_154_154;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_156_156;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_158_158;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_159_159;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_160_160;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_162_162;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_164_164;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_166_166;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_168_168;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_170_170;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_172_172;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_174_174;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_176_176;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_178_178;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_180_180;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_182_182;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_184_184;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_186_186;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_188_188;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_190_190;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_192_192;
#line 2125 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_193_193;

#line 2142 "write_deps_file.m"
          {
#line 2142 "write_deps_file.m"
            parse_tree__write_deps_file__V_193_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2142 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_193_193, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptStr_35));
#line 2142 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_193_193, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[45])));
#line 2142 "write_deps_file.m"
          }
#line 2142 "write_deps_file.m"
          {
#line 2142 "write_deps_file.m"
            parse_tree__write_deps_file__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2142 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 0) = ((MR_Box) (parse_tree__write_deps_file__OptStr_27));
#line 2142 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 1) = ((MR_Box) (parse_tree__write_deps_file__V_193_193));
#line 2142 "write_deps_file.m"
          }
#line 2142 "write_deps_file.m"
          {
#line 2142 "write_deps_file.m"
            parse_tree__write_deps_file__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2142 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_190_190, 0) = ((MR_Box) ((MR_String) "\tfor ext in "));
#line 2142 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_190_190, 1) = ((MR_Box) (parse_tree__write_deps_file__V_192_192));
#line 2142 "write_deps_file.m"
          }
#line 2141 "write_deps_file.m"
          {
#line 2141 "write_deps_file.m"
            parse_tree__write_deps_file__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2141 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_188_188, 0) = ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n"));
#line 2141 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_188_188, 1) = ((MR_Box) (parse_tree__write_deps_file__V_190_190));
#line 2141 "write_deps_file.m"
          }
#line 2140 "write_deps_file.m"
          {
#line 2140 "write_deps_file.m"
            parse_tree__write_deps_file__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2140 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 0) = ((MR_Box) ((MR_String) " then we just use\n"));
#line 2140 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 1) = ((MR_Box) (parse_tree__write_deps_file__V_188_188));
#line 2140 "write_deps_file.m"
          }
#line 2139 "write_deps_file.m"
          {
#line 2139 "write_deps_file.m"
            parse_tree__write_deps_file__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2139 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 0) = ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails,"));
#line 2139 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 1) = ((MR_Box) (parse_tree__write_deps_file__V_186_186));
#line 2139 "write_deps_file.m"
          }
#line 2138 "write_deps_file.m"
          {
#line 2138 "write_deps_file.m"
            parse_tree__write_deps_file__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2138 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 0) = ((MR_Box) ((MR_String) " \140--use-subdirs\' option\n"));
#line 2138 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 1) = ((MR_Box) (parse_tree__write_deps_file__V_184_184));
#line 2138 "write_deps_file.m"
          }
#line 2137 "write_deps_file.m"
          {
#line 2137 "write_deps_file.m"
            parse_tree__write_deps_file__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2137 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_180_180, 0) = ((MR_Box) ((MR_String) "\t# The following is needed to support the"));
#line 2137 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_180_180, 1) = ((MR_Box) (parse_tree__write_deps_file__V_182_182));
#line 2137 "write_deps_file.m"
          }
#line 2136 "write_deps_file.m"
          {
#line 2136 "write_deps_file.m"
            parse_tree__write_deps_file__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2136 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_178_178, 0) = ((MR_Box) ((MR_String) "\tdone\n"));
#line 2136 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_178_178, 1) = ((MR_Box) (parse_tree__write_deps_file__V_180_180));
#line 2136 "write_deps_file.m"
          }
#line 2135 "write_deps_file.m"
          {
#line 2135 "write_deps_file.m"
            parse_tree__write_deps_file__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2135 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 0) = ((MR_Box) ((MR_String) "\t\tfi; \\\n"));
#line 2135 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 1) = ((MR_Box) (parse_tree__write_deps_file__V_178_178));
#line 2135 "write_deps_file.m"
          }
#line 2134 "write_deps_file.m"
          {
#line 2134 "write_deps_file.m"
            parse_tree__write_deps_file__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2134 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 0) = ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\\n"));
#line 2134 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 1) = ((MR_Box) (parse_tree__write_deps_file__V_176_176));
#line 2134 "write_deps_file.m"
          }
#line 2133 "write_deps_file.m"
          {
#line 2133 "write_deps_file.m"
            parse_tree__write_deps_file__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2133 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"installing \044\044target\"; \\\n"));
#line 2133 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 1) = ((MR_Box) (parse_tree__write_deps_file__V_174_174));
#line 2133 "write_deps_file.m"
          }
#line 2132 "write_deps_file.m"
          {
#line 2132 "write_deps_file.m"
            parse_tree__write_deps_file__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2132 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_170_170, 0) = ((MR_Box) ((MR_String) "\t\telse \\\n"));
#line 2132 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_170_170, 1) = ((MR_Box) (parse_tree__write_deps_file__V_172_172));
#line 2132 "write_deps_file.m"
          }
#line 2131 "write_deps_file.m"
          {
#line 2131 "write_deps_file.m"
            parse_tree__write_deps_file__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2131 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_168_168, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"\044\044target unchanged\"; \\\n"));
#line 2131 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_168_168, 1) = ((MR_Box) (parse_tree__write_deps_file__V_170_170));
#line 2131 "write_deps_file.m"
          }
#line 2130 "write_deps_file.m"
          {
#line 2130 "write_deps_file.m"
            parse_tree__write_deps_file__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2130 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 0) = ((MR_Box) ((MR_String) "\t\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\\n"));
#line 2130 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 1) = ((MR_Box) (parse_tree__write_deps_file__V_168_168));
#line 2130 "write_deps_file.m"
          }
#line 2129 "write_deps_file.m"
          {
#line 2129 "write_deps_file.m"
            parse_tree__write_deps_file__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2129 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 0) = ((MR_Box) ((MR_String) "\t\ttarget=\"\044(INSTALL_GRADE_INT_DIR)/\140basename \044\044file\140\";\\\n"));
#line 2129 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 1) = ((MR_Box) (parse_tree__write_deps_file__V_166_166));
#line 2129 "write_deps_file.m"
          }
#line 2128 "write_deps_file.m"
          {
#line 2128 "write_deps_file.m"
            parse_tree__write_deps_file__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2128 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 0) = ((MR_Box) ((MR_String) "\tfor file in \044\044files; do \\\n"));
#line 2128 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 1) = ((MR_Box) (parse_tree__write_deps_file__V_164_164));
#line 2128 "write_deps_file.m"
          }
#line 2127 "write_deps_file.m"
          {
#line 2127 "write_deps_file.m"
            parse_tree__write_deps_file__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2127 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_160_160, 0) = ((MR_Box) ((MR_String) "\"; \\\n"));
#line 2127 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_160_160, 1) = ((MR_Box) (parse_tree__write_deps_file__V_162_162));
#line 2127 "write_deps_file.m"
          }
#line 2127 "write_deps_file.m"
          {
#line 2127 "write_deps_file.m"
            parse_tree__write_deps_file__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2127 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 2127 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 1) = ((MR_Box) (parse_tree__write_deps_file__V_160_160));
#line 2127 "write_deps_file.m"
          }
#line 2127 "write_deps_file.m"
          {
#line 2127 "write_deps_file.m"
            parse_tree__write_deps_file__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2127 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_158_158, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 2127 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_158_158, 1) = ((MR_Box) (parse_tree__write_deps_file__V_159_159));
#line 2127 "write_deps_file.m"
          }
#line 2127 "write_deps_file.m"
          {
#line 2127 "write_deps_file.m"
            parse_tree__write_deps_file__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2127 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 0) = ((MR_Box) ((MR_String) "\tfiles=\""));
#line 2127 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 1) = ((MR_Box) (parse_tree__write_deps_file__V_158_158));
#line 2127 "write_deps_file.m"
          }
#line 2126 "write_deps_file.m"
          {
#line 2126 "write_deps_file.m"
            parse_tree__write_deps_file__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2126 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 0) = ((MR_Box) ((MR_String) "install_grade_dirs\n"));
#line 2126 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 1) = ((MR_Box) (parse_tree__write_deps_file__V_156_156));
#line 2126 "write_deps_file.m"
          }
#line 2126 "write_deps_file.m"
          {
#line 2126 "write_deps_file.m"
            parse_tree__write_deps_file__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2126 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 2126 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 1) = ((MR_Box) (parse_tree__write_deps_file__V_154_154));
#line 2126 "write_deps_file.m"
          }
#line 2126 "write_deps_file.m"
          {
#line 2126 "write_deps_file.m"
            parse_tree__write_deps_file__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2126 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 2126 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 1) = ((MR_Box) (parse_tree__write_deps_file__V_153_153));
#line 2126 "write_deps_file.m"
          }
#line 2125 "write_deps_file.m"
          {
#line 2125 "write_deps_file.m"
            mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_151_151);
          }
#line 2125 "write_deps_file.m"
        }
#line 2165 "write_deps_file.m"
      {
#line 2165 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_hdrs", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallHdrsTargetName_38);
      }
#line 2175 "write_deps_file.m"
      {
#line 2175 "write_deps_file.m"
        parse_tree__write_deps_file__V_246_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2175 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2175 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[49])));
#line 2175 "write_deps_file.m"
      }
#line 2175 "write_deps_file.m"
      {
#line 2175 "write_deps_file.m"
        parse_tree__write_deps_file__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2175 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 0) = ((MR_Box) ((MR_String) "\tfor hdr in \044("));
#line 2175 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 1) = ((MR_Box) (parse_tree__write_deps_file__V_246_246));
#line 2175 "write_deps_file.m"
      }
#line 2174 "write_deps_file.m"
      {
#line 2174 "write_deps_file.m"
        parse_tree__write_deps_file__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2174 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 0) = ((MR_Box) ((MR_String) "else\n"));
#line 2174 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 1) = ((MR_Box) (parse_tree__write_deps_file__V_244_244));
#line 2174 "write_deps_file.m"
      }
#line 2173 "write_deps_file.m"
      {
#line 2173 "write_deps_file.m"
        parse_tree__write_deps_file__V_240_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2173 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 2173 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 1) = ((MR_Box) (parse_tree__write_deps_file__V_242_242));
#line 2173 "write_deps_file.m"
      }
#line 2172 "write_deps_file.m"
      {
#line 2172 "write_deps_file.m"
        parse_tree__write_deps_file__V_238_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2172 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_238_238, 0) = ((MR_Box) ((MR_String) ".mhs),)\n"));
#line 2172 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_238_238, 1) = ((MR_Box) (parse_tree__write_deps_file__V_240_240));
#line 2172 "write_deps_file.m"
      }
#line 2172 "write_deps_file.m"
      {
#line 2172 "write_deps_file.m"
        parse_tree__write_deps_file__V_237_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2172 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2172 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 1) = ((MR_Box) (parse_tree__write_deps_file__V_238_238));
#line 2172 "write_deps_file.m"
      }
#line 2172 "write_deps_file.m"
      {
#line 2172 "write_deps_file.m"
        parse_tree__write_deps_file__V_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2172 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 0) = ((MR_Box) ((MR_String) "ifeq (\044("));
#line 2172 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 1) = ((MR_Box) (parse_tree__write_deps_file__V_237_237));
#line 2172 "write_deps_file.m"
      }
#line 2171 "write_deps_file.m"
      {
#line 2171 "write_deps_file.m"
        parse_tree__write_deps_file__V_233_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2171 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_233_233, 0) = ((MR_Box) ((MR_String) "install_lib_dirs\n"));
#line 2171 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_233_233, 1) = ((MR_Box) (parse_tree__write_deps_file__V_235_235));
#line 2171 "write_deps_file.m"
      }
#line 2170 "write_deps_file.m"
      {
#line 2170 "write_deps_file.m"
        parse_tree__write_deps_file__V_231_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2170 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 0) = ((MR_Box) ((MR_String) ".mhs) "));
#line 2170 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 1) = ((MR_Box) (parse_tree__write_deps_file__V_233_233));
#line 2170 "write_deps_file.m"
      }
#line 2170 "write_deps_file.m"
      {
#line 2170 "write_deps_file.m"
        parse_tree__write_deps_file__V_230_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2170 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2170 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 1) = ((MR_Box) (parse_tree__write_deps_file__V_231_231));
#line 2170 "write_deps_file.m"
      }
#line 2170 "write_deps_file.m"
      {
#line 2170 "write_deps_file.m"
        parse_tree__write_deps_file__V_228_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2170 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_228_228, 0) = ((MR_Box) ((MR_String) "\044("));
#line 2170 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_228_228, 1) = ((MR_Box) (parse_tree__write_deps_file__V_230_230));
#line 2170 "write_deps_file.m"
      }
#line 2169 "write_deps_file.m"
      {
#line 2169 "write_deps_file.m"
        parse_tree__write_deps_file__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2169 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 0) = ((MR_Box) ((MR_String) " : "));
#line 2169 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 1) = ((MR_Box) (parse_tree__write_deps_file__V_228_228));
#line 2169 "write_deps_file.m"
      }
#line 2169 "write_deps_file.m"
      {
#line 2169 "write_deps_file.m"
        parse_tree__write_deps_file__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2169 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallHdrsTargetName_38));
#line 2169 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 1) = ((MR_Box) (parse_tree__write_deps_file__V_226_226));
#line 2169 "write_deps_file.m"
      }
#line 2168 "write_deps_file.m"
      {
#line 2168 "write_deps_file.m"
        parse_tree__write_deps_file__V_223_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2168 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_223_223, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2168 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_223_223, 1) = ((MR_Box) (parse_tree__write_deps_file__V_225_225));
#line 2168 "write_deps_file.m"
      }
#line 2168 "write_deps_file.m"
      {
#line 2168 "write_deps_file.m"
        parse_tree__write_deps_file__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2168 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallHdrsTargetName_38));
#line 2168 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 1) = ((MR_Box) (parse_tree__write_deps_file__V_223_223));
#line 2168 "write_deps_file.m"
      }
#line 2168 "write_deps_file.m"
      {
#line 2168 "write_deps_file.m"
        parse_tree__write_deps_file__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2168 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2168 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 1) = ((MR_Box) (parse_tree__write_deps_file__V_222_222));
#line 2168 "write_deps_file.m"
      }
#line 2167 "write_deps_file.m"
      {
#line 2167 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_219_219);
      }
#line 2181 "write_deps_file.m"
      {
#line 2181 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_grade_hdrs", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_39);
      }
#line 2192 "write_deps_file.m"
      {
#line 2192 "write_deps_file.m"
        parse_tree__write_deps_file__V_289_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2192 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_289_289, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2192 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_289_289, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[73])));
#line 2192 "write_deps_file.m"
      }
#line 2192 "write_deps_file.m"
      {
#line 2192 "write_deps_file.m"
        parse_tree__write_deps_file__V_287_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2192 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_287_287, 0) = ((MR_Box) ((MR_String) "\tfor hdr in \044("));
#line 2192 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_287_287, 1) = ((MR_Box) (parse_tree__write_deps_file__V_289_289));
#line 2192 "write_deps_file.m"
      }
#line 2191 "write_deps_file.m"
      {
#line 2191 "write_deps_file.m"
        parse_tree__write_deps_file__V_285_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2191 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 0) = ((MR_Box) ((MR_String) "else\n"));
#line 2191 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 1) = ((MR_Box) (parse_tree__write_deps_file__V_287_287));
#line 2191 "write_deps_file.m"
      }
#line 2190 "write_deps_file.m"
      {
#line 2190 "write_deps_file.m"
        parse_tree__write_deps_file__V_283_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2190 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 2190 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 1) = ((MR_Box) (parse_tree__write_deps_file__V_285_285));
#line 2190 "write_deps_file.m"
      }
#line 2189 "write_deps_file.m"
      {
#line 2189 "write_deps_file.m"
        parse_tree__write_deps_file__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2189 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 0) = ((MR_Box) ((MR_String) ".mihs),)\n"));
#line 2189 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 1) = ((MR_Box) (parse_tree__write_deps_file__V_283_283));
#line 2189 "write_deps_file.m"
      }
#line 2189 "write_deps_file.m"
      {
#line 2189 "write_deps_file.m"
        parse_tree__write_deps_file__V_280_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2189 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_280_280, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2189 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_280_280, 1) = ((MR_Box) (parse_tree__write_deps_file__V_281_281));
#line 2189 "write_deps_file.m"
      }
#line 2189 "write_deps_file.m"
      {
#line 2189 "write_deps_file.m"
        parse_tree__write_deps_file__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2189 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 0) = ((MR_Box) ((MR_String) "ifeq (\044("));
#line 2189 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 1) = ((MR_Box) (parse_tree__write_deps_file__V_280_280));
#line 2189 "write_deps_file.m"
      }
#line 2188 "write_deps_file.m"
      {
#line 2188 "write_deps_file.m"
        parse_tree__write_deps_file__V_276_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2188 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 0) = ((MR_Box) ((MR_String) "install_grade_dirs\n"));
#line 2188 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 1) = ((MR_Box) (parse_tree__write_deps_file__V_278_278));
#line 2188 "write_deps_file.m"
      }
#line 2187 "write_deps_file.m"
      {
#line 2187 "write_deps_file.m"
        parse_tree__write_deps_file__V_274_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2187 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 0) = ((MR_Box) ((MR_String) ".mihs) "));
#line 2187 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 1) = ((MR_Box) (parse_tree__write_deps_file__V_276_276));
#line 2187 "write_deps_file.m"
      }
#line 2187 "write_deps_file.m"
      {
#line 2187 "write_deps_file.m"
        parse_tree__write_deps_file__V_273_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2187 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2187 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 1) = ((MR_Box) (parse_tree__write_deps_file__V_274_274));
#line 2187 "write_deps_file.m"
      }
#line 2187 "write_deps_file.m"
      {
#line 2187 "write_deps_file.m"
        parse_tree__write_deps_file__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2187 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 0) = ((MR_Box) ((MR_String) "\044("));
#line 2187 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 1) = ((MR_Box) (parse_tree__write_deps_file__V_273_273));
#line 2187 "write_deps_file.m"
      }
#line 2186 "write_deps_file.m"
      {
#line 2186 "write_deps_file.m"
        parse_tree__write_deps_file__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2186 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 0) = ((MR_Box) ((MR_String) " : "));
#line 2186 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 1) = ((MR_Box) (parse_tree__write_deps_file__V_271_271));
#line 2186 "write_deps_file.m"
      }
#line 2186 "write_deps_file.m"
      {
#line 2186 "write_deps_file.m"
        parse_tree__write_deps_file__V_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2186 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_39));
#line 2186 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 1) = ((MR_Box) (parse_tree__write_deps_file__V_269_269));
#line 2186 "write_deps_file.m"
      }
#line 2185 "write_deps_file.m"
      {
#line 2185 "write_deps_file.m"
        parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2185 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2185 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__V_268_268));
#line 2185 "write_deps_file.m"
      }
#line 2185 "write_deps_file.m"
      {
#line 2185 "write_deps_file.m"
        parse_tree__write_deps_file__V_265_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2185 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_39));
#line 2185 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 2185 "write_deps_file.m"
      }
#line 2185 "write_deps_file.m"
      {
#line 2185 "write_deps_file.m"
        parse_tree__write_deps_file__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2185 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2185 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 1) = ((MR_Box) (parse_tree__write_deps_file__V_265_265));
#line 2185 "write_deps_file.m"
      }
#line 2184 "write_deps_file.m"
      {
#line 2184 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_262_262);
#line 2184 "write_deps_file.m"
        return;
      }
#line 2037 "write_deps_file.m"
    }
#line 2031 "write_deps_file.m"
  }
#line 2031 "write_deps_file.m"
}

#line 1988 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(
#line 1988 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_11,
#line 1988 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12,
#line 1988 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_13,
#line 1988 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_14,
#line 1988 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_15,
#line 1988 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_16,
#line 1988 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DepFileName_17,
#line 1988 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DvFileName_18)
#line 1988 "write_deps_file.m"
{
#line 1994 "write_deps_file.m"
  {
#line 1994 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1994 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleFileName_20;
#line 1994 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ForceC2InitTarget_21;
#line 1994 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TmpInitCFileName_22;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_31_31;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_33_33;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_35_35;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_36_36;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_38_38;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_39_39;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_41_41;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_43_43;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_47_47;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_50_50;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_52_52;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_53_53;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_55_55;
#line 1994 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_67_67;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_70_70;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_72_72;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_74_74;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_75_75;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_77_77;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_78_78;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_80_80;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_81_81;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_83_83;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_85_85;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_87_87;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_88_88;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_90_90;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_93_93;
#line 1994 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_95_95;

#line 1995 "write_deps_file.m"
    {
#line 1995 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_11, parse_tree__write_deps_file__ModuleName_13, (MR_String) ".dep", (MR_Integer) 1, parse_tree__write_deps_file__DepFileName_17);
    }
#line 1997 "write_deps_file.m"
    {
#line 1997 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_11, parse_tree__write_deps_file__ModuleName_13, (MR_String) ".dv", (MR_Integer) 1, parse_tree__write_deps_file__DvFileName_18);
    }
#line 2002 "write_deps_file.m"
    {
#line 2002 "write_deps_file.m"
      parse_tree__write_deps_file__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2002 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_43_43, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_16));
#line 2002 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[98])));
#line 2002 "write_deps_file.m"
    }
#line 2002 "write_deps_file.m"
    {
#line 2002 "write_deps_file.m"
      parse_tree__write_deps_file__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2002 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_41_41, 0) = ((MR_Box) ((MR_String) "\techo > "));
#line 2002 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_41_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 2002 "write_deps_file.m"
    }
#line 2001 "write_deps_file.m"
    {
#line 2001 "write_deps_file.m"
      parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2001 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) ((MR_String) ".cs)\n"));
#line 2001 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (parse_tree__write_deps_file__V_41_41));
#line 2001 "write_deps_file.m"
    }
#line 2001 "write_deps_file.m"
    {
#line 2001 "write_deps_file.m"
      parse_tree__write_deps_file__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2001 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_38_38, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 2001 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_38_38, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 2001 "write_deps_file.m"
    }
#line 2001 "write_deps_file.m"
    {
#line 2001 "write_deps_file.m"
      parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2001 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) ((MR_String) " \044("));
#line 2001 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_38_38));
#line 2001 "write_deps_file.m"
    }
#line 2001 "write_deps_file.m"
    {
#line 2001 "write_deps_file.m"
      parse_tree__write_deps_file__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2001 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_35_35, 0) = ((MR_Box) (*parse_tree__write_deps_file__DepFileName_17));
#line 2001 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_35_35, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 2001 "write_deps_file.m"
    }
#line 2001 "write_deps_file.m"
    {
#line 2001 "write_deps_file.m"
      parse_tree__write_deps_file__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2001 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_33_33, 0) = ((MR_Box) ((MR_String) " : "));
#line 2001 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_33_33, 1) = ((MR_Box) (parse_tree__write_deps_file__V_35_35));
#line 2001 "write_deps_file.m"
    }
#line 2001 "write_deps_file.m"
    {
#line 2001 "write_deps_file.m"
      parse_tree__write_deps_file__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2001 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_31_31, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_16));
#line 2001 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_31_31, 1) = ((MR_Box) (parse_tree__write_deps_file__V_33_33));
#line 2001 "write_deps_file.m"
    }
#line 2000 "write_deps_file.m"
    {
#line 2000 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_31_31);
    }
#line 2005 "write_deps_file.m"
    {
#line 2005 "write_deps_file.m"
      parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2005 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) " >> "));
#line 2005 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 2005 "write_deps_file.m"
    }
#line 2005 "write_deps_file.m"
    {
#line 2005 "write_deps_file.m"
      parse_tree__write_deps_file__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2005 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 0) = ((MR_Box) ((MR_String) ".cs)"));
#line 2005 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 1) = ((MR_Box) (parse_tree__write_deps_file__V_55_55));
#line 2005 "write_deps_file.m"
    }
#line 2005 "write_deps_file.m"
    {
#line 2005 "write_deps_file.m"
      parse_tree__write_deps_file__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2005 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 2005 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 1) = ((MR_Box) (parse_tree__write_deps_file__V_53_53));
#line 2005 "write_deps_file.m"
    }
#line 2005 "write_deps_file.m"
    {
#line 2005 "write_deps_file.m"
      parse_tree__write_deps_file__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2005 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 0) = ((MR_Box) ((MR_String) "\044("));
#line 2005 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 1) = ((MR_Box) (parse_tree__write_deps_file__V_52_52));
#line 2005 "write_deps_file.m"
    }
#line 2005 "write_deps_file.m"
    {
#line 2005 "write_deps_file.m"
      parse_tree__write_deps_file__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2005 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 0) = ((MR_Box) ((MR_String) "\t\044(MKLIBINIT) "));
#line 2005 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 1) = ((MR_Box) (parse_tree__write_deps_file__V_50_50));
#line 2005 "write_deps_file.m"
    }
#line 2004 "write_deps_file.m"
    {
#line 2004 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_47_47);
    }
#line 2012 "write_deps_file.m"
    {
#line 2012 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\t\044(EXTRA_INIT_COMMAND) >> ");
    }
#line 2013 "write_deps_file.m"
    {
#line 2013 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__InitFileName_16);
    }
#line 2014 "write_deps_file.m"
    {
#line 2014 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 2019 "write_deps_file.m"
    {
#line 2019 "write_deps_file.m"
      parse_tree__write_deps_file__ModuleFileName_20 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_13);
    }
#line 2020 "write_deps_file.m"
    {
#line 2020 "write_deps_file.m"
      parse_tree__write_deps_file__V_67_67 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleFileName_20, (MR_String) "_init");
    }
#line 2020 "write_deps_file.m"
    {
#line 2020 "write_deps_file.m"
      parse_tree__write_deps_file__ForceC2InitTarget_21 = mercury__string__f_43_43_2_f_0((MR_String) "force-", parse_tree__write_deps_file__V_67_67);
    }
#line 2021 "write_deps_file.m"
    {
#line 2021 "write_deps_file.m"
      parse_tree__write_deps_file__TmpInitCFileName_22 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__InitCFileName_15, (MR_String) ".tmp");
    }
#line 2028 "write_deps_file.m"
    {
#line 2028 "write_deps_file.m"
      parse_tree__write_deps_file__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2028 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_95_95, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_15));
#line 2028 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[108])));
#line 2028 "write_deps_file.m"
    }
#line 2028 "write_deps_file.m"
    {
#line 2028 "write_deps_file.m"
      parse_tree__write_deps_file__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2028 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 0) = ((MR_Box) ((MR_String) "\t\100mercury_update_interface "));
#line 2028 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 1) = ((MR_Box) (parse_tree__write_deps_file__V_95_95));
#line 2028 "write_deps_file.m"
    }
#line 2027 "write_deps_file.m"
    {
#line 2027 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2027 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) ((MR_String) ".init_cs) \044(ALL_C2INITARGS)\n"));
#line 2027 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__V_93_93));
#line 2027 "write_deps_file.m"
    }
#line 2027 "write_deps_file.m"
    {
#line 2027 "write_deps_file.m"
      parse_tree__write_deps_file__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2027 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 2027 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 1) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 2027 "write_deps_file.m"
    }
#line 2027 "write_deps_file.m"
    {
#line 2027 "write_deps_file.m"
      parse_tree__write_deps_file__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2027 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 0) = ((MR_Box) ((MR_String) " \044("));
#line 2027 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 1) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 2027 "write_deps_file.m"
    }
#line 2026 "write_deps_file.m"
    {
#line 2026 "write_deps_file.m"
      parse_tree__write_deps_file__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2026 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpInitCFileName_22));
#line 2026 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 1) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 2026 "write_deps_file.m"
    }
#line 2026 "write_deps_file.m"
    {
#line 2026 "write_deps_file.m"
      parse_tree__write_deps_file__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2026 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_85_85, 0) = ((MR_Box) ((MR_String) "--init-c-file "));
#line 2026 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_85_85, 1) = ((MR_Box) (parse_tree__write_deps_file__V_87_87));
#line 2026 "write_deps_file.m"
    }
#line 2025 "write_deps_file.m"
    {
#line 2025 "write_deps_file.m"
      parse_tree__write_deps_file__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2025 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 0) = ((MR_Box) ((MR_String) "\t\100\044(C2INIT) \044(ALL_GRADEFLAGS) \044(ALL_C2INITFLAGS) "));
#line 2025 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 1) = ((MR_Box) (parse_tree__write_deps_file__V_85_85));
#line 2025 "write_deps_file.m"
    }
#line 2024 "write_deps_file.m"
    {
#line 2024 "write_deps_file.m"
      parse_tree__write_deps_file__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2024 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 0) = ((MR_Box) ((MR_String) ".cs)\n"));
#line 2024 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 1) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 2024 "write_deps_file.m"
    }
#line 2024 "write_deps_file.m"
    {
#line 2024 "write_deps_file.m"
      parse_tree__write_deps_file__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2024 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 2024 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 1) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 2024 "write_deps_file.m"
    }
#line 2024 "write_deps_file.m"
    {
#line 2024 "write_deps_file.m"
      parse_tree__write_deps_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2024 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 0) = ((MR_Box) ((MR_String) " \044("));
#line 2024 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 1) = ((MR_Box) (parse_tree__write_deps_file__V_80_80));
#line 2024 "write_deps_file.m"
    }
#line 2024 "write_deps_file.m"
    {
#line 2024 "write_deps_file.m"
      parse_tree__write_deps_file__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2024 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 0) = ((MR_Box) (parse_tree__write_deps_file__ForceC2InitTarget_21));
#line 2024 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 1) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 2024 "write_deps_file.m"
    }
#line 2024 "write_deps_file.m"
    {
#line 2024 "write_deps_file.m"
      parse_tree__write_deps_file__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2024 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 0) = ((MR_Box) ((MR_String) " : "));
#line 2024 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 1) = ((MR_Box) (parse_tree__write_deps_file__V_77_77));
#line 2024 "write_deps_file.m"
    }
#line 2024 "write_deps_file.m"
    {
#line 2024 "write_deps_file.m"
      parse_tree__write_deps_file__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2024 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_15));
#line 2024 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 1) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 2024 "write_deps_file.m"
    }
#line 2023 "write_deps_file.m"
    {
#line 2023 "write_deps_file.m"
      parse_tree__write_deps_file__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2023 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 0) = ((MR_Box) ((MR_String) " :\n\n"));
#line 2023 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 1) = ((MR_Box) (parse_tree__write_deps_file__V_74_74));
#line 2023 "write_deps_file.m"
    }
#line 2023 "write_deps_file.m"
    {
#line 2023 "write_deps_file.m"
      parse_tree__write_deps_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2023 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 0) = ((MR_Box) (parse_tree__write_deps_file__ForceC2InitTarget_21));
#line 2023 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 1) = ((MR_Box) (parse_tree__write_deps_file__V_72_72));
#line 2023 "write_deps_file.m"
    }
#line 2022 "write_deps_file.m"
    {
#line 2022 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_70_70);
#line 2022 "write_deps_file.m"
      return;
    }
#line 1994 "write_deps_file.m"
  }
#line 1988 "write_deps_file.m"
}

#line 1754 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(
#line 1754 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_19,
#line 1754 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_20,
#line 1754 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_21,
#line 1754 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_22,
#line 1754 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_23,
#line 1754 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_24,
#line 1754 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_25,
#line 1754 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_26,
#line 1754 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_27,
#line 1754 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeOptsVar_28,
#line 1754 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeTransOptsVar_29,
#line 1754 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeModuleDepsVar_30,
#line 1754 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__ExeFileName_31,
#line 1754 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__JarFileName_32,
#line 1754 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__LibFileName_33,
#line 1754 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__SharedLibFileName_34)
#line 1754 "write_deps_file.m"
{
#line 1763 "write_deps_file.m"
  {
#line 1763 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Gmake_36;
#line 1763 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__All_MLLibsDepString_37;
#line 1763 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__All_MLObjsString_38;
#line 1763 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__All_MLPicObjsString_39;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IfIL_40;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ILMainRule_41;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IfJava2_42;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__JavaMainRule_43;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Else_44;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Else2_45;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__EndIf_46;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__EndIf2_47;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__MainRule_48;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Target_49;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Rules_50;
#line 1763 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__LibTargetName_51;
#line 1763 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeSharedLibFileName_52;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__UseInstallName_53;
#line 1763 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InstallNameOpt_54;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__AllInts_55;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ILLibRule_56;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__JavaLibRule_57;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__LibRule_58;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__LibRules_59;
#line 1763 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ClassFiles_60;
#line 1763 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ListClassFiles_61;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_88_88;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_90_90;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_93_93;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_94_94;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_96_96;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_98_98;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_99_99;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_101_101;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_103_103;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_109_109;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_111_111;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_123_123;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_126_126;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_128_128;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_129_129;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_131_131;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_132_132;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_134_134;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_140_140;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_142_142;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_143_143;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_145_145;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_147_147;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_148_148;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_150_150;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_151_151;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_153_153;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_154_154;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_156_156;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_157_157;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_159_159;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_161_161;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_163_163;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_164_164;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_166_166;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_167_167;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_169_169;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_171_171;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_172_172;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_174_174;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_216_216;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_217_217;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_219_219;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_221_221;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_222_222;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_224_224;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_225_225;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_226_226;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_227_227;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_230_230;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_232_232;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_234_234;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_235_235;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_237_237;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_239_239;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_240_240;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_242_242;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_244_244;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_245_245;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_247_247;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_249_249;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_250_250;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_252_252;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_262_262;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_265_265;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_266_266;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_268_268;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_271_271;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_272_272;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_274_274;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_275_275;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_277_277;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_279_279;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_280_280;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_282_282;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_283_283;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_285_285;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_286_286;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_288_288;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_290_290;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_292_292;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_293_293;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_295_295;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_296_296;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_298_298;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_300_300;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_301_301;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_303_303;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_309_309;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_311_311;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_313_313;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_314_314;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_316_316;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_318_318;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_319_319;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_321_321;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_322_322;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_324_324;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_326_326;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_327_327;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_329_329;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_331_331;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_332_332;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_334_334;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_336_336;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_337_337;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_339_339;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_340_340;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_342_342;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_344_344;
#line 1763 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_349_349;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_351_351;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_353_353;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_355_355;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_357_357;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_358_358;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_360_360;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_362_362;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_363_363;
#line 1763 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_365_365;

#line 1769 "write_deps_file.m"
    {
#line 1769 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_19, (MR_Integer) 119, &parse_tree__write_deps_file__Gmake_36);
    }
#line 1782 "write_deps_file.m"
#line 1782 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Gmake_36) {
#line 1782 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1782 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1783 "write_deps_file.m"
        {
#line 1784 "write_deps_file.m"
          parse_tree__write_deps_file__All_MLLibsDepString_37 = (MR_String) "\044(ALL_MLLIBS_DEP)";
#line 1785 "write_deps_file.m"
          parse_tree__write_deps_file__All_MLObjsString_38 = (MR_String) "\044(ALL_MLOBJS)";
#line 1786 "write_deps_file.m"
          parse_tree__write_deps_file__All_MLPicObjsString_39 = (MR_String) "\044(ALL_MLPICOBJS)";
#line 1783 "write_deps_file.m"
        }
#line 1782 "write_deps_file.m"
        break;
#line 1782 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1771 "write_deps_file.m"
        {
#line 1771 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_65_65;
#line 1771 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_67_67;
#line 1771 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_71_71;
#line 1771 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_73_73;
#line 1771 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_77_77;
#line 1771 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_79_79;

#line 1772 "write_deps_file.m"
          {
#line 1772 "write_deps_file.m"
            parse_tree__write_deps_file__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1772 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1772 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[111])));
#line 1772 "write_deps_file.m"
          }
#line 1772 "write_deps_file.m"
          {
#line 1772 "write_deps_file.m"
            parse_tree__write_deps_file__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1772 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(foreach \100,"));
#line 1772 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 1) = ((MR_Box) (parse_tree__write_deps_file__V_67_67));
#line 1772 "write_deps_file.m"
          }
#line 1772 "write_deps_file.m"
          {
#line 1772 "write_deps_file.m"
            mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_65_65, &parse_tree__write_deps_file__All_MLLibsDepString_37);
          }
#line 1775 "write_deps_file.m"
          {
#line 1775 "write_deps_file.m"
            parse_tree__write_deps_file__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1775 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1775 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[112])));
#line 1775 "write_deps_file.m"
          }
#line 1775 "write_deps_file.m"
          {
#line 1775 "write_deps_file.m"
            parse_tree__write_deps_file__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1775 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(foreach \100,"));
#line 1775 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 1) = ((MR_Box) (parse_tree__write_deps_file__V_73_73));
#line 1775 "write_deps_file.m"
          }
#line 1775 "write_deps_file.m"
          {
#line 1775 "write_deps_file.m"
            mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_71_71, &parse_tree__write_deps_file__All_MLObjsString_38);
          }
#line 1780 "write_deps_file.m"
          {
#line 1780 "write_deps_file.m"
            parse_tree__write_deps_file__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1780 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1780 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[113])));
#line 1780 "write_deps_file.m"
          }
#line 1779 "write_deps_file.m"
          {
#line 1779 "write_deps_file.m"
            parse_tree__write_deps_file__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1779 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(patsubst %.o,%.\044(EXT_FOR_PIC_OBJECTS),\044(foreach \100,"));
#line 1779 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 1) = ((MR_Box) (parse_tree__write_deps_file__V_79_79));
#line 1779 "write_deps_file.m"
          }
#line 1778 "write_deps_file.m"
          {
#line 1778 "write_deps_file.m"
            mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_77_77, &parse_tree__write_deps_file__All_MLPicObjsString_39);
          }
#line 1771 "write_deps_file.m"
        }
#line 1782 "write_deps_file.m"
        break;
#line 1782 "write_deps_file.m"
    }
#line 1800 "write_deps_file.m"
    {
#line 1800 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ModuleName_21, (MR_String) "", (MR_Integer) 1, parse_tree__write_deps_file__ExeFileName_31);
    }
#line 1803 "write_deps_file.m"
    parse_tree__write_deps_file__IfIL_40 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[114]);
#line 1806 "write_deps_file.m"
    {
#line 1806 "write_deps_file.m"
      parse_tree__write_deps_file__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1806 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_103_103, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1806 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[115])));
#line 1806 "write_deps_file.m"
    }
#line 1806 "write_deps_file.m"
    {
#line 1806 "write_deps_file.m"
      parse_tree__write_deps_file__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1806 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1806 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 1) = ((MR_Box) (parse_tree__write_deps_file__V_103_103));
#line 1806 "write_deps_file.m"
    }
#line 1805 "write_deps_file.m"
    {
#line 1805 "write_deps_file.m"
      parse_tree__write_deps_file__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1805 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 0) = ((MR_Box) ((MR_String) ".dlls) "));
#line 1805 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 1) = ((MR_Box) (parse_tree__write_deps_file__V_101_101));
#line 1805 "write_deps_file.m"
    }
#line 1805 "write_deps_file.m"
    {
#line 1805 "write_deps_file.m"
      parse_tree__write_deps_file__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1805 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1805 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 1) = ((MR_Box) (parse_tree__write_deps_file__V_99_99));
#line 1805 "write_deps_file.m"
    }
#line 1805 "write_deps_file.m"
    {
#line 1805 "write_deps_file.m"
      parse_tree__write_deps_file__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1805 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1805 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 1) = ((MR_Box) (parse_tree__write_deps_file__V_98_98));
#line 1805 "write_deps_file.m"
    }
#line 1805 "write_deps_file.m"
    {
#line 1805 "write_deps_file.m"
      parse_tree__write_deps_file__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1805 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 0) = ((MR_Box) ((MR_String) ".exe : "));
#line 1805 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 1) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 1805 "write_deps_file.m"
    }
#line 1805 "write_deps_file.m"
    {
#line 1805 "write_deps_file.m"
      parse_tree__write_deps_file__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1805 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1805 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 1) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 1805 "write_deps_file.m"
    }
#line 1804 "write_deps_file.m"
    {
#line 1804 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1804 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) ((MR_String) ".exe\n"));
#line 1804 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__V_93_93));
#line 1804 "write_deps_file.m"
    }
#line 1804 "write_deps_file.m"
    {
#line 1804 "write_deps_file.m"
      parse_tree__write_deps_file__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1804 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1804 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 1) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 1804 "write_deps_file.m"
    }
#line 1804 "write_deps_file.m"
    {
#line 1804 "write_deps_file.m"
      parse_tree__write_deps_file__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1804 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 0) = ((MR_Box) ((MR_String) " : "));
#line 1804 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 1) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 1804 "write_deps_file.m"
    }
#line 1804 "write_deps_file.m"
    {
#line 1804 "write_deps_file.m"
      parse_tree__write_deps_file__ILMainRule_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1804 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILMainRule_41, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1804 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILMainRule_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 1804 "write_deps_file.m"
    }
#line 1807 "write_deps_file.m"
    parse_tree__write_deps_file__IfJava2_42 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[116]);
#line 1808 "write_deps_file.m"
    {
#line 1808 "write_deps_file.m"
      parse_tree__write_deps_file__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1808 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1808 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[117])));
#line 1808 "write_deps_file.m"
    }
#line 1808 "write_deps_file.m"
    {
#line 1808 "write_deps_file.m"
      parse_tree__write_deps_file__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1808 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1808 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 1) = ((MR_Box) (parse_tree__write_deps_file__V_111_111));
#line 1808 "write_deps_file.m"
    }
#line 1808 "write_deps_file.m"
    {
#line 1808 "write_deps_file.m"
      parse_tree__write_deps_file__JavaMainRule_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1808 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaMainRule_43, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1808 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaMainRule_43, 1) = ((MR_Box) (parse_tree__write_deps_file__V_109_109));
#line 1808 "write_deps_file.m"
    }
#line 1810 "write_deps_file.m"
    parse_tree__write_deps_file__Else_44 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[118]);
#line 1811 "write_deps_file.m"
    parse_tree__write_deps_file__Else2_45 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[119]);
#line 1812 "write_deps_file.m"
    parse_tree__write_deps_file__EndIf_46 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[12]);
#line 1813 "write_deps_file.m"
    parse_tree__write_deps_file__EndIf2_47 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[120]);
#line 1819 "write_deps_file.m"
    {
#line 1819 "write_deps_file.m"
      parse_tree__write_deps_file__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1819 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_134_134, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1819 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[26])));
#line 1819 "write_deps_file.m"
    }
#line 1819 "write_deps_file.m"
    {
#line 1819 "write_deps_file.m"
      parse_tree__write_deps_file__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1819 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_132_132, 0) = ((MR_Box) ((MR_String) " : "));
#line 1819 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_132_132, 1) = ((MR_Box) (parse_tree__write_deps_file__V_134_134));
#line 1819 "write_deps_file.m"
    }
#line 1819 "write_deps_file.m"
    {
#line 1819 "write_deps_file.m"
      parse_tree__write_deps_file__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1819 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1819 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 1) = ((MR_Box) (parse_tree__write_deps_file__V_132_132));
#line 1819 "write_deps_file.m"
    }
#line 1818 "write_deps_file.m"
    {
#line 1818 "write_deps_file.m"
      parse_tree__write_deps_file__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1818 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1818 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 1) = ((MR_Box) (parse_tree__write_deps_file__V_131_131));
#line 1818 "write_deps_file.m"
    }
#line 1818 "write_deps_file.m"
    {
#line 1818 "write_deps_file.m"
      parse_tree__write_deps_file__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1818 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_128_128, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1818 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_128_128, 1) = ((MR_Box) (parse_tree__write_deps_file__V_129_129));
#line 1818 "write_deps_file.m"
    }
#line 1818 "write_deps_file.m"
    {
#line 1818 "write_deps_file.m"
      parse_tree__write_deps_file__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1818 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 1818 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 1) = ((MR_Box) (parse_tree__write_deps_file__V_128_128));
#line 1818 "write_deps_file.m"
    }
#line 1817 "write_deps_file.m"
    {
#line 1817 "write_deps_file.m"
      parse_tree__write_deps_file__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1817 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_123_123, 0) = ((MR_Box) ((MR_String) "ifneq (\044(EXT_FOR_EXE),)\n"));
#line 1817 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_123_123, 1) = ((MR_Box) (parse_tree__write_deps_file__V_126_126));
#line 1817 "write_deps_file.m"
    }
#line 1816 "write_deps_file.m"
    {
#line 1816 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_123_123);
    }
#line 1830 "write_deps_file.m"
    {
#line 1830 "write_deps_file.m"
      parse_tree__write_deps_file__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1830 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1830 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[121])));
#line 1830 "write_deps_file.m"
    }
#line 1830 "write_deps_file.m"
    {
#line 1830 "write_deps_file.m"
      parse_tree__write_deps_file__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1830 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1830 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 1) = ((MR_Box) (parse_tree__write_deps_file__V_174_174));
#line 1830 "write_deps_file.m"
    }
#line 1830 "write_deps_file.m"
    {
#line 1830 "write_deps_file.m"
      parse_tree__write_deps_file__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1830 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1830 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 1) = ((MR_Box) (parse_tree__write_deps_file__V_172_172));
#line 1830 "write_deps_file.m"
    }
#line 1830 "write_deps_file.m"
    {
#line 1830 "write_deps_file.m"
      parse_tree__write_deps_file__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1830 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 0) = ((MR_Box) ((MR_String) "\t\t\044("));
#line 1830 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 1) = ((MR_Box) (parse_tree__write_deps_file__V_171_171));
#line 1830 "write_deps_file.m"
    }
#line 1829 "write_deps_file.m"
    {
#line 1829 "write_deps_file.m"
      parse_tree__write_deps_file__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1829 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 0) = ((MR_Box) ((MR_String) " \\\n"));
#line 1829 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 1) = ((MR_Box) (parse_tree__write_deps_file__V_169_169));
#line 1829 "write_deps_file.m"
    }
#line 1829 "write_deps_file.m"
    {
#line 1829 "write_deps_file.m"
      parse_tree__write_deps_file__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1829 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_24));
#line 1829 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 1) = ((MR_Box) (parse_tree__write_deps_file__V_167_167));
#line 1829 "write_deps_file.m"
    }
#line 1828 "write_deps_file.m"
    {
#line 1828 "write_deps_file.m"
      parse_tree__write_deps_file__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1828 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) "));
#line 1828 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 1) = ((MR_Box) (parse_tree__write_deps_file__V_166_166));
#line 1828 "write_deps_file.m"
    }
#line 1828 "write_deps_file.m"
    {
#line 1828 "write_deps_file.m"
      parse_tree__write_deps_file__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1828 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_163_163, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1828 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_163_163, 1) = ((MR_Box) (parse_tree__write_deps_file__V_164_164));
#line 1828 "write_deps_file.m"
    }
#line 1828 "write_deps_file.m"
    {
#line 1828 "write_deps_file.m"
      parse_tree__write_deps_file__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1828 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 0) = ((MR_Box) ((MR_String) "\044(EXEFILE_OPT)"));
#line 1828 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 1) = ((MR_Box) (parse_tree__write_deps_file__V_163_163));
#line 1828 "write_deps_file.m"
    }
#line 1827 "write_deps_file.m"
    {
#line 1827 "write_deps_file.m"
      parse_tree__write_deps_file__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1827 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 0) = ((MR_Box) ((MR_String) "\t\044(ML) \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) -- \044(ALL_LDFLAGS) "));
#line 1827 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 1) = ((MR_Box) (parse_tree__write_deps_file__V_161_161));
#line 1827 "write_deps_file.m"
    }
#line 1826 "write_deps_file.m"
    {
#line 1826 "write_deps_file.m"
      parse_tree__write_deps_file__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1826 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1826 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 1) = ((MR_Box) (parse_tree__write_deps_file__V_159_159));
#line 1826 "write_deps_file.m"
    }
#line 1826 "write_deps_file.m"
    {
#line 1826 "write_deps_file.m"
      parse_tree__write_deps_file__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1826 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLLibsDepString_37));
#line 1826 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 1) = ((MR_Box) (parse_tree__write_deps_file__V_157_157));
#line 1826 "write_deps_file.m"
    }
#line 1826 "write_deps_file.m"
    {
#line 1826 "write_deps_file.m"
      parse_tree__write_deps_file__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1826 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 0) = ((MR_Box) ((MR_String) " "));
#line 1826 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 1) = ((MR_Box) (parse_tree__write_deps_file__V_156_156));
#line 1826 "write_deps_file.m"
    }
#line 1826 "write_deps_file.m"
    {
#line 1826 "write_deps_file.m"
      parse_tree__write_deps_file__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1826 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1826 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 1) = ((MR_Box) (parse_tree__write_deps_file__V_154_154));
#line 1826 "write_deps_file.m"
    }
#line 1825 "write_deps_file.m"
    {
#line 1825 "write_deps_file.m"
      parse_tree__write_deps_file__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 0) = ((MR_Box) ((MR_String) " "));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 1) = ((MR_Box) (parse_tree__write_deps_file__V_153_153));
#line 1825 "write_deps_file.m"
    }
#line 1825 "write_deps_file.m"
    {
#line 1825 "write_deps_file.m"
      parse_tree__write_deps_file__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_150_150, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_24));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_150_150, 1) = ((MR_Box) (parse_tree__write_deps_file__V_151_151));
#line 1825 "write_deps_file.m"
    }
#line 1825 "write_deps_file.m"
    {
#line 1825 "write_deps_file.m"
      parse_tree__write_deps_file__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_148_148, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_148_148, 1) = ((MR_Box) (parse_tree__write_deps_file__V_150_150));
#line 1825 "write_deps_file.m"
    }
#line 1825 "write_deps_file.m"
    {
#line 1825 "write_deps_file.m"
      parse_tree__write_deps_file__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 1) = ((MR_Box) (parse_tree__write_deps_file__V_148_148));
#line 1825 "write_deps_file.m"
    }
#line 1825 "write_deps_file.m"
    {
#line 1825 "write_deps_file.m"
      parse_tree__write_deps_file__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_145_145, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_145_145, 1) = ((MR_Box) (parse_tree__write_deps_file__V_147_147));
#line 1825 "write_deps_file.m"
    }
#line 1824 "write_deps_file.m"
    {
#line 1824 "write_deps_file.m"
      parse_tree__write_deps_file__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1824 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
#line 1824 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 1) = ((MR_Box) (parse_tree__write_deps_file__V_145_145));
#line 1824 "write_deps_file.m"
    }
#line 1824 "write_deps_file.m"
    {
#line 1824 "write_deps_file.m"
      parse_tree__write_deps_file__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1824 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_142_142, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1824 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_142_142, 1) = ((MR_Box) (parse_tree__write_deps_file__V_143_143));
#line 1824 "write_deps_file.m"
    }
#line 1824 "write_deps_file.m"
    {
#line 1824 "write_deps_file.m"
      parse_tree__write_deps_file__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1824 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) : \044("));
#line 1824 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 1) = ((MR_Box) (parse_tree__write_deps_file__V_142_142));
#line 1824 "write_deps_file.m"
    }
#line 1824 "write_deps_file.m"
    {
#line 1824 "write_deps_file.m"
      parse_tree__write_deps_file__MainRule_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1824 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MainRule_48, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1824 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MainRule_48, 1) = ((MR_Box) (parse_tree__write_deps_file__V_140_140));
#line 1824 "write_deps_file.m"
    }
#line 1832 "write_deps_file.m"
    {
#line 1832 "write_deps_file.m"
      libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_19, &parse_tree__write_deps_file__Target_49);
    }
#line 1838 "write_deps_file.m"
#line 1838 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Gmake_36) {
#line 1838 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1838 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1843 "write_deps_file.m"
#line 1843 "write_deps_file.m"
        switch (parse_tree__write_deps_file__Target_49) {
#line 1843 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1843 "write_deps_file.m"
          case (MR_Integer) 0:
#line 1856 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_50 = parse_tree__write_deps_file__MainRule_48;
#line 1843 "write_deps_file.m"
            break;
#line 1843 "write_deps_file.m"
          case (MR_Integer) 2:
#line 1846 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1843 "write_deps_file.m"
            break;
#line 1843 "write_deps_file.m"
          case (MR_Integer) 4:
#line 1853 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1843 "write_deps_file.m"
            break;
#line 1843 "write_deps_file.m"
          case (MR_Integer) 1:
#line 1842 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_50 = parse_tree__write_deps_file__ILMainRule_41;
#line 1843 "write_deps_file.m"
            break;
#line 1843 "write_deps_file.m"
          case (MR_Integer) 3:
#line 1849 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_50 = parse_tree__write_deps_file__JavaMainRule_43;
#line 1843 "write_deps_file.m"
            break;
#line 1843 "write_deps_file.m"
        }
#line 1838 "write_deps_file.m"
        break;
#line 1838 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1834 "write_deps_file.m"
        {
#line 1834 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__TypeCtorInfo_369_369 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1834 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_178_178;
#line 1834 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_179_179;
#line 1834 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_180_180;
#line 1834 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_181_181;
#line 1834 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_182_182;
#line 1834 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_183_183;
#line 1834 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_184_184;

#line 1837 "write_deps_file.m"
          {
#line 1837 "write_deps_file.m"
            parse_tree__write_deps_file__V_184_184 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__EndIf2_47, parse_tree__write_deps_file__EndIf_46);
          }
#line 1837 "write_deps_file.m"
          {
#line 1837 "write_deps_file.m"
            parse_tree__write_deps_file__V_183_183 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__MainRule_48, parse_tree__write_deps_file__V_184_184);
          }
#line 1836 "write_deps_file.m"
          {
#line 1836 "write_deps_file.m"
            parse_tree__write_deps_file__V_182_182 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__Else2_45, parse_tree__write_deps_file__V_183_183);
          }
#line 1836 "write_deps_file.m"
          {
#line 1836 "write_deps_file.m"
            parse_tree__write_deps_file__V_181_181 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__JavaMainRule_43, parse_tree__write_deps_file__V_182_182);
          }
#line 1836 "write_deps_file.m"
          {
#line 1836 "write_deps_file.m"
            parse_tree__write_deps_file__V_180_180 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__IfJava2_42, parse_tree__write_deps_file__V_181_181);
          }
#line 1835 "write_deps_file.m"
          {
#line 1835 "write_deps_file.m"
            parse_tree__write_deps_file__V_179_179 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__Else_44, parse_tree__write_deps_file__V_180_180);
          }
#line 1835 "write_deps_file.m"
          {
#line 1835 "write_deps_file.m"
            parse_tree__write_deps_file__V_178_178 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__ILMainRule_41, parse_tree__write_deps_file__V_179_179);
          }
#line 1835 "write_deps_file.m"
          {
#line 1835 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_50 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__IfIL_40, parse_tree__write_deps_file__V_178_178);
          }
#line 1834 "write_deps_file.m"
        }
#line 1838 "write_deps_file.m"
        break;
#line 1838 "write_deps_file.m"
    }
#line 1859 "write_deps_file.m"
    {
#line 1859 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__Rules_50);
    }
#line 1864 "write_deps_file.m"
#line 1864 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Intermod_25) {
#line 1864 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1864 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1866 "write_deps_file.m"
        *parse_tree__write_deps_file__MaybeOptsVar_28 = (MR_String) "";
#line 1864 "write_deps_file.m"
        break;
#line 1864 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1862 "write_deps_file.m"
        {
#line 1862 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__V_187_187;

#line 1863 "write_deps_file.m"
          {
#line 1863 "write_deps_file.m"
            parse_tree__write_deps_file__V_187_187 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".opts) ");
          }
#line 1863 "write_deps_file.m"
          {
#line 1863 "write_deps_file.m"
            *parse_tree__write_deps_file__MaybeOptsVar_28 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_187_187);
          }
#line 1862 "write_deps_file.m"
        }
#line 1864 "write_deps_file.m"
        break;
#line 1864 "write_deps_file.m"
    }
#line 1871 "write_deps_file.m"
#line 1871 "write_deps_file.m"
    switch (parse_tree__write_deps_file__TransOpt_26) {
#line 1871 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1871 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1873 "write_deps_file.m"
        *parse_tree__write_deps_file__MaybeTransOptsVar_29 = (MR_String) "";
#line 1871 "write_deps_file.m"
        break;
#line 1871 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1869 "write_deps_file.m"
        {
#line 1869 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__V_190_190;

#line 1870 "write_deps_file.m"
          {
#line 1870 "write_deps_file.m"
            parse_tree__write_deps_file__V_190_190 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".trans_opts) ");
          }
#line 1870 "write_deps_file.m"
          {
#line 1870 "write_deps_file.m"
            *parse_tree__write_deps_file__MaybeTransOptsVar_29 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_190_190);
          }
#line 1869 "write_deps_file.m"
        }
#line 1871 "write_deps_file.m"
        break;
#line 1871 "write_deps_file.m"
    }
#line 1878 "write_deps_file.m"
#line 1878 "write_deps_file.m"
    switch (parse_tree__write_deps_file__MmcMakeDeps_27) {
#line 1878 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1878 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1880 "write_deps_file.m"
        *parse_tree__write_deps_file__MaybeModuleDepsVar_30 = (MR_String) "";
#line 1878 "write_deps_file.m"
        break;
#line 1878 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1876 "write_deps_file.m"
        {
#line 1876 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__V_193_193;

#line 1877 "write_deps_file.m"
          {
#line 1877 "write_deps_file.m"
            parse_tree__write_deps_file__V_193_193 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".module_deps) ");
          }
#line 1877 "write_deps_file.m"
          {
#line 1877 "write_deps_file.m"
            *parse_tree__write_deps_file__MaybeModuleDepsVar_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_193_193);
          }
#line 1876 "write_deps_file.m"
        }
#line 1878 "write_deps_file.m"
        break;
#line 1878 "write_deps_file.m"
    }
#line 1883 "write_deps_file.m"
    {
#line 1883 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) "", (MR_Integer) 1, &parse_tree__write_deps_file__LibTargetName_51);
    }
#line 1885 "write_deps_file.m"
    {
#line 1885 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044A", (MR_Integer) 0, parse_tree__write_deps_file__LibFileName_33);
    }
#line 1887 "write_deps_file.m"
    {
#line 1887 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 0, parse_tree__write_deps_file__SharedLibFileName_34);
    }
#line 1889 "write_deps_file.m"
    {
#line 1889 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 1, &parse_tree__write_deps_file__MaybeSharedLibFileName_52);
    }
#line 1892 "write_deps_file.m"
    {
#line 1892 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ModuleName_21, (MR_String) ".jar", (MR_Integer) 1, parse_tree__write_deps_file__JarFileName_32);
    }
#line 1897 "write_deps_file.m"
    {
#line 1897 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_19, (MR_Integer) 617, &parse_tree__write_deps_file__UseInstallName_53);
    }
#line 1902 "write_deps_file.m"
#line 1902 "write_deps_file.m"
    switch (parse_tree__write_deps_file__UseInstallName_53) {
#line 1902 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1902 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1904 "write_deps_file.m"
        parse_tree__write_deps_file__InstallNameOpt_54 = (MR_String) "";
#line 1902 "write_deps_file.m"
        break;
#line 1902 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1901 "write_deps_file.m"
        {
#line 1901 "write_deps_file.m"
          libs__file_util__get_install_name_option_3_p_0(parse_tree__write_deps_file__Globals_19, *parse_tree__write_deps_file__SharedLibFileName_34, &parse_tree__write_deps_file__InstallNameOpt_54);
        }
#line 1902 "write_deps_file.m"
        break;
#line 1902 "write_deps_file.m"
    }
#line 1912 "write_deps_file.m"
    parse_tree__write_deps_file__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[108]);
#line 1911 "write_deps_file.m"
    {
#line 1911 "write_deps_file.m"
      parse_tree__write_deps_file__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1911 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_23));
#line 1911 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 1911 "write_deps_file.m"
    }
#line 1910 "write_deps_file.m"
    {
#line 1910 "write_deps_file.m"
      parse_tree__write_deps_file__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1910 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 0) = ((MR_Box) (*parse_tree__write_deps_file__MaybeTransOptsVar_29));
#line 1910 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 1) = ((MR_Box) (parse_tree__write_deps_file__V_226_226));
#line 1910 "write_deps_file.m"
    }
#line 1910 "write_deps_file.m"
    {
#line 1910 "write_deps_file.m"
      parse_tree__write_deps_file__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1910 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 0) = ((MR_Box) (*parse_tree__write_deps_file__MaybeOptsVar_28));
#line 1910 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 1) = ((MR_Box) (parse_tree__write_deps_file__V_225_225));
#line 1910 "write_deps_file.m"
    }
#line 1909 "write_deps_file.m"
    {
#line 1909 "write_deps_file.m"
      parse_tree__write_deps_file__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1909 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 0) = ((MR_Box) ((MR_String) ".int3s) "));
#line 1909 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 1) = ((MR_Box) (parse_tree__write_deps_file__V_224_224));
#line 1909 "write_deps_file.m"
    }
#line 1909 "write_deps_file.m"
    {
#line 1909 "write_deps_file.m"
      parse_tree__write_deps_file__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1909 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1909 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 1) = ((MR_Box) (parse_tree__write_deps_file__V_222_222));
#line 1909 "write_deps_file.m"
    }
#line 1909 "write_deps_file.m"
    {
#line 1909 "write_deps_file.m"
      parse_tree__write_deps_file__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1909 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1909 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 1) = ((MR_Box) (parse_tree__write_deps_file__V_221_221));
#line 1909 "write_deps_file.m"
    }
#line 1908 "write_deps_file.m"
    {
#line 1908 "write_deps_file.m"
      parse_tree__write_deps_file__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1908 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 0) = ((MR_Box) ((MR_String) ".ints) "));
#line 1908 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 1) = ((MR_Box) (parse_tree__write_deps_file__V_219_219));
#line 1908 "write_deps_file.m"
    }
#line 1908 "write_deps_file.m"
    {
#line 1908 "write_deps_file.m"
      parse_tree__write_deps_file__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1908 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1908 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 1) = ((MR_Box) (parse_tree__write_deps_file__V_217_217));
#line 1908 "write_deps_file.m"
    }
#line 1908 "write_deps_file.m"
    {
#line 1908 "write_deps_file.m"
      parse_tree__write_deps_file__AllInts_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1908 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__AllInts_55, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1908 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__AllInts_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_216_216));
#line 1908 "write_deps_file.m"
    }
#line 1916 "write_deps_file.m"
    {
#line 1916 "write_deps_file.m"
      parse_tree__write_deps_file__V_240_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1916 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 0) = ((MR_Box) ((MR_String) ".foreign_dlls) \\\n\t\t"));
#line 1916 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 1) = ((MR_Box) (parse_tree__write_deps_file__AllInts_55));
#line 1916 "write_deps_file.m"
    }
#line 1915 "write_deps_file.m"
    {
#line 1915 "write_deps_file.m"
      parse_tree__write_deps_file__V_239_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1915 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1915 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 1) = ((MR_Box) (parse_tree__write_deps_file__V_240_240));
#line 1915 "write_deps_file.m"
    }
#line 1915 "write_deps_file.m"
    {
#line 1915 "write_deps_file.m"
      parse_tree__write_deps_file__V_237_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1915 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1915 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 1) = ((MR_Box) (parse_tree__write_deps_file__V_239_239));
#line 1915 "write_deps_file.m"
    }
#line 1914 "write_deps_file.m"
    {
#line 1914 "write_deps_file.m"
      parse_tree__write_deps_file__V_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1914 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 0) = ((MR_Box) ((MR_String) ".dlls) "));
#line 1914 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 1) = ((MR_Box) (parse_tree__write_deps_file__V_237_237));
#line 1914 "write_deps_file.m"
    }
#line 1914 "write_deps_file.m"
    {
#line 1914 "write_deps_file.m"
      parse_tree__write_deps_file__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1914 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1914 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 1) = ((MR_Box) (parse_tree__write_deps_file__V_235_235));
#line 1914 "write_deps_file.m"
    }
#line 1914 "write_deps_file.m"
    {
#line 1914 "write_deps_file.m"
      parse_tree__write_deps_file__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1914 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1914 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 1) = ((MR_Box) (parse_tree__write_deps_file__V_234_234));
#line 1914 "write_deps_file.m"
    }
#line 1914 "write_deps_file.m"
    {
#line 1914 "write_deps_file.m"
      parse_tree__write_deps_file__V_230_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1914 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 0) = ((MR_Box) ((MR_String) " : "));
#line 1914 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 1) = ((MR_Box) (parse_tree__write_deps_file__V_232_232));
#line 1914 "write_deps_file.m"
    }
#line 1914 "write_deps_file.m"
    {
#line 1914 "write_deps_file.m"
      parse_tree__write_deps_file__ILLibRule_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1914 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILLibRule_56, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1914 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILLibRule_56, 1) = ((MR_Box) (parse_tree__write_deps_file__V_230_230));
#line 1914 "write_deps_file.m"
    }
#line 1920 "write_deps_file.m"
    {
#line 1920 "write_deps_file.m"
      parse_tree__write_deps_file__V_245_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1920 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_245_245, 0) = ((MR_Box) ((MR_String) " \\\n\t\t"));
#line 1920 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_245_245, 1) = ((MR_Box) (parse_tree__write_deps_file__AllInts_55));
#line 1920 "write_deps_file.m"
    }
#line 1919 "write_deps_file.m"
    {
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1919 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
#line 1919 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 1) = ((MR_Box) (parse_tree__write_deps_file__V_245_245));
#line 1919 "write_deps_file.m"
    }
#line 1919 "write_deps_file.m"
    {
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1919 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 0) = ((MR_Box) ((MR_String) " : "));
#line 1919 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 1) = ((MR_Box) (parse_tree__write_deps_file__V_244_244));
#line 1919 "write_deps_file.m"
    }
#line 1919 "write_deps_file.m"
    {
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__JavaLibRule_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1919 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaLibRule_57, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1919 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaLibRule_57, 1) = ((MR_Box) (parse_tree__write_deps_file__V_242_242));
#line 1919 "write_deps_file.m"
    }
#line 1924 "write_deps_file.m"
    {
#line 1924 "write_deps_file.m"
      parse_tree__write_deps_file__V_252_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1924 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeSharedLibFileName_52));
#line 1924 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 1) = ((MR_Box) (parse_tree__write_deps_file__V_245_245));
#line 1924 "write_deps_file.m"
    }
#line 1923 "write_deps_file.m"
    {
#line 1923 "write_deps_file.m"
      parse_tree__write_deps_file__V_250_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1923 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_250_250, 0) = ((MR_Box) ((MR_String) " "));
#line 1923 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_250_250, 1) = ((MR_Box) (parse_tree__write_deps_file__V_252_252));
#line 1923 "write_deps_file.m"
    }
#line 1923 "write_deps_file.m"
    {
#line 1923 "write_deps_file.m"
      parse_tree__write_deps_file__V_249_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1923 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1923 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 1) = ((MR_Box) (parse_tree__write_deps_file__V_250_250));
#line 1923 "write_deps_file.m"
    }
#line 1923 "write_deps_file.m"
    {
#line 1923 "write_deps_file.m"
      parse_tree__write_deps_file__V_247_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1923 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 0) = ((MR_Box) ((MR_String) " : "));
#line 1923 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 1) = ((MR_Box) (parse_tree__write_deps_file__V_249_249));
#line 1923 "write_deps_file.m"
    }
#line 1923 "write_deps_file.m"
    {
#line 1923 "write_deps_file.m"
      parse_tree__write_deps_file__LibRule_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1923 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibRule_58, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1923 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibRule_58, 1) = ((MR_Box) (parse_tree__write_deps_file__V_247_247));
#line 1923 "write_deps_file.m"
    }
#line 1932 "write_deps_file.m"
#line 1932 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Gmake_36) {
#line 1932 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1932 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1937 "write_deps_file.m"
#line 1937 "write_deps_file.m"
        switch (parse_tree__write_deps_file__Target_49) {
#line 1937 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1937 "write_deps_file.m"
          case (MR_Integer) 0:
#line 1950 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_59 = parse_tree__write_deps_file__LibRule_58;
#line 1937 "write_deps_file.m"
            break;
#line 1937 "write_deps_file.m"
          case (MR_Integer) 2:
#line 1940 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1937 "write_deps_file.m"
            break;
#line 1937 "write_deps_file.m"
          case (MR_Integer) 4:
#line 1947 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1937 "write_deps_file.m"
            break;
#line 1937 "write_deps_file.m"
          case (MR_Integer) 1:
#line 1936 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_59 = parse_tree__write_deps_file__ILLibRule_56;
#line 1937 "write_deps_file.m"
            break;
#line 1937 "write_deps_file.m"
          case (MR_Integer) 3:
#line 1943 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_59 = parse_tree__write_deps_file__JavaLibRule_57;
#line 1937 "write_deps_file.m"
            break;
#line 1937 "write_deps_file.m"
        }
#line 1932 "write_deps_file.m"
        break;
#line 1932 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1928 "write_deps_file.m"
        {
#line 1928 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__TypeCtorInfo_370_370 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1928 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_255_255;
#line 1928 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_256_256;
#line 1928 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_257_257;
#line 1928 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_258_258;
#line 1928 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_259_259;
#line 1928 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_260_260;
#line 1928 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_261_261;

#line 1931 "write_deps_file.m"
          {
#line 1931 "write_deps_file.m"
            parse_tree__write_deps_file__V_261_261 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__EndIf2_47, parse_tree__write_deps_file__EndIf_46);
          }
#line 1931 "write_deps_file.m"
          {
#line 1931 "write_deps_file.m"
            parse_tree__write_deps_file__V_260_260 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__LibRule_58, parse_tree__write_deps_file__V_261_261);
          }
#line 1930 "write_deps_file.m"
          {
#line 1930 "write_deps_file.m"
            parse_tree__write_deps_file__V_259_259 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__Else2_45, parse_tree__write_deps_file__V_260_260);
          }
#line 1930 "write_deps_file.m"
          {
#line 1930 "write_deps_file.m"
            parse_tree__write_deps_file__V_258_258 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__JavaLibRule_57, parse_tree__write_deps_file__V_259_259);
          }
#line 1930 "write_deps_file.m"
          {
#line 1930 "write_deps_file.m"
            parse_tree__write_deps_file__V_257_257 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__IfJava2_42, parse_tree__write_deps_file__V_258_258);
          }
#line 1929 "write_deps_file.m"
          {
#line 1929 "write_deps_file.m"
            parse_tree__write_deps_file__V_256_256 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__Else_44, parse_tree__write_deps_file__V_257_257);
          }
#line 1929 "write_deps_file.m"
          {
#line 1929 "write_deps_file.m"
            parse_tree__write_deps_file__V_255_255 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__ILLibRule_56, parse_tree__write_deps_file__V_256_256);
          }
#line 1929 "write_deps_file.m"
          {
#line 1929 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_59 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__IfIL_40, parse_tree__write_deps_file__V_255_255);
          }
#line 1928 "write_deps_file.m"
        }
#line 1932 "write_deps_file.m"
        break;
#line 1932 "write_deps_file.m"
    }
#line 1954 "write_deps_file.m"
    {
#line 1954 "write_deps_file.m"
      parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1954 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1954 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__LibRules_59));
#line 1954 "write_deps_file.m"
    }
#line 1954 "write_deps_file.m"
    {
#line 1954 "write_deps_file.m"
      parse_tree__write_deps_file__V_265_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1954 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1954 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 1954 "write_deps_file.m"
    }
#line 1954 "write_deps_file.m"
    {
#line 1954 "write_deps_file.m"
      parse_tree__write_deps_file__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1954 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 1954 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 1) = ((MR_Box) (parse_tree__write_deps_file__V_265_265));
#line 1954 "write_deps_file.m"
    }
#line 1953 "write_deps_file.m"
    {
#line 1953 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_262_262);
    }
#line 1966 "write_deps_file.m"
    {
#line 1966 "write_deps_file.m"
      parse_tree__write_deps_file__V_303_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1966 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_303_303, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLPicObjsString_39));
#line 1966 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_303_303, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[28])));
#line 1966 "write_deps_file.m"
    }
#line 1966 "write_deps_file.m"
    {
#line 1966 "write_deps_file.m"
      parse_tree__write_deps_file__V_301_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1966 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_301_301, 0) = ((MR_Box) ((MR_String) ".pic_os) "));
#line 1966 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_301_301, 1) = ((MR_Box) (parse_tree__write_deps_file__V_303_303));
#line 1966 "write_deps_file.m"
    }
#line 1966 "write_deps_file.m"
    {
#line 1966 "write_deps_file.m"
      parse_tree__write_deps_file__V_300_300 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1966 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_300_300, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1966 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_300_300, 1) = ((MR_Box) (parse_tree__write_deps_file__V_301_301));
#line 1966 "write_deps_file.m"
    }
#line 1966 "write_deps_file.m"
    {
#line 1966 "write_deps_file.m"
      parse_tree__write_deps_file__V_298_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1966 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_298_298, 0) = ((MR_Box) ((MR_String) "\t\t\044("));
#line 1966 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_298_298, 1) = ((MR_Box) (parse_tree__write_deps_file__V_300_300));
#line 1966 "write_deps_file.m"
    }
#line 1965 "write_deps_file.m"
    {
#line 1965 "write_deps_file.m"
      parse_tree__write_deps_file__V_296_296 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1965 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_296_296, 0) = ((MR_Box) ((MR_String) " \\\n"));
#line 1965 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_296_296, 1) = ((MR_Box) (parse_tree__write_deps_file__V_298_298));
#line 1965 "write_deps_file.m"
    }
#line 1965 "write_deps_file.m"
    {
#line 1965 "write_deps_file.m"
      parse_tree__write_deps_file__V_295_295 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1965 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_295_295, 0) = ((MR_Box) (*parse_tree__write_deps_file__SharedLibFileName_34));
#line 1965 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_295_295, 1) = ((MR_Box) (parse_tree__write_deps_file__V_296_296));
#line 1965 "write_deps_file.m"
    }
#line 1964 "write_deps_file.m"
    {
#line 1964 "write_deps_file.m"
      parse_tree__write_deps_file__V_293_293 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1964 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_293_293, 0) = ((MR_Box) ((MR_String) " \044(ALL_LD_LIBFLAGS) -o "));
#line 1964 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_293_293, 1) = ((MR_Box) (parse_tree__write_deps_file__V_295_295));
#line 1964 "write_deps_file.m"
    }
#line 1964 "write_deps_file.m"
    {
#line 1964 "write_deps_file.m"
      parse_tree__write_deps_file__V_292_292 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1964 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_292_292, 0) = ((MR_Box) (parse_tree__write_deps_file__InstallNameOpt_54));
#line 1964 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_292_292, 1) = ((MR_Box) (parse_tree__write_deps_file__V_293_293));
#line 1964 "write_deps_file.m"
    }
#line 1964 "write_deps_file.m"
    {
#line 1964 "write_deps_file.m"
      parse_tree__write_deps_file__V_290_290 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1964 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_290_290, 0) = ((MR_Box) ((MR_String) "-- "));
#line 1964 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_290_290, 1) = ((MR_Box) (parse_tree__write_deps_file__V_292_292));
#line 1964 "write_deps_file.m"
    }
#line 1963 "write_deps_file.m"
    {
#line 1963 "write_deps_file.m"
      parse_tree__write_deps_file__V_288_288 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1963 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_288_288, 0) = ((MR_Box) ((MR_String) "\t\044(ML) --make-shared-lib \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) "));
#line 1963 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_288_288, 1) = ((MR_Box) (parse_tree__write_deps_file__V_290_290));
#line 1963 "write_deps_file.m"
    }
#line 1962 "write_deps_file.m"
    {
#line 1962 "write_deps_file.m"
      parse_tree__write_deps_file__V_286_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1962 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_286_286, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1962 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_286_286, 1) = ((MR_Box) (parse_tree__write_deps_file__V_288_288));
#line 1962 "write_deps_file.m"
    }
#line 1962 "write_deps_file.m"
    {
#line 1962 "write_deps_file.m"
      parse_tree__write_deps_file__V_285_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1962 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLLibsDepString_37));
#line 1962 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 1) = ((MR_Box) (parse_tree__write_deps_file__V_286_286));
#line 1962 "write_deps_file.m"
    }
#line 1962 "write_deps_file.m"
    {
#line 1962 "write_deps_file.m"
      parse_tree__write_deps_file__V_283_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1962 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 0) = ((MR_Box) ((MR_String) " "));
#line 1962 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 1) = ((MR_Box) (parse_tree__write_deps_file__V_285_285));
#line 1962 "write_deps_file.m"
    }
#line 1962 "write_deps_file.m"
    {
#line 1962 "write_deps_file.m"
      parse_tree__write_deps_file__V_282_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1962 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_282_282, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLPicObjsString_39));
#line 1962 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_282_282, 1) = ((MR_Box) (parse_tree__write_deps_file__V_283_283));
#line 1962 "write_deps_file.m"
    }
#line 1961 "write_deps_file.m"
    {
#line 1961 "write_deps_file.m"
      parse_tree__write_deps_file__V_280_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1961 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_280_280, 0) = ((MR_Box) ((MR_String) ".pic_os) "));
#line 1961 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_280_280, 1) = ((MR_Box) (parse_tree__write_deps_file__V_282_282));
#line 1961 "write_deps_file.m"
    }
#line 1961 "write_deps_file.m"
    {
#line 1961 "write_deps_file.m"
      parse_tree__write_deps_file__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1961 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1961 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 1) = ((MR_Box) (parse_tree__write_deps_file__V_280_280));
#line 1961 "write_deps_file.m"
    }
#line 1961 "write_deps_file.m"
    {
#line 1961 "write_deps_file.m"
      parse_tree__write_deps_file__V_277_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1961 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_277_277, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1961 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_277_277, 1) = ((MR_Box) (parse_tree__write_deps_file__V_279_279));
#line 1961 "write_deps_file.m"
    }
#line 1960 "write_deps_file.m"
    {
#line 1960 "write_deps_file.m"
      parse_tree__write_deps_file__V_275_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1960 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
#line 1960 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 1) = ((MR_Box) (parse_tree__write_deps_file__V_277_277));
#line 1960 "write_deps_file.m"
    }
#line 1960 "write_deps_file.m"
    {
#line 1960 "write_deps_file.m"
      parse_tree__write_deps_file__V_274_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1960 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1960 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 1) = ((MR_Box) (parse_tree__write_deps_file__V_275_275));
#line 1960 "write_deps_file.m"
    }
#line 1960 "write_deps_file.m"
    {
#line 1960 "write_deps_file.m"
      parse_tree__write_deps_file__V_272_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1960 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1960 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 1) = ((MR_Box) (parse_tree__write_deps_file__V_274_274));
#line 1960 "write_deps_file.m"
    }
#line 1960 "write_deps_file.m"
    {
#line 1960 "write_deps_file.m"
      parse_tree__write_deps_file__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1960 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 0) = ((MR_Box) (*parse_tree__write_deps_file__SharedLibFileName_34));
#line 1960 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 1) = ((MR_Box) (parse_tree__write_deps_file__V_272_272));
#line 1960 "write_deps_file.m"
    }
#line 1959 "write_deps_file.m"
    {
#line 1959 "write_deps_file.m"
      parse_tree__write_deps_file__V_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 0) = ((MR_Box) ((MR_String) "ifneq (\044(EXT_FOR_SHARED_LIB),\044A)\n"));
#line 1959 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 1) = ((MR_Box) (parse_tree__write_deps_file__V_271_271));
#line 1959 "write_deps_file.m"
    }
#line 1958 "write_deps_file.m"
    {
#line 1958 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_268_268);
    }
#line 1977 "write_deps_file.m"
    {
#line 1977 "write_deps_file.m"
      parse_tree__write_deps_file__V_344_344 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1977 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_344_344, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1977 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_344_344, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 1977 "write_deps_file.m"
    }
#line 1977 "write_deps_file.m"
    {
#line 1977 "write_deps_file.m"
      parse_tree__write_deps_file__V_342_342 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1977 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_342_342, 0) = ((MR_Box) ((MR_String) "\t\044(RANLIB) \044(ALL_RANLIBFLAGS) "));
#line 1977 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_342_342, 1) = ((MR_Box) (parse_tree__write_deps_file__V_344_344));
#line 1977 "write_deps_file.m"
    }
#line 1976 "write_deps_file.m"
    {
#line 1976 "write_deps_file.m"
      parse_tree__write_deps_file__V_340_340 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1976 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_340_340, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1976 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_340_340, 1) = ((MR_Box) (parse_tree__write_deps_file__V_342_342));
#line 1976 "write_deps_file.m"
    }
#line 1976 "write_deps_file.m"
    {
#line 1976 "write_deps_file.m"
      parse_tree__write_deps_file__V_339_339 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1976 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_339_339, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1976 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_339_339, 1) = ((MR_Box) (parse_tree__write_deps_file__V_340_340));
#line 1976 "write_deps_file.m"
    }
#line 1976 "write_deps_file.m"
    {
#line 1976 "write_deps_file.m"
      parse_tree__write_deps_file__V_337_337 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1976 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_337_337, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1976 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_337_337, 1) = ((MR_Box) (parse_tree__write_deps_file__V_339_339));
#line 1976 "write_deps_file.m"
    }
#line 1976 "write_deps_file.m"
    {
#line 1976 "write_deps_file.m"
      parse_tree__write_deps_file__V_336_336 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1976 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_336_336, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1976 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_336_336, 1) = ((MR_Box) (parse_tree__write_deps_file__V_337_337));
#line 1976 "write_deps_file.m"
    }
#line 1976 "write_deps_file.m"
    {
#line 1976 "write_deps_file.m"
      parse_tree__write_deps_file__V_334_334 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1976 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_334_334, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1976 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_334_334, 1) = ((MR_Box) (parse_tree__write_deps_file__V_336_336));
#line 1976 "write_deps_file.m"
    }
#line 1975 "write_deps_file.m"
    {
#line 1975 "write_deps_file.m"
      parse_tree__write_deps_file__V_332_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1975 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_332_332, 0) = ((MR_Box) ((MR_String) " "));
#line 1975 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_332_332, 1) = ((MR_Box) (parse_tree__write_deps_file__V_334_334));
#line 1975 "write_deps_file.m"
    }
#line 1975 "write_deps_file.m"
    {
#line 1975 "write_deps_file.m"
      parse_tree__write_deps_file__V_331_331 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1975 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_331_331, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1975 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_331_331, 1) = ((MR_Box) (parse_tree__write_deps_file__V_332_332));
#line 1975 "write_deps_file.m"
    }
#line 1975 "write_deps_file.m"
    {
#line 1975 "write_deps_file.m"
      parse_tree__write_deps_file__V_329_329 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1975 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_329_329, 0) = ((MR_Box) ((MR_String) "\t\044(AR) \044(ALL_ARFLAGS) \044(AR_LIBFILE_OPT)"));
#line 1975 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_329_329, 1) = ((MR_Box) (parse_tree__write_deps_file__V_331_331));
#line 1975 "write_deps_file.m"
    }
#line 1974 "write_deps_file.m"
    {
#line 1974 "write_deps_file.m"
      parse_tree__write_deps_file__V_327_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1974 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_327_327, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1974 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_327_327, 1) = ((MR_Box) (parse_tree__write_deps_file__V_329_329));
#line 1974 "write_deps_file.m"
    }
#line 1974 "write_deps_file.m"
    {
#line 1974 "write_deps_file.m"
      parse_tree__write_deps_file__V_326_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1974 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_326_326, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1974 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_326_326, 1) = ((MR_Box) (parse_tree__write_deps_file__V_327_327));
#line 1974 "write_deps_file.m"
    }
#line 1974 "write_deps_file.m"
    {
#line 1974 "write_deps_file.m"
      parse_tree__write_deps_file__V_324_324 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1974 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_324_324, 0) = ((MR_Box) ((MR_String) "\trm -f "));
#line 1974 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_324_324, 1) = ((MR_Box) (parse_tree__write_deps_file__V_326_326));
#line 1974 "write_deps_file.m"
    }
#line 1973 "write_deps_file.m"
    {
#line 1973 "write_deps_file.m"
      parse_tree__write_deps_file__V_322_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1973 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_322_322, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1973 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_322_322, 1) = ((MR_Box) (parse_tree__write_deps_file__V_324_324));
#line 1973 "write_deps_file.m"
    }
#line 1973 "write_deps_file.m"
    {
#line 1973 "write_deps_file.m"
      parse_tree__write_deps_file__V_321_321 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1973 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_321_321, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1973 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_321_321, 1) = ((MR_Box) (parse_tree__write_deps_file__V_322_322));
#line 1973 "write_deps_file.m"
    }
#line 1973 "write_deps_file.m"
    {
#line 1973 "write_deps_file.m"
      parse_tree__write_deps_file__V_319_319 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1973 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_319_319, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1973 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_319_319, 1) = ((MR_Box) (parse_tree__write_deps_file__V_321_321));
#line 1973 "write_deps_file.m"
    }
#line 1973 "write_deps_file.m"
    {
#line 1973 "write_deps_file.m"
      parse_tree__write_deps_file__V_318_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1973 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_318_318, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1973 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_318_318, 1) = ((MR_Box) (parse_tree__write_deps_file__V_319_319));
#line 1973 "write_deps_file.m"
    }
#line 1973 "write_deps_file.m"
    {
#line 1973 "write_deps_file.m"
      parse_tree__write_deps_file__V_316_316 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1973 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_316_316, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1973 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_316_316, 1) = ((MR_Box) (parse_tree__write_deps_file__V_318_318));
#line 1973 "write_deps_file.m"
    }
#line 1972 "write_deps_file.m"
    {
#line 1972 "write_deps_file.m"
      parse_tree__write_deps_file__V_314_314 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1972 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_314_314, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
#line 1972 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_314_314, 1) = ((MR_Box) (parse_tree__write_deps_file__V_316_316));
#line 1972 "write_deps_file.m"
    }
#line 1972 "write_deps_file.m"
    {
#line 1972 "write_deps_file.m"
      parse_tree__write_deps_file__V_313_313 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1972 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_313_313, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1972 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_313_313, 1) = ((MR_Box) (parse_tree__write_deps_file__V_314_314));
#line 1972 "write_deps_file.m"
    }
#line 1972 "write_deps_file.m"
    {
#line 1972 "write_deps_file.m"
      parse_tree__write_deps_file__V_311_311 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1972 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_311_311, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1972 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_311_311, 1) = ((MR_Box) (parse_tree__write_deps_file__V_313_313));
#line 1972 "write_deps_file.m"
    }
#line 1972 "write_deps_file.m"
    {
#line 1972 "write_deps_file.m"
      parse_tree__write_deps_file__V_309_309 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1972 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_309_309, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1972 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_309_309, 1) = ((MR_Box) (parse_tree__write_deps_file__V_311_311));
#line 1972 "write_deps_file.m"
    }
#line 1971 "write_deps_file.m"
    {
#line 1971 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_309_309);
    }
#line 1980 "write_deps_file.m"
    {
#line 1980 "write_deps_file.m"
      parse_tree__write_deps_file__V_349_349 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".classes)");
    }
#line 1980 "write_deps_file.m"
    {
#line 1980 "write_deps_file.m"
      parse_tree__write_deps_file__ClassFiles_60 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_349_349);
    }
#line 1981 "write_deps_file.m"
    {
#line 1981 "write_deps_file.m"
      parse_tree__module_cmds__list_class_files_for_jar_mmake_3_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ClassFiles_60, &parse_tree__write_deps_file__ListClassFiles_61);
    }
#line 1985 "write_deps_file.m"
    {
#line 1985 "write_deps_file.m"
      parse_tree__write_deps_file__V_365_365 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1985 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_365_365, 0) = ((MR_Box) (parse_tree__write_deps_file__ListClassFiles_61));
#line 1985 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_365_365, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 1985 "write_deps_file.m"
    }
#line 1984 "write_deps_file.m"
    {
#line 1984 "write_deps_file.m"
      parse_tree__write_deps_file__V_363_363 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1984 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_363_363, 0) = ((MR_Box) ((MR_String) " "));
#line 1984 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_363_363, 1) = ((MR_Box) (parse_tree__write_deps_file__V_365_365));
#line 1984 "write_deps_file.m"
    }
#line 1984 "write_deps_file.m"
    {
#line 1984 "write_deps_file.m"
      parse_tree__write_deps_file__V_362_362 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1984 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_362_362, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
#line 1984 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_362_362, 1) = ((MR_Box) (parse_tree__write_deps_file__V_363_363));
#line 1984 "write_deps_file.m"
    }
#line 1984 "write_deps_file.m"
    {
#line 1984 "write_deps_file.m"
      parse_tree__write_deps_file__V_360_360 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1984 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_360_360, 0) = ((MR_Box) ((MR_String) "\t\044(JAR) \044(JAR_CREATE_FLAGS) "));
#line 1984 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_360_360, 1) = ((MR_Box) (parse_tree__write_deps_file__V_362_362));
#line 1984 "write_deps_file.m"
    }
#line 1983 "write_deps_file.m"
    {
#line 1983 "write_deps_file.m"
      parse_tree__write_deps_file__V_358_358 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1983 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_358_358, 0) = ((MR_Box) ((MR_String) ".classes)\n"));
#line 1983 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_358_358, 1) = ((MR_Box) (parse_tree__write_deps_file__V_360_360));
#line 1983 "write_deps_file.m"
    }
#line 1983 "write_deps_file.m"
    {
#line 1983 "write_deps_file.m"
      parse_tree__write_deps_file__V_357_357 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1983 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_357_357, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1983 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_357_357, 1) = ((MR_Box) (parse_tree__write_deps_file__V_358_358));
#line 1983 "write_deps_file.m"
    }
#line 1983 "write_deps_file.m"
    {
#line 1983 "write_deps_file.m"
      parse_tree__write_deps_file__V_355_355 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1983 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_355_355, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1983 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_355_355, 1) = ((MR_Box) (parse_tree__write_deps_file__V_357_357));
#line 1983 "write_deps_file.m"
    }
#line 1983 "write_deps_file.m"
    {
#line 1983 "write_deps_file.m"
      parse_tree__write_deps_file__V_353_353 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1983 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_353_353, 0) = ((MR_Box) ((MR_String) " : "));
#line 1983 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_353_353, 1) = ((MR_Box) (parse_tree__write_deps_file__V_355_355));
#line 1983 "write_deps_file.m"
    }
#line 1983 "write_deps_file.m"
    {
#line 1983 "write_deps_file.m"
      parse_tree__write_deps_file__V_351_351 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1983 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_351_351, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
#line 1983 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_351_351, 1) = ((MR_Box) (parse_tree__write_deps_file__V_353_353));
#line 1983 "write_deps_file.m"
    }
#line 1982 "write_deps_file.m"
    {
#line 1982 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_351_351);
#line 1982 "write_deps_file.m"
      return;
    }
#line 1763 "write_deps_file.m"
  }
#line 1754 "write_deps_file.m"
}

#line 1696 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_7_p_0(
#line 1696 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1696 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1696 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1696 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1696 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12)
#line 1696 "write_deps_file.m"
{
#line 1700 "write_deps_file.m"
  {
#line 1700 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1700 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleNameString_14;
#line 1700 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Version_15;
#line 1700 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Fullarch_16;
#line 1700 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MakeVarName_17;
#line 1700 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitFileName_18;
#line 1700 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitCFileName_19;
#line 1700 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitObjFileName_20;
#line 1700 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitPicObjFileName_21;
#line 1700 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Intermod_22;
#line 1700 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TransOpt_23;
#line 1700 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__MmcMakeDeps_24;
#line 1700 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeOptsVar_25;
#line 1700 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeTransOptsVar_26;
#line 1700 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_27;
#line 1700 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ExeFileName_28;
#line 1700 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__JarFileName_29;
#line 1700 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__LibFileName_30;
#line 1700 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SharedLibFileName_31;
#line 1700 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DepFileName_32;
#line 1700 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DvFileName_33;

#line 1701 "write_deps_file.m"
    {
#line 1701 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Automatically generated dependencies for module \140");
    }
#line 1703 "write_deps_file.m"
    {
#line 1703 "write_deps_file.m"
      parse_tree__write_deps_file__ModuleNameString_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_10);
    }
#line 1704 "write_deps_file.m"
    {
#line 1704 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleNameString_14);
    }
#line 1705 "write_deps_file.m"
    {
#line 1705 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1706 "write_deps_file.m"
    {
#line 1706 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# generated from source file \140");
    }
#line 1708 "write_deps_file.m"
    {
#line 1708 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__SourceFileName_9);
    }
#line 1709 "write_deps_file.m"
    {
#line 1709 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1711 "write_deps_file.m"
    {
#line 1711 "write_deps_file.m"
      mercury__library__version_2_p_0(&parse_tree__write_deps_file__Version_15, &parse_tree__write_deps_file__Fullarch_16);
    }
#line 1712 "write_deps_file.m"
    {
#line 1712 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Generated by the Mercury compiler, version ");
    }
#line 1714 "write_deps_file.m"
    {
#line 1714 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Version_15);
    }
#line 1715 "write_deps_file.m"
    {
#line 1715 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n# configured for ");
    }
#line 1716 "write_deps_file.m"
    {
#line 1716 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Fullarch_16);
    }
#line 1717 "write_deps_file.m"
    {
#line 1717 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".\n\n");
    }
#line 1719 "write_deps_file.m"
    {
#line 1719 "write_deps_file.m"
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__MakeVarName_17);
    }
#line 1721 "write_deps_file.m"
    {
#line 1721 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) ".init", (MR_Integer) 0, &parse_tree__write_deps_file__InitFileName_18);
    }
#line 1723 "write_deps_file.m"
    {
#line 1723 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.c", (MR_Integer) 0, &parse_tree__write_deps_file__InitCFileName_19);
    }
#line 1725 "write_deps_file.m"
    {
#line 1725 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.\044O", (MR_Integer) 0, &parse_tree__write_deps_file__InitObjFileName_20);
    }
#line 1727 "write_deps_file.m"
    {
#line 1727 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.pic_o", (MR_Integer) 0, &parse_tree__write_deps_file__InitPicObjFileName_21);
    }
#line 1730 "write_deps_file.m"
    {
#line 1730 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 329, &parse_tree__write_deps_file__Intermod_22);
    }
#line 1731 "write_deps_file.m"
    {
#line 1731 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 333, &parse_tree__write_deps_file__TransOpt_23);
    }
#line 1732 "write_deps_file.m"
    {
#line 1732 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 118, &parse_tree__write_deps_file__MmcMakeDeps_24);
    }
#line 1735 "write_deps_file.m"
    {
#line 1735 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__InitFileName_18, parse_tree__write_deps_file__InitObjFileName_20, parse_tree__write_deps_file__Intermod_22, parse_tree__write_deps_file__TransOpt_23, parse_tree__write_deps_file__MmcMakeDeps_24, &parse_tree__write_deps_file__MaybeOptsVar_25, &parse_tree__write_deps_file__MaybeTransOptsVar_26, &parse_tree__write_deps_file__MaybeModuleDepsVar_27, &parse_tree__write_deps_file__ExeFileName_28, &parse_tree__write_deps_file__JarFileName_29, &parse_tree__write_deps_file__LibFileName_30, &parse_tree__write_deps_file__SharedLibFileName_31);
    }
#line 1740 "write_deps_file.m"
    {
#line 1740 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__InitCFileName_19, parse_tree__write_deps_file__InitFileName_18, &parse_tree__write_deps_file__DepFileName_32, &parse_tree__write_deps_file__DvFileName_33);
    }
#line 1743 "write_deps_file.m"
    {
#line 1743 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__DepsMap_11, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__MmcMakeDeps_24, parse_tree__write_deps_file__Intermod_22, parse_tree__write_deps_file__TransOpt_23, parse_tree__write_deps_file__MaybeModuleDepsVar_27, parse_tree__write_deps_file__MaybeOptsVar_25, parse_tree__write_deps_file__MaybeTransOptsVar_26);
    }
#line 1746 "write_deps_file.m"
    {
#line 1746 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17);
    }
#line 1748 "write_deps_file.m"
    {
#line 1748 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__ExeFileName_28, parse_tree__write_deps_file__InitCFileName_19, parse_tree__write_deps_file__InitObjFileName_20, parse_tree__write_deps_file__InitPicObjFileName_21, parse_tree__write_deps_file__InitFileName_18, parse_tree__write_deps_file__LibFileName_30, parse_tree__write_deps_file__SharedLibFileName_31, parse_tree__write_deps_file__JarFileName_29, parse_tree__write_deps_file__DepFileName_32, parse_tree__write_deps_file__DvFileName_33);
#line 1748 "write_deps_file.m"
      return;
    }
#line 1700 "write_deps_file.m"
  }
#line 1696 "write_deps_file.m"
}

#line 1634 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__foreign_modules_2_f_0_1(
#line 1634 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1634 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1634 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 1634 "write_deps_file.m"
{
#line 1634 "write_deps_file.m"
  {
#line 1634 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1634 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1634 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_HeadVar__3_16;

#line 1634 "write_deps_file.m"
    {
#line 1634 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__foreign_modules__1634__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv0_HeadVar__3_16);
    }
#line 1634 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 1634 "write_deps_file.m"
      {
#line 1634 "write_deps_file.m"
        *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__3_16));
#line 1634 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 1634 "write_deps_file.m"
      }
#line 1634 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1634 "write_deps_file.m"
  }
#line 1634 "write_deps_file.m"
}

#line 1630 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__foreign_modules_2_f_0(
#line 1630 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_4,
#line 1630 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_5)
#line 1630 "write_deps_file.m"
{
#line 1633 "write_deps_file.m"
  {
#line 1633 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1633 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModules_6;
#line 1633 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__P_7;
#line 1633 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModulesList_14;

#line 1634 "write_deps_file.m"
    {
#line 1634 "write_deps_file.m"
      parse_tree__write_deps_file__P_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1634 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_7, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[4]));
#line 1634 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_7, 1) = ((MR_Box) (parse_tree__write_deps_file__foreign_modules_2_f_0_1));
#line 1634 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1634 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_7, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_5));
#line 1634 "write_deps_file.m"
    }
#line 1642 "write_deps_file.m"
    {
#line 1642 "write_deps_file.m"
      mercury__list__filter_map_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[3], parse_tree__write_deps_file__P_7, parse_tree__write_deps_file__Modules_4, &parse_tree__write_deps_file__ForeignModulesList_14);
    }
#line 1643 "write_deps_file.m"
    {
#line 1643 "write_deps_file.m"
      parse_tree__write_deps_file__ForeignModules_6 = mercury__list__condense_1_f_0((MR_Word) &parse_tree__write_deps_file_scalar_common_2[0], parse_tree__write_deps_file__ForeignModulesList_14);
    }
#line 1633 "write_deps_file.m"
    return parse_tree__write_deps_file__ForeignModules_6;
#line 1633 "write_deps_file.m"
  }
#line 1630 "write_deps_file.m"
}

#line 1610 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__select_ok_modules_3_p_0(
#line 1610 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1610 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_2,
#line 1610 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_3)
#line 1610 "write_deps_file.m"
{
#line 1613 "write_deps_file.m"
  {
#line 1613 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 1613 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1613 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1613 "write_deps_file.m"
    else
#line 1614 "write_deps_file.m"
      {
#line 1614 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_20_20;
#line 1614 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1614 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Modules0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1614 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ModulesTail_9;
#line 1614 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ModuleImports_11;
#line 1614 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Errors_14;
#line 1614 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__FatalErrors_15;
#line 1614 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_16_16;
#line 1614 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_17_17;
#line 1616 "write_deps_file.m"
        MR_Box parse_tree__write_deps_file__conv0_V_16_16;
#line 1616 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_10_10;
#line 1617 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file___Items_12;
#line 1617 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file___Specs_13;

#line 1615 "write_deps_file.m"
        {
#line 1615 "write_deps_file.m"
          parse_tree__write_deps_file__select_ok_modules_3_p_0(parse_tree__write_deps_file__Modules0_6, parse_tree__write_deps_file__DepsMap_2, &parse_tree__write_deps_file__ModulesTail_9);
        }
#line 1616 "write_deps_file.m"
        {
#line 1616 "write_deps_file.m"
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_2, ((MR_Box) (parse_tree__write_deps_file__Module_5)), &parse_tree__write_deps_file__conv0_V_16_16);
        }
#line 1616 "write_deps_file.m"
        parse_tree__write_deps_file__V_16_16 = ((MR_Word) parse_tree__write_deps_file__conv0_V_16_16);
#line 1616 "write_deps_file.m"
        parse_tree__write_deps_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_16_16, (MR_Integer) 0)));
#line 1616 "write_deps_file.m"
        parse_tree__write_deps_file__ModuleImports_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_16_16, (MR_Integer) 1)));
#line 1617 "write_deps_file.m"
        {
#line 1617 "write_deps_file.m"
          parse_tree__module_imports__module_and_imports_get_results_4_p_0(parse_tree__write_deps_file__ModuleImports_11, &parse_tree__write_deps_file___Items_12, &parse_tree__write_deps_file___Specs_13, &parse_tree__write_deps_file__Errors_14);
        }
#line 1618 "write_deps_file.m"
        {
#line 1618 "write_deps_file.m"
          parse_tree__write_deps_file__V_17_17 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 10680 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_20_20 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1618 "write_deps_file.m"
        {
#line 1618 "write_deps_file.m"
          mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_20_20, parse_tree__write_deps_file__Errors_14, parse_tree__write_deps_file__V_17_17, &parse_tree__write_deps_file__FatalErrors_15);
        }
#line 1619 "write_deps_file.m"
        {
#line 1619 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_20_20, parse_tree__write_deps_file__FatalErrors_15);
        }
#line 1621 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 1620 "write_deps_file.m"
          {
#line 1620 "write_deps_file.m"
            MR_Word base;
#line 1620 "write_deps_file.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1620 "write_deps_file.m"
            *parse_tree__write_deps_file__HeadVar__3_3 = base;
#line 1620 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Module_5));
#line 1620 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__ModulesTail_9));
#line 1620 "write_deps_file.m"
          }
#line 1621 "write_deps_file.m"
        else
#line 1622 "write_deps_file.m"
          *parse_tree__write_deps_file__HeadVar__3_3 = parse_tree__write_deps_file__ModulesTail_9;
#line 1614 "write_deps_file.m"
      }
#line 1613 "write_deps_file.m"
  }
#line 1610 "write_deps_file.m"
}

#line 1284 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_4(
#line 1284 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1284 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1284 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
#line 1284 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
#line 1284 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4)
#line 1284 "write_deps_file.m"
{
#line 1284 "write_deps_file.m"
  {
#line 1284 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1284 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__conv2_HeadVar__3_120;

#line 1284 "write_deps_file.m"
    {
#line 1284 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1284__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv2_HeadVar__3_120);
    }
#line 1284 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv2_HeadVar__3_120));
#line 1284 "write_deps_file.m"
  }
#line 1284 "write_deps_file.m"
}

#line 1235 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_3(
#line 1235 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1235 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 1235 "write_deps_file.m"
{
#line 1235 "write_deps_file.m"
  {
#line 1235 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1235 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 1235 "write_deps_file.m"
    {
#line 1235 "write_deps_file.m"
      return parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1235__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 1235 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1235 "write_deps_file.m"
  }
#line 1235 "write_deps_file.m"
}

#line 1216 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_2(
#line 1216 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1216 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1216 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 1216 "write_deps_file.m"
{
#line 1216 "write_deps_file.m"
  {
#line 1216 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1216 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__conv1_FileName_6;

#line 1216 "write_deps_file.m"
    {
#line 1216 "write_deps_file.m"
      parse_tree__write_deps_file__get_source_file_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv1_FileName_6);
    }
#line 1216 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_FileName_6));
#line 1216 "write_deps_file.m"
  }
#line 1216 "write_deps_file.m"
}

#line 1213 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_1(
#line 1213 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1213 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1213 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 1213 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 1213 "write_deps_file.m"
{
#line 1213 "write_deps_file.m"
  {
#line 1213 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1213 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_Result_6;

#line 1213 "write_deps_file.m"
    {
#line 1213 "write_deps_file.m"
      parse_tree__write_deps_file__compare_module_names_3_p_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_2), &parse_tree__write_deps_file__conv0_Result_6);
    }
#line 1213 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_3 = ((MR_Box) (parse_tree__write_deps_file__conv0_Result_6));
#line 1213 "write_deps_file.m"
  }
#line 1213 "write_deps_file.m"
}

#line 1189 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0(
#line 1189 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1189 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1189 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1189 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1189 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12)
#line 1189 "write_deps_file.m"
{
#line 1193 "write_deps_file.m"
  {
#line 1193 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_486_486;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_493_493;
#line 1193 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleNameString_14;
#line 1193 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Version_15;
#line 1193 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Fullarch_16;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules0_17;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules1_18;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules_19;
#line 1193 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MakeVarName_20;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SourceFiles0_21;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SourceFiles_22;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModulesWithSubModules_23;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Target_29;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModulesAndExts_30;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModules_31;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Gmake_32;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Basis_34;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignBasis_36;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ParentBasis_38;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ExtraLinkObjs_39;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__MakeFileName_40;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignFileNames_46;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__HighLevelCode_47;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_69_69;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_199_199;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_201_201;
#line 1193 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_203_203;
#line 1193 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_338_338;
#line 1289 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv3_STATE_VARIABLE_IO_125_125;

#line 1194 "write_deps_file.m"
    {
#line 1194 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Automatically generated dependency variables for module \140");
    }
#line 1196 "write_deps_file.m"
    {
#line 1196 "write_deps_file.m"
      parse_tree__write_deps_file__ModuleNameString_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_10);
    }
#line 1197 "write_deps_file.m"
    {
#line 1197 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleNameString_14);
    }
#line 1198 "write_deps_file.m"
    {
#line 1198 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1199 "write_deps_file.m"
    {
#line 1199 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# generated from source file \140");
    }
#line 1200 "write_deps_file.m"
    {
#line 1200 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__SourceFileName_9);
    }
#line 1201 "write_deps_file.m"
    {
#line 1201 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1203 "write_deps_file.m"
    {
#line 1203 "write_deps_file.m"
      mercury__library__version_2_p_0(&parse_tree__write_deps_file__Version_15, &parse_tree__write_deps_file__Fullarch_16);
    }
#line 1204 "write_deps_file.m"
    {
#line 1204 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Generated by the Mercury compiler, version ");
    }
#line 1206 "write_deps_file.m"
    {
#line 1206 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Version_15);
    }
#line 1207 "write_deps_file.m"
    {
#line 1207 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ",\n# configured for ");
    }
#line 1208 "write_deps_file.m"
    {
#line 1208 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Fullarch_16);
    }
#line 1209 "write_deps_file.m"
    {
#line 1209 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".\n\n");
    }
#line 10988 "parse_tree.write_deps_file.c"
    parse_tree__write_deps_file__TypeCtorInfo_486_486 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1211 "write_deps_file.m"
    {
#line 1211 "write_deps_file.m"
      mercury__map__keys_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_486_486, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__Modules0_17);
    }
#line 1212 "write_deps_file.m"
    {
#line 1212 "write_deps_file.m"
      parse_tree__write_deps_file__select_ok_modules_3_p_0(parse_tree__write_deps_file__Modules0_17, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__Modules1_18);
    }
#line 1213 "write_deps_file.m"
    {
#line 1213 "write_deps_file.m"
      mercury__list__sort_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_486_486, (MR_Word) &parse_tree__write_deps_file_scalar_common_2[6], parse_tree__write_deps_file__Modules1_18, &parse_tree__write_deps_file__Modules_19);
    }
#line 1215 "write_deps_file.m"
    {
#line 1215 "write_deps_file.m"
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1216 "write_deps_file.m"
    {
#line 1216 "write_deps_file.m"
      parse_tree__write_deps_file__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1216 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_69_69, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[3]));
#line 1216 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_69_69, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_2));
#line 1216 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1216 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_69_69, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_11));
#line 1216 "write_deps_file.m"
    }
#line 11024 "parse_tree.write_deps_file.c"
    parse_tree__write_deps_file__TypeCtorInfo_493_493 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1216 "write_deps_file.m"
    {
#line 1216 "write_deps_file.m"
      mercury__list__map_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_486_486, parse_tree__write_deps_file__TypeCtorInfo_493_493, parse_tree__write_deps_file__V_69_69, parse_tree__write_deps_file__Modules_19, &parse_tree__write_deps_file__SourceFiles0_21);
    }
#line 1217 "write_deps_file.m"
    {
#line 1217 "write_deps_file.m"
      mercury__list__sort_and_remove_dups_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_493_493, parse_tree__write_deps_file__SourceFiles0_21, &parse_tree__write_deps_file__SourceFiles_22);
    }
#line 1219 "write_deps_file.m"
    {
#line 1219 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1220 "write_deps_file.m"
    {
#line 1220 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ms =");
    }
#line 1221 "write_deps_file.m"
    {
#line 1221 "write_deps_file.m"
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__SourceFiles_22, (MR_String) ".m", parse_tree__write_deps_file__DepStream_12);
    }
#line 1222 "write_deps_file.m"
    {
#line 1222 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1224 "write_deps_file.m"
    {
#line 1224 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1225 "write_deps_file.m"
    {
#line 1225 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".errs =");
    }
#line 1226 "write_deps_file.m"
    {
#line 1226 "write_deps_file.m"
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__SourceFiles_22, (MR_String) ".err", parse_tree__write_deps_file__DepStream_12);
    }
#line 1227 "write_deps_file.m"
    {
#line 1227 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1229 "write_deps_file.m"
    {
#line 1229 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1230 "write_deps_file.m"
    {
#line 1230 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mods =");
    }
#line 1231 "write_deps_file.m"
    {
#line 1231 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "", parse_tree__write_deps_file__DepStream_12);
    }
#line 1232 "write_deps_file.m"
    {
#line 1232 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1235 "write_deps_file.m"
    {
#line 1235 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1235 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[2]));
#line 1235 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_3));
#line 1235 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1235 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_91_91, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_11));
#line 1235 "write_deps_file.m"
    }
#line 1235 "write_deps_file.m"
    {
#line 1235 "write_deps_file.m"
      parse_tree__write_deps_file__ModulesWithSubModules_23 = mercury__list__filter_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_486_486, parse_tree__write_deps_file__V_91_91, parse_tree__write_deps_file__Modules_19);
    }
#line 1240 "write_deps_file.m"
    {
#line 1240 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1241 "write_deps_file.m"
    {
#line 1241 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".parent_mods =");
    }
#line 1242 "write_deps_file.m"
    {
#line 1242 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModulesWithSubModules_23, (MR_String) "", parse_tree__write_deps_file__DepStream_12);
    }
#line 1244 "write_deps_file.m"
    {
#line 1244 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1246 "write_deps_file.m"
    {
#line 1246 "write_deps_file.m"
      libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_8, &parse_tree__write_deps_file__Target_29);
    }
#line 1250 "write_deps_file.m"
#line 1250 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Target_29) {
#line 1250 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1250 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1250 "write_deps_file.m"
      case (MR_Integer) 2:
#line 1250 "write_deps_file.m"
      case (MR_Integer) 4:
#line 1250 "write_deps_file.m"
      case (MR_Integer) 3:
#line 1256 "write_deps_file.m"
        parse_tree__write_deps_file__ForeignModulesAndExts_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1250 "write_deps_file.m"
        break;
#line 1250 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1249 "write_deps_file.m"
        {
#line 1249 "write_deps_file.m"
          parse_tree__write_deps_file__ForeignModulesAndExts_30 = parse_tree__write_deps_file__foreign_modules_2_f_0(parse_tree__write_deps_file__Modules_19, parse_tree__write_deps_file__DepsMap_11);
        }
#line 1250 "write_deps_file.m"
        break;
#line 1250 "write_deps_file.m"
    }
#line 1258 "write_deps_file.m"
    {
#line 1258 "write_deps_file.m"
      parse_tree__write_deps_file__ForeignModules_31 = mercury__assoc_list__keys_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_486_486, parse_tree__write_deps_file__TypeCtorInfo_493_493, parse_tree__write_deps_file__ForeignModulesAndExts_30);
    }
#line 1259 "write_deps_file.m"
    {
#line 1259 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1260 "write_deps_file.m"
    {
#line 1260 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign =");
    }
#line 1261 "write_deps_file.m"
    {
#line 1261 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ForeignModules_31, (MR_String) "", parse_tree__write_deps_file__DepStream_12);
    }
#line 1262 "write_deps_file.m"
    {
#line 1262 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n\n");
    }
#line 1264 "write_deps_file.m"
    {
#line 1264 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 119, &parse_tree__write_deps_file__Gmake_32);
    }
#line 1275 "write_deps_file.m"
#line 1275 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Gmake_32) {
#line 1275 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1275 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1276 "write_deps_file.m"
        {
#line 1277 "write_deps_file.m"
          parse_tree__write_deps_file__Basis_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1278 "write_deps_file.m"
          parse_tree__write_deps_file__ForeignBasis_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1279 "write_deps_file.m"
          parse_tree__write_deps_file__ParentBasis_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1276 "write_deps_file.m"
        }
#line 1275 "write_deps_file.m"
        break;
#line 1275 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1266 "write_deps_file.m"
        {
#line 1266 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__ModsVarName_33;
#line 1266 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__ForeignVarName_35;
#line 1266 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__ParentModsVarName_37;
#line 1266 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_111_111;
#line 1266 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_114_114;
#line 1266 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_117_117;

#line 1267 "write_deps_file.m"
          {
#line 1267 "write_deps_file.m"
            mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_20, (MR_String) ".mods", &parse_tree__write_deps_file__ModsVarName_33);
          }
#line 1268 "write_deps_file.m"
          {
#line 1268 "write_deps_file.m"
            parse_tree__write_deps_file__V_111_111 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1268 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_111_111, 0) = ((MR_Box) (parse_tree__write_deps_file__ModsVarName_33));
#line 1268 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_111_111, 1) = ((MR_Box) ((MR_String) ""));
#line 1268 "write_deps_file.m"
          }
#line 1268 "write_deps_file.m"
          {
#line 1268 "write_deps_file.m"
            parse_tree__write_deps_file__Basis_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1268 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Basis_34, 0) = ((MR_Box) (parse_tree__write_deps_file__V_111_111));
#line 1268 "write_deps_file.m"
          }
#line 1270 "write_deps_file.m"
          {
#line 1270 "write_deps_file.m"
            mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_20, (MR_String) ".foreign", &parse_tree__write_deps_file__ForeignVarName_35);
          }
#line 1271 "write_deps_file.m"
          {
#line 1271 "write_deps_file.m"
            parse_tree__write_deps_file__V_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1271 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_114_114, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignVarName_35));
#line 1271 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_114_114, 1) = ((MR_Box) ((MR_String) ""));
#line 1271 "write_deps_file.m"
          }
#line 1271 "write_deps_file.m"
          {
#line 1271 "write_deps_file.m"
            parse_tree__write_deps_file__ForeignBasis_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1271 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignBasis_36, 0) = ((MR_Box) (parse_tree__write_deps_file__V_114_114));
#line 1271 "write_deps_file.m"
          }
#line 1273 "write_deps_file.m"
          {
#line 1273 "write_deps_file.m"
            mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_20, (MR_String) ".parent_mods", &parse_tree__write_deps_file__ParentModsVarName_37);
          }
#line 1274 "write_deps_file.m"
          {
#line 1274 "write_deps_file.m"
            parse_tree__write_deps_file__V_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1274 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_117_117, 0) = ((MR_Box) (parse_tree__write_deps_file__ParentModsVarName_37));
#line 1274 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_117_117, 1) = ((MR_Box) ((MR_String) ""));
#line 1274 "write_deps_file.m"
          }
#line 1274 "write_deps_file.m"
          {
#line 1274 "write_deps_file.m"
            parse_tree__write_deps_file__ParentBasis_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1274 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ParentBasis_38, 0) = ((MR_Box) (parse_tree__write_deps_file__V_117_117));
#line 1274 "write_deps_file.m"
          }
#line 1266 "write_deps_file.m"
        }
#line 1275 "write_deps_file.m"
        break;
#line 1275 "write_deps_file.m"
    }
#line 1282 "write_deps_file.m"
    {
#line 1282 "write_deps_file.m"
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(parse_tree__write_deps_file__Modules_19, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__ExtraLinkObjs_39);
    }
#line 1284 "write_deps_file.m"
    {
#line 1284 "write_deps_file.m"
      parse_tree__write_deps_file__MakeFileName_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1284 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_40, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_10[1]));
#line 1284 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_40, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_4));
#line 1284 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1284 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_40, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_8));
#line 1284 "write_deps_file.m"
    }
#line 1289 "write_deps_file.m"
    {
#line 1289 "write_deps_file.m"
      mercury__list__map_foldl_5_p_2((MR_Word) &parse_tree__write_deps_file_scalar_common_2[0], parse_tree__write_deps_file__TypeCtorInfo_493_493, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__MakeFileName_40, parse_tree__write_deps_file__ForeignModulesAndExts_30, &parse_tree__write_deps_file__ForeignFileNames_46, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv3_STATE_VARIABLE_IO_125_125);
    }
#line 1293 "write_deps_file.m"
    {
#line 1293 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1294 "write_deps_file.m"
    {
#line 1294 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign_cs = ");
    }
#line 1295 "write_deps_file.m"
    {
#line 1295 "write_deps_file.m"
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__ForeignFileNames_46, (MR_String) "", parse_tree__write_deps_file__DepStream_12);
    }
#line 1296 "write_deps_file.m"
    {
#line 1296 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1299 "write_deps_file.m"
    {
#line 1299 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1300 "write_deps_file.m"
    {
#line 1300 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign_dlls = ");
    }
#line 1301 "write_deps_file.m"
    {
#line 1301 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ForeignModules_31, (MR_String) "\044(dlls_subdir)", (MR_String) ".dll", parse_tree__write_deps_file__ForeignBasis_36, parse_tree__write_deps_file__DepStream_12);
    }
#line 1303 "write_deps_file.m"
    {
#line 1303 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1305 "write_deps_file.m"
    {
#line 1305 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1306 "write_deps_file.m"
    {
#line 1306 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".init_cs = ");
    }
#line 1307 "write_deps_file.m"
    {
#line 1307 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(cs_subdir)", (MR_String) ".c", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1309 "write_deps_file.m"
    {
#line 1309 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1311 "write_deps_file.m"
    {
#line 1311 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1312 "write_deps_file.m"
    {
#line 1312 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".cs = \044(");
    }
#line 1313 "write_deps_file.m"
    {
#line 1313 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1314 "write_deps_file.m"
    {
#line 1314 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".init_cs) ");
    }
#line 1315 "write_deps_file.m"
    {
#line 1315 "write_deps_file.m"
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ExtraLinkObjs_39, (MR_String) ".c", parse_tree__write_deps_file__DepStream_12);
    }
#line 1317 "write_deps_file.m"
    {
#line 1317 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1319 "write_deps_file.m"
    {
#line 1319 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1320 "write_deps_file.m"
    {
#line 1320 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dlls = ");
    }
#line 1321 "write_deps_file.m"
    {
#line 1321 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(dlls_subdir)", (MR_String) ".dll", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1323 "write_deps_file.m"
    {
#line 1323 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1325 "write_deps_file.m"
    {
#line 1325 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1326 "write_deps_file.m"
    {
#line 1326 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_os = ");
    }
#line 1327 "write_deps_file.m"
    {
#line 1327 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(os_subdir)", (MR_String) ".\044O", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1329 "write_deps_file.m"
    {
#line 1329 "write_deps_file.m"
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ExtraLinkObjs_39, (MR_String) ".\044O", parse_tree__write_deps_file__DepStream_12);
    }
#line 1331 "write_deps_file.m"
    {
#line 1331 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1333 "write_deps_file.m"
    {
#line 1333 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1334 "write_deps_file.m"
    {
#line 1334 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_pic_os = ");
    }
#line 1335 "write_deps_file.m"
    {
#line 1335 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(os_subdir)", (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1337 "write_deps_file.m"
    {
#line 1337 "write_deps_file.m"
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ExtraLinkObjs_39, (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)", parse_tree__write_deps_file__DepStream_12);
    }
#line 1339 "write_deps_file.m"
    {
#line 1339 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1341 "write_deps_file.m"
    {
#line 1341 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1342 "write_deps_file.m"
    {
#line 1342 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".os = \044(");
    }
#line 1343 "write_deps_file.m"
    {
#line 1343 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1344 "write_deps_file.m"
    {
#line 1344 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_os)\n");
    }
#line 1346 "write_deps_file.m"
    {
#line 1346 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1347 "write_deps_file.m"
    {
#line 1347 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".pic_os = \044(");
    }
#line 1348 "write_deps_file.m"
    {
#line 1348 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1349 "write_deps_file.m"
    {
#line 1349 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_pic_os)\n");
    }
#line 1360 "write_deps_file.m"
    {
#line 1360 "write_deps_file.m"
      parse_tree__write_deps_file__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1360 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_203_203, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 1360 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_203_203, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[110])));
#line 1360 "write_deps_file.m"
    }
#line 1360 "write_deps_file.m"
    {
#line 1360 "write_deps_file.m"
      parse_tree__write_deps_file__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1360 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 0) = ((MR_Box) ((MR_String) ".cs_or_ss =\044("));
#line 1360 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 1) = ((MR_Box) (parse_tree__write_deps_file__V_203_203));
#line 1360 "write_deps_file.m"
    }
#line 1360 "write_deps_file.m"
    {
#line 1360 "write_deps_file.m"
      parse_tree__write_deps_file__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1360 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 1360 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 1) = ((MR_Box) (parse_tree__write_deps_file__V_201_201));
#line 1360 "write_deps_file.m"
    }
#line 1359 "write_deps_file.m"
    {
#line 1359 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_199_199);
    }
#line 1363 "write_deps_file.m"
    {
#line 1363 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1364 "write_deps_file.m"
    {
#line 1364 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".useds = ");
    }
#line 1365 "write_deps_file.m"
    {
#line 1365 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(useds_subdir)", (MR_String) ".used", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1367 "write_deps_file.m"
    {
#line 1367 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1369 "write_deps_file.m"
    {
#line 1369 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1370 "write_deps_file.m"
    {
#line 1370 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ils = ");
    }
#line 1371 "write_deps_file.m"
    {
#line 1371 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(ils_subdir)", (MR_String) ".il", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1373 "write_deps_file.m"
    {
#line 1373 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1375 "write_deps_file.m"
    {
#line 1375 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1376 "write_deps_file.m"
    {
#line 1376 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".javas = ");
    }
#line 1377 "write_deps_file.m"
    {
#line 1377 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(javas_subdir)", (MR_String) ".java", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1379 "write_deps_file.m"
    {
#line 1379 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1381 "write_deps_file.m"
    {
#line 1381 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1382 "write_deps_file.m"
    {
#line 1382 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".classes = ");
    }
#line 1383 "write_deps_file.m"
    {
#line 1383 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(classes_subdir)", (MR_String) ".class", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1385 "write_deps_file.m"
    {
#line 1385 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) " ");
    }
#line 1393 "write_deps_file.m"
    {
#line 1393 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(wildcard ");
    }
#line 1394 "write_deps_file.m"
    {
#line 1394 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(classes_subdir)", (MR_String) "\\\044\044*.class", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1396 "write_deps_file.m"
    {
#line 1396 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ")\n");
    }
#line 1398 "write_deps_file.m"
    {
#line 1398 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1399 "write_deps_file.m"
    {
#line 1399 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dirs = ");
    }
#line 1400 "write_deps_file.m"
    {
#line 1400 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(dirs_subdir)", (MR_String) ".dir", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1402 "write_deps_file.m"
    {
#line 1402 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1404 "write_deps_file.m"
    {
#line 1404 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1405 "write_deps_file.m"
    {
#line 1405 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dir_os = ");
    }
#line 1406 "write_deps_file.m"
    {
#line 1406 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(dirs_subdir)", (MR_String) ".dir/*.\044O", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dates = ");
    }
#line 1412 "write_deps_file.m"
    {
#line 1412 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(dates_subdir)", (MR_String) ".date", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1414 "write_deps_file.m"
    {
#line 1414 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1416 "write_deps_file.m"
    {
#line 1416 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1417 "write_deps_file.m"
    {
#line 1417 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".date0s = ");
    }
#line 1418 "write_deps_file.m"
    {
#line 1418 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(date0s_subdir)", (MR_String) ".date0", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1420 "write_deps_file.m"
    {
#line 1420 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1422 "write_deps_file.m"
    {
#line 1422 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1423 "write_deps_file.m"
    {
#line 1423 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".date3s = ");
    }
#line 1424 "write_deps_file.m"
    {
#line 1424 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(date3s_subdir)", (MR_String) ".date3", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1426 "write_deps_file.m"
    {
#line 1426 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1428 "write_deps_file.m"
    {
#line 1428 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1429 "write_deps_file.m"
    {
#line 1429 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".optdates = ");
    }
#line 1430 "write_deps_file.m"
    {
#line 1430 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(optdates_subdir)", (MR_String) ".optdate", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1432 "write_deps_file.m"
    {
#line 1432 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1434 "write_deps_file.m"
    {
#line 1434 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1435 "write_deps_file.m"
    {
#line 1435 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".trans_opt_dates = ");
    }
#line 1436 "write_deps_file.m"
    {
#line 1436 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(trans_opt_dates_subdir)", (MR_String) ".trans_opt_date", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1438 "write_deps_file.m"
    {
#line 1438 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1440 "write_deps_file.m"
    {
#line 1440 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1441 "write_deps_file.m"
    {
#line 1441 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".c_dates = ");
    }
#line 1442 "write_deps_file.m"
    {
#line 1442 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(c_dates_subdir)", (MR_String) ".c_date", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".il_dates = ");
    }
#line 1448 "write_deps_file.m"
    {
#line 1448 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(il_dates_subdir)", (MR_String) ".il_date", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".java_dates = ");
    }
#line 1454 "write_deps_file.m"
    {
#line 1454 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(java_dates_subdir)", (MR_String) ".java_date", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ds = ");
    }
#line 1460 "write_deps_file.m"
    {
#line 1460 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(ds_subdir)", (MR_String) ".d", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1462 "write_deps_file.m"
    {
#line 1462 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1464 "write_deps_file.m"
    {
#line 1464 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1465 "write_deps_file.m"
    {
#line 1465 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".module_deps = ");
    }
#line 1467 "write_deps_file.m"
    {
#line 1467 "write_deps_file.m"
      parse_tree__write_deps_file__V_338_338 = make__make_module_dep_file_extension_0_f_0();
    }
#line 1466 "write_deps_file.m"
    {
#line 1466 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(module_deps_subdir)", parse_tree__write_deps_file__V_338_338, parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1469 "write_deps_file.m"
    {
#line 1469 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1471 "write_deps_file.m"
    {
#line 1471 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1472 "write_deps_file.m"
    {
#line 1472 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mihs = ");
    }
#line 1473 "write_deps_file.m"
    {
#line 1473 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 255, &parse_tree__write_deps_file__HighLevelCode_47);
    }
#line 1491 "write_deps_file.m"
#line 1491 "write_deps_file.m"
    switch (parse_tree__write_deps_file__HighLevelCode_47) {
#line 1491 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1491 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1493 "write_deps_file.m"
        {
#line 1493 "write_deps_file.m"
        }
#line 1491 "write_deps_file.m"
        break;
#line 1491 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1482 "write_deps_file.m"
#line 1482 "write_deps_file.m"
        switch (parse_tree__write_deps_file__Target_29) {
#line 1482 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1482 "write_deps_file.m"
          case (MR_Integer) 0:
#line 1477 "write_deps_file.m"
            {
#line 1480 "write_deps_file.m"
              {
#line 1480 "write_deps_file.m"
                parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(mihs_subdir)", (MR_String) ".mih", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
              }
#line 1477 "write_deps_file.m"
            }
#line 1482 "write_deps_file.m"
            break;
#line 1482 "write_deps_file.m"
          case (MR_Integer) 2:
#line 1486 "write_deps_file.m"
            {
#line 1486 "write_deps_file.m"
            }
#line 1482 "write_deps_file.m"
            break;
#line 1482 "write_deps_file.m"
          case (MR_Integer) 4:
#line 1488 "write_deps_file.m"
            {
#line 1488 "write_deps_file.m"
            }
#line 1482 "write_deps_file.m"
            break;
#line 1482 "write_deps_file.m"
          case (MR_Integer) 1:
#line 1485 "write_deps_file.m"
            {
#line 1485 "write_deps_file.m"
            }
#line 1482 "write_deps_file.m"
            break;
#line 1482 "write_deps_file.m"
          case (MR_Integer) 3:
#line 1487 "write_deps_file.m"
            {
#line 1487 "write_deps_file.m"
            }
#line 1482 "write_deps_file.m"
            break;
#line 1482 "write_deps_file.m"
        }
#line 1491 "write_deps_file.m"
        break;
#line 1491 "write_deps_file.m"
    }
#line 1495 "write_deps_file.m"
    {
#line 1495 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1497 "write_deps_file.m"
    {
#line 1497 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1498 "write_deps_file.m"
    {
#line 1498 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mhs = ");
    }
#line 1503 "write_deps_file.m"
#line 1503 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Target_29) {
#line 1503 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1503 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1500 "write_deps_file.m"
        {
#line 1501 "write_deps_file.m"
          {
#line 1501 "write_deps_file.m"
            parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "", (MR_String) ".mh", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
          }
#line 1500 "write_deps_file.m"
        }
#line 1503 "write_deps_file.m"
        break;
#line 1503 "write_deps_file.m"
      case (MR_Integer) 2:
#line 1505 "write_deps_file.m"
        {
#line 1505 "write_deps_file.m"
        }
#line 1503 "write_deps_file.m"
        break;
#line 1503 "write_deps_file.m"
      case (MR_Integer) 4:
#line 1507 "write_deps_file.m"
        {
#line 1507 "write_deps_file.m"
        }
#line 1503 "write_deps_file.m"
        break;
#line 1503 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1504 "write_deps_file.m"
        {
#line 1504 "write_deps_file.m"
        }
#line 1503 "write_deps_file.m"
        break;
#line 1503 "write_deps_file.m"
      case (MR_Integer) 3:
#line 1506 "write_deps_file.m"
        {
#line 1506 "write_deps_file.m"
        }
#line 1503 "write_deps_file.m"
        break;
#line 1503 "write_deps_file.m"
    }
#line 1510 "write_deps_file.m"
    {
#line 1510 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1518 "write_deps_file.m"
    {
#line 1518 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1519 "write_deps_file.m"
    {
#line 1519 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_mihs = ");
    }
#line 1520 "write_deps_file.m"
    {
#line 1520 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(mihs_subdir)", (MR_String) ".mih", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1522 "write_deps_file.m"
    {
#line 1522 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1527 "write_deps_file.m"
    {
#line 1527 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1528 "write_deps_file.m"
    {
#line 1528 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_mhs = ");
    }
#line 1529 "write_deps_file.m"
    {
#line 1529 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "", (MR_String) ".mh", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1531 "write_deps_file.m"
    {
#line 1531 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1533 "write_deps_file.m"
    {
#line 1533 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1534 "write_deps_file.m"
    {
#line 1534 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ints = ");
    }
#line 1535 "write_deps_file.m"
    {
#line 1535 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(ints_subdir)", (MR_String) ".int", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1537 "write_deps_file.m"
    {
#line 1537 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1538 "write_deps_file.m"
    {
#line 1538 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(int2s_subdir)", (MR_String) ".int2", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1540 "write_deps_file.m"
    {
#line 1540 "write_deps_file.m"
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".int0s = ");
    }
#line 1549 "write_deps_file.m"
    {
#line 1549 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModulesWithSubModules_23, (MR_String) "\044(int0s_subdir)", (MR_String) ".int0", parse_tree__write_deps_file__ParentBasis_38, parse_tree__write_deps_file__DepStream_12);
    }
#line 1551 "write_deps_file.m"
    {
#line 1551 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1560 "write_deps_file.m"
    {
#line 1560 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1561 "write_deps_file.m"
    {
#line 1561 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_int0s = ");
    }
#line 1562 "write_deps_file.m"
    {
#line 1562 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(int0s_subdir)", (MR_String) ".int0", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1564 "write_deps_file.m"
    {
#line 1564 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1566 "write_deps_file.m"
    {
#line 1566 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1567 "write_deps_file.m"
    {
#line 1567 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".int3s = ");
    }
#line 1568 "write_deps_file.m"
    {
#line 1568 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(int3s_subdir)", (MR_String) ".int3", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1570 "write_deps_file.m"
    {
#line 1570 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1572 "write_deps_file.m"
    {
#line 1572 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1573 "write_deps_file.m"
    {
#line 1573 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".opts = ");
    }
#line 1574 "write_deps_file.m"
    {
#line 1574 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(opts_subdir)", (MR_String) ".opt", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1576 "write_deps_file.m"
    {
#line 1576 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1578 "write_deps_file.m"
    {
#line 1578 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1579 "write_deps_file.m"
    {
#line 1579 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".trans_opts = ");
    }
#line 1580 "write_deps_file.m"
    {
#line 1580 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(trans_opts_subdir)", (MR_String) ".trans_opt", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1582 "write_deps_file.m"
    {
#line 1582 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1584 "write_deps_file.m"
    {
#line 1584 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1585 "write_deps_file.m"
    {
#line 1585 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".analysiss = ");
    }
#line 1586 "write_deps_file.m"
    {
#line 1586 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(analysiss_subdir)", (MR_String) ".analysis", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1588 "write_deps_file.m"
    {
#line 1588 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1590 "write_deps_file.m"
    {
#line 1590 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1591 "write_deps_file.m"
    {
#line 1591 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".requests = ");
    }
#line 1592 "write_deps_file.m"
    {
#line 1592 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(requests_subdir)", (MR_String) ".request", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1594 "write_deps_file.m"
    {
#line 1594 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1596 "write_deps_file.m"
    {
#line 1596 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1597 "write_deps_file.m"
    {
#line 1597 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".imdgs = ");
    }
#line 1598 "write_deps_file.m"
    {
#line 1598 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "\044(imdgs_subdir)", (MR_String) ".imdg", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1600 "write_deps_file.m"
    {
#line 1600 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1602 "write_deps_file.m"
    {
#line 1602 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1603 "write_deps_file.m"
    {
#line 1603 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".profs = ");
    }
#line 1604 "write_deps_file.m"
    {
#line 1604 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__Modules_19, (MR_String) "", (MR_String) ".prof", parse_tree__write_deps_file__Basis_34, parse_tree__write_deps_file__DepStream_12);
    }
#line 1606 "write_deps_file.m"
    {
#line 1606 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n\n");
#line 1606 "write_deps_file.m"
      return;
    }
#line 1193 "write_deps_file.m"
  }
#line 1189 "write_deps_file.m"
}

#line 1032 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(
#line 1032 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 1032 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 1032 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 1032 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Ext_10)
#line 1032 "write_deps_file.m"
{
#line 1035 "write_deps_file.m"
  {
#line 1035 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1035 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleStr_12;
#line 1035 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Target_13;
#line 1035 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ShorthandTarget_14;

#line 1036 "write_deps_file.m"
    {
#line 1036 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__write_deps_file__ModuleName_9, &parse_tree__write_deps_file__ModuleStr_12);
    }
#line 1037 "write_deps_file.m"
    {
#line 1037 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__Ext_10, (MR_Integer) 1, &parse_tree__write_deps_file__Target_13);
    }
#line 1039 "write_deps_file.m"
    {
#line 1039 "write_deps_file.m"
      parse_tree__write_deps_file__ShorthandTarget_14 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleStr_12, parse_tree__write_deps_file__Ext_10);
    }
#line 1040 "write_deps_file.m"
    {
#line 1040 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) ".PHONY: ");
    }
#line 1041 "write_deps_file.m"
    {
#line 1041 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__ShorthandTarget_14);
    }
#line 1042 "write_deps_file.m"
    {
#line 1042 "write_deps_file.m"
      mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_8);
    }
#line 1043 "write_deps_file.m"
    {
#line 1043 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__ShorthandTarget_14);
    }
#line 1044 "write_deps_file.m"
    {
#line 1044 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) ": ");
    }
#line 1045 "write_deps_file.m"
    {
#line 1045 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Target_13);
    }
#line 1046 "write_deps_file.m"
    {
#line 1046 "write_deps_file.m"
      mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_8);
#line 1046 "write_deps_file.m"
      return;
    }
#line 1035 "write_deps_file.m"
  }
#line 1032 "write_deps_file.m"
}

#line 1008 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0_1(
#line 1008 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1008 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 1008 "write_deps_file.m"
{
#line 1008 "write_deps_file.m"
  {
#line 1008 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 1008 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1008 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_HeadVar__3_64;

#line 1008 "write_deps_file.m"
    {
#line 1008 "write_deps_file.m"
      parse_tree__write_deps_file__conv0_HeadVar__3_64 = parse_tree__write_deps_file__IntroducedFrom__func__write_foreign_dependency_for_il__1009__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 1008 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__3_64));
#line 1008 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 1008 "write_deps_file.m"
  }
#line 1008 "write_deps_file.m"
}

#line 964 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0(
#line 964 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 964 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_10,
#line 964 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_11,
#line 964 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__AllDeps_12,
#line 964 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImports_13,
#line 964 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignLang_14)
#line 964 "write_deps_file.m"
{
#line 1023 "write_deps_file.m"
  {
#line 1023 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1023 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModuleName_16;
#line 1023 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ForeignExt_17;

#line 971 "write_deps_file.m"
    {
#line 971 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__prog_foreign__foreign_language_module_name_2_f_0(parse_tree__write_deps_file__ModuleName_11, parse_tree__write_deps_file__ForeignLang_14, &parse_tree__write_deps_file__ForeignModuleName_16);
    }
#line 972 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 973 "write_deps_file.m"
      {
#line 973 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = parse_tree__prog_foreign__foreign_language_file_extension_1_f_0(parse_tree__write_deps_file__ForeignLang_14, &parse_tree__write_deps_file__ForeignExt_17);
      }
#line 1023 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 976 "write_deps_file.m"
      {
#line 976 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ForeignModuleNameString_18;
#line 976 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ForeignFileName_19;
#line 976 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IlFileName_20;
#line 976 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DllFileName_21;
#line 976 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ForeignDllFileName_22;
#line 976 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_40_40;
#line 976 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_42_42;
#line 976 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_44_44;
#line 976 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_47_47;
#line 976 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_49_49;
#line 976 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_51_51;

#line 975 "write_deps_file.m"
        {
#line 975 "write_deps_file.m"
          parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ForeignModuleName_16, &parse_tree__write_deps_file__ForeignModuleNameString_18);
        }
#line 977 "write_deps_file.m"
        {
#line 977 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ForeignModuleName_16, parse_tree__write_deps_file__ForeignExt_17, (MR_Integer) 1, &parse_tree__write_deps_file__ForeignFileName_19);
        }
#line 979 "write_deps_file.m"
        {
#line 979 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ModuleName_11, (MR_String) ".il", (MR_Integer) 1, &parse_tree__write_deps_file__IlFileName_20);
        }
#line 981 "write_deps_file.m"
        {
#line 981 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ModuleName_11, (MR_String) ".dll", (MR_Integer) 1, &parse_tree__write_deps_file__DllFileName_21);
        }
#line 983 "write_deps_file.m"
        {
#line 983 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ForeignModuleName_16, (MR_String) ".dll", (MR_Integer) 1, &parse_tree__write_deps_file__ForeignDllFileName_22);
        }
#line 987 "write_deps_file.m"
        {
#line 987 "write_deps_file.m"
          parse_tree__write_deps_file__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 987 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_44_44, 0) = ((MR_Box) (parse_tree__write_deps_file__DllFileName_21));
#line 987 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 987 "write_deps_file.m"
        }
#line 987 "write_deps_file.m"
        {
#line 987 "write_deps_file.m"
          parse_tree__write_deps_file__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 987 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 0) = ((MR_Box) ((MR_String) " : "));
#line 987 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 1) = ((MR_Box) (parse_tree__write_deps_file__V_44_44));
#line 987 "write_deps_file.m"
        }
#line 987 "write_deps_file.m"
        {
#line 987 "write_deps_file.m"
          parse_tree__write_deps_file__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 987 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_40_40, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignDllFileName_22));
#line 987 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_40_40, 1) = ((MR_Box) (parse_tree__write_deps_file__V_42_42));
#line 987 "write_deps_file.m"
        }
#line 986 "write_deps_file.m"
        {
#line 986 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__V_40_40);
        }
#line 991 "write_deps_file.m"
        {
#line 991 "write_deps_file.m"
          mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_10);
        }
#line 994 "write_deps_file.m"
        {
#line 994 "write_deps_file.m"
          parse_tree__write_deps_file__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 994 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_51_51, 0) = ((MR_Box) (parse_tree__write_deps_file__IlFileName_20));
#line 994 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[108])));
#line 994 "write_deps_file.m"
        }
#line 994 "write_deps_file.m"
        {
#line 994 "write_deps_file.m"
          parse_tree__write_deps_file__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 994 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 0) = ((MR_Box) ((MR_String) " : "));
#line 994 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 1) = ((MR_Box) (parse_tree__write_deps_file__V_51_51));
#line 994 "write_deps_file.m"
        }
#line 994 "write_deps_file.m"
        {
#line 994 "write_deps_file.m"
          parse_tree__write_deps_file__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 994 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignFileName_19));
#line 994 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 1) = ((MR_Box) (parse_tree__write_deps_file__V_49_49));
#line 994 "write_deps_file.m"
        }
#line 993 "write_deps_file.m"
        {
#line 993 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__V_47_47);
        }
#line 1016 "write_deps_file.m"
#line 1016 "write_deps_file.m"
        switch (parse_tree__write_deps_file__ForeignLang_14) {
#line 1016 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1016 "write_deps_file.m"
          case (MR_Integer) 0:
#line 1017 "write_deps_file.m"
            {
#line 1017 "write_deps_file.m"
            }
#line 1016 "write_deps_file.m"
            break;
#line 1016 "write_deps_file.m"
          case (MR_Integer) 1:
#line 997 "write_deps_file.m"
            {
#line 997 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__TypeCtorInfo_70_70;
#line 997 "write_deps_file.m"
              MR_String parse_tree__write_deps_file__Prefix_23;
#line 997 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__ForeignDeps_24;
#line 997 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__Deps_26;
#line 997 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_55_55;
#line 997 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_58_58;
#line 997 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_62_62;
#line 997 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_65_65;

#line 1002 "write_deps_file.m"
              {
#line 1002 "write_deps_file.m"
                parse_tree__write_deps_file__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignModuleNameString_18));
#line 1002 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[109])));
#line 1002 "write_deps_file.m"
              }
#line 1002 "write_deps_file.m"
              {
#line 1002 "write_deps_file.m"
                parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) "CSHARP_ASSEMBLY_REFS-"));
#line 1002 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_58_58));
#line 1002 "write_deps_file.m"
              }
#line 1001 "write_deps_file.m"
              {
#line 1001 "write_deps_file.m"
                mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__V_55_55);
              }
#line 1003 "write_deps_file.m"
              {
#line 1003 "write_deps_file.m"
                parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__ModuleName_11);
              }
#line 1005 "write_deps_file.m"
              if (parse_tree__write_deps_file__succeeded)
#line 1004 "write_deps_file.m"
                parse_tree__write_deps_file__Prefix_23 = (MR_String) "/addmodule:";
#line 1005 "write_deps_file.m"
              else
#line 1006 "write_deps_file.m"
                parse_tree__write_deps_file__Prefix_23 = (MR_String) "/r:";
#line 12673 "parse_tree.write_deps_file.c"
              parse_tree__write_deps_file__TypeCtorInfo_70_70 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1008 "write_deps_file.m"
              {
#line 1008 "write_deps_file.m"
                parse_tree__write_deps_file__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1008 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_62_62, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0]));
#line 1008 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_62_62, 1) = ((MR_Box) (parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0_1));
#line 1008 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_62_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1008 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_62_62, 3) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_11));
#line 1008 "write_deps_file.m"
              }
#line 1008 "write_deps_file.m"
              {
#line 1008 "write_deps_file.m"
                parse_tree__write_deps_file__ForeignDeps_24 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, parse_tree__write_deps_file__TypeCtorInfo_70_70, parse_tree__write_deps_file__V_62_62, parse_tree__write_deps_file__ForeignImports_13);
              }
#line 1012 "write_deps_file.m"
              {
#line 1012 "write_deps_file.m"
                parse_tree__write_deps_file__Deps_26 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_70_70, parse_tree__write_deps_file__AllDeps_12, parse_tree__write_deps_file__ForeignDeps_24);
              }
#line 1014 "write_deps_file.m"
              {
#line 1014 "write_deps_file.m"
                parse_tree__write_deps_file__V_65_65 = parse_tree__write_deps_file__referenced_dlls_2_f_0(parse_tree__write_deps_file__ModuleName_11, parse_tree__write_deps_file__Deps_26);
              }
#line 1013 "write_deps_file.m"
              {
#line 1013 "write_deps_file.m"
                parse_tree__write_deps_file__write_dll_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__V_65_65, parse_tree__write_deps_file__Prefix_23, parse_tree__write_deps_file__DepStream_10);
              }
#line 1015 "write_deps_file.m"
              {
#line 1015 "write_deps_file.m"
                mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_10);
#line 1015 "write_deps_file.m"
                return;
              }
#line 997 "write_deps_file.m"
            }
#line 1016 "write_deps_file.m"
            break;
#line 1016 "write_deps_file.m"
          case (MR_Integer) 4:
#line 1020 "write_deps_file.m"
            {
#line 1020 "write_deps_file.m"
            }
#line 1016 "write_deps_file.m"
            break;
#line 1016 "write_deps_file.m"
          case (MR_Integer) 3:
#line 1019 "write_deps_file.m"
            {
#line 1019 "write_deps_file.m"
            }
#line 1016 "write_deps_file.m"
            break;
#line 1016 "write_deps_file.m"
          case (MR_Integer) 2:
#line 1018 "write_deps_file.m"
            {
#line 1018 "write_deps_file.m"
            }
#line 1016 "write_deps_file.m"
            break;
#line 1016 "write_deps_file.m"
        }
#line 976 "write_deps_file.m"
      }
#line 1023 "write_deps_file.m"
    else
#line 1023 "write_deps_file.m"
      {
#line 1023 "write_deps_file.m"
      }
#line 1023 "write_deps_file.m"
  }
#line 964 "write_deps_file.m"
}

#line 938 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(
#line 938 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 938 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_2,
#line 938 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_3)
#line 938 "write_deps_file.m"
{
#line 941 "write_deps_file.m"
  while (MR_TRUE)
#line 941 "write_deps_file.m"
    {
#line 941 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 941 "write_deps_file.m"
      {
#line 941 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 941 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 941 "write_deps_file.m"
          {
#line 941 "write_deps_file.m"
          }
#line 941 "write_deps_file.m"
        else
#line 942 "write_deps_file.m"
          {
#line 942 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_11 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 0)));
#line 942 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FileNames_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 1)));

#line 943 "write_deps_file.m"
            {
#line 943 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_3, (MR_String) " \\\n\t");
            }
#line 944 "write_deps_file.m"
            {
#line 944 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_3, parse_tree__write_deps_file__FileName_11);
            }
#line 945 "write_deps_file.m"
            {
#line 945 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_3, parse_tree__write_deps_file__Suffix_2);
            }
#line 946 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 946 "write_deps_file.m"
            {
#line 946 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__1__tmp_copy_1 = parse_tree__write_deps_file__FileNames_12;

#line 946 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__1_1 = parse_tree__write_deps_file__HeadVar__1__tmp_copy_1;
#line 946 "write_deps_file.m"
            }
#line 946 "write_deps_file.m"
            continue;
#line 942 "write_deps_file.m"
          }
#line 941 "write_deps_file.m"
      }
#line 941 "write_deps_file.m"
      break;
#line 941 "write_deps_file.m"
    }
#line 938 "write_deps_file.m"
}

#line 924 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(
#line 924 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 924 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 924 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 924 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_4)
#line 924 "write_deps_file.m"
{
#line 928 "write_deps_file.m"
  while (MR_TRUE)
#line 928 "write_deps_file.m"
    {
#line 928 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 928 "write_deps_file.m"
      {
#line 928 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 928 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 928 "write_deps_file.m"
          {
#line 928 "write_deps_file.m"
          }
#line 928 "write_deps_file.m"
        else
#line 930 "write_deps_file.m"
          {
#line 930 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__ExtraLink_14;
#line 930 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_15;
#line 930 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ExtraLinks_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 1)));
#line 930 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_20;
#line 930 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 0)));

#line 929 "write_deps_file.m"
            parse_tree__write_deps_file__ExtraLink_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_23_23, (MR_Integer) 0)));
#line 929 "write_deps_file.m"
            parse_tree__write_deps_file__Module_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_23_23, (MR_Integer) 1)));
#line 931 "write_deps_file.m"
            {
#line 931 "write_deps_file.m"
              parse_tree__file_names__extra_link_obj_file_name_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_15, parse_tree__write_deps_file__ExtraLink_14, parse_tree__write_deps_file__Suffix_3, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_20);
            }
#line 933 "write_deps_file.m"
            {
#line 933 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_4, (MR_String) " \\\n\t");
            }
#line 934 "write_deps_file.m"
            {
#line 934 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_4, parse_tree__write_deps_file__FileName_20);
            }
#line 935 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 935 "write_deps_file.m"
            {
#line 935 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__2__tmp_copy_2 = parse_tree__write_deps_file__ExtraLinks_16;

#line 935 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__2_2 = parse_tree__write_deps_file__HeadVar__2__tmp_copy_2;
#line 935 "write_deps_file.m"
            }
#line 935 "write_deps_file.m"
            continue;
#line 930 "write_deps_file.m"
          }
#line 928 "write_deps_file.m"
      }
#line 928 "write_deps_file.m"
      break;
#line 928 "write_deps_file.m"
    }
#line 924 "write_deps_file.m"
}

#line 910 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(
#line 910 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 910 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_2,
#line 910 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
#line 910 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_4,
#line 910 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_5)
#line 910 "write_deps_file.m"
{
#line 914 "write_deps_file.m"
  while (MR_TRUE)
#line 914 "write_deps_file.m"
    {
#line 914 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 914 "write_deps_file.m"
      {
#line 914 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 914 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 914 "write_deps_file.m"
          {
#line 914 "write_deps_file.m"
          }
#line 914 "write_deps_file.m"
        else
#line 916 "write_deps_file.m"
          {
#line 916 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FactTable_17 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 0)));
#line 916 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FactTables_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 1)));
#line 916 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_22;

#line 917 "write_deps_file.m"
            {
#line 917 "write_deps_file.m"
              parse_tree__file_names__fact_table_file_name_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_2, parse_tree__write_deps_file__FactTable_17, parse_tree__write_deps_file__Suffix_4, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_22);
            }
#line 919 "write_deps_file.m"
            {
#line 919 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_5, (MR_String) " \\\n\t");
            }
#line 920 "write_deps_file.m"
            {
#line 920 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_5, parse_tree__write_deps_file__FileName_22);
            }
#line 921 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 921 "write_deps_file.m"
            {
#line 921 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__3__tmp_copy_3 = parse_tree__write_deps_file__FactTables_18;

#line 921 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__3_3 = parse_tree__write_deps_file__HeadVar__3__tmp_copy_3;
#line 921 "write_deps_file.m"
            }
#line 921 "write_deps_file.m"
            continue;
#line 916 "write_deps_file.m"
          }
#line 914 "write_deps_file.m"
      }
#line 914 "write_deps_file.m"
      break;
#line 914 "write_deps_file.m"
    }
#line 910 "write_deps_file.m"
}

#line 900 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependency_5_p_0(
#line 900 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 900 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 900 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFile_8)
#line 900 "write_deps_file.m"
{
#line 904 "write_deps_file.m"
  {
#line 904 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 904 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__IncludeFileName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IncludeFile_8, (MR_Integer) 1)));
#line 904 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__IncludePath_12;
#line 905 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IncludeFile_8, (MR_Integer) 0)));

#line 906 "write_deps_file.m"
    {
#line 906 "write_deps_file.m"
      parse_tree__file_names__make_include_file_path_3_p_0(parse_tree__write_deps_file__SourceFileName_7, parse_tree__write_deps_file__IncludeFileName_11, &parse_tree__write_deps_file__IncludePath_12);
    }
#line 907 "write_deps_file.m"
    {
#line 907 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_6, (MR_String) " \\\n\t");
    }
#line 908 "write_deps_file.m"
    {
#line 908 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_6, parse_tree__write_deps_file__IncludePath_12);
#line 908 "write_deps_file.m"
      return;
    }
#line 904 "write_deps_file.m"
  }
#line 900 "write_deps_file.m"
}

#line 897 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0_1(
#line 897 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 897 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 897 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 897 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 897 "write_deps_file.m"
{
#line 897 "write_deps_file.m"
  {
#line 897 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 897 "write_deps_file.m"
    {
#line 897 "write_deps_file.m"
      parse_tree__write_deps_file__write_foreign_include_file_dependency_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 897 "write_deps_file.m"
      return;
    }
#line 897 "write_deps_file.m"
  }
#line 897 "write_deps_file.m"
}

#line 891 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0(
#line 891 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 891 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 891 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFiles_8)
#line 891 "write_deps_file.m"
{
#line 895 "write_deps_file.m"
  {
#line 895 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 895 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_12_12;
#line 896 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_11;

#line 897 "write_deps_file.m"
    {
#line 897 "write_deps_file.m"
      parse_tree__write_deps_file__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 897 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_10[0]));
#line 897 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 1) = ((MR_Box) (parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0_1));
#line 897 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 897 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 3) = ((MR_Box) (parse_tree__write_deps_file__DepStream_6));
#line 897 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 4) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_7));
#line 897 "write_deps_file.m"
    }
#line 896 "write_deps_file.m"
    {
#line 896 "write_deps_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_12_12, parse_tree__write_deps_file__IncludeFiles_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_11);
    }
#line 895 "write_deps_file.m"
  }
#line 891 "write_deps_file.m"
}

#line 872 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dll_dependencies_list_6_p_0(
#line 872 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 872 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 872 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__3_3,
#line 872 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4)
#line 872 "write_deps_file.m"
{
#line 875 "write_deps_file.m"
  while (MR_TRUE)
#line 875 "write_deps_file.m"
    {
#line 875 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 875 "write_deps_file.m"
      {
#line 875 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 875 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 875 "write_deps_file.m"
          {
#line 875 "write_deps_file.m"
          }
#line 875 "write_deps_file.m"
        else
#line 877 "write_deps_file.m"
          {
#line 877 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 0)));
#line 877 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Modules_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 1)));
#line 877 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_30;

#line 885 "write_deps_file.m"
            {
#line 885 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__Module_14, (MR_String) ".dll", (MR_Integer) 1, &parse_tree__write_deps_file__FileName_30);
            }
#line 887 "write_deps_file.m"
            {
#line 887 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__4_4, (MR_String) " \\\n\t");
            }
#line 888 "write_deps_file.m"
            {
#line 888 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__4_4, parse_tree__write_deps_file__HeadVar__3_3);
            }
#line 889 "write_deps_file.m"
            {
#line 889 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__4_4, parse_tree__write_deps_file__FileName_30);
            }
#line 879 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 879 "write_deps_file.m"
            {
#line 879 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__2__tmp_copy_2 = parse_tree__write_deps_file__Modules_15;

#line 879 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__2_2 = parse_tree__write_deps_file__HeadVar__2__tmp_copy_2;
#line 879 "write_deps_file.m"
            }
#line 879 "write_deps_file.m"
            continue;
#line 877 "write_deps_file.m"
          }
#line 875 "write_deps_file.m"
      }
#line 875 "write_deps_file.m"
      break;
#line 875 "write_deps_file.m"
    }
#line 872 "write_deps_file.m"
}

#line 865 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(
#line 865 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 865 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2)
#line 865 "write_deps_file.m"
{
#line 868 "write_deps_file.m"
  {
#line 868 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 868 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 868 "write_deps_file.m"
      {
#line 868 "write_deps_file.m"
      }
#line 868 "write_deps_file.m"
    else
#line 869 "write_deps_file.m"
      {
#line 870 "write_deps_file.m"
        {
#line 870 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__2_2, (MR_String) " ");
#line 870 "write_deps_file.m"
          return;
        }
#line 869 "write_deps_file.m"
      }
#line 868 "write_deps_file.m"
  }
#line 865 "write_deps_file.m"
}

#line 843 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(
#line 843 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 843 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_10,
#line 843 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Prefix_11,
#line 843 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_12,
#line 843 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Basis_13,
#line 843 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_14)
#line 843 "write_deps_file.m"
{
#line 850 "write_deps_file.m"
  {
#line 850 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 850 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Basis_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 862 "write_deps_file.m"
      {
#line 862 "write_deps_file.m"
        parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__Modules_10, parse_tree__write_deps_file__Suffix_12, parse_tree__write_deps_file__DepStream_14);
#line 862 "write_deps_file.m"
        return;
      }
#line 850 "write_deps_file.m"
    else
#line 850 "write_deps_file.m"
      {
#line 850 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__VarName_16;
#line 850 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__OldSuffix_17;
#line 850 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Basis_13, (MR_Integer) 0)));

#line 850 "write_deps_file.m"
        parse_tree__write_deps_file__VarName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_21_21, (MR_Integer) 0)));
#line 850 "write_deps_file.m"
        parse_tree__write_deps_file__OldSuffix_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_21_21, (MR_Integer) 1)));
#line 851 "write_deps_file.m"
        {
#line 851 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, (MR_String) "\044(");
        }
#line 852 "write_deps_file.m"
        {
#line 852 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, parse_tree__write_deps_file__VarName_16);
        }
#line 853 "write_deps_file.m"
        {
#line 853 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, (MR_String) ":%");
        }
#line 854 "write_deps_file.m"
        {
#line 854 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, parse_tree__write_deps_file__OldSuffix_17);
        }
#line 855 "write_deps_file.m"
        {
#line 855 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, (MR_String) "=");
        }
#line 856 "write_deps_file.m"
        {
#line 856 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, parse_tree__write_deps_file__Prefix_11);
        }
#line 857 "write_deps_file.m"
        {
#line 857 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, (MR_String) "%");
        }
#line 858 "write_deps_file.m"
        {
#line 858 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, parse_tree__write_deps_file__Suffix_12);
        }
#line 859 "write_deps_file.m"
        {
#line 859 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_14, (MR_String) ")");
#line 859 "write_deps_file.m"
          return;
        }
#line 850 "write_deps_file.m"
      }
#line 850 "write_deps_file.m"
  }
#line 843 "write_deps_file.m"
}

#line 832 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_list_6_p_0(
#line 832 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 832 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 832 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 832 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_4)
#line 832 "write_deps_file.m"
{
#line 835 "write_deps_file.m"
  while (MR_TRUE)
#line 835 "write_deps_file.m"
    {
#line 835 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 835 "write_deps_file.m"
      {
#line 835 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 835 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 835 "write_deps_file.m"
          {
#line 835 "write_deps_file.m"
          }
#line 835 "write_deps_file.m"
        else
#line 836 "write_deps_file.m"
          {
#line 836 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 0)));
#line 836 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Modules_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 1)));
#line 836 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_19;

#line 837 "write_deps_file.m"
            {
#line 837 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_14, parse_tree__write_deps_file__Suffix_3, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_19);
            }
#line 839 "write_deps_file.m"
            {
#line 839 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_4, (MR_String) " \\\n\t");
            }
#line 840 "write_deps_file.m"
            {
#line 840 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_4, parse_tree__write_deps_file__FileName_19);
            }
#line 841 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 841 "write_deps_file.m"
            {
#line 841 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__2__tmp_copy_2 = parse_tree__write_deps_file__Modules_15;

#line 841 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__2_2 = parse_tree__write_deps_file__HeadVar__2__tmp_copy_2;
#line 841 "write_deps_file.m"
            }
#line 841 "write_deps_file.m"
            continue;
#line 836 "write_deps_file.m"
          }
#line 835 "write_deps_file.m"
      }
#line 835 "write_deps_file.m"
      break;
#line 835 "write_deps_file.m"
    }
#line 832 "write_deps_file.m"
}

#line 821 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__submodules_2_f_0_1(
#line 821 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 821 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 821 "write_deps_file.m"
{
#line 821 "write_deps_file.m"
  {
#line 821 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 821 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 821 "write_deps_file.m"
    {
#line 821 "write_deps_file.m"
      return parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__submodules__821__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 821 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 821 "write_deps_file.m"
  }
#line 821 "write_deps_file.m"
}

#line 814 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__submodules_2_f_0(
#line 814 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 814 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules0_5)
#line 814 "write_deps_file.m"
{
#line 826 "write_deps_file.m"
  {
#line 826 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__Module_4)) == (MR_mktag((MR_Integer) 0)));
#line 826 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules_6;
#line 826 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Str_7;

#line 818 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 818 "write_deps_file.m"
      {
#line 818 "write_deps_file.m"
        parse_tree__write_deps_file__Str_7 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Module_4, (MR_Integer) 0)));
#line 819 "write_deps_file.m"
        {
#line 819 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__Module_4);
        }
#line 819 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 818 "write_deps_file.m"
      }
#line 826 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 824 "write_deps_file.m"
      {
#line 824 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__P_8;

#line 821 "write_deps_file.m"
        {
#line 821 "write_deps_file.m"
          parse_tree__write_deps_file__P_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 821 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[1]));
#line 821 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 1) = ((MR_Box) (parse_tree__write_deps_file__submodules_2_f_0_1));
#line 821 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 821 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 3) = ((MR_Box) (parse_tree__write_deps_file__Module_4));
#line 821 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__P_8, 4) = ((MR_Box) (parse_tree__write_deps_file__Str_7));
#line 821 "write_deps_file.m"
        }
#line 825 "write_deps_file.m"
        {
#line 825 "write_deps_file.m"
          mercury__list__filter_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_deps_file__P_8, parse_tree__write_deps_file__Modules0_5, &parse_tree__write_deps_file__Modules_6);
        }
#line 824 "write_deps_file.m"
      }
#line 826 "write_deps_file.m"
    else
#line 827 "write_deps_file.m"
      parse_tree__write_deps_file__Modules_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 826 "write_deps_file.m"
    return parse_tree__write_deps_file__Modules_6;
#line 826 "write_deps_file.m"
  }
#line 814 "write_deps_file.m"
}

#line 99 "write_deps_file.m"
void MR_CALL 
parse_tree__write_deps_file__get_opt_deps_8_p_0(
#line 99 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 99 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__BuildOptFiles_2,
#line 99 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
#line 99 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IntermodDirs_4,
#line 99 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_5,
#line 99 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__6_6)
#line 99 "write_deps_file.m"
{
#line 2486 "write_deps_file.m"
  {
#line 2486 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 2486 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2486 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2486 "write_deps_file.m"
    else
#line 2488 "write_deps_file.m"
      {
#line 2488 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Dep_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 0)));
#line 2488 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Deps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 1)));
#line 2488 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;

#line 2489 "write_deps_file.m"
        {
#line 2489 "write_deps_file.m"
          parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__BuildOptFiles_2, parse_tree__write_deps_file__Deps_19, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__Suffix_5, &parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35);
        }
#line 13572 "parse_tree.write_deps_file.c"
#line 13573 "parse_tree.write_deps_file.c"
        switch (parse_tree__write_deps_file__BuildOptFiles_2) {
#line 13575 "parse_tree.write_deps_file.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 13577 "parse_tree.write_deps_file.c"
          case (MR_Integer) 0:
#line 13579 "parse_tree.write_deps_file.c"
            {
#line 13581 "parse_tree.write_deps_file.c"
              MR_String parse_tree__write_deps_file__OptName_28;
#line 13583 "parse_tree.write_deps_file.c"
              MR_Word parse_tree__write_deps_file__Result2_29;

#line 2510 "write_deps_file.m"
              {
#line 2510 "write_deps_file.m"
                parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, parse_tree__write_deps_file__Suffix_5, &parse_tree__write_deps_file__OptName_28);
              }
#line 2511 "write_deps_file.m"
              {
#line 2511 "write_deps_file.m"
                libs__file_util__search_for_file_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__OptName_28, &parse_tree__write_deps_file__Result2_29);
              }
#line 2515 "write_deps_file.m"
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_29)) == (MR_mktag((MR_Integer) 1))))
#line 2516 "write_deps_file.m"
                *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;
#line 2515 "write_deps_file.m"
              else
#line 2514 "write_deps_file.m"
                {
#line 2514 "write_deps_file.m"
                  MR_Word base;
#line 2514 "write_deps_file.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2514 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2514 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2514 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
#line 2514 "write_deps_file.m"
                }
#line 13616 "parse_tree.write_deps_file.c"
            }
#line 13618 "parse_tree.write_deps_file.c"
            break;
#line 13620 "parse_tree.write_deps_file.c"
          case (MR_Integer) 1:
#line 13622 "parse_tree.write_deps_file.c"
            {
#line 13624 "parse_tree.write_deps_file.c"
              MR_Word parse_tree__write_deps_file__Result1_24;

#line 2493 "write_deps_file.m"
              {
#line 2493 "write_deps_file.m"
                parse_tree__prog_io_find__search_for_module_source_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__Dep_18, &parse_tree__write_deps_file__Result1_24);
              }
#line 13632 "parse_tree.write_deps_file.c"
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result1_24)) == (MR_mktag((MR_Integer) 1))))
#line 13634 "parse_tree.write_deps_file.c"
                {
#line 13636 "parse_tree.write_deps_file.c"
                  MR_String parse_tree__write_deps_file__OptName_45;
#line 13638 "parse_tree.write_deps_file.c"
                  MR_Word parse_tree__write_deps_file__Result2_46;

#line 2510 "write_deps_file.m"
                  {
#line 2510 "write_deps_file.m"
                    parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, parse_tree__write_deps_file__Suffix_5, &parse_tree__write_deps_file__OptName_45);
                  }
#line 2511 "write_deps_file.m"
                  {
#line 2511 "write_deps_file.m"
                    libs__file_util__search_for_file_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_4, parse_tree__write_deps_file__OptName_45, &parse_tree__write_deps_file__Result2_46);
                  }
#line 2515 "write_deps_file.m"
                  if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_46)) == (MR_mktag((MR_Integer) 1))))
#line 2516 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;
#line 2515 "write_deps_file.m"
                  else
#line 2514 "write_deps_file.m"
                    {
#line 2514 "write_deps_file.m"
                      MR_Word base;
#line 2514 "write_deps_file.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2514 "write_deps_file.m"
                      *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2514 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2514 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
#line 2514 "write_deps_file.m"
                    }
#line 13671 "parse_tree.write_deps_file.c"
                }
#line 13673 "parse_tree.write_deps_file.c"
              else
#line 13675 "parse_tree.write_deps_file.c"
                {
#line 2497 "write_deps_file.m"
                  {
#line 2497 "write_deps_file.m"
                    MR_Word base;
#line 2497 "write_deps_file.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2497 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2497 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2497 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
#line 2497 "write_deps_file.m"
                  }
#line 2499 "write_deps_file.m"
                  {
#line 2499 "write_deps_file.m"
                    mercury__io__seen_2_p_0();
#line 2499 "write_deps_file.m"
                    return;
                  }
#line 13698 "parse_tree.write_deps_file.c"
                }
#line 13700 "parse_tree.write_deps_file.c"
            }
#line 13702 "parse_tree.write_deps_file.c"
            break;
#line 13704 "parse_tree.write_deps_file.c"
        }
#line 2488 "write_deps_file.m"
      }
#line 2486 "write_deps_file.m"
  }
#line 99 "write_deps_file.m"
}

#line 2408 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__referenced_dlls_2_f_0_1(
#line 2408 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2408 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 2408 "write_deps_file.m"
{
#line 2408 "write_deps_file.m"
  {
#line 2408 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 2408 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 2408 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_HeadVar__2_17;

#line 2408 "write_deps_file.m"
    {
#line 2408 "write_deps_file.m"
      parse_tree__write_deps_file__conv0_HeadVar__2_17 = parse_tree__write_deps_file__IntroducedFrom__func__referenced_dlls__2408__1_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 2408 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__2_17));
#line 2408 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 2408 "write_deps_file.m"
  }
#line 2408 "write_deps_file.m"
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
#line 2397 "write_deps_file.m"
  {
#line 2397 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2397 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules_6;
#line 2397 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DepModules_7;

#line 2398 "write_deps_file.m"
    {
#line 2398 "write_deps_file.m"
      parse_tree__write_deps_file__DepModules_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2398 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DepModules_7, 0) = ((MR_Box) (parse_tree__write_deps_file__Module_4));
#line 2398 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DepModules_7, 1) = ((MR_Box) (parse_tree__write_deps_file__DepModules0_5));
#line 2398 "write_deps_file.m"
    }
#line 2402 "write_deps_file.m"
    {
#line 2402 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__Module_4);
    }
#line 2407 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 2404 "write_deps_file.m"
      {
#line 2404 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_10_10;
#line 2404 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_13_13;

#line 2406 "write_deps_file.m"
        {
#line 2406 "write_deps_file.m"
          parse_tree__write_deps_file__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2406 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_13_13, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_9[1]));
#line 2406 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_13_13, 1) = ((MR_Box) (parse_tree__write_deps_file__DepModules_7));
#line 2406 "write_deps_file.m"
        }
#line 2405 "write_deps_file.m"
        {
#line 2405 "write_deps_file.m"
          parse_tree__write_deps_file__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2405 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_10_10, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_9[0]));
#line 2405 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_10_10, 1) = ((MR_Box) (parse_tree__write_deps_file__V_13_13));
#line 2405 "write_deps_file.m"
        }
#line 2404 "write_deps_file.m"
        {
#line 2404 "write_deps_file.m"
          parse_tree__write_deps_file__Modules_6 = mercury__list__remove_dups_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_deps_file__V_10_10);
        }
#line 2404 "write_deps_file.m"
      }
#line 2407 "write_deps_file.m"
    else
#line 2415 "write_deps_file.m"
      {
#line 2415 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_23_23 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2415 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_20_20;

#line 2416 "write_deps_file.m"
        {
#line 2416 "write_deps_file.m"
          parse_tree__write_deps_file__V_20_20 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, parse_tree__write_deps_file__TypeCtorInfo_23_23, (MR_Word) &parse_tree__write_deps_file_scalar_common_2[5], parse_tree__write_deps_file__DepModules_7);
        }
#line 2416 "write_deps_file.m"
        {
#line 2416 "write_deps_file.m"
          parse_tree__write_deps_file__Modules_6 = mercury__list__remove_dups_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, parse_tree__write_deps_file__V_20_20);
        }
#line 2415 "write_deps_file.m"
      }
#line 2397 "write_deps_file.m"
    return parse_tree__write_deps_file__Modules_6;
#line 2397 "write_deps_file.m"
  }
#line 88 "write_deps_file.m"
}

#line 2372 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1(
#line 2372 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2372 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2372 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2372 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 2372 "write_deps_file.m"
{
#line 2372 "write_deps_file.m"
  {
#line 2372 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 2372 "write_deps_file.m"
    {
#line 2372 "write_deps_file.m"
      parse_tree__write_deps_file__write_module_scc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 2372 "write_deps_file.m"
      return;
    }
#line 2372 "write_deps_file.m"
  }
#line 2372 "write_deps_file.m"
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
#line 2358 "write_deps_file.m"
  {
#line 2358 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2358 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Order_10;
#line 2358 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_11;

#line 2359 "write_deps_file.m"
    {
#line 2359 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_6, (MR_Integer) 94, &parse_tree__write_deps_file__Order_10);
    }
#line 2360 "write_deps_file.m"
    {
#line 2360 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_6, (MR_Integer) 45, &parse_tree__write_deps_file__Verbose_11);
    }
#line 2384 "write_deps_file.m"
#line 2384 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Order_10) {
#line 2384 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2384 "write_deps_file.m"
      case (MR_Integer) 0:
#line 2385 "write_deps_file.m"
        {
#line 2385 "write_deps_file.m"
        }
#line 2384 "write_deps_file.m"
        break;
#line 2384 "write_deps_file.m"
      case (MR_Integer) 1:
#line 2362 "write_deps_file.m"
        {
#line 2362 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__OrdFileName_12;
#line 2362 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__OrdResult_13;

#line 2363 "write_deps_file.m"
          {
#line 2363 "write_deps_file.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_6, parse_tree__write_deps_file__Module_7, (MR_String) ".order", (MR_Integer) 0, &parse_tree__write_deps_file__OrdFileName_12);
          }
#line 2365 "write_deps_file.m"
          {
#line 2365 "write_deps_file.m"
            libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) "% Creating module order file \140");
          }
#line 2366 "write_deps_file.m"
          {
#line 2366 "write_deps_file.m"
            libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, parse_tree__write_deps_file__OrdFileName_12);
          }
#line 2367 "write_deps_file.m"
          {
#line 2367 "write_deps_file.m"
            libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) "\'...");
          }
#line 2368 "write_deps_file.m"
          {
#line 2368 "write_deps_file.m"
            mercury__io__open_output_4_p_0(parse_tree__write_deps_file__OrdFileName_12, &parse_tree__write_deps_file__OrdResult_13);
          }
#line 2375 "write_deps_file.m"
          if (((MR_tag((MR_Word) parse_tree__write_deps_file__OrdResult_13)) == (MR_mktag((MR_Integer) 1))))
#line 2376 "write_deps_file.m"
            {
#line 2376 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__IOError_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__OrdResult_13, (MR_Integer) 0)));
#line 2376 "write_deps_file.m"
              MR_String parse_tree__write_deps_file__IOErrorMessage_16;
#line 2376 "write_deps_file.m"
              MR_String parse_tree__write_deps_file__OrdMessage_17;
#line 2376 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_34_34;
#line 2376 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_36_36;
#line 2376 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_37_37;
#line 2376 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_39_39;

#line 2377 "write_deps_file.m"
              {
#line 2377 "write_deps_file.m"
                libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) " failed.\n");
              }
#line 2378 "write_deps_file.m"
              {
#line 2378 "write_deps_file.m"
                libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_11);
              }
#line 2379 "write_deps_file.m"
              {
#line 2379 "write_deps_file.m"
                mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_15, &parse_tree__write_deps_file__IOErrorMessage_16);
              }
#line 2381 "write_deps_file.m"
              {
#line 2381 "write_deps_file.m"
                parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2381 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_16));
#line 2381 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2381 "write_deps_file.m"
              }
#line 2381 "write_deps_file.m"
              {
#line 2381 "write_deps_file.m"
                parse_tree__write_deps_file__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2381 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 2381 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 2381 "write_deps_file.m"
              }
#line 2380 "write_deps_file.m"
              {
#line 2380 "write_deps_file.m"
                parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2380 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) (parse_tree__write_deps_file__OrdFileName_12));
#line 2380 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_37_37));
#line 2380 "write_deps_file.m"
              }
#line 2380 "write_deps_file.m"
              {
#line 2380 "write_deps_file.m"
                parse_tree__write_deps_file__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2380 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 2380 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 2380 "write_deps_file.m"
              }
#line 2380 "write_deps_file.m"
              {
#line 2380 "write_deps_file.m"
                mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_34_34, &parse_tree__write_deps_file__OrdMessage_17);
              }
#line 2382 "write_deps_file.m"
              {
#line 2382 "write_deps_file.m"
                libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__OrdMessage_17);
#line 2382 "write_deps_file.m"
                return;
              }
#line 2376 "write_deps_file.m"
            }
#line 2375 "write_deps_file.m"
          else
#line 2370 "write_deps_file.m"
            {
#line 2370 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__OrdStream_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OrdResult_13, (MR_Integer) 0)));
#line 2370 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_43_43;

#line 2372 "write_deps_file.m"
              {
#line 2372 "write_deps_file.m"
                parse_tree__write_deps_file__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2372 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_43_43, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[0]));
#line 2372 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_43_43, 1) = ((MR_Box) (parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1));
#line 2372 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2372 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_43_43, 3) = ((MR_Box) (parse_tree__write_deps_file__OrdStream_14));
#line 2372 "write_deps_file.m"
              }
#line 2371 "write_deps_file.m"
              {
#line 2371 "write_deps_file.m"
                mercury__io__write_list_6_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[2], parse_tree__write_deps_file__OrdStream_14, parse_tree__write_deps_file__DepsOrdering_8, (MR_String) "\n\n", parse_tree__write_deps_file__V_43_43);
              }
#line 2373 "write_deps_file.m"
              {
#line 2373 "write_deps_file.m"
                mercury__io__close_output_3_p_0(parse_tree__write_deps_file__OrdStream_14);
              }
#line 2374 "write_deps_file.m"
              {
#line 2374 "write_deps_file.m"
                libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) " done.\n");
#line 2374 "write_deps_file.m"
                return;
              }
#line 2370 "write_deps_file.m"
            }
#line 2362 "write_deps_file.m"
        }
#line 2384 "write_deps_file.m"
        break;
#line 2384 "write_deps_file.m"
    }
#line 2358 "write_deps_file.m"
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
#line 1163 "write_deps_file.m"
  {
#line 1163 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1163 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_12;
#line 1163 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DepFileName_13;
#line 1163 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DepResult_14;

#line 1164 "write_deps_file.m"
    {
#line 1164 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 45, &parse_tree__write_deps_file__Verbose_12);
    }
#line 1165 "write_deps_file.m"
    {
#line 1165 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, (MR_String) ".dep", (MR_Integer) 0, &parse_tree__write_deps_file__DepFileName_13);
    }
#line 1167 "write_deps_file.m"
    {
#line 1167 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    }
#line 1168 "write_deps_file.m"
    {
#line 1168 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, parse_tree__write_deps_file__DepFileName_13);
    }
#line 1169 "write_deps_file.m"
    {
#line 1169 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "\'...\n");
    }
#line 1170 "write_deps_file.m"
    {
#line 1170 "write_deps_file.m"
      mercury__io__open_output_4_p_0(parse_tree__write_deps_file__DepFileName_13, &parse_tree__write_deps_file__DepResult_14);
    }
#line 1177 "write_deps_file.m"
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__DepResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 1178 "write_deps_file.m"
      {
#line 1178 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DepResult_14, (MR_Integer) 0)));
#line 1178 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IOErrorMessage_17;
#line 1178 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DepMessage_18;
#line 1178 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_34_34;
#line 1178 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_36_36;
#line 1178 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_37_37;
#line 1178 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_39_39;

#line 1179 "write_deps_file.m"
        {
#line 1179 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
        }
#line 1180 "write_deps_file.m"
        {
#line 1180 "write_deps_file.m"
          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
        }
#line 1181 "write_deps_file.m"
        {
#line 1181 "write_deps_file.m"
          mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_16, &parse_tree__write_deps_file__IOErrorMessage_17);
        }
#line 1183 "write_deps_file.m"
        {
#line 1183 "write_deps_file.m"
          parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_17));
#line 1183 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1183 "write_deps_file.m"
        }
#line 1183 "write_deps_file.m"
        {
#line 1183 "write_deps_file.m"
          parse_tree__write_deps_file__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 1183 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 1183 "write_deps_file.m"
        }
#line 1182 "write_deps_file.m"
        {
#line 1182 "write_deps_file.m"
          parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) (parse_tree__write_deps_file__DepFileName_13));
#line 1182 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_37_37));
#line 1182 "write_deps_file.m"
        }
#line 1182 "write_deps_file.m"
        {
#line 1182 "write_deps_file.m"
          parse_tree__write_deps_file__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 1182 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 1182 "write_deps_file.m"
        }
#line 1182 "write_deps_file.m"
        {
#line 1182 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_34_34, &parse_tree__write_deps_file__DepMessage_18);
        }
#line 1184 "write_deps_file.m"
        {
#line 1184 "write_deps_file.m"
          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__DepMessage_18);
#line 1184 "write_deps_file.m"
          return;
        }
#line 1178 "write_deps_file.m"
      }
#line 1177 "write_deps_file.m"
    else
#line 1172 "write_deps_file.m"
      {
#line 1172 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__DepStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__DepResult_14, (MR_Integer) 0)));

#line 1173 "write_deps_file.m"
        {
#line 1173 "write_deps_file.m"
          parse_tree__write_deps_file__generate_dep_file_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SourceFileName_8, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__DepsMap_10, parse_tree__write_deps_file__DepStream_15);
        }
#line 1175 "write_deps_file.m"
        {
#line 1175 "write_deps_file.m"
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DepStream_15);
        }
#line 1176 "write_deps_file.m"
        {
#line 1176 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% done.\n");
#line 1176 "write_deps_file.m"
          return;
        }
#line 1172 "write_deps_file.m"
      }
#line 1163 "write_deps_file.m"
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
#line 1136 "write_deps_file.m"
  {
#line 1136 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1136 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_12;
#line 1136 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DvFileName_13;
#line 1136 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DvResult_14;

#line 1137 "write_deps_file.m"
    {
#line 1137 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 45, &parse_tree__write_deps_file__Verbose_12);
    }
#line 1138 "write_deps_file.m"
    {
#line 1138 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, (MR_String) ".dv", (MR_Integer) 0, &parse_tree__write_deps_file__DvFileName_13);
    }
#line 1140 "write_deps_file.m"
    {
#line 1140 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    }
#line 1141 "write_deps_file.m"
    {
#line 1141 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, parse_tree__write_deps_file__DvFileName_13);
    }
#line 1142 "write_deps_file.m"
    {
#line 1142 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "\'...\n");
    }
#line 1143 "write_deps_file.m"
    {
#line 1143 "write_deps_file.m"
      mercury__io__open_output_4_p_0(parse_tree__write_deps_file__DvFileName_13, &parse_tree__write_deps_file__DvResult_14);
    }
#line 1150 "write_deps_file.m"
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__DvResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 1151 "write_deps_file.m"
      {
#line 1151 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DvResult_14, (MR_Integer) 0)));
#line 1151 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IOErrorMessage_17;
#line 1151 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DvMessage_18;
#line 1151 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_34_34;
#line 1151 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_36_36;
#line 1151 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_37_37;
#line 1151 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_39_39;

#line 1152 "write_deps_file.m"
        {
#line 1152 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
        }
#line 1153 "write_deps_file.m"
        {
#line 1153 "write_deps_file.m"
          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
        }
#line 1154 "write_deps_file.m"
        {
#line 1154 "write_deps_file.m"
          mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_16, &parse_tree__write_deps_file__IOErrorMessage_17);
        }
#line 1156 "write_deps_file.m"
        {
#line 1156 "write_deps_file.m"
          parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_17));
#line 1156 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1156 "write_deps_file.m"
        }
#line 1156 "write_deps_file.m"
        {
#line 1156 "write_deps_file.m"
          parse_tree__write_deps_file__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 1156 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 1156 "write_deps_file.m"
        }
#line 1155 "write_deps_file.m"
        {
#line 1155 "write_deps_file.m"
          parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) (parse_tree__write_deps_file__DvFileName_13));
#line 1155 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_37_37));
#line 1155 "write_deps_file.m"
        }
#line 1155 "write_deps_file.m"
        {
#line 1155 "write_deps_file.m"
          parse_tree__write_deps_file__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 1155 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 1155 "write_deps_file.m"
        }
#line 1155 "write_deps_file.m"
        {
#line 1155 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_34_34, &parse_tree__write_deps_file__DvMessage_18);
        }
#line 1157 "write_deps_file.m"
        {
#line 1157 "write_deps_file.m"
          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__DvMessage_18);
#line 1157 "write_deps_file.m"
          return;
        }
#line 1151 "write_deps_file.m"
      }
#line 1150 "write_deps_file.m"
    else
#line 1145 "write_deps_file.m"
      {
#line 1145 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__DvStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__DvResult_14, (MR_Integer) 0)));

#line 1146 "write_deps_file.m"
        {
#line 1146 "write_deps_file.m"
          parse_tree__write_deps_file__generate_dv_file_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SourceFileName_8, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__DepsMap_10, parse_tree__write_deps_file__DvStream_15);
        }
#line 1148 "write_deps_file.m"
        {
#line 1148 "write_deps_file.m"
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DvStream_15);
        }
#line 1149 "write_deps_file.m"
        {
#line 1149 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% done.\n");
#line 1149 "write_deps_file.m"
          return;
        }
#line 1145 "write_deps_file.m"
      }
#line 1136 "write_deps_file.m"
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
  MR_Word parse_tree__write_deps_file__ImplDepsGraph_4,
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
#line 1050 "write_deps_file.m"
  {
#line 1050 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 1050 "write_deps_file.m"
    {
#line 1050 "write_deps_file.m"
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__HeadVar__2_2, parse_tree__write_deps_file__IntDepsGraph_3, parse_tree__write_deps_file__ImplDepsGraph_4, parse_tree__write_deps_file__IndirectDepsGraph_5, parse_tree__write_deps_file__IndirectOptDepsGraph_6, parse_tree__write_deps_file__TransOptOrder_7);
#line 1050 "write_deps_file.m"
      return;
    }
#line 1050 "write_deps_file.m"
  }
#line 59 "write_deps_file.m"
}

#line 711 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_7(
#line 711 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 711 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 711 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 711 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 711 "write_deps_file.m"
{
#line 711 "write_deps_file.m"
  {
#line 711 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 711 "write_deps_file.m"
    {
#line 711 "write_deps_file.m"
      parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
#line 711 "write_deps_file.m"
      return;
    }
#line 711 "write_deps_file.m"
  }
#line 711 "write_deps_file.m"
}

#line 634 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_6(
#line 634 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 634 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 634 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 634 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 634 "write_deps_file.m"
{
#line 634 "write_deps_file.m"
  {
#line 634 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 634 "write_deps_file.m"
    {
#line 634 "write_deps_file.m"
      parse_tree__write_deps_file__write_foreign_dependency_for_il_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 7))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 634 "write_deps_file.m"
      return;
    }
#line 634 "write_deps_file.m"
  }
#line 634 "write_deps_file.m"
}

#line 617 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_5(
#line 617 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 617 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 617 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 617 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 617 "write_deps_file.m"
{
#line 617 "write_deps_file.m"
  {
#line 617 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 617 "write_deps_file.m"
    {
#line 617 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__617__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
#line 617 "write_deps_file.m"
      return;
    }
#line 617 "write_deps_file.m"
  }
#line 617 "write_deps_file.m"
}

#line 578 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_4(
#line 578 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 578 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 578 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 578 "write_deps_file.m"
{
#line 578 "write_deps_file.m"
  {
#line 578 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 578 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 578 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv3_HeadVar__3_576;

#line 578 "write_deps_file.m"
    {
#line 578 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__578__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv3_HeadVar__3_576);
    }
#line 578 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 578 "write_deps_file.m"
      {
#line 578 "write_deps_file.m"
        *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv3_HeadVar__3_576));
#line 578 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 578 "write_deps_file.m"
      }
#line 578 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 578 "write_deps_file.m"
  }
#line 578 "write_deps_file.m"
}

#line 403 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_3(
#line 403 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 403 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 403 "write_deps_file.m"
{
#line 403 "write_deps_file.m"
  {
#line 403 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 403 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 403 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv2_HeadVar__2_2;

#line 403 "write_deps_file.m"
    {
#line 403 "write_deps_file.m"
      parse_tree__write_deps_file__conv2_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 403 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv2_HeadVar__2_2));
#line 403 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 403 "write_deps_file.m"
  }
#line 403 "write_deps_file.m"
}

#line 381 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_2(
#line 381 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 381 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 381 "write_deps_file.m"
{
#line 381 "write_deps_file.m"
  {
#line 381 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 381 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 381 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv1_HeadVar__2_2;

#line 381 "write_deps_file.m"
    {
#line 381 "write_deps_file.m"
      parse_tree__write_deps_file__conv1_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 381 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_HeadVar__2_2));
#line 381 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 381 "write_deps_file.m"
  }
#line 381 "write_deps_file.m"
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
  MR_Word parse_tree__write_deps_file__AllDepsSet_9,
#line 40 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MaybeTransOptDeps_10)
#line 40 "write_deps_file.m"
{
#line 133 "write_deps_file.m"
  {
#line 133 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 133 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SourceFileName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 0)));
#line 133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SourceFileModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 1)));
#line 133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 2)));
#line 133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ParentDeps_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 4)));
#line 133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IntDeps_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 5)));
#line 133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ImplDeps_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 6)));
#line 133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IndirectDeps_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 7)));
#line 133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__InclDeps_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 9)));
#line 133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__NestedDeps_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 10)));
#line 133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__FactDeps0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 11)));
#line 133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignImportsCord0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 12)));
#line 133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignIncludeFilesCord_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 13)));
#line 133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ContainsForeignCode_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 14)));
#line 133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ItemBlocksCord_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 16)));
#line 133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_34;
#line 133 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MakeVarName_35;
#line 133 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DependencyFileName_36;
#line 133 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TransOptDateFileName_37;
#line 133 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TmpDependencyFileName_38;
#line 133 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Result_39;
#line 133 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_155_155;
#line 134 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___ModuleNameContext_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 3)));
#line 134 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Children_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 8)));
#line 134 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___ContainsForeignExport_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 15)));
#line 134 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Specs_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 17)));
#line 134 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Error_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 18)));
#line 134 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Timestamps_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 19)));
#line 134 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___HasMain_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 20)));
#line 134 "write_deps_file.m"
    MR_String parse_tree__write_deps_file___Dir_33 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 21)));

#line 141 "write_deps_file.m"
    {
#line 141 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 45, &parse_tree__write_deps_file__Verbose_34);
    }
#line 142 "write_deps_file.m"
    {
#line 142 "write_deps_file.m"
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_14, &parse_tree__write_deps_file__MakeVarName_35);
    }
#line 143 "write_deps_file.m"
    {
#line 143 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".d", (MR_Integer) 0, &parse_tree__write_deps_file__DependencyFileName_36);
    }
#line 145 "write_deps_file.m"
    {
#line 145 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".trans_opt_date", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptDateFileName_37);
    }
#line 152 "write_deps_file.m"
    {
#line 152 "write_deps_file.m"
      parse_tree__write_deps_file__V_155_155 = mercury__dir__dirname_1_f_0(parse_tree__write_deps_file__DependencyFileName_36);
    }
#line 152 "write_deps_file.m"
    {
#line 152 "write_deps_file.m"
      mercury__io__make_temp_5_p_0(parse_tree__write_deps_file__V_155_155, (MR_String) "tmp_d", &parse_tree__write_deps_file__TmpDependencyFileName_38);
    }
#line 154 "write_deps_file.m"
    {
#line 154 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_34, (MR_String) "% Writing auto-dependency file \140");
    }
#line 155 "write_deps_file.m"
    {
#line 155 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_34, parse_tree__write_deps_file__DependencyFileName_36);
    }
#line 156 "write_deps_file.m"
    {
#line 156 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_34, (MR_String) "\'...");
    }
#line 157 "write_deps_file.m"
    {
#line 157 "write_deps_file.m"
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_34);
    }
#line 158 "write_deps_file.m"
    {
#line 158 "write_deps_file.m"
      mercury__io__open_output_4_p_0(parse_tree__write_deps_file__TmpDependencyFileName_38, &parse_tree__write_deps_file__Result_39);
    }
#line 168 "write_deps_file.m"
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result_39)) == (MR_mktag((MR_Integer) 1))))
#line 160 "write_deps_file.m"
      {
#line 160 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IOError_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result_39, (MR_Integer) 0)));
#line 160 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IOErrorMessage_41;
#line 160 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Message_42;
#line 160 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_841_841;
#line 160 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_843_843;
#line 160 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_844_844;
#line 160 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_846_846;

#line 161 "write_deps_file.m"
        {
#line 161 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_34, (MR_String) " failed.\n");
        }
#line 162 "write_deps_file.m"
        {
#line 162 "write_deps_file.m"
          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_34);
        }
#line 163 "write_deps_file.m"
        {
#line 163 "write_deps_file.m"
          mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_40, &parse_tree__write_deps_file__IOErrorMessage_41);
        }
#line 166 "write_deps_file.m"
        {
#line 166 "write_deps_file.m"
          parse_tree__write_deps_file__V_846_846 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_846_846, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_41));
#line 166 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_846_846, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 166 "write_deps_file.m"
        }
#line 165 "write_deps_file.m"
        {
#line 165 "write_deps_file.m"
          parse_tree__write_deps_file__V_844_844 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_844_844, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 165 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_844_844, 1) = ((MR_Box) (parse_tree__write_deps_file__V_846_846));
#line 165 "write_deps_file.m"
        }
#line 165 "write_deps_file.m"
        {
#line 165 "write_deps_file.m"
          parse_tree__write_deps_file__V_843_843 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_843_843, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpDependencyFileName_38));
#line 165 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_843_843, 1) = ((MR_Box) (parse_tree__write_deps_file__V_844_844));
#line 165 "write_deps_file.m"
        }
#line 164 "write_deps_file.m"
        {
#line 164 "write_deps_file.m"
          parse_tree__write_deps_file__V_841_841 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_841_841, 0) = ((MR_Box) ((MR_String) "error opening temporary file \140"));
#line 164 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_841_841, 1) = ((MR_Box) (parse_tree__write_deps_file__V_843_843));
#line 164 "write_deps_file.m"
        }
#line 164 "write_deps_file.m"
        {
#line 164 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_841_841, &parse_tree__write_deps_file__Message_42);
        }
#line 167 "write_deps_file.m"
        {
#line 167 "write_deps_file.m"
          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_42);
#line 167 "write_deps_file.m"
          return;
        }
#line 160 "write_deps_file.m"
      }
#line 168 "write_deps_file.m"
    else
#line 169 "write_deps_file.m"
      {
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_871_871 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_872_872;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_885_885;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__DepStream_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Result_39, (MR_Integer) 0)));
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LongDeps0_44;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LongDepsSet0_46;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LongDepsSet_47;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ShortDepsSet0_48;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ShortDepsSet1_49;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ShortDepsSet_50;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LongDeps_51;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ShortDeps_52;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__AllDeps_53;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__FactDeps_54;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ErrFileName_63;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__OptDateFileName_64;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__CDateFileName_65;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__AsmDateFileName_66;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__PicAsmDateFileName_67;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ObjFileName_68;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ILDateFileName_69;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__JavaDateFileName_70;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__PicObjFileName_71;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Int0FileName_72;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ForeignIncludeFiles_82;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__UseOptFiles_85;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Intermod_86;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IntermodDirs_87;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__HighLevelCode_94;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__CompilationTarget_95;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__CFileName_96;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__HeaderFileName_97;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__HeaderFileName2_98;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ILFileName_99;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__JavaFileName_100;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ModuleDepFileName_101;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DateFileName_102;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Date0FileName_103;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__HaveMap_104;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ModuleArg_105;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Target_106;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__SignAssembly_107;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DllFileName_108;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ClassFileName_109;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__BeamFileName_110;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__SubModules_111;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__LangSet_114;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ForeignImportsCord_115;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ForeignImports_119;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ForeignImportedModules_122;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IntFileName_132;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Int2FileName_133;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Int3FileName_134;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__OptFileName_135;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__TransOptFileName_136;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Date3FileName_137;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__UseSubdirs_138;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Result3_139;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_248_248;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_251_251;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_252_252;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_254_254;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_255_255;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_257_257;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_258_258;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_260_260;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_261_261;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_263_263;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_264_264;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_266_266;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_267_267;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_269_269;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_270_270;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_272_272;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_274_274;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_277_277;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_453_453;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_456_456;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_457_457;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_459_459;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_460_460;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_462_462;
#line 169 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_472_472;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_475_475;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_478_478;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_480_480;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_481_481;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_483_483;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_484_484;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_486_486;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_488_488;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_490_490;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_491_491;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_493_493;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_494_494;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_496_496;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_498_498;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_499_499;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_501_501;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_515_515;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_518_518;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_519_519;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_521_521;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_536_536;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_574_574;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_630_630;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_633_633;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_634_634;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_636_636;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_637_637;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_639_639;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_641_641;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_642_642;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_644_644;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_645_645;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_647_647;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_649_649;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_650_650;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_652_652;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_653_653;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_655_655;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_657_657;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_658_658;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_660_660;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_661_661;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_663_663;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_665_665;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_666_666;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_668_668;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_669_669;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_671_671;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_673_673;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_674_674;
#line 169 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_676_676;
#line 232 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__SourceFileBase_62;
#line 541 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_112_112;
#line 541 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_113_113;
#line 630 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_887_887;
#line 718 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_897_897;

#line 170 "write_deps_file.m"
        {
#line 170 "write_deps_file.m"
          mercury__list__append_3_p_1(parse_tree__write_deps_file__TypeCtorInfo_871_871, parse_tree__write_deps_file__IntDeps_17, parse_tree__write_deps_file__ImplDeps_18, &parse_tree__write_deps_file__LongDeps0_44);
        }
#line 172 "write_deps_file.m"
        {
#line 172 "write_deps_file.m"
          mercury__set__list_to_set_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_871_871, parse_tree__write_deps_file__LongDeps0_44, &parse_tree__write_deps_file__LongDepsSet0_46);
        }
#line 173 "write_deps_file.m"
        {
#line 173 "write_deps_file.m"
          mercury__set__delete_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_871_871, ((MR_Box) (parse_tree__write_deps_file__ModuleName_14)), parse_tree__write_deps_file__LongDepsSet0_46, &parse_tree__write_deps_file__LongDepsSet_47);
        }
#line 174 "write_deps_file.m"
        {
#line 174 "write_deps_file.m"
          mercury__set__list_to_set_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_871_871, parse_tree__write_deps_file__IndirectDeps_19, &parse_tree__write_deps_file__ShortDepsSet0_48);
        }
#line 175 "write_deps_file.m"
        {
#line 175 "write_deps_file.m"
          mercury__set__difference_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_871_871, parse_tree__write_deps_file__ShortDepsSet0_48, parse_tree__write_deps_file__LongDepsSet_47, &parse_tree__write_deps_file__ShortDepsSet1_49);
        }
#line 176 "write_deps_file.m"
        {
#line 176 "write_deps_file.m"
          mercury__set__delete_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_871_871, ((MR_Box) (parse_tree__write_deps_file__ModuleName_14)), parse_tree__write_deps_file__ShortDepsSet1_49, &parse_tree__write_deps_file__ShortDepsSet_50);
        }
#line 177 "write_deps_file.m"
        {
#line 177 "write_deps_file.m"
          mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_871_871, parse_tree__write_deps_file__LongDepsSet_47, &parse_tree__write_deps_file__LongDeps_51);
        }
#line 178 "write_deps_file.m"
        {
#line 178 "write_deps_file.m"
          mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_871_871, parse_tree__write_deps_file__ShortDepsSet_50, &parse_tree__write_deps_file__ShortDeps_52);
        }
#line 179 "write_deps_file.m"
        {
#line 179 "write_deps_file.m"
          mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_871_871, parse_tree__write_deps_file__AllDepsSet_9, &parse_tree__write_deps_file__AllDeps_53);
        }
#line 15247 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_872_872 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 180 "write_deps_file.m"
        {
#line 180 "write_deps_file.m"
          mercury__list__sort_and_remove_dups_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_872_872, parse_tree__write_deps_file__FactDeps0_23, &parse_tree__write_deps_file__FactDeps_54);
        }
#line 193 "write_deps_file.m"
        if ((parse_tree__write_deps_file__MaybeTransOptDeps_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 194 "write_deps_file.m"
          {
#line 194 "write_deps_file.m"
          }
#line 193 "write_deps_file.m"
        else
#line 183 "write_deps_file.m"
          {
#line 183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDeps0_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeTransOptDeps_10, (MR_Integer) 0)));
#line 183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDepsSet0_56;
#line 183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDepsSet_57;
#line 183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDateDeps_58;
#line 183 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_165_165;

#line 184 "write_deps_file.m"
            {
#line 184 "write_deps_file.m"
              mercury__set__list_to_set_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_871_871, parse_tree__write_deps_file__TransOptDeps0_55, &parse_tree__write_deps_file__TransOptDepsSet0_56);
            }
#line 185 "write_deps_file.m"
            {
#line 185 "write_deps_file.m"
              mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_871_871, parse_tree__write_deps_file__TransOptDepsSet0_56, parse_tree__write_deps_file__LongDepsSet_47, &parse_tree__write_deps_file__TransOptDepsSet_57);
            }
#line 186 "write_deps_file.m"
            {
#line 186 "write_deps_file.m"
              mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_871_871, parse_tree__write_deps_file__TransOptDepsSet_57, &parse_tree__write_deps_file__TransOptDateDeps_58);
            }
#line 190 "write_deps_file.m"
            {
#line 190 "write_deps_file.m"
              parse_tree__write_deps_file__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_165_165, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_37));
#line 190 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_165_165, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[100])));
#line 190 "write_deps_file.m"
            }
#line 190 "write_deps_file.m"
            {
#line 190 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_165_165);
            }
#line 191 "write_deps_file.m"
            {
#line 191 "write_deps_file.m"
              parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__TransOptDateDeps_58, (MR_String) ".trans_opt", parse_tree__write_deps_file__DepStream_43);
            }
#line 183 "write_deps_file.m"
          }
#line 226 "write_deps_file.m"
        if ((parse_tree__write_deps_file__FactDeps_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 227 "write_deps_file.m"
          {
#line 227 "write_deps_file.m"
          }
#line 226 "write_deps_file.m"
        else
#line 198 "write_deps_file.m"
          {
#line 198 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__AssumeGmake_61;
#line 198 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_172_172;
#line 198 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_175_175;

#line 200 "write_deps_file.m"
            {
#line 200 "write_deps_file.m"
              parse_tree__write_deps_file__V_175_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 200 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_175_175, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_35));
#line 200 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_175_175, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[101])));
#line 200 "write_deps_file.m"
            }
#line 200 "write_deps_file.m"
            {
#line 200 "write_deps_file.m"
              parse_tree__write_deps_file__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 200 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 200 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 1) = ((MR_Box) (parse_tree__write_deps_file__V_175_175));
#line 200 "write_deps_file.m"
            }
#line 199 "write_deps_file.m"
            {
#line 199 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_172_172);
            }
#line 201 "write_deps_file.m"
            {
#line 201 "write_deps_file.m"
              parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__FactDeps_54, (MR_String) "", parse_tree__write_deps_file__DepStream_43);
            }
#line 202 "write_deps_file.m"
            {
#line 202 "write_deps_file.m"
              mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_43);
            }
#line 203 "write_deps_file.m"
            {
#line 203 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 119, &parse_tree__write_deps_file__AssumeGmake_61);
            }
#line 214 "write_deps_file.m"
#line 214 "write_deps_file.m"
            switch (parse_tree__write_deps_file__AssumeGmake_61) {
#line 214 "write_deps_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 214 "write_deps_file.m"
              case (MR_Integer) 0:
#line 215 "write_deps_file.m"
                {
#line 215 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_183_183;
#line 215 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_190_190;
#line 215 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_193_193;

#line 217 "write_deps_file.m"
                  {
#line 217 "write_deps_file.m"
                    parse_tree__write_deps_file__V_183_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 217 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_183_183, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_35));
#line 217 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_183_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[102])));
#line 217 "write_deps_file.m"
                  }
#line 216 "write_deps_file.m"
                  {
#line 216 "write_deps_file.m"
                    mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_183_183);
                  }
#line 218 "write_deps_file.m"
                  {
#line 218 "write_deps_file.m"
                    parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__FactDeps_54, (MR_String) ".c", parse_tree__write_deps_file__DepStream_43);
                  }
#line 220 "write_deps_file.m"
                  {
#line 220 "write_deps_file.m"
                    parse_tree__write_deps_file__V_193_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_193_193, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_35));
#line 220 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_193_193, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103])));
#line 220 "write_deps_file.m"
                  }
#line 220 "write_deps_file.m"
                  {
#line 220 "write_deps_file.m"
                    parse_tree__write_deps_file__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_190_190, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 220 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_190_190, 1) = ((MR_Box) (parse_tree__write_deps_file__V_193_193));
#line 220 "write_deps_file.m"
                  }
#line 220 "write_deps_file.m"
                  {
#line 220 "write_deps_file.m"
                    mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_190_190);
                  }
#line 222 "write_deps_file.m"
                  {
#line 222 "write_deps_file.m"
                    parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__FactDeps_54, (MR_String) ".\044O", parse_tree__write_deps_file__DepStream_43);
                  }
#line 224 "write_deps_file.m"
                  {
#line 224 "write_deps_file.m"
                    mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_43);
                  }
#line 215 "write_deps_file.m"
                }
#line 214 "write_deps_file.m"
                break;
#line 214 "write_deps_file.m"
              case (MR_Integer) 1:
#line 205 "write_deps_file.m"
                {
#line 205 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_200_200;
#line 205 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_203_203;
#line 205 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_204_204;
#line 205 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_206_206;
#line 205 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_207_207;
#line 205 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_209_209;
#line 205 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_210_210;
#line 205 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_212_212;

#line 211 "write_deps_file.m"
                  {
#line 211 "write_deps_file.m"
                    parse_tree__write_deps_file__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_212_212, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_35));
#line 211 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_212_212, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[104])));
#line 211 "write_deps_file.m"
                  }
#line 211 "write_deps_file.m"
                  {
#line 211 "write_deps_file.m"
                    parse_tree__write_deps_file__V_210_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_210_210, 0) = ((MR_Box) ((MR_String) ".fact_tables.cs = \044("));
#line 211 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_210_210, 1) = ((MR_Box) (parse_tree__write_deps_file__V_212_212));
#line 211 "write_deps_file.m"
                  }
#line 210 "write_deps_file.m"
                  {
#line 210 "write_deps_file.m"
                    parse_tree__write_deps_file__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_35));
#line 210 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 1) = ((MR_Box) (parse_tree__write_deps_file__V_210_210));
#line 210 "write_deps_file.m"
                  }
#line 209 "write_deps_file.m"
                  {
#line 209 "write_deps_file.m"
                    parse_tree__write_deps_file__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_207_207, 0) = ((MR_Box) ((MR_String) ".fact_tables:%=\044(os_subdir)%.\044O)\n\n"));
#line 209 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_207_207, 1) = ((MR_Box) (parse_tree__write_deps_file__V_209_209));
#line 209 "write_deps_file.m"
                  }
#line 208 "write_deps_file.m"
                  {
#line 208 "write_deps_file.m"
                    parse_tree__write_deps_file__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_35));
#line 208 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 1) = ((MR_Box) (parse_tree__write_deps_file__V_207_207));
#line 208 "write_deps_file.m"
                  }
#line 208 "write_deps_file.m"
                  {
#line 208 "write_deps_file.m"
                    parse_tree__write_deps_file__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_204_204, 0) = ((MR_Box) ((MR_String) ".fact_tables.os = \044("));
#line 208 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_204_204, 1) = ((MR_Box) (parse_tree__write_deps_file__V_206_206));
#line 208 "write_deps_file.m"
                  }
#line 207 "write_deps_file.m"
                  {
#line 207 "write_deps_file.m"
                    parse_tree__write_deps_file__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_203_203, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_35));
#line 207 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_203_203, 1) = ((MR_Box) (parse_tree__write_deps_file__V_204_204));
#line 207 "write_deps_file.m"
                  }
#line 207 "write_deps_file.m"
                  {
#line 207 "write_deps_file.m"
                    parse_tree__write_deps_file__V_200_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_200_200, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 207 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_200_200, 1) = ((MR_Box) (parse_tree__write_deps_file__V_203_203));
#line 207 "write_deps_file.m"
                  }
#line 206 "write_deps_file.m"
                  {
#line 206 "write_deps_file.m"
                    mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_200_200);
                  }
#line 205 "write_deps_file.m"
                }
#line 214 "write_deps_file.m"
                break;
#line 214 "write_deps_file.m"
            }
#line 198 "write_deps_file.m"
          }
#line 230 "write_deps_file.m"
        {
#line 230 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__write_deps_file__SourceFileName_12, (MR_String) ".m", &parse_tree__write_deps_file__SourceFileBase_62);
        }
#line 232 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 231 "write_deps_file.m"
          {
#line 231 "write_deps_file.m"
            {
#line 231 "write_deps_file.m"
              parse_tree__write_deps_file__ErrFileName_63 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__SourceFileBase_62, (MR_String) ".err");
            }
#line 231 "write_deps_file.m"
          }
#line 232 "write_deps_file.m"
        else
#line 233 "write_deps_file.m"
          {
#line 233 "write_deps_file.m"
            {
#line 233 "write_deps_file.m"
              mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_deps_file", (MR_String) "predicate \140parse_tree.write_deps_file.write_dependency_file\'/6", (MR_String) "source file doesn\'t end in \140.m\'");
#line 233 "write_deps_file.m"
              return;
            }
#line 233 "write_deps_file.m"
          }
#line 235 "write_deps_file.m"
        {
#line 235 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".optdate", (MR_Integer) 1, &parse_tree__write_deps_file__OptDateFileName_64);
        }
#line 237 "write_deps_file.m"
        {
#line 237 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".c_date", (MR_Integer) 1, &parse_tree__write_deps_file__CDateFileName_65);
        }
#line 239 "write_deps_file.m"
        {
#line 239 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".s_date", (MR_Integer) 1, &parse_tree__write_deps_file__AsmDateFileName_66);
        }
#line 241 "write_deps_file.m"
        {
#line 241 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".pic_s_date", (MR_Integer) 1, &parse_tree__write_deps_file__PicAsmDateFileName_67);
        }
#line 243 "write_deps_file.m"
        {
#line 243 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".\044O", (MR_Integer) 1, &parse_tree__write_deps_file__ObjFileName_68);
        }
#line 245 "write_deps_file.m"
        {
#line 245 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".il_date", (MR_Integer) 1, &parse_tree__write_deps_file__ILDateFileName_69);
        }
#line 247 "write_deps_file.m"
        {
#line 247 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".java_date", (MR_Integer) 1, &parse_tree__write_deps_file__JavaDateFileName_70);
        }
#line 251 "write_deps_file.m"
        {
#line 251 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".pic_o", (MR_Integer) 1, &parse_tree__write_deps_file__PicObjFileName_71);
        }
#line 253 "write_deps_file.m"
        {
#line 253 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int0", (MR_Integer) 1, &parse_tree__write_deps_file__Int0FileName_72);
        }
#line 264 "write_deps_file.m"
        {
#line 264 "write_deps_file.m"
          parse_tree__write_deps_file__V_272_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_70));
#line 264 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 264 "write_deps_file.m"
        }
#line 262 "write_deps_file.m"
        {
#line 262 "write_deps_file.m"
          parse_tree__write_deps_file__V_270_270 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_270_270, 0) = ((MR_Box) ((MR_String) " "));
#line 262 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_270_270, 1) = ((MR_Box) (parse_tree__write_deps_file__V_272_272));
#line 262 "write_deps_file.m"
        }
#line 262 "write_deps_file.m"
        {
#line 262 "write_deps_file.m"
          parse_tree__write_deps_file__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 0) = ((MR_Box) (parse_tree__write_deps_file__ILDateFileName_69));
#line 262 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 1) = ((MR_Box) (parse_tree__write_deps_file__V_270_270));
#line 262 "write_deps_file.m"
        }
#line 261 "write_deps_file.m"
        {
#line 261 "write_deps_file.m"
          parse_tree__write_deps_file__V_267_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_267_267, 0) = ((MR_Box) ((MR_String) " "));
#line 261 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_267_267, 1) = ((MR_Box) (parse_tree__write_deps_file__V_269_269));
#line 261 "write_deps_file.m"
        }
#line 261 "write_deps_file.m"
        {
#line 261 "write_deps_file.m"
          parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) (parse_tree__write_deps_file__PicAsmDateFileName_67));
#line 261 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__V_267_267));
#line 261 "write_deps_file.m"
        }
#line 260 "write_deps_file.m"
        {
#line 260 "write_deps_file.m"
          parse_tree__write_deps_file__V_264_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 0) = ((MR_Box) ((MR_String) " "));
#line 260 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 260 "write_deps_file.m"
        }
#line 260 "write_deps_file.m"
        {
#line 260 "write_deps_file.m"
          parse_tree__write_deps_file__V_263_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 0) = ((MR_Box) (parse_tree__write_deps_file__AsmDateFileName_66));
#line 260 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 1) = ((MR_Box) (parse_tree__write_deps_file__V_264_264));
#line 260 "write_deps_file.m"
        }
#line 259 "write_deps_file.m"
        {
#line 259 "write_deps_file.m"
          parse_tree__write_deps_file__V_261_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_261_261, 0) = ((MR_Box) ((MR_String) " "));
#line 259 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_261_261, 1) = ((MR_Box) (parse_tree__write_deps_file__V_263_263));
#line 259 "write_deps_file.m"
        }
#line 259 "write_deps_file.m"
        {
#line 259 "write_deps_file.m"
          parse_tree__write_deps_file__V_260_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_65));
#line 259 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 1) = ((MR_Box) (parse_tree__write_deps_file__V_261_261));
#line 259 "write_deps_file.m"
        }
#line 258 "write_deps_file.m"
        {
#line 258 "write_deps_file.m"
          parse_tree__write_deps_file__V_258_258 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_258_258, 0) = ((MR_Box) ((MR_String) " "));
#line 258 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_258_258, 1) = ((MR_Box) (parse_tree__write_deps_file__V_260_260));
#line 258 "write_deps_file.m"
        }
#line 258 "write_deps_file.m"
        {
#line 258 "write_deps_file.m"
          parse_tree__write_deps_file__V_257_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_257_257, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrFileName_63));
#line 258 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_257_257, 1) = ((MR_Box) (parse_tree__write_deps_file__V_258_258));
#line 258 "write_deps_file.m"
        }
#line 257 "write_deps_file.m"
        {
#line 257 "write_deps_file.m"
          parse_tree__write_deps_file__V_255_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_255_255, 0) = ((MR_Box) ((MR_String) " "));
#line 257 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_255_255, 1) = ((MR_Box) (parse_tree__write_deps_file__V_257_257));
#line 257 "write_deps_file.m"
        }
#line 257 "write_deps_file.m"
        {
#line 257 "write_deps_file.m"
          parse_tree__write_deps_file__V_254_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_254_254, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_37));
#line 257 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_254_254, 1) = ((MR_Box) (parse_tree__write_deps_file__V_255_255));
#line 257 "write_deps_file.m"
        }
#line 256 "write_deps_file.m"
        {
#line 256 "write_deps_file.m"
          parse_tree__write_deps_file__V_252_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 0) = ((MR_Box) ((MR_String) " "));
#line 256 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 1) = ((MR_Box) (parse_tree__write_deps_file__V_254_254));
#line 256 "write_deps_file.m"
        }
#line 256 "write_deps_file.m"
        {
#line 256 "write_deps_file.m"
          parse_tree__write_deps_file__V_251_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_251_251, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_64));
#line 256 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_251_251, 1) = ((MR_Box) (parse_tree__write_deps_file__V_252_252));
#line 256 "write_deps_file.m"
        }
#line 255 "write_deps_file.m"
        {
#line 255 "write_deps_file.m"
          parse_tree__write_deps_file__V_248_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_248_248, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 255 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_248_248, 1) = ((MR_Box) (parse_tree__write_deps_file__V_251_251));
#line 255 "write_deps_file.m"
        }
#line 255 "write_deps_file.m"
        {
#line 255 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_248_248);
        }
#line 265 "write_deps_file.m"
        {
#line 265 "write_deps_file.m"
          parse_tree__write_deps_file__V_277_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_277_277, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 265 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_277_277, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 265 "write_deps_file.m"
        }
#line 265 "write_deps_file.m"
        {
#line 265 "write_deps_file.m"
          parse_tree__write_deps_file__V_274_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 0) = ((MR_Box) ((MR_String) " : "));
#line 265 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 1) = ((MR_Box) (parse_tree__write_deps_file__V_277_277));
#line 265 "write_deps_file.m"
        }
#line 265 "write_deps_file.m"
        {
#line 265 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_274_274);
        }
#line 271 "write_deps_file.m"
        if ((parse_tree__write_deps_file__InclDeps_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 272 "write_deps_file.m"
          {
#line 272 "write_deps_file.m"
          }
#line 271 "write_deps_file.m"
        else
#line 269 "write_deps_file.m"
          {
#line 269 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_279_279;
#line 269 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_282_282;

#line 270 "write_deps_file.m"
            {
#line 270 "write_deps_file.m"
              parse_tree__write_deps_file__V_282_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_282_282, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0FileName_72));
#line 270 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_282_282, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "write_deps_file.m"
            }
#line 270 "write_deps_file.m"
            {
#line 270 "write_deps_file.m"
              parse_tree__write_deps_file__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 0) = ((MR_Box) ((MR_String) " "));
#line 270 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 1) = ((MR_Box) (parse_tree__write_deps_file__V_282_282));
#line 270 "write_deps_file.m"
            }
#line 270 "write_deps_file.m"
            {
#line 270 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_279_279);
            }
#line 269 "write_deps_file.m"
          }
#line 274 "write_deps_file.m"
        {
#line 274 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ParentDeps_16, (MR_String) ".int0", parse_tree__write_deps_file__DepStream_43);
        }
#line 275 "write_deps_file.m"
        {
#line 275 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__LongDeps_51, (MR_String) ".int", parse_tree__write_deps_file__DepStream_43);
        }
#line 276 "write_deps_file.m"
        {
#line 276 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ShortDeps_52, (MR_String) ".int2", parse_tree__write_deps_file__DepStream_43);
        }
#line 292 "write_deps_file.m"
        if ((parse_tree__write_deps_file__NestedDeps_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 291 "write_deps_file.m"
          {
#line 291 "write_deps_file.m"
          }
#line 292 "write_deps_file.m"
        else
#line 293 "write_deps_file.m"
          {
#line 293 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Write_78;
#line 301 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_321_321;

#line 294 "write_deps_file.m"
            {
#line 294 "write_deps_file.m"
              parse_tree__write_deps_file__Write_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 294 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_78, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[0]));
#line 294 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_78, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_1));
#line 294 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_78, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 294 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_78, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 294 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_78, 4) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 294 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_78, 5) = ((MR_Box) (parse_tree__write_deps_file__NestedDeps_22));
#line 294 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_78, 6) = ((MR_Box) (parse_tree__write_deps_file__DepStream_43));
#line 294 "write_deps_file.m"
            }
#line 301 "write_deps_file.m"
            {
#line 301 "write_deps_file.m"
              mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_872_872, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Write_78, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[11]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_321_321);
            }
#line 293 "write_deps_file.m"
          }
#line 304 "write_deps_file.m"
        {
#line 304 "write_deps_file.m"
          parse_tree__write_deps_file__ForeignIncludeFiles_82 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, parse_tree__write_deps_file__ForeignIncludeFilesCord_25);
        }
#line 307 "write_deps_file.m"
        {
#line 307 "write_deps_file.m"
          parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__SourceFileName_12, parse_tree__write_deps_file__ForeignIncludeFiles_82);
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
            MR_Word parse_tree__write_deps_file__V_323_323;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_326_326;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_327_327;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_329_329;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_331_331;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_332_332;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_334_334;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_335_335;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_337_337;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_338_338;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_340_340;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_342_342;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_343_343;
#line 311 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_345_345;

#line 318 "write_deps_file.m"
            {
#line 318 "write_deps_file.m"
              parse_tree__write_deps_file__V_345_345 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_345_345, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_68));
#line 318 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_345_345, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[98])));
#line 318 "write_deps_file.m"
            }
#line 317 "write_deps_file.m"
            {
#line 317 "write_deps_file.m"
              parse_tree__write_deps_file__V_343_343 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_343_343, 0) = ((MR_Box) ((MR_String) ".fact_tables.cs) : "));
#line 317 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_343_343, 1) = ((MR_Box) (parse_tree__write_deps_file__V_345_345));
#line 317 "write_deps_file.m"
            }
#line 317 "write_deps_file.m"
            {
#line 317 "write_deps_file.m"
              parse_tree__write_deps_file__V_342_342 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_342_342, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_35));
#line 317 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_342_342, 1) = ((MR_Box) (parse_tree__write_deps_file__V_343_343));
#line 317 "write_deps_file.m"
            }
#line 317 "write_deps_file.m"
            {
#line 317 "write_deps_file.m"
              parse_tree__write_deps_file__V_340_340 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_340_340, 0) = ((MR_Box) ((MR_String) "\044("));
#line 317 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_340_340, 1) = ((MR_Box) (parse_tree__write_deps_file__V_342_342));
#line 317 "write_deps_file.m"
            }
#line 316 "write_deps_file.m"
            {
#line 316 "write_deps_file.m"
              parse_tree__write_deps_file__V_338_338 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_338_338, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 316 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_338_338, 1) = ((MR_Box) (parse_tree__write_deps_file__V_340_340));
#line 316 "write_deps_file.m"
            }
#line 316 "write_deps_file.m"
            {
#line 316 "write_deps_file.m"
              parse_tree__write_deps_file__V_337_337 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_337_337, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 316 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_337_337, 1) = ((MR_Box) (parse_tree__write_deps_file__V_338_338));
#line 316 "write_deps_file.m"
            }
#line 315 "write_deps_file.m"
            {
#line 315 "write_deps_file.m"
              parse_tree__write_deps_file__V_335_335 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_335_335, 0) = ((MR_Box) ((MR_String) ".fact_tables) "));
#line 315 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_335_335, 1) = ((MR_Box) (parse_tree__write_deps_file__V_337_337));
#line 315 "write_deps_file.m"
            }
#line 315 "write_deps_file.m"
            {
#line 315 "write_deps_file.m"
              parse_tree__write_deps_file__V_334_334 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_334_334, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_35));
#line 315 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_334_334, 1) = ((MR_Box) (parse_tree__write_deps_file__V_335_335));
#line 315 "write_deps_file.m"
            }
#line 314 "write_deps_file.m"
            {
#line 314 "write_deps_file.m"
              parse_tree__write_deps_file__V_332_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_332_332, 0) = ((MR_Box) ((MR_String) ".fact_tables.os) : \044("));
#line 314 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_332_332, 1) = ((MR_Box) (parse_tree__write_deps_file__V_334_334));
#line 314 "write_deps_file.m"
            }
#line 314 "write_deps_file.m"
            {
#line 314 "write_deps_file.m"
              parse_tree__write_deps_file__V_331_331 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_331_331, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_35));
#line 314 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_331_331, 1) = ((MR_Box) (parse_tree__write_deps_file__V_332_332));
#line 314 "write_deps_file.m"
            }
#line 314 "write_deps_file.m"
            {
#line 314 "write_deps_file.m"
              parse_tree__write_deps_file__V_329_329 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_329_329, 0) = ((MR_Box) ((MR_String) "\044("));
#line 314 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_329_329, 1) = ((MR_Box) (parse_tree__write_deps_file__V_331_331));
#line 314 "write_deps_file.m"
            }
#line 313 "write_deps_file.m"
            {
#line 313 "write_deps_file.m"
              parse_tree__write_deps_file__V_327_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_327_327, 0) = ((MR_Box) ((MR_String) ".fact_tables)\n\n"));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_327_327, 1) = ((MR_Box) (parse_tree__write_deps_file__V_329_329));
#line 313 "write_deps_file.m"
            }
#line 313 "write_deps_file.m"
            {
#line 313 "write_deps_file.m"
              parse_tree__write_deps_file__V_326_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_326_326, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_35));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_326_326, 1) = ((MR_Box) (parse_tree__write_deps_file__V_327_327));
#line 313 "write_deps_file.m"
            }
#line 313 "write_deps_file.m"
            {
#line 313 "write_deps_file.m"
              parse_tree__write_deps_file__V_323_323 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_323_323, 0) = ((MR_Box) ((MR_String) " \\\n\t\044("));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_323_323, 1) = ((MR_Box) (parse_tree__write_deps_file__V_326_326));
#line 313 "write_deps_file.m"
            }
#line 312 "write_deps_file.m"
            {
#line 312 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_323_323);
            }
#line 311 "write_deps_file.m"
          }
#line 324 "write_deps_file.m"
        {
#line 324 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 331, &parse_tree__write_deps_file__UseOptFiles_85);
        }
#line 325 "write_deps_file.m"
        {
#line 325 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 329, &parse_tree__write_deps_file__Intermod_86);
        }
#line 327 "write_deps_file.m"
        {
#line 327 "write_deps_file.m"
          libs__globals__lookup_accumulating_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 650, &parse_tree__write_deps_file__IntermodDirs_87);
        }
#line 337 "write_deps_file.m"
#line 337 "write_deps_file.m"
        switch (parse_tree__write_deps_file__Intermod_86) {
#line 337 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 337 "write_deps_file.m"
          case (MR_Integer) 0:
#line 338 "write_deps_file.m"
            {
#line 338 "write_deps_file.m"
            }
#line 337 "write_deps_file.m"
            break;
#line 337 "write_deps_file.m"
          case (MR_Integer) 1:
#line 334 "write_deps_file.m"
            {
#line 334 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_352_352;
#line 334 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_355_355;

#line 335 "write_deps_file.m"
              {
#line 335 "write_deps_file.m"
                parse_tree__write_deps_file__V_355_355 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_355_355, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_68));
#line 335 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_355_355, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[105])));
#line 335 "write_deps_file.m"
              }
#line 335 "write_deps_file.m"
              {
#line 335 "write_deps_file.m"
                parse_tree__write_deps_file__V_352_352 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_352_352, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 335 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_352_352, 1) = ((MR_Box) (parse_tree__write_deps_file__V_355_355));
#line 335 "write_deps_file.m"
              }
#line 335 "write_deps_file.m"
              {
#line 335 "write_deps_file.m"
                mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_352_352);
              }
#line 336 "write_deps_file.m"
              {
#line 336 "write_deps_file.m"
                parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__AllDeps_53, (MR_String) ".mh", parse_tree__write_deps_file__DepStream_43);
              }
#line 334 "write_deps_file.m"
            }
#line 337 "write_deps_file.m"
            break;
#line 337 "write_deps_file.m"
        }
#line 341 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Intermod_86 == (MR_Integer) 1);
#line 342 "write_deps_file.m"
        if (!(parse_tree__write_deps_file__succeeded))
#line 342 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__UseOptFiles_85 == (MR_Integer) 1);
#line 409 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 354 "write_deps_file.m"
          {
#line 354 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOpt_88;
#line 354 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__UseTransOpt_89;
#line 354 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_361_361;
#line 354 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_364_364;
#line 354 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_365_365;
#line 354 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_367_367;
#line 354 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_368_368;
#line 354 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_370_370;
#line 354 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_371_371;
#line 354 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_373_373;
#line 354 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_374_374;
#line 354 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_376_376;
#line 354 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_377_377;
#line 354 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_379_379;
#line 354 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_380_380;
#line 354 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_382_382;

#line 353 "write_deps_file.m"
            {
#line 353 "write_deps_file.m"
              parse_tree__write_deps_file__V_382_382 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_382_382, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_70));
#line 353 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_382_382, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[105])));
#line 353 "write_deps_file.m"
            }
#line 352 "write_deps_file.m"
            {
#line 352 "write_deps_file.m"
              parse_tree__write_deps_file__V_380_380 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_380_380, 0) = ((MR_Box) ((MR_String) " "));
#line 352 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_380_380, 1) = ((MR_Box) (parse_tree__write_deps_file__V_382_382));
#line 352 "write_deps_file.m"
            }
#line 352 "write_deps_file.m"
            {
#line 352 "write_deps_file.m"
              parse_tree__write_deps_file__V_379_379 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_379_379, 0) = ((MR_Box) (parse_tree__write_deps_file__ILDateFileName_69));
#line 352 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_379_379, 1) = ((MR_Box) (parse_tree__write_deps_file__V_380_380));
#line 352 "write_deps_file.m"
            }
#line 351 "write_deps_file.m"
            {
#line 351 "write_deps_file.m"
              parse_tree__write_deps_file__V_377_377 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_377_377, 0) = ((MR_Box) ((MR_String) " "));
#line 351 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_377_377, 1) = ((MR_Box) (parse_tree__write_deps_file__V_379_379));
#line 351 "write_deps_file.m"
            }
#line 351 "write_deps_file.m"
            {
#line 351 "write_deps_file.m"
              parse_tree__write_deps_file__V_376_376 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_376_376, 0) = ((MR_Box) (parse_tree__write_deps_file__PicAsmDateFileName_67));
#line 351 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_376_376, 1) = ((MR_Box) (parse_tree__write_deps_file__V_377_377));
#line 351 "write_deps_file.m"
            }
#line 350 "write_deps_file.m"
            {
#line 350 "write_deps_file.m"
              parse_tree__write_deps_file__V_374_374 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_374_374, 0) = ((MR_Box) ((MR_String) " "));
#line 350 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_374_374, 1) = ((MR_Box) (parse_tree__write_deps_file__V_376_376));
#line 350 "write_deps_file.m"
            }
#line 350 "write_deps_file.m"
            {
#line 350 "write_deps_file.m"
              parse_tree__write_deps_file__V_373_373 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_373_373, 0) = ((MR_Box) (parse_tree__write_deps_file__AsmDateFileName_66));
#line 350 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_373_373, 1) = ((MR_Box) (parse_tree__write_deps_file__V_374_374));
#line 350 "write_deps_file.m"
            }
#line 349 "write_deps_file.m"
            {
#line 349 "write_deps_file.m"
              parse_tree__write_deps_file__V_371_371 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_371_371, 0) = ((MR_Box) ((MR_String) " "));
#line 349 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_371_371, 1) = ((MR_Box) (parse_tree__write_deps_file__V_373_373));
#line 349 "write_deps_file.m"
            }
#line 349 "write_deps_file.m"
            {
#line 349 "write_deps_file.m"
              parse_tree__write_deps_file__V_370_370 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_370_370, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_65));
#line 349 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_370_370, 1) = ((MR_Box) (parse_tree__write_deps_file__V_371_371));
#line 349 "write_deps_file.m"
            }
#line 348 "write_deps_file.m"
            {
#line 348 "write_deps_file.m"
              parse_tree__write_deps_file__V_368_368 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_368_368, 0) = ((MR_Box) ((MR_String) " "));
#line 348 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_368_368, 1) = ((MR_Box) (parse_tree__write_deps_file__V_370_370));
#line 348 "write_deps_file.m"
            }
#line 348 "write_deps_file.m"
            {
#line 348 "write_deps_file.m"
              parse_tree__write_deps_file__V_367_367 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_367_367, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrFileName_63));
#line 348 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_367_367, 1) = ((MR_Box) (parse_tree__write_deps_file__V_368_368));
#line 348 "write_deps_file.m"
            }
#line 347 "write_deps_file.m"
            {
#line 347 "write_deps_file.m"
              parse_tree__write_deps_file__V_365_365 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_365_365, 0) = ((MR_Box) ((MR_String) " "));
#line 347 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_365_365, 1) = ((MR_Box) (parse_tree__write_deps_file__V_367_367));
#line 347 "write_deps_file.m"
            }
#line 347 "write_deps_file.m"
            {
#line 347 "write_deps_file.m"
              parse_tree__write_deps_file__V_364_364 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_364_364, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_37));
#line 347 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_364_364, 1) = ((MR_Box) (parse_tree__write_deps_file__V_365_365));
#line 347 "write_deps_file.m"
            }
#line 346 "write_deps_file.m"
            {
#line 346 "write_deps_file.m"
              parse_tree__write_deps_file__V_361_361 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_361_361, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 346 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_361_361, 1) = ((MR_Box) (parse_tree__write_deps_file__V_364_364));
#line 346 "write_deps_file.m"
            }
#line 345 "write_deps_file.m"
            {
#line 345 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_361_361);
            }
#line 366 "write_deps_file.m"
            {
#line 366 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 333, &parse_tree__write_deps_file__TransOpt_88);
            }
#line 368 "write_deps_file.m"
            {
#line 368 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 332, &parse_tree__write_deps_file__UseTransOpt_89);
            }
#line 372 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__TransOpt_88 == (MR_Integer) 1);
#line 373 "write_deps_file.m"
            if (!(parse_tree__write_deps_file__succeeded))
#line 373 "write_deps_file.m"
              parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__UseTransOpt_89 == (MR_Integer) 1);
#line 398 "write_deps_file.m"
            if (parse_tree__write_deps_file__succeeded)
#line 376 "write_deps_file.m"
              {
#line 376 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__BuildOptFiles_90;
#line 376 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptDeps_91;
#line 376 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__TransOptDeps_92;
#line 376 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptInt0Deps_93;
#line 376 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_388_388;
#line 376 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_390_390;
#line 376 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_391_391;
#line 376 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_397_397;

#line 376 "write_deps_file.m"
                {
#line 376 "write_deps_file.m"
                  mercury__bool__not_2_p_0(parse_tree__write_deps_file__UseTransOpt_89, &parse_tree__write_deps_file__BuildOptFiles_90);
                }
#line 378 "write_deps_file.m"
                {
#line 378 "write_deps_file.m"
                  parse_tree__write_deps_file__V_388_388 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 378 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_388_388, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 378 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_388_388, 1) = ((MR_Box) (parse_tree__write_deps_file__LongDeps_51));
#line 378 "write_deps_file.m"
                }
#line 377 "write_deps_file.m"
                {
#line 377 "write_deps_file.m"
                  parse_tree__write_deps_file__get_both_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__BuildOptFiles_90, parse_tree__write_deps_file__V_388_388, parse_tree__write_deps_file__IntermodDirs_87, &parse_tree__write_deps_file__OptDeps_91, &parse_tree__write_deps_file__TransOptDeps_92);
                }
#line 381 "write_deps_file.m"
                {
#line 381 "write_deps_file.m"
                  parse_tree__write_deps_file__V_391_391 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_871_871, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[3], parse_tree__write_deps_file__OptDeps_91);
                }
#line 381 "write_deps_file.m"
                {
#line 381 "write_deps_file.m"
                  parse_tree__write_deps_file__V_390_390 = mercury__list__condense_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_871_871, parse_tree__write_deps_file__V_391_391);
                }
#line 380 "write_deps_file.m"
                {
#line 380 "write_deps_file.m"
                  parse_tree__write_deps_file__OptInt0Deps_93 = mercury__list__sort_and_remove_dups_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_871_871, parse_tree__write_deps_file__V_390_390);
                }
#line 382 "write_deps_file.m"
                {
#line 382 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__OptDeps_91, (MR_String) ".opt", parse_tree__write_deps_file__DepStream_43);
                }
#line 384 "write_deps_file.m"
                {
#line 384 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__OptInt0Deps_93, (MR_String) ".int0", parse_tree__write_deps_file__DepStream_43);
                }
#line 388 "write_deps_file.m"
                {
#line 388 "write_deps_file.m"
                  parse_tree__write_deps_file__V_397_397 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_397_397, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 388 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_397_397, 1) = ((MR_Box) (parse_tree__write_deps_file__V_367_367));
#line 388 "write_deps_file.m"
                }
#line 387 "write_deps_file.m"
                {
#line 387 "write_deps_file.m"
                  mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_397_397);
                }
#line 396 "write_deps_file.m"
                {
#line 396 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__TransOptDeps_92, (MR_String) ".trans_opt", parse_tree__write_deps_file__DepStream_43);
                }
#line 376 "write_deps_file.m"
              }
#line 398 "write_deps_file.m"
            else
#line 399 "write_deps_file.m"
              {
#line 399 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_421_421;
#line 399 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_424_424;
#line 399 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_425_425;
#line 399 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__BuildOptFiles_852;
#line 399 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptDeps_853;
#line 399 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptInt0Deps_854;

#line 399 "write_deps_file.m"
                {
#line 399 "write_deps_file.m"
                  mercury__bool__not_2_p_0(parse_tree__write_deps_file__UseOptFiles_85, &parse_tree__write_deps_file__BuildOptFiles_852);
                }
#line 400 "write_deps_file.m"
                {
#line 400 "write_deps_file.m"
                  parse_tree__write_deps_file__V_421_421 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_421_421, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 400 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_421_421, 1) = ((MR_Box) (parse_tree__write_deps_file__LongDeps_51));
#line 400 "write_deps_file.m"
                }
#line 400 "write_deps_file.m"
                {
#line 400 "write_deps_file.m"
                  parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__BuildOptFiles_852, parse_tree__write_deps_file__V_421_421, parse_tree__write_deps_file__IntermodDirs_87, (MR_String) ".opt", &parse_tree__write_deps_file__OptDeps_853);
                }
#line 403 "write_deps_file.m"
                {
#line 403 "write_deps_file.m"
                  parse_tree__write_deps_file__V_425_425 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_871_871, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[4], parse_tree__write_deps_file__OptDeps_853);
                }
#line 403 "write_deps_file.m"
                {
#line 403 "write_deps_file.m"
                  parse_tree__write_deps_file__V_424_424 = mercury__list__condense_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_871_871, parse_tree__write_deps_file__V_425_425);
                }
#line 402 "write_deps_file.m"
                {
#line 402 "write_deps_file.m"
                  parse_tree__write_deps_file__OptInt0Deps_854 = mercury__list__sort_and_remove_dups_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_871_871, parse_tree__write_deps_file__V_424_424);
                }
#line 404 "write_deps_file.m"
                {
#line 404 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__OptDeps_853, (MR_String) ".opt", parse_tree__write_deps_file__DepStream_43);
                }
#line 406 "write_deps_file.m"
                {
#line 406 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__OptInt0Deps_854, (MR_String) ".int0", parse_tree__write_deps_file__DepStream_43);
                }
#line 399 "write_deps_file.m"
              }
#line 354 "write_deps_file.m"
          }
#line 409 "write_deps_file.m"
        else
#line 409 "write_deps_file.m"
          {
#line 409 "write_deps_file.m"
          }
#line 413 "write_deps_file.m"
        {
#line 413 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 255, &parse_tree__write_deps_file__HighLevelCode_94);
        }
#line 414 "write_deps_file.m"
        {
#line 414 "write_deps_file.m"
          libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_7, &parse_tree__write_deps_file__CompilationTarget_95);
        }
#line 416 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__HighLevelCode_94 == (MR_Integer) 1);
#line 416 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 417 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__CompilationTarget_95 == (MR_Integer) 0);
#line 430 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 428 "write_deps_file.m"
          {
#line 428 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_432_432;
#line 428 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_435_435;
#line 428 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_436_436;
#line 428 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_438_438;

#line 427 "write_deps_file.m"
            {
#line 427 "write_deps_file.m"
              parse_tree__write_deps_file__V_438_438 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 427 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_438_438, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_68));
#line 427 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_438_438, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[100])));
#line 427 "write_deps_file.m"
            }
#line 426 "write_deps_file.m"
            {
#line 426 "write_deps_file.m"
              parse_tree__write_deps_file__V_436_436 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_436_436, 0) = ((MR_Box) ((MR_String) " "));
#line 426 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_436_436, 1) = ((MR_Box) (parse_tree__write_deps_file__V_438_438));
#line 426 "write_deps_file.m"
            }
#line 426 "write_deps_file.m"
            {
#line 426 "write_deps_file.m"
              parse_tree__write_deps_file__V_435_435 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_435_435, 0) = ((MR_Box) (parse_tree__write_deps_file__PicObjFileName_71));
#line 426 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_435_435, 1) = ((MR_Box) (parse_tree__write_deps_file__V_436_436));
#line 426 "write_deps_file.m"
            }
#line 425 "write_deps_file.m"
            {
#line 425 "write_deps_file.m"
              parse_tree__write_deps_file__V_432_432 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 425 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_432_432, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 425 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_432_432, 1) = ((MR_Box) (parse_tree__write_deps_file__V_435_435));
#line 425 "write_deps_file.m"
            }
#line 424 "write_deps_file.m"
            {
#line 424 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_432_432);
            }
#line 429 "write_deps_file.m"
            {
#line 429 "write_deps_file.m"
              parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__AllDeps_53, (MR_String) ".mih", parse_tree__write_deps_file__DepStream_43);
            }
#line 428 "write_deps_file.m"
          }
#line 430 "write_deps_file.m"
        else
#line 430 "write_deps_file.m"
          {
#line 430 "write_deps_file.m"
          }
#line 443 "write_deps_file.m"
        {
#line 443 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".c", (MR_Integer) 1, &parse_tree__write_deps_file__CFileName_96);
        }
#line 445 "write_deps_file.m"
        {
#line 445 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".mh", (MR_Integer) 1, &parse_tree__write_deps_file__HeaderFileName_97);
        }
#line 447 "write_deps_file.m"
        {
#line 447 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".mih", (MR_Integer) 1, &parse_tree__write_deps_file__HeaderFileName2_98);
        }
#line 451 "write_deps_file.m"
        {
#line 451 "write_deps_file.m"
          parse_tree__write_deps_file__V_462_462 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_462_462, 0) = ((MR_Box) (parse_tree__write_deps_file__CFileName_96));
#line 451 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_462_462, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[98])));
#line 451 "write_deps_file.m"
        }
#line 451 "write_deps_file.m"
        {
#line 451 "write_deps_file.m"
          parse_tree__write_deps_file__V_460_460 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_460_460, 0) = ((MR_Box) ((MR_String) " : "));
#line 451 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_460_460, 1) = ((MR_Box) (parse_tree__write_deps_file__V_462_462));
#line 451 "write_deps_file.m"
        }
#line 451 "write_deps_file.m"
        {
#line 451 "write_deps_file.m"
          parse_tree__write_deps_file__V_459_459 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_459_459, 0) = ((MR_Box) (parse_tree__write_deps_file__HeaderFileName2_98));
#line 451 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_459_459, 1) = ((MR_Box) (parse_tree__write_deps_file__V_460_460));
#line 451 "write_deps_file.m"
        }
#line 451 "write_deps_file.m"
        {
#line 451 "write_deps_file.m"
          parse_tree__write_deps_file__V_457_457 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_457_457, 0) = ((MR_Box) ((MR_String) " "));
#line 451 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_457_457, 1) = ((MR_Box) (parse_tree__write_deps_file__V_459_459));
#line 451 "write_deps_file.m"
        }
#line 451 "write_deps_file.m"
        {
#line 451 "write_deps_file.m"
          parse_tree__write_deps_file__V_456_456 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_456_456, 0) = ((MR_Box) (parse_tree__write_deps_file__HeaderFileName_97));
#line 451 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_456_456, 1) = ((MR_Box) (parse_tree__write_deps_file__V_457_457));
#line 451 "write_deps_file.m"
        }
#line 450 "write_deps_file.m"
        {
#line 450 "write_deps_file.m"
          parse_tree__write_deps_file__V_453_453 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 450 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_453_453, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 450 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_453_453, 1) = ((MR_Box) (parse_tree__write_deps_file__V_456_456));
#line 450 "write_deps_file.m"
        }
#line 449 "write_deps_file.m"
        {
#line 449 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_453_453);
        }
#line 457 "write_deps_file.m"
        {
#line 457 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".il", (MR_Integer) 1, &parse_tree__write_deps_file__ILFileName_99);
        }
#line 459 "write_deps_file.m"
        {
#line 459 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".java", (MR_Integer) 1, &parse_tree__write_deps_file__JavaFileName_100);
        }
#line 462 "write_deps_file.m"
        {
#line 462 "write_deps_file.m"
          parse_tree__write_deps_file__V_472_472 = make__make_module_dep_file_extension_0_f_0();
        }
#line 461 "write_deps_file.m"
        {
#line 461 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__V_472_472, (MR_Integer) 1, &parse_tree__write_deps_file__ModuleDepFileName_101);
        }
#line 472 "write_deps_file.m"
        {
#line 472 "write_deps_file.m"
          parse_tree__write_deps_file__V_501_501 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_501_501, 0) = ((MR_Box) (parse_tree__write_deps_file__CFileName_96));
#line 472 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_501_501, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[14])));
#line 472 "write_deps_file.m"
        }
#line 472 "write_deps_file.m"
        {
#line 472 "write_deps_file.m"
          parse_tree__write_deps_file__V_499_499 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_499_499, 0) = ((MR_Box) ((MR_String) " : "));
#line 472 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_499_499, 1) = ((MR_Box) (parse_tree__write_deps_file__V_501_501));
#line 472 "write_deps_file.m"
        }
#line 472 "write_deps_file.m"
        {
#line 472 "write_deps_file.m"
          parse_tree__write_deps_file__V_498_498 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_498_498, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_101));
#line 472 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_498_498, 1) = ((MR_Box) (parse_tree__write_deps_file__V_499_499));
#line 472 "write_deps_file.m"
        }
#line 471 "write_deps_file.m"
        {
#line 471 "write_deps_file.m"
          parse_tree__write_deps_file__V_496_496 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_496_496, 0) = ((MR_Box) ((MR_String) " else\n"));
#line 471 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_496_496, 1) = ((MR_Box) (parse_tree__write_deps_file__V_498_498));
#line 471 "write_deps_file.m"
        }
#line 470 "write_deps_file.m"
        {
#line 470 "write_deps_file.m"
          parse_tree__write_deps_file__V_494_494 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_494_494, 0) = ((MR_Box) ((MR_String) "\n"));
#line 470 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_494_494, 1) = ((MR_Box) (parse_tree__write_deps_file__V_496_496));
#line 470 "write_deps_file.m"
        }
#line 470 "write_deps_file.m"
        {
#line 470 "write_deps_file.m"
          parse_tree__write_deps_file__V_493_493 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_493_493, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaFileName_100));
#line 470 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_493_493, 1) = ((MR_Box) (parse_tree__write_deps_file__V_494_494));
#line 470 "write_deps_file.m"
        }
#line 470 "write_deps_file.m"
        {
#line 470 "write_deps_file.m"
          parse_tree__write_deps_file__V_491_491 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_491_491, 0) = ((MR_Box) ((MR_String) " : "));
#line 470 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_491_491, 1) = ((MR_Box) (parse_tree__write_deps_file__V_493_493));
#line 470 "write_deps_file.m"
        }
#line 470 "write_deps_file.m"
        {
#line 470 "write_deps_file.m"
          parse_tree__write_deps_file__V_490_490 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_490_490, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_101));
#line 470 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_490_490, 1) = ((MR_Box) (parse_tree__write_deps_file__V_491_491));
#line 470 "write_deps_file.m"
        }
#line 469 "write_deps_file.m"
        {
#line 469 "write_deps_file.m"
          parse_tree__write_deps_file__V_488_488 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_488_488, 0) = ((MR_Box) ((MR_String) " ifeq (\044(findstring java,\044(GRADE)),java)\n"));
#line 469 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_488_488, 1) = ((MR_Box) (parse_tree__write_deps_file__V_490_490));
#line 469 "write_deps_file.m"
        }
#line 468 "write_deps_file.m"
        {
#line 468 "write_deps_file.m"
          parse_tree__write_deps_file__V_486_486 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_486_486, 0) = ((MR_Box) ((MR_String) "else\n"));
#line 468 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_486_486, 1) = ((MR_Box) (parse_tree__write_deps_file__V_488_488));
#line 468 "write_deps_file.m"
        }
#line 467 "write_deps_file.m"
        {
#line 467 "write_deps_file.m"
          parse_tree__write_deps_file__V_484_484 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_484_484, 0) = ((MR_Box) ((MR_String) "\n"));
#line 467 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_484_484, 1) = ((MR_Box) (parse_tree__write_deps_file__V_486_486));
#line 467 "write_deps_file.m"
        }
#line 467 "write_deps_file.m"
        {
#line 467 "write_deps_file.m"
          parse_tree__write_deps_file__V_483_483 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_483_483, 0) = ((MR_Box) (parse_tree__write_deps_file__ILFileName_99));
#line 467 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_483_483, 1) = ((MR_Box) (parse_tree__write_deps_file__V_484_484));
#line 467 "write_deps_file.m"
        }
#line 467 "write_deps_file.m"
        {
#line 467 "write_deps_file.m"
          parse_tree__write_deps_file__V_481_481 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_481_481, 0) = ((MR_Box) ((MR_String) " : "));
#line 467 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_481_481, 1) = ((MR_Box) (parse_tree__write_deps_file__V_483_483));
#line 467 "write_deps_file.m"
        }
#line 467 "write_deps_file.m"
        {
#line 467 "write_deps_file.m"
          parse_tree__write_deps_file__V_480_480 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_480_480, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_101));
#line 467 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_480_480, 1) = ((MR_Box) (parse_tree__write_deps_file__V_481_481));
#line 467 "write_deps_file.m"
        }
#line 466 "write_deps_file.m"
        {
#line 466 "write_deps_file.m"
          parse_tree__write_deps_file__V_478_478 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_478_478, 0) = ((MR_Box) ((MR_String) "ifeq (\044(findstring il,\044(GRADE)),il)\n"));
#line 466 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_478_478, 1) = ((MR_Box) (parse_tree__write_deps_file__V_480_480));
#line 466 "write_deps_file.m"
        }
#line 465 "write_deps_file.m"
        {
#line 465 "write_deps_file.m"
          parse_tree__write_deps_file__V_475_475 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_475_475, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 465 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_475_475, 1) = ((MR_Box) (parse_tree__write_deps_file__V_478_478));
#line 465 "write_deps_file.m"
        }
#line 464 "write_deps_file.m"
        {
#line 464 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_475_475);
        }
#line 490 "write_deps_file.m"
        {
#line 490 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".date", (MR_Integer) 1, &parse_tree__write_deps_file__DateFileName_102);
        }
#line 492 "write_deps_file.m"
        {
#line 492 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".date0", (MR_Integer) 1, &parse_tree__write_deps_file__Date0FileName_103);
        }
#line 496 "write_deps_file.m"
        {
#line 496 "write_deps_file.m"
          parse_tree__write_deps_file__V_521_521 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_521_521, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_103));
#line 496 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_521_521, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 496 "write_deps_file.m"
        }
#line 495 "write_deps_file.m"
        {
#line 495 "write_deps_file.m"
          parse_tree__write_deps_file__V_519_519 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_519_519, 0) = ((MR_Box) ((MR_String) " "));
#line 495 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_519_519, 1) = ((MR_Box) (parse_tree__write_deps_file__V_521_521));
#line 495 "write_deps_file.m"
        }
#line 495 "write_deps_file.m"
        {
#line 495 "write_deps_file.m"
          parse_tree__write_deps_file__V_518_518 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_518_518, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_102));
#line 495 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_518_518, 1) = ((MR_Box) (parse_tree__write_deps_file__V_519_519));
#line 495 "write_deps_file.m"
        }
#line 495 "write_deps_file.m"
        {
#line 495 "write_deps_file.m"
          parse_tree__write_deps_file__V_515_515 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_515_515, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 495 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_515_515, 1) = ((MR_Box) (parse_tree__write_deps_file__V_518_518));
#line 495 "write_deps_file.m"
        }
#line 494 "write_deps_file.m"
        {
#line 494 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_515_515);
        }
#line 497 "write_deps_file.m"
        {
#line 497 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ParentDeps_16, (MR_String) ".date", parse_tree__write_deps_file__DepStream_43);
        }
#line 498 "write_deps_file.m"
        {
#line 498 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_274_274);
        }
#line 499 "write_deps_file.m"
        {
#line 499 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ParentDeps_16, (MR_String) ".int0", parse_tree__write_deps_file__DepStream_43);
        }
#line 500 "write_deps_file.m"
        {
#line 500 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__LongDeps_51, (MR_String) ".int3", parse_tree__write_deps_file__DepStream_43);
        }
#line 501 "write_deps_file.m"
        {
#line 501 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ShortDeps_52, (MR_String) ".int3", parse_tree__write_deps_file__DepStream_43);
        }
#line 503 "write_deps_file.m"
        {
#line 503 "write_deps_file.m"
          parse_tree__write_deps_file__V_536_536 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_536_536, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 503 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_536_536, 1) = ((MR_Box) (parse_tree__write_deps_file__V_521_521));
#line 503 "write_deps_file.m"
        }
#line 503 "write_deps_file.m"
        {
#line 503 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_536_536);
        }
#line 504 "write_deps_file.m"
        {
#line 504 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ParentDeps_16, (MR_String) ".date0", parse_tree__write_deps_file__DepStream_43);
        }
#line 505 "write_deps_file.m"
        {
#line 505 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_274_274);
        }
#line 506 "write_deps_file.m"
        {
#line 506 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__LongDeps_51, (MR_String) ".int3", parse_tree__write_deps_file__DepStream_43);
        }
#line 507 "write_deps_file.m"
        {
#line 507 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ShortDeps_52, (MR_String) ".int3", parse_tree__write_deps_file__DepStream_43);
        }
#line 508 "write_deps_file.m"
        {
#line 508 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_43, (MR_String) "\n\n");
        }
#line 514 "write_deps_file.m"
        {
#line 514 "write_deps_file.m"
          parse_tree__source_file_map__have_source_file_map_3_p_0(&parse_tree__write_deps_file__HaveMap_104);
        }
#line 518 "write_deps_file.m"
#line 518 "write_deps_file.m"
        switch (parse_tree__write_deps_file__HaveMap_104) {
#line 518 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 518 "write_deps_file.m"
          case (MR_Integer) 0:
#line 520 "write_deps_file.m"
            parse_tree__write_deps_file__ModuleArg_105 = parse_tree__write_deps_file__SourceFileName_12;
#line 518 "write_deps_file.m"
            break;
#line 518 "write_deps_file.m"
          case (MR_Integer) 1:
#line 517 "write_deps_file.m"
            {
#line 517 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__write_deps_file__SourceFileModuleName_13, &parse_tree__write_deps_file__ModuleArg_105);
            }
#line 518 "write_deps_file.m"
            break;
#line 518 "write_deps_file.m"
        }
#line 523 "write_deps_file.m"
        {
#line 523 "write_deps_file.m"
          libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_7, &parse_tree__write_deps_file__Target_106);
        }
#line 524 "write_deps_file.m"
        {
#line 524 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 162, &parse_tree__write_deps_file__SignAssembly_107);
        }
#line 532 "write_deps_file.m"
        {
#line 532 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".dll", (MR_Integer) 1, &parse_tree__write_deps_file__DllFileName_108);
        }
#line 534 "write_deps_file.m"
        {
#line 534 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".class", (MR_Integer) 1, &parse_tree__write_deps_file__ClassFileName_109);
        }
#line 536 "write_deps_file.m"
        {
#line 536 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".beam", (MR_Integer) 1, &parse_tree__write_deps_file__BeamFileName_110);
        }
#line 538 "write_deps_file.m"
        {
#line 538 "write_deps_file.m"
          parse_tree__write_deps_file__SubModules_111 = parse_tree__write_deps_file__submodules_2_f_0(parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__AllDeps_53);
        }
#line 540 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Target_106 == (MR_Integer) 1);
#line 540 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 540 "write_deps_file.m"
          {
#line 541 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__SubModules_111)) == (MR_mktag((MR_Integer) 1)));
#line 541 "write_deps_file.m"
            if (parse_tree__write_deps_file__succeeded)
#line 541 "write_deps_file.m"
              {
#line 541 "write_deps_file.m"
                parse_tree__write_deps_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__SubModules_111, (MR_Integer) 0)));
#line 541 "write_deps_file.m"
                parse_tree__write_deps_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__SubModules_111, (MR_Integer) 1)));
#line 541 "write_deps_file.m"
              }
#line 540 "write_deps_file.m"
          }
#line 547 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 543 "write_deps_file.m"
          {
#line 543 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_565_565;

#line 543 "write_deps_file.m"
            {
#line 543 "write_deps_file.m"
              parse_tree__write_deps_file__V_565_565 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 543 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_565_565, 0) = ((MR_Box) (parse_tree__write_deps_file__DllFileName_108));
#line 543 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_565_565, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[105])));
#line 543 "write_deps_file.m"
            }
#line 543 "write_deps_file.m"
            {
#line 543 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_565_565);
            }
#line 544 "write_deps_file.m"
            {
#line 544 "write_deps_file.m"
              parse_tree__write_deps_file__write_dll_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SubModules_111, (MR_String) "", parse_tree__write_deps_file__DepStream_43);
            }
#line 546 "write_deps_file.m"
            {
#line 546 "write_deps_file.m"
              mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_43);
            }
#line 543 "write_deps_file.m"
          }
#line 547 "write_deps_file.m"
        else
#line 547 "write_deps_file.m"
          {
#line 547 "write_deps_file.m"
          }
#line 554 "write_deps_file.m"
#line 554 "write_deps_file.m"
        switch (MR_tag((MR_Word) parse_tree__write_deps_file__ContainsForeignCode_26)) {
#line 554 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 554 "write_deps_file.m"
          case (MR_Integer) 0:
#line 554 "write_deps_file.m"
#line 554 "write_deps_file.m"
            switch (MR_unmkbody(parse_tree__write_deps_file__ContainsForeignCode_26)) {
#line 554 "write_deps_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 554 "write_deps_file.m"
              case (MR_Integer) 0:
#line 568 "write_deps_file.m"
                {
#line 569 "write_deps_file.m"
                  {
#line 569 "write_deps_file.m"
                    mercury__set__init_1_p_0((MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0, &parse_tree__write_deps_file__LangSet_114);
                  }
#line 570 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportsCord_115 = parse_tree__write_deps_file__ForeignImportsCord0_24;
#line 568 "write_deps_file.m"
                }
#line 554 "write_deps_file.m"
                break;
#line 554 "write_deps_file.m"
              case (MR_Integer) 1:
#line 555 "write_deps_file.m"
                {
#line 555 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__ForeignImportsCord1_116;
#line 555 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_573_573;
#line 556 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_117_117;
#line 556 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_118_118;

#line 557 "write_deps_file.m"
                  {
#line 557 "write_deps_file.m"
                    parse_tree__write_deps_file__V_573_573 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[1], parse_tree__write_deps_file__ItemBlocksCord_28);
                  }
#line 556 "write_deps_file.m"
                  {
#line 556 "write_deps_file.m"
                    parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__status__parse_tree__status__type_ctor_info_aug_module_section_0, parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__V_573_573, &parse_tree__write_deps_file__LangSet_114, &parse_tree__write_deps_file__ForeignImportsCord1_116, &parse_tree__write_deps_file__V_117_117, &parse_tree__write_deps_file__V_118_118);
                  }
#line 562 "write_deps_file.m"
                  {
#line 562 "write_deps_file.m"
                    parse_tree__write_deps_file__succeeded = mercury__cord__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, parse_tree__write_deps_file__ForeignImportsCord0_24);
                  }
#line 564 "write_deps_file.m"
                  if (parse_tree__write_deps_file__succeeded)
#line 563 "write_deps_file.m"
                    parse_tree__write_deps_file__ForeignImportsCord_115 = parse_tree__write_deps_file__ForeignImportsCord1_116;
#line 564 "write_deps_file.m"
                  else
#line 565 "write_deps_file.m"
                    parse_tree__write_deps_file__ForeignImportsCord_115 = parse_tree__write_deps_file__ForeignImportsCord0_24;
#line 555 "write_deps_file.m"
                }
#line 554 "write_deps_file.m"
                break;
#line 554 "write_deps_file.m"
            }
#line 554 "write_deps_file.m"
            break;
#line 554 "write_deps_file.m"
          case (MR_Integer) 1:
#line 552 "write_deps_file.m"
            {
#line 552 "write_deps_file.m"
              parse_tree__write_deps_file__LangSet_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ContainsForeignCode_26, (MR_Integer) 0)));
#line 553 "write_deps_file.m"
              parse_tree__write_deps_file__ForeignImportsCord_115 = parse_tree__write_deps_file__ForeignImportsCord0_24;
#line 552 "write_deps_file.m"
            }
#line 554 "write_deps_file.m"
            break;
#line 554 "write_deps_file.m"
        }
#line 17228 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_885_885 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
#line 573 "write_deps_file.m"
        {
#line 573 "write_deps_file.m"
          parse_tree__write_deps_file__ForeignImports_119 = mercury__cord__list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_885_885, parse_tree__write_deps_file__ForeignImportsCord_115);
        }
#line 578 "write_deps_file.m"
        {
#line 578 "write_deps_file.m"
          parse_tree__write_deps_file__V_574_574 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 578 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_574_574, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0]));
#line 578 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_574_574, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_4));
#line 578 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_574_574, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 578 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_574_574, 3) = ((MR_Box) (parse_tree__write_deps_file__SourceFileModuleName_13));
#line 578 "write_deps_file.m"
        }
#line 578 "write_deps_file.m"
        {
#line 578 "write_deps_file.m"
          mercury__list__filter_map_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_885_885, parse_tree__write_deps_file__TypeCtorInfo_871_871, parse_tree__write_deps_file__V_574_574, parse_tree__write_deps_file__ForeignImports_119, &parse_tree__write_deps_file__ForeignImportedModules_122);
        }
#line 589 "write_deps_file.m"
        if ((parse_tree__write_deps_file__ForeignImportedModules_122 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 588 "write_deps_file.m"
          {
#line 588 "write_deps_file.m"
          }
#line 589 "write_deps_file.m"
        else
#line 590 "write_deps_file.m"
          {
#line 590 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ForeignImportTargets_125;
#line 590 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__ForeignImportExt_126;
#line 590 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__WriteForeignImportTarget_127;
#line 626 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv4_STATE_VARIABLE_IO_596_596;

#line 595 "write_deps_file.m"
#line 595 "write_deps_file.m"
            switch (parse_tree__write_deps_file__Target_106) {
#line 595 "write_deps_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 595 "write_deps_file.m"
              case (MR_Integer) 0:
#line 609 "write_deps_file.m"
                {
#line 609 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_578_578;

#line 614 "write_deps_file.m"
                  {
#line 614 "write_deps_file.m"
                    parse_tree__write_deps_file__V_578_578 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_578_578, 0) = ((MR_Box) (parse_tree__write_deps_file__PicObjFileName_71));
#line 614 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_578_578, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "write_deps_file.m"
                  }
#line 614 "write_deps_file.m"
                  {
#line 614 "write_deps_file.m"
                    parse_tree__write_deps_file__ForeignImportTargets_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_125, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_68));
#line 614 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_125, 1) = ((MR_Box) (parse_tree__write_deps_file__V_578_578));
#line 614 "write_deps_file.m"
                  }
#line 615 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportExt_126 = (MR_String) ".mh";
#line 609 "write_deps_file.m"
                }
#line 595 "write_deps_file.m"
                break;
#line 595 "write_deps_file.m"
              case (MR_Integer) 2:
#line 596 "write_deps_file.m"
                {
#line 598 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportTargets_125 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 599 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportExt_126 = (MR_String) ".cs";
#line 596 "write_deps_file.m"
                }
#line 595 "write_deps_file.m"
                break;
#line 595 "write_deps_file.m"
              case (MR_Integer) 4:
#line 605 "write_deps_file.m"
                {
#line 606 "write_deps_file.m"
                  {
#line 606 "write_deps_file.m"
                    parse_tree__write_deps_file__ForeignImportTargets_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_125, 0) = ((MR_Box) (parse_tree__write_deps_file__BeamFileName_110));
#line 606 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 606 "write_deps_file.m"
                  }
#line 607 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportExt_126 = (MR_String) ".hrl";
#line 605 "write_deps_file.m"
                }
#line 595 "write_deps_file.m"
                break;
#line 595 "write_deps_file.m"
              case (MR_Integer) 1:
#line 592 "write_deps_file.m"
                {
#line 593 "write_deps_file.m"
                  {
#line 593 "write_deps_file.m"
                    parse_tree__write_deps_file__ForeignImportTargets_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 593 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_125, 0) = ((MR_Box) (parse_tree__write_deps_file__DllFileName_108));
#line 593 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 593 "write_deps_file.m"
                  }
#line 594 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportExt_126 = (MR_String) ".dll";
#line 592 "write_deps_file.m"
                }
#line 595 "write_deps_file.m"
                break;
#line 595 "write_deps_file.m"
              case (MR_Integer) 3:
#line 601 "write_deps_file.m"
                {
#line 602 "write_deps_file.m"
                  {
#line 602 "write_deps_file.m"
                    parse_tree__write_deps_file__ForeignImportTargets_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 602 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_125, 0) = ((MR_Box) (parse_tree__write_deps_file__ClassFileName_109));
#line 602 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 602 "write_deps_file.m"
                  }
#line 603 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportExt_126 = (MR_String) ".java";
#line 601 "write_deps_file.m"
                }
#line 595 "write_deps_file.m"
                break;
#line 595 "write_deps_file.m"
            }
#line 617 "write_deps_file.m"
            {
#line 617 "write_deps_file.m"
              parse_tree__write_deps_file__WriteForeignImportTarget_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 617 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_127, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[1]));
#line 617 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_127, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_5));
#line 617 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_127, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 617 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_127, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 617 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_127, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_43));
#line 617 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_127, 5) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportedModules_122));
#line 617 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_127, 6) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportExt_126));
#line 617 "write_deps_file.m"
            }
#line 626 "write_deps_file.m"
            {
#line 626 "write_deps_file.m"
              mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_872_872, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__WriteForeignImportTarget_127, parse_tree__write_deps_file__ForeignImportTargets_125, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv4_STATE_VARIABLE_IO_596_596);
            }
#line 590 "write_deps_file.m"
          }
#line 630 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Target_106 == (MR_Integer) 1);
#line 630 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 630 "write_deps_file.m"
          {
#line 17418 "parse_tree.write_deps_file.c"
            parse_tree__write_deps_file__TypeCtorInfo_887_887 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 631 "write_deps_file.m"
            {
#line 631 "write_deps_file.m"
              parse_tree__write_deps_file__succeeded = mercury__set__is_non_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_887_887, parse_tree__write_deps_file__LangSet_114);
            }
#line 630 "write_deps_file.m"
          }
#line 636 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 633 "write_deps_file.m"
          {
#line 633 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_888_888 = (MR_Word) &libs__globals__libs__globals__type_ctor_info_foreign_language_0;
#line 633 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Langs_129;
#line 633 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_597_597;
#line 634 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv5_STATE_VARIABLE_IO_598_598;

#line 633 "write_deps_file.m"
            {
#line 633 "write_deps_file.m"
              parse_tree__write_deps_file__Langs_129 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_888_888, parse_tree__write_deps_file__LangSet_114);
            }
#line 634 "write_deps_file.m"
            {
#line 634 "write_deps_file.m"
              parse_tree__write_deps_file__V_597_597 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 634 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_597_597, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
#line 634 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_597_597, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_6));
#line 634 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_597_597, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 634 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_597_597, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 634 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_597_597, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_43));
#line 634 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_597_597, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 634 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_597_597, 6) = ((MR_Box) (parse_tree__write_deps_file__AllDeps_53));
#line 634 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_597_597, 7) = ((MR_Box) (parse_tree__write_deps_file__ForeignImports_119));
#line 634 "write_deps_file.m"
            }
#line 634 "write_deps_file.m"
            {
#line 634 "write_deps_file.m"
              mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_888_888, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_597_597, parse_tree__write_deps_file__Langs_129, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv5_STATE_VARIABLE_IO_598_598);
            }
#line 633 "write_deps_file.m"
          }
#line 636 "write_deps_file.m"
        else
#line 636 "write_deps_file.m"
          {
#line 636 "write_deps_file.m"
          }
#line 646 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Target_106 == (MR_Integer) 1);
#line 646 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 647 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__SignAssembly_107 == (MR_Integer) 1);
#line 657 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 649 "write_deps_file.m"
          {
#line 649 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__ModuleNameString_130;
#line 649 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__IlFileName_131;
#line 649 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_602_602;
#line 649 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_605_605;
#line 649 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_606_606;
#line 649 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_608_608;

#line 649 "write_deps_file.m"
            {
#line 649 "write_deps_file.m"
              parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_14, &parse_tree__write_deps_file__ModuleNameString_130);
            }
#line 650 "write_deps_file.m"
            {
#line 650 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".il", (MR_Integer) 1, &parse_tree__write_deps_file__IlFileName_131);
            }
#line 656 "write_deps_file.m"
            {
#line 656 "write_deps_file.m"
              parse_tree__write_deps_file__V_608_608 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_608_608, 0) = ((MR_Box) (parse_tree__write_deps_file__IlFileName_131));
#line 656 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_608_608, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[106])));
#line 656 "write_deps_file.m"
            }
#line 655 "write_deps_file.m"
            {
#line 655 "write_deps_file.m"
              parse_tree__write_deps_file__V_606_606 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 655 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_606_606, 0) = ((MR_Box) ((MR_String) " = /keyf=mercury.sn\n"));
#line 655 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_606_606, 1) = ((MR_Box) (parse_tree__write_deps_file__V_608_608));
#line 655 "write_deps_file.m"
            }
#line 654 "write_deps_file.m"
            {
#line 654 "write_deps_file.m"
              parse_tree__write_deps_file__V_605_605 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_605_605, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleNameString_130));
#line 654 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_605_605, 1) = ((MR_Box) (parse_tree__write_deps_file__V_606_606));
#line 654 "write_deps_file.m"
            }
#line 654 "write_deps_file.m"
            {
#line 654 "write_deps_file.m"
              parse_tree__write_deps_file__V_602_602 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_602_602, 0) = ((MR_Box) ((MR_String) "ILASM_KEYFLAG-"));
#line 654 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_602_602, 1) = ((MR_Box) (parse_tree__write_deps_file__V_605_605));
#line 654 "write_deps_file.m"
            }
#line 653 "write_deps_file.m"
            {
#line 653 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_602_602);
            }
#line 649 "write_deps_file.m"
          }
#line 657 "write_deps_file.m"
        else
#line 657 "write_deps_file.m"
          {
#line 657 "write_deps_file.m"
          }
#line 661 "write_deps_file.m"
        {
#line 661 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int", (MR_Integer) 1, &parse_tree__write_deps_file__IntFileName_132);
        }
#line 663 "write_deps_file.m"
        {
#line 663 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int2", (MR_Integer) 1, &parse_tree__write_deps_file__Int2FileName_133);
        }
#line 665 "write_deps_file.m"
        {
#line 665 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int3", (MR_Integer) 1, &parse_tree__write_deps_file__Int3FileName_134);
        }
#line 667 "write_deps_file.m"
        {
#line 667 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptFileName_135);
        }
#line 669 "write_deps_file.m"
        {
#line 669 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptFileName_136);
        }
#line 671 "write_deps_file.m"
        {
#line 671 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".date3", (MR_Integer) 1, &parse_tree__write_deps_file__Date3FileName_137);
        }
#line 702 "write_deps_file.m"
        {
#line 702 "write_deps_file.m"
          parse_tree__write_deps_file__V_676_676 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_676_676, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_37));
#line 702 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_676_676, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[16])));
#line 702 "write_deps_file.m"
        }
#line 702 "write_deps_file.m"
        {
#line 702 "write_deps_file.m"
          parse_tree__write_deps_file__V_674_674 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_674_674, 0) = ((MR_Box) ((MR_String) " : "));
#line 702 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_674_674, 1) = ((MR_Box) (parse_tree__write_deps_file__V_676_676));
#line 702 "write_deps_file.m"
        }
#line 702 "write_deps_file.m"
        {
#line 702 "write_deps_file.m"
          parse_tree__write_deps_file__V_673_673 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_673_673, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptFileName_136));
#line 702 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_673_673, 1) = ((MR_Box) (parse_tree__write_deps_file__V_674_674));
#line 702 "write_deps_file.m"
        }
#line 701 "write_deps_file.m"
        {
#line 701 "write_deps_file.m"
          parse_tree__write_deps_file__V_671_671 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_671_671, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 701 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_671_671, 1) = ((MR_Box) (parse_tree__write_deps_file__V_673_673));
#line 701 "write_deps_file.m"
        }
#line 700 "write_deps_file.m"
        {
#line 700 "write_deps_file.m"
          parse_tree__write_deps_file__V_669_669 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_669_669, 0) = ((MR_Box) ((MR_String) "\n"));
#line 700 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_669_669, 1) = ((MR_Box) (parse_tree__write_deps_file__V_671_671));
#line 700 "write_deps_file.m"
        }
#line 700 "write_deps_file.m"
        {
#line 700 "write_deps_file.m"
          parse_tree__write_deps_file__V_668_668 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_668_668, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_64));
#line 700 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_668_668, 1) = ((MR_Box) (parse_tree__write_deps_file__V_669_669));
#line 700 "write_deps_file.m"
        }
#line 700 "write_deps_file.m"
        {
#line 700 "write_deps_file.m"
          parse_tree__write_deps_file__V_666_666 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_666_666, 0) = ((MR_Box) ((MR_String) " : "));
#line 700 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_666_666, 1) = ((MR_Box) (parse_tree__write_deps_file__V_668_668));
#line 700 "write_deps_file.m"
        }
#line 700 "write_deps_file.m"
        {
#line 700 "write_deps_file.m"
          parse_tree__write_deps_file__V_665_665 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_665_665, 0) = ((MR_Box) (parse_tree__write_deps_file__OptFileName_135));
#line 700 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_665_665, 1) = ((MR_Box) (parse_tree__write_deps_file__V_666_666));
#line 700 "write_deps_file.m"
        }
#line 699 "write_deps_file.m"
        {
#line 699 "write_deps_file.m"
          parse_tree__write_deps_file__V_663_663 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_663_663, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 699 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_663_663, 1) = ((MR_Box) (parse_tree__write_deps_file__V_665_665));
#line 699 "write_deps_file.m"
        }
#line 698 "write_deps_file.m"
        {
#line 698 "write_deps_file.m"
          parse_tree__write_deps_file__V_661_661 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_661_661, 0) = ((MR_Box) ((MR_String) "\n"));
#line 698 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_661_661, 1) = ((MR_Box) (parse_tree__write_deps_file__V_663_663));
#line 698 "write_deps_file.m"
        }
#line 698 "write_deps_file.m"
        {
#line 698 "write_deps_file.m"
          parse_tree__write_deps_file__V_660_660 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_660_660, 0) = ((MR_Box) (parse_tree__write_deps_file__Date3FileName_137));
#line 698 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_660_660, 1) = ((MR_Box) (parse_tree__write_deps_file__V_661_661));
#line 698 "write_deps_file.m"
        }
#line 698 "write_deps_file.m"
        {
#line 698 "write_deps_file.m"
          parse_tree__write_deps_file__V_658_658 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_658_658, 0) = ((MR_Box) ((MR_String) " : "));
#line 698 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_658_658, 1) = ((MR_Box) (parse_tree__write_deps_file__V_660_660));
#line 698 "write_deps_file.m"
        }
#line 698 "write_deps_file.m"
        {
#line 698 "write_deps_file.m"
          parse_tree__write_deps_file__V_657_657 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_657_657, 0) = ((MR_Box) (parse_tree__write_deps_file__Int3FileName_134));
#line 698 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_657_657, 1) = ((MR_Box) (parse_tree__write_deps_file__V_658_658));
#line 698 "write_deps_file.m"
        }
#line 697 "write_deps_file.m"
        {
#line 697 "write_deps_file.m"
          parse_tree__write_deps_file__V_655_655 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_655_655, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 697 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_655_655, 1) = ((MR_Box) (parse_tree__write_deps_file__V_657_657));
#line 697 "write_deps_file.m"
        }
#line 696 "write_deps_file.m"
        {
#line 696 "write_deps_file.m"
          parse_tree__write_deps_file__V_653_653 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_653_653, 0) = ((MR_Box) ((MR_String) "\n"));
#line 696 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_653_653, 1) = ((MR_Box) (parse_tree__write_deps_file__V_655_655));
#line 696 "write_deps_file.m"
        }
#line 696 "write_deps_file.m"
        {
#line 696 "write_deps_file.m"
          parse_tree__write_deps_file__V_652_652 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_652_652, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_102));
#line 696 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_652_652, 1) = ((MR_Box) (parse_tree__write_deps_file__V_653_653));
#line 696 "write_deps_file.m"
        }
#line 696 "write_deps_file.m"
        {
#line 696 "write_deps_file.m"
          parse_tree__write_deps_file__V_650_650 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_650_650, 0) = ((MR_Box) ((MR_String) " : "));
#line 696 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_650_650, 1) = ((MR_Box) (parse_tree__write_deps_file__V_652_652));
#line 696 "write_deps_file.m"
        }
#line 696 "write_deps_file.m"
        {
#line 696 "write_deps_file.m"
          parse_tree__write_deps_file__V_649_649 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_649_649, 0) = ((MR_Box) (parse_tree__write_deps_file__Int2FileName_133));
#line 696 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_649_649, 1) = ((MR_Box) (parse_tree__write_deps_file__V_650_650));
#line 696 "write_deps_file.m"
        }
#line 695 "write_deps_file.m"
        {
#line 695 "write_deps_file.m"
          parse_tree__write_deps_file__V_647_647 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_647_647, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 695 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_647_647, 1) = ((MR_Box) (parse_tree__write_deps_file__V_649_649));
#line 695 "write_deps_file.m"
        }
#line 694 "write_deps_file.m"
        {
#line 694 "write_deps_file.m"
          parse_tree__write_deps_file__V_645_645 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_645_645, 0) = ((MR_Box) ((MR_String) "\n"));
#line 694 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_645_645, 1) = ((MR_Box) (parse_tree__write_deps_file__V_647_647));
#line 694 "write_deps_file.m"
        }
#line 694 "write_deps_file.m"
        {
#line 694 "write_deps_file.m"
          parse_tree__write_deps_file__V_644_644 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_644_644, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_102));
#line 694 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_644_644, 1) = ((MR_Box) (parse_tree__write_deps_file__V_645_645));
#line 694 "write_deps_file.m"
        }
#line 694 "write_deps_file.m"
        {
#line 694 "write_deps_file.m"
          parse_tree__write_deps_file__V_642_642 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_642_642, 0) = ((MR_Box) ((MR_String) " : "));
#line 694 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_642_642, 1) = ((MR_Box) (parse_tree__write_deps_file__V_644_644));
#line 694 "write_deps_file.m"
        }
#line 694 "write_deps_file.m"
        {
#line 694 "write_deps_file.m"
          parse_tree__write_deps_file__V_641_641 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_641_641, 0) = ((MR_Box) (parse_tree__write_deps_file__IntFileName_132));
#line 694 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_641_641, 1) = ((MR_Box) (parse_tree__write_deps_file__V_642_642));
#line 694 "write_deps_file.m"
        }
#line 693 "write_deps_file.m"
        {
#line 693 "write_deps_file.m"
          parse_tree__write_deps_file__V_639_639 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 693 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_639_639, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 693 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_639_639, 1) = ((MR_Box) (parse_tree__write_deps_file__V_641_641));
#line 693 "write_deps_file.m"
        }
#line 692 "write_deps_file.m"
        {
#line 692 "write_deps_file.m"
          parse_tree__write_deps_file__V_637_637 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_637_637, 0) = ((MR_Box) ((MR_String) "\n"));
#line 692 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_637_637, 1) = ((MR_Box) (parse_tree__write_deps_file__V_639_639));
#line 692 "write_deps_file.m"
        }
#line 692 "write_deps_file.m"
        {
#line 692 "write_deps_file.m"
          parse_tree__write_deps_file__V_636_636 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_636_636, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_103));
#line 692 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_636_636, 1) = ((MR_Box) (parse_tree__write_deps_file__V_637_637));
#line 692 "write_deps_file.m"
        }
#line 692 "write_deps_file.m"
        {
#line 692 "write_deps_file.m"
          parse_tree__write_deps_file__V_634_634 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_634_634, 0) = ((MR_Box) ((MR_String) " : "));
#line 692 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_634_634, 1) = ((MR_Box) (parse_tree__write_deps_file__V_636_636));
#line 692 "write_deps_file.m"
        }
#line 692 "write_deps_file.m"
        {
#line 692 "write_deps_file.m"
          parse_tree__write_deps_file__V_633_633 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_633_633, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0FileName_72));
#line 692 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_633_633, 1) = ((MR_Box) (parse_tree__write_deps_file__V_634_634));
#line 692 "write_deps_file.m"
        }
#line 691 "write_deps_file.m"
        {
#line 691 "write_deps_file.m"
          parse_tree__write_deps_file__V_630_630 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 691 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_630_630, 0) = ((MR_Box) ((MR_String) "\n"));
#line 691 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_630_630, 1) = ((MR_Box) (parse_tree__write_deps_file__V_633_633));
#line 691 "write_deps_file.m"
        }
#line 690 "write_deps_file.m"
        {
#line 690 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_630_630);
        }
#line 706 "write_deps_file.m"
        {
#line 706 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 647, &parse_tree__write_deps_file__UseSubdirs_138);
        }
#line 714 "write_deps_file.m"
#line 714 "write_deps_file.m"
        switch (parse_tree__write_deps_file__UseSubdirs_138) {
#line 714 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 714 "write_deps_file.m"
          case (MR_Integer) 0:
#line 715 "write_deps_file.m"
            {
#line 715 "write_deps_file.m"
            }
#line 714 "write_deps_file.m"
            break;
#line 714 "write_deps_file.m"
          case (MR_Integer) 1:
#line 708 "write_deps_file.m"
            {
#line 708 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_684_684;
#line 710 "write_deps_file.m"
              MR_Box parse_tree__write_deps_file__conv6_STATE_VARIABLE_IO_686_686;

#line 709 "write_deps_file.m"
              {
#line 709 "write_deps_file.m"
                mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_43);
              }
#line 711 "write_deps_file.m"
              {
#line 711 "write_deps_file.m"
                parse_tree__write_deps_file__V_684_684 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 711 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_684_684, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[0]));
#line 711 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_684_684, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_7));
#line 711 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_684_684, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 711 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_684_684, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 711 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_684_684, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_43));
#line 711 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_684_684, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 711 "write_deps_file.m"
              }
#line 710 "write_deps_file.m"
              {
#line 710 "write_deps_file.m"
                mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_872_872, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_684_684, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[25]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv6_STATE_VARIABLE_IO_686_686);
              }
#line 708 "write_deps_file.m"
            }
#line 714 "write_deps_file.m"
            break;
#line 714 "write_deps_file.m"
        }
#line 718 "write_deps_file.m"
        {
#line 718 "write_deps_file.m"
          parse_tree__write_deps_file__V_897_897 = parse_tree__source_file_map__default_source_file_1_f_0(parse_tree__write_deps_file__ModuleName_14);
        }
#line 718 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__SourceFileName_12, parse_tree__write_deps_file__V_897_897) == 0);
#line 718 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 764 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 734 "write_deps_file.m"
          {
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_705_705;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_708_708;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_709_709;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_711_711;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_712_712;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_714_714;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_716_716;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_718_718;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_719_719;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_721_721;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_722_722;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_724_724;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_725_725;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_727_727;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_729_729;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_730_730;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_732_732;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_733_733;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_735_735;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_736_736;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_738_738;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_740_740;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_741_741;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_743_743;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_744_744;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_746_746;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_747_747;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_749_749;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_751_751;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_752_752;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_754_754;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_755_755;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_757_757;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_758_758;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_760_760;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_762_762;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_764_764;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_765_765;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_767_767;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_768_768;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_770_770;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_771_771;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_773_773;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_775_775;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_776_776;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_778_778;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_779_779;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_781_781;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_782_782;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_784_784;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_786_786;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_788_788;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_789_789;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_791_791;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_792_792;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_794_794;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_795_795;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_797_797;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_799_799;
#line 734 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_801_801;

#line 761 "write_deps_file.m"
            {
#line 761 "write_deps_file.m"
              parse_tree__write_deps_file__V_801_801 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_801_801, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_105));
#line 761 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_801_801, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[107])));
#line 761 "write_deps_file.m"
            }
#line 761 "write_deps_file.m"
            {
#line 761 "write_deps_file.m"
              parse_tree__write_deps_file__V_799_799 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_799_799, 0) = ((MR_Box) ((MR_String) "--java-only "));
#line 761 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_799_799, 1) = ((MR_Box) (parse_tree__write_deps_file__V_801_801));
#line 761 "write_deps_file.m"
            }
#line 760 "write_deps_file.m"
            {
#line 760 "write_deps_file.m"
              parse_tree__write_deps_file__V_797_797 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_797_797, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
#line 760 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_797_797, 1) = ((MR_Box) (parse_tree__write_deps_file__V_799_799));
#line 760 "write_deps_file.m"
            }
#line 759 "write_deps_file.m"
            {
#line 759 "write_deps_file.m"
              parse_tree__write_deps_file__V_795_795 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_795_795, 0) = ((MR_Box) ((MR_String) "\n"));
#line 759 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_795_795, 1) = ((MR_Box) (parse_tree__write_deps_file__V_797_797));
#line 759 "write_deps_file.m"
            }
#line 759 "write_deps_file.m"
            {
#line 759 "write_deps_file.m"
              parse_tree__write_deps_file__V_794_794 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_794_794, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 759 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_794_794, 1) = ((MR_Box) (parse_tree__write_deps_file__V_795_795));
#line 759 "write_deps_file.m"
            }
#line 759 "write_deps_file.m"
            {
#line 759 "write_deps_file.m"
              parse_tree__write_deps_file__V_792_792 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_792_792, 0) = ((MR_Box) ((MR_String) " : "));
#line 759 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_792_792, 1) = ((MR_Box) (parse_tree__write_deps_file__V_794_794));
#line 759 "write_deps_file.m"
            }
#line 759 "write_deps_file.m"
            {
#line 759 "write_deps_file.m"
              parse_tree__write_deps_file__V_791_791 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_791_791, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_70));
#line 759 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_791_791, 1) = ((MR_Box) (parse_tree__write_deps_file__V_792_792));
#line 759 "write_deps_file.m"
            }
#line 758 "write_deps_file.m"
            {
#line 758 "write_deps_file.m"
              parse_tree__write_deps_file__V_789_789 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 758 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_789_789, 0) = ((MR_Box) ((MR_String) " \044(ERR_REDIRECT)\n"));
#line 758 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_789_789, 1) = ((MR_Box) (parse_tree__write_deps_file__V_791_791));
#line 758 "write_deps_file.m"
            }
#line 757 "write_deps_file.m"
            {
#line 757 "write_deps_file.m"
              parse_tree__write_deps_file__V_788_788 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 757 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_788_788, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_105));
#line 757 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_788_788, 1) = ((MR_Box) (parse_tree__write_deps_file__V_789_789));
#line 757 "write_deps_file.m"
            }
#line 757 "write_deps_file.m"
            {
#line 757 "write_deps_file.m"
              parse_tree__write_deps_file__V_786_786 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 757 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_786_786, 0) = ((MR_Box) ((MR_String) "--il-only "));
#line 757 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_786_786, 1) = ((MR_Box) (parse_tree__write_deps_file__V_788_788));
#line 757 "write_deps_file.m"
            }
#line 756 "write_deps_file.m"
            {
#line 756 "write_deps_file.m"
              parse_tree__write_deps_file__V_784_784 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 756 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_784_784, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
#line 756 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_784_784, 1) = ((MR_Box) (parse_tree__write_deps_file__V_786_786));
#line 756 "write_deps_file.m"
            }
#line 755 "write_deps_file.m"
            {
#line 755 "write_deps_file.m"
              parse_tree__write_deps_file__V_782_782 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 755 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_782_782, 0) = ((MR_Box) ((MR_String) "\n"));
#line 755 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_782_782, 1) = ((MR_Box) (parse_tree__write_deps_file__V_784_784));
#line 755 "write_deps_file.m"
            }
#line 755 "write_deps_file.m"
            {
#line 755 "write_deps_file.m"
              parse_tree__write_deps_file__V_781_781 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 755 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_781_781, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 755 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_781_781, 1) = ((MR_Box) (parse_tree__write_deps_file__V_782_782));
#line 755 "write_deps_file.m"
            }
#line 755 "write_deps_file.m"
            {
#line 755 "write_deps_file.m"
              parse_tree__write_deps_file__V_779_779 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 755 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_779_779, 0) = ((MR_Box) ((MR_String) " : "));
#line 755 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_779_779, 1) = ((MR_Box) (parse_tree__write_deps_file__V_781_781));
#line 755 "write_deps_file.m"
            }
#line 755 "write_deps_file.m"
            {
#line 755 "write_deps_file.m"
              parse_tree__write_deps_file__V_778_778 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 755 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_778_778, 0) = ((MR_Box) (parse_tree__write_deps_file__ILDateFileName_69));
#line 755 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_778_778, 1) = ((MR_Box) (parse_tree__write_deps_file__V_779_779));
#line 755 "write_deps_file.m"
            }
#line 754 "write_deps_file.m"
            {
#line 754 "write_deps_file.m"
              parse_tree__write_deps_file__V_776_776 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_776_776, 0) = ((MR_Box) ((MR_String) " \044(ERR_REDIRECT)\n"));
#line 754 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_776_776, 1) = ((MR_Box) (parse_tree__write_deps_file__V_778_778));
#line 754 "write_deps_file.m"
            }
#line 754 "write_deps_file.m"
            {
#line 754 "write_deps_file.m"
              parse_tree__write_deps_file__V_775_775 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_775_775, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_105));
#line 754 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_775_775, 1) = ((MR_Box) (parse_tree__write_deps_file__V_776_776));
#line 754 "write_deps_file.m"
            }
#line 753 "write_deps_file.m"
            {
#line 753 "write_deps_file.m"
              parse_tree__write_deps_file__V_773_773 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_773_773, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
#line 753 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_773_773, 1) = ((MR_Box) (parse_tree__write_deps_file__V_775_775));
#line 753 "write_deps_file.m"
            }
#line 752 "write_deps_file.m"
            {
#line 752 "write_deps_file.m"
              parse_tree__write_deps_file__V_771_771 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_771_771, 0) = ((MR_Box) ((MR_String) "\n"));
#line 752 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_771_771, 1) = ((MR_Box) (parse_tree__write_deps_file__V_773_773));
#line 752 "write_deps_file.m"
            }
#line 752 "write_deps_file.m"
            {
#line 752 "write_deps_file.m"
              parse_tree__write_deps_file__V_770_770 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_770_770, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 752 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_770_770, 1) = ((MR_Box) (parse_tree__write_deps_file__V_771_771));
#line 752 "write_deps_file.m"
            }
#line 752 "write_deps_file.m"
            {
#line 752 "write_deps_file.m"
              parse_tree__write_deps_file__V_768_768 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_768_768, 0) = ((MR_Box) ((MR_String) " : "));
#line 752 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_768_768, 1) = ((MR_Box) (parse_tree__write_deps_file__V_770_770));
#line 752 "write_deps_file.m"
            }
#line 752 "write_deps_file.m"
            {
#line 752 "write_deps_file.m"
              parse_tree__write_deps_file__V_767_767 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_767_767, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_65));
#line 752 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_767_767, 1) = ((MR_Box) (parse_tree__write_deps_file__V_768_768));
#line 752 "write_deps_file.m"
            }
#line 751 "write_deps_file.m"
            {
#line 751 "write_deps_file.m"
              parse_tree__write_deps_file__V_765_765 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_765_765, 0) = ((MR_Box) ((MR_String) "\n"));
#line 751 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_765_765, 1) = ((MR_Box) (parse_tree__write_deps_file__V_767_767));
#line 751 "write_deps_file.m"
            }
#line 751 "write_deps_file.m"
            {
#line 751 "write_deps_file.m"
              parse_tree__write_deps_file__V_764_764 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_764_764, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_105));
#line 751 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_764_764, 1) = ((MR_Box) (parse_tree__write_deps_file__V_765_765));
#line 751 "write_deps_file.m"
            }
#line 751 "write_deps_file.m"
            {
#line 751 "write_deps_file.m"
              parse_tree__write_deps_file__V_762_762 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 751 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_762_762, 0) = ((MR_Box) ((MR_String) "\044(ALL_MCTOIFLAGS) "));
#line 751 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_762_762, 1) = ((MR_Box) (parse_tree__write_deps_file__V_764_764));
#line 751 "write_deps_file.m"
            }
#line 750 "write_deps_file.m"
            {
#line 750 "write_deps_file.m"
              parse_tree__write_deps_file__V_760_760 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_760_760, 0) = ((MR_Box) ((MR_String) "\t\044(MCTOI) \044(ALL_GRADEFLAGS) "));
#line 750 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_760_760, 1) = ((MR_Box) (parse_tree__write_deps_file__V_762_762));
#line 750 "write_deps_file.m"
            }
#line 749 "write_deps_file.m"
            {
#line 749 "write_deps_file.m"
              parse_tree__write_deps_file__V_758_758 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_758_758, 0) = ((MR_Box) ((MR_String) "\n"));
#line 749 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_758_758, 1) = ((MR_Box) (parse_tree__write_deps_file__V_760_760));
#line 749 "write_deps_file.m"
            }
#line 748 "write_deps_file.m"
            {
#line 748 "write_deps_file.m"
              parse_tree__write_deps_file__V_757_757 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_757_757, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 748 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_757_757, 1) = ((MR_Box) (parse_tree__write_deps_file__V_758_758));
#line 748 "write_deps_file.m"
            }
#line 748 "write_deps_file.m"
            {
#line 748 "write_deps_file.m"
              parse_tree__write_deps_file__V_755_755 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_755_755, 0) = ((MR_Box) ((MR_String) " : "));
#line 748 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_755_755, 1) = ((MR_Box) (parse_tree__write_deps_file__V_757_757));
#line 748 "write_deps_file.m"
            }
#line 748 "write_deps_file.m"
            {
#line 748 "write_deps_file.m"
              parse_tree__write_deps_file__V_754_754 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_754_754, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_37));
#line 748 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_754_754, 1) = ((MR_Box) (parse_tree__write_deps_file__V_755_755));
#line 748 "write_deps_file.m"
            }
#line 747 "write_deps_file.m"
            {
#line 747 "write_deps_file.m"
              parse_tree__write_deps_file__V_752_752 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_752_752, 0) = ((MR_Box) ((MR_String) "\n"));
#line 747 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_752_752, 1) = ((MR_Box) (parse_tree__write_deps_file__V_754_754));
#line 747 "write_deps_file.m"
            }
#line 747 "write_deps_file.m"
            {
#line 747 "write_deps_file.m"
              parse_tree__write_deps_file__V_751_751 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_751_751, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_105));
#line 747 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_751_751, 1) = ((MR_Box) (parse_tree__write_deps_file__V_752_752));
#line 747 "write_deps_file.m"
            }
#line 746 "write_deps_file.m"
            {
#line 746 "write_deps_file.m"
              parse_tree__write_deps_file__V_749_749 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_749_749, 0) = ((MR_Box) ((MR_String) "\t\044(MCOI) \044(ALL_GRADEFLAGS) \044(ALL_MCOIFLAGS) "));
#line 746 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_749_749, 1) = ((MR_Box) (parse_tree__write_deps_file__V_751_751));
#line 746 "write_deps_file.m"
            }
#line 745 "write_deps_file.m"
            {
#line 745 "write_deps_file.m"
              parse_tree__write_deps_file__V_747_747 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_747_747, 0) = ((MR_Box) ((MR_String) "\n"));
#line 745 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_747_747, 1) = ((MR_Box) (parse_tree__write_deps_file__V_749_749));
#line 745 "write_deps_file.m"
            }
#line 745 "write_deps_file.m"
            {
#line 745 "write_deps_file.m"
              parse_tree__write_deps_file__V_746_746 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_746_746, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 745 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_746_746, 1) = ((MR_Box) (parse_tree__write_deps_file__V_747_747));
#line 745 "write_deps_file.m"
            }
#line 745 "write_deps_file.m"
            {
#line 745 "write_deps_file.m"
              parse_tree__write_deps_file__V_744_744 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_744_744, 0) = ((MR_Box) ((MR_String) " : "));
#line 745 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_744_744, 1) = ((MR_Box) (parse_tree__write_deps_file__V_746_746));
#line 745 "write_deps_file.m"
            }
#line 745 "write_deps_file.m"
            {
#line 745 "write_deps_file.m"
              parse_tree__write_deps_file__V_743_743 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_743_743, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_64));
#line 745 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_743_743, 1) = ((MR_Box) (parse_tree__write_deps_file__V_744_744));
#line 745 "write_deps_file.m"
            }
#line 744 "write_deps_file.m"
            {
#line 744 "write_deps_file.m"
              parse_tree__write_deps_file__V_741_741 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_741_741, 0) = ((MR_Box) ((MR_String) "\n"));
#line 744 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_741_741, 1) = ((MR_Box) (parse_tree__write_deps_file__V_743_743));
#line 744 "write_deps_file.m"
            }
#line 744 "write_deps_file.m"
            {
#line 744 "write_deps_file.m"
              parse_tree__write_deps_file__V_740_740 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_740_740, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_105));
#line 744 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_740_740, 1) = ((MR_Box) (parse_tree__write_deps_file__V_741_741));
#line 744 "write_deps_file.m"
            }
#line 743 "write_deps_file.m"
            {
#line 743 "write_deps_file.m"
              parse_tree__write_deps_file__V_738_738 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_738_738, 0) = ((MR_Box) ((MR_String) "\t\044(MCSI) \044(ALL_GRADEFLAGS) \044(ALL_MCSIFLAGS) "));
#line 743 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_738_738, 1) = ((MR_Box) (parse_tree__write_deps_file__V_740_740));
#line 743 "write_deps_file.m"
            }
#line 742 "write_deps_file.m"
            {
#line 742 "write_deps_file.m"
              parse_tree__write_deps_file__V_736_736 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_736_736, 0) = ((MR_Box) ((MR_String) "\n"));
#line 742 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_736_736, 1) = ((MR_Box) (parse_tree__write_deps_file__V_738_738));
#line 742 "write_deps_file.m"
            }
#line 742 "write_deps_file.m"
            {
#line 742 "write_deps_file.m"
              parse_tree__write_deps_file__V_735_735 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_735_735, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 742 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_735_735, 1) = ((MR_Box) (parse_tree__write_deps_file__V_736_736));
#line 742 "write_deps_file.m"
            }
#line 742 "write_deps_file.m"
            {
#line 742 "write_deps_file.m"
              parse_tree__write_deps_file__V_733_733 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_733_733, 0) = ((MR_Box) ((MR_String) " : "));
#line 742 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_733_733, 1) = ((MR_Box) (parse_tree__write_deps_file__V_735_735));
#line 742 "write_deps_file.m"
            }
#line 742 "write_deps_file.m"
            {
#line 742 "write_deps_file.m"
              parse_tree__write_deps_file__V_732_732 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_732_732, 0) = ((MR_Box) (parse_tree__write_deps_file__Date3FileName_137));
#line 742 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_732_732, 1) = ((MR_Box) (parse_tree__write_deps_file__V_733_733));
#line 742 "write_deps_file.m"
            }
#line 741 "write_deps_file.m"
            {
#line 741 "write_deps_file.m"
              parse_tree__write_deps_file__V_730_730 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_730_730, 0) = ((MR_Box) ((MR_String) "\n"));
#line 741 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_730_730, 1) = ((MR_Box) (parse_tree__write_deps_file__V_732_732));
#line 741 "write_deps_file.m"
            }
#line 741 "write_deps_file.m"
            {
#line 741 "write_deps_file.m"
              parse_tree__write_deps_file__V_729_729 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_729_729, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_105));
#line 741 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_729_729, 1) = ((MR_Box) (parse_tree__write_deps_file__V_730_730));
#line 741 "write_deps_file.m"
            }
#line 740 "write_deps_file.m"
            {
#line 740 "write_deps_file.m"
              parse_tree__write_deps_file__V_727_727 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_727_727, 0) = ((MR_Box) ((MR_String) "\t\044(MCI) \044(ALL_GRADEFLAGS) \044(ALL_MCIFLAGS) "));
#line 740 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_727_727, 1) = ((MR_Box) (parse_tree__write_deps_file__V_729_729));
#line 740 "write_deps_file.m"
            }
#line 739 "write_deps_file.m"
            {
#line 739 "write_deps_file.m"
              parse_tree__write_deps_file__V_725_725 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_725_725, 0) = ((MR_Box) ((MR_String) "\n"));
#line 739 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_725_725, 1) = ((MR_Box) (parse_tree__write_deps_file__V_727_727));
#line 739 "write_deps_file.m"
            }
#line 739 "write_deps_file.m"
            {
#line 739 "write_deps_file.m"
              parse_tree__write_deps_file__V_724_724 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_724_724, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 739 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_724_724, 1) = ((MR_Box) (parse_tree__write_deps_file__V_725_725));
#line 739 "write_deps_file.m"
            }
#line 739 "write_deps_file.m"
            {
#line 739 "write_deps_file.m"
              parse_tree__write_deps_file__V_722_722 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_722_722, 0) = ((MR_Box) ((MR_String) " : "));
#line 739 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_722_722, 1) = ((MR_Box) (parse_tree__write_deps_file__V_724_724));
#line 739 "write_deps_file.m"
            }
#line 739 "write_deps_file.m"
            {
#line 739 "write_deps_file.m"
              parse_tree__write_deps_file__V_721_721 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_721_721, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_102));
#line 739 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_721_721, 1) = ((MR_Box) (parse_tree__write_deps_file__V_722_722));
#line 739 "write_deps_file.m"
            }
#line 738 "write_deps_file.m"
            {
#line 738 "write_deps_file.m"
              parse_tree__write_deps_file__V_719_719 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 738 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_719_719, 0) = ((MR_Box) ((MR_String) "\n"));
#line 738 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_719_719, 1) = ((MR_Box) (parse_tree__write_deps_file__V_721_721));
#line 738 "write_deps_file.m"
            }
#line 738 "write_deps_file.m"
            {
#line 738 "write_deps_file.m"
              parse_tree__write_deps_file__V_718_718 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 738 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_718_718, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_105));
#line 738 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_718_718, 1) = ((MR_Box) (parse_tree__write_deps_file__V_719_719));
#line 738 "write_deps_file.m"
            }
#line 738 "write_deps_file.m"
            {
#line 738 "write_deps_file.m"
              parse_tree__write_deps_file__V_716_716 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 738 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_716_716, 0) = ((MR_Box) ((MR_String) "\044(ALL_MCPIFLAGS) "));
#line 738 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_716_716, 1) = ((MR_Box) (parse_tree__write_deps_file__V_718_718));
#line 738 "write_deps_file.m"
            }
#line 737 "write_deps_file.m"
            {
#line 737 "write_deps_file.m"
              parse_tree__write_deps_file__V_714_714 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 737 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_714_714, 0) = ((MR_Box) ((MR_String) "\t\044(MCPI) \044(ALL_GRADEFLAGS) "));
#line 737 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_714_714, 1) = ((MR_Box) (parse_tree__write_deps_file__V_716_716));
#line 737 "write_deps_file.m"
            }
#line 736 "write_deps_file.m"
            {
#line 736 "write_deps_file.m"
              parse_tree__write_deps_file__V_712_712 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_712_712, 0) = ((MR_Box) ((MR_String) "\n"));
#line 736 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_712_712, 1) = ((MR_Box) (parse_tree__write_deps_file__V_714_714));
#line 736 "write_deps_file.m"
            }
#line 736 "write_deps_file.m"
            {
#line 736 "write_deps_file.m"
              parse_tree__write_deps_file__V_711_711 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_711_711, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 736 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_711_711, 1) = ((MR_Box) (parse_tree__write_deps_file__V_712_712));
#line 736 "write_deps_file.m"
            }
#line 736 "write_deps_file.m"
            {
#line 736 "write_deps_file.m"
              parse_tree__write_deps_file__V_709_709 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_709_709, 0) = ((MR_Box) ((MR_String) " : "));
#line 736 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_709_709, 1) = ((MR_Box) (parse_tree__write_deps_file__V_711_711));
#line 736 "write_deps_file.m"
            }
#line 736 "write_deps_file.m"
            {
#line 736 "write_deps_file.m"
              parse_tree__write_deps_file__V_708_708 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_708_708, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_103));
#line 736 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_708_708, 1) = ((MR_Box) (parse_tree__write_deps_file__V_709_709));
#line 736 "write_deps_file.m"
            }
#line 735 "write_deps_file.m"
            {
#line 735 "write_deps_file.m"
              parse_tree__write_deps_file__V_705_705 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 735 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_705_705, 0) = ((MR_Box) ((MR_String) "\n"));
#line 735 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_705_705, 1) = ((MR_Box) (parse_tree__write_deps_file__V_708_708));
#line 735 "write_deps_file.m"
            }
#line 734 "write_deps_file.m"
            {
#line 734 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_43, parse_tree__write_deps_file__V_705_705);
            }
#line 734 "write_deps_file.m"
          }
#line 764 "write_deps_file.m"
        else
#line 764 "write_deps_file.m"
          {
#line 764 "write_deps_file.m"
          }
#line 768 "write_deps_file.m"
        {
#line 768 "write_deps_file.m"
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DepStream_43);
        }
#line 769 "write_deps_file.m"
        {
#line 769 "write_deps_file.m"
          mercury__io__rename_file_5_p_0(parse_tree__write_deps_file__TmpDependencyFileName_38, parse_tree__write_deps_file__DependencyFileName_36, &parse_tree__write_deps_file__Result3_139);
        }
#line 802 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Result3_139 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 803 "write_deps_file.m"
          {
#line 804 "write_deps_file.m"
            {
#line 804 "write_deps_file.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_34, (MR_String) " done.\n");
#line 804 "write_deps_file.m"
              return;
            }
#line 803 "write_deps_file.m"
          }
#line 802 "write_deps_file.m"
        else
#line 772 "write_deps_file.m"
          {
#line 772 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Result4_141;

#line 775 "write_deps_file.m"
            {
#line 775 "write_deps_file.m"
              mercury__io__remove_file_4_p_0(parse_tree__write_deps_file__DependencyFileName_36, &parse_tree__write_deps_file__Result4_141);
            }
#line 784 "write_deps_file.m"
            if ((parse_tree__write_deps_file__Result4_141 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 785 "write_deps_file.m"
              {
#line 785 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__Result5_144;

#line 786 "write_deps_file.m"
                {
#line 786 "write_deps_file.m"
                  mercury__io__rename_file_5_p_0(parse_tree__write_deps_file__TmpDependencyFileName_38, parse_tree__write_deps_file__DependencyFileName_36, &parse_tree__write_deps_file__Result5_144);
                }
#line 797 "write_deps_file.m"
                if ((parse_tree__write_deps_file__Result5_144 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 798 "write_deps_file.m"
                  {
#line 799 "write_deps_file.m"
                    {
#line 799 "write_deps_file.m"
                      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_34, (MR_String) " done.\n");
#line 799 "write_deps_file.m"
                      return;
                    }
#line 798 "write_deps_file.m"
                  }
#line 797 "write_deps_file.m"
                else
#line 789 "write_deps_file.m"
                  {
#line 789 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__Error5_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result5_144, (MR_Integer) 0)));
#line 789 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_816_816;
#line 789 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_818_818;
#line 789 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_819_819;
#line 789 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_821_821;
#line 789 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_822_822;
#line 789 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_824_824;
#line 789 "write_deps_file.m"
                    MR_String parse_tree__write_deps_file__Message_861;
#line 789 "write_deps_file.m"
                    MR_String parse_tree__write_deps_file__ErrorMsg_862;

#line 790 "write_deps_file.m"
                    {
#line 790 "write_deps_file.m"
                      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_34, (MR_String) " failed.\n");
                    }
#line 791 "write_deps_file.m"
                    {
#line 791 "write_deps_file.m"
                      libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_34);
                    }
#line 792 "write_deps_file.m"
                    {
#line 792 "write_deps_file.m"
                      mercury__io__error_message_2_p_0(parse_tree__write_deps_file__Error5_145, &parse_tree__write_deps_file__ErrorMsg_862);
                    }
#line 795 "write_deps_file.m"
                    {
#line 795 "write_deps_file.m"
                      parse_tree__write_deps_file__V_824_824 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_824_824, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrorMsg_862));
#line 795 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_824_824, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 795 "write_deps_file.m"
                    }
#line 795 "write_deps_file.m"
                    {
#line 795 "write_deps_file.m"
                      parse_tree__write_deps_file__V_822_822 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_822_822, 0) = ((MR_Box) ((MR_String) "\': "));
#line 795 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_822_822, 1) = ((MR_Box) (parse_tree__write_deps_file__V_824_824));
#line 795 "write_deps_file.m"
                    }
#line 794 "write_deps_file.m"
                    {
#line 794 "write_deps_file.m"
                      parse_tree__write_deps_file__V_821_821 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_821_821, 0) = ((MR_Box) (parse_tree__write_deps_file__DependencyFileName_36));
#line 794 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_821_821, 1) = ((MR_Box) (parse_tree__write_deps_file__V_822_822));
#line 794 "write_deps_file.m"
                    }
#line 794 "write_deps_file.m"
                    {
#line 794 "write_deps_file.m"
                      parse_tree__write_deps_file__V_819_819 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_819_819, 0) = ((MR_Box) ((MR_String) "\' as \140"));
#line 794 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_819_819, 1) = ((MR_Box) (parse_tree__write_deps_file__V_821_821));
#line 794 "write_deps_file.m"
                    }
#line 794 "write_deps_file.m"
                    {
#line 794 "write_deps_file.m"
                      parse_tree__write_deps_file__V_818_818 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_818_818, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpDependencyFileName_38));
#line 794 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_818_818, 1) = ((MR_Box) (parse_tree__write_deps_file__V_819_819));
#line 794 "write_deps_file.m"
                    }
#line 793 "write_deps_file.m"
                    {
#line 793 "write_deps_file.m"
                      parse_tree__write_deps_file__V_816_816 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_816_816, 0) = ((MR_Box) ((MR_String) "can\'t rename file \140"));
#line 793 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_816_816, 1) = ((MR_Box) (parse_tree__write_deps_file__V_818_818));
#line 793 "write_deps_file.m"
                    }
#line 793 "write_deps_file.m"
                    {
#line 793 "write_deps_file.m"
                      mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_816_816, &parse_tree__write_deps_file__Message_861);
                    }
#line 796 "write_deps_file.m"
                    {
#line 796 "write_deps_file.m"
                      libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_861);
#line 796 "write_deps_file.m"
                      return;
                    }
#line 789 "write_deps_file.m"
                  }
#line 785 "write_deps_file.m"
              }
#line 784 "write_deps_file.m"
            else
#line 777 "write_deps_file.m"
              {
#line 777 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__Error4_142 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result4_141, (MR_Integer) 0)));
#line 777 "write_deps_file.m"
                MR_String parse_tree__write_deps_file__ErrorMsg_143;
#line 777 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_830_830;
#line 777 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_832_832;
#line 777 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_833_833;
#line 777 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_835_835;
#line 777 "write_deps_file.m"
                MR_String parse_tree__write_deps_file__Message_860;

#line 778 "write_deps_file.m"
                {
#line 778 "write_deps_file.m"
                  libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_34, (MR_String) " failed.\n");
                }
#line 779 "write_deps_file.m"
                {
#line 779 "write_deps_file.m"
                  libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_34);
                }
#line 780 "write_deps_file.m"
                {
#line 780 "write_deps_file.m"
                  mercury__io__error_message_2_p_0(parse_tree__write_deps_file__Error4_142, &parse_tree__write_deps_file__ErrorMsg_143);
                }
#line 782 "write_deps_file.m"
                {
#line 782 "write_deps_file.m"
                  parse_tree__write_deps_file__V_835_835 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 782 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_835_835, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrorMsg_143));
#line 782 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_835_835, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 782 "write_deps_file.m"
                }
#line 782 "write_deps_file.m"
                {
#line 782 "write_deps_file.m"
                  parse_tree__write_deps_file__V_833_833 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 782 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_833_833, 0) = ((MR_Box) ((MR_String) "\': "));
#line 782 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_833_833, 1) = ((MR_Box) (parse_tree__write_deps_file__V_835_835));
#line 782 "write_deps_file.m"
                }
#line 781 "write_deps_file.m"
                {
#line 781 "write_deps_file.m"
                  parse_tree__write_deps_file__V_832_832 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_832_832, 0) = ((MR_Box) (parse_tree__write_deps_file__DependencyFileName_36));
#line 781 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_832_832, 1) = ((MR_Box) (parse_tree__write_deps_file__V_833_833));
#line 781 "write_deps_file.m"
                }
#line 781 "write_deps_file.m"
                {
#line 781 "write_deps_file.m"
                  parse_tree__write_deps_file__V_830_830 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_830_830, 0) = ((MR_Box) ((MR_String) "can\'t remove file \140"));
#line 781 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_830_830, 1) = ((MR_Box) (parse_tree__write_deps_file__V_832_832));
#line 781 "write_deps_file.m"
                }
#line 781 "write_deps_file.m"
                {
#line 781 "write_deps_file.m"
                  mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_830_830, &parse_tree__write_deps_file__Message_860);
                }
#line 783 "write_deps_file.m"
                {
#line 783 "write_deps_file.m"
                  libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_860);
#line 783 "write_deps_file.m"
                  return;
                }
#line 777 "write_deps_file.m"
              }
#line 772 "write_deps_file.m"
          }
#line 169 "write_deps_file.m"
      }
#line 133 "write_deps_file.m"
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
