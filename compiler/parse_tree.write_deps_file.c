/*
** Automatically generated from `write_deps_file.m'
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


/* :- module parse_tree.write_deps_file. */
/* :- implementation. */

/*
INIT mercury__parse_tree__write_deps_file__init
ENDINIT
*/

#include "parse_tree.write_deps_file.mih"


#include "libs.mih"
#include "make.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
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
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_deps_graph.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s {
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17;
  MR_bool parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded;
  jmp_buf parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__TypeCtorInfo_366_366;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Var_44;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Var_45;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Var_29;
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_Var_29;
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_Var_44;
};


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5);

static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(
  MR_Word parse_tree__write_deps_file__Modules_5,
  MR_Word parse_tree__write_deps_file__DepsMap_6,
  MR_Word * parse_tree__write_deps_file__ExtraLinkObjs_8);

static MR_bool MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_56_93_95_48_10_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_56_93_95_48_10_p_0(
  MR_Word parse_tree__write_deps_file__Globals_11,
  MR_Word parse_tree__write_deps_file__Dep_12,
  MR_Word parse_tree__write_deps_file__IntDepsGraph_13,
  MR_Word parse_tree__write_deps_file__ImpDepsGraph_14,
  MR_Word parse_tree__write_deps_file__IndirectDepsGraph_15,
  MR_Word parse_tree__write_deps_file__IndirectOptDepsGraph_16,
  MR_Word parse_tree__write_deps_file__TransOptOrder_17);

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1174__1_5_p_0(
  MR_Word parse_tree__write_deps_file__Globals_8,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_117,
  MR_String * parse_tree__write_deps_file__LambdaHeadVar__2_118);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1128__1_2_p_0(
  MR_Word parse_tree__write_deps_file__DepsMap_11,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_90);

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1019__1_4_p_0(
  MR_Word parse_tree__write_deps_file__DepsGraph_8,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_15,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__2_16,
  MR_Word * parse_tree__write_deps_file__LambdaHeadVar__3_17);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__990__1_2_p_0(
  MR_Word parse_tree__write_deps_file__ModuleName_22,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_47);

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__do_write_dependency_file__611__1_7_p_0(
  MR_Word parse_tree__write_deps_file__DepStream_10,
  MR_Word parse_tree__write_deps_file__Globals_13,
  MR_Word parse_tree__write_deps_file__ForeignImportedModuleNames_144,
  MR_String parse_tree__write_deps_file__ForeignImportExt_146,
  MR_String parse_tree__write_deps_file__LambdaHeadVar__1_542);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__do_write_dependency_file__578__1_3_p_0(
  MR_Word parse_tree__write_deps_file__SourceFileModuleName_19,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_535,
  MR_Word * parse_tree__write_deps_file__LambdaHeadVar__2_536);

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__do_write_dependency_file__294__1_7_p_0(
  MR_Word parse_tree__write_deps_file__DepStream_10,
  MR_Word parse_tree__write_deps_file__Globals_13,
  MR_Word parse_tree__write_deps_file__ModuleName_20,
  MR_Word parse_tree__write_deps_file__NestedDeps_28,
  MR_String parse_tree__write_deps_file__LambdaHeadVar__1_288);

static void MR_CALL 
parse_tree__write_deps_file__compare_module_names_3_p_0(
  MR_Word parse_tree__write_deps_file__Sym1_4,
  MR_Word parse_tree__write_deps_file__Sym2_5,
  MR_Word * parse_tree__write_deps_file__Result_6);

static void MR_CALL 
parse_tree__write_deps_file__get_both_opt_deps_8_p_0(
  MR_Word parse_tree__write_deps_file__Globals_1,
  MR_Word parse_tree__write_deps_file__BuildOptFiles_2,
  MR_Word parse_tree__write_deps_file__IntermodDirs_3,
  MR_Word parse_tree__write_deps_file__HeadVar__4_4,
  MR_Word * parse_tree__write_deps_file__HeadVar__5_5,
  MR_Word * parse_tree__write_deps_file__HeadVar__6_6);

static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0(
  MR_Word parse_tree__write_deps_file__Stream_5,
  MR_Word parse_tree__write_deps_file__SCC0_6);

static void MR_CALL 
parse_tree__write_deps_file__get_source_file_3_p_0(
  MR_Word parse_tree__write_deps_file__DepsMap_4,
  MR_Word parse_tree__write_deps_file__ModuleName_5,
  MR_String * parse_tree__write_deps_file__FileName_6);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(
  MR_Word parse_tree__write_deps_file__Globals_17,
  MR_Word parse_tree__write_deps_file__DepStream_18,
  MR_Word parse_tree__write_deps_file__ModuleName_19,
  MR_String parse_tree__write_deps_file__MakeVarName_20,
  MR_String parse_tree__write_deps_file__ExeFileName_21,
  MR_String parse_tree__write_deps_file__InitCFileName_22,
  MR_String parse_tree__write_deps_file__InitObjFileName_23,
  MR_String parse_tree__write_deps_file__InitPicObjFileName_24,
  MR_String parse_tree__write_deps_file__InitFileName_25,
  MR_String parse_tree__write_deps_file__LibFileName_26,
  MR_String parse_tree__write_deps_file__SharedLibFileName_27,
  MR_String parse_tree__write_deps_file__JarFileName_28,
  MR_String parse_tree__write_deps_file__DepFileName_29,
  MR_String parse_tree__write_deps_file__DvFileName_30);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(
  MR_Word parse_tree__write_deps_file__Globals_8,
  MR_Word parse_tree__write_deps_file__DepStream_9,
  MR_Word parse_tree__write_deps_file__ModuleName_10,
  MR_String parse_tree__write_deps_file__MakeVarName_11,
  MR_Word parse_tree__write_deps_file__HeadVar__5_5);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(
  MR_Word parse_tree__write_deps_file__Globals_7,
  MR_Word parse_tree__write_deps_file__DepStream_8,
  MR_Word parse_tree__write_deps_file__ModuleName_9,
  MR_String parse_tree__write_deps_file__MakeVarName_10);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(
  void * parse_tree__write_deps_file__env_ptr_arg);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3(
  void * parse_tree__write_deps_file__env_ptr_arg);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(
  void * parse_tree__write_deps_file__env_ptr_arg);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(
  void * parse_tree__write_deps_file__env_ptr_arg);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(
  MR_Word parse_tree__write_deps_file__Globals_14,
  MR_Word parse_tree__write_deps_file__DepStream_15,
  MR_Word parse_tree__write_deps_file__ModuleName_16,
  MR_Word parse_tree__write_deps_file__DepsMap_17,
  MR_String parse_tree__write_deps_file__MakeVarName_18,
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_19,
  MR_Word parse_tree__write_deps_file__Intermod_20,
  MR_Word parse_tree__write_deps_file__TransOpt_21,
  MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_22,
  MR_String parse_tree__write_deps_file__MaybeOptsVar_23,
  MR_String parse_tree__write_deps_file__MaybeTransOptsVar_24);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(
  MR_Word parse_tree__write_deps_file__Globals_11,
  MR_Word parse_tree__write_deps_file__DepStream_12,
  MR_Word parse_tree__write_deps_file__ModuleName_13,
  MR_String parse_tree__write_deps_file__MakeVarName_14,
  MR_String parse_tree__write_deps_file__InitCFileName_15,
  MR_String parse_tree__write_deps_file__InitFileName_16,
  MR_String * parse_tree__write_deps_file__DepFileName_17,
  MR_String * parse_tree__write_deps_file__DvFileName_18);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(
  MR_Word parse_tree__write_deps_file__Globals_19,
  MR_Word parse_tree__write_deps_file__DepStream_20,
  MR_Word parse_tree__write_deps_file__ModuleName_21,
  MR_String parse_tree__write_deps_file__MakeVarName_22,
  MR_String parse_tree__write_deps_file__InitFileName_23,
  MR_String parse_tree__write_deps_file__InitObjFileName_24,
  MR_Word parse_tree__write_deps_file__Intermod_25,
  MR_Word parse_tree__write_deps_file__TransOpt_26,
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_27,
  MR_String * parse_tree__write_deps_file__MaybeOptsVar_28,
  MR_String * parse_tree__write_deps_file__MaybeTransOptsVar_29,
  MR_String * parse_tree__write_deps_file__MaybeModuleDepsVar_30,
  MR_String * parse_tree__write_deps_file__ExeFileName_31,
  MR_String * parse_tree__write_deps_file__JarFileName_32,
  MR_String * parse_tree__write_deps_file__LibFileName_33,
  MR_String * parse_tree__write_deps_file__SharedLibFileName_34);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_7_p_0(
  MR_Word parse_tree__write_deps_file__Globals_8,
  MR_String parse_tree__write_deps_file__SourceFileName_9,
  MR_Word parse_tree__write_deps_file__ModuleName_10,
  MR_Word parse_tree__write_deps_file__DepsMap_11,
  MR_Word parse_tree__write_deps_file__DepStream_12);

static void MR_CALL 
parse_tree__write_deps_file__select_ok_modules_3_p_0(
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
  MR_Word parse_tree__write_deps_file__DepsMap_2,
  MR_Word * parse_tree__write_deps_file__HeadVar__3_3);

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_4(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_3(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_2(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0(
  MR_Word parse_tree__write_deps_file__Globals_8,
  MR_String parse_tree__write_deps_file__SourceFileName_9,
  MR_Word parse_tree__write_deps_file__ModuleName_10,
  MR_Word parse_tree__write_deps_file__DepsMap_11,
  MR_Word parse_tree__write_deps_file__DepStream_12);

static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(
  MR_Word parse_tree__write_deps_file__DepsGraph0_4,
  MR_Word parse_tree__write_deps_file__ModuleName_5,
  MR_Word * parse_tree__write_deps_file__Dependencies_6);

static void MR_CALL 
parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(
  MR_Word parse_tree__write_deps_file__Globals_7,
  MR_Word parse_tree__write_deps_file__DepStream_8,
  MR_Word parse_tree__write_deps_file__ModuleName_9,
  MR_String parse_tree__write_deps_file__Ext_10);

static void MR_CALL 
parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(
  MR_Word parse_tree__write_deps_file__DepStream_1,
  MR_String parse_tree__write_deps_file__Suffix_2,
  MR_Word parse_tree__write_deps_file__HeadVar__3_3);

static void MR_CALL 
parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(
  MR_Word parse_tree__write_deps_file__Globals_1,
  MR_Word parse_tree__write_deps_file__DepStream_2,
  MR_String parse_tree__write_deps_file__Suffix_3,
  MR_Word parse_tree__write_deps_file__HeadVar__4_4);

static void MR_CALL 
parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(
  MR_Word parse_tree__write_deps_file__Globals_1,
  MR_Word parse_tree__write_deps_file__DepStream_2,
  MR_String parse_tree__write_deps_file__Suffix_3,
  MR_Word parse_tree__write_deps_file__Module_4,
  MR_Word parse_tree__write_deps_file__HeadVar__5_5);

static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependency_5_p_0(
  MR_Word parse_tree__write_deps_file__DepStream_6,
  MR_String parse_tree__write_deps_file__SourceFileName_7,
  MR_Word parse_tree__write_deps_file__IncludeFile_8);

static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0(
  MR_Word parse_tree__write_deps_file__DepStream_6,
  MR_String parse_tree__write_deps_file__SourceFileName_7,
  MR_Word parse_tree__write_deps_file__IncludeFiles_8);

static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
  MR_Word parse_tree__write_deps_file__HeadVar__2_2);

static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(
  MR_Word parse_tree__write_deps_file__Globals_9,
  MR_Word parse_tree__write_deps_file__DepStream_10,
  MR_String parse_tree__write_deps_file__Prefix_11,
  MR_String parse_tree__write_deps_file__Suffix_12,
  MR_Word parse_tree__write_deps_file__Basis_13,
  MR_Word parse_tree__write_deps_file__Modules_14);

static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_list_6_p_0(
  MR_Word parse_tree__write_deps_file__Globals_1,
  MR_Word parse_tree__write_deps_file__DepStream_2,
  MR_String parse_tree__write_deps_file__Suffix_3,
  MR_Word parse_tree__write_deps_file__HeadVar__4_4);

static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_set_6_p_0(
  MR_Word parse_tree__write_deps_file__Globals_7,
  MR_Word parse_tree__write_deps_file__DepStream_8,
  MR_String parse_tree__write_deps_file__Suffix_9,
  MR_Word parse_tree__write_deps_file__Modules_10);

static void MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_9_p_0_6(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_9_p_0_5(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_9_p_0_4(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_9_p_0_3(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_9_p_0_2(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_9_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_9_p_0(
  MR_Word parse_tree__write_deps_file__DepStream_10,
  MR_String parse_tree__write_deps_file__DependencyFileName_11,
  MR_String parse_tree__write_deps_file__TmpDependencyFileName_12,
  MR_Word parse_tree__write_deps_file__Globals_13,
  MR_Word parse_tree__write_deps_file__ModuleAndImports_14,
  MR_Word parse_tree__write_deps_file__AllDeps_15,
  MR_Word parse_tree__write_deps_file__MaybeTransOptDeps_16);

static void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[110][2];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[8][3];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[2][7];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[3][10];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[3][5];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[4][6];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_7[1][9];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[2][8];




static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[110][2] = {
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
    ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[10])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "endif\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) " \044(ALL_MLLIBS)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "\tdone\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "\t\t} || exit 1; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044(INSTALL_INT_DIR)\"/*.\044\044ext \"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "\t\t\t{ [ -d \"\044\044dir\" ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(LN_S) .. \"\044\044dir\" || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "\t\trm -rf \"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "\t\tdir=\"\044(INSTALL_INT_DIR)/Mercury/\044\044{ext}s\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "; do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\t\"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[24])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044(INSTALL_GRADE_INT_DIR)\"/*.\044\044ext \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "\t\t\t{ [ -d \"\044\044dir\" ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(LN_S) .. \"\044\044dir\" || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "\t\trm -rf \"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) "\t\tdir=\"\044(INSTALL_GRADE_INT_DIR)/Mercury/\044\044{ext}s\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_String) "; do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_String) "\tdone\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[21])))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_INC_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_String) ".mhs); do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_String) "\t} || exit 1\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[21])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_INT_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_String) "\t\t} && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_INT_DIR)/Mercury/mihs; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[47])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \044(INSTALL_INT_DIR)/Mercury/mihs ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[49])))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \044(INSTALL_INT_DIR)/Mercury/mihs || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \044(INSTALL_INT_DIR)/Mercury/mihs\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_String) "\t} || exit 1\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[52])))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_GRADE_INC_SUBDIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[53])))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_String) "\t\t} && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \044(INSTALL_GRADE_INC_SUBDIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \044(INSTALL_GRADE_INC_SUBDIR) ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \044(INSTALL_GRADE_INC_SUBDIR) || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[58])))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \044(INSTALL_GRADE_INC_SUBDIR)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[59])))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[60])))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails, then we just use\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_String) "\t# The following is needed to support the \140--use-subdirs\' option\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[62])))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_String) "\tdone\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[63])))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_GRADE_INC_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[64])))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[65])))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_String) ".mihs); do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[66])))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_String) ".all_trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 69 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[68])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_String) ".all_opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 71 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[70])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[69])))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_String) ".all_int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 73 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[72])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[71])))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_String) ".all_ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 75 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[74])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[73])))
  },
  /* row 76 */
  {
    ((MR_Box) ((MR_String) ".classes")),
    ((MR_Box) ((MR_String) ".classes"))
  },
  /* row 77 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[76])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[75])))
  },
  /* row 78 */
  {
    ((MR_Box) ((MR_String) ".javas")),
    ((MR_Box) ((MR_String) ".javas"))
  },
  /* row 79 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[78])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[77])))
  },
  /* row 80 */
  {
    ((MR_Box) ((MR_String) ".trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 81 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[80])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[79])))
  },
  /* row 82 */
  {
    ((MR_Box) ((MR_String) ".opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 83 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[82])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[81])))
  },
  /* row 84 */
  {
    ((MR_Box) ((MR_String) ".int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 85 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[84])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[83])))
  },
  /* row 86 */
  {
    ((MR_Box) ((MR_String) ".ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 87 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[86])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[85])))
  },
  /* row 88 */
  {
    ((MR_Box) ((MR_String) ".check")),
    ((MR_Box) ((MR_String) ".errs"))
  },
  /* row 89 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[88])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[87])))
  },
  /* row 90 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 91 */
  {
    ((MR_Box) ((MR_String) ".foreign_cs) | xargs rm -f\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[90])))
  },
  /* row 92 */
  {
    ((MR_Box) ((MR_String) " :")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 93 */
  {
    ((MR_Box) ((MR_String) ".fact_tables =")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 94 */
  {
    ((MR_Box) ((MR_String) ".fact_tables.cs =")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 95 */
  {
    ((MR_Box) ((MR_String) ".fact_tables.os =")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 96 */
  {
    ((MR_Box) ((MR_String) ".fact_tables:%=\044(cs_subdir)%.c)\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 97 */
  {
    ((MR_Box) ((MR_String) " : ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 98 */
  {
    ((MR_Box) ((MR_String) " \044(ERR_REDIRECT)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 99 */
  {
    ((MR_Box) ((MR_String) ".cs)\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLLIBS_DEP))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLOBJS))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLOBJS)))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_String) "ifeq (\044(findstring java,\044(GRADE)),java)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_String) ".classes)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_String) "else\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_String) " \044(ALL_MLLIBS)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_String) "\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_String) ")\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_String) ".classes) | xargs rm -f\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[8][3] = {
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
    ((MR_Box) (parse_tree__write_deps_file__do_write_dependency_file_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0])),
    ((MR_Box) (parse_tree__write_deps_file__do_write_dependency_file_9_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[1])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[3])),
    ((MR_Box) (parse_tree__write_deps_file__write_module_scc_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[2][7] = {
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

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
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
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0)),
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

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)),
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



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__write_deps_file__succeeded;

        if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4;
        else
          {
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_54_54 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
            MR_Word parse_tree__write_deps_file__TypeCtorInfo_56_56;
            MR_Word parse_tree__write_deps_file__Module_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word parse_tree__write_deps_file__Modules_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word parse_tree__write_deps_file__ModuleImports_17;
            MR_Word parse_tree__write_deps_file__FactDeps_18;
            MR_Integer parse_tree__write_deps_file__NumFactDeps_19;
            MR_Word parse_tree__write_deps_file__ModuleList_20;
            MR_Word parse_tree__write_deps_file__NewLinkObjs_22;
            MR_Word parse_tree__write_deps_file__Var_25;
            MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26;
            MR_Box parse_tree__write_deps_file__conv0_Var_25;
            MR_Word parse_tree__write_deps_file__Var_16;
            MR_String parse_tree__write_deps_file__Var_28;
            MR_Word parse_tree__write_deps_file__Var_29;
            MR_Word parse_tree__write_deps_file__Var_30;
            MR_Word parse_tree__write_deps_file__Var_31;
            MR_Word parse_tree__write_deps_file__Var_32;
            MR_Word parse_tree__write_deps_file__Var_33;
            MR_Word parse_tree__write_deps_file__Var_34;
            MR_Word parse_tree__write_deps_file__Var_35;
            MR_Word parse_tree__write_deps_file__Var_36;
            MR_Word parse_tree__write_deps_file__Var_37;
            MR_Word parse_tree__write_deps_file__Var_38;
            MR_Word parse_tree__write_deps_file__Var_39;
            MR_Word parse_tree__write_deps_file__Var_40;
            MR_Word parse_tree__write_deps_file__Var_41;
            MR_Word parse_tree__write_deps_file__Var_42;
            MR_Word parse_tree__write_deps_file__Var_43;
            MR_Word parse_tree__write_deps_file__Var_44;
            MR_Word parse_tree__write_deps_file__Var_45;
            MR_Word parse_tree__write_deps_file__Var_46;
            MR_Word parse_tree__write_deps_file__Var_47;
            MR_Word parse_tree__write_deps_file__Var_48;
            MR_Word parse_tree__write_deps_file__Var_49;
            MR_Word parse_tree__write_deps_file__Var_50;
            MR_Word parse_tree__write_deps_file__Var_51;
            MR_Word parse_tree__write_deps_file__Var_52;
            MR_String parse_tree__write_deps_file__Var_53;

            {
              mercury__map__lookup_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_54_54, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__HeadVar__2_2, ((MR_Box) (parse_tree__write_deps_file__Module_11)), &parse_tree__write_deps_file__conv0_Var_25);
            }
            parse_tree__write_deps_file__Var_25 = ((MR_Word) parse_tree__write_deps_file__conv0_Var_25);
            parse_tree__write_deps_file__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_25, (MR_Integer) 0)));
            parse_tree__write_deps_file__ModuleImports_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_25, (MR_Integer) 1)));
            parse_tree__write_deps_file__Var_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 0)));
            parse_tree__write_deps_file__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 1)));
            parse_tree__write_deps_file__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 2)));
            parse_tree__write_deps_file__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 3)));
            parse_tree__write_deps_file__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 4)));
            parse_tree__write_deps_file__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 5)));
            parse_tree__write_deps_file__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 6)));
            parse_tree__write_deps_file__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 7)));
            parse_tree__write_deps_file__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 8)));
            parse_tree__write_deps_file__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 9)));
            parse_tree__write_deps_file__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 10)));
            parse_tree__write_deps_file__FactDeps_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 11)));
            parse_tree__write_deps_file__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 12)));
            parse_tree__write_deps_file__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 13)));
            parse_tree__write_deps_file__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 14)));
            parse_tree__write_deps_file__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 15)));
            parse_tree__write_deps_file__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 16)));
            parse_tree__write_deps_file__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 17)));
            parse_tree__write_deps_file__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 18)));
            parse_tree__write_deps_file__Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 19)));
            parse_tree__write_deps_file__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 20)));
            parse_tree__write_deps_file__Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 21)));
            parse_tree__write_deps_file__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 22)));
            parse_tree__write_deps_file__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 23)));
            parse_tree__write_deps_file__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 24)));
            parse_tree__write_deps_file__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 25)));
            parse_tree__write_deps_file__Var_53 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_17, (MR_Integer) 26)));
            parse_tree__write_deps_file__TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              mercury__list__length_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_56_56, parse_tree__write_deps_file__FactDeps_18, &parse_tree__write_deps_file__NumFactDeps_19);
            }
            {
              mercury__list__duplicate_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_54_54, parse_tree__write_deps_file__NumFactDeps_19, ((MR_Box) (parse_tree__write_deps_file__Module_11)), &parse_tree__write_deps_file__ModuleList_20);
            }
            {
              mercury__assoc_list__from_corresponding_lists_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_56_56, parse_tree__write_deps_file__TypeCtorInfo_54_54, parse_tree__write_deps_file__FactDeps_18, parse_tree__write_deps_file__ModuleList_20, &parse_tree__write_deps_file__NewLinkObjs_22);
            }
            {
              mercury__list__append_3_p_1((MR_Word) &parse_tree__write_deps_file_scalar_common_2[2], parse_tree__write_deps_file__NewLinkObjs_22, parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4, &parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__write_deps_file__next_value_of_HeadVar__1_1 = parse_tree__write_deps_file__Modules_12;
              MR_Word parse_tree__write_deps_file__next_value_of_STATE_VARIABLE_ExtraLinkObjs_0_4 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26;

              parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4 = parse_tree__write_deps_file__next_value_of_STATE_VARIABLE_ExtraLinkObjs_0_4;
              parse_tree__write_deps_file__HeadVar__1_1 = parse_tree__write_deps_file__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(
  MR_Word parse_tree__write_deps_file__Modules_5,
  MR_Word parse_tree__write_deps_file__DepsMap_6,
  MR_Word * parse_tree__write_deps_file__ExtraLinkObjs_8)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__ExtraLinkObjs0_9;

    {
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(parse_tree__write_deps_file__Modules_5, parse_tree__write_deps_file__DepsMap_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_deps_file__ExtraLinkObjs0_9);
    }
    {
      mercury__list__reverse_2_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_2[2], parse_tree__write_deps_file__ExtraLinkObjs0_9, parse_tree__write_deps_file__ExtraLinkObjs_8);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_56_93_95_48_10_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

    {
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__990__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
    return parse_tree__write_deps_file__succeeded;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_56_93_95_48_10_p_0(
  MR_Word parse_tree__write_deps_file__Globals_11,
  MR_Word parse_tree__write_deps_file__Dep_12,
  MR_Word parse_tree__write_deps_file__IntDepsGraph_13,
  MR_Word parse_tree__write_deps_file__ImpDepsGraph_14,
  MR_Word parse_tree__write_deps_file__IndirectDepsGraph_15,
  MR_Word parse_tree__write_deps_file__IndirectOptDepsGraph_16,
  MR_Word parse_tree__write_deps_file__TransOptOrder_17)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_122_122;
    MR_Word parse_tree__write_deps_file__ModuleName_22;
    MR_Word parse_tree__write_deps_file__IndirectOptDeps_23;
    MR_Word parse_tree__write_deps_file__Intermod_24;
    MR_Word parse_tree__write_deps_file__IntDeps_25;
    MR_Word parse_tree__write_deps_file__ImpDeps_26;
    MR_Word parse_tree__write_deps_file__IndirectDeps_27;
    MR_Word parse_tree__write_deps_file__ForeignImportModules0_28;
    MR_Word parse_tree__write_deps_file__Target_29;
    MR_Word parse_tree__write_deps_file__ForeignImportModules_30;
    MR_Word parse_tree__write_deps_file__FindModule_31;
    MR_Word parse_tree__write_deps_file__TransOptDeps0_33;
    MR_Word parse_tree__write_deps_file__TransOptDeps_36;
    MR_Word parse_tree__write_deps_file__Errors_37;
    MR_Word parse_tree__write_deps_file__FatalErrors_38;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Dep_12, (MR_Integer) 1)));
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_44_44;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_45_45;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46;
    MR_Word parse_tree__write_deps_file__Var_48;
    MR_Word parse_tree__write_deps_file__Var_123;
    MR_Word parse_tree__write_deps_file__Var_124;
    MR_Word parse_tree__write_deps_file__Var_125;
    MR_Word parse_tree__write_deps_file__Var_126;
    MR_Word parse_tree__write_deps_file__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Dep_12, (MR_Integer) 0)));
    MR_String parse_tree__write_deps_file__Var_68;
    MR_Word parse_tree__write_deps_file__Var_69;
    MR_Word parse_tree__write_deps_file__Var_70;
    MR_Word parse_tree__write_deps_file__Var_71;
    MR_Word parse_tree__write_deps_file__Var_72;
    MR_Word parse_tree__write_deps_file__Var_73;
    MR_Word parse_tree__write_deps_file__Var_74;
    MR_Word parse_tree__write_deps_file__Var_75;
    MR_Word parse_tree__write_deps_file__Var_76;
    MR_Word parse_tree__write_deps_file__Var_77;
    MR_Word parse_tree__write_deps_file__Var_78;
    MR_Word parse_tree__write_deps_file__Var_79;
    MR_Word parse_tree__write_deps_file__Var_81;
    MR_Word parse_tree__write_deps_file__Var_82;
    MR_Word parse_tree__write_deps_file__Var_83;
    MR_Word parse_tree__write_deps_file__Var_84;
    MR_Word parse_tree__write_deps_file__Var_85;
    MR_Word parse_tree__write_deps_file__Var_86;
    MR_Word parse_tree__write_deps_file__Var_87;
    MR_Word parse_tree__write_deps_file__Var_88;
    MR_Word parse_tree__write_deps_file__Var_89;
    MR_Word parse_tree__write_deps_file__Var_90;
    MR_Word parse_tree__write_deps_file__Var_91;
    MR_Word parse_tree__write_deps_file__Var_92;
    MR_Word parse_tree__write_deps_file__Var_93;
    MR_String parse_tree__write_deps_file__Var_94;
    MR_Word parse_tree__write_deps_file__Var_80;
    MR_Word parse_tree__write_deps_file__TransOptDeps1_35;
    MR_Word parse_tree__write_deps_file__Var_34;
    MR_String parse_tree__write_deps_file__Var_95;
    MR_Word parse_tree__write_deps_file__Var_96;
    MR_Word parse_tree__write_deps_file__Var_97;
    MR_Word parse_tree__write_deps_file__Var_98;
    MR_Word parse_tree__write_deps_file__Var_99;
    MR_Word parse_tree__write_deps_file__Var_100;
    MR_Word parse_tree__write_deps_file__Var_101;
    MR_Word parse_tree__write_deps_file__Var_102;
    MR_Word parse_tree__write_deps_file__Var_103;
    MR_Word parse_tree__write_deps_file__Var_104;
    MR_Word parse_tree__write_deps_file__Var_105;
    MR_Word parse_tree__write_deps_file__Var_106;
    MR_Word parse_tree__write_deps_file__Var_107;
    MR_Word parse_tree__write_deps_file__Var_108;
    MR_Word parse_tree__write_deps_file__Var_109;
    MR_Word parse_tree__write_deps_file__Var_110;
    MR_Word parse_tree__write_deps_file__Var_111;
    MR_Word parse_tree__write_deps_file__Var_112;
    MR_Word parse_tree__write_deps_file__Var_113;
    MR_Word parse_tree__write_deps_file__Var_114;
    MR_Word parse_tree__write_deps_file__Var_115;
    MR_Word parse_tree__write_deps_file__Var_116;
    MR_Word parse_tree__write_deps_file__Var_117;
    MR_Word parse_tree__write_deps_file__Var_118;
    MR_Word parse_tree__write_deps_file__Var_119;
    MR_String parse_tree__write_deps_file__Var_120;

    {
      parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, &parse_tree__write_deps_file__ModuleName_22);
    }
    {
      parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__IndirectOptDepsGraph_16, parse_tree__write_deps_file__ModuleName_22, &parse_tree__write_deps_file__IndirectOptDeps_23);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_11, (MR_Integer) 330, &parse_tree__write_deps_file__Intermod_24);
    }
    switch (parse_tree__write_deps_file__Intermod_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__IntDepsGraph_13, parse_tree__write_deps_file__ModuleName_22, &parse_tree__write_deps_file__IntDeps_25);
          }
          {
            parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__ImpDepsGraph_14, parse_tree__write_deps_file__ModuleName_22, &parse_tree__write_deps_file__ImpDeps_26);
          }
          {
            parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__IndirectDepsGraph_15, parse_tree__write_deps_file__ModuleName_22, &parse_tree__write_deps_file__IndirectDeps_27);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          parse_tree__write_deps_file__IntDeps_25 = parse_tree__write_deps_file__IndirectOptDeps_23;
          parse_tree__write_deps_file__ImpDeps_26 = parse_tree__write_deps_file__IndirectOptDeps_23;
          parse_tree__write_deps_file__IndirectDeps_27 = parse_tree__write_deps_file__IndirectOptDeps_23;
        }
        break;
    }
    {
      parse_tree__write_deps_file__ForeignImportModules0_28 = parse_tree__prog_data_foreign__init_foreign_import_modules_0_f_0();
    }
    {
      libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_11, &parse_tree__write_deps_file__Target_29);
    }
    parse_tree__write_deps_file__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_28, (MR_Integer) 0)));
    parse_tree__write_deps_file__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_28, (MR_Integer) 1)));
    parse_tree__write_deps_file__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_28, (MR_Integer) 2)));
    parse_tree__write_deps_file__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_28, (MR_Integer) 3)));
    switch (parse_tree__write_deps_file__Target_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__write_deps_file__ForeignImportModules_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_30, 0) = ((MR_Box) (parse_tree__write_deps_file__IndirectOptDeps_23));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_30, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_125));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_30, 2) = ((MR_Box) (parse_tree__write_deps_file__Var_124));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_30, 3) = ((MR_Box) (parse_tree__write_deps_file__Var_123));
        }
        break;
      case (MR_Integer) 1:
        {
          parse_tree__write_deps_file__ForeignImportModules_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_30, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_126));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_30, 1) = ((MR_Box) (parse_tree__write_deps_file__IndirectOptDeps_23));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_30, 2) = ((MR_Box) (parse_tree__write_deps_file__Var_124));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_30, 3) = ((MR_Box) (parse_tree__write_deps_file__Var_123));
        }
        break;
      case (MR_Integer) 3:
        {
          parse_tree__write_deps_file__ForeignImportModules_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_30, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_126));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_30, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_125));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_30, 2) = ((MR_Box) (parse_tree__write_deps_file__Var_124));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_30, 3) = ((MR_Box) (parse_tree__write_deps_file__IndirectOptDeps_23));
        }
        break;
      case (MR_Integer) 2:
        {
          parse_tree__write_deps_file__ForeignImportModules_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_30, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_126));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_30, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_125));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_30, 2) = ((MR_Box) (parse_tree__write_deps_file__IndirectOptDeps_23));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_30, 3) = ((MR_Box) (parse_tree__write_deps_file__Var_123));
        }
        break;
    }
    parse_tree__write_deps_file__Var_68 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 0)));
    parse_tree__write_deps_file__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 1)));
    parse_tree__write_deps_file__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 2)));
    parse_tree__write_deps_file__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 3)));
    parse_tree__write_deps_file__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 4)));
    parse_tree__write_deps_file__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 5)));
    parse_tree__write_deps_file__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 6)));
    parse_tree__write_deps_file__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 7)));
    parse_tree__write_deps_file__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 8)));
    parse_tree__write_deps_file__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 9)));
    parse_tree__write_deps_file__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 10)));
    parse_tree__write_deps_file__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 11)));
    parse_tree__write_deps_file__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 12)));
    parse_tree__write_deps_file__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 13)));
    parse_tree__write_deps_file__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 14)));
    parse_tree__write_deps_file__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 15)));
    parse_tree__write_deps_file__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 16)));
    parse_tree__write_deps_file__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 17)));
    parse_tree__write_deps_file__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 18)));
    parse_tree__write_deps_file__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 19)));
    parse_tree__write_deps_file__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 20)));
    parse_tree__write_deps_file__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 21)));
    parse_tree__write_deps_file__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 22)));
    parse_tree__write_deps_file__Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 23)));
    parse_tree__write_deps_file__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 24)));
    parse_tree__write_deps_file__Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 25)));
    parse_tree__write_deps_file__Var_94 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 26)));
    {
      parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_68));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_69));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 2) = ((MR_Box) (parse_tree__write_deps_file__Var_70));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 3) = ((MR_Box) (parse_tree__write_deps_file__Var_71));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_72));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_73));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 6) = ((MR_Box) (parse_tree__write_deps_file__Var_74));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 7) = ((MR_Box) (parse_tree__write_deps_file__Var_75));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 8) = ((MR_Box) (parse_tree__write_deps_file__Var_76));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 9) = ((MR_Box) (parse_tree__write_deps_file__Var_77));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 10) = ((MR_Box) (parse_tree__write_deps_file__Var_78));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 11) = ((MR_Box) (parse_tree__write_deps_file__Var_79));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 12) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportModules_30));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 13) = ((MR_Box) (parse_tree__write_deps_file__Var_81));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 14) = ((MR_Box) (parse_tree__write_deps_file__Var_82));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 15) = ((MR_Box) (parse_tree__write_deps_file__Var_83));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 16) = ((MR_Box) (parse_tree__write_deps_file__Var_84));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 17) = ((MR_Box) (parse_tree__write_deps_file__Var_85));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 18) = ((MR_Box) (parse_tree__write_deps_file__Var_86));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 19) = ((MR_Box) (parse_tree__write_deps_file__Var_87));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 20) = ((MR_Box) (parse_tree__write_deps_file__Var_88));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 21) = ((MR_Box) (parse_tree__write_deps_file__Var_89));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 22) = ((MR_Box) (parse_tree__write_deps_file__Var_90));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 23) = ((MR_Box) (parse_tree__write_deps_file__Var_91));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 24) = ((MR_Box) (parse_tree__write_deps_file__Var_92));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 25) = ((MR_Box) (parse_tree__write_deps_file__Var_93));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, 26) = ((MR_Box) (parse_tree__write_deps_file__Var_94));
    }
    {
      parse_tree__module_imports__module_and_imports_set_int_deps_3_p_0(parse_tree__write_deps_file__IntDeps_25, parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, &parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_44_44);
    }
    {
      parse_tree__module_imports__module_and_imports_set_imp_deps_3_p_0(parse_tree__write_deps_file__ImpDeps_26, parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_44_44, &parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_45_45);
    }
    {
      parse_tree__module_imports__module_and_imports_set_indirect_deps_3_p_0(parse_tree__write_deps_file__IndirectDeps_27, parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_45_45, &parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46);
    }
    {
      parse_tree__write_deps_file__FindModule_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_31, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_31, 1) = ((MR_Box) (parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_56_93_95_48_10_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_31, 3) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_22));
    }
    {
      mercury__list__drop_while_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_deps_file__FindModule_31, parse_tree__write_deps_file__TransOptOrder_17, &parse_tree__write_deps_file__TransOptDeps0_33);
    }
    parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) parse_tree__write_deps_file__TransOptDeps0_33)) == (MR_mktag((MR_Integer) 1)));
    if (parse_tree__write_deps_file__succeeded)
      {
        parse_tree__write_deps_file__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__TransOptDeps0_33, (MR_Integer) 0)));
        parse_tree__write_deps_file__TransOptDeps1_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__TransOptDeps0_33, (MR_Integer) 1)));
        parse_tree__write_deps_file__TransOptDeps_36 = parse_tree__write_deps_file__TransOptDeps1_35;
      }
    else
      parse_tree__write_deps_file__TransOptDeps_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    parse_tree__write_deps_file__Var_95 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 0)));
    parse_tree__write_deps_file__Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 1)));
    parse_tree__write_deps_file__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 2)));
    parse_tree__write_deps_file__Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 3)));
    parse_tree__write_deps_file__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 4)));
    parse_tree__write_deps_file__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 5)));
    parse_tree__write_deps_file__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 6)));
    parse_tree__write_deps_file__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 7)));
    parse_tree__write_deps_file__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 8)));
    parse_tree__write_deps_file__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 9)));
    parse_tree__write_deps_file__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 10)));
    parse_tree__write_deps_file__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 11)));
    parse_tree__write_deps_file__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 12)));
    parse_tree__write_deps_file__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 13)));
    parse_tree__write_deps_file__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 14)));
    parse_tree__write_deps_file__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 15)));
    parse_tree__write_deps_file__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 16)));
    parse_tree__write_deps_file__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 17)));
    parse_tree__write_deps_file__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 18)));
    parse_tree__write_deps_file__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 19)));
    parse_tree__write_deps_file__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 20)));
    parse_tree__write_deps_file__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 21)));
    parse_tree__write_deps_file__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 22)));
    parse_tree__write_deps_file__Errors_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 23)));
    parse_tree__write_deps_file__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 24)));
    parse_tree__write_deps_file__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 25)));
    parse_tree__write_deps_file__Var_120 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 26)));
    {
      parse_tree__write_deps_file__Var_48 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
    }
    parse_tree__write_deps_file__TypeCtorInfo_122_122 = (MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0;
    {
      mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_122_122, parse_tree__write_deps_file__Errors_37, parse_tree__write_deps_file__Var_48, &parse_tree__write_deps_file__FatalErrors_38);
    }
    {
      parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_122_122, parse_tree__write_deps_file__FatalErrors_38);
    }
    if (parse_tree__write_deps_file__succeeded)
      {
        MR_Word parse_tree__write_deps_file__Var_49;

        {
          parse_tree__write_deps_file__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_49, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDeps_36));
        }
        {
          parse_tree__write_deps_file__write_dependency_file_6_p_0(parse_tree__write_deps_file__Globals_11, parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, parse_tree__write_deps_file__IndirectOptDeps_23, parse_tree__write_deps_file__Var_49);
        }
      }
    else
      {
      }
  }
}

