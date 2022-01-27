/*
** Automatically generated from `write_deps_file.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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


#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "make.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
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
#include "array.mih"
#include "assoc_list.mih"
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
#include "integer.mih"
#include "io.mih"
#include "library.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
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



#line 1922 "write_deps_file.m"
struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s {
#line 1922 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17;
#line 1928 "write_deps_file.m"
  MR_bool parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded;
#line 1946 "write_deps_file.m"
  jmp_buf parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0;
#line 1946 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__TypeCtorInfo_366_366;
#line 1946 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_44_44;
#line 1946 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_45_45;
#line 1946 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339;
#line 1946 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_29_29;
#line 1946 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_V_29_29;
#line 1946 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_V_44_44;
#line 1922 "write_deps_file.m"
};


#line 137 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 140 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 143 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 146 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

#line 149 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

#line 152 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

#line 1568 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(
#line 1568 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1568 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 1568 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4,
#line 1568 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5);

#line 1561 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(
#line 1561 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_5,
#line 1561 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_6,
#line 1561 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__ExtraLinkObjs_8);

#line 1005 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0_1(
#line 1005 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1005 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 1194 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1194__1_5_p_0(
#line 1194 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1194 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_117,
#line 1194 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__HeadVar__3_118);

#line 1148 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1148__1_2_p_0(
#line 1148 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1148 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_90);

#line 1039 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1039__1_4_p_0(
#line 1039 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsGraph_8,
#line 1039 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_15,
#line 1039 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_16,
#line 1039 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__4_17);

#line 2298 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__referenced_dlls__2298__1_1_f_0(
#line 2298 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_17);

#line 1006 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_files__1006__1_2_p_0(
#line 1006 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_33,
#line 1006 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_59);

#line 620 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__620__1_7_p_0(
#line 620 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 620 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_48,
#line 620 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImportedModuleNames_147,
#line 620 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ForeignImportExt_149,
#line 620 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_587);

#line 586 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__586__1_3_p_0(
#line 586 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SourceFileModuleName_13,
#line 586 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_578,
#line 586 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_579);

#line 290 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__290__1_7_p_0(
#line 290 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 290 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_14,
#line 290 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__NestedDeps_22,
#line 290 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_48,
#line 290 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_321);

#line 2415 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__compare_module_names_3_p_0(
#line 2415 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym1_4,
#line 2415 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym2_5,
#line 2415 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__Result_6);

#line 2323 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_both_opt_deps_8_p_0(
#line 2323 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 2323 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__BuildOptFiles_2,
#line 2323 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IntermodDirs_3,
#line 2323 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4,
#line 2323 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__5_5,
#line 2323 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__6_6);

#line 2283 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0_1(
#line 2283 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2283 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2283 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2283 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 2278 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0(
#line 2278 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Stream_5,
#line 2278 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SCC0_6);

#line 2234 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_source_file_3_p_0(
#line 2234 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_4,
#line 2234 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_5,
#line 2234 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__FileName_6);

#line 2146 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(
#line 2146 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_17,
#line 2146 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_18,
#line 2146 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_19,
#line 2146 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_20,
#line 2146 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ExeFileName_21,
#line 2146 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_22,
#line 2146 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_23,
#line 2146 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitPicObjFileName_24,
#line 2146 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_25,
#line 2146 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__LibFileName_26,
#line 2146 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SharedLibFileName_27,
#line 2146 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__JarFileName_28,
#line 2146 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DepFileName_29,
#line 2146 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DvFileName_30);

#line 2133 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(
#line 2133 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 2133 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_9,
#line 2133 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 2133 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_11,
#line 2133 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__5_5);

#line 2117 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1(
#line 2117 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2117 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2117 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2117 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 2111 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(
#line 2111 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 2111 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 2111 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 2111 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_10);

#line 1946 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(
#line 1946 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 1946 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3(
#line 1946 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 1946 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(
#line 1946 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 1946 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(
#line 1946 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 1922 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(
#line 1922 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_14,
#line 1922 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_15,
#line 1922 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_16,
#line 1922 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_17,
#line 1922 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_18,
#line 1922 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_19,
#line 1922 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_20,
#line 1922 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_21,
#line 1922 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_22,
#line 1922 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeOptsVar_23,
#line 1922 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeTransOptsVar_24);

#line 1879 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(
#line 1879 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_11,
#line 1879 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12,
#line 1879 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_13,
#line 1879 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_14,
#line 1879 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_15,
#line 1879 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_16,
#line 1879 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DepFileName_17,
#line 1879 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DvFileName_18);

#line 1651 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(
#line 1651 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_19,
#line 1651 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_20,
#line 1651 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_21,
#line 1651 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_22,
#line 1651 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_23,
#line 1651 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_24,
#line 1651 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_25,
#line 1651 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_26,
#line 1651 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_27,
#line 1651 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeOptsVar_28,
#line 1651 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeTransOptsVar_29,
#line 1651 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeModuleDepsVar_30,
#line 1651 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__ExeFileName_31,
#line 1651 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__JarFileName_32,
#line 1651 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__LibFileName_33,
#line 1651 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__SharedLibFileName_34);

#line 1593 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_7_p_0(
#line 1593 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1593 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1593 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1593 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1593 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12);

#line 1507 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__select_ok_modules_3_p_0(
#line 1507 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1507 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_2,
#line 1507 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_3);

#line 1194 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_4(
#line 1194 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1194 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1194 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
#line 1194 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
#line 1194 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4);

#line 1148 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_3(
#line 1148 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1148 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 1129 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_2(
#line 1129 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1129 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1129 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 1126 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_1(
#line 1126 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1126 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1126 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 1126 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 1102 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0(
#line 1102 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1102 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1102 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1102 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1102 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12);

#line 1039 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1(
#line 1039 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1039 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1039 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 1039 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 1033 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(
#line 1033 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsGraph0_4,
#line 1033 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_5,
#line 1033 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__Dependencies_6);

#line 924 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(
#line 924 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 924 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 924 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 924 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Ext_10);

#line 911 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(
#line 911 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_1,
#line 911 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_2,
#line 911 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3);

#line 898 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(
#line 898 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 898 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_2,
#line 898 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 898 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4);

#line 885 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(
#line 885 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 885 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_2,
#line 885 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 885 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 885 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__5_5);

#line 875 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependency_5_p_0(
#line 875 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 875 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 875 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFile_8);

#line 872 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0_1(
#line 872 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 872 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 872 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 872 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 866 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0(
#line 866 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 866 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 866 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFiles_8);

#line 840 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(
#line 840 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 840 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2);

#line 818 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(
#line 818 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 818 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_10,
#line 818 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Prefix_11,
#line 818 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_12,
#line 818 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Basis_13,
#line 818 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_14);

#line 807 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_list_6_p_0(
#line 807 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 807 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_2,
#line 807 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 807 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4);

#line 800 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_set_6_p_0(
#line 800 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 800 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 800 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_9,
#line 800 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_10);

#line 2298 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__referenced_dlls_2_f_0_1(
#line 2298 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2298 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 2262 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1(
#line 2262 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2262 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2262 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2262 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 683 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_6(
#line 683 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 683 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 683 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 683 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 620 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_5(
#line 620 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 620 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 620 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 620 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 586 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_4(
#line 586 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 586 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 586 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 398 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_3(
#line 398 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 398 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 377 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_2(
#line 377 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 377 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 290 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_1(
#line 290 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 290 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 290 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 290 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[120][2];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[9][3];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[3][1];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[3][10];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[3][5];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[4][6];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_7[1][9];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[2][7];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[2][8];




static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[120][2] = {
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
    ((MR_Box) ((MR_String) ".java_date")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "\t\100:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) ".dll")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) ".class")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) ".java")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) ".pic_s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) ".s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) ".pic_o")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) ".\044O")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) ".c")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[1])),
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
    ((MR_Box) ((MR_String) ".trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 87 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[86])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[85])))
  },
  /* row 88 */
  {
    ((MR_Box) ((MR_String) ".opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 89 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[88])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[87])))
  },
  /* row 90 */
  {
    ((MR_Box) ((MR_String) ".int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 91 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[90])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[89])))
  },
  /* row 92 */
  {
    ((MR_Box) ((MR_String) ".ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 93 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[92])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[91])))
  },
  /* row 94 */
  {
    ((MR_Box) ((MR_String) ".check")),
    ((MR_Box) ((MR_String) ".errs"))
  },
  /* row 95 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[94])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[93])))
  },
  /* row 96 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 97 */
  {
    ((MR_Box) ((MR_String) ".foreign_cs) | xargs rm -f\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[96])))
  },
  /* row 98 */
  {
    ((MR_Box) ((MR_String) " :")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 99 */
  {
    ((MR_Box) ((MR_String) ".fact_tables =")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_String) ".fact_tables.cs =")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_String) ".fact_tables.os =")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_String) ".fact_tables:%=\044(cs_subdir)%.c)\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_String) " : ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_String) " \044(ERR_REDIRECT)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_String) ".cs)\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLLIBS_DEP))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLOBJS))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLOBJS)))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_String) "ifeq (\044(findstring il,\044(GRADE)),il)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_String) ".foreign_dlls)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_String) " ifeq (\044(findstring java,\044(GRADE)),java)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_String) ".classes)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_String) "else\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_String) " else\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_String) " endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_String) " \044(ALL_MLLIBS)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 117 */
  {
    ((MR_Box) ((MR_String) "\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 118 */
  {
    ((MR_Box) ((MR_String) ")\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 119 */
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
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[1])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[3])),
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

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[4][6] = {
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[2][7] = {
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

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[2][8] = {
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



#line 1691 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1699 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1707 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1715 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0
  }
};

#line 1724 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1733 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1568 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(
#line 1568 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1568 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 1568 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4,
#line 1568 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5)
#line 1568 "write_deps_file.m"
{
#line 1573 "write_deps_file.m"
  while (MR_TRUE)
#line 1573 "write_deps_file.m"
    {
#line 1573 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 1573 "write_deps_file.m"
      {
#line 1573 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 1573 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1573 "write_deps_file.m"
          *parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4;
#line 1573 "write_deps_file.m"
        else
#line 1575 "write_deps_file.m"
          {
#line 1575 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_54_54 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1575 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_56_56;
#line 1575 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1575 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Modules_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1575 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ModuleImports_17;
#line 1575 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FactDeps_18;
#line 1575 "write_deps_file.m"
            MR_Integer parse_tree__write_deps_file__NumFactDeps_19;
#line 1575 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ModuleList_20;
#line 1575 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__NewLinkObjs_22;
#line 1575 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_25_25;
#line 1575 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26;
#line 1576 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv0_V_25_25;
#line 1576 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_16_16;
#line 1579 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_28_28;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_29_29;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_30_30;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_31_31;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_32_32;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_33_33;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_34_34;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_35_35;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_36_36;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_37_37;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_38_38;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_39_39;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_40_40;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_41_41;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_42_42;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_43_43;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_44_44;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_45_45;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_46_46;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_47_47;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_48_48;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_49_49;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_50_50;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_51_51;
#line 1579 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_52_52;
#line 1579 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_53_53;

#line 1576 "write_deps_file.m"
            {
#line 1576 "write_deps_file.m"
              mercury__map__lookup_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_54_54, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__HeadVar__2_2, ((MR_Box) (parse_tree__write_deps_file__Module_11)), &parse_tree__write_deps_file__conv0_V_25_25);
            }
#line 1576 "write_deps_file.m"
            parse_tree__write_deps_file__V_25_25 = ((MR_Word) parse_tree__write_deps_file__conv0_V_25_25);
#line 1576 "write_deps_file.m"
            parse_tree__write_deps_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_25_25, (MR_Integer) 0)));
#line 1576 "write_deps_file.m"
            parse_tree__write_deps_file__ModuleImports_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_25_25, (MR_Integer) 1)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 0)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 1)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 2)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 3)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 4)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 5)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 6)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 7)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 8)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 9)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 10)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__FactDeps_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 11)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 12)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 13)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 14)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 15)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 16)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 17)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 18)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 19)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 20)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 21)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 22)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 23)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 24)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 25)));
#line 1579 "write_deps_file.m"
            parse_tree__write_deps_file__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 26)));
#line 1918 "parse_tree.write_deps_file.c"
            parse_tree__write_deps_file__TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1580 "write_deps_file.m"
            {
#line 1580 "write_deps_file.m"
              mercury__list__length_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_56_56, parse_tree__write_deps_file__FactDeps_18, &parse_tree__write_deps_file__NumFactDeps_19);
            }
#line 1581 "write_deps_file.m"
            {
#line 1581 "write_deps_file.m"
              mercury__list__duplicate_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_54_54, parse_tree__write_deps_file__NumFactDeps_19, ((MR_Box) (parse_tree__write_deps_file__Module_11)), &parse_tree__write_deps_file__ModuleList_20);
            }
#line 1582 "write_deps_file.m"
            {
#line 1582 "write_deps_file.m"
              mercury__assoc_list__from_corresponding_lists_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_56_56, parse_tree__write_deps_file__TypeCtorInfo_54_54, parse_tree__write_deps_file__FactDeps_18, parse_tree__write_deps_file__ModuleList_20, &parse_tree__write_deps_file__NewLinkObjs_22);
            }
#line 1588 "write_deps_file.m"
            {
#line 1588 "write_deps_file.m"
              mercury__list__append_3_p_1((MR_Word) &parse_tree__write_deps_file_scalar_common_2[2], parse_tree__write_deps_file__NewLinkObjs_22, parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4, &parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26);
            }
#line 1589 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 1589 "write_deps_file.m"
            {
#line 1589 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__1__tmp_copy_1 = parse_tree__write_deps_file__Modules_12;
#line 1589 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0__tmp_copy_4 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26;

#line 1589 "write_deps_file.m"
              parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0__tmp_copy_4;
#line 1589 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__1_1 = parse_tree__write_deps_file__HeadVar__1__tmp_copy_1;
#line 1589 "write_deps_file.m"
            }
#line 1589 "write_deps_file.m"
            continue;
#line 1575 "write_deps_file.m"
          }
#line 1573 "write_deps_file.m"
      }
#line 1573 "write_deps_file.m"
      break;
#line 1573 "write_deps_file.m"
    }
#line 1568 "write_deps_file.m"
}

#line 1561 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(
#line 1561 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_5,
#line 1561 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_6,
#line 1561 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__ExtraLinkObjs_8)
#line 1561 "write_deps_file.m"
{
#line 1564 "write_deps_file.m"
  {
#line 1564 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1564 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ExtraLinkObjs0_9;

#line 1565 "write_deps_file.m"
    {
#line 1565 "write_deps_file.m"
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(parse_tree__write_deps_file__Modules_5, parse_tree__write_deps_file__DepsMap_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_deps_file__ExtraLinkObjs0_9);
    }
#line 1566 "write_deps_file.m"
    {
#line 1566 "write_deps_file.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_2[2], parse_tree__write_deps_file__ExtraLinkObjs0_9, parse_tree__write_deps_file__ExtraLinkObjs_8);
#line 1566 "write_deps_file.m"
      return;
    }
#line 1564 "write_deps_file.m"
  }
#line 1561 "write_deps_file.m"
}

#line 1005 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0_1(
#line 1005 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1005 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 1005 "write_deps_file.m"
{
#line 1005 "write_deps_file.m"
  {
#line 1005 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1005 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 1005 "write_deps_file.m"
    {
#line 1005 "write_deps_file.m"
      return parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_files__1006__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 1005 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1005 "write_deps_file.m"
  }
#line 1005 "write_deps_file.m"
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
#line 942 "write_deps_file.m"
  while (MR_TRUE)
#line 942 "write_deps_file.m"
    {
#line 942 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 942 "write_deps_file.m"
      {
#line 942 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 942 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 942 "write_deps_file.m"
          {
#line 942 "write_deps_file.m"
          }
#line 942 "write_deps_file.m"
        else
#line 945 "write_deps_file.m"
          {
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_135_135;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Dep_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 0)));
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Deps_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 1)));
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ModuleName_33;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__IndirectOptDeps_34;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Intermod_35;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__IntDeps_36;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ImpDeps_37;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__IndirectDeps_38;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ForeignImportModules0_39;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Target_40;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ForeignImportModules_41;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FindModule_42;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDeps0_45;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDeps_48;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Errors_49;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FatalErrors_50;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Dep_22, (MR_Integer) 1)));
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_56_56;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_57_57;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_60_60;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_136_136;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_137_137;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_138_138;
#line 945 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_139_139;
#line 947 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Dep_22, (MR_Integer) 0)));
#line 995 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_81_81;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_82_82;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_83_83;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_84_84;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_85_85;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_86_86;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_87_87;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_88_88;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_89_89;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_90_90;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_91_91;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_92_92;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_94_94;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_95_95;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_96_96;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_97_97;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_98_98;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_99_99;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_100_100;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_101_101;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_102_102;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_103_103;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_104_104;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_105_105;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_106_106;
#line 995 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_107_107;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_93_93;
#line 1008 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_44_44;
#line 1012 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDeps1_47;
#line 1009 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_46_46;
#line 1019 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_108_108;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_109_109;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_110_110;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_111_111;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_112_112;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_113_113;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_114_114;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_115_115;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_116_116;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_117_117;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_118_118;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_119_119;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_120_120;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_121_121;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_122_122;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_123_123;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_124_124;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_125_125;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_126_126;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_127_127;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_128_128;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_129_129;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_130_130;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_131_131;
#line 1019 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_132_132;
#line 1019 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_133_133;

#line 953 "write_deps_file.m"
            {
#line 953 "write_deps_file.m"
              parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, &parse_tree__write_deps_file__ModuleName_33);
            }
#line 954 "write_deps_file.m"
            {
#line 954 "write_deps_file.m"
              parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__IndirectOptDepsGraph_6, parse_tree__write_deps_file__ModuleName_33, &parse_tree__write_deps_file__IndirectOptDeps_34);
            }
#line 956 "write_deps_file.m"
            {
#line 956 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_1, (MR_Integer) 321, &parse_tree__write_deps_file__Intermod_35);
            }
#line 966 "write_deps_file.m"
#line 966 "write_deps_file.m"
            switch (parse_tree__write_deps_file__Intermod_35) {
#line 966 "write_deps_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 966 "write_deps_file.m"
              case (MR_Integer) 0:
#line 967 "write_deps_file.m"
                {
#line 968 "write_deps_file.m"
                  {
#line 968 "write_deps_file.m"
                    parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__IntDepsGraph_3, parse_tree__write_deps_file__ModuleName_33, &parse_tree__write_deps_file__IntDeps_36);
                  }
#line 969 "write_deps_file.m"
                  {
#line 969 "write_deps_file.m"
                    parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__ImpDepsGraph_4, parse_tree__write_deps_file__ModuleName_33, &parse_tree__write_deps_file__ImpDeps_37);
                  }
#line 970 "write_deps_file.m"
                  {
#line 970 "write_deps_file.m"
                    parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__IndirectDepsGraph_5, parse_tree__write_deps_file__ModuleName_33, &parse_tree__write_deps_file__IndirectDeps_38);
                  }
#line 967 "write_deps_file.m"
                }
#line 966 "write_deps_file.m"
                break;
#line 966 "write_deps_file.m"
              case (MR_Integer) 1:
#line 959 "write_deps_file.m"
                {
#line 963 "write_deps_file.m"
                  parse_tree__write_deps_file__IntDeps_36 = parse_tree__write_deps_file__IndirectOptDeps_34;
#line 964 "write_deps_file.m"
                  parse_tree__write_deps_file__ImpDeps_37 = parse_tree__write_deps_file__IndirectOptDeps_34;
#line 965 "write_deps_file.m"
                  parse_tree__write_deps_file__IndirectDeps_38 = parse_tree__write_deps_file__IndirectOptDeps_34;
#line 959 "write_deps_file.m"
                }
#line 966 "write_deps_file.m"
                break;
#line 966 "write_deps_file.m"
            }
#line 976 "write_deps_file.m"
            {
#line 976 "write_deps_file.m"
              parse_tree__write_deps_file__ForeignImportModules0_39 = parse_tree__prog_data__init_foreign_import_modules_0_f_0();
            }
#line 977 "write_deps_file.m"
            {
#line 977 "write_deps_file.m"
              libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_1, &parse_tree__write_deps_file__Target_40);
            }
#line 980 "write_deps_file.m"
            parse_tree__write_deps_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_39, (MR_Integer) 0)));
#line 980 "write_deps_file.m"
            parse_tree__write_deps_file__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_39, (MR_Integer) 1)));
#line 980 "write_deps_file.m"
            parse_tree__write_deps_file__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_39, (MR_Integer) 2)));
#line 980 "write_deps_file.m"
            parse_tree__write_deps_file__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_39, (MR_Integer) 3)));
#line 982 "write_deps_file.m"
#line 982 "write_deps_file.m"
            switch (parse_tree__write_deps_file__Target_40) {
#line 982 "write_deps_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 982 "write_deps_file.m"
              case (MR_Integer) 0:
#line 980 "write_deps_file.m"
                {
#line 980 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportModules_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 980 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 0) = ((MR_Box) (parse_tree__write_deps_file__IndirectOptDeps_34));
#line 980 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_138_138));
#line 980 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 2) = ((MR_Box) (parse_tree__write_deps_file__V_137_137));
#line 980 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 3) = ((MR_Box) (parse_tree__write_deps_file__V_136_136));
#line 980 "write_deps_file.m"
                }
#line 982 "write_deps_file.m"
                break;
#line 982 "write_deps_file.m"
              case (MR_Integer) 1:
#line 984 "write_deps_file.m"
                {
#line 984 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportModules_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 984 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 0) = ((MR_Box) (parse_tree__write_deps_file__V_139_139));
#line 984 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 1) = ((MR_Box) (parse_tree__write_deps_file__IndirectOptDeps_34));
#line 984 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 2) = ((MR_Box) (parse_tree__write_deps_file__V_137_137));
#line 984 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 3) = ((MR_Box) (parse_tree__write_deps_file__V_136_136));
#line 984 "write_deps_file.m"
                }
#line 982 "write_deps_file.m"
                break;
#line 982 "write_deps_file.m"
              case (MR_Integer) 3:
#line 992 "write_deps_file.m"
                {
#line 992 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportModules_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 992 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 0) = ((MR_Box) (parse_tree__write_deps_file__V_139_139));
#line 992 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_138_138));
#line 992 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 2) = ((MR_Box) (parse_tree__write_deps_file__V_137_137));
#line 992 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 3) = ((MR_Box) (parse_tree__write_deps_file__IndirectOptDeps_34));
#line 992 "write_deps_file.m"
                }
#line 982 "write_deps_file.m"
                break;
#line 982 "write_deps_file.m"
              case (MR_Integer) 2:
#line 988 "write_deps_file.m"
                {
#line 988 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportModules_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 988 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 0) = ((MR_Box) (parse_tree__write_deps_file__V_139_139));
#line 988 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_138_138));
#line 988 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 2) = ((MR_Box) (parse_tree__write_deps_file__IndirectOptDeps_34));
#line 988 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 3) = ((MR_Box) (parse_tree__write_deps_file__V_136_136));
#line 988 "write_deps_file.m"
                }
#line 982 "write_deps_file.m"
                break;
#line 982 "write_deps_file.m"
            }
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_81_81 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 0)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 1)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 2)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 3)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 4)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 5)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 6)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 7)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 8)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 9)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 10)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 11)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 12)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 13)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 14)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 15)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 16)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 17)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 18)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 19)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 20)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 21)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 22)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 23)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 24)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 25)));
#line 995 "write_deps_file.m"
            parse_tree__write_deps_file__V_107_107 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 26)));
#line 995 "write_deps_file.m"
            {
#line 995 "write_deps_file.m"
              parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 0) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_82_82));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 2) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 3) = ((MR_Box) (parse_tree__write_deps_file__V_84_84));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 4) = ((MR_Box) (parse_tree__write_deps_file__V_85_85));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 5) = ((MR_Box) (parse_tree__write_deps_file__V_86_86));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 6) = ((MR_Box) (parse_tree__write_deps_file__V_87_87));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 7) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 8) = ((MR_Box) (parse_tree__write_deps_file__V_89_89));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 9) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 10) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 11) = ((MR_Box) (parse_tree__write_deps_file__V_92_92));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 12) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportModules_41));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 13) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 14) = ((MR_Box) (parse_tree__write_deps_file__V_95_95));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 15) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 16) = ((MR_Box) (parse_tree__write_deps_file__V_97_97));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 17) = ((MR_Box) (parse_tree__write_deps_file__V_98_98));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 18) = ((MR_Box) (parse_tree__write_deps_file__V_99_99));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 19) = ((MR_Box) (parse_tree__write_deps_file__V_100_100));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 20) = ((MR_Box) (parse_tree__write_deps_file__V_101_101));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 21) = ((MR_Box) (parse_tree__write_deps_file__V_102_102));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 22) = ((MR_Box) (parse_tree__write_deps_file__V_103_103));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 23) = ((MR_Box) (parse_tree__write_deps_file__V_104_104));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 24) = ((MR_Box) (parse_tree__write_deps_file__V_105_105));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 25) = ((MR_Box) (parse_tree__write_deps_file__V_106_106));
#line 995 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 26) = ((MR_Box) (parse_tree__write_deps_file__V_107_107));
#line 995 "write_deps_file.m"
            }
#line 997 "write_deps_file.m"
            {
#line 997 "write_deps_file.m"
              parse_tree__module_imports__module_and_imports_set_int_deps_3_p_0(parse_tree__write_deps_file__IntDeps_36, parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, &parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_56_56);
            }
#line 998 "write_deps_file.m"
            {
#line 998 "write_deps_file.m"
              parse_tree__module_imports__module_and_imports_set_imp_deps_3_p_0(parse_tree__write_deps_file__ImpDeps_37, parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_56_56, &parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_57_57);
            }
#line 999 "write_deps_file.m"
            {
#line 999 "write_deps_file.m"
              parse_tree__module_imports__module_and_imports_set_indirect_deps_3_p_0(parse_tree__write_deps_file__IndirectDeps_38, parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_57_57, &parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58);
            }
#line 1005 "write_deps_file.m"
            {
#line 1005 "write_deps_file.m"
              parse_tree__write_deps_file__FindModule_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1005 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_42, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[1]));
#line 1005 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_42, 1) = ((MR_Box) (parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0_1));
#line 1005 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1005 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_42, 3) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_33));
#line 1005 "write_deps_file.m"
            }
#line 1008 "write_deps_file.m"
            {
#line 1008 "write_deps_file.m"
              mercury__list__takewhile_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_deps_file__FindModule_42, parse_tree__write_deps_file__TransOptOrder_7, &parse_tree__write_deps_file__V_44_44, &parse_tree__write_deps_file__TransOptDeps0_45);
            }
#line 1009 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__TransOptDeps0_45)) == (MR_mktag((MR_Integer) 1)));
#line 1009 "write_deps_file.m"
            if (parse_tree__write_deps_file__succeeded)
#line 1009 "write_deps_file.m"
              {
#line 1009 "write_deps_file.m"
                parse_tree__write_deps_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__TransOptDeps0_45, (MR_Integer) 0)));
#line 1009 "write_deps_file.m"
                parse_tree__write_deps_file__TransOptDeps1_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__TransOptDeps0_45, (MR_Integer) 1)));
#line 1011 "write_deps_file.m"
                parse_tree__write_deps_file__TransOptDeps_48 = parse_tree__write_deps_file__TransOptDeps1_47;
#line 1009 "write_deps_file.m"
              }
#line 1009 "write_deps_file.m"
            else
#line 1013 "write_deps_file.m"
              parse_tree__write_deps_file__TransOptDeps_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_108_108 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 0)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 1)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 2)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 3)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 4)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 5)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 6)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 7)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 8)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 9)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 10)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 11)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 12)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 13)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 14)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 15)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 16)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 17)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 18)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 19)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 20)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 21)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 22)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__Errors_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 23)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 24)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 25)));
#line 1019 "write_deps_file.m"
            parse_tree__write_deps_file__V_133_133 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 26)));
#line 1020 "write_deps_file.m"
            {
#line 1020 "write_deps_file.m"
              parse_tree__write_deps_file__V_60_60 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
            }
#line 2621 "parse_tree.write_deps_file.c"
            parse_tree__write_deps_file__TypeCtorInfo_135_135 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1020 "write_deps_file.m"
            {
#line 1020 "write_deps_file.m"
              mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_135_135, parse_tree__write_deps_file__Errors_49, parse_tree__write_deps_file__V_60_60, &parse_tree__write_deps_file__FatalErrors_50);
            }
#line 1021 "write_deps_file.m"
            {
#line 1021 "write_deps_file.m"
              parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_135_135, parse_tree__write_deps_file__FatalErrors_50);
            }
#line 1024 "write_deps_file.m"
            if (parse_tree__write_deps_file__succeeded)
#line 1022 "write_deps_file.m"
              {
#line 1022 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_61_61;

#line 1023 "write_deps_file.m"
                {
#line 1023 "write_deps_file.m"
                  parse_tree__write_deps_file__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1023 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_61_61, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDeps_48));
#line 1023 "write_deps_file.m"
                }
#line 1022 "write_deps_file.m"
                {
#line 1022 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependency_file_6_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, parse_tree__write_deps_file__IndirectOptDeps_34, parse_tree__write_deps_file__V_61_61);
                }
#line 1022 "write_deps_file.m"
              }
#line 1024 "write_deps_file.m"
            else
#line 1024 "write_deps_file.m"
              {
#line 1024 "write_deps_file.m"
              }
#line 1027 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 1027 "write_deps_file.m"
            {
#line 1027 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__2__tmp_copy_2 = parse_tree__write_deps_file__Deps_23;

#line 1027 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__2_2 = parse_tree__write_deps_file__HeadVar__2__tmp_copy_2;
#line 1027 "write_deps_file.m"
            }
#line 1027 "write_deps_file.m"
            continue;
#line 945 "write_deps_file.m"
          }
#line 942 "write_deps_file.m"
      }
#line 942 "write_deps_file.m"
      break;
#line 942 "write_deps_file.m"
    }
#line 59 "write_deps_file.m"
}

#line 1194 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1194__1_5_p_0(
#line 1194 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1194 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_117,
#line 1194 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__HeadVar__3_118)
#line 1194 "write_deps_file.m"
{
#line 1194 "write_deps_file.m"
  {
#line 1194 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1194 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__F0_43;
#line 1194 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__M_443 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__2_117, (MR_Integer) 0)));
#line 1194 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__E_444 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__2_117, (MR_Integer) 1)));

#line 1195 "write_deps_file.m"
    {
#line 1195 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__M_443, parse_tree__write_deps_file__E_444, (MR_Integer) 0, &parse_tree__write_deps_file__F0_43);
    }
#line 1196 "write_deps_file.m"
    {
#line 1196 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__3_118 = mercury__string__f_43_43_2_f_0((MR_String) "\044(os_subdir)", parse_tree__write_deps_file__F0_43);
    }
#line 1194 "write_deps_file.m"
  }
#line 1194 "write_deps_file.m"
}

#line 1148 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1148__1_2_p_0(
#line 1148 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1148 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_90)
#line 1148 "write_deps_file.m"
{
#line 1148 "write_deps_file.m"
  {
#line 1148 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1148 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_481_481 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1148 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleImports_26;
#line 1148 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 1148 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_92_92;
#line 1150 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_V_91_91;
#line 1150 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_25_25;
#line 1151 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_447_447;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_448_448;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_449_449;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_450_450;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_451_451;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_452_452;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_453_453;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_454_454;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_455_455;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_456_456;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_457_457;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_458_458;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_459_459;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_460_460;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_461_461;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_462_462;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_463_463;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_464_464;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_465_465;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_466_466;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_467_467;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_468_468;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_469_469;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_470_470;
#line 1151 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_471_471;
#line 1151 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_472_472;

#line 1150 "write_deps_file.m"
    {
#line 1150 "write_deps_file.m"
      mercury__map__lookup_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_481_481, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_11, ((MR_Box) (parse_tree__write_deps_file__HeadVar__2_90)), &parse_tree__write_deps_file__conv0_V_91_91);
    }
#line 1150 "write_deps_file.m"
    parse_tree__write_deps_file__V_91_91 = ((MR_Word) parse_tree__write_deps_file__conv0_V_91_91);
#line 1150 "write_deps_file.m"
    parse_tree__write_deps_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_91_91, (MR_Integer) 0)));
#line 1150 "write_deps_file.m"
    parse_tree__write_deps_file__ModuleImports_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_91_91, (MR_Integer) 1)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_447_447 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 0)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_448_448 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 1)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_449_449 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 2)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_450_450 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 3)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_451_451 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 4)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_452_452 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 5)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_453_453 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 6)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_454_454 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 7)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 8)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_455_455 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 9)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_456_456 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 10)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_457_457 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 11)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_458_458 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 12)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_459_459 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 13)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_460_460 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 14)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_461_461 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 15)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_462_462 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 16)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_463_463 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 17)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_464_464 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 18)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_465_465 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 19)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_466_466 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 20)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_467_467 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 21)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_468_468 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 22)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_469_469 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 23)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_470_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 24)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_471_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 25)));
#line 1151 "write_deps_file.m"
    parse_tree__write_deps_file__V_472_472 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 26)));
#line 1151 "write_deps_file.m"
    {
#line 1151 "write_deps_file.m"
      return parse_tree__write_deps_file__succeeded = mercury__set__non_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_481_481, parse_tree__write_deps_file__V_92_92);
    }
#line 1148 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1148 "write_deps_file.m"
  }
#line 1148 "write_deps_file.m"
}

#line 1039 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1039__1_4_p_0(
#line 1039 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsGraph_8,
#line 1039 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_15,
#line 1039 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_16,
#line 1039 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__4_17)
#line 1039 "write_deps_file.m"
{
#line 1039 "write_deps_file.m"
  {
#line 1039 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1039 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_23_23 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1039 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Dep_14;
#line 1041 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_Dep_14;

#line 1041 "write_deps_file.m"
    {
#line 1041 "write_deps_file.m"
      mercury__digraph__lookup_vertex_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, parse_tree__write_deps_file__DepsGraph_8, parse_tree__write_deps_file__HeadVar__2_15, &parse_tree__write_deps_file__conv0_Dep_14);
    }
#line 1041 "write_deps_file.m"
    parse_tree__write_deps_file__Dep_14 = ((MR_Word) parse_tree__write_deps_file__conv0_Dep_14);
#line 1042 "write_deps_file.m"
    {
#line 1042 "write_deps_file.m"
      mercury__set__insert_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, ((MR_Box) (parse_tree__write_deps_file__Dep_14)), parse_tree__write_deps_file__HeadVar__3_16, parse_tree__write_deps_file__HeadVar__4_17);
#line 1042 "write_deps_file.m"
      return;
    }
#line 1039 "write_deps_file.m"
  }
#line 1039 "write_deps_file.m"
}

#line 2298 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__referenced_dlls__2298__1_1_f_0(
#line 2298 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_17)
#line 2298 "write_deps_file.m"
{
#line 2298 "write_deps_file.m"
  {
#line 2298 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2298 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__HeadVar__2_18;

#line 2299 "write_deps_file.m"
    {
#line 2299 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__HeadVar__1_17);
    }
#line 2298 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 2300 "write_deps_file.m"
      {
#line 2300 "write_deps_file.m"
        parse_tree__write_deps_file__HeadVar__2_18 = (MR_Word) &parse_tree__write_deps_file_scalar_common_3[2];
#line 2300 "write_deps_file.m"
      }
#line 2298 "write_deps_file.m"
    else
#line 2303 "write_deps_file.m"
      {
#line 2303 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_20_20;

#line 2303 "write_deps_file.m"
        {
#line 2303 "write_deps_file.m"
          parse_tree__write_deps_file__V_20_20 = mdbcomp__sym_name__outermost_qualifier_1_f_0(parse_tree__write_deps_file__HeadVar__1_17);
        }
#line 2303 "write_deps_file.m"
        {
#line 2303 "write_deps_file.m"
          parse_tree__write_deps_file__HeadVar__2_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2303 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__2_18, 0) = ((MR_Box) (parse_tree__write_deps_file__V_20_20));
#line 2303 "write_deps_file.m"
        }
#line 2303 "write_deps_file.m"
      }
#line 2298 "write_deps_file.m"
    return parse_tree__write_deps_file__HeadVar__2_18;
#line 2298 "write_deps_file.m"
  }
#line 2298 "write_deps_file.m"
}

#line 1006 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_files__1006__1_2_p_0(
#line 1006 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_33,
#line 1006 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_59)
#line 1006 "write_deps_file.m"
{
#line 1006 "write_deps_file.m"
  {
#line 1006 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 1006 "write_deps_file.m"
    {
#line 1006 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__write_deps_file__ModuleName_33, parse_tree__write_deps_file__HeadVar__2_59);
    }
#line 1006 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 1006 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1006 "write_deps_file.m"
  }
#line 1006 "write_deps_file.m"
}

#line 620 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__620__1_7_p_0(
#line 620 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 620 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_48,
#line 620 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImportedModuleNames_147,
#line 620 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ForeignImportExt_149,
#line 620 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_587)
#line 620 "write_deps_file.m"
{
#line 620 "write_deps_file.m"
  {
#line 620 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 620 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_595_595;

#line 622 "write_deps_file.m"
    {
#line 622 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_48, (MR_String) "\n\n");
    }
#line 623 "write_deps_file.m"
    {
#line 623 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__HeadVar__5_587);
    }
#line 624 "write_deps_file.m"
    {
#line 624 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_48, (MR_String) " : ");
    }
#line 627 "write_deps_file.m"
    {
#line 627 "write_deps_file.m"
      parse_tree__write_deps_file__V_595_595 = mercury__set__to_sorted_list_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_deps_file__ForeignImportedModuleNames_147);
    }
#line 625 "write_deps_file.m"
    {
#line 625 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__ForeignImportExt_149, parse_tree__write_deps_file__V_595_595);
    }
#line 628 "write_deps_file.m"
    {
#line 628 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_48, (MR_String) "\n\n");
#line 628 "write_deps_file.m"
      return;
    }
#line 620 "write_deps_file.m"
  }
#line 620 "write_deps_file.m"
}

#line 586 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__586__1_3_p_0(
#line 586 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SourceFileModuleName_13,
#line 586 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_578,
#line 586 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_579)
#line 586 "write_deps_file.m"
{
#line 586 "write_deps_file.m"
  {
#line 586 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 593 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_580_580;

#line 588 "write_deps_file.m"
    {
#line 588 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__3_579 = parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(parse_tree__write_deps_file__HeadVar__2_578, parse_tree__write_deps_file__SourceFileModuleName_13);
    }
#line 593 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) *parse_tree__write_deps_file__HeadVar__3_579)) == (MR_mktag((MR_Integer) 0)));
#line 593 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 593 "write_deps_file.m"
      {
#line 593 "write_deps_file.m"
        parse_tree__write_deps_file__V_580_580 = ((MR_String) (MR_hl_field(MR_mktag(0), *parse_tree__write_deps_file__HeadVar__3_579, (MR_Integer) 0)));
#line 593 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__V_580_580, (MR_String) "mercury") == 0);
#line 593 "write_deps_file.m"
      }
#line 593 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 586 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 586 "write_deps_file.m"
  }
#line 586 "write_deps_file.m"
}

#line 290 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__290__1_7_p_0(
#line 290 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 290 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_14,
#line 290 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__NestedDeps_22,
#line 290 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_48,
#line 290 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__HeadVar__5_321)
#line 290 "write_deps_file.m"
{
#line 290 "write_deps_file.m"
  {
#line 290 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 290 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ExtName_74;
#line 290 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_326_326;
#line 290 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_329_329;

#line 291 "write_deps_file.m"
    {
#line 291 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__HeadVar__5_321, (MR_Integer) 1, &parse_tree__write_deps_file__ExtName_74);
    }
#line 293 "write_deps_file.m"
    {
#line 293 "write_deps_file.m"
      parse_tree__write_deps_file__V_329_329 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_329_329, 0) = ((MR_Box) (parse_tree__write_deps_file__ExtName_74));
#line 293 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_329_329, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103])));
#line 293 "write_deps_file.m"
    }
#line 293 "write_deps_file.m"
    {
#line 293 "write_deps_file.m"
      parse_tree__write_deps_file__V_326_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_326_326, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 293 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_326_326, 1) = ((MR_Box) (parse_tree__write_deps_file__V_329_329));
#line 293 "write_deps_file.m"
    }
#line 293 "write_deps_file.m"
    {
#line 293 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_326_326);
    }
#line 294 "write_deps_file.m"
    {
#line 294 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__HeadVar__5_321, parse_tree__write_deps_file__NestedDeps_22);
#line 294 "write_deps_file.m"
      return;
    }
#line 290 "write_deps_file.m"
  }
#line 290 "write_deps_file.m"
}

#line 2415 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__compare_module_names_3_p_0(
#line 2415 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym1_4,
#line 2415 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym2_5,
#line 2415 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__Result_6)
#line 2415 "write_deps_file.m"
{
#line 2418 "write_deps_file.m"
  {
#line 2418 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2418 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Str1_7;
#line 2418 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Str2_8;

#line 2419 "write_deps_file.m"
    {
#line 2419 "write_deps_file.m"
      parse_tree__write_deps_file__Str1_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__Sym1_4);
    }
#line 2420 "write_deps_file.m"
    {
#line 2420 "write_deps_file.m"
      parse_tree__write_deps_file__Str2_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__Sym2_5);
    }
#line 2421 "write_deps_file.m"
    {
#line 2421 "write_deps_file.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__write_deps_file__Result_6, parse_tree__write_deps_file__Str1_7, parse_tree__write_deps_file__Str2_8);
#line 2421 "write_deps_file.m"
      return;
    }
#line 2418 "write_deps_file.m"
  }
#line 2415 "write_deps_file.m"
}

#line 2323 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_both_opt_deps_8_p_0(
#line 2323 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 2323 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__BuildOptFiles_2,
#line 2323 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IntermodDirs_3,
#line 2323 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4,
#line 2323 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__5_5,
#line 2323 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__6_6)
#line 2323 "write_deps_file.m"
{
#line 2327 "write_deps_file.m"
  {
#line 2327 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 2327 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2327 "write_deps_file.m"
      {
#line 2327 "write_deps_file.m"
        *parse_tree__write_deps_file__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2327 "write_deps_file.m"
        *parse_tree__write_deps_file__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2327 "write_deps_file.m"
      }
#line 2327 "write_deps_file.m"
    else
#line 2329 "write_deps_file.m"
      {
#line 2329 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Dep_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 0)));
#line 2329 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Deps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 1)));
#line 2329 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
#line 2329 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;

#line 2330 "write_deps_file.m"
        {
#line 2330 "write_deps_file.m"
          parse_tree__write_deps_file__get_both_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__BuildOptFiles_2, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__Deps_19, &parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39, &parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40);
        }
#line 3267 "parse_tree.write_deps_file.c"
#line 3268 "parse_tree.write_deps_file.c"
        switch (parse_tree__write_deps_file__BuildOptFiles_2) {
#line 3270 "parse_tree.write_deps_file.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 3272 "parse_tree.write_deps_file.c"
          case (MR_Integer) 0:
#line 3274 "parse_tree.write_deps_file.c"
            {
#line 3276 "parse_tree.write_deps_file.c"
              MR_String parse_tree__write_deps_file__OptName_27;
#line 3278 "parse_tree.write_deps_file.c"
              MR_Word parse_tree__write_deps_file__Result2_28;
#line 3280 "parse_tree.write_deps_file.c"
              MR_String parse_tree__write_deps_file__TransOptName_31;
#line 3282 "parse_tree.write_deps_file.c"
              MR_Word parse_tree__write_deps_file__Result3_32;

#line 2353 "write_deps_file.m"
              {
#line 2353 "write_deps_file.m"
                parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptName_27);
              }
#line 2355 "write_deps_file.m"
              {
#line 2355 "write_deps_file.m"
                libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__OptName_27, &parse_tree__write_deps_file__Result2_28);
              }
#line 2360 "write_deps_file.m"
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_28)) == (MR_mktag((MR_Integer) 1))))
#line 2361 "write_deps_file.m"
                *parse_tree__write_deps_file__HeadVar__5_5 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
#line 2360 "write_deps_file.m"
              else
#line 2359 "write_deps_file.m"
                {
#line 2359 "write_deps_file.m"
                  MR_Word base;
#line 2359 "write_deps_file.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2359 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__5_5 = base;
#line 2359 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2359 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
#line 2359 "write_deps_file.m"
                }
#line 2363 "write_deps_file.m"
              {
#line 2363 "write_deps_file.m"
                parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptName_31);
              }
#line 2365 "write_deps_file.m"
              {
#line 2365 "write_deps_file.m"
                libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__TransOptName_31, &parse_tree__write_deps_file__Result3_32);
              }
#line 2370 "write_deps_file.m"
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result3_32)) == (MR_mktag((MR_Integer) 1))))
#line 2371 "write_deps_file.m"
                *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;
#line 2370 "write_deps_file.m"
              else
#line 2369 "write_deps_file.m"
                {
#line 2369 "write_deps_file.m"
                  MR_Word base;
#line 2369 "write_deps_file.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2369 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2369 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2369 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
#line 2369 "write_deps_file.m"
                }
#line 3345 "parse_tree.write_deps_file.c"
            }
#line 3347 "parse_tree.write_deps_file.c"
            break;
#line 3349 "parse_tree.write_deps_file.c"
          case (MR_Integer) 1:
#line 3351 "parse_tree.write_deps_file.c"
            {
#line 3353 "parse_tree.write_deps_file.c"
              MR_Word parse_tree__write_deps_file__Result1_23;

#line 2335 "write_deps_file.m"
              {
#line 2335 "write_deps_file.m"
                parse_tree__prog_io_find__search_for_module_source_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__Dep_18, &parse_tree__write_deps_file__Result1_23);
              }
#line 3361 "parse_tree.write_deps_file.c"
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result1_23)) == (MR_mktag((MR_Integer) 1))))
#line 3363 "parse_tree.write_deps_file.c"
                {
#line 3365 "parse_tree.write_deps_file.c"
                  MR_String parse_tree__write_deps_file__OptName_59;
#line 3367 "parse_tree.write_deps_file.c"
                  MR_Word parse_tree__write_deps_file__Result2_60;
#line 3369 "parse_tree.write_deps_file.c"
                  MR_String parse_tree__write_deps_file__TransOptName_61;
#line 3371 "parse_tree.write_deps_file.c"
                  MR_Word parse_tree__write_deps_file__Result3_62;

#line 2353 "write_deps_file.m"
                  {
#line 2353 "write_deps_file.m"
                    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptName_59);
                  }
#line 2355 "write_deps_file.m"
                  {
#line 2355 "write_deps_file.m"
                    libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__OptName_59, &parse_tree__write_deps_file__Result2_60);
                  }
#line 2360 "write_deps_file.m"
                  if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_60)) == (MR_mktag((MR_Integer) 1))))
#line 2361 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__5_5 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
#line 2360 "write_deps_file.m"
                  else
#line 2359 "write_deps_file.m"
                    {
#line 2359 "write_deps_file.m"
                      MR_Word base;
#line 2359 "write_deps_file.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2359 "write_deps_file.m"
                      *parse_tree__write_deps_file__HeadVar__5_5 = base;
#line 2359 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2359 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
#line 2359 "write_deps_file.m"
                    }
#line 2363 "write_deps_file.m"
                  {
#line 2363 "write_deps_file.m"
                    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptName_61);
                  }
#line 2365 "write_deps_file.m"
                  {
#line 2365 "write_deps_file.m"
                    libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__TransOptName_61, &parse_tree__write_deps_file__Result3_62);
                  }
#line 2370 "write_deps_file.m"
                  if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result3_62)) == (MR_mktag((MR_Integer) 1))))
#line 2371 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;
#line 2370 "write_deps_file.m"
                  else
#line 2369 "write_deps_file.m"
                    {
#line 2369 "write_deps_file.m"
                      MR_Word base;
#line 2369 "write_deps_file.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2369 "write_deps_file.m"
                      *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2369 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2369 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
#line 2369 "write_deps_file.m"
                    }
#line 3434 "parse_tree.write_deps_file.c"
                }
#line 3436 "parse_tree.write_deps_file.c"
              else
#line 3438 "parse_tree.write_deps_file.c"
                {
#line 2339 "write_deps_file.m"
                  {
#line 2339 "write_deps_file.m"
                    MR_Word base;
#line 2339 "write_deps_file.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2339 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__5_5 = base;
#line 2339 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2339 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
#line 2339 "write_deps_file.m"
                  }
#line 2340 "write_deps_file.m"
                  {
#line 2340 "write_deps_file.m"
                    MR_Word base;
#line 2340 "write_deps_file.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2340 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2340 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2340 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
#line 2340 "write_deps_file.m"
                  }
#line 2341 "write_deps_file.m"
                  {
#line 2341 "write_deps_file.m"
                    mercury__io__seen_2_p_0();
#line 2341 "write_deps_file.m"
                    return;
                  }
#line 3475 "parse_tree.write_deps_file.c"
                }
#line 3477 "parse_tree.write_deps_file.c"
            }
#line 3479 "parse_tree.write_deps_file.c"
            break;
#line 3481 "parse_tree.write_deps_file.c"
        }
#line 2329 "write_deps_file.m"
      }
#line 2327 "write_deps_file.m"
  }
#line 2323 "write_deps_file.m"
}

#line 2283 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0_1(
#line 2283 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2283 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2283 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2283 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 2283 "write_deps_file.m"
{
#line 2283 "write_deps_file.m"
  {
#line 2283 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 2283 "write_deps_file.m"
    {
#line 2283 "write_deps_file.m"
      parse_tree__prog_out__write_sym_name_3_p_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 2283 "write_deps_file.m"
      return;
    }
#line 2283 "write_deps_file.m"
  }
#line 2283 "write_deps_file.m"
}

#line 2278 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0(
#line 2278 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Stream_5,
#line 2278 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SCC0_6)
#line 2278 "write_deps_file.m"
{
#line 2281 "write_deps_file.m"
  {
#line 2281 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2281 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_14_14 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2281 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SCC_8;

#line 2282 "write_deps_file.m"
    {
#line 2282 "write_deps_file.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_14_14, parse_tree__write_deps_file__SCC0_6, &parse_tree__write_deps_file__SCC_8);
    }
#line 2283 "write_deps_file.m"
    {
#line 2283 "write_deps_file.m"
      mercury__io__write_list_6_p_0(parse_tree__write_deps_file__TypeCtorInfo_14_14, parse_tree__write_deps_file__Stream_5, parse_tree__write_deps_file__SCC_8, (MR_String) "\n", (MR_Word) &parse_tree__write_deps_file_scalar_common_2[8]);
#line 2283 "write_deps_file.m"
      return;
    }
#line 2281 "write_deps_file.m"
  }
#line 2278 "write_deps_file.m"
}

#line 2234 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_source_file_3_p_0(
#line 2234 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_4,
#line 2234 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_5,
#line 2234 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__FileName_6)
#line 2234 "write_deps_file.m"
{
#line 2236 "write_deps_file.m"
  {
#line 2236 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2236 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Deps_7;
#line 2236 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleAndImports_9;
#line 2236 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SourceFileName_10;
#line 2237 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_Deps_7;
#line 2238 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_8_8;
#line 2242 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SourceFileBase_11;

#line 2237 "write_deps_file.m"
    {
#line 2237 "write_deps_file.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_4, ((MR_Box) (parse_tree__write_deps_file__ModuleName_5)), &parse_tree__write_deps_file__conv0_Deps_7);
    }
#line 2237 "write_deps_file.m"
    parse_tree__write_deps_file__Deps_7 = ((MR_Word) parse_tree__write_deps_file__conv0_Deps_7);
#line 2238 "write_deps_file.m"
    parse_tree__write_deps_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Deps_7, (MR_Integer) 0)));
#line 2238 "write_deps_file.m"
    parse_tree__write_deps_file__ModuleAndImports_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Deps_7, (MR_Integer) 1)));
#line 2239 "write_deps_file.m"
    {
#line 2239 "write_deps_file.m"
      parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(parse_tree__write_deps_file__ModuleAndImports_9, &parse_tree__write_deps_file__SourceFileName_10);
    }
#line 2240 "write_deps_file.m"
    {
#line 2240 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__write_deps_file__SourceFileName_10, (MR_String) ".m", &parse_tree__write_deps_file__SourceFileBase_11);
    }
#line 2242 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 2241 "write_deps_file.m"
      *parse_tree__write_deps_file__FileName_6 = parse_tree__write_deps_file__SourceFileBase_11;
#line 2242 "write_deps_file.m"
    else
#line 2243 "write_deps_file.m"
      {
#line 2243 "write_deps_file.m"
        {
#line 2243 "write_deps_file.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_deps_file", (MR_String) "predicate \140parse_tree.write_deps_file.get_source_file\'/3", (MR_String) "source file name doesn\'t end in \140.m\'");
#line 2243 "write_deps_file.m"
          return;
        }
#line 2243 "write_deps_file.m"
      }
#line 2236 "write_deps_file.m"
  }
#line 2234 "write_deps_file.m"
}

#line 2146 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(
#line 2146 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_17,
#line 2146 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_18,
#line 2146 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_19,
#line 2146 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_20,
#line 2146 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ExeFileName_21,
#line 2146 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_22,
#line 2146 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_23,
#line 2146 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitPicObjFileName_24,
#line 2146 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_25,
#line 2146 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__LibFileName_26,
#line 2146 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SharedLibFileName_27,
#line 2146 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__JarFileName_28,
#line 2146 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DepFileName_29,
#line 2146 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DvFileName_30)
#line 2146 "write_deps_file.m"
{
#line 2154 "write_deps_file.m"
  {
#line 2154 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2154 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__CleanTargetName_32;
#line 2154 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__RealCleanTargetName_33;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_39_39;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_42_42;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_43_43;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_46_46;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_49_49;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_50_50;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_52_52;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_53_53;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_55_55;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_57_57;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_58_58;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_60_60;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_62_62;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_63_63;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_65_65;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_66_66;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_68_68;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_70_70;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_71_71;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_73_73;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_75_75;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_76_76;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_78_78;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_79_79;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_81_81;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_83_83;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_84_84;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_86_86;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_87_87;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_89_89;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_92_92;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_94_94;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_96_96;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_97_97;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_99_99;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_101_101;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_102_102;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_104_104;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_106_106;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_107_107;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_109_109;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_111_111;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_112_112;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_114_114;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_116_116;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_117_117;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_119_119;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_121_121;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_130_130;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_133_133;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_137_137;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_140_140;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_141_141;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_143_143;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_144_144;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_146_146;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_147_147;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_149_149;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_151_151;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_152_152;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_154_154;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_156_156;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_157_157;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_159_159;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_161_161;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_162_162;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_164_164;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_166_166;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_167_167;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_169_169;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_171_171;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_172_172;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_174_174;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_176_176;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_177_177;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_179_179;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_181_181;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_182_182;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_184_184;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_186_186;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_187_187;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_189_189;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_191_191;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_192_192;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_194_194;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_196_196;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_197_197;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_199_199;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_201_201;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_202_202;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_204_204;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_206_206;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_207_207;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_209_209;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_211_211;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_212_212;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_214_214;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_216_216;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_217_217;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_219_219;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_221_221;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_222_222;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_224_224;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_226_226;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_227_227;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_229_229;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_231_231;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_232_232;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_234_234;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_236_236;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_237_237;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_239_239;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_241_241;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_242_242;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_244_244;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_246_246;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_250_250;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_253_253;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_254_254;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_256_256;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_257_257;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_259_259;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_260_260;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_262_262;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_263_263;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_265_265;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_266_266;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_268_268;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_269_269;
#line 2154 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_271_271;

#line 2163 "write_deps_file.m"
    {
#line 2163 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_17, parse_tree__write_deps_file__ModuleName_19, (MR_String) ".clean", (MR_Integer) 1, &parse_tree__write_deps_file__CleanTargetName_32);
    }
#line 2167 "write_deps_file.m"
    parse_tree__write_deps_file__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[96]);
#line 2166 "write_deps_file.m"
    {
#line 2166 "write_deps_file.m"
      parse_tree__write_deps_file__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2166 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2166 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 2166 "write_deps_file.m"
    }
#line 2166 "write_deps_file.m"
    {
#line 2166 "write_deps_file.m"
      parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2166 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) ((MR_String) "clean_local : "));
#line 2166 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (parse_tree__write_deps_file__V_42_42));
#line 2166 "write_deps_file.m"
    }
#line 2165 "write_deps_file.m"
    {
#line 2165 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_39_39);
    }
#line 2185 "write_deps_file.m"
    {
#line 2185 "write_deps_file.m"
      parse_tree__write_deps_file__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2185 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_121_121, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2185 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[97])));
#line 2185 "write_deps_file.m"
    }
#line 2185 "write_deps_file.m"
    {
#line 2185 "write_deps_file.m"
      parse_tree__write_deps_file__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2185 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_119_119, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2185 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_119_119, 1) = ((MR_Box) (parse_tree__write_deps_file__V_121_121));
#line 2185 "write_deps_file.m"
    }
#line 2184 "write_deps_file.m"
    {
#line 2184 "write_deps_file.m"
      parse_tree__write_deps_file__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2184 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_117_117, 0) = ((MR_Box) ((MR_String) ".errs) | xargs rm -f\n"));
#line 2184 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_117_117, 1) = ((MR_Box) (parse_tree__write_deps_file__V_119_119));
#line 2184 "write_deps_file.m"
    }
#line 2184 "write_deps_file.m"
    {
#line 2184 "write_deps_file.m"
      parse_tree__write_deps_file__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2184 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_116_116, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2184 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_116_116, 1) = ((MR_Box) (parse_tree__write_deps_file__V_117_117));
#line 2184 "write_deps_file.m"
    }
#line 2184 "write_deps_file.m"
    {
#line 2184 "write_deps_file.m"
      parse_tree__write_deps_file__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2184 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_114_114, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2184 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_114_114, 1) = ((MR_Box) (parse_tree__write_deps_file__V_116_116));
#line 2184 "write_deps_file.m"
    }
#line 2183 "write_deps_file.m"
    {
#line 2183 "write_deps_file.m"
      parse_tree__write_deps_file__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 0) = ((MR_Box) ((MR_String) ".profs) | xargs rm -f\n"));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 1) = ((MR_Box) (parse_tree__write_deps_file__V_114_114));
#line 2183 "write_deps_file.m"
    }
#line 2183 "write_deps_file.m"
    {
#line 2183 "write_deps_file.m"
      parse_tree__write_deps_file__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 1) = ((MR_Box) (parse_tree__write_deps_file__V_112_112));
#line 2183 "write_deps_file.m"
    }
#line 2183 "write_deps_file.m"
    {
#line 2183 "write_deps_file.m"
      parse_tree__write_deps_file__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 1) = ((MR_Box) (parse_tree__write_deps_file__V_111_111));
#line 2183 "write_deps_file.m"
    }
#line 2182 "write_deps_file.m"
    {
#line 2182 "write_deps_file.m"
      parse_tree__write_deps_file__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_107_107, 0) = ((MR_Box) ((MR_String) ".javas) | xargs rm -f\n"));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_107_107, 1) = ((MR_Box) (parse_tree__write_deps_file__V_109_109));
#line 2182 "write_deps_file.m"
    }
#line 2182 "write_deps_file.m"
    {
#line 2182 "write_deps_file.m"
      parse_tree__write_deps_file__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 1) = ((MR_Box) (parse_tree__write_deps_file__V_107_107));
#line 2182 "write_deps_file.m"
    }
#line 2182 "write_deps_file.m"
    {
#line 2182 "write_deps_file.m"
      parse_tree__write_deps_file__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 1) = ((MR_Box) (parse_tree__write_deps_file__V_106_106));
#line 2182 "write_deps_file.m"
    }
#line 2181 "write_deps_file.m"
    {
#line 2181 "write_deps_file.m"
      parse_tree__write_deps_file__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 0) = ((MR_Box) ((MR_String) ".useds) | xargs rm -f\n"));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 1) = ((MR_Box) (parse_tree__write_deps_file__V_104_104));
#line 2181 "write_deps_file.m"
    }
#line 2181 "write_deps_file.m"
    {
#line 2181 "write_deps_file.m"
      parse_tree__write_deps_file__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 1) = ((MR_Box) (parse_tree__write_deps_file__V_102_102));
#line 2181 "write_deps_file.m"
    }
#line 2181 "write_deps_file.m"
    {
#line 2181 "write_deps_file.m"
      parse_tree__write_deps_file__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 1) = ((MR_Box) (parse_tree__write_deps_file__V_101_101));
#line 2181 "write_deps_file.m"
    }
#line 2180 "write_deps_file.m"
    {
#line 2180 "write_deps_file.m"
      parse_tree__write_deps_file__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_97_97, 0) = ((MR_Box) ((MR_String) ".java_dates) | xargs rm -f\n"));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_97_97, 1) = ((MR_Box) (parse_tree__write_deps_file__V_99_99));
#line 2180 "write_deps_file.m"
    }
#line 2180 "write_deps_file.m"
    {
#line 2180 "write_deps_file.m"
      parse_tree__write_deps_file__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 1) = ((MR_Box) (parse_tree__write_deps_file__V_97_97));
#line 2180 "write_deps_file.m"
    }
#line 2180 "write_deps_file.m"
    {
#line 2180 "write_deps_file.m"
      parse_tree__write_deps_file__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 1) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 2180 "write_deps_file.m"
    }
#line 2179 "write_deps_file.m"
    {
#line 2179 "write_deps_file.m"
      parse_tree__write_deps_file__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 0) = ((MR_Box) ((MR_String) ".c_dates) | xargs rm -f\n"));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 1) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 2179 "write_deps_file.m"
    }
#line 2179 "write_deps_file.m"
    {
#line 2179 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__V_92_92));
#line 2179 "write_deps_file.m"
    }
#line 2179 "write_deps_file.m"
    {
#line 2179 "write_deps_file.m"
      parse_tree__write_deps_file__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_89_89, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_89_89, 1) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 2179 "write_deps_file.m"
    }
#line 2178 "write_deps_file.m"
    {
#line 2178 "write_deps_file.m"
      parse_tree__write_deps_file__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2178 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
#line 2178 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 1) = ((MR_Box) (parse_tree__write_deps_file__V_89_89));
#line 2178 "write_deps_file.m"
    }
#line 2178 "write_deps_file.m"
    {
#line 2178 "write_deps_file.m"
      parse_tree__write_deps_file__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2178 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 0) = ((MR_Box) (parse_tree__write_deps_file__InitPicObjFileName_24));
#line 2178 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 1) = ((MR_Box) (parse_tree__write_deps_file__V_87_87));
#line 2178 "write_deps_file.m"
    }
#line 2177 "write_deps_file.m"
    {
#line 2177 "write_deps_file.m"
      parse_tree__write_deps_file__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2177 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 0) = ((MR_Box) ((MR_String) ".all_pic_os) "));
#line 2177 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 1) = ((MR_Box) (parse_tree__write_deps_file__V_86_86));
#line 2177 "write_deps_file.m"
    }
#line 2177 "write_deps_file.m"
    {
#line 2177 "write_deps_file.m"
      parse_tree__write_deps_file__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2177 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2177 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 1) = ((MR_Box) (parse_tree__write_deps_file__V_84_84));
#line 2177 "write_deps_file.m"
    }
#line 2177 "write_deps_file.m"
    {
#line 2177 "write_deps_file.m"
      parse_tree__write_deps_file__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2177 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2177 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 1) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 2177 "write_deps_file.m"
    }
#line 2176 "write_deps_file.m"
    {
#line 2176 "write_deps_file.m"
      parse_tree__write_deps_file__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2176 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
#line 2176 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 1) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 2176 "write_deps_file.m"
    }
#line 2175 "write_deps_file.m"
    {
#line 2175 "write_deps_file.m"
      parse_tree__write_deps_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2175 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_23));
#line 2175 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 1) = ((MR_Box) (parse_tree__write_deps_file__V_79_79));
#line 2175 "write_deps_file.m"
    }
#line 2175 "write_deps_file.m"
    {
#line 2175 "write_deps_file.m"
      parse_tree__write_deps_file__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2175 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_76_76, 0) = ((MR_Box) ((MR_String) ".all_os) "));
#line 2175 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_76_76, 1) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 2175 "write_deps_file.m"
    }
#line 2175 "write_deps_file.m"
    {
#line 2175 "write_deps_file.m"
      parse_tree__write_deps_file__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2175 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2175 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 1) = ((MR_Box) (parse_tree__write_deps_file__V_76_76));
#line 2175 "write_deps_file.m"
    }
#line 2175 "write_deps_file.m"
    {
#line 2175 "write_deps_file.m"
      parse_tree__write_deps_file__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2175 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2175 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 1) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 2175 "write_deps_file.m"
    }
#line 2174 "write_deps_file.m"
    {
#line 2174 "write_deps_file.m"
      parse_tree__write_deps_file__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2174 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 0) = ((MR_Box) ((MR_String) ".mihs) | xargs rm -f\n"));
#line 2174 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 1) = ((MR_Box) (parse_tree__write_deps_file__V_73_73));
#line 2174 "write_deps_file.m"
    }
#line 2174 "write_deps_file.m"
    {
#line 2174 "write_deps_file.m"
      parse_tree__write_deps_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2174 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2174 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 1) = ((MR_Box) (parse_tree__write_deps_file__V_71_71));
#line 2174 "write_deps_file.m"
    }
#line 2174 "write_deps_file.m"
    {
#line 2174 "write_deps_file.m"
      parse_tree__write_deps_file__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2174 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2174 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 1) = ((MR_Box) (parse_tree__write_deps_file__V_70_70));
#line 2174 "write_deps_file.m"
    }
#line 2173 "write_deps_file.m"
    {
#line 2173 "write_deps_file.m"
      parse_tree__write_deps_file__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2173 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
#line 2173 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 1) = ((MR_Box) (parse_tree__write_deps_file__V_68_68));
#line 2173 "write_deps_file.m"
    }
#line 2172 "write_deps_file.m"
    {
#line 2172 "write_deps_file.m"
      parse_tree__write_deps_file__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2172 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_22));
#line 2172 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 1) = ((MR_Box) (parse_tree__write_deps_file__V_66_66));
#line 2172 "write_deps_file.m"
    }
#line 2172 "write_deps_file.m"
    {
#line 2172 "write_deps_file.m"
      parse_tree__write_deps_file__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2172 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_63_63, 0) = ((MR_Box) ((MR_String) ".cs) "));
#line 2172 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_63_63, 1) = ((MR_Box) (parse_tree__write_deps_file__V_65_65));
#line 2172 "write_deps_file.m"
    }
#line 2172 "write_deps_file.m"
    {
#line 2172 "write_deps_file.m"
      parse_tree__write_deps_file__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2172 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_62_62, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2172 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_62_62, 1) = ((MR_Box) (parse_tree__write_deps_file__V_63_63));
#line 2172 "write_deps_file.m"
    }
#line 2172 "write_deps_file.m"
    {
#line 2172 "write_deps_file.m"
      parse_tree__write_deps_file__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2172 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2172 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 1) = ((MR_Box) (parse_tree__write_deps_file__V_62_62));
#line 2172 "write_deps_file.m"
    }
#line 2171 "write_deps_file.m"
    {
#line 2171 "write_deps_file.m"
      parse_tree__write_deps_file__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2171 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 0) = ((MR_Box) ((MR_String) ".dirs) | xargs rm -rf \n"));
#line 2171 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 1) = ((MR_Box) (parse_tree__write_deps_file__V_60_60));
#line 2171 "write_deps_file.m"
    }
#line 2171 "write_deps_file.m"
    {
#line 2171 "write_deps_file.m"
      parse_tree__write_deps_file__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2171 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_57_57, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2171 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_57_57, 1) = ((MR_Box) (parse_tree__write_deps_file__V_58_58));
#line 2171 "write_deps_file.m"
    }
#line 2171 "write_deps_file.m"
    {
#line 2171 "write_deps_file.m"
      parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2171 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2171 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_57_57));
#line 2171 "write_deps_file.m"
    }
#line 2170 "write_deps_file.m"
    {
#line 2170 "write_deps_file.m"
      parse_tree__write_deps_file__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2170 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 0) = ((MR_Box) ((MR_String) " :\n"));
#line 2170 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 1) = ((MR_Box) (parse_tree__write_deps_file__V_55_55));
#line 2170 "write_deps_file.m"
    }
#line 2170 "write_deps_file.m"
    {
#line 2170 "write_deps_file.m"
      parse_tree__write_deps_file__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2170 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2170 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 1) = ((MR_Box) (parse_tree__write_deps_file__V_53_53));
#line 2170 "write_deps_file.m"
    }
#line 2169 "write_deps_file.m"
    {
#line 2169 "write_deps_file.m"
      parse_tree__write_deps_file__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2169 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2169 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 1) = ((MR_Box) (parse_tree__write_deps_file__V_52_52));
#line 2169 "write_deps_file.m"
    }
#line 2169 "write_deps_file.m"
    {
#line 2169 "write_deps_file.m"
      parse_tree__write_deps_file__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2169 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2169 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 1) = ((MR_Box) (parse_tree__write_deps_file__V_50_50));
#line 2169 "write_deps_file.m"
    }
#line 2169 "write_deps_file.m"
    {
#line 2169 "write_deps_file.m"
      parse_tree__write_deps_file__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2169 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_46_46, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2169 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_46_46, 1) = ((MR_Box) (parse_tree__write_deps_file__V_49_49));
#line 2169 "write_deps_file.m"
    }
#line 2168 "write_deps_file.m"
    {
#line 2168 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_46_46);
    }
#line 2189 "write_deps_file.m"
    {
#line 2189 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_17, parse_tree__write_deps_file__ModuleName_19, (MR_String) ".realclean", (MR_Integer) 1, &parse_tree__write_deps_file__RealCleanTargetName_33);
    }
#line 2192 "write_deps_file.m"
    {
#line 2192 "write_deps_file.m"
      parse_tree__write_deps_file__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2192 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_133_133, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
#line 2192 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_133_133, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 2192 "write_deps_file.m"
    }
#line 2192 "write_deps_file.m"
    {
#line 2192 "write_deps_file.m"
      parse_tree__write_deps_file__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2192 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_130_130, 0) = ((MR_Box) ((MR_String) "realclean_local : "));
#line 2192 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_130_130, 1) = ((MR_Box) (parse_tree__write_deps_file__V_133_133));
#line 2192 "write_deps_file.m"
    }
#line 2191 "write_deps_file.m"
    {
#line 2191 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_130_130);
    }
#line 2219 "write_deps_file.m"
    {
#line 2219 "write_deps_file.m"
      parse_tree__write_deps_file__V_246_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2219 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2219 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[119])));
#line 2219 "write_deps_file.m"
    }
#line 2219 "write_deps_file.m"
    {
#line 2219 "write_deps_file.m"
      parse_tree__write_deps_file__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2219 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2219 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 1) = ((MR_Box) (parse_tree__write_deps_file__V_246_246));
#line 2219 "write_deps_file.m"
    }
#line 2218 "write_deps_file.m"
    {
#line 2218 "write_deps_file.m"
      parse_tree__write_deps_file__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2218 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 0) = ((MR_Box) ((MR_String) ".foreign_dlls) | xargs rm -f\n"));
#line 2218 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 1) = ((MR_Box) (parse_tree__write_deps_file__V_244_244));
#line 2218 "write_deps_file.m"
    }
#line 2218 "write_deps_file.m"
    {
#line 2218 "write_deps_file.m"
      parse_tree__write_deps_file__V_241_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2218 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_241_241, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2218 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_241_241, 1) = ((MR_Box) (parse_tree__write_deps_file__V_242_242));
#line 2218 "write_deps_file.m"
    }
#line 2218 "write_deps_file.m"
    {
#line 2218 "write_deps_file.m"
      parse_tree__write_deps_file__V_239_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2218 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2218 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 1) = ((MR_Box) (parse_tree__write_deps_file__V_241_241));
#line 2218 "write_deps_file.m"
    }
#line 2217 "write_deps_file.m"
    {
#line 2217 "write_deps_file.m"
      parse_tree__write_deps_file__V_237_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2217 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 0) = ((MR_Box) ((MR_String) ".dlls) | xargs rm -f\n"));
#line 2217 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 1) = ((MR_Box) (parse_tree__write_deps_file__V_239_239));
#line 2217 "write_deps_file.m"
    }
#line 2217 "write_deps_file.m"
    {
#line 2217 "write_deps_file.m"
      parse_tree__write_deps_file__V_236_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2217 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_236_236, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2217 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_236_236, 1) = ((MR_Box) (parse_tree__write_deps_file__V_237_237));
#line 2217 "write_deps_file.m"
    }
#line 2217 "write_deps_file.m"
    {
#line 2217 "write_deps_file.m"
      parse_tree__write_deps_file__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2217 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2217 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 1) = ((MR_Box) (parse_tree__write_deps_file__V_236_236));
#line 2217 "write_deps_file.m"
    }
#line 2216 "write_deps_file.m"
    {
#line 2216 "write_deps_file.m"
      parse_tree__write_deps_file__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2216 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 0) = ((MR_Box) ((MR_String) ".all_mihs) | xargs rm -f\n"));
#line 2216 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 1) = ((MR_Box) (parse_tree__write_deps_file__V_234_234));
#line 2216 "write_deps_file.m"
    }
#line 2216 "write_deps_file.m"
    {
#line 2216 "write_deps_file.m"
      parse_tree__write_deps_file__V_231_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2216 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2216 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 1) = ((MR_Box) (parse_tree__write_deps_file__V_232_232));
#line 2216 "write_deps_file.m"
    }
#line 2216 "write_deps_file.m"
    {
#line 2216 "write_deps_file.m"
      parse_tree__write_deps_file__V_229_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2216 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2216 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 1) = ((MR_Box) (parse_tree__write_deps_file__V_231_231));
#line 2216 "write_deps_file.m"
    }
#line 2215 "write_deps_file.m"
    {
#line 2215 "write_deps_file.m"
      parse_tree__write_deps_file__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2215 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_227_227, 0) = ((MR_Box) ((MR_String) ".all_mhs) | xargs rm -f\n"));
#line 2215 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_227_227, 1) = ((MR_Box) (parse_tree__write_deps_file__V_229_229));
#line 2215 "write_deps_file.m"
    }
#line 2215 "write_deps_file.m"
    {
#line 2215 "write_deps_file.m"
      parse_tree__write_deps_file__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2215 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2215 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 2215 "write_deps_file.m"
    }
#line 2215 "write_deps_file.m"
    {
#line 2215 "write_deps_file.m"
      parse_tree__write_deps_file__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2215 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2215 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 1) = ((MR_Box) (parse_tree__write_deps_file__V_226_226));
#line 2215 "write_deps_file.m"
    }
#line 2214 "write_deps_file.m"
    {
#line 2214 "write_deps_file.m"
      parse_tree__write_deps_file__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2214 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 0) = ((MR_Box) ((MR_String) ".module_deps) | xargs rm -f\n"));
#line 2214 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 1) = ((MR_Box) (parse_tree__write_deps_file__V_224_224));
#line 2214 "write_deps_file.m"
    }
#line 2214 "write_deps_file.m"
    {
#line 2214 "write_deps_file.m"
      parse_tree__write_deps_file__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2214 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2214 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 1) = ((MR_Box) (parse_tree__write_deps_file__V_222_222));
#line 2214 "write_deps_file.m"
    }
#line 2214 "write_deps_file.m"
    {
#line 2214 "write_deps_file.m"
      parse_tree__write_deps_file__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2214 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2214 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 1) = ((MR_Box) (parse_tree__write_deps_file__V_221_221));
#line 2214 "write_deps_file.m"
    }
#line 2213 "write_deps_file.m"
    {
#line 2213 "write_deps_file.m"
      parse_tree__write_deps_file__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2213 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 0) = ((MR_Box) ((MR_String) ".ds) | xargs rm -f\n"));
#line 2213 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 1) = ((MR_Box) (parse_tree__write_deps_file__V_219_219));
#line 2213 "write_deps_file.m"
    }
#line 2213 "write_deps_file.m"
    {
#line 2213 "write_deps_file.m"
      parse_tree__write_deps_file__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2213 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2213 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 1) = ((MR_Box) (parse_tree__write_deps_file__V_217_217));
#line 2213 "write_deps_file.m"
    }
#line 2213 "write_deps_file.m"
    {
#line 2213 "write_deps_file.m"
      parse_tree__write_deps_file__V_214_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2213 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_214_214, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2213 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_214_214, 1) = ((MR_Box) (parse_tree__write_deps_file__V_216_216));
#line 2213 "write_deps_file.m"
    }
#line 2212 "write_deps_file.m"
    {
#line 2212 "write_deps_file.m"
      parse_tree__write_deps_file__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2212 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_212_212, 0) = ((MR_Box) ((MR_String) ".imdgs) | xargs rm -f\n"));
#line 2212 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_212_212, 1) = ((MR_Box) (parse_tree__write_deps_file__V_214_214));
#line 2212 "write_deps_file.m"
    }
#line 2212 "write_deps_file.m"
    {
#line 2212 "write_deps_file.m"
      parse_tree__write_deps_file__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2212 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_211_211, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2212 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_211_211, 1) = ((MR_Box) (parse_tree__write_deps_file__V_212_212));
#line 2212 "write_deps_file.m"
    }
#line 2212 "write_deps_file.m"
    {
#line 2212 "write_deps_file.m"
      parse_tree__write_deps_file__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2212 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2212 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 1) = ((MR_Box) (parse_tree__write_deps_file__V_211_211));
#line 2212 "write_deps_file.m"
    }
#line 2211 "write_deps_file.m"
    {
#line 2211 "write_deps_file.m"
      parse_tree__write_deps_file__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2211 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_207_207, 0) = ((MR_Box) ((MR_String) ".requests) | xargs rm -f\n"));
#line 2211 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_207_207, 1) = ((MR_Box) (parse_tree__write_deps_file__V_209_209));
#line 2211 "write_deps_file.m"
    }
#line 2211 "write_deps_file.m"
    {
#line 2211 "write_deps_file.m"
      parse_tree__write_deps_file__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2211 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2211 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 1) = ((MR_Box) (parse_tree__write_deps_file__V_207_207));
#line 2211 "write_deps_file.m"
    }
#line 2211 "write_deps_file.m"
    {
#line 2211 "write_deps_file.m"
      parse_tree__write_deps_file__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2211 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_204_204, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2211 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_204_204, 1) = ((MR_Box) (parse_tree__write_deps_file__V_206_206));
#line 2211 "write_deps_file.m"
    }
#line 2210 "write_deps_file.m"
    {
#line 2210 "write_deps_file.m"
      parse_tree__write_deps_file__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2210 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_202_202, 0) = ((MR_Box) ((MR_String) ".analysiss) | xargs rm -f\n"));
#line 2210 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_202_202, 1) = ((MR_Box) (parse_tree__write_deps_file__V_204_204));
#line 2210 "write_deps_file.m"
    }
#line 2210 "write_deps_file.m"
    {
#line 2210 "write_deps_file.m"
      parse_tree__write_deps_file__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2210 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2210 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 1) = ((MR_Box) (parse_tree__write_deps_file__V_202_202));
#line 2210 "write_deps_file.m"
    }
#line 2210 "write_deps_file.m"
    {
#line 2210 "write_deps_file.m"
      parse_tree__write_deps_file__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2210 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2210 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 1) = ((MR_Box) (parse_tree__write_deps_file__V_201_201));
#line 2210 "write_deps_file.m"
    }
#line 2209 "write_deps_file.m"
    {
#line 2209 "write_deps_file.m"
      parse_tree__write_deps_file__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2209 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 0) = ((MR_Box) ((MR_String) ".trans_opts) | xargs rm -f\n"));
#line 2209 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 1) = ((MR_Box) (parse_tree__write_deps_file__V_199_199));
#line 2209 "write_deps_file.m"
    }
#line 2209 "write_deps_file.m"
    {
#line 2209 "write_deps_file.m"
      parse_tree__write_deps_file__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2209 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_196_196, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2209 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_196_196, 1) = ((MR_Box) (parse_tree__write_deps_file__V_197_197));
#line 2209 "write_deps_file.m"
    }
#line 2209 "write_deps_file.m"
    {
#line 2209 "write_deps_file.m"
      parse_tree__write_deps_file__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2209 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_194_194, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2209 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_194_194, 1) = ((MR_Box) (parse_tree__write_deps_file__V_196_196));
#line 2209 "write_deps_file.m"
    }
#line 2208 "write_deps_file.m"
    {
#line 2208 "write_deps_file.m"
      parse_tree__write_deps_file__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2208 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 0) = ((MR_Box) ((MR_String) ".opts) | xargs rm -f\n"));
#line 2208 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 1) = ((MR_Box) (parse_tree__write_deps_file__V_194_194));
#line 2208 "write_deps_file.m"
    }
#line 2208 "write_deps_file.m"
    {
#line 2208 "write_deps_file.m"
      parse_tree__write_deps_file__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2208 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2208 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 1) = ((MR_Box) (parse_tree__write_deps_file__V_192_192));
#line 2208 "write_deps_file.m"
    }
#line 2208 "write_deps_file.m"
    {
#line 2208 "write_deps_file.m"
      parse_tree__write_deps_file__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2208 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_189_189, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2208 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_189_189, 1) = ((MR_Box) (parse_tree__write_deps_file__V_191_191));
#line 2208 "write_deps_file.m"
    }
#line 2207 "write_deps_file.m"
    {
#line 2207 "write_deps_file.m"
      parse_tree__write_deps_file__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2207 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_187_187, 0) = ((MR_Box) ((MR_String) ".int3s) | xargs rm -f\n"));
#line 2207 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_187_187, 1) = ((MR_Box) (parse_tree__write_deps_file__V_189_189));
#line 2207 "write_deps_file.m"
    }
#line 2207 "write_deps_file.m"
    {
#line 2207 "write_deps_file.m"
      parse_tree__write_deps_file__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2207 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2207 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 1) = ((MR_Box) (parse_tree__write_deps_file__V_187_187));
#line 2207 "write_deps_file.m"
    }
#line 2207 "write_deps_file.m"
    {
#line 2207 "write_deps_file.m"
      parse_tree__write_deps_file__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2207 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2207 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 1) = ((MR_Box) (parse_tree__write_deps_file__V_186_186));
#line 2207 "write_deps_file.m"
    }
#line 2206 "write_deps_file.m"
    {
#line 2206 "write_deps_file.m"
      parse_tree__write_deps_file__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2206 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 0) = ((MR_Box) ((MR_String) ".all_int0s) | xargs rm -f\n"));
#line 2206 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 1) = ((MR_Box) (parse_tree__write_deps_file__V_184_184));
#line 2206 "write_deps_file.m"
    }
#line 2206 "write_deps_file.m"
    {
#line 2206 "write_deps_file.m"
      parse_tree__write_deps_file__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2206 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_181_181, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2206 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_181_181, 1) = ((MR_Box) (parse_tree__write_deps_file__V_182_182));
#line 2206 "write_deps_file.m"
    }
#line 2206 "write_deps_file.m"
    {
#line 2206 "write_deps_file.m"
      parse_tree__write_deps_file__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2206 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_179_179, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2206 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_179_179, 1) = ((MR_Box) (parse_tree__write_deps_file__V_181_181));
#line 2206 "write_deps_file.m"
    }
#line 2202 "write_deps_file.m"
    {
#line 2202 "write_deps_file.m"
      parse_tree__write_deps_file__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2202 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_177_177, 0) = ((MR_Box) ((MR_String) ".ints) | xargs rm -f\n"));
#line 2202 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_177_177, 1) = ((MR_Box) (parse_tree__write_deps_file__V_179_179));
#line 2202 "write_deps_file.m"
    }
#line 2202 "write_deps_file.m"
    {
#line 2202 "write_deps_file.m"
      parse_tree__write_deps_file__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2202 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2202 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 1) = ((MR_Box) (parse_tree__write_deps_file__V_177_177));
#line 2202 "write_deps_file.m"
    }
#line 2202 "write_deps_file.m"
    {
#line 2202 "write_deps_file.m"
      parse_tree__write_deps_file__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2202 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2202 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 1) = ((MR_Box) (parse_tree__write_deps_file__V_176_176));
#line 2202 "write_deps_file.m"
    }
#line 2201 "write_deps_file.m"
    {
#line 2201 "write_deps_file.m"
      parse_tree__write_deps_file__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2201 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 0) = ((MR_Box) ((MR_String) ".trans_opt_dates) | xargs rm -f\n"));
#line 2201 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 1) = ((MR_Box) (parse_tree__write_deps_file__V_174_174));
#line 2201 "write_deps_file.m"
    }
#line 2201 "write_deps_file.m"
    {
#line 2201 "write_deps_file.m"
      parse_tree__write_deps_file__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2201 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2201 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 1) = ((MR_Box) (parse_tree__write_deps_file__V_172_172));
#line 2201 "write_deps_file.m"
    }
#line 2201 "write_deps_file.m"
    {
#line 2201 "write_deps_file.m"
      parse_tree__write_deps_file__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2201 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2201 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 1) = ((MR_Box) (parse_tree__write_deps_file__V_171_171));
#line 2201 "write_deps_file.m"
    }
#line 2200 "write_deps_file.m"
    {
#line 2200 "write_deps_file.m"
      parse_tree__write_deps_file__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2200 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 0) = ((MR_Box) ((MR_String) ".optdates) | xargs rm -f\n"));
#line 2200 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 1) = ((MR_Box) (parse_tree__write_deps_file__V_169_169));
#line 2200 "write_deps_file.m"
    }
#line 2200 "write_deps_file.m"
    {
#line 2200 "write_deps_file.m"
      parse_tree__write_deps_file__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2200 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2200 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 1) = ((MR_Box) (parse_tree__write_deps_file__V_167_167));
#line 2200 "write_deps_file.m"
    }
#line 2200 "write_deps_file.m"
    {
#line 2200 "write_deps_file.m"
      parse_tree__write_deps_file__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2200 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2200 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 1) = ((MR_Box) (parse_tree__write_deps_file__V_166_166));
#line 2200 "write_deps_file.m"
    }
#line 2199 "write_deps_file.m"
    {
#line 2199 "write_deps_file.m"
      parse_tree__write_deps_file__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2199 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 0) = ((MR_Box) ((MR_String) ".date3s) | xargs rm -f\n"));
#line 2199 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 1) = ((MR_Box) (parse_tree__write_deps_file__V_164_164));
#line 2199 "write_deps_file.m"
    }
#line 2199 "write_deps_file.m"
    {
#line 2199 "write_deps_file.m"
      parse_tree__write_deps_file__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2199 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2199 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 1) = ((MR_Box) (parse_tree__write_deps_file__V_162_162));
#line 2199 "write_deps_file.m"
    }
#line 2199 "write_deps_file.m"
    {
#line 2199 "write_deps_file.m"
      parse_tree__write_deps_file__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2199 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2199 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 1) = ((MR_Box) (parse_tree__write_deps_file__V_161_161));
#line 2199 "write_deps_file.m"
    }
#line 2198 "write_deps_file.m"
    {
#line 2198 "write_deps_file.m"
      parse_tree__write_deps_file__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2198 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 0) = ((MR_Box) ((MR_String) ".date0s) | xargs rm -f\n"));
#line 2198 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 1) = ((MR_Box) (parse_tree__write_deps_file__V_159_159));
#line 2198 "write_deps_file.m"
    }
#line 2198 "write_deps_file.m"
    {
#line 2198 "write_deps_file.m"
      parse_tree__write_deps_file__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2198 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2198 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 1) = ((MR_Box) (parse_tree__write_deps_file__V_157_157));
#line 2198 "write_deps_file.m"
    }
#line 2198 "write_deps_file.m"
    {
#line 2198 "write_deps_file.m"
      parse_tree__write_deps_file__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2198 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2198 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 1) = ((MR_Box) (parse_tree__write_deps_file__V_156_156));
#line 2198 "write_deps_file.m"
    }
#line 2197 "write_deps_file.m"
    {
#line 2197 "write_deps_file.m"
      parse_tree__write_deps_file__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2197 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_152_152, 0) = ((MR_Box) ((MR_String) ".dates) | xargs rm -f\n"));
#line 2197 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_152_152, 1) = ((MR_Box) (parse_tree__write_deps_file__V_154_154));
#line 2197 "write_deps_file.m"
    }
#line 2197 "write_deps_file.m"
    {
#line 2197 "write_deps_file.m"
      parse_tree__write_deps_file__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2197 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2197 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 1) = ((MR_Box) (parse_tree__write_deps_file__V_152_152));
#line 2197 "write_deps_file.m"
    }
#line 2197 "write_deps_file.m"
    {
#line 2197 "write_deps_file.m"
      parse_tree__write_deps_file__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2197 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_149_149, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2197 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_149_149, 1) = ((MR_Box) (parse_tree__write_deps_file__V_151_151));
#line 2197 "write_deps_file.m"
    }
#line 2196 "write_deps_file.m"
    {
#line 2196 "write_deps_file.m"
      parse_tree__write_deps_file__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 1) = ((MR_Box) (parse_tree__write_deps_file__V_149_149));
#line 2196 "write_deps_file.m"
    }
#line 2196 "write_deps_file.m"
    {
#line 2196 "write_deps_file.m"
      parse_tree__write_deps_file__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_146_146, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_146_146, 1) = ((MR_Box) (parse_tree__write_deps_file__V_147_147));
#line 2196 "write_deps_file.m"
    }
#line 2196 "write_deps_file.m"
    {
#line 2196 "write_deps_file.m"
      parse_tree__write_deps_file__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_144_144, 0) = ((MR_Box) ((MR_String) " : "));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_144_144, 1) = ((MR_Box) (parse_tree__write_deps_file__V_146_146));
#line 2196 "write_deps_file.m"
    }
#line 2196 "write_deps_file.m"
    {
#line 2196 "write_deps_file.m"
      parse_tree__write_deps_file__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 1) = ((MR_Box) (parse_tree__write_deps_file__V_144_144));
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
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
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
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_137_137);
    }
#line 2229 "write_deps_file.m"
    {
#line 2229 "write_deps_file.m"
      parse_tree__write_deps_file__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2229 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 0) = ((MR_Box) (parse_tree__write_deps_file__DvFileName_30));
#line 2229 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[117])));
#line 2229 "write_deps_file.m"
    }
#line 2228 "write_deps_file.m"
    {
#line 2228 "write_deps_file.m"
      parse_tree__write_deps_file__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2228 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 0) = ((MR_Box) ((MR_String) " "));
#line 2228 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 1) = ((MR_Box) (parse_tree__write_deps_file__V_271_271));
#line 2228 "write_deps_file.m"
    }
#line 2228 "write_deps_file.m"
    {
#line 2228 "write_deps_file.m"
      parse_tree__write_deps_file__V_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2228 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 0) = ((MR_Box) (parse_tree__write_deps_file__DepFileName_29));
#line 2228 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 1) = ((MR_Box) (parse_tree__write_deps_file__V_269_269));
#line 2228 "write_deps_file.m"
    }
#line 2227 "write_deps_file.m"
    {
#line 2227 "write_deps_file.m"
      parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2227 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) ((MR_String) " "));
#line 2227 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__V_268_268));
#line 2227 "write_deps_file.m"
    }
#line 2227 "write_deps_file.m"
    {
#line 2227 "write_deps_file.m"
      parse_tree__write_deps_file__V_265_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2227 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 0) = ((MR_Box) (parse_tree__write_deps_file__JarFileName_28));
#line 2227 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 2227 "write_deps_file.m"
    }
#line 2226 "write_deps_file.m"
    {
#line 2226 "write_deps_file.m"
      parse_tree__write_deps_file__V_263_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2226 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 0) = ((MR_Box) ((MR_String) " "));
#line 2226 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 1) = ((MR_Box) (parse_tree__write_deps_file__V_265_265));
#line 2226 "write_deps_file.m"
    }
#line 2226 "write_deps_file.m"
    {
#line 2226 "write_deps_file.m"
      parse_tree__write_deps_file__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2226 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 0) = ((MR_Box) (parse_tree__write_deps_file__SharedLibFileName_27));
#line 2226 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 1) = ((MR_Box) (parse_tree__write_deps_file__V_263_263));
#line 2226 "write_deps_file.m"
    }
#line 2225 "write_deps_file.m"
    {
#line 2225 "write_deps_file.m"
      parse_tree__write_deps_file__V_260_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2225 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 0) = ((MR_Box) ((MR_String) " "));
#line 2225 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 1) = ((MR_Box) (parse_tree__write_deps_file__V_262_262));
#line 2225 "write_deps_file.m"
    }
#line 2225 "write_deps_file.m"
    {
#line 2225 "write_deps_file.m"
      parse_tree__write_deps_file__V_259_259 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2225 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_259_259, 0) = ((MR_Box) (parse_tree__write_deps_file__LibFileName_26));
#line 2225 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_259_259, 1) = ((MR_Box) (parse_tree__write_deps_file__V_260_260));
#line 2225 "write_deps_file.m"
    }
#line 2224 "write_deps_file.m"
    {
#line 2224 "write_deps_file.m"
      parse_tree__write_deps_file__V_257_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2224 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_257_257, 0) = ((MR_Box) ((MR_String) " "));
#line 2224 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_257_257, 1) = ((MR_Box) (parse_tree__write_deps_file__V_259_259));
#line 2224 "write_deps_file.m"
    }
#line 2224 "write_deps_file.m"
    {
#line 2224 "write_deps_file.m"
      parse_tree__write_deps_file__V_256_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2224 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_256_256, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_25));
#line 2224 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_256_256, 1) = ((MR_Box) (parse_tree__write_deps_file__V_257_257));
#line 2224 "write_deps_file.m"
    }
#line 2223 "write_deps_file.m"
    {
#line 2223 "write_deps_file.m"
      parse_tree__write_deps_file__V_254_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2223 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_254_254, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) "));
#line 2223 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_254_254, 1) = ((MR_Box) (parse_tree__write_deps_file__V_256_256));
#line 2223 "write_deps_file.m"
    }
#line 2223 "write_deps_file.m"
    {
#line 2223 "write_deps_file.m"
      parse_tree__write_deps_file__V_253_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2223 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_253_253, 0) = ((MR_Box) (parse_tree__write_deps_file__ExeFileName_21));
#line 2223 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_253_253, 1) = ((MR_Box) (parse_tree__write_deps_file__V_254_254));
#line 2223 "write_deps_file.m"
    }
#line 2222 "write_deps_file.m"
    {
#line 2222 "write_deps_file.m"
      parse_tree__write_deps_file__V_250_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2222 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_250_250, 0) = ((MR_Box) ((MR_String) "\t-rm -f "));
#line 2222 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_250_250, 1) = ((MR_Box) (parse_tree__write_deps_file__V_253_253));
#line 2222 "write_deps_file.m"
    }
#line 2221 "write_deps_file.m"
    {
#line 2221 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_250_250);
#line 2221 "write_deps_file.m"
      return;
    }
#line 2154 "write_deps_file.m"
  }
#line 2146 "write_deps_file.m"
}

#line 2133 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(
#line 2133 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 2133 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_9,
#line 2133 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 2133 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_11,
#line 2133 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__5_5)
#line 2133 "write_deps_file.m"
{
#line 2138 "write_deps_file.m"
  {
#line 2138 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2138 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Extension_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 0)));
#line 2138 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__VarExtension_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 1)));
#line 2138 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TargetName_15;
#line 2138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_20_20;
#line 2138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_23_23;
#line 2138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_24_24;
#line 2138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_26_26;
#line 2138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_27_27;
#line 2138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_29_29;
#line 2138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_30_30;

#line 2139 "write_deps_file.m"
    {
#line 2139 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__Extension_12, (MR_Integer) 1, &parse_tree__write_deps_file__TargetName_15);
    }
#line 2143 "write_deps_file.m"
    {
#line 2143 "write_deps_file.m"
      parse_tree__write_deps_file__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2143 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_30_30, 0) = ((MR_Box) (parse_tree__write_deps_file__VarExtension_13));
#line 2143 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[118])));
#line 2143 "write_deps_file.m"
    }
#line 2143 "write_deps_file.m"
    {
#line 2143 "write_deps_file.m"
      parse_tree__write_deps_file__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2143 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_29_29, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_11));
#line 2143 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_29_29, 1) = ((MR_Box) (parse_tree__write_deps_file__V_30_30));
#line 2143 "write_deps_file.m"
    }
#line 2143 "write_deps_file.m"
    {
#line 2143 "write_deps_file.m"
      parse_tree__write_deps_file__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2143 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_27_27, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 2143 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_27_27, 1) = ((MR_Box) (parse_tree__write_deps_file__V_29_29));
#line 2143 "write_deps_file.m"
    }
#line 2143 "write_deps_file.m"
    {
#line 2143 "write_deps_file.m"
      parse_tree__write_deps_file__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2143 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_26_26, 0) = ((MR_Box) (parse_tree__write_deps_file__TargetName_15));
#line 2143 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_26_26, 1) = ((MR_Box) (parse_tree__write_deps_file__V_27_27));
#line 2143 "write_deps_file.m"
    }
#line 2142 "write_deps_file.m"
    {
#line 2142 "write_deps_file.m"
      parse_tree__write_deps_file__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2142 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_24_24, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2142 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_24_24, 1) = ((MR_Box) (parse_tree__write_deps_file__V_26_26));
#line 2142 "write_deps_file.m"
    }
#line 2142 "write_deps_file.m"
    {
#line 2142 "write_deps_file.m"
      parse_tree__write_deps_file__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2142 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_23_23, 0) = ((MR_Box) (parse_tree__write_deps_file__TargetName_15));
#line 2142 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_23_23, 1) = ((MR_Box) (parse_tree__write_deps_file__V_24_24));
#line 2142 "write_deps_file.m"
    }
#line 2142 "write_deps_file.m"
    {
#line 2142 "write_deps_file.m"
      parse_tree__write_deps_file__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2142 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_20_20, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2142 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_20_20, 1) = ((MR_Box) (parse_tree__write_deps_file__V_23_23));
#line 2142 "write_deps_file.m"
    }
#line 2141 "write_deps_file.m"
    {
#line 2141 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_9, parse_tree__write_deps_file__V_20_20);
#line 2141 "write_deps_file.m"
      return;
    }
#line 2138 "write_deps_file.m"
  }
#line 2133 "write_deps_file.m"
}

#line 2117 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1(
#line 2117 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2117 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2117 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2117 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 2117 "write_deps_file.m"
{
#line 2117 "write_deps_file.m"
  {
#line 2117 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 2117 "write_deps_file.m"
    {
#line 2117 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 2117 "write_deps_file.m"
      return;
    }
#line 2117 "write_deps_file.m"
  }
#line 2117 "write_deps_file.m"
}

#line 2111 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(
#line 2111 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 2111 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 2111 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 2111 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_10)
#line 2111 "write_deps_file.m"
{
#line 2115 "write_deps_file.m"
  {
#line 2115 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2115 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_14_14;
#line 2116 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_13;

#line 2117 "write_deps_file.m"
    {
#line 2117 "write_deps_file.m"
      parse_tree__write_deps_file__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2117 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[2]));
#line 2117 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1));
#line 2117 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2117 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 2117 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_8));
#line 2117 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_9));
#line 2117 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 6) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_10));
#line 2117 "write_deps_file.m"
    }
#line 2116 "write_deps_file.m"
    {
#line 2116 "write_deps_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__write_deps_file_scalar_common_2[3], (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_14_14, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[95]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_13);
    }
#line 2115 "write_deps_file.m"
  }
#line 2111 "write_deps_file.m"
}

#line 1946 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(
#line 1946 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 1946 "write_deps_file.m"
{
#line 1946 "write_deps_file.m"
  {
#line 1946 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 1946 "write_deps_file.m"
    MR_builtin_longjmp((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0, 1);
#line 1946 "write_deps_file.m"
  }
#line 1946 "write_deps_file.m"
}

#line 1946 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3(
#line 1946 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 1946 "write_deps_file.m"
{
#line 1946 "write_deps_file.m"
  {
#line 1946 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 1946 "write_deps_file.m"
    (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_29_29 = ((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_V_29_29);
#line 1946 "write_deps_file.m"
    (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_44_44 = ((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_V_44_44);
#line 1946 "write_deps_file.m"
    {
#line 1946 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(parse_tree__write_deps_file__env_ptr);
#line 1946 "write_deps_file.m"
      return;
    }
#line 1946 "write_deps_file.m"
  }
#line 1946 "write_deps_file.m"
}

#line 1946 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(
#line 1946 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 1946 "write_deps_file.m"
{
#line 1946 "write_deps_file.m"
  {
#line 1946 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 1946 "write_deps_file.m"
    {
#line 1946 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_44_44, (MR_Integer) 0)));
#line 1947 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__V_340_340;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_341_341;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_342_342;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_343_343;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_344_344;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_345_345;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_346_346;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_347_347;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_348_348;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_349_349;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_350_350;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_351_351;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_352_352;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_353_353;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_354_354;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_355_355;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_356_356;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_357_357;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_358_358;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_359_359;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_360_360;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_361_361;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_362_362;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_363_363;
#line 1947 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_364_364;
#line 1947 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__V_365_365;

#line 1946 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_44_44, (MR_Integer) 1)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_340_340 = ((MR_String) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 0)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 1)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 2)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 3)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 4)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 5)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 6)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 7)));
#line 1947 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 8)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 9)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 10)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 11)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 12)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 13)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 14)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 15)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 16)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 17)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 18)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 19)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_359_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 20)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_360_360 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 21)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_361_361 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 22)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_362_362 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 23)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_363_363 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 24)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_364_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 25)));
#line 1947 "write_deps_file.m"
      parse_tree__write_deps_file__V_365_365 = ((MR_String) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 26)));
#line 1947 "write_deps_file.m"
      {
#line 1947 "write_deps_file.m"
        (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = mercury__set__non_empty_1_p_0((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__TypeCtorInfo_366_366, (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_45_45);
      }
#line 1947 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 1947 "write_deps_file.m"
        {
#line 1947 "write_deps_file.m"
          parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(parse_tree__write_deps_file__env_ptr);
#line 1947 "write_deps_file.m"
          return;
        }
#line 1946 "write_deps_file.m"
    }
#line 1946 "write_deps_file.m"
  }
#line 1946 "write_deps_file.m"
}

#line 1946 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(
#line 1946 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 1946 "write_deps_file.m"
{
#line 1946 "write_deps_file.m"
  {
#line 1946 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 1946 "write_deps_file.m"
    if (MR_builtin_setjmp((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0) == 0)
#line 1946 "write_deps_file.m"
      {
#line 1946 "write_deps_file.m"
        {
#line 5694 "parse_tree.write_deps_file.c"
          (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__TypeCtorInfo_366_366 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1946 "write_deps_file.m"
          {
#line 1946 "write_deps_file.m"
            mercury__map__member_3_p_0((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__TypeCtorInfo_366_366, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17, &(parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_V_29_29, &(parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_V_44_44, parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3, parse_tree__write_deps_file__env_ptr);
          }
#line 1946 "write_deps_file.m"
        }
#line 1946 "write_deps_file.m"
        (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = MR_FALSE;
#line 1946 "write_deps_file.m"
      }
#line 1946 "write_deps_file.m"
    else
#line 1946 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = MR_TRUE;
#line 1946 "write_deps_file.m"
  }
#line 1946 "write_deps_file.m"
}

#line 1922 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(
#line 1922 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_14,
#line 1922 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_15,
#line 1922 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_16,
#line 1922 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_17,
#line 1922 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_18,
#line 1922 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_19,
#line 1922 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_20,
#line 1922 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_21,
#line 1922 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_22,
#line 1922 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeOptsVar_23,
#line 1922 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeTransOptsVar_24)
#line 1922 "write_deps_file.m"
{
#line 1922 "write_deps_file.m"
  {
#line 1922 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s parse_tree__write_deps_file__env;

#line 1922 "write_deps_file.m"
    (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17 = parse_tree__write_deps_file__DepsMap_17;
#line 1928 "write_deps_file.m"
    {
#line 1928 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallIntsTargetName_26;
#line 1928 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__OptStr_27;
#line 1928 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__Int0Str_31;
#line 1928 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__MaybeInt0sVar_32;
#line 1928 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__TransOptStr_33;
#line 1928 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__DepStr_34;
#line 1928 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallOptsTargetName_35;
#line 1928 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallHdrsTargetName_36;
#line 1928 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_37;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_49_49;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_52_52;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_53_53;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_55_55;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_56_56;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_58_58;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_59_59;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_61_61;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_62_62;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_64_64;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_65_65;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_66_66;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_67_67;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_68_68;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_70_70;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_72_72;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_73_73;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_75_75;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_76_76;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_78_78;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_79_79;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_80_80;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_81_81;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_82_82;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_84_84;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_86_86;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_88_88;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_90_90;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_92_92;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_94_94;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_96_96;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_98_98;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_100_100;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_102_102;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_104_104;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_106_106;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_108_108;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_110_110;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_111_111;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_112_112;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_113_113;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_137_137;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_140_140;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_141_141;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_143_143;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_217_217;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_220_220;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_221_221;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_223_223;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_224_224;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_226_226;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_228_228;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_229_229;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_231_231;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_233_233;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_235_235;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_236_236;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_238_238;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_240_240;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_242_242;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_244_244;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_260_260;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_263_263;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_264_264;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_266_266;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_267_267;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_269_269;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_271_271;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_272_272;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_274_274;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_276_276;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_278_278;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_279_279;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_281_281;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_283_283;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_285_285;
#line 1928 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_287_287;

#line 1934 "write_deps_file.m"
      {
#line 1934 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_ints", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallIntsTargetName_26);
      }
#line 1939 "write_deps_file.m"
#line 1939 "write_deps_file.m"
      switch (parse_tree__write_deps_file__Intermod_20) {
#line 1939 "write_deps_file.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1939 "write_deps_file.m"
        case (MR_Integer) 0:
#line 1941 "write_deps_file.m"
          parse_tree__write_deps_file__OptStr_27 = (MR_String) "";
#line 1939 "write_deps_file.m"
          break;
#line 1939 "write_deps_file.m"
        case (MR_Integer) 1:
#line 1938 "write_deps_file.m"
          parse_tree__write_deps_file__OptStr_27 = (MR_String) " opt";
#line 1939 "write_deps_file.m"
          break;
#line 1939 "write_deps_file.m"
      }
#line 1944 "write_deps_file.m"
      (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = (parse_tree__write_deps_file__Intermod_20 == (MR_Integer) 1);
#line 1944 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 1946 "write_deps_file.m"
        {
#line 1946 "write_deps_file.m"
          parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(&parse_tree__write_deps_file__env);
        }
#line 1954 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 1952 "write_deps_file.m"
        {
#line 1952 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__V_47_47;

#line 1952 "write_deps_file.m"
          parse_tree__write_deps_file__Int0Str_31 = (MR_String) " int0";
#line 1953 "write_deps_file.m"
          {
#line 1953 "write_deps_file.m"
            parse_tree__write_deps_file__V_47_47 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_18, (MR_String) ".int0s) ");
          }
#line 1953 "write_deps_file.m"
          {
#line 1953 "write_deps_file.m"
            parse_tree__write_deps_file__MaybeInt0sVar_32 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_47_47);
          }
#line 1952 "write_deps_file.m"
        }
#line 1954 "write_deps_file.m"
      else
#line 1955 "write_deps_file.m"
        {
#line 1955 "write_deps_file.m"
          parse_tree__write_deps_file__Int0Str_31 = (MR_String) "";
#line 1956 "write_deps_file.m"
          parse_tree__write_deps_file__MaybeInt0sVar_32 = (MR_String) "";
#line 1955 "write_deps_file.m"
        }
#line 1961 "write_deps_file.m"
#line 1961 "write_deps_file.m"
      switch (parse_tree__write_deps_file__TransOpt_21) {
#line 1961 "write_deps_file.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1961 "write_deps_file.m"
        case (MR_Integer) 0:
#line 1963 "write_deps_file.m"
          parse_tree__write_deps_file__TransOptStr_33 = (MR_String) "";
#line 1961 "write_deps_file.m"
          break;
#line 1961 "write_deps_file.m"
        case (MR_Integer) 1:
#line 1960 "write_deps_file.m"
          parse_tree__write_deps_file__TransOptStr_33 = (MR_String) " trans_opt";
#line 1961 "write_deps_file.m"
          break;
#line 1961 "write_deps_file.m"
      }
#line 1968 "write_deps_file.m"
#line 1968 "write_deps_file.m"
      switch (parse_tree__write_deps_file__MmcMakeDeps_19) {
#line 1968 "write_deps_file.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1968 "write_deps_file.m"
        case (MR_Integer) 0:
#line 1970 "write_deps_file.m"
          parse_tree__write_deps_file__DepStr_34 = (MR_String) "";
#line 1968 "write_deps_file.m"
          break;
#line 1968 "write_deps_file.m"
        case (MR_Integer) 1:
#line 1967 "write_deps_file.m"
          parse_tree__write_deps_file__DepStr_34 = (MR_String) " module_dep";
#line 1968 "write_deps_file.m"
          break;
#line 1968 "write_deps_file.m"
      }
#line 1995 "write_deps_file.m"
      {
#line 1995 "write_deps_file.m"
        parse_tree__write_deps_file__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1995 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_113_113, 0) = ((MR_Box) (parse_tree__write_deps_file__DepStr_34));
#line 1995 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[37])));
#line 1995 "write_deps_file.m"
      }
#line 1995 "write_deps_file.m"
      {
#line 1995 "write_deps_file.m"
        parse_tree__write_deps_file__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1995 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptStr_33));
#line 1995 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 1) = ((MR_Box) (parse_tree__write_deps_file__V_113_113));
#line 1995 "write_deps_file.m"
      }
#line 1995 "write_deps_file.m"
      {
#line 1995 "write_deps_file.m"
        parse_tree__write_deps_file__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1995 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 0) = ((MR_Box) (parse_tree__write_deps_file__OptStr_27));
#line 1995 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 1) = ((MR_Box) (parse_tree__write_deps_file__V_112_112));
#line 1995 "write_deps_file.m"
      }
#line 1995 "write_deps_file.m"
      {
#line 1995 "write_deps_file.m"
        parse_tree__write_deps_file__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1995 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_110_110, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0Str_31));
#line 1995 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_110_110, 1) = ((MR_Box) (parse_tree__write_deps_file__V_111_111));
#line 1995 "write_deps_file.m"
      }
#line 1994 "write_deps_file.m"
      {
#line 1994 "write_deps_file.m"
        parse_tree__write_deps_file__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1994 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_108_108, 0) = ((MR_Box) ((MR_String) "\tfor ext in int int2 int3"));
#line 1994 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_108_108, 1) = ((MR_Box) (parse_tree__write_deps_file__V_110_110));
#line 1994 "write_deps_file.m"
      }
#line 1993 "write_deps_file.m"
      {
#line 1993 "write_deps_file.m"
        parse_tree__write_deps_file__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1993 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 0) = ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n"));
#line 1993 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 1) = ((MR_Box) (parse_tree__write_deps_file__V_108_108));
#line 1993 "write_deps_file.m"
      }
#line 1992 "write_deps_file.m"
      {
#line 1992 "write_deps_file.m"
        parse_tree__write_deps_file__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1992 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 0) = ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails, then we just use\n"));
#line 1992 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 1) = ((MR_Box) (parse_tree__write_deps_file__V_106_106));
#line 1992 "write_deps_file.m"
      }
#line 1991 "write_deps_file.m"
      {
#line 1991 "write_deps_file.m"
        parse_tree__write_deps_file__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1991 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 0) = ((MR_Box) ((MR_String) "\t# The following is needed to support the \140--use-subdirs\' option\n"));
#line 1991 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 1) = ((MR_Box) (parse_tree__write_deps_file__V_104_104));
#line 1991 "write_deps_file.m"
      }
#line 1990 "write_deps_file.m"
      {
#line 1990 "write_deps_file.m"
        parse_tree__write_deps_file__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1990 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_100_100, 0) = ((MR_Box) ((MR_String) "\tdone\n"));
#line 1990 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_100_100, 1) = ((MR_Box) (parse_tree__write_deps_file__V_102_102));
#line 1990 "write_deps_file.m"
      }
#line 1989 "write_deps_file.m"
      {
#line 1989 "write_deps_file.m"
        parse_tree__write_deps_file__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1989 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 0) = ((MR_Box) ((MR_String) "\t\tfi; \\\n"));
#line 1989 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 1) = ((MR_Box) (parse_tree__write_deps_file__V_100_100));
#line 1989 "write_deps_file.m"
      }
#line 1988 "write_deps_file.m"
      {
#line 1988 "write_deps_file.m"
        parse_tree__write_deps_file__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1988 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 0) = ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\\n"));
#line 1988 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 1) = ((MR_Box) (parse_tree__write_deps_file__V_98_98));
#line 1988 "write_deps_file.m"
      }
#line 1987 "write_deps_file.m"
      {
#line 1987 "write_deps_file.m"
        parse_tree__write_deps_file__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1987 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"installing \044\044target\"; \\\n"));
#line 1987 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 1) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 1987 "write_deps_file.m"
      }
#line 1986 "write_deps_file.m"
      {
#line 1986 "write_deps_file.m"
        parse_tree__write_deps_file__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1986 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 0) = ((MR_Box) ((MR_String) "\t\telse \\\n"));
#line 1986 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 1) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 1986 "write_deps_file.m"
      }
#line 1985 "write_deps_file.m"
      {
#line 1985 "write_deps_file.m"
        parse_tree__write_deps_file__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1985 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"\044\044target unchanged\"; \\\n"));
#line 1985 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 1) = ((MR_Box) (parse_tree__write_deps_file__V_92_92));
#line 1985 "write_deps_file.m"
      }
#line 1984 "write_deps_file.m"
      {
#line 1984 "write_deps_file.m"
        parse_tree__write_deps_file__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1984 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 0) = ((MR_Box) ((MR_String) "\t\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\\n"));
#line 1984 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 1) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 1984 "write_deps_file.m"
      }
#line 1983 "write_deps_file.m"
      {
#line 1983 "write_deps_file.m"
        parse_tree__write_deps_file__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1983 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 0) = ((MR_Box) ((MR_String) "\t\ttarget=\"\044(INSTALL_INT_DIR)/\140basename \044\044file\140\"; \\\n"));
#line 1983 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 1) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 1983 "write_deps_file.m"
      }
#line 1982 "write_deps_file.m"
      {
#line 1982 "write_deps_file.m"
        parse_tree__write_deps_file__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1982 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 0) = ((MR_Box) ((MR_String) "\tfor file in \044\044files; do \\\n"));
#line 1982 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 1) = ((MR_Box) (parse_tree__write_deps_file__V_86_86));
#line 1982 "write_deps_file.m"
      }
#line 1981 "write_deps_file.m"
      {
#line 1981 "write_deps_file.m"
        parse_tree__write_deps_file__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1981 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_82_82, 0) = ((MR_Box) ((MR_String) "\"; \\\n"));
#line 1981 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_82_82, 1) = ((MR_Box) (parse_tree__write_deps_file__V_84_84));
#line 1981 "write_deps_file.m"
      }
#line 1981 "write_deps_file.m"
      {
#line 1981 "write_deps_file.m"
        parse_tree__write_deps_file__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1981 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeModuleDepsVar_22));
#line 1981 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 1) = ((MR_Box) (parse_tree__write_deps_file__V_82_82));
#line 1981 "write_deps_file.m"
      }
#line 1981 "write_deps_file.m"
      {
#line 1981 "write_deps_file.m"
        parse_tree__write_deps_file__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1981 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 1981 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 1) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 1981 "write_deps_file.m"
      }
#line 1980 "write_deps_file.m"
      {
#line 1980 "write_deps_file.m"
        parse_tree__write_deps_file__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1980 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 1980 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 1) = ((MR_Box) (parse_tree__write_deps_file__V_80_80));
#line 1980 "write_deps_file.m"
      }
#line 1980 "write_deps_file.m"
      {
#line 1980 "write_deps_file.m"
        parse_tree__write_deps_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1980 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeInt0sVar_32));
#line 1980 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 1) = ((MR_Box) (parse_tree__write_deps_file__V_79_79));
#line 1980 "write_deps_file.m"
      }
#line 1980 "write_deps_file.m"
      {
#line 1980 "write_deps_file.m"
        parse_tree__write_deps_file__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1980 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_76_76, 0) = ((MR_Box) ((MR_String) ".int3s) "));
#line 1980 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_76_76, 1) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 1980 "write_deps_file.m"
      }
#line 1979 "write_deps_file.m"
      {
#line 1979 "write_deps_file.m"
        parse_tree__write_deps_file__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1979 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 1979 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 1) = ((MR_Box) (parse_tree__write_deps_file__V_76_76));
#line 1979 "write_deps_file.m"
      }
#line 1979 "write_deps_file.m"
      {
#line 1979 "write_deps_file.m"
        parse_tree__write_deps_file__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1979 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 0) = ((MR_Box) ((MR_String) ".ints) \044("));
#line 1979 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 1) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 1979 "write_deps_file.m"
      }
#line 1979 "write_deps_file.m"
      {
#line 1979 "write_deps_file.m"
        parse_tree__write_deps_file__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1979 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 1979 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 1) = ((MR_Box) (parse_tree__write_deps_file__V_73_73));
#line 1979 "write_deps_file.m"
      }
#line 1979 "write_deps_file.m"
      {
#line 1979 "write_deps_file.m"
        parse_tree__write_deps_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1979 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 0) = ((MR_Box) ((MR_String) "\tfiles=\"\044("));
#line 1979 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 1) = ((MR_Box) (parse_tree__write_deps_file__V_72_72));
#line 1979 "write_deps_file.m"
      }
#line 1978 "write_deps_file.m"
      {
#line 1978 "write_deps_file.m"
        parse_tree__write_deps_file__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1978 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 0) = ((MR_Box) ((MR_String) " install_lib_dirs\n"));
#line 1978 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 1) = ((MR_Box) (parse_tree__write_deps_file__V_70_70));
#line 1978 "write_deps_file.m"
      }
#line 1977 "write_deps_file.m"
      {
#line 1977 "write_deps_file.m"
        parse_tree__write_deps_file__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1977 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeModuleDepsVar_22));
#line 1977 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 1) = ((MR_Box) (parse_tree__write_deps_file__V_68_68));
#line 1977 "write_deps_file.m"
      }
#line 1977 "write_deps_file.m"
      {
#line 1977 "write_deps_file.m"
        parse_tree__write_deps_file__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1977 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 1977 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 1) = ((MR_Box) (parse_tree__write_deps_file__V_67_67));
#line 1977 "write_deps_file.m"
      }
#line 1976 "write_deps_file.m"
      {
#line 1976 "write_deps_file.m"
        parse_tree__write_deps_file__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1976 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 1976 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 1) = ((MR_Box) (parse_tree__write_deps_file__V_66_66));
#line 1976 "write_deps_file.m"
      }
#line 1976 "write_deps_file.m"
      {
#line 1976 "write_deps_file.m"
        parse_tree__write_deps_file__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1976 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_64_64, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeInt0sVar_32));
#line 1976 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_64_64, 1) = ((MR_Box) (parse_tree__write_deps_file__V_65_65));
#line 1976 "write_deps_file.m"
      }
#line 1976 "write_deps_file.m"
      {
#line 1976 "write_deps_file.m"
        parse_tree__write_deps_file__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1976 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_62_62, 0) = ((MR_Box) ((MR_String) ".int3s) "));
#line 1976 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_62_62, 1) = ((MR_Box) (parse_tree__write_deps_file__V_64_64));
#line 1976 "write_deps_file.m"
      }
#line 1976 "write_deps_file.m"
      {
#line 1976 "write_deps_file.m"
        parse_tree__write_deps_file__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1976 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_61_61, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 1976 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_61_61, 1) = ((MR_Box) (parse_tree__write_deps_file__V_62_62));
#line 1976 "write_deps_file.m"
      }
#line 1975 "write_deps_file.m"
      {
#line 1975 "write_deps_file.m"
        parse_tree__write_deps_file__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1975 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_59_59, 0) = ((MR_Box) ((MR_String) ".ints) \044("));
#line 1975 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_59_59, 1) = ((MR_Box) (parse_tree__write_deps_file__V_61_61));
#line 1975 "write_deps_file.m"
      }
#line 1975 "write_deps_file.m"
      {
#line 1975 "write_deps_file.m"
        parse_tree__write_deps_file__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1975 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 1975 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 1) = ((MR_Box) (parse_tree__write_deps_file__V_59_59));
#line 1975 "write_deps_file.m"
      }
#line 1975 "write_deps_file.m"
      {
#line 1975 "write_deps_file.m"
        parse_tree__write_deps_file__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1975 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_56_56, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1975 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_56_56, 1) = ((MR_Box) (parse_tree__write_deps_file__V_58_58));
#line 1975 "write_deps_file.m"
      }
#line 1975 "write_deps_file.m"
      {
#line 1975 "write_deps_file.m"
        parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1975 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallIntsTargetName_26));
#line 1975 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_56_56));
#line 1975 "write_deps_file.m"
      }
#line 1974 "write_deps_file.m"
      {
#line 1974 "write_deps_file.m"
        parse_tree__write_deps_file__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1974 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1974 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 1) = ((MR_Box) (parse_tree__write_deps_file__V_55_55));
#line 1974 "write_deps_file.m"
      }
#line 1974 "write_deps_file.m"
      {
#line 1974 "write_deps_file.m"
        parse_tree__write_deps_file__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1974 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallIntsTargetName_26));
#line 1974 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 1) = ((MR_Box) (parse_tree__write_deps_file__V_53_53));
#line 1974 "write_deps_file.m"
      }
#line 1974 "write_deps_file.m"
      {
#line 1974 "write_deps_file.m"
        parse_tree__write_deps_file__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1974 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 1974 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 1) = ((MR_Box) (parse_tree__write_deps_file__V_52_52));
#line 1974 "write_deps_file.m"
      }
#line 1973 "write_deps_file.m"
      {
#line 1973 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_49_49);
      }
#line 2007 "write_deps_file.m"
      {
#line 2007 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_opts", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallOptsTargetName_35);
      }
#line 2011 "write_deps_file.m"
      {
#line 2011 "write_deps_file.m"
        parse_tree__write_deps_file__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2011 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsTargetName_35));
#line 2011 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103])));
#line 2011 "write_deps_file.m"
      }
#line 2010 "write_deps_file.m"
      {
#line 2010 "write_deps_file.m"
        parse_tree__write_deps_file__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2010 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_141_141, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2010 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_141_141, 1) = ((MR_Box) (parse_tree__write_deps_file__V_143_143));
#line 2010 "write_deps_file.m"
      }
#line 2010 "write_deps_file.m"
      {
#line 2010 "write_deps_file.m"
        parse_tree__write_deps_file__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2010 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsTargetName_35));
#line 2010 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 1) = ((MR_Box) (parse_tree__write_deps_file__V_141_141));
#line 2010 "write_deps_file.m"
      }
#line 2010 "write_deps_file.m"
      {
#line 2010 "write_deps_file.m"
        parse_tree__write_deps_file__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2010 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_137_137, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2010 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_137_137, 1) = ((MR_Box) (parse_tree__write_deps_file__V_140_140));
#line 2010 "write_deps_file.m"
      }
#line 2009 "write_deps_file.m"
      {
#line 2009 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_137_137);
      }
#line 2013 "write_deps_file.m"
      (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = (parse_tree__write_deps_file__Intermod_20 == (MR_Integer) 0);
#line 2013 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 2014 "write_deps_file.m"
        (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = (parse_tree__write_deps_file__TransOpt_21 == (MR_Integer) 0);
#line 2017 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 2016 "write_deps_file.m"
        {
#line 2016 "write_deps_file.m"
          {
#line 2016 "write_deps_file.m"
            mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_15, (MR_String) "\n\t\100:\n\n");
          }
#line 2016 "write_deps_file.m"
        }
#line 2017 "write_deps_file.m"
      else
#line 2018 "write_deps_file.m"
        {
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_149_149;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_151_151;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_152_152;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_154_154;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_156_156;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_157_157;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_158_158;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_160_160;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_162_162;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_164_164;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_166_166;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_168_168;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_170_170;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_172_172;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_174_174;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_176_176;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_178_178;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_180_180;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_182_182;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_184_184;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_186_186;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_188_188;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_190_190;
#line 2018 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_191_191;

#line 2035 "write_deps_file.m"
          {
#line 2035 "write_deps_file.m"
            parse_tree__write_deps_file__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2035 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptStr_33));
#line 2035 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[45])));
#line 2035 "write_deps_file.m"
          }
#line 2035 "write_deps_file.m"
          {
#line 2035 "write_deps_file.m"
            parse_tree__write_deps_file__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2035 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_190_190, 0) = ((MR_Box) (parse_tree__write_deps_file__OptStr_27));
#line 2035 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_190_190, 1) = ((MR_Box) (parse_tree__write_deps_file__V_191_191));
#line 2035 "write_deps_file.m"
          }
#line 2035 "write_deps_file.m"
          {
#line 2035 "write_deps_file.m"
            parse_tree__write_deps_file__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2035 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_188_188, 0) = ((MR_Box) ((MR_String) "\tfor ext in "));
#line 2035 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_188_188, 1) = ((MR_Box) (parse_tree__write_deps_file__V_190_190));
#line 2035 "write_deps_file.m"
          }
#line 2034 "write_deps_file.m"
          {
#line 2034 "write_deps_file.m"
            parse_tree__write_deps_file__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2034 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 0) = ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n"));
#line 2034 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 1) = ((MR_Box) (parse_tree__write_deps_file__V_188_188));
#line 2034 "write_deps_file.m"
          }
#line 2033 "write_deps_file.m"
          {
#line 2033 "write_deps_file.m"
            parse_tree__write_deps_file__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2033 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 0) = ((MR_Box) ((MR_String) " then we just use\n"));
#line 2033 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 1) = ((MR_Box) (parse_tree__write_deps_file__V_186_186));
#line 2033 "write_deps_file.m"
          }
#line 2032 "write_deps_file.m"
          {
#line 2032 "write_deps_file.m"
            parse_tree__write_deps_file__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2032 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 0) = ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails,"));
#line 2032 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 1) = ((MR_Box) (parse_tree__write_deps_file__V_184_184));
#line 2032 "write_deps_file.m"
          }
#line 2031 "write_deps_file.m"
          {
#line 2031 "write_deps_file.m"
            parse_tree__write_deps_file__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2031 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_180_180, 0) = ((MR_Box) ((MR_String) " \140--use-subdirs\' option\n"));
#line 2031 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_180_180, 1) = ((MR_Box) (parse_tree__write_deps_file__V_182_182));
#line 2031 "write_deps_file.m"
          }
#line 2030 "write_deps_file.m"
          {
#line 2030 "write_deps_file.m"
            parse_tree__write_deps_file__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2030 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_178_178, 0) = ((MR_Box) ((MR_String) "\t# The following is needed to support the"));
#line 2030 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_178_178, 1) = ((MR_Box) (parse_tree__write_deps_file__V_180_180));
#line 2030 "write_deps_file.m"
          }
#line 2029 "write_deps_file.m"
          {
#line 2029 "write_deps_file.m"
            parse_tree__write_deps_file__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2029 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 0) = ((MR_Box) ((MR_String) "\tdone\n"));
#line 2029 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 1) = ((MR_Box) (parse_tree__write_deps_file__V_178_178));
#line 2029 "write_deps_file.m"
          }
#line 2028 "write_deps_file.m"
          {
#line 2028 "write_deps_file.m"
            parse_tree__write_deps_file__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2028 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 0) = ((MR_Box) ((MR_String) "\t\tfi; \\\n"));
#line 2028 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 1) = ((MR_Box) (parse_tree__write_deps_file__V_176_176));
#line 2028 "write_deps_file.m"
          }
#line 2027 "write_deps_file.m"
          {
#line 2027 "write_deps_file.m"
            parse_tree__write_deps_file__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2027 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 0) = ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\\n"));
#line 2027 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 1) = ((MR_Box) (parse_tree__write_deps_file__V_174_174));
#line 2027 "write_deps_file.m"
          }
#line 2026 "write_deps_file.m"
          {
#line 2026 "write_deps_file.m"
            parse_tree__write_deps_file__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2026 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_170_170, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"installing \044\044target\"; \\\n"));
#line 2026 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_170_170, 1) = ((MR_Box) (parse_tree__write_deps_file__V_172_172));
#line 2026 "write_deps_file.m"
          }
#line 2025 "write_deps_file.m"
          {
#line 2025 "write_deps_file.m"
            parse_tree__write_deps_file__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2025 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_168_168, 0) = ((MR_Box) ((MR_String) "\t\telse \\\n"));
#line 2025 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_168_168, 1) = ((MR_Box) (parse_tree__write_deps_file__V_170_170));
#line 2025 "write_deps_file.m"
          }
#line 2024 "write_deps_file.m"
          {
#line 2024 "write_deps_file.m"
            parse_tree__write_deps_file__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2024 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"\044\044target unchanged\"; \\\n"));
#line 2024 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 1) = ((MR_Box) (parse_tree__write_deps_file__V_168_168));
#line 2024 "write_deps_file.m"
          }
#line 2023 "write_deps_file.m"
          {
#line 2023 "write_deps_file.m"
            parse_tree__write_deps_file__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2023 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 0) = ((MR_Box) ((MR_String) "\t\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\\n"));
#line 2023 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 1) = ((MR_Box) (parse_tree__write_deps_file__V_166_166));
#line 2023 "write_deps_file.m"
          }
#line 2022 "write_deps_file.m"
          {
#line 2022 "write_deps_file.m"
            parse_tree__write_deps_file__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2022 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 0) = ((MR_Box) ((MR_String) "\t\ttarget=\"\044(INSTALL_GRADE_INT_DIR)/\140basename \044\044file\140\";\\\n"));
#line 2022 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 1) = ((MR_Box) (parse_tree__write_deps_file__V_164_164));
#line 2022 "write_deps_file.m"
          }
#line 2021 "write_deps_file.m"
          {
#line 2021 "write_deps_file.m"
            parse_tree__write_deps_file__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2021 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_160_160, 0) = ((MR_Box) ((MR_String) "\tfor file in \044\044files; do \\\n"));
#line 2021 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_160_160, 1) = ((MR_Box) (parse_tree__write_deps_file__V_162_162));
#line 2021 "write_deps_file.m"
          }
#line 2020 "write_deps_file.m"
          {
#line 2020 "write_deps_file.m"
            parse_tree__write_deps_file__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2020 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_158_158, 0) = ((MR_Box) ((MR_String) "\"; \\\n"));
#line 2020 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_158_158, 1) = ((MR_Box) (parse_tree__write_deps_file__V_160_160));
#line 2020 "write_deps_file.m"
          }
#line 2020 "write_deps_file.m"
          {
#line 2020 "write_deps_file.m"
            parse_tree__write_deps_file__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2020 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 2020 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 1) = ((MR_Box) (parse_tree__write_deps_file__V_158_158));
#line 2020 "write_deps_file.m"
          }
#line 2020 "write_deps_file.m"
          {
#line 2020 "write_deps_file.m"
            parse_tree__write_deps_file__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2020 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 2020 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 1) = ((MR_Box) (parse_tree__write_deps_file__V_157_157));
#line 2020 "write_deps_file.m"
          }
#line 2020 "write_deps_file.m"
          {
#line 2020 "write_deps_file.m"
            parse_tree__write_deps_file__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2020 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 0) = ((MR_Box) ((MR_String) "\tfiles=\""));
#line 2020 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 1) = ((MR_Box) (parse_tree__write_deps_file__V_156_156));
#line 2020 "write_deps_file.m"
          }
#line 2019 "write_deps_file.m"
          {
#line 2019 "write_deps_file.m"
            parse_tree__write_deps_file__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2019 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_152_152, 0) = ((MR_Box) ((MR_String) "install_grade_dirs\n"));
#line 2019 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_152_152, 1) = ((MR_Box) (parse_tree__write_deps_file__V_154_154));
#line 2019 "write_deps_file.m"
          }
#line 2019 "write_deps_file.m"
          {
#line 2019 "write_deps_file.m"
            parse_tree__write_deps_file__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2019 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 2019 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 1) = ((MR_Box) (parse_tree__write_deps_file__V_152_152));
#line 2019 "write_deps_file.m"
          }
#line 2019 "write_deps_file.m"
          {
#line 2019 "write_deps_file.m"
            parse_tree__write_deps_file__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2019 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_149_149, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 2019 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_149_149, 1) = ((MR_Box) (parse_tree__write_deps_file__V_151_151));
#line 2019 "write_deps_file.m"
          }
#line 2018 "write_deps_file.m"
          {
#line 2018 "write_deps_file.m"
            mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_149_149);
          }
#line 2018 "write_deps_file.m"
        }
#line 2058 "write_deps_file.m"
      {
#line 2058 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_hdrs", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallHdrsTargetName_36);
      }
#line 2068 "write_deps_file.m"
      {
#line 2068 "write_deps_file.m"
        parse_tree__write_deps_file__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2068 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2068 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[49])));
#line 2068 "write_deps_file.m"
      }
#line 2068 "write_deps_file.m"
      {
#line 2068 "write_deps_file.m"
        parse_tree__write_deps_file__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2068 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 0) = ((MR_Box) ((MR_String) "\tfor hdr in \044("));
#line 2068 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 1) = ((MR_Box) (parse_tree__write_deps_file__V_244_244));
#line 2068 "write_deps_file.m"
      }
#line 2067 "write_deps_file.m"
      {
#line 2067 "write_deps_file.m"
        parse_tree__write_deps_file__V_240_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2067 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 0) = ((MR_Box) ((MR_String) "else\n"));
#line 2067 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 1) = ((MR_Box) (parse_tree__write_deps_file__V_242_242));
#line 2067 "write_deps_file.m"
      }
#line 2066 "write_deps_file.m"
      {
#line 2066 "write_deps_file.m"
        parse_tree__write_deps_file__V_238_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2066 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_238_238, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 2066 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_238_238, 1) = ((MR_Box) (parse_tree__write_deps_file__V_240_240));
#line 2066 "write_deps_file.m"
      }
#line 2065 "write_deps_file.m"
      {
#line 2065 "write_deps_file.m"
        parse_tree__write_deps_file__V_236_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2065 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_236_236, 0) = ((MR_Box) ((MR_String) ".mhs),)\n"));
#line 2065 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_236_236, 1) = ((MR_Box) (parse_tree__write_deps_file__V_238_238));
#line 2065 "write_deps_file.m"
      }
#line 2065 "write_deps_file.m"
      {
#line 2065 "write_deps_file.m"
        parse_tree__write_deps_file__V_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2065 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2065 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 1) = ((MR_Box) (parse_tree__write_deps_file__V_236_236));
#line 2065 "write_deps_file.m"
      }
#line 2065 "write_deps_file.m"
      {
#line 2065 "write_deps_file.m"
        parse_tree__write_deps_file__V_233_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2065 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_233_233, 0) = ((MR_Box) ((MR_String) "ifeq (\044("));
#line 2065 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_233_233, 1) = ((MR_Box) (parse_tree__write_deps_file__V_235_235));
#line 2065 "write_deps_file.m"
      }
#line 2064 "write_deps_file.m"
      {
#line 2064 "write_deps_file.m"
        parse_tree__write_deps_file__V_231_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2064 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 0) = ((MR_Box) ((MR_String) "install_lib_dirs\n"));
#line 2064 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 1) = ((MR_Box) (parse_tree__write_deps_file__V_233_233));
#line 2064 "write_deps_file.m"
      }
#line 2063 "write_deps_file.m"
      {
#line 2063 "write_deps_file.m"
        parse_tree__write_deps_file__V_229_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2063 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 0) = ((MR_Box) ((MR_String) ".mhs) "));
#line 2063 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 1) = ((MR_Box) (parse_tree__write_deps_file__V_231_231));
#line 2063 "write_deps_file.m"
      }
#line 2063 "write_deps_file.m"
      {
#line 2063 "write_deps_file.m"
        parse_tree__write_deps_file__V_228_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2063 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_228_228, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2063 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_228_228, 1) = ((MR_Box) (parse_tree__write_deps_file__V_229_229));
#line 2063 "write_deps_file.m"
      }
#line 2063 "write_deps_file.m"
      {
#line 2063 "write_deps_file.m"
        parse_tree__write_deps_file__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2063 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 0) = ((MR_Box) ((MR_String) "\044("));
#line 2063 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 1) = ((MR_Box) (parse_tree__write_deps_file__V_228_228));
#line 2063 "write_deps_file.m"
      }
#line 2062 "write_deps_file.m"
      {
#line 2062 "write_deps_file.m"
        parse_tree__write_deps_file__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2062 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 0) = ((MR_Box) ((MR_String) " : "));
#line 2062 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 1) = ((MR_Box) (parse_tree__write_deps_file__V_226_226));
#line 2062 "write_deps_file.m"
      }
#line 2062 "write_deps_file.m"
      {
#line 2062 "write_deps_file.m"
        parse_tree__write_deps_file__V_223_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2062 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_223_223, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallHdrsTargetName_36));
#line 2062 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_223_223, 1) = ((MR_Box) (parse_tree__write_deps_file__V_224_224));
#line 2062 "write_deps_file.m"
      }
#line 2061 "write_deps_file.m"
      {
#line 2061 "write_deps_file.m"
        parse_tree__write_deps_file__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2061 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2061 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 1) = ((MR_Box) (parse_tree__write_deps_file__V_223_223));
#line 2061 "write_deps_file.m"
      }
#line 2061 "write_deps_file.m"
      {
#line 2061 "write_deps_file.m"
        parse_tree__write_deps_file__V_220_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2061 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_220_220, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallHdrsTargetName_36));
#line 2061 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_220_220, 1) = ((MR_Box) (parse_tree__write_deps_file__V_221_221));
#line 2061 "write_deps_file.m"
      }
#line 2061 "write_deps_file.m"
      {
#line 2061 "write_deps_file.m"
        parse_tree__write_deps_file__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2061 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2061 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 1) = ((MR_Box) (parse_tree__write_deps_file__V_220_220));
#line 2061 "write_deps_file.m"
      }
#line 2060 "write_deps_file.m"
      {
#line 2060 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_217_217);
      }
#line 2074 "write_deps_file.m"
      {
#line 2074 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_grade_hdrs", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_37);
      }
#line 2085 "write_deps_file.m"
      {
#line 2085 "write_deps_file.m"
        parse_tree__write_deps_file__V_287_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2085 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_287_287, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2085 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_287_287, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[73])));
#line 2085 "write_deps_file.m"
      }
#line 2085 "write_deps_file.m"
      {
#line 2085 "write_deps_file.m"
        parse_tree__write_deps_file__V_285_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2085 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 0) = ((MR_Box) ((MR_String) "\tfor hdr in \044("));
#line 2085 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 1) = ((MR_Box) (parse_tree__write_deps_file__V_287_287));
#line 2085 "write_deps_file.m"
      }
#line 2084 "write_deps_file.m"
      {
#line 2084 "write_deps_file.m"
        parse_tree__write_deps_file__V_283_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2084 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 0) = ((MR_Box) ((MR_String) "else\n"));
#line 2084 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 1) = ((MR_Box) (parse_tree__write_deps_file__V_285_285));
#line 2084 "write_deps_file.m"
      }
#line 2083 "write_deps_file.m"
      {
#line 2083 "write_deps_file.m"
        parse_tree__write_deps_file__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2083 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 2083 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 1) = ((MR_Box) (parse_tree__write_deps_file__V_283_283));
#line 2083 "write_deps_file.m"
      }
#line 2082 "write_deps_file.m"
      {
#line 2082 "write_deps_file.m"
        parse_tree__write_deps_file__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2082 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 0) = ((MR_Box) ((MR_String) ".mihs),)\n"));
#line 2082 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 1) = ((MR_Box) (parse_tree__write_deps_file__V_281_281));
#line 2082 "write_deps_file.m"
      }
#line 2082 "write_deps_file.m"
      {
#line 2082 "write_deps_file.m"
        parse_tree__write_deps_file__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2082 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2082 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 1) = ((MR_Box) (parse_tree__write_deps_file__V_279_279));
#line 2082 "write_deps_file.m"
      }
#line 2082 "write_deps_file.m"
      {
#line 2082 "write_deps_file.m"
        parse_tree__write_deps_file__V_276_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2082 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 0) = ((MR_Box) ((MR_String) "ifeq (\044("));
#line 2082 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 1) = ((MR_Box) (parse_tree__write_deps_file__V_278_278));
#line 2082 "write_deps_file.m"
      }
#line 2081 "write_deps_file.m"
      {
#line 2081 "write_deps_file.m"
        parse_tree__write_deps_file__V_274_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2081 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 0) = ((MR_Box) ((MR_String) "install_grade_dirs\n"));
#line 2081 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 1) = ((MR_Box) (parse_tree__write_deps_file__V_276_276));
#line 2081 "write_deps_file.m"
      }
#line 2080 "write_deps_file.m"
      {
#line 2080 "write_deps_file.m"
        parse_tree__write_deps_file__V_272_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2080 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 0) = ((MR_Box) ((MR_String) ".mihs) "));
#line 2080 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 1) = ((MR_Box) (parse_tree__write_deps_file__V_274_274));
#line 2080 "write_deps_file.m"
      }
#line 2080 "write_deps_file.m"
      {
#line 2080 "write_deps_file.m"
        parse_tree__write_deps_file__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2080 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2080 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 1) = ((MR_Box) (parse_tree__write_deps_file__V_272_272));
#line 2080 "write_deps_file.m"
      }
#line 2080 "write_deps_file.m"
      {
#line 2080 "write_deps_file.m"
        parse_tree__write_deps_file__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2080 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 0) = ((MR_Box) ((MR_String) "\044("));
#line 2080 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 1) = ((MR_Box) (parse_tree__write_deps_file__V_271_271));
#line 2080 "write_deps_file.m"
      }
#line 2079 "write_deps_file.m"
      {
#line 2079 "write_deps_file.m"
        parse_tree__write_deps_file__V_267_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2079 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_267_267, 0) = ((MR_Box) ((MR_String) " : "));
#line 2079 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_267_267, 1) = ((MR_Box) (parse_tree__write_deps_file__V_269_269));
#line 2079 "write_deps_file.m"
      }
#line 2079 "write_deps_file.m"
      {
#line 2079 "write_deps_file.m"
        parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2079 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_37));
#line 2079 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__V_267_267));
#line 2079 "write_deps_file.m"
      }
#line 2078 "write_deps_file.m"
      {
#line 2078 "write_deps_file.m"
        parse_tree__write_deps_file__V_264_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2078 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2078 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 2078 "write_deps_file.m"
      }
#line 2078 "write_deps_file.m"
      {
#line 2078 "write_deps_file.m"
        parse_tree__write_deps_file__V_263_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2078 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_37));
#line 2078 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 1) = ((MR_Box) (parse_tree__write_deps_file__V_264_264));
#line 2078 "write_deps_file.m"
      }
#line 2078 "write_deps_file.m"
      {
#line 2078 "write_deps_file.m"
        parse_tree__write_deps_file__V_260_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2078 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2078 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 1) = ((MR_Box) (parse_tree__write_deps_file__V_263_263));
#line 2078 "write_deps_file.m"
      }
#line 2077 "write_deps_file.m"
      {
#line 2077 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_260_260);
#line 2077 "write_deps_file.m"
        return;
      }
#line 1928 "write_deps_file.m"
    }
#line 1922 "write_deps_file.m"
  }
#line 1922 "write_deps_file.m"
}

#line 1879 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(
#line 1879 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_11,
#line 1879 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12,
#line 1879 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_13,
#line 1879 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_14,
#line 1879 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_15,
#line 1879 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_16,
#line 1879 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DepFileName_17,
#line 1879 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DvFileName_18)
#line 1879 "write_deps_file.m"
{
#line 1885 "write_deps_file.m"
  {
#line 1885 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1885 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleFileName_20;
#line 1885 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ForceC2InitTarget_21;
#line 1885 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TmpInitCFileName_22;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_31_31;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_33_33;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_35_35;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_36_36;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_38_38;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_39_39;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_41_41;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_43_43;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_47_47;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_50_50;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_52_52;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_53_53;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_55_55;
#line 1885 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_67_67;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_70_70;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_72_72;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_74_74;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_75_75;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_77_77;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_78_78;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_80_80;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_81_81;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_83_83;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_85_85;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_87_87;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_88_88;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_90_90;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_93_93;
#line 1885 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_95_95;

#line 1886 "write_deps_file.m"
    {
#line 1886 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_11, parse_tree__write_deps_file__ModuleName_13, (MR_String) ".dep", (MR_Integer) 1, parse_tree__write_deps_file__DepFileName_17);
    }
#line 1888 "write_deps_file.m"
    {
#line 1888 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_11, parse_tree__write_deps_file__ModuleName_13, (MR_String) ".dv", (MR_Integer) 1, parse_tree__write_deps_file__DvFileName_18);
    }
#line 1893 "write_deps_file.m"
    {
#line 1893 "write_deps_file.m"
      parse_tree__write_deps_file__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1893 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_43_43, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_16));
#line 1893 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[96])));
#line 1893 "write_deps_file.m"
    }
#line 1893 "write_deps_file.m"
    {
#line 1893 "write_deps_file.m"
      parse_tree__write_deps_file__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1893 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_41_41, 0) = ((MR_Box) ((MR_String) "\techo > "));
#line 1893 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_41_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 1893 "write_deps_file.m"
    }
#line 1892 "write_deps_file.m"
    {
#line 1892 "write_deps_file.m"
      parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1892 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) ((MR_String) ".cs)\n"));
#line 1892 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (parse_tree__write_deps_file__V_41_41));
#line 1892 "write_deps_file.m"
    }
#line 1892 "write_deps_file.m"
    {
#line 1892 "write_deps_file.m"
      parse_tree__write_deps_file__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1892 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_38_38, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 1892 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_38_38, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 1892 "write_deps_file.m"
    }
#line 1892 "write_deps_file.m"
    {
#line 1892 "write_deps_file.m"
      parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1892 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) ((MR_String) " \044("));
#line 1892 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_38_38));
#line 1892 "write_deps_file.m"
    }
#line 1892 "write_deps_file.m"
    {
#line 1892 "write_deps_file.m"
      parse_tree__write_deps_file__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1892 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_35_35, 0) = ((MR_Box) (*parse_tree__write_deps_file__DepFileName_17));
#line 1892 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_35_35, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 1892 "write_deps_file.m"
    }
#line 1892 "write_deps_file.m"
    {
#line 1892 "write_deps_file.m"
      parse_tree__write_deps_file__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1892 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_33_33, 0) = ((MR_Box) ((MR_String) " : "));
#line 1892 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_33_33, 1) = ((MR_Box) (parse_tree__write_deps_file__V_35_35));
#line 1892 "write_deps_file.m"
    }
#line 1892 "write_deps_file.m"
    {
#line 1892 "write_deps_file.m"
      parse_tree__write_deps_file__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1892 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_31_31, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_16));
#line 1892 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_31_31, 1) = ((MR_Box) (parse_tree__write_deps_file__V_33_33));
#line 1892 "write_deps_file.m"
    }
#line 1891 "write_deps_file.m"
    {
#line 1891 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_31_31);
    }
#line 1896 "write_deps_file.m"
    {
#line 1896 "write_deps_file.m"
      parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1896 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) " >> "));
#line 1896 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 1896 "write_deps_file.m"
    }
#line 1896 "write_deps_file.m"
    {
#line 1896 "write_deps_file.m"
      parse_tree__write_deps_file__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1896 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 0) = ((MR_Box) ((MR_String) ".cs)"));
#line 1896 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 1) = ((MR_Box) (parse_tree__write_deps_file__V_55_55));
#line 1896 "write_deps_file.m"
    }
#line 1896 "write_deps_file.m"
    {
#line 1896 "write_deps_file.m"
      parse_tree__write_deps_file__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1896 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 1896 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 1) = ((MR_Box) (parse_tree__write_deps_file__V_53_53));
#line 1896 "write_deps_file.m"
    }
#line 1896 "write_deps_file.m"
    {
#line 1896 "write_deps_file.m"
      parse_tree__write_deps_file__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1896 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1896 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 1) = ((MR_Box) (parse_tree__write_deps_file__V_52_52));
#line 1896 "write_deps_file.m"
    }
#line 1896 "write_deps_file.m"
    {
#line 1896 "write_deps_file.m"
      parse_tree__write_deps_file__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1896 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 0) = ((MR_Box) ((MR_String) "\t\044(MKLIBINIT) "));
#line 1896 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 1) = ((MR_Box) (parse_tree__write_deps_file__V_50_50));
#line 1896 "write_deps_file.m"
    }
#line 1895 "write_deps_file.m"
    {
#line 1895 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_47_47);
    }
#line 1903 "write_deps_file.m"
    {
#line 1903 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\t\044(EXTRA_INIT_COMMAND) >> ");
    }
#line 1904 "write_deps_file.m"
    {
#line 1904 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__InitFileName_16);
    }
#line 1905 "write_deps_file.m"
    {
#line 1905 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1910 "write_deps_file.m"
    {
#line 1910 "write_deps_file.m"
      parse_tree__write_deps_file__ModuleFileName_20 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_13);
    }
#line 1911 "write_deps_file.m"
    {
#line 1911 "write_deps_file.m"
      parse_tree__write_deps_file__V_67_67 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleFileName_20, (MR_String) "_init");
    }
#line 1911 "write_deps_file.m"
    {
#line 1911 "write_deps_file.m"
      parse_tree__write_deps_file__ForceC2InitTarget_21 = mercury__string__f_43_43_2_f_0((MR_String) "force-", parse_tree__write_deps_file__V_67_67);
    }
#line 1912 "write_deps_file.m"
    {
#line 1912 "write_deps_file.m"
      parse_tree__write_deps_file__TmpInitCFileName_22 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__InitCFileName_15, (MR_String) ".tmp");
    }
#line 1919 "write_deps_file.m"
    {
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1919 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_95_95, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_15));
#line 1919 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[117])));
#line 1919 "write_deps_file.m"
    }
#line 1919 "write_deps_file.m"
    {
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1919 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 0) = ((MR_Box) ((MR_String) "\t\100mercury_update_interface "));
#line 1919 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 1) = ((MR_Box) (parse_tree__write_deps_file__V_95_95));
#line 1919 "write_deps_file.m"
    }
#line 1918 "write_deps_file.m"
    {
#line 1918 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1918 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) ((MR_String) ".init_cs) \044(ALL_C2INITARGS)\n"));
#line 1918 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__V_93_93));
#line 1918 "write_deps_file.m"
    }
#line 1918 "write_deps_file.m"
    {
#line 1918 "write_deps_file.m"
      parse_tree__write_deps_file__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1918 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 1918 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 1) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 1918 "write_deps_file.m"
    }
#line 1918 "write_deps_file.m"
    {
#line 1918 "write_deps_file.m"
      parse_tree__write_deps_file__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1918 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 0) = ((MR_Box) ((MR_String) " \044("));
#line 1918 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 1) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 1918 "write_deps_file.m"
    }
#line 1917 "write_deps_file.m"
    {
#line 1917 "write_deps_file.m"
      parse_tree__write_deps_file__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1917 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpInitCFileName_22));
#line 1917 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 1) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 1917 "write_deps_file.m"
    }
#line 1917 "write_deps_file.m"
    {
#line 1917 "write_deps_file.m"
      parse_tree__write_deps_file__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1917 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_85_85, 0) = ((MR_Box) ((MR_String) "--init-c-file "));
#line 1917 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_85_85, 1) = ((MR_Box) (parse_tree__write_deps_file__V_87_87));
#line 1917 "write_deps_file.m"
    }
#line 1916 "write_deps_file.m"
    {
#line 1916 "write_deps_file.m"
      parse_tree__write_deps_file__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1916 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 0) = ((MR_Box) ((MR_String) "\t\100\044(C2INIT) \044(ALL_GRADEFLAGS) \044(ALL_C2INITFLAGS) "));
#line 1916 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 1) = ((MR_Box) (parse_tree__write_deps_file__V_85_85));
#line 1916 "write_deps_file.m"
    }
#line 1915 "write_deps_file.m"
    {
#line 1915 "write_deps_file.m"
      parse_tree__write_deps_file__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1915 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 0) = ((MR_Box) ((MR_String) ".cs)\n"));
#line 1915 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 1) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 1915 "write_deps_file.m"
    }
#line 1915 "write_deps_file.m"
    {
#line 1915 "write_deps_file.m"
      parse_tree__write_deps_file__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1915 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 1915 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 1) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 1915 "write_deps_file.m"
    }
#line 1915 "write_deps_file.m"
    {
#line 1915 "write_deps_file.m"
      parse_tree__write_deps_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1915 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 0) = ((MR_Box) ((MR_String) " \044("));
#line 1915 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 1) = ((MR_Box) (parse_tree__write_deps_file__V_80_80));
#line 1915 "write_deps_file.m"
    }
#line 1915 "write_deps_file.m"
    {
#line 1915 "write_deps_file.m"
      parse_tree__write_deps_file__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1915 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 0) = ((MR_Box) (parse_tree__write_deps_file__ForceC2InitTarget_21));
#line 1915 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 1) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 1915 "write_deps_file.m"
    }
#line 1915 "write_deps_file.m"
    {
#line 1915 "write_deps_file.m"
      parse_tree__write_deps_file__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1915 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 0) = ((MR_Box) ((MR_String) " : "));
#line 1915 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 1) = ((MR_Box) (parse_tree__write_deps_file__V_77_77));
#line 1915 "write_deps_file.m"
    }
#line 1915 "write_deps_file.m"
    {
#line 1915 "write_deps_file.m"
      parse_tree__write_deps_file__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1915 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_15));
#line 1915 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 1) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 1915 "write_deps_file.m"
    }
#line 1914 "write_deps_file.m"
    {
#line 1914 "write_deps_file.m"
      parse_tree__write_deps_file__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1914 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 0) = ((MR_Box) ((MR_String) " :\n\n"));
#line 1914 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 1) = ((MR_Box) (parse_tree__write_deps_file__V_74_74));
#line 1914 "write_deps_file.m"
    }
#line 1914 "write_deps_file.m"
    {
#line 1914 "write_deps_file.m"
      parse_tree__write_deps_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1914 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 0) = ((MR_Box) (parse_tree__write_deps_file__ForceC2InitTarget_21));
#line 1914 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 1) = ((MR_Box) (parse_tree__write_deps_file__V_72_72));
#line 1914 "write_deps_file.m"
    }
#line 1913 "write_deps_file.m"
    {
#line 1913 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_70_70);
#line 1913 "write_deps_file.m"
      return;
    }
#line 1885 "write_deps_file.m"
  }
#line 1879 "write_deps_file.m"
}

#line 1651 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(
#line 1651 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_19,
#line 1651 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_20,
#line 1651 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_21,
#line 1651 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_22,
#line 1651 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_23,
#line 1651 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_24,
#line 1651 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_25,
#line 1651 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_26,
#line 1651 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_27,
#line 1651 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeOptsVar_28,
#line 1651 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeTransOptsVar_29,
#line 1651 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeModuleDepsVar_30,
#line 1651 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__ExeFileName_31,
#line 1651 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__JarFileName_32,
#line 1651 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__LibFileName_33,
#line 1651 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__SharedLibFileName_34)
#line 1651 "write_deps_file.m"
{
#line 1660 "write_deps_file.m"
  {
#line 1660 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Gmake_36;
#line 1660 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__All_MLLibsDepString_37;
#line 1660 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__All_MLObjsString_38;
#line 1660 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__All_MLPicObjsString_39;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IfIL_40;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ILMainRule_41;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IfJava2_42;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__JavaMainRule_43;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Else_44;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Else2_45;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__EndIf_46;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__EndIf2_47;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__MainRule_48;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Target_49;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Rules_50;
#line 1660 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__LibTargetName_51;
#line 1660 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeSharedLibFileName_52;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__UseInstallName_53;
#line 1660 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InstallNameOpt_54;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__AllInts_55;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ILLibRule_56;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__JavaLibRule_57;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__LibRule_58;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__LibRules_59;
#line 1660 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ClassFiles_60;
#line 1660 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ListClassFiles_61;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_88_88;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_90_90;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_93_93;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_94_94;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_96_96;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_98_98;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_99_99;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_101_101;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_103_103;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_109_109;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_111_111;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_123_123;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_126_126;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_128_128;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_129_129;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_131_131;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_132_132;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_134_134;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_140_140;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_142_142;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_143_143;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_145_145;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_147_147;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_148_148;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_150_150;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_151_151;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_153_153;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_154_154;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_156_156;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_157_157;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_159_159;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_161_161;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_163_163;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_164_164;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_166_166;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_167_167;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_169_169;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_171_171;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_172_172;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_174_174;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_216_216;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_217_217;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_219_219;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_221_221;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_222_222;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_224_224;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_225_225;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_226_226;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_227_227;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_230_230;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_232_232;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_234_234;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_235_235;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_237_237;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_239_239;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_240_240;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_242_242;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_244_244;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_245_245;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_247_247;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_249_249;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_250_250;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_252_252;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_262_262;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_265_265;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_266_266;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_268_268;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_271_271;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_272_272;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_274_274;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_275_275;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_277_277;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_279_279;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_280_280;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_282_282;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_283_283;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_285_285;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_286_286;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_288_288;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_290_290;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_292_292;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_293_293;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_295_295;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_296_296;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_298_298;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_300_300;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_301_301;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_303_303;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_309_309;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_311_311;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_313_313;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_314_314;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_316_316;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_318_318;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_319_319;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_321_321;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_322_322;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_324_324;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_326_326;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_327_327;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_329_329;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_331_331;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_332_332;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_334_334;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_336_336;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_337_337;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_339_339;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_340_340;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_342_342;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_344_344;
#line 1660 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_349_349;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_351_351;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_353_353;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_355_355;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_357_357;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_358_358;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_360_360;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_362_362;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_363_363;
#line 1660 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_365_365;

#line 1666 "write_deps_file.m"
    {
#line 1666 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_19, (MR_Integer) 118, &parse_tree__write_deps_file__Gmake_36);
    }
#line 1679 "write_deps_file.m"
#line 1679 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Gmake_36) {
#line 1679 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1679 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1680 "write_deps_file.m"
        {
#line 1681 "write_deps_file.m"
          parse_tree__write_deps_file__All_MLLibsDepString_37 = (MR_String) "\044(ALL_MLLIBS_DEP)";
#line 1682 "write_deps_file.m"
          parse_tree__write_deps_file__All_MLObjsString_38 = (MR_String) "\044(ALL_MLOBJS)";
#line 1683 "write_deps_file.m"
          parse_tree__write_deps_file__All_MLPicObjsString_39 = (MR_String) "\044(ALL_MLPICOBJS)";
#line 1680 "write_deps_file.m"
        }
#line 1679 "write_deps_file.m"
        break;
#line 1679 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1668 "write_deps_file.m"
        {
#line 1668 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_65_65;
#line 1668 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_67_67;
#line 1668 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_71_71;
#line 1668 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_73_73;
#line 1668 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_77_77;
#line 1668 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_79_79;

#line 1669 "write_deps_file.m"
          {
#line 1669 "write_deps_file.m"
            parse_tree__write_deps_file__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1669 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1669 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[106])));
#line 1669 "write_deps_file.m"
          }
#line 1669 "write_deps_file.m"
          {
#line 1669 "write_deps_file.m"
            parse_tree__write_deps_file__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1669 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(foreach \100,"));
#line 1669 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 1) = ((MR_Box) (parse_tree__write_deps_file__V_67_67));
#line 1669 "write_deps_file.m"
          }
#line 1669 "write_deps_file.m"
          {
#line 1669 "write_deps_file.m"
            mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_65_65, &parse_tree__write_deps_file__All_MLLibsDepString_37);
          }
#line 1672 "write_deps_file.m"
          {
#line 1672 "write_deps_file.m"
            parse_tree__write_deps_file__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1672 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1672 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[107])));
#line 1672 "write_deps_file.m"
          }
#line 1672 "write_deps_file.m"
          {
#line 1672 "write_deps_file.m"
            parse_tree__write_deps_file__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1672 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(foreach \100,"));
#line 1672 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 1) = ((MR_Box) (parse_tree__write_deps_file__V_73_73));
#line 1672 "write_deps_file.m"
          }
#line 1672 "write_deps_file.m"
          {
#line 1672 "write_deps_file.m"
            mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_71_71, &parse_tree__write_deps_file__All_MLObjsString_38);
          }
#line 1677 "write_deps_file.m"
          {
#line 1677 "write_deps_file.m"
            parse_tree__write_deps_file__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1677 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1677 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[108])));
#line 1677 "write_deps_file.m"
          }
#line 1676 "write_deps_file.m"
          {
#line 1676 "write_deps_file.m"
            parse_tree__write_deps_file__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1676 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(patsubst %.o,%.\044(EXT_FOR_PIC_OBJECTS),\044(foreach \100,"));
#line 1676 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 1) = ((MR_Box) (parse_tree__write_deps_file__V_79_79));
#line 1676 "write_deps_file.m"
          }
#line 1675 "write_deps_file.m"
          {
#line 1675 "write_deps_file.m"
            mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_77_77, &parse_tree__write_deps_file__All_MLPicObjsString_39);
          }
#line 1668 "write_deps_file.m"
        }
#line 1679 "write_deps_file.m"
        break;
#line 1679 "write_deps_file.m"
    }
#line 1697 "write_deps_file.m"
    {
#line 1697 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ModuleName_21, (MR_String) "", (MR_Integer) 1, parse_tree__write_deps_file__ExeFileName_31);
    }
#line 1700 "write_deps_file.m"
    parse_tree__write_deps_file__IfIL_40 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[109]);
#line 1703 "write_deps_file.m"
    {
#line 1703 "write_deps_file.m"
      parse_tree__write_deps_file__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1703 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_103_103, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1703 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_103_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[110])));
#line 1703 "write_deps_file.m"
    }
#line 1703 "write_deps_file.m"
    {
#line 1703 "write_deps_file.m"
      parse_tree__write_deps_file__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1703 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1703 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 1) = ((MR_Box) (parse_tree__write_deps_file__V_103_103));
#line 1703 "write_deps_file.m"
    }
#line 1702 "write_deps_file.m"
    {
#line 1702 "write_deps_file.m"
      parse_tree__write_deps_file__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1702 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 0) = ((MR_Box) ((MR_String) ".dlls) "));
#line 1702 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 1) = ((MR_Box) (parse_tree__write_deps_file__V_101_101));
#line 1702 "write_deps_file.m"
    }
#line 1702 "write_deps_file.m"
    {
#line 1702 "write_deps_file.m"
      parse_tree__write_deps_file__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1702 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1702 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 1) = ((MR_Box) (parse_tree__write_deps_file__V_99_99));
#line 1702 "write_deps_file.m"
    }
#line 1702 "write_deps_file.m"
    {
#line 1702 "write_deps_file.m"
      parse_tree__write_deps_file__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1702 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1702 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 1) = ((MR_Box) (parse_tree__write_deps_file__V_98_98));
#line 1702 "write_deps_file.m"
    }
#line 1702 "write_deps_file.m"
    {
#line 1702 "write_deps_file.m"
      parse_tree__write_deps_file__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1702 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 0) = ((MR_Box) ((MR_String) ".exe : "));
#line 1702 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 1) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 1702 "write_deps_file.m"
    }
#line 1702 "write_deps_file.m"
    {
#line 1702 "write_deps_file.m"
      parse_tree__write_deps_file__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1702 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1702 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 1) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 1702 "write_deps_file.m"
    }
#line 1701 "write_deps_file.m"
    {
#line 1701 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1701 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) ((MR_String) ".exe\n"));
#line 1701 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__V_93_93));
#line 1701 "write_deps_file.m"
    }
#line 1701 "write_deps_file.m"
    {
#line 1701 "write_deps_file.m"
      parse_tree__write_deps_file__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1701 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1701 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 1) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 1701 "write_deps_file.m"
    }
#line 1701 "write_deps_file.m"
    {
#line 1701 "write_deps_file.m"
      parse_tree__write_deps_file__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1701 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 0) = ((MR_Box) ((MR_String) " : "));
#line 1701 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 1) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 1701 "write_deps_file.m"
    }
#line 1701 "write_deps_file.m"
    {
#line 1701 "write_deps_file.m"
      parse_tree__write_deps_file__ILMainRule_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1701 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILMainRule_41, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1701 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILMainRule_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 1701 "write_deps_file.m"
    }
#line 1704 "write_deps_file.m"
    parse_tree__write_deps_file__IfJava2_42 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[111]);
#line 1705 "write_deps_file.m"
    {
#line 1705 "write_deps_file.m"
      parse_tree__write_deps_file__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1705 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1705 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[112])));
#line 1705 "write_deps_file.m"
    }
#line 1705 "write_deps_file.m"
    {
#line 1705 "write_deps_file.m"
      parse_tree__write_deps_file__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1705 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1705 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 1) = ((MR_Box) (parse_tree__write_deps_file__V_111_111));
#line 1705 "write_deps_file.m"
    }
#line 1705 "write_deps_file.m"
    {
#line 1705 "write_deps_file.m"
      parse_tree__write_deps_file__JavaMainRule_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1705 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaMainRule_43, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1705 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaMainRule_43, 1) = ((MR_Box) (parse_tree__write_deps_file__V_109_109));
#line 1705 "write_deps_file.m"
    }
#line 1707 "write_deps_file.m"
    parse_tree__write_deps_file__Else_44 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[113]);
#line 1708 "write_deps_file.m"
    parse_tree__write_deps_file__Else2_45 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[114]);
#line 1709 "write_deps_file.m"
    parse_tree__write_deps_file__EndIf_46 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[12]);
#line 1710 "write_deps_file.m"
    parse_tree__write_deps_file__EndIf2_47 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[115]);
#line 1716 "write_deps_file.m"
    {
#line 1716 "write_deps_file.m"
      parse_tree__write_deps_file__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1716 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_134_134, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1716 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[26])));
#line 1716 "write_deps_file.m"
    }
#line 1716 "write_deps_file.m"
    {
#line 1716 "write_deps_file.m"
      parse_tree__write_deps_file__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1716 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_132_132, 0) = ((MR_Box) ((MR_String) " : "));
#line 1716 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_132_132, 1) = ((MR_Box) (parse_tree__write_deps_file__V_134_134));
#line 1716 "write_deps_file.m"
    }
#line 1716 "write_deps_file.m"
    {
#line 1716 "write_deps_file.m"
      parse_tree__write_deps_file__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1716 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1716 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 1) = ((MR_Box) (parse_tree__write_deps_file__V_132_132));
#line 1716 "write_deps_file.m"
    }
#line 1715 "write_deps_file.m"
    {
#line 1715 "write_deps_file.m"
      parse_tree__write_deps_file__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1715 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1715 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 1) = ((MR_Box) (parse_tree__write_deps_file__V_131_131));
#line 1715 "write_deps_file.m"
    }
#line 1715 "write_deps_file.m"
    {
#line 1715 "write_deps_file.m"
      parse_tree__write_deps_file__V_128_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1715 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_128_128, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1715 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_128_128, 1) = ((MR_Box) (parse_tree__write_deps_file__V_129_129));
#line 1715 "write_deps_file.m"
    }
#line 1715 "write_deps_file.m"
    {
#line 1715 "write_deps_file.m"
      parse_tree__write_deps_file__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1715 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 1715 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 1) = ((MR_Box) (parse_tree__write_deps_file__V_128_128));
#line 1715 "write_deps_file.m"
    }
#line 1714 "write_deps_file.m"
    {
#line 1714 "write_deps_file.m"
      parse_tree__write_deps_file__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1714 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_123_123, 0) = ((MR_Box) ((MR_String) "ifneq (\044(EXT_FOR_EXE),)\n"));
#line 1714 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_123_123, 1) = ((MR_Box) (parse_tree__write_deps_file__V_126_126));
#line 1714 "write_deps_file.m"
    }
#line 1713 "write_deps_file.m"
    {
#line 1713 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_123_123);
    }
#line 1727 "write_deps_file.m"
    {
#line 1727 "write_deps_file.m"
      parse_tree__write_deps_file__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1727 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1727 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[116])));
#line 1727 "write_deps_file.m"
    }
#line 1727 "write_deps_file.m"
    {
#line 1727 "write_deps_file.m"
      parse_tree__write_deps_file__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1727 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1727 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 1) = ((MR_Box) (parse_tree__write_deps_file__V_174_174));
#line 1727 "write_deps_file.m"
    }
#line 1727 "write_deps_file.m"
    {
#line 1727 "write_deps_file.m"
      parse_tree__write_deps_file__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1727 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1727 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 1) = ((MR_Box) (parse_tree__write_deps_file__V_172_172));
#line 1727 "write_deps_file.m"
    }
#line 1727 "write_deps_file.m"
    {
#line 1727 "write_deps_file.m"
      parse_tree__write_deps_file__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1727 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 0) = ((MR_Box) ((MR_String) "\t\t\044("));
#line 1727 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 1) = ((MR_Box) (parse_tree__write_deps_file__V_171_171));
#line 1727 "write_deps_file.m"
    }
#line 1726 "write_deps_file.m"
    {
#line 1726 "write_deps_file.m"
      parse_tree__write_deps_file__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1726 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 0) = ((MR_Box) ((MR_String) " \\\n"));
#line 1726 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 1) = ((MR_Box) (parse_tree__write_deps_file__V_169_169));
#line 1726 "write_deps_file.m"
    }
#line 1726 "write_deps_file.m"
    {
#line 1726 "write_deps_file.m"
      parse_tree__write_deps_file__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1726 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_24));
#line 1726 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 1) = ((MR_Box) (parse_tree__write_deps_file__V_167_167));
#line 1726 "write_deps_file.m"
    }
#line 1725 "write_deps_file.m"
    {
#line 1725 "write_deps_file.m"
      parse_tree__write_deps_file__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1725 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) "));
#line 1725 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 1) = ((MR_Box) (parse_tree__write_deps_file__V_166_166));
#line 1725 "write_deps_file.m"
    }
#line 1725 "write_deps_file.m"
    {
#line 1725 "write_deps_file.m"
      parse_tree__write_deps_file__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1725 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_163_163, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1725 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_163_163, 1) = ((MR_Box) (parse_tree__write_deps_file__V_164_164));
#line 1725 "write_deps_file.m"
    }
#line 1725 "write_deps_file.m"
    {
#line 1725 "write_deps_file.m"
      parse_tree__write_deps_file__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1725 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 0) = ((MR_Box) ((MR_String) "\044(EXEFILE_OPT)"));
#line 1725 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 1) = ((MR_Box) (parse_tree__write_deps_file__V_163_163));
#line 1725 "write_deps_file.m"
    }
#line 1724 "write_deps_file.m"
    {
#line 1724 "write_deps_file.m"
      parse_tree__write_deps_file__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1724 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 0) = ((MR_Box) ((MR_String) "\t\044(ML) \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) -- \044(ALL_LDFLAGS) "));
#line 1724 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 1) = ((MR_Box) (parse_tree__write_deps_file__V_161_161));
#line 1724 "write_deps_file.m"
    }
#line 1723 "write_deps_file.m"
    {
#line 1723 "write_deps_file.m"
      parse_tree__write_deps_file__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1723 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1723 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 1) = ((MR_Box) (parse_tree__write_deps_file__V_159_159));
#line 1723 "write_deps_file.m"
    }
#line 1723 "write_deps_file.m"
    {
#line 1723 "write_deps_file.m"
      parse_tree__write_deps_file__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1723 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLLibsDepString_37));
#line 1723 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 1) = ((MR_Box) (parse_tree__write_deps_file__V_157_157));
#line 1723 "write_deps_file.m"
    }
#line 1723 "write_deps_file.m"
    {
#line 1723 "write_deps_file.m"
      parse_tree__write_deps_file__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1723 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 0) = ((MR_Box) ((MR_String) " "));
#line 1723 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 1) = ((MR_Box) (parse_tree__write_deps_file__V_156_156));
#line 1723 "write_deps_file.m"
    }
#line 1723 "write_deps_file.m"
    {
#line 1723 "write_deps_file.m"
      parse_tree__write_deps_file__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1723 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1723 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_153_153, 1) = ((MR_Box) (parse_tree__write_deps_file__V_154_154));
#line 1723 "write_deps_file.m"
    }
#line 1722 "write_deps_file.m"
    {
#line 1722 "write_deps_file.m"
      parse_tree__write_deps_file__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1722 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 0) = ((MR_Box) ((MR_String) " "));
#line 1722 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 1) = ((MR_Box) (parse_tree__write_deps_file__V_153_153));
#line 1722 "write_deps_file.m"
    }
#line 1722 "write_deps_file.m"
    {
#line 1722 "write_deps_file.m"
      parse_tree__write_deps_file__V_150_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1722 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_150_150, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_24));
#line 1722 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_150_150, 1) = ((MR_Box) (parse_tree__write_deps_file__V_151_151));
#line 1722 "write_deps_file.m"
    }
#line 1722 "write_deps_file.m"
    {
#line 1722 "write_deps_file.m"
      parse_tree__write_deps_file__V_148_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1722 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_148_148, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1722 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_148_148, 1) = ((MR_Box) (parse_tree__write_deps_file__V_150_150));
#line 1722 "write_deps_file.m"
    }
#line 1722 "write_deps_file.m"
    {
#line 1722 "write_deps_file.m"
      parse_tree__write_deps_file__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1722 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1722 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 1) = ((MR_Box) (parse_tree__write_deps_file__V_148_148));
#line 1722 "write_deps_file.m"
    }
#line 1722 "write_deps_file.m"
    {
#line 1722 "write_deps_file.m"
      parse_tree__write_deps_file__V_145_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1722 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_145_145, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1722 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_145_145, 1) = ((MR_Box) (parse_tree__write_deps_file__V_147_147));
#line 1722 "write_deps_file.m"
    }
#line 1721 "write_deps_file.m"
    {
#line 1721 "write_deps_file.m"
      parse_tree__write_deps_file__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1721 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
#line 1721 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 1) = ((MR_Box) (parse_tree__write_deps_file__V_145_145));
#line 1721 "write_deps_file.m"
    }
#line 1721 "write_deps_file.m"
    {
#line 1721 "write_deps_file.m"
      parse_tree__write_deps_file__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1721 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_142_142, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1721 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_142_142, 1) = ((MR_Box) (parse_tree__write_deps_file__V_143_143));
#line 1721 "write_deps_file.m"
    }
#line 1721 "write_deps_file.m"
    {
#line 1721 "write_deps_file.m"
      parse_tree__write_deps_file__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1721 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) : \044("));
#line 1721 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 1) = ((MR_Box) (parse_tree__write_deps_file__V_142_142));
#line 1721 "write_deps_file.m"
    }
#line 1721 "write_deps_file.m"
    {
#line 1721 "write_deps_file.m"
      parse_tree__write_deps_file__MainRule_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1721 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MainRule_48, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1721 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MainRule_48, 1) = ((MR_Box) (parse_tree__write_deps_file__V_140_140));
#line 1721 "write_deps_file.m"
    }
#line 1729 "write_deps_file.m"
    {
#line 1729 "write_deps_file.m"
      libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_19, &parse_tree__write_deps_file__Target_49);
    }
#line 1735 "write_deps_file.m"
#line 1735 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Gmake_36) {
#line 1735 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1735 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1741 "write_deps_file.m"
#line 1741 "write_deps_file.m"
        switch (parse_tree__write_deps_file__Target_49) {
#line 1741 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1741 "write_deps_file.m"
          case (MR_Integer) 0:
#line 1750 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_50 = parse_tree__write_deps_file__MainRule_48;
#line 1741 "write_deps_file.m"
            break;
#line 1741 "write_deps_file.m"
          case (MR_Integer) 1:
#line 1740 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1741 "write_deps_file.m"
            break;
#line 1741 "write_deps_file.m"
          case (MR_Integer) 3:
#line 1747 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1741 "write_deps_file.m"
            break;
#line 1741 "write_deps_file.m"
          case (MR_Integer) 2:
#line 1743 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_50 = parse_tree__write_deps_file__JavaMainRule_43;
#line 1741 "write_deps_file.m"
            break;
#line 1741 "write_deps_file.m"
        }
#line 1735 "write_deps_file.m"
        break;
#line 1735 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1731 "write_deps_file.m"
        {
#line 1731 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__TypeCtorInfo_369_369 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1731 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_178_178;
#line 1731 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_179_179;
#line 1731 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_180_180;
#line 1731 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_181_181;
#line 1731 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_182_182;
#line 1731 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_183_183;
#line 1731 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_184_184;

#line 1734 "write_deps_file.m"
          {
#line 1734 "write_deps_file.m"
            parse_tree__write_deps_file__V_184_184 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__EndIf2_47, parse_tree__write_deps_file__EndIf_46);
          }
#line 1734 "write_deps_file.m"
          {
#line 1734 "write_deps_file.m"
            parse_tree__write_deps_file__V_183_183 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__MainRule_48, parse_tree__write_deps_file__V_184_184);
          }
#line 1733 "write_deps_file.m"
          {
#line 1733 "write_deps_file.m"
            parse_tree__write_deps_file__V_182_182 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__Else2_45, parse_tree__write_deps_file__V_183_183);
          }
#line 1733 "write_deps_file.m"
          {
#line 1733 "write_deps_file.m"
            parse_tree__write_deps_file__V_181_181 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__JavaMainRule_43, parse_tree__write_deps_file__V_182_182);
          }
#line 1733 "write_deps_file.m"
          {
#line 1733 "write_deps_file.m"
            parse_tree__write_deps_file__V_180_180 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__IfJava2_42, parse_tree__write_deps_file__V_181_181);
          }
#line 1732 "write_deps_file.m"
          {
#line 1732 "write_deps_file.m"
            parse_tree__write_deps_file__V_179_179 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__Else_44, parse_tree__write_deps_file__V_180_180);
          }
#line 1732 "write_deps_file.m"
          {
#line 1732 "write_deps_file.m"
            parse_tree__write_deps_file__V_178_178 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__ILMainRule_41, parse_tree__write_deps_file__V_179_179);
          }
#line 1732 "write_deps_file.m"
          {
#line 1732 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_50 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_369_369, parse_tree__write_deps_file__IfIL_40, parse_tree__write_deps_file__V_178_178);
          }
#line 1731 "write_deps_file.m"
        }
#line 1735 "write_deps_file.m"
        break;
#line 1735 "write_deps_file.m"
    }
#line 1753 "write_deps_file.m"
    {
#line 1753 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__Rules_50);
    }
#line 1758 "write_deps_file.m"
#line 1758 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Intermod_25) {
#line 1758 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1758 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1760 "write_deps_file.m"
        *parse_tree__write_deps_file__MaybeOptsVar_28 = (MR_String) "";
#line 1758 "write_deps_file.m"
        break;
#line 1758 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1756 "write_deps_file.m"
        {
#line 1756 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__V_187_187;

#line 1757 "write_deps_file.m"
          {
#line 1757 "write_deps_file.m"
            parse_tree__write_deps_file__V_187_187 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".opts) ");
          }
#line 1757 "write_deps_file.m"
          {
#line 1757 "write_deps_file.m"
            *parse_tree__write_deps_file__MaybeOptsVar_28 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_187_187);
          }
#line 1756 "write_deps_file.m"
        }
#line 1758 "write_deps_file.m"
        break;
#line 1758 "write_deps_file.m"
    }
#line 1765 "write_deps_file.m"
#line 1765 "write_deps_file.m"
    switch (parse_tree__write_deps_file__TransOpt_26) {
#line 1765 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1765 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1767 "write_deps_file.m"
        *parse_tree__write_deps_file__MaybeTransOptsVar_29 = (MR_String) "";
#line 1765 "write_deps_file.m"
        break;
#line 1765 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1763 "write_deps_file.m"
        {
#line 1763 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__V_190_190;

#line 1764 "write_deps_file.m"
          {
#line 1764 "write_deps_file.m"
            parse_tree__write_deps_file__V_190_190 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".trans_opts) ");
          }
#line 1764 "write_deps_file.m"
          {
#line 1764 "write_deps_file.m"
            *parse_tree__write_deps_file__MaybeTransOptsVar_29 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_190_190);
          }
#line 1763 "write_deps_file.m"
        }
#line 1765 "write_deps_file.m"
        break;
#line 1765 "write_deps_file.m"
    }
#line 1772 "write_deps_file.m"
#line 1772 "write_deps_file.m"
    switch (parse_tree__write_deps_file__MmcMakeDeps_27) {
#line 1772 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1772 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1774 "write_deps_file.m"
        *parse_tree__write_deps_file__MaybeModuleDepsVar_30 = (MR_String) "";
#line 1772 "write_deps_file.m"
        break;
#line 1772 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1770 "write_deps_file.m"
        {
#line 1770 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__V_193_193;

#line 1771 "write_deps_file.m"
          {
#line 1771 "write_deps_file.m"
            parse_tree__write_deps_file__V_193_193 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".module_deps) ");
          }
#line 1771 "write_deps_file.m"
          {
#line 1771 "write_deps_file.m"
            *parse_tree__write_deps_file__MaybeModuleDepsVar_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_193_193);
          }
#line 1770 "write_deps_file.m"
        }
#line 1772 "write_deps_file.m"
        break;
#line 1772 "write_deps_file.m"
    }
#line 1777 "write_deps_file.m"
    {
#line 1777 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) "", (MR_Integer) 1, &parse_tree__write_deps_file__LibTargetName_51);
    }
#line 1779 "write_deps_file.m"
    {
#line 1779 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044A", (MR_Integer) 0, parse_tree__write_deps_file__LibFileName_33);
    }
#line 1781 "write_deps_file.m"
    {
#line 1781 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 0, parse_tree__write_deps_file__SharedLibFileName_34);
    }
#line 1783 "write_deps_file.m"
    {
#line 1783 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 1, &parse_tree__write_deps_file__MaybeSharedLibFileName_52);
    }
#line 1786 "write_deps_file.m"
    {
#line 1786 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ModuleName_21, (MR_String) ".jar", (MR_Integer) 1, parse_tree__write_deps_file__JarFileName_32);
    }
#line 1791 "write_deps_file.m"
    {
#line 1791 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_19, (MR_Integer) 603, &parse_tree__write_deps_file__UseInstallName_53);
    }
#line 1796 "write_deps_file.m"
#line 1796 "write_deps_file.m"
    switch (parse_tree__write_deps_file__UseInstallName_53) {
#line 1796 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1796 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1798 "write_deps_file.m"
        parse_tree__write_deps_file__InstallNameOpt_54 = (MR_String) "";
#line 1796 "write_deps_file.m"
        break;
#line 1796 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1795 "write_deps_file.m"
        {
#line 1795 "write_deps_file.m"
          libs__file_util__get_install_name_option_3_p_0(parse_tree__write_deps_file__Globals_19, *parse_tree__write_deps_file__SharedLibFileName_34, &parse_tree__write_deps_file__InstallNameOpt_54);
        }
#line 1796 "write_deps_file.m"
        break;
#line 1796 "write_deps_file.m"
    }
#line 1806 "write_deps_file.m"
    parse_tree__write_deps_file__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[117]);
#line 1805 "write_deps_file.m"
    {
#line 1805 "write_deps_file.m"
      parse_tree__write_deps_file__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1805 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_23));
#line 1805 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 1805 "write_deps_file.m"
    }
#line 1804 "write_deps_file.m"
    {
#line 1804 "write_deps_file.m"
      parse_tree__write_deps_file__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1804 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 0) = ((MR_Box) (*parse_tree__write_deps_file__MaybeTransOptsVar_29));
#line 1804 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 1) = ((MR_Box) (parse_tree__write_deps_file__V_226_226));
#line 1804 "write_deps_file.m"
    }
#line 1804 "write_deps_file.m"
    {
#line 1804 "write_deps_file.m"
      parse_tree__write_deps_file__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1804 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 0) = ((MR_Box) (*parse_tree__write_deps_file__MaybeOptsVar_28));
#line 1804 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 1) = ((MR_Box) (parse_tree__write_deps_file__V_225_225));
#line 1804 "write_deps_file.m"
    }
#line 1803 "write_deps_file.m"
    {
#line 1803 "write_deps_file.m"
      parse_tree__write_deps_file__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1803 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 0) = ((MR_Box) ((MR_String) ".int3s) "));
#line 1803 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 1) = ((MR_Box) (parse_tree__write_deps_file__V_224_224));
#line 1803 "write_deps_file.m"
    }
#line 1803 "write_deps_file.m"
    {
#line 1803 "write_deps_file.m"
      parse_tree__write_deps_file__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1803 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1803 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 1) = ((MR_Box) (parse_tree__write_deps_file__V_222_222));
#line 1803 "write_deps_file.m"
    }
#line 1803 "write_deps_file.m"
    {
#line 1803 "write_deps_file.m"
      parse_tree__write_deps_file__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1803 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1803 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 1) = ((MR_Box) (parse_tree__write_deps_file__V_221_221));
#line 1803 "write_deps_file.m"
    }
#line 1802 "write_deps_file.m"
    {
#line 1802 "write_deps_file.m"
      parse_tree__write_deps_file__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1802 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 0) = ((MR_Box) ((MR_String) ".ints) "));
#line 1802 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 1) = ((MR_Box) (parse_tree__write_deps_file__V_219_219));
#line 1802 "write_deps_file.m"
    }
#line 1802 "write_deps_file.m"
    {
#line 1802 "write_deps_file.m"
      parse_tree__write_deps_file__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1802 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1802 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 1) = ((MR_Box) (parse_tree__write_deps_file__V_217_217));
#line 1802 "write_deps_file.m"
    }
#line 1802 "write_deps_file.m"
    {
#line 1802 "write_deps_file.m"
      parse_tree__write_deps_file__AllInts_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1802 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__AllInts_55, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1802 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__AllInts_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_216_216));
#line 1802 "write_deps_file.m"
    }
#line 1810 "write_deps_file.m"
    {
#line 1810 "write_deps_file.m"
      parse_tree__write_deps_file__V_240_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1810 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 0) = ((MR_Box) ((MR_String) ".foreign_dlls) \\\n\t\t"));
#line 1810 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 1) = ((MR_Box) (parse_tree__write_deps_file__AllInts_55));
#line 1810 "write_deps_file.m"
    }
#line 1809 "write_deps_file.m"
    {
#line 1809 "write_deps_file.m"
      parse_tree__write_deps_file__V_239_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1809 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1809 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 1) = ((MR_Box) (parse_tree__write_deps_file__V_240_240));
#line 1809 "write_deps_file.m"
    }
#line 1809 "write_deps_file.m"
    {
#line 1809 "write_deps_file.m"
      parse_tree__write_deps_file__V_237_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1809 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1809 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 1) = ((MR_Box) (parse_tree__write_deps_file__V_239_239));
#line 1809 "write_deps_file.m"
    }
#line 1808 "write_deps_file.m"
    {
#line 1808 "write_deps_file.m"
      parse_tree__write_deps_file__V_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1808 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 0) = ((MR_Box) ((MR_String) ".dlls) "));
#line 1808 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 1) = ((MR_Box) (parse_tree__write_deps_file__V_237_237));
#line 1808 "write_deps_file.m"
    }
#line 1808 "write_deps_file.m"
    {
#line 1808 "write_deps_file.m"
      parse_tree__write_deps_file__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1808 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1808 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 1) = ((MR_Box) (parse_tree__write_deps_file__V_235_235));
#line 1808 "write_deps_file.m"
    }
#line 1808 "write_deps_file.m"
    {
#line 1808 "write_deps_file.m"
      parse_tree__write_deps_file__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1808 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1808 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 1) = ((MR_Box) (parse_tree__write_deps_file__V_234_234));
#line 1808 "write_deps_file.m"
    }
#line 1808 "write_deps_file.m"
    {
#line 1808 "write_deps_file.m"
      parse_tree__write_deps_file__V_230_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1808 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 0) = ((MR_Box) ((MR_String) " : "));
#line 1808 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 1) = ((MR_Box) (parse_tree__write_deps_file__V_232_232));
#line 1808 "write_deps_file.m"
    }
#line 1808 "write_deps_file.m"
    {
#line 1808 "write_deps_file.m"
      parse_tree__write_deps_file__ILLibRule_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1808 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILLibRule_56, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1808 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ILLibRule_56, 1) = ((MR_Box) (parse_tree__write_deps_file__V_230_230));
#line 1808 "write_deps_file.m"
    }
#line 1814 "write_deps_file.m"
    {
#line 1814 "write_deps_file.m"
      parse_tree__write_deps_file__V_245_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1814 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_245_245, 0) = ((MR_Box) ((MR_String) " \\\n\t\t"));
#line 1814 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_245_245, 1) = ((MR_Box) (parse_tree__write_deps_file__AllInts_55));
#line 1814 "write_deps_file.m"
    }
#line 1813 "write_deps_file.m"
    {
#line 1813 "write_deps_file.m"
      parse_tree__write_deps_file__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1813 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
#line 1813 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 1) = ((MR_Box) (parse_tree__write_deps_file__V_245_245));
#line 1813 "write_deps_file.m"
    }
#line 1813 "write_deps_file.m"
    {
#line 1813 "write_deps_file.m"
      parse_tree__write_deps_file__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1813 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 0) = ((MR_Box) ((MR_String) " : "));
#line 1813 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 1) = ((MR_Box) (parse_tree__write_deps_file__V_244_244));
#line 1813 "write_deps_file.m"
    }
#line 1813 "write_deps_file.m"
    {
#line 1813 "write_deps_file.m"
      parse_tree__write_deps_file__JavaLibRule_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1813 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaLibRule_57, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1813 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaLibRule_57, 1) = ((MR_Box) (parse_tree__write_deps_file__V_242_242));
#line 1813 "write_deps_file.m"
    }
#line 1818 "write_deps_file.m"
    {
#line 1818 "write_deps_file.m"
      parse_tree__write_deps_file__V_252_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1818 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeSharedLibFileName_52));
#line 1818 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_252_252, 1) = ((MR_Box) (parse_tree__write_deps_file__V_245_245));
#line 1818 "write_deps_file.m"
    }
#line 1817 "write_deps_file.m"
    {
#line 1817 "write_deps_file.m"
      parse_tree__write_deps_file__V_250_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1817 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_250_250, 0) = ((MR_Box) ((MR_String) " "));
#line 1817 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_250_250, 1) = ((MR_Box) (parse_tree__write_deps_file__V_252_252));
#line 1817 "write_deps_file.m"
    }
#line 1817 "write_deps_file.m"
    {
#line 1817 "write_deps_file.m"
      parse_tree__write_deps_file__V_249_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1817 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1817 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_249_249, 1) = ((MR_Box) (parse_tree__write_deps_file__V_250_250));
#line 1817 "write_deps_file.m"
    }
#line 1817 "write_deps_file.m"
    {
#line 1817 "write_deps_file.m"
      parse_tree__write_deps_file__V_247_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1817 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 0) = ((MR_Box) ((MR_String) " : "));
#line 1817 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_247_247, 1) = ((MR_Box) (parse_tree__write_deps_file__V_249_249));
#line 1817 "write_deps_file.m"
    }
#line 1817 "write_deps_file.m"
    {
#line 1817 "write_deps_file.m"
      parse_tree__write_deps_file__LibRule_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1817 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibRule_58, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1817 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibRule_58, 1) = ((MR_Box) (parse_tree__write_deps_file__V_247_247));
#line 1817 "write_deps_file.m"
    }
#line 1826 "write_deps_file.m"
#line 1826 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Gmake_36) {
#line 1826 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1826 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1832 "write_deps_file.m"
#line 1832 "write_deps_file.m"
        switch (parse_tree__write_deps_file__Target_49) {
#line 1832 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1832 "write_deps_file.m"
          case (MR_Integer) 0:
#line 1841 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_59 = parse_tree__write_deps_file__LibRule_58;
#line 1832 "write_deps_file.m"
            break;
#line 1832 "write_deps_file.m"
          case (MR_Integer) 1:
#line 1831 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1832 "write_deps_file.m"
            break;
#line 1832 "write_deps_file.m"
          case (MR_Integer) 3:
#line 1838 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1832 "write_deps_file.m"
            break;
#line 1832 "write_deps_file.m"
          case (MR_Integer) 2:
#line 1834 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_59 = parse_tree__write_deps_file__JavaLibRule_57;
#line 1832 "write_deps_file.m"
            break;
#line 1832 "write_deps_file.m"
        }
#line 1826 "write_deps_file.m"
        break;
#line 1826 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1822 "write_deps_file.m"
        {
#line 1822 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__TypeCtorInfo_370_370 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1822 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_255_255;
#line 1822 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_256_256;
#line 1822 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_257_257;
#line 1822 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_258_258;
#line 1822 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_259_259;
#line 1822 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_260_260;
#line 1822 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_261_261;

#line 1825 "write_deps_file.m"
          {
#line 1825 "write_deps_file.m"
            parse_tree__write_deps_file__V_261_261 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__EndIf2_47, parse_tree__write_deps_file__EndIf_46);
          }
#line 1825 "write_deps_file.m"
          {
#line 1825 "write_deps_file.m"
            parse_tree__write_deps_file__V_260_260 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__LibRule_58, parse_tree__write_deps_file__V_261_261);
          }
#line 1824 "write_deps_file.m"
          {
#line 1824 "write_deps_file.m"
            parse_tree__write_deps_file__V_259_259 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__Else2_45, parse_tree__write_deps_file__V_260_260);
          }
#line 1824 "write_deps_file.m"
          {
#line 1824 "write_deps_file.m"
            parse_tree__write_deps_file__V_258_258 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__JavaLibRule_57, parse_tree__write_deps_file__V_259_259);
          }
#line 1824 "write_deps_file.m"
          {
#line 1824 "write_deps_file.m"
            parse_tree__write_deps_file__V_257_257 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__IfJava2_42, parse_tree__write_deps_file__V_258_258);
          }
#line 1823 "write_deps_file.m"
          {
#line 1823 "write_deps_file.m"
            parse_tree__write_deps_file__V_256_256 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__Else_44, parse_tree__write_deps_file__V_257_257);
          }
#line 1823 "write_deps_file.m"
          {
#line 1823 "write_deps_file.m"
            parse_tree__write_deps_file__V_255_255 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__ILLibRule_56, parse_tree__write_deps_file__V_256_256);
          }
#line 1823 "write_deps_file.m"
          {
#line 1823 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_59 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_370_370, parse_tree__write_deps_file__IfIL_40, parse_tree__write_deps_file__V_255_255);
          }
#line 1822 "write_deps_file.m"
        }
#line 1826 "write_deps_file.m"
        break;
#line 1826 "write_deps_file.m"
    }
#line 1845 "write_deps_file.m"
    {
#line 1845 "write_deps_file.m"
      parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1845 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1845 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__LibRules_59));
#line 1845 "write_deps_file.m"
    }
#line 1845 "write_deps_file.m"
    {
#line 1845 "write_deps_file.m"
      parse_tree__write_deps_file__V_265_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1845 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_51));
#line 1845 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 1845 "write_deps_file.m"
    }
#line 1845 "write_deps_file.m"
    {
#line 1845 "write_deps_file.m"
      parse_tree__write_deps_file__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1845 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 1845 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 1) = ((MR_Box) (parse_tree__write_deps_file__V_265_265));
#line 1845 "write_deps_file.m"
    }
#line 1844 "write_deps_file.m"
    {
#line 1844 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_262_262);
    }
#line 1857 "write_deps_file.m"
    {
#line 1857 "write_deps_file.m"
      parse_tree__write_deps_file__V_303_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1857 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_303_303, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLPicObjsString_39));
#line 1857 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_303_303, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[28])));
#line 1857 "write_deps_file.m"
    }
#line 1857 "write_deps_file.m"
    {
#line 1857 "write_deps_file.m"
      parse_tree__write_deps_file__V_301_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1857 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_301_301, 0) = ((MR_Box) ((MR_String) ".pic_os) "));
#line 1857 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_301_301, 1) = ((MR_Box) (parse_tree__write_deps_file__V_303_303));
#line 1857 "write_deps_file.m"
    }
#line 1857 "write_deps_file.m"
    {
#line 1857 "write_deps_file.m"
      parse_tree__write_deps_file__V_300_300 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1857 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_300_300, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1857 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_300_300, 1) = ((MR_Box) (parse_tree__write_deps_file__V_301_301));
#line 1857 "write_deps_file.m"
    }
#line 1857 "write_deps_file.m"
    {
#line 1857 "write_deps_file.m"
      parse_tree__write_deps_file__V_298_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1857 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_298_298, 0) = ((MR_Box) ((MR_String) "\t\t\044("));
#line 1857 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_298_298, 1) = ((MR_Box) (parse_tree__write_deps_file__V_300_300));
#line 1857 "write_deps_file.m"
    }
#line 1856 "write_deps_file.m"
    {
#line 1856 "write_deps_file.m"
      parse_tree__write_deps_file__V_296_296 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1856 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_296_296, 0) = ((MR_Box) ((MR_String) " \\\n"));
#line 1856 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_296_296, 1) = ((MR_Box) (parse_tree__write_deps_file__V_298_298));
#line 1856 "write_deps_file.m"
    }
#line 1856 "write_deps_file.m"
    {
#line 1856 "write_deps_file.m"
      parse_tree__write_deps_file__V_295_295 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1856 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_295_295, 0) = ((MR_Box) (*parse_tree__write_deps_file__SharedLibFileName_34));
#line 1856 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_295_295, 1) = ((MR_Box) (parse_tree__write_deps_file__V_296_296));
#line 1856 "write_deps_file.m"
    }
#line 1855 "write_deps_file.m"
    {
#line 1855 "write_deps_file.m"
      parse_tree__write_deps_file__V_293_293 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1855 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_293_293, 0) = ((MR_Box) ((MR_String) " \044(ALL_LD_LIBFLAGS) -o "));
#line 1855 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_293_293, 1) = ((MR_Box) (parse_tree__write_deps_file__V_295_295));
#line 1855 "write_deps_file.m"
    }
#line 1855 "write_deps_file.m"
    {
#line 1855 "write_deps_file.m"
      parse_tree__write_deps_file__V_292_292 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1855 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_292_292, 0) = ((MR_Box) (parse_tree__write_deps_file__InstallNameOpt_54));
#line 1855 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_292_292, 1) = ((MR_Box) (parse_tree__write_deps_file__V_293_293));
#line 1855 "write_deps_file.m"
    }
#line 1855 "write_deps_file.m"
    {
#line 1855 "write_deps_file.m"
      parse_tree__write_deps_file__V_290_290 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1855 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_290_290, 0) = ((MR_Box) ((MR_String) "-- "));
#line 1855 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_290_290, 1) = ((MR_Box) (parse_tree__write_deps_file__V_292_292));
#line 1855 "write_deps_file.m"
    }
#line 1854 "write_deps_file.m"
    {
#line 1854 "write_deps_file.m"
      parse_tree__write_deps_file__V_288_288 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1854 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_288_288, 0) = ((MR_Box) ((MR_String) "\t\044(ML) --make-shared-lib \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) "));
#line 1854 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_288_288, 1) = ((MR_Box) (parse_tree__write_deps_file__V_290_290));
#line 1854 "write_deps_file.m"
    }
#line 1853 "write_deps_file.m"
    {
#line 1853 "write_deps_file.m"
      parse_tree__write_deps_file__V_286_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1853 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_286_286, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1853 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_286_286, 1) = ((MR_Box) (parse_tree__write_deps_file__V_288_288));
#line 1853 "write_deps_file.m"
    }
#line 1853 "write_deps_file.m"
    {
#line 1853 "write_deps_file.m"
      parse_tree__write_deps_file__V_285_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1853 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLLibsDepString_37));
#line 1853 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 1) = ((MR_Box) (parse_tree__write_deps_file__V_286_286));
#line 1853 "write_deps_file.m"
    }
#line 1853 "write_deps_file.m"
    {
#line 1853 "write_deps_file.m"
      parse_tree__write_deps_file__V_283_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1853 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 0) = ((MR_Box) ((MR_String) " "));
#line 1853 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 1) = ((MR_Box) (parse_tree__write_deps_file__V_285_285));
#line 1853 "write_deps_file.m"
    }
#line 1853 "write_deps_file.m"
    {
#line 1853 "write_deps_file.m"
      parse_tree__write_deps_file__V_282_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1853 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_282_282, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLPicObjsString_39));
#line 1853 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_282_282, 1) = ((MR_Box) (parse_tree__write_deps_file__V_283_283));
#line 1853 "write_deps_file.m"
    }
#line 1852 "write_deps_file.m"
    {
#line 1852 "write_deps_file.m"
      parse_tree__write_deps_file__V_280_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1852 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_280_280, 0) = ((MR_Box) ((MR_String) ".pic_os) "));
#line 1852 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_280_280, 1) = ((MR_Box) (parse_tree__write_deps_file__V_282_282));
#line 1852 "write_deps_file.m"
    }
#line 1852 "write_deps_file.m"
    {
#line 1852 "write_deps_file.m"
      parse_tree__write_deps_file__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1852 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1852 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 1) = ((MR_Box) (parse_tree__write_deps_file__V_280_280));
#line 1852 "write_deps_file.m"
    }
#line 1852 "write_deps_file.m"
    {
#line 1852 "write_deps_file.m"
      parse_tree__write_deps_file__V_277_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1852 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_277_277, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1852 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_277_277, 1) = ((MR_Box) (parse_tree__write_deps_file__V_279_279));
#line 1852 "write_deps_file.m"
    }
#line 1851 "write_deps_file.m"
    {
#line 1851 "write_deps_file.m"
      parse_tree__write_deps_file__V_275_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1851 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
#line 1851 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 1) = ((MR_Box) (parse_tree__write_deps_file__V_277_277));
#line 1851 "write_deps_file.m"
    }
#line 1851 "write_deps_file.m"
    {
#line 1851 "write_deps_file.m"
      parse_tree__write_deps_file__V_274_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1851 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1851 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 1) = ((MR_Box) (parse_tree__write_deps_file__V_275_275));
#line 1851 "write_deps_file.m"
    }
#line 1851 "write_deps_file.m"
    {
#line 1851 "write_deps_file.m"
      parse_tree__write_deps_file__V_272_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1851 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1851 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 1) = ((MR_Box) (parse_tree__write_deps_file__V_274_274));
#line 1851 "write_deps_file.m"
    }
#line 1851 "write_deps_file.m"
    {
#line 1851 "write_deps_file.m"
      parse_tree__write_deps_file__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1851 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 0) = ((MR_Box) (*parse_tree__write_deps_file__SharedLibFileName_34));
#line 1851 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 1) = ((MR_Box) (parse_tree__write_deps_file__V_272_272));
#line 1851 "write_deps_file.m"
    }
#line 1850 "write_deps_file.m"
    {
#line 1850 "write_deps_file.m"
      parse_tree__write_deps_file__V_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1850 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 0) = ((MR_Box) ((MR_String) "ifneq (\044(EXT_FOR_SHARED_LIB),\044A)\n"));
#line 1850 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 1) = ((MR_Box) (parse_tree__write_deps_file__V_271_271));
#line 1850 "write_deps_file.m"
    }
#line 1849 "write_deps_file.m"
    {
#line 1849 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_268_268);
    }
#line 1868 "write_deps_file.m"
    {
#line 1868 "write_deps_file.m"
      parse_tree__write_deps_file__V_344_344 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1868 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_344_344, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1868 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_344_344, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 1868 "write_deps_file.m"
    }
#line 1868 "write_deps_file.m"
    {
#line 1868 "write_deps_file.m"
      parse_tree__write_deps_file__V_342_342 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1868 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_342_342, 0) = ((MR_Box) ((MR_String) "\t\044(RANLIB) \044(ALL_RANLIBFLAGS) "));
#line 1868 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_342_342, 1) = ((MR_Box) (parse_tree__write_deps_file__V_344_344));
#line 1868 "write_deps_file.m"
    }
#line 1867 "write_deps_file.m"
    {
#line 1867 "write_deps_file.m"
      parse_tree__write_deps_file__V_340_340 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1867 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_340_340, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1867 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_340_340, 1) = ((MR_Box) (parse_tree__write_deps_file__V_342_342));
#line 1867 "write_deps_file.m"
    }
#line 1867 "write_deps_file.m"
    {
#line 1867 "write_deps_file.m"
      parse_tree__write_deps_file__V_339_339 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1867 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_339_339, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1867 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_339_339, 1) = ((MR_Box) (parse_tree__write_deps_file__V_340_340));
#line 1867 "write_deps_file.m"
    }
#line 1867 "write_deps_file.m"
    {
#line 1867 "write_deps_file.m"
      parse_tree__write_deps_file__V_337_337 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1867 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_337_337, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1867 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_337_337, 1) = ((MR_Box) (parse_tree__write_deps_file__V_339_339));
#line 1867 "write_deps_file.m"
    }
#line 1867 "write_deps_file.m"
    {
#line 1867 "write_deps_file.m"
      parse_tree__write_deps_file__V_336_336 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1867 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_336_336, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1867 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_336_336, 1) = ((MR_Box) (parse_tree__write_deps_file__V_337_337));
#line 1867 "write_deps_file.m"
    }
#line 1867 "write_deps_file.m"
    {
#line 1867 "write_deps_file.m"
      parse_tree__write_deps_file__V_334_334 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1867 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_334_334, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1867 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_334_334, 1) = ((MR_Box) (parse_tree__write_deps_file__V_336_336));
#line 1867 "write_deps_file.m"
    }
#line 1866 "write_deps_file.m"
    {
#line 1866 "write_deps_file.m"
      parse_tree__write_deps_file__V_332_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1866 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_332_332, 0) = ((MR_Box) ((MR_String) " "));
#line 1866 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_332_332, 1) = ((MR_Box) (parse_tree__write_deps_file__V_334_334));
#line 1866 "write_deps_file.m"
    }
#line 1866 "write_deps_file.m"
    {
#line 1866 "write_deps_file.m"
      parse_tree__write_deps_file__V_331_331 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1866 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_331_331, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1866 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_331_331, 1) = ((MR_Box) (parse_tree__write_deps_file__V_332_332));
#line 1866 "write_deps_file.m"
    }
#line 1866 "write_deps_file.m"
    {
#line 1866 "write_deps_file.m"
      parse_tree__write_deps_file__V_329_329 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1866 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_329_329, 0) = ((MR_Box) ((MR_String) "\t\044(AR) \044(ALL_ARFLAGS) \044(AR_LIBFILE_OPT)"));
#line 1866 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_329_329, 1) = ((MR_Box) (parse_tree__write_deps_file__V_331_331));
#line 1866 "write_deps_file.m"
    }
#line 1865 "write_deps_file.m"
    {
#line 1865 "write_deps_file.m"
      parse_tree__write_deps_file__V_327_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1865 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_327_327, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1865 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_327_327, 1) = ((MR_Box) (parse_tree__write_deps_file__V_329_329));
#line 1865 "write_deps_file.m"
    }
#line 1865 "write_deps_file.m"
    {
#line 1865 "write_deps_file.m"
      parse_tree__write_deps_file__V_326_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1865 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_326_326, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1865 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_326_326, 1) = ((MR_Box) (parse_tree__write_deps_file__V_327_327));
#line 1865 "write_deps_file.m"
    }
#line 1865 "write_deps_file.m"
    {
#line 1865 "write_deps_file.m"
      parse_tree__write_deps_file__V_324_324 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1865 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_324_324, 0) = ((MR_Box) ((MR_String) "\trm -f "));
#line 1865 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_324_324, 1) = ((MR_Box) (parse_tree__write_deps_file__V_326_326));
#line 1865 "write_deps_file.m"
    }
#line 1864 "write_deps_file.m"
    {
#line 1864 "write_deps_file.m"
      parse_tree__write_deps_file__V_322_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_322_322, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_322_322, 1) = ((MR_Box) (parse_tree__write_deps_file__V_324_324));
#line 1864 "write_deps_file.m"
    }
#line 1864 "write_deps_file.m"
    {
#line 1864 "write_deps_file.m"
      parse_tree__write_deps_file__V_321_321 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_321_321, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_321_321, 1) = ((MR_Box) (parse_tree__write_deps_file__V_322_322));
#line 1864 "write_deps_file.m"
    }
#line 1864 "write_deps_file.m"
    {
#line 1864 "write_deps_file.m"
      parse_tree__write_deps_file__V_319_319 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_319_319, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_319_319, 1) = ((MR_Box) (parse_tree__write_deps_file__V_321_321));
#line 1864 "write_deps_file.m"
    }
#line 1864 "write_deps_file.m"
    {
#line 1864 "write_deps_file.m"
      parse_tree__write_deps_file__V_318_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_318_318, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_318_318, 1) = ((MR_Box) (parse_tree__write_deps_file__V_319_319));
#line 1864 "write_deps_file.m"
    }
#line 1864 "write_deps_file.m"
    {
#line 1864 "write_deps_file.m"
      parse_tree__write_deps_file__V_316_316 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_316_316, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_316_316, 1) = ((MR_Box) (parse_tree__write_deps_file__V_318_318));
#line 1864 "write_deps_file.m"
    }
#line 1863 "write_deps_file.m"
    {
#line 1863 "write_deps_file.m"
      parse_tree__write_deps_file__V_314_314 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1863 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_314_314, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
#line 1863 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_314_314, 1) = ((MR_Box) (parse_tree__write_deps_file__V_316_316));
#line 1863 "write_deps_file.m"
    }
#line 1863 "write_deps_file.m"
    {
#line 1863 "write_deps_file.m"
      parse_tree__write_deps_file__V_313_313 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1863 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_313_313, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1863 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_313_313, 1) = ((MR_Box) (parse_tree__write_deps_file__V_314_314));
#line 1863 "write_deps_file.m"
    }
#line 1863 "write_deps_file.m"
    {
#line 1863 "write_deps_file.m"
      parse_tree__write_deps_file__V_311_311 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1863 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_311_311, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1863 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_311_311, 1) = ((MR_Box) (parse_tree__write_deps_file__V_313_313));
#line 1863 "write_deps_file.m"
    }
#line 1863 "write_deps_file.m"
    {
#line 1863 "write_deps_file.m"
      parse_tree__write_deps_file__V_309_309 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1863 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_309_309, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1863 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_309_309, 1) = ((MR_Box) (parse_tree__write_deps_file__V_311_311));
#line 1863 "write_deps_file.m"
    }
#line 1862 "write_deps_file.m"
    {
#line 1862 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_309_309);
    }
#line 1871 "write_deps_file.m"
    {
#line 1871 "write_deps_file.m"
      parse_tree__write_deps_file__V_349_349 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".classes)");
    }
#line 1871 "write_deps_file.m"
    {
#line 1871 "write_deps_file.m"
      parse_tree__write_deps_file__ClassFiles_60 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_349_349);
    }
#line 1872 "write_deps_file.m"
    {
#line 1872 "write_deps_file.m"
      parse_tree__module_cmds__list_class_files_for_jar_mmake_3_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ClassFiles_60, &parse_tree__write_deps_file__ListClassFiles_61);
    }
#line 1876 "write_deps_file.m"
    {
#line 1876 "write_deps_file.m"
      parse_tree__write_deps_file__V_365_365 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1876 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_365_365, 0) = ((MR_Box) (parse_tree__write_deps_file__ListClassFiles_61));
#line 1876 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_365_365, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 1876 "write_deps_file.m"
    }
#line 1875 "write_deps_file.m"
    {
#line 1875 "write_deps_file.m"
      parse_tree__write_deps_file__V_363_363 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1875 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_363_363, 0) = ((MR_Box) ((MR_String) " "));
#line 1875 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_363_363, 1) = ((MR_Box) (parse_tree__write_deps_file__V_365_365));
#line 1875 "write_deps_file.m"
    }
#line 1875 "write_deps_file.m"
    {
#line 1875 "write_deps_file.m"
      parse_tree__write_deps_file__V_362_362 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1875 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_362_362, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
#line 1875 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_362_362, 1) = ((MR_Box) (parse_tree__write_deps_file__V_363_363));
#line 1875 "write_deps_file.m"
    }
#line 1875 "write_deps_file.m"
    {
#line 1875 "write_deps_file.m"
      parse_tree__write_deps_file__V_360_360 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1875 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_360_360, 0) = ((MR_Box) ((MR_String) "\t\044(JAR) \044(JAR_CREATE_FLAGS) "));
#line 1875 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_360_360, 1) = ((MR_Box) (parse_tree__write_deps_file__V_362_362));
#line 1875 "write_deps_file.m"
    }
#line 1874 "write_deps_file.m"
    {
#line 1874 "write_deps_file.m"
      parse_tree__write_deps_file__V_358_358 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_358_358, 0) = ((MR_Box) ((MR_String) ".classes)\n"));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_358_358, 1) = ((MR_Box) (parse_tree__write_deps_file__V_360_360));
#line 1874 "write_deps_file.m"
    }
#line 1874 "write_deps_file.m"
    {
#line 1874 "write_deps_file.m"
      parse_tree__write_deps_file__V_357_357 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_357_357, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_357_357, 1) = ((MR_Box) (parse_tree__write_deps_file__V_358_358));
#line 1874 "write_deps_file.m"
    }
#line 1874 "write_deps_file.m"
    {
#line 1874 "write_deps_file.m"
      parse_tree__write_deps_file__V_355_355 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_355_355, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_355_355, 1) = ((MR_Box) (parse_tree__write_deps_file__V_357_357));
#line 1874 "write_deps_file.m"
    }
#line 1874 "write_deps_file.m"
    {
#line 1874 "write_deps_file.m"
      parse_tree__write_deps_file__V_353_353 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_353_353, 0) = ((MR_Box) ((MR_String) " : "));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_353_353, 1) = ((MR_Box) (parse_tree__write_deps_file__V_355_355));
#line 1874 "write_deps_file.m"
    }
#line 1874 "write_deps_file.m"
    {
#line 1874 "write_deps_file.m"
      parse_tree__write_deps_file__V_351_351 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_351_351, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
#line 1874 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_351_351, 1) = ((MR_Box) (parse_tree__write_deps_file__V_353_353));
#line 1874 "write_deps_file.m"
    }
#line 1873 "write_deps_file.m"
    {
#line 1873 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_351_351);
#line 1873 "write_deps_file.m"
      return;
    }
#line 1660 "write_deps_file.m"
  }
#line 1651 "write_deps_file.m"
}

#line 1593 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_7_p_0(
#line 1593 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1593 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1593 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1593 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1593 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12)
#line 1593 "write_deps_file.m"
{
#line 1597 "write_deps_file.m"
  {
#line 1597 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1597 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleNameString_14;
#line 1597 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Version_15;
#line 1597 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Fullarch_16;
#line 1597 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MakeVarName_17;
#line 1597 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitFileName_18;
#line 1597 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitCFileName_19;
#line 1597 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitObjFileName_20;
#line 1597 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitPicObjFileName_21;
#line 1597 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Intermod_22;
#line 1597 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TransOpt_23;
#line 1597 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__MmcMakeDeps_24;
#line 1597 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeOptsVar_25;
#line 1597 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeTransOptsVar_26;
#line 1597 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_27;
#line 1597 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ExeFileName_28;
#line 1597 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__JarFileName_29;
#line 1597 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__LibFileName_30;
#line 1597 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SharedLibFileName_31;
#line 1597 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DepFileName_32;
#line 1597 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DvFileName_33;

#line 1598 "write_deps_file.m"
    {
#line 1598 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Automatically generated dependencies for module \140");
    }
#line 1600 "write_deps_file.m"
    {
#line 1600 "write_deps_file.m"
      parse_tree__write_deps_file__ModuleNameString_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_10);
    }
#line 1601 "write_deps_file.m"
    {
#line 1601 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleNameString_14);
    }
#line 1602 "write_deps_file.m"
    {
#line 1602 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1603 "write_deps_file.m"
    {
#line 1603 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# generated from source file \140");
    }
#line 1605 "write_deps_file.m"
    {
#line 1605 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__SourceFileName_9);
    }
#line 1606 "write_deps_file.m"
    {
#line 1606 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1608 "write_deps_file.m"
    {
#line 1608 "write_deps_file.m"
      mercury__library__version_2_p_0(&parse_tree__write_deps_file__Version_15, &parse_tree__write_deps_file__Fullarch_16);
    }
#line 1609 "write_deps_file.m"
    {
#line 1609 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Generated by the Mercury compiler, version ");
    }
#line 1611 "write_deps_file.m"
    {
#line 1611 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Version_15);
    }
#line 1612 "write_deps_file.m"
    {
#line 1612 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n# configured for ");
    }
#line 1613 "write_deps_file.m"
    {
#line 1613 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Fullarch_16);
    }
#line 1614 "write_deps_file.m"
    {
#line 1614 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".\n\n");
    }
#line 1616 "write_deps_file.m"
    {
#line 1616 "write_deps_file.m"
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__MakeVarName_17);
    }
#line 1618 "write_deps_file.m"
    {
#line 1618 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) ".init", (MR_Integer) 0, &parse_tree__write_deps_file__InitFileName_18);
    }
#line 1620 "write_deps_file.m"
    {
#line 1620 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.c", (MR_Integer) 0, &parse_tree__write_deps_file__InitCFileName_19);
    }
#line 1622 "write_deps_file.m"
    {
#line 1622 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.\044O", (MR_Integer) 0, &parse_tree__write_deps_file__InitObjFileName_20);
    }
#line 1624 "write_deps_file.m"
    {
#line 1624 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.pic_o", (MR_Integer) 0, &parse_tree__write_deps_file__InitPicObjFileName_21);
    }
#line 1627 "write_deps_file.m"
    {
#line 1627 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 321, &parse_tree__write_deps_file__Intermod_22);
    }
#line 1628 "write_deps_file.m"
    {
#line 1628 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 325, &parse_tree__write_deps_file__TransOpt_23);
    }
#line 1629 "write_deps_file.m"
    {
#line 1629 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 117, &parse_tree__write_deps_file__MmcMakeDeps_24);
    }
#line 1632 "write_deps_file.m"
    {
#line 1632 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__InitFileName_18, parse_tree__write_deps_file__InitObjFileName_20, parse_tree__write_deps_file__Intermod_22, parse_tree__write_deps_file__TransOpt_23, parse_tree__write_deps_file__MmcMakeDeps_24, &parse_tree__write_deps_file__MaybeOptsVar_25, &parse_tree__write_deps_file__MaybeTransOptsVar_26, &parse_tree__write_deps_file__MaybeModuleDepsVar_27, &parse_tree__write_deps_file__ExeFileName_28, &parse_tree__write_deps_file__JarFileName_29, &parse_tree__write_deps_file__LibFileName_30, &parse_tree__write_deps_file__SharedLibFileName_31);
    }
#line 1637 "write_deps_file.m"
    {
#line 1637 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__InitCFileName_19, parse_tree__write_deps_file__InitFileName_18, &parse_tree__write_deps_file__DepFileName_32, &parse_tree__write_deps_file__DvFileName_33);
    }
#line 1640 "write_deps_file.m"
    {
#line 1640 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__DepsMap_11, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__MmcMakeDeps_24, parse_tree__write_deps_file__Intermod_22, parse_tree__write_deps_file__TransOpt_23, parse_tree__write_deps_file__MaybeModuleDepsVar_27, parse_tree__write_deps_file__MaybeOptsVar_25, parse_tree__write_deps_file__MaybeTransOptsVar_26);
    }
#line 1643 "write_deps_file.m"
    {
#line 1643 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17);
    }
#line 1645 "write_deps_file.m"
    {
#line 1645 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__ExeFileName_28, parse_tree__write_deps_file__InitCFileName_19, parse_tree__write_deps_file__InitObjFileName_20, parse_tree__write_deps_file__InitPicObjFileName_21, parse_tree__write_deps_file__InitFileName_18, parse_tree__write_deps_file__LibFileName_30, parse_tree__write_deps_file__SharedLibFileName_31, parse_tree__write_deps_file__JarFileName_29, parse_tree__write_deps_file__DepFileName_32, parse_tree__write_deps_file__DvFileName_33);
#line 1645 "write_deps_file.m"
      return;
    }
#line 1597 "write_deps_file.m"
  }
#line 1593 "write_deps_file.m"
}

#line 1507 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__select_ok_modules_3_p_0(
#line 1507 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1507 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_2,
#line 1507 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_3)
#line 1507 "write_deps_file.m"
{
#line 1510 "write_deps_file.m"
  {
#line 1510 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 1510 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1510 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1510 "write_deps_file.m"
    else
#line 1511 "write_deps_file.m"
      {
#line 1511 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_18_18;
#line 1511 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1511 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Modules0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1511 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ModulesTail_9;
#line 1511 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ModuleImports_11;
#line 1511 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Errors_12;
#line 1511 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__FatalErrors_13;
#line 1511 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_14_14;
#line 1511 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_15_15;
#line 1513 "write_deps_file.m"
        MR_Box parse_tree__write_deps_file__conv0_V_14_14;
#line 1513 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_10_10;

#line 1512 "write_deps_file.m"
        {
#line 1512 "write_deps_file.m"
          parse_tree__write_deps_file__select_ok_modules_3_p_0(parse_tree__write_deps_file__Modules0_6, parse_tree__write_deps_file__DepsMap_2, &parse_tree__write_deps_file__ModulesTail_9);
        }
#line 1513 "write_deps_file.m"
        {
#line 1513 "write_deps_file.m"
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_2, ((MR_Box) (parse_tree__write_deps_file__Module_5)), &parse_tree__write_deps_file__conv0_V_14_14);
        }
#line 1513 "write_deps_file.m"
        parse_tree__write_deps_file__V_14_14 = ((MR_Word) parse_tree__write_deps_file__conv0_V_14_14);
#line 1513 "write_deps_file.m"
        parse_tree__write_deps_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, (MR_Integer) 0)));
#line 1513 "write_deps_file.m"
        parse_tree__write_deps_file__ModuleImports_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, (MR_Integer) 1)));
#line 1514 "write_deps_file.m"
        {
#line 1514 "write_deps_file.m"
          parse_tree__module_imports__module_and_imports_get_errors_2_p_0(parse_tree__write_deps_file__ModuleImports_11, &parse_tree__write_deps_file__Errors_12);
        }
#line 1515 "write_deps_file.m"
        {
#line 1515 "write_deps_file.m"
          parse_tree__write_deps_file__V_15_15 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 10039 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1515 "write_deps_file.m"
        {
#line 1515 "write_deps_file.m"
          mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_18_18, parse_tree__write_deps_file__Errors_12, parse_tree__write_deps_file__V_15_15, &parse_tree__write_deps_file__FatalErrors_13);
        }
#line 1516 "write_deps_file.m"
        {
#line 1516 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_18_18, parse_tree__write_deps_file__FatalErrors_13);
        }
#line 1518 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 1517 "write_deps_file.m"
          {
#line 1517 "write_deps_file.m"
            MR_Word base;
#line 1517 "write_deps_file.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1517 "write_deps_file.m"
            *parse_tree__write_deps_file__HeadVar__3_3 = base;
#line 1517 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Module_5));
#line 1517 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__ModulesTail_9));
#line 1517 "write_deps_file.m"
          }
#line 1518 "write_deps_file.m"
        else
#line 1519 "write_deps_file.m"
          *parse_tree__write_deps_file__HeadVar__3_3 = parse_tree__write_deps_file__ModulesTail_9;
#line 1511 "write_deps_file.m"
      }
#line 1510 "write_deps_file.m"
  }
#line 1507 "write_deps_file.m"
}

#line 1194 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_4(
#line 1194 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1194 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1194 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
#line 1194 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
#line 1194 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4)
#line 1194 "write_deps_file.m"
{
#line 1194 "write_deps_file.m"
  {
#line 1194 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1194 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__conv2_HeadVar__3_118;

#line 1194 "write_deps_file.m"
    {
#line 1194 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1194__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv2_HeadVar__3_118);
    }
#line 1194 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv2_HeadVar__3_118));
#line 1194 "write_deps_file.m"
  }
#line 1194 "write_deps_file.m"
}

#line 1148 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_3(
#line 1148 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1148 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 1148 "write_deps_file.m"
{
#line 1148 "write_deps_file.m"
  {
#line 1148 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1148 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 1148 "write_deps_file.m"
    {
#line 1148 "write_deps_file.m"
      return parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1148__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 1148 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1148 "write_deps_file.m"
  }
#line 1148 "write_deps_file.m"
}

#line 1129 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_2(
#line 1129 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1129 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1129 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 1129 "write_deps_file.m"
{
#line 1129 "write_deps_file.m"
  {
#line 1129 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1129 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__conv1_FileName_6;

#line 1129 "write_deps_file.m"
    {
#line 1129 "write_deps_file.m"
      parse_tree__write_deps_file__get_source_file_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv1_FileName_6);
    }
#line 1129 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_FileName_6));
#line 1129 "write_deps_file.m"
  }
#line 1129 "write_deps_file.m"
}

#line 1126 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_1(
#line 1126 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1126 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1126 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 1126 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 1126 "write_deps_file.m"
{
#line 1126 "write_deps_file.m"
  {
#line 1126 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_Result_6;

#line 1126 "write_deps_file.m"
    {
#line 1126 "write_deps_file.m"
      parse_tree__write_deps_file__compare_module_names_3_p_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_2), &parse_tree__write_deps_file__conv0_Result_6);
    }
#line 1126 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_3 = ((MR_Box) (parse_tree__write_deps_file__conv0_Result_6));
#line 1126 "write_deps_file.m"
  }
#line 1126 "write_deps_file.m"
}

#line 1102 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0(
#line 1102 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1102 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1102 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1102 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1102 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12)
#line 1102 "write_deps_file.m"
{
#line 1106 "write_deps_file.m"
  {
#line 1106 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_473_473;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_480_480;
#line 1106 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleNameString_14;
#line 1106 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Version_15;
#line 1106 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Fullarch_16;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules0_17;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules1_18;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules_19;
#line 1106 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MakeVarName_20;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SourceFiles0_21;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SourceFiles_22;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModulesWithSubModules_23;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Target_27;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModulesAndExts_28;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModules_29;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Gmake_30;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Basis_32;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignBasis_34;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ParentBasis_36;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ExtraLinkObjs_37;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__MakeFileName_38;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignFileNames_44;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__HighLevelCode_45;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_67_67;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_89_89;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_197_197;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_199_199;
#line 1106 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_201_201;
#line 1106 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_320_320;
#line 1199 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv3_STATE_VARIABLE_IO_123_123;

#line 1107 "write_deps_file.m"
    {
#line 1107 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Automatically generated dependency variables for module \140");
    }
#line 1109 "write_deps_file.m"
    {
#line 1109 "write_deps_file.m"
      parse_tree__write_deps_file__ModuleNameString_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_10);
    }
#line 1110 "write_deps_file.m"
    {
#line 1110 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleNameString_14);
    }
#line 1111 "write_deps_file.m"
    {
#line 1111 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1112 "write_deps_file.m"
    {
#line 1112 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# generated from source file \140");
    }
#line 1113 "write_deps_file.m"
    {
#line 1113 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__SourceFileName_9);
    }
#line 1114 "write_deps_file.m"
    {
#line 1114 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1116 "write_deps_file.m"
    {
#line 1116 "write_deps_file.m"
      mercury__library__version_2_p_0(&parse_tree__write_deps_file__Version_15, &parse_tree__write_deps_file__Fullarch_16);
    }
#line 1117 "write_deps_file.m"
    {
#line 1117 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Generated by the Mercury compiler, version ");
    }
#line 1119 "write_deps_file.m"
    {
#line 1119 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Version_15);
    }
#line 1120 "write_deps_file.m"
    {
#line 1120 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ",\n# configured for ");
    }
#line 1121 "write_deps_file.m"
    {
#line 1121 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Fullarch_16);
    }
#line 1122 "write_deps_file.m"
    {
#line 1122 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".\n\n");
    }
#line 10347 "parse_tree.write_deps_file.c"
    parse_tree__write_deps_file__TypeCtorInfo_473_473 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1124 "write_deps_file.m"
    {
#line 1124 "write_deps_file.m"
      mercury__map__keys_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_473_473, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__Modules0_17);
    }
#line 1125 "write_deps_file.m"
    {
#line 1125 "write_deps_file.m"
      parse_tree__write_deps_file__select_ok_modules_3_p_0(parse_tree__write_deps_file__Modules0_17, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__Modules1_18);
    }
#line 1126 "write_deps_file.m"
    {
#line 1126 "write_deps_file.m"
      mercury__list__sort_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_473_473, (MR_Word) &parse_tree__write_deps_file_scalar_common_2[7], parse_tree__write_deps_file__Modules1_18, &parse_tree__write_deps_file__Modules_19);
    }
#line 1128 "write_deps_file.m"
    {
#line 1128 "write_deps_file.m"
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1129 "write_deps_file.m"
    {
#line 1129 "write_deps_file.m"
      parse_tree__write_deps_file__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1129 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_67_67, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[2]));
#line 1129 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_67_67, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_2));
#line 1129 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1129 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_67_67, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_11));
#line 1129 "write_deps_file.m"
    }
#line 10383 "parse_tree.write_deps_file.c"
    parse_tree__write_deps_file__TypeCtorInfo_480_480 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1129 "write_deps_file.m"
    {
#line 1129 "write_deps_file.m"
      mercury__list__map_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_473_473, parse_tree__write_deps_file__TypeCtorInfo_480_480, parse_tree__write_deps_file__V_67_67, parse_tree__write_deps_file__Modules_19, &parse_tree__write_deps_file__SourceFiles0_21);
    }
#line 1130 "write_deps_file.m"
    {
#line 1130 "write_deps_file.m"
      mercury__list__sort_and_remove_dups_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_480_480, parse_tree__write_deps_file__SourceFiles0_21, &parse_tree__write_deps_file__SourceFiles_22);
    }
#line 1132 "write_deps_file.m"
    {
#line 1132 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1133 "write_deps_file.m"
    {
#line 1133 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ms =");
    }
#line 1134 "write_deps_file.m"
    {
#line 1134 "write_deps_file.m"
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".m", parse_tree__write_deps_file__SourceFiles_22);
    }
#line 1135 "write_deps_file.m"
    {
#line 1135 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1137 "write_deps_file.m"
    {
#line 1137 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1138 "write_deps_file.m"
    {
#line 1138 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".errs =");
    }
#line 1139 "write_deps_file.m"
    {
#line 1139 "write_deps_file.m"
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".err", parse_tree__write_deps_file__SourceFiles_22);
    }
#line 1140 "write_deps_file.m"
    {
#line 1140 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1142 "write_deps_file.m"
    {
#line 1142 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1143 "write_deps_file.m"
    {
#line 1143 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mods =");
    }
#line 1144 "write_deps_file.m"
    {
#line 1144 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", parse_tree__write_deps_file__Modules_19);
    }
#line 1145 "write_deps_file.m"
    {
#line 1145 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1148 "write_deps_file.m"
    {
#line 1148 "write_deps_file.m"
      parse_tree__write_deps_file__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1148 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_89_89, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[2]));
#line 1148 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_89_89, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_3));
#line 1148 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1148 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_89_89, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_11));
#line 1148 "write_deps_file.m"
    }
#line 1148 "write_deps_file.m"
    {
#line 1148 "write_deps_file.m"
      parse_tree__write_deps_file__ModulesWithSubModules_23 = mercury__list__filter_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_473_473, parse_tree__write_deps_file__V_89_89, parse_tree__write_deps_file__Modules_19);
    }
#line 1153 "write_deps_file.m"
    {
#line 1153 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1154 "write_deps_file.m"
    {
#line 1154 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".parent_mods =");
    }
#line 1155 "write_deps_file.m"
    {
#line 1155 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", parse_tree__write_deps_file__ModulesWithSubModules_23);
    }
#line 1157 "write_deps_file.m"
    {
#line 1157 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1159 "write_deps_file.m"
    {
#line 1159 "write_deps_file.m"
      libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_8, &parse_tree__write_deps_file__Target_27);
    }
#line 1166 "write_deps_file.m"
    parse_tree__write_deps_file__ForeignModulesAndExts_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1168 "write_deps_file.m"
    {
#line 1168 "write_deps_file.m"
      parse_tree__write_deps_file__ForeignModules_29 = mercury__assoc_list__keys_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_473_473, parse_tree__write_deps_file__TypeCtorInfo_480_480, parse_tree__write_deps_file__ForeignModulesAndExts_28);
    }
#line 1169 "write_deps_file.m"
    {
#line 1169 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1170 "write_deps_file.m"
    {
#line 1170 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign =");
    }
#line 1171 "write_deps_file.m"
    {
#line 1171 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", parse_tree__write_deps_file__ForeignModules_29);
    }
#line 1172 "write_deps_file.m"
    {
#line 1172 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n\n");
    }
#line 1174 "write_deps_file.m"
    {
#line 1174 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 118, &parse_tree__write_deps_file__Gmake_30);
    }
#line 1185 "write_deps_file.m"
#line 1185 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Gmake_30) {
#line 1185 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1185 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1186 "write_deps_file.m"
        {
#line 1187 "write_deps_file.m"
          parse_tree__write_deps_file__Basis_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1188 "write_deps_file.m"
          parse_tree__write_deps_file__ForeignBasis_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1189 "write_deps_file.m"
          parse_tree__write_deps_file__ParentBasis_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1186 "write_deps_file.m"
        }
#line 1185 "write_deps_file.m"
        break;
#line 1185 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1176 "write_deps_file.m"
        {
#line 1176 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__ModsVarName_31;
#line 1176 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__ForeignVarName_33;
#line 1176 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__ParentModsVarName_35;
#line 1176 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_109_109;
#line 1176 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_112_112;
#line 1176 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_115_115;

#line 1177 "write_deps_file.m"
          {
#line 1177 "write_deps_file.m"
            mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_20, (MR_String) ".mods", &parse_tree__write_deps_file__ModsVarName_31);
          }
#line 1178 "write_deps_file.m"
          {
#line 1178 "write_deps_file.m"
            parse_tree__write_deps_file__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1178 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_109_109, 0) = ((MR_Box) (parse_tree__write_deps_file__ModsVarName_31));
#line 1178 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_109_109, 1) = ((MR_Box) ((MR_String) ""));
#line 1178 "write_deps_file.m"
          }
#line 1178 "write_deps_file.m"
          {
#line 1178 "write_deps_file.m"
            parse_tree__write_deps_file__Basis_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1178 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Basis_32, 0) = ((MR_Box) (parse_tree__write_deps_file__V_109_109));
#line 1178 "write_deps_file.m"
          }
#line 1180 "write_deps_file.m"
          {
#line 1180 "write_deps_file.m"
            mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_20, (MR_String) ".foreign", &parse_tree__write_deps_file__ForeignVarName_33);
          }
#line 1181 "write_deps_file.m"
          {
#line 1181 "write_deps_file.m"
            parse_tree__write_deps_file__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1181 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_112_112, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignVarName_33));
#line 1181 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_112_112, 1) = ((MR_Box) ((MR_String) ""));
#line 1181 "write_deps_file.m"
          }
#line 1181 "write_deps_file.m"
          {
#line 1181 "write_deps_file.m"
            parse_tree__write_deps_file__ForeignBasis_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1181 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignBasis_34, 0) = ((MR_Box) (parse_tree__write_deps_file__V_112_112));
#line 1181 "write_deps_file.m"
          }
#line 1183 "write_deps_file.m"
          {
#line 1183 "write_deps_file.m"
            mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_20, (MR_String) ".parent_mods", &parse_tree__write_deps_file__ParentModsVarName_35);
          }
#line 1184 "write_deps_file.m"
          {
#line 1184 "write_deps_file.m"
            parse_tree__write_deps_file__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1184 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_115_115, 0) = ((MR_Box) (parse_tree__write_deps_file__ParentModsVarName_35));
#line 1184 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_115_115, 1) = ((MR_Box) ((MR_String) ""));
#line 1184 "write_deps_file.m"
          }
#line 1184 "write_deps_file.m"
          {
#line 1184 "write_deps_file.m"
            parse_tree__write_deps_file__ParentBasis_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ParentBasis_36, 0) = ((MR_Box) (parse_tree__write_deps_file__V_115_115));
#line 1184 "write_deps_file.m"
          }
#line 1176 "write_deps_file.m"
        }
#line 1185 "write_deps_file.m"
        break;
#line 1185 "write_deps_file.m"
    }
#line 1192 "write_deps_file.m"
    {
#line 1192 "write_deps_file.m"
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(parse_tree__write_deps_file__Modules_19, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__ExtraLinkObjs_37);
    }
#line 1194 "write_deps_file.m"
    {
#line 1194 "write_deps_file.m"
      parse_tree__write_deps_file__MakeFileName_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1194 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_38, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_9[1]));
#line 1194 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_38, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_4));
#line 1194 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1194 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_38, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_8));
#line 1194 "write_deps_file.m"
    }
#line 1199 "write_deps_file.m"
    {
#line 1199 "write_deps_file.m"
      mercury__list__map_foldl_5_p_2((MR_Word) &parse_tree__write_deps_file_scalar_common_2[1], parse_tree__write_deps_file__TypeCtorInfo_480_480, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__MakeFileName_38, parse_tree__write_deps_file__ForeignModulesAndExts_28, &parse_tree__write_deps_file__ForeignFileNames_44, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv3_STATE_VARIABLE_IO_123_123);
    }
#line 1203 "write_deps_file.m"
    {
#line 1203 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1204 "write_deps_file.m"
    {
#line 1204 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign_cs = ");
    }
#line 1205 "write_deps_file.m"
    {
#line 1205 "write_deps_file.m"
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "", parse_tree__write_deps_file__ForeignFileNames_44);
    }
#line 1206 "write_deps_file.m"
    {
#line 1206 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1209 "write_deps_file.m"
    {
#line 1209 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1210 "write_deps_file.m"
    {
#line 1210 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign_dlls = ");
    }
#line 1211 "write_deps_file.m"
    {
#line 1211 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dlls_subdir)", (MR_String) ".dll", parse_tree__write_deps_file__ForeignBasis_34, parse_tree__write_deps_file__ForeignModules_29);
    }
#line 1213 "write_deps_file.m"
    {
#line 1213 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1215 "write_deps_file.m"
    {
#line 1215 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1216 "write_deps_file.m"
    {
#line 1216 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".init_cs = ");
    }
#line 1217 "write_deps_file.m"
    {
#line 1217 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(cs_subdir)", (MR_String) ".c", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1219 "write_deps_file.m"
    {
#line 1219 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1221 "write_deps_file.m"
    {
#line 1221 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1222 "write_deps_file.m"
    {
#line 1222 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".cs = \044(");
    }
#line 1223 "write_deps_file.m"
    {
#line 1223 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1224 "write_deps_file.m"
    {
#line 1224 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".init_cs) ");
    }
#line 1225 "write_deps_file.m"
    {
#line 1225 "write_deps_file.m"
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) ".c", parse_tree__write_deps_file__ExtraLinkObjs_37);
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dlls = ");
    }
#line 1231 "write_deps_file.m"
    {
#line 1231 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dlls_subdir)", (MR_String) ".dll", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1233 "write_deps_file.m"
    {
#line 1233 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1235 "write_deps_file.m"
    {
#line 1235 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1236 "write_deps_file.m"
    {
#line 1236 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_os = ");
    }
#line 1237 "write_deps_file.m"
    {
#line 1237 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(os_subdir)", (MR_String) ".\044O", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1239 "write_deps_file.m"
    {
#line 1239 "write_deps_file.m"
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) ".\044O", parse_tree__write_deps_file__ExtraLinkObjs_37);
    }
#line 1241 "write_deps_file.m"
    {
#line 1241 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1243 "write_deps_file.m"
    {
#line 1243 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1244 "write_deps_file.m"
    {
#line 1244 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_pic_os = ");
    }
#line 1245 "write_deps_file.m"
    {
#line 1245 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(os_subdir)", (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1247 "write_deps_file.m"
    {
#line 1247 "write_deps_file.m"
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)", parse_tree__write_deps_file__ExtraLinkObjs_37);
    }
#line 1249 "write_deps_file.m"
    {
#line 1249 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1251 "write_deps_file.m"
    {
#line 1251 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1252 "write_deps_file.m"
    {
#line 1252 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".os = \044(");
    }
#line 1253 "write_deps_file.m"
    {
#line 1253 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1254 "write_deps_file.m"
    {
#line 1254 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_os)\n");
    }
#line 1256 "write_deps_file.m"
    {
#line 1256 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1257 "write_deps_file.m"
    {
#line 1257 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".pic_os = \044(");
    }
#line 1258 "write_deps_file.m"
    {
#line 1258 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1259 "write_deps_file.m"
    {
#line 1259 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_pic_os)\n");
    }
#line 1270 "write_deps_file.m"
    {
#line 1270 "write_deps_file.m"
      parse_tree__write_deps_file__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1270 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 1270 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[105])));
#line 1270 "write_deps_file.m"
    }
#line 1270 "write_deps_file.m"
    {
#line 1270 "write_deps_file.m"
      parse_tree__write_deps_file__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1270 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 0) = ((MR_Box) ((MR_String) ".cs_or_ss =\044("));
#line 1270 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 1) = ((MR_Box) (parse_tree__write_deps_file__V_201_201));
#line 1270 "write_deps_file.m"
    }
#line 1270 "write_deps_file.m"
    {
#line 1270 "write_deps_file.m"
      parse_tree__write_deps_file__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1270 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 1270 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 1) = ((MR_Box) (parse_tree__write_deps_file__V_199_199));
#line 1270 "write_deps_file.m"
    }
#line 1269 "write_deps_file.m"
    {
#line 1269 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_197_197);
    }
#line 1273 "write_deps_file.m"
    {
#line 1273 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1274 "write_deps_file.m"
    {
#line 1274 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".useds = ");
    }
#line 1275 "write_deps_file.m"
    {
#line 1275 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(useds_subdir)", (MR_String) ".used", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1277 "write_deps_file.m"
    {
#line 1277 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1279 "write_deps_file.m"
    {
#line 1279 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1280 "write_deps_file.m"
    {
#line 1280 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".javas = ");
    }
#line 1281 "write_deps_file.m"
    {
#line 1281 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(javas_subdir)", (MR_String) ".java", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1283 "write_deps_file.m"
    {
#line 1283 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1285 "write_deps_file.m"
    {
#line 1285 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1286 "write_deps_file.m"
    {
#line 1286 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".classes = ");
    }
#line 1287 "write_deps_file.m"
    {
#line 1287 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(classes_subdir)", (MR_String) ".class", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1289 "write_deps_file.m"
    {
#line 1289 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) " ");
    }
#line 1296 "write_deps_file.m"
    {
#line 1296 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(wildcard ");
    }
#line 1297 "write_deps_file.m"
    {
#line 1297 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(classes_subdir)", (MR_String) "\\\044\044*.class", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1299 "write_deps_file.m"
    {
#line 1299 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ")\n");
    }
#line 1301 "write_deps_file.m"
    {
#line 1301 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1302 "write_deps_file.m"
    {
#line 1302 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dirs = ");
    }
#line 1303 "write_deps_file.m"
    {
#line 1303 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dirs_subdir)", (MR_String) ".dir", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1305 "write_deps_file.m"
    {
#line 1305 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1307 "write_deps_file.m"
    {
#line 1307 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1308 "write_deps_file.m"
    {
#line 1308 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dir_os = ");
    }
#line 1309 "write_deps_file.m"
    {
#line 1309 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dirs_subdir)", (MR_String) ".dir/*.\044O", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1311 "write_deps_file.m"
    {
#line 1311 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1313 "write_deps_file.m"
    {
#line 1313 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1314 "write_deps_file.m"
    {
#line 1314 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dates = ");
    }
#line 1315 "write_deps_file.m"
    {
#line 1315 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dates_subdir)", (MR_String) ".date", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".date0s = ");
    }
#line 1321 "write_deps_file.m"
    {
#line 1321 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(date0s_subdir)", (MR_String) ".date0", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".date3s = ");
    }
#line 1327 "write_deps_file.m"
    {
#line 1327 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(date3s_subdir)", (MR_String) ".date3", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1329 "write_deps_file.m"
    {
#line 1329 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1331 "write_deps_file.m"
    {
#line 1331 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1332 "write_deps_file.m"
    {
#line 1332 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".optdates = ");
    }
#line 1333 "write_deps_file.m"
    {
#line 1333 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(optdates_subdir)", (MR_String) ".optdate", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1335 "write_deps_file.m"
    {
#line 1335 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1337 "write_deps_file.m"
    {
#line 1337 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1338 "write_deps_file.m"
    {
#line 1338 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".trans_opt_dates = ");
    }
#line 1339 "write_deps_file.m"
    {
#line 1339 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(trans_opt_dates_subdir)", (MR_String) ".trans_opt_date", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1341 "write_deps_file.m"
    {
#line 1341 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1343 "write_deps_file.m"
    {
#line 1343 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1344 "write_deps_file.m"
    {
#line 1344 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".c_dates = ");
    }
#line 1345 "write_deps_file.m"
    {
#line 1345 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(c_dates_subdir)", (MR_String) ".c_date", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1347 "write_deps_file.m"
    {
#line 1347 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1349 "write_deps_file.m"
    {
#line 1349 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1350 "write_deps_file.m"
    {
#line 1350 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".java_dates = ");
    }
#line 1351 "write_deps_file.m"
    {
#line 1351 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(java_dates_subdir)", (MR_String) ".java_date", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1353 "write_deps_file.m"
    {
#line 1353 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1355 "write_deps_file.m"
    {
#line 1355 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1356 "write_deps_file.m"
    {
#line 1356 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ds = ");
    }
#line 1357 "write_deps_file.m"
    {
#line 1357 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(ds_subdir)", (MR_String) ".d", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1359 "write_deps_file.m"
    {
#line 1359 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1361 "write_deps_file.m"
    {
#line 1361 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1362 "write_deps_file.m"
    {
#line 1362 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".module_deps = ");
    }
#line 1364 "write_deps_file.m"
    {
#line 1364 "write_deps_file.m"
      parse_tree__write_deps_file__V_320_320 = make__make_module_dep_file_extension_0_f_0();
    }
#line 1363 "write_deps_file.m"
    {
#line 1363 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(module_deps_subdir)", parse_tree__write_deps_file__V_320_320, parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1366 "write_deps_file.m"
    {
#line 1366 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1368 "write_deps_file.m"
    {
#line 1368 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1369 "write_deps_file.m"
    {
#line 1369 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mihs = ");
    }
#line 1370 "write_deps_file.m"
    {
#line 1370 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 251, &parse_tree__write_deps_file__HighLevelCode_45);
    }
#line 1389 "write_deps_file.m"
#line 1389 "write_deps_file.m"
    switch (parse_tree__write_deps_file__HighLevelCode_45) {
#line 1389 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1389 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1391 "write_deps_file.m"
        {
#line 1391 "write_deps_file.m"
        }
#line 1389 "write_deps_file.m"
        break;
#line 1389 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1379 "write_deps_file.m"
#line 1379 "write_deps_file.m"
        switch (parse_tree__write_deps_file__Target_27) {
#line 1379 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1379 "write_deps_file.m"
          case (MR_Integer) 0:
#line 1374 "write_deps_file.m"
            {
#line 1377 "write_deps_file.m"
              {
#line 1377 "write_deps_file.m"
                parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(mihs_subdir)", (MR_String) ".mih", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
              }
#line 1374 "write_deps_file.m"
            }
#line 1379 "write_deps_file.m"
            break;
#line 1379 "write_deps_file.m"
          case (MR_Integer) 1:
#line 1384 "write_deps_file.m"
            {
#line 1384 "write_deps_file.m"
            }
#line 1379 "write_deps_file.m"
            break;
#line 1379 "write_deps_file.m"
          case (MR_Integer) 3:
#line 1386 "write_deps_file.m"
            {
#line 1386 "write_deps_file.m"
            }
#line 1379 "write_deps_file.m"
            break;
#line 1379 "write_deps_file.m"
          case (MR_Integer) 2:
#line 1385 "write_deps_file.m"
            {
#line 1385 "write_deps_file.m"
            }
#line 1379 "write_deps_file.m"
            break;
#line 1379 "write_deps_file.m"
        }
#line 1389 "write_deps_file.m"
        break;
#line 1389 "write_deps_file.m"
    }
#line 1393 "write_deps_file.m"
    {
#line 1393 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1395 "write_deps_file.m"
    {
#line 1395 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1396 "write_deps_file.m"
    {
#line 1396 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mhs = ");
    }
#line 1401 "write_deps_file.m"
#line 1401 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Target_27) {
#line 1401 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1401 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1398 "write_deps_file.m"
        {
#line 1399 "write_deps_file.m"
          {
#line 1399 "write_deps_file.m"
            parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", (MR_String) ".mh", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
          }
#line 1398 "write_deps_file.m"
        }
#line 1401 "write_deps_file.m"
        break;
#line 1401 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1402 "write_deps_file.m"
        {
#line 1402 "write_deps_file.m"
        }
#line 1401 "write_deps_file.m"
        break;
#line 1401 "write_deps_file.m"
      case (MR_Integer) 3:
#line 1404 "write_deps_file.m"
        {
#line 1404 "write_deps_file.m"
        }
#line 1401 "write_deps_file.m"
        break;
#line 1401 "write_deps_file.m"
      case (MR_Integer) 2:
#line 1403 "write_deps_file.m"
        {
#line 1403 "write_deps_file.m"
        }
#line 1401 "write_deps_file.m"
        break;
#line 1401 "write_deps_file.m"
    }
#line 1407 "write_deps_file.m"
    {
#line 1407 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1415 "write_deps_file.m"
    {
#line 1415 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1416 "write_deps_file.m"
    {
#line 1416 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_mihs = ");
    }
#line 1417 "write_deps_file.m"
    {
#line 1417 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(mihs_subdir)", (MR_String) ".mih", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1419 "write_deps_file.m"
    {
#line 1419 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1424 "write_deps_file.m"
    {
#line 1424 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1425 "write_deps_file.m"
    {
#line 1425 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_mhs = ");
    }
#line 1426 "write_deps_file.m"
    {
#line 1426 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", (MR_String) ".mh", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1428 "write_deps_file.m"
    {
#line 1428 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1430 "write_deps_file.m"
    {
#line 1430 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1431 "write_deps_file.m"
    {
#line 1431 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ints = ");
    }
#line 1432 "write_deps_file.m"
    {
#line 1432 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(ints_subdir)", (MR_String) ".int", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1434 "write_deps_file.m"
    {
#line 1434 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Basis_32);
    }
#line 1435 "write_deps_file.m"
    {
#line 1435 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(int2s_subdir)", (MR_String) ".int2", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1437 "write_deps_file.m"
    {
#line 1437 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1444 "write_deps_file.m"
    {
#line 1444 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1445 "write_deps_file.m"
    {
#line 1445 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".int0s = ");
    }
#line 1446 "write_deps_file.m"
    {
#line 1446 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(int0s_subdir)", (MR_String) ".int0", parse_tree__write_deps_file__ParentBasis_36, parse_tree__write_deps_file__ModulesWithSubModules_23);
    }
#line 1448 "write_deps_file.m"
    {
#line 1448 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1457 "write_deps_file.m"
    {
#line 1457 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1458 "write_deps_file.m"
    {
#line 1458 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_int0s = ");
    }
#line 1459 "write_deps_file.m"
    {
#line 1459 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(int0s_subdir)", (MR_String) ".int0", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1461 "write_deps_file.m"
    {
#line 1461 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1463 "write_deps_file.m"
    {
#line 1463 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1464 "write_deps_file.m"
    {
#line 1464 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".int3s = ");
    }
#line 1465 "write_deps_file.m"
    {
#line 1465 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(int3s_subdir)", (MR_String) ".int3", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1467 "write_deps_file.m"
    {
#line 1467 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1469 "write_deps_file.m"
    {
#line 1469 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1470 "write_deps_file.m"
    {
#line 1470 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".opts = ");
    }
#line 1471 "write_deps_file.m"
    {
#line 1471 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(opts_subdir)", (MR_String) ".opt", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1473 "write_deps_file.m"
    {
#line 1473 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1475 "write_deps_file.m"
    {
#line 1475 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1476 "write_deps_file.m"
    {
#line 1476 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".trans_opts = ");
    }
#line 1477 "write_deps_file.m"
    {
#line 1477 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(trans_opts_subdir)", (MR_String) ".trans_opt", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1479 "write_deps_file.m"
    {
#line 1479 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1481 "write_deps_file.m"
    {
#line 1481 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1482 "write_deps_file.m"
    {
#line 1482 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".analysiss = ");
    }
#line 1483 "write_deps_file.m"
    {
#line 1483 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(analysiss_subdir)", (MR_String) ".analysis", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1485 "write_deps_file.m"
    {
#line 1485 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1487 "write_deps_file.m"
    {
#line 1487 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1488 "write_deps_file.m"
    {
#line 1488 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".requests = ");
    }
#line 1489 "write_deps_file.m"
    {
#line 1489 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(requests_subdir)", (MR_String) ".request", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1491 "write_deps_file.m"
    {
#line 1491 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1493 "write_deps_file.m"
    {
#line 1493 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1494 "write_deps_file.m"
    {
#line 1494 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".imdgs = ");
    }
#line 1495 "write_deps_file.m"
    {
#line 1495 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(imdgs_subdir)", (MR_String) ".imdg", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1497 "write_deps_file.m"
    {
#line 1497 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1499 "write_deps_file.m"
    {
#line 1499 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1500 "write_deps_file.m"
    {
#line 1500 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".profs = ");
    }
#line 1501 "write_deps_file.m"
    {
#line 1501 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", (MR_String) ".prof", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1503 "write_deps_file.m"
    {
#line 1503 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n\n");
#line 1503 "write_deps_file.m"
      return;
    }
#line 1106 "write_deps_file.m"
  }
#line 1102 "write_deps_file.m"
}

#line 1039 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1(
#line 1039 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1039 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1039 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 1039 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 1039 "write_deps_file.m"
{
#line 1039 "write_deps_file.m"
  {
#line 1039 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1039 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_HeadVar__4_17;

#line 1039 "write_deps_file.m"
    {
#line 1039 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1039__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_2), &parse_tree__write_deps_file__conv0_HeadVar__4_17);
    }
#line 1039 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_3 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__4_17));
#line 1039 "write_deps_file.m"
  }
#line 1039 "write_deps_file.m"
}

#line 1033 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(
#line 1033 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsGraph0_4,
#line 1033 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_5,
#line 1033 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__Dependencies_6)
#line 1033 "write_deps_file.m"
{
#line 1036 "write_deps_file.m"
  {
#line 1036 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1036 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_22_22 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1036 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleKey_7;
#line 1036 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DepsGraph_8;
#line 1036 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DepsKeysSet_9;
#line 1036 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__AddKeyDep_10;
#line 1036 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_18_18;
#line 1044 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv1_Dependencies_6;

#line 1037 "write_deps_file.m"
    {
#line 1037 "write_deps_file.m"
      mercury__digraph__add_vertex_4_p_0(parse_tree__write_deps_file__TypeCtorInfo_22_22, ((MR_Box) (parse_tree__write_deps_file__ModuleName_5)), &parse_tree__write_deps_file__ModuleKey_7, parse_tree__write_deps_file__DepsGraph0_4, &parse_tree__write_deps_file__DepsGraph_8);
    }
#line 1038 "write_deps_file.m"
    {
#line 1038 "write_deps_file.m"
      mercury__digraph__lookup_key_set_from_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_22_22, parse_tree__write_deps_file__DepsGraph_8, parse_tree__write_deps_file__ModuleKey_7, &parse_tree__write_deps_file__DepsKeysSet_9);
    }
#line 1039 "write_deps_file.m"
    {
#line 1039 "write_deps_file.m"
      parse_tree__write_deps_file__AddKeyDep_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1039 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__AddKeyDep_10, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[1]));
#line 1039 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__AddKeyDep_10, 1) = ((MR_Box) (parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1));
#line 1039 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__AddKeyDep_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1039 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__AddKeyDep_10, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsGraph_8));
#line 1039 "write_deps_file.m"
    }
#line 1044 "write_deps_file.m"
    {
#line 1044 "write_deps_file.m"
      parse_tree__write_deps_file__V_18_18 = mercury__set__init_0_f_0(parse_tree__write_deps_file__TypeCtorInfo_22_22);
    }
#line 1044 "write_deps_file.m"
    {
#line 1044 "write_deps_file.m"
      mercury__sparse_bitset__foldl_4_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[0], parse_tree__write_deps_file__AddKeyDep_10, parse_tree__write_deps_file__DepsKeysSet_9, ((MR_Box) (parse_tree__write_deps_file__V_18_18)), &parse_tree__write_deps_file__conv1_Dependencies_6);
    }
#line 1044 "write_deps_file.m"
    *parse_tree__write_deps_file__Dependencies_6 = ((MR_Word) parse_tree__write_deps_file__conv1_Dependencies_6);
#line 1036 "write_deps_file.m"
  }
#line 1033 "write_deps_file.m"
}

#line 924 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(
#line 924 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 924 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 924 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 924 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Ext_10)
#line 924 "write_deps_file.m"
{
#line 927 "write_deps_file.m"
  {
#line 927 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 927 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleStr_12;
#line 927 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Target_13;
#line 927 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ShorthandTarget_14;

#line 928 "write_deps_file.m"
    {
#line 928 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__write_deps_file__ModuleName_9, &parse_tree__write_deps_file__ModuleStr_12);
    }
#line 929 "write_deps_file.m"
    {
#line 929 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__Ext_10, (MR_Integer) 1, &parse_tree__write_deps_file__Target_13);
    }
#line 931 "write_deps_file.m"
    {
#line 931 "write_deps_file.m"
      parse_tree__write_deps_file__ShorthandTarget_14 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleStr_12, parse_tree__write_deps_file__Ext_10);
    }
#line 932 "write_deps_file.m"
    {
#line 932 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) ".PHONY: ");
    }
#line 933 "write_deps_file.m"
    {
#line 933 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__ShorthandTarget_14);
    }
#line 934 "write_deps_file.m"
    {
#line 934 "write_deps_file.m"
      mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_8);
    }
#line 935 "write_deps_file.m"
    {
#line 935 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__ShorthandTarget_14);
    }
#line 936 "write_deps_file.m"
    {
#line 936 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) ": ");
    }
#line 937 "write_deps_file.m"
    {
#line 937 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Target_13);
    }
#line 938 "write_deps_file.m"
    {
#line 938 "write_deps_file.m"
      mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_8);
#line 938 "write_deps_file.m"
      return;
    }
#line 927 "write_deps_file.m"
  }
#line 924 "write_deps_file.m"
}

#line 911 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(
#line 911 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_1,
#line 911 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_2,
#line 911 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3)
#line 911 "write_deps_file.m"
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
#line 915 "write_deps_file.m"
          {
#line 915 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_13 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 0)));
#line 915 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FileNames_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 1)));

#line 916 "write_deps_file.m"
            {
#line 916 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_1, (MR_String) " \\\n\t");
            }
#line 917 "write_deps_file.m"
            {
#line 917 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_1, parse_tree__write_deps_file__FileName_13);
            }
#line 918 "write_deps_file.m"
            {
#line 918 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_1, parse_tree__write_deps_file__Suffix_2);
            }
#line 919 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 919 "write_deps_file.m"
            {
#line 919 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__3__tmp_copy_3 = parse_tree__write_deps_file__FileNames_14;

#line 919 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__3_3 = parse_tree__write_deps_file__HeadVar__3__tmp_copy_3;
#line 919 "write_deps_file.m"
            }
#line 919 "write_deps_file.m"
            continue;
#line 915 "write_deps_file.m"
          }
#line 914 "write_deps_file.m"
      }
#line 914 "write_deps_file.m"
      break;
#line 914 "write_deps_file.m"
    }
#line 911 "write_deps_file.m"
}

#line 898 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(
#line 898 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 898 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_2,
#line 898 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 898 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4)
#line 898 "write_deps_file.m"
{
#line 901 "write_deps_file.m"
  while (MR_TRUE)
#line 901 "write_deps_file.m"
    {
#line 901 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 901 "write_deps_file.m"
      {
#line 901 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 901 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 901 "write_deps_file.m"
          {
#line 901 "write_deps_file.m"
          }
#line 901 "write_deps_file.m"
        else
#line 903 "write_deps_file.m"
          {
#line 903 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__ExtraLink_16;
#line 903 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_17;
#line 903 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ExtraLinks_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 1)));
#line 903 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_20;
#line 903 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 0)));

#line 903 "write_deps_file.m"
            parse_tree__write_deps_file__ExtraLink_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_23_23, (MR_Integer) 0)));
#line 903 "write_deps_file.m"
            parse_tree__write_deps_file__Module_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_23_23, (MR_Integer) 1)));
#line 904 "write_deps_file.m"
            {
#line 904 "write_deps_file.m"
              parse_tree__file_names__extra_link_obj_file_name_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_17, parse_tree__write_deps_file__ExtraLink_16, parse_tree__write_deps_file__Suffix_3, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_20);
            }
#line 906 "write_deps_file.m"
            {
#line 906 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, (MR_String) " \\\n\t");
            }
#line 907 "write_deps_file.m"
            {
#line 907 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, parse_tree__write_deps_file__FileName_20);
            }
#line 908 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 908 "write_deps_file.m"
            {
#line 908 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__4__tmp_copy_4 = parse_tree__write_deps_file__ExtraLinks_18;

#line 908 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__4_4 = parse_tree__write_deps_file__HeadVar__4__tmp_copy_4;
#line 908 "write_deps_file.m"
            }
#line 908 "write_deps_file.m"
            continue;
#line 903 "write_deps_file.m"
          }
#line 901 "write_deps_file.m"
      }
#line 901 "write_deps_file.m"
      break;
#line 901 "write_deps_file.m"
    }
#line 898 "write_deps_file.m"
}

#line 885 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(
#line 885 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 885 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_2,
#line 885 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 885 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 885 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__5_5)
#line 885 "write_deps_file.m"
{
#line 888 "write_deps_file.m"
  while (MR_TRUE)
#line 888 "write_deps_file.m"
    {
#line 888 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 888 "write_deps_file.m"
      {
#line 888 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 888 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 888 "write_deps_file.m"
          {
#line 888 "write_deps_file.m"
          }
#line 888 "write_deps_file.m"
        else
#line 890 "write_deps_file.m"
          {
#line 890 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FactTable_19 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 0)));
#line 890 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FactTables_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 1)));
#line 890 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_22;

#line 891 "write_deps_file.m"
            {
#line 891 "write_deps_file.m"
              parse_tree__file_names__fact_table_file_name_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_4, parse_tree__write_deps_file__FactTable_19, parse_tree__write_deps_file__Suffix_3, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_22);
            }
#line 893 "write_deps_file.m"
            {
#line 893 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, (MR_String) " \\\n\t");
            }
#line 894 "write_deps_file.m"
            {
#line 894 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, parse_tree__write_deps_file__FileName_22);
            }
#line 895 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 895 "write_deps_file.m"
            {
#line 895 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__5__tmp_copy_5 = parse_tree__write_deps_file__FactTables_20;

#line 895 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__5_5 = parse_tree__write_deps_file__HeadVar__5__tmp_copy_5;
#line 895 "write_deps_file.m"
            }
#line 895 "write_deps_file.m"
            continue;
#line 890 "write_deps_file.m"
          }
#line 888 "write_deps_file.m"
      }
#line 888 "write_deps_file.m"
      break;
#line 888 "write_deps_file.m"
    }
#line 885 "write_deps_file.m"
}

#line 875 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependency_5_p_0(
#line 875 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 875 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 875 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFile_8)
#line 875 "write_deps_file.m"
{
#line 879 "write_deps_file.m"
  {
#line 879 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 879 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__IncludeFileName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IncludeFile_8, (MR_Integer) 1)));
#line 879 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__IncludePath_12;
#line 880 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IncludeFile_8, (MR_Integer) 0)));

#line 881 "write_deps_file.m"
    {
#line 881 "write_deps_file.m"
      parse_tree__file_names__make_include_file_path_3_p_0(parse_tree__write_deps_file__SourceFileName_7, parse_tree__write_deps_file__IncludeFileName_11, &parse_tree__write_deps_file__IncludePath_12);
    }
#line 882 "write_deps_file.m"
    {
#line 882 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_6, (MR_String) " \\\n\t");
    }
#line 883 "write_deps_file.m"
    {
#line 883 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_6, parse_tree__write_deps_file__IncludePath_12);
#line 883 "write_deps_file.m"
      return;
    }
#line 879 "write_deps_file.m"
  }
#line 875 "write_deps_file.m"
}

#line 872 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0_1(
#line 872 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 872 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 872 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 872 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 872 "write_deps_file.m"
{
#line 872 "write_deps_file.m"
  {
#line 872 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 872 "write_deps_file.m"
    {
#line 872 "write_deps_file.m"
      parse_tree__write_deps_file__write_foreign_include_file_dependency_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 872 "write_deps_file.m"
      return;
    }
#line 872 "write_deps_file.m"
  }
#line 872 "write_deps_file.m"
}

#line 866 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0(
#line 866 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 866 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 866 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFiles_8)
#line 866 "write_deps_file.m"
{
#line 870 "write_deps_file.m"
  {
#line 870 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 870 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_12_12;
#line 871 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_11;

#line 872 "write_deps_file.m"
    {
#line 872 "write_deps_file.m"
      parse_tree__write_deps_file__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 872 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_9[0]));
#line 872 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 1) = ((MR_Box) (parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0_1));
#line 872 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 872 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 3) = ((MR_Box) (parse_tree__write_deps_file__DepStream_6));
#line 872 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 4) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_7));
#line 872 "write_deps_file.m"
    }
#line 871 "write_deps_file.m"
    {
#line 871 "write_deps_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_12_12, parse_tree__write_deps_file__IncludeFiles_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_11);
    }
#line 870 "write_deps_file.m"
  }
#line 866 "write_deps_file.m"
}

#line 840 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(
#line 840 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 840 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2)
#line 840 "write_deps_file.m"
{
#line 843 "write_deps_file.m"
  {
#line 843 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 843 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 843 "write_deps_file.m"
      {
#line 843 "write_deps_file.m"
      }
#line 843 "write_deps_file.m"
    else
#line 844 "write_deps_file.m"
      {
#line 845 "write_deps_file.m"
        {
#line 845 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__1_1, (MR_String) " ");
#line 845 "write_deps_file.m"
          return;
        }
#line 844 "write_deps_file.m"
      }
#line 843 "write_deps_file.m"
  }
#line 840 "write_deps_file.m"
}

#line 818 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(
#line 818 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 818 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_10,
#line 818 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Prefix_11,
#line 818 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_12,
#line 818 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Basis_13,
#line 818 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_14)
#line 818 "write_deps_file.m"
{
#line 825 "write_deps_file.m"
  {
#line 825 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 825 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Basis_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 837 "write_deps_file.m"
      {
#line 837 "write_deps_file.m"
        parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Suffix_12, parse_tree__write_deps_file__Modules_14);
#line 837 "write_deps_file.m"
        return;
      }
#line 825 "write_deps_file.m"
    else
#line 825 "write_deps_file.m"
      {
#line 825 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__VarName_16;
#line 825 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__OldSuffix_17;
#line 825 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Basis_13, (MR_Integer) 0)));

#line 825 "write_deps_file.m"
        parse_tree__write_deps_file__VarName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_21_21, (MR_Integer) 0)));
#line 825 "write_deps_file.m"
        parse_tree__write_deps_file__OldSuffix_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_21_21, (MR_Integer) 1)));
#line 826 "write_deps_file.m"
        {
#line 826 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) "\044(");
        }
#line 827 "write_deps_file.m"
        {
#line 827 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__VarName_16);
        }
#line 828 "write_deps_file.m"
        {
#line 828 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) ":%");
        }
#line 829 "write_deps_file.m"
        {
#line 829 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__OldSuffix_17);
        }
#line 830 "write_deps_file.m"
        {
#line 830 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) "=");
        }
#line 831 "write_deps_file.m"
        {
#line 831 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Prefix_11);
        }
#line 832 "write_deps_file.m"
        {
#line 832 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) "%");
        }
#line 833 "write_deps_file.m"
        {
#line 833 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Suffix_12);
        }
#line 834 "write_deps_file.m"
        {
#line 834 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) ")");
#line 834 "write_deps_file.m"
          return;
        }
#line 825 "write_deps_file.m"
      }
#line 825 "write_deps_file.m"
  }
#line 818 "write_deps_file.m"
}

#line 807 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_list_6_p_0(
#line 807 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 807 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_2,
#line 807 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 807 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4)
#line 807 "write_deps_file.m"
{
#line 810 "write_deps_file.m"
  while (MR_TRUE)
#line 810 "write_deps_file.m"
    {
#line 810 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 810 "write_deps_file.m"
      {
#line 810 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 810 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 810 "write_deps_file.m"
          {
#line 810 "write_deps_file.m"
          }
#line 810 "write_deps_file.m"
        else
#line 811 "write_deps_file.m"
          {
#line 811 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 0)));
#line 811 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Modules_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 1)));
#line 811 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_19;

#line 812 "write_deps_file.m"
            {
#line 812 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_16, parse_tree__write_deps_file__Suffix_3, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_19);
            }
#line 814 "write_deps_file.m"
            {
#line 814 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, (MR_String) " \\\n\t");
            }
#line 815 "write_deps_file.m"
            {
#line 815 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, parse_tree__write_deps_file__FileName_19);
            }
#line 816 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 816 "write_deps_file.m"
            {
#line 816 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__4__tmp_copy_4 = parse_tree__write_deps_file__Modules_17;

#line 816 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__4_4 = parse_tree__write_deps_file__HeadVar__4__tmp_copy_4;
#line 816 "write_deps_file.m"
            }
#line 816 "write_deps_file.m"
            continue;
#line 811 "write_deps_file.m"
          }
#line 810 "write_deps_file.m"
      }
#line 810 "write_deps_file.m"
      break;
#line 810 "write_deps_file.m"
    }
#line 807 "write_deps_file.m"
}

#line 800 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_set_6_p_0(
#line 800 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 800 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 800 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_9,
#line 800 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_10)
#line 800 "write_deps_file.m"
{
#line 803 "write_deps_file.m"
  {
#line 803 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 803 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_14_14;

#line 805 "write_deps_file.m"
    {
#line 805 "write_deps_file.m"
      parse_tree__write_deps_file__V_14_14 = mercury__set__to_sorted_list_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_deps_file__Modules_10);
    }
#line 804 "write_deps_file.m"
    {
#line 804 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Suffix_9, parse_tree__write_deps_file__V_14_14);
#line 804 "write_deps_file.m"
      return;
    }
#line 803 "write_deps_file.m"
  }
#line 800 "write_deps_file.m"
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
#line 2377 "write_deps_file.m"
  {
#line 2377 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 2377 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2377 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2377 "write_deps_file.m"
    else
#line 2379 "write_deps_file.m"
      {
#line 2379 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Dep_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 0)));
#line 2379 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Deps_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 1)));
#line 2379 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;

#line 2380 "write_deps_file.m"
        {
#line 2380 "write_deps_file.m"
          parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__HeadVar__2_2, parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__HeadVar__4_4, parse_tree__write_deps_file__Deps_21, &parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35);
        }
#line 12447 "parse_tree.write_deps_file.c"
#line 12448 "parse_tree.write_deps_file.c"
        switch (parse_tree__write_deps_file__HeadVar__2_2) {
#line 12450 "parse_tree.write_deps_file.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 12452 "parse_tree.write_deps_file.c"
          case (MR_Integer) 0:
#line 12454 "parse_tree.write_deps_file.c"
            {
#line 12456 "parse_tree.write_deps_file.c"
              MR_String parse_tree__write_deps_file__OptName_28;
#line 12458 "parse_tree.write_deps_file.c"
              MR_Word parse_tree__write_deps_file__Result2_29;

#line 2401 "write_deps_file.m"
              {
#line 2401 "write_deps_file.m"
                parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__Dep_20, parse_tree__write_deps_file__HeadVar__4_4, &parse_tree__write_deps_file__OptName_28);
              }
#line 2402 "write_deps_file.m"
              {
#line 2402 "write_deps_file.m"
                libs__file_util__search_for_file_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__OptName_28, &parse_tree__write_deps_file__Result2_29);
              }
#line 2406 "write_deps_file.m"
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_29)) == (MR_mktag((MR_Integer) 1))))
#line 2407 "write_deps_file.m"
                *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;
#line 2406 "write_deps_file.m"
              else
#line 2405 "write_deps_file.m"
                {
#line 2405 "write_deps_file.m"
                  MR_Word base;
#line 2405 "write_deps_file.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2405 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2405 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_20));
#line 2405 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
#line 2405 "write_deps_file.m"
                }
#line 12491 "parse_tree.write_deps_file.c"
            }
#line 12493 "parse_tree.write_deps_file.c"
            break;
#line 12495 "parse_tree.write_deps_file.c"
          case (MR_Integer) 1:
#line 12497 "parse_tree.write_deps_file.c"
            {
#line 12499 "parse_tree.write_deps_file.c"
              MR_Word parse_tree__write_deps_file__Result1_24;

#line 2384 "write_deps_file.m"
              {
#line 2384 "write_deps_file.m"
                parse_tree__prog_io_find__search_for_module_source_7_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__Dep_20, &parse_tree__write_deps_file__Result1_24);
              }
#line 12507 "parse_tree.write_deps_file.c"
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result1_24)) == (MR_mktag((MR_Integer) 1))))
#line 12509 "parse_tree.write_deps_file.c"
                {
#line 12511 "parse_tree.write_deps_file.c"
                  MR_String parse_tree__write_deps_file__OptName_45;
#line 12513 "parse_tree.write_deps_file.c"
                  MR_Word parse_tree__write_deps_file__Result2_46;

#line 2401 "write_deps_file.m"
                  {
#line 2401 "write_deps_file.m"
                    parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__Dep_20, parse_tree__write_deps_file__HeadVar__4_4, &parse_tree__write_deps_file__OptName_45);
                  }
#line 2402 "write_deps_file.m"
                  {
#line 2402 "write_deps_file.m"
                    libs__file_util__search_for_file_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__OptName_45, &parse_tree__write_deps_file__Result2_46);
                  }
#line 2406 "write_deps_file.m"
                  if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_46)) == (MR_mktag((MR_Integer) 1))))
#line 2407 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;
#line 2406 "write_deps_file.m"
                  else
#line 2405 "write_deps_file.m"
                    {
#line 2405 "write_deps_file.m"
                      MR_Word base;
#line 2405 "write_deps_file.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2405 "write_deps_file.m"
                      *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2405 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_20));
#line 2405 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
#line 2405 "write_deps_file.m"
                    }
#line 12546 "parse_tree.write_deps_file.c"
                }
#line 12548 "parse_tree.write_deps_file.c"
              else
#line 12550 "parse_tree.write_deps_file.c"
                {
#line 2388 "write_deps_file.m"
                  {
#line 2388 "write_deps_file.m"
                    MR_Word base;
#line 2388 "write_deps_file.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2388 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2388 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_20));
#line 2388 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
#line 2388 "write_deps_file.m"
                  }
#line 2390 "write_deps_file.m"
                  {
#line 2390 "write_deps_file.m"
                    mercury__io__seen_2_p_0();
#line 2390 "write_deps_file.m"
                    return;
                  }
#line 12573 "parse_tree.write_deps_file.c"
                }
#line 12575 "parse_tree.write_deps_file.c"
            }
#line 12577 "parse_tree.write_deps_file.c"
            break;
#line 12579 "parse_tree.write_deps_file.c"
        }
#line 2379 "write_deps_file.m"
      }
#line 2377 "write_deps_file.m"
  }
#line 104 "write_deps_file.m"
}

#line 2298 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__referenced_dlls_2_f_0_1(
#line 2298 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2298 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 2298 "write_deps_file.m"
{
#line 2298 "write_deps_file.m"
  {
#line 2298 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 2298 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 2298 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_HeadVar__2_18;

#line 2298 "write_deps_file.m"
    {
#line 2298 "write_deps_file.m"
      parse_tree__write_deps_file__conv0_HeadVar__2_18 = parse_tree__write_deps_file__IntroducedFrom__func__referenced_dlls__2298__1_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 2298 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__2_18));
#line 2298 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 2298 "write_deps_file.m"
  }
#line 2298 "write_deps_file.m"
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
#line 2287 "write_deps_file.m"
  {
#line 2287 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2287 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules_6;
#line 2287 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_22_22 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2287 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DepModules_7;

#line 2288 "write_deps_file.m"
    {
#line 2288 "write_deps_file.m"
      mercury__set__insert_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_22_22, ((MR_Box) (parse_tree__write_deps_file__Module_4)), parse_tree__write_deps_file__DepModules0_5, &parse_tree__write_deps_file__DepModules_7);
    }
#line 2292 "write_deps_file.m"
    {
#line 2292 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__Module_4);
    }
#line 2297 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 2295 "write_deps_file.m"
      {
#line 2296 "write_deps_file.m"
        {
#line 2296 "write_deps_file.m"
          mercury__set__insert_list_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_22_22, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[25]), parse_tree__write_deps_file__DepModules_7, &parse_tree__write_deps_file__Modules_6);
        }
#line 2295 "write_deps_file.m"
      }
#line 2297 "write_deps_file.m"
    else
#line 2305 "write_deps_file.m"
      {
#line 2306 "write_deps_file.m"
        {
#line 2306 "write_deps_file.m"
          parse_tree__write_deps_file__Modules_6 = mercury__set__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_22_22, parse_tree__write_deps_file__TypeCtorInfo_22_22, (MR_Word) &parse_tree__write_deps_file_scalar_common_2[6], parse_tree__write_deps_file__DepModules_7);
        }
#line 2305 "write_deps_file.m"
      }
#line 2287 "write_deps_file.m"
    return parse_tree__write_deps_file__Modules_6;
#line 2287 "write_deps_file.m"
  }
#line 88 "write_deps_file.m"
}

#line 2262 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1(
#line 2262 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2262 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2262 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2262 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 2262 "write_deps_file.m"
{
#line 2262 "write_deps_file.m"
  {
#line 2262 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 2262 "write_deps_file.m"
    {
#line 2262 "write_deps_file.m"
      parse_tree__write_deps_file__write_module_scc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 2262 "write_deps_file.m"
      return;
    }
#line 2262 "write_deps_file.m"
  }
#line 2262 "write_deps_file.m"
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
#line 2248 "write_deps_file.m"
  {
#line 2248 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2248 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Order_10;
#line 2248 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_11;

#line 2249 "write_deps_file.m"
    {
#line 2249 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_6, (MR_Integer) 93, &parse_tree__write_deps_file__Order_10);
    }
#line 2250 "write_deps_file.m"
    {
#line 2250 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_6, (MR_Integer) 45, &parse_tree__write_deps_file__Verbose_11);
    }
#line 2274 "write_deps_file.m"
#line 2274 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Order_10) {
#line 2274 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2274 "write_deps_file.m"
      case (MR_Integer) 0:
#line 2275 "write_deps_file.m"
        {
#line 2275 "write_deps_file.m"
        }
#line 2274 "write_deps_file.m"
        break;
#line 2274 "write_deps_file.m"
      case (MR_Integer) 1:
#line 2252 "write_deps_file.m"
        {
#line 2252 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__OrdFileName_12;
#line 2252 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__OrdResult_13;

#line 2253 "write_deps_file.m"
          {
#line 2253 "write_deps_file.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_6, parse_tree__write_deps_file__Module_7, (MR_String) ".order", (MR_Integer) 0, &parse_tree__write_deps_file__OrdFileName_12);
          }
#line 2255 "write_deps_file.m"
          {
#line 2255 "write_deps_file.m"
            libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) "% Creating module order file \140");
          }
#line 2256 "write_deps_file.m"
          {
#line 2256 "write_deps_file.m"
            libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, parse_tree__write_deps_file__OrdFileName_12);
          }
#line 2257 "write_deps_file.m"
          {
#line 2257 "write_deps_file.m"
            libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) "\'...");
          }
#line 2258 "write_deps_file.m"
          {
#line 2258 "write_deps_file.m"
            mercury__io__open_output_4_p_0(parse_tree__write_deps_file__OrdFileName_12, &parse_tree__write_deps_file__OrdResult_13);
          }
#line 2265 "write_deps_file.m"
          if (((MR_tag((MR_Word) parse_tree__write_deps_file__OrdResult_13)) == (MR_mktag((MR_Integer) 1))))
#line 2266 "write_deps_file.m"
            {
#line 2266 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__IOError_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__OrdResult_13, (MR_Integer) 0)));
#line 2266 "write_deps_file.m"
              MR_String parse_tree__write_deps_file__IOErrorMessage_16;
#line 2266 "write_deps_file.m"
              MR_String parse_tree__write_deps_file__OrdMessage_17;
#line 2266 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_34_34;
#line 2266 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_36_36;
#line 2266 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_37_37;
#line 2266 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_39_39;

#line 2267 "write_deps_file.m"
              {
#line 2267 "write_deps_file.m"
                libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) " failed.\n");
              }
#line 2268 "write_deps_file.m"
              {
#line 2268 "write_deps_file.m"
                libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_11);
              }
#line 2269 "write_deps_file.m"
              {
#line 2269 "write_deps_file.m"
                mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_15, &parse_tree__write_deps_file__IOErrorMessage_16);
              }
#line 2271 "write_deps_file.m"
              {
#line 2271 "write_deps_file.m"
                parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2271 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_16));
#line 2271 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2271 "write_deps_file.m"
              }
#line 2271 "write_deps_file.m"
              {
#line 2271 "write_deps_file.m"
                parse_tree__write_deps_file__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2271 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 2271 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 2271 "write_deps_file.m"
              }
#line 2270 "write_deps_file.m"
              {
#line 2270 "write_deps_file.m"
                parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2270 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) (parse_tree__write_deps_file__OrdFileName_12));
#line 2270 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_37_37));
#line 2270 "write_deps_file.m"
              }
#line 2270 "write_deps_file.m"
              {
#line 2270 "write_deps_file.m"
                parse_tree__write_deps_file__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2270 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 2270 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 2270 "write_deps_file.m"
              }
#line 2270 "write_deps_file.m"
              {
#line 2270 "write_deps_file.m"
                mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_34_34, &parse_tree__write_deps_file__OrdMessage_17);
              }
#line 2272 "write_deps_file.m"
              {
#line 2272 "write_deps_file.m"
                libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__OrdMessage_17);
#line 2272 "write_deps_file.m"
                return;
              }
#line 2266 "write_deps_file.m"
            }
#line 2265 "write_deps_file.m"
          else
#line 2260 "write_deps_file.m"
            {
#line 2260 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__OrdStream_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OrdResult_13, (MR_Integer) 0)));
#line 2260 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_43_43;

#line 2262 "write_deps_file.m"
              {
#line 2262 "write_deps_file.m"
                parse_tree__write_deps_file__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2262 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_43_43, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[0]));
#line 2262 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_43_43, 1) = ((MR_Box) (parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1));
#line 2262 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2262 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_43_43, 3) = ((MR_Box) (parse_tree__write_deps_file__OrdStream_14));
#line 2262 "write_deps_file.m"
              }
#line 2261 "write_deps_file.m"
              {
#line 2261 "write_deps_file.m"
                mercury__io__write_list_6_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], parse_tree__write_deps_file__OrdStream_14, parse_tree__write_deps_file__DepsOrdering_8, (MR_String) "\n\n", parse_tree__write_deps_file__V_43_43);
              }
#line 2263 "write_deps_file.m"
              {
#line 2263 "write_deps_file.m"
                mercury__io__close_output_3_p_0(parse_tree__write_deps_file__OrdStream_14);
              }
#line 2264 "write_deps_file.m"
              {
#line 2264 "write_deps_file.m"
                libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) " done.\n");
#line 2264 "write_deps_file.m"
                return;
              }
#line 2260 "write_deps_file.m"
            }
#line 2252 "write_deps_file.m"
        }
#line 2274 "write_deps_file.m"
        break;
#line 2274 "write_deps_file.m"
    }
#line 2248 "write_deps_file.m"
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
#line 1076 "write_deps_file.m"
  {
#line 1076 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1076 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_12;
#line 1076 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DepFileName_13;
#line 1076 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DepResult_14;

#line 1077 "write_deps_file.m"
    {
#line 1077 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 45, &parse_tree__write_deps_file__Verbose_12);
    }
#line 1078 "write_deps_file.m"
    {
#line 1078 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, (MR_String) ".dep", (MR_Integer) 0, &parse_tree__write_deps_file__DepFileName_13);
    }
#line 1080 "write_deps_file.m"
    {
#line 1080 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    }
#line 1081 "write_deps_file.m"
    {
#line 1081 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, parse_tree__write_deps_file__DepFileName_13);
    }
#line 1082 "write_deps_file.m"
    {
#line 1082 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "\'...\n");
    }
#line 1083 "write_deps_file.m"
    {
#line 1083 "write_deps_file.m"
      mercury__io__open_output_4_p_0(parse_tree__write_deps_file__DepFileName_13, &parse_tree__write_deps_file__DepResult_14);
    }
#line 1090 "write_deps_file.m"
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__DepResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 1091 "write_deps_file.m"
      {
#line 1091 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DepResult_14, (MR_Integer) 0)));
#line 1091 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IOErrorMessage_17;
#line 1091 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DepMessage_18;
#line 1091 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_34_34;
#line 1091 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_36_36;
#line 1091 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_37_37;
#line 1091 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_39_39;

#line 1092 "write_deps_file.m"
        {
#line 1092 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
        }
#line 1093 "write_deps_file.m"
        {
#line 1093 "write_deps_file.m"
          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
        }
#line 1094 "write_deps_file.m"
        {
#line 1094 "write_deps_file.m"
          mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_16, &parse_tree__write_deps_file__IOErrorMessage_17);
        }
#line 1096 "write_deps_file.m"
        {
#line 1096 "write_deps_file.m"
          parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1096 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_17));
#line 1096 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1096 "write_deps_file.m"
        }
#line 1096 "write_deps_file.m"
        {
#line 1096 "write_deps_file.m"
          parse_tree__write_deps_file__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1096 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 1096 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 1096 "write_deps_file.m"
        }
#line 1095 "write_deps_file.m"
        {
#line 1095 "write_deps_file.m"
          parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1095 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) (parse_tree__write_deps_file__DepFileName_13));
#line 1095 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_37_37));
#line 1095 "write_deps_file.m"
        }
#line 1095 "write_deps_file.m"
        {
#line 1095 "write_deps_file.m"
          parse_tree__write_deps_file__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1095 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 1095 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 1095 "write_deps_file.m"
        }
#line 1095 "write_deps_file.m"
        {
#line 1095 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_34_34, &parse_tree__write_deps_file__DepMessage_18);
        }
#line 1097 "write_deps_file.m"
        {
#line 1097 "write_deps_file.m"
          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__DepMessage_18);
#line 1097 "write_deps_file.m"
          return;
        }
#line 1091 "write_deps_file.m"
      }
#line 1090 "write_deps_file.m"
    else
#line 1085 "write_deps_file.m"
      {
#line 1085 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__DepStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__DepResult_14, (MR_Integer) 0)));

#line 1086 "write_deps_file.m"
        {
#line 1086 "write_deps_file.m"
          parse_tree__write_deps_file__generate_dep_file_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SourceFileName_8, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__DepsMap_10, parse_tree__write_deps_file__DepStream_15);
        }
#line 1088 "write_deps_file.m"
        {
#line 1088 "write_deps_file.m"
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DepStream_15);
        }
#line 1089 "write_deps_file.m"
        {
#line 1089 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% done.\n");
#line 1089 "write_deps_file.m"
          return;
        }
#line 1085 "write_deps_file.m"
      }
#line 1076 "write_deps_file.m"
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
#line 1049 "write_deps_file.m"
  {
#line 1049 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1049 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_12;
#line 1049 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DvFileName_13;
#line 1049 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DvResult_14;

#line 1050 "write_deps_file.m"
    {
#line 1050 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 45, &parse_tree__write_deps_file__Verbose_12);
    }
#line 1051 "write_deps_file.m"
    {
#line 1051 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, (MR_String) ".dv", (MR_Integer) 0, &parse_tree__write_deps_file__DvFileName_13);
    }
#line 1053 "write_deps_file.m"
    {
#line 1053 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    }
#line 1054 "write_deps_file.m"
    {
#line 1054 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, parse_tree__write_deps_file__DvFileName_13);
    }
#line 1055 "write_deps_file.m"
    {
#line 1055 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "\'...\n");
    }
#line 1056 "write_deps_file.m"
    {
#line 1056 "write_deps_file.m"
      mercury__io__open_output_4_p_0(parse_tree__write_deps_file__DvFileName_13, &parse_tree__write_deps_file__DvResult_14);
    }
#line 1063 "write_deps_file.m"
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__DvResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 1064 "write_deps_file.m"
      {
#line 1064 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DvResult_14, (MR_Integer) 0)));
#line 1064 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IOErrorMessage_17;
#line 1064 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DvMessage_18;
#line 1064 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_34_34;
#line 1064 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_36_36;
#line 1064 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_37_37;
#line 1064 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_39_39;

#line 1065 "write_deps_file.m"
        {
#line 1065 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
        }
#line 1066 "write_deps_file.m"
        {
#line 1066 "write_deps_file.m"
          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
        }
#line 1067 "write_deps_file.m"
        {
#line 1067 "write_deps_file.m"
          mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_16, &parse_tree__write_deps_file__IOErrorMessage_17);
        }
#line 1069 "write_deps_file.m"
        {
#line 1069 "write_deps_file.m"
          parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_17));
#line 1069 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1069 "write_deps_file.m"
        }
#line 1069 "write_deps_file.m"
        {
#line 1069 "write_deps_file.m"
          parse_tree__write_deps_file__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 1069 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 1069 "write_deps_file.m"
        }
#line 1068 "write_deps_file.m"
        {
#line 1068 "write_deps_file.m"
          parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) (parse_tree__write_deps_file__DvFileName_13));
#line 1068 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_37_37));
#line 1068 "write_deps_file.m"
        }
#line 1068 "write_deps_file.m"
        {
#line 1068 "write_deps_file.m"
          parse_tree__write_deps_file__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1068 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 1068 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 1068 "write_deps_file.m"
        }
#line 1068 "write_deps_file.m"
        {
#line 1068 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_34_34, &parse_tree__write_deps_file__DvMessage_18);
        }
#line 1070 "write_deps_file.m"
        {
#line 1070 "write_deps_file.m"
          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__DvMessage_18);
#line 1070 "write_deps_file.m"
          return;
        }
#line 1064 "write_deps_file.m"
      }
#line 1063 "write_deps_file.m"
    else
#line 1058 "write_deps_file.m"
      {
#line 1058 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__DvStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__DvResult_14, (MR_Integer) 0)));

#line 1059 "write_deps_file.m"
        {
#line 1059 "write_deps_file.m"
          parse_tree__write_deps_file__generate_dv_file_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SourceFileName_8, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__DepsMap_10, parse_tree__write_deps_file__DvStream_15);
        }
#line 1061 "write_deps_file.m"
        {
#line 1061 "write_deps_file.m"
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DvStream_15);
        }
#line 1062 "write_deps_file.m"
        {
#line 1062 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% done.\n");
#line 1062 "write_deps_file.m"
          return;
        }
#line 1058 "write_deps_file.m"
      }
#line 1049 "write_deps_file.m"
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
#line 942 "write_deps_file.m"
  {
#line 942 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 942 "write_deps_file.m"
    {
#line 942 "write_deps_file.m"
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__HeadVar__2_2, parse_tree__write_deps_file__IntDepsGraph_3, parse_tree__write_deps_file__ImpDepsGraph_4, parse_tree__write_deps_file__IndirectDepsGraph_5, parse_tree__write_deps_file__IndirectOptDepsGraph_6, parse_tree__write_deps_file__TransOptOrder_7);
#line 942 "write_deps_file.m"
      return;
    }
#line 942 "write_deps_file.m"
  }
#line 59 "write_deps_file.m"
}

#line 683 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_6(
#line 683 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 683 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 683 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 683 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 683 "write_deps_file.m"
{
#line 683 "write_deps_file.m"
  {
#line 683 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 683 "write_deps_file.m"
    {
#line 683 "write_deps_file.m"
      parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
#line 683 "write_deps_file.m"
      return;
    }
#line 683 "write_deps_file.m"
  }
#line 683 "write_deps_file.m"
}

#line 620 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_5(
#line 620 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 620 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 620 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 620 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 620 "write_deps_file.m"
{
#line 620 "write_deps_file.m"
  {
#line 620 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 620 "write_deps_file.m"
    {
#line 620 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__620__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
#line 620 "write_deps_file.m"
      return;
    }
#line 620 "write_deps_file.m"
  }
#line 620 "write_deps_file.m"
}

#line 586 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_4(
#line 586 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 586 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 586 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 586 "write_deps_file.m"
{
#line 586 "write_deps_file.m"
  {
#line 586 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 586 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 586 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv3_HeadVar__3_579;

#line 586 "write_deps_file.m"
    {
#line 586 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__586__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv3_HeadVar__3_579);
    }
#line 586 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 586 "write_deps_file.m"
      {
#line 586 "write_deps_file.m"
        *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv3_HeadVar__3_579));
#line 586 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 586 "write_deps_file.m"
      }
#line 586 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 586 "write_deps_file.m"
  }
#line 586 "write_deps_file.m"
}

#line 398 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_3(
#line 398 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 398 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 398 "write_deps_file.m"
{
#line 398 "write_deps_file.m"
  {
#line 398 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 398 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 398 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv2_HeadVar__2_2;

#line 398 "write_deps_file.m"
    {
#line 398 "write_deps_file.m"
      parse_tree__write_deps_file__conv2_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 398 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv2_HeadVar__2_2));
#line 398 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 398 "write_deps_file.m"
  }
#line 398 "write_deps_file.m"
}

#line 377 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_2(
#line 377 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 377 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 377 "write_deps_file.m"
{
#line 377 "write_deps_file.m"
  {
#line 377 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 377 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 377 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv1_HeadVar__2_2;

#line 377 "write_deps_file.m"
    {
#line 377 "write_deps_file.m"
      parse_tree__write_deps_file__conv1_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 377 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_HeadVar__2_2));
#line 377 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 377 "write_deps_file.m"
  }
#line 377 "write_deps_file.m"
}

#line 290 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_1(
#line 290 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 290 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 290 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 290 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 290 "write_deps_file.m"
{
#line 290 "write_deps_file.m"
  {
#line 290 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 290 "write_deps_file.m"
    {
#line 290 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__290__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
#line 290 "write_deps_file.m"
      return;
    }
#line 290 "write_deps_file.m"
  }
#line 290 "write_deps_file.m"
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
    MR_String parse_tree__write_deps_file__V_175_175;
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
      parse_tree__write_deps_file__V_175_175 = mercury__dir__dirname_1_f_0(parse_tree__write_deps_file__DependencyFileName_41);
    }
#line 160 "write_deps_file.m"
    {
#line 160 "write_deps_file.m"
      mercury__io__make_temp_5_p_0(parse_tree__write_deps_file__V_175_175, (MR_String) "tmp_d", &parse_tree__write_deps_file__TmpDependencyFileName_43);
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
        MR_Word parse_tree__write_deps_file__V_814_814;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_816_816;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_817_817;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_819_819;

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
          parse_tree__write_deps_file__V_819_819 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 174 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_819_819, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_46));
#line 174 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_819_819, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 174 "write_deps_file.m"
        }
#line 173 "write_deps_file.m"
        {
#line 173 "write_deps_file.m"
          parse_tree__write_deps_file__V_817_817 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_817_817, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 173 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_817_817, 1) = ((MR_Box) (parse_tree__write_deps_file__V_819_819));
#line 173 "write_deps_file.m"
        }
#line 173 "write_deps_file.m"
        {
#line 173 "write_deps_file.m"
          parse_tree__write_deps_file__V_816_816 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_816_816, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpDependencyFileName_43));
#line 173 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_816_816, 1) = ((MR_Box) (parse_tree__write_deps_file__V_817_817));
#line 173 "write_deps_file.m"
        }
#line 172 "write_deps_file.m"
        {
#line 172 "write_deps_file.m"
          parse_tree__write_deps_file__V_814_814 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 172 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_814_814, 0) = ((MR_Box) ((MR_String) "error opening temporary file \140"));
#line 172 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_814_814, 1) = ((MR_Box) (parse_tree__write_deps_file__V_816_816));
#line 172 "write_deps_file.m"
        }
#line 172 "write_deps_file.m"
        {
#line 172 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_814_814, &parse_tree__write_deps_file__Message_47);
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
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_844_844 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_845_845;
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
        MR_String parse_tree__write_deps_file__JavaDateFileName_67;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__PicObjFileName_68;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Int0FileName_69;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ForeignIncludeFiles_75;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__UseOptFiles_78;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Intermod_79;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IntermodDirs_80;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__HighLevelCode_87;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__CompilationTarget_88;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__CFileName_89;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__HeaderFileName_90;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__HeaderFileName2_91;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__JavaFileName_92;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ModuleDepFileName_93;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DateFileName_94;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Date0FileName_95;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__HaveMap_96;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ModuleArg_97;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Target_98;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ClassFileName_99;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__BeamFileName_100;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ForeignImportModules_102;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ForeignImports_144;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ForeignImportedModuleNames_147;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IntFileName_152;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Int2FileName_153;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Int3FileName_154;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__OptFileName_155;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__TransOptFileName_156;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Date3FileName_157;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__UseSubdirs_158;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Result3_159;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_266_266;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_269_269;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_270_270;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_272_272;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_273_273;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_275_275;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_276_276;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_278_278;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_279_279;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_281_281;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_282_282;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_284_284;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_285_285;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_287_287;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_289_289;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_292_292;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_461_461;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_464_464;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_465_465;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_467_467;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_468_468;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_470_470;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_477_477;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_480_480;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_483_483;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_485_485;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_486_486;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_488_488;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_489_489;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_491_491;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_493_493;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_494_494;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_496_496;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_508_508;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_511_511;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_512_512;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_514_514;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_529_529;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_577_577;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_618_618;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_621_621;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_622_622;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_624_624;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_625_625;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_627_627;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_629_629;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_630_630;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_632_632;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_633_633;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_635_635;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_637_637;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_638_638;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_640_640;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_641_641;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_643_643;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_645_645;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_646_646;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_648_648;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_649_649;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_651_651;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_653_653;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_654_654;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_656_656;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_657_657;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_659_659;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_661_661;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_662_662;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_664_664;
#line 234 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__SourceFileBase_60;
#line 690 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_868_868;

#line 178 "write_deps_file.m"
        {
#line 178 "write_deps_file.m"
          mercury__set__union_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, parse_tree__write_deps_file__IntDeps_17, parse_tree__write_deps_file__ImpDeps_18, &parse_tree__write_deps_file__LongDeps0_49);
        }
#line 180 "write_deps_file.m"
        {
#line 180 "write_deps_file.m"
          mercury__set__delete_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, ((MR_Box) (parse_tree__write_deps_file__ModuleName_14)), parse_tree__write_deps_file__LongDeps0_49, &parse_tree__write_deps_file__LongDeps_51);
        }
#line 181 "write_deps_file.m"
        {
#line 181 "write_deps_file.m"
          mercury__set__difference_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, parse_tree__write_deps_file__IndirectDeps_19, parse_tree__write_deps_file__LongDeps_51, &parse_tree__write_deps_file__ShortDeps1_52);
        }
#line 182 "write_deps_file.m"
        {
#line 182 "write_deps_file.m"
          mercury__set__delete_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, ((MR_Box) (parse_tree__write_deps_file__ModuleName_14)), parse_tree__write_deps_file__ShortDeps1_52, &parse_tree__write_deps_file__ShortDeps_53);
        }
#line 13993 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_845_845 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 183 "write_deps_file.m"
        {
#line 183 "write_deps_file.m"
          mercury__list__sort_and_remove_dups_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_845_845, parse_tree__write_deps_file__FactDeps0_23, &parse_tree__write_deps_file__FactDeps_54);
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
            MR_Word parse_tree__write_deps_file__V_185_185;
#line 186 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_186_186;

#line 187 "write_deps_file.m"
            {
#line 187 "write_deps_file.m"
              parse_tree__write_deps_file__V_185_185 = mercury__set__list_to_set_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, parse_tree__write_deps_file__TransOptDeps0_55);
            }
#line 187 "write_deps_file.m"
            {
#line 187 "write_deps_file.m"
              mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, parse_tree__write_deps_file__V_185_185, parse_tree__write_deps_file__LongDeps_51, &parse_tree__write_deps_file__TransOptDateDeps_56);
            }
#line 192 "write_deps_file.m"
            {
#line 192 "write_deps_file.m"
              parse_tree__write_deps_file__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_42));
#line 192 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[98])));
#line 192 "write_deps_file.m"
            }
#line 192 "write_deps_file.m"
            {
#line 192 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_186_186);
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
            MR_Word parse_tree__write_deps_file__V_193_193;
#line 200 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_196_196;

#line 202 "write_deps_file.m"
            {
#line 202 "write_deps_file.m"
              parse_tree__write_deps_file__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_196_196, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 202 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_196_196, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[99])));
#line 202 "write_deps_file.m"
            }
#line 202 "write_deps_file.m"
            {
#line 202 "write_deps_file.m"
              parse_tree__write_deps_file__V_193_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_193_193, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 202 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_193_193, 1) = ((MR_Box) (parse_tree__write_deps_file__V_196_196));
#line 202 "write_deps_file.m"
            }
#line 201 "write_deps_file.m"
            {
#line 201 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_193_193);
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
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 118, &parse_tree__write_deps_file__AssumeGmake_59);
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
                  MR_Word parse_tree__write_deps_file__V_204_204;
#line 217 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_211_211;
#line 217 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_214_214;

#line 219 "write_deps_file.m"
                  {
#line 219 "write_deps_file.m"
                    parse_tree__write_deps_file__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_204_204, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 219 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[100])));
#line 219 "write_deps_file.m"
                  }
#line 218 "write_deps_file.m"
                  {
#line 218 "write_deps_file.m"
                    mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_204_204);
                  }
#line 220 "write_deps_file.m"
                  {
#line 220 "write_deps_file.m"
                    parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".c", parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__FactDeps_54);
                  }
#line 222 "write_deps_file.m"
                  {
#line 222 "write_deps_file.m"
                    parse_tree__write_deps_file__V_214_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_214_214, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 222 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_214_214, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[101])));
#line 222 "write_deps_file.m"
                  }
#line 222 "write_deps_file.m"
                  {
#line 222 "write_deps_file.m"
                    parse_tree__write_deps_file__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_211_211, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 222 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_211_211, 1) = ((MR_Box) (parse_tree__write_deps_file__V_214_214));
#line 222 "write_deps_file.m"
                  }
#line 222 "write_deps_file.m"
                  {
#line 222 "write_deps_file.m"
                    mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_211_211);
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
                  MR_Word parse_tree__write_deps_file__V_221_221;
#line 207 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_224_224;
#line 207 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_225_225;
#line 207 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_227_227;
#line 207 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_228_228;
#line 207 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_230_230;
#line 207 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_231_231;
#line 207 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_233_233;

#line 213 "write_deps_file.m"
                  {
#line 213 "write_deps_file.m"
                    parse_tree__write_deps_file__V_233_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_233_233, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 213 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_233_233, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[102])));
#line 213 "write_deps_file.m"
                  }
#line 213 "write_deps_file.m"
                  {
#line 213 "write_deps_file.m"
                    parse_tree__write_deps_file__V_231_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 0) = ((MR_Box) ((MR_String) ".fact_tables.cs = \044("));
#line 213 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 1) = ((MR_Box) (parse_tree__write_deps_file__V_233_233));
#line 213 "write_deps_file.m"
                  }
#line 212 "write_deps_file.m"
                  {
#line 212 "write_deps_file.m"
                    parse_tree__write_deps_file__V_230_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 212 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 1) = ((MR_Box) (parse_tree__write_deps_file__V_231_231));
#line 212 "write_deps_file.m"
                  }
#line 211 "write_deps_file.m"
                  {
#line 211 "write_deps_file.m"
                    parse_tree__write_deps_file__V_228_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_228_228, 0) = ((MR_Box) ((MR_String) ".fact_tables:%=\044(os_subdir)%.\044O)\n\n"));
#line 211 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_228_228, 1) = ((MR_Box) (parse_tree__write_deps_file__V_230_230));
#line 211 "write_deps_file.m"
                  }
#line 210 "write_deps_file.m"
                  {
#line 210 "write_deps_file.m"
                    parse_tree__write_deps_file__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_227_227, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 210 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_227_227, 1) = ((MR_Box) (parse_tree__write_deps_file__V_228_228));
#line 210 "write_deps_file.m"
                  }
#line 210 "write_deps_file.m"
                  {
#line 210 "write_deps_file.m"
                    parse_tree__write_deps_file__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 0) = ((MR_Box) ((MR_String) ".fact_tables.os = \044("));
#line 210 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 210 "write_deps_file.m"
                  }
#line 209 "write_deps_file.m"
                  {
#line 209 "write_deps_file.m"
                    parse_tree__write_deps_file__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 209 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 1) = ((MR_Box) (parse_tree__write_deps_file__V_225_225));
#line 209 "write_deps_file.m"
                  }
#line 209 "write_deps_file.m"
                  {
#line 209 "write_deps_file.m"
                    parse_tree__write_deps_file__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 209 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 1) = ((MR_Box) (parse_tree__write_deps_file__V_224_224));
#line 209 "write_deps_file.m"
                  }
#line 208 "write_deps_file.m"
                  {
#line 208 "write_deps_file.m"
                    mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_221_221);
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
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".java_date", (MR_Integer) 1, &parse_tree__write_deps_file__JavaDateFileName_67);
        }
#line 251 "write_deps_file.m"
        {
#line 251 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".pic_o", (MR_Integer) 1, &parse_tree__write_deps_file__PicObjFileName_68);
        }
#line 253 "write_deps_file.m"
        {
#line 253 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int0", (MR_Integer) 1, &parse_tree__write_deps_file__Int0FileName_69);
        }
#line 263 "write_deps_file.m"
        {
#line 263 "write_deps_file.m"
          parse_tree__write_deps_file__V_287_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_287_287, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_67));
#line 263 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_287_287, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 263 "write_deps_file.m"
        }
#line 261 "write_deps_file.m"
        {
#line 261 "write_deps_file.m"
          parse_tree__write_deps_file__V_285_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 0) = ((MR_Box) ((MR_String) " "));
#line 261 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 1) = ((MR_Box) (parse_tree__write_deps_file__V_287_287));
#line 261 "write_deps_file.m"
        }
#line 261 "write_deps_file.m"
        {
#line 261 "write_deps_file.m"
          parse_tree__write_deps_file__V_284_284 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_284_284, 0) = ((MR_Box) (parse_tree__write_deps_file__PicAsmDateFileName_65));
#line 261 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_284_284, 1) = ((MR_Box) (parse_tree__write_deps_file__V_285_285));
#line 261 "write_deps_file.m"
        }
#line 260 "write_deps_file.m"
        {
#line 260 "write_deps_file.m"
          parse_tree__write_deps_file__V_282_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_282_282, 0) = ((MR_Box) ((MR_String) " "));
#line 260 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_282_282, 1) = ((MR_Box) (parse_tree__write_deps_file__V_284_284));
#line 260 "write_deps_file.m"
        }
#line 260 "write_deps_file.m"
        {
#line 260 "write_deps_file.m"
          parse_tree__write_deps_file__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 260 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 0) = ((MR_Box) (parse_tree__write_deps_file__AsmDateFileName_64));
#line 260 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 1) = ((MR_Box) (parse_tree__write_deps_file__V_282_282));
#line 260 "write_deps_file.m"
        }
#line 259 "write_deps_file.m"
        {
#line 259 "write_deps_file.m"
          parse_tree__write_deps_file__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 0) = ((MR_Box) ((MR_String) " "));
#line 259 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 1) = ((MR_Box) (parse_tree__write_deps_file__V_281_281));
#line 259 "write_deps_file.m"
        }
#line 259 "write_deps_file.m"
        {
#line 259 "write_deps_file.m"
          parse_tree__write_deps_file__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_63));
#line 259 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 1) = ((MR_Box) (parse_tree__write_deps_file__V_279_279));
#line 259 "write_deps_file.m"
        }
#line 258 "write_deps_file.m"
        {
#line 258 "write_deps_file.m"
          parse_tree__write_deps_file__V_276_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 0) = ((MR_Box) ((MR_String) " "));
#line 258 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 1) = ((MR_Box) (parse_tree__write_deps_file__V_278_278));
#line 258 "write_deps_file.m"
        }
#line 258 "write_deps_file.m"
        {
#line 258 "write_deps_file.m"
          parse_tree__write_deps_file__V_275_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrFileName_61));
#line 258 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 1) = ((MR_Box) (parse_tree__write_deps_file__V_276_276));
#line 258 "write_deps_file.m"
        }
#line 257 "write_deps_file.m"
        {
#line 257 "write_deps_file.m"
          parse_tree__write_deps_file__V_273_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 0) = ((MR_Box) ((MR_String) " "));
#line 257 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 1) = ((MR_Box) (parse_tree__write_deps_file__V_275_275));
#line 257 "write_deps_file.m"
        }
#line 257 "write_deps_file.m"
        {
#line 257 "write_deps_file.m"
          parse_tree__write_deps_file__V_272_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_42));
#line 257 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 1) = ((MR_Box) (parse_tree__write_deps_file__V_273_273));
#line 257 "write_deps_file.m"
        }
#line 256 "write_deps_file.m"
        {
#line 256 "write_deps_file.m"
          parse_tree__write_deps_file__V_270_270 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_270_270, 0) = ((MR_Box) ((MR_String) " "));
#line 256 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_270_270, 1) = ((MR_Box) (parse_tree__write_deps_file__V_272_272));
#line 256 "write_deps_file.m"
        }
#line 256 "write_deps_file.m"
        {
#line 256 "write_deps_file.m"
          parse_tree__write_deps_file__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_62));
#line 256 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 1) = ((MR_Box) (parse_tree__write_deps_file__V_270_270));
#line 256 "write_deps_file.m"
        }
#line 255 "write_deps_file.m"
        {
#line 255 "write_deps_file.m"
          parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 255 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__V_269_269));
#line 255 "write_deps_file.m"
        }
#line 255 "write_deps_file.m"
        {
#line 255 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_266_266);
        }
#line 264 "write_deps_file.m"
        {
#line 264 "write_deps_file.m"
          parse_tree__write_deps_file__V_292_292 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_292_292, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 264 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_292_292, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 264 "write_deps_file.m"
        }
#line 264 "write_deps_file.m"
        {
#line 264 "write_deps_file.m"
          parse_tree__write_deps_file__V_289_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_289_289, 0) = ((MR_Box) ((MR_String) " : "));
#line 264 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_289_289, 1) = ((MR_Box) (parse_tree__write_deps_file__V_292_292));
#line 264 "write_deps_file.m"
        }
#line 264 "write_deps_file.m"
        {
#line 264 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_289_289);
        }
#line 267 "write_deps_file.m"
        {
#line 267 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, parse_tree__write_deps_file__InclDeps_21);
        }
#line 269 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 269 "write_deps_file.m"
          {
#line 269 "write_deps_file.m"
          }
#line 269 "write_deps_file.m"
        else
#line 270 "write_deps_file.m"
          {
#line 270 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_294_294;
#line 270 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_297_297;

#line 270 "write_deps_file.m"
            {
#line 270 "write_deps_file.m"
              parse_tree__write_deps_file__V_297_297 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_297_297, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0FileName_69));
#line 270 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_297_297, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "write_deps_file.m"
            }
#line 270 "write_deps_file.m"
            {
#line 270 "write_deps_file.m"
              parse_tree__write_deps_file__V_294_294 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_294_294, 0) = ((MR_Box) ((MR_String) " "));
#line 270 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_294_294, 1) = ((MR_Box) (parse_tree__write_deps_file__V_297_297));
#line 270 "write_deps_file.m"
            }
#line 270 "write_deps_file.m"
            {
#line 270 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_294_294);
            }
#line 270 "write_deps_file.m"
          }
#line 272 "write_deps_file.m"
        {
#line 272 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int0", parse_tree__write_deps_file__ParentDeps_16);
        }
#line 273 "write_deps_file.m"
        {
#line 273 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int", parse_tree__write_deps_file__LongDeps_51);
        }
#line 274 "write_deps_file.m"
        {
#line 274 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int2", parse_tree__write_deps_file__ShortDeps_53);
        }
#line 287 "write_deps_file.m"
        {
#line 287 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, parse_tree__write_deps_file__NestedDeps_22);
        }
#line 289 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 289 "write_deps_file.m"
          {
#line 289 "write_deps_file.m"
          }
#line 289 "write_deps_file.m"
        else
#line 296 "write_deps_file.m"
          {
#line 296 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Write_71;
#line 297 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_334_334;

#line 290 "write_deps_file.m"
            {
#line 290 "write_deps_file.m"
              parse_tree__write_deps_file__Write_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 290 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_71, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[0]));
#line 290 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_71, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_1));
#line 290 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 290 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_71, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 290 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_71, 4) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 290 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_71, 5) = ((MR_Box) (parse_tree__write_deps_file__NestedDeps_22));
#line 290 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_71, 6) = ((MR_Box) (parse_tree__write_deps_file__DepStream_48));
#line 290 "write_deps_file.m"
            }
#line 297 "write_deps_file.m"
            {
#line 297 "write_deps_file.m"
              mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_845_845, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Write_71, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[11]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_334_334);
            }
#line 296 "write_deps_file.m"
          }
#line 300 "write_deps_file.m"
        {
#line 300 "write_deps_file.m"
          parse_tree__write_deps_file__ForeignIncludeFiles_75 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, parse_tree__write_deps_file__ForeignIncludeFilesCord_25);
        }
#line 303 "write_deps_file.m"
        {
#line 303 "write_deps_file.m"
          parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__SourceFileName_12, parse_tree__write_deps_file__ForeignIncludeFiles_75);
        }
#line 316 "write_deps_file.m"
        if ((parse_tree__write_deps_file__FactDeps_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 317 "write_deps_file.m"
          {
#line 317 "write_deps_file.m"
          }
#line 316 "write_deps_file.m"
        else
#line 307 "write_deps_file.m"
          {
#line 307 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_336_336;
#line 307 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_339_339;
#line 307 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_340_340;
#line 307 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_342_342;
#line 307 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_344_344;
#line 307 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_345_345;
#line 307 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_347_347;
#line 307 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_348_348;
#line 307 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_350_350;
#line 307 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_351_351;
#line 307 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_353_353;
#line 307 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_355_355;
#line 307 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_356_356;
#line 307 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_358_358;

#line 314 "write_deps_file.m"
            {
#line 314 "write_deps_file.m"
              parse_tree__write_deps_file__V_358_358 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 314 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_358_358, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_66));
#line 314 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_358_358, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[96])));
#line 314 "write_deps_file.m"
            }
#line 313 "write_deps_file.m"
            {
#line 313 "write_deps_file.m"
              parse_tree__write_deps_file__V_356_356 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_356_356, 0) = ((MR_Box) ((MR_String) ".fact_tables.cs) : "));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_356_356, 1) = ((MR_Box) (parse_tree__write_deps_file__V_358_358));
#line 313 "write_deps_file.m"
            }
#line 313 "write_deps_file.m"
            {
#line 313 "write_deps_file.m"
              parse_tree__write_deps_file__V_355_355 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_355_355, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_355_355, 1) = ((MR_Box) (parse_tree__write_deps_file__V_356_356));
#line 313 "write_deps_file.m"
            }
#line 313 "write_deps_file.m"
            {
#line 313 "write_deps_file.m"
              parse_tree__write_deps_file__V_353_353 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_353_353, 0) = ((MR_Box) ((MR_String) "\044("));
#line 313 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_353_353, 1) = ((MR_Box) (parse_tree__write_deps_file__V_355_355));
#line 313 "write_deps_file.m"
            }
#line 312 "write_deps_file.m"
            {
#line 312 "write_deps_file.m"
              parse_tree__write_deps_file__V_351_351 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_351_351, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 312 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_351_351, 1) = ((MR_Box) (parse_tree__write_deps_file__V_353_353));
#line 312 "write_deps_file.m"
            }
#line 312 "write_deps_file.m"
            {
#line 312 "write_deps_file.m"
              parse_tree__write_deps_file__V_350_350 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_350_350, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 312 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_350_350, 1) = ((MR_Box) (parse_tree__write_deps_file__V_351_351));
#line 312 "write_deps_file.m"
            }
#line 311 "write_deps_file.m"
            {
#line 311 "write_deps_file.m"
              parse_tree__write_deps_file__V_348_348 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_348_348, 0) = ((MR_Box) ((MR_String) ".fact_tables) "));
#line 311 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_348_348, 1) = ((MR_Box) (parse_tree__write_deps_file__V_350_350));
#line 311 "write_deps_file.m"
            }
#line 311 "write_deps_file.m"
            {
#line 311 "write_deps_file.m"
              parse_tree__write_deps_file__V_347_347 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 311 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_347_347, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 311 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_347_347, 1) = ((MR_Box) (parse_tree__write_deps_file__V_348_348));
#line 311 "write_deps_file.m"
            }
#line 310 "write_deps_file.m"
            {
#line 310 "write_deps_file.m"
              parse_tree__write_deps_file__V_345_345 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_345_345, 0) = ((MR_Box) ((MR_String) ".fact_tables.os) : \044("));
#line 310 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_345_345, 1) = ((MR_Box) (parse_tree__write_deps_file__V_347_347));
#line 310 "write_deps_file.m"
            }
#line 310 "write_deps_file.m"
            {
#line 310 "write_deps_file.m"
              parse_tree__write_deps_file__V_344_344 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_344_344, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 310 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_344_344, 1) = ((MR_Box) (parse_tree__write_deps_file__V_345_345));
#line 310 "write_deps_file.m"
            }
#line 310 "write_deps_file.m"
            {
#line 310 "write_deps_file.m"
              parse_tree__write_deps_file__V_342_342 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_342_342, 0) = ((MR_Box) ((MR_String) "\044("));
#line 310 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_342_342, 1) = ((MR_Box) (parse_tree__write_deps_file__V_344_344));
#line 310 "write_deps_file.m"
            }
#line 309 "write_deps_file.m"
            {
#line 309 "write_deps_file.m"
              parse_tree__write_deps_file__V_340_340 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_340_340, 0) = ((MR_Box) ((MR_String) ".fact_tables)\n\n"));
#line 309 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_340_340, 1) = ((MR_Box) (parse_tree__write_deps_file__V_342_342));
#line 309 "write_deps_file.m"
            }
#line 309 "write_deps_file.m"
            {
#line 309 "write_deps_file.m"
              parse_tree__write_deps_file__V_339_339 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_339_339, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 309 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_339_339, 1) = ((MR_Box) (parse_tree__write_deps_file__V_340_340));
#line 309 "write_deps_file.m"
            }
#line 309 "write_deps_file.m"
            {
#line 309 "write_deps_file.m"
              parse_tree__write_deps_file__V_336_336 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_336_336, 0) = ((MR_Box) ((MR_String) " \\\n\t\044("));
#line 309 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_336_336, 1) = ((MR_Box) (parse_tree__write_deps_file__V_339_339));
#line 309 "write_deps_file.m"
            }
#line 308 "write_deps_file.m"
            {
#line 308 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_336_336);
            }
#line 307 "write_deps_file.m"
          }
#line 320 "write_deps_file.m"
        {
#line 320 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 323, &parse_tree__write_deps_file__UseOptFiles_78);
        }
#line 321 "write_deps_file.m"
        {
#line 321 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 321, &parse_tree__write_deps_file__Intermod_79);
        }
#line 323 "write_deps_file.m"
        {
#line 323 "write_deps_file.m"
          libs__globals__lookup_accumulating_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 636, &parse_tree__write_deps_file__IntermodDirs_80);
        }
#line 334 "write_deps_file.m"
#line 334 "write_deps_file.m"
        switch (parse_tree__write_deps_file__Intermod_79) {
#line 334 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 334 "write_deps_file.m"
          case (MR_Integer) 0:
#line 335 "write_deps_file.m"
            {
#line 335 "write_deps_file.m"
            }
#line 334 "write_deps_file.m"
            break;
#line 334 "write_deps_file.m"
          case (MR_Integer) 1:
#line 330 "write_deps_file.m"
            {
#line 330 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_365_365;
#line 330 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_368_368;
#line 330 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_373_373;

#line 331 "write_deps_file.m"
              {
#line 331 "write_deps_file.m"
                parse_tree__write_deps_file__V_368_368 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_368_368, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_66));
#line 331 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_368_368, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103])));
#line 331 "write_deps_file.m"
              }
#line 331 "write_deps_file.m"
              {
#line 331 "write_deps_file.m"
                parse_tree__write_deps_file__V_365_365 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_365_365, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 331 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_365_365, 1) = ((MR_Box) (parse_tree__write_deps_file__V_368_368));
#line 331 "write_deps_file.m"
              }
#line 331 "write_deps_file.m"
              {
#line 331 "write_deps_file.m"
                mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_365_365);
              }
#line 333 "write_deps_file.m"
              {
#line 333 "write_deps_file.m"
                parse_tree__write_deps_file__V_373_373 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, parse_tree__write_deps_file__AllDeps_9);
              }
#line 332 "write_deps_file.m"
              {
#line 332 "write_deps_file.m"
                parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".mh", parse_tree__write_deps_file__V_373_373);
              }
#line 330 "write_deps_file.m"
            }
#line 334 "write_deps_file.m"
            break;
#line 334 "write_deps_file.m"
        }
#line 338 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Intermod_79 == (MR_Integer) 1);
#line 339 "write_deps_file.m"
        if (!(parse_tree__write_deps_file__succeeded))
#line 339 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__UseOptFiles_78 == (MR_Integer) 1);
#line 404 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 350 "write_deps_file.m"
          {
#line 350 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOpt_81;
#line 350 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__UseTransOpt_82;
#line 350 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_375_375;
#line 350 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_378_378;
#line 350 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_379_379;
#line 350 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_381_381;
#line 350 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_382_382;
#line 350 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_384_384;
#line 350 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_385_385;
#line 350 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_387_387;
#line 350 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_388_388;
#line 350 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_390_390;
#line 350 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_391_391;
#line 350 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_393_393;

#line 349 "write_deps_file.m"
            {
#line 349 "write_deps_file.m"
              parse_tree__write_deps_file__V_393_393 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_393_393, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_67));
#line 349 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_393_393, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103])));
#line 349 "write_deps_file.m"
            }
#line 348 "write_deps_file.m"
            {
#line 348 "write_deps_file.m"
              parse_tree__write_deps_file__V_391_391 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_391_391, 0) = ((MR_Box) ((MR_String) " "));
#line 348 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_391_391, 1) = ((MR_Box) (parse_tree__write_deps_file__V_393_393));
#line 348 "write_deps_file.m"
            }
#line 348 "write_deps_file.m"
            {
#line 348 "write_deps_file.m"
              parse_tree__write_deps_file__V_390_390 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_390_390, 0) = ((MR_Box) (parse_tree__write_deps_file__PicAsmDateFileName_65));
#line 348 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_390_390, 1) = ((MR_Box) (parse_tree__write_deps_file__V_391_391));
#line 348 "write_deps_file.m"
            }
#line 347 "write_deps_file.m"
            {
#line 347 "write_deps_file.m"
              parse_tree__write_deps_file__V_388_388 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_388_388, 0) = ((MR_Box) ((MR_String) " "));
#line 347 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_388_388, 1) = ((MR_Box) (parse_tree__write_deps_file__V_390_390));
#line 347 "write_deps_file.m"
            }
#line 347 "write_deps_file.m"
            {
#line 347 "write_deps_file.m"
              parse_tree__write_deps_file__V_387_387 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_387_387, 0) = ((MR_Box) (parse_tree__write_deps_file__AsmDateFileName_64));
#line 347 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_387_387, 1) = ((MR_Box) (parse_tree__write_deps_file__V_388_388));
#line 347 "write_deps_file.m"
            }
#line 346 "write_deps_file.m"
            {
#line 346 "write_deps_file.m"
              parse_tree__write_deps_file__V_385_385 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_385_385, 0) = ((MR_Box) ((MR_String) " "));
#line 346 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_385_385, 1) = ((MR_Box) (parse_tree__write_deps_file__V_387_387));
#line 346 "write_deps_file.m"
            }
#line 346 "write_deps_file.m"
            {
#line 346 "write_deps_file.m"
              parse_tree__write_deps_file__V_384_384 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_384_384, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_63));
#line 346 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_384_384, 1) = ((MR_Box) (parse_tree__write_deps_file__V_385_385));
#line 346 "write_deps_file.m"
            }
#line 345 "write_deps_file.m"
            {
#line 345 "write_deps_file.m"
              parse_tree__write_deps_file__V_382_382 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_382_382, 0) = ((MR_Box) ((MR_String) " "));
#line 345 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_382_382, 1) = ((MR_Box) (parse_tree__write_deps_file__V_384_384));
#line 345 "write_deps_file.m"
            }
#line 345 "write_deps_file.m"
            {
#line 345 "write_deps_file.m"
              parse_tree__write_deps_file__V_381_381 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_381_381, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrFileName_61));
#line 345 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_381_381, 1) = ((MR_Box) (parse_tree__write_deps_file__V_382_382));
#line 345 "write_deps_file.m"
            }
#line 344 "write_deps_file.m"
            {
#line 344 "write_deps_file.m"
              parse_tree__write_deps_file__V_379_379 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_379_379, 0) = ((MR_Box) ((MR_String) " "));
#line 344 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_379_379, 1) = ((MR_Box) (parse_tree__write_deps_file__V_381_381));
#line 344 "write_deps_file.m"
            }
#line 344 "write_deps_file.m"
            {
#line 344 "write_deps_file.m"
              parse_tree__write_deps_file__V_378_378 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_378_378, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_42));
#line 344 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_378_378, 1) = ((MR_Box) (parse_tree__write_deps_file__V_379_379));
#line 344 "write_deps_file.m"
            }
#line 343 "write_deps_file.m"
            {
#line 343 "write_deps_file.m"
              parse_tree__write_deps_file__V_375_375 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_375_375, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 343 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_375_375, 1) = ((MR_Box) (parse_tree__write_deps_file__V_378_378));
#line 343 "write_deps_file.m"
            }
#line 342 "write_deps_file.m"
            {
#line 342 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_375_375);
            }
#line 362 "write_deps_file.m"
            {
#line 362 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 325, &parse_tree__write_deps_file__TransOpt_81);
            }
#line 364 "write_deps_file.m"
            {
#line 364 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 324, &parse_tree__write_deps_file__UseTransOpt_82);
            }
#line 368 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__TransOpt_81 == (MR_Integer) 1);
#line 369 "write_deps_file.m"
            if (!(parse_tree__write_deps_file__succeeded))
#line 369 "write_deps_file.m"
              parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__UseTransOpt_82 == (MR_Integer) 1);
#line 393 "write_deps_file.m"
            if (parse_tree__write_deps_file__succeeded)
#line 372 "write_deps_file.m"
              {
#line 372 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__BuildOptFiles_83;
#line 372 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptDeps_84;
#line 372 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__TransOptDeps_85;
#line 372 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptInt0Deps_86;
#line 372 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_399_399;
#line 372 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_401_401;
#line 372 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_402_402;
#line 372 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_408_408;

#line 372 "write_deps_file.m"
                {
#line 372 "write_deps_file.m"
                  mercury__bool__not_2_p_0(parse_tree__write_deps_file__UseTransOpt_82, &parse_tree__write_deps_file__BuildOptFiles_83);
                }
#line 374 "write_deps_file.m"
                {
#line 374 "write_deps_file.m"
                  parse_tree__write_deps_file__V_401_401 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, parse_tree__write_deps_file__LongDeps_51);
                }
#line 374 "write_deps_file.m"
                {
#line 374 "write_deps_file.m"
                  parse_tree__write_deps_file__V_399_399 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 374 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_399_399, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 374 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_399_399, 1) = ((MR_Box) (parse_tree__write_deps_file__V_401_401));
#line 374 "write_deps_file.m"
                }
#line 373 "write_deps_file.m"
                {
#line 373 "write_deps_file.m"
                  parse_tree__write_deps_file__get_both_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__BuildOptFiles_83, parse_tree__write_deps_file__IntermodDirs_80, parse_tree__write_deps_file__V_399_399, &parse_tree__write_deps_file__OptDeps_84, &parse_tree__write_deps_file__TransOptDeps_85);
                }
#line 377 "write_deps_file.m"
                {
#line 377 "write_deps_file.m"
                  parse_tree__write_deps_file__V_402_402 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[4], parse_tree__write_deps_file__OptDeps_84);
                }
#line 376 "write_deps_file.m"
                {
#line 376 "write_deps_file.m"
                  parse_tree__write_deps_file__OptInt0Deps_86 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, parse_tree__write_deps_file__V_402_402);
                }
#line 378 "write_deps_file.m"
                {
#line 378 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".opt", parse_tree__write_deps_file__OptDeps_84);
                }
#line 380 "write_deps_file.m"
                {
#line 380 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int0", parse_tree__write_deps_file__OptInt0Deps_86);
                }
#line 384 "write_deps_file.m"
                {
#line 384 "write_deps_file.m"
                  parse_tree__write_deps_file__V_408_408 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_408_408, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 384 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_408_408, 1) = ((MR_Box) (parse_tree__write_deps_file__V_381_381));
#line 384 "write_deps_file.m"
                }
#line 383 "write_deps_file.m"
                {
#line 383 "write_deps_file.m"
                  mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_408_408);
                }
#line 391 "write_deps_file.m"
                {
#line 391 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".trans_opt", parse_tree__write_deps_file__TransOptDeps_85);
                }
#line 372 "write_deps_file.m"
              }
#line 393 "write_deps_file.m"
            else
#line 394 "write_deps_file.m"
              {
#line 394 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_430_430;
#line 394 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_432_432;
#line 394 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_433_433;
#line 394 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__BuildOptFiles_825;
#line 394 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptDeps_826;
#line 394 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptInt0Deps_827;

#line 394 "write_deps_file.m"
                {
#line 394 "write_deps_file.m"
                  mercury__bool__not_2_p_0(parse_tree__write_deps_file__UseOptFiles_78, &parse_tree__write_deps_file__BuildOptFiles_825);
                }
#line 396 "write_deps_file.m"
                {
#line 396 "write_deps_file.m"
                  parse_tree__write_deps_file__V_432_432 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, parse_tree__write_deps_file__LongDeps_51);
                }
#line 396 "write_deps_file.m"
                {
#line 396 "write_deps_file.m"
                  parse_tree__write_deps_file__V_430_430 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_430_430, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 396 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_430_430, 1) = ((MR_Box) (parse_tree__write_deps_file__V_432_432));
#line 396 "write_deps_file.m"
                }
#line 395 "write_deps_file.m"
                {
#line 395 "write_deps_file.m"
                  parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__BuildOptFiles_825, parse_tree__write_deps_file__IntermodDirs_80, (MR_String) ".opt", parse_tree__write_deps_file__V_430_430, &parse_tree__write_deps_file__OptDeps_826);
                }
#line 398 "write_deps_file.m"
                {
#line 398 "write_deps_file.m"
                  parse_tree__write_deps_file__V_433_433 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[5], parse_tree__write_deps_file__OptDeps_826);
                }
#line 397 "write_deps_file.m"
                {
#line 397 "write_deps_file.m"
                  parse_tree__write_deps_file__OptInt0Deps_827 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, parse_tree__write_deps_file__V_433_433);
                }
#line 399 "write_deps_file.m"
                {
#line 399 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".opt", parse_tree__write_deps_file__OptDeps_826);
                }
#line 401 "write_deps_file.m"
                {
#line 401 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int0", parse_tree__write_deps_file__OptInt0Deps_827);
                }
#line 394 "write_deps_file.m"
              }
#line 350 "write_deps_file.m"
          }
#line 404 "write_deps_file.m"
        else
#line 404 "write_deps_file.m"
          {
#line 404 "write_deps_file.m"
          }
#line 408 "write_deps_file.m"
        {
#line 408 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 251, &parse_tree__write_deps_file__HighLevelCode_87);
        }
#line 409 "write_deps_file.m"
        {
#line 409 "write_deps_file.m"
          libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_7, &parse_tree__write_deps_file__CompilationTarget_88);
        }
#line 411 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__HighLevelCode_87 == (MR_Integer) 1);
#line 411 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 412 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__CompilationTarget_88 == (MR_Integer) 0);
#line 425 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 423 "write_deps_file.m"
          {
#line 423 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_440_440;
#line 423 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_443_443;
#line 423 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_444_444;
#line 423 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_446_446;

#line 422 "write_deps_file.m"
            {
#line 422 "write_deps_file.m"
              parse_tree__write_deps_file__V_446_446 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_446_446, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_66));
#line 422 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_446_446, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[98])));
#line 422 "write_deps_file.m"
            }
#line 421 "write_deps_file.m"
            {
#line 421 "write_deps_file.m"
              parse_tree__write_deps_file__V_444_444 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_444_444, 0) = ((MR_Box) ((MR_String) " "));
#line 421 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_444_444, 1) = ((MR_Box) (parse_tree__write_deps_file__V_446_446));
#line 421 "write_deps_file.m"
            }
#line 421 "write_deps_file.m"
            {
#line 421 "write_deps_file.m"
              parse_tree__write_deps_file__V_443_443 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 421 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_443_443, 0) = ((MR_Box) (parse_tree__write_deps_file__PicObjFileName_68));
#line 421 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_443_443, 1) = ((MR_Box) (parse_tree__write_deps_file__V_444_444));
#line 421 "write_deps_file.m"
            }
#line 420 "write_deps_file.m"
            {
#line 420 "write_deps_file.m"
              parse_tree__write_deps_file__V_440_440 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_440_440, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 420 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_440_440, 1) = ((MR_Box) (parse_tree__write_deps_file__V_443_443));
#line 420 "write_deps_file.m"
            }
#line 419 "write_deps_file.m"
            {
#line 419 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_440_440);
            }
#line 424 "write_deps_file.m"
            {
#line 424 "write_deps_file.m"
              parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".mih", parse_tree__write_deps_file__AllDeps_9);
            }
#line 423 "write_deps_file.m"
          }
#line 425 "write_deps_file.m"
        else
#line 425 "write_deps_file.m"
          {
#line 425 "write_deps_file.m"
          }
#line 438 "write_deps_file.m"
        {
#line 438 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".c", (MR_Integer) 1, &parse_tree__write_deps_file__CFileName_89);
        }
#line 440 "write_deps_file.m"
        {
#line 440 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".mh", (MR_Integer) 1, &parse_tree__write_deps_file__HeaderFileName_90);
        }
#line 442 "write_deps_file.m"
        {
#line 442 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".mih", (MR_Integer) 1, &parse_tree__write_deps_file__HeaderFileName2_91);
        }
#line 446 "write_deps_file.m"
        {
#line 446 "write_deps_file.m"
          parse_tree__write_deps_file__V_470_470 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_470_470, 0) = ((MR_Box) (parse_tree__write_deps_file__CFileName_89));
#line 446 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_470_470, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[96])));
#line 446 "write_deps_file.m"
        }
#line 446 "write_deps_file.m"
        {
#line 446 "write_deps_file.m"
          parse_tree__write_deps_file__V_468_468 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_468_468, 0) = ((MR_Box) ((MR_String) " : "));
#line 446 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_468_468, 1) = ((MR_Box) (parse_tree__write_deps_file__V_470_470));
#line 446 "write_deps_file.m"
        }
#line 446 "write_deps_file.m"
        {
#line 446 "write_deps_file.m"
          parse_tree__write_deps_file__V_467_467 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_467_467, 0) = ((MR_Box) (parse_tree__write_deps_file__HeaderFileName2_91));
#line 446 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_467_467, 1) = ((MR_Box) (parse_tree__write_deps_file__V_468_468));
#line 446 "write_deps_file.m"
        }
#line 446 "write_deps_file.m"
        {
#line 446 "write_deps_file.m"
          parse_tree__write_deps_file__V_465_465 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_465_465, 0) = ((MR_Box) ((MR_String) " "));
#line 446 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_465_465, 1) = ((MR_Box) (parse_tree__write_deps_file__V_467_467));
#line 446 "write_deps_file.m"
        }
#line 446 "write_deps_file.m"
        {
#line 446 "write_deps_file.m"
          parse_tree__write_deps_file__V_464_464 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_464_464, 0) = ((MR_Box) (parse_tree__write_deps_file__HeaderFileName_90));
#line 446 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_464_464, 1) = ((MR_Box) (parse_tree__write_deps_file__V_465_465));
#line 446 "write_deps_file.m"
        }
#line 445 "write_deps_file.m"
        {
#line 445 "write_deps_file.m"
          parse_tree__write_deps_file__V_461_461 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 445 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_461_461, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 445 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_461_461, 1) = ((MR_Box) (parse_tree__write_deps_file__V_464_464));
#line 445 "write_deps_file.m"
        }
#line 444 "write_deps_file.m"
        {
#line 444 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_461_461);
        }
#line 452 "write_deps_file.m"
        {
#line 452 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".java", (MR_Integer) 1, &parse_tree__write_deps_file__JavaFileName_92);
        }
#line 455 "write_deps_file.m"
        {
#line 455 "write_deps_file.m"
          parse_tree__write_deps_file__V_477_477 = make__make_module_dep_file_extension_0_f_0();
        }
#line 454 "write_deps_file.m"
        {
#line 454 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__V_477_477, (MR_Integer) 1, &parse_tree__write_deps_file__ModuleDepFileName_93);
        }
#line 462 "write_deps_file.m"
        {
#line 462 "write_deps_file.m"
          parse_tree__write_deps_file__V_496_496 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_496_496, 0) = ((MR_Box) (parse_tree__write_deps_file__CFileName_89));
#line 462 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_496_496, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[13])));
#line 462 "write_deps_file.m"
        }
#line 462 "write_deps_file.m"
        {
#line 462 "write_deps_file.m"
          parse_tree__write_deps_file__V_494_494 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_494_494, 0) = ((MR_Box) ((MR_String) " : "));
#line 462 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_494_494, 1) = ((MR_Box) (parse_tree__write_deps_file__V_496_496));
#line 462 "write_deps_file.m"
        }
#line 462 "write_deps_file.m"
        {
#line 462 "write_deps_file.m"
          parse_tree__write_deps_file__V_493_493 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_493_493, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_93));
#line 462 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_493_493, 1) = ((MR_Box) (parse_tree__write_deps_file__V_494_494));
#line 462 "write_deps_file.m"
        }
#line 461 "write_deps_file.m"
        {
#line 461 "write_deps_file.m"
          parse_tree__write_deps_file__V_491_491 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_491_491, 0) = ((MR_Box) ((MR_String) "else\n"));
#line 461 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_491_491, 1) = ((MR_Box) (parse_tree__write_deps_file__V_493_493));
#line 461 "write_deps_file.m"
        }
#line 460 "write_deps_file.m"
        {
#line 460 "write_deps_file.m"
          parse_tree__write_deps_file__V_489_489 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_489_489, 0) = ((MR_Box) ((MR_String) "\n"));
#line 460 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_489_489, 1) = ((MR_Box) (parse_tree__write_deps_file__V_491_491));
#line 460 "write_deps_file.m"
        }
#line 460 "write_deps_file.m"
        {
#line 460 "write_deps_file.m"
          parse_tree__write_deps_file__V_488_488 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_488_488, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaFileName_92));
#line 460 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_488_488, 1) = ((MR_Box) (parse_tree__write_deps_file__V_489_489));
#line 460 "write_deps_file.m"
        }
#line 460 "write_deps_file.m"
        {
#line 460 "write_deps_file.m"
          parse_tree__write_deps_file__V_486_486 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_486_486, 0) = ((MR_Box) ((MR_String) " : "));
#line 460 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_486_486, 1) = ((MR_Box) (parse_tree__write_deps_file__V_488_488));
#line 460 "write_deps_file.m"
        }
#line 460 "write_deps_file.m"
        {
#line 460 "write_deps_file.m"
          parse_tree__write_deps_file__V_485_485 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_485_485, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_93));
#line 460 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_485_485, 1) = ((MR_Box) (parse_tree__write_deps_file__V_486_486));
#line 460 "write_deps_file.m"
        }
#line 459 "write_deps_file.m"
        {
#line 459 "write_deps_file.m"
          parse_tree__write_deps_file__V_483_483 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_483_483, 0) = ((MR_Box) ((MR_String) "ifeq (\044(findstring java,\044(GRADE)),java)\n"));
#line 459 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_483_483, 1) = ((MR_Box) (parse_tree__write_deps_file__V_485_485));
#line 459 "write_deps_file.m"
        }
#line 458 "write_deps_file.m"
        {
#line 458 "write_deps_file.m"
          parse_tree__write_deps_file__V_480_480 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 458 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_480_480, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 458 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_480_480, 1) = ((MR_Box) (parse_tree__write_deps_file__V_483_483));
#line 458 "write_deps_file.m"
        }
#line 457 "write_deps_file.m"
        {
#line 457 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_480_480);
        }
#line 479 "write_deps_file.m"
        {
#line 479 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".date", (MR_Integer) 1, &parse_tree__write_deps_file__DateFileName_94);
        }
#line 481 "write_deps_file.m"
        {
#line 481 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".date0", (MR_Integer) 1, &parse_tree__write_deps_file__Date0FileName_95);
        }
#line 485 "write_deps_file.m"
        {
#line 485 "write_deps_file.m"
          parse_tree__write_deps_file__V_514_514 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_514_514, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_95));
#line 485 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_514_514, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 485 "write_deps_file.m"
        }
#line 484 "write_deps_file.m"
        {
#line 484 "write_deps_file.m"
          parse_tree__write_deps_file__V_512_512 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_512_512, 0) = ((MR_Box) ((MR_String) " "));
#line 484 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_512_512, 1) = ((MR_Box) (parse_tree__write_deps_file__V_514_514));
#line 484 "write_deps_file.m"
        }
#line 484 "write_deps_file.m"
        {
#line 484 "write_deps_file.m"
          parse_tree__write_deps_file__V_511_511 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_511_511, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_94));
#line 484 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_511_511, 1) = ((MR_Box) (parse_tree__write_deps_file__V_512_512));
#line 484 "write_deps_file.m"
        }
#line 484 "write_deps_file.m"
        {
#line 484 "write_deps_file.m"
          parse_tree__write_deps_file__V_508_508 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_508_508, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 484 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_508_508, 1) = ((MR_Box) (parse_tree__write_deps_file__V_511_511));
#line 484 "write_deps_file.m"
        }
#line 483 "write_deps_file.m"
        {
#line 483 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_508_508);
        }
#line 486 "write_deps_file.m"
        {
#line 486 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".date", parse_tree__write_deps_file__ParentDeps_16);
        }
#line 487 "write_deps_file.m"
        {
#line 487 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_289_289);
        }
#line 488 "write_deps_file.m"
        {
#line 488 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int0", parse_tree__write_deps_file__ParentDeps_16);
        }
#line 489 "write_deps_file.m"
        {
#line 489 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int3", parse_tree__write_deps_file__LongDeps_51);
        }
#line 490 "write_deps_file.m"
        {
#line 490 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int3", parse_tree__write_deps_file__ShortDeps_53);
        }
#line 492 "write_deps_file.m"
        {
#line 492 "write_deps_file.m"
          parse_tree__write_deps_file__V_529_529 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_529_529, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 492 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_529_529, 1) = ((MR_Box) (parse_tree__write_deps_file__V_514_514));
#line 492 "write_deps_file.m"
        }
#line 492 "write_deps_file.m"
        {
#line 492 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_529_529);
        }
#line 493 "write_deps_file.m"
        {
#line 493 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".date0", parse_tree__write_deps_file__ParentDeps_16);
        }
#line 494 "write_deps_file.m"
        {
#line 494 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_289_289);
        }
#line 495 "write_deps_file.m"
        {
#line 495 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int3", parse_tree__write_deps_file__LongDeps_51);
        }
#line 496 "write_deps_file.m"
        {
#line 496 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int3", parse_tree__write_deps_file__ShortDeps_53);
        }
#line 497 "write_deps_file.m"
        {
#line 497 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_48, (MR_String) "\n\n");
        }
#line 503 "write_deps_file.m"
        {
#line 503 "write_deps_file.m"
          parse_tree__source_file_map__have_source_file_map_3_p_0(&parse_tree__write_deps_file__HaveMap_96);
        }
#line 507 "write_deps_file.m"
#line 507 "write_deps_file.m"
        switch (parse_tree__write_deps_file__HaveMap_96) {
#line 507 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 507 "write_deps_file.m"
          case (MR_Integer) 0:
#line 509 "write_deps_file.m"
            parse_tree__write_deps_file__ModuleArg_97 = parse_tree__write_deps_file__SourceFileName_12;
#line 507 "write_deps_file.m"
            break;
#line 507 "write_deps_file.m"
          case (MR_Integer) 1:
#line 506 "write_deps_file.m"
            {
#line 506 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__write_deps_file__SourceFileModuleName_13, &parse_tree__write_deps_file__ModuleArg_97);
            }
#line 507 "write_deps_file.m"
            break;
#line 507 "write_deps_file.m"
        }
#line 512 "write_deps_file.m"
        {
#line 512 "write_deps_file.m"
          libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_7, &parse_tree__write_deps_file__Target_98);
        }
#line 513 "write_deps_file.m"
        {
#line 513 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".class", (MR_Integer) 1, &parse_tree__write_deps_file__ClassFileName_99);
        }
#line 515 "write_deps_file.m"
        {
#line 515 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".beam", (MR_Integer) 1, &parse_tree__write_deps_file__BeamFileName_100);
        }
#line 521 "write_deps_file.m"
#line 521 "write_deps_file.m"
        switch (MR_tag((MR_Word) parse_tree__write_deps_file__ContainsForeignCode_26)) {
#line 521 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 521 "write_deps_file.m"
          case (MR_Integer) 0:
#line 521 "write_deps_file.m"
#line 521 "write_deps_file.m"
            switch (MR_unmkbody(parse_tree__write_deps_file__ContainsForeignCode_26)) {
#line 521 "write_deps_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 521 "write_deps_file.m"
              case (MR_Integer) 0:
#line 577 "write_deps_file.m"
                parse_tree__write_deps_file__ForeignImportModules_102 = parse_tree__write_deps_file__ForeignImportModules0_24;
#line 521 "write_deps_file.m"
                break;
#line 521 "write_deps_file.m"
              case (MR_Integer) 1:
#line 522 "write_deps_file.m"
                {
#line 522 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__TypeInfo_855_855;
#line 522 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__SrcForeignImportModules_104;
#line 522 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__IntItemBlocksCord_107;
#line 522 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__IntForeignImportModules_109;
#line 522 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__OptForeignImportModules_113;
#line 522 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__IntForOptForeignImportModules_117;
#line 522 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_554_554;
#line 522 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_555_555;
#line 522 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_556_556;
#line 523 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file___SrcLangSet_103;
#line 523 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_105_105;
#line 523 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_106_106;
#line 530 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file___IntLangSet_108;
#line 530 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_110_110;
#line 530 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_111_111;
#line 533 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file___OptLangSet_112;
#line 533 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_114_114;
#line 533 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_115_115;
#line 536 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file___IntForOptLangSet_116;
#line 536 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_118_118;
#line 536 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_119_119;
#line 547 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__C0_120;
#line 547 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__CSharp0_121;
#line 547 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__Java0_122;
#line 547 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__Erlang0_123;

#line 523 "write_deps_file.m"
                  {
#line 523 "write_deps_file.m"
                    parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0, parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SrcItemBlocks_28, &parse_tree__write_deps_file___SrcLangSet_103, &parse_tree__write_deps_file__SrcForeignImportModules_104, &parse_tree__write_deps_file__V_105_105, &parse_tree__write_deps_file__V_106_106);
                  }
#line 15788 "parse_tree.write_deps_file.c"
                  parse_tree__write_deps_file__TypeInfo_855_855 = (MR_Word) &parse_tree__write_deps_file_scalar_common_1[1];
#line 528 "write_deps_file.m"
                  {
#line 528 "write_deps_file.m"
                    parse_tree__write_deps_file__IntItemBlocksCord_107 = mercury__cord__f_43_43_2_f_0(parse_tree__write_deps_file__TypeInfo_855_855, parse_tree__write_deps_file__DirectIntItemBlocksCord_29, parse_tree__write_deps_file__IndirectIntItemBlocksCord_30);
                  }
#line 531 "write_deps_file.m"
                  {
#line 531 "write_deps_file.m"
                    parse_tree__write_deps_file__V_554_554 = mercury__cord__list_1_f_0(parse_tree__write_deps_file__TypeInfo_855_855, parse_tree__write_deps_file__IntItemBlocksCord_107);
                  }
#line 530 "write_deps_file.m"
                  {
#line 530 "write_deps_file.m"
                    parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0, parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__V_554_554, &parse_tree__write_deps_file___IntLangSet_108, &parse_tree__write_deps_file__IntForeignImportModules_109, &parse_tree__write_deps_file__V_110_110, &parse_tree__write_deps_file__V_111_111);
                  }
#line 534 "write_deps_file.m"
                  {
#line 534 "write_deps_file.m"
                    parse_tree__write_deps_file__V_555_555 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[2], parse_tree__write_deps_file__OptItemBlocksCord_31);
                  }
#line 533 "write_deps_file.m"
                  {
#line 533 "write_deps_file.m"
                    parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0, parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__V_555_555, &parse_tree__write_deps_file___OptLangSet_112, &parse_tree__write_deps_file__OptForeignImportModules_113, &parse_tree__write_deps_file__V_114_114, &parse_tree__write_deps_file__V_115_115);
                  }
#line 537 "write_deps_file.m"
                  {
#line 537 "write_deps_file.m"
                    parse_tree__write_deps_file__V_556_556 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[3], parse_tree__write_deps_file__IntForOptItemBlocksCord_32);
                  }
#line 536 "write_deps_file.m"
                  {
#line 536 "write_deps_file.m"
                    parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0, parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__V_556_556, &parse_tree__write_deps_file___IntForOptLangSet_116, &parse_tree__write_deps_file__IntForOptForeignImportModules_117, &parse_tree__write_deps_file__V_118_118, &parse_tree__write_deps_file__V_119_119);
                  }
#line 546 "write_deps_file.m"
                  parse_tree__write_deps_file__C0_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_24, (MR_Integer) 0)));
#line 546 "write_deps_file.m"
                  parse_tree__write_deps_file__CSharp0_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_24, (MR_Integer) 1)));
#line 546 "write_deps_file.m"
                  parse_tree__write_deps_file__Java0_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_24, (MR_Integer) 2)));
#line 546 "write_deps_file.m"
                  parse_tree__write_deps_file__Erlang0_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_24, (MR_Integer) 3)));
#line 548 "write_deps_file.m"
                  {
#line 548 "write_deps_file.m"
                    parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, parse_tree__write_deps_file__C0_120);
                  }
#line 547 "write_deps_file.m"
                  if (parse_tree__write_deps_file__succeeded)
#line 547 "write_deps_file.m"
                    {
#line 549 "write_deps_file.m"
                      {
#line 549 "write_deps_file.m"
                        parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, parse_tree__write_deps_file__CSharp0_121);
                      }
#line 547 "write_deps_file.m"
                      if (parse_tree__write_deps_file__succeeded)
#line 547 "write_deps_file.m"
                        {
#line 550 "write_deps_file.m"
                          {
#line 550 "write_deps_file.m"
                            parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, parse_tree__write_deps_file__Java0_122);
                          }
#line 547 "write_deps_file.m"
                          if (parse_tree__write_deps_file__succeeded)
#line 551 "write_deps_file.m"
                            {
#line 551 "write_deps_file.m"
                              parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, parse_tree__write_deps_file__Erlang0_123);
                            }
#line 547 "write_deps_file.m"
                        }
#line 547 "write_deps_file.m"
                    }
#line 572 "write_deps_file.m"
                  if (parse_tree__write_deps_file__succeeded)
#line 554 "write_deps_file.m"
                    {
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__SrcC_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_104, (MR_Integer) 0)));
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__SrcCSharp_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_104, (MR_Integer) 1)));
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__SrcJava_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_104, (MR_Integer) 2)));
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__SrcErlang_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_104, (MR_Integer) 3)));
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntC_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_109, (MR_Integer) 0)));
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntCSharp_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_109, (MR_Integer) 1)));
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntJava_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_109, (MR_Integer) 2)));
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntErlang_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_109, (MR_Integer) 3)));
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__OptC_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_113, (MR_Integer) 0)));
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__OptCSharp_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_113, (MR_Integer) 1)));
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__OptJava_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_113, (MR_Integer) 2)));
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__OptErlang_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_113, (MR_Integer) 3)));
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntForOptC_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_117, (MR_Integer) 0)));
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntForOptCSharp_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_117, (MR_Integer) 1)));
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntForOptJava_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_117, (MR_Integer) 2)));
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntForOptErlang_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_117, (MR_Integer) 3)));
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__C_140;
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__CSharp_141;
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__Java_142;
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__Erlang_143;
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_557_557;
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_558_558;
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_559_559;
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_560_560;
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_562_562;
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_563_563;
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_564_564;
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_565_565;
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_567_567;
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_568_568;
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_569_569;
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_570_570;
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_572_572;
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_573_573;
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_574_574;
#line 554 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_575_575;

#line 563 "write_deps_file.m"
                      {
#line 563 "write_deps_file.m"
                        parse_tree__write_deps_file__V_560_560 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_560_560, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptC_136));
#line 563 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_560_560, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 563 "write_deps_file.m"
                      }
#line 563 "write_deps_file.m"
                      {
#line 563 "write_deps_file.m"
                        parse_tree__write_deps_file__V_559_559 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_559_559, 0) = ((MR_Box) (parse_tree__write_deps_file__OptC_132));
#line 563 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_559_559, 1) = ((MR_Box) (parse_tree__write_deps_file__V_560_560));
#line 563 "write_deps_file.m"
                      }
#line 563 "write_deps_file.m"
                      {
#line 563 "write_deps_file.m"
                        parse_tree__write_deps_file__V_558_558 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_558_558, 0) = ((MR_Box) (parse_tree__write_deps_file__IntC_128));
#line 563 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_558_558, 1) = ((MR_Box) (parse_tree__write_deps_file__V_559_559));
#line 563 "write_deps_file.m"
                      }
#line 563 "write_deps_file.m"
                      {
#line 563 "write_deps_file.m"
                        parse_tree__write_deps_file__V_557_557 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 563 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_557_557, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcC_124));
#line 563 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_557_557, 1) = ((MR_Box) (parse_tree__write_deps_file__V_558_558));
#line 563 "write_deps_file.m"
                      }
#line 562 "write_deps_file.m"
                      {
#line 562 "write_deps_file.m"
                        parse_tree__write_deps_file__C_140 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, parse_tree__write_deps_file__V_557_557);
                      }
#line 565 "write_deps_file.m"
                      {
#line 565 "write_deps_file.m"
                        parse_tree__write_deps_file__V_565_565 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_565_565, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptCSharp_137));
#line 565 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_565_565, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 565 "write_deps_file.m"
                      }
#line 565 "write_deps_file.m"
                      {
#line 565 "write_deps_file.m"
                        parse_tree__write_deps_file__V_564_564 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_564_564, 0) = ((MR_Box) (parse_tree__write_deps_file__OptCSharp_133));
#line 565 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_564_564, 1) = ((MR_Box) (parse_tree__write_deps_file__V_565_565));
#line 565 "write_deps_file.m"
                      }
#line 565 "write_deps_file.m"
                      {
#line 565 "write_deps_file.m"
                        parse_tree__write_deps_file__V_563_563 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_563_563, 0) = ((MR_Box) (parse_tree__write_deps_file__IntCSharp_129));
#line 565 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_563_563, 1) = ((MR_Box) (parse_tree__write_deps_file__V_564_564));
#line 565 "write_deps_file.m"
                      }
#line 565 "write_deps_file.m"
                      {
#line 565 "write_deps_file.m"
                        parse_tree__write_deps_file__V_562_562 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 565 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_562_562, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcCSharp_125));
#line 565 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_562_562, 1) = ((MR_Box) (parse_tree__write_deps_file__V_563_563));
#line 565 "write_deps_file.m"
                      }
#line 564 "write_deps_file.m"
                      {
#line 564 "write_deps_file.m"
                        parse_tree__write_deps_file__CSharp_141 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, parse_tree__write_deps_file__V_562_562);
                      }
#line 567 "write_deps_file.m"
                      {
#line 567 "write_deps_file.m"
                        parse_tree__write_deps_file__V_570_570 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_570_570, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptJava_138));
#line 567 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_570_570, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 567 "write_deps_file.m"
                      }
#line 567 "write_deps_file.m"
                      {
#line 567 "write_deps_file.m"
                        parse_tree__write_deps_file__V_569_569 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_569_569, 0) = ((MR_Box) (parse_tree__write_deps_file__OptJava_134));
#line 567 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_569_569, 1) = ((MR_Box) (parse_tree__write_deps_file__V_570_570));
#line 567 "write_deps_file.m"
                      }
#line 567 "write_deps_file.m"
                      {
#line 567 "write_deps_file.m"
                        parse_tree__write_deps_file__V_568_568 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_568_568, 0) = ((MR_Box) (parse_tree__write_deps_file__IntJava_130));
#line 567 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_568_568, 1) = ((MR_Box) (parse_tree__write_deps_file__V_569_569));
#line 567 "write_deps_file.m"
                      }
#line 567 "write_deps_file.m"
                      {
#line 567 "write_deps_file.m"
                        parse_tree__write_deps_file__V_567_567 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_567_567, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcJava_126));
#line 567 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_567_567, 1) = ((MR_Box) (parse_tree__write_deps_file__V_568_568));
#line 567 "write_deps_file.m"
                      }
#line 566 "write_deps_file.m"
                      {
#line 566 "write_deps_file.m"
                        parse_tree__write_deps_file__Java_142 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, parse_tree__write_deps_file__V_567_567);
                      }
#line 569 "write_deps_file.m"
                      {
#line 569 "write_deps_file.m"
                        parse_tree__write_deps_file__V_575_575 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_575_575, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptErlang_139));
#line 569 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_575_575, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 569 "write_deps_file.m"
                      }
#line 569 "write_deps_file.m"
                      {
#line 569 "write_deps_file.m"
                        parse_tree__write_deps_file__V_574_574 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_574_574, 0) = ((MR_Box) (parse_tree__write_deps_file__OptErlang_135));
#line 569 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_574_574, 1) = ((MR_Box) (parse_tree__write_deps_file__V_575_575));
#line 569 "write_deps_file.m"
                      }
#line 569 "write_deps_file.m"
                      {
#line 569 "write_deps_file.m"
                        parse_tree__write_deps_file__V_573_573 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_573_573, 0) = ((MR_Box) (parse_tree__write_deps_file__IntErlang_131));
#line 569 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_573_573, 1) = ((MR_Box) (parse_tree__write_deps_file__V_574_574));
#line 569 "write_deps_file.m"
                      }
#line 569 "write_deps_file.m"
                      {
#line 569 "write_deps_file.m"
                        parse_tree__write_deps_file__V_572_572 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_572_572, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcErlang_127));
#line 569 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_572_572, 1) = ((MR_Box) (parse_tree__write_deps_file__V_573_573));
#line 569 "write_deps_file.m"
                      }
#line 568 "write_deps_file.m"
                      {
#line 568 "write_deps_file.m"
                        parse_tree__write_deps_file__Erlang_143 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, parse_tree__write_deps_file__V_572_572);
                      }
#line 570 "write_deps_file.m"
                      {
#line 570 "write_deps_file.m"
                        parse_tree__write_deps_file__ForeignImportModules_102 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 570 "write_deps_file.m"
                        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_102, 0) = ((MR_Box) (parse_tree__write_deps_file__C_140));
#line 570 "write_deps_file.m"
                        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_102, 1) = ((MR_Box) (parse_tree__write_deps_file__CSharp_141));
#line 570 "write_deps_file.m"
                        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_102, 2) = ((MR_Box) (parse_tree__write_deps_file__Java_142));
#line 570 "write_deps_file.m"
                        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_102, 3) = ((MR_Box) (parse_tree__write_deps_file__Erlang_143));
#line 570 "write_deps_file.m"
                      }
#line 554 "write_deps_file.m"
                    }
#line 572 "write_deps_file.m"
                  else
#line 573 "write_deps_file.m"
                    parse_tree__write_deps_file__ForeignImportModules_102 = parse_tree__write_deps_file__ForeignImportModules0_24;
#line 522 "write_deps_file.m"
                }
#line 521 "write_deps_file.m"
                break;
#line 521 "write_deps_file.m"
            }
#line 521 "write_deps_file.m"
            break;
#line 521 "write_deps_file.m"
          case (MR_Integer) 1:
#line 520 "write_deps_file.m"
            parse_tree__write_deps_file__ForeignImportModules_102 = parse_tree__write_deps_file__ForeignImportModules0_24;
#line 521 "write_deps_file.m"
            break;
#line 521 "write_deps_file.m"
        }
#line 580 "write_deps_file.m"
        {
#line 580 "write_deps_file.m"
          parse_tree__write_deps_file__ForeignImports_144 = parse_tree__prog_data__get_all_foreign_import_module_infos_1_f_0(parse_tree__write_deps_file__ForeignImportModules_102);
        }
#line 586 "write_deps_file.m"
        {
#line 586 "write_deps_file.m"
          parse_tree__write_deps_file__V_577_577 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 586 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_577_577, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
#line 586 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_577_577, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_4));
#line 586 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_577_577, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 586 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_577_577, 3) = ((MR_Box) (parse_tree__write_deps_file__SourceFileModuleName_13));
#line 586 "write_deps_file.m"
        }
#line 586 "write_deps_file.m"
        {
#line 586 "write_deps_file.m"
          mercury__set__filter_map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, parse_tree__write_deps_file__TypeCtorInfo_844_844, parse_tree__write_deps_file__V_577_577, parse_tree__write_deps_file__ForeignImports_144, &parse_tree__write_deps_file__ForeignImportedModuleNames_147);
        }
#line 595 "write_deps_file.m"
        {
#line 595 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_844_844, parse_tree__write_deps_file__ForeignImportedModuleNames_147);
        }
#line 597 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 597 "write_deps_file.m"
          {
#line 597 "write_deps_file.m"
          }
#line 597 "write_deps_file.m"
        else
#line 619 "write_deps_file.m"
          {
#line 619 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ForeignImportTargets_148;
#line 619 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__ForeignImportExt_149;
#line 619 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__WriteForeignImportTarget_150;
#line 630 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv4_STATE_VARIABLE_IO_599_599;

#line 603 "write_deps_file.m"
#line 603 "write_deps_file.m"
            switch (parse_tree__write_deps_file__Target_98) {
#line 603 "write_deps_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 603 "write_deps_file.m"
              case (MR_Integer) 0:
#line 612 "write_deps_file.m"
                {
#line 612 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_581_581;

#line 617 "write_deps_file.m"
                  {
#line 617 "write_deps_file.m"
                    parse_tree__write_deps_file__V_581_581 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_581_581, 0) = ((MR_Box) (parse_tree__write_deps_file__PicObjFileName_68));
#line 617 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_581_581, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 617 "write_deps_file.m"
                  }
#line 617 "write_deps_file.m"
                  {
#line 617 "write_deps_file.m"
                    parse_tree__write_deps_file__ForeignImportTargets_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_148, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_66));
#line 617 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_148, 1) = ((MR_Box) (parse_tree__write_deps_file__V_581_581));
#line 617 "write_deps_file.m"
                  }
#line 618 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportExt_149 = (MR_String) ".mh";
#line 612 "write_deps_file.m"
                }
#line 603 "write_deps_file.m"
                break;
#line 603 "write_deps_file.m"
              case (MR_Integer) 1:
#line 599 "write_deps_file.m"
                {
#line 601 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportTargets_148 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 602 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportExt_149 = (MR_String) ".cs";
#line 599 "write_deps_file.m"
                }
#line 603 "write_deps_file.m"
                break;
#line 603 "write_deps_file.m"
              case (MR_Integer) 3:
#line 608 "write_deps_file.m"
                {
#line 609 "write_deps_file.m"
                  {
#line 609 "write_deps_file.m"
                    parse_tree__write_deps_file__ForeignImportTargets_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_148, 0) = ((MR_Box) (parse_tree__write_deps_file__BeamFileName_100));
#line 609 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 609 "write_deps_file.m"
                  }
#line 610 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportExt_149 = (MR_String) ".hrl";
#line 608 "write_deps_file.m"
                }
#line 603 "write_deps_file.m"
                break;
#line 603 "write_deps_file.m"
              case (MR_Integer) 2:
#line 604 "write_deps_file.m"
                {
#line 605 "write_deps_file.m"
                  {
#line 605 "write_deps_file.m"
                    parse_tree__write_deps_file__ForeignImportTargets_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_148, 0) = ((MR_Box) (parse_tree__write_deps_file__ClassFileName_99));
#line 605 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_148, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 605 "write_deps_file.m"
                  }
#line 606 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportExt_149 = (MR_String) ".java";
#line 604 "write_deps_file.m"
                }
#line 603 "write_deps_file.m"
                break;
#line 603 "write_deps_file.m"
            }
#line 620 "write_deps_file.m"
            {
#line 620 "write_deps_file.m"
              parse_tree__write_deps_file__WriteForeignImportTarget_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 620 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_150, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[1]));
#line 620 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_150, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_5));
#line 620 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_150, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 620 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_150, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 620 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_150, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_48));
#line 620 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_150, 5) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportedModuleNames_147));
#line 620 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_150, 6) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportExt_149));
#line 620 "write_deps_file.m"
            }
#line 630 "write_deps_file.m"
            {
#line 630 "write_deps_file.m"
              mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_845_845, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__WriteForeignImportTarget_150, parse_tree__write_deps_file__ForeignImportTargets_148, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv4_STATE_VARIABLE_IO_599_599);
            }
#line 619 "write_deps_file.m"
          }
#line 633 "write_deps_file.m"
        {
#line 633 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int", (MR_Integer) 1, &parse_tree__write_deps_file__IntFileName_152);
        }
#line 635 "write_deps_file.m"
        {
#line 635 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int2", (MR_Integer) 1, &parse_tree__write_deps_file__Int2FileName_153);
        }
#line 637 "write_deps_file.m"
        {
#line 637 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int3", (MR_Integer) 1, &parse_tree__write_deps_file__Int3FileName_154);
        }
#line 639 "write_deps_file.m"
        {
#line 639 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptFileName_155);
        }
#line 641 "write_deps_file.m"
        {
#line 641 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptFileName_156);
        }
#line 643 "write_deps_file.m"
        {
#line 643 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".date3", (MR_Integer) 1, &parse_tree__write_deps_file__Date3FileName_157);
        }
#line 674 "write_deps_file.m"
        {
#line 674 "write_deps_file.m"
          parse_tree__write_deps_file__V_664_664 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_664_664, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_42));
#line 674 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_664_664, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[15])));
#line 674 "write_deps_file.m"
        }
#line 674 "write_deps_file.m"
        {
#line 674 "write_deps_file.m"
          parse_tree__write_deps_file__V_662_662 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_662_662, 0) = ((MR_Box) ((MR_String) " : "));
#line 674 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_662_662, 1) = ((MR_Box) (parse_tree__write_deps_file__V_664_664));
#line 674 "write_deps_file.m"
        }
#line 674 "write_deps_file.m"
        {
#line 674 "write_deps_file.m"
          parse_tree__write_deps_file__V_661_661 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 674 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_661_661, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptFileName_156));
#line 674 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_661_661, 1) = ((MR_Box) (parse_tree__write_deps_file__V_662_662));
#line 674 "write_deps_file.m"
        }
#line 673 "write_deps_file.m"
        {
#line 673 "write_deps_file.m"
          parse_tree__write_deps_file__V_659_659 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 673 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_659_659, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 673 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_659_659, 1) = ((MR_Box) (parse_tree__write_deps_file__V_661_661));
#line 673 "write_deps_file.m"
        }
#line 672 "write_deps_file.m"
        {
#line 672 "write_deps_file.m"
          parse_tree__write_deps_file__V_657_657 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_657_657, 0) = ((MR_Box) ((MR_String) "\n"));
#line 672 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_657_657, 1) = ((MR_Box) (parse_tree__write_deps_file__V_659_659));
#line 672 "write_deps_file.m"
        }
#line 672 "write_deps_file.m"
        {
#line 672 "write_deps_file.m"
          parse_tree__write_deps_file__V_656_656 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_656_656, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_62));
#line 672 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_656_656, 1) = ((MR_Box) (parse_tree__write_deps_file__V_657_657));
#line 672 "write_deps_file.m"
        }
#line 672 "write_deps_file.m"
        {
#line 672 "write_deps_file.m"
          parse_tree__write_deps_file__V_654_654 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_654_654, 0) = ((MR_Box) ((MR_String) " : "));
#line 672 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_654_654, 1) = ((MR_Box) (parse_tree__write_deps_file__V_656_656));
#line 672 "write_deps_file.m"
        }
#line 672 "write_deps_file.m"
        {
#line 672 "write_deps_file.m"
          parse_tree__write_deps_file__V_653_653 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_653_653, 0) = ((MR_Box) (parse_tree__write_deps_file__OptFileName_155));
#line 672 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_653_653, 1) = ((MR_Box) (parse_tree__write_deps_file__V_654_654));
#line 672 "write_deps_file.m"
        }
#line 671 "write_deps_file.m"
        {
#line 671 "write_deps_file.m"
          parse_tree__write_deps_file__V_651_651 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_651_651, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 671 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_651_651, 1) = ((MR_Box) (parse_tree__write_deps_file__V_653_653));
#line 671 "write_deps_file.m"
        }
#line 670 "write_deps_file.m"
        {
#line 670 "write_deps_file.m"
          parse_tree__write_deps_file__V_649_649 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_649_649, 0) = ((MR_Box) ((MR_String) "\n"));
#line 670 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_649_649, 1) = ((MR_Box) (parse_tree__write_deps_file__V_651_651));
#line 670 "write_deps_file.m"
        }
#line 670 "write_deps_file.m"
        {
#line 670 "write_deps_file.m"
          parse_tree__write_deps_file__V_648_648 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_648_648, 0) = ((MR_Box) (parse_tree__write_deps_file__Date3FileName_157));
#line 670 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_648_648, 1) = ((MR_Box) (parse_tree__write_deps_file__V_649_649));
#line 670 "write_deps_file.m"
        }
#line 670 "write_deps_file.m"
        {
#line 670 "write_deps_file.m"
          parse_tree__write_deps_file__V_646_646 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_646_646, 0) = ((MR_Box) ((MR_String) " : "));
#line 670 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_646_646, 1) = ((MR_Box) (parse_tree__write_deps_file__V_648_648));
#line 670 "write_deps_file.m"
        }
#line 670 "write_deps_file.m"
        {
#line 670 "write_deps_file.m"
          parse_tree__write_deps_file__V_645_645 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_645_645, 0) = ((MR_Box) (parse_tree__write_deps_file__Int3FileName_154));
#line 670 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_645_645, 1) = ((MR_Box) (parse_tree__write_deps_file__V_646_646));
#line 670 "write_deps_file.m"
        }
#line 669 "write_deps_file.m"
        {
#line 669 "write_deps_file.m"
          parse_tree__write_deps_file__V_643_643 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_643_643, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 669 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_643_643, 1) = ((MR_Box) (parse_tree__write_deps_file__V_645_645));
#line 669 "write_deps_file.m"
        }
#line 668 "write_deps_file.m"
        {
#line 668 "write_deps_file.m"
          parse_tree__write_deps_file__V_641_641 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_641_641, 0) = ((MR_Box) ((MR_String) "\n"));
#line 668 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_641_641, 1) = ((MR_Box) (parse_tree__write_deps_file__V_643_643));
#line 668 "write_deps_file.m"
        }
#line 668 "write_deps_file.m"
        {
#line 668 "write_deps_file.m"
          parse_tree__write_deps_file__V_640_640 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_640_640, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_94));
#line 668 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_640_640, 1) = ((MR_Box) (parse_tree__write_deps_file__V_641_641));
#line 668 "write_deps_file.m"
        }
#line 668 "write_deps_file.m"
        {
#line 668 "write_deps_file.m"
          parse_tree__write_deps_file__V_638_638 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_638_638, 0) = ((MR_Box) ((MR_String) " : "));
#line 668 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_638_638, 1) = ((MR_Box) (parse_tree__write_deps_file__V_640_640));
#line 668 "write_deps_file.m"
        }
#line 668 "write_deps_file.m"
        {
#line 668 "write_deps_file.m"
          parse_tree__write_deps_file__V_637_637 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_637_637, 0) = ((MR_Box) (parse_tree__write_deps_file__Int2FileName_153));
#line 668 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_637_637, 1) = ((MR_Box) (parse_tree__write_deps_file__V_638_638));
#line 668 "write_deps_file.m"
        }
#line 667 "write_deps_file.m"
        {
#line 667 "write_deps_file.m"
          parse_tree__write_deps_file__V_635_635 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_635_635, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 667 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_635_635, 1) = ((MR_Box) (parse_tree__write_deps_file__V_637_637));
#line 667 "write_deps_file.m"
        }
#line 666 "write_deps_file.m"
        {
#line 666 "write_deps_file.m"
          parse_tree__write_deps_file__V_633_633 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_633_633, 0) = ((MR_Box) ((MR_String) "\n"));
#line 666 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_633_633, 1) = ((MR_Box) (parse_tree__write_deps_file__V_635_635));
#line 666 "write_deps_file.m"
        }
#line 666 "write_deps_file.m"
        {
#line 666 "write_deps_file.m"
          parse_tree__write_deps_file__V_632_632 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_632_632, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_94));
#line 666 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_632_632, 1) = ((MR_Box) (parse_tree__write_deps_file__V_633_633));
#line 666 "write_deps_file.m"
        }
#line 666 "write_deps_file.m"
        {
#line 666 "write_deps_file.m"
          parse_tree__write_deps_file__V_630_630 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_630_630, 0) = ((MR_Box) ((MR_String) " : "));
#line 666 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_630_630, 1) = ((MR_Box) (parse_tree__write_deps_file__V_632_632));
#line 666 "write_deps_file.m"
        }
#line 666 "write_deps_file.m"
        {
#line 666 "write_deps_file.m"
          parse_tree__write_deps_file__V_629_629 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_629_629, 0) = ((MR_Box) (parse_tree__write_deps_file__IntFileName_152));
#line 666 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_629_629, 1) = ((MR_Box) (parse_tree__write_deps_file__V_630_630));
#line 666 "write_deps_file.m"
        }
#line 665 "write_deps_file.m"
        {
#line 665 "write_deps_file.m"
          parse_tree__write_deps_file__V_627_627 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_627_627, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 665 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_627_627, 1) = ((MR_Box) (parse_tree__write_deps_file__V_629_629));
#line 665 "write_deps_file.m"
        }
#line 664 "write_deps_file.m"
        {
#line 664 "write_deps_file.m"
          parse_tree__write_deps_file__V_625_625 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_625_625, 0) = ((MR_Box) ((MR_String) "\n"));
#line 664 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_625_625, 1) = ((MR_Box) (parse_tree__write_deps_file__V_627_627));
#line 664 "write_deps_file.m"
        }
#line 664 "write_deps_file.m"
        {
#line 664 "write_deps_file.m"
          parse_tree__write_deps_file__V_624_624 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_624_624, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_95));
#line 664 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_624_624, 1) = ((MR_Box) (parse_tree__write_deps_file__V_625_625));
#line 664 "write_deps_file.m"
        }
#line 664 "write_deps_file.m"
        {
#line 664 "write_deps_file.m"
          parse_tree__write_deps_file__V_622_622 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_622_622, 0) = ((MR_Box) ((MR_String) " : "));
#line 664 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_622_622, 1) = ((MR_Box) (parse_tree__write_deps_file__V_624_624));
#line 664 "write_deps_file.m"
        }
#line 664 "write_deps_file.m"
        {
#line 664 "write_deps_file.m"
          parse_tree__write_deps_file__V_621_621 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_621_621, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0FileName_69));
#line 664 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_621_621, 1) = ((MR_Box) (parse_tree__write_deps_file__V_622_622));
#line 664 "write_deps_file.m"
        }
#line 663 "write_deps_file.m"
        {
#line 663 "write_deps_file.m"
          parse_tree__write_deps_file__V_618_618 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_618_618, 0) = ((MR_Box) ((MR_String) "\n"));
#line 663 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_618_618, 1) = ((MR_Box) (parse_tree__write_deps_file__V_621_621));
#line 663 "write_deps_file.m"
        }
#line 662 "write_deps_file.m"
        {
#line 662 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_618_618);
        }
#line 678 "write_deps_file.m"
        {
#line 678 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 633, &parse_tree__write_deps_file__UseSubdirs_158);
        }
#line 686 "write_deps_file.m"
#line 686 "write_deps_file.m"
        switch (parse_tree__write_deps_file__UseSubdirs_158) {
#line 686 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 686 "write_deps_file.m"
          case (MR_Integer) 0:
#line 687 "write_deps_file.m"
            {
#line 687 "write_deps_file.m"
            }
#line 686 "write_deps_file.m"
            break;
#line 686 "write_deps_file.m"
          case (MR_Integer) 1:
#line 680 "write_deps_file.m"
            {
#line 680 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_672_672;
#line 682 "write_deps_file.m"
              MR_Box parse_tree__write_deps_file__conv5_STATE_VARIABLE_IO_674_674;

#line 681 "write_deps_file.m"
              {
#line 681 "write_deps_file.m"
                mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_48);
              }
#line 683 "write_deps_file.m"
              {
#line 683 "write_deps_file.m"
                parse_tree__write_deps_file__V_672_672 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 683 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_672_672, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[0]));
#line 683 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_672_672, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_6));
#line 683 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_672_672, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 683 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_672_672, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 683 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_672_672, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_48));
#line 683 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_672_672, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 683 "write_deps_file.m"
              }
#line 682 "write_deps_file.m"
              {
#line 682 "write_deps_file.m"
                mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_845_845, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_672_672, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[23]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv5_STATE_VARIABLE_IO_674_674);
              }
#line 680 "write_deps_file.m"
            }
#line 686 "write_deps_file.m"
            break;
#line 686 "write_deps_file.m"
        }
#line 690 "write_deps_file.m"
        {
#line 690 "write_deps_file.m"
          parse_tree__write_deps_file__V_868_868 = parse_tree__source_file_map__default_source_file_1_f_0(parse_tree__write_deps_file__ModuleName_14);
        }
#line 690 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__SourceFileName_12, parse_tree__write_deps_file__V_868_868) == 0);
#line 692 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 692 "write_deps_file.m"
          {
#line 692 "write_deps_file.m"
          }
#line 692 "write_deps_file.m"
        else
#line 708 "write_deps_file.m"
          {
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_691_691;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_694_694;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_695_695;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_697_697;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_698_698;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_700_700;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_702_702;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_704_704;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_705_705;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_707_707;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_708_708;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_710_710;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_711_711;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_713_713;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_715_715;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_716_716;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_718_718;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_719_719;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_721_721;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_722_722;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_724_724;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_726_726;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_727_727;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_729_729;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_730_730;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_732_732;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_733_733;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_735_735;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_737_737;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_738_738;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_740_740;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_741_741;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_743_743;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_744_744;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_746_746;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_748_748;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_750_750;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_751_751;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_753_753;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_754_754;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_756_756;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_757_757;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_759_759;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_761_761;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_762_762;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_764_764;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_765_765;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_767_767;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_768_768;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_770_770;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_772_772;
#line 708 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_774_774;

#line 731 "write_deps_file.m"
            {
#line 731 "write_deps_file.m"
              parse_tree__write_deps_file__V_774_774 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_774_774, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_97));
#line 731 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_774_774, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[104])));
#line 731 "write_deps_file.m"
            }
#line 731 "write_deps_file.m"
            {
#line 731 "write_deps_file.m"
              parse_tree__write_deps_file__V_772_772 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_772_772, 0) = ((MR_Box) ((MR_String) "--java-only "));
#line 731 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_772_772, 1) = ((MR_Box) (parse_tree__write_deps_file__V_774_774));
#line 731 "write_deps_file.m"
            }
#line 730 "write_deps_file.m"
            {
#line 730 "write_deps_file.m"
              parse_tree__write_deps_file__V_770_770 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_770_770, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
#line 730 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_770_770, 1) = ((MR_Box) (parse_tree__write_deps_file__V_772_772));
#line 730 "write_deps_file.m"
            }
#line 729 "write_deps_file.m"
            {
#line 729 "write_deps_file.m"
              parse_tree__write_deps_file__V_768_768 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_768_768, 0) = ((MR_Box) ((MR_String) "\n"));
#line 729 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_768_768, 1) = ((MR_Box) (parse_tree__write_deps_file__V_770_770));
#line 729 "write_deps_file.m"
            }
#line 729 "write_deps_file.m"
            {
#line 729 "write_deps_file.m"
              parse_tree__write_deps_file__V_767_767 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_767_767, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 729 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_767_767, 1) = ((MR_Box) (parse_tree__write_deps_file__V_768_768));
#line 729 "write_deps_file.m"
            }
#line 729 "write_deps_file.m"
            {
#line 729 "write_deps_file.m"
              parse_tree__write_deps_file__V_765_765 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_765_765, 0) = ((MR_Box) ((MR_String) " : "));
#line 729 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_765_765, 1) = ((MR_Box) (parse_tree__write_deps_file__V_767_767));
#line 729 "write_deps_file.m"
            }
#line 729 "write_deps_file.m"
            {
#line 729 "write_deps_file.m"
              parse_tree__write_deps_file__V_764_764 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_764_764, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_67));
#line 729 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_764_764, 1) = ((MR_Box) (parse_tree__write_deps_file__V_765_765));
#line 729 "write_deps_file.m"
            }
#line 728 "write_deps_file.m"
            {
#line 728 "write_deps_file.m"
              parse_tree__write_deps_file__V_762_762 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_762_762, 0) = ((MR_Box) ((MR_String) " \044(ERR_REDIRECT)\n"));
#line 728 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_762_762, 1) = ((MR_Box) (parse_tree__write_deps_file__V_764_764));
#line 728 "write_deps_file.m"
            }
#line 728 "write_deps_file.m"
            {
#line 728 "write_deps_file.m"
              parse_tree__write_deps_file__V_761_761 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_761_761, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_97));
#line 728 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_761_761, 1) = ((MR_Box) (parse_tree__write_deps_file__V_762_762));
#line 728 "write_deps_file.m"
            }
#line 727 "write_deps_file.m"
            {
#line 727 "write_deps_file.m"
              parse_tree__write_deps_file__V_759_759 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_759_759, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
#line 727 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_759_759, 1) = ((MR_Box) (parse_tree__write_deps_file__V_761_761));
#line 727 "write_deps_file.m"
            }
#line 726 "write_deps_file.m"
            {
#line 726 "write_deps_file.m"
              parse_tree__write_deps_file__V_757_757 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_757_757, 0) = ((MR_Box) ((MR_String) "\n"));
#line 726 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_757_757, 1) = ((MR_Box) (parse_tree__write_deps_file__V_759_759));
#line 726 "write_deps_file.m"
            }
#line 726 "write_deps_file.m"
            {
#line 726 "write_deps_file.m"
              parse_tree__write_deps_file__V_756_756 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_756_756, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 726 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_756_756, 1) = ((MR_Box) (parse_tree__write_deps_file__V_757_757));
#line 726 "write_deps_file.m"
            }
#line 726 "write_deps_file.m"
            {
#line 726 "write_deps_file.m"
              parse_tree__write_deps_file__V_754_754 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_754_754, 0) = ((MR_Box) ((MR_String) " : "));
#line 726 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_754_754, 1) = ((MR_Box) (parse_tree__write_deps_file__V_756_756));
#line 726 "write_deps_file.m"
            }
#line 726 "write_deps_file.m"
            {
#line 726 "write_deps_file.m"
              parse_tree__write_deps_file__V_753_753 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_753_753, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_63));
#line 726 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_753_753, 1) = ((MR_Box) (parse_tree__write_deps_file__V_754_754));
#line 726 "write_deps_file.m"
            }
#line 725 "write_deps_file.m"
            {
#line 725 "write_deps_file.m"
              parse_tree__write_deps_file__V_751_751 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_751_751, 0) = ((MR_Box) ((MR_String) "\n"));
#line 725 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_751_751, 1) = ((MR_Box) (parse_tree__write_deps_file__V_753_753));
#line 725 "write_deps_file.m"
            }
#line 725 "write_deps_file.m"
            {
#line 725 "write_deps_file.m"
              parse_tree__write_deps_file__V_750_750 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_750_750, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_97));
#line 725 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_750_750, 1) = ((MR_Box) (parse_tree__write_deps_file__V_751_751));
#line 725 "write_deps_file.m"
            }
#line 725 "write_deps_file.m"
            {
#line 725 "write_deps_file.m"
              parse_tree__write_deps_file__V_748_748 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_748_748, 0) = ((MR_Box) ((MR_String) "\044(ALL_MCTOIFLAGS) "));
#line 725 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_748_748, 1) = ((MR_Box) (parse_tree__write_deps_file__V_750_750));
#line 725 "write_deps_file.m"
            }
#line 724 "write_deps_file.m"
            {
#line 724 "write_deps_file.m"
              parse_tree__write_deps_file__V_746_746 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_746_746, 0) = ((MR_Box) ((MR_String) "\t\044(MCTOI) \044(ALL_GRADEFLAGS) "));
#line 724 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_746_746, 1) = ((MR_Box) (parse_tree__write_deps_file__V_748_748));
#line 724 "write_deps_file.m"
            }
#line 723 "write_deps_file.m"
            {
#line 723 "write_deps_file.m"
              parse_tree__write_deps_file__V_744_744 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_744_744, 0) = ((MR_Box) ((MR_String) "\n"));
#line 723 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_744_744, 1) = ((MR_Box) (parse_tree__write_deps_file__V_746_746));
#line 723 "write_deps_file.m"
            }
#line 722 "write_deps_file.m"
            {
#line 722 "write_deps_file.m"
              parse_tree__write_deps_file__V_743_743 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_743_743, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 722 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_743_743, 1) = ((MR_Box) (parse_tree__write_deps_file__V_744_744));
#line 722 "write_deps_file.m"
            }
#line 722 "write_deps_file.m"
            {
#line 722 "write_deps_file.m"
              parse_tree__write_deps_file__V_741_741 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_741_741, 0) = ((MR_Box) ((MR_String) " : "));
#line 722 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_741_741, 1) = ((MR_Box) (parse_tree__write_deps_file__V_743_743));
#line 722 "write_deps_file.m"
            }
#line 722 "write_deps_file.m"
            {
#line 722 "write_deps_file.m"
              parse_tree__write_deps_file__V_740_740 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_740_740, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_42));
#line 722 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_740_740, 1) = ((MR_Box) (parse_tree__write_deps_file__V_741_741));
#line 722 "write_deps_file.m"
            }
#line 721 "write_deps_file.m"
            {
#line 721 "write_deps_file.m"
              parse_tree__write_deps_file__V_738_738 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 721 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_738_738, 0) = ((MR_Box) ((MR_String) "\n"));
#line 721 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_738_738, 1) = ((MR_Box) (parse_tree__write_deps_file__V_740_740));
#line 721 "write_deps_file.m"
            }
#line 721 "write_deps_file.m"
            {
#line 721 "write_deps_file.m"
              parse_tree__write_deps_file__V_737_737 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 721 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_737_737, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_97));
#line 721 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_737_737, 1) = ((MR_Box) (parse_tree__write_deps_file__V_738_738));
#line 721 "write_deps_file.m"
            }
#line 720 "write_deps_file.m"
            {
#line 720 "write_deps_file.m"
              parse_tree__write_deps_file__V_735_735 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_735_735, 0) = ((MR_Box) ((MR_String) "\t\044(MCOI) \044(ALL_GRADEFLAGS) \044(ALL_MCOIFLAGS) "));
#line 720 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_735_735, 1) = ((MR_Box) (parse_tree__write_deps_file__V_737_737));
#line 720 "write_deps_file.m"
            }
#line 719 "write_deps_file.m"
            {
#line 719 "write_deps_file.m"
              parse_tree__write_deps_file__V_733_733 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_733_733, 0) = ((MR_Box) ((MR_String) "\n"));
#line 719 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_733_733, 1) = ((MR_Box) (parse_tree__write_deps_file__V_735_735));
#line 719 "write_deps_file.m"
            }
#line 719 "write_deps_file.m"
            {
#line 719 "write_deps_file.m"
              parse_tree__write_deps_file__V_732_732 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_732_732, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 719 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_732_732, 1) = ((MR_Box) (parse_tree__write_deps_file__V_733_733));
#line 719 "write_deps_file.m"
            }
#line 719 "write_deps_file.m"
            {
#line 719 "write_deps_file.m"
              parse_tree__write_deps_file__V_730_730 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_730_730, 0) = ((MR_Box) ((MR_String) " : "));
#line 719 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_730_730, 1) = ((MR_Box) (parse_tree__write_deps_file__V_732_732));
#line 719 "write_deps_file.m"
            }
#line 719 "write_deps_file.m"
            {
#line 719 "write_deps_file.m"
              parse_tree__write_deps_file__V_729_729 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_729_729, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_62));
#line 719 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_729_729, 1) = ((MR_Box) (parse_tree__write_deps_file__V_730_730));
#line 719 "write_deps_file.m"
            }
#line 718 "write_deps_file.m"
            {
#line 718 "write_deps_file.m"
              parse_tree__write_deps_file__V_727_727 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_727_727, 0) = ((MR_Box) ((MR_String) "\n"));
#line 718 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_727_727, 1) = ((MR_Box) (parse_tree__write_deps_file__V_729_729));
#line 718 "write_deps_file.m"
            }
#line 718 "write_deps_file.m"
            {
#line 718 "write_deps_file.m"
              parse_tree__write_deps_file__V_726_726 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_726_726, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_97));
#line 718 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_726_726, 1) = ((MR_Box) (parse_tree__write_deps_file__V_727_727));
#line 718 "write_deps_file.m"
            }
#line 717 "write_deps_file.m"
            {
#line 717 "write_deps_file.m"
              parse_tree__write_deps_file__V_724_724 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 717 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_724_724, 0) = ((MR_Box) ((MR_String) "\t\044(MCSI) \044(ALL_GRADEFLAGS) \044(ALL_MCSIFLAGS) "));
#line 717 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_724_724, 1) = ((MR_Box) (parse_tree__write_deps_file__V_726_726));
#line 717 "write_deps_file.m"
            }
#line 716 "write_deps_file.m"
            {
#line 716 "write_deps_file.m"
              parse_tree__write_deps_file__V_722_722 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_722_722, 0) = ((MR_Box) ((MR_String) "\n"));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_722_722, 1) = ((MR_Box) (parse_tree__write_deps_file__V_724_724));
#line 716 "write_deps_file.m"
            }
#line 716 "write_deps_file.m"
            {
#line 716 "write_deps_file.m"
              parse_tree__write_deps_file__V_721_721 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_721_721, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_721_721, 1) = ((MR_Box) (parse_tree__write_deps_file__V_722_722));
#line 716 "write_deps_file.m"
            }
#line 716 "write_deps_file.m"
            {
#line 716 "write_deps_file.m"
              parse_tree__write_deps_file__V_719_719 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_719_719, 0) = ((MR_Box) ((MR_String) " : "));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_719_719, 1) = ((MR_Box) (parse_tree__write_deps_file__V_721_721));
#line 716 "write_deps_file.m"
            }
#line 716 "write_deps_file.m"
            {
#line 716 "write_deps_file.m"
              parse_tree__write_deps_file__V_718_718 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_718_718, 0) = ((MR_Box) (parse_tree__write_deps_file__Date3FileName_157));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_718_718, 1) = ((MR_Box) (parse_tree__write_deps_file__V_719_719));
#line 716 "write_deps_file.m"
            }
#line 715 "write_deps_file.m"
            {
#line 715 "write_deps_file.m"
              parse_tree__write_deps_file__V_716_716 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_716_716, 0) = ((MR_Box) ((MR_String) "\n"));
#line 715 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_716_716, 1) = ((MR_Box) (parse_tree__write_deps_file__V_718_718));
#line 715 "write_deps_file.m"
            }
#line 715 "write_deps_file.m"
            {
#line 715 "write_deps_file.m"
              parse_tree__write_deps_file__V_715_715 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_715_715, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_97));
#line 715 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_715_715, 1) = ((MR_Box) (parse_tree__write_deps_file__V_716_716));
#line 715 "write_deps_file.m"
            }
#line 714 "write_deps_file.m"
            {
#line 714 "write_deps_file.m"
              parse_tree__write_deps_file__V_713_713 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_713_713, 0) = ((MR_Box) ((MR_String) "\t\044(MCI) \044(ALL_GRADEFLAGS) \044(ALL_MCIFLAGS) "));
#line 714 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_713_713, 1) = ((MR_Box) (parse_tree__write_deps_file__V_715_715));
#line 714 "write_deps_file.m"
            }
#line 713 "write_deps_file.m"
            {
#line 713 "write_deps_file.m"
              parse_tree__write_deps_file__V_711_711 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_711_711, 0) = ((MR_Box) ((MR_String) "\n"));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_711_711, 1) = ((MR_Box) (parse_tree__write_deps_file__V_713_713));
#line 713 "write_deps_file.m"
            }
#line 713 "write_deps_file.m"
            {
#line 713 "write_deps_file.m"
              parse_tree__write_deps_file__V_710_710 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_710_710, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_710_710, 1) = ((MR_Box) (parse_tree__write_deps_file__V_711_711));
#line 713 "write_deps_file.m"
            }
#line 713 "write_deps_file.m"
            {
#line 713 "write_deps_file.m"
              parse_tree__write_deps_file__V_708_708 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_708_708, 0) = ((MR_Box) ((MR_String) " : "));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_708_708, 1) = ((MR_Box) (parse_tree__write_deps_file__V_710_710));
#line 713 "write_deps_file.m"
            }
#line 713 "write_deps_file.m"
            {
#line 713 "write_deps_file.m"
              parse_tree__write_deps_file__V_707_707 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_707_707, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_94));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_707_707, 1) = ((MR_Box) (parse_tree__write_deps_file__V_708_708));
#line 713 "write_deps_file.m"
            }
#line 712 "write_deps_file.m"
            {
#line 712 "write_deps_file.m"
              parse_tree__write_deps_file__V_705_705 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_705_705, 0) = ((MR_Box) ((MR_String) "\n"));
#line 712 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_705_705, 1) = ((MR_Box) (parse_tree__write_deps_file__V_707_707));
#line 712 "write_deps_file.m"
            }
#line 712 "write_deps_file.m"
            {
#line 712 "write_deps_file.m"
              parse_tree__write_deps_file__V_704_704 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_704_704, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_97));
#line 712 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_704_704, 1) = ((MR_Box) (parse_tree__write_deps_file__V_705_705));
#line 712 "write_deps_file.m"
            }
#line 712 "write_deps_file.m"
            {
#line 712 "write_deps_file.m"
              parse_tree__write_deps_file__V_702_702 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_702_702, 0) = ((MR_Box) ((MR_String) "\044(ALL_MCPIFLAGS) "));
#line 712 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_702_702, 1) = ((MR_Box) (parse_tree__write_deps_file__V_704_704));
#line 712 "write_deps_file.m"
            }
#line 711 "write_deps_file.m"
            {
#line 711 "write_deps_file.m"
              parse_tree__write_deps_file__V_700_700 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_700_700, 0) = ((MR_Box) ((MR_String) "\t\044(MCPI) \044(ALL_GRADEFLAGS) "));
#line 711 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_700_700, 1) = ((MR_Box) (parse_tree__write_deps_file__V_702_702));
#line 711 "write_deps_file.m"
            }
#line 710 "write_deps_file.m"
            {
#line 710 "write_deps_file.m"
              parse_tree__write_deps_file__V_698_698 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_698_698, 0) = ((MR_Box) ((MR_String) "\n"));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_698_698, 1) = ((MR_Box) (parse_tree__write_deps_file__V_700_700));
#line 710 "write_deps_file.m"
            }
#line 710 "write_deps_file.m"
            {
#line 710 "write_deps_file.m"
              parse_tree__write_deps_file__V_697_697 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_697_697, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_697_697, 1) = ((MR_Box) (parse_tree__write_deps_file__V_698_698));
#line 710 "write_deps_file.m"
            }
#line 710 "write_deps_file.m"
            {
#line 710 "write_deps_file.m"
              parse_tree__write_deps_file__V_695_695 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_695_695, 0) = ((MR_Box) ((MR_String) " : "));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_695_695, 1) = ((MR_Box) (parse_tree__write_deps_file__V_697_697));
#line 710 "write_deps_file.m"
            }
#line 710 "write_deps_file.m"
            {
#line 710 "write_deps_file.m"
              parse_tree__write_deps_file__V_694_694 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_694_694, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_95));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_694_694, 1) = ((MR_Box) (parse_tree__write_deps_file__V_695_695));
#line 710 "write_deps_file.m"
            }
#line 709 "write_deps_file.m"
            {
#line 709 "write_deps_file.m"
              parse_tree__write_deps_file__V_691_691 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_691_691, 0) = ((MR_Box) ((MR_String) "\n"));
#line 709 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_691_691, 1) = ((MR_Box) (parse_tree__write_deps_file__V_694_694));
#line 709 "write_deps_file.m"
            }
#line 708 "write_deps_file.m"
            {
#line 708 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_691_691);
            }
#line 708 "write_deps_file.m"
          }
#line 736 "write_deps_file.m"
        {
#line 736 "write_deps_file.m"
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DepStream_48);
        }
#line 737 "write_deps_file.m"
        {
#line 737 "write_deps_file.m"
          mercury__io__rename_file_5_p_0(parse_tree__write_deps_file__TmpDependencyFileName_43, parse_tree__write_deps_file__DependencyFileName_41, &parse_tree__write_deps_file__Result3_159);
        }
#line 770 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Result3_159 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 771 "write_deps_file.m"
          {
#line 772 "write_deps_file.m"
            {
#line 772 "write_deps_file.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_39, (MR_String) " done.\n");
#line 772 "write_deps_file.m"
              return;
            }
#line 771 "write_deps_file.m"
          }
#line 770 "write_deps_file.m"
        else
#line 740 "write_deps_file.m"
          {
#line 740 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Result4_161;

#line 743 "write_deps_file.m"
            {
#line 743 "write_deps_file.m"
              mercury__io__remove_file_4_p_0(parse_tree__write_deps_file__DependencyFileName_41, &parse_tree__write_deps_file__Result4_161);
            }
#line 752 "write_deps_file.m"
            if ((parse_tree__write_deps_file__Result4_161 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 753 "write_deps_file.m"
              {
#line 753 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__Result5_164;

#line 754 "write_deps_file.m"
                {
#line 754 "write_deps_file.m"
                  mercury__io__rename_file_5_p_0(parse_tree__write_deps_file__TmpDependencyFileName_43, parse_tree__write_deps_file__DependencyFileName_41, &parse_tree__write_deps_file__Result5_164);
                }
#line 765 "write_deps_file.m"
                if ((parse_tree__write_deps_file__Result5_164 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 766 "write_deps_file.m"
                  {
#line 767 "write_deps_file.m"
                    {
#line 767 "write_deps_file.m"
                      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_39, (MR_String) " done.\n");
#line 767 "write_deps_file.m"
                      return;
                    }
#line 766 "write_deps_file.m"
                  }
#line 765 "write_deps_file.m"
                else
#line 757 "write_deps_file.m"
                  {
#line 757 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__Error5_165 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result5_164, (MR_Integer) 0)));
#line 757 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_789_789;
#line 757 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_791_791;
#line 757 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_792_792;
#line 757 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_794_794;
#line 757 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_795_795;
#line 757 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_797_797;
#line 757 "write_deps_file.m"
                    MR_String parse_tree__write_deps_file__Message_834;
#line 757 "write_deps_file.m"
                    MR_String parse_tree__write_deps_file__ErrorMsg_835;

#line 758 "write_deps_file.m"
                    {
#line 758 "write_deps_file.m"
                      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_39, (MR_String) " failed.\n");
                    }
#line 759 "write_deps_file.m"
                    {
#line 759 "write_deps_file.m"
                      libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_39);
                    }
#line 760 "write_deps_file.m"
                    {
#line 760 "write_deps_file.m"
                      mercury__io__error_message_2_p_0(parse_tree__write_deps_file__Error5_165, &parse_tree__write_deps_file__ErrorMsg_835);
                    }
#line 763 "write_deps_file.m"
                    {
#line 763 "write_deps_file.m"
                      parse_tree__write_deps_file__V_797_797 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 763 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_797_797, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrorMsg_835));
#line 763 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_797_797, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 763 "write_deps_file.m"
                    }
#line 763 "write_deps_file.m"
                    {
#line 763 "write_deps_file.m"
                      parse_tree__write_deps_file__V_795_795 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 763 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_795_795, 0) = ((MR_Box) ((MR_String) "\': "));
#line 763 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_795_795, 1) = ((MR_Box) (parse_tree__write_deps_file__V_797_797));
#line 763 "write_deps_file.m"
                    }
#line 762 "write_deps_file.m"
                    {
#line 762 "write_deps_file.m"
                      parse_tree__write_deps_file__V_794_794 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_794_794, 0) = ((MR_Box) (parse_tree__write_deps_file__DependencyFileName_41));
#line 762 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_794_794, 1) = ((MR_Box) (parse_tree__write_deps_file__V_795_795));
#line 762 "write_deps_file.m"
                    }
#line 762 "write_deps_file.m"
                    {
#line 762 "write_deps_file.m"
                      parse_tree__write_deps_file__V_792_792 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_792_792, 0) = ((MR_Box) ((MR_String) "\' as \140"));
#line 762 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_792_792, 1) = ((MR_Box) (parse_tree__write_deps_file__V_794_794));
#line 762 "write_deps_file.m"
                    }
#line 762 "write_deps_file.m"
                    {
#line 762 "write_deps_file.m"
                      parse_tree__write_deps_file__V_791_791 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_791_791, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpDependencyFileName_43));
#line 762 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_791_791, 1) = ((MR_Box) (parse_tree__write_deps_file__V_792_792));
#line 762 "write_deps_file.m"
                    }
#line 761 "write_deps_file.m"
                    {
#line 761 "write_deps_file.m"
                      parse_tree__write_deps_file__V_789_789 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 761 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_789_789, 0) = ((MR_Box) ((MR_String) "can\'t rename file \140"));
#line 761 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_789_789, 1) = ((MR_Box) (parse_tree__write_deps_file__V_791_791));
#line 761 "write_deps_file.m"
                    }
#line 761 "write_deps_file.m"
                    {
#line 761 "write_deps_file.m"
                      mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_789_789, &parse_tree__write_deps_file__Message_834);
                    }
#line 764 "write_deps_file.m"
                    {
#line 764 "write_deps_file.m"
                      libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_834);
#line 764 "write_deps_file.m"
                      return;
                    }
#line 757 "write_deps_file.m"
                  }
#line 753 "write_deps_file.m"
              }
#line 752 "write_deps_file.m"
            else
#line 745 "write_deps_file.m"
              {
#line 745 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__Error4_162 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result4_161, (MR_Integer) 0)));
#line 745 "write_deps_file.m"
                MR_String parse_tree__write_deps_file__ErrorMsg_163;
#line 745 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_803_803;
#line 745 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_805_805;
#line 745 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_806_806;
#line 745 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_808_808;
#line 745 "write_deps_file.m"
                MR_String parse_tree__write_deps_file__Message_833;

#line 746 "write_deps_file.m"
                {
#line 746 "write_deps_file.m"
                  libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_39, (MR_String) " failed.\n");
                }
#line 747 "write_deps_file.m"
                {
#line 747 "write_deps_file.m"
                  libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_39);
                }
#line 748 "write_deps_file.m"
                {
#line 748 "write_deps_file.m"
                  mercury__io__error_message_2_p_0(parse_tree__write_deps_file__Error4_162, &parse_tree__write_deps_file__ErrorMsg_163);
                }
#line 750 "write_deps_file.m"
                {
#line 750 "write_deps_file.m"
                  parse_tree__write_deps_file__V_808_808 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_808_808, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrorMsg_163));
#line 750 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_808_808, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 750 "write_deps_file.m"
                }
#line 750 "write_deps_file.m"
                {
#line 750 "write_deps_file.m"
                  parse_tree__write_deps_file__V_806_806 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_806_806, 0) = ((MR_Box) ((MR_String) "\': "));
#line 750 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_806_806, 1) = ((MR_Box) (parse_tree__write_deps_file__V_808_808));
#line 750 "write_deps_file.m"
                }
#line 749 "write_deps_file.m"
                {
#line 749 "write_deps_file.m"
                  parse_tree__write_deps_file__V_805_805 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_805_805, 0) = ((MR_Box) (parse_tree__write_deps_file__DependencyFileName_41));
#line 749 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_805_805, 1) = ((MR_Box) (parse_tree__write_deps_file__V_806_806));
#line 749 "write_deps_file.m"
                }
#line 749 "write_deps_file.m"
                {
#line 749 "write_deps_file.m"
                  parse_tree__write_deps_file__V_803_803 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_803_803, 0) = ((MR_Box) ((MR_String) "can\'t remove file \140"));
#line 749 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_803_803, 1) = ((MR_Box) (parse_tree__write_deps_file__V_805_805));
#line 749 "write_deps_file.m"
                }
#line 749 "write_deps_file.m"
                {
#line 749 "write_deps_file.m"
                  mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_803_803, &parse_tree__write_deps_file__Message_833);
                }
#line 751 "write_deps_file.m"
                {
#line 751 "write_deps_file.m"
                  libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_833);
#line 751 "write_deps_file.m"
                  return;
                }
#line 745 "write_deps_file.m"
              }
#line 740 "write_deps_file.m"
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
