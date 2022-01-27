/*
** Automatically generated from `write_deps_file.m'
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
#include "libs.op_mode.mih"
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



#line 1894 "write_deps_file.m"
struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s {
#line 1894 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17;
#line 1900 "write_deps_file.m"
  MR_bool parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded;
#line 1918 "write_deps_file.m"
  jmp_buf parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0;
#line 1918 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__TypeCtorInfo_366_366;
#line 1918 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_44_44;
#line 1918 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_45_45;
#line 1918 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339;
#line 1918 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_29_29;
#line 1918 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_V_29_29;
#line 1918 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_V_44_44;
#line 1894 "write_deps_file.m"
};


#line 138 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 141 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 144 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

#line 147 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

#line 150 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

#line 153 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

#line 1555 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(
#line 1555 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1555 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 1555 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4,
#line 1555 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5);

#line 1548 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(
#line 1548 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_5,
#line 1548 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_6,
#line 1548 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__ExtraLinkObjs_8);

#line 992 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0_1(
#line 992 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 992 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 1181 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1181__1_5_p_0(
#line 1181 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1181 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_117,
#line 1181 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__LambdaHeadVar__2_118);

#line 1135 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1135__1_2_p_0(
#line 1135 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1135 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_90);

#line 1026 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1026__1_4_p_0(
#line 1026 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsGraph_8,
#line 1026 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_15,
#line 1026 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__2_16,
#line 1026 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__LambdaHeadVar__3_17);

#line 2270 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__referenced_dlls__2270__1_1_f_0(
#line 2270 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_17);

#line 993 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_files__993__1_2_p_0(
#line 993 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_33,
#line 993 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_59);

#line 608 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__608__1_7_p_0(
#line 608 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 608 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_48,
#line 608 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImportedModuleNames_145,
#line 608 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ForeignImportExt_147,
#line 608 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__LambdaHeadVar__1_557);

#line 574 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__574__1_3_p_0(
#line 574 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SourceFileModuleName_13,
#line 574 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_548,
#line 574 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__LambdaHeadVar__2_549);

#line 282 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__282__1_7_p_0(
#line 282 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 282 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_14,
#line 282 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__NestedDeps_22,
#line 282 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_48,
#line 282 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__LambdaHeadVar__1_303);

#line 2387 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__compare_module_names_3_p_0(
#line 2387 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym1_4,
#line 2387 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym2_5,
#line 2387 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__Result_6);

#line 2295 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_both_opt_deps_8_p_0(
#line 2295 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 2295 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__BuildOptFiles_2,
#line 2295 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IntermodDirs_3,
#line 2295 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4,
#line 2295 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__5_5,
#line 2295 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__6_6);

#line 2255 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0_1(
#line 2255 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2255 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2255 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2255 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 2250 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0(
#line 2250 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Stream_5,
#line 2250 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SCC0_6);

#line 2206 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_source_file_3_p_0(
#line 2206 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_4,
#line 2206 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_5,
#line 2206 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__FileName_6);

#line 2118 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(
#line 2118 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_17,
#line 2118 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_18,
#line 2118 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_19,
#line 2118 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_20,
#line 2118 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ExeFileName_21,
#line 2118 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_22,
#line 2118 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_23,
#line 2118 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitPicObjFileName_24,
#line 2118 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_25,
#line 2118 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__LibFileName_26,
#line 2118 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SharedLibFileName_27,
#line 2118 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__JarFileName_28,
#line 2118 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DepFileName_29,
#line 2118 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DvFileName_30);

#line 2105 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(
#line 2105 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 2105 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_9,
#line 2105 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 2105 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_11,
#line 2105 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__5_5);

#line 2089 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1(
#line 2089 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2089 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2089 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2089 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 2083 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(
#line 2083 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 2083 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 2083 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 2083 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_10);

#line 1918 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(
#line 1918 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 1918 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3(
#line 1918 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 1918 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(
#line 1918 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 1918 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(
#line 1918 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg);

#line 1894 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(
#line 1894 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_14,
#line 1894 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_15,
#line 1894 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_16,
#line 1894 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_17,
#line 1894 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_18,
#line 1894 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_19,
#line 1894 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_20,
#line 1894 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_21,
#line 1894 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_22,
#line 1894 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeOptsVar_23,
#line 1894 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeTransOptsVar_24);

#line 1851 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(
#line 1851 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_11,
#line 1851 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12,
#line 1851 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_13,
#line 1851 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_14,
#line 1851 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_15,
#line 1851 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_16,
#line 1851 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DepFileName_17,
#line 1851 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DvFileName_18);

#line 1638 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(
#line 1638 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_19,
#line 1638 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_20,
#line 1638 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_21,
#line 1638 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_22,
#line 1638 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_23,
#line 1638 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_24,
#line 1638 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_25,
#line 1638 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_26,
#line 1638 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_27,
#line 1638 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeOptsVar_28,
#line 1638 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeTransOptsVar_29,
#line 1638 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeModuleDepsVar_30,
#line 1638 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__ExeFileName_31,
#line 1638 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__JarFileName_32,
#line 1638 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__LibFileName_33,
#line 1638 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__SharedLibFileName_34);

#line 1580 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_7_p_0(
#line 1580 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1580 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1580 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1580 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1580 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12);

#line 1494 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__select_ok_modules_3_p_0(
#line 1494 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1494 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_2,
#line 1494 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_3);

#line 1181 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_4(
#line 1181 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1181 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1181 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
#line 1181 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
#line 1181 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4);

#line 1135 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_3(
#line 1135 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1135 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 1116 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_2(
#line 1116 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1116 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1116 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 1113 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_1(
#line 1113 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1113 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1113 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 1113 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 1089 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0(
#line 1089 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1089 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1089 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1089 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1089 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12);

#line 1026 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1(
#line 1026 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1026 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1026 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 1026 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 1020 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(
#line 1020 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsGraph0_4,
#line 1020 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_5,
#line 1020 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__Dependencies_6);

#line 911 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(
#line 911 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 911 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 911 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 911 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Ext_10);

#line 898 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(
#line 898 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_1,
#line 898 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_2,
#line 898 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3);

#line 885 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(
#line 885 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 885 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_2,
#line 885 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 885 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4);

#line 872 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(
#line 872 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 872 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_2,
#line 872 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 872 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 872 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__5_5);

#line 862 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependency_5_p_0(
#line 862 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 862 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 862 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFile_8);

#line 859 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0_1(
#line 859 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 859 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 859 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 859 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 853 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0(
#line 853 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 853 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 853 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFiles_8);

#line 827 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(
#line 827 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 827 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2);

#line 805 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(
#line 805 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 805 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_10,
#line 805 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Prefix_11,
#line 805 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_12,
#line 805 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Basis_13,
#line 805 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_14);

#line 794 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_list_6_p_0(
#line 794 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 794 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_2,
#line 794 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 794 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4);

#line 787 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_set_6_p_0(
#line 787 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 787 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 787 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_9,
#line 787 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_10);

#line 2270 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__referenced_dlls_2_f_0_1(
#line 2270 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2270 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 2234 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1(
#line 2234 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2234 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2234 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2234 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 671 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_6(
#line 671 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 671 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 671 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 671 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 608 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_5(
#line 608 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 608 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 608 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 608 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

#line 574 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_4(
#line 574 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 574 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 574 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

#line 386 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_3(
#line 386 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 386 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 367 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_2(
#line 367 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 367 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

#line 282 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_1(
#line 282 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 282 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 282 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 282 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[112][2];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[9][3];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[3][1];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[3][10];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[3][5];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[4][6];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_7[1][9];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[2][7];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[2][8];




static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[112][2] = {
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
    ((MR_Box) ((MR_String) ".c_date")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) ".trans_opt_date")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) ".optdate")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[10])))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "\t\100:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) ".dll")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) ".class")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) ".java")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) ".pic_o")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) ".\044O")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) ".c")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[1])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[10])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "endif\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) " \044(ALL_MLLIBS)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "\tdone\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "\t\t} || exit 1; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044(INSTALL_INT_DIR)\"/*.\044\044ext \"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "\t\t\t{ [ -d \"\044\044dir\" ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(LN_S) .. \"\044\044dir\" || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "\t\trm -rf \"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "\t\tdir=\"\044(INSTALL_INT_DIR)/Mercury/\044\044{ext}s\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[31])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "; do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\t\"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[26])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044(INSTALL_GRADE_INT_DIR)\"/*.\044\044ext \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\\n")),
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
    ((MR_Box) ((MR_String) "\t\tdir=\"\044(INSTALL_GRADE_INT_DIR)/Mercury/\044\044{ext}s\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_String) "; do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_String) "\tdone\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[23])))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_INC_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_String) ".mhs); do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_String) "\t} || exit 1\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[23])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_INT_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[47])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_String) "\t\t} && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_INT_DIR)/Mercury/mihs; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[49])))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \044(INSTALL_INT_DIR)/Mercury/mihs ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \044(INSTALL_INT_DIR)/Mercury/mihs || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[52])))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \044(INSTALL_INT_DIR)/Mercury/mihs\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[53])))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_String) "\t} || exit 1\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_GRADE_INC_SUBDIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_String) "\t\t} && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \044(INSTALL_GRADE_INC_SUBDIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[58])))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \044(INSTALL_GRADE_INC_SUBDIR) ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[59])))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \044(INSTALL_GRADE_INC_SUBDIR) || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \044(INSTALL_GRADE_INC_SUBDIR)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails, then we just use\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[63])))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_String) "\t# The following is needed to support the \140--use-subdirs\' option\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[64])))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_String) "\tdone\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[65])))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_GRADE_INC_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[66])))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[67])))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_String) ".mihs); do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[68])))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_String) ".all_trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 71 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[70])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_String) ".all_opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 73 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[72])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[71])))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_String) ".all_int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 75 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[74])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[73])))
  },
  /* row 76 */
  {
    ((MR_Box) ((MR_String) ".all_ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 77 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[76])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[75])))
  },
  /* row 78 */
  {
    ((MR_Box) ((MR_String) ".classes")),
    ((MR_Box) ((MR_String) ".classes"))
  },
  /* row 79 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[78])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[77])))
  },
  /* row 80 */
  {
    ((MR_Box) ((MR_String) ".javas")),
    ((MR_Box) ((MR_String) ".javas"))
  },
  /* row 81 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[80])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[79])))
  },
  /* row 82 */
  {
    ((MR_Box) ((MR_String) ".trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 83 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[82])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[81])))
  },
  /* row 84 */
  {
    ((MR_Box) ((MR_String) ".opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 85 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[84])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[83])))
  },
  /* row 86 */
  {
    ((MR_Box) ((MR_String) ".int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 87 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[86])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[85])))
  },
  /* row 88 */
  {
    ((MR_Box) ((MR_String) ".ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 89 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[88])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[87])))
  },
  /* row 90 */
  {
    ((MR_Box) ((MR_String) ".check")),
    ((MR_Box) ((MR_String) ".errs"))
  },
  /* row 91 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[90])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[89])))
  },
  /* row 92 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 93 */
  {
    ((MR_Box) ((MR_String) ".foreign_cs) | xargs rm -f\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[92])))
  },
  /* row 94 */
  {
    ((MR_Box) ((MR_String) " :")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 95 */
  {
    ((MR_Box) ((MR_String) ".fact_tables =")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 96 */
  {
    ((MR_Box) ((MR_String) ".fact_tables.cs =")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 97 */
  {
    ((MR_Box) ((MR_String) ".fact_tables.os =")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 98 */
  {
    ((MR_Box) ((MR_String) ".fact_tables:%=\044(cs_subdir)%.c)\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 99 */
  {
    ((MR_Box) ((MR_String) " : ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_String) " \044(ERR_REDIRECT)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_String) ".cs)\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLLIBS_DEP))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLOBJS))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLOBJS)))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_String) "ifeq (\044(findstring java,\044(GRADE)),java)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_String) ".classes)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_String) "else\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_String) " \044(ALL_MLLIBS)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_String) "\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_String) ")\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 111 */
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



#line 1652 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1660 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1668 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

#line 1676 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0
  }
};

#line 1685 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1694 "parse_tree.write_deps_file.c"
static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1555 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(
#line 1555 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1555 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
#line 1555 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4,
#line 1555 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5)
#line 1555 "write_deps_file.m"
{
#line 1560 "write_deps_file.m"
  while (MR_TRUE)
#line 1560 "write_deps_file.m"
    {
#line 1560 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 1560 "write_deps_file.m"
      {
#line 1560 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 1560 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1560 "write_deps_file.m"
          *parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4;
#line 1560 "write_deps_file.m"
        else
#line 1562 "write_deps_file.m"
          {
#line 1562 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_54_54 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1562 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_56_56;
#line 1562 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1562 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Modules_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1562 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ModuleImports_17;
#line 1562 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FactDeps_18;
#line 1562 "write_deps_file.m"
            MR_Integer parse_tree__write_deps_file__NumFactDeps_19;
#line 1562 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ModuleList_20;
#line 1562 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__NewLinkObjs_22;
#line 1562 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_25_25;
#line 1562 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26;
#line 1563 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv0_V_25_25;
#line 1563 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_16_16;
#line 1566 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_28_28;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_29_29;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_30_30;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_31_31;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_32_32;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_33_33;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_34_34;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_35_35;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_36_36;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_37_37;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_38_38;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_39_39;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_40_40;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_41_41;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_42_42;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_43_43;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_44_44;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_45_45;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_46_46;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_47_47;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_48_48;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_49_49;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_50_50;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_51_51;
#line 1566 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_52_52;
#line 1566 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_53_53;

#line 1563 "write_deps_file.m"
            {
#line 1563 "write_deps_file.m"
              mercury__map__lookup_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_54_54, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__HeadVar__2_2, ((MR_Box) (parse_tree__write_deps_file__Module_11)), &parse_tree__write_deps_file__conv0_V_25_25);
            }
#line 1563 "write_deps_file.m"
            parse_tree__write_deps_file__V_25_25 = ((MR_Word) parse_tree__write_deps_file__conv0_V_25_25);
#line 1563 "write_deps_file.m"
            parse_tree__write_deps_file__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_25_25, (MR_Integer) 0)));
#line 1563 "write_deps_file.m"
            parse_tree__write_deps_file__ModuleImports_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_25_25, (MR_Integer) 1)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 0)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 1)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 2)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 3)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 4)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 5)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 6)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 7)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 8)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 9)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 10)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__FactDeps_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 11)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 12)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 13)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 14)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 15)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 16)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 17)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 18)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 19)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 20)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 21)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 22)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 23)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 24)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 25)));
#line 1566 "write_deps_file.m"
            parse_tree__write_deps_file__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 26)));
#line 1879 "parse_tree.write_deps_file.c"
            parse_tree__write_deps_file__TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1567 "write_deps_file.m"
            {
#line 1567 "write_deps_file.m"
              mercury__list__length_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_56_56, parse_tree__write_deps_file__FactDeps_18, &parse_tree__write_deps_file__NumFactDeps_19);
            }
#line 1568 "write_deps_file.m"
            {
#line 1568 "write_deps_file.m"
              mercury__list__duplicate_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_54_54, parse_tree__write_deps_file__NumFactDeps_19, ((MR_Box) (parse_tree__write_deps_file__Module_11)), &parse_tree__write_deps_file__ModuleList_20);
            }
#line 1569 "write_deps_file.m"
            {
#line 1569 "write_deps_file.m"
              mercury__assoc_list__from_corresponding_lists_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_56_56, parse_tree__write_deps_file__TypeCtorInfo_54_54, parse_tree__write_deps_file__FactDeps_18, parse_tree__write_deps_file__ModuleList_20, &parse_tree__write_deps_file__NewLinkObjs_22);
            }
#line 1575 "write_deps_file.m"
            {
#line 1575 "write_deps_file.m"
              mercury__list__append_3_p_1((MR_Word) &parse_tree__write_deps_file_scalar_common_2[2], parse_tree__write_deps_file__NewLinkObjs_22, parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4, &parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26);
            }
#line 1576 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 1576 "write_deps_file.m"
            {
#line 1576 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__1__tmp_copy_1 = parse_tree__write_deps_file__Modules_12;
#line 1576 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0__tmp_copy_4 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26;

#line 1576 "write_deps_file.m"
              parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0__tmp_copy_4;
#line 1576 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__1_1 = parse_tree__write_deps_file__HeadVar__1__tmp_copy_1;
#line 1576 "write_deps_file.m"
            }
#line 1576 "write_deps_file.m"
            continue;
#line 1562 "write_deps_file.m"
          }
#line 1560 "write_deps_file.m"
      }
#line 1560 "write_deps_file.m"
      break;
#line 1560 "write_deps_file.m"
    }
#line 1555 "write_deps_file.m"
}

#line 1548 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(
#line 1548 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_5,
#line 1548 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_6,
#line 1548 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__ExtraLinkObjs_8)
#line 1548 "write_deps_file.m"
{
#line 1551 "write_deps_file.m"
  {
#line 1551 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1551 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ExtraLinkObjs0_9;

#line 1552 "write_deps_file.m"
    {
#line 1552 "write_deps_file.m"
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(parse_tree__write_deps_file__Modules_5, parse_tree__write_deps_file__DepsMap_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_deps_file__ExtraLinkObjs0_9);
    }
#line 1553 "write_deps_file.m"
    {
#line 1553 "write_deps_file.m"
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_2[2], parse_tree__write_deps_file__ExtraLinkObjs0_9, parse_tree__write_deps_file__ExtraLinkObjs_8);
#line 1553 "write_deps_file.m"
      return;
    }
#line 1551 "write_deps_file.m"
  }
#line 1548 "write_deps_file.m"
}

#line 992 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0_1(
#line 992 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 992 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 992 "write_deps_file.m"
{
#line 992 "write_deps_file.m"
  {
#line 992 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 992 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 992 "write_deps_file.m"
    {
#line 992 "write_deps_file.m"
      return parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_files__993__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 992 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 992 "write_deps_file.m"
  }
#line 992 "write_deps_file.m"
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
#line 929 "write_deps_file.m"
  while (MR_TRUE)
#line 929 "write_deps_file.m"
    {
#line 929 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 929 "write_deps_file.m"
      {
#line 929 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 929 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 929 "write_deps_file.m"
          {
#line 929 "write_deps_file.m"
          }
#line 929 "write_deps_file.m"
        else
#line 932 "write_deps_file.m"
          {
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_135_135;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Dep_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 0)));
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Deps_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 1)));
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ModuleName_33;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__IndirectOptDeps_34;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Intermod_35;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__IntDeps_36;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ImpDeps_37;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__IndirectDeps_38;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ForeignImportModules0_39;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Target_40;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ForeignImportModules_41;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FindModule_42;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDeps0_45;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDeps_48;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Errors_49;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FatalErrors_50;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Dep_22, (MR_Integer) 1)));
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_56_56;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_57_57;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_60_60;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_136_136;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_137_137;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_138_138;
#line 932 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_139_139;
#line 934 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Dep_22, (MR_Integer) 0)));
#line 982 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_81_81;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_82_82;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_83_83;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_84_84;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_85_85;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_86_86;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_87_87;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_88_88;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_89_89;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_90_90;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_91_91;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_92_92;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_94_94;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_95_95;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_96_96;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_97_97;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_98_98;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_99_99;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_100_100;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_101_101;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_102_102;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_103_103;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_104_104;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_105_105;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_106_106;
#line 982 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_107_107;
#line 982 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_93_93;
#line 995 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_44_44;
#line 999 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOptDeps1_47;
#line 996 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_46_46;
#line 1006 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_108_108;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_109_109;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_110_110;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_111_111;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_112_112;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_113_113;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_114_114;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_115_115;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_116_116;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_117_117;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_118_118;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_119_119;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_120_120;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_121_121;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_122_122;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_123_123;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_124_124;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_125_125;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_126_126;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_127_127;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_128_128;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_129_129;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_130_130;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_131_131;
#line 1006 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_132_132;
#line 1006 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__V_133_133;

#line 940 "write_deps_file.m"
            {
#line 940 "write_deps_file.m"
              parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, &parse_tree__write_deps_file__ModuleName_33);
            }
#line 941 "write_deps_file.m"
            {
#line 941 "write_deps_file.m"
              parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__IndirectOptDepsGraph_6, parse_tree__write_deps_file__ModuleName_33, &parse_tree__write_deps_file__IndirectOptDeps_34);
            }
#line 943 "write_deps_file.m"
            {
#line 943 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_1, (MR_Integer) 320, &parse_tree__write_deps_file__Intermod_35);
            }
#line 953 "write_deps_file.m"
#line 953 "write_deps_file.m"
            switch (parse_tree__write_deps_file__Intermod_35) {
#line 953 "write_deps_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 953 "write_deps_file.m"
              case (MR_Integer) 0:
#line 954 "write_deps_file.m"
                {
#line 955 "write_deps_file.m"
                  {
#line 955 "write_deps_file.m"
                    parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__IntDepsGraph_3, parse_tree__write_deps_file__ModuleName_33, &parse_tree__write_deps_file__IntDeps_36);
                  }
#line 956 "write_deps_file.m"
                  {
#line 956 "write_deps_file.m"
                    parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__ImpDepsGraph_4, parse_tree__write_deps_file__ModuleName_33, &parse_tree__write_deps_file__ImpDeps_37);
                  }
#line 957 "write_deps_file.m"
                  {
#line 957 "write_deps_file.m"
                    parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__IndirectDepsGraph_5, parse_tree__write_deps_file__ModuleName_33, &parse_tree__write_deps_file__IndirectDeps_38);
                  }
#line 954 "write_deps_file.m"
                }
#line 953 "write_deps_file.m"
                break;
#line 953 "write_deps_file.m"
              case (MR_Integer) 1:
#line 946 "write_deps_file.m"
                {
#line 950 "write_deps_file.m"
                  parse_tree__write_deps_file__IntDeps_36 = parse_tree__write_deps_file__IndirectOptDeps_34;
#line 951 "write_deps_file.m"
                  parse_tree__write_deps_file__ImpDeps_37 = parse_tree__write_deps_file__IndirectOptDeps_34;
#line 952 "write_deps_file.m"
                  parse_tree__write_deps_file__IndirectDeps_38 = parse_tree__write_deps_file__IndirectOptDeps_34;
#line 946 "write_deps_file.m"
                }
#line 953 "write_deps_file.m"
                break;
#line 953 "write_deps_file.m"
            }
#line 963 "write_deps_file.m"
            {
#line 963 "write_deps_file.m"
              parse_tree__write_deps_file__ForeignImportModules0_39 = parse_tree__prog_data__init_foreign_import_modules_0_f_0();
            }
#line 964 "write_deps_file.m"
            {
#line 964 "write_deps_file.m"
              libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_1, &parse_tree__write_deps_file__Target_40);
            }
#line 967 "write_deps_file.m"
            parse_tree__write_deps_file__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_39, (MR_Integer) 0)));
#line 967 "write_deps_file.m"
            parse_tree__write_deps_file__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_39, (MR_Integer) 1)));
#line 967 "write_deps_file.m"
            parse_tree__write_deps_file__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_39, (MR_Integer) 2)));
#line 967 "write_deps_file.m"
            parse_tree__write_deps_file__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_39, (MR_Integer) 3)));
#line 969 "write_deps_file.m"
#line 969 "write_deps_file.m"
            switch (parse_tree__write_deps_file__Target_40) {
#line 969 "write_deps_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 969 "write_deps_file.m"
              case (MR_Integer) 0:
#line 967 "write_deps_file.m"
                {
#line 967 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportModules_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 967 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 0) = ((MR_Box) (parse_tree__write_deps_file__IndirectOptDeps_34));
#line 967 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_138_138));
#line 967 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 2) = ((MR_Box) (parse_tree__write_deps_file__V_137_137));
#line 967 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 3) = ((MR_Box) (parse_tree__write_deps_file__V_136_136));
#line 967 "write_deps_file.m"
                }
#line 969 "write_deps_file.m"
                break;
#line 969 "write_deps_file.m"
              case (MR_Integer) 1:
#line 971 "write_deps_file.m"
                {
#line 971 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportModules_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 971 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 0) = ((MR_Box) (parse_tree__write_deps_file__V_139_139));
#line 971 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 1) = ((MR_Box) (parse_tree__write_deps_file__IndirectOptDeps_34));
#line 971 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 2) = ((MR_Box) (parse_tree__write_deps_file__V_137_137));
#line 971 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 3) = ((MR_Box) (parse_tree__write_deps_file__V_136_136));
#line 971 "write_deps_file.m"
                }
#line 969 "write_deps_file.m"
                break;
#line 969 "write_deps_file.m"
              case (MR_Integer) 3:
#line 979 "write_deps_file.m"
                {
#line 979 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportModules_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 979 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 0) = ((MR_Box) (parse_tree__write_deps_file__V_139_139));
#line 979 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_138_138));
#line 979 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 2) = ((MR_Box) (parse_tree__write_deps_file__V_137_137));
#line 979 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 3) = ((MR_Box) (parse_tree__write_deps_file__IndirectOptDeps_34));
#line 979 "write_deps_file.m"
                }
#line 969 "write_deps_file.m"
                break;
#line 969 "write_deps_file.m"
              case (MR_Integer) 2:
#line 975 "write_deps_file.m"
                {
#line 975 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportModules_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 975 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 0) = ((MR_Box) (parse_tree__write_deps_file__V_139_139));
#line 975 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_138_138));
#line 975 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 2) = ((MR_Box) (parse_tree__write_deps_file__IndirectOptDeps_34));
#line 975 "write_deps_file.m"
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_41, 3) = ((MR_Box) (parse_tree__write_deps_file__V_136_136));
#line 975 "write_deps_file.m"
                }
#line 969 "write_deps_file.m"
                break;
#line 969 "write_deps_file.m"
            }
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_81_81 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 0)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 1)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 2)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 3)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 4)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 5)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 6)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 7)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 8)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 9)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 10)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 11)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 12)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 13)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 14)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 15)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 16)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 17)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 18)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 19)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 20)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 21)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 22)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 23)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 24)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 25)));
#line 982 "write_deps_file.m"
            parse_tree__write_deps_file__V_107_107 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_53_53, (MR_Integer) 26)));
#line 982 "write_deps_file.m"
            {
#line 982 "write_deps_file.m"
              parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 0) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_82_82));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 2) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 3) = ((MR_Box) (parse_tree__write_deps_file__V_84_84));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 4) = ((MR_Box) (parse_tree__write_deps_file__V_85_85));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 5) = ((MR_Box) (parse_tree__write_deps_file__V_86_86));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 6) = ((MR_Box) (parse_tree__write_deps_file__V_87_87));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 7) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 8) = ((MR_Box) (parse_tree__write_deps_file__V_89_89));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 9) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 10) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 11) = ((MR_Box) (parse_tree__write_deps_file__V_92_92));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 12) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportModules_41));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 13) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 14) = ((MR_Box) (parse_tree__write_deps_file__V_95_95));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 15) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 16) = ((MR_Box) (parse_tree__write_deps_file__V_97_97));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 17) = ((MR_Box) (parse_tree__write_deps_file__V_98_98));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 18) = ((MR_Box) (parse_tree__write_deps_file__V_99_99));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 19) = ((MR_Box) (parse_tree__write_deps_file__V_100_100));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 20) = ((MR_Box) (parse_tree__write_deps_file__V_101_101));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 21) = ((MR_Box) (parse_tree__write_deps_file__V_102_102));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 22) = ((MR_Box) (parse_tree__write_deps_file__V_103_103));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 23) = ((MR_Box) (parse_tree__write_deps_file__V_104_104));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 24) = ((MR_Box) (parse_tree__write_deps_file__V_105_105));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 25) = ((MR_Box) (parse_tree__write_deps_file__V_106_106));
#line 982 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, 26) = ((MR_Box) (parse_tree__write_deps_file__V_107_107));
#line 982 "write_deps_file.m"
            }
#line 984 "write_deps_file.m"
            {
#line 984 "write_deps_file.m"
              parse_tree__module_imports__module_and_imports_set_int_deps_3_p_0(parse_tree__write_deps_file__IntDeps_36, parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_55_55, &parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_56_56);
            }
#line 985 "write_deps_file.m"
            {
#line 985 "write_deps_file.m"
              parse_tree__module_imports__module_and_imports_set_imp_deps_3_p_0(parse_tree__write_deps_file__ImpDeps_37, parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_56_56, &parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_57_57);
            }
#line 986 "write_deps_file.m"
            {
#line 986 "write_deps_file.m"
              parse_tree__module_imports__module_and_imports_set_indirect_deps_3_p_0(parse_tree__write_deps_file__IndirectDeps_38, parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_57_57, &parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58);
            }
#line 992 "write_deps_file.m"
            {
#line 992 "write_deps_file.m"
              parse_tree__write_deps_file__FindModule_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 992 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_42, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[1]));
#line 992 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_42, 1) = ((MR_Box) (parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0_1));
#line 992 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 992 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_42, 3) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_33));
#line 992 "write_deps_file.m"
            }
#line 995 "write_deps_file.m"
            {
#line 995 "write_deps_file.m"
              mercury__list__takewhile_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_deps_file__FindModule_42, parse_tree__write_deps_file__TransOptOrder_7, &parse_tree__write_deps_file__V_44_44, &parse_tree__write_deps_file__TransOptDeps0_45);
            }
#line 996 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__TransOptDeps0_45)) == (MR_mktag((MR_Integer) 1)));
#line 996 "write_deps_file.m"
            if (parse_tree__write_deps_file__succeeded)
#line 996 "write_deps_file.m"
              {
#line 996 "write_deps_file.m"
                parse_tree__write_deps_file__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__TransOptDeps0_45, (MR_Integer) 0)));
#line 996 "write_deps_file.m"
                parse_tree__write_deps_file__TransOptDeps1_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__TransOptDeps0_45, (MR_Integer) 1)));
#line 998 "write_deps_file.m"
                parse_tree__write_deps_file__TransOptDeps_48 = parse_tree__write_deps_file__TransOptDeps1_47;
#line 996 "write_deps_file.m"
              }
#line 996 "write_deps_file.m"
            else
#line 1000 "write_deps_file.m"
              parse_tree__write_deps_file__TransOptDeps_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_108_108 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 0)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 1)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 2)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 3)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 4)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 5)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 6)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 7)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 8)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 9)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 10)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 11)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 12)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 13)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 14)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 15)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 16)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 17)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 18)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 19)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 20)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 21)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 22)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__Errors_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 23)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 24)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 25)));
#line 1006 "write_deps_file.m"
            parse_tree__write_deps_file__V_133_133 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, (MR_Integer) 26)));
#line 1007 "write_deps_file.m"
            {
#line 1007 "write_deps_file.m"
              parse_tree__write_deps_file__V_60_60 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
            }
#line 2582 "parse_tree.write_deps_file.c"
            parse_tree__write_deps_file__TypeCtorInfo_135_135 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1007 "write_deps_file.m"
            {
#line 1007 "write_deps_file.m"
              mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_135_135, parse_tree__write_deps_file__Errors_49, parse_tree__write_deps_file__V_60_60, &parse_tree__write_deps_file__FatalErrors_50);
            }
#line 1008 "write_deps_file.m"
            {
#line 1008 "write_deps_file.m"
              parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_135_135, parse_tree__write_deps_file__FatalErrors_50);
            }
#line 1011 "write_deps_file.m"
            if (parse_tree__write_deps_file__succeeded)
#line 1009 "write_deps_file.m"
              {
#line 1009 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_61_61;

#line 1010 "write_deps_file.m"
                {
#line 1010 "write_deps_file.m"
                  parse_tree__write_deps_file__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_61_61, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDeps_48));
#line 1010 "write_deps_file.m"
                }
#line 1009 "write_deps_file.m"
                {
#line 1009 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependency_file_6_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_58_58, parse_tree__write_deps_file__IndirectOptDeps_34, parse_tree__write_deps_file__V_61_61);
                }
#line 1009 "write_deps_file.m"
              }
#line 1011 "write_deps_file.m"
            else
#line 1011 "write_deps_file.m"
              {
#line 1011 "write_deps_file.m"
              }
#line 1014 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 1014 "write_deps_file.m"
            {
#line 1014 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__2__tmp_copy_2 = parse_tree__write_deps_file__Deps_23;

#line 1014 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__2_2 = parse_tree__write_deps_file__HeadVar__2__tmp_copy_2;
#line 1014 "write_deps_file.m"
            }
#line 1014 "write_deps_file.m"
            continue;
#line 932 "write_deps_file.m"
          }
#line 929 "write_deps_file.m"
      }
#line 929 "write_deps_file.m"
      break;
#line 929 "write_deps_file.m"
    }
#line 59 "write_deps_file.m"
}

#line 1181 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1181__1_5_p_0(
#line 1181 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1181 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_117,
#line 1181 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__LambdaHeadVar__2_118)
#line 1181 "write_deps_file.m"
{
#line 1181 "write_deps_file.m"
  {
#line 1181 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1181 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__F0_43;
#line 1181 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__M_443 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__LambdaHeadVar__1_117, (MR_Integer) 0)));
#line 1181 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__E_444 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__LambdaHeadVar__1_117, (MR_Integer) 1)));

#line 1182 "write_deps_file.m"
    {
#line 1182 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__M_443, parse_tree__write_deps_file__E_444, (MR_Integer) 0, &parse_tree__write_deps_file__F0_43);
    }
#line 1183 "write_deps_file.m"
    {
#line 1183 "write_deps_file.m"
      *parse_tree__write_deps_file__LambdaHeadVar__2_118 = mercury__string__f_43_43_2_f_0((MR_String) "\044(os_subdir)", parse_tree__write_deps_file__F0_43);
    }
#line 1181 "write_deps_file.m"
  }
#line 1181 "write_deps_file.m"
}

#line 1135 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1135__1_2_p_0(
#line 1135 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1135 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_90)
#line 1135 "write_deps_file.m"
{
#line 1135 "write_deps_file.m"
  {
#line 1135 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_481_481 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleImports_26;
#line 1135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 1135 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_92_92;
#line 1137 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_V_91_91;
#line 1137 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_25_25;
#line 1138 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_447_447;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_448_448;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_449_449;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_450_450;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_451_451;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_452_452;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_453_453;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_454_454;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_455_455;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_456_456;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_457_457;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_458_458;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_459_459;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_460_460;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_461_461;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_462_462;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_463_463;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_464_464;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_465_465;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_466_466;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_467_467;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_468_468;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_469_469;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_470_470;
#line 1138 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_471_471;
#line 1138 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_472_472;

#line 1137 "write_deps_file.m"
    {
#line 1137 "write_deps_file.m"
      mercury__map__lookup_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_481_481, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_11, ((MR_Box) (parse_tree__write_deps_file__LambdaHeadVar__1_90)), &parse_tree__write_deps_file__conv0_V_91_91);
    }
#line 1137 "write_deps_file.m"
    parse_tree__write_deps_file__V_91_91 = ((MR_Word) parse_tree__write_deps_file__conv0_V_91_91);
#line 1137 "write_deps_file.m"
    parse_tree__write_deps_file__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_91_91, (MR_Integer) 0)));
#line 1137 "write_deps_file.m"
    parse_tree__write_deps_file__ModuleImports_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_91_91, (MR_Integer) 1)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_447_447 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 0)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_448_448 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 1)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_449_449 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 2)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_450_450 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 3)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_451_451 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 4)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_452_452 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 5)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_453_453 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 6)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_454_454 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 7)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 8)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_455_455 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 9)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_456_456 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 10)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_457_457 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 11)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_458_458 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 12)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_459_459 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 13)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_460_460 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 14)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_461_461 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 15)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_462_462 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 16)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_463_463 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 17)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_464_464 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 18)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_465_465 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 19)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_466_466 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 20)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_467_467 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 21)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_468_468 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 22)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_469_469 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 23)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_470_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 24)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_471_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 25)));
#line 1138 "write_deps_file.m"
    parse_tree__write_deps_file__V_472_472 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 26)));
#line 1138 "write_deps_file.m"
    {
#line 1138 "write_deps_file.m"
      return parse_tree__write_deps_file__succeeded = mercury__set__non_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_481_481, parse_tree__write_deps_file__V_92_92);
    }
#line 1135 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1135 "write_deps_file.m"
  }
#line 1135 "write_deps_file.m"
}

#line 1026 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1026__1_4_p_0(
#line 1026 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsGraph_8,
#line 1026 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_15,
#line 1026 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__2_16,
#line 1026 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__LambdaHeadVar__3_17)
#line 1026 "write_deps_file.m"
{
#line 1026 "write_deps_file.m"
  {
#line 1026 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1026 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_23_23 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1026 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Dep_14;
#line 1028 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_Dep_14;

#line 1028 "write_deps_file.m"
    {
#line 1028 "write_deps_file.m"
      mercury__digraph__lookup_vertex_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, parse_tree__write_deps_file__DepsGraph_8, parse_tree__write_deps_file__LambdaHeadVar__1_15, &parse_tree__write_deps_file__conv0_Dep_14);
    }
#line 1028 "write_deps_file.m"
    parse_tree__write_deps_file__Dep_14 = ((MR_Word) parse_tree__write_deps_file__conv0_Dep_14);
#line 1029 "write_deps_file.m"
    {
#line 1029 "write_deps_file.m"
      mercury__set__insert_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, ((MR_Box) (parse_tree__write_deps_file__Dep_14)), parse_tree__write_deps_file__LambdaHeadVar__2_16, parse_tree__write_deps_file__LambdaHeadVar__3_17);
#line 1029 "write_deps_file.m"
      return;
    }
#line 1026 "write_deps_file.m"
  }
#line 1026 "write_deps_file.m"
}

#line 2270 "write_deps_file.m"
static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__referenced_dlls__2270__1_1_f_0(
#line 2270 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_17)
#line 2270 "write_deps_file.m"
{
#line 2270 "write_deps_file.m"
  {
#line 2270 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__LambdaHeadVar__2_18;

#line 2271 "write_deps_file.m"
    {
#line 2271 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__LambdaHeadVar__1_17);
    }
#line 2270 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 2272 "write_deps_file.m"
      {
#line 2272 "write_deps_file.m"
        parse_tree__write_deps_file__LambdaHeadVar__2_18 = (MR_Word) &parse_tree__write_deps_file_scalar_common_3[2];
#line 2272 "write_deps_file.m"
      }
#line 2270 "write_deps_file.m"
    else
#line 2275 "write_deps_file.m"
      {
#line 2275 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_20_20;

#line 2275 "write_deps_file.m"
        {
#line 2275 "write_deps_file.m"
          parse_tree__write_deps_file__V_20_20 = mdbcomp__sym_name__outermost_qualifier_1_f_0(parse_tree__write_deps_file__LambdaHeadVar__1_17);
        }
#line 2275 "write_deps_file.m"
        {
#line 2275 "write_deps_file.m"
          parse_tree__write_deps_file__LambdaHeadVar__2_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 2275 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__LambdaHeadVar__2_18, 0) = ((MR_Box) (parse_tree__write_deps_file__V_20_20));
#line 2275 "write_deps_file.m"
        }
#line 2275 "write_deps_file.m"
      }
#line 2270 "write_deps_file.m"
    return parse_tree__write_deps_file__LambdaHeadVar__2_18;
#line 2270 "write_deps_file.m"
  }
#line 2270 "write_deps_file.m"
}

#line 993 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_files__993__1_2_p_0(
#line 993 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_33,
#line 993 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_59)
#line 993 "write_deps_file.m"
{
#line 993 "write_deps_file.m"
  {
#line 993 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 993 "write_deps_file.m"
    {
#line 993 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__write_deps_file__ModuleName_33, parse_tree__write_deps_file__LambdaHeadVar__1_59);
    }
#line 993 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 993 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 993 "write_deps_file.m"
  }
#line 993 "write_deps_file.m"
}

#line 608 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__608__1_7_p_0(
#line 608 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 608 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_48,
#line 608 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ForeignImportedModuleNames_145,
#line 608 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ForeignImportExt_147,
#line 608 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__LambdaHeadVar__1_557)
#line 608 "write_deps_file.m"
{
#line 608 "write_deps_file.m"
  {
#line 608 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 608 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_565_565;

#line 610 "write_deps_file.m"
    {
#line 610 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_48, (MR_String) "\n\n");
    }
#line 611 "write_deps_file.m"
    {
#line 611 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__LambdaHeadVar__1_557);
    }
#line 612 "write_deps_file.m"
    {
#line 612 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_48, (MR_String) " : ");
    }
#line 615 "write_deps_file.m"
    {
#line 615 "write_deps_file.m"
      parse_tree__write_deps_file__V_565_565 = mercury__set__to_sorted_list_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_deps_file__ForeignImportedModuleNames_145);
    }
#line 613 "write_deps_file.m"
    {
#line 613 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__ForeignImportExt_147, parse_tree__write_deps_file__V_565_565);
    }
#line 616 "write_deps_file.m"
    {
#line 616 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_48, (MR_String) "\n\n");
#line 616 "write_deps_file.m"
      return;
    }
#line 608 "write_deps_file.m"
  }
#line 608 "write_deps_file.m"
}

#line 574 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__574__1_3_p_0(
#line 574 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SourceFileModuleName_13,
#line 574 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_548,
#line 574 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__LambdaHeadVar__2_549)
#line 574 "write_deps_file.m"
{
#line 574 "write_deps_file.m"
  {
#line 574 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 581 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_550_550;

#line 576 "write_deps_file.m"
    {
#line 576 "write_deps_file.m"
      *parse_tree__write_deps_file__LambdaHeadVar__2_549 = parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(parse_tree__write_deps_file__LambdaHeadVar__1_548, parse_tree__write_deps_file__SourceFileModuleName_13);
    }
#line 581 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) *parse_tree__write_deps_file__LambdaHeadVar__2_549)) == (MR_mktag((MR_Integer) 0)));
#line 581 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 581 "write_deps_file.m"
      {
#line 581 "write_deps_file.m"
        parse_tree__write_deps_file__V_550_550 = ((MR_String) (MR_hl_field(MR_mktag(0), *parse_tree__write_deps_file__LambdaHeadVar__2_549, (MR_Integer) 0)));
#line 581 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__V_550_550, (MR_String) "mercury") == 0);
#line 581 "write_deps_file.m"
      }
#line 581 "write_deps_file.m"
    parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
#line 574 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 574 "write_deps_file.m"
  }
#line 574 "write_deps_file.m"
}

#line 282 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__282__1_7_p_0(
#line 282 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 282 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_14,
#line 282 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__NestedDeps_22,
#line 282 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_48,
#line 282 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__LambdaHeadVar__1_303)
#line 282 "write_deps_file.m"
{
#line 282 "write_deps_file.m"
  {
#line 282 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 282 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ExtName_72;
#line 282 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_308_308;
#line 282 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_311_311;

#line 283 "write_deps_file.m"
    {
#line 283 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__LambdaHeadVar__1_303, (MR_Integer) 1, &parse_tree__write_deps_file__ExtName_72);
    }
#line 285 "write_deps_file.m"
    {
#line 285 "write_deps_file.m"
      parse_tree__write_deps_file__V_311_311 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_311_311, 0) = ((MR_Box) (parse_tree__write_deps_file__ExtName_72));
#line 285 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_311_311, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[99])));
#line 285 "write_deps_file.m"
    }
#line 285 "write_deps_file.m"
    {
#line 285 "write_deps_file.m"
      parse_tree__write_deps_file__V_308_308 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_308_308, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 285 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_308_308, 1) = ((MR_Box) (parse_tree__write_deps_file__V_311_311));
#line 285 "write_deps_file.m"
    }
#line 285 "write_deps_file.m"
    {
#line 285 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_308_308);
    }
#line 286 "write_deps_file.m"
    {
#line 286 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__LambdaHeadVar__1_303, parse_tree__write_deps_file__NestedDeps_22);
#line 286 "write_deps_file.m"
      return;
    }
#line 282 "write_deps_file.m"
  }
#line 282 "write_deps_file.m"
}

#line 2387 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__compare_module_names_3_p_0(
#line 2387 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym1_4,
#line 2387 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Sym2_5,
#line 2387 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__Result_6)
#line 2387 "write_deps_file.m"
{
#line 2390 "write_deps_file.m"
  {
#line 2390 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2390 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Str1_7;
#line 2390 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Str2_8;

#line 2391 "write_deps_file.m"
    {
#line 2391 "write_deps_file.m"
      parse_tree__write_deps_file__Str1_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__Sym1_4);
    }
#line 2392 "write_deps_file.m"
    {
#line 2392 "write_deps_file.m"
      parse_tree__write_deps_file__Str2_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__Sym2_5);
    }
#line 2393 "write_deps_file.m"
    {
#line 2393 "write_deps_file.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__write_deps_file__Result_6, parse_tree__write_deps_file__Str1_7, parse_tree__write_deps_file__Str2_8);
#line 2393 "write_deps_file.m"
      return;
    }
#line 2390 "write_deps_file.m"
  }
#line 2387 "write_deps_file.m"
}

#line 2295 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_both_opt_deps_8_p_0(
#line 2295 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 2295 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__BuildOptFiles_2,
#line 2295 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IntermodDirs_3,
#line 2295 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4,
#line 2295 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__5_5,
#line 2295 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__6_6)
#line 2295 "write_deps_file.m"
{
#line 2299 "write_deps_file.m"
  {
#line 2299 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 2299 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2299 "write_deps_file.m"
      {
#line 2299 "write_deps_file.m"
        *parse_tree__write_deps_file__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2299 "write_deps_file.m"
        *parse_tree__write_deps_file__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2299 "write_deps_file.m"
      }
#line 2299 "write_deps_file.m"
    else
#line 2301 "write_deps_file.m"
      {
#line 2301 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Dep_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 0)));
#line 2301 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Deps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 1)));
#line 2301 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
#line 2301 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;

#line 2302 "write_deps_file.m"
        {
#line 2302 "write_deps_file.m"
          parse_tree__write_deps_file__get_both_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__BuildOptFiles_2, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__Deps_19, &parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39, &parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40);
        }
#line 3228 "parse_tree.write_deps_file.c"
#line 3229 "parse_tree.write_deps_file.c"
        switch (parse_tree__write_deps_file__BuildOptFiles_2) {
#line 3231 "parse_tree.write_deps_file.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 3233 "parse_tree.write_deps_file.c"
          case (MR_Integer) 0:
#line 3235 "parse_tree.write_deps_file.c"
            {
#line 3237 "parse_tree.write_deps_file.c"
              MR_String parse_tree__write_deps_file__OptName_27;
#line 3239 "parse_tree.write_deps_file.c"
              MR_Word parse_tree__write_deps_file__Result2_28;
#line 3241 "parse_tree.write_deps_file.c"
              MR_String parse_tree__write_deps_file__TransOptName_31;
#line 3243 "parse_tree.write_deps_file.c"
              MR_Word parse_tree__write_deps_file__Result3_32;

#line 2325 "write_deps_file.m"
              {
#line 2325 "write_deps_file.m"
                parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptName_27);
              }
#line 2327 "write_deps_file.m"
              {
#line 2327 "write_deps_file.m"
                libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__OptName_27, &parse_tree__write_deps_file__Result2_28);
              }
#line 2332 "write_deps_file.m"
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_28)) == (MR_mktag((MR_Integer) 1))))
#line 2333 "write_deps_file.m"
                *parse_tree__write_deps_file__HeadVar__5_5 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
#line 2332 "write_deps_file.m"
              else
#line 2331 "write_deps_file.m"
                {
#line 2331 "write_deps_file.m"
                  MR_Word base;
#line 2331 "write_deps_file.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2331 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__5_5 = base;
#line 2331 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2331 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
#line 2331 "write_deps_file.m"
                }
#line 2335 "write_deps_file.m"
              {
#line 2335 "write_deps_file.m"
                parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptName_31);
              }
#line 2337 "write_deps_file.m"
              {
#line 2337 "write_deps_file.m"
                libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__TransOptName_31, &parse_tree__write_deps_file__Result3_32);
              }
#line 2342 "write_deps_file.m"
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result3_32)) == (MR_mktag((MR_Integer) 1))))
#line 2343 "write_deps_file.m"
                *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;
#line 2342 "write_deps_file.m"
              else
#line 2341 "write_deps_file.m"
                {
#line 2341 "write_deps_file.m"
                  MR_Word base;
#line 2341 "write_deps_file.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2341 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2341 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2341 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
#line 2341 "write_deps_file.m"
                }
#line 3306 "parse_tree.write_deps_file.c"
            }
#line 3308 "parse_tree.write_deps_file.c"
            break;
#line 3310 "parse_tree.write_deps_file.c"
          case (MR_Integer) 1:
#line 3312 "parse_tree.write_deps_file.c"
            {
#line 3314 "parse_tree.write_deps_file.c"
              MR_Word parse_tree__write_deps_file__Result1_23;

#line 2307 "write_deps_file.m"
              {
#line 2307 "write_deps_file.m"
                parse_tree__prog_io_find__search_for_module_source_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__Dep_18, &parse_tree__write_deps_file__Result1_23);
              }
#line 3322 "parse_tree.write_deps_file.c"
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result1_23)) == (MR_mktag((MR_Integer) 1))))
#line 3324 "parse_tree.write_deps_file.c"
                {
#line 3326 "parse_tree.write_deps_file.c"
                  MR_String parse_tree__write_deps_file__OptName_59;
#line 3328 "parse_tree.write_deps_file.c"
                  MR_Word parse_tree__write_deps_file__Result2_60;
#line 3330 "parse_tree.write_deps_file.c"
                  MR_String parse_tree__write_deps_file__TransOptName_61;
#line 3332 "parse_tree.write_deps_file.c"
                  MR_Word parse_tree__write_deps_file__Result3_62;

#line 2325 "write_deps_file.m"
                  {
#line 2325 "write_deps_file.m"
                    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptName_59);
                  }
#line 2327 "write_deps_file.m"
                  {
#line 2327 "write_deps_file.m"
                    libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__OptName_59, &parse_tree__write_deps_file__Result2_60);
                  }
#line 2332 "write_deps_file.m"
                  if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_60)) == (MR_mktag((MR_Integer) 1))))
#line 2333 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__5_5 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
#line 2332 "write_deps_file.m"
                  else
#line 2331 "write_deps_file.m"
                    {
#line 2331 "write_deps_file.m"
                      MR_Word base;
#line 2331 "write_deps_file.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2331 "write_deps_file.m"
                      *parse_tree__write_deps_file__HeadVar__5_5 = base;
#line 2331 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2331 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
#line 2331 "write_deps_file.m"
                    }
#line 2335 "write_deps_file.m"
                  {
#line 2335 "write_deps_file.m"
                    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptName_61);
                  }
#line 2337 "write_deps_file.m"
                  {
#line 2337 "write_deps_file.m"
                    libs__file_util__search_for_file_returning_dir_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__TransOptName_61, &parse_tree__write_deps_file__Result3_62);
                  }
#line 2342 "write_deps_file.m"
                  if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result3_62)) == (MR_mktag((MR_Integer) 1))))
#line 2343 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;
#line 2342 "write_deps_file.m"
                  else
#line 2341 "write_deps_file.m"
                    {
#line 2341 "write_deps_file.m"
                      MR_Word base;
#line 2341 "write_deps_file.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2341 "write_deps_file.m"
                      *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2341 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2341 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
#line 2341 "write_deps_file.m"
                    }
#line 3395 "parse_tree.write_deps_file.c"
                }
#line 3397 "parse_tree.write_deps_file.c"
              else
#line 3399 "parse_tree.write_deps_file.c"
                {
#line 2311 "write_deps_file.m"
                  {
#line 2311 "write_deps_file.m"
                    MR_Word base;
#line 2311 "write_deps_file.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2311 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__5_5 = base;
#line 2311 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2311 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
#line 2311 "write_deps_file.m"
                  }
#line 2312 "write_deps_file.m"
                  {
#line 2312 "write_deps_file.m"
                    MR_Word base;
#line 2312 "write_deps_file.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2312 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2312 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
#line 2312 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
#line 2312 "write_deps_file.m"
                  }
#line 2313 "write_deps_file.m"
                  {
#line 2313 "write_deps_file.m"
                    mercury__io__seen_2_p_0();
#line 2313 "write_deps_file.m"
                    return;
                  }
#line 3436 "parse_tree.write_deps_file.c"
                }
#line 3438 "parse_tree.write_deps_file.c"
            }
#line 3440 "parse_tree.write_deps_file.c"
            break;
#line 3442 "parse_tree.write_deps_file.c"
        }
#line 2301 "write_deps_file.m"
      }
#line 2299 "write_deps_file.m"
  }
#line 2295 "write_deps_file.m"
}

#line 2255 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0_1(
#line 2255 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2255 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2255 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2255 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 2255 "write_deps_file.m"
{
#line 2255 "write_deps_file.m"
  {
#line 2255 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 2255 "write_deps_file.m"
    {
#line 2255 "write_deps_file.m"
      parse_tree__prog_out__write_sym_name_3_p_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 2255 "write_deps_file.m"
      return;
    }
#line 2255 "write_deps_file.m"
  }
#line 2255 "write_deps_file.m"
}

#line 2250 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0(
#line 2250 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Stream_5,
#line 2250 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__SCC0_6)
#line 2250 "write_deps_file.m"
{
#line 2253 "write_deps_file.m"
  {
#line 2253 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2253 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_14_14 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2253 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SCC_8;

#line 2254 "write_deps_file.m"
    {
#line 2254 "write_deps_file.m"
      mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_14_14, parse_tree__write_deps_file__SCC0_6, &parse_tree__write_deps_file__SCC_8);
    }
#line 2255 "write_deps_file.m"
    {
#line 2255 "write_deps_file.m"
      mercury__io__write_list_6_p_0(parse_tree__write_deps_file__TypeCtorInfo_14_14, parse_tree__write_deps_file__Stream_5, parse_tree__write_deps_file__SCC_8, (MR_String) "\n", (MR_Word) &parse_tree__write_deps_file_scalar_common_2[8]);
#line 2255 "write_deps_file.m"
      return;
    }
#line 2253 "write_deps_file.m"
  }
#line 2250 "write_deps_file.m"
}

#line 2206 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_source_file_3_p_0(
#line 2206 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_4,
#line 2206 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_5,
#line 2206 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__FileName_6)
#line 2206 "write_deps_file.m"
{
#line 2208 "write_deps_file.m"
  {
#line 2208 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2208 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Deps_7;
#line 2208 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleAndImports_9;
#line 2208 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SourceFileName_10;
#line 2209 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_Deps_7;
#line 2210 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_8_8;
#line 2214 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SourceFileBase_11;

#line 2209 "write_deps_file.m"
    {
#line 2209 "write_deps_file.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_4, ((MR_Box) (parse_tree__write_deps_file__ModuleName_5)), &parse_tree__write_deps_file__conv0_Deps_7);
    }
#line 2209 "write_deps_file.m"
    parse_tree__write_deps_file__Deps_7 = ((MR_Word) parse_tree__write_deps_file__conv0_Deps_7);
#line 2210 "write_deps_file.m"
    parse_tree__write_deps_file__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Deps_7, (MR_Integer) 0)));
#line 2210 "write_deps_file.m"
    parse_tree__write_deps_file__ModuleAndImports_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Deps_7, (MR_Integer) 1)));
#line 2211 "write_deps_file.m"
    {
#line 2211 "write_deps_file.m"
      parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(parse_tree__write_deps_file__ModuleAndImports_9, &parse_tree__write_deps_file__SourceFileName_10);
    }
#line 2212 "write_deps_file.m"
    {
#line 2212 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__write_deps_file__SourceFileName_10, (MR_String) ".m", &parse_tree__write_deps_file__SourceFileBase_11);
    }
#line 2214 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 2213 "write_deps_file.m"
      *parse_tree__write_deps_file__FileName_6 = parse_tree__write_deps_file__SourceFileBase_11;
#line 2214 "write_deps_file.m"
    else
#line 2215 "write_deps_file.m"
      {
#line 2215 "write_deps_file.m"
        {
#line 2215 "write_deps_file.m"
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_deps_file", (MR_String) "predicate \140parse_tree.write_deps_file.get_source_file\'/3", (MR_String) "source file name doesn\'t end in \140.m\'");
#line 2215 "write_deps_file.m"
          return;
        }
#line 2215 "write_deps_file.m"
      }
#line 2208 "write_deps_file.m"
  }
#line 2206 "write_deps_file.m"
}

#line 2118 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(
#line 2118 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_17,
#line 2118 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_18,
#line 2118 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_19,
#line 2118 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_20,
#line 2118 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__ExeFileName_21,
#line 2118 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_22,
#line 2118 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_23,
#line 2118 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitPicObjFileName_24,
#line 2118 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_25,
#line 2118 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__LibFileName_26,
#line 2118 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SharedLibFileName_27,
#line 2118 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__JarFileName_28,
#line 2118 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DepFileName_29,
#line 2118 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__DvFileName_30)
#line 2118 "write_deps_file.m"
{
#line 2126 "write_deps_file.m"
  {
#line 2126 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2126 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__CleanTargetName_32;
#line 2126 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__RealCleanTargetName_33;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_39_39;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_42_42;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_43_43;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_46_46;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_49_49;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_50_50;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_52_52;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_53_53;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_55_55;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_57_57;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_58_58;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_60_60;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_62_62;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_63_63;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_65_65;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_66_66;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_68_68;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_70_70;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_71_71;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_73_73;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_75_75;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_76_76;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_78_78;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_79_79;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_81_81;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_83_83;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_84_84;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_86_86;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_87_87;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_89_89;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_92_92;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_94_94;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_96_96;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_97_97;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_99_99;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_101_101;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_102_102;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_104_104;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_106_106;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_107_107;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_109_109;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_111_111;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_112_112;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_114_114;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_116_116;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_117_117;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_119_119;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_121_121;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_130_130;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_133_133;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_137_137;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_140_140;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_141_141;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_143_143;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_144_144;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_146_146;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_147_147;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_149_149;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_151_151;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_152_152;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_154_154;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_156_156;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_157_157;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_159_159;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_161_161;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_162_162;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_164_164;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_166_166;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_167_167;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_169_169;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_171_171;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_172_172;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_174_174;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_176_176;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_177_177;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_179_179;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_181_181;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_182_182;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_184_184;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_186_186;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_187_187;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_189_189;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_191_191;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_192_192;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_194_194;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_196_196;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_197_197;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_199_199;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_201_201;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_202_202;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_204_204;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_206_206;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_207_207;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_209_209;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_211_211;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_212_212;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_214_214;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_216_216;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_217_217;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_219_219;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_221_221;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_222_222;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_224_224;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_226_226;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_227_227;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_229_229;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_231_231;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_232_232;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_234_234;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_236_236;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_237_237;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_239_239;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_241_241;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_242_242;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_244_244;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_246_246;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_250_250;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_253_253;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_254_254;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_256_256;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_257_257;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_259_259;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_260_260;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_262_262;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_263_263;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_265_265;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_266_266;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_268_268;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_269_269;
#line 2126 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_271_271;

#line 2135 "write_deps_file.m"
    {
#line 2135 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_17, parse_tree__write_deps_file__ModuleName_19, (MR_String) ".clean", (MR_Integer) 1, &parse_tree__write_deps_file__CleanTargetName_32);
    }
#line 2139 "write_deps_file.m"
    parse_tree__write_deps_file__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[92]);
#line 2138 "write_deps_file.m"
    {
#line 2138 "write_deps_file.m"
      parse_tree__write_deps_file__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2138 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2138 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_42_42, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 2138 "write_deps_file.m"
    }
#line 2138 "write_deps_file.m"
    {
#line 2138 "write_deps_file.m"
      parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2138 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) ((MR_String) "clean_local : "));
#line 2138 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (parse_tree__write_deps_file__V_42_42));
#line 2138 "write_deps_file.m"
    }
#line 2137 "write_deps_file.m"
    {
#line 2137 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_39_39);
    }
#line 2157 "write_deps_file.m"
    {
#line 2157 "write_deps_file.m"
      parse_tree__write_deps_file__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2157 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_121_121, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2157 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_121_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[93])));
#line 2157 "write_deps_file.m"
    }
#line 2157 "write_deps_file.m"
    {
#line 2157 "write_deps_file.m"
      parse_tree__write_deps_file__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2157 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_119_119, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2157 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_119_119, 1) = ((MR_Box) (parse_tree__write_deps_file__V_121_121));
#line 2157 "write_deps_file.m"
    }
#line 2156 "write_deps_file.m"
    {
#line 2156 "write_deps_file.m"
      parse_tree__write_deps_file__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2156 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_117_117, 0) = ((MR_Box) ((MR_String) ".errs) | xargs rm -f\n"));
#line 2156 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_117_117, 1) = ((MR_Box) (parse_tree__write_deps_file__V_119_119));
#line 2156 "write_deps_file.m"
    }
#line 2156 "write_deps_file.m"
    {
#line 2156 "write_deps_file.m"
      parse_tree__write_deps_file__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2156 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_116_116, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2156 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_116_116, 1) = ((MR_Box) (parse_tree__write_deps_file__V_117_117));
#line 2156 "write_deps_file.m"
    }
#line 2156 "write_deps_file.m"
    {
#line 2156 "write_deps_file.m"
      parse_tree__write_deps_file__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2156 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_114_114, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2156 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_114_114, 1) = ((MR_Box) (parse_tree__write_deps_file__V_116_116));
#line 2156 "write_deps_file.m"
    }
#line 2155 "write_deps_file.m"
    {
#line 2155 "write_deps_file.m"
      parse_tree__write_deps_file__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2155 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 0) = ((MR_Box) ((MR_String) ".profs) | xargs rm -f\n"));
#line 2155 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 1) = ((MR_Box) (parse_tree__write_deps_file__V_114_114));
#line 2155 "write_deps_file.m"
    }
#line 2155 "write_deps_file.m"
    {
#line 2155 "write_deps_file.m"
      parse_tree__write_deps_file__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2155 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2155 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 1) = ((MR_Box) (parse_tree__write_deps_file__V_112_112));
#line 2155 "write_deps_file.m"
    }
#line 2155 "write_deps_file.m"
    {
#line 2155 "write_deps_file.m"
      parse_tree__write_deps_file__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2155 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2155 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_109_109, 1) = ((MR_Box) (parse_tree__write_deps_file__V_111_111));
#line 2155 "write_deps_file.m"
    }
#line 2154 "write_deps_file.m"
    {
#line 2154 "write_deps_file.m"
      parse_tree__write_deps_file__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2154 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_107_107, 0) = ((MR_Box) ((MR_String) ".javas) | xargs rm -f\n"));
#line 2154 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_107_107, 1) = ((MR_Box) (parse_tree__write_deps_file__V_109_109));
#line 2154 "write_deps_file.m"
    }
#line 2154 "write_deps_file.m"
    {
#line 2154 "write_deps_file.m"
      parse_tree__write_deps_file__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2154 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2154 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 1) = ((MR_Box) (parse_tree__write_deps_file__V_107_107));
#line 2154 "write_deps_file.m"
    }
#line 2154 "write_deps_file.m"
    {
#line 2154 "write_deps_file.m"
      parse_tree__write_deps_file__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2154 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2154 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 1) = ((MR_Box) (parse_tree__write_deps_file__V_106_106));
#line 2154 "write_deps_file.m"
    }
#line 2153 "write_deps_file.m"
    {
#line 2153 "write_deps_file.m"
      parse_tree__write_deps_file__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2153 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 0) = ((MR_Box) ((MR_String) ".useds) | xargs rm -f\n"));
#line 2153 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 1) = ((MR_Box) (parse_tree__write_deps_file__V_104_104));
#line 2153 "write_deps_file.m"
    }
#line 2153 "write_deps_file.m"
    {
#line 2153 "write_deps_file.m"
      parse_tree__write_deps_file__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2153 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2153 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 1) = ((MR_Box) (parse_tree__write_deps_file__V_102_102));
#line 2153 "write_deps_file.m"
    }
#line 2153 "write_deps_file.m"
    {
#line 2153 "write_deps_file.m"
      parse_tree__write_deps_file__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2153 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2153 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 1) = ((MR_Box) (parse_tree__write_deps_file__V_101_101));
#line 2153 "write_deps_file.m"
    }
#line 2152 "write_deps_file.m"
    {
#line 2152 "write_deps_file.m"
      parse_tree__write_deps_file__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2152 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_97_97, 0) = ((MR_Box) ((MR_String) ".java_dates) | xargs rm -f\n"));
#line 2152 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_97_97, 1) = ((MR_Box) (parse_tree__write_deps_file__V_99_99));
#line 2152 "write_deps_file.m"
    }
#line 2152 "write_deps_file.m"
    {
#line 2152 "write_deps_file.m"
      parse_tree__write_deps_file__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2152 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2152 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 1) = ((MR_Box) (parse_tree__write_deps_file__V_97_97));
#line 2152 "write_deps_file.m"
    }
#line 2152 "write_deps_file.m"
    {
#line 2152 "write_deps_file.m"
      parse_tree__write_deps_file__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2152 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2152 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 1) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 2152 "write_deps_file.m"
    }
#line 2151 "write_deps_file.m"
    {
#line 2151 "write_deps_file.m"
      parse_tree__write_deps_file__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2151 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 0) = ((MR_Box) ((MR_String) ".c_dates) | xargs rm -f\n"));
#line 2151 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 1) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 2151 "write_deps_file.m"
    }
#line 2151 "write_deps_file.m"
    {
#line 2151 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2151 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2151 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__V_92_92));
#line 2151 "write_deps_file.m"
    }
#line 2151 "write_deps_file.m"
    {
#line 2151 "write_deps_file.m"
      parse_tree__write_deps_file__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2151 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_89_89, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2151 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_89_89, 1) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 2151 "write_deps_file.m"
    }
#line 2150 "write_deps_file.m"
    {
#line 2150 "write_deps_file.m"
      parse_tree__write_deps_file__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2150 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
#line 2150 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 1) = ((MR_Box) (parse_tree__write_deps_file__V_89_89));
#line 2150 "write_deps_file.m"
    }
#line 2150 "write_deps_file.m"
    {
#line 2150 "write_deps_file.m"
      parse_tree__write_deps_file__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2150 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 0) = ((MR_Box) (parse_tree__write_deps_file__InitPicObjFileName_24));
#line 2150 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 1) = ((MR_Box) (parse_tree__write_deps_file__V_87_87));
#line 2150 "write_deps_file.m"
    }
#line 2149 "write_deps_file.m"
    {
#line 2149 "write_deps_file.m"
      parse_tree__write_deps_file__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2149 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 0) = ((MR_Box) ((MR_String) ".all_pic_os) "));
#line 2149 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 1) = ((MR_Box) (parse_tree__write_deps_file__V_86_86));
#line 2149 "write_deps_file.m"
    }
#line 2149 "write_deps_file.m"
    {
#line 2149 "write_deps_file.m"
      parse_tree__write_deps_file__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2149 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2149 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 1) = ((MR_Box) (parse_tree__write_deps_file__V_84_84));
#line 2149 "write_deps_file.m"
    }
#line 2149 "write_deps_file.m"
    {
#line 2149 "write_deps_file.m"
      parse_tree__write_deps_file__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2149 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2149 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 1) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 2149 "write_deps_file.m"
    }
#line 2148 "write_deps_file.m"
    {
#line 2148 "write_deps_file.m"
      parse_tree__write_deps_file__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2148 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
#line 2148 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 1) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 2148 "write_deps_file.m"
    }
#line 2147 "write_deps_file.m"
    {
#line 2147 "write_deps_file.m"
      parse_tree__write_deps_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2147 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_23));
#line 2147 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 1) = ((MR_Box) (parse_tree__write_deps_file__V_79_79));
#line 2147 "write_deps_file.m"
    }
#line 2147 "write_deps_file.m"
    {
#line 2147 "write_deps_file.m"
      parse_tree__write_deps_file__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2147 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_76_76, 0) = ((MR_Box) ((MR_String) ".all_os) "));
#line 2147 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_76_76, 1) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 2147 "write_deps_file.m"
    }
#line 2147 "write_deps_file.m"
    {
#line 2147 "write_deps_file.m"
      parse_tree__write_deps_file__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2147 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2147 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 1) = ((MR_Box) (parse_tree__write_deps_file__V_76_76));
#line 2147 "write_deps_file.m"
    }
#line 2147 "write_deps_file.m"
    {
#line 2147 "write_deps_file.m"
      parse_tree__write_deps_file__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2147 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2147 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 1) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 2147 "write_deps_file.m"
    }
#line 2146 "write_deps_file.m"
    {
#line 2146 "write_deps_file.m"
      parse_tree__write_deps_file__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2146 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 0) = ((MR_Box) ((MR_String) ".mihs) | xargs rm -f\n"));
#line 2146 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_71_71, 1) = ((MR_Box) (parse_tree__write_deps_file__V_73_73));
#line 2146 "write_deps_file.m"
    }
#line 2146 "write_deps_file.m"
    {
#line 2146 "write_deps_file.m"
      parse_tree__write_deps_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2146 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2146 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 1) = ((MR_Box) (parse_tree__write_deps_file__V_71_71));
#line 2146 "write_deps_file.m"
    }
#line 2146 "write_deps_file.m"
    {
#line 2146 "write_deps_file.m"
      parse_tree__write_deps_file__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2146 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2146 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 1) = ((MR_Box) (parse_tree__write_deps_file__V_70_70));
#line 2146 "write_deps_file.m"
    }
#line 2145 "write_deps_file.m"
    {
#line 2145 "write_deps_file.m"
      parse_tree__write_deps_file__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2145 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
#line 2145 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 1) = ((MR_Box) (parse_tree__write_deps_file__V_68_68));
#line 2145 "write_deps_file.m"
    }
#line 2144 "write_deps_file.m"
    {
#line 2144 "write_deps_file.m"
      parse_tree__write_deps_file__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2144 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_22));
#line 2144 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 1) = ((MR_Box) (parse_tree__write_deps_file__V_66_66));
#line 2144 "write_deps_file.m"
    }
#line 2144 "write_deps_file.m"
    {
#line 2144 "write_deps_file.m"
      parse_tree__write_deps_file__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2144 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_63_63, 0) = ((MR_Box) ((MR_String) ".cs) "));
#line 2144 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_63_63, 1) = ((MR_Box) (parse_tree__write_deps_file__V_65_65));
#line 2144 "write_deps_file.m"
    }
#line 2144 "write_deps_file.m"
    {
#line 2144 "write_deps_file.m"
      parse_tree__write_deps_file__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2144 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_62_62, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2144 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_62_62, 1) = ((MR_Box) (parse_tree__write_deps_file__V_63_63));
#line 2144 "write_deps_file.m"
    }
#line 2144 "write_deps_file.m"
    {
#line 2144 "write_deps_file.m"
      parse_tree__write_deps_file__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2144 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2144 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 1) = ((MR_Box) (parse_tree__write_deps_file__V_62_62));
#line 2144 "write_deps_file.m"
    }
#line 2143 "write_deps_file.m"
    {
#line 2143 "write_deps_file.m"
      parse_tree__write_deps_file__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2143 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 0) = ((MR_Box) ((MR_String) ".dirs) | xargs rm -rf \n"));
#line 2143 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 1) = ((MR_Box) (parse_tree__write_deps_file__V_60_60));
#line 2143 "write_deps_file.m"
    }
#line 2143 "write_deps_file.m"
    {
#line 2143 "write_deps_file.m"
      parse_tree__write_deps_file__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2143 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_57_57, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2143 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_57_57, 1) = ((MR_Box) (parse_tree__write_deps_file__V_58_58));
#line 2143 "write_deps_file.m"
    }
#line 2143 "write_deps_file.m"
    {
#line 2143 "write_deps_file.m"
      parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2143 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2143 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_57_57));
#line 2143 "write_deps_file.m"
    }
#line 2142 "write_deps_file.m"
    {
#line 2142 "write_deps_file.m"
      parse_tree__write_deps_file__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2142 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 0) = ((MR_Box) ((MR_String) " :\n"));
#line 2142 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 1) = ((MR_Box) (parse_tree__write_deps_file__V_55_55));
#line 2142 "write_deps_file.m"
    }
#line 2142 "write_deps_file.m"
    {
#line 2142 "write_deps_file.m"
      parse_tree__write_deps_file__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2142 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2142 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 1) = ((MR_Box) (parse_tree__write_deps_file__V_53_53));
#line 2142 "write_deps_file.m"
    }
#line 2141 "write_deps_file.m"
    {
#line 2141 "write_deps_file.m"
      parse_tree__write_deps_file__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2141 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2141 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 1) = ((MR_Box) (parse_tree__write_deps_file__V_52_52));
#line 2141 "write_deps_file.m"
    }
#line 2141 "write_deps_file.m"
    {
#line 2141 "write_deps_file.m"
      parse_tree__write_deps_file__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2141 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2141 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 1) = ((MR_Box) (parse_tree__write_deps_file__V_50_50));
#line 2141 "write_deps_file.m"
    }
#line 2141 "write_deps_file.m"
    {
#line 2141 "write_deps_file.m"
      parse_tree__write_deps_file__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2141 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_46_46, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2141 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_46_46, 1) = ((MR_Box) (parse_tree__write_deps_file__V_49_49));
#line 2141 "write_deps_file.m"
    }
#line 2140 "write_deps_file.m"
    {
#line 2140 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_46_46);
    }
#line 2161 "write_deps_file.m"
    {
#line 2161 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_17, parse_tree__write_deps_file__ModuleName_19, (MR_String) ".realclean", (MR_Integer) 1, &parse_tree__write_deps_file__RealCleanTargetName_33);
    }
#line 2164 "write_deps_file.m"
    {
#line 2164 "write_deps_file.m"
      parse_tree__write_deps_file__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2164 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_133_133, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
#line 2164 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_133_133, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 2164 "write_deps_file.m"
    }
#line 2164 "write_deps_file.m"
    {
#line 2164 "write_deps_file.m"
      parse_tree__write_deps_file__V_130_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2164 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_130_130, 0) = ((MR_Box) ((MR_String) "realclean_local : "));
#line 2164 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_130_130, 1) = ((MR_Box) (parse_tree__write_deps_file__V_133_133));
#line 2164 "write_deps_file.m"
    }
#line 2163 "write_deps_file.m"
    {
#line 2163 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_130_130);
    }
#line 2191 "write_deps_file.m"
    {
#line 2191 "write_deps_file.m"
      parse_tree__write_deps_file__V_246_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2191 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2191 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[111])));
#line 2191 "write_deps_file.m"
    }
#line 2191 "write_deps_file.m"
    {
#line 2191 "write_deps_file.m"
      parse_tree__write_deps_file__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2191 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2191 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 1) = ((MR_Box) (parse_tree__write_deps_file__V_246_246));
#line 2191 "write_deps_file.m"
    }
#line 2190 "write_deps_file.m"
    {
#line 2190 "write_deps_file.m"
      parse_tree__write_deps_file__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2190 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 0) = ((MR_Box) ((MR_String) ".foreign_dlls) | xargs rm -f\n"));
#line 2190 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 1) = ((MR_Box) (parse_tree__write_deps_file__V_244_244));
#line 2190 "write_deps_file.m"
    }
#line 2190 "write_deps_file.m"
    {
#line 2190 "write_deps_file.m"
      parse_tree__write_deps_file__V_241_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2190 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_241_241, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2190 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_241_241, 1) = ((MR_Box) (parse_tree__write_deps_file__V_242_242));
#line 2190 "write_deps_file.m"
    }
#line 2190 "write_deps_file.m"
    {
#line 2190 "write_deps_file.m"
      parse_tree__write_deps_file__V_239_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2190 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2190 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_239_239, 1) = ((MR_Box) (parse_tree__write_deps_file__V_241_241));
#line 2190 "write_deps_file.m"
    }
#line 2189 "write_deps_file.m"
    {
#line 2189 "write_deps_file.m"
      parse_tree__write_deps_file__V_237_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2189 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 0) = ((MR_Box) ((MR_String) ".dlls) | xargs rm -f\n"));
#line 2189 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_237_237, 1) = ((MR_Box) (parse_tree__write_deps_file__V_239_239));
#line 2189 "write_deps_file.m"
    }
#line 2189 "write_deps_file.m"
    {
#line 2189 "write_deps_file.m"
      parse_tree__write_deps_file__V_236_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2189 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_236_236, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2189 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_236_236, 1) = ((MR_Box) (parse_tree__write_deps_file__V_237_237));
#line 2189 "write_deps_file.m"
    }
#line 2189 "write_deps_file.m"
    {
#line 2189 "write_deps_file.m"
      parse_tree__write_deps_file__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2189 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2189 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_234_234, 1) = ((MR_Box) (parse_tree__write_deps_file__V_236_236));
#line 2189 "write_deps_file.m"
    }
#line 2188 "write_deps_file.m"
    {
#line 2188 "write_deps_file.m"
      parse_tree__write_deps_file__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2188 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 0) = ((MR_Box) ((MR_String) ".all_mihs) | xargs rm -f\n"));
#line 2188 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 1) = ((MR_Box) (parse_tree__write_deps_file__V_234_234));
#line 2188 "write_deps_file.m"
    }
#line 2188 "write_deps_file.m"
    {
#line 2188 "write_deps_file.m"
      parse_tree__write_deps_file__V_231_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2188 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2188 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 1) = ((MR_Box) (parse_tree__write_deps_file__V_232_232));
#line 2188 "write_deps_file.m"
    }
#line 2188 "write_deps_file.m"
    {
#line 2188 "write_deps_file.m"
      parse_tree__write_deps_file__V_229_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2188 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2188 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 1) = ((MR_Box) (parse_tree__write_deps_file__V_231_231));
#line 2188 "write_deps_file.m"
    }
#line 2187 "write_deps_file.m"
    {
#line 2187 "write_deps_file.m"
      parse_tree__write_deps_file__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2187 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_227_227, 0) = ((MR_Box) ((MR_String) ".all_mhs) | xargs rm -f\n"));
#line 2187 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_227_227, 1) = ((MR_Box) (parse_tree__write_deps_file__V_229_229));
#line 2187 "write_deps_file.m"
    }
#line 2187 "write_deps_file.m"
    {
#line 2187 "write_deps_file.m"
      parse_tree__write_deps_file__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2187 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2187 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 2187 "write_deps_file.m"
    }
#line 2187 "write_deps_file.m"
    {
#line 2187 "write_deps_file.m"
      parse_tree__write_deps_file__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2187 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2187 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 1) = ((MR_Box) (parse_tree__write_deps_file__V_226_226));
#line 2187 "write_deps_file.m"
    }
#line 2186 "write_deps_file.m"
    {
#line 2186 "write_deps_file.m"
      parse_tree__write_deps_file__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2186 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 0) = ((MR_Box) ((MR_String) ".module_deps) | xargs rm -f\n"));
#line 2186 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 1) = ((MR_Box) (parse_tree__write_deps_file__V_224_224));
#line 2186 "write_deps_file.m"
    }
#line 2186 "write_deps_file.m"
    {
#line 2186 "write_deps_file.m"
      parse_tree__write_deps_file__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2186 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2186 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 1) = ((MR_Box) (parse_tree__write_deps_file__V_222_222));
#line 2186 "write_deps_file.m"
    }
#line 2186 "write_deps_file.m"
    {
#line 2186 "write_deps_file.m"
      parse_tree__write_deps_file__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2186 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2186 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 1) = ((MR_Box) (parse_tree__write_deps_file__V_221_221));
#line 2186 "write_deps_file.m"
    }
#line 2185 "write_deps_file.m"
    {
#line 2185 "write_deps_file.m"
      parse_tree__write_deps_file__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2185 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 0) = ((MR_Box) ((MR_String) ".ds) | xargs rm -f\n"));
#line 2185 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 1) = ((MR_Box) (parse_tree__write_deps_file__V_219_219));
#line 2185 "write_deps_file.m"
    }
#line 2185 "write_deps_file.m"
    {
#line 2185 "write_deps_file.m"
      parse_tree__write_deps_file__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2185 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2185 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 1) = ((MR_Box) (parse_tree__write_deps_file__V_217_217));
#line 2185 "write_deps_file.m"
    }
#line 2185 "write_deps_file.m"
    {
#line 2185 "write_deps_file.m"
      parse_tree__write_deps_file__V_214_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2185 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_214_214, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2185 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_214_214, 1) = ((MR_Box) (parse_tree__write_deps_file__V_216_216));
#line 2185 "write_deps_file.m"
    }
#line 2184 "write_deps_file.m"
    {
#line 2184 "write_deps_file.m"
      parse_tree__write_deps_file__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2184 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_212_212, 0) = ((MR_Box) ((MR_String) ".imdgs) | xargs rm -f\n"));
#line 2184 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_212_212, 1) = ((MR_Box) (parse_tree__write_deps_file__V_214_214));
#line 2184 "write_deps_file.m"
    }
#line 2184 "write_deps_file.m"
    {
#line 2184 "write_deps_file.m"
      parse_tree__write_deps_file__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2184 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_211_211, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2184 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_211_211, 1) = ((MR_Box) (parse_tree__write_deps_file__V_212_212));
#line 2184 "write_deps_file.m"
    }
#line 2184 "write_deps_file.m"
    {
#line 2184 "write_deps_file.m"
      parse_tree__write_deps_file__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2184 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2184 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 1) = ((MR_Box) (parse_tree__write_deps_file__V_211_211));
#line 2184 "write_deps_file.m"
    }
#line 2183 "write_deps_file.m"
    {
#line 2183 "write_deps_file.m"
      parse_tree__write_deps_file__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_207_207, 0) = ((MR_Box) ((MR_String) ".requests) | xargs rm -f\n"));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_207_207, 1) = ((MR_Box) (parse_tree__write_deps_file__V_209_209));
#line 2183 "write_deps_file.m"
    }
#line 2183 "write_deps_file.m"
    {
#line 2183 "write_deps_file.m"
      parse_tree__write_deps_file__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 1) = ((MR_Box) (parse_tree__write_deps_file__V_207_207));
#line 2183 "write_deps_file.m"
    }
#line 2183 "write_deps_file.m"
    {
#line 2183 "write_deps_file.m"
      parse_tree__write_deps_file__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_204_204, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2183 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_204_204, 1) = ((MR_Box) (parse_tree__write_deps_file__V_206_206));
#line 2183 "write_deps_file.m"
    }
#line 2182 "write_deps_file.m"
    {
#line 2182 "write_deps_file.m"
      parse_tree__write_deps_file__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_202_202, 0) = ((MR_Box) ((MR_String) ".analysiss) | xargs rm -f\n"));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_202_202, 1) = ((MR_Box) (parse_tree__write_deps_file__V_204_204));
#line 2182 "write_deps_file.m"
    }
#line 2182 "write_deps_file.m"
    {
#line 2182 "write_deps_file.m"
      parse_tree__write_deps_file__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 1) = ((MR_Box) (parse_tree__write_deps_file__V_202_202));
#line 2182 "write_deps_file.m"
    }
#line 2182 "write_deps_file.m"
    {
#line 2182 "write_deps_file.m"
      parse_tree__write_deps_file__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2182 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 1) = ((MR_Box) (parse_tree__write_deps_file__V_201_201));
#line 2182 "write_deps_file.m"
    }
#line 2181 "write_deps_file.m"
    {
#line 2181 "write_deps_file.m"
      parse_tree__write_deps_file__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 0) = ((MR_Box) ((MR_String) ".trans_opts) | xargs rm -f\n"));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 1) = ((MR_Box) (parse_tree__write_deps_file__V_199_199));
#line 2181 "write_deps_file.m"
    }
#line 2181 "write_deps_file.m"
    {
#line 2181 "write_deps_file.m"
      parse_tree__write_deps_file__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_196_196, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_196_196, 1) = ((MR_Box) (parse_tree__write_deps_file__V_197_197));
#line 2181 "write_deps_file.m"
    }
#line 2181 "write_deps_file.m"
    {
#line 2181 "write_deps_file.m"
      parse_tree__write_deps_file__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_194_194, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2181 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_194_194, 1) = ((MR_Box) (parse_tree__write_deps_file__V_196_196));
#line 2181 "write_deps_file.m"
    }
#line 2180 "write_deps_file.m"
    {
#line 2180 "write_deps_file.m"
      parse_tree__write_deps_file__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 0) = ((MR_Box) ((MR_String) ".opts) | xargs rm -f\n"));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 1) = ((MR_Box) (parse_tree__write_deps_file__V_194_194));
#line 2180 "write_deps_file.m"
    }
#line 2180 "write_deps_file.m"
    {
#line 2180 "write_deps_file.m"
      parse_tree__write_deps_file__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 1) = ((MR_Box) (parse_tree__write_deps_file__V_192_192));
#line 2180 "write_deps_file.m"
    }
#line 2180 "write_deps_file.m"
    {
#line 2180 "write_deps_file.m"
      parse_tree__write_deps_file__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_189_189, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2180 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_189_189, 1) = ((MR_Box) (parse_tree__write_deps_file__V_191_191));
#line 2180 "write_deps_file.m"
    }
#line 2179 "write_deps_file.m"
    {
#line 2179 "write_deps_file.m"
      parse_tree__write_deps_file__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_187_187, 0) = ((MR_Box) ((MR_String) ".int3s) | xargs rm -f\n"));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_187_187, 1) = ((MR_Box) (parse_tree__write_deps_file__V_189_189));
#line 2179 "write_deps_file.m"
    }
#line 2179 "write_deps_file.m"
    {
#line 2179 "write_deps_file.m"
      parse_tree__write_deps_file__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 1) = ((MR_Box) (parse_tree__write_deps_file__V_187_187));
#line 2179 "write_deps_file.m"
    }
#line 2179 "write_deps_file.m"
    {
#line 2179 "write_deps_file.m"
      parse_tree__write_deps_file__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2179 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 1) = ((MR_Box) (parse_tree__write_deps_file__V_186_186));
#line 2179 "write_deps_file.m"
    }
#line 2178 "write_deps_file.m"
    {
#line 2178 "write_deps_file.m"
      parse_tree__write_deps_file__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2178 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 0) = ((MR_Box) ((MR_String) ".all_int0s) | xargs rm -f\n"));
#line 2178 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 1) = ((MR_Box) (parse_tree__write_deps_file__V_184_184));
#line 2178 "write_deps_file.m"
    }
#line 2178 "write_deps_file.m"
    {
#line 2178 "write_deps_file.m"
      parse_tree__write_deps_file__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2178 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_181_181, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2178 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_181_181, 1) = ((MR_Box) (parse_tree__write_deps_file__V_182_182));
#line 2178 "write_deps_file.m"
    }
#line 2178 "write_deps_file.m"
    {
#line 2178 "write_deps_file.m"
      parse_tree__write_deps_file__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2178 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_179_179, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2178 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_179_179, 1) = ((MR_Box) (parse_tree__write_deps_file__V_181_181));
#line 2178 "write_deps_file.m"
    }
#line 2174 "write_deps_file.m"
    {
#line 2174 "write_deps_file.m"
      parse_tree__write_deps_file__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2174 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_177_177, 0) = ((MR_Box) ((MR_String) ".ints) | xargs rm -f\n"));
#line 2174 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_177_177, 1) = ((MR_Box) (parse_tree__write_deps_file__V_179_179));
#line 2174 "write_deps_file.m"
    }
#line 2174 "write_deps_file.m"
    {
#line 2174 "write_deps_file.m"
      parse_tree__write_deps_file__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2174 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2174 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 1) = ((MR_Box) (parse_tree__write_deps_file__V_177_177));
#line 2174 "write_deps_file.m"
    }
#line 2174 "write_deps_file.m"
    {
#line 2174 "write_deps_file.m"
      parse_tree__write_deps_file__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2174 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2174 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 1) = ((MR_Box) (parse_tree__write_deps_file__V_176_176));
#line 2174 "write_deps_file.m"
    }
#line 2173 "write_deps_file.m"
    {
#line 2173 "write_deps_file.m"
      parse_tree__write_deps_file__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2173 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 0) = ((MR_Box) ((MR_String) ".trans_opt_dates) | xargs rm -f\n"));
#line 2173 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 1) = ((MR_Box) (parse_tree__write_deps_file__V_174_174));
#line 2173 "write_deps_file.m"
    }
#line 2173 "write_deps_file.m"
    {
#line 2173 "write_deps_file.m"
      parse_tree__write_deps_file__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2173 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2173 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_171_171, 1) = ((MR_Box) (parse_tree__write_deps_file__V_172_172));
#line 2173 "write_deps_file.m"
    }
#line 2173 "write_deps_file.m"
    {
#line 2173 "write_deps_file.m"
      parse_tree__write_deps_file__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2173 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2173 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_169_169, 1) = ((MR_Box) (parse_tree__write_deps_file__V_171_171));
#line 2173 "write_deps_file.m"
    }
#line 2172 "write_deps_file.m"
    {
#line 2172 "write_deps_file.m"
      parse_tree__write_deps_file__V_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2172 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 0) = ((MR_Box) ((MR_String) ".optdates) | xargs rm -f\n"));
#line 2172 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_167_167, 1) = ((MR_Box) (parse_tree__write_deps_file__V_169_169));
#line 2172 "write_deps_file.m"
    }
#line 2172 "write_deps_file.m"
    {
#line 2172 "write_deps_file.m"
      parse_tree__write_deps_file__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2172 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2172 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 1) = ((MR_Box) (parse_tree__write_deps_file__V_167_167));
#line 2172 "write_deps_file.m"
    }
#line 2172 "write_deps_file.m"
    {
#line 2172 "write_deps_file.m"
      parse_tree__write_deps_file__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2172 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2172 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 1) = ((MR_Box) (parse_tree__write_deps_file__V_166_166));
#line 2172 "write_deps_file.m"
    }
#line 2171 "write_deps_file.m"
    {
#line 2171 "write_deps_file.m"
      parse_tree__write_deps_file__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2171 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 0) = ((MR_Box) ((MR_String) ".date3s) | xargs rm -f\n"));
#line 2171 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 1) = ((MR_Box) (parse_tree__write_deps_file__V_164_164));
#line 2171 "write_deps_file.m"
    }
#line 2171 "write_deps_file.m"
    {
#line 2171 "write_deps_file.m"
      parse_tree__write_deps_file__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2171 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2171 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_161_161, 1) = ((MR_Box) (parse_tree__write_deps_file__V_162_162));
#line 2171 "write_deps_file.m"
    }
#line 2171 "write_deps_file.m"
    {
#line 2171 "write_deps_file.m"
      parse_tree__write_deps_file__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2171 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2171 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_159_159, 1) = ((MR_Box) (parse_tree__write_deps_file__V_161_161));
#line 2171 "write_deps_file.m"
    }
#line 2170 "write_deps_file.m"
    {
#line 2170 "write_deps_file.m"
      parse_tree__write_deps_file__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2170 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 0) = ((MR_Box) ((MR_String) ".date0s) | xargs rm -f\n"));
#line 2170 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 1) = ((MR_Box) (parse_tree__write_deps_file__V_159_159));
#line 2170 "write_deps_file.m"
    }
#line 2170 "write_deps_file.m"
    {
#line 2170 "write_deps_file.m"
      parse_tree__write_deps_file__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2170 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2170 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 1) = ((MR_Box) (parse_tree__write_deps_file__V_157_157));
#line 2170 "write_deps_file.m"
    }
#line 2170 "write_deps_file.m"
    {
#line 2170 "write_deps_file.m"
      parse_tree__write_deps_file__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2170 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2170 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 1) = ((MR_Box) (parse_tree__write_deps_file__V_156_156));
#line 2170 "write_deps_file.m"
    }
#line 2169 "write_deps_file.m"
    {
#line 2169 "write_deps_file.m"
      parse_tree__write_deps_file__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2169 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_152_152, 0) = ((MR_Box) ((MR_String) ".dates) | xargs rm -f\n"));
#line 2169 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_152_152, 1) = ((MR_Box) (parse_tree__write_deps_file__V_154_154));
#line 2169 "write_deps_file.m"
    }
#line 2169 "write_deps_file.m"
    {
#line 2169 "write_deps_file.m"
      parse_tree__write_deps_file__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2169 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 2169 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 1) = ((MR_Box) (parse_tree__write_deps_file__V_152_152));
#line 2169 "write_deps_file.m"
    }
#line 2169 "write_deps_file.m"
    {
#line 2169 "write_deps_file.m"
      parse_tree__write_deps_file__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2169 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_149_149, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
#line 2169 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_149_149, 1) = ((MR_Box) (parse_tree__write_deps_file__V_151_151));
#line 2169 "write_deps_file.m"
    }
#line 2168 "write_deps_file.m"
    {
#line 2168 "write_deps_file.m"
      parse_tree__write_deps_file__V_147_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2168 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2168 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_147_147, 1) = ((MR_Box) (parse_tree__write_deps_file__V_149_149));
#line 2168 "write_deps_file.m"
    }
#line 2168 "write_deps_file.m"
    {
#line 2168 "write_deps_file.m"
      parse_tree__write_deps_file__V_146_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2168 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_146_146, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
#line 2168 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_146_146, 1) = ((MR_Box) (parse_tree__write_deps_file__V_147_147));
#line 2168 "write_deps_file.m"
    }
#line 2168 "write_deps_file.m"
    {
#line 2168 "write_deps_file.m"
      parse_tree__write_deps_file__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2168 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_144_144, 0) = ((MR_Box) ((MR_String) " : "));
#line 2168 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_144_144, 1) = ((MR_Box) (parse_tree__write_deps_file__V_146_146));
#line 2168 "write_deps_file.m"
    }
#line 2168 "write_deps_file.m"
    {
#line 2168 "write_deps_file.m"
      parse_tree__write_deps_file__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2168 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
#line 2168 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 1) = ((MR_Box) (parse_tree__write_deps_file__V_144_144));
#line 2168 "write_deps_file.m"
    }
#line 2167 "write_deps_file.m"
    {
#line 2167 "write_deps_file.m"
      parse_tree__write_deps_file__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2167 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_141_141, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2167 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_141_141, 1) = ((MR_Box) (parse_tree__write_deps_file__V_143_143));
#line 2167 "write_deps_file.m"
    }
#line 2167 "write_deps_file.m"
    {
#line 2167 "write_deps_file.m"
      parse_tree__write_deps_file__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2167 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
#line 2167 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 1) = ((MR_Box) (parse_tree__write_deps_file__V_141_141));
#line 2167 "write_deps_file.m"
    }
#line 2167 "write_deps_file.m"
    {
#line 2167 "write_deps_file.m"
      parse_tree__write_deps_file__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2167 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_137_137, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2167 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_137_137, 1) = ((MR_Box) (parse_tree__write_deps_file__V_140_140));
#line 2167 "write_deps_file.m"
    }
#line 2166 "write_deps_file.m"
    {
#line 2166 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_137_137);
    }
#line 2201 "write_deps_file.m"
    {
#line 2201 "write_deps_file.m"
      parse_tree__write_deps_file__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2201 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 0) = ((MR_Box) (parse_tree__write_deps_file__DvFileName_30));
#line 2201 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[109])));
#line 2201 "write_deps_file.m"
    }
#line 2200 "write_deps_file.m"
    {
#line 2200 "write_deps_file.m"
      parse_tree__write_deps_file__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2200 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 0) = ((MR_Box) ((MR_String) " "));
#line 2200 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 1) = ((MR_Box) (parse_tree__write_deps_file__V_271_271));
#line 2200 "write_deps_file.m"
    }
#line 2200 "write_deps_file.m"
    {
#line 2200 "write_deps_file.m"
      parse_tree__write_deps_file__V_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2200 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 0) = ((MR_Box) (parse_tree__write_deps_file__DepFileName_29));
#line 2200 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 1) = ((MR_Box) (parse_tree__write_deps_file__V_269_269));
#line 2200 "write_deps_file.m"
    }
#line 2199 "write_deps_file.m"
    {
#line 2199 "write_deps_file.m"
      parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2199 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) ((MR_String) " "));
#line 2199 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__V_268_268));
#line 2199 "write_deps_file.m"
    }
#line 2199 "write_deps_file.m"
    {
#line 2199 "write_deps_file.m"
      parse_tree__write_deps_file__V_265_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2199 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 0) = ((MR_Box) (parse_tree__write_deps_file__JarFileName_28));
#line 2199 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 2199 "write_deps_file.m"
    }
#line 2198 "write_deps_file.m"
    {
#line 2198 "write_deps_file.m"
      parse_tree__write_deps_file__V_263_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2198 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 0) = ((MR_Box) ((MR_String) " "));
#line 2198 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 1) = ((MR_Box) (parse_tree__write_deps_file__V_265_265));
#line 2198 "write_deps_file.m"
    }
#line 2198 "write_deps_file.m"
    {
#line 2198 "write_deps_file.m"
      parse_tree__write_deps_file__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2198 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 0) = ((MR_Box) (parse_tree__write_deps_file__SharedLibFileName_27));
#line 2198 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 1) = ((MR_Box) (parse_tree__write_deps_file__V_263_263));
#line 2198 "write_deps_file.m"
    }
#line 2197 "write_deps_file.m"
    {
#line 2197 "write_deps_file.m"
      parse_tree__write_deps_file__V_260_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2197 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 0) = ((MR_Box) ((MR_String) " "));
#line 2197 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 1) = ((MR_Box) (parse_tree__write_deps_file__V_262_262));
#line 2197 "write_deps_file.m"
    }
#line 2197 "write_deps_file.m"
    {
#line 2197 "write_deps_file.m"
      parse_tree__write_deps_file__V_259_259 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2197 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_259_259, 0) = ((MR_Box) (parse_tree__write_deps_file__LibFileName_26));
#line 2197 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_259_259, 1) = ((MR_Box) (parse_tree__write_deps_file__V_260_260));
#line 2197 "write_deps_file.m"
    }
#line 2196 "write_deps_file.m"
    {
#line 2196 "write_deps_file.m"
      parse_tree__write_deps_file__V_257_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_257_257, 0) = ((MR_Box) ((MR_String) " "));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_257_257, 1) = ((MR_Box) (parse_tree__write_deps_file__V_259_259));
#line 2196 "write_deps_file.m"
    }
#line 2196 "write_deps_file.m"
    {
#line 2196 "write_deps_file.m"
      parse_tree__write_deps_file__V_256_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_256_256, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_25));
#line 2196 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_256_256, 1) = ((MR_Box) (parse_tree__write_deps_file__V_257_257));
#line 2196 "write_deps_file.m"
    }
#line 2195 "write_deps_file.m"
    {
#line 2195 "write_deps_file.m"
      parse_tree__write_deps_file__V_254_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2195 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_254_254, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) "));
#line 2195 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_254_254, 1) = ((MR_Box) (parse_tree__write_deps_file__V_256_256));
#line 2195 "write_deps_file.m"
    }
#line 2195 "write_deps_file.m"
    {
#line 2195 "write_deps_file.m"
      parse_tree__write_deps_file__V_253_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2195 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_253_253, 0) = ((MR_Box) (parse_tree__write_deps_file__ExeFileName_21));
#line 2195 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_253_253, 1) = ((MR_Box) (parse_tree__write_deps_file__V_254_254));
#line 2195 "write_deps_file.m"
    }
#line 2194 "write_deps_file.m"
    {
#line 2194 "write_deps_file.m"
      parse_tree__write_deps_file__V_250_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2194 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_250_250, 0) = ((MR_Box) ((MR_String) "\t-rm -f "));
#line 2194 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_250_250, 1) = ((MR_Box) (parse_tree__write_deps_file__V_253_253));
#line 2194 "write_deps_file.m"
    }
#line 2193 "write_deps_file.m"
    {
#line 2193 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__V_250_250);
#line 2193 "write_deps_file.m"
      return;
    }
#line 2126 "write_deps_file.m"
  }
#line 2118 "write_deps_file.m"
}

#line 2105 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(
#line 2105 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 2105 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_9,
#line 2105 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 2105 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_11,
#line 2105 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__5_5)
#line 2105 "write_deps_file.m"
{
#line 2110 "write_deps_file.m"
  {
#line 2110 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2110 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Extension_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 0)));
#line 2110 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__VarExtension_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 1)));
#line 2110 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TargetName_15;
#line 2110 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_20_20;
#line 2110 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_23_23;
#line 2110 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_24_24;
#line 2110 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_26_26;
#line 2110 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_27_27;
#line 2110 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_29_29;
#line 2110 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_30_30;

#line 2111 "write_deps_file.m"
    {
#line 2111 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__Extension_12, (MR_Integer) 1, &parse_tree__write_deps_file__TargetName_15);
    }
#line 2115 "write_deps_file.m"
    {
#line 2115 "write_deps_file.m"
      parse_tree__write_deps_file__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2115 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_30_30, 0) = ((MR_Box) (parse_tree__write_deps_file__VarExtension_13));
#line 2115 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[110])));
#line 2115 "write_deps_file.m"
    }
#line 2115 "write_deps_file.m"
    {
#line 2115 "write_deps_file.m"
      parse_tree__write_deps_file__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2115 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_29_29, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_11));
#line 2115 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_29_29, 1) = ((MR_Box) (parse_tree__write_deps_file__V_30_30));
#line 2115 "write_deps_file.m"
    }
#line 2115 "write_deps_file.m"
    {
#line 2115 "write_deps_file.m"
      parse_tree__write_deps_file__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2115 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_27_27, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 2115 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_27_27, 1) = ((MR_Box) (parse_tree__write_deps_file__V_29_29));
#line 2115 "write_deps_file.m"
    }
#line 2115 "write_deps_file.m"
    {
#line 2115 "write_deps_file.m"
      parse_tree__write_deps_file__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2115 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_26_26, 0) = ((MR_Box) (parse_tree__write_deps_file__TargetName_15));
#line 2115 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_26_26, 1) = ((MR_Box) (parse_tree__write_deps_file__V_27_27));
#line 2115 "write_deps_file.m"
    }
#line 2114 "write_deps_file.m"
    {
#line 2114 "write_deps_file.m"
      parse_tree__write_deps_file__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2114 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_24_24, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2114 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_24_24, 1) = ((MR_Box) (parse_tree__write_deps_file__V_26_26));
#line 2114 "write_deps_file.m"
    }
#line 2114 "write_deps_file.m"
    {
#line 2114 "write_deps_file.m"
      parse_tree__write_deps_file__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2114 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_23_23, 0) = ((MR_Box) (parse_tree__write_deps_file__TargetName_15));
#line 2114 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_23_23, 1) = ((MR_Box) (parse_tree__write_deps_file__V_24_24));
#line 2114 "write_deps_file.m"
    }
#line 2114 "write_deps_file.m"
    {
#line 2114 "write_deps_file.m"
      parse_tree__write_deps_file__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2114 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_20_20, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2114 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_20_20, 1) = ((MR_Box) (parse_tree__write_deps_file__V_23_23));
#line 2114 "write_deps_file.m"
    }
#line 2113 "write_deps_file.m"
    {
#line 2113 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_9, parse_tree__write_deps_file__V_20_20);
#line 2113 "write_deps_file.m"
      return;
    }
#line 2110 "write_deps_file.m"
  }
#line 2105 "write_deps_file.m"
}

#line 2089 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1(
#line 2089 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2089 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2089 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2089 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 2089 "write_deps_file.m"
{
#line 2089 "write_deps_file.m"
  {
#line 2089 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 2089 "write_deps_file.m"
    {
#line 2089 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 2089 "write_deps_file.m"
      return;
    }
#line 2089 "write_deps_file.m"
  }
#line 2089 "write_deps_file.m"
}

#line 2083 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(
#line 2083 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 2083 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 2083 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 2083 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_10)
#line 2083 "write_deps_file.m"
{
#line 2087 "write_deps_file.m"
  {
#line 2087 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2087 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_14_14;
#line 2088 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_13;

#line 2089 "write_deps_file.m"
    {
#line 2089 "write_deps_file.m"
      parse_tree__write_deps_file__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2089 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[2]));
#line 2089 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1));
#line 2089 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 2089 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 2089 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_8));
#line 2089 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_9));
#line 2089 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, 6) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_10));
#line 2089 "write_deps_file.m"
    }
#line 2088 "write_deps_file.m"
    {
#line 2088 "write_deps_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__write_deps_file_scalar_common_2[3], (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_14_14, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[91]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_13);
    }
#line 2087 "write_deps_file.m"
  }
#line 2083 "write_deps_file.m"
}

#line 1918 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(
#line 1918 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 1918 "write_deps_file.m"
{
#line 1918 "write_deps_file.m"
  {
#line 1918 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 1918 "write_deps_file.m"
    MR_builtin_longjmp((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0, 1);
#line 1918 "write_deps_file.m"
  }
#line 1918 "write_deps_file.m"
}

#line 1918 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3(
#line 1918 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 1918 "write_deps_file.m"
{
#line 1918 "write_deps_file.m"
  {
#line 1918 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 1918 "write_deps_file.m"
    (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_29_29 = ((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_V_29_29);
#line 1918 "write_deps_file.m"
    (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_44_44 = ((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_V_44_44);
#line 1918 "write_deps_file.m"
    {
#line 1918 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(parse_tree__write_deps_file__env_ptr);
#line 1918 "write_deps_file.m"
      return;
    }
#line 1918 "write_deps_file.m"
  }
#line 1918 "write_deps_file.m"
}

#line 1918 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(
#line 1918 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 1918 "write_deps_file.m"
{
#line 1918 "write_deps_file.m"
  {
#line 1918 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 1918 "write_deps_file.m"
    {
#line 1918 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_44_44, (MR_Integer) 0)));
#line 1919 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__V_340_340;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_341_341;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_342_342;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_343_343;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_344_344;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_345_345;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_346_346;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_347_347;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_348_348;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_349_349;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_350_350;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_351_351;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_352_352;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_353_353;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_354_354;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_355_355;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_356_356;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_357_357;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_358_358;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_359_359;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_360_360;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_361_361;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_362_362;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_363_363;
#line 1919 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_364_364;
#line 1919 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__V_365_365;

#line 1918 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_44_44, (MR_Integer) 1)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_340_340 = ((MR_String) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 0)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_341_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 1)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_342_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 2)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_343_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 3)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_344_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 4)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_345_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 5)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_346_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 6)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_347_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 7)));
#line 1919 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 8)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_348_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 9)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_349_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 10)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_350_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 11)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_351_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 12)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_352_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 13)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_353_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 14)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_354_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 15)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_355_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 16)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_356_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 17)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_357_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 18)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_358_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 19)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_359_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 20)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_360_360 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 21)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_361_361 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 22)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_362_362 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 23)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_363_363 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 24)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_364_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 25)));
#line 1919 "write_deps_file.m"
      parse_tree__write_deps_file__V_365_365 = ((MR_String) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 26)));
#line 1919 "write_deps_file.m"
      {
#line 1919 "write_deps_file.m"
        (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = mercury__set__non_empty_1_p_0((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__TypeCtorInfo_366_366, (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__V_45_45);
      }
#line 1919 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 1919 "write_deps_file.m"
        {
#line 1919 "write_deps_file.m"
          parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(parse_tree__write_deps_file__env_ptr);
#line 1919 "write_deps_file.m"
          return;
        }
#line 1918 "write_deps_file.m"
    }
#line 1918 "write_deps_file.m"
  }
#line 1918 "write_deps_file.m"
}

#line 1918 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(
#line 1918 "write_deps_file.m"
  void * parse_tree__write_deps_file__env_ptr_arg)
#line 1918 "write_deps_file.m"
{
#line 1918 "write_deps_file.m"
  {
#line 1918 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

#line 1918 "write_deps_file.m"
    if (MR_builtin_setjmp((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0) == 0)
#line 1918 "write_deps_file.m"
      {
#line 1918 "write_deps_file.m"
        {
#line 5655 "parse_tree.write_deps_file.c"
          (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__TypeCtorInfo_366_366 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1918 "write_deps_file.m"
          {
#line 1918 "write_deps_file.m"
            mercury__map__member_3_p_0((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__TypeCtorInfo_366_366, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17, &(parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_V_29_29, &(parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_V_44_44, parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3, parse_tree__write_deps_file__env_ptr);
          }
#line 1918 "write_deps_file.m"
        }
#line 1918 "write_deps_file.m"
        (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = MR_FALSE;
#line 1918 "write_deps_file.m"
      }
#line 1918 "write_deps_file.m"
    else
#line 1918 "write_deps_file.m"
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = MR_TRUE;
#line 1918 "write_deps_file.m"
  }
#line 1918 "write_deps_file.m"
}

#line 1894 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(
#line 1894 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_14,
#line 1894 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_15,
#line 1894 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_16,
#line 1894 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_17,
#line 1894 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_18,
#line 1894 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_19,
#line 1894 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_20,
#line 1894 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_21,
#line 1894 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_22,
#line 1894 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeOptsVar_23,
#line 1894 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MaybeTransOptsVar_24)
#line 1894 "write_deps_file.m"
{
#line 1894 "write_deps_file.m"
  {
#line 1894 "write_deps_file.m"
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s parse_tree__write_deps_file__env;

#line 1894 "write_deps_file.m"
    (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17 = parse_tree__write_deps_file__DepsMap_17;
#line 1900 "write_deps_file.m"
    {
#line 1900 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallIntsTargetName_26;
#line 1900 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__OptStr_27;
#line 1900 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__Int0Str_31;
#line 1900 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__MaybeInt0sVar_32;
#line 1900 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__TransOptStr_33;
#line 1900 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__DepStr_34;
#line 1900 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallOptsTargetName_35;
#line 1900 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallHdrsTargetName_36;
#line 1900 "write_deps_file.m"
      MR_String parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_37;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_49_49;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_52_52;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_53_53;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_55_55;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_56_56;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_58_58;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_59_59;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_61_61;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_62_62;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_64_64;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_65_65;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_66_66;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_67_67;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_68_68;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_70_70;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_72_72;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_73_73;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_75_75;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_76_76;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_78_78;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_79_79;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_80_80;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_81_81;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_82_82;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_84_84;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_86_86;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_88_88;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_90_90;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_92_92;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_94_94;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_96_96;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_98_98;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_100_100;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_102_102;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_104_104;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_106_106;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_108_108;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_110_110;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_111_111;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_112_112;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_113_113;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_137_137;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_140_140;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_141_141;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_143_143;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_217_217;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_220_220;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_221_221;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_223_223;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_224_224;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_226_226;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_228_228;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_229_229;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_231_231;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_233_233;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_235_235;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_236_236;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_238_238;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_240_240;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_242_242;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_244_244;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_260_260;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_263_263;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_264_264;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_266_266;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_267_267;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_269_269;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_271_271;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_272_272;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_274_274;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_276_276;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_278_278;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_279_279;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_281_281;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_283_283;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_285_285;
#line 1900 "write_deps_file.m"
      MR_Word parse_tree__write_deps_file__V_287_287;

#line 1906 "write_deps_file.m"
      {
#line 1906 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_ints", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallIntsTargetName_26);
      }
#line 1911 "write_deps_file.m"
#line 1911 "write_deps_file.m"
      switch (parse_tree__write_deps_file__Intermod_20) {
#line 1911 "write_deps_file.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1911 "write_deps_file.m"
        case (MR_Integer) 0:
#line 1913 "write_deps_file.m"
          parse_tree__write_deps_file__OptStr_27 = (MR_String) "";
#line 1911 "write_deps_file.m"
          break;
#line 1911 "write_deps_file.m"
        case (MR_Integer) 1:
#line 1910 "write_deps_file.m"
          parse_tree__write_deps_file__OptStr_27 = (MR_String) " opt";
#line 1911 "write_deps_file.m"
          break;
#line 1911 "write_deps_file.m"
      }
#line 1916 "write_deps_file.m"
      (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = (parse_tree__write_deps_file__Intermod_20 == (MR_Integer) 1);
#line 1916 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 1918 "write_deps_file.m"
        {
#line 1918 "write_deps_file.m"
          parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(&parse_tree__write_deps_file__env);
        }
#line 1926 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 1924 "write_deps_file.m"
        {
#line 1924 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__V_47_47;

#line 1924 "write_deps_file.m"
          parse_tree__write_deps_file__Int0Str_31 = (MR_String) " int0";
#line 1925 "write_deps_file.m"
          {
#line 1925 "write_deps_file.m"
            parse_tree__write_deps_file__V_47_47 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_18, (MR_String) ".int0s) ");
          }
#line 1925 "write_deps_file.m"
          {
#line 1925 "write_deps_file.m"
            parse_tree__write_deps_file__MaybeInt0sVar_32 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_47_47);
          }
#line 1924 "write_deps_file.m"
        }
#line 1926 "write_deps_file.m"
      else
#line 1927 "write_deps_file.m"
        {
#line 1927 "write_deps_file.m"
          parse_tree__write_deps_file__Int0Str_31 = (MR_String) "";
#line 1928 "write_deps_file.m"
          parse_tree__write_deps_file__MaybeInt0sVar_32 = (MR_String) "";
#line 1927 "write_deps_file.m"
        }
#line 1933 "write_deps_file.m"
#line 1933 "write_deps_file.m"
      switch (parse_tree__write_deps_file__TransOpt_21) {
#line 1933 "write_deps_file.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1933 "write_deps_file.m"
        case (MR_Integer) 0:
#line 1935 "write_deps_file.m"
          parse_tree__write_deps_file__TransOptStr_33 = (MR_String) "";
#line 1933 "write_deps_file.m"
          break;
#line 1933 "write_deps_file.m"
        case (MR_Integer) 1:
#line 1932 "write_deps_file.m"
          parse_tree__write_deps_file__TransOptStr_33 = (MR_String) " trans_opt";
#line 1933 "write_deps_file.m"
          break;
#line 1933 "write_deps_file.m"
      }
#line 1940 "write_deps_file.m"
#line 1940 "write_deps_file.m"
      switch (parse_tree__write_deps_file__MmcMakeDeps_19) {
#line 1940 "write_deps_file.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 1940 "write_deps_file.m"
        case (MR_Integer) 0:
#line 1942 "write_deps_file.m"
          parse_tree__write_deps_file__DepStr_34 = (MR_String) "";
#line 1940 "write_deps_file.m"
          break;
#line 1940 "write_deps_file.m"
        case (MR_Integer) 1:
#line 1939 "write_deps_file.m"
          parse_tree__write_deps_file__DepStr_34 = (MR_String) " module_dep";
#line 1940 "write_deps_file.m"
          break;
#line 1940 "write_deps_file.m"
      }
#line 1967 "write_deps_file.m"
      {
#line 1967 "write_deps_file.m"
        parse_tree__write_deps_file__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1967 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_113_113, 0) = ((MR_Box) (parse_tree__write_deps_file__DepStr_34));
#line 1967 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[33])));
#line 1967 "write_deps_file.m"
      }
#line 1967 "write_deps_file.m"
      {
#line 1967 "write_deps_file.m"
        parse_tree__write_deps_file__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1967 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptStr_33));
#line 1967 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 1) = ((MR_Box) (parse_tree__write_deps_file__V_113_113));
#line 1967 "write_deps_file.m"
      }
#line 1967 "write_deps_file.m"
      {
#line 1967 "write_deps_file.m"
        parse_tree__write_deps_file__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1967 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 0) = ((MR_Box) (parse_tree__write_deps_file__OptStr_27));
#line 1967 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_111_111, 1) = ((MR_Box) (parse_tree__write_deps_file__V_112_112));
#line 1967 "write_deps_file.m"
      }
#line 1967 "write_deps_file.m"
      {
#line 1967 "write_deps_file.m"
        parse_tree__write_deps_file__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1967 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_110_110, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0Str_31));
#line 1967 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_110_110, 1) = ((MR_Box) (parse_tree__write_deps_file__V_111_111));
#line 1967 "write_deps_file.m"
      }
#line 1966 "write_deps_file.m"
      {
#line 1966 "write_deps_file.m"
        parse_tree__write_deps_file__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1966 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_108_108, 0) = ((MR_Box) ((MR_String) "\tfor ext in int int2 int3"));
#line 1966 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_108_108, 1) = ((MR_Box) (parse_tree__write_deps_file__V_110_110));
#line 1966 "write_deps_file.m"
      }
#line 1965 "write_deps_file.m"
      {
#line 1965 "write_deps_file.m"
        parse_tree__write_deps_file__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1965 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 0) = ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n"));
#line 1965 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_106_106, 1) = ((MR_Box) (parse_tree__write_deps_file__V_108_108));
#line 1965 "write_deps_file.m"
      }
#line 1964 "write_deps_file.m"
      {
#line 1964 "write_deps_file.m"
        parse_tree__write_deps_file__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1964 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 0) = ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails, then we just use\n"));
#line 1964 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 1) = ((MR_Box) (parse_tree__write_deps_file__V_106_106));
#line 1964 "write_deps_file.m"
      }
#line 1963 "write_deps_file.m"
      {
#line 1963 "write_deps_file.m"
        parse_tree__write_deps_file__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1963 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 0) = ((MR_Box) ((MR_String) "\t# The following is needed to support the \140--use-subdirs\' option\n"));
#line 1963 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 1) = ((MR_Box) (parse_tree__write_deps_file__V_104_104));
#line 1963 "write_deps_file.m"
      }
#line 1962 "write_deps_file.m"
      {
#line 1962 "write_deps_file.m"
        parse_tree__write_deps_file__V_100_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1962 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_100_100, 0) = ((MR_Box) ((MR_String) "\tdone\n"));
#line 1962 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_100_100, 1) = ((MR_Box) (parse_tree__write_deps_file__V_102_102));
#line 1962 "write_deps_file.m"
      }
#line 1961 "write_deps_file.m"
      {
#line 1961 "write_deps_file.m"
        parse_tree__write_deps_file__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1961 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 0) = ((MR_Box) ((MR_String) "\t\tfi; \\\n"));
#line 1961 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 1) = ((MR_Box) (parse_tree__write_deps_file__V_100_100));
#line 1961 "write_deps_file.m"
      }
#line 1960 "write_deps_file.m"
      {
#line 1960 "write_deps_file.m"
        parse_tree__write_deps_file__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1960 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 0) = ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\\n"));
#line 1960 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 1) = ((MR_Box) (parse_tree__write_deps_file__V_98_98));
#line 1960 "write_deps_file.m"
      }
#line 1959 "write_deps_file.m"
      {
#line 1959 "write_deps_file.m"
        parse_tree__write_deps_file__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1959 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"installing \044\044target\"; \\\n"));
#line 1959 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_94_94, 1) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 1959 "write_deps_file.m"
      }
#line 1958 "write_deps_file.m"
      {
#line 1958 "write_deps_file.m"
        parse_tree__write_deps_file__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1958 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 0) = ((MR_Box) ((MR_String) "\t\telse \\\n"));
#line 1958 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_92_92, 1) = ((MR_Box) (parse_tree__write_deps_file__V_94_94));
#line 1958 "write_deps_file.m"
      }
#line 1957 "write_deps_file.m"
      {
#line 1957 "write_deps_file.m"
        parse_tree__write_deps_file__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1957 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"\044\044target unchanged\"; \\\n"));
#line 1957 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 1) = ((MR_Box) (parse_tree__write_deps_file__V_92_92));
#line 1957 "write_deps_file.m"
      }
#line 1956 "write_deps_file.m"
      {
#line 1956 "write_deps_file.m"
        parse_tree__write_deps_file__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1956 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 0) = ((MR_Box) ((MR_String) "\t\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\\n"));
#line 1956 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 1) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 1956 "write_deps_file.m"
      }
#line 1955 "write_deps_file.m"
      {
#line 1955 "write_deps_file.m"
        parse_tree__write_deps_file__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1955 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 0) = ((MR_Box) ((MR_String) "\t\ttarget=\"\044(INSTALL_INT_DIR)/\140basename \044\044file\140\"; \\\n"));
#line 1955 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_86_86, 1) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 1955 "write_deps_file.m"
      }
#line 1954 "write_deps_file.m"
      {
#line 1954 "write_deps_file.m"
        parse_tree__write_deps_file__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1954 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 0) = ((MR_Box) ((MR_String) "\tfor file in \044\044files; do \\\n"));
#line 1954 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_84_84, 1) = ((MR_Box) (parse_tree__write_deps_file__V_86_86));
#line 1954 "write_deps_file.m"
      }
#line 1953 "write_deps_file.m"
      {
#line 1953 "write_deps_file.m"
        parse_tree__write_deps_file__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1953 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_82_82, 0) = ((MR_Box) ((MR_String) "\"; \\\n"));
#line 1953 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_82_82, 1) = ((MR_Box) (parse_tree__write_deps_file__V_84_84));
#line 1953 "write_deps_file.m"
      }
#line 1953 "write_deps_file.m"
      {
#line 1953 "write_deps_file.m"
        parse_tree__write_deps_file__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1953 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeModuleDepsVar_22));
#line 1953 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 1) = ((MR_Box) (parse_tree__write_deps_file__V_82_82));
#line 1953 "write_deps_file.m"
      }
#line 1953 "write_deps_file.m"
      {
#line 1953 "write_deps_file.m"
        parse_tree__write_deps_file__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1953 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 1953 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 1) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 1953 "write_deps_file.m"
      }
#line 1952 "write_deps_file.m"
      {
#line 1952 "write_deps_file.m"
        parse_tree__write_deps_file__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1952 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 1952 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_79_79, 1) = ((MR_Box) (parse_tree__write_deps_file__V_80_80));
#line 1952 "write_deps_file.m"
      }
#line 1952 "write_deps_file.m"
      {
#line 1952 "write_deps_file.m"
        parse_tree__write_deps_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1952 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeInt0sVar_32));
#line 1952 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 1) = ((MR_Box) (parse_tree__write_deps_file__V_79_79));
#line 1952 "write_deps_file.m"
      }
#line 1952 "write_deps_file.m"
      {
#line 1952 "write_deps_file.m"
        parse_tree__write_deps_file__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1952 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_76_76, 0) = ((MR_Box) ((MR_String) ".int3s) "));
#line 1952 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_76_76, 1) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 1952 "write_deps_file.m"
      }
#line 1951 "write_deps_file.m"
      {
#line 1951 "write_deps_file.m"
        parse_tree__write_deps_file__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1951 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 1951 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 1) = ((MR_Box) (parse_tree__write_deps_file__V_76_76));
#line 1951 "write_deps_file.m"
      }
#line 1951 "write_deps_file.m"
      {
#line 1951 "write_deps_file.m"
        parse_tree__write_deps_file__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1951 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 0) = ((MR_Box) ((MR_String) ".ints) \044("));
#line 1951 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_73_73, 1) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 1951 "write_deps_file.m"
      }
#line 1951 "write_deps_file.m"
      {
#line 1951 "write_deps_file.m"
        parse_tree__write_deps_file__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1951 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 1951 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 1) = ((MR_Box) (parse_tree__write_deps_file__V_73_73));
#line 1951 "write_deps_file.m"
      }
#line 1951 "write_deps_file.m"
      {
#line 1951 "write_deps_file.m"
        parse_tree__write_deps_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1951 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 0) = ((MR_Box) ((MR_String) "\tfiles=\"\044("));
#line 1951 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 1) = ((MR_Box) (parse_tree__write_deps_file__V_72_72));
#line 1951 "write_deps_file.m"
      }
#line 1950 "write_deps_file.m"
      {
#line 1950 "write_deps_file.m"
        parse_tree__write_deps_file__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1950 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 0) = ((MR_Box) ((MR_String) " install_lib_dirs\n"));
#line 1950 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 1) = ((MR_Box) (parse_tree__write_deps_file__V_70_70));
#line 1950 "write_deps_file.m"
      }
#line 1949 "write_deps_file.m"
      {
#line 1949 "write_deps_file.m"
        parse_tree__write_deps_file__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1949 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeModuleDepsVar_22));
#line 1949 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_67_67, 1) = ((MR_Box) (parse_tree__write_deps_file__V_68_68));
#line 1949 "write_deps_file.m"
      }
#line 1949 "write_deps_file.m"
      {
#line 1949 "write_deps_file.m"
        parse_tree__write_deps_file__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1949 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 1949 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 1) = ((MR_Box) (parse_tree__write_deps_file__V_67_67));
#line 1949 "write_deps_file.m"
      }
#line 1948 "write_deps_file.m"
      {
#line 1948 "write_deps_file.m"
        parse_tree__write_deps_file__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1948 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 1948 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_65_65, 1) = ((MR_Box) (parse_tree__write_deps_file__V_66_66));
#line 1948 "write_deps_file.m"
      }
#line 1948 "write_deps_file.m"
      {
#line 1948 "write_deps_file.m"
        parse_tree__write_deps_file__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1948 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_64_64, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeInt0sVar_32));
#line 1948 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_64_64, 1) = ((MR_Box) (parse_tree__write_deps_file__V_65_65));
#line 1948 "write_deps_file.m"
      }
#line 1948 "write_deps_file.m"
      {
#line 1948 "write_deps_file.m"
        parse_tree__write_deps_file__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1948 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_62_62, 0) = ((MR_Box) ((MR_String) ".int3s) "));
#line 1948 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_62_62, 1) = ((MR_Box) (parse_tree__write_deps_file__V_64_64));
#line 1948 "write_deps_file.m"
      }
#line 1948 "write_deps_file.m"
      {
#line 1948 "write_deps_file.m"
        parse_tree__write_deps_file__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1948 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_61_61, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 1948 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_61_61, 1) = ((MR_Box) (parse_tree__write_deps_file__V_62_62));
#line 1948 "write_deps_file.m"
      }
#line 1947 "write_deps_file.m"
      {
#line 1947 "write_deps_file.m"
        parse_tree__write_deps_file__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1947 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_59_59, 0) = ((MR_Box) ((MR_String) ".ints) \044("));
#line 1947 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_59_59, 1) = ((MR_Box) (parse_tree__write_deps_file__V_61_61));
#line 1947 "write_deps_file.m"
      }
#line 1947 "write_deps_file.m"
      {
#line 1947 "write_deps_file.m"
        parse_tree__write_deps_file__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1947 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 1947 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_58_58, 1) = ((MR_Box) (parse_tree__write_deps_file__V_59_59));
#line 1947 "write_deps_file.m"
      }
#line 1947 "write_deps_file.m"
      {
#line 1947 "write_deps_file.m"
        parse_tree__write_deps_file__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1947 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_56_56, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1947 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_56_56, 1) = ((MR_Box) (parse_tree__write_deps_file__V_58_58));
#line 1947 "write_deps_file.m"
      }
#line 1947 "write_deps_file.m"
      {
#line 1947 "write_deps_file.m"
        parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1947 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallIntsTargetName_26));
#line 1947 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_56_56));
#line 1947 "write_deps_file.m"
      }
#line 1946 "write_deps_file.m"
      {
#line 1946 "write_deps_file.m"
        parse_tree__write_deps_file__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1946 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1946 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 1) = ((MR_Box) (parse_tree__write_deps_file__V_55_55));
#line 1946 "write_deps_file.m"
      }
#line 1946 "write_deps_file.m"
      {
#line 1946 "write_deps_file.m"
        parse_tree__write_deps_file__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1946 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallIntsTargetName_26));
#line 1946 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 1) = ((MR_Box) (parse_tree__write_deps_file__V_53_53));
#line 1946 "write_deps_file.m"
      }
#line 1946 "write_deps_file.m"
      {
#line 1946 "write_deps_file.m"
        parse_tree__write_deps_file__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1946 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 1946 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_49_49, 1) = ((MR_Box) (parse_tree__write_deps_file__V_52_52));
#line 1946 "write_deps_file.m"
      }
#line 1945 "write_deps_file.m"
      {
#line 1945 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_49_49);
      }
#line 1979 "write_deps_file.m"
      {
#line 1979 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_opts", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallOptsTargetName_35);
      }
#line 1983 "write_deps_file.m"
      {
#line 1983 "write_deps_file.m"
        parse_tree__write_deps_file__V_143_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1983 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsTargetName_35));
#line 1983 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_143_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[99])));
#line 1983 "write_deps_file.m"
      }
#line 1982 "write_deps_file.m"
      {
#line 1982 "write_deps_file.m"
        parse_tree__write_deps_file__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1982 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_141_141, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1982 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_141_141, 1) = ((MR_Box) (parse_tree__write_deps_file__V_143_143));
#line 1982 "write_deps_file.m"
      }
#line 1982 "write_deps_file.m"
      {
#line 1982 "write_deps_file.m"
        parse_tree__write_deps_file__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1982 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsTargetName_35));
#line 1982 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_140_140, 1) = ((MR_Box) (parse_tree__write_deps_file__V_141_141));
#line 1982 "write_deps_file.m"
      }
#line 1982 "write_deps_file.m"
      {
#line 1982 "write_deps_file.m"
        parse_tree__write_deps_file__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1982 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_137_137, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 1982 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_137_137, 1) = ((MR_Box) (parse_tree__write_deps_file__V_140_140));
#line 1982 "write_deps_file.m"
      }
#line 1981 "write_deps_file.m"
      {
#line 1981 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_137_137);
      }
#line 1985 "write_deps_file.m"
      (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = (parse_tree__write_deps_file__Intermod_20 == (MR_Integer) 0);
#line 1985 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 1986 "write_deps_file.m"
        (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = (parse_tree__write_deps_file__TransOpt_21 == (MR_Integer) 0);
#line 1989 "write_deps_file.m"
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
#line 1988 "write_deps_file.m"
        {
#line 1988 "write_deps_file.m"
          {
#line 1988 "write_deps_file.m"
            mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_15, (MR_String) "\n\t\100:\n\n");
          }
#line 1988 "write_deps_file.m"
        }
#line 1989 "write_deps_file.m"
      else
#line 1990 "write_deps_file.m"
        {
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_149_149;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_151_151;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_152_152;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_154_154;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_156_156;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_157_157;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_158_158;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_160_160;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_162_162;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_164_164;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_166_166;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_168_168;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_170_170;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_172_172;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_174_174;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_176_176;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_178_178;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_180_180;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_182_182;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_184_184;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_186_186;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_188_188;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_190_190;
#line 1990 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_191_191;

#line 2007 "write_deps_file.m"
          {
#line 2007 "write_deps_file.m"
            parse_tree__write_deps_file__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2007 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptStr_33));
#line 2007 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[41])));
#line 2007 "write_deps_file.m"
          }
#line 2007 "write_deps_file.m"
          {
#line 2007 "write_deps_file.m"
            parse_tree__write_deps_file__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2007 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_190_190, 0) = ((MR_Box) (parse_tree__write_deps_file__OptStr_27));
#line 2007 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_190_190, 1) = ((MR_Box) (parse_tree__write_deps_file__V_191_191));
#line 2007 "write_deps_file.m"
          }
#line 2007 "write_deps_file.m"
          {
#line 2007 "write_deps_file.m"
            parse_tree__write_deps_file__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2007 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_188_188, 0) = ((MR_Box) ((MR_String) "\tfor ext in "));
#line 2007 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_188_188, 1) = ((MR_Box) (parse_tree__write_deps_file__V_190_190));
#line 2007 "write_deps_file.m"
          }
#line 2006 "write_deps_file.m"
          {
#line 2006 "write_deps_file.m"
            parse_tree__write_deps_file__V_186_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2006 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 0) = ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n"));
#line 2006 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_186_186, 1) = ((MR_Box) (parse_tree__write_deps_file__V_188_188));
#line 2006 "write_deps_file.m"
          }
#line 2005 "write_deps_file.m"
          {
#line 2005 "write_deps_file.m"
            parse_tree__write_deps_file__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2005 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 0) = ((MR_Box) ((MR_String) " then we just use\n"));
#line 2005 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 1) = ((MR_Box) (parse_tree__write_deps_file__V_186_186));
#line 2005 "write_deps_file.m"
          }
#line 2004 "write_deps_file.m"
          {
#line 2004 "write_deps_file.m"
            parse_tree__write_deps_file__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2004 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 0) = ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails,"));
#line 2004 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 1) = ((MR_Box) (parse_tree__write_deps_file__V_184_184));
#line 2004 "write_deps_file.m"
          }
#line 2003 "write_deps_file.m"
          {
#line 2003 "write_deps_file.m"
            parse_tree__write_deps_file__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2003 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_180_180, 0) = ((MR_Box) ((MR_String) " \140--use-subdirs\' option\n"));
#line 2003 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_180_180, 1) = ((MR_Box) (parse_tree__write_deps_file__V_182_182));
#line 2003 "write_deps_file.m"
          }
#line 2002 "write_deps_file.m"
          {
#line 2002 "write_deps_file.m"
            parse_tree__write_deps_file__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2002 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_178_178, 0) = ((MR_Box) ((MR_String) "\t# The following is needed to support the"));
#line 2002 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_178_178, 1) = ((MR_Box) (parse_tree__write_deps_file__V_180_180));
#line 2002 "write_deps_file.m"
          }
#line 2001 "write_deps_file.m"
          {
#line 2001 "write_deps_file.m"
            parse_tree__write_deps_file__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2001 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 0) = ((MR_Box) ((MR_String) "\tdone\n"));
#line 2001 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_176_176, 1) = ((MR_Box) (parse_tree__write_deps_file__V_178_178));
#line 2001 "write_deps_file.m"
          }
#line 2000 "write_deps_file.m"
          {
#line 2000 "write_deps_file.m"
            parse_tree__write_deps_file__V_174_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2000 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 0) = ((MR_Box) ((MR_String) "\t\tfi; \\\n"));
#line 2000 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_174_174, 1) = ((MR_Box) (parse_tree__write_deps_file__V_176_176));
#line 2000 "write_deps_file.m"
          }
#line 1999 "write_deps_file.m"
          {
#line 1999 "write_deps_file.m"
            parse_tree__write_deps_file__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1999 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 0) = ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\\n"));
#line 1999 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_172_172, 1) = ((MR_Box) (parse_tree__write_deps_file__V_174_174));
#line 1999 "write_deps_file.m"
          }
#line 1998 "write_deps_file.m"
          {
#line 1998 "write_deps_file.m"
            parse_tree__write_deps_file__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1998 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_170_170, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"installing \044\044target\"; \\\n"));
#line 1998 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_170_170, 1) = ((MR_Box) (parse_tree__write_deps_file__V_172_172));
#line 1998 "write_deps_file.m"
          }
#line 1997 "write_deps_file.m"
          {
#line 1997 "write_deps_file.m"
            parse_tree__write_deps_file__V_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1997 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_168_168, 0) = ((MR_Box) ((MR_String) "\t\telse \\\n"));
#line 1997 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_168_168, 1) = ((MR_Box) (parse_tree__write_deps_file__V_170_170));
#line 1997 "write_deps_file.m"
          }
#line 1996 "write_deps_file.m"
          {
#line 1996 "write_deps_file.m"
            parse_tree__write_deps_file__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1996 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"\044\044target unchanged\"; \\\n"));
#line 1996 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_166_166, 1) = ((MR_Box) (parse_tree__write_deps_file__V_168_168));
#line 1996 "write_deps_file.m"
          }
#line 1995 "write_deps_file.m"
          {
#line 1995 "write_deps_file.m"
            parse_tree__write_deps_file__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1995 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 0) = ((MR_Box) ((MR_String) "\t\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\\n"));
#line 1995 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_164_164, 1) = ((MR_Box) (parse_tree__write_deps_file__V_166_166));
#line 1995 "write_deps_file.m"
          }
#line 1994 "write_deps_file.m"
          {
#line 1994 "write_deps_file.m"
            parse_tree__write_deps_file__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1994 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 0) = ((MR_Box) ((MR_String) "\t\ttarget=\"\044(INSTALL_GRADE_INT_DIR)/\140basename \044\044file\140\";\\\n"));
#line 1994 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_162_162, 1) = ((MR_Box) (parse_tree__write_deps_file__V_164_164));
#line 1994 "write_deps_file.m"
          }
#line 1993 "write_deps_file.m"
          {
#line 1993 "write_deps_file.m"
            parse_tree__write_deps_file__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1993 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_160_160, 0) = ((MR_Box) ((MR_String) "\tfor file in \044\044files; do \\\n"));
#line 1993 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_160_160, 1) = ((MR_Box) (parse_tree__write_deps_file__V_162_162));
#line 1993 "write_deps_file.m"
          }
#line 1992 "write_deps_file.m"
          {
#line 1992 "write_deps_file.m"
            parse_tree__write_deps_file__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1992 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_158_158, 0) = ((MR_Box) ((MR_String) "\"; \\\n"));
#line 1992 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_158_158, 1) = ((MR_Box) (parse_tree__write_deps_file__V_160_160));
#line 1992 "write_deps_file.m"
          }
#line 1992 "write_deps_file.m"
          {
#line 1992 "write_deps_file.m"
            parse_tree__write_deps_file__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1992 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 1992 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_157_157, 1) = ((MR_Box) (parse_tree__write_deps_file__V_158_158));
#line 1992 "write_deps_file.m"
          }
#line 1992 "write_deps_file.m"
          {
#line 1992 "write_deps_file.m"
            parse_tree__write_deps_file__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1992 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 1992 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_156_156, 1) = ((MR_Box) (parse_tree__write_deps_file__V_157_157));
#line 1992 "write_deps_file.m"
          }
#line 1992 "write_deps_file.m"
          {
#line 1992 "write_deps_file.m"
            parse_tree__write_deps_file__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1992 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 0) = ((MR_Box) ((MR_String) "\tfiles=\""));
#line 1992 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_154_154, 1) = ((MR_Box) (parse_tree__write_deps_file__V_156_156));
#line 1992 "write_deps_file.m"
          }
#line 1991 "write_deps_file.m"
          {
#line 1991 "write_deps_file.m"
            parse_tree__write_deps_file__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1991 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_152_152, 0) = ((MR_Box) ((MR_String) "install_grade_dirs\n"));
#line 1991 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_152_152, 1) = ((MR_Box) (parse_tree__write_deps_file__V_154_154));
#line 1991 "write_deps_file.m"
          }
#line 1991 "write_deps_file.m"
          {
#line 1991 "write_deps_file.m"
            parse_tree__write_deps_file__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1991 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
#line 1991 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_151_151, 1) = ((MR_Box) (parse_tree__write_deps_file__V_152_152));
#line 1991 "write_deps_file.m"
          }
#line 1991 "write_deps_file.m"
          {
#line 1991 "write_deps_file.m"
            parse_tree__write_deps_file__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1991 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_149_149, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
#line 1991 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_149_149, 1) = ((MR_Box) (parse_tree__write_deps_file__V_151_151));
#line 1991 "write_deps_file.m"
          }
#line 1990 "write_deps_file.m"
          {
#line 1990 "write_deps_file.m"
            mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_149_149);
          }
#line 1990 "write_deps_file.m"
        }
#line 2030 "write_deps_file.m"
      {
#line 2030 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_hdrs", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallHdrsTargetName_36);
      }
#line 2040 "write_deps_file.m"
      {
#line 2040 "write_deps_file.m"
        parse_tree__write_deps_file__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2040 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2040 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_244_244, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[45])));
#line 2040 "write_deps_file.m"
      }
#line 2040 "write_deps_file.m"
      {
#line 2040 "write_deps_file.m"
        parse_tree__write_deps_file__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2040 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 0) = ((MR_Box) ((MR_String) "\tfor hdr in \044("));
#line 2040 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 1) = ((MR_Box) (parse_tree__write_deps_file__V_244_244));
#line 2040 "write_deps_file.m"
      }
#line 2039 "write_deps_file.m"
      {
#line 2039 "write_deps_file.m"
        parse_tree__write_deps_file__V_240_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2039 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 0) = ((MR_Box) ((MR_String) "else\n"));
#line 2039 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 1) = ((MR_Box) (parse_tree__write_deps_file__V_242_242));
#line 2039 "write_deps_file.m"
      }
#line 2038 "write_deps_file.m"
      {
#line 2038 "write_deps_file.m"
        parse_tree__write_deps_file__V_238_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2038 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_238_238, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 2038 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_238_238, 1) = ((MR_Box) (parse_tree__write_deps_file__V_240_240));
#line 2038 "write_deps_file.m"
      }
#line 2037 "write_deps_file.m"
      {
#line 2037 "write_deps_file.m"
        parse_tree__write_deps_file__V_236_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2037 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_236_236, 0) = ((MR_Box) ((MR_String) ".mhs),)\n"));
#line 2037 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_236_236, 1) = ((MR_Box) (parse_tree__write_deps_file__V_238_238));
#line 2037 "write_deps_file.m"
      }
#line 2037 "write_deps_file.m"
      {
#line 2037 "write_deps_file.m"
        parse_tree__write_deps_file__V_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2037 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2037 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 1) = ((MR_Box) (parse_tree__write_deps_file__V_236_236));
#line 2037 "write_deps_file.m"
      }
#line 2037 "write_deps_file.m"
      {
#line 2037 "write_deps_file.m"
        parse_tree__write_deps_file__V_233_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2037 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_233_233, 0) = ((MR_Box) ((MR_String) "ifeq (\044("));
#line 2037 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_233_233, 1) = ((MR_Box) (parse_tree__write_deps_file__V_235_235));
#line 2037 "write_deps_file.m"
      }
#line 2036 "write_deps_file.m"
      {
#line 2036 "write_deps_file.m"
        parse_tree__write_deps_file__V_231_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2036 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 0) = ((MR_Box) ((MR_String) "install_lib_dirs\n"));
#line 2036 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 1) = ((MR_Box) (parse_tree__write_deps_file__V_233_233));
#line 2036 "write_deps_file.m"
      }
#line 2035 "write_deps_file.m"
      {
#line 2035 "write_deps_file.m"
        parse_tree__write_deps_file__V_229_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2035 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 0) = ((MR_Box) ((MR_String) ".mhs) "));
#line 2035 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 1) = ((MR_Box) (parse_tree__write_deps_file__V_231_231));
#line 2035 "write_deps_file.m"
      }
#line 2035 "write_deps_file.m"
      {
#line 2035 "write_deps_file.m"
        parse_tree__write_deps_file__V_228_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2035 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_228_228, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2035 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_228_228, 1) = ((MR_Box) (parse_tree__write_deps_file__V_229_229));
#line 2035 "write_deps_file.m"
      }
#line 2035 "write_deps_file.m"
      {
#line 2035 "write_deps_file.m"
        parse_tree__write_deps_file__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2035 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 0) = ((MR_Box) ((MR_String) "\044("));
#line 2035 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 1) = ((MR_Box) (parse_tree__write_deps_file__V_228_228));
#line 2035 "write_deps_file.m"
      }
#line 2034 "write_deps_file.m"
      {
#line 2034 "write_deps_file.m"
        parse_tree__write_deps_file__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2034 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 0) = ((MR_Box) ((MR_String) " : "));
#line 2034 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 1) = ((MR_Box) (parse_tree__write_deps_file__V_226_226));
#line 2034 "write_deps_file.m"
      }
#line 2034 "write_deps_file.m"
      {
#line 2034 "write_deps_file.m"
        parse_tree__write_deps_file__V_223_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2034 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_223_223, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallHdrsTargetName_36));
#line 2034 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_223_223, 1) = ((MR_Box) (parse_tree__write_deps_file__V_224_224));
#line 2034 "write_deps_file.m"
      }
#line 2033 "write_deps_file.m"
      {
#line 2033 "write_deps_file.m"
        parse_tree__write_deps_file__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2033 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2033 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 1) = ((MR_Box) (parse_tree__write_deps_file__V_223_223));
#line 2033 "write_deps_file.m"
      }
#line 2033 "write_deps_file.m"
      {
#line 2033 "write_deps_file.m"
        parse_tree__write_deps_file__V_220_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2033 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_220_220, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallHdrsTargetName_36));
#line 2033 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_220_220, 1) = ((MR_Box) (parse_tree__write_deps_file__V_221_221));
#line 2033 "write_deps_file.m"
      }
#line 2033 "write_deps_file.m"
      {
#line 2033 "write_deps_file.m"
        parse_tree__write_deps_file__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2033 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2033 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_217_217, 1) = ((MR_Box) (parse_tree__write_deps_file__V_220_220));
#line 2033 "write_deps_file.m"
      }
#line 2032 "write_deps_file.m"
      {
#line 2032 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_217_217);
      }
#line 2046 "write_deps_file.m"
      {
#line 2046 "write_deps_file.m"
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_grade_hdrs", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_37);
      }
#line 2057 "write_deps_file.m"
      {
#line 2057 "write_deps_file.m"
        parse_tree__write_deps_file__V_287_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2057 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_287_287, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2057 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_287_287, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[69])));
#line 2057 "write_deps_file.m"
      }
#line 2057 "write_deps_file.m"
      {
#line 2057 "write_deps_file.m"
        parse_tree__write_deps_file__V_285_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2057 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 0) = ((MR_Box) ((MR_String) "\tfor hdr in \044("));
#line 2057 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_285_285, 1) = ((MR_Box) (parse_tree__write_deps_file__V_287_287));
#line 2057 "write_deps_file.m"
      }
#line 2056 "write_deps_file.m"
      {
#line 2056 "write_deps_file.m"
        parse_tree__write_deps_file__V_283_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2056 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 0) = ((MR_Box) ((MR_String) "else\n"));
#line 2056 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 1) = ((MR_Box) (parse_tree__write_deps_file__V_285_285));
#line 2056 "write_deps_file.m"
      }
#line 2055 "write_deps_file.m"
      {
#line 2055 "write_deps_file.m"
        parse_tree__write_deps_file__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2055 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 2055 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 1) = ((MR_Box) (parse_tree__write_deps_file__V_283_283));
#line 2055 "write_deps_file.m"
      }
#line 2054 "write_deps_file.m"
      {
#line 2054 "write_deps_file.m"
        parse_tree__write_deps_file__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2054 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 0) = ((MR_Box) ((MR_String) ".mihs),)\n"));
#line 2054 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 1) = ((MR_Box) (parse_tree__write_deps_file__V_281_281));
#line 2054 "write_deps_file.m"
      }
#line 2054 "write_deps_file.m"
      {
#line 2054 "write_deps_file.m"
        parse_tree__write_deps_file__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2054 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2054 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 1) = ((MR_Box) (parse_tree__write_deps_file__V_279_279));
#line 2054 "write_deps_file.m"
      }
#line 2054 "write_deps_file.m"
      {
#line 2054 "write_deps_file.m"
        parse_tree__write_deps_file__V_276_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2054 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 0) = ((MR_Box) ((MR_String) "ifeq (\044("));
#line 2054 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 1) = ((MR_Box) (parse_tree__write_deps_file__V_278_278));
#line 2054 "write_deps_file.m"
      }
#line 2053 "write_deps_file.m"
      {
#line 2053 "write_deps_file.m"
        parse_tree__write_deps_file__V_274_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2053 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 0) = ((MR_Box) ((MR_String) "install_grade_dirs\n"));
#line 2053 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 1) = ((MR_Box) (parse_tree__write_deps_file__V_276_276));
#line 2053 "write_deps_file.m"
      }
#line 2052 "write_deps_file.m"
      {
#line 2052 "write_deps_file.m"
        parse_tree__write_deps_file__V_272_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2052 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 0) = ((MR_Box) ((MR_String) ".mihs) "));
#line 2052 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 1) = ((MR_Box) (parse_tree__write_deps_file__V_274_274));
#line 2052 "write_deps_file.m"
      }
#line 2052 "write_deps_file.m"
      {
#line 2052 "write_deps_file.m"
        parse_tree__write_deps_file__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2052 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
#line 2052 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 1) = ((MR_Box) (parse_tree__write_deps_file__V_272_272));
#line 2052 "write_deps_file.m"
      }
#line 2052 "write_deps_file.m"
      {
#line 2052 "write_deps_file.m"
        parse_tree__write_deps_file__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2052 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 0) = ((MR_Box) ((MR_String) "\044("));
#line 2052 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 1) = ((MR_Box) (parse_tree__write_deps_file__V_271_271));
#line 2052 "write_deps_file.m"
      }
#line 2051 "write_deps_file.m"
      {
#line 2051 "write_deps_file.m"
        parse_tree__write_deps_file__V_267_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2051 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_267_267, 0) = ((MR_Box) ((MR_String) " : "));
#line 2051 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_267_267, 1) = ((MR_Box) (parse_tree__write_deps_file__V_269_269));
#line 2051 "write_deps_file.m"
      }
#line 2051 "write_deps_file.m"
      {
#line 2051 "write_deps_file.m"
        parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2051 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_37));
#line 2051 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__V_267_267));
#line 2051 "write_deps_file.m"
      }
#line 2050 "write_deps_file.m"
      {
#line 2050 "write_deps_file.m"
        parse_tree__write_deps_file__V_264_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2050 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 0) = ((MR_Box) ((MR_String) "\n"));
#line 2050 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 2050 "write_deps_file.m"
      }
#line 2050 "write_deps_file.m"
      {
#line 2050 "write_deps_file.m"
        parse_tree__write_deps_file__V_263_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2050 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_37));
#line 2050 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 1) = ((MR_Box) (parse_tree__write_deps_file__V_264_264));
#line 2050 "write_deps_file.m"
      }
#line 2050 "write_deps_file.m"
      {
#line 2050 "write_deps_file.m"
        parse_tree__write_deps_file__V_260_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2050 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 2050 "write_deps_file.m"
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_260_260, 1) = ((MR_Box) (parse_tree__write_deps_file__V_263_263));
#line 2050 "write_deps_file.m"
      }
#line 2049 "write_deps_file.m"
      {
#line 2049 "write_deps_file.m"
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__V_260_260);
#line 2049 "write_deps_file.m"
        return;
      }
#line 1900 "write_deps_file.m"
    }
#line 1894 "write_deps_file.m"
  }
#line 1894 "write_deps_file.m"
}

#line 1851 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(
#line 1851 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_11,
#line 1851 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12,
#line 1851 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_13,
#line 1851 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_14,
#line 1851 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitCFileName_15,
#line 1851 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_16,
#line 1851 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DepFileName_17,
#line 1851 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__DvFileName_18)
#line 1851 "write_deps_file.m"
{
#line 1857 "write_deps_file.m"
  {
#line 1857 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1857 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleFileName_20;
#line 1857 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ForceC2InitTarget_21;
#line 1857 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__TmpInitCFileName_22;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_31_31;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_33_33;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_35_35;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_36_36;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_38_38;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_39_39;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_41_41;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_43_43;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_47_47;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_50_50;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_52_52;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_53_53;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_55_55;
#line 1857 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_67_67;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_70_70;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_72_72;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_74_74;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_75_75;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_77_77;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_78_78;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_80_80;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_81_81;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_83_83;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_85_85;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_87_87;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_88_88;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_90_90;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_91_91;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_93_93;
#line 1857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_95_95;

#line 1858 "write_deps_file.m"
    {
#line 1858 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_11, parse_tree__write_deps_file__ModuleName_13, (MR_String) ".dep", (MR_Integer) 1, parse_tree__write_deps_file__DepFileName_17);
    }
#line 1860 "write_deps_file.m"
    {
#line 1860 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_11, parse_tree__write_deps_file__ModuleName_13, (MR_String) ".dv", (MR_Integer) 1, parse_tree__write_deps_file__DvFileName_18);
    }
#line 1865 "write_deps_file.m"
    {
#line 1865 "write_deps_file.m"
      parse_tree__write_deps_file__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1865 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_43_43, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_16));
#line 1865 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_43_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[92])));
#line 1865 "write_deps_file.m"
    }
#line 1865 "write_deps_file.m"
    {
#line 1865 "write_deps_file.m"
      parse_tree__write_deps_file__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1865 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_41_41, 0) = ((MR_Box) ((MR_String) "\techo > "));
#line 1865 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_41_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 1865 "write_deps_file.m"
    }
#line 1864 "write_deps_file.m"
    {
#line 1864 "write_deps_file.m"
      parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) ((MR_String) ".cs)\n"));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (parse_tree__write_deps_file__V_41_41));
#line 1864 "write_deps_file.m"
    }
#line 1864 "write_deps_file.m"
    {
#line 1864 "write_deps_file.m"
      parse_tree__write_deps_file__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_38_38, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_38_38, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 1864 "write_deps_file.m"
    }
#line 1864 "write_deps_file.m"
    {
#line 1864 "write_deps_file.m"
      parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) ((MR_String) " \044("));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_38_38));
#line 1864 "write_deps_file.m"
    }
#line 1864 "write_deps_file.m"
    {
#line 1864 "write_deps_file.m"
      parse_tree__write_deps_file__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_35_35, 0) = ((MR_Box) (*parse_tree__write_deps_file__DepFileName_17));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_35_35, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 1864 "write_deps_file.m"
    }
#line 1864 "write_deps_file.m"
    {
#line 1864 "write_deps_file.m"
      parse_tree__write_deps_file__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_33_33, 0) = ((MR_Box) ((MR_String) " : "));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_33_33, 1) = ((MR_Box) (parse_tree__write_deps_file__V_35_35));
#line 1864 "write_deps_file.m"
    }
#line 1864 "write_deps_file.m"
    {
#line 1864 "write_deps_file.m"
      parse_tree__write_deps_file__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_31_31, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_16));
#line 1864 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_31_31, 1) = ((MR_Box) (parse_tree__write_deps_file__V_33_33));
#line 1864 "write_deps_file.m"
    }
#line 1863 "write_deps_file.m"
    {
#line 1863 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_31_31);
    }
#line 1868 "write_deps_file.m"
    {
#line 1868 "write_deps_file.m"
      parse_tree__write_deps_file__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1868 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 0) = ((MR_Box) ((MR_String) " >> "));
#line 1868 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_55_55, 1) = ((MR_Box) (parse_tree__write_deps_file__V_43_43));
#line 1868 "write_deps_file.m"
    }
#line 1868 "write_deps_file.m"
    {
#line 1868 "write_deps_file.m"
      parse_tree__write_deps_file__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1868 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 0) = ((MR_Box) ((MR_String) ".cs)"));
#line 1868 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_53_53, 1) = ((MR_Box) (parse_tree__write_deps_file__V_55_55));
#line 1868 "write_deps_file.m"
    }
#line 1868 "write_deps_file.m"
    {
#line 1868 "write_deps_file.m"
      parse_tree__write_deps_file__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1868 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 1868 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_52_52, 1) = ((MR_Box) (parse_tree__write_deps_file__V_53_53));
#line 1868 "write_deps_file.m"
    }
#line 1868 "write_deps_file.m"
    {
#line 1868 "write_deps_file.m"
      parse_tree__write_deps_file__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1868 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1868 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_50_50, 1) = ((MR_Box) (parse_tree__write_deps_file__V_52_52));
#line 1868 "write_deps_file.m"
    }
#line 1868 "write_deps_file.m"
    {
#line 1868 "write_deps_file.m"
      parse_tree__write_deps_file__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1868 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 0) = ((MR_Box) ((MR_String) "\t\044(MKLIBINIT) "));
#line 1868 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_47_47, 1) = ((MR_Box) (parse_tree__write_deps_file__V_50_50));
#line 1868 "write_deps_file.m"
    }
#line 1867 "write_deps_file.m"
    {
#line 1867 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_47_47);
    }
#line 1875 "write_deps_file.m"
    {
#line 1875 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\t\044(EXTRA_INIT_COMMAND) >> ");
    }
#line 1876 "write_deps_file.m"
    {
#line 1876 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__InitFileName_16);
    }
#line 1877 "write_deps_file.m"
    {
#line 1877 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1882 "write_deps_file.m"
    {
#line 1882 "write_deps_file.m"
      parse_tree__write_deps_file__ModuleFileName_20 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_13);
    }
#line 1883 "write_deps_file.m"
    {
#line 1883 "write_deps_file.m"
      parse_tree__write_deps_file__V_67_67 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleFileName_20, (MR_String) "_init");
    }
#line 1883 "write_deps_file.m"
    {
#line 1883 "write_deps_file.m"
      parse_tree__write_deps_file__ForceC2InitTarget_21 = mercury__string__f_43_43_2_f_0((MR_String) "force-", parse_tree__write_deps_file__V_67_67);
    }
#line 1884 "write_deps_file.m"
    {
#line 1884 "write_deps_file.m"
      parse_tree__write_deps_file__TmpInitCFileName_22 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__InitCFileName_15, (MR_String) ".tmp");
    }
#line 1891 "write_deps_file.m"
    {
#line 1891 "write_deps_file.m"
      parse_tree__write_deps_file__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1891 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_95_95, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_15));
#line 1891 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[109])));
#line 1891 "write_deps_file.m"
    }
#line 1891 "write_deps_file.m"
    {
#line 1891 "write_deps_file.m"
      parse_tree__write_deps_file__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1891 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 0) = ((MR_Box) ((MR_String) "\t\100mercury_update_interface "));
#line 1891 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 1) = ((MR_Box) (parse_tree__write_deps_file__V_95_95));
#line 1891 "write_deps_file.m"
    }
#line 1890 "write_deps_file.m"
    {
#line 1890 "write_deps_file.m"
      parse_tree__write_deps_file__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1890 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 0) = ((MR_Box) ((MR_String) ".init_cs) \044(ALL_C2INITARGS)\n"));
#line 1890 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_91_91, 1) = ((MR_Box) (parse_tree__write_deps_file__V_93_93));
#line 1890 "write_deps_file.m"
    }
#line 1890 "write_deps_file.m"
    {
#line 1890 "write_deps_file.m"
      parse_tree__write_deps_file__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1890 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 1890 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_90_90, 1) = ((MR_Box) (parse_tree__write_deps_file__V_91_91));
#line 1890 "write_deps_file.m"
    }
#line 1890 "write_deps_file.m"
    {
#line 1890 "write_deps_file.m"
      parse_tree__write_deps_file__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1890 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 0) = ((MR_Box) ((MR_String) " \044("));
#line 1890 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_88_88, 1) = ((MR_Box) (parse_tree__write_deps_file__V_90_90));
#line 1890 "write_deps_file.m"
    }
#line 1889 "write_deps_file.m"
    {
#line 1889 "write_deps_file.m"
      parse_tree__write_deps_file__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1889 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpInitCFileName_22));
#line 1889 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_87_87, 1) = ((MR_Box) (parse_tree__write_deps_file__V_88_88));
#line 1889 "write_deps_file.m"
    }
#line 1889 "write_deps_file.m"
    {
#line 1889 "write_deps_file.m"
      parse_tree__write_deps_file__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1889 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_85_85, 0) = ((MR_Box) ((MR_String) "--init-c-file "));
#line 1889 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_85_85, 1) = ((MR_Box) (parse_tree__write_deps_file__V_87_87));
#line 1889 "write_deps_file.m"
    }
#line 1888 "write_deps_file.m"
    {
#line 1888 "write_deps_file.m"
      parse_tree__write_deps_file__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1888 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 0) = ((MR_Box) ((MR_String) "\t\100\044(C2INIT) \044(ALL_GRADEFLAGS) \044(ALL_C2INITFLAGS) "));
#line 1888 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 1) = ((MR_Box) (parse_tree__write_deps_file__V_85_85));
#line 1888 "write_deps_file.m"
    }
#line 1887 "write_deps_file.m"
    {
#line 1887 "write_deps_file.m"
      parse_tree__write_deps_file__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1887 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 0) = ((MR_Box) ((MR_String) ".cs)\n"));
#line 1887 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_81_81, 1) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 1887 "write_deps_file.m"
    }
#line 1887 "write_deps_file.m"
    {
#line 1887 "write_deps_file.m"
      parse_tree__write_deps_file__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1887 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
#line 1887 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_80_80, 1) = ((MR_Box) (parse_tree__write_deps_file__V_81_81));
#line 1887 "write_deps_file.m"
    }
#line 1887 "write_deps_file.m"
    {
#line 1887 "write_deps_file.m"
      parse_tree__write_deps_file__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1887 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 0) = ((MR_Box) ((MR_String) " \044("));
#line 1887 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_78_78, 1) = ((MR_Box) (parse_tree__write_deps_file__V_80_80));
#line 1887 "write_deps_file.m"
    }
#line 1887 "write_deps_file.m"
    {
#line 1887 "write_deps_file.m"
      parse_tree__write_deps_file__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1887 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 0) = ((MR_Box) (parse_tree__write_deps_file__ForceC2InitTarget_21));
#line 1887 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_77_77, 1) = ((MR_Box) (parse_tree__write_deps_file__V_78_78));
#line 1887 "write_deps_file.m"
    }
#line 1887 "write_deps_file.m"
    {
#line 1887 "write_deps_file.m"
      parse_tree__write_deps_file__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1887 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 0) = ((MR_Box) ((MR_String) " : "));
#line 1887 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_75_75, 1) = ((MR_Box) (parse_tree__write_deps_file__V_77_77));
#line 1887 "write_deps_file.m"
    }
#line 1887 "write_deps_file.m"
    {
#line 1887 "write_deps_file.m"
      parse_tree__write_deps_file__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1887 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_15));
#line 1887 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 1) = ((MR_Box) (parse_tree__write_deps_file__V_75_75));
#line 1887 "write_deps_file.m"
    }
#line 1886 "write_deps_file.m"
    {
#line 1886 "write_deps_file.m"
      parse_tree__write_deps_file__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1886 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 0) = ((MR_Box) ((MR_String) " :\n\n"));
#line 1886 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 1) = ((MR_Box) (parse_tree__write_deps_file__V_74_74));
#line 1886 "write_deps_file.m"
    }
#line 1886 "write_deps_file.m"
    {
#line 1886 "write_deps_file.m"
      parse_tree__write_deps_file__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1886 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 0) = ((MR_Box) (parse_tree__write_deps_file__ForceC2InitTarget_21));
#line 1886 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_70_70, 1) = ((MR_Box) (parse_tree__write_deps_file__V_72_72));
#line 1886 "write_deps_file.m"
    }
#line 1885 "write_deps_file.m"
    {
#line 1885 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_70_70);
#line 1885 "write_deps_file.m"
      return;
    }
#line 1857 "write_deps_file.m"
  }
#line 1851 "write_deps_file.m"
}

#line 1638 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(
#line 1638 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_19,
#line 1638 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_20,
#line 1638 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_21,
#line 1638 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__MakeVarName_22,
#line 1638 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitFileName_23,
#line 1638 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__InitObjFileName_24,
#line 1638 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Intermod_25,
#line 1638 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__TransOpt_26,
#line 1638 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_27,
#line 1638 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeOptsVar_28,
#line 1638 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeTransOptsVar_29,
#line 1638 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__MaybeModuleDepsVar_30,
#line 1638 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__ExeFileName_31,
#line 1638 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__JarFileName_32,
#line 1638 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__LibFileName_33,
#line 1638 "write_deps_file.m"
  MR_String * parse_tree__write_deps_file__SharedLibFileName_34)
#line 1638 "write_deps_file.m"
{
#line 1647 "write_deps_file.m"
  {
#line 1647 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Gmake_36;
#line 1647 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__All_MLLibsDepString_37;
#line 1647 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__All_MLObjsString_38;
#line 1647 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__All_MLPicObjsString_39;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__IfJava_40;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__JavaMainRule_41;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Else_42;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__EndIf_43;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__MainRule_44;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Target_45;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Rules_46;
#line 1647 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__LibTargetName_47;
#line 1647 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeSharedLibFileName_48;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__UseInstallName_49;
#line 1647 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InstallNameOpt_50;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__AllInts_51;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__JavaLibRule_52;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__LibRule_53;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__LibRules_54;
#line 1647 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ClassFiles_55;
#line 1647 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ListClassFiles_56;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_83_83;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_85_85;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_93_93;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_96_96;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_98_98;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_99_99;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_101_101;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_102_102;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_104_104;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_110_110;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_112_112;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_113_113;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_115_115;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_117_117;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_118_118;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_120_120;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_121_121;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_123_123;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_124_124;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_126_126;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_127_127;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_129_129;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_131_131;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_133_133;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_134_134;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_136_136;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_137_137;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_139_139;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_141_141;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_142_142;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_144_144;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_182_182;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_183_183;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_185_185;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_187_187;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_188_188;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_190_190;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_191_191;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_192_192;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_193_193;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_196_196;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_198_198;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_199_199;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_201_201;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_203_203;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_204_204;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_206_206;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_212_212;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_215_215;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_216_216;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_218_218;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_221_221;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_222_222;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_224_224;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_225_225;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_227_227;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_229_229;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_230_230;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_232_232;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_233_233;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_235_235;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_236_236;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_238_238;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_240_240;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_242_242;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_243_243;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_245_245;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_246_246;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_248_248;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_250_250;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_251_251;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_253_253;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_259_259;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_261_261;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_263_263;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_264_264;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_266_266;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_268_268;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_269_269;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_271_271;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_272_272;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_274_274;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_276_276;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_277_277;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_279_279;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_281_281;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_282_282;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_284_284;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_286_286;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_287_287;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_289_289;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_290_290;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_292_292;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_294_294;
#line 1647 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_299_299;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_301_301;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_303_303;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_305_305;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_307_307;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_308_308;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_310_310;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_312_312;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_313_313;
#line 1647 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_315_315;

#line 1653 "write_deps_file.m"
    {
#line 1653 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_19, (MR_Integer) 118, &parse_tree__write_deps_file__Gmake_36);
    }
#line 1666 "write_deps_file.m"
#line 1666 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Gmake_36) {
#line 1666 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1666 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1667 "write_deps_file.m"
        {
#line 1668 "write_deps_file.m"
          parse_tree__write_deps_file__All_MLLibsDepString_37 = (MR_String) "\044(ALL_MLLIBS_DEP)";
#line 1669 "write_deps_file.m"
          parse_tree__write_deps_file__All_MLObjsString_38 = (MR_String) "\044(ALL_MLOBJS)";
#line 1670 "write_deps_file.m"
          parse_tree__write_deps_file__All_MLPicObjsString_39 = (MR_String) "\044(ALL_MLPICOBJS)";
#line 1667 "write_deps_file.m"
        }
#line 1666 "write_deps_file.m"
        break;
#line 1666 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1655 "write_deps_file.m"
        {
#line 1655 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_60_60;
#line 1655 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_62_62;
#line 1655 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_66_66;
#line 1655 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_68_68;
#line 1655 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_72_72;
#line 1655 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_74_74;

#line 1656 "write_deps_file.m"
          {
#line 1656 "write_deps_file.m"
            parse_tree__write_deps_file__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1656 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_62_62, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1656 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[102])));
#line 1656 "write_deps_file.m"
          }
#line 1656 "write_deps_file.m"
          {
#line 1656 "write_deps_file.m"
            parse_tree__write_deps_file__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1656 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(foreach \100,"));
#line 1656 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_60_60, 1) = ((MR_Box) (parse_tree__write_deps_file__V_62_62));
#line 1656 "write_deps_file.m"
          }
#line 1656 "write_deps_file.m"
          {
#line 1656 "write_deps_file.m"
            mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_60_60, &parse_tree__write_deps_file__All_MLLibsDepString_37);
          }
#line 1659 "write_deps_file.m"
          {
#line 1659 "write_deps_file.m"
            parse_tree__write_deps_file__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1659 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1659 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103])));
#line 1659 "write_deps_file.m"
          }
#line 1659 "write_deps_file.m"
          {
#line 1659 "write_deps_file.m"
            parse_tree__write_deps_file__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1659 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(foreach \100,"));
#line 1659 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_66_66, 1) = ((MR_Box) (parse_tree__write_deps_file__V_68_68));
#line 1659 "write_deps_file.m"
          }
#line 1659 "write_deps_file.m"
          {
#line 1659 "write_deps_file.m"
            mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_66_66, &parse_tree__write_deps_file__All_MLObjsString_38);
          }
#line 1664 "write_deps_file.m"
          {
#line 1664 "write_deps_file.m"
            parse_tree__write_deps_file__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1664 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1664 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[104])));
#line 1664 "write_deps_file.m"
          }
#line 1663 "write_deps_file.m"
          {
#line 1663 "write_deps_file.m"
            parse_tree__write_deps_file__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1663 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(patsubst %.o,%.\044(EXT_FOR_PIC_OBJECTS),\044(foreach \100,"));
#line 1663 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_72_72, 1) = ((MR_Box) (parse_tree__write_deps_file__V_74_74));
#line 1663 "write_deps_file.m"
          }
#line 1662 "write_deps_file.m"
          {
#line 1662 "write_deps_file.m"
            mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_72_72, &parse_tree__write_deps_file__All_MLPicObjsString_39);
          }
#line 1655 "write_deps_file.m"
        }
#line 1666 "write_deps_file.m"
        break;
#line 1666 "write_deps_file.m"
    }
#line 1684 "write_deps_file.m"
    {
#line 1684 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ModuleName_21, (MR_String) "", (MR_Integer) 1, parse_tree__write_deps_file__ExeFileName_31);
    }
#line 1687 "write_deps_file.m"
    parse_tree__write_deps_file__IfJava_40 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[105]);
#line 1688 "write_deps_file.m"
    {
#line 1688 "write_deps_file.m"
      parse_tree__write_deps_file__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1688 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_85_85, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1688 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_85_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[106])));
#line 1688 "write_deps_file.m"
    }
#line 1688 "write_deps_file.m"
    {
#line 1688 "write_deps_file.m"
      parse_tree__write_deps_file__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1688 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1688 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_83_83, 1) = ((MR_Box) (parse_tree__write_deps_file__V_85_85));
#line 1688 "write_deps_file.m"
    }
#line 1688 "write_deps_file.m"
    {
#line 1688 "write_deps_file.m"
      parse_tree__write_deps_file__JavaMainRule_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1688 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaMainRule_41, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1688 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaMainRule_41, 1) = ((MR_Box) (parse_tree__write_deps_file__V_83_83));
#line 1688 "write_deps_file.m"
    }
#line 1689 "write_deps_file.m"
    parse_tree__write_deps_file__Else_42 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[107]);
#line 1690 "write_deps_file.m"
    parse_tree__write_deps_file__EndIf_43 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[10]);
#line 1696 "write_deps_file.m"
    {
#line 1696 "write_deps_file.m"
      parse_tree__write_deps_file__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1696 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1696 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[22])));
#line 1696 "write_deps_file.m"
    }
#line 1696 "write_deps_file.m"
    {
#line 1696 "write_deps_file.m"
      parse_tree__write_deps_file__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1696 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 0) = ((MR_Box) ((MR_String) " : "));
#line 1696 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_102_102, 1) = ((MR_Box) (parse_tree__write_deps_file__V_104_104));
#line 1696 "write_deps_file.m"
    }
#line 1696 "write_deps_file.m"
    {
#line 1696 "write_deps_file.m"
      parse_tree__write_deps_file__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1696 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1696 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_101_101, 1) = ((MR_Box) (parse_tree__write_deps_file__V_102_102));
#line 1696 "write_deps_file.m"
    }
#line 1695 "write_deps_file.m"
    {
#line 1695 "write_deps_file.m"
      parse_tree__write_deps_file__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1695 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1695 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_99_99, 1) = ((MR_Box) (parse_tree__write_deps_file__V_101_101));
#line 1695 "write_deps_file.m"
    }
#line 1695 "write_deps_file.m"
    {
#line 1695 "write_deps_file.m"
      parse_tree__write_deps_file__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1695 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1695 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_98_98, 1) = ((MR_Box) (parse_tree__write_deps_file__V_99_99));
#line 1695 "write_deps_file.m"
    }
#line 1695 "write_deps_file.m"
    {
#line 1695 "write_deps_file.m"
      parse_tree__write_deps_file__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1695 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 1695 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_96_96, 1) = ((MR_Box) (parse_tree__write_deps_file__V_98_98));
#line 1695 "write_deps_file.m"
    }
#line 1694 "write_deps_file.m"
    {
#line 1694 "write_deps_file.m"
      parse_tree__write_deps_file__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1694 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 0) = ((MR_Box) ((MR_String) "ifneq (\044(EXT_FOR_EXE),)\n"));
#line 1694 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_93_93, 1) = ((MR_Box) (parse_tree__write_deps_file__V_96_96));
#line 1694 "write_deps_file.m"
    }
#line 1693 "write_deps_file.m"
    {
#line 1693 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_93_93);
    }
#line 1707 "write_deps_file.m"
    {
#line 1707 "write_deps_file.m"
      parse_tree__write_deps_file__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1707 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_144_144, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1707 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_144_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[108])));
#line 1707 "write_deps_file.m"
    }
#line 1707 "write_deps_file.m"
    {
#line 1707 "write_deps_file.m"
      parse_tree__write_deps_file__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1707 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_142_142, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1707 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_142_142, 1) = ((MR_Box) (parse_tree__write_deps_file__V_144_144));
#line 1707 "write_deps_file.m"
    }
#line 1707 "write_deps_file.m"
    {
#line 1707 "write_deps_file.m"
      parse_tree__write_deps_file__V_141_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1707 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_141_141, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1707 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_141_141, 1) = ((MR_Box) (parse_tree__write_deps_file__V_142_142));
#line 1707 "write_deps_file.m"
    }
#line 1707 "write_deps_file.m"
    {
#line 1707 "write_deps_file.m"
      parse_tree__write_deps_file__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1707 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_139_139, 0) = ((MR_Box) ((MR_String) "\t\t\044("));
#line 1707 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_139_139, 1) = ((MR_Box) (parse_tree__write_deps_file__V_141_141));
#line 1707 "write_deps_file.m"
    }
#line 1706 "write_deps_file.m"
    {
#line 1706 "write_deps_file.m"
      parse_tree__write_deps_file__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1706 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_137_137, 0) = ((MR_Box) ((MR_String) " \\\n"));
#line 1706 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_137_137, 1) = ((MR_Box) (parse_tree__write_deps_file__V_139_139));
#line 1706 "write_deps_file.m"
    }
#line 1706 "write_deps_file.m"
    {
#line 1706 "write_deps_file.m"
      parse_tree__write_deps_file__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1706 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_136_136, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_24));
#line 1706 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_136_136, 1) = ((MR_Box) (parse_tree__write_deps_file__V_137_137));
#line 1706 "write_deps_file.m"
    }
#line 1705 "write_deps_file.m"
    {
#line 1705 "write_deps_file.m"
      parse_tree__write_deps_file__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1705 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_134_134, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) "));
#line 1705 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_134_134, 1) = ((MR_Box) (parse_tree__write_deps_file__V_136_136));
#line 1705 "write_deps_file.m"
    }
#line 1705 "write_deps_file.m"
    {
#line 1705 "write_deps_file.m"
      parse_tree__write_deps_file__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1705 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_133_133, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1705 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_133_133, 1) = ((MR_Box) (parse_tree__write_deps_file__V_134_134));
#line 1705 "write_deps_file.m"
    }
#line 1705 "write_deps_file.m"
    {
#line 1705 "write_deps_file.m"
      parse_tree__write_deps_file__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1705 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 0) = ((MR_Box) ((MR_String) "\044(EXEFILE_OPT)"));
#line 1705 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_131_131, 1) = ((MR_Box) (parse_tree__write_deps_file__V_133_133));
#line 1705 "write_deps_file.m"
    }
#line 1704 "write_deps_file.m"
    {
#line 1704 "write_deps_file.m"
      parse_tree__write_deps_file__V_129_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1704 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 0) = ((MR_Box) ((MR_String) "\t\044(ML) \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) -- \044(ALL_LDFLAGS) "));
#line 1704 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_129_129, 1) = ((MR_Box) (parse_tree__write_deps_file__V_131_131));
#line 1704 "write_deps_file.m"
    }
#line 1703 "write_deps_file.m"
    {
#line 1703 "write_deps_file.m"
      parse_tree__write_deps_file__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1703 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_127_127, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1703 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_127_127, 1) = ((MR_Box) (parse_tree__write_deps_file__V_129_129));
#line 1703 "write_deps_file.m"
    }
#line 1703 "write_deps_file.m"
    {
#line 1703 "write_deps_file.m"
      parse_tree__write_deps_file__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1703 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLLibsDepString_37));
#line 1703 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_126_126, 1) = ((MR_Box) (parse_tree__write_deps_file__V_127_127));
#line 1703 "write_deps_file.m"
    }
#line 1703 "write_deps_file.m"
    {
#line 1703 "write_deps_file.m"
      parse_tree__write_deps_file__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1703 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_124_124, 0) = ((MR_Box) ((MR_String) " "));
#line 1703 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_124_124, 1) = ((MR_Box) (parse_tree__write_deps_file__V_126_126));
#line 1703 "write_deps_file.m"
    }
#line 1703 "write_deps_file.m"
    {
#line 1703 "write_deps_file.m"
      parse_tree__write_deps_file__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1703 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_123_123, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1703 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_123_123, 1) = ((MR_Box) (parse_tree__write_deps_file__V_124_124));
#line 1703 "write_deps_file.m"
    }
#line 1702 "write_deps_file.m"
    {
#line 1702 "write_deps_file.m"
      parse_tree__write_deps_file__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1702 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_121_121, 0) = ((MR_Box) ((MR_String) " "));
#line 1702 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_121_121, 1) = ((MR_Box) (parse_tree__write_deps_file__V_123_123));
#line 1702 "write_deps_file.m"
    }
#line 1702 "write_deps_file.m"
    {
#line 1702 "write_deps_file.m"
      parse_tree__write_deps_file__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1702 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_120_120, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_24));
#line 1702 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_120_120, 1) = ((MR_Box) (parse_tree__write_deps_file__V_121_121));
#line 1702 "write_deps_file.m"
    }
#line 1702 "write_deps_file.m"
    {
#line 1702 "write_deps_file.m"
      parse_tree__write_deps_file__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1702 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_118_118, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1702 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_118_118, 1) = ((MR_Box) (parse_tree__write_deps_file__V_120_120));
#line 1702 "write_deps_file.m"
    }
#line 1702 "write_deps_file.m"
    {
#line 1702 "write_deps_file.m"
      parse_tree__write_deps_file__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1702 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_117_117, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1702 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_117_117, 1) = ((MR_Box) (parse_tree__write_deps_file__V_118_118));
#line 1702 "write_deps_file.m"
    }
#line 1702 "write_deps_file.m"
    {
#line 1702 "write_deps_file.m"
      parse_tree__write_deps_file__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1702 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_115_115, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1702 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_115_115, 1) = ((MR_Box) (parse_tree__write_deps_file__V_117_117));
#line 1702 "write_deps_file.m"
    }
#line 1701 "write_deps_file.m"
    {
#line 1701 "write_deps_file.m"
      parse_tree__write_deps_file__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1701 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_113_113, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
#line 1701 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_113_113, 1) = ((MR_Box) (parse_tree__write_deps_file__V_115_115));
#line 1701 "write_deps_file.m"
    }
#line 1701 "write_deps_file.m"
    {
#line 1701 "write_deps_file.m"
      parse_tree__write_deps_file__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1701 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1701 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_112_112, 1) = ((MR_Box) (parse_tree__write_deps_file__V_113_113));
#line 1701 "write_deps_file.m"
    }
#line 1701 "write_deps_file.m"
    {
#line 1701 "write_deps_file.m"
      parse_tree__write_deps_file__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1701 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_110_110, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) : \044("));
#line 1701 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_110_110, 1) = ((MR_Box) (parse_tree__write_deps_file__V_112_112));
#line 1701 "write_deps_file.m"
    }
#line 1701 "write_deps_file.m"
    {
#line 1701 "write_deps_file.m"
      parse_tree__write_deps_file__MainRule_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1701 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MainRule_44, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
#line 1701 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MainRule_44, 1) = ((MR_Box) (parse_tree__write_deps_file__V_110_110));
#line 1701 "write_deps_file.m"
    }
#line 1709 "write_deps_file.m"
    {
#line 1709 "write_deps_file.m"
      libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_19, &parse_tree__write_deps_file__Target_45);
    }
#line 1713 "write_deps_file.m"
#line 1713 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Gmake_36) {
#line 1713 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1713 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1719 "write_deps_file.m"
#line 1719 "write_deps_file.m"
        switch (parse_tree__write_deps_file__Target_45) {
#line 1719 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1719 "write_deps_file.m"
          case (MR_Integer) 0:
#line 1728 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_46 = parse_tree__write_deps_file__MainRule_44;
#line 1719 "write_deps_file.m"
            break;
#line 1719 "write_deps_file.m"
          case (MR_Integer) 1:
#line 1718 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1719 "write_deps_file.m"
            break;
#line 1719 "write_deps_file.m"
          case (MR_Integer) 3:
#line 1725 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1719 "write_deps_file.m"
            break;
#line 1719 "write_deps_file.m"
          case (MR_Integer) 2:
#line 1721 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_46 = parse_tree__write_deps_file__JavaMainRule_41;
#line 1719 "write_deps_file.m"
            break;
#line 1719 "write_deps_file.m"
        }
#line 1713 "write_deps_file.m"
        break;
#line 1713 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1711 "write_deps_file.m"
        {
#line 1711 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__TypeCtorInfo_319_319 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1711 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_148_148;
#line 1711 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_149_149;
#line 1711 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_150_150;

#line 1712 "write_deps_file.m"
          {
#line 1712 "write_deps_file.m"
            parse_tree__write_deps_file__V_150_150 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_319_319, parse_tree__write_deps_file__MainRule_44, parse_tree__write_deps_file__EndIf_43);
          }
#line 1712 "write_deps_file.m"
          {
#line 1712 "write_deps_file.m"
            parse_tree__write_deps_file__V_149_149 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_319_319, parse_tree__write_deps_file__Else_42, parse_tree__write_deps_file__V_150_150);
          }
#line 1712 "write_deps_file.m"
          {
#line 1712 "write_deps_file.m"
            parse_tree__write_deps_file__V_148_148 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_319_319, parse_tree__write_deps_file__JavaMainRule_41, parse_tree__write_deps_file__V_149_149);
          }
#line 1712 "write_deps_file.m"
          {
#line 1712 "write_deps_file.m"
            parse_tree__write_deps_file__Rules_46 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_319_319, parse_tree__write_deps_file__IfJava_40, parse_tree__write_deps_file__V_148_148);
          }
#line 1711 "write_deps_file.m"
        }
#line 1713 "write_deps_file.m"
        break;
#line 1713 "write_deps_file.m"
    }
#line 1731 "write_deps_file.m"
    {
#line 1731 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__Rules_46);
    }
#line 1736 "write_deps_file.m"
#line 1736 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Intermod_25) {
#line 1736 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1736 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1738 "write_deps_file.m"
        *parse_tree__write_deps_file__MaybeOptsVar_28 = (MR_String) "";
#line 1736 "write_deps_file.m"
        break;
#line 1736 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1734 "write_deps_file.m"
        {
#line 1734 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__V_153_153;

#line 1735 "write_deps_file.m"
          {
#line 1735 "write_deps_file.m"
            parse_tree__write_deps_file__V_153_153 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".opts) ");
          }
#line 1735 "write_deps_file.m"
          {
#line 1735 "write_deps_file.m"
            *parse_tree__write_deps_file__MaybeOptsVar_28 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_153_153);
          }
#line 1734 "write_deps_file.m"
        }
#line 1736 "write_deps_file.m"
        break;
#line 1736 "write_deps_file.m"
    }
#line 1743 "write_deps_file.m"
#line 1743 "write_deps_file.m"
    switch (parse_tree__write_deps_file__TransOpt_26) {
#line 1743 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1743 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1745 "write_deps_file.m"
        *parse_tree__write_deps_file__MaybeTransOptsVar_29 = (MR_String) "";
#line 1743 "write_deps_file.m"
        break;
#line 1743 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1741 "write_deps_file.m"
        {
#line 1741 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__V_156_156;

#line 1742 "write_deps_file.m"
          {
#line 1742 "write_deps_file.m"
            parse_tree__write_deps_file__V_156_156 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".trans_opts) ");
          }
#line 1742 "write_deps_file.m"
          {
#line 1742 "write_deps_file.m"
            *parse_tree__write_deps_file__MaybeTransOptsVar_29 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_156_156);
          }
#line 1741 "write_deps_file.m"
        }
#line 1743 "write_deps_file.m"
        break;
#line 1743 "write_deps_file.m"
    }
#line 1750 "write_deps_file.m"
#line 1750 "write_deps_file.m"
    switch (parse_tree__write_deps_file__MmcMakeDeps_27) {
#line 1750 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1750 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1752 "write_deps_file.m"
        *parse_tree__write_deps_file__MaybeModuleDepsVar_30 = (MR_String) "";
#line 1750 "write_deps_file.m"
        break;
#line 1750 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1748 "write_deps_file.m"
        {
#line 1748 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__V_159_159;

#line 1749 "write_deps_file.m"
          {
#line 1749 "write_deps_file.m"
            parse_tree__write_deps_file__V_159_159 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".module_deps) ");
          }
#line 1749 "write_deps_file.m"
          {
#line 1749 "write_deps_file.m"
            *parse_tree__write_deps_file__MaybeModuleDepsVar_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_159_159);
          }
#line 1748 "write_deps_file.m"
        }
#line 1750 "write_deps_file.m"
        break;
#line 1750 "write_deps_file.m"
    }
#line 1755 "write_deps_file.m"
    {
#line 1755 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) "", (MR_Integer) 1, &parse_tree__write_deps_file__LibTargetName_47);
    }
#line 1757 "write_deps_file.m"
    {
#line 1757 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044A", (MR_Integer) 0, parse_tree__write_deps_file__LibFileName_33);
    }
#line 1759 "write_deps_file.m"
    {
#line 1759 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 0, parse_tree__write_deps_file__SharedLibFileName_34);
    }
#line 1761 "write_deps_file.m"
    {
#line 1761 "write_deps_file.m"
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 1, &parse_tree__write_deps_file__MaybeSharedLibFileName_48);
    }
#line 1764 "write_deps_file.m"
    {
#line 1764 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ModuleName_21, (MR_String) ".jar", (MR_Integer) 1, parse_tree__write_deps_file__JarFileName_32);
    }
#line 1769 "write_deps_file.m"
    {
#line 1769 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_19, (MR_Integer) 602, &parse_tree__write_deps_file__UseInstallName_49);
    }
#line 1774 "write_deps_file.m"
#line 1774 "write_deps_file.m"
    switch (parse_tree__write_deps_file__UseInstallName_49) {
#line 1774 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1774 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1776 "write_deps_file.m"
        parse_tree__write_deps_file__InstallNameOpt_50 = (MR_String) "";
#line 1774 "write_deps_file.m"
        break;
#line 1774 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1773 "write_deps_file.m"
        {
#line 1773 "write_deps_file.m"
          libs__file_util__get_install_name_option_3_p_0(parse_tree__write_deps_file__Globals_19, *parse_tree__write_deps_file__SharedLibFileName_34, &parse_tree__write_deps_file__InstallNameOpt_50);
        }
#line 1774 "write_deps_file.m"
        break;
#line 1774 "write_deps_file.m"
    }
#line 1784 "write_deps_file.m"
    parse_tree__write_deps_file__V_193_193 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[109]);
#line 1783 "write_deps_file.m"
    {
#line 1783 "write_deps_file.m"
      parse_tree__write_deps_file__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1783 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_23));
#line 1783 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_192_192, 1) = ((MR_Box) (parse_tree__write_deps_file__V_193_193));
#line 1783 "write_deps_file.m"
    }
#line 1782 "write_deps_file.m"
    {
#line 1782 "write_deps_file.m"
      parse_tree__write_deps_file__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1782 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 0) = ((MR_Box) (*parse_tree__write_deps_file__MaybeTransOptsVar_29));
#line 1782 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 1) = ((MR_Box) (parse_tree__write_deps_file__V_192_192));
#line 1782 "write_deps_file.m"
    }
#line 1782 "write_deps_file.m"
    {
#line 1782 "write_deps_file.m"
      parse_tree__write_deps_file__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1782 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_190_190, 0) = ((MR_Box) (*parse_tree__write_deps_file__MaybeOptsVar_28));
#line 1782 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_190_190, 1) = ((MR_Box) (parse_tree__write_deps_file__V_191_191));
#line 1782 "write_deps_file.m"
    }
#line 1781 "write_deps_file.m"
    {
#line 1781 "write_deps_file.m"
      parse_tree__write_deps_file__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1781 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_188_188, 0) = ((MR_Box) ((MR_String) ".int3s) "));
#line 1781 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_188_188, 1) = ((MR_Box) (parse_tree__write_deps_file__V_190_190));
#line 1781 "write_deps_file.m"
    }
#line 1781 "write_deps_file.m"
    {
#line 1781 "write_deps_file.m"
      parse_tree__write_deps_file__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1781 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_187_187, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1781 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_187_187, 1) = ((MR_Box) (parse_tree__write_deps_file__V_188_188));
#line 1781 "write_deps_file.m"
    }
#line 1781 "write_deps_file.m"
    {
#line 1781 "write_deps_file.m"
      parse_tree__write_deps_file__V_185_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1781 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_185_185, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1781 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_185_185, 1) = ((MR_Box) (parse_tree__write_deps_file__V_187_187));
#line 1781 "write_deps_file.m"
    }
#line 1780 "write_deps_file.m"
    {
#line 1780 "write_deps_file.m"
      parse_tree__write_deps_file__V_183_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1780 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_183_183, 0) = ((MR_Box) ((MR_String) ".ints) "));
#line 1780 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_183_183, 1) = ((MR_Box) (parse_tree__write_deps_file__V_185_185));
#line 1780 "write_deps_file.m"
    }
#line 1780 "write_deps_file.m"
    {
#line 1780 "write_deps_file.m"
      parse_tree__write_deps_file__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1780 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1780 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_182_182, 1) = ((MR_Box) (parse_tree__write_deps_file__V_183_183));
#line 1780 "write_deps_file.m"
    }
#line 1780 "write_deps_file.m"
    {
#line 1780 "write_deps_file.m"
      parse_tree__write_deps_file__AllInts_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1780 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__AllInts_51, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1780 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__AllInts_51, 1) = ((MR_Box) (parse_tree__write_deps_file__V_182_182));
#line 1780 "write_deps_file.m"
    }
#line 1787 "write_deps_file.m"
    {
#line 1787 "write_deps_file.m"
      parse_tree__write_deps_file__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1787 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 0) = ((MR_Box) ((MR_String) " \\\n\t\t"));
#line 1787 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 1) = ((MR_Box) (parse_tree__write_deps_file__AllInts_51));
#line 1787 "write_deps_file.m"
    }
#line 1786 "write_deps_file.m"
    {
#line 1786 "write_deps_file.m"
      parse_tree__write_deps_file__V_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1786 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_198_198, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
#line 1786 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_198_198, 1) = ((MR_Box) (parse_tree__write_deps_file__V_199_199));
#line 1786 "write_deps_file.m"
    }
#line 1786 "write_deps_file.m"
    {
#line 1786 "write_deps_file.m"
      parse_tree__write_deps_file__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1786 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_196_196, 0) = ((MR_Box) ((MR_String) " : "));
#line 1786 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_196_196, 1) = ((MR_Box) (parse_tree__write_deps_file__V_198_198));
#line 1786 "write_deps_file.m"
    }
#line 1786 "write_deps_file.m"
    {
#line 1786 "write_deps_file.m"
      parse_tree__write_deps_file__JavaLibRule_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1786 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaLibRule_52, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_47));
#line 1786 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaLibRule_52, 1) = ((MR_Box) (parse_tree__write_deps_file__V_196_196));
#line 1786 "write_deps_file.m"
    }
#line 1791 "write_deps_file.m"
    {
#line 1791 "write_deps_file.m"
      parse_tree__write_deps_file__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1791 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeSharedLibFileName_48));
#line 1791 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_206_206, 1) = ((MR_Box) (parse_tree__write_deps_file__V_199_199));
#line 1791 "write_deps_file.m"
    }
#line 1790 "write_deps_file.m"
    {
#line 1790 "write_deps_file.m"
      parse_tree__write_deps_file__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1790 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_204_204, 0) = ((MR_Box) ((MR_String) " "));
#line 1790 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_204_204, 1) = ((MR_Box) (parse_tree__write_deps_file__V_206_206));
#line 1790 "write_deps_file.m"
    }
#line 1790 "write_deps_file.m"
    {
#line 1790 "write_deps_file.m"
      parse_tree__write_deps_file__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1790 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_203_203, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1790 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_203_203, 1) = ((MR_Box) (parse_tree__write_deps_file__V_204_204));
#line 1790 "write_deps_file.m"
    }
#line 1790 "write_deps_file.m"
    {
#line 1790 "write_deps_file.m"
      parse_tree__write_deps_file__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1790 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 0) = ((MR_Box) ((MR_String) " : "));
#line 1790 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 1) = ((MR_Box) (parse_tree__write_deps_file__V_203_203));
#line 1790 "write_deps_file.m"
    }
#line 1790 "write_deps_file.m"
    {
#line 1790 "write_deps_file.m"
      parse_tree__write_deps_file__LibRule_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1790 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibRule_53, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_47));
#line 1790 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibRule_53, 1) = ((MR_Box) (parse_tree__write_deps_file__V_201_201));
#line 1790 "write_deps_file.m"
    }
#line 1798 "write_deps_file.m"
#line 1798 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Gmake_36) {
#line 1798 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1798 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1804 "write_deps_file.m"
#line 1804 "write_deps_file.m"
        switch (parse_tree__write_deps_file__Target_45) {
#line 1804 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1804 "write_deps_file.m"
          case (MR_Integer) 0:
#line 1813 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_54 = parse_tree__write_deps_file__LibRule_53;
#line 1804 "write_deps_file.m"
            break;
#line 1804 "write_deps_file.m"
          case (MR_Integer) 1:
#line 1803 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1804 "write_deps_file.m"
            break;
#line 1804 "write_deps_file.m"
          case (MR_Integer) 3:
#line 1810 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1804 "write_deps_file.m"
            break;
#line 1804 "write_deps_file.m"
          case (MR_Integer) 2:
#line 1806 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_54 = parse_tree__write_deps_file__JavaLibRule_52;
#line 1804 "write_deps_file.m"
            break;
#line 1804 "write_deps_file.m"
        }
#line 1798 "write_deps_file.m"
        break;
#line 1798 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1795 "write_deps_file.m"
        {
#line 1795 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__TypeCtorInfo_320_320 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1795 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_209_209;
#line 1795 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_210_210;
#line 1795 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_211_211;

#line 1797 "write_deps_file.m"
          {
#line 1797 "write_deps_file.m"
            parse_tree__write_deps_file__V_211_211 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_320_320, parse_tree__write_deps_file__LibRule_53, parse_tree__write_deps_file__EndIf_43);
          }
#line 1796 "write_deps_file.m"
          {
#line 1796 "write_deps_file.m"
            parse_tree__write_deps_file__V_210_210 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_320_320, parse_tree__write_deps_file__Else_42, parse_tree__write_deps_file__V_211_211);
          }
#line 1796 "write_deps_file.m"
          {
#line 1796 "write_deps_file.m"
            parse_tree__write_deps_file__V_209_209 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_320_320, parse_tree__write_deps_file__JavaLibRule_52, parse_tree__write_deps_file__V_210_210);
          }
#line 1796 "write_deps_file.m"
          {
#line 1796 "write_deps_file.m"
            parse_tree__write_deps_file__LibRules_54 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_320_320, parse_tree__write_deps_file__IfJava_40, parse_tree__write_deps_file__V_209_209);
          }
#line 1795 "write_deps_file.m"
        }
#line 1798 "write_deps_file.m"
        break;
#line 1798 "write_deps_file.m"
    }
#line 1817 "write_deps_file.m"
    {
#line 1817 "write_deps_file.m"
      parse_tree__write_deps_file__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1817 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1817 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_216_216, 1) = ((MR_Box) (parse_tree__write_deps_file__LibRules_54));
#line 1817 "write_deps_file.m"
    }
#line 1817 "write_deps_file.m"
    {
#line 1817 "write_deps_file.m"
      parse_tree__write_deps_file__V_215_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1817 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_215_215, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_47));
#line 1817 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_215_215, 1) = ((MR_Box) (parse_tree__write_deps_file__V_216_216));
#line 1817 "write_deps_file.m"
    }
#line 1817 "write_deps_file.m"
    {
#line 1817 "write_deps_file.m"
      parse_tree__write_deps_file__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1817 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_212_212, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
#line 1817 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_212_212, 1) = ((MR_Box) (parse_tree__write_deps_file__V_215_215));
#line 1817 "write_deps_file.m"
    }
#line 1816 "write_deps_file.m"
    {
#line 1816 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_212_212);
    }
#line 1829 "write_deps_file.m"
    {
#line 1829 "write_deps_file.m"
      parse_tree__write_deps_file__V_253_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1829 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_253_253, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLPicObjsString_39));
#line 1829 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_253_253, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[24])));
#line 1829 "write_deps_file.m"
    }
#line 1829 "write_deps_file.m"
    {
#line 1829 "write_deps_file.m"
      parse_tree__write_deps_file__V_251_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1829 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_251_251, 0) = ((MR_Box) ((MR_String) ".pic_os) "));
#line 1829 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_251_251, 1) = ((MR_Box) (parse_tree__write_deps_file__V_253_253));
#line 1829 "write_deps_file.m"
    }
#line 1829 "write_deps_file.m"
    {
#line 1829 "write_deps_file.m"
      parse_tree__write_deps_file__V_250_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1829 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_250_250, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1829 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_250_250, 1) = ((MR_Box) (parse_tree__write_deps_file__V_251_251));
#line 1829 "write_deps_file.m"
    }
#line 1829 "write_deps_file.m"
    {
#line 1829 "write_deps_file.m"
      parse_tree__write_deps_file__V_248_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1829 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_248_248, 0) = ((MR_Box) ((MR_String) "\t\t\044("));
#line 1829 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_248_248, 1) = ((MR_Box) (parse_tree__write_deps_file__V_250_250));
#line 1829 "write_deps_file.m"
    }
#line 1828 "write_deps_file.m"
    {
#line 1828 "write_deps_file.m"
      parse_tree__write_deps_file__V_246_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1828 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 0) = ((MR_Box) ((MR_String) " \\\n"));
#line 1828 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_246_246, 1) = ((MR_Box) (parse_tree__write_deps_file__V_248_248));
#line 1828 "write_deps_file.m"
    }
#line 1828 "write_deps_file.m"
    {
#line 1828 "write_deps_file.m"
      parse_tree__write_deps_file__V_245_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1828 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_245_245, 0) = ((MR_Box) (*parse_tree__write_deps_file__SharedLibFileName_34));
#line 1828 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_245_245, 1) = ((MR_Box) (parse_tree__write_deps_file__V_246_246));
#line 1828 "write_deps_file.m"
    }
#line 1827 "write_deps_file.m"
    {
#line 1827 "write_deps_file.m"
      parse_tree__write_deps_file__V_243_243 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1827 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_243_243, 0) = ((MR_Box) ((MR_String) " \044(ALL_LD_LIBFLAGS) -o "));
#line 1827 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_243_243, 1) = ((MR_Box) (parse_tree__write_deps_file__V_245_245));
#line 1827 "write_deps_file.m"
    }
#line 1827 "write_deps_file.m"
    {
#line 1827 "write_deps_file.m"
      parse_tree__write_deps_file__V_242_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1827 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 0) = ((MR_Box) (parse_tree__write_deps_file__InstallNameOpt_50));
#line 1827 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_242_242, 1) = ((MR_Box) (parse_tree__write_deps_file__V_243_243));
#line 1827 "write_deps_file.m"
    }
#line 1827 "write_deps_file.m"
    {
#line 1827 "write_deps_file.m"
      parse_tree__write_deps_file__V_240_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1827 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 0) = ((MR_Box) ((MR_String) "-- "));
#line 1827 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_240_240, 1) = ((MR_Box) (parse_tree__write_deps_file__V_242_242));
#line 1827 "write_deps_file.m"
    }
#line 1826 "write_deps_file.m"
    {
#line 1826 "write_deps_file.m"
      parse_tree__write_deps_file__V_238_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1826 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_238_238, 0) = ((MR_Box) ((MR_String) "\t\044(ML) --make-shared-lib \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) "));
#line 1826 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_238_238, 1) = ((MR_Box) (parse_tree__write_deps_file__V_240_240));
#line 1826 "write_deps_file.m"
    }
#line 1825 "write_deps_file.m"
    {
#line 1825 "write_deps_file.m"
      parse_tree__write_deps_file__V_236_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_236_236, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_236_236, 1) = ((MR_Box) (parse_tree__write_deps_file__V_238_238));
#line 1825 "write_deps_file.m"
    }
#line 1825 "write_deps_file.m"
    {
#line 1825 "write_deps_file.m"
      parse_tree__write_deps_file__V_235_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLLibsDepString_37));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_235_235, 1) = ((MR_Box) (parse_tree__write_deps_file__V_236_236));
#line 1825 "write_deps_file.m"
    }
#line 1825 "write_deps_file.m"
    {
#line 1825 "write_deps_file.m"
      parse_tree__write_deps_file__V_233_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_233_233, 0) = ((MR_Box) ((MR_String) " "));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_233_233, 1) = ((MR_Box) (parse_tree__write_deps_file__V_235_235));
#line 1825 "write_deps_file.m"
    }
#line 1825 "write_deps_file.m"
    {
#line 1825 "write_deps_file.m"
      parse_tree__write_deps_file__V_232_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLPicObjsString_39));
#line 1825 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_232_232, 1) = ((MR_Box) (parse_tree__write_deps_file__V_233_233));
#line 1825 "write_deps_file.m"
    }
#line 1824 "write_deps_file.m"
    {
#line 1824 "write_deps_file.m"
      parse_tree__write_deps_file__V_230_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1824 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 0) = ((MR_Box) ((MR_String) ".pic_os) "));
#line 1824 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_230_230, 1) = ((MR_Box) (parse_tree__write_deps_file__V_232_232));
#line 1824 "write_deps_file.m"
    }
#line 1824 "write_deps_file.m"
    {
#line 1824 "write_deps_file.m"
      parse_tree__write_deps_file__V_229_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1824 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1824 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 1) = ((MR_Box) (parse_tree__write_deps_file__V_230_230));
#line 1824 "write_deps_file.m"
    }
#line 1824 "write_deps_file.m"
    {
#line 1824 "write_deps_file.m"
      parse_tree__write_deps_file__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1824 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_227_227, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1824 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_227_227, 1) = ((MR_Box) (parse_tree__write_deps_file__V_229_229));
#line 1824 "write_deps_file.m"
    }
#line 1823 "write_deps_file.m"
    {
#line 1823 "write_deps_file.m"
      parse_tree__write_deps_file__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1823 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
#line 1823 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 1) = ((MR_Box) (parse_tree__write_deps_file__V_227_227));
#line 1823 "write_deps_file.m"
    }
#line 1823 "write_deps_file.m"
    {
#line 1823 "write_deps_file.m"
      parse_tree__write_deps_file__V_224_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1823 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1823 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_224_224, 1) = ((MR_Box) (parse_tree__write_deps_file__V_225_225));
#line 1823 "write_deps_file.m"
    }
#line 1823 "write_deps_file.m"
    {
#line 1823 "write_deps_file.m"
      parse_tree__write_deps_file__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1823 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1823 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 1) = ((MR_Box) (parse_tree__write_deps_file__V_224_224));
#line 1823 "write_deps_file.m"
    }
#line 1823 "write_deps_file.m"
    {
#line 1823 "write_deps_file.m"
      parse_tree__write_deps_file__V_221_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1823 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 0) = ((MR_Box) (*parse_tree__write_deps_file__SharedLibFileName_34));
#line 1823 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_221_221, 1) = ((MR_Box) (parse_tree__write_deps_file__V_222_222));
#line 1823 "write_deps_file.m"
    }
#line 1822 "write_deps_file.m"
    {
#line 1822 "write_deps_file.m"
      parse_tree__write_deps_file__V_218_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1822 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_218_218, 0) = ((MR_Box) ((MR_String) "ifneq (\044(EXT_FOR_SHARED_LIB),\044A)\n"));
#line 1822 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_218_218, 1) = ((MR_Box) (parse_tree__write_deps_file__V_221_221));
#line 1822 "write_deps_file.m"
    }
#line 1821 "write_deps_file.m"
    {
#line 1821 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_218_218);
    }
#line 1840 "write_deps_file.m"
    {
#line 1840 "write_deps_file.m"
      parse_tree__write_deps_file__V_294_294 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1840 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_294_294, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1840 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_294_294, 1) = ((MR_Box) (parse_tree__write_deps_file__V_193_193));
#line 1840 "write_deps_file.m"
    }
#line 1840 "write_deps_file.m"
    {
#line 1840 "write_deps_file.m"
      parse_tree__write_deps_file__V_292_292 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1840 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_292_292, 0) = ((MR_Box) ((MR_String) "\t\044(RANLIB) \044(ALL_RANLIBFLAGS) "));
#line 1840 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_292_292, 1) = ((MR_Box) (parse_tree__write_deps_file__V_294_294));
#line 1840 "write_deps_file.m"
    }
#line 1839 "write_deps_file.m"
    {
#line 1839 "write_deps_file.m"
      parse_tree__write_deps_file__V_290_290 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1839 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_290_290, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1839 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_290_290, 1) = ((MR_Box) (parse_tree__write_deps_file__V_292_292));
#line 1839 "write_deps_file.m"
    }
#line 1839 "write_deps_file.m"
    {
#line 1839 "write_deps_file.m"
      parse_tree__write_deps_file__V_289_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1839 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_289_289, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1839 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_289_289, 1) = ((MR_Box) (parse_tree__write_deps_file__V_290_290));
#line 1839 "write_deps_file.m"
    }
#line 1839 "write_deps_file.m"
    {
#line 1839 "write_deps_file.m"
      parse_tree__write_deps_file__V_287_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1839 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_287_287, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1839 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_287_287, 1) = ((MR_Box) (parse_tree__write_deps_file__V_289_289));
#line 1839 "write_deps_file.m"
    }
#line 1839 "write_deps_file.m"
    {
#line 1839 "write_deps_file.m"
      parse_tree__write_deps_file__V_286_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1839 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_286_286, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1839 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_286_286, 1) = ((MR_Box) (parse_tree__write_deps_file__V_287_287));
#line 1839 "write_deps_file.m"
    }
#line 1839 "write_deps_file.m"
    {
#line 1839 "write_deps_file.m"
      parse_tree__write_deps_file__V_284_284 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1839 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_284_284, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1839 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_284_284, 1) = ((MR_Box) (parse_tree__write_deps_file__V_286_286));
#line 1839 "write_deps_file.m"
    }
#line 1838 "write_deps_file.m"
    {
#line 1838 "write_deps_file.m"
      parse_tree__write_deps_file__V_282_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1838 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_282_282, 0) = ((MR_Box) ((MR_String) " "));
#line 1838 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_282_282, 1) = ((MR_Box) (parse_tree__write_deps_file__V_284_284));
#line 1838 "write_deps_file.m"
    }
#line 1838 "write_deps_file.m"
    {
#line 1838 "write_deps_file.m"
      parse_tree__write_deps_file__V_281_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1838 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1838 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_281_281, 1) = ((MR_Box) (parse_tree__write_deps_file__V_282_282));
#line 1838 "write_deps_file.m"
    }
#line 1838 "write_deps_file.m"
    {
#line 1838 "write_deps_file.m"
      parse_tree__write_deps_file__V_279_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1838 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 0) = ((MR_Box) ((MR_String) "\t\044(AR) \044(ALL_ARFLAGS) \044(AR_LIBFILE_OPT)"));
#line 1838 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_279_279, 1) = ((MR_Box) (parse_tree__write_deps_file__V_281_281));
#line 1838 "write_deps_file.m"
    }
#line 1837 "write_deps_file.m"
    {
#line 1837 "write_deps_file.m"
      parse_tree__write_deps_file__V_277_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1837 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_277_277, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1837 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_277_277, 1) = ((MR_Box) (parse_tree__write_deps_file__V_279_279));
#line 1837 "write_deps_file.m"
    }
#line 1837 "write_deps_file.m"
    {
#line 1837 "write_deps_file.m"
      parse_tree__write_deps_file__V_276_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1837 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1837 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_276_276, 1) = ((MR_Box) (parse_tree__write_deps_file__V_277_277));
#line 1837 "write_deps_file.m"
    }
#line 1837 "write_deps_file.m"
    {
#line 1837 "write_deps_file.m"
      parse_tree__write_deps_file__V_274_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1837 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 0) = ((MR_Box) ((MR_String) "\trm -f "));
#line 1837 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_274_274, 1) = ((MR_Box) (parse_tree__write_deps_file__V_276_276));
#line 1837 "write_deps_file.m"
    }
#line 1836 "write_deps_file.m"
    {
#line 1836 "write_deps_file.m"
      parse_tree__write_deps_file__V_272_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1836 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 0) = ((MR_Box) ((MR_String) "\n"));
#line 1836 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_272_272, 1) = ((MR_Box) (parse_tree__write_deps_file__V_274_274));
#line 1836 "write_deps_file.m"
    }
#line 1836 "write_deps_file.m"
    {
#line 1836 "write_deps_file.m"
      parse_tree__write_deps_file__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1836 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
#line 1836 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 1) = ((MR_Box) (parse_tree__write_deps_file__V_272_272));
#line 1836 "write_deps_file.m"
    }
#line 1836 "write_deps_file.m"
    {
#line 1836 "write_deps_file.m"
      parse_tree__write_deps_file__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1836 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 0) = ((MR_Box) ((MR_String) ".os) "));
#line 1836 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_269_269, 1) = ((MR_Box) (parse_tree__write_deps_file__V_271_271));
#line 1836 "write_deps_file.m"
    }
#line 1836 "write_deps_file.m"
    {
#line 1836 "write_deps_file.m"
      parse_tree__write_deps_file__V_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1836 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1836 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 1) = ((MR_Box) (parse_tree__write_deps_file__V_269_269));
#line 1836 "write_deps_file.m"
    }
#line 1836 "write_deps_file.m"
    {
#line 1836 "write_deps_file.m"
      parse_tree__write_deps_file__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1836 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1836 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_266_266, 1) = ((MR_Box) (parse_tree__write_deps_file__V_268_268));
#line 1836 "write_deps_file.m"
    }
#line 1835 "write_deps_file.m"
    {
#line 1835 "write_deps_file.m"
      parse_tree__write_deps_file__V_264_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1835 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
#line 1835 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 1) = ((MR_Box) (parse_tree__write_deps_file__V_266_266));
#line 1835 "write_deps_file.m"
    }
#line 1835 "write_deps_file.m"
    {
#line 1835 "write_deps_file.m"
      parse_tree__write_deps_file__V_263_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1835 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1835 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_263_263, 1) = ((MR_Box) (parse_tree__write_deps_file__V_264_264));
#line 1835 "write_deps_file.m"
    }
#line 1835 "write_deps_file.m"
    {
#line 1835 "write_deps_file.m"
      parse_tree__write_deps_file__V_261_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1835 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_261_261, 0) = ((MR_Box) ((MR_String) " : \044("));
#line 1835 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_261_261, 1) = ((MR_Box) (parse_tree__write_deps_file__V_263_263));
#line 1835 "write_deps_file.m"
    }
#line 1835 "write_deps_file.m"
    {
#line 1835 "write_deps_file.m"
      parse_tree__write_deps_file__V_259_259 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1835 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_259_259, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
#line 1835 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_259_259, 1) = ((MR_Box) (parse_tree__write_deps_file__V_261_261));
#line 1835 "write_deps_file.m"
    }
#line 1834 "write_deps_file.m"
    {
#line 1834 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_259_259);
    }
#line 1843 "write_deps_file.m"
    {
#line 1843 "write_deps_file.m"
      parse_tree__write_deps_file__V_299_299 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".classes)");
    }
#line 1843 "write_deps_file.m"
    {
#line 1843 "write_deps_file.m"
      parse_tree__write_deps_file__ClassFiles_55 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__V_299_299);
    }
#line 1844 "write_deps_file.m"
    {
#line 1844 "write_deps_file.m"
      parse_tree__module_cmds__list_class_files_for_jar_mmake_3_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ClassFiles_55, &parse_tree__write_deps_file__ListClassFiles_56);
    }
#line 1848 "write_deps_file.m"
    {
#line 1848 "write_deps_file.m"
      parse_tree__write_deps_file__V_315_315 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1848 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_315_315, 0) = ((MR_Box) (parse_tree__write_deps_file__ListClassFiles_56));
#line 1848 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_315_315, 1) = ((MR_Box) (parse_tree__write_deps_file__V_193_193));
#line 1848 "write_deps_file.m"
    }
#line 1847 "write_deps_file.m"
    {
#line 1847 "write_deps_file.m"
      parse_tree__write_deps_file__V_313_313 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1847 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_313_313, 0) = ((MR_Box) ((MR_String) " "));
#line 1847 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_313_313, 1) = ((MR_Box) (parse_tree__write_deps_file__V_315_315));
#line 1847 "write_deps_file.m"
    }
#line 1847 "write_deps_file.m"
    {
#line 1847 "write_deps_file.m"
      parse_tree__write_deps_file__V_312_312 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1847 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_312_312, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
#line 1847 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_312_312, 1) = ((MR_Box) (parse_tree__write_deps_file__V_313_313));
#line 1847 "write_deps_file.m"
    }
#line 1847 "write_deps_file.m"
    {
#line 1847 "write_deps_file.m"
      parse_tree__write_deps_file__V_310_310 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1847 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_310_310, 0) = ((MR_Box) ((MR_String) "\t\044(JAR) \044(JAR_CREATE_FLAGS) "));
#line 1847 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_310_310, 1) = ((MR_Box) (parse_tree__write_deps_file__V_312_312));
#line 1847 "write_deps_file.m"
    }
#line 1846 "write_deps_file.m"
    {
#line 1846 "write_deps_file.m"
      parse_tree__write_deps_file__V_308_308 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1846 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_308_308, 0) = ((MR_Box) ((MR_String) ".classes)\n"));
#line 1846 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_308_308, 1) = ((MR_Box) (parse_tree__write_deps_file__V_310_310));
#line 1846 "write_deps_file.m"
    }
#line 1846 "write_deps_file.m"
    {
#line 1846 "write_deps_file.m"
      parse_tree__write_deps_file__V_307_307 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1846 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_307_307, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
#line 1846 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_307_307, 1) = ((MR_Box) (parse_tree__write_deps_file__V_308_308));
#line 1846 "write_deps_file.m"
    }
#line 1846 "write_deps_file.m"
    {
#line 1846 "write_deps_file.m"
      parse_tree__write_deps_file__V_305_305 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1846 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_305_305, 0) = ((MR_Box) ((MR_String) "\044("));
#line 1846 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_305_305, 1) = ((MR_Box) (parse_tree__write_deps_file__V_307_307));
#line 1846 "write_deps_file.m"
    }
#line 1846 "write_deps_file.m"
    {
#line 1846 "write_deps_file.m"
      parse_tree__write_deps_file__V_303_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1846 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_303_303, 0) = ((MR_Box) ((MR_String) " : "));
#line 1846 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_303_303, 1) = ((MR_Box) (parse_tree__write_deps_file__V_305_305));
#line 1846 "write_deps_file.m"
    }
#line 1846 "write_deps_file.m"
    {
#line 1846 "write_deps_file.m"
      parse_tree__write_deps_file__V_301_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1846 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_301_301, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
#line 1846 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_301_301, 1) = ((MR_Box) (parse_tree__write_deps_file__V_303_303));
#line 1846 "write_deps_file.m"
    }
#line 1845 "write_deps_file.m"
    {
#line 1845 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__V_301_301);
#line 1845 "write_deps_file.m"
      return;
    }
#line 1647 "write_deps_file.m"
  }
#line 1638 "write_deps_file.m"
}

#line 1580 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_7_p_0(
#line 1580 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1580 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1580 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1580 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1580 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12)
#line 1580 "write_deps_file.m"
{
#line 1584 "write_deps_file.m"
  {
#line 1584 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1584 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleNameString_14;
#line 1584 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Version_15;
#line 1584 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Fullarch_16;
#line 1584 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MakeVarName_17;
#line 1584 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitFileName_18;
#line 1584 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitCFileName_19;
#line 1584 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitObjFileName_20;
#line 1584 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__InitPicObjFileName_21;
#line 1584 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Intermod_22;
#line 1584 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TransOpt_23;
#line 1584 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__MmcMakeDeps_24;
#line 1584 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeOptsVar_25;
#line 1584 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeTransOptsVar_26;
#line 1584 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_27;
#line 1584 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ExeFileName_28;
#line 1584 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__JarFileName_29;
#line 1584 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__LibFileName_30;
#line 1584 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__SharedLibFileName_31;
#line 1584 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DepFileName_32;
#line 1584 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DvFileName_33;

#line 1585 "write_deps_file.m"
    {
#line 1585 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Automatically generated dependencies for module \140");
    }
#line 1587 "write_deps_file.m"
    {
#line 1587 "write_deps_file.m"
      parse_tree__write_deps_file__ModuleNameString_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_10);
    }
#line 1588 "write_deps_file.m"
    {
#line 1588 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleNameString_14);
    }
#line 1589 "write_deps_file.m"
    {
#line 1589 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1590 "write_deps_file.m"
    {
#line 1590 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# generated from source file \140");
    }
#line 1592 "write_deps_file.m"
    {
#line 1592 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__SourceFileName_9);
    }
#line 1593 "write_deps_file.m"
    {
#line 1593 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1595 "write_deps_file.m"
    {
#line 1595 "write_deps_file.m"
      mercury__library__version_2_p_0(&parse_tree__write_deps_file__Version_15, &parse_tree__write_deps_file__Fullarch_16);
    }
#line 1596 "write_deps_file.m"
    {
#line 1596 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Generated by the Mercury compiler, version ");
    }
#line 1598 "write_deps_file.m"
    {
#line 1598 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Version_15);
    }
#line 1599 "write_deps_file.m"
    {
#line 1599 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n# configured for ");
    }
#line 1600 "write_deps_file.m"
    {
#line 1600 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Fullarch_16);
    }
#line 1601 "write_deps_file.m"
    {
#line 1601 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".\n\n");
    }
#line 1603 "write_deps_file.m"
    {
#line 1603 "write_deps_file.m"
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__MakeVarName_17);
    }
#line 1605 "write_deps_file.m"
    {
#line 1605 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) ".init", (MR_Integer) 0, &parse_tree__write_deps_file__InitFileName_18);
    }
#line 1607 "write_deps_file.m"
    {
#line 1607 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.c", (MR_Integer) 0, &parse_tree__write_deps_file__InitCFileName_19);
    }
#line 1609 "write_deps_file.m"
    {
#line 1609 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.\044O", (MR_Integer) 0, &parse_tree__write_deps_file__InitObjFileName_20);
    }
#line 1611 "write_deps_file.m"
    {
#line 1611 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.pic_o", (MR_Integer) 0, &parse_tree__write_deps_file__InitPicObjFileName_21);
    }
#line 1614 "write_deps_file.m"
    {
#line 1614 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 320, &parse_tree__write_deps_file__Intermod_22);
    }
#line 1615 "write_deps_file.m"
    {
#line 1615 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 324, &parse_tree__write_deps_file__TransOpt_23);
    }
#line 1616 "write_deps_file.m"
    {
#line 1616 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 117, &parse_tree__write_deps_file__MmcMakeDeps_24);
    }
#line 1619 "write_deps_file.m"
    {
#line 1619 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__InitFileName_18, parse_tree__write_deps_file__InitObjFileName_20, parse_tree__write_deps_file__Intermod_22, parse_tree__write_deps_file__TransOpt_23, parse_tree__write_deps_file__MmcMakeDeps_24, &parse_tree__write_deps_file__MaybeOptsVar_25, &parse_tree__write_deps_file__MaybeTransOptsVar_26, &parse_tree__write_deps_file__MaybeModuleDepsVar_27, &parse_tree__write_deps_file__ExeFileName_28, &parse_tree__write_deps_file__JarFileName_29, &parse_tree__write_deps_file__LibFileName_30, &parse_tree__write_deps_file__SharedLibFileName_31);
    }
#line 1624 "write_deps_file.m"
    {
#line 1624 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__InitCFileName_19, parse_tree__write_deps_file__InitFileName_18, &parse_tree__write_deps_file__DepFileName_32, &parse_tree__write_deps_file__DvFileName_33);
    }
#line 1627 "write_deps_file.m"
    {
#line 1627 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__DepsMap_11, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__MmcMakeDeps_24, parse_tree__write_deps_file__Intermod_22, parse_tree__write_deps_file__TransOpt_23, parse_tree__write_deps_file__MaybeModuleDepsVar_27, parse_tree__write_deps_file__MaybeOptsVar_25, parse_tree__write_deps_file__MaybeTransOptsVar_26);
    }
#line 1630 "write_deps_file.m"
    {
#line 1630 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17);
    }
#line 1632 "write_deps_file.m"
    {
#line 1632 "write_deps_file.m"
      parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__ExeFileName_28, parse_tree__write_deps_file__InitCFileName_19, parse_tree__write_deps_file__InitObjFileName_20, parse_tree__write_deps_file__InitPicObjFileName_21, parse_tree__write_deps_file__InitFileName_18, parse_tree__write_deps_file__LibFileName_30, parse_tree__write_deps_file__SharedLibFileName_31, parse_tree__write_deps_file__JarFileName_29, parse_tree__write_deps_file__DepFileName_32, parse_tree__write_deps_file__DvFileName_33);
#line 1632 "write_deps_file.m"
      return;
    }
#line 1584 "write_deps_file.m"
  }
#line 1580 "write_deps_file.m"
}

#line 1494 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__select_ok_modules_3_p_0(
#line 1494 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 1494 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_2,
#line 1494 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__HeadVar__3_3)
#line 1494 "write_deps_file.m"
{
#line 1497 "write_deps_file.m"
  {
#line 1497 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 1497 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1497 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1497 "write_deps_file.m"
    else
#line 1498 "write_deps_file.m"
      {
#line 1498 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_18_18;
#line 1498 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 0)));
#line 1498 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Modules0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 1)));
#line 1498 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ModulesTail_9;
#line 1498 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ModuleImports_11;
#line 1498 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Errors_12;
#line 1498 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__FatalErrors_13;
#line 1498 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_14_14;
#line 1498 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_15_15;
#line 1500 "write_deps_file.m"
        MR_Box parse_tree__write_deps_file__conv0_V_14_14;
#line 1500 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_10_10;

#line 1499 "write_deps_file.m"
        {
#line 1499 "write_deps_file.m"
          parse_tree__write_deps_file__select_ok_modules_3_p_0(parse_tree__write_deps_file__Modules0_6, parse_tree__write_deps_file__DepsMap_2, &parse_tree__write_deps_file__ModulesTail_9);
        }
#line 1500 "write_deps_file.m"
        {
#line 1500 "write_deps_file.m"
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_2, ((MR_Box) (parse_tree__write_deps_file__Module_5)), &parse_tree__write_deps_file__conv0_V_14_14);
        }
#line 1500 "write_deps_file.m"
        parse_tree__write_deps_file__V_14_14 = ((MR_Word) parse_tree__write_deps_file__conv0_V_14_14);
#line 1500 "write_deps_file.m"
        parse_tree__write_deps_file__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, (MR_Integer) 0)));
#line 1500 "write_deps_file.m"
        parse_tree__write_deps_file__ModuleImports_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_14_14, (MR_Integer) 1)));
#line 1501 "write_deps_file.m"
        {
#line 1501 "write_deps_file.m"
          parse_tree__module_imports__module_and_imports_get_errors_2_p_0(parse_tree__write_deps_file__ModuleImports_11, &parse_tree__write_deps_file__Errors_12);
        }
#line 1502 "write_deps_file.m"
        {
#line 1502 "write_deps_file.m"
          parse_tree__write_deps_file__V_15_15 = parse_tree__prog_io_error__fatal_read_module_errors_0_f_0();
        }
#line 9704 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_io_error__parse_tree__prog_io_error__type_ctor_info_read_module_error_0;
#line 1502 "write_deps_file.m"
        {
#line 1502 "write_deps_file.m"
          mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_18_18, parse_tree__write_deps_file__Errors_12, parse_tree__write_deps_file__V_15_15, &parse_tree__write_deps_file__FatalErrors_13);
        }
#line 1503 "write_deps_file.m"
        {
#line 1503 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_18_18, parse_tree__write_deps_file__FatalErrors_13);
        }
#line 1505 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 1504 "write_deps_file.m"
          {
#line 1504 "write_deps_file.m"
            MR_Word base;
#line 1504 "write_deps_file.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1504 "write_deps_file.m"
            *parse_tree__write_deps_file__HeadVar__3_3 = base;
#line 1504 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Module_5));
#line 1504 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__ModulesTail_9));
#line 1504 "write_deps_file.m"
          }
#line 1505 "write_deps_file.m"
        else
#line 1506 "write_deps_file.m"
          *parse_tree__write_deps_file__HeadVar__3_3 = parse_tree__write_deps_file__ModulesTail_9;
#line 1498 "write_deps_file.m"
      }
#line 1497 "write_deps_file.m"
  }
#line 1494 "write_deps_file.m"
}

#line 1181 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_4(
#line 1181 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1181 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1181 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
#line 1181 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
#line 1181 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4)
#line 1181 "write_deps_file.m"
{
#line 1181 "write_deps_file.m"
  {
#line 1181 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1181 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__conv2_LambdaHeadVar__2_118;

#line 1181 "write_deps_file.m"
    {
#line 1181 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1181__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv2_LambdaHeadVar__2_118);
    }
#line 1181 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv2_LambdaHeadVar__2_118));
#line 1181 "write_deps_file.m"
  }
#line 1181 "write_deps_file.m"
}

#line 1135 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_3(
#line 1135 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1135 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 1135 "write_deps_file.m"
{
#line 1135 "write_deps_file.m"
  {
#line 1135 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1135 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 1135 "write_deps_file.m"
    {
#line 1135 "write_deps_file.m"
      return parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1135__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 1135 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 1135 "write_deps_file.m"
  }
#line 1135 "write_deps_file.m"
}

#line 1116 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_2(
#line 1116 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1116 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1116 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 1116 "write_deps_file.m"
{
#line 1116 "write_deps_file.m"
  {
#line 1116 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1116 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__conv1_FileName_6;

#line 1116 "write_deps_file.m"
    {
#line 1116 "write_deps_file.m"
      parse_tree__write_deps_file__get_source_file_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv1_FileName_6);
    }
#line 1116 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_FileName_6));
#line 1116 "write_deps_file.m"
  }
#line 1116 "write_deps_file.m"
}

#line 1113 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_1(
#line 1113 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1113 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1113 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 1113 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 1113 "write_deps_file.m"
{
#line 1113 "write_deps_file.m"
  {
#line 1113 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1113 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_Result_6;

#line 1113 "write_deps_file.m"
    {
#line 1113 "write_deps_file.m"
      parse_tree__write_deps_file__compare_module_names_3_p_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_2), &parse_tree__write_deps_file__conv0_Result_6);
    }
#line 1113 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_3 = ((MR_Box) (parse_tree__write_deps_file__conv0_Result_6));
#line 1113 "write_deps_file.m"
  }
#line 1113 "write_deps_file.m"
}

#line 1089 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0(
#line 1089 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_8,
#line 1089 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_9,
#line 1089 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_10,
#line 1089 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsMap_11,
#line 1089 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_12)
#line 1089 "write_deps_file.m"
{
#line 1093 "write_deps_file.m"
  {
#line 1093 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_473_473;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_480_480;
#line 1093 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleNameString_14;
#line 1093 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Version_15;
#line 1093 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Fullarch_16;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules0_17;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules1_18;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules_19;
#line 1093 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__MakeVarName_20;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SourceFiles0_21;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__SourceFiles_22;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModulesWithSubModules_23;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Target_27;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModulesAndExts_28;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignModules_29;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Gmake_30;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Basis_32;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignBasis_34;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ParentBasis_36;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ExtraLinkObjs_37;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__MakeFileName_38;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ForeignFileNames_44;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__HighLevelCode_45;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_67_67;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_89_89;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_197_197;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_199_199;
#line 1093 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_201_201;
#line 1093 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__V_320_320;
#line 1186 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv3_STATE_VARIABLE_IO_123_123;

#line 1094 "write_deps_file.m"
    {
#line 1094 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Automatically generated dependency variables for module \140");
    }
#line 1096 "write_deps_file.m"
    {
#line 1096 "write_deps_file.m"
      parse_tree__write_deps_file__ModuleNameString_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_10);
    }
#line 1097 "write_deps_file.m"
    {
#line 1097 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleNameString_14);
    }
#line 1098 "write_deps_file.m"
    {
#line 1098 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1099 "write_deps_file.m"
    {
#line 1099 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# generated from source file \140");
    }
#line 1100 "write_deps_file.m"
    {
#line 1100 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__SourceFileName_9);
    }
#line 1101 "write_deps_file.m"
    {
#line 1101 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
#line 1103 "write_deps_file.m"
    {
#line 1103 "write_deps_file.m"
      mercury__library__version_2_p_0(&parse_tree__write_deps_file__Version_15, &parse_tree__write_deps_file__Fullarch_16);
    }
#line 1104 "write_deps_file.m"
    {
#line 1104 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Generated by the Mercury compiler, version ");
    }
#line 1106 "write_deps_file.m"
    {
#line 1106 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Version_15);
    }
#line 1107 "write_deps_file.m"
    {
#line 1107 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ",\n# configured for ");
    }
#line 1108 "write_deps_file.m"
    {
#line 1108 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Fullarch_16);
    }
#line 1109 "write_deps_file.m"
    {
#line 1109 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".\n\n");
    }
#line 10012 "parse_tree.write_deps_file.c"
    parse_tree__write_deps_file__TypeCtorInfo_473_473 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1111 "write_deps_file.m"
    {
#line 1111 "write_deps_file.m"
      mercury__map__keys_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_473_473, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__Modules0_17);
    }
#line 1112 "write_deps_file.m"
    {
#line 1112 "write_deps_file.m"
      parse_tree__write_deps_file__select_ok_modules_3_p_0(parse_tree__write_deps_file__Modules0_17, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__Modules1_18);
    }
#line 1113 "write_deps_file.m"
    {
#line 1113 "write_deps_file.m"
      mercury__list__sort_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_473_473, (MR_Word) &parse_tree__write_deps_file_scalar_common_2[7], parse_tree__write_deps_file__Modules1_18, &parse_tree__write_deps_file__Modules_19);
    }
#line 1115 "write_deps_file.m"
    {
#line 1115 "write_deps_file.m"
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1116 "write_deps_file.m"
    {
#line 1116 "write_deps_file.m"
      parse_tree__write_deps_file__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1116 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_67_67, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[2]));
#line 1116 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_67_67, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_2));
#line 1116 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1116 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_67_67, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_11));
#line 1116 "write_deps_file.m"
    }
#line 10048 "parse_tree.write_deps_file.c"
    parse_tree__write_deps_file__TypeCtorInfo_480_480 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1116 "write_deps_file.m"
    {
#line 1116 "write_deps_file.m"
      mercury__list__map_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_473_473, parse_tree__write_deps_file__TypeCtorInfo_480_480, parse_tree__write_deps_file__V_67_67, parse_tree__write_deps_file__Modules_19, &parse_tree__write_deps_file__SourceFiles0_21);
    }
#line 1117 "write_deps_file.m"
    {
#line 1117 "write_deps_file.m"
      mercury__list__sort_and_remove_dups_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_480_480, parse_tree__write_deps_file__SourceFiles0_21, &parse_tree__write_deps_file__SourceFiles_22);
    }
#line 1119 "write_deps_file.m"
    {
#line 1119 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1120 "write_deps_file.m"
    {
#line 1120 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ms =");
    }
#line 1121 "write_deps_file.m"
    {
#line 1121 "write_deps_file.m"
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".m", parse_tree__write_deps_file__SourceFiles_22);
    }
#line 1122 "write_deps_file.m"
    {
#line 1122 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1124 "write_deps_file.m"
    {
#line 1124 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1125 "write_deps_file.m"
    {
#line 1125 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".errs =");
    }
#line 1126 "write_deps_file.m"
    {
#line 1126 "write_deps_file.m"
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".err", parse_tree__write_deps_file__SourceFiles_22);
    }
#line 1127 "write_deps_file.m"
    {
#line 1127 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1129 "write_deps_file.m"
    {
#line 1129 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1130 "write_deps_file.m"
    {
#line 1130 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mods =");
    }
#line 1131 "write_deps_file.m"
    {
#line 1131 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", parse_tree__write_deps_file__Modules_19);
    }
#line 1132 "write_deps_file.m"
    {
#line 1132 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1135 "write_deps_file.m"
    {
#line 1135 "write_deps_file.m"
      parse_tree__write_deps_file__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1135 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_89_89, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[2]));
#line 1135 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_89_89, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_3));
#line 1135 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1135 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_89_89, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_11));
#line 1135 "write_deps_file.m"
    }
#line 1135 "write_deps_file.m"
    {
#line 1135 "write_deps_file.m"
      parse_tree__write_deps_file__ModulesWithSubModules_23 = mercury__list__filter_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_473_473, parse_tree__write_deps_file__V_89_89, parse_tree__write_deps_file__Modules_19);
    }
#line 1140 "write_deps_file.m"
    {
#line 1140 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1141 "write_deps_file.m"
    {
#line 1141 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".parent_mods =");
    }
#line 1142 "write_deps_file.m"
    {
#line 1142 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", parse_tree__write_deps_file__ModulesWithSubModules_23);
    }
#line 1144 "write_deps_file.m"
    {
#line 1144 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1146 "write_deps_file.m"
    {
#line 1146 "write_deps_file.m"
      libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_8, &parse_tree__write_deps_file__Target_27);
    }
#line 1153 "write_deps_file.m"
    parse_tree__write_deps_file__ForeignModulesAndExts_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1155 "write_deps_file.m"
    {
#line 1155 "write_deps_file.m"
      parse_tree__write_deps_file__ForeignModules_29 = mercury__assoc_list__keys_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_473_473, parse_tree__write_deps_file__TypeCtorInfo_480_480, parse_tree__write_deps_file__ForeignModulesAndExts_28);
    }
#line 1156 "write_deps_file.m"
    {
#line 1156 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1157 "write_deps_file.m"
    {
#line 1157 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign =");
    }
#line 1158 "write_deps_file.m"
    {
#line 1158 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", parse_tree__write_deps_file__ForeignModules_29);
    }
#line 1159 "write_deps_file.m"
    {
#line 1159 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n\n");
    }
#line 1161 "write_deps_file.m"
    {
#line 1161 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 118, &parse_tree__write_deps_file__Gmake_30);
    }
#line 1172 "write_deps_file.m"
#line 1172 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Gmake_30) {
#line 1172 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1172 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1173 "write_deps_file.m"
        {
#line 1174 "write_deps_file.m"
          parse_tree__write_deps_file__Basis_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1175 "write_deps_file.m"
          parse_tree__write_deps_file__ForeignBasis_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1176 "write_deps_file.m"
          parse_tree__write_deps_file__ParentBasis_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1173 "write_deps_file.m"
        }
#line 1172 "write_deps_file.m"
        break;
#line 1172 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1163 "write_deps_file.m"
        {
#line 1163 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__ModsVarName_31;
#line 1163 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__ForeignVarName_33;
#line 1163 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__ParentModsVarName_35;
#line 1163 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_109_109;
#line 1163 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_112_112;
#line 1163 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__V_115_115;

#line 1164 "write_deps_file.m"
          {
#line 1164 "write_deps_file.m"
            mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_20, (MR_String) ".mods", &parse_tree__write_deps_file__ModsVarName_31);
          }
#line 1165 "write_deps_file.m"
          {
#line 1165 "write_deps_file.m"
            parse_tree__write_deps_file__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1165 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_109_109, 0) = ((MR_Box) (parse_tree__write_deps_file__ModsVarName_31));
#line 1165 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_109_109, 1) = ((MR_Box) ((MR_String) ""));
#line 1165 "write_deps_file.m"
          }
#line 1165 "write_deps_file.m"
          {
#line 1165 "write_deps_file.m"
            parse_tree__write_deps_file__Basis_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1165 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Basis_32, 0) = ((MR_Box) (parse_tree__write_deps_file__V_109_109));
#line 1165 "write_deps_file.m"
          }
#line 1167 "write_deps_file.m"
          {
#line 1167 "write_deps_file.m"
            mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_20, (MR_String) ".foreign", &parse_tree__write_deps_file__ForeignVarName_33);
          }
#line 1168 "write_deps_file.m"
          {
#line 1168 "write_deps_file.m"
            parse_tree__write_deps_file__V_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1168 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_112_112, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignVarName_33));
#line 1168 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_112_112, 1) = ((MR_Box) ((MR_String) ""));
#line 1168 "write_deps_file.m"
          }
#line 1168 "write_deps_file.m"
          {
#line 1168 "write_deps_file.m"
            parse_tree__write_deps_file__ForeignBasis_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1168 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignBasis_34, 0) = ((MR_Box) (parse_tree__write_deps_file__V_112_112));
#line 1168 "write_deps_file.m"
          }
#line 1170 "write_deps_file.m"
          {
#line 1170 "write_deps_file.m"
            mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_20, (MR_String) ".parent_mods", &parse_tree__write_deps_file__ParentModsVarName_35);
          }
#line 1171 "write_deps_file.m"
          {
#line 1171 "write_deps_file.m"
            parse_tree__write_deps_file__V_115_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1171 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_115_115, 0) = ((MR_Box) (parse_tree__write_deps_file__ParentModsVarName_35));
#line 1171 "write_deps_file.m"
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_115_115, 1) = ((MR_Box) ((MR_String) ""));
#line 1171 "write_deps_file.m"
          }
#line 1171 "write_deps_file.m"
          {
#line 1171 "write_deps_file.m"
            parse_tree__write_deps_file__ParentBasis_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1171 "write_deps_file.m"
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ParentBasis_36, 0) = ((MR_Box) (parse_tree__write_deps_file__V_115_115));
#line 1171 "write_deps_file.m"
          }
#line 1163 "write_deps_file.m"
        }
#line 1172 "write_deps_file.m"
        break;
#line 1172 "write_deps_file.m"
    }
#line 1179 "write_deps_file.m"
    {
#line 1179 "write_deps_file.m"
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(parse_tree__write_deps_file__Modules_19, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__ExtraLinkObjs_37);
    }
#line 1181 "write_deps_file.m"
    {
#line 1181 "write_deps_file.m"
      parse_tree__write_deps_file__MakeFileName_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1181 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_38, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_9[1]));
#line 1181 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_38, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_4));
#line 1181 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1181 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_38, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_8));
#line 1181 "write_deps_file.m"
    }
#line 1186 "write_deps_file.m"
    {
#line 1186 "write_deps_file.m"
      mercury__list__map_foldl_5_p_2((MR_Word) &parse_tree__write_deps_file_scalar_common_2[1], parse_tree__write_deps_file__TypeCtorInfo_480_480, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__MakeFileName_38, parse_tree__write_deps_file__ForeignModulesAndExts_28, &parse_tree__write_deps_file__ForeignFileNames_44, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv3_STATE_VARIABLE_IO_123_123);
    }
#line 1190 "write_deps_file.m"
    {
#line 1190 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1191 "write_deps_file.m"
    {
#line 1191 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign_cs = ");
    }
#line 1192 "write_deps_file.m"
    {
#line 1192 "write_deps_file.m"
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "", parse_tree__write_deps_file__ForeignFileNames_44);
    }
#line 1193 "write_deps_file.m"
    {
#line 1193 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1196 "write_deps_file.m"
    {
#line 1196 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1197 "write_deps_file.m"
    {
#line 1197 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign_dlls = ");
    }
#line 1198 "write_deps_file.m"
    {
#line 1198 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dlls_subdir)", (MR_String) ".dll", parse_tree__write_deps_file__ForeignBasis_34, parse_tree__write_deps_file__ForeignModules_29);
    }
#line 1200 "write_deps_file.m"
    {
#line 1200 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1202 "write_deps_file.m"
    {
#line 1202 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1203 "write_deps_file.m"
    {
#line 1203 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".init_cs = ");
    }
#line 1204 "write_deps_file.m"
    {
#line 1204 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(cs_subdir)", (MR_String) ".c", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1206 "write_deps_file.m"
    {
#line 1206 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1208 "write_deps_file.m"
    {
#line 1208 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1209 "write_deps_file.m"
    {
#line 1209 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".cs = \044(");
    }
#line 1210 "write_deps_file.m"
    {
#line 1210 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1211 "write_deps_file.m"
    {
#line 1211 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".init_cs) ");
    }
#line 1212 "write_deps_file.m"
    {
#line 1212 "write_deps_file.m"
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) ".c", parse_tree__write_deps_file__ExtraLinkObjs_37);
    }
#line 1214 "write_deps_file.m"
    {
#line 1214 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1216 "write_deps_file.m"
    {
#line 1216 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1217 "write_deps_file.m"
    {
#line 1217 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dlls = ");
    }
#line 1218 "write_deps_file.m"
    {
#line 1218 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dlls_subdir)", (MR_String) ".dll", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1220 "write_deps_file.m"
    {
#line 1220 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1222 "write_deps_file.m"
    {
#line 1222 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1223 "write_deps_file.m"
    {
#line 1223 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_os = ");
    }
#line 1224 "write_deps_file.m"
    {
#line 1224 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(os_subdir)", (MR_String) ".\044O", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1226 "write_deps_file.m"
    {
#line 1226 "write_deps_file.m"
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) ".\044O", parse_tree__write_deps_file__ExtraLinkObjs_37);
    }
#line 1228 "write_deps_file.m"
    {
#line 1228 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1230 "write_deps_file.m"
    {
#line 1230 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1231 "write_deps_file.m"
    {
#line 1231 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_pic_os = ");
    }
#line 1232 "write_deps_file.m"
    {
#line 1232 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(os_subdir)", (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1234 "write_deps_file.m"
    {
#line 1234 "write_deps_file.m"
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)", parse_tree__write_deps_file__ExtraLinkObjs_37);
    }
#line 1236 "write_deps_file.m"
    {
#line 1236 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1238 "write_deps_file.m"
    {
#line 1238 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1239 "write_deps_file.m"
    {
#line 1239 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".os = \044(");
    }
#line 1240 "write_deps_file.m"
    {
#line 1240 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1241 "write_deps_file.m"
    {
#line 1241 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_os)\n");
    }
#line 1243 "write_deps_file.m"
    {
#line 1243 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1244 "write_deps_file.m"
    {
#line 1244 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".pic_os = \044(");
    }
#line 1245 "write_deps_file.m"
    {
#line 1245 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1246 "write_deps_file.m"
    {
#line 1246 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_pic_os)\n");
    }
#line 1257 "write_deps_file.m"
    {
#line 1257 "write_deps_file.m"
      parse_tree__write_deps_file__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1257 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 1257 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_201_201, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[101])));
#line 1257 "write_deps_file.m"
    }
#line 1257 "write_deps_file.m"
    {
#line 1257 "write_deps_file.m"
      parse_tree__write_deps_file__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1257 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 0) = ((MR_Box) ((MR_String) ".cs_or_ss =\044("));
#line 1257 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_199_199, 1) = ((MR_Box) (parse_tree__write_deps_file__V_201_201));
#line 1257 "write_deps_file.m"
    }
#line 1257 "write_deps_file.m"
    {
#line 1257 "write_deps_file.m"
      parse_tree__write_deps_file__V_197_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1257 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
#line 1257 "write_deps_file.m"
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_197_197, 1) = ((MR_Box) (parse_tree__write_deps_file__V_199_199));
#line 1257 "write_deps_file.m"
    }
#line 1256 "write_deps_file.m"
    {
#line 1256 "write_deps_file.m"
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__V_197_197);
    }
#line 1260 "write_deps_file.m"
    {
#line 1260 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1261 "write_deps_file.m"
    {
#line 1261 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".useds = ");
    }
#line 1262 "write_deps_file.m"
    {
#line 1262 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(useds_subdir)", (MR_String) ".used", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1264 "write_deps_file.m"
    {
#line 1264 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1266 "write_deps_file.m"
    {
#line 1266 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1267 "write_deps_file.m"
    {
#line 1267 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".javas = ");
    }
#line 1268 "write_deps_file.m"
    {
#line 1268 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(javas_subdir)", (MR_String) ".java", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1270 "write_deps_file.m"
    {
#line 1270 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1272 "write_deps_file.m"
    {
#line 1272 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1273 "write_deps_file.m"
    {
#line 1273 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".classes = ");
    }
#line 1274 "write_deps_file.m"
    {
#line 1274 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(classes_subdir)", (MR_String) ".class", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1276 "write_deps_file.m"
    {
#line 1276 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) " ");
    }
#line 1283 "write_deps_file.m"
    {
#line 1283 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(wildcard ");
    }
#line 1284 "write_deps_file.m"
    {
#line 1284 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(classes_subdir)", (MR_String) "\\\044\044*.class", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1286 "write_deps_file.m"
    {
#line 1286 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ")\n");
    }
#line 1288 "write_deps_file.m"
    {
#line 1288 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1289 "write_deps_file.m"
    {
#line 1289 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dirs = ");
    }
#line 1290 "write_deps_file.m"
    {
#line 1290 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dirs_subdir)", (MR_String) ".dir", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1292 "write_deps_file.m"
    {
#line 1292 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1294 "write_deps_file.m"
    {
#line 1294 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1295 "write_deps_file.m"
    {
#line 1295 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dir_os = ");
    }
#line 1296 "write_deps_file.m"
    {
#line 1296 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dirs_subdir)", (MR_String) ".dir/*.\044O", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1298 "write_deps_file.m"
    {
#line 1298 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1300 "write_deps_file.m"
    {
#line 1300 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1301 "write_deps_file.m"
    {
#line 1301 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dates = ");
    }
#line 1302 "write_deps_file.m"
    {
#line 1302 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dates_subdir)", (MR_String) ".date", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".date0s = ");
    }
#line 1308 "write_deps_file.m"
    {
#line 1308 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(date0s_subdir)", (MR_String) ".date0", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1310 "write_deps_file.m"
    {
#line 1310 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1312 "write_deps_file.m"
    {
#line 1312 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1313 "write_deps_file.m"
    {
#line 1313 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".date3s = ");
    }
#line 1314 "write_deps_file.m"
    {
#line 1314 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(date3s_subdir)", (MR_String) ".date3", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1316 "write_deps_file.m"
    {
#line 1316 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1318 "write_deps_file.m"
    {
#line 1318 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1319 "write_deps_file.m"
    {
#line 1319 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".optdates = ");
    }
#line 1320 "write_deps_file.m"
    {
#line 1320 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(optdates_subdir)", (MR_String) ".optdate", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1322 "write_deps_file.m"
    {
#line 1322 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1324 "write_deps_file.m"
    {
#line 1324 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1325 "write_deps_file.m"
    {
#line 1325 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".trans_opt_dates = ");
    }
#line 1326 "write_deps_file.m"
    {
#line 1326 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(trans_opt_dates_subdir)", (MR_String) ".trans_opt_date", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1328 "write_deps_file.m"
    {
#line 1328 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1330 "write_deps_file.m"
    {
#line 1330 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1331 "write_deps_file.m"
    {
#line 1331 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".c_dates = ");
    }
#line 1332 "write_deps_file.m"
    {
#line 1332 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(c_dates_subdir)", (MR_String) ".c_date", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1334 "write_deps_file.m"
    {
#line 1334 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1336 "write_deps_file.m"
    {
#line 1336 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1337 "write_deps_file.m"
    {
#line 1337 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".java_dates = ");
    }
#line 1338 "write_deps_file.m"
    {
#line 1338 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(java_dates_subdir)", (MR_String) ".java_date", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1340 "write_deps_file.m"
    {
#line 1340 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1342 "write_deps_file.m"
    {
#line 1342 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1343 "write_deps_file.m"
    {
#line 1343 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ds = ");
    }
#line 1344 "write_deps_file.m"
    {
#line 1344 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(ds_subdir)", (MR_String) ".d", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1346 "write_deps_file.m"
    {
#line 1346 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1348 "write_deps_file.m"
    {
#line 1348 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1349 "write_deps_file.m"
    {
#line 1349 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".module_deps = ");
    }
#line 1351 "write_deps_file.m"
    {
#line 1351 "write_deps_file.m"
      parse_tree__write_deps_file__V_320_320 = make__make_module_dep_file_extension_0_f_0();
    }
#line 1350 "write_deps_file.m"
    {
#line 1350 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(module_deps_subdir)", parse_tree__write_deps_file__V_320_320, parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mihs = ");
    }
#line 1357 "write_deps_file.m"
    {
#line 1357 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 251, &parse_tree__write_deps_file__HighLevelCode_45);
    }
#line 1376 "write_deps_file.m"
#line 1376 "write_deps_file.m"
    switch (parse_tree__write_deps_file__HighLevelCode_45) {
#line 1376 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1376 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1378 "write_deps_file.m"
        {
#line 1378 "write_deps_file.m"
        }
#line 1376 "write_deps_file.m"
        break;
#line 1376 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1366 "write_deps_file.m"
#line 1366 "write_deps_file.m"
        switch (parse_tree__write_deps_file__Target_27) {
#line 1366 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1366 "write_deps_file.m"
          case (MR_Integer) 0:
#line 1361 "write_deps_file.m"
            {
#line 1364 "write_deps_file.m"
              {
#line 1364 "write_deps_file.m"
                parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(mihs_subdir)", (MR_String) ".mih", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
              }
#line 1361 "write_deps_file.m"
            }
#line 1366 "write_deps_file.m"
            break;
#line 1366 "write_deps_file.m"
          case (MR_Integer) 1:
#line 1371 "write_deps_file.m"
            {
#line 1371 "write_deps_file.m"
            }
#line 1366 "write_deps_file.m"
            break;
#line 1366 "write_deps_file.m"
          case (MR_Integer) 3:
#line 1373 "write_deps_file.m"
            {
#line 1373 "write_deps_file.m"
            }
#line 1366 "write_deps_file.m"
            break;
#line 1366 "write_deps_file.m"
          case (MR_Integer) 2:
#line 1372 "write_deps_file.m"
            {
#line 1372 "write_deps_file.m"
            }
#line 1366 "write_deps_file.m"
            break;
#line 1366 "write_deps_file.m"
        }
#line 1376 "write_deps_file.m"
        break;
#line 1376 "write_deps_file.m"
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mhs = ");
    }
#line 1388 "write_deps_file.m"
#line 1388 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Target_27) {
#line 1388 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1388 "write_deps_file.m"
      case (MR_Integer) 0:
#line 1385 "write_deps_file.m"
        {
#line 1386 "write_deps_file.m"
          {
#line 1386 "write_deps_file.m"
            parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", (MR_String) ".mh", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
          }
#line 1385 "write_deps_file.m"
        }
#line 1388 "write_deps_file.m"
        break;
#line 1388 "write_deps_file.m"
      case (MR_Integer) 1:
#line 1389 "write_deps_file.m"
        {
#line 1389 "write_deps_file.m"
        }
#line 1388 "write_deps_file.m"
        break;
#line 1388 "write_deps_file.m"
      case (MR_Integer) 3:
#line 1391 "write_deps_file.m"
        {
#line 1391 "write_deps_file.m"
        }
#line 1388 "write_deps_file.m"
        break;
#line 1388 "write_deps_file.m"
      case (MR_Integer) 2:
#line 1390 "write_deps_file.m"
        {
#line 1390 "write_deps_file.m"
        }
#line 1388 "write_deps_file.m"
        break;
#line 1388 "write_deps_file.m"
    }
#line 1394 "write_deps_file.m"
    {
#line 1394 "write_deps_file.m"
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_mihs = ");
    }
#line 1404 "write_deps_file.m"
    {
#line 1404 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(mihs_subdir)", (MR_String) ".mih", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1406 "write_deps_file.m"
    {
#line 1406 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1411 "write_deps_file.m"
    {
#line 1411 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1412 "write_deps_file.m"
    {
#line 1412 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_mhs = ");
    }
#line 1413 "write_deps_file.m"
    {
#line 1413 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", (MR_String) ".mh", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1415 "write_deps_file.m"
    {
#line 1415 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1417 "write_deps_file.m"
    {
#line 1417 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1418 "write_deps_file.m"
    {
#line 1418 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ints = ");
    }
#line 1419 "write_deps_file.m"
    {
#line 1419 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(ints_subdir)", (MR_String) ".int", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1421 "write_deps_file.m"
    {
#line 1421 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Basis_32);
    }
#line 1422 "write_deps_file.m"
    {
#line 1422 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(int2s_subdir)", (MR_String) ".int2", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1424 "write_deps_file.m"
    {
#line 1424 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1431 "write_deps_file.m"
    {
#line 1431 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1432 "write_deps_file.m"
    {
#line 1432 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".int0s = ");
    }
#line 1433 "write_deps_file.m"
    {
#line 1433 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(int0s_subdir)", (MR_String) ".int0", parse_tree__write_deps_file__ParentBasis_36, parse_tree__write_deps_file__ModulesWithSubModules_23);
    }
#line 1435 "write_deps_file.m"
    {
#line 1435 "write_deps_file.m"
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_int0s = ");
    }
#line 1446 "write_deps_file.m"
    {
#line 1446 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(int0s_subdir)", (MR_String) ".int0", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1448 "write_deps_file.m"
    {
#line 1448 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1450 "write_deps_file.m"
    {
#line 1450 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1451 "write_deps_file.m"
    {
#line 1451 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".int3s = ");
    }
#line 1452 "write_deps_file.m"
    {
#line 1452 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(int3s_subdir)", (MR_String) ".int3", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1454 "write_deps_file.m"
    {
#line 1454 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1456 "write_deps_file.m"
    {
#line 1456 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1457 "write_deps_file.m"
    {
#line 1457 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".opts = ");
    }
#line 1458 "write_deps_file.m"
    {
#line 1458 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(opts_subdir)", (MR_String) ".opt", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1460 "write_deps_file.m"
    {
#line 1460 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1462 "write_deps_file.m"
    {
#line 1462 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1463 "write_deps_file.m"
    {
#line 1463 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".trans_opts = ");
    }
#line 1464 "write_deps_file.m"
    {
#line 1464 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(trans_opts_subdir)", (MR_String) ".trans_opt", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1466 "write_deps_file.m"
    {
#line 1466 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1468 "write_deps_file.m"
    {
#line 1468 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1469 "write_deps_file.m"
    {
#line 1469 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".analysiss = ");
    }
#line 1470 "write_deps_file.m"
    {
#line 1470 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(analysiss_subdir)", (MR_String) ".analysis", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1472 "write_deps_file.m"
    {
#line 1472 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
#line 1474 "write_deps_file.m"
    {
#line 1474 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
#line 1475 "write_deps_file.m"
    {
#line 1475 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".requests = ");
    }
#line 1476 "write_deps_file.m"
    {
#line 1476 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(requests_subdir)", (MR_String) ".request", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".imdgs = ");
    }
#line 1482 "write_deps_file.m"
    {
#line 1482 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(imdgs_subdir)", (MR_String) ".imdg", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".profs = ");
    }
#line 1488 "write_deps_file.m"
    {
#line 1488 "write_deps_file.m"
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", (MR_String) ".prof", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
#line 1490 "write_deps_file.m"
    {
#line 1490 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n\n");
#line 1490 "write_deps_file.m"
      return;
    }
#line 1093 "write_deps_file.m"
  }
#line 1089 "write_deps_file.m"
}

#line 1026 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1(
#line 1026 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 1026 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 1026 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 1026 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 1026 "write_deps_file.m"
{
#line 1026 "write_deps_file.m"
  {
#line 1026 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 1026 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_LambdaHeadVar__3_17;

#line 1026 "write_deps_file.m"
    {
#line 1026 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1026__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_2), &parse_tree__write_deps_file__conv0_LambdaHeadVar__3_17);
    }
#line 1026 "write_deps_file.m"
    *parse_tree__write_deps_file__wrapper_arg_3 = ((MR_Box) (parse_tree__write_deps_file__conv0_LambdaHeadVar__3_17));
#line 1026 "write_deps_file.m"
  }
#line 1026 "write_deps_file.m"
}

#line 1020 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(
#line 1020 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepsGraph0_4,
#line 1020 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_5,
#line 1020 "write_deps_file.m"
  MR_Word * parse_tree__write_deps_file__Dependencies_6)
#line 1020 "write_deps_file.m"
{
#line 1023 "write_deps_file.m"
  {
#line 1023 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1023 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_22_22 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 1023 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__ModuleKey_7;
#line 1023 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DepsGraph_8;
#line 1023 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DepsKeysSet_9;
#line 1023 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__AddKeyDep_10;
#line 1023 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_18_18;
#line 1031 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv1_Dependencies_6;

#line 1024 "write_deps_file.m"
    {
#line 1024 "write_deps_file.m"
      mercury__digraph__add_vertex_4_p_0(parse_tree__write_deps_file__TypeCtorInfo_22_22, ((MR_Box) (parse_tree__write_deps_file__ModuleName_5)), &parse_tree__write_deps_file__ModuleKey_7, parse_tree__write_deps_file__DepsGraph0_4, &parse_tree__write_deps_file__DepsGraph_8);
    }
#line 1025 "write_deps_file.m"
    {
#line 1025 "write_deps_file.m"
      mercury__digraph__lookup_key_set_from_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_22_22, parse_tree__write_deps_file__DepsGraph_8, parse_tree__write_deps_file__ModuleKey_7, &parse_tree__write_deps_file__DepsKeysSet_9);
    }
#line 1026 "write_deps_file.m"
    {
#line 1026 "write_deps_file.m"
      parse_tree__write_deps_file__AddKeyDep_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1026 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__AddKeyDep_10, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[1]));
#line 1026 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__AddKeyDep_10, 1) = ((MR_Box) (parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1));
#line 1026 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__AddKeyDep_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1026 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__AddKeyDep_10, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsGraph_8));
#line 1026 "write_deps_file.m"
    }
#line 1031 "write_deps_file.m"
    {
#line 1031 "write_deps_file.m"
      parse_tree__write_deps_file__V_18_18 = mercury__set__init_0_f_0(parse_tree__write_deps_file__TypeCtorInfo_22_22);
    }
#line 1031 "write_deps_file.m"
    {
#line 1031 "write_deps_file.m"
      mercury__sparse_bitset__foldl_4_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[0], parse_tree__write_deps_file__AddKeyDep_10, parse_tree__write_deps_file__DepsKeysSet_9, ((MR_Box) (parse_tree__write_deps_file__V_18_18)), &parse_tree__write_deps_file__conv1_Dependencies_6);
    }
#line 1031 "write_deps_file.m"
    *parse_tree__write_deps_file__Dependencies_6 = ((MR_Word) parse_tree__write_deps_file__conv1_Dependencies_6);
#line 1023 "write_deps_file.m"
  }
#line 1020 "write_deps_file.m"
}

#line 911 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(
#line 911 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 911 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 911 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__ModuleName_9,
#line 911 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Ext_10)
#line 911 "write_deps_file.m"
{
#line 914 "write_deps_file.m"
  {
#line 914 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 914 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ModuleStr_12;
#line 914 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__Target_13;
#line 914 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__ShorthandTarget_14;

#line 915 "write_deps_file.m"
    {
#line 915 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__write_deps_file__ModuleName_9, &parse_tree__write_deps_file__ModuleStr_12);
    }
#line 916 "write_deps_file.m"
    {
#line 916 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__Ext_10, (MR_Integer) 1, &parse_tree__write_deps_file__Target_13);
    }
#line 918 "write_deps_file.m"
    {
#line 918 "write_deps_file.m"
      parse_tree__write_deps_file__ShorthandTarget_14 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleStr_12, parse_tree__write_deps_file__Ext_10);
    }
#line 919 "write_deps_file.m"
    {
#line 919 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) ".PHONY: ");
    }
#line 920 "write_deps_file.m"
    {
#line 920 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__ShorthandTarget_14);
    }
#line 921 "write_deps_file.m"
    {
#line 921 "write_deps_file.m"
      mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_8);
    }
#line 922 "write_deps_file.m"
    {
#line 922 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__ShorthandTarget_14);
    }
#line 923 "write_deps_file.m"
    {
#line 923 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) ": ");
    }
#line 924 "write_deps_file.m"
    {
#line 924 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Target_13);
    }
#line 925 "write_deps_file.m"
    {
#line 925 "write_deps_file.m"
      mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_8);
#line 925 "write_deps_file.m"
      return;
    }
#line 914 "write_deps_file.m"
  }
#line 911 "write_deps_file.m"
}

#line 898 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(
#line 898 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_1,
#line 898 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_2,
#line 898 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__3_3)
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
        if ((parse_tree__write_deps_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 901 "write_deps_file.m"
          {
#line 901 "write_deps_file.m"
          }
#line 901 "write_deps_file.m"
        else
#line 902 "write_deps_file.m"
          {
#line 902 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_13 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 0)));
#line 902 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FileNames_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 1)));

#line 903 "write_deps_file.m"
            {
#line 903 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_1, (MR_String) " \\\n\t");
            }
#line 904 "write_deps_file.m"
            {
#line 904 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_1, parse_tree__write_deps_file__FileName_13);
            }
#line 905 "write_deps_file.m"
            {
#line 905 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_1, parse_tree__write_deps_file__Suffix_2);
            }
#line 906 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 906 "write_deps_file.m"
            {
#line 906 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__3__tmp_copy_3 = parse_tree__write_deps_file__FileNames_14;

#line 906 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__3_3 = parse_tree__write_deps_file__HeadVar__3__tmp_copy_3;
#line 906 "write_deps_file.m"
            }
#line 906 "write_deps_file.m"
            continue;
#line 902 "write_deps_file.m"
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
parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(
#line 885 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 885 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_2,
#line 885 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 885 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4)
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
        if ((parse_tree__write_deps_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 888 "write_deps_file.m"
          {
#line 888 "write_deps_file.m"
          }
#line 888 "write_deps_file.m"
        else
#line 890 "write_deps_file.m"
          {
#line 890 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__ExtraLink_16;
#line 890 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_17;
#line 890 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ExtraLinks_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 1)));
#line 890 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_20;
#line 890 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 0)));

#line 890 "write_deps_file.m"
            parse_tree__write_deps_file__ExtraLink_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_23_23, (MR_Integer) 0)));
#line 890 "write_deps_file.m"
            parse_tree__write_deps_file__Module_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_23_23, (MR_Integer) 1)));
#line 891 "write_deps_file.m"
            {
#line 891 "write_deps_file.m"
              parse_tree__file_names__extra_link_obj_file_name_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_17, parse_tree__write_deps_file__ExtraLink_16, parse_tree__write_deps_file__Suffix_3, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_20);
            }
#line 893 "write_deps_file.m"
            {
#line 893 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, (MR_String) " \\\n\t");
            }
#line 894 "write_deps_file.m"
            {
#line 894 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, parse_tree__write_deps_file__FileName_20);
            }
#line 895 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 895 "write_deps_file.m"
            {
#line 895 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__4__tmp_copy_4 = parse_tree__write_deps_file__ExtraLinks_18;

#line 895 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__4_4 = parse_tree__write_deps_file__HeadVar__4__tmp_copy_4;
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

#line 872 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(
#line 872 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 872 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_2,
#line 872 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 872 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Module_4,
#line 872 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__5_5)
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
        if ((parse_tree__write_deps_file__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 875 "write_deps_file.m"
          {
#line 875 "write_deps_file.m"
          }
#line 875 "write_deps_file.m"
        else
#line 877 "write_deps_file.m"
          {
#line 877 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FactTable_19 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 0)));
#line 877 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__FactTables_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 1)));
#line 877 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_22;

#line 878 "write_deps_file.m"
            {
#line 878 "write_deps_file.m"
              parse_tree__file_names__fact_table_file_name_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_4, parse_tree__write_deps_file__FactTable_19, parse_tree__write_deps_file__Suffix_3, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_22);
            }
#line 880 "write_deps_file.m"
            {
#line 880 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, (MR_String) " \\\n\t");
            }
#line 881 "write_deps_file.m"
            {
#line 881 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, parse_tree__write_deps_file__FileName_22);
            }
#line 882 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 882 "write_deps_file.m"
            {
#line 882 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__5__tmp_copy_5 = parse_tree__write_deps_file__FactTables_20;

#line 882 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__5_5 = parse_tree__write_deps_file__HeadVar__5__tmp_copy_5;
#line 882 "write_deps_file.m"
            }
#line 882 "write_deps_file.m"
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

#line 862 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependency_5_p_0(
#line 862 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 862 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 862 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFile_8)
#line 862 "write_deps_file.m"
{
#line 866 "write_deps_file.m"
  {
#line 866 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 866 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__IncludeFileName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IncludeFile_8, (MR_Integer) 1)));
#line 866 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__IncludePath_12;
#line 867 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file___Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IncludeFile_8, (MR_Integer) 0)));

#line 868 "write_deps_file.m"
    {
#line 868 "write_deps_file.m"
      parse_tree__file_names__make_include_file_path_3_p_0(parse_tree__write_deps_file__SourceFileName_7, parse_tree__write_deps_file__IncludeFileName_11, &parse_tree__write_deps_file__IncludePath_12);
    }
#line 869 "write_deps_file.m"
    {
#line 869 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_6, (MR_String) " \\\n\t");
    }
#line 870 "write_deps_file.m"
    {
#line 870 "write_deps_file.m"
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_6, parse_tree__write_deps_file__IncludePath_12);
#line 870 "write_deps_file.m"
      return;
    }
#line 866 "write_deps_file.m"
  }
#line 862 "write_deps_file.m"
}

#line 859 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0_1(
#line 859 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 859 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 859 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 859 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 859 "write_deps_file.m"
{
#line 859 "write_deps_file.m"
  {
#line 859 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 859 "write_deps_file.m"
    {
#line 859 "write_deps_file.m"
      parse_tree__write_deps_file__write_foreign_include_file_dependency_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 859 "write_deps_file.m"
      return;
    }
#line 859 "write_deps_file.m"
  }
#line 859 "write_deps_file.m"
}

#line 853 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0(
#line 853 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_6,
#line 853 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__SourceFileName_7,
#line 853 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__IncludeFiles_8)
#line 853 "write_deps_file.m"
{
#line 857 "write_deps_file.m"
  {
#line 857 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 857 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_12_12;
#line 858 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_11;

#line 859 "write_deps_file.m"
    {
#line 859 "write_deps_file.m"
      parse_tree__write_deps_file__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 859 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_9[0]));
#line 859 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 1) = ((MR_Box) (parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0_1));
#line 859 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 859 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 3) = ((MR_Box) (parse_tree__write_deps_file__DepStream_6));
#line 859 "write_deps_file.m"
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_12_12, 4) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_7));
#line 859 "write_deps_file.m"
    }
#line 858 "write_deps_file.m"
    {
#line 858 "write_deps_file.m"
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_12_12, parse_tree__write_deps_file__IncludeFiles_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_11);
    }
#line 857 "write_deps_file.m"
  }
#line 853 "write_deps_file.m"
}

#line 827 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(
#line 827 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
#line 827 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__2_2)
#line 827 "write_deps_file.m"
{
#line 830 "write_deps_file.m"
  {
#line 830 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 830 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 830 "write_deps_file.m"
      {
#line 830 "write_deps_file.m"
      }
#line 830 "write_deps_file.m"
    else
#line 831 "write_deps_file.m"
      {
#line 832 "write_deps_file.m"
        {
#line 832 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__1_1, (MR_String) " ");
#line 832 "write_deps_file.m"
          return;
        }
#line 831 "write_deps_file.m"
      }
#line 830 "write_deps_file.m"
  }
#line 827 "write_deps_file.m"
}

#line 805 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(
#line 805 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_9,
#line 805 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_10,
#line 805 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Prefix_11,
#line 805 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_12,
#line 805 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Basis_13,
#line 805 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_14)
#line 805 "write_deps_file.m"
{
#line 812 "write_deps_file.m"
  {
#line 812 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 812 "write_deps_file.m"
    if ((parse_tree__write_deps_file__Basis_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 824 "write_deps_file.m"
      {
#line 824 "write_deps_file.m"
        parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Suffix_12, parse_tree__write_deps_file__Modules_14);
#line 824 "write_deps_file.m"
        return;
      }
#line 812 "write_deps_file.m"
    else
#line 812 "write_deps_file.m"
      {
#line 812 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__VarName_16;
#line 812 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__OldSuffix_17;
#line 812 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Basis_13, (MR_Integer) 0)));

#line 812 "write_deps_file.m"
        parse_tree__write_deps_file__VarName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_21_21, (MR_Integer) 0)));
#line 812 "write_deps_file.m"
        parse_tree__write_deps_file__OldSuffix_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_21_21, (MR_Integer) 1)));
#line 813 "write_deps_file.m"
        {
#line 813 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) "\044(");
        }
#line 814 "write_deps_file.m"
        {
#line 814 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__VarName_16);
        }
#line 815 "write_deps_file.m"
        {
#line 815 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) ":%");
        }
#line 816 "write_deps_file.m"
        {
#line 816 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__OldSuffix_17);
        }
#line 817 "write_deps_file.m"
        {
#line 817 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) "=");
        }
#line 818 "write_deps_file.m"
        {
#line 818 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Prefix_11);
        }
#line 819 "write_deps_file.m"
        {
#line 819 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) "%");
        }
#line 820 "write_deps_file.m"
        {
#line 820 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Suffix_12);
        }
#line 821 "write_deps_file.m"
        {
#line 821 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) ")");
#line 821 "write_deps_file.m"
          return;
        }
#line 812 "write_deps_file.m"
      }
#line 812 "write_deps_file.m"
  }
#line 805 "write_deps_file.m"
}

#line 794 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_list_6_p_0(
#line 794 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_1,
#line 794 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_2,
#line 794 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_3,
#line 794 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__HeadVar__4_4)
#line 794 "write_deps_file.m"
{
#line 797 "write_deps_file.m"
  while (MR_TRUE)
#line 797 "write_deps_file.m"
    {
#line 797 "write_deps_file.m"
      /* tailcall optimized into a loop */
#line 797 "write_deps_file.m"
      {
#line 797 "write_deps_file.m"
        MR_bool parse_tree__write_deps_file__succeeded;

#line 797 "write_deps_file.m"
        if ((parse_tree__write_deps_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 797 "write_deps_file.m"
          {
#line 797 "write_deps_file.m"
          }
#line 797 "write_deps_file.m"
        else
#line 798 "write_deps_file.m"
          {
#line 798 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Module_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 0)));
#line 798 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Modules_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 1)));
#line 798 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__FileName_19;

#line 799 "write_deps_file.m"
            {
#line 799 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_16, parse_tree__write_deps_file__Suffix_3, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_19);
            }
#line 801 "write_deps_file.m"
            {
#line 801 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, (MR_String) " \\\n\t");
            }
#line 802 "write_deps_file.m"
            {
#line 802 "write_deps_file.m"
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, parse_tree__write_deps_file__FileName_19);
            }
#line 803 "write_deps_file.m"
            /* direct tailcall eliminated */
#line 803 "write_deps_file.m"
            {
#line 803 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__HeadVar__4__tmp_copy_4 = parse_tree__write_deps_file__Modules_17;

#line 803 "write_deps_file.m"
              parse_tree__write_deps_file__HeadVar__4_4 = parse_tree__write_deps_file__HeadVar__4__tmp_copy_4;
#line 803 "write_deps_file.m"
            }
#line 803 "write_deps_file.m"
            continue;
#line 798 "write_deps_file.m"
          }
#line 797 "write_deps_file.m"
      }
#line 797 "write_deps_file.m"
      break;
#line 797 "write_deps_file.m"
    }
#line 794 "write_deps_file.m"
}

#line 787 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_set_6_p_0(
#line 787 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Globals_7,
#line 787 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__DepStream_8,
#line 787 "write_deps_file.m"
  MR_String parse_tree__write_deps_file__Suffix_9,
#line 787 "write_deps_file.m"
  MR_Word parse_tree__write_deps_file__Modules_10)
#line 787 "write_deps_file.m"
{
#line 790 "write_deps_file.m"
  {
#line 790 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 790 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__V_14_14;

#line 792 "write_deps_file.m"
    {
#line 792 "write_deps_file.m"
      parse_tree__write_deps_file__V_14_14 = mercury__set__to_sorted_list_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_deps_file__Modules_10);
    }
#line 791 "write_deps_file.m"
    {
#line 791 "write_deps_file.m"
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Suffix_9, parse_tree__write_deps_file__V_14_14);
#line 791 "write_deps_file.m"
      return;
    }
#line 790 "write_deps_file.m"
  }
#line 787 "write_deps_file.m"
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
#line 2349 "write_deps_file.m"
  {
#line 2349 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 2349 "write_deps_file.m"
    if ((parse_tree__write_deps_file__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2349 "write_deps_file.m"
      *parse_tree__write_deps_file__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 2349 "write_deps_file.m"
    else
#line 2351 "write_deps_file.m"
      {
#line 2351 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Dep_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 0)));
#line 2351 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Deps_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 1)));
#line 2351 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;

#line 2352 "write_deps_file.m"
        {
#line 2352 "write_deps_file.m"
          parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__HeadVar__2_2, parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__HeadVar__4_4, parse_tree__write_deps_file__Deps_21, &parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35);
        }
#line 12112 "parse_tree.write_deps_file.c"
#line 12113 "parse_tree.write_deps_file.c"
        switch (parse_tree__write_deps_file__HeadVar__2_2) {
#line 12115 "parse_tree.write_deps_file.c"
          default: /*NOTREACHED*/ MR_assert(0);
#line 12117 "parse_tree.write_deps_file.c"
          case (MR_Integer) 0:
#line 12119 "parse_tree.write_deps_file.c"
            {
#line 12121 "parse_tree.write_deps_file.c"
              MR_String parse_tree__write_deps_file__OptName_28;
#line 12123 "parse_tree.write_deps_file.c"
              MR_Word parse_tree__write_deps_file__Result2_29;

#line 2373 "write_deps_file.m"
              {
#line 2373 "write_deps_file.m"
                parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__Dep_20, parse_tree__write_deps_file__HeadVar__4_4, &parse_tree__write_deps_file__OptName_28);
              }
#line 2374 "write_deps_file.m"
              {
#line 2374 "write_deps_file.m"
                libs__file_util__search_for_file_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__OptName_28, &parse_tree__write_deps_file__Result2_29);
              }
#line 2378 "write_deps_file.m"
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_29)) == (MR_mktag((MR_Integer) 1))))
#line 2379 "write_deps_file.m"
                *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;
#line 2378 "write_deps_file.m"
              else
#line 2377 "write_deps_file.m"
                {
#line 2377 "write_deps_file.m"
                  MR_Word base;
#line 2377 "write_deps_file.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2377 "write_deps_file.m"
                  *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2377 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_20));
#line 2377 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
#line 2377 "write_deps_file.m"
                }
#line 12156 "parse_tree.write_deps_file.c"
            }
#line 12158 "parse_tree.write_deps_file.c"
            break;
#line 12160 "parse_tree.write_deps_file.c"
          case (MR_Integer) 1:
#line 12162 "parse_tree.write_deps_file.c"
            {
#line 12164 "parse_tree.write_deps_file.c"
              MR_Word parse_tree__write_deps_file__Result1_24;

#line 2356 "write_deps_file.m"
              {
#line 2356 "write_deps_file.m"
                parse_tree__prog_io_find__search_for_module_source_7_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__Dep_20, &parse_tree__write_deps_file__Result1_24);
              }
#line 12172 "parse_tree.write_deps_file.c"
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result1_24)) == (MR_mktag((MR_Integer) 1))))
#line 12174 "parse_tree.write_deps_file.c"
                {
#line 12176 "parse_tree.write_deps_file.c"
                  MR_String parse_tree__write_deps_file__OptName_45;
#line 12178 "parse_tree.write_deps_file.c"
                  MR_Word parse_tree__write_deps_file__Result2_46;

#line 2373 "write_deps_file.m"
                  {
#line 2373 "write_deps_file.m"
                    parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__Dep_20, parse_tree__write_deps_file__HeadVar__4_4, &parse_tree__write_deps_file__OptName_45);
                  }
#line 2374 "write_deps_file.m"
                  {
#line 2374 "write_deps_file.m"
                    libs__file_util__search_for_file_6_p_0((MR_Integer) 1, parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__OptName_45, &parse_tree__write_deps_file__Result2_46);
                  }
#line 2378 "write_deps_file.m"
                  if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result2_46)) == (MR_mktag((MR_Integer) 1))))
#line 2379 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;
#line 2378 "write_deps_file.m"
                  else
#line 2377 "write_deps_file.m"
                    {
#line 2377 "write_deps_file.m"
                      MR_Word base;
#line 2377 "write_deps_file.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2377 "write_deps_file.m"
                      *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2377 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_20));
#line 2377 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
#line 2377 "write_deps_file.m"
                    }
#line 12211 "parse_tree.write_deps_file.c"
                }
#line 12213 "parse_tree.write_deps_file.c"
              else
#line 12215 "parse_tree.write_deps_file.c"
                {
#line 2360 "write_deps_file.m"
                  {
#line 2360 "write_deps_file.m"
                    MR_Word base;
#line 2360 "write_deps_file.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2360 "write_deps_file.m"
                    *parse_tree__write_deps_file__HeadVar__6_6 = base;
#line 2360 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_20));
#line 2360 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
#line 2360 "write_deps_file.m"
                  }
#line 2362 "write_deps_file.m"
                  {
#line 2362 "write_deps_file.m"
                    mercury__io__seen_2_p_0();
#line 2362 "write_deps_file.m"
                    return;
                  }
#line 12238 "parse_tree.write_deps_file.c"
                }
#line 12240 "parse_tree.write_deps_file.c"
            }
#line 12242 "parse_tree.write_deps_file.c"
            break;
#line 12244 "parse_tree.write_deps_file.c"
        }
#line 2351 "write_deps_file.m"
      }
#line 2349 "write_deps_file.m"
  }
#line 104 "write_deps_file.m"
}

#line 2270 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__referenced_dlls_2_f_0_1(
#line 2270 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2270 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 2270 "write_deps_file.m"
{
#line 2270 "write_deps_file.m"
  {
#line 2270 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 2270 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 2270 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv0_LambdaHeadVar__2_18;

#line 2270 "write_deps_file.m"
    {
#line 2270 "write_deps_file.m"
      parse_tree__write_deps_file__conv0_LambdaHeadVar__2_18 = parse_tree__write_deps_file__IntroducedFrom__func__referenced_dlls__2270__1_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 2270 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_LambdaHeadVar__2_18));
#line 2270 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 2270 "write_deps_file.m"
  }
#line 2270 "write_deps_file.m"
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
#line 2259 "write_deps_file.m"
  {
#line 2259 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Modules_6;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_22_22 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 2259 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DepModules_7;

#line 2260 "write_deps_file.m"
    {
#line 2260 "write_deps_file.m"
      mercury__set__insert_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_22_22, ((MR_Box) (parse_tree__write_deps_file__Module_4)), parse_tree__write_deps_file__DepModules0_5, &parse_tree__write_deps_file__DepModules_7);
    }
#line 2264 "write_deps_file.m"
    {
#line 2264 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(parse_tree__write_deps_file__Module_4);
    }
#line 2269 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 2267 "write_deps_file.m"
      {
#line 2268 "write_deps_file.m"
        {
#line 2268 "write_deps_file.m"
          mercury__set__insert_list_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_22_22, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[21]), parse_tree__write_deps_file__DepModules_7, &parse_tree__write_deps_file__Modules_6);
        }
#line 2267 "write_deps_file.m"
      }
#line 2269 "write_deps_file.m"
    else
#line 2277 "write_deps_file.m"
      {
#line 2278 "write_deps_file.m"
        {
#line 2278 "write_deps_file.m"
          parse_tree__write_deps_file__Modules_6 = mercury__set__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_22_22, parse_tree__write_deps_file__TypeCtorInfo_22_22, (MR_Word) &parse_tree__write_deps_file_scalar_common_2[6], parse_tree__write_deps_file__DepModules_7);
        }
#line 2277 "write_deps_file.m"
      }
#line 2259 "write_deps_file.m"
    return parse_tree__write_deps_file__Modules_6;
#line 2259 "write_deps_file.m"
  }
#line 88 "write_deps_file.m"
}

#line 2234 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1(
#line 2234 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 2234 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 2234 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 2234 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 2234 "write_deps_file.m"
{
#line 2234 "write_deps_file.m"
  {
#line 2234 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 2234 "write_deps_file.m"
    {
#line 2234 "write_deps_file.m"
      parse_tree__write_deps_file__write_module_scc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
#line 2234 "write_deps_file.m"
      return;
    }
#line 2234 "write_deps_file.m"
  }
#line 2234 "write_deps_file.m"
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
#line 2220 "write_deps_file.m"
  {
#line 2220 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 2220 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Order_10;
#line 2220 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_11;

#line 2221 "write_deps_file.m"
    {
#line 2221 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_6, (MR_Integer) 93, &parse_tree__write_deps_file__Order_10);
    }
#line 2222 "write_deps_file.m"
    {
#line 2222 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_6, (MR_Integer) 45, &parse_tree__write_deps_file__Verbose_11);
    }
#line 2246 "write_deps_file.m"
#line 2246 "write_deps_file.m"
    switch (parse_tree__write_deps_file__Order_10) {
#line 2246 "write_deps_file.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2246 "write_deps_file.m"
      case (MR_Integer) 0:
#line 2247 "write_deps_file.m"
        {
#line 2247 "write_deps_file.m"
        }
#line 2246 "write_deps_file.m"
        break;
#line 2246 "write_deps_file.m"
      case (MR_Integer) 1:
#line 2224 "write_deps_file.m"
        {
#line 2224 "write_deps_file.m"
          MR_String parse_tree__write_deps_file__OrdFileName_12;
#line 2224 "write_deps_file.m"
          MR_Word parse_tree__write_deps_file__OrdResult_13;

#line 2225 "write_deps_file.m"
          {
#line 2225 "write_deps_file.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_6, parse_tree__write_deps_file__Module_7, (MR_String) ".order", (MR_Integer) 0, &parse_tree__write_deps_file__OrdFileName_12);
          }
#line 2227 "write_deps_file.m"
          {
#line 2227 "write_deps_file.m"
            libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) "% Creating module order file \140");
          }
#line 2228 "write_deps_file.m"
          {
#line 2228 "write_deps_file.m"
            libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, parse_tree__write_deps_file__OrdFileName_12);
          }
#line 2229 "write_deps_file.m"
          {
#line 2229 "write_deps_file.m"
            libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) "\'...");
          }
#line 2230 "write_deps_file.m"
          {
#line 2230 "write_deps_file.m"
            mercury__io__open_output_4_p_0(parse_tree__write_deps_file__OrdFileName_12, &parse_tree__write_deps_file__OrdResult_13);
          }
#line 2237 "write_deps_file.m"
          if (((MR_tag((MR_Word) parse_tree__write_deps_file__OrdResult_13)) == (MR_mktag((MR_Integer) 1))))
#line 2238 "write_deps_file.m"
            {
#line 2238 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__IOError_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__OrdResult_13, (MR_Integer) 0)));
#line 2238 "write_deps_file.m"
              MR_String parse_tree__write_deps_file__IOErrorMessage_16;
#line 2238 "write_deps_file.m"
              MR_String parse_tree__write_deps_file__OrdMessage_17;
#line 2238 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_34_34;
#line 2238 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_36_36;
#line 2238 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_37_37;
#line 2238 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_39_39;

#line 2239 "write_deps_file.m"
              {
#line 2239 "write_deps_file.m"
                libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) " failed.\n");
              }
#line 2240 "write_deps_file.m"
              {
#line 2240 "write_deps_file.m"
                libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_11);
              }
#line 2241 "write_deps_file.m"
              {
#line 2241 "write_deps_file.m"
                mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_15, &parse_tree__write_deps_file__IOErrorMessage_16);
              }
#line 2243 "write_deps_file.m"
              {
#line 2243 "write_deps_file.m"
                parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2243 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_16));
#line 2243 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 2243 "write_deps_file.m"
              }
#line 2243 "write_deps_file.m"
              {
#line 2243 "write_deps_file.m"
                parse_tree__write_deps_file__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2243 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 2243 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 2243 "write_deps_file.m"
              }
#line 2242 "write_deps_file.m"
              {
#line 2242 "write_deps_file.m"
                parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2242 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) (parse_tree__write_deps_file__OrdFileName_12));
#line 2242 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_37_37));
#line 2242 "write_deps_file.m"
              }
#line 2242 "write_deps_file.m"
              {
#line 2242 "write_deps_file.m"
                parse_tree__write_deps_file__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2242 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 2242 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 2242 "write_deps_file.m"
              }
#line 2242 "write_deps_file.m"
              {
#line 2242 "write_deps_file.m"
                mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_34_34, &parse_tree__write_deps_file__OrdMessage_17);
              }
#line 2244 "write_deps_file.m"
              {
#line 2244 "write_deps_file.m"
                libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__OrdMessage_17);
#line 2244 "write_deps_file.m"
                return;
              }
#line 2238 "write_deps_file.m"
            }
#line 2237 "write_deps_file.m"
          else
#line 2232 "write_deps_file.m"
            {
#line 2232 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__OrdStream_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OrdResult_13, (MR_Integer) 0)));
#line 2232 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_43_43;

#line 2234 "write_deps_file.m"
              {
#line 2234 "write_deps_file.m"
                parse_tree__write_deps_file__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 2234 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_43_43, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[0]));
#line 2234 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_43_43, 1) = ((MR_Box) (parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1));
#line 2234 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 2234 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_43_43, 3) = ((MR_Box) (parse_tree__write_deps_file__OrdStream_14));
#line 2234 "write_deps_file.m"
              }
#line 2233 "write_deps_file.m"
              {
#line 2233 "write_deps_file.m"
                mercury__io__write_list_6_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], parse_tree__write_deps_file__OrdStream_14, parse_tree__write_deps_file__DepsOrdering_8, (MR_String) "\n\n", parse_tree__write_deps_file__V_43_43);
              }
#line 2235 "write_deps_file.m"
              {
#line 2235 "write_deps_file.m"
                mercury__io__close_output_3_p_0(parse_tree__write_deps_file__OrdStream_14);
              }
#line 2236 "write_deps_file.m"
              {
#line 2236 "write_deps_file.m"
                libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) " done.\n");
#line 2236 "write_deps_file.m"
                return;
              }
#line 2232 "write_deps_file.m"
            }
#line 2224 "write_deps_file.m"
        }
#line 2246 "write_deps_file.m"
        break;
#line 2246 "write_deps_file.m"
    }
#line 2220 "write_deps_file.m"
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
#line 1063 "write_deps_file.m"
  {
#line 1063 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1063 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_12;
#line 1063 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DepFileName_13;
#line 1063 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DepResult_14;

#line 1064 "write_deps_file.m"
    {
#line 1064 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 45, &parse_tree__write_deps_file__Verbose_12);
    }
#line 1065 "write_deps_file.m"
    {
#line 1065 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, (MR_String) ".dep", (MR_Integer) 0, &parse_tree__write_deps_file__DepFileName_13);
    }
#line 1067 "write_deps_file.m"
    {
#line 1067 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    }
#line 1068 "write_deps_file.m"
    {
#line 1068 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, parse_tree__write_deps_file__DepFileName_13);
    }
#line 1069 "write_deps_file.m"
    {
#line 1069 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "\'...\n");
    }
#line 1070 "write_deps_file.m"
    {
#line 1070 "write_deps_file.m"
      mercury__io__open_output_4_p_0(parse_tree__write_deps_file__DepFileName_13, &parse_tree__write_deps_file__DepResult_14);
    }
#line 1077 "write_deps_file.m"
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__DepResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 1078 "write_deps_file.m"
      {
#line 1078 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DepResult_14, (MR_Integer) 0)));
#line 1078 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IOErrorMessage_17;
#line 1078 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DepMessage_18;
#line 1078 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_34_34;
#line 1078 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_36_36;
#line 1078 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_37_37;
#line 1078 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_39_39;

#line 1079 "write_deps_file.m"
        {
#line 1079 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
        }
#line 1080 "write_deps_file.m"
        {
#line 1080 "write_deps_file.m"
          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
        }
#line 1081 "write_deps_file.m"
        {
#line 1081 "write_deps_file.m"
          mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_16, &parse_tree__write_deps_file__IOErrorMessage_17);
        }
#line 1083 "write_deps_file.m"
        {
#line 1083 "write_deps_file.m"
          parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1083 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_17));
#line 1083 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1083 "write_deps_file.m"
        }
#line 1083 "write_deps_file.m"
        {
#line 1083 "write_deps_file.m"
          parse_tree__write_deps_file__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1083 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 1083 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 1083 "write_deps_file.m"
        }
#line 1082 "write_deps_file.m"
        {
#line 1082 "write_deps_file.m"
          parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) (parse_tree__write_deps_file__DepFileName_13));
#line 1082 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_37_37));
#line 1082 "write_deps_file.m"
        }
#line 1082 "write_deps_file.m"
        {
#line 1082 "write_deps_file.m"
          parse_tree__write_deps_file__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 1082 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 1082 "write_deps_file.m"
        }
#line 1082 "write_deps_file.m"
        {
#line 1082 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_34_34, &parse_tree__write_deps_file__DepMessage_18);
        }
#line 1084 "write_deps_file.m"
        {
#line 1084 "write_deps_file.m"
          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__DepMessage_18);
#line 1084 "write_deps_file.m"
          return;
        }
#line 1078 "write_deps_file.m"
      }
#line 1077 "write_deps_file.m"
    else
#line 1072 "write_deps_file.m"
      {
#line 1072 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__DepStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__DepResult_14, (MR_Integer) 0)));

#line 1073 "write_deps_file.m"
        {
#line 1073 "write_deps_file.m"
          parse_tree__write_deps_file__generate_dep_file_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SourceFileName_8, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__DepsMap_10, parse_tree__write_deps_file__DepStream_15);
        }
#line 1075 "write_deps_file.m"
        {
#line 1075 "write_deps_file.m"
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DepStream_15);
        }
#line 1076 "write_deps_file.m"
        {
#line 1076 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% done.\n");
#line 1076 "write_deps_file.m"
          return;
        }
#line 1072 "write_deps_file.m"
      }
#line 1063 "write_deps_file.m"
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
#line 1036 "write_deps_file.m"
  {
#line 1036 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 1036 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__Verbose_12;
#line 1036 "write_deps_file.m"
    MR_String parse_tree__write_deps_file__DvFileName_13;
#line 1036 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__DvResult_14;

#line 1037 "write_deps_file.m"
    {
#line 1037 "write_deps_file.m"
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 45, &parse_tree__write_deps_file__Verbose_12);
    }
#line 1038 "write_deps_file.m"
    {
#line 1038 "write_deps_file.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, (MR_String) ".dv", (MR_Integer) 0, &parse_tree__write_deps_file__DvFileName_13);
    }
#line 1040 "write_deps_file.m"
    {
#line 1040 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    }
#line 1041 "write_deps_file.m"
    {
#line 1041 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, parse_tree__write_deps_file__DvFileName_13);
    }
#line 1042 "write_deps_file.m"
    {
#line 1042 "write_deps_file.m"
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "\'...\n");
    }
#line 1043 "write_deps_file.m"
    {
#line 1043 "write_deps_file.m"
      mercury__io__open_output_4_p_0(parse_tree__write_deps_file__DvFileName_13, &parse_tree__write_deps_file__DvResult_14);
    }
#line 1050 "write_deps_file.m"
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__DvResult_14)) == (MR_mktag((MR_Integer) 1))))
#line 1051 "write_deps_file.m"
      {
#line 1051 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DvResult_14, (MR_Integer) 0)));
#line 1051 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IOErrorMessage_17;
#line 1051 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DvMessage_18;
#line 1051 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_34_34;
#line 1051 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_36_36;
#line 1051 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_37_37;
#line 1051 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_39_39;

#line 1052 "write_deps_file.m"
        {
#line 1052 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
        }
#line 1053 "write_deps_file.m"
        {
#line 1053 "write_deps_file.m"
          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
        }
#line 1054 "write_deps_file.m"
        {
#line 1054 "write_deps_file.m"
          mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_16, &parse_tree__write_deps_file__IOErrorMessage_17);
        }
#line 1056 "write_deps_file.m"
        {
#line 1056 "write_deps_file.m"
          parse_tree__write_deps_file__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1056 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_17));
#line 1056 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1056 "write_deps_file.m"
        }
#line 1056 "write_deps_file.m"
        {
#line 1056 "write_deps_file.m"
          parse_tree__write_deps_file__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1056 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 1056 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_37_37, 1) = ((MR_Box) (parse_tree__write_deps_file__V_39_39));
#line 1056 "write_deps_file.m"
        }
#line 1055 "write_deps_file.m"
        {
#line 1055 "write_deps_file.m"
          parse_tree__write_deps_file__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1055 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 0) = ((MR_Box) (parse_tree__write_deps_file__DvFileName_13));
#line 1055 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_36_36, 1) = ((MR_Box) (parse_tree__write_deps_file__V_37_37));
#line 1055 "write_deps_file.m"
        }
#line 1055 "write_deps_file.m"
        {
#line 1055 "write_deps_file.m"
          parse_tree__write_deps_file__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1055 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
#line 1055 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_34_34, 1) = ((MR_Box) (parse_tree__write_deps_file__V_36_36));
#line 1055 "write_deps_file.m"
        }
#line 1055 "write_deps_file.m"
        {
#line 1055 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_34_34, &parse_tree__write_deps_file__DvMessage_18);
        }
#line 1057 "write_deps_file.m"
        {
#line 1057 "write_deps_file.m"
          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__DvMessage_18);
#line 1057 "write_deps_file.m"
          return;
        }
#line 1051 "write_deps_file.m"
      }
#line 1050 "write_deps_file.m"
    else
#line 1045 "write_deps_file.m"
      {
#line 1045 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__DvStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__DvResult_14, (MR_Integer) 0)));

#line 1046 "write_deps_file.m"
        {
#line 1046 "write_deps_file.m"
          parse_tree__write_deps_file__generate_dv_file_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SourceFileName_8, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__DepsMap_10, parse_tree__write_deps_file__DvStream_15);
        }
#line 1048 "write_deps_file.m"
        {
#line 1048 "write_deps_file.m"
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DvStream_15);
        }
#line 1049 "write_deps_file.m"
        {
#line 1049 "write_deps_file.m"
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% done.\n");
#line 1049 "write_deps_file.m"
          return;
        }
#line 1045 "write_deps_file.m"
      }
#line 1036 "write_deps_file.m"
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
#line 929 "write_deps_file.m"
  {
#line 929 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;

#line 929 "write_deps_file.m"
    {
#line 929 "write_deps_file.m"
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__HeadVar__2_2, parse_tree__write_deps_file__IntDepsGraph_3, parse_tree__write_deps_file__ImpDepsGraph_4, parse_tree__write_deps_file__IndirectDepsGraph_5, parse_tree__write_deps_file__IndirectOptDepsGraph_6, parse_tree__write_deps_file__TransOptOrder_7);
#line 929 "write_deps_file.m"
      return;
    }
#line 929 "write_deps_file.m"
  }
#line 59 "write_deps_file.m"
}

#line 671 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_6(
#line 671 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 671 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 671 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 671 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 671 "write_deps_file.m"
{
#line 671 "write_deps_file.m"
  {
#line 671 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 671 "write_deps_file.m"
    {
#line 671 "write_deps_file.m"
      parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
#line 671 "write_deps_file.m"
      return;
    }
#line 671 "write_deps_file.m"
  }
#line 671 "write_deps_file.m"
}

#line 608 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_5(
#line 608 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 608 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 608 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 608 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 608 "write_deps_file.m"
{
#line 608 "write_deps_file.m"
  {
#line 608 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 608 "write_deps_file.m"
    {
#line 608 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__608__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
#line 608 "write_deps_file.m"
      return;
    }
#line 608 "write_deps_file.m"
  }
#line 608 "write_deps_file.m"
}

#line 574 "write_deps_file.m"
static MR_bool MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_4(
#line 574 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 574 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 574 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
#line 574 "write_deps_file.m"
{
#line 574 "write_deps_file.m"
  {
#line 574 "write_deps_file.m"
    MR_bool parse_tree__write_deps_file__succeeded;
#line 574 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 574 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv3_LambdaHeadVar__2_549;

#line 574 "write_deps_file.m"
    {
#line 574 "write_deps_file.m"
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__574__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv3_LambdaHeadVar__2_549);
    }
#line 574 "write_deps_file.m"
    if (parse_tree__write_deps_file__succeeded)
#line 574 "write_deps_file.m"
      {
#line 574 "write_deps_file.m"
        *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv3_LambdaHeadVar__2_549));
#line 574 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = MR_TRUE;
#line 574 "write_deps_file.m"
      }
#line 574 "write_deps_file.m"
    return parse_tree__write_deps_file__succeeded;
#line 574 "write_deps_file.m"
  }
#line 574 "write_deps_file.m"
}

#line 386 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_3(
#line 386 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 386 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 386 "write_deps_file.m"
{
#line 386 "write_deps_file.m"
  {
#line 386 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 386 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 386 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv2_HeadVar__2_2;

#line 386 "write_deps_file.m"
    {
#line 386 "write_deps_file.m"
      parse_tree__write_deps_file__conv2_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 386 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv2_HeadVar__2_2));
#line 386 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 386 "write_deps_file.m"
  }
#line 386 "write_deps_file.m"
}

#line 367 "write_deps_file.m"
static MR_Box MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_2(
#line 367 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 367 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
#line 367 "write_deps_file.m"
{
#line 367 "write_deps_file.m"
  {
#line 367 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
#line 367 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
#line 367 "write_deps_file.m"
    MR_Word parse_tree__write_deps_file__conv1_HeadVar__2_2;

#line 367 "write_deps_file.m"
    {
#line 367 "write_deps_file.m"
      parse_tree__write_deps_file__conv1_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
#line 367 "write_deps_file.m"
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_HeadVar__2_2));
#line 367 "write_deps_file.m"
    return parse_tree__write_deps_file__wrapper_arg_2;
#line 367 "write_deps_file.m"
  }
#line 367 "write_deps_file.m"
}

#line 282 "write_deps_file.m"
static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0_1(
#line 282 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__closure_arg,
#line 282 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
#line 282 "write_deps_file.m"
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
#line 282 "write_deps_file.m"
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
#line 282 "write_deps_file.m"
{
#line 282 "write_deps_file.m"
  {
#line 282 "write_deps_file.m"
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

#line 282 "write_deps_file.m"
    {
#line 282 "write_deps_file.m"
      parse_tree__write_deps_file__IntroducedFrom__pred__write_dependency_file__282__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
#line 282 "write_deps_file.m"
      return;
    }
#line 282 "write_deps_file.m"
  }
#line 282 "write_deps_file.m"
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
    MR_String parse_tree__write_deps_file__V_173_173;
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
      parse_tree__write_deps_file__V_173_173 = mercury__dir__dirname_1_f_0(parse_tree__write_deps_file__DependencyFileName_41);
    }
#line 160 "write_deps_file.m"
    {
#line 160 "write_deps_file.m"
      mercury__io__make_temp_5_p_0(parse_tree__write_deps_file__V_173_173, (MR_String) "tmp_d", &parse_tree__write_deps_file__TmpDependencyFileName_43);
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
        MR_Word parse_tree__write_deps_file__V_780_780;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_782_782;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_783_783;
#line 168 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_785_785;

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
          parse_tree__write_deps_file__V_785_785 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 174 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_785_785, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_46));
#line 174 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_785_785, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 174 "write_deps_file.m"
        }
#line 173 "write_deps_file.m"
        {
#line 173 "write_deps_file.m"
          parse_tree__write_deps_file__V_783_783 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_783_783, 0) = ((MR_Box) ((MR_String) "\' for output: "));
#line 173 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_783_783, 1) = ((MR_Box) (parse_tree__write_deps_file__V_785_785));
#line 173 "write_deps_file.m"
        }
#line 173 "write_deps_file.m"
        {
#line 173 "write_deps_file.m"
          parse_tree__write_deps_file__V_782_782 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_782_782, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpDependencyFileName_43));
#line 173 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_782_782, 1) = ((MR_Box) (parse_tree__write_deps_file__V_783_783));
#line 173 "write_deps_file.m"
        }
#line 172 "write_deps_file.m"
        {
#line 172 "write_deps_file.m"
          parse_tree__write_deps_file__V_780_780 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 172 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_780_780, 0) = ((MR_Box) ((MR_String) "error opening temporary file \140"));
#line 172 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_780_780, 1) = ((MR_Box) (parse_tree__write_deps_file__V_782_782));
#line 172 "write_deps_file.m"
        }
#line 172 "write_deps_file.m"
        {
#line 172 "write_deps_file.m"
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_780_780, &parse_tree__write_deps_file__Message_47);
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
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_810_810 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_811_811;
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
        MR_String parse_tree__write_deps_file__ObjFileName_64;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__JavaDateFileName_65;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__PicObjFileName_66;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Int0FileName_67;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ForeignIncludeFiles_73;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__UseOptFiles_76;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Intermod_77;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__IntermodDirs_78;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__HighLevelCode_85;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__CompilationTarget_86;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__CFileName_87;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__HeaderFileName_88;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__HeaderFileName2_89;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__JavaFileName_90;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ModuleDepFileName_91;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__DateFileName_92;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Date0FileName_93;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__HaveMap_94;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ModuleArg_95;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Target_96;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__ClassFileName_97;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__BeamFileName_98;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ForeignImportModules_100;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ForeignImports_142;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__ForeignImportedModuleNames_145;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__IntFileName_150;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Int2FileName_151;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Int3FileName_152;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__OptFileName_153;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__TransOptFileName_154;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__Date3FileName_155;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__UseSubdirs_156;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__Result3_157;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_258_258;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_261_261;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_262_262;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_264_264;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_265_265;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_267_267;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_268_268;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_270_270;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_271_271;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_273_273;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_275_275;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_278_278;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_431_431;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_434_434;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_435_435;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_437_437;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_438_438;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_440_440;
#line 177 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_447_447;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_450_450;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_453_453;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_455_455;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_456_456;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_458_458;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_459_459;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_461_461;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_463_463;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_464_464;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_466_466;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_478_478;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_481_481;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_482_482;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_484_484;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_499_499;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_547_547;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_588_588;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_591_591;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_592_592;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_594_594;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_595_595;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_597_597;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_599_599;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_600_600;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_602_602;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_603_603;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_605_605;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_607_607;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_608_608;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_610_610;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_611_611;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_613_613;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_615_615;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_616_616;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_618_618;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_619_619;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_621_621;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_623_623;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_624_624;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_626_626;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_627_627;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_629_629;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_631_631;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_632_632;
#line 177 "write_deps_file.m"
        MR_Word parse_tree__write_deps_file__V_634_634;
#line 234 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__SourceFileBase_60;
#line 677 "write_deps_file.m"
        MR_String parse_tree__write_deps_file__V_834_834;

#line 178 "write_deps_file.m"
        {
#line 178 "write_deps_file.m"
          mercury__set__union_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, parse_tree__write_deps_file__IntDeps_17, parse_tree__write_deps_file__ImpDeps_18, &parse_tree__write_deps_file__LongDeps0_49);
        }
#line 180 "write_deps_file.m"
        {
#line 180 "write_deps_file.m"
          mercury__set__delete_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, ((MR_Box) (parse_tree__write_deps_file__ModuleName_14)), parse_tree__write_deps_file__LongDeps0_49, &parse_tree__write_deps_file__LongDeps_51);
        }
#line 181 "write_deps_file.m"
        {
#line 181 "write_deps_file.m"
          mercury__set__difference_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, parse_tree__write_deps_file__IndirectDeps_19, parse_tree__write_deps_file__LongDeps_51, &parse_tree__write_deps_file__ShortDeps1_52);
        }
#line 182 "write_deps_file.m"
        {
#line 182 "write_deps_file.m"
          mercury__set__delete_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, ((MR_Box) (parse_tree__write_deps_file__ModuleName_14)), parse_tree__write_deps_file__ShortDeps1_52, &parse_tree__write_deps_file__ShortDeps_53);
        }
#line 13646 "parse_tree.write_deps_file.c"
        parse_tree__write_deps_file__TypeCtorInfo_811_811 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 183 "write_deps_file.m"
        {
#line 183 "write_deps_file.m"
          mercury__list__sort_and_remove_dups_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_811_811, parse_tree__write_deps_file__FactDeps0_23, &parse_tree__write_deps_file__FactDeps_54);
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
            MR_Word parse_tree__write_deps_file__V_183_183;
#line 186 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_184_184;

#line 187 "write_deps_file.m"
            {
#line 187 "write_deps_file.m"
              parse_tree__write_deps_file__V_183_183 = mercury__set__list_to_set_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, parse_tree__write_deps_file__TransOptDeps0_55);
            }
#line 187 "write_deps_file.m"
            {
#line 187 "write_deps_file.m"
              mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, parse_tree__write_deps_file__V_183_183, parse_tree__write_deps_file__LongDeps_51, &parse_tree__write_deps_file__TransOptDateDeps_56);
            }
#line 192 "write_deps_file.m"
            {
#line 192 "write_deps_file.m"
              parse_tree__write_deps_file__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_42));
#line 192 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_184_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[94])));
#line 192 "write_deps_file.m"
            }
#line 192 "write_deps_file.m"
            {
#line 192 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_184_184);
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
            MR_Word parse_tree__write_deps_file__V_191_191;
#line 200 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_194_194;

#line 202 "write_deps_file.m"
            {
#line 202 "write_deps_file.m"
              parse_tree__write_deps_file__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_194_194, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 202 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_194_194, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[95])));
#line 202 "write_deps_file.m"
            }
#line 202 "write_deps_file.m"
            {
#line 202 "write_deps_file.m"
              parse_tree__write_deps_file__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 202 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 202 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_191_191, 1) = ((MR_Box) (parse_tree__write_deps_file__V_194_194));
#line 202 "write_deps_file.m"
            }
#line 201 "write_deps_file.m"
            {
#line 201 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_191_191);
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
                  MR_Word parse_tree__write_deps_file__V_202_202;
#line 217 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_209_209;
#line 217 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_212_212;

#line 219 "write_deps_file.m"
                  {
#line 219 "write_deps_file.m"
                    parse_tree__write_deps_file__V_202_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 219 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_202_202, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 219 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_202_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[96])));
#line 219 "write_deps_file.m"
                  }
#line 218 "write_deps_file.m"
                  {
#line 218 "write_deps_file.m"
                    mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_202_202);
                  }
#line 220 "write_deps_file.m"
                  {
#line 220 "write_deps_file.m"
                    parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".c", parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__FactDeps_54);
                  }
#line 222 "write_deps_file.m"
                  {
#line 222 "write_deps_file.m"
                    parse_tree__write_deps_file__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_212_212, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 222 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_212_212, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[97])));
#line 222 "write_deps_file.m"
                  }
#line 222 "write_deps_file.m"
                  {
#line 222 "write_deps_file.m"
                    parse_tree__write_deps_file__V_209_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 222 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_209_209, 1) = ((MR_Box) (parse_tree__write_deps_file__V_212_212));
#line 222 "write_deps_file.m"
                  }
#line 222 "write_deps_file.m"
                  {
#line 222 "write_deps_file.m"
                    mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_209_209);
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
                  MR_Word parse_tree__write_deps_file__V_219_219;
#line 207 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_222_222;
#line 207 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_223_223;
#line 207 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_225_225;
#line 207 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_226_226;
#line 207 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_228_228;
#line 207 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_229_229;
#line 207 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_231_231;

#line 213 "write_deps_file.m"
                  {
#line 213 "write_deps_file.m"
                    parse_tree__write_deps_file__V_231_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 213 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_231_231, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[98])));
#line 213 "write_deps_file.m"
                  }
#line 213 "write_deps_file.m"
                  {
#line 213 "write_deps_file.m"
                    parse_tree__write_deps_file__V_229_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 213 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 0) = ((MR_Box) ((MR_String) ".fact_tables.cs = \044("));
#line 213 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_229_229, 1) = ((MR_Box) (parse_tree__write_deps_file__V_231_231));
#line 213 "write_deps_file.m"
                  }
#line 212 "write_deps_file.m"
                  {
#line 212 "write_deps_file.m"
                    parse_tree__write_deps_file__V_228_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 212 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_228_228, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 212 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_228_228, 1) = ((MR_Box) (parse_tree__write_deps_file__V_229_229));
#line 212 "write_deps_file.m"
                  }
#line 211 "write_deps_file.m"
                  {
#line 211 "write_deps_file.m"
                    parse_tree__write_deps_file__V_226_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 211 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 0) = ((MR_Box) ((MR_String) ".fact_tables:%=\044(os_subdir)%.\044O)\n\n"));
#line 211 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_226_226, 1) = ((MR_Box) (parse_tree__write_deps_file__V_228_228));
#line 211 "write_deps_file.m"
                  }
#line 210 "write_deps_file.m"
                  {
#line 210 "write_deps_file.m"
                    parse_tree__write_deps_file__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 210 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_225_225, 1) = ((MR_Box) (parse_tree__write_deps_file__V_226_226));
#line 210 "write_deps_file.m"
                  }
#line 210 "write_deps_file.m"
                  {
#line 210 "write_deps_file.m"
                    parse_tree__write_deps_file__V_223_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 210 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_223_223, 0) = ((MR_Box) ((MR_String) ".fact_tables.os = \044("));
#line 210 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_223_223, 1) = ((MR_Box) (parse_tree__write_deps_file__V_225_225));
#line 210 "write_deps_file.m"
                  }
#line 209 "write_deps_file.m"
                  {
#line 209 "write_deps_file.m"
                    parse_tree__write_deps_file__V_222_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 209 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_222_222, 1) = ((MR_Box) (parse_tree__write_deps_file__V_223_223));
#line 209 "write_deps_file.m"
                  }
#line 209 "write_deps_file.m"
                  {
#line 209 "write_deps_file.m"
                    parse_tree__write_deps_file__V_219_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 209 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 209 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_219_219, 1) = ((MR_Box) (parse_tree__write_deps_file__V_222_222));
#line 209 "write_deps_file.m"
                  }
#line 208 "write_deps_file.m"
                  {
#line 208 "write_deps_file.m"
                    mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_219_219);
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
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".\044O", (MR_Integer) 1, &parse_tree__write_deps_file__ObjFileName_64);
        }
#line 243 "write_deps_file.m"
        {
#line 243 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".java_date", (MR_Integer) 1, &parse_tree__write_deps_file__JavaDateFileName_65);
        }
#line 247 "write_deps_file.m"
        {
#line 247 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".pic_o", (MR_Integer) 1, &parse_tree__write_deps_file__PicObjFileName_66);
        }
#line 249 "write_deps_file.m"
        {
#line 249 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int0", (MR_Integer) 1, &parse_tree__write_deps_file__Int0FileName_67);
        }
#line 257 "write_deps_file.m"
        {
#line 257 "write_deps_file.m"
          parse_tree__write_deps_file__V_273_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_65));
#line 257 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_273_273, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 257 "write_deps_file.m"
        }
#line 255 "write_deps_file.m"
        {
#line 255 "write_deps_file.m"
          parse_tree__write_deps_file__V_271_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 0) = ((MR_Box) ((MR_String) " "));
#line 255 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_271_271, 1) = ((MR_Box) (parse_tree__write_deps_file__V_273_273));
#line 255 "write_deps_file.m"
        }
#line 255 "write_deps_file.m"
        {
#line 255 "write_deps_file.m"
          parse_tree__write_deps_file__V_270_270 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_270_270, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_63));
#line 255 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_270_270, 1) = ((MR_Box) (parse_tree__write_deps_file__V_271_271));
#line 255 "write_deps_file.m"
        }
#line 254 "write_deps_file.m"
        {
#line 254 "write_deps_file.m"
          parse_tree__write_deps_file__V_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 0) = ((MR_Box) ((MR_String) " "));
#line 254 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_268_268, 1) = ((MR_Box) (parse_tree__write_deps_file__V_270_270));
#line 254 "write_deps_file.m"
        }
#line 254 "write_deps_file.m"
        {
#line 254 "write_deps_file.m"
          parse_tree__write_deps_file__V_267_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_267_267, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrFileName_61));
#line 254 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_267_267, 1) = ((MR_Box) (parse_tree__write_deps_file__V_268_268));
#line 254 "write_deps_file.m"
        }
#line 253 "write_deps_file.m"
        {
#line 253 "write_deps_file.m"
          parse_tree__write_deps_file__V_265_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 0) = ((MR_Box) ((MR_String) " "));
#line 253 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_265_265, 1) = ((MR_Box) (parse_tree__write_deps_file__V_267_267));
#line 253 "write_deps_file.m"
        }
#line 253 "write_deps_file.m"
        {
#line 253 "write_deps_file.m"
          parse_tree__write_deps_file__V_264_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_42));
#line 253 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_264_264, 1) = ((MR_Box) (parse_tree__write_deps_file__V_265_265));
#line 253 "write_deps_file.m"
        }
#line 252 "write_deps_file.m"
        {
#line 252 "write_deps_file.m"
          parse_tree__write_deps_file__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 0) = ((MR_Box) ((MR_String) " "));
#line 252 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_262_262, 1) = ((MR_Box) (parse_tree__write_deps_file__V_264_264));
#line 252 "write_deps_file.m"
        }
#line 252 "write_deps_file.m"
        {
#line 252 "write_deps_file.m"
          parse_tree__write_deps_file__V_261_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_261_261, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_62));
#line 252 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_261_261, 1) = ((MR_Box) (parse_tree__write_deps_file__V_262_262));
#line 252 "write_deps_file.m"
        }
#line 251 "write_deps_file.m"
        {
#line 251 "write_deps_file.m"
          parse_tree__write_deps_file__V_258_258 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_258_258, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 251 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_258_258, 1) = ((MR_Box) (parse_tree__write_deps_file__V_261_261));
#line 251 "write_deps_file.m"
        }
#line 251 "write_deps_file.m"
        {
#line 251 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_258_258);
        }
#line 258 "write_deps_file.m"
        {
#line 258 "write_deps_file.m"
          parse_tree__write_deps_file__V_278_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 258 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_278_278, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 258 "write_deps_file.m"
        }
#line 258 "write_deps_file.m"
        {
#line 258 "write_deps_file.m"
          parse_tree__write_deps_file__V_275_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 0) = ((MR_Box) ((MR_String) " : "));
#line 258 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_275_275, 1) = ((MR_Box) (parse_tree__write_deps_file__V_278_278));
#line 258 "write_deps_file.m"
        }
#line 258 "write_deps_file.m"
        {
#line 258 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_275_275);
        }
#line 261 "write_deps_file.m"
        {
#line 261 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, parse_tree__write_deps_file__InclDeps_21);
        }
#line 263 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 263 "write_deps_file.m"
          {
#line 263 "write_deps_file.m"
          }
#line 263 "write_deps_file.m"
        else
#line 264 "write_deps_file.m"
          {
#line 264 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_280_280;
#line 264 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_283_283;

#line 264 "write_deps_file.m"
            {
#line 264 "write_deps_file.m"
              parse_tree__write_deps_file__V_283_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0FileName_67));
#line 264 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_283_283, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 264 "write_deps_file.m"
            }
#line 264 "write_deps_file.m"
            {
#line 264 "write_deps_file.m"
              parse_tree__write_deps_file__V_280_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_280_280, 0) = ((MR_Box) ((MR_String) " "));
#line 264 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_280_280, 1) = ((MR_Box) (parse_tree__write_deps_file__V_283_283));
#line 264 "write_deps_file.m"
            }
#line 264 "write_deps_file.m"
            {
#line 264 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_280_280);
            }
#line 264 "write_deps_file.m"
          }
#line 266 "write_deps_file.m"
        {
#line 266 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int0", parse_tree__write_deps_file__ParentDeps_16);
        }
#line 267 "write_deps_file.m"
        {
#line 267 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int", parse_tree__write_deps_file__LongDeps_51);
        }
#line 268 "write_deps_file.m"
        {
#line 268 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int2", parse_tree__write_deps_file__ShortDeps_53);
        }
#line 279 "write_deps_file.m"
        {
#line 279 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, parse_tree__write_deps_file__NestedDeps_22);
        }
#line 281 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 281 "write_deps_file.m"
          {
#line 281 "write_deps_file.m"
          }
#line 281 "write_deps_file.m"
        else
#line 288 "write_deps_file.m"
          {
#line 288 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Write_69;
#line 289 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_316_316;

#line 282 "write_deps_file.m"
            {
#line 282 "write_deps_file.m"
              parse_tree__write_deps_file__Write_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 282 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_69, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[0]));
#line 282 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_69, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_1));
#line 282 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 282 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_69, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 282 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_69, 4) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 282 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_69, 5) = ((MR_Box) (parse_tree__write_deps_file__NestedDeps_22));
#line 282 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_69, 6) = ((MR_Box) (parse_tree__write_deps_file__DepStream_48));
#line 282 "write_deps_file.m"
            }
#line 289 "write_deps_file.m"
            {
#line 289 "write_deps_file.m"
              mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_811_811, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Write_69, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[9]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_316_316);
            }
#line 288 "write_deps_file.m"
          }
#line 292 "write_deps_file.m"
        {
#line 292 "write_deps_file.m"
          parse_tree__write_deps_file__ForeignIncludeFiles_73 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_include_file_info_0, parse_tree__write_deps_file__ForeignIncludeFilesCord_25);
        }
#line 295 "write_deps_file.m"
        {
#line 295 "write_deps_file.m"
          parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__SourceFileName_12, parse_tree__write_deps_file__ForeignIncludeFiles_73);
        }
#line 308 "write_deps_file.m"
        if ((parse_tree__write_deps_file__FactDeps_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 309 "write_deps_file.m"
          {
#line 309 "write_deps_file.m"
          }
#line 308 "write_deps_file.m"
        else
#line 299 "write_deps_file.m"
          {
#line 299 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_318_318;
#line 299 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_321_321;
#line 299 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_322_322;
#line 299 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_324_324;
#line 299 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_326_326;
#line 299 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_327_327;
#line 299 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_329_329;
#line 299 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_330_330;
#line 299 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_332_332;
#line 299 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_333_333;
#line 299 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_335_335;
#line 299 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_337_337;
#line 299 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_338_338;
#line 299 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_340_340;

#line 306 "write_deps_file.m"
            {
#line 306 "write_deps_file.m"
              parse_tree__write_deps_file__V_340_340 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 306 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_340_340, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_64));
#line 306 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_340_340, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[92])));
#line 306 "write_deps_file.m"
            }
#line 305 "write_deps_file.m"
            {
#line 305 "write_deps_file.m"
              parse_tree__write_deps_file__V_338_338 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_338_338, 0) = ((MR_Box) ((MR_String) ".fact_tables.cs) : "));
#line 305 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_338_338, 1) = ((MR_Box) (parse_tree__write_deps_file__V_340_340));
#line 305 "write_deps_file.m"
            }
#line 305 "write_deps_file.m"
            {
#line 305 "write_deps_file.m"
              parse_tree__write_deps_file__V_337_337 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_337_337, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 305 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_337_337, 1) = ((MR_Box) (parse_tree__write_deps_file__V_338_338));
#line 305 "write_deps_file.m"
            }
#line 305 "write_deps_file.m"
            {
#line 305 "write_deps_file.m"
              parse_tree__write_deps_file__V_335_335 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_335_335, 0) = ((MR_Box) ((MR_String) "\044("));
#line 305 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_335_335, 1) = ((MR_Box) (parse_tree__write_deps_file__V_337_337));
#line 305 "write_deps_file.m"
            }
#line 304 "write_deps_file.m"
            {
#line 304 "write_deps_file.m"
              parse_tree__write_deps_file__V_333_333 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_333_333, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 304 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_333_333, 1) = ((MR_Box) (parse_tree__write_deps_file__V_335_335));
#line 304 "write_deps_file.m"
            }
#line 304 "write_deps_file.m"
            {
#line 304 "write_deps_file.m"
              parse_tree__write_deps_file__V_332_332 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_332_332, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 304 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_332_332, 1) = ((MR_Box) (parse_tree__write_deps_file__V_333_333));
#line 304 "write_deps_file.m"
            }
#line 303 "write_deps_file.m"
            {
#line 303 "write_deps_file.m"
              parse_tree__write_deps_file__V_330_330 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_330_330, 0) = ((MR_Box) ((MR_String) ".fact_tables) "));
#line 303 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_330_330, 1) = ((MR_Box) (parse_tree__write_deps_file__V_332_332));
#line 303 "write_deps_file.m"
            }
#line 303 "write_deps_file.m"
            {
#line 303 "write_deps_file.m"
              parse_tree__write_deps_file__V_329_329 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_329_329, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 303 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_329_329, 1) = ((MR_Box) (parse_tree__write_deps_file__V_330_330));
#line 303 "write_deps_file.m"
            }
#line 302 "write_deps_file.m"
            {
#line 302 "write_deps_file.m"
              parse_tree__write_deps_file__V_327_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_327_327, 0) = ((MR_Box) ((MR_String) ".fact_tables.os) : \044("));
#line 302 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_327_327, 1) = ((MR_Box) (parse_tree__write_deps_file__V_329_329));
#line 302 "write_deps_file.m"
            }
#line 302 "write_deps_file.m"
            {
#line 302 "write_deps_file.m"
              parse_tree__write_deps_file__V_326_326 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_326_326, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 302 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_326_326, 1) = ((MR_Box) (parse_tree__write_deps_file__V_327_327));
#line 302 "write_deps_file.m"
            }
#line 302 "write_deps_file.m"
            {
#line 302 "write_deps_file.m"
              parse_tree__write_deps_file__V_324_324 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_324_324, 0) = ((MR_Box) ((MR_String) "\044("));
#line 302 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_324_324, 1) = ((MR_Box) (parse_tree__write_deps_file__V_326_326));
#line 302 "write_deps_file.m"
            }
#line 301 "write_deps_file.m"
            {
#line 301 "write_deps_file.m"
              parse_tree__write_deps_file__V_322_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_322_322, 0) = ((MR_Box) ((MR_String) ".fact_tables)\n\n"));
#line 301 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_322_322, 1) = ((MR_Box) (parse_tree__write_deps_file__V_324_324));
#line 301 "write_deps_file.m"
            }
#line 301 "write_deps_file.m"
            {
#line 301 "write_deps_file.m"
              parse_tree__write_deps_file__V_321_321 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_321_321, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_40));
#line 301 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_321_321, 1) = ((MR_Box) (parse_tree__write_deps_file__V_322_322));
#line 301 "write_deps_file.m"
            }
#line 301 "write_deps_file.m"
            {
#line 301 "write_deps_file.m"
              parse_tree__write_deps_file__V_318_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 301 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_318_318, 0) = ((MR_Box) ((MR_String) " \\\n\t\044("));
#line 301 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_318_318, 1) = ((MR_Box) (parse_tree__write_deps_file__V_321_321));
#line 301 "write_deps_file.m"
            }
#line 300 "write_deps_file.m"
            {
#line 300 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_318_318);
            }
#line 299 "write_deps_file.m"
          }
#line 312 "write_deps_file.m"
        {
#line 312 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 322, &parse_tree__write_deps_file__UseOptFiles_76);
        }
#line 313 "write_deps_file.m"
        {
#line 313 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 320, &parse_tree__write_deps_file__Intermod_77);
        }
#line 315 "write_deps_file.m"
        {
#line 315 "write_deps_file.m"
          libs__globals__lookup_accumulating_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 635, &parse_tree__write_deps_file__IntermodDirs_78);
        }
#line 326 "write_deps_file.m"
#line 326 "write_deps_file.m"
        switch (parse_tree__write_deps_file__Intermod_77) {
#line 326 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 326 "write_deps_file.m"
          case (MR_Integer) 0:
#line 327 "write_deps_file.m"
            {
#line 327 "write_deps_file.m"
            }
#line 326 "write_deps_file.m"
            break;
#line 326 "write_deps_file.m"
          case (MR_Integer) 1:
#line 322 "write_deps_file.m"
            {
#line 322 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_347_347;
#line 322 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_350_350;
#line 322 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_355_355;

#line 323 "write_deps_file.m"
              {
#line 323 "write_deps_file.m"
                parse_tree__write_deps_file__V_350_350 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_350_350, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_64));
#line 323 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_350_350, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[99])));
#line 323 "write_deps_file.m"
              }
#line 323 "write_deps_file.m"
              {
#line 323 "write_deps_file.m"
                parse_tree__write_deps_file__V_347_347 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_347_347, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 323 "write_deps_file.m"
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_347_347, 1) = ((MR_Box) (parse_tree__write_deps_file__V_350_350));
#line 323 "write_deps_file.m"
              }
#line 323 "write_deps_file.m"
              {
#line 323 "write_deps_file.m"
                mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_347_347);
              }
#line 325 "write_deps_file.m"
              {
#line 325 "write_deps_file.m"
                parse_tree__write_deps_file__V_355_355 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, parse_tree__write_deps_file__AllDeps_9);
              }
#line 324 "write_deps_file.m"
              {
#line 324 "write_deps_file.m"
                parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".mh", parse_tree__write_deps_file__V_355_355);
              }
#line 322 "write_deps_file.m"
            }
#line 326 "write_deps_file.m"
            break;
#line 326 "write_deps_file.m"
        }
#line 330 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Intermod_77 == (MR_Integer) 1);
#line 331 "write_deps_file.m"
        if (!(parse_tree__write_deps_file__succeeded))
#line 331 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__UseOptFiles_76 == (MR_Integer) 1);
#line 392 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 340 "write_deps_file.m"
          {
#line 340 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__TransOpt_79;
#line 340 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__UseTransOpt_80;
#line 340 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_357_357;
#line 340 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_360_360;
#line 340 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_361_361;
#line 340 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_363_363;
#line 340 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_364_364;
#line 340 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_366_366;
#line 340 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_367_367;
#line 340 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_369_369;

#line 339 "write_deps_file.m"
            {
#line 339 "write_deps_file.m"
              parse_tree__write_deps_file__V_369_369 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 339 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_369_369, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_65));
#line 339 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_369_369, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[99])));
#line 339 "write_deps_file.m"
            }
#line 338 "write_deps_file.m"
            {
#line 338 "write_deps_file.m"
              parse_tree__write_deps_file__V_367_367 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_367_367, 0) = ((MR_Box) ((MR_String) " "));
#line 338 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_367_367, 1) = ((MR_Box) (parse_tree__write_deps_file__V_369_369));
#line 338 "write_deps_file.m"
            }
#line 338 "write_deps_file.m"
            {
#line 338 "write_deps_file.m"
              parse_tree__write_deps_file__V_366_366 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_366_366, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_63));
#line 338 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_366_366, 1) = ((MR_Box) (parse_tree__write_deps_file__V_367_367));
#line 338 "write_deps_file.m"
            }
#line 337 "write_deps_file.m"
            {
#line 337 "write_deps_file.m"
              parse_tree__write_deps_file__V_364_364 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_364_364, 0) = ((MR_Box) ((MR_String) " "));
#line 337 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_364_364, 1) = ((MR_Box) (parse_tree__write_deps_file__V_366_366));
#line 337 "write_deps_file.m"
            }
#line 337 "write_deps_file.m"
            {
#line 337 "write_deps_file.m"
              parse_tree__write_deps_file__V_363_363 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_363_363, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrFileName_61));
#line 337 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_363_363, 1) = ((MR_Box) (parse_tree__write_deps_file__V_364_364));
#line 337 "write_deps_file.m"
            }
#line 336 "write_deps_file.m"
            {
#line 336 "write_deps_file.m"
              parse_tree__write_deps_file__V_361_361 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_361_361, 0) = ((MR_Box) ((MR_String) " "));
#line 336 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_361_361, 1) = ((MR_Box) (parse_tree__write_deps_file__V_363_363));
#line 336 "write_deps_file.m"
            }
#line 336 "write_deps_file.m"
            {
#line 336 "write_deps_file.m"
              parse_tree__write_deps_file__V_360_360 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_360_360, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_42));
#line 336 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_360_360, 1) = ((MR_Box) (parse_tree__write_deps_file__V_361_361));
#line 336 "write_deps_file.m"
            }
#line 335 "write_deps_file.m"
            {
#line 335 "write_deps_file.m"
              parse_tree__write_deps_file__V_357_357 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_357_357, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 335 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_357_357, 1) = ((MR_Box) (parse_tree__write_deps_file__V_360_360));
#line 335 "write_deps_file.m"
            }
#line 334 "write_deps_file.m"
            {
#line 334 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_357_357);
            }
#line 352 "write_deps_file.m"
            {
#line 352 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 324, &parse_tree__write_deps_file__TransOpt_79);
            }
#line 354 "write_deps_file.m"
            {
#line 354 "write_deps_file.m"
              libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 323, &parse_tree__write_deps_file__UseTransOpt_80);
            }
#line 358 "write_deps_file.m"
            parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__TransOpt_79 == (MR_Integer) 1);
#line 359 "write_deps_file.m"
            if (!(parse_tree__write_deps_file__succeeded))
#line 359 "write_deps_file.m"
              parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__UseTransOpt_80 == (MR_Integer) 1);
#line 381 "write_deps_file.m"
            if (parse_tree__write_deps_file__succeeded)
#line 362 "write_deps_file.m"
              {
#line 362 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__BuildOptFiles_81;
#line 362 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptDeps_82;
#line 362 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__TransOptDeps_83;
#line 362 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptInt0Deps_84;
#line 362 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_375_375;
#line 362 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_377_377;
#line 362 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_378_378;
#line 362 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_384_384;

#line 362 "write_deps_file.m"
                {
#line 362 "write_deps_file.m"
                  mercury__bool__not_2_p_0(parse_tree__write_deps_file__UseTransOpt_80, &parse_tree__write_deps_file__BuildOptFiles_81);
                }
#line 364 "write_deps_file.m"
                {
#line 364 "write_deps_file.m"
                  parse_tree__write_deps_file__V_377_377 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, parse_tree__write_deps_file__LongDeps_51);
                }
#line 364 "write_deps_file.m"
                {
#line 364 "write_deps_file.m"
                  parse_tree__write_deps_file__V_375_375 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 364 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_375_375, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 364 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_375_375, 1) = ((MR_Box) (parse_tree__write_deps_file__V_377_377));
#line 364 "write_deps_file.m"
                }
#line 363 "write_deps_file.m"
                {
#line 363 "write_deps_file.m"
                  parse_tree__write_deps_file__get_both_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__BuildOptFiles_81, parse_tree__write_deps_file__IntermodDirs_78, parse_tree__write_deps_file__V_375_375, &parse_tree__write_deps_file__OptDeps_82, &parse_tree__write_deps_file__TransOptDeps_83);
                }
#line 367 "write_deps_file.m"
                {
#line 367 "write_deps_file.m"
                  parse_tree__write_deps_file__V_378_378 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[4], parse_tree__write_deps_file__OptDeps_82);
                }
#line 366 "write_deps_file.m"
                {
#line 366 "write_deps_file.m"
                  parse_tree__write_deps_file__OptInt0Deps_84 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, parse_tree__write_deps_file__V_378_378);
                }
#line 368 "write_deps_file.m"
                {
#line 368 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".opt", parse_tree__write_deps_file__OptDeps_82);
                }
#line 370 "write_deps_file.m"
                {
#line 370 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int0", parse_tree__write_deps_file__OptInt0Deps_84);
                }
#line 374 "write_deps_file.m"
                {
#line 374 "write_deps_file.m"
                  parse_tree__write_deps_file__V_384_384 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 374 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_384_384, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 374 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_384_384, 1) = ((MR_Box) (parse_tree__write_deps_file__V_363_363));
#line 374 "write_deps_file.m"
                }
#line 373 "write_deps_file.m"
                {
#line 373 "write_deps_file.m"
                  mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_384_384);
                }
#line 379 "write_deps_file.m"
                {
#line 379 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".trans_opt", parse_tree__write_deps_file__TransOptDeps_83);
                }
#line 362 "write_deps_file.m"
              }
#line 381 "write_deps_file.m"
            else
#line 382 "write_deps_file.m"
              {
#line 382 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_400_400;
#line 382 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_402_402;
#line 382 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_403_403;
#line 382 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__BuildOptFiles_791;
#line 382 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptDeps_792;
#line 382 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__OptInt0Deps_793;

#line 382 "write_deps_file.m"
                {
#line 382 "write_deps_file.m"
                  mercury__bool__not_2_p_0(parse_tree__write_deps_file__UseOptFiles_76, &parse_tree__write_deps_file__BuildOptFiles_791);
                }
#line 384 "write_deps_file.m"
                {
#line 384 "write_deps_file.m"
                  parse_tree__write_deps_file__V_402_402 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, parse_tree__write_deps_file__LongDeps_51);
                }
#line 384 "write_deps_file.m"
                {
#line 384 "write_deps_file.m"
                  parse_tree__write_deps_file__V_400_400 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_400_400, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 384 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_400_400, 1) = ((MR_Box) (parse_tree__write_deps_file__V_402_402));
#line 384 "write_deps_file.m"
                }
#line 383 "write_deps_file.m"
                {
#line 383 "write_deps_file.m"
                  parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__BuildOptFiles_791, parse_tree__write_deps_file__IntermodDirs_78, (MR_String) ".opt", parse_tree__write_deps_file__V_400_400, &parse_tree__write_deps_file__OptDeps_792);
                }
#line 386 "write_deps_file.m"
                {
#line 386 "write_deps_file.m"
                  parse_tree__write_deps_file__V_403_403 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[5], parse_tree__write_deps_file__OptDeps_792);
                }
#line 385 "write_deps_file.m"
                {
#line 385 "write_deps_file.m"
                  parse_tree__write_deps_file__OptInt0Deps_793 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, parse_tree__write_deps_file__V_403_403);
                }
#line 387 "write_deps_file.m"
                {
#line 387 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".opt", parse_tree__write_deps_file__OptDeps_792);
                }
#line 389 "write_deps_file.m"
                {
#line 389 "write_deps_file.m"
                  parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int0", parse_tree__write_deps_file__OptInt0Deps_793);
                }
#line 382 "write_deps_file.m"
              }
#line 340 "write_deps_file.m"
          }
#line 392 "write_deps_file.m"
        else
#line 392 "write_deps_file.m"
          {
#line 392 "write_deps_file.m"
          }
#line 396 "write_deps_file.m"
        {
#line 396 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 251, &parse_tree__write_deps_file__HighLevelCode_85);
        }
#line 397 "write_deps_file.m"
        {
#line 397 "write_deps_file.m"
          libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_7, &parse_tree__write_deps_file__CompilationTarget_86);
        }
#line 399 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__HighLevelCode_85 == (MR_Integer) 1);
#line 399 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 400 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__CompilationTarget_86 == (MR_Integer) 0);
#line 413 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 411 "write_deps_file.m"
          {
#line 411 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_410_410;
#line 411 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_413_413;
#line 411 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_414_414;
#line 411 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_416_416;

#line 410 "write_deps_file.m"
            {
#line 410 "write_deps_file.m"
              parse_tree__write_deps_file__V_416_416 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_416_416, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_64));
#line 410 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_416_416, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[94])));
#line 410 "write_deps_file.m"
            }
#line 409 "write_deps_file.m"
            {
#line 409 "write_deps_file.m"
              parse_tree__write_deps_file__V_414_414 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_414_414, 0) = ((MR_Box) ((MR_String) " "));
#line 409 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_414_414, 1) = ((MR_Box) (parse_tree__write_deps_file__V_416_416));
#line 409 "write_deps_file.m"
            }
#line 409 "write_deps_file.m"
            {
#line 409 "write_deps_file.m"
              parse_tree__write_deps_file__V_413_413 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_413_413, 0) = ((MR_Box) (parse_tree__write_deps_file__PicObjFileName_66));
#line 409 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_413_413, 1) = ((MR_Box) (parse_tree__write_deps_file__V_414_414));
#line 409 "write_deps_file.m"
            }
#line 408 "write_deps_file.m"
            {
#line 408 "write_deps_file.m"
              parse_tree__write_deps_file__V_410_410 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_410_410, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 408 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_410_410, 1) = ((MR_Box) (parse_tree__write_deps_file__V_413_413));
#line 408 "write_deps_file.m"
            }
#line 407 "write_deps_file.m"
            {
#line 407 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_410_410);
            }
#line 412 "write_deps_file.m"
            {
#line 412 "write_deps_file.m"
              parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".mih", parse_tree__write_deps_file__AllDeps_9);
            }
#line 411 "write_deps_file.m"
          }
#line 413 "write_deps_file.m"
        else
#line 413 "write_deps_file.m"
          {
#line 413 "write_deps_file.m"
          }
#line 426 "write_deps_file.m"
        {
#line 426 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".c", (MR_Integer) 1, &parse_tree__write_deps_file__CFileName_87);
        }
#line 428 "write_deps_file.m"
        {
#line 428 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".mh", (MR_Integer) 1, &parse_tree__write_deps_file__HeaderFileName_88);
        }
#line 430 "write_deps_file.m"
        {
#line 430 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".mih", (MR_Integer) 1, &parse_tree__write_deps_file__HeaderFileName2_89);
        }
#line 434 "write_deps_file.m"
        {
#line 434 "write_deps_file.m"
          parse_tree__write_deps_file__V_440_440 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_440_440, 0) = ((MR_Box) (parse_tree__write_deps_file__CFileName_87));
#line 434 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_440_440, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[92])));
#line 434 "write_deps_file.m"
        }
#line 434 "write_deps_file.m"
        {
#line 434 "write_deps_file.m"
          parse_tree__write_deps_file__V_438_438 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_438_438, 0) = ((MR_Box) ((MR_String) " : "));
#line 434 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_438_438, 1) = ((MR_Box) (parse_tree__write_deps_file__V_440_440));
#line 434 "write_deps_file.m"
        }
#line 434 "write_deps_file.m"
        {
#line 434 "write_deps_file.m"
          parse_tree__write_deps_file__V_437_437 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_437_437, 0) = ((MR_Box) (parse_tree__write_deps_file__HeaderFileName2_89));
#line 434 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_437_437, 1) = ((MR_Box) (parse_tree__write_deps_file__V_438_438));
#line 434 "write_deps_file.m"
        }
#line 434 "write_deps_file.m"
        {
#line 434 "write_deps_file.m"
          parse_tree__write_deps_file__V_435_435 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_435_435, 0) = ((MR_Box) ((MR_String) " "));
#line 434 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_435_435, 1) = ((MR_Box) (parse_tree__write_deps_file__V_437_437));
#line 434 "write_deps_file.m"
        }
#line 434 "write_deps_file.m"
        {
#line 434 "write_deps_file.m"
          parse_tree__write_deps_file__V_434_434 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_434_434, 0) = ((MR_Box) (parse_tree__write_deps_file__HeaderFileName_88));
#line 434 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_434_434, 1) = ((MR_Box) (parse_tree__write_deps_file__V_435_435));
#line 434 "write_deps_file.m"
        }
#line 433 "write_deps_file.m"
        {
#line 433 "write_deps_file.m"
          parse_tree__write_deps_file__V_431_431 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_431_431, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 433 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_431_431, 1) = ((MR_Box) (parse_tree__write_deps_file__V_434_434));
#line 433 "write_deps_file.m"
        }
#line 432 "write_deps_file.m"
        {
#line 432 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_431_431);
        }
#line 440 "write_deps_file.m"
        {
#line 440 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".java", (MR_Integer) 1, &parse_tree__write_deps_file__JavaFileName_90);
        }
#line 443 "write_deps_file.m"
        {
#line 443 "write_deps_file.m"
          parse_tree__write_deps_file__V_447_447 = make__make_module_dep_file_extension_0_f_0();
        }
#line 442 "write_deps_file.m"
        {
#line 442 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, parse_tree__write_deps_file__V_447_447, (MR_Integer) 1, &parse_tree__write_deps_file__ModuleDepFileName_91);
        }
#line 450 "write_deps_file.m"
        {
#line 450 "write_deps_file.m"
          parse_tree__write_deps_file__V_466_466 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 450 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_466_466, 0) = ((MR_Box) (parse_tree__write_deps_file__CFileName_87));
#line 450 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_466_466, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[11])));
#line 450 "write_deps_file.m"
        }
#line 450 "write_deps_file.m"
        {
#line 450 "write_deps_file.m"
          parse_tree__write_deps_file__V_464_464 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 450 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_464_464, 0) = ((MR_Box) ((MR_String) " : "));
#line 450 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_464_464, 1) = ((MR_Box) (parse_tree__write_deps_file__V_466_466));
#line 450 "write_deps_file.m"
        }
#line 450 "write_deps_file.m"
        {
#line 450 "write_deps_file.m"
          parse_tree__write_deps_file__V_463_463 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 450 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_463_463, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_91));
#line 450 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_463_463, 1) = ((MR_Box) (parse_tree__write_deps_file__V_464_464));
#line 450 "write_deps_file.m"
        }
#line 449 "write_deps_file.m"
        {
#line 449 "write_deps_file.m"
          parse_tree__write_deps_file__V_461_461 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_461_461, 0) = ((MR_Box) ((MR_String) "else\n"));
#line 449 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_461_461, 1) = ((MR_Box) (parse_tree__write_deps_file__V_463_463));
#line 449 "write_deps_file.m"
        }
#line 448 "write_deps_file.m"
        {
#line 448 "write_deps_file.m"
          parse_tree__write_deps_file__V_459_459 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_459_459, 0) = ((MR_Box) ((MR_String) "\n"));
#line 448 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_459_459, 1) = ((MR_Box) (parse_tree__write_deps_file__V_461_461));
#line 448 "write_deps_file.m"
        }
#line 448 "write_deps_file.m"
        {
#line 448 "write_deps_file.m"
          parse_tree__write_deps_file__V_458_458 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_458_458, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaFileName_90));
#line 448 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_458_458, 1) = ((MR_Box) (parse_tree__write_deps_file__V_459_459));
#line 448 "write_deps_file.m"
        }
#line 448 "write_deps_file.m"
        {
#line 448 "write_deps_file.m"
          parse_tree__write_deps_file__V_456_456 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_456_456, 0) = ((MR_Box) ((MR_String) " : "));
#line 448 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_456_456, 1) = ((MR_Box) (parse_tree__write_deps_file__V_458_458));
#line 448 "write_deps_file.m"
        }
#line 448 "write_deps_file.m"
        {
#line 448 "write_deps_file.m"
          parse_tree__write_deps_file__V_455_455 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_455_455, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_91));
#line 448 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_455_455, 1) = ((MR_Box) (parse_tree__write_deps_file__V_456_456));
#line 448 "write_deps_file.m"
        }
#line 447 "write_deps_file.m"
        {
#line 447 "write_deps_file.m"
          parse_tree__write_deps_file__V_453_453 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_453_453, 0) = ((MR_Box) ((MR_String) "ifeq (\044(findstring java,\044(GRADE)),java)\n"));
#line 447 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_453_453, 1) = ((MR_Box) (parse_tree__write_deps_file__V_455_455));
#line 447 "write_deps_file.m"
        }
#line 446 "write_deps_file.m"
        {
#line 446 "write_deps_file.m"
          parse_tree__write_deps_file__V_450_450 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_450_450, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 446 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_450_450, 1) = ((MR_Box) (parse_tree__write_deps_file__V_453_453));
#line 446 "write_deps_file.m"
        }
#line 445 "write_deps_file.m"
        {
#line 445 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_450_450);
        }
#line 467 "write_deps_file.m"
        {
#line 467 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".date", (MR_Integer) 1, &parse_tree__write_deps_file__DateFileName_92);
        }
#line 469 "write_deps_file.m"
        {
#line 469 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".date0", (MR_Integer) 1, &parse_tree__write_deps_file__Date0FileName_93);
        }
#line 473 "write_deps_file.m"
        {
#line 473 "write_deps_file.m"
          parse_tree__write_deps_file__V_484_484 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_484_484, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_93));
#line 473 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_484_484, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 473 "write_deps_file.m"
        }
#line 472 "write_deps_file.m"
        {
#line 472 "write_deps_file.m"
          parse_tree__write_deps_file__V_482_482 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_482_482, 0) = ((MR_Box) ((MR_String) " "));
#line 472 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_482_482, 1) = ((MR_Box) (parse_tree__write_deps_file__V_484_484));
#line 472 "write_deps_file.m"
        }
#line 472 "write_deps_file.m"
        {
#line 472 "write_deps_file.m"
          parse_tree__write_deps_file__V_481_481 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_481_481, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_92));
#line 472 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_481_481, 1) = ((MR_Box) (parse_tree__write_deps_file__V_482_482));
#line 472 "write_deps_file.m"
        }
#line 472 "write_deps_file.m"
        {
#line 472 "write_deps_file.m"
          parse_tree__write_deps_file__V_478_478 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_478_478, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 472 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_478_478, 1) = ((MR_Box) (parse_tree__write_deps_file__V_481_481));
#line 472 "write_deps_file.m"
        }
#line 471 "write_deps_file.m"
        {
#line 471 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_478_478);
        }
#line 474 "write_deps_file.m"
        {
#line 474 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".date", parse_tree__write_deps_file__ParentDeps_16);
        }
#line 475 "write_deps_file.m"
        {
#line 475 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_275_275);
        }
#line 476 "write_deps_file.m"
        {
#line 476 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int0", parse_tree__write_deps_file__ParentDeps_16);
        }
#line 477 "write_deps_file.m"
        {
#line 477 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int3", parse_tree__write_deps_file__LongDeps_51);
        }
#line 478 "write_deps_file.m"
        {
#line 478 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int3", parse_tree__write_deps_file__ShortDeps_53);
        }
#line 480 "write_deps_file.m"
        {
#line 480 "write_deps_file.m"
          parse_tree__write_deps_file__V_499_499 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_499_499, 0) = ((MR_Box) ((MR_String) "\n\n"));
#line 480 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_499_499, 1) = ((MR_Box) (parse_tree__write_deps_file__V_484_484));
#line 480 "write_deps_file.m"
        }
#line 480 "write_deps_file.m"
        {
#line 480 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_499_499);
        }
#line 481 "write_deps_file.m"
        {
#line 481 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".date0", parse_tree__write_deps_file__ParentDeps_16);
        }
#line 482 "write_deps_file.m"
        {
#line 482 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_275_275);
        }
#line 483 "write_deps_file.m"
        {
#line 483 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int3", parse_tree__write_deps_file__LongDeps_51);
        }
#line 484 "write_deps_file.m"
        {
#line 484 "write_deps_file.m"
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_48, (MR_String) ".int3", parse_tree__write_deps_file__ShortDeps_53);
        }
#line 485 "write_deps_file.m"
        {
#line 485 "write_deps_file.m"
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_48, (MR_String) "\n\n");
        }
#line 491 "write_deps_file.m"
        {
#line 491 "write_deps_file.m"
          parse_tree__source_file_map__have_source_file_map_3_p_0(&parse_tree__write_deps_file__HaveMap_94);
        }
#line 495 "write_deps_file.m"
#line 495 "write_deps_file.m"
        switch (parse_tree__write_deps_file__HaveMap_94) {
#line 495 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 495 "write_deps_file.m"
          case (MR_Integer) 0:
#line 497 "write_deps_file.m"
            parse_tree__write_deps_file__ModuleArg_95 = parse_tree__write_deps_file__SourceFileName_12;
#line 495 "write_deps_file.m"
            break;
#line 495 "write_deps_file.m"
          case (MR_Integer) 1:
#line 494 "write_deps_file.m"
            {
#line 494 "write_deps_file.m"
              parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__write_deps_file__SourceFileModuleName_13, &parse_tree__write_deps_file__ModuleArg_95);
            }
#line 495 "write_deps_file.m"
            break;
#line 495 "write_deps_file.m"
        }
#line 500 "write_deps_file.m"
        {
#line 500 "write_deps_file.m"
          libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_7, &parse_tree__write_deps_file__Target_96);
        }
#line 501 "write_deps_file.m"
        {
#line 501 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".class", (MR_Integer) 1, &parse_tree__write_deps_file__ClassFileName_97);
        }
#line 503 "write_deps_file.m"
        {
#line 503 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".beam", (MR_Integer) 1, &parse_tree__write_deps_file__BeamFileName_98);
        }
#line 509 "write_deps_file.m"
#line 509 "write_deps_file.m"
        switch (MR_tag((MR_Word) parse_tree__write_deps_file__ContainsForeignCode_26)) {
#line 509 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 509 "write_deps_file.m"
          case (MR_Integer) 0:
#line 509 "write_deps_file.m"
#line 509 "write_deps_file.m"
            switch (MR_unmkbody(parse_tree__write_deps_file__ContainsForeignCode_26)) {
#line 509 "write_deps_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 509 "write_deps_file.m"
              case (MR_Integer) 0:
#line 565 "write_deps_file.m"
                parse_tree__write_deps_file__ForeignImportModules_100 = parse_tree__write_deps_file__ForeignImportModules0_24;
#line 509 "write_deps_file.m"
                break;
#line 509 "write_deps_file.m"
              case (MR_Integer) 1:
#line 510 "write_deps_file.m"
                {
#line 510 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__TypeInfo_821_821;
#line 510 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__SrcForeignImportModules_102;
#line 510 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__IntItemBlocksCord_105;
#line 510 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__IntForeignImportModules_107;
#line 510 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__OptForeignImportModules_111;
#line 510 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__IntForOptForeignImportModules_115;
#line 510 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_524_524;
#line 510 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_525_525;
#line 510 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_526_526;
#line 511 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file___SrcLangSet_101;
#line 511 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_103_103;
#line 511 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_104_104;
#line 518 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file___IntLangSet_106;
#line 518 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_108_108;
#line 518 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_109_109;
#line 521 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file___OptLangSet_110;
#line 521 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_112_112;
#line 521 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_113_113;
#line 524 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file___IntForOptLangSet_114;
#line 524 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_116_116;
#line 524 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_117_117;
#line 535 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__C0_118;
#line 535 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__CSharp0_119;
#line 535 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__Java0_120;
#line 535 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__Erlang0_121;

#line 511 "write_deps_file.m"
                  {
#line 511 "write_deps_file.m"
                    parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0, parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SrcItemBlocks_28, &parse_tree__write_deps_file___SrcLangSet_101, &parse_tree__write_deps_file__SrcForeignImportModules_102, &parse_tree__write_deps_file__V_103_103, &parse_tree__write_deps_file__V_104_104);
                  }
#line 15343 "parse_tree.write_deps_file.c"
                  parse_tree__write_deps_file__TypeInfo_821_821 = (MR_Word) &parse_tree__write_deps_file_scalar_common_1[1];
#line 516 "write_deps_file.m"
                  {
#line 516 "write_deps_file.m"
                    parse_tree__write_deps_file__IntItemBlocksCord_105 = mercury__cord__f_43_43_2_f_0(parse_tree__write_deps_file__TypeInfo_821_821, parse_tree__write_deps_file__DirectIntItemBlocksCord_29, parse_tree__write_deps_file__IndirectIntItemBlocksCord_30);
                  }
#line 519 "write_deps_file.m"
                  {
#line 519 "write_deps_file.m"
                    parse_tree__write_deps_file__V_524_524 = mercury__cord__list_1_f_0(parse_tree__write_deps_file__TypeInfo_821_821, parse_tree__write_deps_file__IntItemBlocksCord_105);
                  }
#line 518 "write_deps_file.m"
                  {
#line 518 "write_deps_file.m"
                    parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0, parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__V_524_524, &parse_tree__write_deps_file___IntLangSet_106, &parse_tree__write_deps_file__IntForeignImportModules_107, &parse_tree__write_deps_file__V_108_108, &parse_tree__write_deps_file__V_109_109);
                  }
#line 522 "write_deps_file.m"
                  {
#line 522 "write_deps_file.m"
                    parse_tree__write_deps_file__V_525_525 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[2], parse_tree__write_deps_file__OptItemBlocksCord_31);
                  }
#line 521 "write_deps_file.m"
                  {
#line 521 "write_deps_file.m"
                    parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0, parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__V_525_525, &parse_tree__write_deps_file___OptLangSet_110, &parse_tree__write_deps_file__OptForeignImportModules_111, &parse_tree__write_deps_file__V_112_112, &parse_tree__write_deps_file__V_113_113);
                  }
#line 525 "write_deps_file.m"
                  {
#line 525 "write_deps_file.m"
                    parse_tree__write_deps_file__V_526_526 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[3], parse_tree__write_deps_file__IntForOptItemBlocksCord_32);
                  }
#line 524 "write_deps_file.m"
                  {
#line 524 "write_deps_file.m"
                    parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0, parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__V_526_526, &parse_tree__write_deps_file___IntForOptLangSet_114, &parse_tree__write_deps_file__IntForOptForeignImportModules_115, &parse_tree__write_deps_file__V_116_116, &parse_tree__write_deps_file__V_117_117);
                  }
#line 534 "write_deps_file.m"
                  parse_tree__write_deps_file__C0_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_24, (MR_Integer) 0)));
#line 534 "write_deps_file.m"
                  parse_tree__write_deps_file__CSharp0_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_24, (MR_Integer) 1)));
#line 534 "write_deps_file.m"
                  parse_tree__write_deps_file__Java0_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_24, (MR_Integer) 2)));
#line 534 "write_deps_file.m"
                  parse_tree__write_deps_file__Erlang0_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_24, (MR_Integer) 3)));
#line 536 "write_deps_file.m"
                  {
#line 536 "write_deps_file.m"
                    parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, parse_tree__write_deps_file__C0_118);
                  }
#line 535 "write_deps_file.m"
                  if (parse_tree__write_deps_file__succeeded)
#line 535 "write_deps_file.m"
                    {
#line 537 "write_deps_file.m"
                      {
#line 537 "write_deps_file.m"
                        parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, parse_tree__write_deps_file__CSharp0_119);
                      }
#line 535 "write_deps_file.m"
                      if (parse_tree__write_deps_file__succeeded)
#line 535 "write_deps_file.m"
                        {
#line 538 "write_deps_file.m"
                          {
#line 538 "write_deps_file.m"
                            parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, parse_tree__write_deps_file__Java0_120);
                          }
#line 535 "write_deps_file.m"
                          if (parse_tree__write_deps_file__succeeded)
#line 539 "write_deps_file.m"
                            {
#line 539 "write_deps_file.m"
                              parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, parse_tree__write_deps_file__Erlang0_121);
                            }
#line 535 "write_deps_file.m"
                        }
#line 535 "write_deps_file.m"
                    }
#line 560 "write_deps_file.m"
                  if (parse_tree__write_deps_file__succeeded)
#line 542 "write_deps_file.m"
                    {
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__SrcC_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_102, (MR_Integer) 0)));
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__SrcCSharp_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_102, (MR_Integer) 1)));
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__SrcJava_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_102, (MR_Integer) 2)));
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__SrcErlang_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_102, (MR_Integer) 3)));
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntC_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_107, (MR_Integer) 0)));
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntCSharp_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_107, (MR_Integer) 1)));
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntJava_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_107, (MR_Integer) 2)));
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntErlang_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_107, (MR_Integer) 3)));
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__OptC_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_111, (MR_Integer) 0)));
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__OptCSharp_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_111, (MR_Integer) 1)));
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__OptJava_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_111, (MR_Integer) 2)));
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__OptErlang_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_111, (MR_Integer) 3)));
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntForOptC_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_115, (MR_Integer) 0)));
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntForOptCSharp_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_115, (MR_Integer) 1)));
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntForOptJava_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_115, (MR_Integer) 2)));
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__IntForOptErlang_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_115, (MR_Integer) 3)));
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__C_138;
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__CSharp_139;
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__Java_140;
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__Erlang_141;
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_527_527;
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_528_528;
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_529_529;
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_530_530;
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_532_532;
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_533_533;
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_534_534;
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_535_535;
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_537_537;
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_538_538;
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_539_539;
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_540_540;
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_542_542;
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_543_543;
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_544_544;
#line 542 "write_deps_file.m"
                      MR_Word parse_tree__write_deps_file__V_545_545;

#line 551 "write_deps_file.m"
                      {
#line 551 "write_deps_file.m"
                        parse_tree__write_deps_file__V_530_530 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_530_530, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptC_134));
#line 551 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_530_530, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 551 "write_deps_file.m"
                      }
#line 551 "write_deps_file.m"
                      {
#line 551 "write_deps_file.m"
                        parse_tree__write_deps_file__V_529_529 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_529_529, 0) = ((MR_Box) (parse_tree__write_deps_file__OptC_130));
#line 551 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_529_529, 1) = ((MR_Box) (parse_tree__write_deps_file__V_530_530));
#line 551 "write_deps_file.m"
                      }
#line 551 "write_deps_file.m"
                      {
#line 551 "write_deps_file.m"
                        parse_tree__write_deps_file__V_528_528 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_528_528, 0) = ((MR_Box) (parse_tree__write_deps_file__IntC_126));
#line 551 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_528_528, 1) = ((MR_Box) (parse_tree__write_deps_file__V_529_529));
#line 551 "write_deps_file.m"
                      }
#line 551 "write_deps_file.m"
                      {
#line 551 "write_deps_file.m"
                        parse_tree__write_deps_file__V_527_527 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 551 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_527_527, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcC_122));
#line 551 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_527_527, 1) = ((MR_Box) (parse_tree__write_deps_file__V_528_528));
#line 551 "write_deps_file.m"
                      }
#line 550 "write_deps_file.m"
                      {
#line 550 "write_deps_file.m"
                        parse_tree__write_deps_file__C_138 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, parse_tree__write_deps_file__V_527_527);
                      }
#line 553 "write_deps_file.m"
                      {
#line 553 "write_deps_file.m"
                        parse_tree__write_deps_file__V_535_535 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_535_535, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptCSharp_135));
#line 553 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_535_535, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "write_deps_file.m"
                      }
#line 553 "write_deps_file.m"
                      {
#line 553 "write_deps_file.m"
                        parse_tree__write_deps_file__V_534_534 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_534_534, 0) = ((MR_Box) (parse_tree__write_deps_file__OptCSharp_131));
#line 553 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_534_534, 1) = ((MR_Box) (parse_tree__write_deps_file__V_535_535));
#line 553 "write_deps_file.m"
                      }
#line 553 "write_deps_file.m"
                      {
#line 553 "write_deps_file.m"
                        parse_tree__write_deps_file__V_533_533 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_533_533, 0) = ((MR_Box) (parse_tree__write_deps_file__IntCSharp_127));
#line 553 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_533_533, 1) = ((MR_Box) (parse_tree__write_deps_file__V_534_534));
#line 553 "write_deps_file.m"
                      }
#line 553 "write_deps_file.m"
                      {
#line 553 "write_deps_file.m"
                        parse_tree__write_deps_file__V_532_532 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_532_532, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcCSharp_123));
#line 553 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_532_532, 1) = ((MR_Box) (parse_tree__write_deps_file__V_533_533));
#line 553 "write_deps_file.m"
                      }
#line 552 "write_deps_file.m"
                      {
#line 552 "write_deps_file.m"
                        parse_tree__write_deps_file__CSharp_139 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, parse_tree__write_deps_file__V_532_532);
                      }
#line 555 "write_deps_file.m"
                      {
#line 555 "write_deps_file.m"
                        parse_tree__write_deps_file__V_540_540 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_540_540, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptJava_136));
#line 555 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_540_540, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 555 "write_deps_file.m"
                      }
#line 555 "write_deps_file.m"
                      {
#line 555 "write_deps_file.m"
                        parse_tree__write_deps_file__V_539_539 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_539_539, 0) = ((MR_Box) (parse_tree__write_deps_file__OptJava_132));
#line 555 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_539_539, 1) = ((MR_Box) (parse_tree__write_deps_file__V_540_540));
#line 555 "write_deps_file.m"
                      }
#line 555 "write_deps_file.m"
                      {
#line 555 "write_deps_file.m"
                        parse_tree__write_deps_file__V_538_538 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_538_538, 0) = ((MR_Box) (parse_tree__write_deps_file__IntJava_128));
#line 555 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_538_538, 1) = ((MR_Box) (parse_tree__write_deps_file__V_539_539));
#line 555 "write_deps_file.m"
                      }
#line 555 "write_deps_file.m"
                      {
#line 555 "write_deps_file.m"
                        parse_tree__write_deps_file__V_537_537 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 555 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_537_537, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcJava_124));
#line 555 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_537_537, 1) = ((MR_Box) (parse_tree__write_deps_file__V_538_538));
#line 555 "write_deps_file.m"
                      }
#line 554 "write_deps_file.m"
                      {
#line 554 "write_deps_file.m"
                        parse_tree__write_deps_file__Java_140 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, parse_tree__write_deps_file__V_537_537);
                      }
#line 557 "write_deps_file.m"
                      {
#line 557 "write_deps_file.m"
                        parse_tree__write_deps_file__V_545_545 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_545_545, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptErlang_137));
#line 557 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_545_545, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 557 "write_deps_file.m"
                      }
#line 557 "write_deps_file.m"
                      {
#line 557 "write_deps_file.m"
                        parse_tree__write_deps_file__V_544_544 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_544_544, 0) = ((MR_Box) (parse_tree__write_deps_file__OptErlang_133));
#line 557 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_544_544, 1) = ((MR_Box) (parse_tree__write_deps_file__V_545_545));
#line 557 "write_deps_file.m"
                      }
#line 557 "write_deps_file.m"
                      {
#line 557 "write_deps_file.m"
                        parse_tree__write_deps_file__V_543_543 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_543_543, 0) = ((MR_Box) (parse_tree__write_deps_file__IntErlang_129));
#line 557 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_543_543, 1) = ((MR_Box) (parse_tree__write_deps_file__V_544_544));
#line 557 "write_deps_file.m"
                      }
#line 557 "write_deps_file.m"
                      {
#line 557 "write_deps_file.m"
                        parse_tree__write_deps_file__V_542_542 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 557 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_542_542, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcErlang_125));
#line 557 "write_deps_file.m"
                        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_542_542, 1) = ((MR_Box) (parse_tree__write_deps_file__V_543_543));
#line 557 "write_deps_file.m"
                      }
#line 556 "write_deps_file.m"
                      {
#line 556 "write_deps_file.m"
                        parse_tree__write_deps_file__Erlang_141 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, parse_tree__write_deps_file__V_542_542);
                      }
#line 558 "write_deps_file.m"
                      {
#line 558 "write_deps_file.m"
                        parse_tree__write_deps_file__ForeignImportModules_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 558 "write_deps_file.m"
                        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_100, 0) = ((MR_Box) (parse_tree__write_deps_file__C_138));
#line 558 "write_deps_file.m"
                        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_100, 1) = ((MR_Box) (parse_tree__write_deps_file__CSharp_139));
#line 558 "write_deps_file.m"
                        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_100, 2) = ((MR_Box) (parse_tree__write_deps_file__Java_140));
#line 558 "write_deps_file.m"
                        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_100, 3) = ((MR_Box) (parse_tree__write_deps_file__Erlang_141));
#line 558 "write_deps_file.m"
                      }
#line 542 "write_deps_file.m"
                    }
#line 560 "write_deps_file.m"
                  else
#line 561 "write_deps_file.m"
                    parse_tree__write_deps_file__ForeignImportModules_100 = parse_tree__write_deps_file__ForeignImportModules0_24;
#line 510 "write_deps_file.m"
                }
#line 509 "write_deps_file.m"
                break;
#line 509 "write_deps_file.m"
            }
#line 509 "write_deps_file.m"
            break;
#line 509 "write_deps_file.m"
          case (MR_Integer) 1:
#line 508 "write_deps_file.m"
            parse_tree__write_deps_file__ForeignImportModules_100 = parse_tree__write_deps_file__ForeignImportModules0_24;
#line 509 "write_deps_file.m"
            break;
#line 509 "write_deps_file.m"
        }
#line 568 "write_deps_file.m"
        {
#line 568 "write_deps_file.m"
          parse_tree__write_deps_file__ForeignImports_142 = parse_tree__prog_data__get_all_foreign_import_module_infos_1_f_0(parse_tree__write_deps_file__ForeignImportModules_100);
        }
#line 574 "write_deps_file.m"
        {
#line 574 "write_deps_file.m"
          parse_tree__write_deps_file__V_547_547 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 574 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_547_547, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
#line 574 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_547_547, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_4));
#line 574 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_547_547, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 574 "write_deps_file.m"
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_547_547, 3) = ((MR_Box) (parse_tree__write_deps_file__SourceFileModuleName_13));
#line 574 "write_deps_file.m"
        }
#line 574 "write_deps_file.m"
        {
#line 574 "write_deps_file.m"
          mercury__set__filter_map_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, parse_tree__write_deps_file__TypeCtorInfo_810_810, parse_tree__write_deps_file__V_547_547, parse_tree__write_deps_file__ForeignImports_142, &parse_tree__write_deps_file__ForeignImportedModuleNames_145);
        }
#line 583 "write_deps_file.m"
        {
#line 583 "write_deps_file.m"
          parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_810_810, parse_tree__write_deps_file__ForeignImportedModuleNames_145);
        }
#line 585 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 585 "write_deps_file.m"
          {
#line 585 "write_deps_file.m"
          }
#line 585 "write_deps_file.m"
        else
#line 607 "write_deps_file.m"
          {
#line 607 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__ForeignImportTargets_146;
#line 607 "write_deps_file.m"
            MR_String parse_tree__write_deps_file__ForeignImportExt_147;
#line 607 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__WriteForeignImportTarget_148;
#line 618 "write_deps_file.m"
            MR_Box parse_tree__write_deps_file__conv4_STATE_VARIABLE_IO_569_569;

#line 591 "write_deps_file.m"
#line 591 "write_deps_file.m"
            switch (parse_tree__write_deps_file__Target_96) {
#line 591 "write_deps_file.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 591 "write_deps_file.m"
              case (MR_Integer) 0:
#line 600 "write_deps_file.m"
                {
#line 600 "write_deps_file.m"
                  MR_Word parse_tree__write_deps_file__V_551_551;

#line 605 "write_deps_file.m"
                  {
#line 605 "write_deps_file.m"
                    parse_tree__write_deps_file__V_551_551 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_551_551, 0) = ((MR_Box) (parse_tree__write_deps_file__PicObjFileName_66));
#line 605 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_551_551, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 605 "write_deps_file.m"
                  }
#line 605 "write_deps_file.m"
                  {
#line 605 "write_deps_file.m"
                    parse_tree__write_deps_file__ForeignImportTargets_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_146, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_64));
#line 605 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_146, 1) = ((MR_Box) (parse_tree__write_deps_file__V_551_551));
#line 605 "write_deps_file.m"
                  }
#line 606 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportExt_147 = (MR_String) ".mh";
#line 600 "write_deps_file.m"
                }
#line 591 "write_deps_file.m"
                break;
#line 591 "write_deps_file.m"
              case (MR_Integer) 1:
#line 587 "write_deps_file.m"
                {
#line 589 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportTargets_146 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 590 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportExt_147 = (MR_String) ".cs";
#line 587 "write_deps_file.m"
                }
#line 591 "write_deps_file.m"
                break;
#line 591 "write_deps_file.m"
              case (MR_Integer) 3:
#line 596 "write_deps_file.m"
                {
#line 597 "write_deps_file.m"
                  {
#line 597 "write_deps_file.m"
                    parse_tree__write_deps_file__ForeignImportTargets_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_146, 0) = ((MR_Box) (parse_tree__write_deps_file__BeamFileName_98));
#line 597 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 597 "write_deps_file.m"
                  }
#line 598 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportExt_147 = (MR_String) ".hrl";
#line 596 "write_deps_file.m"
                }
#line 591 "write_deps_file.m"
                break;
#line 591 "write_deps_file.m"
              case (MR_Integer) 2:
#line 592 "write_deps_file.m"
                {
#line 593 "write_deps_file.m"
                  {
#line 593 "write_deps_file.m"
                    parse_tree__write_deps_file__ForeignImportTargets_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 593 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_146, 0) = ((MR_Box) (parse_tree__write_deps_file__ClassFileName_97));
#line 593 "write_deps_file.m"
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 593 "write_deps_file.m"
                  }
#line 594 "write_deps_file.m"
                  parse_tree__write_deps_file__ForeignImportExt_147 = (MR_String) ".java";
#line 592 "write_deps_file.m"
                }
#line 591 "write_deps_file.m"
                break;
#line 591 "write_deps_file.m"
            }
#line 608 "write_deps_file.m"
            {
#line 608 "write_deps_file.m"
              parse_tree__write_deps_file__WriteForeignImportTarget_148 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 608 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_148, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[1]));
#line 608 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_148, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_5));
#line 608 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_148, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 608 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_148, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 608 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_148, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_48));
#line 608 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_148, 5) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportedModuleNames_145));
#line 608 "write_deps_file.m"
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_148, 6) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportExt_147));
#line 608 "write_deps_file.m"
            }
#line 618 "write_deps_file.m"
            {
#line 618 "write_deps_file.m"
              mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_811_811, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__WriteForeignImportTarget_148, parse_tree__write_deps_file__ForeignImportTargets_146, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv4_STATE_VARIABLE_IO_569_569);
            }
#line 607 "write_deps_file.m"
          }
#line 621 "write_deps_file.m"
        {
#line 621 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int", (MR_Integer) 1, &parse_tree__write_deps_file__IntFileName_150);
        }
#line 623 "write_deps_file.m"
        {
#line 623 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int2", (MR_Integer) 1, &parse_tree__write_deps_file__Int2FileName_151);
        }
#line 625 "write_deps_file.m"
        {
#line 625 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".int3", (MR_Integer) 1, &parse_tree__write_deps_file__Int3FileName_152);
        }
#line 627 "write_deps_file.m"
        {
#line 627 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptFileName_153);
        }
#line 629 "write_deps_file.m"
        {
#line 629 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptFileName_154);
        }
#line 631 "write_deps_file.m"
        {
#line 631 "write_deps_file.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_14, (MR_String) ".date3", (MR_Integer) 1, &parse_tree__write_deps_file__Date3FileName_155);
        }
#line 662 "write_deps_file.m"
        {
#line 662 "write_deps_file.m"
          parse_tree__write_deps_file__V_634_634 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_634_634, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_42));
#line 662 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_634_634, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[13])));
#line 662 "write_deps_file.m"
        }
#line 662 "write_deps_file.m"
        {
#line 662 "write_deps_file.m"
          parse_tree__write_deps_file__V_632_632 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_632_632, 0) = ((MR_Box) ((MR_String) " : "));
#line 662 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_632_632, 1) = ((MR_Box) (parse_tree__write_deps_file__V_634_634));
#line 662 "write_deps_file.m"
        }
#line 662 "write_deps_file.m"
        {
#line 662 "write_deps_file.m"
          parse_tree__write_deps_file__V_631_631 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_631_631, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptFileName_154));
#line 662 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_631_631, 1) = ((MR_Box) (parse_tree__write_deps_file__V_632_632));
#line 662 "write_deps_file.m"
        }
#line 661 "write_deps_file.m"
        {
#line 661 "write_deps_file.m"
          parse_tree__write_deps_file__V_629_629 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 661 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_629_629, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 661 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_629_629, 1) = ((MR_Box) (parse_tree__write_deps_file__V_631_631));
#line 661 "write_deps_file.m"
        }
#line 660 "write_deps_file.m"
        {
#line 660 "write_deps_file.m"
          parse_tree__write_deps_file__V_627_627 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_627_627, 0) = ((MR_Box) ((MR_String) "\n"));
#line 660 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_627_627, 1) = ((MR_Box) (parse_tree__write_deps_file__V_629_629));
#line 660 "write_deps_file.m"
        }
#line 660 "write_deps_file.m"
        {
#line 660 "write_deps_file.m"
          parse_tree__write_deps_file__V_626_626 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_626_626, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_62));
#line 660 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_626_626, 1) = ((MR_Box) (parse_tree__write_deps_file__V_627_627));
#line 660 "write_deps_file.m"
        }
#line 660 "write_deps_file.m"
        {
#line 660 "write_deps_file.m"
          parse_tree__write_deps_file__V_624_624 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_624_624, 0) = ((MR_Box) ((MR_String) " : "));
#line 660 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_624_624, 1) = ((MR_Box) (parse_tree__write_deps_file__V_626_626));
#line 660 "write_deps_file.m"
        }
#line 660 "write_deps_file.m"
        {
#line 660 "write_deps_file.m"
          parse_tree__write_deps_file__V_623_623 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_623_623, 0) = ((MR_Box) (parse_tree__write_deps_file__OptFileName_153));
#line 660 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_623_623, 1) = ((MR_Box) (parse_tree__write_deps_file__V_624_624));
#line 660 "write_deps_file.m"
        }
#line 659 "write_deps_file.m"
        {
#line 659 "write_deps_file.m"
          parse_tree__write_deps_file__V_621_621 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_621_621, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 659 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_621_621, 1) = ((MR_Box) (parse_tree__write_deps_file__V_623_623));
#line 659 "write_deps_file.m"
        }
#line 658 "write_deps_file.m"
        {
#line 658 "write_deps_file.m"
          parse_tree__write_deps_file__V_619_619 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_619_619, 0) = ((MR_Box) ((MR_String) "\n"));
#line 658 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_619_619, 1) = ((MR_Box) (parse_tree__write_deps_file__V_621_621));
#line 658 "write_deps_file.m"
        }
#line 658 "write_deps_file.m"
        {
#line 658 "write_deps_file.m"
          parse_tree__write_deps_file__V_618_618 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_618_618, 0) = ((MR_Box) (parse_tree__write_deps_file__Date3FileName_155));
#line 658 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_618_618, 1) = ((MR_Box) (parse_tree__write_deps_file__V_619_619));
#line 658 "write_deps_file.m"
        }
#line 658 "write_deps_file.m"
        {
#line 658 "write_deps_file.m"
          parse_tree__write_deps_file__V_616_616 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_616_616, 0) = ((MR_Box) ((MR_String) " : "));
#line 658 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_616_616, 1) = ((MR_Box) (parse_tree__write_deps_file__V_618_618));
#line 658 "write_deps_file.m"
        }
#line 658 "write_deps_file.m"
        {
#line 658 "write_deps_file.m"
          parse_tree__write_deps_file__V_615_615 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_615_615, 0) = ((MR_Box) (parse_tree__write_deps_file__Int3FileName_152));
#line 658 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_615_615, 1) = ((MR_Box) (parse_tree__write_deps_file__V_616_616));
#line 658 "write_deps_file.m"
        }
#line 657 "write_deps_file.m"
        {
#line 657 "write_deps_file.m"
          parse_tree__write_deps_file__V_613_613 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_613_613, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 657 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_613_613, 1) = ((MR_Box) (parse_tree__write_deps_file__V_615_615));
#line 657 "write_deps_file.m"
        }
#line 656 "write_deps_file.m"
        {
#line 656 "write_deps_file.m"
          parse_tree__write_deps_file__V_611_611 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_611_611, 0) = ((MR_Box) ((MR_String) "\n"));
#line 656 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_611_611, 1) = ((MR_Box) (parse_tree__write_deps_file__V_613_613));
#line 656 "write_deps_file.m"
        }
#line 656 "write_deps_file.m"
        {
#line 656 "write_deps_file.m"
          parse_tree__write_deps_file__V_610_610 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_610_610, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_92));
#line 656 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_610_610, 1) = ((MR_Box) (parse_tree__write_deps_file__V_611_611));
#line 656 "write_deps_file.m"
        }
#line 656 "write_deps_file.m"
        {
#line 656 "write_deps_file.m"
          parse_tree__write_deps_file__V_608_608 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_608_608, 0) = ((MR_Box) ((MR_String) " : "));
#line 656 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_608_608, 1) = ((MR_Box) (parse_tree__write_deps_file__V_610_610));
#line 656 "write_deps_file.m"
        }
#line 656 "write_deps_file.m"
        {
#line 656 "write_deps_file.m"
          parse_tree__write_deps_file__V_607_607 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_607_607, 0) = ((MR_Box) (parse_tree__write_deps_file__Int2FileName_151));
#line 656 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_607_607, 1) = ((MR_Box) (parse_tree__write_deps_file__V_608_608));
#line 656 "write_deps_file.m"
        }
#line 655 "write_deps_file.m"
        {
#line 655 "write_deps_file.m"
          parse_tree__write_deps_file__V_605_605 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 655 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_605_605, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 655 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_605_605, 1) = ((MR_Box) (parse_tree__write_deps_file__V_607_607));
#line 655 "write_deps_file.m"
        }
#line 654 "write_deps_file.m"
        {
#line 654 "write_deps_file.m"
          parse_tree__write_deps_file__V_603_603 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_603_603, 0) = ((MR_Box) ((MR_String) "\n"));
#line 654 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_603_603, 1) = ((MR_Box) (parse_tree__write_deps_file__V_605_605));
#line 654 "write_deps_file.m"
        }
#line 654 "write_deps_file.m"
        {
#line 654 "write_deps_file.m"
          parse_tree__write_deps_file__V_602_602 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_602_602, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_92));
#line 654 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_602_602, 1) = ((MR_Box) (parse_tree__write_deps_file__V_603_603));
#line 654 "write_deps_file.m"
        }
#line 654 "write_deps_file.m"
        {
#line 654 "write_deps_file.m"
          parse_tree__write_deps_file__V_600_600 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_600_600, 0) = ((MR_Box) ((MR_String) " : "));
#line 654 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_600_600, 1) = ((MR_Box) (parse_tree__write_deps_file__V_602_602));
#line 654 "write_deps_file.m"
        }
#line 654 "write_deps_file.m"
        {
#line 654 "write_deps_file.m"
          parse_tree__write_deps_file__V_599_599 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_599_599, 0) = ((MR_Box) (parse_tree__write_deps_file__IntFileName_150));
#line 654 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_599_599, 1) = ((MR_Box) (parse_tree__write_deps_file__V_600_600));
#line 654 "write_deps_file.m"
        }
#line 653 "write_deps_file.m"
        {
#line 653 "write_deps_file.m"
          parse_tree__write_deps_file__V_597_597 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_597_597, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
#line 653 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_597_597, 1) = ((MR_Box) (parse_tree__write_deps_file__V_599_599));
#line 653 "write_deps_file.m"
        }
#line 652 "write_deps_file.m"
        {
#line 652 "write_deps_file.m"
          parse_tree__write_deps_file__V_595_595 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_595_595, 0) = ((MR_Box) ((MR_String) "\n"));
#line 652 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_595_595, 1) = ((MR_Box) (parse_tree__write_deps_file__V_597_597));
#line 652 "write_deps_file.m"
        }
#line 652 "write_deps_file.m"
        {
#line 652 "write_deps_file.m"
          parse_tree__write_deps_file__V_594_594 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_594_594, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_93));
#line 652 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_594_594, 1) = ((MR_Box) (parse_tree__write_deps_file__V_595_595));
#line 652 "write_deps_file.m"
        }
#line 652 "write_deps_file.m"
        {
#line 652 "write_deps_file.m"
          parse_tree__write_deps_file__V_592_592 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_592_592, 0) = ((MR_Box) ((MR_String) " : "));
#line 652 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_592_592, 1) = ((MR_Box) (parse_tree__write_deps_file__V_594_594));
#line 652 "write_deps_file.m"
        }
#line 652 "write_deps_file.m"
        {
#line 652 "write_deps_file.m"
          parse_tree__write_deps_file__V_591_591 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 652 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_591_591, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0FileName_67));
#line 652 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_591_591, 1) = ((MR_Box) (parse_tree__write_deps_file__V_592_592));
#line 652 "write_deps_file.m"
        }
#line 651 "write_deps_file.m"
        {
#line 651 "write_deps_file.m"
          parse_tree__write_deps_file__V_588_588 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_588_588, 0) = ((MR_Box) ((MR_String) "\n"));
#line 651 "write_deps_file.m"
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_588_588, 1) = ((MR_Box) (parse_tree__write_deps_file__V_591_591));
#line 651 "write_deps_file.m"
        }
#line 650 "write_deps_file.m"
        {
#line 650 "write_deps_file.m"
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_588_588);
        }
#line 666 "write_deps_file.m"
        {
#line 666 "write_deps_file.m"
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 632, &parse_tree__write_deps_file__UseSubdirs_156);
        }
#line 673 "write_deps_file.m"
#line 673 "write_deps_file.m"
        switch (parse_tree__write_deps_file__UseSubdirs_156) {
#line 673 "write_deps_file.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 673 "write_deps_file.m"
          case (MR_Integer) 0:
#line 674 "write_deps_file.m"
            {
#line 674 "write_deps_file.m"
            }
#line 673 "write_deps_file.m"
            break;
#line 673 "write_deps_file.m"
          case (MR_Integer) 1:
#line 668 "write_deps_file.m"
            {
#line 668 "write_deps_file.m"
              MR_Word parse_tree__write_deps_file__V_642_642;
#line 670 "write_deps_file.m"
              MR_Box parse_tree__write_deps_file__conv5_STATE_VARIABLE_IO_644_644;

#line 669 "write_deps_file.m"
              {
#line 669 "write_deps_file.m"
                mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_48);
              }
#line 671 "write_deps_file.m"
              {
#line 671 "write_deps_file.m"
                parse_tree__write_deps_file__V_642_642 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 671 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_642_642, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[0]));
#line 671 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_642_642, 1) = ((MR_Box) (parse_tree__write_deps_file__write_dependency_file_6_p_0_6));
#line 671 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_642_642, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 671 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_642_642, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
#line 671 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_642_642, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_48));
#line 671 "write_deps_file.m"
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__V_642_642, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_14));
#line 671 "write_deps_file.m"
              }
#line 670 "write_deps_file.m"
              {
#line 670 "write_deps_file.m"
                mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_811_811, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__V_642_642, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[19]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv5_STATE_VARIABLE_IO_644_644);
              }
#line 668 "write_deps_file.m"
            }
#line 673 "write_deps_file.m"
            break;
#line 673 "write_deps_file.m"
        }
#line 677 "write_deps_file.m"
        {
#line 677 "write_deps_file.m"
          parse_tree__write_deps_file__V_834_834 = parse_tree__source_file_map__default_source_file_1_f_0(parse_tree__write_deps_file__ModuleName_14);
        }
#line 677 "write_deps_file.m"
        parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__SourceFileName_12, parse_tree__write_deps_file__V_834_834) == 0);
#line 679 "write_deps_file.m"
        if (parse_tree__write_deps_file__succeeded)
#line 679 "write_deps_file.m"
          {
#line 679 "write_deps_file.m"
          }
#line 679 "write_deps_file.m"
        else
#line 695 "write_deps_file.m"
          {
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_657_657;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_660_660;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_661_661;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_663_663;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_664_664;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_666_666;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_668_668;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_670_670;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_671_671;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_673_673;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_674_674;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_676_676;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_677_677;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_679_679;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_681_681;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_682_682;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_684_684;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_685_685;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_687_687;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_688_688;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_690_690;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_692_692;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_693_693;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_695_695;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_696_696;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_698_698;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_699_699;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_701_701;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_703_703;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_704_704;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_706_706;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_707_707;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_709_709;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_710_710;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_712_712;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_714_714;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_716_716;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_717_717;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_719_719;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_720_720;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_722_722;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_723_723;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_725_725;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_727_727;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_728_728;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_730_730;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_731_731;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_733_733;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_734_734;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_736_736;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_738_738;
#line 695 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__V_740_740;

#line 718 "write_deps_file.m"
            {
#line 718 "write_deps_file.m"
              parse_tree__write_deps_file__V_740_740 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_740_740, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_95));
#line 718 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_740_740, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[100])));
#line 718 "write_deps_file.m"
            }
#line 718 "write_deps_file.m"
            {
#line 718 "write_deps_file.m"
              parse_tree__write_deps_file__V_738_738 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_738_738, 0) = ((MR_Box) ((MR_String) "--java-only "));
#line 718 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_738_738, 1) = ((MR_Box) (parse_tree__write_deps_file__V_740_740));
#line 718 "write_deps_file.m"
            }
#line 717 "write_deps_file.m"
            {
#line 717 "write_deps_file.m"
              parse_tree__write_deps_file__V_736_736 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 717 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_736_736, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
#line 717 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_736_736, 1) = ((MR_Box) (parse_tree__write_deps_file__V_738_738));
#line 717 "write_deps_file.m"
            }
#line 716 "write_deps_file.m"
            {
#line 716 "write_deps_file.m"
              parse_tree__write_deps_file__V_734_734 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_734_734, 0) = ((MR_Box) ((MR_String) "\n"));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_734_734, 1) = ((MR_Box) (parse_tree__write_deps_file__V_736_736));
#line 716 "write_deps_file.m"
            }
#line 716 "write_deps_file.m"
            {
#line 716 "write_deps_file.m"
              parse_tree__write_deps_file__V_733_733 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_733_733, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_733_733, 1) = ((MR_Box) (parse_tree__write_deps_file__V_734_734));
#line 716 "write_deps_file.m"
            }
#line 716 "write_deps_file.m"
            {
#line 716 "write_deps_file.m"
              parse_tree__write_deps_file__V_731_731 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_731_731, 0) = ((MR_Box) ((MR_String) " : "));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_731_731, 1) = ((MR_Box) (parse_tree__write_deps_file__V_733_733));
#line 716 "write_deps_file.m"
            }
#line 716 "write_deps_file.m"
            {
#line 716 "write_deps_file.m"
              parse_tree__write_deps_file__V_730_730 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_730_730, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_65));
#line 716 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_730_730, 1) = ((MR_Box) (parse_tree__write_deps_file__V_731_731));
#line 716 "write_deps_file.m"
            }
#line 715 "write_deps_file.m"
            {
#line 715 "write_deps_file.m"
              parse_tree__write_deps_file__V_728_728 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_728_728, 0) = ((MR_Box) ((MR_String) " \044(ERR_REDIRECT)\n"));
#line 715 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_728_728, 1) = ((MR_Box) (parse_tree__write_deps_file__V_730_730));
#line 715 "write_deps_file.m"
            }
#line 715 "write_deps_file.m"
            {
#line 715 "write_deps_file.m"
              parse_tree__write_deps_file__V_727_727 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_727_727, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_95));
#line 715 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_727_727, 1) = ((MR_Box) (parse_tree__write_deps_file__V_728_728));
#line 715 "write_deps_file.m"
            }
#line 714 "write_deps_file.m"
            {
#line 714 "write_deps_file.m"
              parse_tree__write_deps_file__V_725_725 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_725_725, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
#line 714 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_725_725, 1) = ((MR_Box) (parse_tree__write_deps_file__V_727_727));
#line 714 "write_deps_file.m"
            }
#line 713 "write_deps_file.m"
            {
#line 713 "write_deps_file.m"
              parse_tree__write_deps_file__V_723_723 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_723_723, 0) = ((MR_Box) ((MR_String) "\n"));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_723_723, 1) = ((MR_Box) (parse_tree__write_deps_file__V_725_725));
#line 713 "write_deps_file.m"
            }
#line 713 "write_deps_file.m"
            {
#line 713 "write_deps_file.m"
              parse_tree__write_deps_file__V_722_722 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_722_722, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_722_722, 1) = ((MR_Box) (parse_tree__write_deps_file__V_723_723));
#line 713 "write_deps_file.m"
            }
#line 713 "write_deps_file.m"
            {
#line 713 "write_deps_file.m"
              parse_tree__write_deps_file__V_720_720 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_720_720, 0) = ((MR_Box) ((MR_String) " : "));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_720_720, 1) = ((MR_Box) (parse_tree__write_deps_file__V_722_722));
#line 713 "write_deps_file.m"
            }
#line 713 "write_deps_file.m"
            {
#line 713 "write_deps_file.m"
              parse_tree__write_deps_file__V_719_719 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_719_719, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_63));
#line 713 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_719_719, 1) = ((MR_Box) (parse_tree__write_deps_file__V_720_720));
#line 713 "write_deps_file.m"
            }
#line 712 "write_deps_file.m"
            {
#line 712 "write_deps_file.m"
              parse_tree__write_deps_file__V_717_717 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_717_717, 0) = ((MR_Box) ((MR_String) "\n"));
#line 712 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_717_717, 1) = ((MR_Box) (parse_tree__write_deps_file__V_719_719));
#line 712 "write_deps_file.m"
            }
#line 712 "write_deps_file.m"
            {
#line 712 "write_deps_file.m"
              parse_tree__write_deps_file__V_716_716 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_716_716, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_95));
#line 712 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_716_716, 1) = ((MR_Box) (parse_tree__write_deps_file__V_717_717));
#line 712 "write_deps_file.m"
            }
#line 712 "write_deps_file.m"
            {
#line 712 "write_deps_file.m"
              parse_tree__write_deps_file__V_714_714 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_714_714, 0) = ((MR_Box) ((MR_String) "\044(ALL_MCTOIFLAGS) "));
#line 712 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_714_714, 1) = ((MR_Box) (parse_tree__write_deps_file__V_716_716));
#line 712 "write_deps_file.m"
            }
#line 711 "write_deps_file.m"
            {
#line 711 "write_deps_file.m"
              parse_tree__write_deps_file__V_712_712 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_712_712, 0) = ((MR_Box) ((MR_String) "\t\044(MCTOI) \044(ALL_GRADEFLAGS) "));
#line 711 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_712_712, 1) = ((MR_Box) (parse_tree__write_deps_file__V_714_714));
#line 711 "write_deps_file.m"
            }
#line 710 "write_deps_file.m"
            {
#line 710 "write_deps_file.m"
              parse_tree__write_deps_file__V_710_710 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_710_710, 0) = ((MR_Box) ((MR_String) "\n"));
#line 710 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_710_710, 1) = ((MR_Box) (parse_tree__write_deps_file__V_712_712));
#line 710 "write_deps_file.m"
            }
#line 709 "write_deps_file.m"
            {
#line 709 "write_deps_file.m"
              parse_tree__write_deps_file__V_709_709 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_709_709, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 709 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_709_709, 1) = ((MR_Box) (parse_tree__write_deps_file__V_710_710));
#line 709 "write_deps_file.m"
            }
#line 709 "write_deps_file.m"
            {
#line 709 "write_deps_file.m"
              parse_tree__write_deps_file__V_707_707 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_707_707, 0) = ((MR_Box) ((MR_String) " : "));
#line 709 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_707_707, 1) = ((MR_Box) (parse_tree__write_deps_file__V_709_709));
#line 709 "write_deps_file.m"
            }
#line 709 "write_deps_file.m"
            {
#line 709 "write_deps_file.m"
              parse_tree__write_deps_file__V_706_706 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_706_706, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_42));
#line 709 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_706_706, 1) = ((MR_Box) (parse_tree__write_deps_file__V_707_707));
#line 709 "write_deps_file.m"
            }
#line 708 "write_deps_file.m"
            {
#line 708 "write_deps_file.m"
              parse_tree__write_deps_file__V_704_704 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_704_704, 0) = ((MR_Box) ((MR_String) "\n"));
#line 708 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_704_704, 1) = ((MR_Box) (parse_tree__write_deps_file__V_706_706));
#line 708 "write_deps_file.m"
            }
#line 708 "write_deps_file.m"
            {
#line 708 "write_deps_file.m"
              parse_tree__write_deps_file__V_703_703 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_703_703, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_95));
#line 708 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_703_703, 1) = ((MR_Box) (parse_tree__write_deps_file__V_704_704));
#line 708 "write_deps_file.m"
            }
#line 707 "write_deps_file.m"
            {
#line 707 "write_deps_file.m"
              parse_tree__write_deps_file__V_701_701 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_701_701, 0) = ((MR_Box) ((MR_String) "\t\044(MCOI) \044(ALL_GRADEFLAGS) \044(ALL_MCOIFLAGS) "));
#line 707 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_701_701, 1) = ((MR_Box) (parse_tree__write_deps_file__V_703_703));
#line 707 "write_deps_file.m"
            }
#line 706 "write_deps_file.m"
            {
#line 706 "write_deps_file.m"
              parse_tree__write_deps_file__V_699_699 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_699_699, 0) = ((MR_Box) ((MR_String) "\n"));
#line 706 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_699_699, 1) = ((MR_Box) (parse_tree__write_deps_file__V_701_701));
#line 706 "write_deps_file.m"
            }
#line 706 "write_deps_file.m"
            {
#line 706 "write_deps_file.m"
              parse_tree__write_deps_file__V_698_698 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_698_698, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 706 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_698_698, 1) = ((MR_Box) (parse_tree__write_deps_file__V_699_699));
#line 706 "write_deps_file.m"
            }
#line 706 "write_deps_file.m"
            {
#line 706 "write_deps_file.m"
              parse_tree__write_deps_file__V_696_696 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_696_696, 0) = ((MR_Box) ((MR_String) " : "));
#line 706 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_696_696, 1) = ((MR_Box) (parse_tree__write_deps_file__V_698_698));
#line 706 "write_deps_file.m"
            }
#line 706 "write_deps_file.m"
            {
#line 706 "write_deps_file.m"
              parse_tree__write_deps_file__V_695_695 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_695_695, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_62));
#line 706 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_695_695, 1) = ((MR_Box) (parse_tree__write_deps_file__V_696_696));
#line 706 "write_deps_file.m"
            }
#line 705 "write_deps_file.m"
            {
#line 705 "write_deps_file.m"
              parse_tree__write_deps_file__V_693_693 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_693_693, 0) = ((MR_Box) ((MR_String) "\n"));
#line 705 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_693_693, 1) = ((MR_Box) (parse_tree__write_deps_file__V_695_695));
#line 705 "write_deps_file.m"
            }
#line 705 "write_deps_file.m"
            {
#line 705 "write_deps_file.m"
              parse_tree__write_deps_file__V_692_692 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_692_692, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_95));
#line 705 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_692_692, 1) = ((MR_Box) (parse_tree__write_deps_file__V_693_693));
#line 705 "write_deps_file.m"
            }
#line 704 "write_deps_file.m"
            {
#line 704 "write_deps_file.m"
              parse_tree__write_deps_file__V_690_690 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_690_690, 0) = ((MR_Box) ((MR_String) "\t\044(MCSI) \044(ALL_GRADEFLAGS) \044(ALL_MCSIFLAGS) "));
#line 704 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_690_690, 1) = ((MR_Box) (parse_tree__write_deps_file__V_692_692));
#line 704 "write_deps_file.m"
            }
#line 703 "write_deps_file.m"
            {
#line 703 "write_deps_file.m"
              parse_tree__write_deps_file__V_688_688 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_688_688, 0) = ((MR_Box) ((MR_String) "\n"));
#line 703 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_688_688, 1) = ((MR_Box) (parse_tree__write_deps_file__V_690_690));
#line 703 "write_deps_file.m"
            }
#line 703 "write_deps_file.m"
            {
#line 703 "write_deps_file.m"
              parse_tree__write_deps_file__V_687_687 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_687_687, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 703 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_687_687, 1) = ((MR_Box) (parse_tree__write_deps_file__V_688_688));
#line 703 "write_deps_file.m"
            }
#line 703 "write_deps_file.m"
            {
#line 703 "write_deps_file.m"
              parse_tree__write_deps_file__V_685_685 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_685_685, 0) = ((MR_Box) ((MR_String) " : "));
#line 703 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_685_685, 1) = ((MR_Box) (parse_tree__write_deps_file__V_687_687));
#line 703 "write_deps_file.m"
            }
#line 703 "write_deps_file.m"
            {
#line 703 "write_deps_file.m"
              parse_tree__write_deps_file__V_684_684 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_684_684, 0) = ((MR_Box) (parse_tree__write_deps_file__Date3FileName_155));
#line 703 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_684_684, 1) = ((MR_Box) (parse_tree__write_deps_file__V_685_685));
#line 703 "write_deps_file.m"
            }
#line 702 "write_deps_file.m"
            {
#line 702 "write_deps_file.m"
              parse_tree__write_deps_file__V_682_682 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_682_682, 0) = ((MR_Box) ((MR_String) "\n"));
#line 702 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_682_682, 1) = ((MR_Box) (parse_tree__write_deps_file__V_684_684));
#line 702 "write_deps_file.m"
            }
#line 702 "write_deps_file.m"
            {
#line 702 "write_deps_file.m"
              parse_tree__write_deps_file__V_681_681 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 702 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_681_681, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_95));
#line 702 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_681_681, 1) = ((MR_Box) (parse_tree__write_deps_file__V_682_682));
#line 702 "write_deps_file.m"
            }
#line 701 "write_deps_file.m"
            {
#line 701 "write_deps_file.m"
              parse_tree__write_deps_file__V_679_679 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_679_679, 0) = ((MR_Box) ((MR_String) "\t\044(MCI) \044(ALL_GRADEFLAGS) \044(ALL_MCIFLAGS) "));
#line 701 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_679_679, 1) = ((MR_Box) (parse_tree__write_deps_file__V_681_681));
#line 701 "write_deps_file.m"
            }
#line 700 "write_deps_file.m"
            {
#line 700 "write_deps_file.m"
              parse_tree__write_deps_file__V_677_677 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_677_677, 0) = ((MR_Box) ((MR_String) "\n"));
#line 700 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_677_677, 1) = ((MR_Box) (parse_tree__write_deps_file__V_679_679));
#line 700 "write_deps_file.m"
            }
#line 700 "write_deps_file.m"
            {
#line 700 "write_deps_file.m"
              parse_tree__write_deps_file__V_676_676 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_676_676, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 700 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_676_676, 1) = ((MR_Box) (parse_tree__write_deps_file__V_677_677));
#line 700 "write_deps_file.m"
            }
#line 700 "write_deps_file.m"
            {
#line 700 "write_deps_file.m"
              parse_tree__write_deps_file__V_674_674 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_674_674, 0) = ((MR_Box) ((MR_String) " : "));
#line 700 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_674_674, 1) = ((MR_Box) (parse_tree__write_deps_file__V_676_676));
#line 700 "write_deps_file.m"
            }
#line 700 "write_deps_file.m"
            {
#line 700 "write_deps_file.m"
              parse_tree__write_deps_file__V_673_673 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_673_673, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_92));
#line 700 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_673_673, 1) = ((MR_Box) (parse_tree__write_deps_file__V_674_674));
#line 700 "write_deps_file.m"
            }
#line 699 "write_deps_file.m"
            {
#line 699 "write_deps_file.m"
              parse_tree__write_deps_file__V_671_671 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_671_671, 0) = ((MR_Box) ((MR_String) "\n"));
#line 699 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_671_671, 1) = ((MR_Box) (parse_tree__write_deps_file__V_673_673));
#line 699 "write_deps_file.m"
            }
#line 699 "write_deps_file.m"
            {
#line 699 "write_deps_file.m"
              parse_tree__write_deps_file__V_670_670 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_670_670, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_95));
#line 699 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_670_670, 1) = ((MR_Box) (parse_tree__write_deps_file__V_671_671));
#line 699 "write_deps_file.m"
            }
#line 699 "write_deps_file.m"
            {
#line 699 "write_deps_file.m"
              parse_tree__write_deps_file__V_668_668 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_668_668, 0) = ((MR_Box) ((MR_String) "\044(ALL_MCPIFLAGS) "));
#line 699 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_668_668, 1) = ((MR_Box) (parse_tree__write_deps_file__V_670_670));
#line 699 "write_deps_file.m"
            }
#line 698 "write_deps_file.m"
            {
#line 698 "write_deps_file.m"
              parse_tree__write_deps_file__V_666_666 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_666_666, 0) = ((MR_Box) ((MR_String) "\t\044(MCPI) \044(ALL_GRADEFLAGS) "));
#line 698 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_666_666, 1) = ((MR_Box) (parse_tree__write_deps_file__V_668_668));
#line 698 "write_deps_file.m"
            }
#line 697 "write_deps_file.m"
            {
#line 697 "write_deps_file.m"
              parse_tree__write_deps_file__V_664_664 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_664_664, 0) = ((MR_Box) ((MR_String) "\n"));
#line 697 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_664_664, 1) = ((MR_Box) (parse_tree__write_deps_file__V_666_666));
#line 697 "write_deps_file.m"
            }
#line 697 "write_deps_file.m"
            {
#line 697 "write_deps_file.m"
              parse_tree__write_deps_file__V_663_663 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_663_663, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_12));
#line 697 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_663_663, 1) = ((MR_Box) (parse_tree__write_deps_file__V_664_664));
#line 697 "write_deps_file.m"
            }
#line 697 "write_deps_file.m"
            {
#line 697 "write_deps_file.m"
              parse_tree__write_deps_file__V_661_661 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_661_661, 0) = ((MR_Box) ((MR_String) " : "));
#line 697 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_661_661, 1) = ((MR_Box) (parse_tree__write_deps_file__V_663_663));
#line 697 "write_deps_file.m"
            }
#line 697 "write_deps_file.m"
            {
#line 697 "write_deps_file.m"
              parse_tree__write_deps_file__V_660_660 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 697 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_660_660, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_93));
#line 697 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_660_660, 1) = ((MR_Box) (parse_tree__write_deps_file__V_661_661));
#line 697 "write_deps_file.m"
            }
#line 696 "write_deps_file.m"
            {
#line 696 "write_deps_file.m"
              parse_tree__write_deps_file__V_657_657 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 696 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_657_657, 0) = ((MR_Box) ((MR_String) "\n"));
#line 696 "write_deps_file.m"
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_657_657, 1) = ((MR_Box) (parse_tree__write_deps_file__V_660_660));
#line 696 "write_deps_file.m"
            }
#line 695 "write_deps_file.m"
            {
#line 695 "write_deps_file.m"
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_48, parse_tree__write_deps_file__V_657_657);
            }
#line 695 "write_deps_file.m"
          }
#line 723 "write_deps_file.m"
        {
#line 723 "write_deps_file.m"
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DepStream_48);
        }
#line 724 "write_deps_file.m"
        {
#line 724 "write_deps_file.m"
          mercury__io__rename_file_5_p_0(parse_tree__write_deps_file__TmpDependencyFileName_43, parse_tree__write_deps_file__DependencyFileName_41, &parse_tree__write_deps_file__Result3_157);
        }
#line 757 "write_deps_file.m"
        if ((parse_tree__write_deps_file__Result3_157 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 758 "write_deps_file.m"
          {
#line 759 "write_deps_file.m"
            {
#line 759 "write_deps_file.m"
              libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_39, (MR_String) " done.\n");
#line 759 "write_deps_file.m"
              return;
            }
#line 758 "write_deps_file.m"
          }
#line 757 "write_deps_file.m"
        else
#line 727 "write_deps_file.m"
          {
#line 727 "write_deps_file.m"
            MR_Word parse_tree__write_deps_file__Result4_159;

#line 730 "write_deps_file.m"
            {
#line 730 "write_deps_file.m"
              mercury__io__remove_file_4_p_0(parse_tree__write_deps_file__DependencyFileName_41, &parse_tree__write_deps_file__Result4_159);
            }
#line 739 "write_deps_file.m"
            if ((parse_tree__write_deps_file__Result4_159 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 740 "write_deps_file.m"
              {
#line 740 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__Result5_162;

#line 741 "write_deps_file.m"
                {
#line 741 "write_deps_file.m"
                  mercury__io__rename_file_5_p_0(parse_tree__write_deps_file__TmpDependencyFileName_43, parse_tree__write_deps_file__DependencyFileName_41, &parse_tree__write_deps_file__Result5_162);
                }
#line 752 "write_deps_file.m"
                if ((parse_tree__write_deps_file__Result5_162 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 753 "write_deps_file.m"
                  {
#line 754 "write_deps_file.m"
                    {
#line 754 "write_deps_file.m"
                      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_39, (MR_String) " done.\n");
#line 754 "write_deps_file.m"
                      return;
                    }
#line 753 "write_deps_file.m"
                  }
#line 752 "write_deps_file.m"
                else
#line 744 "write_deps_file.m"
                  {
#line 744 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__Error5_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result5_162, (MR_Integer) 0)));
#line 744 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_755_755;
#line 744 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_757_757;
#line 744 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_758_758;
#line 744 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_760_760;
#line 744 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_761_761;
#line 744 "write_deps_file.m"
                    MR_Word parse_tree__write_deps_file__V_763_763;
#line 744 "write_deps_file.m"
                    MR_String parse_tree__write_deps_file__Message_800;
#line 744 "write_deps_file.m"
                    MR_String parse_tree__write_deps_file__ErrorMsg_801;

#line 745 "write_deps_file.m"
                    {
#line 745 "write_deps_file.m"
                      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_39, (MR_String) " failed.\n");
                    }
#line 746 "write_deps_file.m"
                    {
#line 746 "write_deps_file.m"
                      libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_39);
                    }
#line 747 "write_deps_file.m"
                    {
#line 747 "write_deps_file.m"
                      mercury__io__error_message_2_p_0(parse_tree__write_deps_file__Error5_163, &parse_tree__write_deps_file__ErrorMsg_801);
                    }
#line 750 "write_deps_file.m"
                    {
#line 750 "write_deps_file.m"
                      parse_tree__write_deps_file__V_763_763 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_763_763, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrorMsg_801));
#line 750 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_763_763, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 750 "write_deps_file.m"
                    }
#line 750 "write_deps_file.m"
                    {
#line 750 "write_deps_file.m"
                      parse_tree__write_deps_file__V_761_761 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_761_761, 0) = ((MR_Box) ((MR_String) "\': "));
#line 750 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_761_761, 1) = ((MR_Box) (parse_tree__write_deps_file__V_763_763));
#line 750 "write_deps_file.m"
                    }
#line 749 "write_deps_file.m"
                    {
#line 749 "write_deps_file.m"
                      parse_tree__write_deps_file__V_760_760 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_760_760, 0) = ((MR_Box) (parse_tree__write_deps_file__DependencyFileName_41));
#line 749 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_760_760, 1) = ((MR_Box) (parse_tree__write_deps_file__V_761_761));
#line 749 "write_deps_file.m"
                    }
#line 749 "write_deps_file.m"
                    {
#line 749 "write_deps_file.m"
                      parse_tree__write_deps_file__V_758_758 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_758_758, 0) = ((MR_Box) ((MR_String) "\' as \140"));
#line 749 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_758_758, 1) = ((MR_Box) (parse_tree__write_deps_file__V_760_760));
#line 749 "write_deps_file.m"
                    }
#line 749 "write_deps_file.m"
                    {
#line 749 "write_deps_file.m"
                      parse_tree__write_deps_file__V_757_757 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_757_757, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpDependencyFileName_43));
#line 749 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_757_757, 1) = ((MR_Box) (parse_tree__write_deps_file__V_758_758));
#line 749 "write_deps_file.m"
                    }
#line 748 "write_deps_file.m"
                    {
#line 748 "write_deps_file.m"
                      parse_tree__write_deps_file__V_755_755 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 748 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_755_755, 0) = ((MR_Box) ((MR_String) "can\'t rename file \140"));
#line 748 "write_deps_file.m"
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_755_755, 1) = ((MR_Box) (parse_tree__write_deps_file__V_757_757));
#line 748 "write_deps_file.m"
                    }
#line 748 "write_deps_file.m"
                    {
#line 748 "write_deps_file.m"
                      mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_755_755, &parse_tree__write_deps_file__Message_800);
                    }
#line 751 "write_deps_file.m"
                    {
#line 751 "write_deps_file.m"
                      libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_800);
#line 751 "write_deps_file.m"
                      return;
                    }
#line 744 "write_deps_file.m"
                  }
#line 740 "write_deps_file.m"
              }
#line 739 "write_deps_file.m"
            else
#line 732 "write_deps_file.m"
              {
#line 732 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__Error4_160 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result4_159, (MR_Integer) 0)));
#line 732 "write_deps_file.m"
                MR_String parse_tree__write_deps_file__ErrorMsg_161;
#line 732 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_769_769;
#line 732 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_771_771;
#line 732 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_772_772;
#line 732 "write_deps_file.m"
                MR_Word parse_tree__write_deps_file__V_774_774;
#line 732 "write_deps_file.m"
                MR_String parse_tree__write_deps_file__Message_799;

#line 733 "write_deps_file.m"
                {
#line 733 "write_deps_file.m"
                  libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_39, (MR_String) " failed.\n");
                }
#line 734 "write_deps_file.m"
                {
#line 734 "write_deps_file.m"
                  libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_39);
                }
#line 735 "write_deps_file.m"
                {
#line 735 "write_deps_file.m"
                  mercury__io__error_message_2_p_0(parse_tree__write_deps_file__Error4_160, &parse_tree__write_deps_file__ErrorMsg_161);
                }
#line 737 "write_deps_file.m"
                {
#line 737 "write_deps_file.m"
                  parse_tree__write_deps_file__V_774_774 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 737 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_774_774, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrorMsg_161));
#line 737 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_774_774, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 737 "write_deps_file.m"
                }
#line 737 "write_deps_file.m"
                {
#line 737 "write_deps_file.m"
                  parse_tree__write_deps_file__V_772_772 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 737 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_772_772, 0) = ((MR_Box) ((MR_String) "\': "));
#line 737 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_772_772, 1) = ((MR_Box) (parse_tree__write_deps_file__V_774_774));
#line 737 "write_deps_file.m"
                }
#line 736 "write_deps_file.m"
                {
#line 736 "write_deps_file.m"
                  parse_tree__write_deps_file__V_771_771 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_771_771, 0) = ((MR_Box) (parse_tree__write_deps_file__DependencyFileName_41));
#line 736 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_771_771, 1) = ((MR_Box) (parse_tree__write_deps_file__V_772_772));
#line 736 "write_deps_file.m"
                }
#line 736 "write_deps_file.m"
                {
#line 736 "write_deps_file.m"
                  parse_tree__write_deps_file__V_769_769 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 736 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_769_769, 0) = ((MR_Box) ((MR_String) "can\'t remove file \140"));
#line 736 "write_deps_file.m"
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__V_769_769, 1) = ((MR_Box) (parse_tree__write_deps_file__V_771_771));
#line 736 "write_deps_file.m"
                }
#line 736 "write_deps_file.m"
                {
#line 736 "write_deps_file.m"
                  mercury__string__append_list_2_p_0(parse_tree__write_deps_file__V_769_769, &parse_tree__write_deps_file__Message_799);
                }
#line 738 "write_deps_file.m"
                {
#line 738 "write_deps_file.m"
                  libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_799);
#line 738 "write_deps_file.m"
                  return;
                }
#line 732 "write_deps_file.m"
              }
#line 727 "write_deps_file.m"
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