void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0(
  MR_Word parse_tree__write_deps_file__Globals_1,
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
  MR_Word parse_tree__write_deps_file__IntDepsGraph_3,
  MR_Word parse_tree__write_deps_file__ImpDepsGraph_4,
  MR_Word parse_tree__write_deps_file__IndirectDepsGraph_5,
  MR_Word parse_tree__write_deps_file__IndirectOptDepsGraph_6,
  MR_Word parse_tree__write_deps_file__TransOptOrder_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__write_deps_file__succeeded;

        if ((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word parse_tree__write_deps_file__Dep_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word parse_tree__write_deps_file__Deps_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 1)));

            {
              parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_56_93_95_48_10_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_22, parse_tree__write_deps_file__IntDepsGraph_3, parse_tree__write_deps_file__ImpDepsGraph_4, parse_tree__write_deps_file__IndirectDepsGraph_5, parse_tree__write_deps_file__IndirectOptDepsGraph_6, parse_tree__write_deps_file__TransOptOrder_7);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__write_deps_file__next_value_of_HeadVar__2_2 = parse_tree__write_deps_file__Deps_23;

              parse_tree__write_deps_file__HeadVar__2_2 = parse_tree__write_deps_file__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1174__1_5_p_0(
  MR_Word parse_tree__write_deps_file__Globals_8,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_117,
  MR_String * parse_tree__write_deps_file__LambdaHeadVar__2_118)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_String parse_tree__write_deps_file__F0_43;
    MR_Word parse_tree__write_deps_file__M_443 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__LambdaHeadVar__1_117, (MR_Integer) 0)));
    MR_String parse_tree__write_deps_file__E_444 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__LambdaHeadVar__1_117, (MR_Integer) 1)));

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__M_443, parse_tree__write_deps_file__E_444, (MR_Integer) 0, &parse_tree__write_deps_file__F0_43);
    }
    {
      *parse_tree__write_deps_file__LambdaHeadVar__2_118 = mercury__string__f_43_43_2_f_0((MR_String) "\044(os_subdir)", parse_tree__write_deps_file__F0_43);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1128__1_2_p_0(
  MR_Word parse_tree__write_deps_file__DepsMap_11,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_90)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_481_481 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word parse_tree__write_deps_file__ModuleImports_26;
    MR_Word parse_tree__write_deps_file__Var_91;
    MR_Word parse_tree__write_deps_file__Var_92;
    MR_Box parse_tree__write_deps_file__conv0_Var_91;
    MR_Word parse_tree__write_deps_file__Var_25;
    MR_String parse_tree__write_deps_file__Var_447;
    MR_Word parse_tree__write_deps_file__Var_448;
    MR_Word parse_tree__write_deps_file__Var_449;
    MR_Word parse_tree__write_deps_file__Var_450;
    MR_Word parse_tree__write_deps_file__Var_451;
    MR_Word parse_tree__write_deps_file__Var_452;
    MR_Word parse_tree__write_deps_file__Var_453;
    MR_Word parse_tree__write_deps_file__Var_454;
    MR_Word parse_tree__write_deps_file__Var_455;
    MR_Word parse_tree__write_deps_file__Var_456;
    MR_Word parse_tree__write_deps_file__Var_457;
    MR_Word parse_tree__write_deps_file__Var_458;
    MR_Word parse_tree__write_deps_file__Var_459;
    MR_Word parse_tree__write_deps_file__Var_460;
    MR_Word parse_tree__write_deps_file__Var_461;
    MR_Word parse_tree__write_deps_file__Var_462;
    MR_Word parse_tree__write_deps_file__Var_463;
    MR_Word parse_tree__write_deps_file__Var_464;
    MR_Word parse_tree__write_deps_file__Var_465;
    MR_Word parse_tree__write_deps_file__Var_466;
    MR_Word parse_tree__write_deps_file__Var_467;
    MR_Word parse_tree__write_deps_file__Var_468;
    MR_Word parse_tree__write_deps_file__Var_469;
    MR_Word parse_tree__write_deps_file__Var_470;
    MR_Word parse_tree__write_deps_file__Var_471;
    MR_String parse_tree__write_deps_file__Var_472;

    {
      mercury__map__lookup_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_481_481, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_11, ((MR_Box) (parse_tree__write_deps_file__LambdaHeadVar__1_90)), &parse_tree__write_deps_file__conv0_Var_91);
    }
    parse_tree__write_deps_file__Var_91 = ((MR_Word) parse_tree__write_deps_file__conv0_Var_91);
    parse_tree__write_deps_file__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_91, (MR_Integer) 0)));
    parse_tree__write_deps_file__ModuleImports_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_91, (MR_Integer) 1)));
    parse_tree__write_deps_file__Var_447 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 0)));
    parse_tree__write_deps_file__Var_448 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 1)));
    parse_tree__write_deps_file__Var_449 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 2)));
    parse_tree__write_deps_file__Var_450 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 3)));
    parse_tree__write_deps_file__Var_451 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 4)));
    parse_tree__write_deps_file__Var_452 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 5)));
    parse_tree__write_deps_file__Var_453 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 6)));
    parse_tree__write_deps_file__Var_454 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 7)));
    parse_tree__write_deps_file__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 8)));
    parse_tree__write_deps_file__Var_455 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 9)));
    parse_tree__write_deps_file__Var_456 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 10)));
    parse_tree__write_deps_file__Var_457 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 11)));
    parse_tree__write_deps_file__Var_458 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 12)));
    parse_tree__write_deps_file__Var_459 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 13)));
    parse_tree__write_deps_file__Var_460 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 14)));
    parse_tree__write_deps_file__Var_461 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 15)));
    parse_tree__write_deps_file__Var_462 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 16)));
    parse_tree__write_deps_file__Var_463 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 17)));
    parse_tree__write_deps_file__Var_464 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 18)));
    parse_tree__write_deps_file__Var_465 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 19)));
    parse_tree__write_deps_file__Var_466 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 20)));
    parse_tree__write_deps_file__Var_467 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 21)));
    parse_tree__write_deps_file__Var_468 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 22)));
    parse_tree__write_deps_file__Var_469 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 23)));
    parse_tree__write_deps_file__Var_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 24)));
    parse_tree__write_deps_file__Var_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 25)));
    parse_tree__write_deps_file__Var_472 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_26, (MR_Integer) 26)));
    {
      parse_tree__write_deps_file__succeeded = mercury__set__non_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_481_481, parse_tree__write_deps_file__Var_92);
    }
    return parse_tree__write_deps_file__succeeded;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1019__1_4_p_0(
  MR_Word parse_tree__write_deps_file__DepsGraph_8,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_15,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__2_16,
  MR_Word * parse_tree__write_deps_file__LambdaHeadVar__3_17)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_23_23 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word parse_tree__write_deps_file__Dep_14;
    MR_Box parse_tree__write_deps_file__conv0_Dep_14;

    {
      mercury__digraph__lookup_vertex_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, parse_tree__write_deps_file__DepsGraph_8, parse_tree__write_deps_file__LambdaHeadVar__1_15, &parse_tree__write_deps_file__conv0_Dep_14);
    }
    parse_tree__write_deps_file__Dep_14 = ((MR_Word) parse_tree__write_deps_file__conv0_Dep_14);
    {
      mercury__set__insert_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, ((MR_Box) (parse_tree__write_deps_file__Dep_14)), parse_tree__write_deps_file__LambdaHeadVar__2_16, parse_tree__write_deps_file__LambdaHeadVar__3_17);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__990__1_2_p_0(
  MR_Word parse_tree__write_deps_file__ModuleName_22,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_47)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;

    {
      parse_tree__write_deps_file__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__write_deps_file__ModuleName_22, parse_tree__write_deps_file__LambdaHeadVar__1_47);
    }
    parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
    return parse_tree__write_deps_file__succeeded;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__do_write_dependency_file__611__1_7_p_0(
  MR_Word parse_tree__write_deps_file__DepStream_10,
  MR_Word parse_tree__write_deps_file__Globals_13,
  MR_Word parse_tree__write_deps_file__ForeignImportedModuleNames_144,
  MR_String parse_tree__write_deps_file__ForeignImportExt_146,
  MR_String parse_tree__write_deps_file__LambdaHeadVar__1_542)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__Var_552;

    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) "\n\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__LambdaHeadVar__1_542);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) " : ");
    }
    {
      parse_tree__write_deps_file__Var_552 = mercury__set__to_sorted_list_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_deps_file__ForeignImportedModuleNames_144);
    }
    {
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__ForeignImportExt_146, parse_tree__write_deps_file__Var_552);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) "\n\n");
    }
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__do_write_dependency_file__578__1_3_p_0(
  MR_Word parse_tree__write_deps_file__SourceFileModuleName_19,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_535,
  MR_Word * parse_tree__write_deps_file__LambdaHeadVar__2_536)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_String parse_tree__write_deps_file__Var_537;

    {
      *parse_tree__write_deps_file__LambdaHeadVar__2_536 = parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(parse_tree__write_deps_file__LambdaHeadVar__1_535, parse_tree__write_deps_file__SourceFileModuleName_19);
    }
    parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) *parse_tree__write_deps_file__LambdaHeadVar__2_536)) == (MR_mktag((MR_Integer) 0)));
    if (parse_tree__write_deps_file__succeeded)
      {
        parse_tree__write_deps_file__Var_537 = ((MR_String) (MR_hl_field(MR_mktag(0), *parse_tree__write_deps_file__LambdaHeadVar__2_536, (MR_Integer) 0)));
        parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__Var_537, (MR_String) "mercury") == 0);
      }
    parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
    return parse_tree__write_deps_file__succeeded;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__do_write_dependency_file__294__1_7_p_0(
  MR_Word parse_tree__write_deps_file__DepStream_10,
  MR_Word parse_tree__write_deps_file__Globals_13,
  MR_Word parse_tree__write_deps_file__ModuleName_20,
  MR_Word parse_tree__write_deps_file__NestedDeps_28,
  MR_String parse_tree__write_deps_file__LambdaHeadVar__1_288)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_String parse_tree__write_deps_file__ExtName_71;
    MR_Word parse_tree__write_deps_file__Var_295;
    MR_Word parse_tree__write_deps_file__Var_298;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, parse_tree__write_deps_file__LambdaHeadVar__1_288, (MR_Integer) 1, &parse_tree__write_deps_file__ExtName_71);
    }
    {
      parse_tree__write_deps_file__Var_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_298, 0) = ((MR_Box) (parse_tree__write_deps_file__ExtName_71));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_298, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[97])));
    }
    {
      parse_tree__write_deps_file__Var_295 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_295, 0) = ((MR_Box) ((MR_String) "\n\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_295, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_298));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Var_295);
    }
    {
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__LambdaHeadVar__1_288, parse_tree__write_deps_file__NestedDeps_28);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__compare_module_names_3_p_0(
  MR_Word parse_tree__write_deps_file__Sym1_4,
  MR_Word parse_tree__write_deps_file__Sym2_5,
  MR_Word * parse_tree__write_deps_file__Result_6)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_String parse_tree__write_deps_file__Str1_7;
    MR_String parse_tree__write_deps_file__Str2_8;

    {
      parse_tree__write_deps_file__Str1_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__Sym1_4);
    }
    {
      parse_tree__write_deps_file__Str2_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__Sym2_5);
    }
    {
      mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__write_deps_file__Result_6, parse_tree__write_deps_file__Str1_7, parse_tree__write_deps_file__Str2_8);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__get_both_opt_deps_8_p_0(
  MR_Word parse_tree__write_deps_file__Globals_1,
  MR_Word parse_tree__write_deps_file__BuildOptFiles_2,
  MR_Word parse_tree__write_deps_file__IntermodDirs_3,
  MR_Word parse_tree__write_deps_file__HeadVar__4_4,
  MR_Word * parse_tree__write_deps_file__HeadVar__5_5,
  MR_Word * parse_tree__write_deps_file__HeadVar__6_6)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;

    if ((parse_tree__write_deps_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *parse_tree__write_deps_file__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *parse_tree__write_deps_file__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word parse_tree__write_deps_file__Dep_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 0)));
        MR_Word parse_tree__write_deps_file__Deps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 1)));
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;

        {
          parse_tree__write_deps_file__get_both_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__BuildOptFiles_2, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__Deps_19, &parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39, &parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40);
        }
        switch (parse_tree__write_deps_file__BuildOptFiles_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String parse_tree__write_deps_file__OptName_27;
              MR_Word parse_tree__write_deps_file__MaybeOptDir_28;
              MR_String parse_tree__write_deps_file__TransOptName_31;
              MR_Word parse_tree__write_deps_file__MaybeTransOptDir_32;

              {
                parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptName_27);
              }
              {
                libs__file_util__search_for_file_returning_dir_5_p_0(parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__OptName_27, &parse_tree__write_deps_file__MaybeOptDir_28);
              }
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__MaybeOptDir_28)) == (MR_mktag((MR_Integer) 1))))
                *parse_tree__write_deps_file__HeadVar__5_5 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__write_deps_file__HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
                }
              {
                parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptName_31);
              }
              {
                libs__file_util__search_for_file_returning_dir_5_p_0(parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__TransOptName_31, &parse_tree__write_deps_file__MaybeTransOptDir_32);
              }
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__MaybeTransOptDir_32)) == (MR_mktag((MR_Integer) 1))))
                *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__write_deps_file__HeadVar__6_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__write_deps_file__MaybeFileName_23;

              {
                parse_tree__find_module__search_for_module_source_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__Dep_18, &parse_tree__write_deps_file__MaybeFileName_23);
              }
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__MaybeFileName_23)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_String parse_tree__write_deps_file__OptName_56;
                  MR_Word parse_tree__write_deps_file__MaybeOptDir_57;
                  MR_String parse_tree__write_deps_file__TransOptName_58;
                  MR_Word parse_tree__write_deps_file__MaybeTransOptDir_59;

                  {
                    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptName_56);
                  }
                  {
                    libs__file_util__search_for_file_returning_dir_5_p_0(parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__OptName_56, &parse_tree__write_deps_file__MaybeOptDir_57);
                  }
                  if (((MR_tag((MR_Word) parse_tree__write_deps_file__MaybeOptDir_57)) == (MR_mktag((MR_Integer) 1))))
                    *parse_tree__write_deps_file__HeadVar__5_5 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39;
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__write_deps_file__HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
                    }
                  {
                    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_18, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptName_58);
                  }
                  {
                    libs__file_util__search_for_file_returning_dir_5_p_0(parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__TransOptName_58, &parse_tree__write_deps_file__MaybeTransOptDir_59);
                  }
                  if (((MR_tag((MR_Word) parse_tree__write_deps_file__MaybeTransOptDir_59)) == (MR_mktag((MR_Integer) 1))))
                    *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40;
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__write_deps_file__HeadVar__6_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
                    }
                }
              else
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *parse_tree__write_deps_file__HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *parse_tree__write_deps_file__HeadVar__6_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_18));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40));
                  }
                }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

    {
      parse_tree__prog_out__write_sym_name_3_p_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0(
  MR_Word parse_tree__write_deps_file__Stream_5,
  MR_Word parse_tree__write_deps_file__SCC0_6)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_14_14 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word parse_tree__write_deps_file__SCC_8;

    {
      mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_14_14, parse_tree__write_deps_file__SCC0_6, &parse_tree__write_deps_file__SCC_8);
    }
    {
      mercury__io__write_list_6_p_0(parse_tree__write_deps_file__TypeCtorInfo_14_14, parse_tree__write_deps_file__Stream_5, parse_tree__write_deps_file__SCC_8, (MR_String) "\n", (MR_Word) &parse_tree__write_deps_file_scalar_common_2[7]);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__get_source_file_3_p_0(
  MR_Word parse_tree__write_deps_file__DepsMap_4,
  MR_Word parse_tree__write_deps_file__ModuleName_5,
  MR_String * parse_tree__write_deps_file__FileName_6)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__Deps_7;
    MR_Word parse_tree__write_deps_file__ModuleAndImports_9;
    MR_String parse_tree__write_deps_file__SourceFileName_10;
    MR_Box parse_tree__write_deps_file__conv0_Deps_7;
    MR_Word parse_tree__write_deps_file__Var_8;
    MR_String parse_tree__write_deps_file__SourceFileBase_11;

    {
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_4, ((MR_Box) (parse_tree__write_deps_file__ModuleName_5)), &parse_tree__write_deps_file__conv0_Deps_7);
    }
    parse_tree__write_deps_file__Deps_7 = ((MR_Word) parse_tree__write_deps_file__conv0_Deps_7);
    parse_tree__write_deps_file__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Deps_7, (MR_Integer) 0)));
    parse_tree__write_deps_file__ModuleAndImports_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Deps_7, (MR_Integer) 1)));
    {
      parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(parse_tree__write_deps_file__ModuleAndImports_9, &parse_tree__write_deps_file__SourceFileName_10);
    }
    {
      parse_tree__write_deps_file__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__write_deps_file__SourceFileName_10, (MR_String) ".m", &parse_tree__write_deps_file__SourceFileBase_11);
    }
    if (parse_tree__write_deps_file__succeeded)
      *parse_tree__write_deps_file__FileName_6 = parse_tree__write_deps_file__SourceFileBase_11;
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_deps_file", (MR_String) "predicate \140parse_tree.write_deps_file.get_source_file\'/3", (MR_String) "source file name doesn\'t end in \140.m\'");
          return;
        }
      }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(
  MR_Word parse_tree__write_deps_file__Globals_17,
  MR_Word parse_tree__write_deps_file__DepStream_18,
  MR_Word parse_tree__write_deps_file__ModuleName_19,
  MR_String parse_tree__write_deps_file__MakeVarName_20,
  MR_String parse_tree__write_deps_file__ExeFileName_21,
  MR_String parse_tree__write_deps_file__InitCFileName_22,
  MR_String parse_tree__write_deps_file__InitObjFileName_23,
  MR_String parse_tree__write_deps_file__InitPicObjFileName_24,
  MR_String parse_tree__write_deps_file__InitFileName_25,
  MR_String parse_tree__write_deps_file__LibFileName_26,
  MR_String parse_tree__write_deps_file__SharedLibFileName_27,
  MR_String parse_tree__write_deps_file__JarFileName_28,
  MR_String parse_tree__write_deps_file__DepFileName_29,
  MR_String parse_tree__write_deps_file__DvFileName_30)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_String parse_tree__write_deps_file__CleanTargetName_32;
    MR_String parse_tree__write_deps_file__RealCleanTargetName_33;
    MR_Word parse_tree__write_deps_file__Var_39;
    MR_Word parse_tree__write_deps_file__Var_42;
    MR_Word parse_tree__write_deps_file__Var_43;
    MR_Word parse_tree__write_deps_file__Var_46;
    MR_Word parse_tree__write_deps_file__Var_49;
    MR_Word parse_tree__write_deps_file__Var_50;
    MR_Word parse_tree__write_deps_file__Var_52;
    MR_Word parse_tree__write_deps_file__Var_53;
    MR_Word parse_tree__write_deps_file__Var_55;
    MR_Word parse_tree__write_deps_file__Var_57;
    MR_Word parse_tree__write_deps_file__Var_58;
    MR_Word parse_tree__write_deps_file__Var_60;
    MR_Word parse_tree__write_deps_file__Var_62;
    MR_Word parse_tree__write_deps_file__Var_63;
    MR_Word parse_tree__write_deps_file__Var_65;
    MR_Word parse_tree__write_deps_file__Var_66;
    MR_Word parse_tree__write_deps_file__Var_68;
    MR_Word parse_tree__write_deps_file__Var_70;
    MR_Word parse_tree__write_deps_file__Var_71;
    MR_Word parse_tree__write_deps_file__Var_73;
    MR_Word parse_tree__write_deps_file__Var_75;
    MR_Word parse_tree__write_deps_file__Var_76;
    MR_Word parse_tree__write_deps_file__Var_78;
    MR_Word parse_tree__write_deps_file__Var_79;
    MR_Word parse_tree__write_deps_file__Var_81;
    MR_Word parse_tree__write_deps_file__Var_83;
    MR_Word parse_tree__write_deps_file__Var_84;
    MR_Word parse_tree__write_deps_file__Var_86;
    MR_Word parse_tree__write_deps_file__Var_87;
    MR_Word parse_tree__write_deps_file__Var_89;
    MR_Word parse_tree__write_deps_file__Var_91;
    MR_Word parse_tree__write_deps_file__Var_92;
    MR_Word parse_tree__write_deps_file__Var_94;
    MR_Word parse_tree__write_deps_file__Var_96;
    MR_Word parse_tree__write_deps_file__Var_97;
    MR_Word parse_tree__write_deps_file__Var_99;
    MR_Word parse_tree__write_deps_file__Var_101;
    MR_Word parse_tree__write_deps_file__Var_102;
    MR_Word parse_tree__write_deps_file__Var_104;
    MR_Word parse_tree__write_deps_file__Var_106;
    MR_Word parse_tree__write_deps_file__Var_107;
    MR_Word parse_tree__write_deps_file__Var_109;
    MR_Word parse_tree__write_deps_file__Var_111;
    MR_Word parse_tree__write_deps_file__Var_112;
    MR_Word parse_tree__write_deps_file__Var_114;
    MR_Word parse_tree__write_deps_file__Var_116;
    MR_Word parse_tree__write_deps_file__Var_117;
    MR_Word parse_tree__write_deps_file__Var_119;
    MR_Word parse_tree__write_deps_file__Var_121;
    MR_Word parse_tree__write_deps_file__Var_130;
    MR_Word parse_tree__write_deps_file__Var_133;
    MR_Word parse_tree__write_deps_file__Var_137;
    MR_Word parse_tree__write_deps_file__Var_140;
    MR_Word parse_tree__write_deps_file__Var_141;
    MR_Word parse_tree__write_deps_file__Var_143;
    MR_Word parse_tree__write_deps_file__Var_144;
    MR_Word parse_tree__write_deps_file__Var_146;
    MR_Word parse_tree__write_deps_file__Var_147;
    MR_Word parse_tree__write_deps_file__Var_149;
    MR_Word parse_tree__write_deps_file__Var_151;
    MR_Word parse_tree__write_deps_file__Var_152;
    MR_Word parse_tree__write_deps_file__Var_154;
    MR_Word parse_tree__write_deps_file__Var_156;
    MR_Word parse_tree__write_deps_file__Var_157;
    MR_Word parse_tree__write_deps_file__Var_159;
    MR_Word parse_tree__write_deps_file__Var_161;
    MR_Word parse_tree__write_deps_file__Var_162;
    MR_Word parse_tree__write_deps_file__Var_164;
    MR_Word parse_tree__write_deps_file__Var_166;
    MR_Word parse_tree__write_deps_file__Var_167;
    MR_Word parse_tree__write_deps_file__Var_169;
    MR_Word parse_tree__write_deps_file__Var_171;
    MR_Word parse_tree__write_deps_file__Var_172;
    MR_Word parse_tree__write_deps_file__Var_174;
    MR_Word parse_tree__write_deps_file__Var_176;
    MR_Word parse_tree__write_deps_file__Var_177;
    MR_Word parse_tree__write_deps_file__Var_179;
    MR_Word parse_tree__write_deps_file__Var_181;
    MR_Word parse_tree__write_deps_file__Var_182;
    MR_Word parse_tree__write_deps_file__Var_184;
    MR_Word parse_tree__write_deps_file__Var_186;
    MR_Word parse_tree__write_deps_file__Var_187;
    MR_Word parse_tree__write_deps_file__Var_189;
    MR_Word parse_tree__write_deps_file__Var_191;
    MR_Word parse_tree__write_deps_file__Var_192;
    MR_Word parse_tree__write_deps_file__Var_194;
    MR_Word parse_tree__write_deps_file__Var_196;
    MR_Word parse_tree__write_deps_file__Var_197;
    MR_Word parse_tree__write_deps_file__Var_199;
    MR_Word parse_tree__write_deps_file__Var_201;
    MR_Word parse_tree__write_deps_file__Var_202;
    MR_Word parse_tree__write_deps_file__Var_204;
    MR_Word parse_tree__write_deps_file__Var_206;
    MR_Word parse_tree__write_deps_file__Var_207;
    MR_Word parse_tree__write_deps_file__Var_209;
    MR_Word parse_tree__write_deps_file__Var_211;
    MR_Word parse_tree__write_deps_file__Var_212;
    MR_Word parse_tree__write_deps_file__Var_214;
    MR_Word parse_tree__write_deps_file__Var_216;
    MR_Word parse_tree__write_deps_file__Var_217;
    MR_Word parse_tree__write_deps_file__Var_219;
    MR_Word parse_tree__write_deps_file__Var_221;
    MR_Word parse_tree__write_deps_file__Var_222;
    MR_Word parse_tree__write_deps_file__Var_224;
    MR_Word parse_tree__write_deps_file__Var_226;
    MR_Word parse_tree__write_deps_file__Var_227;
    MR_Word parse_tree__write_deps_file__Var_229;
    MR_Word parse_tree__write_deps_file__Var_231;
    MR_Word parse_tree__write_deps_file__Var_232;
    MR_Word parse_tree__write_deps_file__Var_234;
    MR_Word parse_tree__write_deps_file__Var_236;
    MR_Word parse_tree__write_deps_file__Var_237;
    MR_Word parse_tree__write_deps_file__Var_239;
    MR_Word parse_tree__write_deps_file__Var_241;
    MR_Word parse_tree__write_deps_file__Var_242;
    MR_Word parse_tree__write_deps_file__Var_244;
    MR_Word parse_tree__write_deps_file__Var_246;
    MR_Word parse_tree__write_deps_file__Var_250;
    MR_Word parse_tree__write_deps_file__Var_253;
    MR_Word parse_tree__write_deps_file__Var_254;
    MR_Word parse_tree__write_deps_file__Var_256;
    MR_Word parse_tree__write_deps_file__Var_257;
    MR_Word parse_tree__write_deps_file__Var_259;
    MR_Word parse_tree__write_deps_file__Var_260;
    MR_Word parse_tree__write_deps_file__Var_262;
    MR_Word parse_tree__write_deps_file__Var_263;
    MR_Word parse_tree__write_deps_file__Var_265;
    MR_Word parse_tree__write_deps_file__Var_266;
    MR_Word parse_tree__write_deps_file__Var_268;
    MR_Word parse_tree__write_deps_file__Var_269;
    MR_Word parse_tree__write_deps_file__Var_271;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_17, parse_tree__write_deps_file__ModuleName_19, (MR_String) ".clean", (MR_Integer) 1, &parse_tree__write_deps_file__CleanTargetName_32);
    }
    parse_tree__write_deps_file__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[90]);
    {
      parse_tree__write_deps_file__Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_42, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_42, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_43));
    }
    {
      parse_tree__write_deps_file__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_39, 0) = ((MR_Box) ((MR_String) "clean_local : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_39, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_42));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__Var_39);
    }
    {
      parse_tree__write_deps_file__Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_121, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_121, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[91])));
    }
    {
      parse_tree__write_deps_file__Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_119, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_119, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_121));
    }
    {
      parse_tree__write_deps_file__Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_117, 0) = ((MR_Box) ((MR_String) ".errs) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_117, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_119));
    }
    {
      parse_tree__write_deps_file__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_116, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_116, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_117));
    }
    {
      parse_tree__write_deps_file__Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_114, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_114, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_116));
    }
    {
      parse_tree__write_deps_file__Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_112, 0) = ((MR_Box) ((MR_String) ".profs) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_112, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_114));
    }
    {
      parse_tree__write_deps_file__Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_111, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_111, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_112));
    }
    {
      parse_tree__write_deps_file__Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_109, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_109, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_111));
    }
    {
      parse_tree__write_deps_file__Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_107, 0) = ((MR_Box) ((MR_String) ".javas) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_107, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_109));
    }
    {
      parse_tree__write_deps_file__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_106, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_106, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_107));
    }
    {
      parse_tree__write_deps_file__Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_104, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_104, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_106));
    }
    {
      parse_tree__write_deps_file__Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_102, 0) = ((MR_Box) ((MR_String) ".useds) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_102, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_104));
    }
    {
      parse_tree__write_deps_file__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_101, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_101, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_102));
    }
    {
      parse_tree__write_deps_file__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_99, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_99, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_101));
    }
    {
      parse_tree__write_deps_file__Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_97, 0) = ((MR_Box) ((MR_String) ".java_dates) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_97, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_99));
    }
    {
      parse_tree__write_deps_file__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_96, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_96, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_97));
    }
    {
      parse_tree__write_deps_file__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_94, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_94, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_96));
    }
    {
      parse_tree__write_deps_file__Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_92, 0) = ((MR_Box) ((MR_String) ".c_dates) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_92, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_94));
    }
    {
      parse_tree__write_deps_file__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_91, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_91, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_92));
    }
    {
      parse_tree__write_deps_file__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_89, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_89, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_91));
    }
    {
      parse_tree__write_deps_file__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_87, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_87, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_89));
    }
    {
      parse_tree__write_deps_file__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_86, 0) = ((MR_Box) (parse_tree__write_deps_file__InitPicObjFileName_24));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_86, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_87));
    }
    {
      parse_tree__write_deps_file__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_84, 0) = ((MR_Box) ((MR_String) ".all_pic_os) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_84, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_86));
    }
    {
      parse_tree__write_deps_file__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_83, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_83, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_84));
    }
    {
      parse_tree__write_deps_file__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_81, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_81, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_83));
    }
    {
      parse_tree__write_deps_file__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_79, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_79, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_81));
    }
    {
      parse_tree__write_deps_file__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_78, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_23));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_78, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_79));
    }
    {
      parse_tree__write_deps_file__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_76, 0) = ((MR_Box) ((MR_String) ".all_os) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_76, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_78));
    }
    {
      parse_tree__write_deps_file__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_75, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_75, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_76));
    }
    {
      parse_tree__write_deps_file__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_73, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_73, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_75));
    }
    {
      parse_tree__write_deps_file__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_71, 0) = ((MR_Box) ((MR_String) ".mihs) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_71, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_73));
    }
    {
      parse_tree__write_deps_file__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_70, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_70, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_71));
    }
    {
      parse_tree__write_deps_file__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_68, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_68, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_70));
    }
    {
      parse_tree__write_deps_file__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_66, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_66, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_68));
    }
    {
      parse_tree__write_deps_file__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_65, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_65, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_66));
    }
    {
      parse_tree__write_deps_file__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_63, 0) = ((MR_Box) ((MR_String) ".cs) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_63, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_65));
    }
    {
      parse_tree__write_deps_file__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_62, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_62, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_63));
    }
    {
      parse_tree__write_deps_file__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_60, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_60, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_62));
    }
    {
      parse_tree__write_deps_file__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_58, 0) = ((MR_Box) ((MR_String) ".dirs) | xargs rm -rf \n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_58, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_60));
    }
    {
      parse_tree__write_deps_file__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_57, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_57, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_58));
    }
    {
      parse_tree__write_deps_file__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_55, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_55, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_57));
    }
    {
      parse_tree__write_deps_file__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_53, 0) = ((MR_Box) ((MR_String) " :\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_53, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_55));
    }
    {
      parse_tree__write_deps_file__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_52, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_52, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_53));
    }
    {
      parse_tree__write_deps_file__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_50, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_50, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_52));
    }
    {
      parse_tree__write_deps_file__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_49, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_49, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_50));
    }
    {
      parse_tree__write_deps_file__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_46, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_46, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_49));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__Var_46);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_17, parse_tree__write_deps_file__ModuleName_19, (MR_String) ".realclean", (MR_Integer) 1, &parse_tree__write_deps_file__RealCleanTargetName_33);
    }
    {
      parse_tree__write_deps_file__Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_133, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_133, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_43));
    }
    {
      parse_tree__write_deps_file__Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_130, 0) = ((MR_Box) ((MR_String) "realclean_local : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_130, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_133));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__Var_130);
    }
    {
      parse_tree__write_deps_file__Var_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_246, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_246, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[109])));
    }
    {
      parse_tree__write_deps_file__Var_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_244, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_244, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_246));
    }
    {
      parse_tree__write_deps_file__Var_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_242, 0) = ((MR_Box) ((MR_String) ".foreign_dlls) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_242, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_244));
    }
    {
      parse_tree__write_deps_file__Var_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_241, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_241, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_242));
    }
    {
      parse_tree__write_deps_file__Var_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_239, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_239, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_241));
    }
    {
      parse_tree__write_deps_file__Var_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_237, 0) = ((MR_Box) ((MR_String) ".dlls) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_237, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_239));
    }
    {
      parse_tree__write_deps_file__Var_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_236, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_236, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_237));
    }
    {
      parse_tree__write_deps_file__Var_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_234, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_234, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_236));
    }
    {
      parse_tree__write_deps_file__Var_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_232, 0) = ((MR_Box) ((MR_String) ".all_mihs) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_232, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_234));
    }
    {
      parse_tree__write_deps_file__Var_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_231, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_231, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_232));
    }
    {
      parse_tree__write_deps_file__Var_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_229, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_229, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_231));
    }
    {
      parse_tree__write_deps_file__Var_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_227, 0) = ((MR_Box) ((MR_String) ".all_mhs) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_227, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_229));
    }
    {
      parse_tree__write_deps_file__Var_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_226, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_226, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_227));
    }
    {
      parse_tree__write_deps_file__Var_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_224, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_224, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_226));
    }
    {
      parse_tree__write_deps_file__Var_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_222, 0) = ((MR_Box) ((MR_String) ".module_deps) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_222, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_224));
    }
    {
      parse_tree__write_deps_file__Var_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_221, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_221, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_222));
    }
    {
      parse_tree__write_deps_file__Var_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_219, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_219, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_221));
    }
    {
      parse_tree__write_deps_file__Var_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_217, 0) = ((MR_Box) ((MR_String) ".ds) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_217, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_219));
    }
    {
      parse_tree__write_deps_file__Var_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_216, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_216, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_217));
    }
    {
      parse_tree__write_deps_file__Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_214, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_214, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_216));
    }
    {
      parse_tree__write_deps_file__Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_212, 0) = ((MR_Box) ((MR_String) ".imdgs) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_212, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_214));
    }
    {
      parse_tree__write_deps_file__Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_211, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_211, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_212));
    }
    {
      parse_tree__write_deps_file__Var_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_209, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_209, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_211));
    }
    {
      parse_tree__write_deps_file__Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_207, 0) = ((MR_Box) ((MR_String) ".requests) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_207, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_209));
    }
    {
      parse_tree__write_deps_file__Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_206, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_206, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_207));
    }
    {
      parse_tree__write_deps_file__Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_204, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_204, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_206));
    }
    {
      parse_tree__write_deps_file__Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_202, 0) = ((MR_Box) ((MR_String) ".analysiss) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_202, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_204));
    }
    {
      parse_tree__write_deps_file__Var_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_201, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_201, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_202));
    }
    {
      parse_tree__write_deps_file__Var_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_199, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_199, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_201));
    }
    {
      parse_tree__write_deps_file__Var_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_197, 0) = ((MR_Box) ((MR_String) ".trans_opts) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_197, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_199));
    }
    {
      parse_tree__write_deps_file__Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_196, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_196, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_197));
    }
    {
      parse_tree__write_deps_file__Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_194, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_194, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_196));
    }
    {
      parse_tree__write_deps_file__Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_192, 0) = ((MR_Box) ((MR_String) ".opts) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_192, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_194));
    }
    {
      parse_tree__write_deps_file__Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_191, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_191, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_192));
    }
    {
      parse_tree__write_deps_file__Var_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_189, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_189, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_191));
    }
    {
      parse_tree__write_deps_file__Var_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_187, 0) = ((MR_Box) ((MR_String) ".int3s) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_187, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_189));
    }
    {
      parse_tree__write_deps_file__Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_186, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_186, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_187));
    }
    {
      parse_tree__write_deps_file__Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_184, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_184, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_186));
    }
    {
      parse_tree__write_deps_file__Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_182, 0) = ((MR_Box) ((MR_String) ".all_int0s) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_182, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_184));
    }
    {
      parse_tree__write_deps_file__Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_181, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_181, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_182));
    }
    {
      parse_tree__write_deps_file__Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_179, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_179, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_181));
    }
    {
      parse_tree__write_deps_file__Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_177, 0) = ((MR_Box) ((MR_String) ".ints) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_177, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_179));
    }
    {
      parse_tree__write_deps_file__Var_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_176, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_176, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_177));
    }
    {
      parse_tree__write_deps_file__Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_174, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_174, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_176));
    }
    {
      parse_tree__write_deps_file__Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_172, 0) = ((MR_Box) ((MR_String) ".trans_opt_dates) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_172, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_174));
    }
    {
      parse_tree__write_deps_file__Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_171, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_171, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_172));
    }
    {
      parse_tree__write_deps_file__Var_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_169, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_169, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_171));
    }
    {
      parse_tree__write_deps_file__Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_167, 0) = ((MR_Box) ((MR_String) ".optdates) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_167, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_169));
    }
    {
      parse_tree__write_deps_file__Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_166, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_166, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_167));
    }
    {
      parse_tree__write_deps_file__Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_164, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_164, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_166));
    }
    {
      parse_tree__write_deps_file__Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_162, 0) = ((MR_Box) ((MR_String) ".date3s) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_162, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_164));
    }
    {
      parse_tree__write_deps_file__Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_161, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_161, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_162));
    }
    {
      parse_tree__write_deps_file__Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_159, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_159, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_161));
    }
    {
      parse_tree__write_deps_file__Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_157, 0) = ((MR_Box) ((MR_String) ".date0s) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_157, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_159));
    }
    {
      parse_tree__write_deps_file__Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_156, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_156, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_157));
    }
    {
      parse_tree__write_deps_file__Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_154, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_154, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_156));
    }
    {
      parse_tree__write_deps_file__Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_152, 0) = ((MR_Box) ((MR_String) ".dates) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_152, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_154));
    }
    {
      parse_tree__write_deps_file__Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_151, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_151, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_152));
    }
    {
      parse_tree__write_deps_file__Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_149, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_149, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_151));
    }
    {
      parse_tree__write_deps_file__Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_147, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_147, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_149));
    }
    {
      parse_tree__write_deps_file__Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_146, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_32));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_146, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_147));
    }
    {
      parse_tree__write_deps_file__Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_144, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_144, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_146));
    }
    {
      parse_tree__write_deps_file__Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_143, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_143, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_144));
    }
    {
      parse_tree__write_deps_file__Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_141, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_141, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_143));
    }
    {
      parse_tree__write_deps_file__Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_140, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_33));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_140, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_141));
    }
    {
      parse_tree__write_deps_file__Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_137, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_137, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_140));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__Var_137);
    }
    {
      parse_tree__write_deps_file__Var_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_271, 0) = ((MR_Box) (parse_tree__write_deps_file__DvFileName_30));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_271, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[107])));
    }
    {
      parse_tree__write_deps_file__Var_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_269, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_269, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_271));
    }
    {
      parse_tree__write_deps_file__Var_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_268, 0) = ((MR_Box) (parse_tree__write_deps_file__DepFileName_29));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_268, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_269));
    }
    {
      parse_tree__write_deps_file__Var_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_266, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_266, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_268));
    }
    {
      parse_tree__write_deps_file__Var_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_265, 0) = ((MR_Box) (parse_tree__write_deps_file__JarFileName_28));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_265, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_266));
    }
    {
      parse_tree__write_deps_file__Var_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_263, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_263, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_265));
    }
    {
      parse_tree__write_deps_file__Var_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_262, 0) = ((MR_Box) (parse_tree__write_deps_file__SharedLibFileName_27));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_262, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_263));
    }
    {
      parse_tree__write_deps_file__Var_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_260, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_260, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_262));
    }
    {
      parse_tree__write_deps_file__Var_259 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_259, 0) = ((MR_Box) (parse_tree__write_deps_file__LibFileName_26));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_259, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_260));
    }
    {
      parse_tree__write_deps_file__Var_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_257, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_257, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_259));
    }
    {
      parse_tree__write_deps_file__Var_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_256, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_25));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_256, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_257));
    }
    {
      parse_tree__write_deps_file__Var_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_254, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_254, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_256));
    }
    {
      parse_tree__write_deps_file__Var_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_253, 0) = ((MR_Box) (parse_tree__write_deps_file__ExeFileName_21));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_253, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_254));
    }
    {
      parse_tree__write_deps_file__Var_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_250, 0) = ((MR_Box) ((MR_String) "\t-rm -f "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_250, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_253));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__Var_250);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(
  MR_Word parse_tree__write_deps_file__Globals_8,
  MR_Word parse_tree__write_deps_file__DepStream_9,
  MR_Word parse_tree__write_deps_file__ModuleName_10,
  MR_String parse_tree__write_deps_file__MakeVarName_11,
  MR_Word parse_tree__write_deps_file__HeadVar__5_5)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_String parse_tree__write_deps_file__Extension_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 0)));
    MR_String parse_tree__write_deps_file__VarExtension_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 1)));
    MR_String parse_tree__write_deps_file__TargetName_15;
    MR_Word parse_tree__write_deps_file__Var_20;
    MR_Word parse_tree__write_deps_file__Var_23;
    MR_Word parse_tree__write_deps_file__Var_24;
    MR_Word parse_tree__write_deps_file__Var_26;
    MR_Word parse_tree__write_deps_file__Var_27;
    MR_Word parse_tree__write_deps_file__Var_29;
    MR_Word parse_tree__write_deps_file__Var_30;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__Extension_12, (MR_Integer) 1, &parse_tree__write_deps_file__TargetName_15);
    }
    {
      parse_tree__write_deps_file__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_30, 0) = ((MR_Box) (parse_tree__write_deps_file__VarExtension_13));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[108])));
    }
    {
      parse_tree__write_deps_file__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_29, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_11));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_29, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_30));
    }
    {
      parse_tree__write_deps_file__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_27, 0) = ((MR_Box) ((MR_String) " : \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_27, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_29));
    }
    {
      parse_tree__write_deps_file__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_26, 0) = ((MR_Box) (parse_tree__write_deps_file__TargetName_15));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_26, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_27));
    }
    {
      parse_tree__write_deps_file__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_24, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_24, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_26));
    }
    {
      parse_tree__write_deps_file__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_23, 0) = ((MR_Box) (parse_tree__write_deps_file__TargetName_15));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_23, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_24));
    }
    {
      parse_tree__write_deps_file__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_20, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_20, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_23));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_9, parse_tree__write_deps_file__Var_20);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

    {
      parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(
  MR_Word parse_tree__write_deps_file__Globals_7,
  MR_Word parse_tree__write_deps_file__DepStream_8,
  MR_Word parse_tree__write_deps_file__ModuleName_9,
  MR_String parse_tree__write_deps_file__MakeVarName_10)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__Var_14;
    MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_13;

    {
      parse_tree__write_deps_file__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_8));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_9));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, 6) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_10));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__write_deps_file_scalar_common_2[3], (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Var_14, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[89]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_13);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(
  void * parse_tree__write_deps_file__env_ptr_arg)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

    MR_builtin_longjmp((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3(
  void * parse_tree__write_deps_file__env_ptr_arg)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

    (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Var_29 = ((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_Var_29);
    (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Var_44 = ((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_Var_44);
    {
      parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(parse_tree__write_deps_file__env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_2(
  void * parse_tree__write_deps_file__env_ptr_arg)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

    {
      MR_Word parse_tree__write_deps_file__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Var_44, (MR_Integer) 0)));
      MR_String parse_tree__write_deps_file__Var_340;
      MR_Word parse_tree__write_deps_file__Var_341;
      MR_Word parse_tree__write_deps_file__Var_342;
      MR_Word parse_tree__write_deps_file__Var_343;
      MR_Word parse_tree__write_deps_file__Var_344;
      MR_Word parse_tree__write_deps_file__Var_345;
      MR_Word parse_tree__write_deps_file__Var_346;
      MR_Word parse_tree__write_deps_file__Var_347;
      MR_Word parse_tree__write_deps_file__Var_348;
      MR_Word parse_tree__write_deps_file__Var_349;
      MR_Word parse_tree__write_deps_file__Var_350;
      MR_Word parse_tree__write_deps_file__Var_351;
      MR_Word parse_tree__write_deps_file__Var_352;
      MR_Word parse_tree__write_deps_file__Var_353;
      MR_Word parse_tree__write_deps_file__Var_354;
      MR_Word parse_tree__write_deps_file__Var_355;
      MR_Word parse_tree__write_deps_file__Var_356;
      MR_Word parse_tree__write_deps_file__Var_357;
      MR_Word parse_tree__write_deps_file__Var_358;
      MR_Word parse_tree__write_deps_file__Var_359;
      MR_Word parse_tree__write_deps_file__Var_360;
      MR_Word parse_tree__write_deps_file__Var_361;
      MR_Word parse_tree__write_deps_file__Var_362;
      MR_Word parse_tree__write_deps_file__Var_363;
      MR_Word parse_tree__write_deps_file__Var_364;
      MR_String parse_tree__write_deps_file__Var_365;

      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Var_44, (MR_Integer) 1)));
      parse_tree__write_deps_file__Var_340 = ((MR_String) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 0)));
      parse_tree__write_deps_file__Var_341 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 1)));
      parse_tree__write_deps_file__Var_342 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 2)));
      parse_tree__write_deps_file__Var_343 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 3)));
      parse_tree__write_deps_file__Var_344 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 4)));
      parse_tree__write_deps_file__Var_345 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 5)));
      parse_tree__write_deps_file__Var_346 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 6)));
      parse_tree__write_deps_file__Var_347 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 7)));
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 8)));
      parse_tree__write_deps_file__Var_348 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 9)));
      parse_tree__write_deps_file__Var_349 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 10)));
      parse_tree__write_deps_file__Var_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 11)));
      parse_tree__write_deps_file__Var_351 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 12)));
      parse_tree__write_deps_file__Var_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 13)));
      parse_tree__write_deps_file__Var_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 14)));
      parse_tree__write_deps_file__Var_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 15)));
      parse_tree__write_deps_file__Var_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 16)));
      parse_tree__write_deps_file__Var_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 17)));
      parse_tree__write_deps_file__Var_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 18)));
      parse_tree__write_deps_file__Var_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 19)));
      parse_tree__write_deps_file__Var_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 20)));
      parse_tree__write_deps_file__Var_360 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 21)));
      parse_tree__write_deps_file__Var_361 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 22)));
      parse_tree__write_deps_file__Var_362 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 23)));
      parse_tree__write_deps_file__Var_363 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 24)));
      parse_tree__write_deps_file__Var_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 25)));
      parse_tree__write_deps_file__Var_365 = ((MR_String) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__ModuleAndImports_339, (MR_Integer) 26)));
      {
        (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = mercury__set__non_empty_1_p_0((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__TypeCtorInfo_366_366, (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__Var_45);
      }
      if ((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
        {
          parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_1(parse_tree__write_deps_file__env_ptr);
        }
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(
  void * parse_tree__write_deps_file__env_ptr_arg)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

    if (MR_builtin_setjmp((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__commit_0) == 0)
      {
        {
          (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__TypeCtorInfo_366_366 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
          {
            mercury__map__member_3_p_0((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__TypeCtorInfo_366_366, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17, &(parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv1_Var_29, &(parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__conv0_Var_44, parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_3, parse_tree__write_deps_file__env_ptr);
          }
        }
        (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(
  MR_Word parse_tree__write_deps_file__Globals_14,
  MR_Word parse_tree__write_deps_file__DepStream_15,
  MR_Word parse_tree__write_deps_file__ModuleName_16,
  MR_Word parse_tree__write_deps_file__DepsMap_17,
  MR_String parse_tree__write_deps_file__MakeVarName_18,
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_19,
  MR_Word parse_tree__write_deps_file__Intermod_20,
  MR_Word parse_tree__write_deps_file__TransOpt_21,
  MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_22,
  MR_String parse_tree__write_deps_file__MaybeOptsVar_23,
  MR_String parse_tree__write_deps_file__MaybeTransOptsVar_24)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0_s parse_tree__write_deps_file__env;

    (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__DepsMap_17 = parse_tree__write_deps_file__DepsMap_17;
    {
      MR_String parse_tree__write_deps_file__LibInstallIntsTargetName_26;
      MR_String parse_tree__write_deps_file__OptStr_27;
      MR_String parse_tree__write_deps_file__Int0Str_31;
      MR_String parse_tree__write_deps_file__MaybeInt0sVar_32;
      MR_String parse_tree__write_deps_file__TransOptStr_33;
      MR_String parse_tree__write_deps_file__DepStr_34;
      MR_String parse_tree__write_deps_file__LibInstallOptsTargetName_35;
      MR_String parse_tree__write_deps_file__LibInstallHdrsTargetName_36;
      MR_String parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_37;
      MR_Word parse_tree__write_deps_file__Var_49;
      MR_Word parse_tree__write_deps_file__Var_52;
      MR_Word parse_tree__write_deps_file__Var_53;
      MR_Word parse_tree__write_deps_file__Var_55;
      MR_Word parse_tree__write_deps_file__Var_56;
      MR_Word parse_tree__write_deps_file__Var_58;
      MR_Word parse_tree__write_deps_file__Var_59;
      MR_Word parse_tree__write_deps_file__Var_61;
      MR_Word parse_tree__write_deps_file__Var_62;
      MR_Word parse_tree__write_deps_file__Var_64;
      MR_Word parse_tree__write_deps_file__Var_65;
      MR_Word parse_tree__write_deps_file__Var_66;
      MR_Word parse_tree__write_deps_file__Var_67;
      MR_Word parse_tree__write_deps_file__Var_68;
      MR_Word parse_tree__write_deps_file__Var_70;
      MR_Word parse_tree__write_deps_file__Var_72;
      MR_Word parse_tree__write_deps_file__Var_73;
      MR_Word parse_tree__write_deps_file__Var_75;
      MR_Word parse_tree__write_deps_file__Var_76;
      MR_Word parse_tree__write_deps_file__Var_78;
      MR_Word parse_tree__write_deps_file__Var_79;
      MR_Word parse_tree__write_deps_file__Var_80;
      MR_Word parse_tree__write_deps_file__Var_81;
      MR_Word parse_tree__write_deps_file__Var_82;
      MR_Word parse_tree__write_deps_file__Var_84;
      MR_Word parse_tree__write_deps_file__Var_86;
      MR_Word parse_tree__write_deps_file__Var_88;
      MR_Word parse_tree__write_deps_file__Var_90;
      MR_Word parse_tree__write_deps_file__Var_92;
      MR_Word parse_tree__write_deps_file__Var_94;
      MR_Word parse_tree__write_deps_file__Var_96;
      MR_Word parse_tree__write_deps_file__Var_98;
      MR_Word parse_tree__write_deps_file__Var_100;
      MR_Word parse_tree__write_deps_file__Var_102;
      MR_Word parse_tree__write_deps_file__Var_104;
      MR_Word parse_tree__write_deps_file__Var_106;
      MR_Word parse_tree__write_deps_file__Var_108;
      MR_Word parse_tree__write_deps_file__Var_110;
      MR_Word parse_tree__write_deps_file__Var_111;
      MR_Word parse_tree__write_deps_file__Var_112;
      MR_Word parse_tree__write_deps_file__Var_113;
      MR_Word parse_tree__write_deps_file__Var_137;
      MR_Word parse_tree__write_deps_file__Var_140;
      MR_Word parse_tree__write_deps_file__Var_141;
      MR_Word parse_tree__write_deps_file__Var_143;
      MR_Word parse_tree__write_deps_file__Var_217;
      MR_Word parse_tree__write_deps_file__Var_220;
      MR_Word parse_tree__write_deps_file__Var_221;
      MR_Word parse_tree__write_deps_file__Var_223;
      MR_Word parse_tree__write_deps_file__Var_224;
      MR_Word parse_tree__write_deps_file__Var_226;
      MR_Word parse_tree__write_deps_file__Var_228;
      MR_Word parse_tree__write_deps_file__Var_229;
      MR_Word parse_tree__write_deps_file__Var_231;
      MR_Word parse_tree__write_deps_file__Var_233;
      MR_Word parse_tree__write_deps_file__Var_235;
      MR_Word parse_tree__write_deps_file__Var_236;
      MR_Word parse_tree__write_deps_file__Var_238;
      MR_Word parse_tree__write_deps_file__Var_240;
      MR_Word parse_tree__write_deps_file__Var_242;
      MR_Word parse_tree__write_deps_file__Var_244;
      MR_Word parse_tree__write_deps_file__Var_260;
      MR_Word parse_tree__write_deps_file__Var_263;
      MR_Word parse_tree__write_deps_file__Var_264;
      MR_Word parse_tree__write_deps_file__Var_266;
      MR_Word parse_tree__write_deps_file__Var_267;
      MR_Word parse_tree__write_deps_file__Var_269;
      MR_Word parse_tree__write_deps_file__Var_271;
      MR_Word parse_tree__write_deps_file__Var_272;
      MR_Word parse_tree__write_deps_file__Var_274;
      MR_Word parse_tree__write_deps_file__Var_276;
      MR_Word parse_tree__write_deps_file__Var_278;
      MR_Word parse_tree__write_deps_file__Var_279;
      MR_Word parse_tree__write_deps_file__Var_281;
      MR_Word parse_tree__write_deps_file__Var_283;
      MR_Word parse_tree__write_deps_file__Var_285;
      MR_Word parse_tree__write_deps_file__Var_287;

      {
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_ints", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallIntsTargetName_26);
      }
      switch (parse_tree__write_deps_file__Intermod_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          parse_tree__write_deps_file__OptStr_27 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          parse_tree__write_deps_file__OptStr_27 = (MR_String) " opt";
          break;
      }
      (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = (parse_tree__write_deps_file__Intermod_20 == (MR_Integer) 1);
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
        {
          parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_4(&parse_tree__write_deps_file__env);
        }
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
        {
          MR_String parse_tree__write_deps_file__Var_47;

          parse_tree__write_deps_file__Int0Str_31 = (MR_String) " int0";
          {
            parse_tree__write_deps_file__Var_47 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_18, (MR_String) ".int0s) ");
          }
          {
            parse_tree__write_deps_file__MaybeInt0sVar_32 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_47);
          }
        }
      else
        {
          parse_tree__write_deps_file__Int0Str_31 = (MR_String) "";
          parse_tree__write_deps_file__MaybeInt0sVar_32 = (MR_String) "";
        }
      switch (parse_tree__write_deps_file__TransOpt_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          parse_tree__write_deps_file__TransOptStr_33 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          parse_tree__write_deps_file__TransOptStr_33 = (MR_String) " trans_opt";
          break;
      }
      switch (parse_tree__write_deps_file__MmcMakeDeps_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          parse_tree__write_deps_file__DepStr_34 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          parse_tree__write_deps_file__DepStr_34 = (MR_String) " module_dep";
          break;
      }
      {
        parse_tree__write_deps_file__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_113, 0) = ((MR_Box) (parse_tree__write_deps_file__DepStr_34));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[31])));
      }
      {
        parse_tree__write_deps_file__Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_112, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptStr_33));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_112, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_113));
      }
      {
        parse_tree__write_deps_file__Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_111, 0) = ((MR_Box) (parse_tree__write_deps_file__OptStr_27));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_111, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_112));
      }
      {
        parse_tree__write_deps_file__Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_110, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0Str_31));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_110, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_111));
      }
      {
        parse_tree__write_deps_file__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_108, 0) = ((MR_Box) ((MR_String) "\tfor ext in int int2 int3"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_108, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_110));
      }
      {
        parse_tree__write_deps_file__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_106, 0) = ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_106, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_108));
      }
      {
        parse_tree__write_deps_file__Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_104, 0) = ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails, then we just use\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_104, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_106));
      }
      {
        parse_tree__write_deps_file__Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_102, 0) = ((MR_Box) ((MR_String) "\t# The following is needed to support the \140--use-subdirs\' option\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_102, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_104));
      }
      {
        parse_tree__write_deps_file__Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_100, 0) = ((MR_Box) ((MR_String) "\tdone\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_100, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_102));
      }
      {
        parse_tree__write_deps_file__Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_98, 0) = ((MR_Box) ((MR_String) "\t\tfi; \\\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_98, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_100));
      }
      {
        parse_tree__write_deps_file__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_96, 0) = ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_96, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_98));
      }
      {
        parse_tree__write_deps_file__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_94, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"installing \044\044target\"; \\\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_94, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_96));
      }
      {
        parse_tree__write_deps_file__Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_92, 0) = ((MR_Box) ((MR_String) "\t\telse \\\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_92, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_94));
      }
      {
        parse_tree__write_deps_file__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_90, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"\044\044target unchanged\"; \\\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_90, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_92));
      }
      {
        parse_tree__write_deps_file__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_88, 0) = ((MR_Box) ((MR_String) "\t\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_88, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_90));
      }
      {
        parse_tree__write_deps_file__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_86, 0) = ((MR_Box) ((MR_String) "\t\ttarget=\"\044(INSTALL_INT_DIR)/\140basename \044\044file\140\"; \\\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_86, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_88));
      }
      {
        parse_tree__write_deps_file__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_84, 0) = ((MR_Box) ((MR_String) "\tfor file in \044\044files; do \\\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_84, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_86));
      }
      {
        parse_tree__write_deps_file__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_82, 0) = ((MR_Box) ((MR_String) "\"; \\\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_82, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_84));
      }
      {
        parse_tree__write_deps_file__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_81, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeModuleDepsVar_22));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_81, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_82));
      }
      {
        parse_tree__write_deps_file__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_80, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_80, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_81));
      }
      {
        parse_tree__write_deps_file__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_79, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_79, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_80));
      }
      {
        parse_tree__write_deps_file__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_78, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeInt0sVar_32));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_78, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_79));
      }
      {
        parse_tree__write_deps_file__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_76, 0) = ((MR_Box) ((MR_String) ".int3s) "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_76, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_78));
      }
      {
        parse_tree__write_deps_file__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_75, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_75, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_76));
      }
      {
        parse_tree__write_deps_file__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_73, 0) = ((MR_Box) ((MR_String) ".ints) \044("));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_73, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_75));
      }
      {
        parse_tree__write_deps_file__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_72, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_72, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_73));
      }
      {
        parse_tree__write_deps_file__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_70, 0) = ((MR_Box) ((MR_String) "\tfiles=\"\044("));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_70, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_72));
      }
      {
        parse_tree__write_deps_file__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_68, 0) = ((MR_Box) ((MR_String) " install_lib_dirs\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_68, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_70));
      }
      {
        parse_tree__write_deps_file__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_67, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeModuleDepsVar_22));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_67, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_68));
      }
      {
        parse_tree__write_deps_file__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_66, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_66, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_67));
      }
      {
        parse_tree__write_deps_file__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_65, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_65, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_66));
      }
      {
        parse_tree__write_deps_file__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_64, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeInt0sVar_32));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_64, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_65));
      }
      {
        parse_tree__write_deps_file__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_62, 0) = ((MR_Box) ((MR_String) ".int3s) "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_62, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_64));
      }
      {
        parse_tree__write_deps_file__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_61, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_61, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_62));
      }
      {
        parse_tree__write_deps_file__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_59, 0) = ((MR_Box) ((MR_String) ".ints) \044("));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_59, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_61));
      }
      {
        parse_tree__write_deps_file__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_58, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_58, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_59));
      }
      {
        parse_tree__write_deps_file__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_56, 0) = ((MR_Box) ((MR_String) " : \044("));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_56, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_58));
      }
      {
        parse_tree__write_deps_file__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_55, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallIntsTargetName_26));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_55, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_56));
      }
      {
        parse_tree__write_deps_file__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_53, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_53, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_55));
      }
      {
        parse_tree__write_deps_file__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_52, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallIntsTargetName_26));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_52, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_53));
      }
      {
        parse_tree__write_deps_file__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_49, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_49, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_52));
      }
      {
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__Var_49);
      }
      {
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_opts", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallOptsTargetName_35);
      }
      {
        parse_tree__write_deps_file__Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_143, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsTargetName_35));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_143, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[97])));
      }
      {
        parse_tree__write_deps_file__Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_141, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_141, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_143));
      }
      {
        parse_tree__write_deps_file__Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_140, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsTargetName_35));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_140, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_141));
      }
      {
        parse_tree__write_deps_file__Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_137, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_137, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_140));
      }
      {
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__Var_137);
      }
      (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = (parse_tree__write_deps_file__Intermod_20 == (MR_Integer) 0);
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
        (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded = (parse_tree__write_deps_file__TransOpt_21 == (MR_Integer) 0);
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0_env_0__succeeded)
        {
          {
            mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_15, (MR_String) "\n\t\100:\n\n");
          }
        }
      else
        {
          MR_Word parse_tree__write_deps_file__Var_149;
          MR_Word parse_tree__write_deps_file__Var_151;
          MR_Word parse_tree__write_deps_file__Var_152;
          MR_Word parse_tree__write_deps_file__Var_154;
          MR_Word parse_tree__write_deps_file__Var_156;
          MR_Word parse_tree__write_deps_file__Var_157;
          MR_Word parse_tree__write_deps_file__Var_158;
          MR_Word parse_tree__write_deps_file__Var_160;
          MR_Word parse_tree__write_deps_file__Var_162;
          MR_Word parse_tree__write_deps_file__Var_164;
          MR_Word parse_tree__write_deps_file__Var_166;
          MR_Word parse_tree__write_deps_file__Var_168;
          MR_Word parse_tree__write_deps_file__Var_170;
          MR_Word parse_tree__write_deps_file__Var_172;
          MR_Word parse_tree__write_deps_file__Var_174;
          MR_Word parse_tree__write_deps_file__Var_176;
          MR_Word parse_tree__write_deps_file__Var_178;
          MR_Word parse_tree__write_deps_file__Var_180;
          MR_Word parse_tree__write_deps_file__Var_182;
          MR_Word parse_tree__write_deps_file__Var_184;
          MR_Word parse_tree__write_deps_file__Var_186;
          MR_Word parse_tree__write_deps_file__Var_188;
          MR_Word parse_tree__write_deps_file__Var_190;
          MR_Word parse_tree__write_deps_file__Var_191;

          {
            parse_tree__write_deps_file__Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_191, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptStr_33));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_191, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[39])));
          }
          {
            parse_tree__write_deps_file__Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_190, 0) = ((MR_Box) (parse_tree__write_deps_file__OptStr_27));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_190, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_191));
          }
          {
            parse_tree__write_deps_file__Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_188, 0) = ((MR_Box) ((MR_String) "\tfor ext in "));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_188, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_190));
          }
          {
            parse_tree__write_deps_file__Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_186, 0) = ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_186, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_188));
          }
          {
            parse_tree__write_deps_file__Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_184, 0) = ((MR_Box) ((MR_String) " then we just use\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_184, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_186));
          }
          {
            parse_tree__write_deps_file__Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_182, 0) = ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails,"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_182, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_184));
          }
          {
            parse_tree__write_deps_file__Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_180, 0) = ((MR_Box) ((MR_String) " \140--use-subdirs\' option\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_180, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_182));
          }
          {
            parse_tree__write_deps_file__Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_178, 0) = ((MR_Box) ((MR_String) "\t# The following is needed to support the"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_178, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_180));
          }
          {
            parse_tree__write_deps_file__Var_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_176, 0) = ((MR_Box) ((MR_String) "\tdone\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_176, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_178));
          }
          {
            parse_tree__write_deps_file__Var_174 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_174, 0) = ((MR_Box) ((MR_String) "\t\tfi; \\\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_174, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_176));
          }
          {
            parse_tree__write_deps_file__Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_172, 0) = ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_172, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_174));
          }
          {
            parse_tree__write_deps_file__Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_170, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"installing \044\044target\"; \\\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_170, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_172));
          }
          {
            parse_tree__write_deps_file__Var_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_168, 0) = ((MR_Box) ((MR_String) "\t\telse \\\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_168, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_170));
          }
          {
            parse_tree__write_deps_file__Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_166, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"\044\044target unchanged\"; \\\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_166, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_168));
          }
          {
            parse_tree__write_deps_file__Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_164, 0) = ((MR_Box) ((MR_String) "\t\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_164, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_166));
          }
          {
            parse_tree__write_deps_file__Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_162, 0) = ((MR_Box) ((MR_String) "\t\ttarget=\"\044(INSTALL_GRADE_INT_DIR)/\140basename \044\044file\140\";\\\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_162, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_164));
          }
          {
            parse_tree__write_deps_file__Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_160, 0) = ((MR_Box) ((MR_String) "\tfor file in \044\044files; do \\\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_160, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_162));
          }
          {
            parse_tree__write_deps_file__Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_158, 0) = ((MR_Box) ((MR_String) "\"; \\\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_158, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_160));
          }
          {
            parse_tree__write_deps_file__Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_157, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_157, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_158));
          }
          {
            parse_tree__write_deps_file__Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_156, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_156, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_157));
          }
          {
            parse_tree__write_deps_file__Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_154, 0) = ((MR_Box) ((MR_String) "\tfiles=\""));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_154, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_156));
          }
          {
            parse_tree__write_deps_file__Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_152, 0) = ((MR_Box) ((MR_String) "install_grade_dirs\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_152, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_154));
          }
          {
            parse_tree__write_deps_file__Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_151, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_24));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_151, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_152));
          }
          {
            parse_tree__write_deps_file__Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_149, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_23));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_149, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_151));
          }
          {
            mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__Var_149);
          }
        }
      {
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_hdrs", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallHdrsTargetName_36);
      }
      {
        parse_tree__write_deps_file__Var_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_244, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_244, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[43])));
      }
      {
        parse_tree__write_deps_file__Var_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_242, 0) = ((MR_Box) ((MR_String) "\tfor hdr in \044("));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_242, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_244));
      }
      {
        parse_tree__write_deps_file__Var_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_240, 0) = ((MR_Box) ((MR_String) "else\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_240, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_242));
      }
      {
        parse_tree__write_deps_file__Var_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_238, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_238, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_240));
      }
      {
        parse_tree__write_deps_file__Var_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_236, 0) = ((MR_Box) ((MR_String) ".mhs),)\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_236, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_238));
      }
      {
        parse_tree__write_deps_file__Var_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_235, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_235, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_236));
      }
      {
        parse_tree__write_deps_file__Var_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_233, 0) = ((MR_Box) ((MR_String) "ifeq (\044("));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_233, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_235));
      }
      {
        parse_tree__write_deps_file__Var_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_231, 0) = ((MR_Box) ((MR_String) "install_lib_dirs\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_231, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_233));
      }
      {
        parse_tree__write_deps_file__Var_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_229, 0) = ((MR_Box) ((MR_String) ".mhs) "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_229, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_231));
      }
      {
        parse_tree__write_deps_file__Var_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_228, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_228, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_229));
      }
      {
        parse_tree__write_deps_file__Var_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_226, 0) = ((MR_Box) ((MR_String) "\044("));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_226, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_228));
      }
      {
        parse_tree__write_deps_file__Var_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_224, 0) = ((MR_Box) ((MR_String) " : "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_224, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_226));
      }
      {
        parse_tree__write_deps_file__Var_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_223, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallHdrsTargetName_36));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_223, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_224));
      }
      {
        parse_tree__write_deps_file__Var_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_221, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_221, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_223));
      }
      {
        parse_tree__write_deps_file__Var_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_220, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallHdrsTargetName_36));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_220, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_221));
      }
      {
        parse_tree__write_deps_file__Var_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_217, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_217, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_220));
      }
      {
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__Var_217);
      }
      {
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_14, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_grade_hdrs", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_37);
      }
      {
        parse_tree__write_deps_file__Var_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_287, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_287, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[67])));
      }
      {
        parse_tree__write_deps_file__Var_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_285, 0) = ((MR_Box) ((MR_String) "\tfor hdr in \044("));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_285, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_287));
      }
      {
        parse_tree__write_deps_file__Var_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_283, 0) = ((MR_Box) ((MR_String) "else\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_283, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_285));
      }
      {
        parse_tree__write_deps_file__Var_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_281, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_281, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_283));
      }
      {
        parse_tree__write_deps_file__Var_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_279, 0) = ((MR_Box) ((MR_String) ".mihs),)\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_279, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_281));
      }
      {
        parse_tree__write_deps_file__Var_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_278, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_278, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_279));
      }
      {
        parse_tree__write_deps_file__Var_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_276, 0) = ((MR_Box) ((MR_String) "ifeq (\044("));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_276, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_278));
      }
      {
        parse_tree__write_deps_file__Var_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_274, 0) = ((MR_Box) ((MR_String) "install_grade_dirs\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_274, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_276));
      }
      {
        parse_tree__write_deps_file__Var_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_272, 0) = ((MR_Box) ((MR_String) ".mihs) "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_272, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_274));
      }
      {
        parse_tree__write_deps_file__Var_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_271, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_18));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_271, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_272));
      }
      {
        parse_tree__write_deps_file__Var_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_269, 0) = ((MR_Box) ((MR_String) "\044("));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_269, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_271));
      }
      {
        parse_tree__write_deps_file__Var_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_267, 0) = ((MR_Box) ((MR_String) " : "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_267, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_269));
      }
      {
        parse_tree__write_deps_file__Var_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_266, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_37));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_266, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_267));
      }
      {
        parse_tree__write_deps_file__Var_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_264, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_264, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_266));
      }
      {
        parse_tree__write_deps_file__Var_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_263, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_37));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_263, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_264));
      }
      {
        parse_tree__write_deps_file__Var_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_260, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_260, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_263));
      }
      {
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__Var_260);
      }
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(
  MR_Word parse_tree__write_deps_file__Globals_11,
  MR_Word parse_tree__write_deps_file__DepStream_12,
  MR_Word parse_tree__write_deps_file__ModuleName_13,
  MR_String parse_tree__write_deps_file__MakeVarName_14,
  MR_String parse_tree__write_deps_file__InitCFileName_15,
  MR_String parse_tree__write_deps_file__InitFileName_16,
  MR_String * parse_tree__write_deps_file__DepFileName_17,
  MR_String * parse_tree__write_deps_file__DvFileName_18)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_String parse_tree__write_deps_file__ModuleFileName_20;
    MR_String parse_tree__write_deps_file__ForceC2InitTarget_21;
    MR_String parse_tree__write_deps_file__TmpInitCFileName_22;
    MR_Word parse_tree__write_deps_file__Var_31;
    MR_Word parse_tree__write_deps_file__Var_33;
    MR_Word parse_tree__write_deps_file__Var_35;
    MR_Word parse_tree__write_deps_file__Var_36;
    MR_Word parse_tree__write_deps_file__Var_38;
    MR_Word parse_tree__write_deps_file__Var_39;
    MR_Word parse_tree__write_deps_file__Var_41;
    MR_Word parse_tree__write_deps_file__Var_43;
    MR_Word parse_tree__write_deps_file__Var_47;
    MR_Word parse_tree__write_deps_file__Var_50;
    MR_Word parse_tree__write_deps_file__Var_52;
    MR_Word parse_tree__write_deps_file__Var_53;
    MR_Word parse_tree__write_deps_file__Var_55;
    MR_String parse_tree__write_deps_file__Var_67;
    MR_Word parse_tree__write_deps_file__Var_70;
    MR_Word parse_tree__write_deps_file__Var_72;
    MR_Word parse_tree__write_deps_file__Var_74;
    MR_Word parse_tree__write_deps_file__Var_75;
    MR_Word parse_tree__write_deps_file__Var_77;
    MR_Word parse_tree__write_deps_file__Var_78;
    MR_Word parse_tree__write_deps_file__Var_80;
    MR_Word parse_tree__write_deps_file__Var_81;
    MR_Word parse_tree__write_deps_file__Var_83;
    MR_Word parse_tree__write_deps_file__Var_85;
    MR_Word parse_tree__write_deps_file__Var_87;
    MR_Word parse_tree__write_deps_file__Var_88;
    MR_Word parse_tree__write_deps_file__Var_90;
    MR_Word parse_tree__write_deps_file__Var_91;
    MR_Word parse_tree__write_deps_file__Var_93;
    MR_Word parse_tree__write_deps_file__Var_95;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_11, parse_tree__write_deps_file__ModuleName_13, (MR_String) ".dep", (MR_Integer) 1, parse_tree__write_deps_file__DepFileName_17);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_11, parse_tree__write_deps_file__ModuleName_13, (MR_String) ".dv", (MR_Integer) 1, parse_tree__write_deps_file__DvFileName_18);
    }
    {
      parse_tree__write_deps_file__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_43, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_16));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[90])));
    }
    {
      parse_tree__write_deps_file__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_41, 0) = ((MR_Box) ((MR_String) "\techo > "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_41, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_43));
    }
    {
      parse_tree__write_deps_file__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_39, 0) = ((MR_Box) ((MR_String) ".cs)\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_39, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_41));
    }
    {
      parse_tree__write_deps_file__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_38, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_38, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_39));
    }
    {
      parse_tree__write_deps_file__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_36, 0) = ((MR_Box) ((MR_String) " \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_36, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_38));
    }
    {
      parse_tree__write_deps_file__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_35, 0) = ((MR_Box) (*parse_tree__write_deps_file__DepFileName_17));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_35, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_36));
    }
    {
      parse_tree__write_deps_file__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_33, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_33, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_35));
    }
    {
      parse_tree__write_deps_file__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_31, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_16));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_31, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_33));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Var_31);
    }
    {
      parse_tree__write_deps_file__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_55, 0) = ((MR_Box) ((MR_String) " >> "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_55, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_43));
    }
    {
      parse_tree__write_deps_file__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_53, 0) = ((MR_Box) ((MR_String) ".cs)"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_53, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_55));
    }
    {
      parse_tree__write_deps_file__Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_52, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_52, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_53));
    }
    {
      parse_tree__write_deps_file__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_50, 0) = ((MR_Box) ((MR_String) "\044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_50, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_52));
    }
    {
      parse_tree__write_deps_file__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_47, 0) = ((MR_Box) ((MR_String) "\t\044(MKLIBINIT) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_47, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_50));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Var_47);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\t\044(EXTRA_INIT_COMMAND) >> ");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__InitFileName_16);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__ModuleFileName_20 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_13);
    }
    {
      parse_tree__write_deps_file__Var_67 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleFileName_20, (MR_String) "_init");
    }
    {
      parse_tree__write_deps_file__ForceC2InitTarget_21 = mercury__string__f_43_43_2_f_0((MR_String) "force-", parse_tree__write_deps_file__Var_67);
    }
    {
      parse_tree__write_deps_file__TmpInitCFileName_22 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__InitCFileName_15, (MR_String) ".tmp");
    }
    {
      parse_tree__write_deps_file__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_95, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_15));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[107])));
    }
    {
      parse_tree__write_deps_file__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_93, 0) = ((MR_Box) ((MR_String) "\t\100mercury_update_interface "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_93, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_95));
    }
    {
      parse_tree__write_deps_file__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_91, 0) = ((MR_Box) ((MR_String) ".init_cs) \044(ALL_C2INITARGS)\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_91, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_93));
    }
    {
      parse_tree__write_deps_file__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_90, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_90, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_91));
    }
    {
      parse_tree__write_deps_file__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_88, 0) = ((MR_Box) ((MR_String) " \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_88, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_90));
    }
    {
      parse_tree__write_deps_file__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_87, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpInitCFileName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_87, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_88));
    }
    {
      parse_tree__write_deps_file__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_85, 0) = ((MR_Box) ((MR_String) "--init-c-file "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_85, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_87));
    }
    {
      parse_tree__write_deps_file__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_83, 0) = ((MR_Box) ((MR_String) "\t\100\044(C2INIT) \044(ALL_GRADEFLAGS) \044(ALL_C2INITFLAGS) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_83, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_85));
    }
    {
      parse_tree__write_deps_file__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_81, 0) = ((MR_Box) ((MR_String) ".cs)\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_81, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_83));
    }
    {
      parse_tree__write_deps_file__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_80, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_14));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_80, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_81));
    }
    {
      parse_tree__write_deps_file__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_78, 0) = ((MR_Box) ((MR_String) " \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_78, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_80));
    }
    {
      parse_tree__write_deps_file__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_77, 0) = ((MR_Box) (parse_tree__write_deps_file__ForceC2InitTarget_21));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_77, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_78));
    }
    {
      parse_tree__write_deps_file__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_75, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_75, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_77));
    }
    {
      parse_tree__write_deps_file__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_74, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_15));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_74, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_75));
    }
    {
      parse_tree__write_deps_file__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_72, 0) = ((MR_Box) ((MR_String) " :\n\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_72, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_74));
    }
    {
      parse_tree__write_deps_file__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_70, 0) = ((MR_Box) (parse_tree__write_deps_file__ForceC2InitTarget_21));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_70, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_72));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Var_70);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(
  MR_Word parse_tree__write_deps_file__Globals_19,
  MR_Word parse_tree__write_deps_file__DepStream_20,
  MR_Word parse_tree__write_deps_file__ModuleName_21,
  MR_String parse_tree__write_deps_file__MakeVarName_22,
  MR_String parse_tree__write_deps_file__InitFileName_23,
  MR_String parse_tree__write_deps_file__InitObjFileName_24,
  MR_Word parse_tree__write_deps_file__Intermod_25,
  MR_Word parse_tree__write_deps_file__TransOpt_26,
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_27,
  MR_String * parse_tree__write_deps_file__MaybeOptsVar_28,
  MR_String * parse_tree__write_deps_file__MaybeTransOptsVar_29,
  MR_String * parse_tree__write_deps_file__MaybeModuleDepsVar_30,
  MR_String * parse_tree__write_deps_file__ExeFileName_31,
  MR_String * parse_tree__write_deps_file__JarFileName_32,
  MR_String * parse_tree__write_deps_file__LibFileName_33,
  MR_String * parse_tree__write_deps_file__SharedLibFileName_34)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__Gmake_36;
    MR_String parse_tree__write_deps_file__All_MLLibsDepString_37;
    MR_String parse_tree__write_deps_file__All_MLObjsString_38;
    MR_String parse_tree__write_deps_file__All_MLPicObjsString_39;
    MR_Word parse_tree__write_deps_file__IfJava_40;
    MR_Word parse_tree__write_deps_file__JavaMainRule_41;
    MR_Word parse_tree__write_deps_file__Else_42;
    MR_Word parse_tree__write_deps_file__EndIf_43;
    MR_Word parse_tree__write_deps_file__MainRule_44;
    MR_Word parse_tree__write_deps_file__Target_45;
    MR_Word parse_tree__write_deps_file__Rules_46;
    MR_String parse_tree__write_deps_file__LibTargetName_47;
    MR_String parse_tree__write_deps_file__MaybeSharedLibFileName_48;
    MR_Word parse_tree__write_deps_file__UseInstallName_49;
    MR_String parse_tree__write_deps_file__InstallNameOpt_50;
    MR_Word parse_tree__write_deps_file__AllInts_51;
    MR_Word parse_tree__write_deps_file__JavaLibRule_52;
    MR_Word parse_tree__write_deps_file__LibRule_53;
    MR_Word parse_tree__write_deps_file__LibRules_54;
    MR_String parse_tree__write_deps_file__ClassFiles_55;
    MR_String parse_tree__write_deps_file__ListClassFiles_56;
    MR_Word parse_tree__write_deps_file__Var_83;
    MR_Word parse_tree__write_deps_file__Var_85;
    MR_Word parse_tree__write_deps_file__Var_93;
    MR_Word parse_tree__write_deps_file__Var_96;
    MR_Word parse_tree__write_deps_file__Var_98;
    MR_Word parse_tree__write_deps_file__Var_99;
    MR_Word parse_tree__write_deps_file__Var_101;
    MR_Word parse_tree__write_deps_file__Var_102;
    MR_Word parse_tree__write_deps_file__Var_104;
    MR_Word parse_tree__write_deps_file__Var_110;
    MR_Word parse_tree__write_deps_file__Var_112;
    MR_Word parse_tree__write_deps_file__Var_113;
    MR_Word parse_tree__write_deps_file__Var_115;
    MR_Word parse_tree__write_deps_file__Var_117;
    MR_Word parse_tree__write_deps_file__Var_118;
    MR_Word parse_tree__write_deps_file__Var_120;
    MR_Word parse_tree__write_deps_file__Var_121;
    MR_Word parse_tree__write_deps_file__Var_123;
    MR_Word parse_tree__write_deps_file__Var_124;
    MR_Word parse_tree__write_deps_file__Var_126;
    MR_Word parse_tree__write_deps_file__Var_127;
    MR_Word parse_tree__write_deps_file__Var_129;
    MR_Word parse_tree__write_deps_file__Var_131;
    MR_Word parse_tree__write_deps_file__Var_133;
    MR_Word parse_tree__write_deps_file__Var_134;
    MR_Word parse_tree__write_deps_file__Var_136;
    MR_Word parse_tree__write_deps_file__Var_137;
    MR_Word parse_tree__write_deps_file__Var_139;
    MR_Word parse_tree__write_deps_file__Var_141;
    MR_Word parse_tree__write_deps_file__Var_142;
    MR_Word parse_tree__write_deps_file__Var_144;
    MR_Word parse_tree__write_deps_file__Var_182;
    MR_Word parse_tree__write_deps_file__Var_183;
    MR_Word parse_tree__write_deps_file__Var_185;
    MR_Word parse_tree__write_deps_file__Var_187;
    MR_Word parse_tree__write_deps_file__Var_188;
    MR_Word parse_tree__write_deps_file__Var_190;
    MR_Word parse_tree__write_deps_file__Var_191;
    MR_Word parse_tree__write_deps_file__Var_192;
    MR_Word parse_tree__write_deps_file__Var_193;
    MR_Word parse_tree__write_deps_file__Var_196;
    MR_Word parse_tree__write_deps_file__Var_198;
    MR_Word parse_tree__write_deps_file__Var_199;
    MR_Word parse_tree__write_deps_file__Var_201;
    MR_Word parse_tree__write_deps_file__Var_203;
    MR_Word parse_tree__write_deps_file__Var_204;
    MR_Word parse_tree__write_deps_file__Var_206;
    MR_Word parse_tree__write_deps_file__Var_212;
    MR_Word parse_tree__write_deps_file__Var_215;
    MR_Word parse_tree__write_deps_file__Var_216;
    MR_Word parse_tree__write_deps_file__Var_218;
    MR_Word parse_tree__write_deps_file__Var_221;
    MR_Word parse_tree__write_deps_file__Var_222;
    MR_Word parse_tree__write_deps_file__Var_224;
    MR_Word parse_tree__write_deps_file__Var_225;
    MR_Word parse_tree__write_deps_file__Var_227;
    MR_Word parse_tree__write_deps_file__Var_229;
    MR_Word parse_tree__write_deps_file__Var_230;
    MR_Word parse_tree__write_deps_file__Var_232;
    MR_Word parse_tree__write_deps_file__Var_233;
    MR_Word parse_tree__write_deps_file__Var_235;
    MR_Word parse_tree__write_deps_file__Var_236;
    MR_Word parse_tree__write_deps_file__Var_238;
    MR_Word parse_tree__write_deps_file__Var_240;
    MR_Word parse_tree__write_deps_file__Var_242;
    MR_Word parse_tree__write_deps_file__Var_243;
    MR_Word parse_tree__write_deps_file__Var_245;
    MR_Word parse_tree__write_deps_file__Var_246;
    MR_Word parse_tree__write_deps_file__Var_248;
    MR_Word parse_tree__write_deps_file__Var_250;
    MR_Word parse_tree__write_deps_file__Var_251;
    MR_Word parse_tree__write_deps_file__Var_253;
    MR_Word parse_tree__write_deps_file__Var_259;
    MR_Word parse_tree__write_deps_file__Var_261;
    MR_Word parse_tree__write_deps_file__Var_263;
    MR_Word parse_tree__write_deps_file__Var_264;
    MR_Word parse_tree__write_deps_file__Var_266;
    MR_Word parse_tree__write_deps_file__Var_268;
    MR_Word parse_tree__write_deps_file__Var_269;
    MR_Word parse_tree__write_deps_file__Var_271;
    MR_Word parse_tree__write_deps_file__Var_272;
    MR_Word parse_tree__write_deps_file__Var_274;
    MR_Word parse_tree__write_deps_file__Var_276;
    MR_Word parse_tree__write_deps_file__Var_277;
    MR_Word parse_tree__write_deps_file__Var_279;
    MR_Word parse_tree__write_deps_file__Var_281;
    MR_Word parse_tree__write_deps_file__Var_282;
    MR_Word parse_tree__write_deps_file__Var_284;
    MR_Word parse_tree__write_deps_file__Var_286;
    MR_Word parse_tree__write_deps_file__Var_287;
    MR_Word parse_tree__write_deps_file__Var_289;
    MR_Word parse_tree__write_deps_file__Var_290;
    MR_Word parse_tree__write_deps_file__Var_292;
    MR_Word parse_tree__write_deps_file__Var_294;
    MR_String parse_tree__write_deps_file__Var_299;
    MR_Word parse_tree__write_deps_file__Var_301;
    MR_Word parse_tree__write_deps_file__Var_303;
    MR_Word parse_tree__write_deps_file__Var_305;
    MR_Word parse_tree__write_deps_file__Var_307;
    MR_Word parse_tree__write_deps_file__Var_308;
    MR_Word parse_tree__write_deps_file__Var_310;
    MR_Word parse_tree__write_deps_file__Var_312;
    MR_Word parse_tree__write_deps_file__Var_313;
    MR_Word parse_tree__write_deps_file__Var_315;

    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_19, (MR_Integer) 129, &parse_tree__write_deps_file__Gmake_36);
    }
    switch (parse_tree__write_deps_file__Gmake_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__write_deps_file__All_MLLibsDepString_37 = (MR_String) "\044(ALL_MLLIBS_DEP)";
          parse_tree__write_deps_file__All_MLObjsString_38 = (MR_String) "\044(ALL_MLOBJS)";
          parse_tree__write_deps_file__All_MLPicObjsString_39 = (MR_String) "\044(ALL_MLPICOBJS)";
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__write_deps_file__Var_60;
          MR_Word parse_tree__write_deps_file__Var_62;
          MR_Word parse_tree__write_deps_file__Var_66;
          MR_Word parse_tree__write_deps_file__Var_68;
          MR_Word parse_tree__write_deps_file__Var_72;
          MR_Word parse_tree__write_deps_file__Var_74;

          {
            parse_tree__write_deps_file__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_62, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[100])));
          }
          {
            parse_tree__write_deps_file__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_60, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(foreach \100,"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_60, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_62));
          }
          {
            mercury__string__append_list_2_p_0(parse_tree__write_deps_file__Var_60, &parse_tree__write_deps_file__All_MLLibsDepString_37);
          }
          {
            parse_tree__write_deps_file__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_68, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[101])));
          }
          {
            parse_tree__write_deps_file__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_66, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(foreach \100,"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_66, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_68));
          }
          {
            mercury__string__append_list_2_p_0(parse_tree__write_deps_file__Var_66, &parse_tree__write_deps_file__All_MLObjsString_38);
          }
          {
            parse_tree__write_deps_file__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_74, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[102])));
          }
          {
            parse_tree__write_deps_file__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_72, 0) = ((MR_Box) ((MR_String) "\\\n\t\t\044(patsubst %.o,%.\044(EXT_FOR_PIC_OBJECTS),\044(foreach \100,"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_72, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_74));
          }
          {
            mercury__string__append_list_2_p_0(parse_tree__write_deps_file__Var_72, &parse_tree__write_deps_file__All_MLPicObjsString_39);
          }
        }
        break;
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ModuleName_21, (MR_String) "", (MR_Integer) 1, parse_tree__write_deps_file__ExeFileName_31);
    }
    parse_tree__write_deps_file__IfJava_40 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103]);
    {
      parse_tree__write_deps_file__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_85, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[104])));
    }
    {
      parse_tree__write_deps_file__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_83, 0) = ((MR_Box) ((MR_String) " : \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_83, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_85));
    }
    {
      parse_tree__write_deps_file__JavaMainRule_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaMainRule_41, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaMainRule_41, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_83));
    }
    parse_tree__write_deps_file__Else_42 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[105]);
    parse_tree__write_deps_file__EndIf_43 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[10]);
    {
      parse_tree__write_deps_file__Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_104, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[20])));
    }
    {
      parse_tree__write_deps_file__Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_102, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_102, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_104));
    }
    {
      parse_tree__write_deps_file__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_101, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_101, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_102));
    }
    {
      parse_tree__write_deps_file__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_99, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_99, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_101));
    }
    {
      parse_tree__write_deps_file__Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_98, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_98, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_99));
    }
    {
      parse_tree__write_deps_file__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_96, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_96, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_98));
    }
    {
      parse_tree__write_deps_file__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_93, 0) = ((MR_Box) ((MR_String) "ifneq (\044(EXT_FOR_EXE),)\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_93, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_96));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__Var_93);
    }
    {
      parse_tree__write_deps_file__Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_144, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_144, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[106])));
    }
    {
      parse_tree__write_deps_file__Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_142, 0) = ((MR_Box) ((MR_String) ".os) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_142, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_144));
    }
    {
      parse_tree__write_deps_file__Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_141, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_141, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_142));
    }
    {
      parse_tree__write_deps_file__Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_139, 0) = ((MR_Box) ((MR_String) "\t\t\044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_139, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_141));
    }
    {
      parse_tree__write_deps_file__Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_137, 0) = ((MR_Box) ((MR_String) " \\\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_137, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_139));
    }
    {
      parse_tree__write_deps_file__Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_136, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_24));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_136, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_137));
    }
    {
      parse_tree__write_deps_file__Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_134, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_134, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_136));
    }
    {
      parse_tree__write_deps_file__Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_133, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_133, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_134));
    }
    {
      parse_tree__write_deps_file__Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_131, 0) = ((MR_Box) ((MR_String) "\044(EXEFILE_OPT)"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_131, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_133));
    }
    {
      parse_tree__write_deps_file__Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_129, 0) = ((MR_Box) ((MR_String) "\t\044(ML) \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) -- \044(ALL_LDFLAGS) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_129, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_131));
    }
    {
      parse_tree__write_deps_file__Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_127, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_127, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_129));
    }
    {
      parse_tree__write_deps_file__Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_126, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLLibsDepString_37));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_126, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_127));
    }
    {
      parse_tree__write_deps_file__Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_124, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_124, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_126));
    }
    {
      parse_tree__write_deps_file__Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_123, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_123, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_124));
    }
    {
      parse_tree__write_deps_file__Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_121, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_121, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_123));
    }
    {
      parse_tree__write_deps_file__Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_120, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_24));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_120, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_121));
    }
    {
      parse_tree__write_deps_file__Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_118, 0) = ((MR_Box) ((MR_String) ".os) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_118, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_120));
    }
    {
      parse_tree__write_deps_file__Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_117, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_117, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_118));
    }
    {
      parse_tree__write_deps_file__Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_115, 0) = ((MR_Box) ((MR_String) "\044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_115, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_117));
    }
    {
      parse_tree__write_deps_file__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_113, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_113, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_115));
    }
    {
      parse_tree__write_deps_file__Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_112, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_112, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_113));
    }
    {
      parse_tree__write_deps_file__Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_110, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) : \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_110, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_112));
    }
    {
      parse_tree__write_deps_file__MainRule_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MainRule_44, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_31));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MainRule_44, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_110));
    }
    {
      libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_19, &parse_tree__write_deps_file__Target_45);
    }
    switch (parse_tree__write_deps_file__Gmake_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (parse_tree__write_deps_file__Target_45) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            parse_tree__write_deps_file__Rules_46 = parse_tree__write_deps_file__MainRule_44;
            break;
          case (MR_Integer) 1:
            parse_tree__write_deps_file__Rules_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 3:
            parse_tree__write_deps_file__Rules_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 2:
            parse_tree__write_deps_file__Rules_46 = parse_tree__write_deps_file__JavaMainRule_41;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__write_deps_file__TypeCtorInfo_319_319 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          MR_Word parse_tree__write_deps_file__Var_148;
          MR_Word parse_tree__write_deps_file__Var_149;
          MR_Word parse_tree__write_deps_file__Var_150;

          {
            parse_tree__write_deps_file__Var_150 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_319_319, parse_tree__write_deps_file__MainRule_44, parse_tree__write_deps_file__EndIf_43);
          }
          {
            parse_tree__write_deps_file__Var_149 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_319_319, parse_tree__write_deps_file__Else_42, parse_tree__write_deps_file__Var_150);
          }
          {
            parse_tree__write_deps_file__Var_148 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_319_319, parse_tree__write_deps_file__JavaMainRule_41, parse_tree__write_deps_file__Var_149);
          }
          {
            parse_tree__write_deps_file__Rules_46 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_319_319, parse_tree__write_deps_file__IfJava_40, parse_tree__write_deps_file__Var_148);
          }
        }
        break;
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__Rules_46);
    }
    switch (parse_tree__write_deps_file__Intermod_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *parse_tree__write_deps_file__MaybeOptsVar_28 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_String parse_tree__write_deps_file__Var_153;

          {
            parse_tree__write_deps_file__Var_153 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".opts) ");
          }
          {
            *parse_tree__write_deps_file__MaybeOptsVar_28 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_153);
          }
        }
        break;
    }
    switch (parse_tree__write_deps_file__TransOpt_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *parse_tree__write_deps_file__MaybeTransOptsVar_29 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_String parse_tree__write_deps_file__Var_156;

          {
            parse_tree__write_deps_file__Var_156 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".trans_opts) ");
          }
          {
            *parse_tree__write_deps_file__MaybeTransOptsVar_29 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_156);
          }
        }
        break;
    }
    switch (parse_tree__write_deps_file__MmcMakeDeps_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *parse_tree__write_deps_file__MaybeModuleDepsVar_30 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_String parse_tree__write_deps_file__Var_159;

          {
            parse_tree__write_deps_file__Var_159 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".module_deps) ");
          }
          {
            *parse_tree__write_deps_file__MaybeModuleDepsVar_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_159);
          }
        }
        break;
    }
    {
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) "", (MR_Integer) 1, &parse_tree__write_deps_file__LibTargetName_47);
    }
    {
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044A", (MR_Integer) 0, parse_tree__write_deps_file__LibFileName_33);
    }
    {
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 0, parse_tree__write_deps_file__SharedLibFileName_34);
    }
    {
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_19, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_21, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 1, &parse_tree__write_deps_file__MaybeSharedLibFileName_48);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ModuleName_21, (MR_String) ".jar", (MR_Integer) 1, parse_tree__write_deps_file__JarFileName_32);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_19, (MR_Integer) 617, &parse_tree__write_deps_file__UseInstallName_49);
    }
    switch (parse_tree__write_deps_file__UseInstallName_49) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__write_deps_file__InstallNameOpt_50 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__get_install_name_option_3_p_0(parse_tree__write_deps_file__Globals_19, *parse_tree__write_deps_file__SharedLibFileName_34, &parse_tree__write_deps_file__InstallNameOpt_50);
        }
        break;
    }
    parse_tree__write_deps_file__Var_193 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[107]);
    {
      parse_tree__write_deps_file__Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_192, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_23));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_192, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_193));
    }
    {
      parse_tree__write_deps_file__Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_191, 0) = ((MR_Box) (*parse_tree__write_deps_file__MaybeTransOptsVar_29));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_191, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_192));
    }
    {
      parse_tree__write_deps_file__Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_190, 0) = ((MR_Box) (*parse_tree__write_deps_file__MaybeOptsVar_28));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_190, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_191));
    }
    {
      parse_tree__write_deps_file__Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_188, 0) = ((MR_Box) ((MR_String) ".int3s) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_188, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_190));
    }
    {
      parse_tree__write_deps_file__Var_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_187, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_187, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_188));
    }
    {
      parse_tree__write_deps_file__Var_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_185, 0) = ((MR_Box) ((MR_String) "\044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_185, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_187));
    }
    {
      parse_tree__write_deps_file__Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_183, 0) = ((MR_Box) ((MR_String) ".ints) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_183, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_185));
    }
    {
      parse_tree__write_deps_file__Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_182, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_182, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_183));
    }
    {
      parse_tree__write_deps_file__AllInts_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__AllInts_51, 0) = ((MR_Box) ((MR_String) "\044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__AllInts_51, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_182));
    }
    {
      parse_tree__write_deps_file__Var_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_199, 0) = ((MR_Box) ((MR_String) " \\\n\t\t"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_199, 1) = ((MR_Box) (parse_tree__write_deps_file__AllInts_51));
    }
    {
      parse_tree__write_deps_file__Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_198, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_198, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_199));
    }
    {
      parse_tree__write_deps_file__Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_196, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_196, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_198));
    }
    {
      parse_tree__write_deps_file__JavaLibRule_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaLibRule_52, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_47));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaLibRule_52, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_196));
    }
    {
      parse_tree__write_deps_file__Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_206, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeSharedLibFileName_48));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_206, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_199));
    }
    {
      parse_tree__write_deps_file__Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_204, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_204, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_206));
    }
    {
      parse_tree__write_deps_file__Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_203, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_203, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_204));
    }
    {
      parse_tree__write_deps_file__Var_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_201, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_201, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_203));
    }
    {
      parse_tree__write_deps_file__LibRule_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibRule_53, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_47));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibRule_53, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_201));
    }
    switch (parse_tree__write_deps_file__Gmake_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (parse_tree__write_deps_file__Target_45) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            parse_tree__write_deps_file__LibRules_54 = parse_tree__write_deps_file__LibRule_53;
            break;
          case (MR_Integer) 1:
            parse_tree__write_deps_file__LibRules_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 3:
            parse_tree__write_deps_file__LibRules_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 2:
            parse_tree__write_deps_file__LibRules_54 = parse_tree__write_deps_file__JavaLibRule_52;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__write_deps_file__TypeCtorInfo_320_320 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
          MR_Word parse_tree__write_deps_file__Var_209;
          MR_Word parse_tree__write_deps_file__Var_210;
          MR_Word parse_tree__write_deps_file__Var_211;

          {
            parse_tree__write_deps_file__Var_211 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_320_320, parse_tree__write_deps_file__LibRule_53, parse_tree__write_deps_file__EndIf_43);
          }
          {
            parse_tree__write_deps_file__Var_210 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_320_320, parse_tree__write_deps_file__Else_42, parse_tree__write_deps_file__Var_211);
          }
          {
            parse_tree__write_deps_file__Var_209 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_320_320, parse_tree__write_deps_file__JavaLibRule_52, parse_tree__write_deps_file__Var_210);
          }
          {
            parse_tree__write_deps_file__LibRules_54 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_320_320, parse_tree__write_deps_file__IfJava_40, parse_tree__write_deps_file__Var_209);
          }
        }
        break;
    }
    {
      parse_tree__write_deps_file__Var_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_216, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_216, 1) = ((MR_Box) (parse_tree__write_deps_file__LibRules_54));
    }
    {
      parse_tree__write_deps_file__Var_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_215, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_47));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_215, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_216));
    }
    {
      parse_tree__write_deps_file__Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_212, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_212, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_215));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__Var_212);
    }
    {
      parse_tree__write_deps_file__Var_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_253, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLPicObjsString_39));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_253, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[22])));
    }
    {
      parse_tree__write_deps_file__Var_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_251, 0) = ((MR_Box) ((MR_String) ".pic_os) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_251, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_253));
    }
    {
      parse_tree__write_deps_file__Var_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_250, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_250, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_251));
    }
    {
      parse_tree__write_deps_file__Var_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_248, 0) = ((MR_Box) ((MR_String) "\t\t\044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_248, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_250));
    }
    {
      parse_tree__write_deps_file__Var_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_246, 0) = ((MR_Box) ((MR_String) " \\\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_246, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_248));
    }
    {
      parse_tree__write_deps_file__Var_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_245, 0) = ((MR_Box) (*parse_tree__write_deps_file__SharedLibFileName_34));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_245, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_246));
    }
    {
      parse_tree__write_deps_file__Var_243 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_243, 0) = ((MR_Box) ((MR_String) " \044(ALL_LD_LIBFLAGS) -o "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_243, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_245));
    }
    {
      parse_tree__write_deps_file__Var_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_242, 0) = ((MR_Box) (parse_tree__write_deps_file__InstallNameOpt_50));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_242, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_243));
    }
    {
      parse_tree__write_deps_file__Var_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_240, 0) = ((MR_Box) ((MR_String) "-- "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_240, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_242));
    }
    {
      parse_tree__write_deps_file__Var_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_238, 0) = ((MR_Box) ((MR_String) "\t\044(ML) --make-shared-lib \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_238, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_240));
    }
    {
      parse_tree__write_deps_file__Var_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_236, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_236, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_238));
    }
    {
      parse_tree__write_deps_file__Var_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_235, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLLibsDepString_37));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_235, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_236));
    }
    {
      parse_tree__write_deps_file__Var_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_233, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_233, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_235));
    }
    {
      parse_tree__write_deps_file__Var_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_232, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLPicObjsString_39));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_232, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_233));
    }
    {
      parse_tree__write_deps_file__Var_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_230, 0) = ((MR_Box) ((MR_String) ".pic_os) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_230, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_232));
    }
    {
      parse_tree__write_deps_file__Var_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_229, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_229, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_230));
    }
    {
      parse_tree__write_deps_file__Var_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_227, 0) = ((MR_Box) ((MR_String) "\044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_227, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_229));
    }
    {
      parse_tree__write_deps_file__Var_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_225, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_225, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_227));
    }
    {
      parse_tree__write_deps_file__Var_224 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_224, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_224, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_225));
    }
    {
      parse_tree__write_deps_file__Var_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_222, 0) = ((MR_Box) ((MR_String) " : \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_222, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_224));
    }
    {
      parse_tree__write_deps_file__Var_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_221, 0) = ((MR_Box) (*parse_tree__write_deps_file__SharedLibFileName_34));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_221, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_222));
    }
    {
      parse_tree__write_deps_file__Var_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_218, 0) = ((MR_Box) ((MR_String) "ifneq (\044(EXT_FOR_SHARED_LIB),\044A)\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_218, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_221));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__Var_218);
    }
    {
      parse_tree__write_deps_file__Var_294 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_294, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_294, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_193));
    }
    {
      parse_tree__write_deps_file__Var_292 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_292, 0) = ((MR_Box) ((MR_String) "\t\044(RANLIB) \044(ALL_RANLIBFLAGS) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_292, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_294));
    }
    {
      parse_tree__write_deps_file__Var_290 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_290, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_290, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_292));
    }
    {
      parse_tree__write_deps_file__Var_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_289, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_289, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_290));
    }
    {
      parse_tree__write_deps_file__Var_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_287, 0) = ((MR_Box) ((MR_String) ".os) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_287, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_289));
    }
    {
      parse_tree__write_deps_file__Var_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_286, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_286, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_287));
    }
    {
      parse_tree__write_deps_file__Var_284 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_284, 0) = ((MR_Box) ((MR_String) "\044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_284, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_286));
    }
    {
      parse_tree__write_deps_file__Var_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_282, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_282, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_284));
    }
    {
      parse_tree__write_deps_file__Var_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_281, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_281, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_282));
    }
    {
      parse_tree__write_deps_file__Var_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_279, 0) = ((MR_Box) ((MR_String) "\t\044(AR) \044(ALL_ARFLAGS) \044(AR_LIBFILE_OPT)"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_279, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_281));
    }
    {
      parse_tree__write_deps_file__Var_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_277, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_277, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_279));
    }
    {
      parse_tree__write_deps_file__Var_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_276, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_276, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_277));
    }
    {
      parse_tree__write_deps_file__Var_274 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_274, 0) = ((MR_Box) ((MR_String) "\trm -f "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_274, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_276));
    }
    {
      parse_tree__write_deps_file__Var_272 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_272, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_272, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_274));
    }
    {
      parse_tree__write_deps_file__Var_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_271, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjsString_38));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_271, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_272));
    }
    {
      parse_tree__write_deps_file__Var_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_269, 0) = ((MR_Box) ((MR_String) ".os) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_269, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_271));
    }
    {
      parse_tree__write_deps_file__Var_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_268, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_268, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_269));
    }
    {
      parse_tree__write_deps_file__Var_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_266, 0) = ((MR_Box) ((MR_String) "\044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_266, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_268));
    }
    {
      parse_tree__write_deps_file__Var_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_264, 0) = ((MR_Box) ((MR_String) ".cs_or_ss) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_264, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_266));
    }
    {
      parse_tree__write_deps_file__Var_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_263, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_263, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_264));
    }
    {
      parse_tree__write_deps_file__Var_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_261, 0) = ((MR_Box) ((MR_String) " : \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_261, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_263));
    }
    {
      parse_tree__write_deps_file__Var_259 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_259, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_33));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_259, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_261));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__Var_259);
    }
    {
      parse_tree__write_deps_file__Var_299 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MakeVarName_22, (MR_String) ".classes)");
    }
    {
      parse_tree__write_deps_file__ClassFiles_55 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_299);
    }
    {
      parse_tree__module_cmds__list_class_files_for_jar_mmake_3_p_0(parse_tree__write_deps_file__Globals_19, parse_tree__write_deps_file__ClassFiles_55, &parse_tree__write_deps_file__ListClassFiles_56);
    }
    {
      parse_tree__write_deps_file__Var_315 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_315, 0) = ((MR_Box) (parse_tree__write_deps_file__ListClassFiles_56));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_315, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_193));
    }
    {
      parse_tree__write_deps_file__Var_313 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_313, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_313, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_315));
    }
    {
      parse_tree__write_deps_file__Var_312 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_312, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_312, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_313));
    }
    {
      parse_tree__write_deps_file__Var_310 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_310, 0) = ((MR_Box) ((MR_String) "\t\044(JAR) \044(JAR_CREATE_FLAGS) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_310, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_312));
    }
    {
      parse_tree__write_deps_file__Var_308 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_308, 0) = ((MR_Box) ((MR_String) ".classes)\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_308, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_310));
    }
    {
      parse_tree__write_deps_file__Var_307 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_307, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_307, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_308));
    }
    {
      parse_tree__write_deps_file__Var_305 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_305, 0) = ((MR_Box) ((MR_String) "\044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_305, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_307));
    }
    {
      parse_tree__write_deps_file__Var_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_303, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_303, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_305));
    }
    {
      parse_tree__write_deps_file__Var_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_301, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_32));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_301, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_303));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__Var_301);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_7_p_0(
  MR_Word parse_tree__write_deps_file__Globals_8,
  MR_String parse_tree__write_deps_file__SourceFileName_9,
  MR_Word parse_tree__write_deps_file__ModuleName_10,
  MR_Word parse_tree__write_deps_file__DepsMap_11,
  MR_Word parse_tree__write_deps_file__DepStream_12)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_String parse_tree__write_deps_file__ModuleNameString_14;
    MR_String parse_tree__write_deps_file__Version_15;
    MR_String parse_tree__write_deps_file__Fullarch_16;
    MR_String parse_tree__write_deps_file__MakeVarName_17;
    MR_String parse_tree__write_deps_file__InitFileName_18;
    MR_String parse_tree__write_deps_file__InitCFileName_19;
    MR_String parse_tree__write_deps_file__InitObjFileName_20;
    MR_String parse_tree__write_deps_file__InitPicObjFileName_21;
    MR_Word parse_tree__write_deps_file__Intermod_22;
    MR_Word parse_tree__write_deps_file__TransOpt_23;
    MR_Word parse_tree__write_deps_file__MmcMakeDeps_24;
    MR_String parse_tree__write_deps_file__MaybeOptsVar_25;
    MR_String parse_tree__write_deps_file__MaybeTransOptsVar_26;
    MR_String parse_tree__write_deps_file__MaybeModuleDepsVar_27;
    MR_String parse_tree__write_deps_file__ExeFileName_28;
    MR_String parse_tree__write_deps_file__JarFileName_29;
    MR_String parse_tree__write_deps_file__LibFileName_30;
    MR_String parse_tree__write_deps_file__SharedLibFileName_31;
    MR_String parse_tree__write_deps_file__DepFileName_32;
    MR_String parse_tree__write_deps_file__DvFileName_33;

    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Automatically generated dependencies for module \140");
    }
    {
      parse_tree__write_deps_file__ModuleNameString_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_10);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleNameString_14);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# generated from source file \140");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__SourceFileName_9);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
    {
      mercury__library__version_2_p_0(&parse_tree__write_deps_file__Version_15, &parse_tree__write_deps_file__Fullarch_16);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Generated by the Mercury compiler, version ");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Version_15);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n# configured for ");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Fullarch_16);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".\n\n");
    }
    {
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__MakeVarName_17);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) ".init", (MR_Integer) 0, &parse_tree__write_deps_file__InitFileName_18);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.c", (MR_Integer) 0, &parse_tree__write_deps_file__InitCFileName_19);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.\044O", (MR_Integer) 0, &parse_tree__write_deps_file__InitObjFileName_20);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__ModuleName_10, (MR_String) "_init.pic_o", (MR_Integer) 0, &parse_tree__write_deps_file__InitPicObjFileName_21);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 330, &parse_tree__write_deps_file__Intermod_22);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 334, &parse_tree__write_deps_file__TransOpt_23);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 128, &parse_tree__write_deps_file__MmcMakeDeps_24);
    }
    {
      parse_tree__write_deps_file__generate_dep_file_exec_library_targets_18_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__InitFileName_18, parse_tree__write_deps_file__InitObjFileName_20, parse_tree__write_deps_file__Intermod_22, parse_tree__write_deps_file__TransOpt_23, parse_tree__write_deps_file__MmcMakeDeps_24, &parse_tree__write_deps_file__MaybeOptsVar_25, &parse_tree__write_deps_file__MaybeTransOptsVar_26, &parse_tree__write_deps_file__MaybeModuleDepsVar_27, &parse_tree__write_deps_file__ExeFileName_28, &parse_tree__write_deps_file__JarFileName_29, &parse_tree__write_deps_file__LibFileName_30, &parse_tree__write_deps_file__SharedLibFileName_31);
    }
    {
      parse_tree__write_deps_file__generate_dep_file_init_targets_10_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__InitCFileName_19, parse_tree__write_deps_file__InitFileName_18, &parse_tree__write_deps_file__DepFileName_32, &parse_tree__write_deps_file__DvFileName_33);
    }
    {
      parse_tree__write_deps_file__generate_dep_file_install_targets_13_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__DepsMap_11, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__MmcMakeDeps_24, parse_tree__write_deps_file__Intermod_22, parse_tree__write_deps_file__TransOpt_23, parse_tree__write_deps_file__MaybeModuleDepsVar_27, parse_tree__write_deps_file__MaybeOptsVar_25, parse_tree__write_deps_file__MaybeTransOptsVar_26);
    }
    {
      parse_tree__write_deps_file__generate_dep_file_collective_targets_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17);
    }
    {
      parse_tree__write_deps_file__generate_dep_file_clean_targets_16_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__MakeVarName_17, parse_tree__write_deps_file__ExeFileName_28, parse_tree__write_deps_file__InitCFileName_19, parse_tree__write_deps_file__InitObjFileName_20, parse_tree__write_deps_file__InitPicObjFileName_21, parse_tree__write_deps_file__InitFileName_18, parse_tree__write_deps_file__LibFileName_30, parse_tree__write_deps_file__SharedLibFileName_31, parse_tree__write_deps_file__JarFileName_29, parse_tree__write_deps_file__DepFileName_32, parse_tree__write_deps_file__DvFileName_33);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__select_ok_modules_3_p_0(
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
  MR_Word parse_tree__write_deps_file__DepsMap_2,
  MR_Word * parse_tree__write_deps_file__HeadVar__3_3)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;

    if ((parse_tree__write_deps_file__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__write_deps_file__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__write_deps_file__TypeCtorInfo_18_18;
        MR_Word parse_tree__write_deps_file__Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word parse_tree__write_deps_file__Modules0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word parse_tree__write_deps_file__ModulesTail_9;
        MR_Word parse_tree__write_deps_file__ModuleImports_11;
        MR_Word parse_tree__write_deps_file__Errors_12;
        MR_Word parse_tree__write_deps_file__FatalErrors_13;
        MR_Word parse_tree__write_deps_file__Var_14;
        MR_Word parse_tree__write_deps_file__Var_15;
        MR_Box parse_tree__write_deps_file__conv0_Var_14;
        MR_Word parse_tree__write_deps_file__Var_10;

        {
          parse_tree__write_deps_file__select_ok_modules_3_p_0(parse_tree__write_deps_file__Modules0_6, parse_tree__write_deps_file__DepsMap_2, &parse_tree__write_deps_file__ModulesTail_9);
        }
        {
          mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_2, ((MR_Box) (parse_tree__write_deps_file__Module_5)), &parse_tree__write_deps_file__conv0_Var_14);
        }
        parse_tree__write_deps_file__Var_14 = ((MR_Word) parse_tree__write_deps_file__conv0_Var_14);
        parse_tree__write_deps_file__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, (MR_Integer) 0)));
        parse_tree__write_deps_file__ModuleImports_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, (MR_Integer) 1)));
        {
          parse_tree__module_imports__module_and_imports_get_errors_2_p_0(parse_tree__write_deps_file__ModuleImports_11, &parse_tree__write_deps_file__Errors_12);
        }
        {
          parse_tree__write_deps_file__Var_15 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
        }
        parse_tree__write_deps_file__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0;
        {
          mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_18_18, parse_tree__write_deps_file__Errors_12, parse_tree__write_deps_file__Var_15, &parse_tree__write_deps_file__FatalErrors_13);
        }
        {
          parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_18_18, parse_tree__write_deps_file__FatalErrors_13);
        }
        if (parse_tree__write_deps_file__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *parse_tree__write_deps_file__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Module_5));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__ModulesTail_9));
          }
        else
          *parse_tree__write_deps_file__HeadVar__3_3 = parse_tree__write_deps_file__ModulesTail_9;
      }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_4(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_String parse_tree__write_deps_file__conv2_LambdaHeadVar__2_118;

    {
      parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1174__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv2_LambdaHeadVar__2_118);
    }
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv2_LambdaHeadVar__2_118));
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_3(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

    {
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1128__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
    return parse_tree__write_deps_file__succeeded;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_2(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_String parse_tree__write_deps_file__conv1_FileName_6;

    {
      parse_tree__write_deps_file__get_source_file_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv1_FileName_6);
    }
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_FileName_6));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_Word parse_tree__write_deps_file__conv0_Result_6;

    {
      parse_tree__write_deps_file__compare_module_names_3_p_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_2), &parse_tree__write_deps_file__conv0_Result_6);
    }
    *parse_tree__write_deps_file__wrapper_arg_3 = ((MR_Box) (parse_tree__write_deps_file__conv0_Result_6));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0(
  MR_Word parse_tree__write_deps_file__Globals_8,
  MR_String parse_tree__write_deps_file__SourceFileName_9,
  MR_Word parse_tree__write_deps_file__ModuleName_10,
  MR_Word parse_tree__write_deps_file__DepsMap_11,
  MR_Word parse_tree__write_deps_file__DepStream_12)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_473_473;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_480_480;
    MR_String parse_tree__write_deps_file__ModuleNameString_14;
    MR_String parse_tree__write_deps_file__Version_15;
    MR_String parse_tree__write_deps_file__Fullarch_16;
    MR_Word parse_tree__write_deps_file__Modules0_17;
    MR_Word parse_tree__write_deps_file__Modules1_18;
    MR_Word parse_tree__write_deps_file__Modules_19;
    MR_String parse_tree__write_deps_file__MakeVarName_20;
    MR_Word parse_tree__write_deps_file__SourceFiles0_21;
    MR_Word parse_tree__write_deps_file__SourceFiles_22;
    MR_Word parse_tree__write_deps_file__ModulesWithSubModules_23;
    MR_Word parse_tree__write_deps_file__Target_27;
    MR_Word parse_tree__write_deps_file__ForeignModulesAndExts_28;
    MR_Word parse_tree__write_deps_file__ForeignModules_29;
    MR_Word parse_tree__write_deps_file__Gmake_30;
    MR_Word parse_tree__write_deps_file__Basis_32;
    MR_Word parse_tree__write_deps_file__ForeignBasis_34;
    MR_Word parse_tree__write_deps_file__ParentBasis_36;
    MR_Word parse_tree__write_deps_file__ExtraLinkObjs_37;
    MR_Word parse_tree__write_deps_file__MakeFileName_38;
    MR_Word parse_tree__write_deps_file__ForeignFileNames_44;
    MR_Word parse_tree__write_deps_file__HighLevelCode_45;
    MR_Word parse_tree__write_deps_file__Var_67;
    MR_Word parse_tree__write_deps_file__Var_89;
    MR_Word parse_tree__write_deps_file__Var_197;
    MR_Word parse_tree__write_deps_file__Var_199;
    MR_Word parse_tree__write_deps_file__Var_201;
    MR_String parse_tree__write_deps_file__Var_320;
    MR_Box parse_tree__write_deps_file__conv3_STATE_VARIABLE_IO_123_123;

    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Automatically generated dependency variables for module \140");
    }
    {
      parse_tree__write_deps_file__ModuleNameString_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_10);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleNameString_14);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# generated from source file \140");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__SourceFileName_9);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\'\n");
    }
    {
      mercury__library__version_2_p_0(&parse_tree__write_deps_file__Version_15, &parse_tree__write_deps_file__Fullarch_16);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Generated by the Mercury compiler, version ");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Version_15);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ",\n# configured for ");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Fullarch_16);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".\n\n");
    }
    parse_tree__write_deps_file__TypeCtorInfo_473_473 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    {
      mercury__map__keys_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_473_473, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__Modules0_17);
    }
    {
      parse_tree__write_deps_file__select_ok_modules_3_p_0(parse_tree__write_deps_file__Modules0_17, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__Modules1_18);
    }
    {
      mercury__list__sort_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_473_473, (MR_Word) &parse_tree__write_deps_file_scalar_common_2[6], parse_tree__write_deps_file__Modules1_18, &parse_tree__write_deps_file__Modules_19);
    }
    {
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      parse_tree__write_deps_file__Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_67, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[2]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_67, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_2));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_67, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_11));
    }
    parse_tree__write_deps_file__TypeCtorInfo_480_480 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__map_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_473_473, parse_tree__write_deps_file__TypeCtorInfo_480_480, parse_tree__write_deps_file__Var_67, parse_tree__write_deps_file__Modules_19, &parse_tree__write_deps_file__SourceFiles0_21);
    }
    {
      mercury__list__sort_and_remove_dups_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_480_480, parse_tree__write_deps_file__SourceFiles0_21, &parse_tree__write_deps_file__SourceFiles_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ms =");
    }
    {
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".m", parse_tree__write_deps_file__SourceFiles_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".errs =");
    }
    {
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".err", parse_tree__write_deps_file__SourceFiles_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mods =");
    }
    {
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_89, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_89, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_3));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_89, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_11));
    }
    {
      parse_tree__write_deps_file__ModulesWithSubModules_23 = mercury__list__filter_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_473_473, parse_tree__write_deps_file__Var_89, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".parent_mods =");
    }
    {
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", parse_tree__write_deps_file__ModulesWithSubModules_23);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_8, &parse_tree__write_deps_file__Target_27);
    }
    parse_tree__write_deps_file__ForeignModulesAndExts_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      parse_tree__write_deps_file__ForeignModules_29 = mercury__assoc_list__keys_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_473_473, parse_tree__write_deps_file__TypeCtorInfo_480_480, parse_tree__write_deps_file__ForeignModulesAndExts_28);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign =");
    }
    {
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", parse_tree__write_deps_file__ForeignModules_29);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n\n");
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 129, &parse_tree__write_deps_file__Gmake_30);
    }
    switch (parse_tree__write_deps_file__Gmake_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__write_deps_file__Basis_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          parse_tree__write_deps_file__ForeignBasis_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          parse_tree__write_deps_file__ParentBasis_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String parse_tree__write_deps_file__ModsVarName_31;
          MR_String parse_tree__write_deps_file__ForeignVarName_33;
          MR_String parse_tree__write_deps_file__ParentModsVarName_35;
          MR_Word parse_tree__write_deps_file__Var_109;
          MR_Word parse_tree__write_deps_file__Var_112;
          MR_Word parse_tree__write_deps_file__Var_115;

          {
            mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_20, (MR_String) ".mods", &parse_tree__write_deps_file__ModsVarName_31);
          }
          {
            parse_tree__write_deps_file__Var_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_109, 0) = ((MR_Box) (parse_tree__write_deps_file__ModsVarName_31));
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_109, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            parse_tree__write_deps_file__Basis_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Basis_32, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_109));
          }
          {
            mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_20, (MR_String) ".foreign", &parse_tree__write_deps_file__ForeignVarName_33);
          }
          {
            parse_tree__write_deps_file__Var_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_112, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignVarName_33));
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_112, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            parse_tree__write_deps_file__ForeignBasis_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignBasis_34, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_112));
          }
          {
            mercury__string__append_3_p_2(parse_tree__write_deps_file__MakeVarName_20, (MR_String) ".parent_mods", &parse_tree__write_deps_file__ParentModsVarName_35);
          }
          {
            parse_tree__write_deps_file__Var_115 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_115, 0) = ((MR_Box) (parse_tree__write_deps_file__ParentModsVarName_35));
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_115, 1) = ((MR_Box) ((MR_String) ""));
          }
          {
            parse_tree__write_deps_file__ParentBasis_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ParentBasis_36, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_115));
          }
        }
        break;
    }
    {
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(parse_tree__write_deps_file__Modules_19, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__ExtraLinkObjs_37);
    }
    {
      parse_tree__write_deps_file__MakeFileName_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_38, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_38, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_4));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_38, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_8));
    }
    {
      mercury__list__map_foldl_5_p_2((MR_Word) &parse_tree__write_deps_file_scalar_common_2[1], parse_tree__write_deps_file__TypeCtorInfo_480_480, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__MakeFileName_38, parse_tree__write_deps_file__ForeignModulesAndExts_28, &parse_tree__write_deps_file__ForeignFileNames_44, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv3_STATE_VARIABLE_IO_123_123);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign_cs = ");
    }
    {
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "", parse_tree__write_deps_file__ForeignFileNames_44);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign_dlls = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dlls_subdir)", (MR_String) ".dll", parse_tree__write_deps_file__ForeignBasis_34, parse_tree__write_deps_file__ForeignModules_29);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".init_cs = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(cs_subdir)", (MR_String) ".c", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".cs = \044(");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".init_cs) ");
    }
    {
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) ".c", parse_tree__write_deps_file__ExtraLinkObjs_37);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dlls = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dlls_subdir)", (MR_String) ".dll", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_os = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(os_subdir)", (MR_String) ".\044O", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) ".\044O", parse_tree__write_deps_file__ExtraLinkObjs_37);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_pic_os = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(os_subdir)", (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)", parse_tree__write_deps_file__ExtraLinkObjs_37);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".os = \044(");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_os)\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".pic_os = \044(");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_pic_os)\n");
    }
    {
      parse_tree__write_deps_file__Var_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_201, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_201, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[99])));
    }
    {
      parse_tree__write_deps_file__Var_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_199, 0) = ((MR_Box) ((MR_String) ".cs_or_ss =\044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_199, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_201));
    }
    {
      parse_tree__write_deps_file__Var_197 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_197, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_197, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_199));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Var_197);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".useds = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(useds_subdir)", (MR_String) ".used", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".javas = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(javas_subdir)", (MR_String) ".java", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".classes = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(classes_subdir)", (MR_String) ".class", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) " ");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(wildcard ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(classes_subdir)", (MR_String) "\\\044\044*.class", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ")\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dirs = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dirs_subdir)", (MR_String) ".dir", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dir_os = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dirs_subdir)", (MR_String) ".dir/*.\044O", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dates = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dates_subdir)", (MR_String) ".date", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".date0s = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(date0s_subdir)", (MR_String) ".date0", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".date3s = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(date3s_subdir)", (MR_String) ".date3", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".optdates = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(optdates_subdir)", (MR_String) ".optdate", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".trans_opt_dates = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(trans_opt_dates_subdir)", (MR_String) ".trans_opt_date", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".c_dates = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(c_dates_subdir)", (MR_String) ".c_date", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".java_dates = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(java_dates_subdir)", (MR_String) ".java_date", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ds = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(ds_subdir)", (MR_String) ".d", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".module_deps = ");
    }
    {
      parse_tree__write_deps_file__Var_320 = make__make_module_dep_file_extension_0_f_0();
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(module_deps_subdir)", parse_tree__write_deps_file__Var_320, parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mihs = ");
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 262, &parse_tree__write_deps_file__HighLevelCode_45);
    }
    switch (parse_tree__write_deps_file__HighLevelCode_45) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        switch (parse_tree__write_deps_file__Target_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(mihs_subdir)", (MR_String) ".mih", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
              }
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
          case (MR_Integer) 3:
            {
            }
            break;
          case (MR_Integer) 2:
            {
            }
            break;
        }
        break;
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mhs = ");
    }
    switch (parse_tree__write_deps_file__Target_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", (MR_String) ".mh", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
          }
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
      case (MR_Integer) 3:
        {
        }
        break;
      case (MR_Integer) 2:
        {
        }
        break;
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_mihs = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(mihs_subdir)", (MR_String) ".mih", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_mhs = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", (MR_String) ".mh", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ints = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(ints_subdir)", (MR_String) ".int", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Basis_32);
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(int2s_subdir)", (MR_String) ".int2", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".int0s = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(int0s_subdir)", (MR_String) ".int0", parse_tree__write_deps_file__ParentBasis_36, parse_tree__write_deps_file__ModulesWithSubModules_23);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_int0s = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(int0s_subdir)", (MR_String) ".int0", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".int3s = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(int3s_subdir)", (MR_String) ".int3", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".opts = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(opts_subdir)", (MR_String) ".opt", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".trans_opts = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(trans_opts_subdir)", (MR_String) ".trans_opt", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".analysiss = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(analysiss_subdir)", (MR_String) ".analysis", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".requests = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(requests_subdir)", (MR_String) ".request", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".imdgs = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(imdgs_subdir)", (MR_String) ".imdg", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MakeVarName_20);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".profs = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", (MR_String) ".prof", parse_tree__write_deps_file__Basis_32, parse_tree__write_deps_file__Modules_19);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n\n");
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_Word parse_tree__write_deps_file__conv0_LambdaHeadVar__3_17;

    {
      parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1019__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_2), &parse_tree__write_deps_file__conv0_LambdaHeadVar__3_17);
    }
    *parse_tree__write_deps_file__wrapper_arg_3 = ((MR_Box) (parse_tree__write_deps_file__conv0_LambdaHeadVar__3_17));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(
  MR_Word parse_tree__write_deps_file__DepsGraph0_4,
  MR_Word parse_tree__write_deps_file__ModuleName_5,
  MR_Word * parse_tree__write_deps_file__Dependencies_6)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_22_22 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word parse_tree__write_deps_file__ModuleKey_7;
    MR_Word parse_tree__write_deps_file__DepsGraph_8;
    MR_Word parse_tree__write_deps_file__DepsKeysSet_9;
    MR_Word parse_tree__write_deps_file__AddKeyDep_10;
    MR_Word parse_tree__write_deps_file__Var_18;
    MR_Box parse_tree__write_deps_file__conv1_Dependencies_6;

    {
      mercury__digraph__add_vertex_4_p_0(parse_tree__write_deps_file__TypeCtorInfo_22_22, ((MR_Box) (parse_tree__write_deps_file__ModuleName_5)), &parse_tree__write_deps_file__ModuleKey_7, parse_tree__write_deps_file__DepsGraph0_4, &parse_tree__write_deps_file__DepsGraph_8);
    }
    {
      mercury__digraph__lookup_key_set_from_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_22_22, parse_tree__write_deps_file__DepsGraph_8, parse_tree__write_deps_file__ModuleKey_7, &parse_tree__write_deps_file__DepsKeysSet_9);
    }
    {
      parse_tree__write_deps_file__AddKeyDep_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__AddKeyDep_10, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__AddKeyDep_10, 1) = ((MR_Box) (parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__AddKeyDep_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__AddKeyDep_10, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsGraph_8));
    }
    {
      parse_tree__write_deps_file__Var_18 = mercury__set__init_0_f_0(parse_tree__write_deps_file__TypeCtorInfo_22_22);
    }
    {
      mercury__sparse_bitset__foldl_4_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[0], parse_tree__write_deps_file__AddKeyDep_10, parse_tree__write_deps_file__DepsKeysSet_9, ((MR_Box) (parse_tree__write_deps_file__Var_18)), &parse_tree__write_deps_file__conv1_Dependencies_6);
    }
    *parse_tree__write_deps_file__Dependencies_6 = ((MR_Word) parse_tree__write_deps_file__conv1_Dependencies_6);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(
  MR_Word parse_tree__write_deps_file__Globals_7,
  MR_Word parse_tree__write_deps_file__DepStream_8,
  MR_Word parse_tree__write_deps_file__ModuleName_9,
  MR_String parse_tree__write_deps_file__Ext_10)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_String parse_tree__write_deps_file__ModuleStr_12;
    MR_String parse_tree__write_deps_file__Target_13;
    MR_String parse_tree__write_deps_file__ShorthandTarget_14;

    {
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__write_deps_file__ModuleName_9, &parse_tree__write_deps_file__ModuleStr_12);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__Ext_10, (MR_Integer) 1, &parse_tree__write_deps_file__Target_13);
    }
    {
      parse_tree__write_deps_file__ShorthandTarget_14 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleStr_12, parse_tree__write_deps_file__Ext_10);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) ".PHONY: ");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__ShorthandTarget_14);
    }
    {
      mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_8);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__ShorthandTarget_14);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) ": ");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Target_13);
    }
    {
      mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_8);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(
  MR_Word parse_tree__write_deps_file__DepStream_1,
  MR_String parse_tree__write_deps_file__Suffix_2,
  MR_Word parse_tree__write_deps_file__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__write_deps_file__succeeded;

        if ((parse_tree__write_deps_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_String parse_tree__write_deps_file__FileName_13 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word parse_tree__write_deps_file__FileNames_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 1)));

            {
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_1, (MR_String) " \\\n\t");
            }
            {
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_1, parse_tree__write_deps_file__FileName_13);
            }
            {
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_1, parse_tree__write_deps_file__Suffix_2);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__write_deps_file__next_value_of_HeadVar__3_3 = parse_tree__write_deps_file__FileNames_14;

              parse_tree__write_deps_file__HeadVar__3_3 = parse_tree__write_deps_file__next_value_of_HeadVar__3_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__write_deps_file__write_extra_link_dependencies_list_6_p_0(
  MR_Word parse_tree__write_deps_file__Globals_1,
  MR_Word parse_tree__write_deps_file__DepStream_2,
  MR_String parse_tree__write_deps_file__Suffix_3,
  MR_Word parse_tree__write_deps_file__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__write_deps_file__succeeded;

        if ((parse_tree__write_deps_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_String parse_tree__write_deps_file__ExtraLink_16;
            MR_Word parse_tree__write_deps_file__Module_17;
            MR_Word parse_tree__write_deps_file__ExtraLinks_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 1)));
            MR_String parse_tree__write_deps_file__FileName_20;
            MR_Word parse_tree__write_deps_file__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 0)));

            parse_tree__write_deps_file__ExtraLink_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_23, (MR_Integer) 0)));
            parse_tree__write_deps_file__Module_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_23, (MR_Integer) 1)));
            {
              parse_tree__file_names__extra_link_obj_file_name_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_17, parse_tree__write_deps_file__ExtraLink_16, parse_tree__write_deps_file__Suffix_3, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_20);
            }
            {
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, (MR_String) " \\\n\t");
            }
            {
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, parse_tree__write_deps_file__FileName_20);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__write_deps_file__next_value_of_HeadVar__4_4 = parse_tree__write_deps_file__ExtraLinks_18;

              parse_tree__write_deps_file__HeadVar__4_4 = parse_tree__write_deps_file__next_value_of_HeadVar__4_4;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(
  MR_Word parse_tree__write_deps_file__Globals_1,
  MR_Word parse_tree__write_deps_file__DepStream_2,
  MR_String parse_tree__write_deps_file__Suffix_3,
  MR_Word parse_tree__write_deps_file__Module_4,
  MR_Word parse_tree__write_deps_file__HeadVar__5_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__write_deps_file__succeeded;

        if ((parse_tree__write_deps_file__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_String parse_tree__write_deps_file__FactTable_19 = ((MR_String) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 0)));
            MR_Word parse_tree__write_deps_file__FactTables_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 1)));
            MR_String parse_tree__write_deps_file__FileName_22;

            {
              parse_tree__file_names__fact_table_file_name_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_4, parse_tree__write_deps_file__FactTable_19, parse_tree__write_deps_file__Suffix_3, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_22);
            }
            {
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, (MR_String) " \\\n\t");
            }
            {
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, parse_tree__write_deps_file__FileName_22);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__write_deps_file__next_value_of_HeadVar__5_5 = parse_tree__write_deps_file__FactTables_20;

              parse_tree__write_deps_file__HeadVar__5_5 = parse_tree__write_deps_file__next_value_of_HeadVar__5_5;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependency_5_p_0(
  MR_Word parse_tree__write_deps_file__DepStream_6,
  MR_String parse_tree__write_deps_file__SourceFileName_7,
  MR_Word parse_tree__write_deps_file__IncludeFile_8)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_String parse_tree__write_deps_file__IncludeFileName_11 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IncludeFile_8, (MR_Integer) 1)));
    MR_String parse_tree__write_deps_file__IncludePath_12;
    MR_Word parse_tree__write_deps_file___Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IncludeFile_8, (MR_Integer) 0)));

    {
      parse_tree__file_names__make_include_file_path_3_p_0(parse_tree__write_deps_file__SourceFileName_7, parse_tree__write_deps_file__IncludeFileName_11, &parse_tree__write_deps_file__IncludePath_12);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_6, (MR_String) " \\\n\t");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_6, parse_tree__write_deps_file__IncludePath_12);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

    {
      parse_tree__write_deps_file__write_foreign_include_file_dependency_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0(
  MR_Word parse_tree__write_deps_file__DepStream_6,
  MR_String parse_tree__write_deps_file__SourceFileName_7,
  MR_Word parse_tree__write_deps_file__IncludeFiles_8)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__Var_12;
    MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_11;

    {
      parse_tree__write_deps_file__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_12, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_12, 1) = ((MR_Box) (parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_12, 3) = ((MR_Box) (parse_tree__write_deps_file__DepStream_6));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_12, 4) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_7));
    }
    {
      mercury__list__foldl_4_p_2((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Var_12, parse_tree__write_deps_file__IncludeFiles_8, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_11);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_separator_4_p_0(
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
  MR_Word parse_tree__write_deps_file__HeadVar__2_2)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;

    if ((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        {
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__HeadVar__1_1, (MR_String) " ");
        }
      }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__write_compact_dependencies_list_8_p_0(
  MR_Word parse_tree__write_deps_file__Globals_9,
  MR_Word parse_tree__write_deps_file__DepStream_10,
  MR_String parse_tree__write_deps_file__Prefix_11,
  MR_String parse_tree__write_deps_file__Suffix_12,
  MR_Word parse_tree__write_deps_file__Basis_13,
  MR_Word parse_tree__write_deps_file__Modules_14)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;

    if ((parse_tree__write_deps_file__Basis_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Suffix_12, parse_tree__write_deps_file__Modules_14);
      }
    else
      {
        MR_String parse_tree__write_deps_file__VarName_16;
        MR_String parse_tree__write_deps_file__OldSuffix_17;
        MR_Word parse_tree__write_deps_file__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Basis_13, (MR_Integer) 0)));

        parse_tree__write_deps_file__VarName_16 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_21, (MR_Integer) 0)));
        parse_tree__write_deps_file__OldSuffix_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_21, (MR_Integer) 1)));
        {
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) "\044(");
        }
        {
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__VarName_16);
        }
        {
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) ":%");
        }
        {
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__OldSuffix_17);
        }
        {
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) "=");
        }
        {
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Prefix_11);
        }
        {
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) "%");
        }
        {
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Suffix_12);
        }
        {
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) ")");
        }
      }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_list_6_p_0(
  MR_Word parse_tree__write_deps_file__Globals_1,
  MR_Word parse_tree__write_deps_file__DepStream_2,
  MR_String parse_tree__write_deps_file__Suffix_3,
  MR_Word parse_tree__write_deps_file__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool parse_tree__write_deps_file__succeeded;

        if ((parse_tree__write_deps_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word parse_tree__write_deps_file__Module_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word parse_tree__write_deps_file__Modules_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 1)));
            MR_String parse_tree__write_deps_file__FileName_19;

            {
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_16, parse_tree__write_deps_file__Suffix_3, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_19);
            }
            {
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, (MR_String) " \\\n\t");
            }
            {
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, parse_tree__write_deps_file__FileName_19);
            }
            /* direct tailcall eliminated */
            {
              MR_Word parse_tree__write_deps_file__next_value_of_HeadVar__4_4 = parse_tree__write_deps_file__Modules_17;

              parse_tree__write_deps_file__HeadVar__4_4 = parse_tree__write_deps_file__next_value_of_HeadVar__4_4;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
parse_tree__write_deps_file__write_dependencies_set_6_p_0(
  MR_Word parse_tree__write_deps_file__Globals_7,
  MR_Word parse_tree__write_deps_file__DepStream_8,
  MR_String parse_tree__write_deps_file__Suffix_9,
  MR_Word parse_tree__write_deps_file__Modules_10)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__Var_14;

    {
      parse_tree__write_deps_file__Var_14 = mercury__set__to_sorted_list_1_f_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_deps_file__Modules_10);
    }
    {
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Suffix_9, parse_tree__write_deps_file__Var_14);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_9_p_0_6(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

    {
      parse_tree__write_deps_file__write_subdirs_shorthand_rule_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_9_p_0_5(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

    {
      parse_tree__write_deps_file__IntroducedFrom__pred__do_write_dependency_file__611__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_9_p_0_4(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_Word parse_tree__write_deps_file__conv3_LambdaHeadVar__2_536;

    {
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__do_write_dependency_file__578__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv3_LambdaHeadVar__2_536);
    }
    if (parse_tree__write_deps_file__succeeded)
      {
        *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv3_LambdaHeadVar__2_536));
        parse_tree__write_deps_file__succeeded = MR_TRUE;
      }
    return parse_tree__write_deps_file__succeeded;
  }
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_9_p_0_3(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
{
  {
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_Word parse_tree__write_deps_file__conv2_HeadVar__2_2;

    {
      parse_tree__write_deps_file__conv2_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv2_HeadVar__2_2));
    return parse_tree__write_deps_file__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_9_p_0_2(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
{
  {
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_Word parse_tree__write_deps_file__conv1_HeadVar__2_2;

    {
      parse_tree__write_deps_file__conv1_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_HeadVar__2_2));
    return parse_tree__write_deps_file__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_9_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

    {
      parse_tree__write_deps_file__IntroducedFrom__pred__do_write_dependency_file__294__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_9_p_0(
  MR_Word parse_tree__write_deps_file__DepStream_10,
  MR_String parse_tree__write_deps_file__DependencyFileName_11,
  MR_String parse_tree__write_deps_file__TmpDependencyFileName_12,
  MR_Word parse_tree__write_deps_file__Globals_13,
  MR_Word parse_tree__write_deps_file__ModuleAndImports_14,
  MR_Word parse_tree__write_deps_file__AllDeps_15,
  MR_Word parse_tree__write_deps_file__MaybeTransOptDeps_16)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_781_781;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_782_782;
    MR_String parse_tree__write_deps_file__SourceFileName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 0)));
    MR_Word parse_tree__write_deps_file__SourceFileModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 1)));
    MR_Word parse_tree__write_deps_file__ModuleName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 2)));
    MR_Word parse_tree__write_deps_file__ParentDeps_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 4)));
    MR_Word parse_tree__write_deps_file__IntDeps_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 5)));
    MR_Word parse_tree__write_deps_file__ImpDeps_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 6)));
    MR_Word parse_tree__write_deps_file__InclDeps_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 9)));
    MR_Word parse_tree__write_deps_file__NestedDeps_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 10)));
    MR_Word parse_tree__write_deps_file__FactDeps0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 11)));
    MR_Word parse_tree__write_deps_file__ForeignImportModules0_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 12)));
    MR_Word parse_tree__write_deps_file__ForeignIncludeFilesCord_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 13)));
    MR_Word parse_tree__write_deps_file__ContainsForeignCode_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 14)));
    MR_Word parse_tree__write_deps_file__SrcItemBlocks_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 16)));
    MR_Word parse_tree__write_deps_file__DirectIntItemBlocksCord_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 17)));
    MR_Word parse_tree__write_deps_file__IndirectIntItemBlocksCord_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 18)));
    MR_Word parse_tree__write_deps_file__OptItemBlocksCord_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 19)));
    MR_Word parse_tree__write_deps_file__IntForOptItemBlocksCord_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 20)));
    MR_Word parse_tree__write_deps_file__Verbose_45;
    MR_String parse_tree__write_deps_file__MakeVarName_46;
    MR_Word parse_tree__write_deps_file__LongDeps0_47;
    MR_Word parse_tree__write_deps_file__ShortDeps0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 7)));
    MR_Word parse_tree__write_deps_file__LongDeps_49;
    MR_Word parse_tree__write_deps_file__ShortDeps1_50;
    MR_Word parse_tree__write_deps_file__ShortDeps_51;
    MR_Word parse_tree__write_deps_file__FactDeps_52;
    MR_String parse_tree__write_deps_file__TransOptDateFileName_53;
    MR_String parse_tree__write_deps_file__ErrFileName_60;
    MR_String parse_tree__write_deps_file__OptDateFileName_61;
    MR_String parse_tree__write_deps_file__CDateFileName_62;
    MR_String parse_tree__write_deps_file__ObjFileName_63;
    MR_String parse_tree__write_deps_file__JavaDateFileName_64;
    MR_String parse_tree__write_deps_file__PicObjFileName_65;
    MR_String parse_tree__write_deps_file__Int0FileName_66;
    MR_Word parse_tree__write_deps_file__ForeignIncludeFiles_72;
    MR_Word parse_tree__write_deps_file__UseOptFiles_75;
    MR_Word parse_tree__write_deps_file__Intermod_76;
    MR_Word parse_tree__write_deps_file__IntermodDirs_77;
    MR_Word parse_tree__write_deps_file__HighLevelCode_84;
    MR_Word parse_tree__write_deps_file__CompilationTarget_85;
    MR_String parse_tree__write_deps_file__CFileName_86;
    MR_String parse_tree__write_deps_file__HeaderFileName_87;
    MR_String parse_tree__write_deps_file__HeaderFileName2_88;
    MR_String parse_tree__write_deps_file__JavaFileName_89;
    MR_String parse_tree__write_deps_file__ModuleDepFileName_90;
    MR_String parse_tree__write_deps_file__DateFileName_91;
    MR_String parse_tree__write_deps_file__Date0FileName_92;
    MR_Word parse_tree__write_deps_file__HaveMap_93;
    MR_String parse_tree__write_deps_file__ModuleArg_94;
    MR_Word parse_tree__write_deps_file__Target_95;
    MR_String parse_tree__write_deps_file__ClassFileName_96;
    MR_String parse_tree__write_deps_file__BeamFileName_97;
    MR_Word parse_tree__write_deps_file__ForeignImportModules_99;
    MR_Word parse_tree__write_deps_file__ForeignImports_141;
    MR_Word parse_tree__write_deps_file__ForeignImportedModuleNames_144;
    MR_String parse_tree__write_deps_file__IntFileName_149;
    MR_String parse_tree__write_deps_file__Int2FileName_150;
    MR_String parse_tree__write_deps_file__Int3FileName_151;
    MR_String parse_tree__write_deps_file__OptFileName_152;
    MR_String parse_tree__write_deps_file__TransOptFileName_153;
    MR_String parse_tree__write_deps_file__Date3FileName_154;
    MR_Word parse_tree__write_deps_file__UseSubdirs_155;
    MR_Word parse_tree__write_deps_file__Result3_156;
    MR_Word parse_tree__write_deps_file__Var_245;
    MR_Word parse_tree__write_deps_file__Var_248;
    MR_Word parse_tree__write_deps_file__Var_249;
    MR_Word parse_tree__write_deps_file__Var_251;
    MR_Word parse_tree__write_deps_file__Var_252;
    MR_Word parse_tree__write_deps_file__Var_254;
    MR_Word parse_tree__write_deps_file__Var_255;
    MR_Word parse_tree__write_deps_file__Var_257;
    MR_Word parse_tree__write_deps_file__Var_258;
    MR_Word parse_tree__write_deps_file__Var_260;
    MR_Word parse_tree__write_deps_file__Var_262;
    MR_Word parse_tree__write_deps_file__Var_265;
    MR_Word parse_tree__write_deps_file__Var_418;
    MR_Word parse_tree__write_deps_file__Var_421;
    MR_Word parse_tree__write_deps_file__Var_422;
    MR_Word parse_tree__write_deps_file__Var_424;
    MR_Word parse_tree__write_deps_file__Var_425;
    MR_Word parse_tree__write_deps_file__Var_427;
    MR_String parse_tree__write_deps_file__Var_434;
    MR_Word parse_tree__write_deps_file__Var_437;
    MR_Word parse_tree__write_deps_file__Var_440;
    MR_Word parse_tree__write_deps_file__Var_442;
    MR_Word parse_tree__write_deps_file__Var_443;
    MR_Word parse_tree__write_deps_file__Var_445;
    MR_Word parse_tree__write_deps_file__Var_446;
    MR_Word parse_tree__write_deps_file__Var_448;
    MR_Word parse_tree__write_deps_file__Var_450;
    MR_Word parse_tree__write_deps_file__Var_451;
    MR_Word parse_tree__write_deps_file__Var_453;
    MR_Word parse_tree__write_deps_file__Var_465;
    MR_Word parse_tree__write_deps_file__Var_468;
    MR_Word parse_tree__write_deps_file__Var_469;
    MR_Word parse_tree__write_deps_file__Var_471;
    MR_Word parse_tree__write_deps_file__Var_486;
    MR_Word parse_tree__write_deps_file__Var_534;
    MR_Word parse_tree__write_deps_file__Var_575;
    MR_Word parse_tree__write_deps_file__Var_578;
    MR_Word parse_tree__write_deps_file__Var_579;
    MR_Word parse_tree__write_deps_file__Var_581;
    MR_Word parse_tree__write_deps_file__Var_582;
    MR_Word parse_tree__write_deps_file__Var_584;
    MR_Word parse_tree__write_deps_file__Var_586;
    MR_Word parse_tree__write_deps_file__Var_587;
    MR_Word parse_tree__write_deps_file__Var_589;
    MR_Word parse_tree__write_deps_file__Var_590;
    MR_Word parse_tree__write_deps_file__Var_592;
    MR_Word parse_tree__write_deps_file__Var_594;
    MR_Word parse_tree__write_deps_file__Var_595;
    MR_Word parse_tree__write_deps_file__Var_597;
    MR_Word parse_tree__write_deps_file__Var_598;
    MR_Word parse_tree__write_deps_file__Var_600;
    MR_Word parse_tree__write_deps_file__Var_602;
    MR_Word parse_tree__write_deps_file__Var_603;
    MR_Word parse_tree__write_deps_file__Var_605;
    MR_Word parse_tree__write_deps_file__Var_606;
    MR_Word parse_tree__write_deps_file__Var_608;
    MR_Word parse_tree__write_deps_file__Var_610;
    MR_Word parse_tree__write_deps_file__Var_611;
    MR_Word parse_tree__write_deps_file__Var_613;
    MR_Word parse_tree__write_deps_file__Var_614;
    MR_Word parse_tree__write_deps_file__Var_616;
    MR_Word parse_tree__write_deps_file__Var_618;
    MR_Word parse_tree__write_deps_file__Var_619;
    MR_Word parse_tree__write_deps_file__Var_621;
    MR_Word parse_tree__write_deps_file___ModuleNameContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 3)));
    MR_Word parse_tree__write_deps_file___Children_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 8)));
    MR_Word parse_tree__write_deps_file___ContainsForeignExport_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 15)));
    MR_Word parse_tree__write_deps_file___ModuleVersionNumbersCord_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 21)));
    MR_Word parse_tree__write_deps_file___Specs_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 22)));
    MR_Word parse_tree__write_deps_file___Error_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 23)));
    MR_Word parse_tree__write_deps_file___Timestamps_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 24)));
    MR_Word parse_tree__write_deps_file___HasMain_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 25)));
    MR_String parse_tree__write_deps_file___Dir_44 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_14, (MR_Integer) 26)));
    MR_String parse_tree__write_deps_file__SourceFileBase_59;
    MR_String parse_tree__write_deps_file__Var_805;

    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_13, (MR_Integer) 56, &parse_tree__write_deps_file__Verbose_45);
    }
    {
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_20, &parse_tree__write_deps_file__MakeVarName_46);
    }
    parse_tree__write_deps_file__TypeCtorInfo_781_781 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    {
      mercury__set__union_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, parse_tree__write_deps_file__IntDeps_23, parse_tree__write_deps_file__ImpDeps_24, &parse_tree__write_deps_file__LongDeps0_47);
    }
    {
      mercury__set__delete_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, ((MR_Box) (parse_tree__write_deps_file__ModuleName_20)), parse_tree__write_deps_file__LongDeps0_47, &parse_tree__write_deps_file__LongDeps_49);
    }
    {
      mercury__set__difference_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, parse_tree__write_deps_file__ShortDeps0_48, parse_tree__write_deps_file__LongDeps_49, &parse_tree__write_deps_file__ShortDeps1_50);
    }
    {
      mercury__set__delete_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, ((MR_Box) (parse_tree__write_deps_file__ModuleName_20)), parse_tree__write_deps_file__ShortDeps1_50, &parse_tree__write_deps_file__ShortDeps_51);
    }
    parse_tree__write_deps_file__TypeCtorInfo_782_782 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__sort_and_remove_dups_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_782_782, parse_tree__write_deps_file__FactDeps0_29, &parse_tree__write_deps_file__FactDeps_52);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, (MR_String) ".trans_opt_date", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptDateFileName_53);
    }
    if ((parse_tree__write_deps_file__MaybeTransOptDeps_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word parse_tree__write_deps_file__TransOptDeps0_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeTransOptDeps_16, (MR_Integer) 0)));
        MR_Word parse_tree__write_deps_file__TransOptDateDeps_55;
        MR_Word parse_tree__write_deps_file__Var_170;
        MR_Word parse_tree__write_deps_file__Var_171;

        {
          parse_tree__write_deps_file__Var_170 = mercury__set__list_to_set_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, parse_tree__write_deps_file__TransOptDeps0_54);
        }
        {
          mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, parse_tree__write_deps_file__Var_170, parse_tree__write_deps_file__LongDeps_49, &parse_tree__write_deps_file__TransOptDateDeps_55);
        }
        {
          parse_tree__write_deps_file__Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_171, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_53));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_171, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[92])));
        }
        {
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Var_171);
        }
        {
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__DepStream_10, (MR_String) ".trans_opt", parse_tree__write_deps_file__TransOptDateDeps_55);
        }
      }
    if ((parse_tree__write_deps_file__FactDeps_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word parse_tree__write_deps_file__AssumeGmake_58;
        MR_Word parse_tree__write_deps_file__Var_178;
        MR_Word parse_tree__write_deps_file__Var_181;

        {
          parse_tree__write_deps_file__Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_181, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_46));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[93])));
        }
        {
          parse_tree__write_deps_file__Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_178, 0) = ((MR_Box) ((MR_String) "\n\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_178, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_181));
        }
        {
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Var_178);
        }
        {
          parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) "", parse_tree__write_deps_file__FactDeps_52);
        }
        {
          mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_10);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_13, (MR_Integer) 129, &parse_tree__write_deps_file__AssumeGmake_58);
        }
        switch (parse_tree__write_deps_file__AssumeGmake_58) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__write_deps_file__Var_189;
              MR_Word parse_tree__write_deps_file__Var_196;
              MR_Word parse_tree__write_deps_file__Var_199;

              {
                parse_tree__write_deps_file__Var_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_189, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_46));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_189, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[94])));
              }
              {
                mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Var_189);
              }
              {
                parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__DepStream_10, (MR_String) ".c", parse_tree__write_deps_file__ModuleName_20, parse_tree__write_deps_file__FactDeps_52);
              }
              {
                parse_tree__write_deps_file__Var_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_199, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_46));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_199, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[95])));
              }
              {
                parse_tree__write_deps_file__Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_196, 0) = ((MR_Box) ((MR_String) "\n\n"));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_196, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_199));
              }
              {
                mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Var_196);
              }
              {
                parse_tree__write_deps_file__write_fact_table_dependencies_list_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__DepStream_10, (MR_String) ".\044O", parse_tree__write_deps_file__ModuleName_20, parse_tree__write_deps_file__FactDeps_52);
              }
              {
                mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_10);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__write_deps_file__Var_206;
              MR_Word parse_tree__write_deps_file__Var_209;
              MR_Word parse_tree__write_deps_file__Var_210;
              MR_Word parse_tree__write_deps_file__Var_212;
              MR_Word parse_tree__write_deps_file__Var_213;
              MR_Word parse_tree__write_deps_file__Var_215;
              MR_Word parse_tree__write_deps_file__Var_216;
              MR_Word parse_tree__write_deps_file__Var_218;

              {
                parse_tree__write_deps_file__Var_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_218, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_46));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_218, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[96])));
              }
              {
                parse_tree__write_deps_file__Var_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_216, 0) = ((MR_Box) ((MR_String) ".fact_tables.cs = \044("));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_216, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_218));
              }
              {
                parse_tree__write_deps_file__Var_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_215, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_46));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_215, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_216));
              }
              {
                parse_tree__write_deps_file__Var_213 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_213, 0) = ((MR_Box) ((MR_String) ".fact_tables:%=\044(os_subdir)%.\044O)\n\n"));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_213, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_215));
              }
              {
                parse_tree__write_deps_file__Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_212, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_46));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_212, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_213));
              }
              {
                parse_tree__write_deps_file__Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_210, 0) = ((MR_Box) ((MR_String) ".fact_tables.os = \044("));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_210, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_212));
              }
              {
                parse_tree__write_deps_file__Var_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_209, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_46));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_209, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_210));
              }
              {
                parse_tree__write_deps_file__Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_206, 0) = ((MR_Box) ((MR_String) "\n\n"));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_206, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_209));
              }
              {
                mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Var_206);
              }
            }
            break;
        }
      }
    {
      parse_tree__write_deps_file__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__write_deps_file__SourceFileName_18, (MR_String) ".m", &parse_tree__write_deps_file__SourceFileBase_59);
    }
    if (parse_tree__write_deps_file__succeeded)
      {
        {
          parse_tree__write_deps_file__ErrFileName_60 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__SourceFileBase_59, (MR_String) ".err");
        }
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "parse_tree.write_deps_file", (MR_String) "predicate \140parse_tree.write_deps_file.do_write_dependency_file\'/9", (MR_String) "source file doesn\'t end in \140.m\'");
          return;
        }
      }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, (MR_String) ".optdate", (MR_Integer) 1, &parse_tree__write_deps_file__OptDateFileName_61);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, (MR_String) ".c_date", (MR_Integer) 1, &parse_tree__write_deps_file__CDateFileName_62);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, (MR_String) ".\044O", (MR_Integer) 1, &parse_tree__write_deps_file__ObjFileName_63);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, (MR_String) ".java_date", (MR_Integer) 1, &parse_tree__write_deps_file__JavaDateFileName_64);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, (MR_String) ".pic_o", (MR_Integer) 1, &parse_tree__write_deps_file__PicObjFileName_65);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, (MR_String) ".int0", (MR_Integer) 1, &parse_tree__write_deps_file__Int0FileName_66);
    }
    {
      parse_tree__write_deps_file__Var_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_260, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_64));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_260, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_258 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_258, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_258, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_260));
    }
    {
      parse_tree__write_deps_file__Var_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_257, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_62));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_257, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_258));
    }
    {
      parse_tree__write_deps_file__Var_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_255, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_255, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_257));
    }
    {
      parse_tree__write_deps_file__Var_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_254, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrFileName_60));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_254, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_255));
    }
    {
      parse_tree__write_deps_file__Var_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_252, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_252, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_254));
    }
    {
      parse_tree__write_deps_file__Var_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_251, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_53));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_251, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_252));
    }
    {
      parse_tree__write_deps_file__Var_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_249, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_249, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_251));
    }
    {
      parse_tree__write_deps_file__Var_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_248, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_61));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_248, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_249));
    }
    {
      parse_tree__write_deps_file__Var_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_245, 0) = ((MR_Box) ((MR_String) "\n\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_245, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_248));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Var_245);
    }
    {
      parse_tree__write_deps_file__Var_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_265, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_18));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_265, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_262, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_262, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_265));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Var_262);
    }
    {
      parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, parse_tree__write_deps_file__InclDeps_27);
    }
    if (parse_tree__write_deps_file__succeeded)
      {
      }
    else
      {
        MR_Word parse_tree__write_deps_file__Var_267;
        MR_Word parse_tree__write_deps_file__Var_270;

        {
          parse_tree__write_deps_file__Var_270 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_270, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0FileName_66));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_270, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__Var_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_267, 0) = ((MR_Box) ((MR_String) " "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_267, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_270));
        }
        {
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Var_267);
        }
      }
    {
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__DepStream_10, (MR_String) ".int0", parse_tree__write_deps_file__ParentDeps_22);
    }
    {
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__DepStream_10, (MR_String) ".int", parse_tree__write_deps_file__LongDeps_49);
    }
    {
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__DepStream_10, (MR_String) ".int2", parse_tree__write_deps_file__ShortDeps_51);
    }
    {
      parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, parse_tree__write_deps_file__NestedDeps_28);
    }
    if (parse_tree__write_deps_file__succeeded)
      {
      }
    else
      {
        MR_Word parse_tree__write_deps_file__Write_68;
        MR_Box parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_303_303;

        {
          parse_tree__write_deps_file__Write_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_68, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_68, 1) = ((MR_Box) (parse_tree__write_deps_file__do_write_dependency_file_9_p_0_1));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_68, 3) = ((MR_Box) (parse_tree__write_deps_file__DepStream_10));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_68, 4) = ((MR_Box) (parse_tree__write_deps_file__Globals_13));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_68, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_20));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Write_68, 6) = ((MR_Box) (parse_tree__write_deps_file__NestedDeps_28));
        }
        {
          mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_782_782, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Write_68, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[9]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_IO_303_303);
        }
      }
    {
      parse_tree__write_deps_file__ForeignIncludeFiles_72 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0, parse_tree__write_deps_file__ForeignIncludeFilesCord_31);
    }
    {
      parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__SourceFileName_18, parse_tree__write_deps_file__ForeignIncludeFiles_72);
    }
    if ((parse_tree__write_deps_file__FactDeps_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
      }
    else
      {
        MR_Word parse_tree__write_deps_file__Var_305;
        MR_Word parse_tree__write_deps_file__Var_308;
        MR_Word parse_tree__write_deps_file__Var_309;
        MR_Word parse_tree__write_deps_file__Var_311;
        MR_Word parse_tree__write_deps_file__Var_313;
        MR_Word parse_tree__write_deps_file__Var_314;
        MR_Word parse_tree__write_deps_file__Var_316;
        MR_Word parse_tree__write_deps_file__Var_317;
        MR_Word parse_tree__write_deps_file__Var_319;
        MR_Word parse_tree__write_deps_file__Var_320;
        MR_Word parse_tree__write_deps_file__Var_322;
        MR_Word parse_tree__write_deps_file__Var_324;
        MR_Word parse_tree__write_deps_file__Var_325;
        MR_Word parse_tree__write_deps_file__Var_327;

        {
          parse_tree__write_deps_file__Var_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_327, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_63));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_327, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[90])));
        }
        {
          parse_tree__write_deps_file__Var_325 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_325, 0) = ((MR_Box) ((MR_String) ".fact_tables.cs) : "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_325, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_327));
        }
        {
          parse_tree__write_deps_file__Var_324 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_324, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_46));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_324, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_325));
        }
        {
          parse_tree__write_deps_file__Var_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_322, 0) = ((MR_Box) ((MR_String) "\044("));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_322, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_324));
        }
        {
          parse_tree__write_deps_file__Var_320 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_320, 0) = ((MR_Box) ((MR_String) "\n\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_320, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_322));
        }
        {
          parse_tree__write_deps_file__Var_319 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_319, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_18));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_319, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_320));
        }
        {
          parse_tree__write_deps_file__Var_317 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_317, 0) = ((MR_Box) ((MR_String) ".fact_tables) "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_317, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_319));
        }
        {
          parse_tree__write_deps_file__Var_316 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_316, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_46));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_316, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_317));
        }
        {
          parse_tree__write_deps_file__Var_314 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_314, 0) = ((MR_Box) ((MR_String) ".fact_tables.os) : \044("));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_314, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_316));
        }
        {
          parse_tree__write_deps_file__Var_313 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_313, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_46));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_313, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_314));
        }
        {
          parse_tree__write_deps_file__Var_311 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_311, 0) = ((MR_Box) ((MR_String) "\044("));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_311, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_313));
        }
        {
          parse_tree__write_deps_file__Var_309 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_309, 0) = ((MR_Box) ((MR_String) ".fact_tables)\n\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_309, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_311));
        }
        {
          parse_tree__write_deps_file__Var_308 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_308, 0) = ((MR_Box) (parse_tree__write_deps_file__MakeVarName_46));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_308, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_309));
        }
        {
          parse_tree__write_deps_file__Var_305 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_305, 0) = ((MR_Box) ((MR_String) " \\\n\t\044("));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_305, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_308));
        }
        {
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Var_305);
        }
      }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_13, (MR_Integer) 332, &parse_tree__write_deps_file__UseOptFiles_75);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_13, (MR_Integer) 330, &parse_tree__write_deps_file__Intermod_76);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__write_deps_file__Globals_13, (MR_Integer) 650, &parse_tree__write_deps_file__IntermodDirs_77);
    }
    switch (parse_tree__write_deps_file__Intermod_76) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__write_deps_file__Var_334;
          MR_Word parse_tree__write_deps_file__Var_337;
          MR_Word parse_tree__write_deps_file__Var_342;

          {
            parse_tree__write_deps_file__Var_337 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_337, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_63));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_337, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[97])));
          }
          {
            parse_tree__write_deps_file__Var_334 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_334, 0) = ((MR_Box) ((MR_String) "\n\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_334, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_337));
          }
          {
            mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Var_334);
          }
          {
            parse_tree__write_deps_file__Var_342 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, parse_tree__write_deps_file__AllDeps_15);
          }
          {
            parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__DepStream_10, (MR_String) ".mh", parse_tree__write_deps_file__Var_342);
          }
        }
        break;
    }
    parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Intermod_76 == (MR_Integer) 1);
    if (!(parse_tree__write_deps_file__succeeded))
      parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__UseOptFiles_75 == (MR_Integer) 1);
    if (parse_tree__write_deps_file__succeeded)
      {
        MR_Word parse_tree__write_deps_file__TransOpt_78;
        MR_Word parse_tree__write_deps_file__UseTransOpt_79;
        MR_Word parse_tree__write_deps_file__Var_344;
        MR_Word parse_tree__write_deps_file__Var_347;
        MR_Word parse_tree__write_deps_file__Var_348;
        MR_Word parse_tree__write_deps_file__Var_350;
        MR_Word parse_tree__write_deps_file__Var_351;
        MR_Word parse_tree__write_deps_file__Var_353;
        MR_Word parse_tree__write_deps_file__Var_354;
        MR_Word parse_tree__write_deps_file__Var_356;

        {
          parse_tree__write_deps_file__Var_356 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_356, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_64));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_356, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[97])));
        }
        {
          parse_tree__write_deps_file__Var_354 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_354, 0) = ((MR_Box) ((MR_String) " "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_354, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_356));
        }
        {
          parse_tree__write_deps_file__Var_353 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_353, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_62));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_353, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_354));
        }
        {
          parse_tree__write_deps_file__Var_351 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_351, 0) = ((MR_Box) ((MR_String) " "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_351, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_353));
        }
        {
          parse_tree__write_deps_file__Var_350 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_350, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrFileName_60));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_350, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_351));
        }
        {
          parse_tree__write_deps_file__Var_348 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_348, 0) = ((MR_Box) ((MR_String) " "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_348, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_350));
        }
        {
          parse_tree__write_deps_file__Var_347 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_347, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_53));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_347, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_348));
        }
        {
          parse_tree__write_deps_file__Var_344 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_344, 0) = ((MR_Box) ((MR_String) "\n\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_344, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_347));
        }
        {
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Var_344);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_13, (MR_Integer) 334, &parse_tree__write_deps_file__TransOpt_78);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_13, (MR_Integer) 333, &parse_tree__write_deps_file__UseTransOpt_79);
        }
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__TransOpt_78 == (MR_Integer) 1);
        if (!(parse_tree__write_deps_file__succeeded))
          parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__UseTransOpt_79 == (MR_Integer) 1);
        if (parse_tree__write_deps_file__succeeded)
          {
            MR_Word parse_tree__write_deps_file__BuildOptFiles_80;
            MR_Word parse_tree__write_deps_file__OptDeps_81;
            MR_Word parse_tree__write_deps_file__TransOptDeps_82;
            MR_Word parse_tree__write_deps_file__OptInt0Deps_83;
            MR_Word parse_tree__write_deps_file__Var_362;
            MR_Word parse_tree__write_deps_file__Var_364;
            MR_Word parse_tree__write_deps_file__Var_365;
            MR_Word parse_tree__write_deps_file__Var_371;

            {
              mercury__bool__not_2_p_0(parse_tree__write_deps_file__UseTransOpt_79, &parse_tree__write_deps_file__BuildOptFiles_80);
            }
            {
              parse_tree__write_deps_file__Var_364 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, parse_tree__write_deps_file__LongDeps_49);
            }
            {
              parse_tree__write_deps_file__Var_362 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_362, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_20));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_362, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_364));
            }
            {
              parse_tree__write_deps_file__get_both_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__BuildOptFiles_80, parse_tree__write_deps_file__IntermodDirs_77, parse_tree__write_deps_file__Var_362, &parse_tree__write_deps_file__OptDeps_81, &parse_tree__write_deps_file__TransOptDeps_82);
            }
            {
              parse_tree__write_deps_file__Var_365 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[4], parse_tree__write_deps_file__OptDeps_81);
            }
            {
              parse_tree__write_deps_file__OptInt0Deps_83 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, parse_tree__write_deps_file__Var_365);
            }
            {
              parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__DepStream_10, (MR_String) ".opt", parse_tree__write_deps_file__OptDeps_81);
            }
            {
              parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__DepStream_10, (MR_String) ".int0", parse_tree__write_deps_file__OptInt0Deps_83);
            }
            {
              parse_tree__write_deps_file__Var_371 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_371, 0) = ((MR_Box) ((MR_String) "\n\n"));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_371, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_350));
            }
            {
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Var_371);
            }
            {
              parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__DepStream_10, (MR_String) ".trans_opt", parse_tree__write_deps_file__TransOptDeps_82);
            }
          }
        else
          {
            MR_Word parse_tree__write_deps_file__Var_387;
            MR_Word parse_tree__write_deps_file__Var_389;
            MR_Word parse_tree__write_deps_file__Var_390;
            MR_Word parse_tree__write_deps_file__BuildOptFiles_767;
            MR_Word parse_tree__write_deps_file__OptDeps_768;
            MR_Word parse_tree__write_deps_file__OptInt0Deps_769;

            {
              mercury__bool__not_2_p_0(parse_tree__write_deps_file__UseOptFiles_75, &parse_tree__write_deps_file__BuildOptFiles_767);
            }
            {
              parse_tree__write_deps_file__Var_389 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, parse_tree__write_deps_file__LongDeps_49);
            }
            {
              parse_tree__write_deps_file__Var_387 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_387, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_20));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_387, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_389));
            }
            {
              parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__BuildOptFiles_767, parse_tree__write_deps_file__IntermodDirs_77, (MR_String) ".opt", parse_tree__write_deps_file__Var_387, &parse_tree__write_deps_file__OptDeps_768);
            }
            {
              parse_tree__write_deps_file__Var_390 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[5], parse_tree__write_deps_file__OptDeps_768);
            }
            {
              parse_tree__write_deps_file__OptInt0Deps_769 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, parse_tree__write_deps_file__Var_390);
            }
            {
              parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__DepStream_10, (MR_String) ".opt", parse_tree__write_deps_file__OptDeps_768);
            }
            {
              parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__DepStream_10, (MR_String) ".int0", parse_tree__write_deps_file__OptInt0Deps_769);
            }
          }
      }
    else
      {
      }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_13, (MR_Integer) 262, &parse_tree__write_deps_file__HighLevelCode_84);
    }
    {
      libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_13, &parse_tree__write_deps_file__CompilationTarget_85);
    }
    parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__HighLevelCode_84 == (MR_Integer) 1);
    if (parse_tree__write_deps_file__succeeded)
      parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__CompilationTarget_85 == (MR_Integer) 0);
    if (parse_tree__write_deps_file__succeeded)
      {
        MR_Word parse_tree__write_deps_file__Var_397;
        MR_Word parse_tree__write_deps_file__Var_400;
        MR_Word parse_tree__write_deps_file__Var_401;
        MR_Word parse_tree__write_deps_file__Var_403;

        {
          parse_tree__write_deps_file__Var_403 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_403, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_63));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_403, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[92])));
        }
        {
          parse_tree__write_deps_file__Var_401 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_401, 0) = ((MR_Box) ((MR_String) " "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_401, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_403));
        }
        {
          parse_tree__write_deps_file__Var_400 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_400, 0) = ((MR_Box) (parse_tree__write_deps_file__PicObjFileName_65));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_400, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_401));
        }
        {
          parse_tree__write_deps_file__Var_397 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_397, 0) = ((MR_Box) ((MR_String) "\n\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_397, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_400));
        }
        {
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Var_397);
        }
        {
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__DepStream_10, (MR_String) ".mih", parse_tree__write_deps_file__AllDeps_15);
        }
      }
    else
      {
      }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, (MR_String) ".c", (MR_Integer) 1, &parse_tree__write_deps_file__CFileName_86);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, (MR_String) ".mh", (MR_Integer) 1, &parse_tree__write_deps_file__HeaderFileName_87);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, (MR_String) ".mih", (MR_Integer) 1, &parse_tree__write_deps_file__HeaderFileName2_88);
    }
    {
      parse_tree__write_deps_file__Var_427 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_427, 0) = ((MR_Box) (parse_tree__write_deps_file__CFileName_86));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_427, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[90])));
    }
    {
      parse_tree__write_deps_file__Var_425 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_425, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_425, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_427));
    }
    {
      parse_tree__write_deps_file__Var_424 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_424, 0) = ((MR_Box) (parse_tree__write_deps_file__HeaderFileName2_88));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_424, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_425));
    }
    {
      parse_tree__write_deps_file__Var_422 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_422, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_422, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_424));
    }
    {
      parse_tree__write_deps_file__Var_421 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_421, 0) = ((MR_Box) (parse_tree__write_deps_file__HeaderFileName_87));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_421, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_422));
    }
    {
      parse_tree__write_deps_file__Var_418 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_418, 0) = ((MR_Box) ((MR_String) "\n\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_418, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_421));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Var_418);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, (MR_String) ".java", (MR_Integer) 1, &parse_tree__write_deps_file__JavaFileName_89);
    }
    {
      parse_tree__write_deps_file__Var_434 = make__make_module_dep_file_extension_0_f_0();
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, parse_tree__write_deps_file__Var_434, (MR_Integer) 1, &parse_tree__write_deps_file__ModuleDepFileName_90);
    }
    {
      parse_tree__write_deps_file__Var_453 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_453, 0) = ((MR_Box) (parse_tree__write_deps_file__CFileName_86));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_453, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[11])));
    }
    {
      parse_tree__write_deps_file__Var_451 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_451, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_451, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_453));
    }
    {
      parse_tree__write_deps_file__Var_450 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_450, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_90));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_450, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_451));
    }
    {
      parse_tree__write_deps_file__Var_448 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_448, 0) = ((MR_Box) ((MR_String) "else\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_448, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_450));
    }
    {
      parse_tree__write_deps_file__Var_446 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_446, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_446, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_448));
    }
    {
      parse_tree__write_deps_file__Var_445 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_445, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaFileName_89));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_445, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_446));
    }
    {
      parse_tree__write_deps_file__Var_443 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_443, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_443, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_445));
    }
    {
      parse_tree__write_deps_file__Var_442 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_442, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_90));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_442, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_443));
    }
    {
      parse_tree__write_deps_file__Var_440 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_440, 0) = ((MR_Box) ((MR_String) "ifeq (\044(findstring java,\044(GRADE)),java)\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_440, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_442));
    }
    {
      parse_tree__write_deps_file__Var_437 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_437, 0) = ((MR_Box) ((MR_String) "\n\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_437, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_440));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Var_437);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, (MR_String) ".date", (MR_Integer) 1, &parse_tree__write_deps_file__DateFileName_91);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, (MR_String) ".date0", (MR_Integer) 1, &parse_tree__write_deps_file__Date0FileName_92);
    }
    {
      parse_tree__write_deps_file__Var_471 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_471, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_92));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_471, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_469 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_469, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_469, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_471));
    }
    {
      parse_tree__write_deps_file__Var_468 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_468, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_91));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_468, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_469));
    }
    {
      parse_tree__write_deps_file__Var_465 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_465, 0) = ((MR_Box) ((MR_String) "\n\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_465, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_468));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Var_465);
    }
    {
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__DepStream_10, (MR_String) ".date", parse_tree__write_deps_file__ParentDeps_22);
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Var_262);
    }
    {
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__DepStream_10, (MR_String) ".int0", parse_tree__write_deps_file__ParentDeps_22);
    }
    {
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__DepStream_10, (MR_String) ".int3", parse_tree__write_deps_file__LongDeps_49);
    }
    {
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__DepStream_10, (MR_String) ".int3", parse_tree__write_deps_file__ShortDeps_51);
    }
    {
      parse_tree__write_deps_file__Var_486 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_486, 0) = ((MR_Box) ((MR_String) "\n\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_486, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_471));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Var_486);
    }
    {
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__DepStream_10, (MR_String) ".date0", parse_tree__write_deps_file__ParentDeps_22);
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Var_262);
    }
    {
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__DepStream_10, (MR_String) ".int3", parse_tree__write_deps_file__LongDeps_49);
    }
    {
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__DepStream_10, (MR_String) ".int3", parse_tree__write_deps_file__ShortDeps_51);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_10, (MR_String) "\n\n");
    }
    {
      parse_tree__source_file_map__have_source_file_map_3_p_0(&parse_tree__write_deps_file__HaveMap_93);
    }
    switch (parse_tree__write_deps_file__HaveMap_93) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__write_deps_file__ModuleArg_94 = parse_tree__write_deps_file__SourceFileName_18;
        break;
      case (MR_Integer) 1:
        {
          parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__write_deps_file__SourceFileModuleName_19, &parse_tree__write_deps_file__ModuleArg_94);
        }
        break;
    }
    {
      libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_13, &parse_tree__write_deps_file__Target_95);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, (MR_String) ".class", (MR_Integer) 1, &parse_tree__write_deps_file__ClassFileName_96);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, (MR_String) ".beam", (MR_Integer) 1, &parse_tree__write_deps_file__BeamFileName_97);
    }
    switch (MR_tag((MR_Word) parse_tree__write_deps_file__ContainsForeignCode_32)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(parse_tree__write_deps_file__ContainsForeignCode_32)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            parse_tree__write_deps_file__ForeignImportModules_99 = parse_tree__write_deps_file__ForeignImportModules0_30;
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__write_deps_file__TypeInfo_792_792;
              MR_Word parse_tree__write_deps_file__SrcForeignImportModules_101;
              MR_Word parse_tree__write_deps_file__IntItemBlocksCord_104;
              MR_Word parse_tree__write_deps_file__IntForeignImportModules_106;
              MR_Word parse_tree__write_deps_file__OptForeignImportModules_110;
              MR_Word parse_tree__write_deps_file__IntForOptForeignImportModules_114;
              MR_Word parse_tree__write_deps_file__Var_511;
              MR_Word parse_tree__write_deps_file__Var_512;
              MR_Word parse_tree__write_deps_file__Var_513;
              MR_Word parse_tree__write_deps_file___SrcLangSet_100;
              MR_Word parse_tree__write_deps_file__Var_102;
              MR_Word parse_tree__write_deps_file__Var_103;
              MR_Word parse_tree__write_deps_file___IntLangSet_105;
              MR_Word parse_tree__write_deps_file__Var_107;
              MR_Word parse_tree__write_deps_file__Var_108;
              MR_Word parse_tree__write_deps_file___OptLangSet_109;
              MR_Word parse_tree__write_deps_file__Var_111;
              MR_Word parse_tree__write_deps_file__Var_112;
              MR_Word parse_tree__write_deps_file___IntForOptLangSet_113;
              MR_Word parse_tree__write_deps_file__Var_115;
              MR_Word parse_tree__write_deps_file__Var_116;
              MR_Word parse_tree__write_deps_file__C0_117;
              MR_Word parse_tree__write_deps_file__CSharp0_118;
              MR_Word parse_tree__write_deps_file__Java0_119;
              MR_Word parse_tree__write_deps_file__Erlang0_120;

              {
                parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0, parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__SrcItemBlocks_34, &parse_tree__write_deps_file___SrcLangSet_100, &parse_tree__write_deps_file__SrcForeignImportModules_101, &parse_tree__write_deps_file__Var_102, &parse_tree__write_deps_file__Var_103);
              }
              parse_tree__write_deps_file__TypeInfo_792_792 = (MR_Word) &parse_tree__write_deps_file_scalar_common_1[1];
              {
                parse_tree__write_deps_file__IntItemBlocksCord_104 = mercury__cord__f_43_43_2_f_0(parse_tree__write_deps_file__TypeInfo_792_792, parse_tree__write_deps_file__DirectIntItemBlocksCord_35, parse_tree__write_deps_file__IndirectIntItemBlocksCord_36);
              }
              {
                parse_tree__write_deps_file__Var_511 = mercury__cord__list_1_f_0(parse_tree__write_deps_file__TypeInfo_792_792, parse_tree__write_deps_file__IntItemBlocksCord_104);
              }
              {
                parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0, parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__Var_511, &parse_tree__write_deps_file___IntLangSet_105, &parse_tree__write_deps_file__IntForeignImportModules_106, &parse_tree__write_deps_file__Var_107, &parse_tree__write_deps_file__Var_108);
              }
              {
                parse_tree__write_deps_file__Var_512 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[2], parse_tree__write_deps_file__OptItemBlocksCord_37);
              }
              {
                parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0, parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__Var_512, &parse_tree__write_deps_file___OptLangSet_109, &parse_tree__write_deps_file__OptForeignImportModules_110, &parse_tree__write_deps_file__Var_111, &parse_tree__write_deps_file__Var_112);
              }
              {
                parse_tree__write_deps_file__Var_513 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[3], parse_tree__write_deps_file__IntForOptItemBlocksCord_38);
              }
              {
                parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0, parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__Var_513, &parse_tree__write_deps_file___IntForOptLangSet_113, &parse_tree__write_deps_file__IntForOptForeignImportModules_114, &parse_tree__write_deps_file__Var_115, &parse_tree__write_deps_file__Var_116);
              }
              parse_tree__write_deps_file__C0_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_30, (MR_Integer) 0)));
              parse_tree__write_deps_file__CSharp0_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_30, (MR_Integer) 1)));
              parse_tree__write_deps_file__Java0_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_30, (MR_Integer) 2)));
              parse_tree__write_deps_file__Erlang0_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_30, (MR_Integer) 3)));
              {
                parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, parse_tree__write_deps_file__C0_117);
              }
              if (parse_tree__write_deps_file__succeeded)
                {
                  {
                    parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, parse_tree__write_deps_file__CSharp0_118);
                  }
                  if (parse_tree__write_deps_file__succeeded)
                    {
                      {
                        parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, parse_tree__write_deps_file__Java0_119);
                      }
                      if (parse_tree__write_deps_file__succeeded)
                        {
                          parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, parse_tree__write_deps_file__Erlang0_120);
                        }
                    }
                }
              if (parse_tree__write_deps_file__succeeded)
                {
                  MR_Word parse_tree__write_deps_file__SrcC_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_101, (MR_Integer) 0)));
                  MR_Word parse_tree__write_deps_file__SrcCSharp_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_101, (MR_Integer) 1)));
                  MR_Word parse_tree__write_deps_file__SrcJava_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_101, (MR_Integer) 2)));
                  MR_Word parse_tree__write_deps_file__SrcErlang_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_101, (MR_Integer) 3)));
                  MR_Word parse_tree__write_deps_file__IntC_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_106, (MR_Integer) 0)));
                  MR_Word parse_tree__write_deps_file__IntCSharp_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_106, (MR_Integer) 1)));
                  MR_Word parse_tree__write_deps_file__IntJava_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_106, (MR_Integer) 2)));
                  MR_Word parse_tree__write_deps_file__IntErlang_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_106, (MR_Integer) 3)));
                  MR_Word parse_tree__write_deps_file__OptC_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_110, (MR_Integer) 0)));
                  MR_Word parse_tree__write_deps_file__OptCSharp_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_110, (MR_Integer) 1)));
                  MR_Word parse_tree__write_deps_file__OptJava_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_110, (MR_Integer) 2)));
                  MR_Word parse_tree__write_deps_file__OptErlang_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_110, (MR_Integer) 3)));
                  MR_Word parse_tree__write_deps_file__IntForOptC_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_114, (MR_Integer) 0)));
                  MR_Word parse_tree__write_deps_file__IntForOptCSharp_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_114, (MR_Integer) 1)));
                  MR_Word parse_tree__write_deps_file__IntForOptJava_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_114, (MR_Integer) 2)));
                  MR_Word parse_tree__write_deps_file__IntForOptErlang_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_114, (MR_Integer) 3)));
                  MR_Word parse_tree__write_deps_file__C_137;
                  MR_Word parse_tree__write_deps_file__CSharp_138;
                  MR_Word parse_tree__write_deps_file__Java_139;
                  MR_Word parse_tree__write_deps_file__Erlang_140;
                  MR_Word parse_tree__write_deps_file__Var_514;
                  MR_Word parse_tree__write_deps_file__Var_515;
                  MR_Word parse_tree__write_deps_file__Var_516;
                  MR_Word parse_tree__write_deps_file__Var_517;
                  MR_Word parse_tree__write_deps_file__Var_519;
                  MR_Word parse_tree__write_deps_file__Var_520;
                  MR_Word parse_tree__write_deps_file__Var_521;
                  MR_Word parse_tree__write_deps_file__Var_522;
                  MR_Word parse_tree__write_deps_file__Var_524;
                  MR_Word parse_tree__write_deps_file__Var_525;
                  MR_Word parse_tree__write_deps_file__Var_526;
                  MR_Word parse_tree__write_deps_file__Var_527;
                  MR_Word parse_tree__write_deps_file__Var_529;
                  MR_Word parse_tree__write_deps_file__Var_530;
                  MR_Word parse_tree__write_deps_file__Var_531;
                  MR_Word parse_tree__write_deps_file__Var_532;

                  {
                    parse_tree__write_deps_file__Var_517 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_517, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptC_133));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_517, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__write_deps_file__Var_516 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_516, 0) = ((MR_Box) (parse_tree__write_deps_file__OptC_129));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_516, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_517));
                  }
                  {
                    parse_tree__write_deps_file__Var_515 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_515, 0) = ((MR_Box) (parse_tree__write_deps_file__IntC_125));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_515, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_516));
                  }
                  {
                    parse_tree__write_deps_file__Var_514 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_514, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcC_121));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_514, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_515));
                  }
                  {
                    parse_tree__write_deps_file__C_137 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, parse_tree__write_deps_file__Var_514);
                  }
                  {
                    parse_tree__write_deps_file__Var_522 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_522, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptCSharp_134));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_522, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__write_deps_file__Var_521 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_521, 0) = ((MR_Box) (parse_tree__write_deps_file__OptCSharp_130));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_521, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_522));
                  }
                  {
                    parse_tree__write_deps_file__Var_520 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_520, 0) = ((MR_Box) (parse_tree__write_deps_file__IntCSharp_126));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_520, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_521));
                  }
                  {
                    parse_tree__write_deps_file__Var_519 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_519, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcCSharp_122));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_519, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_520));
                  }
                  {
                    parse_tree__write_deps_file__CSharp_138 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, parse_tree__write_deps_file__Var_519);
                  }
                  {
                    parse_tree__write_deps_file__Var_527 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_527, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptJava_135));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_527, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__write_deps_file__Var_526 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_526, 0) = ((MR_Box) (parse_tree__write_deps_file__OptJava_131));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_526, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_527));
                  }
                  {
                    parse_tree__write_deps_file__Var_525 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_525, 0) = ((MR_Box) (parse_tree__write_deps_file__IntJava_127));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_525, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_526));
                  }
                  {
                    parse_tree__write_deps_file__Var_524 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_524, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcJava_123));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_524, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_525));
                  }
                  {
                    parse_tree__write_deps_file__Java_139 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, parse_tree__write_deps_file__Var_524);
                  }
                  {
                    parse_tree__write_deps_file__Var_532 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_532, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptErlang_136));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_532, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__write_deps_file__Var_531 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_531, 0) = ((MR_Box) (parse_tree__write_deps_file__OptErlang_132));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_531, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_532));
                  }
                  {
                    parse_tree__write_deps_file__Var_530 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_530, 0) = ((MR_Box) (parse_tree__write_deps_file__IntErlang_128));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_530, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_531));
                  }
                  {
                    parse_tree__write_deps_file__Var_529 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_529, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcErlang_124));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_529, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_530));
                  }
                  {
                    parse_tree__write_deps_file__Erlang_140 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, parse_tree__write_deps_file__Var_529);
                  }
                  {
                    parse_tree__write_deps_file__ForeignImportModules_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_99, 0) = ((MR_Box) (parse_tree__write_deps_file__C_137));
                    MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_99, 1) = ((MR_Box) (parse_tree__write_deps_file__CSharp_138));
                    MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_99, 2) = ((MR_Box) (parse_tree__write_deps_file__Java_139));
                    MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_99, 3) = ((MR_Box) (parse_tree__write_deps_file__Erlang_140));
                  }
                }
              else
                parse_tree__write_deps_file__ForeignImportModules_99 = parse_tree__write_deps_file__ForeignImportModules0_30;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        parse_tree__write_deps_file__ForeignImportModules_99 = parse_tree__write_deps_file__ForeignImportModules0_30;
        break;
    }
    {
      parse_tree__write_deps_file__ForeignImports_141 = parse_tree__prog_data_foreign__get_all_foreign_import_module_infos_1_f_0(parse_tree__write_deps_file__ForeignImportModules_99);
    }
    {
      parse_tree__write_deps_file__Var_534 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_534, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_534, 1) = ((MR_Box) (parse_tree__write_deps_file__do_write_dependency_file_9_p_0_4));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_534, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_534, 3) = ((MR_Box) (parse_tree__write_deps_file__SourceFileModuleName_19));
    }
    {
      mercury__set__filter_map_3_p_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0, parse_tree__write_deps_file__TypeCtorInfo_781_781, parse_tree__write_deps_file__Var_534, parse_tree__write_deps_file__ForeignImports_141, &parse_tree__write_deps_file__ForeignImportedModuleNames_144);
    }
    {
      parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_781_781, parse_tree__write_deps_file__ForeignImportedModuleNames_144);
    }
    if (parse_tree__write_deps_file__succeeded)
      {
      }
    else
      {
        MR_Word parse_tree__write_deps_file__ForeignImportTargets_145;
        MR_String parse_tree__write_deps_file__ForeignImportExt_146;
        MR_Word parse_tree__write_deps_file__WriteForeignImportTarget_147;
        MR_Box parse_tree__write_deps_file__conv4_STATE_VARIABLE_IO_556_556;

        switch (parse_tree__write_deps_file__Target_95) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__write_deps_file__Var_538;

              {
                parse_tree__write_deps_file__Var_538 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_538, 0) = ((MR_Box) (parse_tree__write_deps_file__PicObjFileName_65));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_538, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__write_deps_file__ForeignImportTargets_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_145, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_63));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_145, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_538));
              }
              parse_tree__write_deps_file__ForeignImportExt_146 = (MR_String) ".mh";
            }
            break;
          case (MR_Integer) 1:
            {
              parse_tree__write_deps_file__ForeignImportTargets_145 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              parse_tree__write_deps_file__ForeignImportExt_146 = (MR_String) ".cs";
            }
            break;
          case (MR_Integer) 3:
            {
              {
                parse_tree__write_deps_file__ForeignImportTargets_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_145, 0) = ((MR_Box) (parse_tree__write_deps_file__BeamFileName_97));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              parse_tree__write_deps_file__ForeignImportExt_146 = (MR_String) ".hrl";
            }
            break;
          case (MR_Integer) 2:
            {
              {
                parse_tree__write_deps_file__ForeignImportTargets_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_145, 0) = ((MR_Box) (parse_tree__write_deps_file__ClassFileName_96));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              parse_tree__write_deps_file__ForeignImportExt_146 = (MR_String) ".java";
            }
            break;
        }
        {
          parse_tree__write_deps_file__WriteForeignImportTarget_147 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_147, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[1]));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_147, 1) = ((MR_Box) (parse_tree__write_deps_file__do_write_dependency_file_9_p_0_5));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_147, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_147, 3) = ((MR_Box) (parse_tree__write_deps_file__DepStream_10));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_147, 4) = ((MR_Box) (parse_tree__write_deps_file__Globals_13));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_147, 5) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportedModuleNames_144));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__WriteForeignImportTarget_147, 6) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportExt_146));
        }
        {
          mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_782_782, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__WriteForeignImportTarget_147, parse_tree__write_deps_file__ForeignImportTargets_145, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv4_STATE_VARIABLE_IO_556_556);
        }
      }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, (MR_String) ".int", (MR_Integer) 1, &parse_tree__write_deps_file__IntFileName_149);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, (MR_String) ".int2", (MR_Integer) 1, &parse_tree__write_deps_file__Int2FileName_150);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, (MR_String) ".int3", (MR_Integer) 1, &parse_tree__write_deps_file__Int3FileName_151);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, (MR_String) ".opt", (MR_Integer) 1, &parse_tree__write_deps_file__OptFileName_152);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, (MR_String) ".trans_opt", (MR_Integer) 1, &parse_tree__write_deps_file__TransOptFileName_153);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, parse_tree__write_deps_file__ModuleName_20, (MR_String) ".date3", (MR_Integer) 1, &parse_tree__write_deps_file__Date3FileName_154);
    }
    {
      parse_tree__write_deps_file__Var_621 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_621, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_53));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_621, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[13])));
    }
    {
      parse_tree__write_deps_file__Var_619 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_619, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_619, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_621));
    }
    {
      parse_tree__write_deps_file__Var_618 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_618, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptFileName_153));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_618, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_619));
    }
    {
      parse_tree__write_deps_file__Var_616 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_616, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_616, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_618));
    }
    {
      parse_tree__write_deps_file__Var_614 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_614, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_614, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_616));
    }
    {
      parse_tree__write_deps_file__Var_613 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_613, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_61));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_613, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_614));
    }
    {
      parse_tree__write_deps_file__Var_611 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_611, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_611, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_613));
    }
    {
      parse_tree__write_deps_file__Var_610 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_610, 0) = ((MR_Box) (parse_tree__write_deps_file__OptFileName_152));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_610, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_611));
    }
    {
      parse_tree__write_deps_file__Var_608 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_608, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_608, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_610));
    }
    {
      parse_tree__write_deps_file__Var_606 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_606, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_606, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_608));
    }
    {
      parse_tree__write_deps_file__Var_605 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_605, 0) = ((MR_Box) (parse_tree__write_deps_file__Date3FileName_154));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_605, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_606));
    }
    {
      parse_tree__write_deps_file__Var_603 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_603, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_603, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_605));
    }
    {
      parse_tree__write_deps_file__Var_602 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_602, 0) = ((MR_Box) (parse_tree__write_deps_file__Int3FileName_151));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_602, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_603));
    }
    {
      parse_tree__write_deps_file__Var_600 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_600, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_600, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_602));
    }
    {
      parse_tree__write_deps_file__Var_598 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_598, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_598, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_600));
    }
    {
      parse_tree__write_deps_file__Var_597 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_597, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_91));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_597, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_598));
    }
    {
      parse_tree__write_deps_file__Var_595 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_595, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_595, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_597));
    }
    {
      parse_tree__write_deps_file__Var_594 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_594, 0) = ((MR_Box) (parse_tree__write_deps_file__Int2FileName_150));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_594, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_595));
    }
    {
      parse_tree__write_deps_file__Var_592 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_592, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_592, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_594));
    }
    {
      parse_tree__write_deps_file__Var_590 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_590, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_590, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_592));
    }
    {
      parse_tree__write_deps_file__Var_589 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_589, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_91));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_589, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_590));
    }
    {
      parse_tree__write_deps_file__Var_587 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_587, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_587, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_589));
    }
    {
      parse_tree__write_deps_file__Var_586 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_586, 0) = ((MR_Box) (parse_tree__write_deps_file__IntFileName_149));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_586, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_587));
    }
    {
      parse_tree__write_deps_file__Var_584 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_584, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_584, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_586));
    }
    {
      parse_tree__write_deps_file__Var_582 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_582, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_582, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_584));
    }
    {
      parse_tree__write_deps_file__Var_581 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_581, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_92));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_581, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_582));
    }
    {
      parse_tree__write_deps_file__Var_579 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_579, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_579, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_581));
    }
    {
      parse_tree__write_deps_file__Var_578 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_578, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0FileName_66));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_578, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_579));
    }
    {
      parse_tree__write_deps_file__Var_575 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_575, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_575, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_578));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Var_575);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_13, (MR_Integer) 647, &parse_tree__write_deps_file__UseSubdirs_155);
    }
    switch (parse_tree__write_deps_file__UseSubdirs_155) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__write_deps_file__Var_629;
          MR_Box parse_tree__write_deps_file__conv5_STATE_VARIABLE_IO_631_631;

          {
            mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_10);
          }
          {
            parse_tree__write_deps_file__Var_629 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_629, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_629, 1) = ((MR_Box) (parse_tree__write_deps_file__do_write_dependency_file_9_p_0_6));
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_629, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_629, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_13));
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_629, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_10));
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_629, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_20));
          }
          {
            mercury__list__foldl_4_p_2(parse_tree__write_deps_file__TypeCtorInfo_782_782, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Var_629, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[19]), ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv5_STATE_VARIABLE_IO_631_631);
          }
        }
        break;
    }
    {
      parse_tree__write_deps_file__Var_805 = parse_tree__source_file_map__default_source_file_1_f_0(parse_tree__write_deps_file__ModuleName_20);
    }
    parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__SourceFileName_18, parse_tree__write_deps_file__Var_805) == 0);
    if (parse_tree__write_deps_file__succeeded)
      {
      }
    else
      {
        MR_Word parse_tree__write_deps_file__Var_644;
        MR_Word parse_tree__write_deps_file__Var_647;
        MR_Word parse_tree__write_deps_file__Var_648;
        MR_Word parse_tree__write_deps_file__Var_650;
        MR_Word parse_tree__write_deps_file__Var_651;
        MR_Word parse_tree__write_deps_file__Var_653;
        MR_Word parse_tree__write_deps_file__Var_655;
        MR_Word parse_tree__write_deps_file__Var_657;
        MR_Word parse_tree__write_deps_file__Var_658;
        MR_Word parse_tree__write_deps_file__Var_660;
        MR_Word parse_tree__write_deps_file__Var_661;
        MR_Word parse_tree__write_deps_file__Var_663;
        MR_Word parse_tree__write_deps_file__Var_664;
        MR_Word parse_tree__write_deps_file__Var_666;
        MR_Word parse_tree__write_deps_file__Var_668;
        MR_Word parse_tree__write_deps_file__Var_669;
        MR_Word parse_tree__write_deps_file__Var_671;
        MR_Word parse_tree__write_deps_file__Var_672;
        MR_Word parse_tree__write_deps_file__Var_674;
        MR_Word parse_tree__write_deps_file__Var_675;
        MR_Word parse_tree__write_deps_file__Var_677;
        MR_Word parse_tree__write_deps_file__Var_679;
        MR_Word parse_tree__write_deps_file__Var_680;
        MR_Word parse_tree__write_deps_file__Var_682;
        MR_Word parse_tree__write_deps_file__Var_683;
        MR_Word parse_tree__write_deps_file__Var_685;
        MR_Word parse_tree__write_deps_file__Var_686;
        MR_Word parse_tree__write_deps_file__Var_688;
        MR_Word parse_tree__write_deps_file__Var_690;
        MR_Word parse_tree__write_deps_file__Var_691;
        MR_Word parse_tree__write_deps_file__Var_693;
        MR_Word parse_tree__write_deps_file__Var_694;
        MR_Word parse_tree__write_deps_file__Var_696;
        MR_Word parse_tree__write_deps_file__Var_697;
        MR_Word parse_tree__write_deps_file__Var_699;
        MR_Word parse_tree__write_deps_file__Var_701;
        MR_Word parse_tree__write_deps_file__Var_703;
        MR_Word parse_tree__write_deps_file__Var_704;
        MR_Word parse_tree__write_deps_file__Var_706;
        MR_Word parse_tree__write_deps_file__Var_707;
        MR_Word parse_tree__write_deps_file__Var_709;
        MR_Word parse_tree__write_deps_file__Var_710;
        MR_Word parse_tree__write_deps_file__Var_712;
        MR_Word parse_tree__write_deps_file__Var_714;
        MR_Word parse_tree__write_deps_file__Var_715;
        MR_Word parse_tree__write_deps_file__Var_717;
        MR_Word parse_tree__write_deps_file__Var_718;
        MR_Word parse_tree__write_deps_file__Var_720;
        MR_Word parse_tree__write_deps_file__Var_721;
        MR_Word parse_tree__write_deps_file__Var_723;
        MR_Word parse_tree__write_deps_file__Var_725;
        MR_Word parse_tree__write_deps_file__Var_727;

        {
          parse_tree__write_deps_file__Var_727 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_727, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_94));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_727, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[98])));
        }
        {
          parse_tree__write_deps_file__Var_725 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_725, 0) = ((MR_Box) ((MR_String) "--java-only "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_725, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_727));
        }
        {
          parse_tree__write_deps_file__Var_723 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_723, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_723, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_725));
        }
        {
          parse_tree__write_deps_file__Var_721 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_721, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_721, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_723));
        }
        {
          parse_tree__write_deps_file__Var_720 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_720, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_18));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_720, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_721));
        }
        {
          parse_tree__write_deps_file__Var_718 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_718, 0) = ((MR_Box) ((MR_String) " : "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_718, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_720));
        }
        {
          parse_tree__write_deps_file__Var_717 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_717, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_64));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_717, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_718));
        }
        {
          parse_tree__write_deps_file__Var_715 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_715, 0) = ((MR_Box) ((MR_String) " \044(ERR_REDIRECT)\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_715, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_717));
        }
        {
          parse_tree__write_deps_file__Var_714 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_714, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_94));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_714, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_715));
        }
        {
          parse_tree__write_deps_file__Var_712 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_712, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_712, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_714));
        }
        {
          parse_tree__write_deps_file__Var_710 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_710, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_710, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_712));
        }
        {
          parse_tree__write_deps_file__Var_709 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_709, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_18));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_709, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_710));
        }
        {
          parse_tree__write_deps_file__Var_707 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_707, 0) = ((MR_Box) ((MR_String) " : "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_707, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_709));
        }
        {
          parse_tree__write_deps_file__Var_706 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_706, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_62));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_706, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_707));
        }
        {
          parse_tree__write_deps_file__Var_704 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_704, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_704, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_706));
        }
        {
          parse_tree__write_deps_file__Var_703 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_703, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_94));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_703, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_704));
        }
        {
          parse_tree__write_deps_file__Var_701 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_701, 0) = ((MR_Box) ((MR_String) "\044(ALL_MCTOIFLAGS) "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_701, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_703));
        }
        {
          parse_tree__write_deps_file__Var_699 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_699, 0) = ((MR_Box) ((MR_String) "\t\044(MCTOI) \044(ALL_GRADEFLAGS) "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_699, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_701));
        }
        {
          parse_tree__write_deps_file__Var_697 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_697, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_697, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_699));
        }
        {
          parse_tree__write_deps_file__Var_696 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_696, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_18));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_696, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_697));
        }
        {
          parse_tree__write_deps_file__Var_694 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_694, 0) = ((MR_Box) ((MR_String) " : "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_694, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_696));
        }
        {
          parse_tree__write_deps_file__Var_693 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_693, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_53));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_693, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_694));
        }
        {
          parse_tree__write_deps_file__Var_691 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_691, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_691, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_693));
        }
        {
          parse_tree__write_deps_file__Var_690 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_690, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_94));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_690, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_691));
        }
        {
          parse_tree__write_deps_file__Var_688 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_688, 0) = ((MR_Box) ((MR_String) "\t\044(MCOI) \044(ALL_GRADEFLAGS) \044(ALL_MCOIFLAGS) "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_688, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_690));
        }
        {
          parse_tree__write_deps_file__Var_686 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_686, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_686, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_688));
        }
        {
          parse_tree__write_deps_file__Var_685 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_685, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_18));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_685, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_686));
        }
        {
          parse_tree__write_deps_file__Var_683 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_683, 0) = ((MR_Box) ((MR_String) " : "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_683, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_685));
        }
        {
          parse_tree__write_deps_file__Var_682 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_682, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_61));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_682, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_683));
        }
        {
          parse_tree__write_deps_file__Var_680 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_680, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_680, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_682));
        }
        {
          parse_tree__write_deps_file__Var_679 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_679, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_94));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_679, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_680));
        }
        {
          parse_tree__write_deps_file__Var_677 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_677, 0) = ((MR_Box) ((MR_String) "\t\044(MCSI) \044(ALL_GRADEFLAGS) \044(ALL_MCSIFLAGS) "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_677, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_679));
        }
        {
          parse_tree__write_deps_file__Var_675 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_675, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_675, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_677));
        }
        {
          parse_tree__write_deps_file__Var_674 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_674, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_18));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_674, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_675));
        }
        {
          parse_tree__write_deps_file__Var_672 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_672, 0) = ((MR_Box) ((MR_String) " : "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_672, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_674));
        }
        {
          parse_tree__write_deps_file__Var_671 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_671, 0) = ((MR_Box) (parse_tree__write_deps_file__Date3FileName_154));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_671, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_672));
        }
        {
          parse_tree__write_deps_file__Var_669 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_669, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_669, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_671));
        }
        {
          parse_tree__write_deps_file__Var_668 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_668, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_94));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_668, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_669));
        }
        {
          parse_tree__write_deps_file__Var_666 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_666, 0) = ((MR_Box) ((MR_String) "\t\044(MCI) \044(ALL_GRADEFLAGS) \044(ALL_MCIFLAGS) "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_666, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_668));
        }
        {
          parse_tree__write_deps_file__Var_664 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_664, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_664, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_666));
        }
        {
          parse_tree__write_deps_file__Var_663 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_663, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_18));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_663, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_664));
        }
        {
          parse_tree__write_deps_file__Var_661 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_661, 0) = ((MR_Box) ((MR_String) " : "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_661, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_663));
        }
        {
          parse_tree__write_deps_file__Var_660 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_660, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_91));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_660, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_661));
        }
        {
          parse_tree__write_deps_file__Var_658 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_658, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_658, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_660));
        }
        {
          parse_tree__write_deps_file__Var_657 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_657, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_94));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_657, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_658));
        }
        {
          parse_tree__write_deps_file__Var_655 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_655, 0) = ((MR_Box) ((MR_String) "\044(ALL_MCPIFLAGS) "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_655, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_657));
        }
        {
          parse_tree__write_deps_file__Var_653 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_653, 0) = ((MR_Box) ((MR_String) "\t\044(MCPI) \044(ALL_GRADEFLAGS) "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_653, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_655));
        }
        {
          parse_tree__write_deps_file__Var_651 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_651, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_651, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_653));
        }
        {
          parse_tree__write_deps_file__Var_650 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_650, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_18));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_650, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_651));
        }
        {
          parse_tree__write_deps_file__Var_648 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_648, 0) = ((MR_Box) ((MR_String) " : "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_648, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_650));
        }
        {
          parse_tree__write_deps_file__Var_647 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_647, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_92));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_647, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_648));
        }
        {
          parse_tree__write_deps_file__Var_644 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_644, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_644, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_647));
        }
        {
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_10, parse_tree__write_deps_file__Var_644);
        }
      }
    {
      mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DepStream_10);
    }
    {
      mercury__io__rename_file_5_p_0(parse_tree__write_deps_file__TmpDependencyFileName_12, parse_tree__write_deps_file__DependencyFileName_11, &parse_tree__write_deps_file__Result3_156);
    }
    if ((parse_tree__write_deps_file__Result3_156 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_45, (MR_String) " done.\n");
        }
      }
    else
      {
        MR_Word parse_tree__write_deps_file__Result4_158;

        {
          mercury__io__remove_file_4_p_0(parse_tree__write_deps_file__DependencyFileName_11, &parse_tree__write_deps_file__Result4_158);
        }
        if ((parse_tree__write_deps_file__Result4_158 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word parse_tree__write_deps_file__Result5_162;

            {
              mercury__io__rename_file_5_p_0(parse_tree__write_deps_file__TmpDependencyFileName_12, parse_tree__write_deps_file__DependencyFileName_11, &parse_tree__write_deps_file__Result5_162);
            }
            if ((parse_tree__write_deps_file__Result5_162 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_45, (MR_String) " done.\n");
                }
              }
            else
              {
                MR_Word parse_tree__write_deps_file__Error5_163 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result5_162, (MR_Integer) 0)));
                MR_Word parse_tree__write_deps_file__Var_742;
                MR_Word parse_tree__write_deps_file__Var_744;
                MR_Word parse_tree__write_deps_file__Var_745;
                MR_Word parse_tree__write_deps_file__Var_747;
                MR_Word parse_tree__write_deps_file__Var_748;
                MR_Word parse_tree__write_deps_file__Var_750;
                MR_String parse_tree__write_deps_file__ErrorMsg_775;
                MR_String parse_tree__write_deps_file__Message_776;

                {
                  libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_45, (MR_String) " failed.\n");
                }
                {
                  libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_45);
                }
                {
                  mercury__io__error_message_2_p_0(parse_tree__write_deps_file__Error5_163, &parse_tree__write_deps_file__ErrorMsg_775);
                }
                {
                  parse_tree__write_deps_file__Var_750 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_750, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrorMsg_775));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_750, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__write_deps_file__Var_748 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_748, 0) = ((MR_Box) ((MR_String) "\': "));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_748, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_750));
                }
                {
                  parse_tree__write_deps_file__Var_747 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_747, 0) = ((MR_Box) (parse_tree__write_deps_file__DependencyFileName_11));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_747, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_748));
                }
                {
                  parse_tree__write_deps_file__Var_745 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_745, 0) = ((MR_Box) ((MR_String) "\' as \140"));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_745, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_747));
                }
                {
                  parse_tree__write_deps_file__Var_744 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_744, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpDependencyFileName_12));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_744, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_745));
                }
                {
                  parse_tree__write_deps_file__Var_742 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_742, 0) = ((MR_Box) ((MR_String) "can\'t rename file \140"));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_742, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_744));
                }
                {
                  mercury__string__append_list_2_p_0(parse_tree__write_deps_file__Var_742, &parse_tree__write_deps_file__Message_776);
                }
                {
                  libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_776);
                }
              }
          }
        else
          {
            MR_Word parse_tree__write_deps_file__Error4_159 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result4_158, (MR_Integer) 0)));
            MR_String parse_tree__write_deps_file__ErrorMsg_160;
            MR_String parse_tree__write_deps_file__Message_161;
            MR_Word parse_tree__write_deps_file__Var_756;
            MR_Word parse_tree__write_deps_file__Var_758;
            MR_Word parse_tree__write_deps_file__Var_759;
            MR_Word parse_tree__write_deps_file__Var_761;

            {
              libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_45, (MR_String) " failed.\n");
            }
            {
              libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_45);
            }
            {
              mercury__io__error_message_2_p_0(parse_tree__write_deps_file__Error4_159, &parse_tree__write_deps_file__ErrorMsg_160);
            }
            {
              parse_tree__write_deps_file__Var_761 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_761, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrorMsg_160));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_761, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__write_deps_file__Var_759 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_759, 0) = ((MR_Box) ((MR_String) "\': "));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_759, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_761));
            }
            {
              parse_tree__write_deps_file__Var_758 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_758, 0) = ((MR_Box) (parse_tree__write_deps_file__DependencyFileName_11));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_758, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_759));
            }
            {
              parse_tree__write_deps_file__Var_756 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_756, 0) = ((MR_Box) ((MR_String) "can\'t remove file \140"));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_756, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_758));
            }
            {
              mercury__string__append_list_2_p_0(parse_tree__write_deps_file__Var_756, &parse_tree__write_deps_file__Message_161);
            }
            {
              libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_161);
            }
          }
      }
  }
}

void MR_CALL 
parse_tree__write_deps_file__get_opt_deps_8_p_0(
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
  MR_String parse_tree__write_deps_file__HeadVar__4_4,
  MR_Word parse_tree__write_deps_file__HeadVar__5_5,
  MR_Word * parse_tree__write_deps_file__HeadVar__6_6)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;

    if ((parse_tree__write_deps_file__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__write_deps_file__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word parse_tree__write_deps_file__Dep_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 0)));
        MR_Word parse_tree__write_deps_file__Deps_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 1)));
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;

        {
          parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__HeadVar__2_2, parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__HeadVar__4_4, parse_tree__write_deps_file__Deps_21, &parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35);
        }
        switch (parse_tree__write_deps_file__HeadVar__2_2) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String parse_tree__write_deps_file__OptName_28;
              MR_Word parse_tree__write_deps_file__MaybeOptDir_29;

              {
                parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__Dep_20, parse_tree__write_deps_file__HeadVar__4_4, &parse_tree__write_deps_file__OptName_28);
              }
              {
                libs__file_util__search_for_file_5_p_0(parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__OptName_28, &parse_tree__write_deps_file__MaybeOptDir_29);
              }
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__MaybeOptDir_29)) == (MR_mktag((MR_Integer) 1))))
                *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__write_deps_file__HeadVar__6_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_20));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__write_deps_file__Result1_24;

              {
                parse_tree__find_module__search_for_module_source_7_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__Dep_20, &parse_tree__write_deps_file__Result1_24);
              }
              if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result1_24)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_String parse_tree__write_deps_file__OptName_43;
                  MR_Word parse_tree__write_deps_file__MaybeOptDir_44;

                  {
                    parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__Dep_20, parse_tree__write_deps_file__HeadVar__4_4, &parse_tree__write_deps_file__OptName_43);
                  }
                  {
                    libs__file_util__search_for_file_5_p_0(parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__OptName_43, &parse_tree__write_deps_file__MaybeOptDir_44);
                  }
                  if (((MR_tag((MR_Word) parse_tree__write_deps_file__MaybeOptDir_44)) == (MR_mktag((MR_Integer) 1))))
                    *parse_tree__write_deps_file__HeadVar__6_6 = parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *parse_tree__write_deps_file__HeadVar__6_6 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_20));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
                    }
                }
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *parse_tree__write_deps_file__HeadVar__6_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__Dep_20));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35));
                }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

    {
      parse_tree__write_deps_file__write_module_scc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
  }
}

void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0(
  MR_Word parse_tree__write_deps_file__Globals_6,
  MR_Word parse_tree__write_deps_file__Module_7,
  MR_Word parse_tree__write_deps_file__DepsOrdering_8)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__Order_10;
    MR_Word parse_tree__write_deps_file__Verbose_11;

    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_6, (MR_Integer) 104, &parse_tree__write_deps_file__Order_10);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_6, (MR_Integer) 56, &parse_tree__write_deps_file__Verbose_11);
    }
    switch (parse_tree__write_deps_file__Order_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String parse_tree__write_deps_file__OrdFileName_12;
          MR_Word parse_tree__write_deps_file__OrdResult_13;

          {
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_6, parse_tree__write_deps_file__Module_7, (MR_String) ".order", (MR_Integer) 0, &parse_tree__write_deps_file__OrdFileName_12);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) "% Creating module order file \140");
          }
          {
            libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, parse_tree__write_deps_file__OrdFileName_12);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) "\'...");
          }
          {
            mercury__io__open_output_4_p_0(parse_tree__write_deps_file__OrdFileName_12, &parse_tree__write_deps_file__OrdResult_13);
          }
          if (((MR_tag((MR_Word) parse_tree__write_deps_file__OrdResult_13)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word parse_tree__write_deps_file__IOError_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__OrdResult_13, (MR_Integer) 0)));
              MR_String parse_tree__write_deps_file__IOErrorMessage_16;
              MR_String parse_tree__write_deps_file__OrdMessage_17;
              MR_Word parse_tree__write_deps_file__Var_34;
              MR_Word parse_tree__write_deps_file__Var_36;
              MR_Word parse_tree__write_deps_file__Var_37;
              MR_Word parse_tree__write_deps_file__Var_39;

              {
                libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) " failed.\n");
              }
              {
                libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_11);
              }
              {
                mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_15, &parse_tree__write_deps_file__IOErrorMessage_16);
              }
              {
                parse_tree__write_deps_file__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_39, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_16));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__write_deps_file__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_37, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_39));
              }
              {
                parse_tree__write_deps_file__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_36, 0) = ((MR_Box) (parse_tree__write_deps_file__OrdFileName_12));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_36, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_37));
              }
              {
                parse_tree__write_deps_file__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_34, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_36));
              }
              {
                mercury__string__append_list_2_p_0(parse_tree__write_deps_file__Var_34, &parse_tree__write_deps_file__OrdMessage_17);
              }
              {
                libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__OrdMessage_17);
              }
            }
          else
            {
              MR_Word parse_tree__write_deps_file__OrdStream_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OrdResult_13, (MR_Integer) 0)));
              MR_Word parse_tree__write_deps_file__Var_43;

              {
                parse_tree__write_deps_file__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_43, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[0]));
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_43, 1) = ((MR_Box) (parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1));
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_43, 3) = ((MR_Box) (parse_tree__write_deps_file__OrdStream_14));
              }
              {
                mercury__io__write_list_6_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], parse_tree__write_deps_file__OrdStream_14, parse_tree__write_deps_file__DepsOrdering_8, (MR_String) "\n\n", parse_tree__write_deps_file__Var_43);
              }
              {
                mercury__io__close_output_3_p_0(parse_tree__write_deps_file__OrdStream_14);
              }
              {
                libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) " done.\n");
              }
            }
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_dep_file_6_p_0(
  MR_Word parse_tree__write_deps_file__Globals_7,
  MR_String parse_tree__write_deps_file__SourceFileName_8,
  MR_Word parse_tree__write_deps_file__ModuleName_9,
  MR_Word parse_tree__write_deps_file__DepsMap_10)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__Verbose_12;
    MR_String parse_tree__write_deps_file__DepFileName_13;
    MR_Word parse_tree__write_deps_file__DepResult_14;

    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 56, &parse_tree__write_deps_file__Verbose_12);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, (MR_String) ".dep", (MR_Integer) 0, &parse_tree__write_deps_file__DepFileName_13);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    }
    {
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, parse_tree__write_deps_file__DepFileName_13);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "\'...\n");
    }
    {
      mercury__io__open_output_4_p_0(parse_tree__write_deps_file__DepFileName_13, &parse_tree__write_deps_file__DepResult_14);
    }
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__DepResult_14)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__write_deps_file__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DepResult_14, (MR_Integer) 0)));
        MR_String parse_tree__write_deps_file__IOErrorMessage_17;
        MR_String parse_tree__write_deps_file__DepMessage_18;
        MR_Word parse_tree__write_deps_file__Var_34;
        MR_Word parse_tree__write_deps_file__Var_36;
        MR_Word parse_tree__write_deps_file__Var_37;
        MR_Word parse_tree__write_deps_file__Var_39;

        {
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
        }
        {
          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
        }
        {
          mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_16, &parse_tree__write_deps_file__IOErrorMessage_17);
        }
        {
          parse_tree__write_deps_file__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_39, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_17));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_37, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_39));
        }
        {
          parse_tree__write_deps_file__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_36, 0) = ((MR_Box) (parse_tree__write_deps_file__DepFileName_13));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_36, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_37));
        }
        {
          parse_tree__write_deps_file__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_34, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_36));
        }
        {
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__Var_34, &parse_tree__write_deps_file__DepMessage_18);
        }
        {
          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__DepMessage_18);
        }
      }
    else
      {
        MR_Word parse_tree__write_deps_file__DepStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__DepResult_14, (MR_Integer) 0)));

        {
          parse_tree__write_deps_file__generate_dep_file_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SourceFileName_8, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__DepsMap_10, parse_tree__write_deps_file__DepStream_15);
        }
        {
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DepStream_15);
        }
        {
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% done.\n");
        }
      }
  }
}

void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_dv_file_6_p_0(
  MR_Word parse_tree__write_deps_file__Globals_7,
  MR_String parse_tree__write_deps_file__SourceFileName_8,
  MR_Word parse_tree__write_deps_file__ModuleName_9,
  MR_Word parse_tree__write_deps_file__DepsMap_10)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__Verbose_12;
    MR_String parse_tree__write_deps_file__DvFileName_13;
    MR_Word parse_tree__write_deps_file__DvResult_14;

    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 56, &parse_tree__write_deps_file__Verbose_12);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_9, (MR_String) ".dv", (MR_Integer) 0, &parse_tree__write_deps_file__DvFileName_13);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    }
    {
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, parse_tree__write_deps_file__DvFileName_13);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "\'...\n");
    }
    {
      mercury__io__open_output_4_p_0(parse_tree__write_deps_file__DvFileName_13, &parse_tree__write_deps_file__DvResult_14);
    }
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__DvResult_14)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__write_deps_file__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DvResult_14, (MR_Integer) 0)));
        MR_String parse_tree__write_deps_file__IOErrorMessage_17;
        MR_String parse_tree__write_deps_file__DvMessage_18;
        MR_Word parse_tree__write_deps_file__Var_34;
        MR_Word parse_tree__write_deps_file__Var_36;
        MR_Word parse_tree__write_deps_file__Var_37;
        MR_Word parse_tree__write_deps_file__Var_39;

        {
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
        }
        {
          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
        }
        {
          mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_16, &parse_tree__write_deps_file__IOErrorMessage_17);
        }
        {
          parse_tree__write_deps_file__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_39, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_17));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_37, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_39));
        }
        {
          parse_tree__write_deps_file__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_36, 0) = ((MR_Box) (parse_tree__write_deps_file__DvFileName_13));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_36, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_37));
        }
        {
          parse_tree__write_deps_file__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_34, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_36));
        }
        {
          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__Var_34, &parse_tree__write_deps_file__DvMessage_18);
        }
        {
          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__DvMessage_18);
        }
      }
    else
      {
        MR_Word parse_tree__write_deps_file__DvStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__DvResult_14, (MR_Integer) 0)));

        {
          parse_tree__write_deps_file__generate_dv_file_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SourceFileName_8, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__DepsMap_10, parse_tree__write_deps_file__DvStream_15);
        }
        {
          mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DvStream_15);
        }
        {
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% done.\n");
        }
      }
  }
}

void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_d_files_10_p_0(
  MR_Word parse_tree__write_deps_file__Globals_1,
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
  MR_Word parse_tree__write_deps_file__IntDepsGraph_3,
  MR_Word parse_tree__write_deps_file__ImpDepsGraph_4,
  MR_Word parse_tree__write_deps_file__IndirectDepsGraph_5,
  MR_Word parse_tree__write_deps_file__IndirectOptDepsGraph_6,
  MR_Word parse_tree__write_deps_file__TransOptOrder_7,
  MR_Word parse_tree__write_deps_file__DepsMap_8)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;

    {
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__HeadVar__2_2, parse_tree__write_deps_file__IntDepsGraph_3, parse_tree__write_deps_file__ImpDepsGraph_4, parse_tree__write_deps_file__IndirectDepsGraph_5, parse_tree__write_deps_file__IndirectOptDepsGraph_6, parse_tree__write_deps_file__TransOptOrder_7);
    }
  }
}

void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0(
  MR_Word parse_tree__write_deps_file__Globals_7,
  MR_Word parse_tree__write_deps_file__ModuleAndImports_8,
  MR_Word parse_tree__write_deps_file__AllDeps_9,
  MR_Word parse_tree__write_deps_file__MaybeTransOptDeps_10)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__Verbose_12;
    MR_Word parse_tree__write_deps_file__ModuleName_13;
    MR_String parse_tree__write_deps_file__DependencyFileName_14;
    MR_Word parse_tree__write_deps_file__TmpDependencyFileNameRes_15;
    MR_String parse_tree__write_deps_file__Var_29;
    MR_String parse_tree__write_deps_file__Var_58;
    MR_Word parse_tree__write_deps_file__Var_59;
    MR_Word parse_tree__write_deps_file__Var_60;
    MR_Word parse_tree__write_deps_file__Var_61;
    MR_Word parse_tree__write_deps_file__Var_62;
    MR_Word parse_tree__write_deps_file__Var_63;
    MR_Word parse_tree__write_deps_file__Var_64;
    MR_Word parse_tree__write_deps_file__Var_65;
    MR_Word parse_tree__write_deps_file__Var_66;
    MR_Word parse_tree__write_deps_file__Var_67;
    MR_Word parse_tree__write_deps_file__Var_68;
    MR_Word parse_tree__write_deps_file__Var_69;
    MR_Word parse_tree__write_deps_file__Var_70;
    MR_Word parse_tree__write_deps_file__Var_71;
    MR_Word parse_tree__write_deps_file__Var_72;
    MR_Word parse_tree__write_deps_file__Var_73;
    MR_Word parse_tree__write_deps_file__Var_74;
    MR_Word parse_tree__write_deps_file__Var_75;
    MR_Word parse_tree__write_deps_file__Var_76;
    MR_Word parse_tree__write_deps_file__Var_77;
    MR_Word parse_tree__write_deps_file__Var_78;
    MR_Word parse_tree__write_deps_file__Var_79;
    MR_Word parse_tree__write_deps_file__Var_80;
    MR_Word parse_tree__write_deps_file__Var_81;
    MR_Word parse_tree__write_deps_file__Var_82;
    MR_String parse_tree__write_deps_file__Var_83;

    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 56, &parse_tree__write_deps_file__Verbose_12);
    }
    parse_tree__write_deps_file__Var_58 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 0)));
    parse_tree__write_deps_file__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 1)));
    parse_tree__write_deps_file__ModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 2)));
    parse_tree__write_deps_file__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 3)));
    parse_tree__write_deps_file__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 4)));
    parse_tree__write_deps_file__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 5)));
    parse_tree__write_deps_file__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 6)));
    parse_tree__write_deps_file__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 7)));
    parse_tree__write_deps_file__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 8)));
    parse_tree__write_deps_file__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 9)));
    parse_tree__write_deps_file__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 10)));
    parse_tree__write_deps_file__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 11)));
    parse_tree__write_deps_file__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 12)));
    parse_tree__write_deps_file__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 13)));
    parse_tree__write_deps_file__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 14)));
    parse_tree__write_deps_file__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 15)));
    parse_tree__write_deps_file__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 16)));
    parse_tree__write_deps_file__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 17)));
    parse_tree__write_deps_file__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 18)));
    parse_tree__write_deps_file__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 19)));
    parse_tree__write_deps_file__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 20)));
    parse_tree__write_deps_file__Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 21)));
    parse_tree__write_deps_file__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 22)));
    parse_tree__write_deps_file__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 23)));
    parse_tree__write_deps_file__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 24)));
    parse_tree__write_deps_file__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 25)));
    parse_tree__write_deps_file__Var_83 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 26)));
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleName_13, (MR_String) ".d", (MR_Integer) 0, &parse_tree__write_deps_file__DependencyFileName_14);
    }
    {
      parse_tree__write_deps_file__Var_29 = mercury__dir__dirname_1_f_0(parse_tree__write_deps_file__DependencyFileName_14);
    }
    {
      mercury__io__make_temp_file_6_p_0(parse_tree__write_deps_file__Var_29, (MR_String) "tmp_d", (MR_String) "", &parse_tree__write_deps_file__TmpDependencyFileNameRes_15);
    }
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__TmpDependencyFileNameRes_15)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__write_deps_file__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__TmpDependencyFileNameRes_15, (MR_Integer) 0)));
        MR_String parse_tree__write_deps_file__Message_17;
        MR_String parse_tree__write_deps_file__Var_53;

        {
          parse_tree__write_deps_file__Var_53 = mercury__io__error_message_1_f_0(parse_tree__write_deps_file__Error_16);
        }
        {
          parse_tree__write_deps_file__Message_17 = mercury__string__f_43_43_2_f_0((MR_String) "Could not create temporary file: ", parse_tree__write_deps_file__Var_53);
        }
        {
          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_17);
        }
      }
    else
      {
        MR_String parse_tree__write_deps_file__TmpDependencyFileName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__TmpDependencyFileNameRes_15, (MR_Integer) 0)));
        MR_Word parse_tree__write_deps_file__Result_19;

        {
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% Writing auto-dependency file \140");
        }
        {
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, parse_tree__write_deps_file__DependencyFileName_14);
        }
        {
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "\'...");
        }
        {
          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
        }
        {
          mercury__io__open_output_4_p_0(parse_tree__write_deps_file__TmpDependencyFileName_18, &parse_tree__write_deps_file__Result_19);
        }
        if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result_19)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word parse_tree__write_deps_file__IOError_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result_19, (MR_Integer) 0)));
            MR_String parse_tree__write_deps_file__IOErrorMessage_21;
            MR_Word parse_tree__write_deps_file__Var_44;
            MR_Word parse_tree__write_deps_file__Var_46;
            MR_Word parse_tree__write_deps_file__Var_47;
            MR_Word parse_tree__write_deps_file__Var_49;
            MR_String parse_tree__write_deps_file__Message_55;

            {
              libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
            }
            {
              libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
            }
            {
              mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_20, &parse_tree__write_deps_file__IOErrorMessage_21);
            }
            {
              parse_tree__write_deps_file__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_49, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_21));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__write_deps_file__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_47, 0) = ((MR_Box) ((MR_String) "\' for output: "));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_47, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_49));
            }
            {
              parse_tree__write_deps_file__Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_46, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpDependencyFileName_18));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_46, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_47));
            }
            {
              parse_tree__write_deps_file__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_44, 0) = ((MR_Box) ((MR_String) "error opening temporary file \140"));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_44, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_46));
            }
            {
              mercury__string__append_list_2_p_0(parse_tree__write_deps_file__Var_44, &parse_tree__write_deps_file__Message_55);
            }
            {
              libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_55);
            }
          }
        else
          {
            MR_Word parse_tree__write_deps_file__DepStream_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Result_19, (MR_Integer) 0)));

            {
              parse_tree__write_deps_file__do_write_dependency_file_9_p_0(parse_tree__write_deps_file__DepStream_22, parse_tree__write_deps_file__DependencyFileName_14, parse_tree__write_deps_file__TmpDependencyFileName_18, parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleAndImports_8, parse_tree__write_deps_file__AllDeps_9, parse_tree__write_deps_file__MaybeTransOptDeps_10);
            }
          }
      }
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__write_deps_file__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module parse_tree.write_deps_file. */
