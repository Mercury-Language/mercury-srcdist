/*
** Automatically generated from `write_deps_file.m'
** by the Mercury compiler,
** version rotd-2017-08-08
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
#include "libs.mmakefiles.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"



struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s {
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__DepsMap_17;
  MR_bool parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded;
  jmp_buf parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__commit_0;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_377_377;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_89;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_90;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_41;
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv1_Var_41;
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv0_Var_89;
};


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__cord__pti_cord_1__plain_libs__mmakefiles__type_ctor_info_mmake_fragment_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__write_deps_file__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0;

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1171__1_5_p_0(
  MR_Word parse_tree__write_deps_file__Globals_9,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_130,
  MR_String * parse_tree__write_deps_file__LambdaHeadVar__2_131);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1140__1_2_p_0(
  MR_Word parse_tree__write_deps_file__DepsMap_12,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_117);

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1097__1_4_p_0(
  MR_Word parse_tree__write_deps_file__DepsGraph_8,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_15,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__2_16,
  MR_Word * parse_tree__write_deps_file__LambdaHeadVar__3_17);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1068__1_2_p_0(
  MR_Word parse_tree__write_deps_file__ModuleName_22,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_47);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_d_file__751__1_3_p_0(
  MR_Word parse_tree__write_deps_file__SourceFileModuleName_16,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_517,
  MR_Word * parse_tree__write_deps_file__LambdaHeadVar__2_518);

static void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_mmake_var_0_0(
  MR_Word * parse_tree__write_deps_file__HeadVar__1_1,
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
  MR_Word parse_tree__write_deps_file__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0(
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
  MR_Word parse_tree__write_deps_file__HeadVar__2_2);

static MR_String MR_CALL 
parse_tree__write_deps_file__add_suffix_2_f_0(
  MR_String parse_tree__write_deps_file__Suffix_4,
  MR_String parse_tree__write_deps_file__Str_5);

static void MR_CALL 
parse_tree__write_deps_file__compare_module_names_3_p_0(
  MR_Word parse_tree__write_deps_file__Sym1_4,
  MR_Word parse_tree__write_deps_file__Sym2_5,
  MR_Word * parse_tree__write_deps_file__Result_6);

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

static MR_String MR_CALL 
parse_tree__write_deps_file__remove_suffix_files_cmd_2_f_0(
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_4,
  MR_String parse_tree__write_deps_file__Extension_5);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_8_p_0(
  MR_Word parse_tree__write_deps_file__Globals_9,
  MR_Word parse_tree__write_deps_file__ModuleName_10,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_11,
  MR_Word parse_tree__write_deps_file__HeadVar__4_4,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_19,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_20);

static void MR_CALL 
parse_tree__write_deps_file__construct_subdirs_shorthand_rule_6_p_0(
  MR_Word parse_tree__write_deps_file__Globals_7,
  MR_Word parse_tree__write_deps_file__ModuleName_8,
  MR_String parse_tree__write_deps_file__Ext_9,
  MR_Word * parse_tree__write_deps_file__MmakeRule_10);

static MR_String MR_CALL 
parse_tree__write_deps_file__foreign_include_file_path_name_2_f_0(
  MR_String parse_tree__write_deps_file__SourceFileName_4,
  MR_Word parse_tree__write_deps_file__IncludeFile_5);

static void MR_CALL 
parse_tree__write_deps_file__gather_foreign_import_deps_7_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4);

static void MR_CALL 
parse_tree__write_deps_file__gather_foreign_import_deps_7_p_0(
  MR_Word parse_tree__write_deps_file__Globals_8,
  MR_String parse_tree__write_deps_file__ForeignImportExt_9,
  MR_Word parse_tree__write_deps_file__ForeignImportedModuleNames_10,
  MR_String parse_tree__write_deps_file__ForeignImportTarget_11,
  MR_Word * parse_tree__write_deps_file__MmakeRule_12);

static void MR_CALL 
parse_tree__write_deps_file__gather_nested_deps_7_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4);

static void MR_CALL 
parse_tree__write_deps_file__gather_nested_deps_7_p_0(
  MR_Word parse_tree__write_deps_file__Globals_8,
  MR_Word parse_tree__write_deps_file__ModuleName_9,
  MR_Word parse_tree__write_deps_file__NestedDeps_10,
  MR_String parse_tree__write_deps_file__Ext_11,
  MR_Word * parse_tree__write_deps_file__MmakeRule_12);

static void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_8_p_0(
  MR_Word parse_tree__write_deps_file__Globals_9,
  MR_String parse_tree__write_deps_file__SourceFileName_10,
  MR_Word parse_tree__write_deps_file__ModuleName_11,
  MR_Word parse_tree__write_deps_file__DepsMap_12,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_45,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_46);

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0(
  MR_Word parse_tree__write_deps_file__Globals_18,
  MR_Word parse_tree__write_deps_file__ModuleName_19,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_20,
  MR_String parse_tree__write_deps_file__ExeFileName_21,
  MR_String parse_tree__write_deps_file__InitCFileName_22,
  MR_String parse_tree__write_deps_file__InitObjFileName_23,
  MR_String parse_tree__write_deps_file__InitPicObjFileName_24,
  MR_String parse_tree__write_deps_file__InitFileName_25,
  MR_String parse_tree__write_deps_file__LibFileName_26,
  MR_String parse_tree__write_deps_file__SharedLibFileName_27,
  MR_String parse_tree__write_deps_file__JarFileName_28,
  MR_String parse_tree__write_deps_file__DepFileName_29,
  MR_String parse_tree__write_deps_file__DvFileName_30,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_41,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_42);

static MR_String MR_CALL 
parse_tree__write_deps_file__remove_files_cmd_1_f_0(
  MR_Word parse_tree__write_deps_file__Files_3);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_7_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box parse_tree__write_deps_file__wrapper_arg_4,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_5);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_7_p_0(
  MR_Word parse_tree__write_deps_file__Globals_8,
  MR_Word parse_tree__write_deps_file__ModuleName_9,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_10,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_13,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_14);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_1(
  void * parse_tree__write_deps_file__env_ptr_arg);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_3(
  void * parse_tree__write_deps_file__env_ptr_arg);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_2(
  void * parse_tree__write_deps_file__env_ptr_arg);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_4(
  void * parse_tree__write_deps_file__env_ptr_arg);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0(
  MR_Word parse_tree__write_deps_file__Globals_15,
  MR_Word parse_tree__write_deps_file__ModuleName_16,
  MR_Word parse_tree__write_deps_file__DepsMap_17,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_18,
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_19,
  MR_Word parse_tree__write_deps_file__Intermod_20,
  MR_Word parse_tree__write_deps_file__TransOpt_21,
  MR_Word parse_tree__write_deps_file__MaybeModuleDepsVarPair_22,
  MR_Word parse_tree__write_deps_file__MaybeOptsVarPair_23,
  MR_Word parse_tree__write_deps_file__MaybeTransOptsVarPair_24,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_63,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_64);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_init_targets_11_p_0(
  MR_Word parse_tree__write_deps_file__Globals_12,
  MR_Word parse_tree__write_deps_file__ModuleName_13,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_14,
  MR_String parse_tree__write_deps_file__InitCFileName_15,
  MR_String parse_tree__write_deps_file__InitFileName_16,
  MR_String * parse_tree__write_deps_file__DepFileName_17,
  MR_String * parse_tree__write_deps_file__DvFileName_18,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_34,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_35);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_exec_library_targets_15_p_0(
  MR_Word parse_tree__write_deps_file__Globals_16,
  MR_Word parse_tree__write_deps_file__ModuleName_17,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_18,
  MR_String parse_tree__write_deps_file__InitFileName_19,
  MR_String parse_tree__write_deps_file__InitObjFileName_20,
  MR_Word parse_tree__write_deps_file__MaybeOptsVar_21,
  MR_Word parse_tree__write_deps_file__MaybeTransOptsVar_22,
  MR_String * parse_tree__write_deps_file__ExeFileName_23,
  MR_String * parse_tree__write_deps_file__JarFileName_24,
  MR_String * parse_tree__write_deps_file__LibFileName_25,
  MR_String * parse_tree__write_deps_file__SharedLibFileName_26,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_66,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_67);

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_6(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_5(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_4(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_3(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_2(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0(
  MR_Word parse_tree__write_deps_file__Globals_9,
  MR_String parse_tree__write_deps_file__SourceFileName_10,
  MR_Word parse_tree__write_deps_file__ModuleName_11,
  MR_Word parse_tree__write_deps_file__DepsMap_12,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_91,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_92);

static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(
  MR_Word parse_tree__write_deps_file__Modules_5,
  MR_Word parse_tree__write_deps_file__DepsMap_6,
  MR_Word * parse_tree__write_deps_file__ExtraLinkObjs_8);

static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_5);

static void MR_CALL 
parse_tree__write_deps_file__select_ok_modules_3_p_0(
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
  MR_Word parse_tree__write_deps_file__DepsMap_2,
  MR_Word * parse_tree__write_deps_file__HeadVar__3_3);

static void MR_CALL 
parse_tree__write_deps_file__get_extra_link_dependencies_6_p_0(
  MR_Word parse_tree__write_deps_file__Globals_1,
  MR_String parse_tree__write_deps_file__Suffix_2,
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
  MR_Word * parse_tree__write_deps_file__HeadVar__4_4);

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
parse_tree__write_deps_file__generate_d_file_8_p_0_6(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4);

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_5(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_4(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_3(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_2(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4);

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0(
  MR_Word parse_tree__write_deps_file__Globals_9,
  MR_Word parse_tree__write_deps_file__ModuleAndImports_10,
  MR_Word parse_tree__write_deps_file__AllDeps_11,
  MR_Word parse_tree__write_deps_file__MaybeTransOptDeps_12,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_196,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_197);

static void MR_CALL 
parse_tree__write_deps_file__get_both_opt_deps_8_p_0(
  MR_Word parse_tree__write_deps_file__Globals_1,
  MR_Word parse_tree__write_deps_file__BuildOptFiles_2,
  MR_Word parse_tree__write_deps_file__IntermodDirs_3,
  MR_Word parse_tree__write_deps_file__HeadVar__4_4,
  MR_Word * parse_tree__write_deps_file__HeadVar__5_5,
  MR_Word * parse_tree__write_deps_file__HeadVar__6_6);

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4);

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(
  MR_Word parse_tree__write_deps_file__Globals_8,
  MR_String parse_tree__write_deps_file__GroupName_9,
  MR_String parse_tree__write_deps_file__Suffix_10,
  MR_Word parse_tree__write_deps_file__Modules_11,
  MR_Word * parse_tree__write_deps_file__Groups_12);

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4);

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(
  MR_Word parse_tree__write_deps_file__Globals_7,
  MR_String parse_tree__write_deps_file__Suffix_8,
  MR_Word parse_tree__write_deps_file__Modules_9,
  MR_Word * parse_tree__write_deps_file__FileNames_10);

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0_10001(
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2);

static void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_mmake_var_0_0_10001(
  MR_Box * parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[116][2];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[8][3];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[3][10];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[6][6];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[3][5];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[1][1];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_7[1][9];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[2][7];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[2][4];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_10[1][8];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_11[1][11];




static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[116][2] = {
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
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) ".java_date")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) ".dir/*.\044O")),
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
    ((MR_Box) ((MR_String) ".dll")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) ".class")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) ".java")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) ".pic_o")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) ".\044O")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) ".c")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[16])))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "done")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "\t} || exit 1; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044(INSTALL_INT_DIR)\"/*.\044\044ext \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \"\044\044dir\" ] || \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \"\044\044dir\" || { \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "\tdir=\"\044(INSTALL_INT_DIR)/Mercury/\044\044{ext}s\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[24])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[19])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044(INSTALL_GRADE_INT_DIR)\"/*.\044\044ext \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \"\044\044dir\" ] || \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \"\044\044dir\" || { \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "\tdir=\"\044(INSTALL_GRADE_INT_DIR)/Mercury/\044\044{ext}s\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[31])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INC_DIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[18])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[33])))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "} || exit 1")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) "\t} && \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_INT_DIR)/Mercury/mihs; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_String) "\t{ [ -d \044(INSTALL_INT_DIR)/Mercury/mihs ] || \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_String) "\044(LN_S) .. \044(INSTALL_INT_DIR)/Mercury/mihs || { \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_String) "rm -rf \044(INSTALL_INT_DIR)/Mercury/mihs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_String) "} || exit 1")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_GRADE_INC_SUBDIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_String) "\t} && \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \044(INSTALL_GRADE_INC_SUBDIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[47])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_String) "\t{ [ -d \044(INSTALL_GRADE_INC_SUBDIR) ] || \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_String) "\044(LN_S) .. \044(INSTALL_GRADE_INC_SUBDIR) || { \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[49])))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_String) "rm -rf \044(INSTALL_GRADE_INC_SUBDIR)")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'.")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[52])))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option.")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[53])))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_String) "done")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_GRADE_INC_DIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[56])))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_String) ".all_trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 59 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[58])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_String) ".all_opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 61 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[60])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[59])))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_String) ".all_int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 63 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[62])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[61])))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_String) ".all_ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 65 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[64])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[63])))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_String) ".classes")),
    ((MR_Box) ((MR_String) ".classes"))
  },
  /* row 67 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[66])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[65])))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_String) ".javas")),
    ((MR_Box) ((MR_String) ".javas"))
  },
  /* row 69 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[68])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[67])))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_String) ".trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 71 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[70])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[69])))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_String) ".opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 73 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[72])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[71])))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_String) ".int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 75 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[74])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[73])))
  },
  /* row 76 */
  {
    ((MR_Box) ((MR_String) ".ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 77 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[76])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[75])))
  },
  /* row 78 */
  {
    ((MR_Box) ((MR_String) ".check")),
    ((MR_Box) ((MR_String) ".errs"))
  },
  /* row 79 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[78])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[77])))
  },
  /* row 80 */
  {
    ((MR_Box) ((MR_String) ".foreign_cs")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 81 */
  {
    ((MR_Box) ((MR_String) ".errs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[80])))
  },
  /* row 82 */
  {
    ((MR_Box) ((MR_String) ".profs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[81])))
  },
  /* row 83 */
  {
    ((MR_Box) ((MR_String) ".javas")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[82])))
  },
  /* row 84 */
  {
    ((MR_Box) ((MR_String) ".useds")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[83])))
  },
  /* row 85 */
  {
    ((MR_Box) ((MR_String) ".java_dates")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[84])))
  },
  /* row 86 */
  {
    ((MR_Box) ((MR_String) ".c_dates")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[85])))
  },
  /* row 87 */
  {
    ((MR_Box) ((MR_String) ".all_pic_os")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[86])))
  },
  /* row 88 */
  {
    ((MR_Box) ((MR_String) ".all_os")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[87])))
  },
  /* row 89 */
  {
    ((MR_Box) ((MR_String) ".mihs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[88])))
  },
  /* row 90 */
  {
    ((MR_Box) ((MR_String) ".cs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[89])))
  },
  /* row 91 */
  {
    ((MR_Box) ((MR_String) ".dirs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[90])))
  },
  /* row 92 */
  {
    ((MR_Box) ((MR_String) ".classes")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 93 */
  {
    ((MR_Box) ((MR_String) ".foreign_dlls")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[92])))
  },
  /* row 94 */
  {
    ((MR_Box) ((MR_String) ".dlls")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[93])))
  },
  /* row 95 */
  {
    ((MR_Box) ((MR_String) ".all_mihs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[94])))
  },
  /* row 96 */
  {
    ((MR_Box) ((MR_String) ".all_mhs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[95])))
  },
  /* row 97 */
  {
    ((MR_Box) ((MR_String) ".module_deps")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[96])))
  },
  /* row 98 */
  {
    ((MR_Box) ((MR_String) ".ds")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[97])))
  },
  /* row 99 */
  {
    ((MR_Box) ((MR_String) ".imdgs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[98])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_String) ".requests")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[99])))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_String) ".analysiss")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[100])))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_String) ".trans_opts")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[101])))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_String) ".opts")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_String) ".int3s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_String) ".all_int0s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_String) ".ints")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[105])))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_String) ".trans_opt_dates")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[106])))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_String) ".optdates")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_String) ".date3s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[108])))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_String) ".date0s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_String) ".dates")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[110])))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE)")),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_String) "\044(EXT_FOR_SHARED_LIB)")),
    ((MR_Box) ((MR_String) "\044(A)"))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_String) "install_lib_dirs")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_String) "install_grade_dirs")),
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
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[6])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0])),
    ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[2])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[5])),
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
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0)),
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
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

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "java"))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_7[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
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
    ((MR_Box) (&parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
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

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[4])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_8_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".m"))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[4])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_8_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".err"))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_10[1][8] = {
  /* row 0 */
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

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_11[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__write_deps_file__cord__pti_cord_1__plain_libs__mmakefiles__type_ctor_info_mmake_fragment_0)),
    ((MR_Box) (&parse_tree__write_deps_file__cord__pti_cord_1__plain_libs__mmakefiles__type_ctor_info_mmake_fragment_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

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

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__cord__pti_cord_1__plain_libs__mmakefiles__type_ctor_info_mmake_fragment_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__write_deps_file__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &parse_tree__write_deps_file__list__ti_list_1builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

const MR_TypeCtorInfo_Struct parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_maybe_mmake_var_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0_10001)),
  ((MR_Box) (parse_tree__write_deps_file____Compare____maybe_mmake_var_0_0_10001)),
  (MR_String) "parse_tree.write_deps_file",
  (MR_String) "maybe_mmake_var",
  {     NULL },
  {     (MR_PseudoTypeInfo) &parse_tree__write_deps_file__pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1171__1_5_p_0(
  MR_Word parse_tree__write_deps_file__Globals_9,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_130,
  MR_String * parse_tree__write_deps_file__LambdaHeadVar__2_131)
{
  {
    MR_String parse_tree__write_deps_file__F0_45;
    MR_Word parse_tree__write_deps_file__M_460 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__LambdaHeadVar__1_130, (MR_Integer) 0)));
    MR_String parse_tree__write_deps_file__E_461 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__LambdaHeadVar__1_130, (MR_Integer) 1)));

    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 0, parse_tree__write_deps_file__E_461, parse_tree__write_deps_file__M_460, &parse_tree__write_deps_file__F0_45);
    *parse_tree__write_deps_file__LambdaHeadVar__2_131 = mercury__string__f_43_43_2_f_0((MR_String) "\044(os_subdir)", parse_tree__write_deps_file__F0_45);
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1140__1_2_p_0(
  MR_Word parse_tree__write_deps_file__DepsMap_12,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_117)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_502_502 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word parse_tree__write_deps_file__ModuleImports_32;
    MR_Word parse_tree__write_deps_file__Var_118;
    MR_Word parse_tree__write_deps_file__Var_119;
    MR_Box parse_tree__write_deps_file__conv0_Var_118;
    MR_Word parse_tree__write_deps_file__Var_31;
    MR_String parse_tree__write_deps_file__Var_464;
    MR_Word parse_tree__write_deps_file__Var_465;
    MR_Word parse_tree__write_deps_file__Var_466;
    MR_Word parse_tree__write_deps_file__Var_467;
    MR_Word parse_tree__write_deps_file__Var_468;
    MR_Word parse_tree__write_deps_file__Var_469;
    MR_Word parse_tree__write_deps_file__Var_470;
    MR_Word parse_tree__write_deps_file__Var_471;
    MR_Word parse_tree__write_deps_file__Var_472;
    MR_Word parse_tree__write_deps_file__Var_473;
    MR_Word parse_tree__write_deps_file__Var_474;
    MR_Word parse_tree__write_deps_file__Var_475;
    MR_Word parse_tree__write_deps_file__Var_476;
    MR_Word parse_tree__write_deps_file__Var_477;
    MR_Word parse_tree__write_deps_file__Var_478;
    MR_Word parse_tree__write_deps_file__Var_479;
    MR_Word parse_tree__write_deps_file__Var_480;
    MR_Word parse_tree__write_deps_file__Var_481;
    MR_Word parse_tree__write_deps_file__Var_482;
    MR_Word parse_tree__write_deps_file__Var_483;
    MR_Word parse_tree__write_deps_file__Var_484;
    MR_Word parse_tree__write_deps_file__Var_485;
    MR_Word parse_tree__write_deps_file__Var_486;
    MR_Word parse_tree__write_deps_file__Var_487;
    MR_Word parse_tree__write_deps_file__Var_488;
    MR_String parse_tree__write_deps_file__Var_489;

    mercury__map__lookup_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_502_502, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_12, ((MR_Box) (parse_tree__write_deps_file__LambdaHeadVar__1_117)), &parse_tree__write_deps_file__conv0_Var_118);
    parse_tree__write_deps_file__Var_118 = ((MR_Word) parse_tree__write_deps_file__conv0_Var_118);
    parse_tree__write_deps_file__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_118, (MR_Integer) 0)));
    parse_tree__write_deps_file__ModuleImports_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_118, (MR_Integer) 1)));
    parse_tree__write_deps_file__Var_464 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 0)));
    parse_tree__write_deps_file__Var_465 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 1)));
    parse_tree__write_deps_file__Var_466 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 2)));
    parse_tree__write_deps_file__Var_467 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 3)));
    parse_tree__write_deps_file__Var_468 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 4)));
    parse_tree__write_deps_file__Var_469 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 5)));
    parse_tree__write_deps_file__Var_470 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 6)));
    parse_tree__write_deps_file__Var_471 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 7)));
    parse_tree__write_deps_file__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 8)));
    parse_tree__write_deps_file__Var_472 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 9)));
    parse_tree__write_deps_file__Var_473 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 10)));
    parse_tree__write_deps_file__Var_474 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 11)));
    parse_tree__write_deps_file__Var_475 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 12)));
    parse_tree__write_deps_file__Var_476 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 13)));
    parse_tree__write_deps_file__Var_477 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 14)));
    parse_tree__write_deps_file__Var_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 15)));
    parse_tree__write_deps_file__Var_479 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 16)));
    parse_tree__write_deps_file__Var_480 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 17)));
    parse_tree__write_deps_file__Var_481 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 18)));
    parse_tree__write_deps_file__Var_482 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 19)));
    parse_tree__write_deps_file__Var_483 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 20)));
    parse_tree__write_deps_file__Var_484 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 21)));
    parse_tree__write_deps_file__Var_485 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 22)));
    parse_tree__write_deps_file__Var_486 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 23)));
    parse_tree__write_deps_file__Var_487 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 24)));
    parse_tree__write_deps_file__Var_488 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 25)));
    parse_tree__write_deps_file__Var_489 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 26)));
    parse_tree__write_deps_file__succeeded = mercury__set__non_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_502_502, parse_tree__write_deps_file__Var_119);
    return parse_tree__write_deps_file__succeeded;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1097__1_4_p_0(
  MR_Word parse_tree__write_deps_file__DepsGraph_8,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_15,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__2_16,
  MR_Word * parse_tree__write_deps_file__LambdaHeadVar__3_17)
{
  {
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_23_23 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word parse_tree__write_deps_file__Dep_14;
    MR_Box parse_tree__write_deps_file__conv0_Dep_14;

    mercury__digraph__lookup_vertex_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, parse_tree__write_deps_file__DepsGraph_8, parse_tree__write_deps_file__LambdaHeadVar__1_15, &parse_tree__write_deps_file__conv0_Dep_14);
    parse_tree__write_deps_file__Dep_14 = ((MR_Word) parse_tree__write_deps_file__conv0_Dep_14);
    mercury__set__insert_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_23_23, ((MR_Box) (parse_tree__write_deps_file__Dep_14)), parse_tree__write_deps_file__LambdaHeadVar__2_16, parse_tree__write_deps_file__LambdaHeadVar__3_17);
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1068__1_2_p_0(
  MR_Word parse_tree__write_deps_file__ModuleName_22,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_47)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;

    parse_tree__write_deps_file__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(parse_tree__write_deps_file__ModuleName_22, parse_tree__write_deps_file__LambdaHeadVar__1_47);
    parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
    return parse_tree__write_deps_file__succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_d_file__751__1_3_p_0(
  MR_Word parse_tree__write_deps_file__SourceFileModuleName_16,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_517,
  MR_Word * parse_tree__write_deps_file__LambdaHeadVar__2_518)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_String parse_tree__write_deps_file__Var_519;

    *parse_tree__write_deps_file__LambdaHeadVar__2_518 = parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(parse_tree__write_deps_file__LambdaHeadVar__1_517, parse_tree__write_deps_file__SourceFileModuleName_16);
    parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) *parse_tree__write_deps_file__LambdaHeadVar__2_518)) == (MR_mktag((MR_Integer) 0)));
    if (parse_tree__write_deps_file__succeeded)
    {
      parse_tree__write_deps_file__Var_519 = ((MR_String) (MR_hl_field(MR_mktag(0), *parse_tree__write_deps_file__LambdaHeadVar__2_518, (MR_Integer) 0)));
      parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__Var_519, (MR_String) "mercury") == 0);
    }
    parse_tree__write_deps_file__succeeded = !(parse_tree__write_deps_file__succeeded);
    return parse_tree__write_deps_file__succeeded;
  }
}

static void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_mmake_var_0_0(
  MR_Word * parse_tree__write_deps_file__HeadVar__1_1,
  MR_Word parse_tree__write_deps_file__HeadVar__2_2,
  MR_Word parse_tree__write_deps_file__HeadVar__3_3)
{
  {
    MR_Word parse_tree__write_deps_file__Cast_HeadVar1_4 = parse_tree__write_deps_file__HeadVar__2_2;
    MR_Word parse_tree__write_deps_file__Cast_HeadVar2_5 = parse_tree__write_deps_file__HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_2[4], parse_tree__write_deps_file__HeadVar__1_1, ((MR_Box) (parse_tree__write_deps_file__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__write_deps_file__Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0(
  MR_Word parse_tree__write_deps_file__HeadVar__1_1,
  MR_Word parse_tree__write_deps_file__HeadVar__2_2)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__Cast_HeadVar1_3 = parse_tree__write_deps_file__HeadVar__1_1;
    MR_Word parse_tree__write_deps_file__Cast_HeadVar2_4 = parse_tree__write_deps_file__HeadVar__2_2;

    parse_tree__write_deps_file__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_2[4], ((MR_Box) (parse_tree__write_deps_file__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__write_deps_file__Cast_HeadVar2_4)));
    return parse_tree__write_deps_file__succeeded;
  }
}

static MR_String MR_CALL 
parse_tree__write_deps_file__add_suffix_2_f_0(
  MR_String parse_tree__write_deps_file__Suffix_4,
  MR_String parse_tree__write_deps_file__Str_5)
{
  {
    MR_String parse_tree__write_deps_file__HeadVar__3_3;

    parse_tree__write_deps_file__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__Str_5, parse_tree__write_deps_file__Suffix_4);
    return parse_tree__write_deps_file__HeadVar__3_3;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__compare_module_names_3_p_0(
  MR_Word parse_tree__write_deps_file__Sym1_4,
  MR_Word parse_tree__write_deps_file__Sym2_5,
  MR_Word * parse_tree__write_deps_file__Result_6)
{
  {
    MR_String parse_tree__write_deps_file__Str1_7;
    MR_String parse_tree__write_deps_file__Str2_8;

    parse_tree__write_deps_file__Str1_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__Sym1_4);
    parse_tree__write_deps_file__Str2_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__Sym2_5);
    mercury__private_builtin__builtin_compare_string_3_p_0(parse_tree__write_deps_file__Result_6, parse_tree__write_deps_file__Str1_7, parse_tree__write_deps_file__Str2_8);
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

    parse_tree__prog_out__write_sym_name_3_p_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0(
  MR_Word parse_tree__write_deps_file__Stream_5,
  MR_Word parse_tree__write_deps_file__SCC0_6)
{
  {
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_14_14 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word parse_tree__write_deps_file__SCC_8;

    mercury__set__to_sorted_list_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_14_14, parse_tree__write_deps_file__SCC0_6, &parse_tree__write_deps_file__SCC_8);
    mercury__io__write_list_6_p_0(parse_tree__write_deps_file__TypeCtorInfo_14_14, parse_tree__write_deps_file__Stream_5, parse_tree__write_deps_file__SCC_8, (MR_String) "\n", (MR_Word) &parse_tree__write_deps_file_scalar_common_2[7]);
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

    mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_4, ((MR_Box) (parse_tree__write_deps_file__ModuleName_5)), &parse_tree__write_deps_file__conv0_Deps_7);
    parse_tree__write_deps_file__Deps_7 = ((MR_Word) parse_tree__write_deps_file__conv0_Deps_7);
    parse_tree__write_deps_file__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Deps_7, (MR_Integer) 0)));
    parse_tree__write_deps_file__ModuleAndImports_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Deps_7, (MR_Integer) 1)));
    parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(parse_tree__write_deps_file__ModuleAndImports_9, &parse_tree__write_deps_file__SourceFileName_10);
    parse_tree__write_deps_file__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__write_deps_file__SourceFileName_10, (MR_String) ".m", &parse_tree__write_deps_file__SourceFileBase_11);
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

static MR_String MR_CALL 
parse_tree__write_deps_file__remove_suffix_files_cmd_2_f_0(
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_4,
  MR_String parse_tree__write_deps_file__Extension_5)
{
  {
    MR_String parse_tree__write_deps_file__HeadVar__3_3;
    MR_String parse_tree__write_deps_file__Var_13;
    MR_String parse_tree__write_deps_file__Var_14;

    parse_tree__write_deps_file__Var_13 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__Extension_5, (MR_String) ") | xargs rm -f");
    parse_tree__write_deps_file__Var_14 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_4, parse_tree__write_deps_file__Var_13);
    parse_tree__write_deps_file__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "-echo \044(", parse_tree__write_deps_file__Var_14);
    return parse_tree__write_deps_file__HeadVar__3_3;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_8_p_0(
  MR_Word parse_tree__write_deps_file__Globals_9,
  MR_Word parse_tree__write_deps_file__ModuleName_10,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_11,
  MR_Word parse_tree__write_deps_file__HeadVar__4_4,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_19,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_20)
{
  {
    MR_String parse_tree__write_deps_file__Extension_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 0)));
    MR_String parse_tree__write_deps_file__VarExtension_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 1)));
    MR_String parse_tree__write_deps_file__TargetName_16;
    MR_String parse_tree__write_deps_file__Source_17;
    MR_Word parse_tree__write_deps_file__MmakeRule_18;
    MR_String parse_tree__write_deps_file__Var_31;
    MR_String parse_tree__write_deps_file__Var_33;
    MR_Word parse_tree__write_deps_file__Var_35;
    MR_String parse_tree__write_deps_file__Var_40;
    MR_String parse_tree__write_deps_file__Var_41;

    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, parse_tree__write_deps_file__Extension_12, parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__TargetName_16);
    parse_tree__write_deps_file__Var_40 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__VarExtension_13, (MR_String) ")");
    parse_tree__write_deps_file__Var_41 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_11, parse_tree__write_deps_file__Var_40);
    parse_tree__write_deps_file__Source_17 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_41);
    parse_tree__write_deps_file__Var_33 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__Extension_12, parse_tree__write_deps_file__VarExtension_13);
    parse_tree__write_deps_file__Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "collective_target_", parse_tree__write_deps_file__Var_33);
    {
      parse_tree__write_deps_file__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_35, 0) = ((MR_Box) (parse_tree__write_deps_file__Source_17));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__MmakeRule_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRule_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRule_18, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_31));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRule_18, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRule_18, 3) = ((MR_Box) (parse_tree__write_deps_file__TargetName_16));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRule_18, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_35));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRule_18, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeRule_18, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_19, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_20);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__construct_subdirs_shorthand_rule_6_p_0(
  MR_Word parse_tree__write_deps_file__Globals_7,
  MR_Word parse_tree__write_deps_file__ModuleName_8,
  MR_String parse_tree__write_deps_file__Ext_9,
  MR_Word * parse_tree__write_deps_file__MmakeRule_10)
{
  {
    MR_String parse_tree__write_deps_file__ModuleStr_12;
    MR_String parse_tree__write_deps_file__ShorthandTarget_13;
    MR_String parse_tree__write_deps_file__Target_14;
    MR_String parse_tree__write_deps_file__Var_19;
    MR_Word parse_tree__write_deps_file__Var_22;

    parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__write_deps_file__ModuleName_8, &parse_tree__write_deps_file__ModuleStr_12);
    parse_tree__write_deps_file__ShorthandTarget_13 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleStr_12, parse_tree__write_deps_file__Ext_9);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 1, parse_tree__write_deps_file__Ext_9, parse_tree__write_deps_file__ModuleName_8, &parse_tree__write_deps_file__Target_14);
    parse_tree__write_deps_file__Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "subdir_shorthand_for_", parse_tree__write_deps_file__Ext_9);
    {
      parse_tree__write_deps_file__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_22, 0) = ((MR_Box) (parse_tree__write_deps_file__Target_14));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__write_deps_file__MmakeRule_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_19));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__write_deps_file__ShorthandTarget_13));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_22));
      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static MR_String MR_CALL 
parse_tree__write_deps_file__foreign_include_file_path_name_2_f_0(
  MR_String parse_tree__write_deps_file__SourceFileName_4,
  MR_Word parse_tree__write_deps_file__IncludeFile_5)
{
  {
    MR_String parse_tree__write_deps_file__IncludePath_6;
    MR_String parse_tree__write_deps_file__IncludeFileName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IncludeFile_5, (MR_Integer) 1)));
    MR_Word parse_tree__write_deps_file___Lang_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IncludeFile_5, (MR_Integer) 0)));

    parse_tree__file_names__make_include_file_path_3_p_0(parse_tree__write_deps_file__SourceFileName_4, parse_tree__write_deps_file__IncludeFileName_8, &parse_tree__write_deps_file__IncludePath_6);
    return parse_tree__write_deps_file__IncludePath_6;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__gather_foreign_import_deps_7_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_String parse_tree__write_deps_file__conv0_HeadVar__5_5;

    parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv0_HeadVar__5_5);
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__gather_foreign_import_deps_7_p_0(
  MR_Word parse_tree__write_deps_file__Globals_8,
  MR_String parse_tree__write_deps_file__ForeignImportExt_9,
  MR_Word parse_tree__write_deps_file__ForeignImportedModuleNames_10,
  MR_String parse_tree__write_deps_file__ForeignImportTarget_11,
  MR_Word * parse_tree__write_deps_file__MmakeRule_12)
{
  {
    MR_Word parse_tree__write_deps_file__ForeignImportedFileNames_14;
    MR_String parse_tree__write_deps_file__Var_18;
    MR_Word parse_tree__write_deps_file__Var_29;
    MR_Box parse_tree__write_deps_file__conv1_STATE_VARIABLE_IO_16;

    {
      parse_tree__write_deps_file__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_29, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_29, 1) = ((MR_Box) (parse_tree__write_deps_file__gather_foreign_import_deps_7_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_29, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_8));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_29, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_29, 5) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportExt_9));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Var_29, parse_tree__write_deps_file__ForeignImportedModuleNames_10, &parse_tree__write_deps_file__ForeignImportedFileNames_14, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv1_STATE_VARIABLE_IO_16);
    parse_tree__write_deps_file__Var_18 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_deps_for_", parse_tree__write_deps_file__ForeignImportExt_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__write_deps_file__MmakeRule_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_18));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportTarget_11));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportedFileNames_14));
      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__gather_nested_deps_7_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_String parse_tree__write_deps_file__conv0_HeadVar__5_5;

    parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv0_HeadVar__5_5);
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__gather_nested_deps_7_p_0(
  MR_Word parse_tree__write_deps_file__Globals_8,
  MR_Word parse_tree__write_deps_file__ModuleName_9,
  MR_Word parse_tree__write_deps_file__NestedDeps_10,
  MR_String parse_tree__write_deps_file__Ext_11,
  MR_Word * parse_tree__write_deps_file__MmakeRule_12)
{
  {
    MR_String parse_tree__write_deps_file__ExtName_14;
    MR_Word parse_tree__write_deps_file__NestedDepsFileNames_15;
    MR_String parse_tree__write_deps_file__Var_21;
    MR_Word parse_tree__write_deps_file__Var_32;
    MR_Box parse_tree__write_deps_file__conv1_STATE_VARIABLE_IO_17;

    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 1, parse_tree__write_deps_file__Ext_11, parse_tree__write_deps_file__ModuleName_9, &parse_tree__write_deps_file__ExtName_14);
    {
      parse_tree__write_deps_file__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_32, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_32, 1) = ((MR_Box) (parse_tree__write_deps_file__gather_nested_deps_7_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_32, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_8));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_32, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_32, 5) = ((MR_Box) (parse_tree__write_deps_file__Ext_11));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Var_32, parse_tree__write_deps_file__NestedDeps_10, &parse_tree__write_deps_file__NestedDepsFileNames_15, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv1_STATE_VARIABLE_IO_17);
    parse_tree__write_deps_file__Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "nested_deps_for_", parse_tree__write_deps_file__Ext_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__write_deps_file__MmakeRule_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_21));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__write_deps_file__ExtName_14));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__write_deps_file__NestedDepsFileNames_15));
      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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

    parse_tree__write_deps_file__write_module_scc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
  }
}

void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0(
  MR_Word parse_tree__write_deps_file__Globals_6,
  MR_Word parse_tree__write_deps_file__Module_7,
  MR_Word parse_tree__write_deps_file__DepsOrdering_8)
{
  {
    MR_Word parse_tree__write_deps_file__Order_10;
    MR_Word parse_tree__write_deps_file__Verbose_11;

    libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_6, (MR_Integer) 104, &parse_tree__write_deps_file__Order_10);
    libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_6, (MR_Integer) 56, &parse_tree__write_deps_file__Verbose_11);
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

          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_6, (MR_Integer) 0, (MR_String) ".order", parse_tree__write_deps_file__Module_7, &parse_tree__write_deps_file__OrdFileName_12);
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) "% Creating module order file \140");
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, parse_tree__write_deps_file__OrdFileName_12);
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) "\'...");
          mercury__io__open_output_4_p_0(parse_tree__write_deps_file__OrdFileName_12, &parse_tree__write_deps_file__OrdResult_13);
          if (((MR_tag((MR_Word) parse_tree__write_deps_file__OrdResult_13)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word parse_tree__write_deps_file__IOError_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__OrdResult_13, (MR_Integer) 0)));
            MR_String parse_tree__write_deps_file__IOErrorMessage_16;
            MR_String parse_tree__write_deps_file__OrdMessage_17;
            MR_Word parse_tree__write_deps_file__Var_34;
            MR_Word parse_tree__write_deps_file__Var_36;
            MR_Word parse_tree__write_deps_file__Var_37;
            MR_Word parse_tree__write_deps_file__Var_39;

            libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) " failed.\n");
            libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_11);
            mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_15, &parse_tree__write_deps_file__IOErrorMessage_16);
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
            mercury__string__append_list_2_p_0(parse_tree__write_deps_file__Var_34, &parse_tree__write_deps_file__OrdMessage_17);
            libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__OrdMessage_17);
          }
          else
          {
            MR_Word parse_tree__write_deps_file__OrdStream_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OrdResult_13, (MR_Integer) 0)));
            MR_Word parse_tree__write_deps_file__Var_43;

            {
              parse_tree__write_deps_file__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_43, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[1]));
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_43, 1) = ((MR_Box) (parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1));
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_43, 3) = ((MR_Box) (parse_tree__write_deps_file__OrdStream_14));
            }
            mercury__io__write_list_6_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], parse_tree__write_deps_file__OrdStream_14, parse_tree__write_deps_file__DepsOrdering_8, (MR_String) "\n\n", parse_tree__write_deps_file__Var_43);
            mercury__io__close_output_3_p_0(parse_tree__write_deps_file__OrdStream_14);
            libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_11, (MR_String) " done.\n");
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
    MR_Word parse_tree__write_deps_file__Verbose_12;
    MR_String parse_tree__write_deps_file__DepFileName_13;
    MR_Word parse_tree__write_deps_file__DepResult_14;

    libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 56, &parse_tree__write_deps_file__Verbose_12);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 0, (MR_String) ".dep", parse_tree__write_deps_file__ModuleName_9, &parse_tree__write_deps_file__DepFileName_13);
    libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, parse_tree__write_deps_file__DepFileName_13);
    libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "\'...\n");
    mercury__io__open_output_4_p_0(parse_tree__write_deps_file__DepFileName_13, &parse_tree__write_deps_file__DepResult_14);
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__DepResult_14)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word parse_tree__write_deps_file__IOError_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DepResult_14, (MR_Integer) 0)));
      MR_String parse_tree__write_deps_file__IOErrorMessage_19;
      MR_String parse_tree__write_deps_file__DepMessage_20;
      MR_Word parse_tree__write_deps_file__Var_36;
      MR_Word parse_tree__write_deps_file__Var_38;
      MR_Word parse_tree__write_deps_file__Var_39;
      MR_Word parse_tree__write_deps_file__Var_41;

      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
      mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_18, &parse_tree__write_deps_file__IOErrorMessage_19);
      {
        parse_tree__write_deps_file__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_41, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_19));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_39, 0) = ((MR_Box) ((MR_String) "\' for output: "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_39, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_41));
      }
      {
        parse_tree__write_deps_file__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_38, 0) = ((MR_Box) (parse_tree__write_deps_file__DepFileName_13));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_38, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_39));
      }
      {
        parse_tree__write_deps_file__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_36, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_36, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_38));
      }
      mercury__string__append_list_2_p_0(parse_tree__write_deps_file__Var_36, &parse_tree__write_deps_file__DepMessage_20);
      libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__DepMessage_20);
    }
    else
    {
      MR_Word parse_tree__write_deps_file__DepStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__DepResult_14, (MR_Integer) 0)));
      MR_Word parse_tree__write_deps_file__MmakeFile0_16;
      MR_Word parse_tree__write_deps_file__MmakeFile_17;

      libs__mmakefiles__start_mmakefile_1_p_0(&parse_tree__write_deps_file__MmakeFile0_16);
      parse_tree__write_deps_file__generate_dep_file_8_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SourceFileName_8, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__DepsMap_10, parse_tree__write_deps_file__MmakeFile0_16, &parse_tree__write_deps_file__MmakeFile_17);
      libs__mmakefiles__end_mmakefile_4_p_0(parse_tree__write_deps_file__DepStream_15, parse_tree__write_deps_file__MmakeFile_17);
      mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DepStream_15);
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% done.\n");
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_8_p_0(
  MR_Word parse_tree__write_deps_file__Globals_9,
  MR_String parse_tree__write_deps_file__SourceFileName_10,
  MR_Word parse_tree__write_deps_file__ModuleName_11,
  MR_Word parse_tree__write_deps_file__DepsMap_12,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_45,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_46)
{
  {
    MR_String parse_tree__write_deps_file__ModuleNameString_15;
    MR_String parse_tree__write_deps_file__Version_16;
    MR_String parse_tree__write_deps_file__FullArch_17;
    MR_Word parse_tree__write_deps_file__MmakeStartComment_18;
    MR_String parse_tree__write_deps_file__ModuleMakeVarName_19;
    MR_String parse_tree__write_deps_file__InitFileName_20;
    MR_String parse_tree__write_deps_file__InitCFileName_21;
    MR_String parse_tree__write_deps_file__InitObjFileName_22;
    MR_String parse_tree__write_deps_file__InitPicObjFileName_23;
    MR_Word parse_tree__write_deps_file__MmcMakeDeps_24;
    MR_Word parse_tree__write_deps_file__Intermod_25;
    MR_Word parse_tree__write_deps_file__TransOpt_26;
    MR_Word parse_tree__write_deps_file__MaybeModuleDepsVar_28;
    MR_String parse_tree__write_deps_file__MaybeModuleDepsVarSpace_29;
    MR_Word parse_tree__write_deps_file__MaybeOptsVar_31;
    MR_String parse_tree__write_deps_file__MaybeOptsVarSpace_32;
    MR_Word parse_tree__write_deps_file__MaybeTransOptsVar_34;
    MR_String parse_tree__write_deps_file__MaybeTransOptsVarSpace_35;
    MR_Word parse_tree__write_deps_file__MaybeModuleDepsVarPair_36;
    MR_Word parse_tree__write_deps_file__MaybeOptsVarPair_37;
    MR_Word parse_tree__write_deps_file__MaybeTransOptsVarPair_38;
    MR_String parse_tree__write_deps_file__ExeFileName_39;
    MR_String parse_tree__write_deps_file__JarFileName_40;
    MR_String parse_tree__write_deps_file__LibFileName_41;
    MR_String parse_tree__write_deps_file__SharedLibFileName_42;
    MR_String parse_tree__write_deps_file__DepFileName_43;
    MR_String parse_tree__write_deps_file__DvFileName_44;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_50_50;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_81_81;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_83_83;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_85_85;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_87_87;

    parse_tree__write_deps_file__ModuleNameString_15 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_11);
    mercury__library__version_2_p_0(&parse_tree__write_deps_file__Version_16, &parse_tree__write_deps_file__FullArch_17);
    {
      parse_tree__write_deps_file__MmakeStartComment_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MmakeStartComment_18, 0) = ((MR_Box) ((MR_String) "program dependencies"));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MmakeStartComment_18, 1) = ((MR_Box) (parse_tree__write_deps_file__ModuleNameString_15));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MmakeStartComment_18, 2) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_10));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MmakeStartComment_18, 3) = ((MR_Box) (parse_tree__write_deps_file__Version_16));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MmakeStartComment_18, 4) = ((MR_Box) (parse_tree__write_deps_file__FullArch_17));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeStartComment_18, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_45, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_50_50);
    parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_11, &parse_tree__write_deps_file__ModuleMakeVarName_19);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 0, (MR_String) ".init", parse_tree__write_deps_file__ModuleName_11, &parse_tree__write_deps_file__InitFileName_20);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 0, (MR_String) "_init.c", parse_tree__write_deps_file__ModuleName_11, &parse_tree__write_deps_file__InitCFileName_21);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 0, (MR_String) "_init.\044O", parse_tree__write_deps_file__ModuleName_11, &parse_tree__write_deps_file__InitObjFileName_22);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 0, (MR_String) "_init.pic_o", parse_tree__write_deps_file__ModuleName_11, &parse_tree__write_deps_file__InitPicObjFileName_23);
    libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 128, &parse_tree__write_deps_file__MmcMakeDeps_24);
    libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 332, &parse_tree__write_deps_file__Intermod_25);
    libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 336, &parse_tree__write_deps_file__TransOpt_26);
    switch (parse_tree__write_deps_file__MmcMakeDeps_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__write_deps_file__MaybeModuleDepsVar_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          parse_tree__write_deps_file__MaybeModuleDepsVarSpace_29 = (MR_String) "";
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String parse_tree__write_deps_file__ModuleDepsVar_27;
          MR_String parse_tree__write_deps_file__Var_67;

          parse_tree__write_deps_file__Var_67 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_19, (MR_String) ".module_deps)");
          parse_tree__write_deps_file__ModuleDepsVar_27 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_67);
          {
            parse_tree__write_deps_file__MaybeModuleDepsVar_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeModuleDepsVar_28, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepsVar_27));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeModuleDepsVar_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          parse_tree__write_deps_file__MaybeModuleDepsVarSpace_29 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleDepsVar_27, (MR_String) " ");
        }
        break;
    }
    switch (parse_tree__write_deps_file__Intermod_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__write_deps_file__MaybeOptsVar_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          parse_tree__write_deps_file__MaybeOptsVarSpace_32 = (MR_String) "";
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String parse_tree__write_deps_file__OptsVar_30;
          MR_String parse_tree__write_deps_file__Var_72;

          parse_tree__write_deps_file__Var_72 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_19, (MR_String) ".opts)");
          parse_tree__write_deps_file__OptsVar_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_72);
          {
            parse_tree__write_deps_file__MaybeOptsVar_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeOptsVar_31, 0) = ((MR_Box) (parse_tree__write_deps_file__OptsVar_30));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeOptsVar_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          parse_tree__write_deps_file__MaybeOptsVarSpace_32 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__OptsVar_30, (MR_String) " ");
        }
        break;
    }
    switch (parse_tree__write_deps_file__TransOpt_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__write_deps_file__MaybeTransOptsVar_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          parse_tree__write_deps_file__MaybeTransOptsVarSpace_35 = (MR_String) "";
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String parse_tree__write_deps_file__TransOptsVar_33;
          MR_String parse_tree__write_deps_file__Var_77;

          parse_tree__write_deps_file__Var_77 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_19, (MR_String) ".trans_opts)");
          parse_tree__write_deps_file__TransOptsVar_33 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_77);
          {
            parse_tree__write_deps_file__MaybeTransOptsVar_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeTransOptsVar_34, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptsVar_33));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeTransOptsVar_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          parse_tree__write_deps_file__MaybeTransOptsVarSpace_35 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__TransOptsVar_33, (MR_String) " ");
        }
        break;
    }
    {
      parse_tree__write_deps_file__MaybeModuleDepsVarPair_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MaybeModuleDepsVarPair_36, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeModuleDepsVar_28));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MaybeModuleDepsVarPair_36, 1) = ((MR_Box) (parse_tree__write_deps_file__MaybeModuleDepsVarSpace_29));
    }
    {
      parse_tree__write_deps_file__MaybeOptsVarPair_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MaybeOptsVarPair_37, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVar_31));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MaybeOptsVarPair_37, 1) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVarSpace_32));
    }
    {
      parse_tree__write_deps_file__MaybeTransOptsVarPair_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MaybeTransOptsVarPair_38, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVar_34));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MaybeTransOptsVarPair_38, 1) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVarSpace_35));
    }
    parse_tree__write_deps_file__generate_dep_file_exec_library_targets_15_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ModuleName_11, parse_tree__write_deps_file__ModuleMakeVarName_19, parse_tree__write_deps_file__InitFileName_20, parse_tree__write_deps_file__InitObjFileName_22, parse_tree__write_deps_file__MaybeOptsVar_31, parse_tree__write_deps_file__MaybeTransOptsVar_34, &parse_tree__write_deps_file__ExeFileName_39, &parse_tree__write_deps_file__JarFileName_40, &parse_tree__write_deps_file__LibFileName_41, &parse_tree__write_deps_file__SharedLibFileName_42, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_50_50, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_81_81);
    parse_tree__write_deps_file__generate_dep_file_init_targets_11_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ModuleName_11, parse_tree__write_deps_file__ModuleMakeVarName_19, parse_tree__write_deps_file__InitCFileName_21, parse_tree__write_deps_file__InitFileName_20, &parse_tree__write_deps_file__DepFileName_43, &parse_tree__write_deps_file__DvFileName_44, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_81_81, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_83_83);
    parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ModuleName_11, parse_tree__write_deps_file__DepsMap_12, parse_tree__write_deps_file__ModuleMakeVarName_19, parse_tree__write_deps_file__MmcMakeDeps_24, parse_tree__write_deps_file__Intermod_25, parse_tree__write_deps_file__TransOpt_26, parse_tree__write_deps_file__MaybeModuleDepsVarPair_36, parse_tree__write_deps_file__MaybeOptsVarPair_37, parse_tree__write_deps_file__MaybeTransOptsVarPair_38, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_83_83, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_85_85);
    parse_tree__write_deps_file__generate_dep_file_collective_targets_7_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ModuleName_11, parse_tree__write_deps_file__ModuleMakeVarName_19, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_85_85, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_87_87);
    parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__ModuleName_11, parse_tree__write_deps_file__ModuleMakeVarName_19, parse_tree__write_deps_file__ExeFileName_39, parse_tree__write_deps_file__InitCFileName_21, parse_tree__write_deps_file__InitObjFileName_22, parse_tree__write_deps_file__InitPicObjFileName_23, parse_tree__write_deps_file__InitFileName_20, parse_tree__write_deps_file__LibFileName_41, parse_tree__write_deps_file__SharedLibFileName_42, parse_tree__write_deps_file__JarFileName_40, parse_tree__write_deps_file__DepFileName_43, parse_tree__write_deps_file__DvFileName_44, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_87_87, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_46);
  }
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
{
  {
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_String parse_tree__write_deps_file__conv0_HeadVar__3_3;

    parse_tree__write_deps_file__conv0_HeadVar__3_3 = parse_tree__write_deps_file__remove_suffix_files_cmd_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__3_3));
    return parse_tree__write_deps_file__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0(
  MR_Word parse_tree__write_deps_file__Globals_18,
  MR_Word parse_tree__write_deps_file__ModuleName_19,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_20,
  MR_String parse_tree__write_deps_file__ExeFileName_21,
  MR_String parse_tree__write_deps_file__InitCFileName_22,
  MR_String parse_tree__write_deps_file__InitObjFileName_23,
  MR_String parse_tree__write_deps_file__InitPicObjFileName_24,
  MR_String parse_tree__write_deps_file__InitFileName_25,
  MR_String parse_tree__write_deps_file__LibFileName_26,
  MR_String parse_tree__write_deps_file__SharedLibFileName_27,
  MR_String parse_tree__write_deps_file__JarFileName_28,
  MR_String parse_tree__write_deps_file__DepFileName_29,
  MR_String parse_tree__write_deps_file__DvFileName_30,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_41,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_42)
{
  {
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_168_168;
    MR_String parse_tree__write_deps_file__CleanTargetName_33;
    MR_String parse_tree__write_deps_file__RealCleanTargetName_34;
    MR_Word parse_tree__write_deps_file__CleanFiles_36;
    MR_Word parse_tree__write_deps_file__MmakeRulesClean_37;
    MR_Word parse_tree__write_deps_file__RealCleanFiles_39;
    MR_Word parse_tree__write_deps_file__MmakeRulesRealClean_40;
    MR_Word parse_tree__write_deps_file__Var_75;
    MR_Word parse_tree__write_deps_file__Var_76;
    MR_Word parse_tree__write_deps_file__Var_78;
    MR_Word parse_tree__write_deps_file__Var_82;
    MR_Word parse_tree__write_deps_file__Var_85;
    MR_Word parse_tree__write_deps_file__Var_86;
    MR_Word parse_tree__write_deps_file__Var_90;
    MR_Word parse_tree__write_deps_file__Var_91;
    MR_Word parse_tree__write_deps_file__Var_92;
    MR_Word parse_tree__write_deps_file__Var_93;
    MR_String parse_tree__write_deps_file__Var_94;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_97_97;
    MR_String parse_tree__write_deps_file__Var_138;
    MR_Word parse_tree__write_deps_file__Var_140;
    MR_Word parse_tree__write_deps_file__Var_141;
    MR_Word parse_tree__write_deps_file__Var_142;
    MR_Word parse_tree__write_deps_file__Var_143;
    MR_Word parse_tree__write_deps_file__Var_144;
    MR_Word parse_tree__write_deps_file__Var_145;
    MR_Word parse_tree__write_deps_file__Var_147;
    MR_Word parse_tree__write_deps_file__Var_151;
    MR_Word parse_tree__write_deps_file__Var_154;
    MR_Word parse_tree__write_deps_file__Var_155;
    MR_Word parse_tree__write_deps_file__Var_160;
    MR_Word parse_tree__write_deps_file__Var_161;
    MR_Word parse_tree__write_deps_file__Var_163;
    MR_String parse_tree__write_deps_file__Var_164;

    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_18, (MR_Integer) 1, (MR_String) ".clean", parse_tree__write_deps_file__ModuleName_19, &parse_tree__write_deps_file__CleanTargetName_33);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_18, (MR_Integer) 1, (MR_String) ".realclean", parse_tree__write_deps_file__ModuleName_19, &parse_tree__write_deps_file__RealCleanTargetName_34);
    {
      parse_tree__write_deps_file__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_76, 0) = ((MR_Box) (parse_tree__write_deps_file__InitPicObjFileName_24));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_75, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_23));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_75, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_76));
    }
    {
      parse_tree__write_deps_file__CleanFiles_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__CleanFiles_36, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__CleanFiles_36, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_75));
    }
    {
      parse_tree__write_deps_file__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_82, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_33));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_78, 1) = ((MR_Box) ((MR_String) "clean_local"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_78, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_78, 3) = ((MR_Box) ((MR_String) "clean_local"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_78, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_82));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_78, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__write_deps_file__TypeCtorInfo_168_168 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      parse_tree__write_deps_file__Var_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_92, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_92, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_92, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_92, 3) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_20));
    }
    parse_tree__write_deps_file__Var_91 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_168_168, parse_tree__write_deps_file__TypeCtorInfo_168_168, parse_tree__write_deps_file__Var_92, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[91]));
    parse_tree__write_deps_file__Var_94 = parse_tree__write_deps_file__remove_files_cmd_1_f_0(parse_tree__write_deps_file__CleanFiles_36);
    {
      parse_tree__write_deps_file__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_93, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_94));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__write_deps_file__Var_90 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_168_168, parse_tree__write_deps_file__Var_91, parse_tree__write_deps_file__Var_93);
    {
      parse_tree__write_deps_file__Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_86, 1) = ((MR_Box) ((MR_String) "clean_target"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_86, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_86, 3) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_33));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_86, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_86, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_90));
    }
    {
      parse_tree__write_deps_file__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_85, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_86));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__MmakeRulesClean_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeRulesClean_37, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_78));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeRulesClean_37, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_85));
    }
    libs__mmakefiles__add_mmake_entries_3_p_0(parse_tree__write_deps_file__MmakeRulesClean_37, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_41, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_97_97);
    parse_tree__write_deps_file__Var_138 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ExeFileName_21, (MR_String) "\044(EXT_FOR_EXE) ");
    {
      parse_tree__write_deps_file__Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_145, 0) = ((MR_Box) (parse_tree__write_deps_file__DvFileName_30));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_144, 0) = ((MR_Box) (parse_tree__write_deps_file__DepFileName_29));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_144, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_145));
    }
    {
      parse_tree__write_deps_file__Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_143, 0) = ((MR_Box) (parse_tree__write_deps_file__JarFileName_28));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_143, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_144));
    }
    {
      parse_tree__write_deps_file__Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_142, 0) = ((MR_Box) (parse_tree__write_deps_file__SharedLibFileName_27));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_142, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_143));
    }
    {
      parse_tree__write_deps_file__Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_141, 0) = ((MR_Box) (parse_tree__write_deps_file__LibFileName_26));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_141, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_142));
    }
    {
      parse_tree__write_deps_file__Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_140, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_25));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_140, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_141));
    }
    {
      parse_tree__write_deps_file__RealCleanFiles_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__RealCleanFiles_39, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_138));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__RealCleanFiles_39, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_140));
    }
    {
      parse_tree__write_deps_file__Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_151, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_34));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_147, 1) = ((MR_Box) ((MR_String) "realclean_local"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_147, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_147, 3) = ((MR_Box) ((MR_String) "realclean_local"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_147, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_151));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_147, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__write_deps_file__Var_161 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_168_168, parse_tree__write_deps_file__TypeCtorInfo_168_168, parse_tree__write_deps_file__Var_92, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[111]));
    parse_tree__write_deps_file__Var_164 = parse_tree__write_deps_file__remove_files_cmd_1_f_0(parse_tree__write_deps_file__RealCleanFiles_39);
    {
      parse_tree__write_deps_file__Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_163, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_164));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__write_deps_file__Var_160 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_168_168, parse_tree__write_deps_file__Var_161, parse_tree__write_deps_file__Var_163);
    {
      parse_tree__write_deps_file__Var_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_155, 1) = ((MR_Box) ((MR_String) "realclean_target"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_155, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_155, 3) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_34));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_155, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_82));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_155, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_160));
    }
    {
      parse_tree__write_deps_file__Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_154, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_155));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__MmakeRulesRealClean_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeRulesRealClean_40, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_147));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeRulesRealClean_40, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_154));
    }
    libs__mmakefiles__add_mmake_entries_3_p_0(parse_tree__write_deps_file__MmakeRulesRealClean_40, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_97_97, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_42);
  }
}

static MR_String MR_CALL 
parse_tree__write_deps_file__remove_files_cmd_1_f_0(
  MR_Word parse_tree__write_deps_file__Files_3)
{
  {
    MR_String parse_tree__write_deps_file__HeadVar__2_2;
    MR_String parse_tree__write_deps_file__Var_5;

    parse_tree__write_deps_file__Var_5 = mercury__string__join_list_2_f_0((MR_String) " ", parse_tree__write_deps_file__Files_3);
    parse_tree__write_deps_file__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "-rm -f ", parse_tree__write_deps_file__Var_5);
    return parse_tree__write_deps_file__HeadVar__2_2;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_7_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box parse_tree__write_deps_file__wrapper_arg_4,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_5)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_Word parse_tree__write_deps_file__conv0_STATE_VARIABLE_MmakeFile_20;

    parse_tree__write_deps_file__generate_dep_file_collective_target_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_2), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_MmakeFile_20);
    *parse_tree__write_deps_file__wrapper_arg_3 = ((MR_Box) (parse_tree__write_deps_file__conv0_STATE_VARIABLE_MmakeFile_20));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_7_p_0(
  MR_Word parse_tree__write_deps_file__Globals_8,
  MR_Word parse_tree__write_deps_file__ModuleName_9,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_10,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_13,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_14)
{
  {
    MR_Word parse_tree__write_deps_file__Var_17;
    MR_Box parse_tree__write_deps_file__conv2_STATE_VARIABLE_MmakeFile_14;
    MR_Box parse_tree__write_deps_file__conv1_STATE_VARIABLE_IO_16;

    {
      parse_tree__write_deps_file__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_17, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_17, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_collective_targets_7_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_17, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_8));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_17, 4) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_9));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_17, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_10));
    }
    mercury__list__foldl2_6_p_2((MR_Word) &parse_tree__write_deps_file_scalar_common_2[3], (MR_Word) &parse_tree__write_deps_file_scalar_common_1[5], (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Var_17, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[79]), ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_13)), &parse_tree__write_deps_file__conv2_STATE_VARIABLE_MmakeFile_14, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv1_STATE_VARIABLE_IO_16);
    *parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_14 = ((MR_Word) parse_tree__write_deps_file__conv2_STATE_VARIABLE_MmakeFile_14);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_1(
  void * parse_tree__write_deps_file__env_ptr_arg)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

    MR_builtin_longjmp((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_3(
  void * parse_tree__write_deps_file__env_ptr_arg)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

    (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_41 = ((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv1_Var_41);
    (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_89 = ((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv0_Var_89);
    parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_2(parse_tree__write_deps_file__env_ptr);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_2(
  void * parse_tree__write_deps_file__env_ptr_arg)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

    {
      MR_Word parse_tree__write_deps_file__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_89, (MR_Integer) 0)));
      MR_String parse_tree__write_deps_file__Var_351;
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
      MR_Word parse_tree__write_deps_file__Var_365;
      MR_Word parse_tree__write_deps_file__Var_366;
      MR_Word parse_tree__write_deps_file__Var_367;
      MR_Word parse_tree__write_deps_file__Var_368;
      MR_Word parse_tree__write_deps_file__Var_369;
      MR_Word parse_tree__write_deps_file__Var_370;
      MR_Word parse_tree__write_deps_file__Var_371;
      MR_Word parse_tree__write_deps_file__Var_372;
      MR_Word parse_tree__write_deps_file__Var_373;
      MR_Word parse_tree__write_deps_file__Var_374;
      MR_Word parse_tree__write_deps_file__Var_375;
      MR_String parse_tree__write_deps_file__Var_376;

      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_89, (MR_Integer) 1)));
      parse_tree__write_deps_file__Var_351 = ((MR_String) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 0)));
      parse_tree__write_deps_file__Var_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 1)));
      parse_tree__write_deps_file__Var_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 2)));
      parse_tree__write_deps_file__Var_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 3)));
      parse_tree__write_deps_file__Var_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 4)));
      parse_tree__write_deps_file__Var_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 5)));
      parse_tree__write_deps_file__Var_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 6)));
      parse_tree__write_deps_file__Var_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 7)));
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 8)));
      parse_tree__write_deps_file__Var_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 9)));
      parse_tree__write_deps_file__Var_360 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 10)));
      parse_tree__write_deps_file__Var_361 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 11)));
      parse_tree__write_deps_file__Var_362 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 12)));
      parse_tree__write_deps_file__Var_363 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 13)));
      parse_tree__write_deps_file__Var_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 14)));
      parse_tree__write_deps_file__Var_365 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 15)));
      parse_tree__write_deps_file__Var_366 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 16)));
      parse_tree__write_deps_file__Var_367 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 17)));
      parse_tree__write_deps_file__Var_368 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 18)));
      parse_tree__write_deps_file__Var_369 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 19)));
      parse_tree__write_deps_file__Var_370 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 20)));
      parse_tree__write_deps_file__Var_371 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 21)));
      parse_tree__write_deps_file__Var_372 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 22)));
      parse_tree__write_deps_file__Var_373 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 23)));
      parse_tree__write_deps_file__Var_374 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 24)));
      parse_tree__write_deps_file__Var_375 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 25)));
      parse_tree__write_deps_file__Var_376 = ((MR_String) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 26)));
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = mercury__set__non_empty_1_p_0((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_377_377, (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_90);
      if ((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded)
        parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_1(parse_tree__write_deps_file__env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_4(
  void * parse_tree__write_deps_file__env_ptr_arg)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

    if (MR_builtin_setjmp((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__commit_0) == 0)
      {
        {
          (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_377_377 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
          mercury__map__member_3_p_0((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_377_377, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__DepsMap_17, &(parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv1_Var_41, &(parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv0_Var_89, parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_3, parse_tree__write_deps_file__env_ptr);
        }
        (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0(
  MR_Word parse_tree__write_deps_file__Globals_15,
  MR_Word parse_tree__write_deps_file__ModuleName_16,
  MR_Word parse_tree__write_deps_file__DepsMap_17,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_18,
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_19,
  MR_Word parse_tree__write_deps_file__Intermod_20,
  MR_Word parse_tree__write_deps_file__TransOpt_21,
  MR_Word parse_tree__write_deps_file__MaybeModuleDepsVarPair_22,
  MR_Word parse_tree__write_deps_file__MaybeOptsVarPair_23,
  MR_Word parse_tree__write_deps_file__MaybeTransOptsVarPair_24,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_63,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_64)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s parse_tree__write_deps_file__env;

    (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__DepsMap_17 = parse_tree__write_deps_file__DepsMap_17;
    {
      MR_Word parse_tree__write_deps_file__TypeCtorInfo_379_379;
      MR_Word parse_tree__write_deps_file__MaybeOptsVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MaybeOptsVarPair_23, (MR_Integer) 0)));
      MR_String parse_tree__write_deps_file__MaybeOptsVarSpace_28 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MaybeOptsVarPair_23, (MR_Integer) 1)));
      MR_Word parse_tree__write_deps_file__MaybeTransOptsVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MaybeTransOptsVarPair_24, (MR_Integer) 0)));
      MR_String parse_tree__write_deps_file__MaybeTransOptsVarSpace_30 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MaybeTransOptsVarPair_24, (MR_Integer) 1)));
      MR_Word parse_tree__write_deps_file__MaybeModuleDepsVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MaybeModuleDepsVarPair_22, (MR_Integer) 0)));
      MR_String parse_tree__write_deps_file__MaybeModuleDepsVarSpace_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MaybeModuleDepsVarPair_22, (MR_Integer) 1)));
      MR_String parse_tree__write_deps_file__LibInstallIntsTargetName_33;
      MR_String parse_tree__write_deps_file__LibInstallOptsTargetName_34;
      MR_String parse_tree__write_deps_file__LibInstallHdrsTargetName_35;
      MR_String parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_36;
      MR_String parse_tree__write_deps_file__ModuleMakeVarNameInts_37;
      MR_String parse_tree__write_deps_file__ModuleMakeVarNameInt3s_38;
      MR_String parse_tree__write_deps_file__MaybeSpaceOptStr_39;
      MR_String parse_tree__write_deps_file__SpaceInt0Str_43;
      MR_String parse_tree__write_deps_file__MaybeModuleVarNameInt0sSpace_45;
      MR_Word parse_tree__write_deps_file__MaybeModuleVarNameInt0s_46;
      MR_String parse_tree__write_deps_file__MaybeSpaceTransOptStr_47;
      MR_String parse_tree__write_deps_file__MaybeSpaceDepStr_48;
      MR_String parse_tree__write_deps_file__LibInstallIntsFiles_49;
      MR_Word parse_tree__write_deps_file__MmakeRuleLibInstallInts_50;
      MR_Word parse_tree__write_deps_file__LibInstallOptsSources_51;
      MR_Word parse_tree__write_deps_file__LibInstallOptsActions_52;
      MR_Word parse_tree__write_deps_file__MmakeRuleLibInstallOpts_54;
      MR_String parse_tree__write_deps_file__ModuleMakeVarNameMhs_55;
      MR_Word parse_tree__write_deps_file__MmakeRuleLibInstallHdrsNoMhs_56;
      MR_Word parse_tree__write_deps_file__MmakeRuleLibInstallHdrsMhs_57;
      MR_Word parse_tree__write_deps_file__MmakeFragmentLibInstallHdrs_58;
      MR_String parse_tree__write_deps_file__ModuleMakeVarNameMihs_59;
      MR_Word parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsNoMihs_60;
      MR_Word parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsMihs_61;
      MR_Word parse_tree__write_deps_file__MmakeFragmentLibInstallGradeHdrs_62;
      MR_String parse_tree__write_deps_file__Var_84;
      MR_String parse_tree__write_deps_file__Var_87;
      MR_String parse_tree__write_deps_file__Var_97;
      MR_String parse_tree__write_deps_file__Var_98;
      MR_String parse_tree__write_deps_file__Var_100;
      MR_String parse_tree__write_deps_file__Var_101;
      MR_String parse_tree__write_deps_file__Var_103;
      MR_String parse_tree__write_deps_file__Var_104;
      MR_String parse_tree__write_deps_file__Var_105;
      MR_String parse_tree__write_deps_file__Var_106;
      MR_Word parse_tree__write_deps_file__Var_110;
      MR_Word parse_tree__write_deps_file__Var_111;
      MR_Word parse_tree__write_deps_file__Var_112;
      MR_Word parse_tree__write_deps_file__Var_114;
      MR_Word parse_tree__write_deps_file__Var_115;
      MR_Word parse_tree__write_deps_file__Var_116;
      MR_Word parse_tree__write_deps_file__Var_117;
      MR_Word parse_tree__write_deps_file__Var_118;
      MR_Word parse_tree__write_deps_file__Var_121;
      MR_String parse_tree__write_deps_file__Var_122;
      MR_String parse_tree__write_deps_file__Var_124;
      MR_Word parse_tree__write_deps_file__Var_126;
      MR_Word parse_tree__write_deps_file__Var_128;
      MR_Word parse_tree__write_deps_file__Var_130;
      MR_Word parse_tree__write_deps_file__Var_132;
      MR_Word parse_tree__write_deps_file__Var_134;
      MR_Word parse_tree__write_deps_file__Var_136;
      MR_Word parse_tree__write_deps_file__Var_138;
      MR_Word parse_tree__write_deps_file__Var_140;
      MR_Word parse_tree__write_deps_file__Var_142;
      MR_Word parse_tree__write_deps_file__Var_144;
      MR_Word parse_tree__write_deps_file__Var_146;
      MR_Word parse_tree__write_deps_file__Var_148;
      MR_Word parse_tree__write_deps_file__Var_150;
      MR_String parse_tree__write_deps_file__Var_151;
      MR_String parse_tree__write_deps_file__Var_153;
      MR_String parse_tree__write_deps_file__Var_154;
      MR_String parse_tree__write_deps_file__Var_155;
      MR_String parse_tree__write_deps_file__Var_156;
      MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_175_175;
      MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_241_241;
      MR_Word parse_tree__write_deps_file__Var_248;
      MR_Word parse_tree__write_deps_file__Var_252;
      MR_String parse_tree__write_deps_file__Var_253;
      MR_Word parse_tree__write_deps_file__Var_261;
      MR_String parse_tree__write_deps_file__Var_262;
      MR_String parse_tree__write_deps_file__Var_264;
      MR_Word parse_tree__write_deps_file__Var_273;
      MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_275_275;
      MR_Word parse_tree__write_deps_file__Var_282;
      MR_Word parse_tree__write_deps_file__Var_286;
      MR_String parse_tree__write_deps_file__Var_287;
      MR_Word parse_tree__write_deps_file__Var_295;
      MR_String parse_tree__write_deps_file__Var_296;
      MR_String parse_tree__write_deps_file__Var_298;
      MR_Word parse_tree__write_deps_file__Var_347;
      MR_String parse_tree__write_deps_file__Var_381;
      MR_String parse_tree__write_deps_file__Var_384;

      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_15, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_ints", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallIntsTargetName_33);
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_15, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_opts", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallOptsTargetName_34);
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_15, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_hdrs", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallHdrsTargetName_35);
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_15, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_16, (MR_String) ".install_grade_hdrs", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_36);
      parse_tree__write_deps_file__Var_84 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_18, (MR_String) ".ints)");
      parse_tree__write_deps_file__ModuleMakeVarNameInts_37 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_84);
      parse_tree__write_deps_file__Var_87 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_18, (MR_String) ".int3s)");
      parse_tree__write_deps_file__ModuleMakeVarNameInt3s_38 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_87);
      switch (parse_tree__write_deps_file__Intermod_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          parse_tree__write_deps_file__MaybeSpaceOptStr_39 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          parse_tree__write_deps_file__MaybeSpaceOptStr_39 = (MR_String) " opt";
          break;
      }
      (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = (parse_tree__write_deps_file__Intermod_20 == (MR_Integer) 1);
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded)
        parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_4(&parse_tree__write_deps_file__env);
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded)
      {
        MR_String parse_tree__write_deps_file__ModuleVarNameInt0s_44;
        MR_String parse_tree__write_deps_file__Var_92;

        parse_tree__write_deps_file__SpaceInt0Str_43 = (MR_String) " int0";
        parse_tree__write_deps_file__Var_92 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_18, (MR_String) ".int0s)");
        parse_tree__write_deps_file__ModuleVarNameInt0s_44 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_92);
        parse_tree__write_deps_file__MaybeModuleVarNameInt0sSpace_45 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleVarNameInt0s_44, (MR_String) " ");
        {
          parse_tree__write_deps_file__MaybeModuleVarNameInt0s_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeModuleVarNameInt0s_46, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleVarNameInt0s_44));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeModuleVarNameInt0s_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      else
      {
        parse_tree__write_deps_file__SpaceInt0Str_43 = (MR_String) "";
        parse_tree__write_deps_file__MaybeModuleVarNameInt0sSpace_45 = (MR_String) "";
        parse_tree__write_deps_file__MaybeModuleVarNameInt0s_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      switch (parse_tree__write_deps_file__TransOpt_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          parse_tree__write_deps_file__MaybeSpaceTransOptStr_47 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          parse_tree__write_deps_file__MaybeSpaceTransOptStr_47 = (MR_String) " trans_opt";
          break;
      }
      switch (parse_tree__write_deps_file__MmcMakeDeps_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          parse_tree__write_deps_file__MaybeSpaceDepStr_48 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          parse_tree__write_deps_file__MaybeSpaceDepStr_48 = (MR_String) " module_dep";
          break;
      }
      parse_tree__write_deps_file__Var_106 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MaybeModuleDepsVarSpace_32, (MR_String) "\"");
      parse_tree__write_deps_file__Var_105 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MaybeTransOptsVarSpace_30, parse_tree__write_deps_file__Var_106);
      parse_tree__write_deps_file__Var_104 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MaybeOptsVarSpace_28, parse_tree__write_deps_file__Var_105);
      parse_tree__write_deps_file__Var_103 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MaybeModuleVarNameInt0sSpace_45, parse_tree__write_deps_file__Var_104);
      parse_tree__write_deps_file__Var_101 = mercury__string__f_43_43_2_f_0((MR_String) " ", parse_tree__write_deps_file__Var_103);
      parse_tree__write_deps_file__Var_100 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarNameInt3s_38, parse_tree__write_deps_file__Var_101);
      parse_tree__write_deps_file__Var_98 = mercury__string__f_43_43_2_f_0((MR_String) " ", parse_tree__write_deps_file__Var_100);
      parse_tree__write_deps_file__Var_97 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarNameInts_37, parse_tree__write_deps_file__Var_98);
      parse_tree__write_deps_file__LibInstallIntsFiles_49 = mercury__string__f_43_43_2_f_0((MR_String) "\"", parse_tree__write_deps_file__Var_97);
      parse_tree__write_deps_file__TypeCtorInfo_379_379 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      {
        parse_tree__write_deps_file__Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_112, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameInt3s_38));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_111, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameInts_37));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_111, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_112));
      }
      parse_tree__write_deps_file__Var_118 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[114]);
      parse_tree__write_deps_file__Var_117 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_379_379, parse_tree__write_deps_file__MaybeModuleDepsVar_31, parse_tree__write_deps_file__Var_118);
      parse_tree__write_deps_file__Var_116 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_379_379, parse_tree__write_deps_file__MaybeTransOptsVar_29, parse_tree__write_deps_file__Var_117);
      parse_tree__write_deps_file__Var_115 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_379_379, parse_tree__write_deps_file__MaybeOptsVar_27, parse_tree__write_deps_file__Var_116);
      parse_tree__write_deps_file__Var_114 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_379_379, parse_tree__write_deps_file__MaybeModuleVarNameInt0s_46, parse_tree__write_deps_file__Var_115);
      parse_tree__write_deps_file__Var_110 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_379_379, parse_tree__write_deps_file__Var_111, parse_tree__write_deps_file__Var_114);
      parse_tree__write_deps_file__Var_124 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__LibInstallIntsFiles_49, (MR_String) "; \\");
      parse_tree__write_deps_file__Var_122 = mercury__string__f_43_43_2_f_0((MR_String) "files=", parse_tree__write_deps_file__Var_124);
      parse_tree__write_deps_file__Var_156 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MaybeSpaceDepStr_48, (MR_String) "; do \\");
      parse_tree__write_deps_file__Var_155 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MaybeSpaceTransOptStr_47, parse_tree__write_deps_file__Var_156);
      parse_tree__write_deps_file__Var_154 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MaybeSpaceOptStr_39, parse_tree__write_deps_file__Var_155);
      parse_tree__write_deps_file__Var_153 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__SpaceInt0Str_43, parse_tree__write_deps_file__Var_154);
      parse_tree__write_deps_file__Var_151 = mercury__string__f_43_43_2_f_0((MR_String) "for ext in int int2 int3", parse_tree__write_deps_file__Var_153);
      {
        parse_tree__write_deps_file__Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_150, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_151));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[25])));
      }
      {
        parse_tree__write_deps_file__Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_148, 0) = ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'."));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_148, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_150));
      }
      {
        parse_tree__write_deps_file__Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_146, 0) = ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_146, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_148));
      }
      {
        parse_tree__write_deps_file__Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_144, 0) = ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option."));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_144, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_146));
      }
      {
        parse_tree__write_deps_file__Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_142, 0) = ((MR_Box) ((MR_String) "done"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_142, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_144));
      }
      {
        parse_tree__write_deps_file__Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_140, 0) = ((MR_Box) ((MR_String) "\tfi; \\"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_140, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_142));
      }
      {
        parse_tree__write_deps_file__Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_138, 0) = ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_138, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_140));
      }
      {
        parse_tree__write_deps_file__Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_136, 0) = ((MR_Box) ((MR_String) "\t\techo \"installing \044\044target\"; \\"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_136, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_138));
      }
      {
        parse_tree__write_deps_file__Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_134, 0) = ((MR_Box) ((MR_String) "\telse \\"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_134, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_136));
      }
      {
        parse_tree__write_deps_file__Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_132, 0) = ((MR_Box) ((MR_String) "\t\techo \"\044\044target unchanged\"; \\"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_132, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_134));
      }
      {
        parse_tree__write_deps_file__Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_130, 0) = ((MR_Box) ((MR_String) "\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_130, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_132));
      }
      {
        parse_tree__write_deps_file__Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_128, 0) = ((MR_Box) ((MR_String) "\ttarget=\"\044(INSTALL_INT_DIR)/\140basename \044\044file\140\"; \\"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_128, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_130));
      }
      {
        parse_tree__write_deps_file__Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_126, 0) = ((MR_Box) ((MR_String) "for file in \044\044files; do \\"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_126, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_128));
      }
      {
        parse_tree__write_deps_file__Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_121, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_122));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_121, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_126));
      }
      {
        parse_tree__write_deps_file__MmakeRuleLibInstallInts_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallInts_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallInts_50, 1) = ((MR_Box) ((MR_String) "lib_install_ints"));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallInts_50, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallInts_50, 3) = ((MR_Box) (parse_tree__write_deps_file__LibInstallIntsTargetName_33));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallInts_50, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_110));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallInts_50, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_121));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeRuleLibInstallInts_50, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_63, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_175_175);
      (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = (parse_tree__write_deps_file__Intermod_20 == (MR_Integer) 0);
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded)
        (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = (parse_tree__write_deps_file__TransOpt_21 == (MR_Integer) 0);
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded)
      {
        MR_String parse_tree__write_deps_file__Var_176;

        parse_tree__write_deps_file__LibInstallOptsSources_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        parse_tree__write_deps_file__Var_176 = libs__mmakefiles__silent_noop_action_0_f_0();
        {
          parse_tree__write_deps_file__LibInstallOptsActions_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibInstallOptsActions_52, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_176));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibInstallOptsActions_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      else
      {
        MR_String parse_tree__write_deps_file__LibInstallOptsFiles_53;
        MR_Word parse_tree__write_deps_file__Var_178;
        MR_String parse_tree__write_deps_file__Var_183;
        MR_String parse_tree__write_deps_file__Var_184;
        MR_String parse_tree__write_deps_file__Var_186;
        MR_String parse_tree__write_deps_file__Var_188;
        MR_Word parse_tree__write_deps_file__Var_190;
        MR_Word parse_tree__write_deps_file__Var_192;
        MR_Word parse_tree__write_deps_file__Var_194;
        MR_Word parse_tree__write_deps_file__Var_196;
        MR_Word parse_tree__write_deps_file__Var_198;
        MR_Word parse_tree__write_deps_file__Var_200;
        MR_Word parse_tree__write_deps_file__Var_202;
        MR_Word parse_tree__write_deps_file__Var_204;
        MR_Word parse_tree__write_deps_file__Var_206;
        MR_Word parse_tree__write_deps_file__Var_208;
        MR_Word parse_tree__write_deps_file__Var_210;
        MR_Word parse_tree__write_deps_file__Var_212;
        MR_Word parse_tree__write_deps_file__Var_214;
        MR_String parse_tree__write_deps_file__Var_215;
        MR_String parse_tree__write_deps_file__Var_217;
        MR_String parse_tree__write_deps_file__Var_218;

        parse_tree__write_deps_file__Var_178 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_379_379, parse_tree__write_deps_file__MaybeTransOptsVar_29, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[115]));
        parse_tree__write_deps_file__LibInstallOptsSources_51 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_379_379, parse_tree__write_deps_file__MaybeOptsVar_27, parse_tree__write_deps_file__Var_178);
        parse_tree__write_deps_file__Var_184 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MaybeTransOptsVarSpace_30, (MR_String) "\"");
        parse_tree__write_deps_file__Var_183 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MaybeOptsVarSpace_28, parse_tree__write_deps_file__Var_184);
        parse_tree__write_deps_file__LibInstallOptsFiles_53 = mercury__string__f_43_43_2_f_0((MR_String) "\"", parse_tree__write_deps_file__Var_183);
        parse_tree__write_deps_file__Var_188 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__LibInstallOptsFiles_53, (MR_String) "; \\");
        parse_tree__write_deps_file__Var_186 = mercury__string__f_43_43_2_f_0((MR_String) "files=", parse_tree__write_deps_file__Var_188);
        parse_tree__write_deps_file__Var_218 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MaybeSpaceTransOptStr_47, (MR_String) "; do \\");
        parse_tree__write_deps_file__Var_217 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MaybeSpaceOptStr_39, parse_tree__write_deps_file__Var_218);
        parse_tree__write_deps_file__Var_215 = mercury__string__f_43_43_2_f_0((MR_String) "for ext in ", parse_tree__write_deps_file__Var_217);
        {
          parse_tree__write_deps_file__Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_214, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_215));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_214, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[32])));
        }
        {
          parse_tree__write_deps_file__Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_212, 0) = ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'."));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_212, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_214));
        }
        {
          parse_tree__write_deps_file__Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_210, 0) = ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_210, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_212));
        }
        {
          parse_tree__write_deps_file__Var_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_208, 0) = ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_208, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_210));
        }
        {
          parse_tree__write_deps_file__Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_206, 0) = ((MR_Box) ((MR_String) "done"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_206, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_208));
        }
        {
          parse_tree__write_deps_file__Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_204, 0) = ((MR_Box) ((MR_String) "\tfi; \\"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_204, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_206));
        }
        {
          parse_tree__write_deps_file__Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_202, 0) = ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_202, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_204));
        }
        {
          parse_tree__write_deps_file__Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_200, 0) = ((MR_Box) ((MR_String) "\t\techo \"installing \044\044target\"; \\"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_200, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_202));
        }
        {
          parse_tree__write_deps_file__Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_198, 0) = ((MR_Box) ((MR_String) "\telse \\"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_198, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_200));
        }
        {
          parse_tree__write_deps_file__Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_196, 0) = ((MR_Box) ((MR_String) "\t\techo \"\044\044target unchanged\"; \\"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_196, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_198));
        }
        {
          parse_tree__write_deps_file__Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_194, 0) = ((MR_Box) ((MR_String) "\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_194, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_196));
        }
        {
          parse_tree__write_deps_file__Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_192, 0) = ((MR_Box) ((MR_String) "\ttarget=\"\044(INSTALL_GRADE_INT_DIR)/\140basename \044\044file\140\";\\"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_192, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_194));
        }
        {
          parse_tree__write_deps_file__Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_190, 0) = ((MR_Box) ((MR_String) "for file in \044\044files; do \\"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_190, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_192));
        }
        {
          parse_tree__write_deps_file__LibInstallOptsActions_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibInstallOptsActions_52, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_186));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibInstallOptsActions_52, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_190));
        }
      }
      {
        parse_tree__write_deps_file__MmakeRuleLibInstallOpts_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallOpts_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallOpts_54, 1) = ((MR_Box) ((MR_String) "lib_install_opts"));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallOpts_54, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallOpts_54, 3) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsTargetName_34));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallOpts_54, 4) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsSources_51));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallOpts_54, 5) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsActions_52));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeRuleLibInstallOpts_54, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_175_175, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_241_241);
      parse_tree__write_deps_file__Var_381 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_18, (MR_String) ".mhs)");
      parse_tree__write_deps_file__ModuleMakeVarNameMhs_55 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_381);
      {
        parse_tree__write_deps_file__Var_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_248, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameMhs_55));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_248, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_118));
      }
      parse_tree__write_deps_file__Var_253 = libs__mmakefiles__silent_noop_action_0_f_0();
      {
        parse_tree__write_deps_file__Var_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_252, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_253));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_252, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__MmakeRuleLibInstallHdrsNoMhs_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsNoMhs_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsNoMhs_56, 1) = ((MR_Box) ((MR_String) "install_lib_hdrs_nomhs"));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsNoMhs_56, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsNoMhs_56, 3) = ((MR_Box) (parse_tree__write_deps_file__LibInstallHdrsTargetName_35));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsNoMhs_56, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_248));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsNoMhs_56, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_252));
      }
      parse_tree__write_deps_file__Var_264 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarNameMhs_55, (MR_String) "; do \\");
      parse_tree__write_deps_file__Var_262 = mercury__string__f_43_43_2_f_0((MR_String) "for hdr in ", parse_tree__write_deps_file__Var_264);
      {
        parse_tree__write_deps_file__Var_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_261, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_262));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_261, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[34])));
      }
      {
        parse_tree__write_deps_file__MmakeRuleLibInstallHdrsMhs_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsMhs_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsMhs_57, 1) = ((MR_Box) ((MR_String) "install_lib_hdrs_mhs"));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsMhs_57, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsMhs_57, 3) = ((MR_Box) (parse_tree__write_deps_file__LibInstallHdrsTargetName_35));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsMhs_57, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_248));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsMhs_57, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_261));
      }
      {
        parse_tree__write_deps_file__Var_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_273, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameMhs_55));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_273, 1) = ((MR_Box) ((MR_String) ""));
      }
      {
        parse_tree__write_deps_file__MmakeFragmentLibInstallHdrs_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentLibInstallHdrs_58, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_273));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentLibInstallHdrs_58, 1) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleLibInstallHdrsNoMhs_56));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentLibInstallHdrs_58, 2) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleLibInstallHdrsMhs_57));
      }
      libs__mmakefiles__add_mmake_fragment_3_p_0(parse_tree__write_deps_file__MmakeFragmentLibInstallHdrs_58, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_241_241, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_275_275);
      parse_tree__write_deps_file__Var_384 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_18, (MR_String) ".mihs)");
      parse_tree__write_deps_file__ModuleMakeVarNameMihs_59 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_384);
      {
        parse_tree__write_deps_file__Var_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_282, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameMihs_59));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_282, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[115])));
      }
      parse_tree__write_deps_file__Var_287 = libs__mmakefiles__silent_noop_action_0_f_0();
      {
        parse_tree__write_deps_file__Var_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_286, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_287));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_286, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsNoMihs_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsNoMihs_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsNoMihs_60, 1) = ((MR_Box) ((MR_String) "install_grade_hdrs_no_mihs"));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsNoMihs_60, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsNoMihs_60, 3) = ((MR_Box) (parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_36));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsNoMihs_60, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_282));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsNoMihs_60, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_286));
      }
      parse_tree__write_deps_file__Var_298 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarNameMihs_59, (MR_String) "; do \\");
      parse_tree__write_deps_file__Var_296 = mercury__string__f_43_43_2_f_0((MR_String) "for hdr in ", parse_tree__write_deps_file__Var_298);
      {
        parse_tree__write_deps_file__Var_295 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_295, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_296));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_295, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[57])));
      }
      {
        parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsMihs_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsMihs_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsMihs_61, 1) = ((MR_Box) ((MR_String) "install_grade_hdrs_mihs"));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsMihs_61, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsMihs_61, 3) = ((MR_Box) (parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_36));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsMihs_61, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_282));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsMihs_61, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_295));
      }
      {
        parse_tree__write_deps_file__Var_347 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_347, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameMihs_59));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_347, 1) = ((MR_Box) ((MR_String) ""));
      }
      {
        parse_tree__write_deps_file__MmakeFragmentLibInstallGradeHdrs_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentLibInstallGradeHdrs_62, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_347));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentLibInstallGradeHdrs_62, 1) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsNoMihs_60));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentLibInstallGradeHdrs_62, 2) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsMihs_61));
      }
      libs__mmakefiles__add_mmake_fragment_3_p_0(parse_tree__write_deps_file__MmakeFragmentLibInstallGradeHdrs_62, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_275_275, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_64);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_init_targets_11_p_0(
  MR_Word parse_tree__write_deps_file__Globals_12,
  MR_Word parse_tree__write_deps_file__ModuleName_13,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_14,
  MR_String parse_tree__write_deps_file__InitCFileName_15,
  MR_String parse_tree__write_deps_file__InitFileName_16,
  MR_String * parse_tree__write_deps_file__DepFileName_17,
  MR_String * parse_tree__write_deps_file__DvFileName_18,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_34,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_35)
{
  {
    MR_String parse_tree__write_deps_file__ModuleMakeVarNameCs_21;
    MR_String parse_tree__write_deps_file__InitAction1_22;
    MR_String parse_tree__write_deps_file__InitAction2_23;
    MR_String parse_tree__write_deps_file__InitAction3_24;
    MR_Word parse_tree__write_deps_file__MmakeRuleInitFile_25;
    MR_String parse_tree__write_deps_file__ModuleFileName_26;
    MR_String parse_tree__write_deps_file__ForceC2InitTarget_27;
    MR_Word parse_tree__write_deps_file__MmakeRuleForceInitCFile_28;
    MR_String parse_tree__write_deps_file__TmpInitCFileName_29;
    MR_String parse_tree__write_deps_file__ModuleMakeVarNameInitCs_30;
    MR_String parse_tree__write_deps_file__InitCAction1_31;
    MR_String parse_tree__write_deps_file__InitCAction2_32;
    MR_Word parse_tree__write_deps_file__MmakeRuleInitCFile_33;
    MR_String parse_tree__write_deps_file__Var_45;
    MR_String parse_tree__write_deps_file__Var_49;
    MR_String parse_tree__write_deps_file__Var_50;
    MR_Word parse_tree__write_deps_file__Var_55;
    MR_Word parse_tree__write_deps_file__Var_56;
    MR_Word parse_tree__write_deps_file__Var_58;
    MR_Word parse_tree__write_deps_file__Var_59;
    MR_Word parse_tree__write_deps_file__Var_60;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_62_62;
    MR_String parse_tree__write_deps_file__Var_64;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_70_70;
    MR_String parse_tree__write_deps_file__Var_73;
    MR_String parse_tree__write_deps_file__Var_76;
    MR_String parse_tree__write_deps_file__Var_78;
    MR_String parse_tree__write_deps_file__Var_79;
    MR_String parse_tree__write_deps_file__Var_81;
    MR_Word parse_tree__write_deps_file__Var_86;
    MR_Word parse_tree__write_deps_file__Var_89;
    MR_Word parse_tree__write_deps_file__Var_90;

    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_12, (MR_Integer) 1, (MR_String) ".dep", parse_tree__write_deps_file__ModuleName_13, parse_tree__write_deps_file__DepFileName_17);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_12, (MR_Integer) 1, (MR_String) ".dv", parse_tree__write_deps_file__ModuleName_13, parse_tree__write_deps_file__DvFileName_18);
    parse_tree__write_deps_file__Var_45 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_14, (MR_String) ".cs)");
    parse_tree__write_deps_file__ModuleMakeVarNameCs_21 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_45);
    parse_tree__write_deps_file__InitAction1_22 = mercury__string__f_43_43_2_f_0((MR_String) "echo > ", parse_tree__write_deps_file__InitFileName_16);
    parse_tree__write_deps_file__Var_50 = mercury__string__f_43_43_2_f_0((MR_String) " >> ", parse_tree__write_deps_file__InitFileName_16);
    parse_tree__write_deps_file__Var_49 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarNameCs_21, parse_tree__write_deps_file__Var_50);
    parse_tree__write_deps_file__InitAction2_23 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MKLIBINIT) ", parse_tree__write_deps_file__Var_49);
    parse_tree__write_deps_file__InitAction3_24 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXTRA_INIT_COMMAND) >> ", parse_tree__write_deps_file__InitFileName_16);
    {
      parse_tree__write_deps_file__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_56, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameCs_21));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_55, 0) = ((MR_Box) (*parse_tree__write_deps_file__DepFileName_17));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_55, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_56));
    }
    {
      parse_tree__write_deps_file__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_60, 0) = ((MR_Box) (parse_tree__write_deps_file__InitAction3_24));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_59, 0) = ((MR_Box) (parse_tree__write_deps_file__InitAction2_23));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_59, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_60));
    }
    {
      parse_tree__write_deps_file__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_58, 0) = ((MR_Box) (parse_tree__write_deps_file__InitAction1_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_58, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_59));
    }
    {
      parse_tree__write_deps_file__MmakeRuleInitFile_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitFile_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitFile_25, 1) = ((MR_Box) ((MR_String) "init_file"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitFile_25, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitFile_25, 3) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_16));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitFile_25, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_55));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitFile_25, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_58));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeRuleInitFile_25, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_34, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_62_62);
    parse_tree__write_deps_file__ModuleFileName_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_13);
    parse_tree__write_deps_file__Var_64 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleFileName_26, (MR_String) "_init");
    parse_tree__write_deps_file__ForceC2InitTarget_27 = mercury__string__f_43_43_2_f_0((MR_String) "force-", parse_tree__write_deps_file__Var_64);
    {
      parse_tree__write_deps_file__MmakeRuleForceInitCFile_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleForceInitCFile_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleForceInitCFile_28, 1) = ((MR_Box) ((MR_String) "force_init_c_file"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleForceInitCFile_28, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleForceInitCFile_28, 3) = ((MR_Box) (parse_tree__write_deps_file__ForceC2InitTarget_27));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleForceInitCFile_28, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleForceInitCFile_28, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeRuleForceInitCFile_28, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_62_62, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_70_70);
    parse_tree__write_deps_file__TmpInitCFileName_29 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__InitCFileName_15, (MR_String) ".tmp");
    parse_tree__write_deps_file__Var_73 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_14, (MR_String) ".init_cs)");
    parse_tree__write_deps_file__ModuleMakeVarNameInitCs_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_73);
    parse_tree__write_deps_file__Var_81 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarNameInitCs_30, (MR_String) " \044(ALL_C2INITARGS)");
    parse_tree__write_deps_file__Var_79 = mercury__string__f_43_43_2_f_0((MR_String) " ", parse_tree__write_deps_file__Var_81);
    parse_tree__write_deps_file__Var_78 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__TmpInitCFileName_29, parse_tree__write_deps_file__Var_79);
    parse_tree__write_deps_file__Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "--init-c-file ", parse_tree__write_deps_file__Var_78);
    parse_tree__write_deps_file__InitCAction1_31 = mercury__string__f_43_43_2_f_0((MR_String) "\100\044(C2INIT) \044(ALL_GRADEFLAGS) \044(ALL_C2INITFLAGS) ", parse_tree__write_deps_file__Var_76);
    parse_tree__write_deps_file__InitCAction2_32 = mercury__string__f_43_43_2_f_0((MR_String) "\100mercury_update_interface ", parse_tree__write_deps_file__InitCFileName_15);
    {
      parse_tree__write_deps_file__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_86, 0) = ((MR_Box) (parse_tree__write_deps_file__ForceC2InitTarget_27));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_86, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_56));
    }
    {
      parse_tree__write_deps_file__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_90, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCAction2_32));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_89, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCAction1_31));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_89, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_90));
    }
    {
      parse_tree__write_deps_file__MmakeRuleInitCFile_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitCFile_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitCFile_33, 1) = ((MR_Box) ((MR_String) "init_c_file"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitCFile_33, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitCFile_33, 3) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_15));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitCFile_33, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_86));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitCFile_33, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_89));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeRuleInitCFile_33, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_70_70, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_35);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_exec_library_targets_15_p_0(
  MR_Word parse_tree__write_deps_file__Globals_16,
  MR_Word parse_tree__write_deps_file__ModuleName_17,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_18,
  MR_String parse_tree__write_deps_file__InitFileName_19,
  MR_String parse_tree__write_deps_file__InitObjFileName_20,
  MR_Word parse_tree__write_deps_file__MaybeOptsVar_21,
  MR_Word parse_tree__write_deps_file__MaybeTransOptsVar_22,
  MR_String * parse_tree__write_deps_file__ExeFileName_23,
  MR_String * parse_tree__write_deps_file__JarFileName_24,
  MR_String * parse_tree__write_deps_file__LibFileName_25,
  MR_String * parse_tree__write_deps_file__SharedLibFileName_26,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_66,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_67)
{
  {
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_253_253;
    MR_Word parse_tree__write_deps_file__MmakeRuleExtForExe_29;
    MR_Word parse_tree__write_deps_file__MmakeFragmentExtForExe_30;
    MR_String parse_tree__write_deps_file__All_MLLibsDep_31;
    MR_String parse_tree__write_deps_file__All_MLObjs_32;
    MR_String parse_tree__write_deps_file__All_MLPicObjs_33;
    MR_String parse_tree__write_deps_file__NL_All_MLObjs_34;
    MR_String parse_tree__write_deps_file__ModuleMakeVarNameClasses_35;
    MR_String parse_tree__write_deps_file__ModuleMakeVarNameOs_36;
    MR_String parse_tree__write_deps_file__NonJavaMainRuleAction1Line1_37;
    MR_String parse_tree__write_deps_file__NonJavaMainRuleAction1Line2_38;
    MR_Word parse_tree__write_deps_file__MmakeRuleExecutableJava_39;
    MR_Word parse_tree__write_deps_file__MmakeRuleExecutableNonJava_40;
    MR_Word parse_tree__write_deps_file__MmakeFragmentExecutable_41;
    MR_String parse_tree__write_deps_file__LibTargetName_42;
    MR_String parse_tree__write_deps_file__MaybeSharedLibFileName_43;
    MR_Word parse_tree__write_deps_file__UseInstallName_44;
    MR_String parse_tree__write_deps_file__InstallNameOpt_45;
    MR_String parse_tree__write_deps_file__ModuleMakeVarNameInts_46;
    MR_String parse_tree__write_deps_file__ModuleMakeVarNameInt3s_47;
    MR_Word parse_tree__write_deps_file__AllIntSources_48;
    MR_Word parse_tree__write_deps_file__MmakeRuleLibTargetJava_49;
    MR_Word parse_tree__write_deps_file__MmakeRuleLibTargetNonJava_50;
    MR_Word parse_tree__write_deps_file__MmakeFragmentLibTarget_51;
    MR_String parse_tree__write_deps_file__ModuleMakeVarNamePicOs_52;
    MR_String parse_tree__write_deps_file__SharedLibAction1Line1_53;
    MR_String parse_tree__write_deps_file__SharedLibAction1Line2_54;
    MR_String parse_tree__write_deps_file__SharedLibAction1Line3_55;
    MR_Word parse_tree__write_deps_file__MmakeRuleSharedLib_56;
    MR_Word parse_tree__write_deps_file__MmakeFragmentSharedLib_57;
    MR_String parse_tree__write_deps_file__LibAction1_58;
    MR_String parse_tree__write_deps_file__LibAction2Line1_59;
    MR_String parse_tree__write_deps_file__LibAction2Line2_60;
    MR_String parse_tree__write_deps_file__LibAction3_61;
    MR_Word parse_tree__write_deps_file__MmakeRuleLib_62;
    MR_String parse_tree__write_deps_file__ListClassFiles_63;
    MR_String parse_tree__write_deps_file__JarAction1_64;
    MR_Word parse_tree__write_deps_file__MmakeRuleJar_65;
    MR_Word parse_tree__write_deps_file__Var_75;
    MR_String parse_tree__write_deps_file__Var_76;
    MR_Word parse_tree__write_deps_file__Var_83;
    MR_Word parse_tree__write_deps_file__Var_84;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_87_87;
    MR_String parse_tree__write_deps_file__Var_89;
    MR_String parse_tree__write_deps_file__Var_92;
    MR_String parse_tree__write_deps_file__Var_95;
    MR_String parse_tree__write_deps_file__Var_97;
    MR_String parse_tree__write_deps_file__Var_101;
    MR_String parse_tree__write_deps_file__Var_104;
    MR_String parse_tree__write_deps_file__Var_107;
    MR_String parse_tree__write_deps_file__Var_109;
    MR_String parse_tree__write_deps_file__Var_110;
    MR_String parse_tree__write_deps_file__Var_112;
    MR_String parse_tree__write_deps_file__Var_115;
    MR_String parse_tree__write_deps_file__Var_116;
    MR_String parse_tree__write_deps_file__Var_118;
    MR_Word parse_tree__write_deps_file__Var_122;
    MR_String parse_tree__write_deps_file__Var_127;
    MR_Word parse_tree__write_deps_file__Var_129;
    MR_Word parse_tree__write_deps_file__Var_130;
    MR_Word parse_tree__write_deps_file__Var_131;
    MR_Word parse_tree__write_deps_file__Var_132;
    MR_Word parse_tree__write_deps_file__Var_134;
    MR_Word parse_tree__write_deps_file__Var_135;
    MR_Word parse_tree__write_deps_file__Var_137;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_139_139;
    MR_String parse_tree__write_deps_file__Var_161;
    MR_String parse_tree__write_deps_file__Var_164;
    MR_Word parse_tree__write_deps_file__Var_166;
    MR_Word parse_tree__write_deps_file__Var_167;
    MR_Word parse_tree__write_deps_file__Var_169;
    MR_Word parse_tree__write_deps_file__Var_170;
    MR_Word parse_tree__write_deps_file__Var_171;
    MR_Word parse_tree__write_deps_file__Var_175;
    MR_Word parse_tree__write_deps_file__Var_179;
    MR_Word parse_tree__write_deps_file__Var_180;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_184_184;
    MR_String parse_tree__write_deps_file__Var_186;
    MR_String parse_tree__write_deps_file__Var_189;
    MR_String parse_tree__write_deps_file__Var_191;
    MR_String parse_tree__write_deps_file__Var_192;
    MR_String parse_tree__write_deps_file__Var_194;
    MR_String parse_tree__write_deps_file__Var_196;
    MR_String parse_tree__write_deps_file__Var_199;
    MR_String parse_tree__write_deps_file__Var_202;
    MR_Word parse_tree__write_deps_file__Var_206;
    MR_Word parse_tree__write_deps_file__Var_207;
    MR_Word parse_tree__write_deps_file__Var_210;
    MR_Word parse_tree__write_deps_file__Var_211;
    MR_Word parse_tree__write_deps_file__Var_212;
    MR_Word parse_tree__write_deps_file__Var_217;
    MR_Word parse_tree__write_deps_file__Var_218;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_221_221;
    MR_String parse_tree__write_deps_file__Var_224;
    MR_String parse_tree__write_deps_file__Var_225;
    MR_String parse_tree__write_deps_file__Var_227;
    MR_Word parse_tree__write_deps_file__Var_233;
    MR_Word parse_tree__write_deps_file__Var_234;
    MR_Word parse_tree__write_deps_file__Var_236;
    MR_Word parse_tree__write_deps_file__Var_237;
    MR_Word parse_tree__write_deps_file__Var_238;
    MR_Word parse_tree__write_deps_file__Var_239;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_241_241;
    MR_String parse_tree__write_deps_file__Var_243;
    MR_String parse_tree__write_deps_file__Var_244;
    MR_Word parse_tree__write_deps_file__Var_250;

    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_16, (MR_Integer) 1, (MR_String) "", parse_tree__write_deps_file__ModuleName_17, parse_tree__write_deps_file__ExeFileName_23);
    parse_tree__write_deps_file__Var_76 = mercury__string__f_43_43_2_f_0(*parse_tree__write_deps_file__ExeFileName_23, (MR_String) "\044(EXT_FOR_EXE)");
    {
      parse_tree__write_deps_file__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_75, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_76));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__MmakeRuleExtForExe_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExtForExe_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExtForExe_29, 1) = ((MR_Box) ((MR_String) "ext_for_exe"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExtForExe_29, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExtForExe_29, 3) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_23));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExtForExe_29, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_75));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExtForExe_29, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_84, 0) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleExtForExe_29));
    }
    {
      parse_tree__write_deps_file__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_83, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_84));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__MmakeFragmentExtForExe_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeFragmentExtForExe_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__write_deps_file_scalar_common_1[112])));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeFragmentExtForExe_30, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_83));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeFragmentExtForExe_30, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    libs__mmakefiles__add_mmake_fragment_3_p_0(parse_tree__write_deps_file__MmakeFragmentExtForExe_30, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_66, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_87_87);
    parse_tree__write_deps_file__Var_89 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_18, (MR_String) ",\044(ALL_MLLIBS_DEP))");
    parse_tree__write_deps_file__All_MLLibsDep_31 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", parse_tree__write_deps_file__Var_89);
    parse_tree__write_deps_file__Var_92 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_18, (MR_String) ",\044(ALL_MLOBJS))");
    parse_tree__write_deps_file__All_MLObjs_32 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", parse_tree__write_deps_file__Var_92);
    parse_tree__write_deps_file__Var_97 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_18, (MR_String) ",\044(ALL_MLOBJS)))");
    parse_tree__write_deps_file__Var_95 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", parse_tree__write_deps_file__Var_97);
    parse_tree__write_deps_file__All_MLPicObjs_33 = mercury__string__f_43_43_2_f_0((MR_String) "\044(patsubst %.o,%.\044(EXT_FOR_PIC_OBJECTS),", parse_tree__write_deps_file__Var_95);
    parse_tree__write_deps_file__NL_All_MLObjs_34 = mercury__string__f_43_43_2_f_0((MR_String) "\\\n\t\t", parse_tree__write_deps_file__All_MLObjs_32);
    parse_tree__write_deps_file__Var_101 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_18, (MR_String) ".classes)");
    parse_tree__write_deps_file__ModuleMakeVarNameClasses_35 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_101);
    parse_tree__write_deps_file__Var_104 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_18, (MR_String) ".os)");
    parse_tree__write_deps_file__ModuleMakeVarNameOs_36 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_104);
    parse_tree__write_deps_file__Var_112 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__InitObjFileName_20, (MR_String) " \\");
    parse_tree__write_deps_file__Var_110 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXT_FOR_EXE) ", parse_tree__write_deps_file__Var_112);
    parse_tree__write_deps_file__Var_109 = mercury__string__f_43_43_2_f_0(*parse_tree__write_deps_file__ExeFileName_23, parse_tree__write_deps_file__Var_110);
    parse_tree__write_deps_file__Var_107 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXEFILE_OPT)", parse_tree__write_deps_file__Var_109);
    parse_tree__write_deps_file__NonJavaMainRuleAction1Line1_37 = mercury__string__f_43_43_2_f_0((MR_String) "\044(ML) \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) -- \044(ALL_LDFLAGS) ", parse_tree__write_deps_file__Var_107);
    parse_tree__write_deps_file__Var_118 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__NL_All_MLObjs_34, (MR_String) " \044(ALL_MLLIBS)");
    parse_tree__write_deps_file__Var_116 = mercury__string__f_43_43_2_f_0((MR_String) " ", parse_tree__write_deps_file__Var_118);
    parse_tree__write_deps_file__Var_115 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarNameOs_36, parse_tree__write_deps_file__Var_116);
    parse_tree__write_deps_file__NonJavaMainRuleAction1Line2_38 = mercury__string__f_43_43_2_f_0((MR_String) "\t", parse_tree__write_deps_file__Var_115);
    {
      parse_tree__write_deps_file__Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_122, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameClasses_35));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__MmakeRuleExecutableJava_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableJava_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableJava_39, 1) = ((MR_Box) ((MR_String) "executable_java"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableJava_39, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableJava_39, 3) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_23));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableJava_39, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_122));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableJava_39, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__write_deps_file__Var_127 = mercury__string__f_43_43_2_f_0(*parse_tree__write_deps_file__ExeFileName_23, (MR_String) "\044(EXT_FOR_EXE)");
    {
      parse_tree__write_deps_file__Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_132, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLLibsDep_31));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_131, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjs_32));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_131, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_132));
    }
    {
      parse_tree__write_deps_file__Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_130, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_130, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_131));
    }
    {
      parse_tree__write_deps_file__Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_129, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameOs_36));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_129, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_130));
    }
    {
      parse_tree__write_deps_file__Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_135, 0) = ((MR_Box) (parse_tree__write_deps_file__NonJavaMainRuleAction1Line2_38));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_134, 0) = ((MR_Box) (parse_tree__write_deps_file__NonJavaMainRuleAction1Line1_37));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_134, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_135));
    }
    {
      parse_tree__write_deps_file__MmakeRuleExecutableNonJava_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableNonJava_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableNonJava_40, 1) = ((MR_Box) ((MR_String) "executable_non_java"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableNonJava_40, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableNonJava_40, 3) = ((MR_Box) (parse_tree__write_deps_file__Var_127));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableNonJava_40, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_129));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableNonJava_40, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_134));
    }
    parse_tree__write_deps_file__Var_137 = (MR_Word) &parse_tree__write_deps_file_scalar_common_6[0];
    {
      parse_tree__write_deps_file__MmakeFragmentExecutable_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentExecutable_41, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_137));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentExecutable_41, 1) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleExecutableJava_39));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentExecutable_41, 2) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleExecutableNonJava_40));
    }
    libs__mmakefiles__add_mmake_fragment_3_p_0(parse_tree__write_deps_file__MmakeFragmentExecutable_41, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_87_87, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_139_139);
    parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_16, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_17, (MR_String) "", (MR_Integer) 1, &parse_tree__write_deps_file__LibTargetName_42);
    parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_16, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_17, (MR_String) ".\044A", (MR_Integer) 0, parse_tree__write_deps_file__LibFileName_25);
    parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_16, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_17, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 0, parse_tree__write_deps_file__SharedLibFileName_26);
    parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_16, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_17, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 1, &parse_tree__write_deps_file__MaybeSharedLibFileName_43);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_16, (MR_Integer) 1, (MR_String) ".jar", parse_tree__write_deps_file__ModuleName_17, parse_tree__write_deps_file__JarFileName_24);
    libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_16, (MR_Integer) 620, &parse_tree__write_deps_file__UseInstallName_44);
    switch (parse_tree__write_deps_file__UseInstallName_44) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__write_deps_file__InstallNameOpt_45 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        libs__file_util__get_install_name_option_3_p_0(parse_tree__write_deps_file__Globals_16, *parse_tree__write_deps_file__SharedLibFileName_26, &parse_tree__write_deps_file__InstallNameOpt_45);
        break;
    }
    parse_tree__write_deps_file__Var_161 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_18, (MR_String) ".ints)");
    parse_tree__write_deps_file__ModuleMakeVarNameInts_46 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_161);
    parse_tree__write_deps_file__Var_164 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_18, (MR_String) ".int3s)");
    parse_tree__write_deps_file__ModuleMakeVarNameInt3s_47 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_164);
    parse_tree__write_deps_file__TypeCtorInfo_253_253 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      parse_tree__write_deps_file__Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_167, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameInt3s_47));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_166, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameInts_46));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_166, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_167));
    }
    {
      parse_tree__write_deps_file__Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_171, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_19));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_171, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__write_deps_file__Var_170 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_253_253, parse_tree__write_deps_file__MaybeTransOptsVar_22, parse_tree__write_deps_file__Var_171);
    parse_tree__write_deps_file__Var_169 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_253_253, parse_tree__write_deps_file__MaybeOptsVar_21, parse_tree__write_deps_file__Var_170);
    parse_tree__write_deps_file__AllIntSources_48 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_253_253, parse_tree__write_deps_file__Var_166, parse_tree__write_deps_file__Var_169);
    {
      parse_tree__write_deps_file__Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_175, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_24));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_175, 1) = ((MR_Box) (parse_tree__write_deps_file__AllIntSources_48));
    }
    {
      parse_tree__write_deps_file__MmakeRuleLibTargetJava_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetJava_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetJava_49, 1) = ((MR_Box) ((MR_String) "lib_target_java"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetJava_49, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetJava_49, 3) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_42));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetJava_49, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_175));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetJava_49, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_180, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeSharedLibFileName_43));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_180, 1) = ((MR_Box) (parse_tree__write_deps_file__AllIntSources_48));
    }
    {
      parse_tree__write_deps_file__Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_179, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_25));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_179, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_180));
    }
    {
      parse_tree__write_deps_file__MmakeRuleLibTargetNonJava_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetNonJava_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetNonJava_50, 1) = ((MR_Box) ((MR_String) "lib_target_non_java"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetNonJava_50, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetNonJava_50, 3) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_42));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetNonJava_50, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_179));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetNonJava_50, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__MmakeFragmentLibTarget_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentLibTarget_51, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_137));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentLibTarget_51, 1) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleLibTargetJava_49));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentLibTarget_51, 2) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleLibTargetNonJava_50));
    }
    libs__mmakefiles__add_mmake_fragment_3_p_0(parse_tree__write_deps_file__MmakeFragmentLibTarget_51, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_139_139, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_184_184);
    parse_tree__write_deps_file__Var_186 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_18, (MR_String) ".pic_os)");
    parse_tree__write_deps_file__ModuleMakeVarNamePicOs_52 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_186);
    parse_tree__write_deps_file__Var_196 = mercury__string__f_43_43_2_f_0(*parse_tree__write_deps_file__SharedLibFileName_26, (MR_String) " \\");
    parse_tree__write_deps_file__Var_194 = mercury__string__f_43_43_2_f_0((MR_String) "-o ", parse_tree__write_deps_file__Var_196);
    parse_tree__write_deps_file__Var_192 = mercury__string__f_43_43_2_f_0((MR_String) " \044(ALL_LD_LIBFLAGS) ", parse_tree__write_deps_file__Var_194);
    parse_tree__write_deps_file__Var_191 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__InstallNameOpt_45, parse_tree__write_deps_file__Var_192);
    parse_tree__write_deps_file__Var_189 = mercury__string__f_43_43_2_f_0((MR_String) "-- ", parse_tree__write_deps_file__Var_191);
    parse_tree__write_deps_file__SharedLibAction1Line1_53 = mercury__string__f_43_43_2_f_0((MR_String) "\044(ML) --make-shared-lib \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) ", parse_tree__write_deps_file__Var_189);
    parse_tree__write_deps_file__Var_199 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarNamePicOs_52, (MR_String) " \\");
    parse_tree__write_deps_file__SharedLibAction1Line2_54 = mercury__string__f_43_43_2_f_0((MR_String) "\t", parse_tree__write_deps_file__Var_199);
    parse_tree__write_deps_file__Var_202 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__All_MLPicObjs_33, (MR_String) " \044(ALL_MLLIBS)");
    parse_tree__write_deps_file__SharedLibAction1Line3_55 = mercury__string__f_43_43_2_f_0((MR_String) "\t", parse_tree__write_deps_file__Var_202);
    {
      parse_tree__write_deps_file__Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_207, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLPicObjs_33));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_207, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_132));
    }
    {
      parse_tree__write_deps_file__Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_206, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNamePicOs_52));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_206, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_207));
    }
    {
      parse_tree__write_deps_file__Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_212, 0) = ((MR_Box) (parse_tree__write_deps_file__SharedLibAction1Line3_55));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_212, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_211, 0) = ((MR_Box) (parse_tree__write_deps_file__SharedLibAction1Line2_54));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_211, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_212));
    }
    {
      parse_tree__write_deps_file__Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_210, 0) = ((MR_Box) (parse_tree__write_deps_file__SharedLibAction1Line1_53));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_210, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_211));
    }
    {
      parse_tree__write_deps_file__MmakeRuleSharedLib_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleSharedLib_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleSharedLib_56, 1) = ((MR_Box) ((MR_String) "shared_lib"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleSharedLib_56, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleSharedLib_56, 3) = ((MR_Box) (*parse_tree__write_deps_file__SharedLibFileName_26));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleSharedLib_56, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_206));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleSharedLib_56, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_210));
    }
    {
      parse_tree__write_deps_file__Var_218 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_218, 0) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleSharedLib_56));
    }
    {
      parse_tree__write_deps_file__Var_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_217, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_218));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_217, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__MmakeFragmentSharedLib_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeFragmentSharedLib_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__write_deps_file_scalar_common_1[113])));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeFragmentSharedLib_57, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_217));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeFragmentSharedLib_57, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    libs__mmakefiles__add_mmake_fragment_3_p_0(parse_tree__write_deps_file__MmakeFragmentSharedLib_57, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_184_184, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_221_221);
    parse_tree__write_deps_file__LibAction1_58 = mercury__string__f_43_43_2_f_0((MR_String) "rm -f ", *parse_tree__write_deps_file__LibFileName_25);
    parse_tree__write_deps_file__Var_227 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarNameOs_36, (MR_String) " \\");
    parse_tree__write_deps_file__Var_225 = mercury__string__f_43_43_2_f_0((MR_String) " ", parse_tree__write_deps_file__Var_227);
    parse_tree__write_deps_file__Var_224 = mercury__string__f_43_43_2_f_0(*parse_tree__write_deps_file__LibFileName_25, parse_tree__write_deps_file__Var_225);
    parse_tree__write_deps_file__LibAction2Line1_59 = mercury__string__f_43_43_2_f_0((MR_String) "\044(AR) \044(ALL_ARFLAGS) \044(AR_LIBFILE_OPT)", parse_tree__write_deps_file__Var_224);
    parse_tree__write_deps_file__LibAction2Line2_60 = mercury__string__f_43_43_2_f_0((MR_String) "\t", parse_tree__write_deps_file__All_MLObjs_32);
    parse_tree__write_deps_file__LibAction3_61 = mercury__string__f_43_43_2_f_0((MR_String) "\044(RANLIB) \044(ALL_RANLIBFLAGS) ", *parse_tree__write_deps_file__LibFileName_25);
    {
      parse_tree__write_deps_file__Var_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_234, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjs_32));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_234, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_233, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameOs_36));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_233, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_234));
    }
    {
      parse_tree__write_deps_file__Var_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_239, 0) = ((MR_Box) (parse_tree__write_deps_file__LibAction3_61));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_239, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_238, 0) = ((MR_Box) (parse_tree__write_deps_file__LibAction2Line2_60));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_238, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_239));
    }
    {
      parse_tree__write_deps_file__Var_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_237, 0) = ((MR_Box) (parse_tree__write_deps_file__LibAction2Line1_59));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_237, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_238));
    }
    {
      parse_tree__write_deps_file__Var_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_236, 0) = ((MR_Box) (parse_tree__write_deps_file__LibAction1_58));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_236, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_237));
    }
    {
      parse_tree__write_deps_file__MmakeRuleLib_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLib_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLib_62, 1) = ((MR_Box) ((MR_String) "lib"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLib_62, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLib_62, 3) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_25));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLib_62, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_233));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLib_62, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_236));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeRuleLib_62, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_221_221, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_241_241);
    parse_tree__module_cmds__list_class_files_for_jar_mmake_3_p_0(parse_tree__write_deps_file__Globals_16, parse_tree__write_deps_file__ModuleMakeVarNameClasses_35, &parse_tree__write_deps_file__ListClassFiles_63);
    parse_tree__write_deps_file__Var_244 = mercury__string__f_43_43_2_f_0((MR_String) " ", parse_tree__write_deps_file__ListClassFiles_63);
    parse_tree__write_deps_file__Var_243 = mercury__string__f_43_43_2_f_0(*parse_tree__write_deps_file__JarFileName_24, parse_tree__write_deps_file__Var_244);
    parse_tree__write_deps_file__JarAction1_64 = mercury__string__f_43_43_2_f_0((MR_String) "\044(JAR) \044(JAR_CREATE_FLAGS) ", parse_tree__write_deps_file__Var_243);
    {
      parse_tree__write_deps_file__Var_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_250, 0) = ((MR_Box) (parse_tree__write_deps_file__JarAction1_64));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_250, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__MmakeRuleJar_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleJar_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleJar_65, 1) = ((MR_Box) ((MR_String) "jar"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleJar_65, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleJar_65, 3) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_24));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleJar_65, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_122));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleJar_65, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_250));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeRuleJar_65, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_241_241, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_67);
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
    MR_Word parse_tree__write_deps_file__Verbose_12;
    MR_String parse_tree__write_deps_file__DvFileName_13;
    MR_Word parse_tree__write_deps_file__DvResult_14;

    libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 56, &parse_tree__write_deps_file__Verbose_12);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 0, (MR_String) ".dv", parse_tree__write_deps_file__ModuleName_9, &parse_tree__write_deps_file__DvFileName_13);
    libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, parse_tree__write_deps_file__DvFileName_13);
    libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "\'...\n");
    mercury__io__open_output_4_p_0(parse_tree__write_deps_file__DvFileName_13, &parse_tree__write_deps_file__DvResult_14);
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__DvResult_14)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word parse_tree__write_deps_file__IOError_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__DvResult_14, (MR_Integer) 0)));
      MR_String parse_tree__write_deps_file__IOErrorMessage_19;
      MR_String parse_tree__write_deps_file__DvMessage_20;
      MR_Word parse_tree__write_deps_file__Var_36;
      MR_Word parse_tree__write_deps_file__Var_38;
      MR_Word parse_tree__write_deps_file__Var_39;
      MR_Word parse_tree__write_deps_file__Var_41;

      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
      mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_18, &parse_tree__write_deps_file__IOErrorMessage_19);
      {
        parse_tree__write_deps_file__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_41, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_19));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_39, 0) = ((MR_Box) ((MR_String) "\' for output: "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_39, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_41));
      }
      {
        parse_tree__write_deps_file__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_38, 0) = ((MR_Box) (parse_tree__write_deps_file__DvFileName_13));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_38, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_39));
      }
      {
        parse_tree__write_deps_file__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_36, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_36, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_38));
      }
      mercury__string__append_list_2_p_0(parse_tree__write_deps_file__Var_36, &parse_tree__write_deps_file__DvMessage_20);
      libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__DvMessage_20);
    }
    else
    {
      MR_Word parse_tree__write_deps_file__DvStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__DvResult_14, (MR_Integer) 0)));
      MR_Word parse_tree__write_deps_file__MmakeFile0_16;
      MR_Word parse_tree__write_deps_file__MmakeFile_17;

      libs__mmakefiles__start_mmakefile_1_p_0(&parse_tree__write_deps_file__MmakeFile0_16);
      parse_tree__write_deps_file__generate_dv_file_8_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__SourceFileName_8, parse_tree__write_deps_file__ModuleName_9, parse_tree__write_deps_file__DepsMap_10, parse_tree__write_deps_file__MmakeFile0_16, &parse_tree__write_deps_file__MmakeFile_17);
      libs__mmakefiles__end_mmakefile_4_p_0(parse_tree__write_deps_file__DvStream_15, parse_tree__write_deps_file__MmakeFile_17);
      mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DvStream_15);
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% done.\n");
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_6(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_String parse_tree__write_deps_file__conv4_LambdaHeadVar__2_131;

    parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1171__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv4_LambdaHeadVar__2_131);
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv4_LambdaHeadVar__2_131));
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_5(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

    parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1140__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    return parse_tree__write_deps_file__succeeded;
  }
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_4(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
{
  {
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_String parse_tree__write_deps_file__conv3_HeadVar__3_3;

    parse_tree__write_deps_file__conv3_HeadVar__3_3 = parse_tree__write_deps_file__add_suffix_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv3_HeadVar__3_3));
    return parse_tree__write_deps_file__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_3(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
{
  {
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_String parse_tree__write_deps_file__conv2_HeadVar__3_3;

    parse_tree__write_deps_file__conv2_HeadVar__3_3 = parse_tree__write_deps_file__add_suffix_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv2_HeadVar__3_3));
    return parse_tree__write_deps_file__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_2(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_String parse_tree__write_deps_file__conv1_FileName_6;

    parse_tree__write_deps_file__get_source_file_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv1_FileName_6);
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_FileName_6));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_Word parse_tree__write_deps_file__conv0_Result_6;

    parse_tree__write_deps_file__compare_module_names_3_p_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_2), &parse_tree__write_deps_file__conv0_Result_6);
    *parse_tree__write_deps_file__wrapper_arg_3 = ((MR_Box) (parse_tree__write_deps_file__conv0_Result_6));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0(
  MR_Word parse_tree__write_deps_file__Globals_9,
  MR_String parse_tree__write_deps_file__SourceFileName_10,
  MR_Word parse_tree__write_deps_file__ModuleName_11,
  MR_Word parse_tree__write_deps_file__DepsMap_12,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_91,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_92)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_490_490;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_497_497;
    MR_String parse_tree__write_deps_file__ModuleNameString_15;
    MR_String parse_tree__write_deps_file__Version_16;
    MR_String parse_tree__write_deps_file__FullArch_17;
    MR_Word parse_tree__write_deps_file__MmakeStartComment_18;
    MR_Word parse_tree__write_deps_file__Modules0_19;
    MR_Word parse_tree__write_deps_file__Modules1_20;
    MR_Word parse_tree__write_deps_file__Modules_21;
    MR_String parse_tree__write_deps_file__ModuleMakeVarName_22;
    MR_Word parse_tree__write_deps_file__SourceFiles0_23;
    MR_Word parse_tree__write_deps_file__SourceFiles_24;
    MR_Word parse_tree__write_deps_file__MmakeVarModuleMs_25;
    MR_Word parse_tree__write_deps_file__MmakeVarModuleErrs_26;
    MR_Word parse_tree__write_deps_file__ModulesSourceFileNames_27;
    MR_Word parse_tree__write_deps_file__MmakeVarModuleMods_28;
    MR_Word parse_tree__write_deps_file__ModulesWithSubModules_29;
    MR_Word parse_tree__write_deps_file__ModulesWithSubModulesSourceFileNames_33;
    MR_Word parse_tree__write_deps_file__MmakeVarModuleParentMods_34;
    MR_Word parse_tree__write_deps_file__Target_35;
    MR_Word parse_tree__write_deps_file__ForeignModulesAndExts_36;
    MR_Word parse_tree__write_deps_file__ForeignModules_37;
    MR_Word parse_tree__write_deps_file__ForeignModulesFileNames_38;
    MR_Word parse_tree__write_deps_file__MmakeVarForeignModules_39;
    MR_Word parse_tree__write_deps_file__MakeFileName_40;
    MR_Word parse_tree__write_deps_file__ForeignFileNames_46;
    MR_Word parse_tree__write_deps_file__MmakeVarForeignFileNames_47;
    MR_Word parse_tree__write_deps_file__MmakeVarForeignDlls_48;
    MR_Word parse_tree__write_deps_file__MmakeVarInitCs_49;
    MR_Word parse_tree__write_deps_file__ExtraLinkObjs_50;
    MR_Word parse_tree__write_deps_file__ExtraLinkObjFileNamesC_51;
    MR_Word parse_tree__write_deps_file__MmakeVarCs_52;
    MR_Word parse_tree__write_deps_file__MmakeVarDlls_53;
    MR_Word parse_tree__write_deps_file__ExtraLinkObjFileNamesOs_54;
    MR_Word parse_tree__write_deps_file__MmakeVarAllOs_55;
    MR_Word parse_tree__write_deps_file__ExtraLinkObjFileNamesPicOs_56;
    MR_Word parse_tree__write_deps_file__MmakeVarAllPicOs_57;
    MR_Word parse_tree__write_deps_file__MmakeVarOs_58;
    MR_Word parse_tree__write_deps_file__MmakeVarPicOs_59;
    MR_Word parse_tree__write_deps_file__MmakeVarUseds_60;
    MR_Word parse_tree__write_deps_file__MmakeVarJavas_61;
    MR_Word parse_tree__write_deps_file__MmakeVarClasses_62;
    MR_Word parse_tree__write_deps_file__MmakeVarDirs_63;
    MR_Word parse_tree__write_deps_file__MmakeVarDirOs_64;
    MR_Word parse_tree__write_deps_file__MmakeVarDates_65;
    MR_Word parse_tree__write_deps_file__MmakeVarDate0s_66;
    MR_Word parse_tree__write_deps_file__MmakeVarDate3s_67;
    MR_Word parse_tree__write_deps_file__MmakeVarOptDates_68;
    MR_Word parse_tree__write_deps_file__MmakeVarTransOptDates_69;
    MR_Word parse_tree__write_deps_file__MmakeVarCDates_70;
    MR_Word parse_tree__write_deps_file__MmakeVarJavaDates_71;
    MR_Word parse_tree__write_deps_file__MmakeVarDs_72;
    MR_Word parse_tree__write_deps_file__MmakeVarModuleDeps_73;
    MR_Word parse_tree__write_deps_file__HighLevelCode_74;
    MR_Word parse_tree__write_deps_file__MihSources_75;
    MR_Word parse_tree__write_deps_file__MmakeVarMihs_76;
    MR_Word parse_tree__write_deps_file__MhSources_77;
    MR_Word parse_tree__write_deps_file__MmakeVarMhs_78;
    MR_Word parse_tree__write_deps_file__MmakeVarAllMihs_79;
    MR_Word parse_tree__write_deps_file__MmakeVarAllMhs_80;
    MR_Word parse_tree__write_deps_file__MmakeVarInts_81;
    MR_Word parse_tree__write_deps_file__MmakeVarInt0s_82;
    MR_Word parse_tree__write_deps_file__MmakeVarAllInt0s_83;
    MR_Word parse_tree__write_deps_file__MmakeVarInt3s_84;
    MR_Word parse_tree__write_deps_file__MmakeVarOpts_85;
    MR_Word parse_tree__write_deps_file__MmakeVarTransOpts_86;
    MR_Word parse_tree__write_deps_file__MmakeVarAnalysiss_87;
    MR_Word parse_tree__write_deps_file__MmakeVarRequests_88;
    MR_Word parse_tree__write_deps_file__MmakeVarImdgs_89;
    MR_Word parse_tree__write_deps_file__MmakeVarProfs_90;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_96_96;
    MR_Word parse_tree__write_deps_file__Var_98;
    MR_String parse_tree__write_deps_file__Var_99;
    MR_Word parse_tree__write_deps_file__Var_101;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_104_104;
    MR_String parse_tree__write_deps_file__Var_105;
    MR_Word parse_tree__write_deps_file__Var_107;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_110_110;
    MR_String parse_tree__write_deps_file__Var_113;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_115_115;
    MR_Word parse_tree__write_deps_file__Var_116;
    MR_String parse_tree__write_deps_file__Var_122;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_124_124;
    MR_String parse_tree__write_deps_file__Var_127;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_129_129;
    MR_String parse_tree__write_deps_file__Var_137;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_139_139;
    MR_String parse_tree__write_deps_file__Var_140;
    MR_String parse_tree__write_deps_file__Var_142;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_147_147;
    MR_String parse_tree__write_deps_file__Var_148;
    MR_String parse_tree__write_deps_file__Var_150;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_155_155;
    MR_String parse_tree__write_deps_file__Var_158;
    MR_Word parse_tree__write_deps_file__Var_160;
    MR_String parse_tree__write_deps_file__Var_161;
    MR_String parse_tree__write_deps_file__Var_163;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_165_165;
    MR_String parse_tree__write_deps_file__Var_166;
    MR_String parse_tree__write_deps_file__Var_168;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_173_173;
    MR_String parse_tree__write_deps_file__Var_176;
    MR_Word parse_tree__write_deps_file__Var_178;
    MR_String parse_tree__write_deps_file__Var_179;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_184_184;
    MR_String parse_tree__write_deps_file__Var_187;
    MR_Word parse_tree__write_deps_file__Var_189;
    MR_String parse_tree__write_deps_file__Var_190;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_195_195;
    MR_String parse_tree__write_deps_file__Var_196;
    MR_String parse_tree__write_deps_file__Var_198;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_203_203;
    MR_String parse_tree__write_deps_file__Var_204;
    MR_String parse_tree__write_deps_file__Var_206;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_211_211;
    MR_String parse_tree__write_deps_file__Var_212;
    MR_String parse_tree__write_deps_file__Var_214;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_219_219;
    MR_String parse_tree__write_deps_file__Var_220;
    MR_String parse_tree__write_deps_file__Var_222;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_227_227;
    MR_String parse_tree__write_deps_file__Var_228;
    MR_Word parse_tree__write_deps_file__Var_230;
    MR_String parse_tree__write_deps_file__Var_231;
    MR_Word parse_tree__write_deps_file__Var_236;
    MR_String parse_tree__write_deps_file__Var_237;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_243_243;
    MR_String parse_tree__write_deps_file__Var_244;
    MR_String parse_tree__write_deps_file__Var_246;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_251_251;
    MR_String parse_tree__write_deps_file__Var_252;
    MR_String parse_tree__write_deps_file__Var_254;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_259_259;
    MR_String parse_tree__write_deps_file__Var_260;
    MR_String parse_tree__write_deps_file__Var_262;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_267_267;
    MR_String parse_tree__write_deps_file__Var_268;
    MR_String parse_tree__write_deps_file__Var_270;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_275_275;
    MR_String parse_tree__write_deps_file__Var_276;
    MR_String parse_tree__write_deps_file__Var_278;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_283_283;
    MR_String parse_tree__write_deps_file__Var_284;
    MR_String parse_tree__write_deps_file__Var_286;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_291_291;
    MR_String parse_tree__write_deps_file__Var_292;
    MR_String parse_tree__write_deps_file__Var_294;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_299_299;
    MR_String parse_tree__write_deps_file__Var_300;
    MR_String parse_tree__write_deps_file__Var_302;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_307_307;
    MR_String parse_tree__write_deps_file__Var_308;
    MR_String parse_tree__write_deps_file__Var_310;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_315_315;
    MR_String parse_tree__write_deps_file__Var_316;
    MR_String parse_tree__write_deps_file__Var_318;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_323_323;
    MR_String parse_tree__write_deps_file__Var_324;
    MR_String parse_tree__write_deps_file__Var_326;
    MR_String parse_tree__write_deps_file__Var_332;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_334_334;
    MR_String parse_tree__write_deps_file__Var_342;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_344_344;
    MR_String parse_tree__write_deps_file__Var_351;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_353_353;
    MR_String parse_tree__write_deps_file__Var_354;
    MR_String parse_tree__write_deps_file__Var_356;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_361_361;
    MR_String parse_tree__write_deps_file__Var_362;
    MR_String parse_tree__write_deps_file__Var_364;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_369_369;
    MR_String parse_tree__write_deps_file__Var_370;
    MR_Word parse_tree__write_deps_file__Var_372;
    MR_String parse_tree__write_deps_file__Var_373;
    MR_Word parse_tree__write_deps_file__Var_378;
    MR_String parse_tree__write_deps_file__Var_379;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_385_385;
    MR_String parse_tree__write_deps_file__Var_386;
    MR_String parse_tree__write_deps_file__Var_388;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_393_393;
    MR_String parse_tree__write_deps_file__Var_394;
    MR_String parse_tree__write_deps_file__Var_396;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_401_401;
    MR_String parse_tree__write_deps_file__Var_402;
    MR_String parse_tree__write_deps_file__Var_404;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_409_409;
    MR_String parse_tree__write_deps_file__Var_410;
    MR_String parse_tree__write_deps_file__Var_412;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_417_417;
    MR_String parse_tree__write_deps_file__Var_418;
    MR_String parse_tree__write_deps_file__Var_420;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_425_425;
    MR_String parse_tree__write_deps_file__Var_426;
    MR_String parse_tree__write_deps_file__Var_428;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_433_433;
    MR_String parse_tree__write_deps_file__Var_434;
    MR_String parse_tree__write_deps_file__Var_436;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_441_441;
    MR_String parse_tree__write_deps_file__Var_442;
    MR_String parse_tree__write_deps_file__Var_444;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_449_449;
    MR_String parse_tree__write_deps_file__Var_450;
    MR_String parse_tree__write_deps_file__Var_452;
    MR_String parse_tree__write_deps_file__Var_507;
    MR_String parse_tree__write_deps_file__Var_510;
    MR_String parse_tree__write_deps_file__Var_513;
    MR_String parse_tree__write_deps_file__Var_516;
    MR_String parse_tree__write_deps_file__Var_519;
    MR_String parse_tree__write_deps_file__Var_522;
    MR_String parse_tree__write_deps_file__Var_525;
    MR_String parse_tree__write_deps_file__Var_528;
    MR_String parse_tree__write_deps_file__Var_531;
    MR_String parse_tree__write_deps_file__Var_534;
    MR_String parse_tree__write_deps_file__Var_537;
    MR_String parse_tree__write_deps_file__Var_540;
    MR_String parse_tree__write_deps_file__Var_543;
    MR_String parse_tree__write_deps_file__Var_546;
    MR_String parse_tree__write_deps_file__Var_549;
    MR_String parse_tree__write_deps_file__Var_552;
    MR_String parse_tree__write_deps_file__Var_555;
    MR_String parse_tree__write_deps_file__Var_558;
    MR_String parse_tree__write_deps_file__Var_561;
    MR_String parse_tree__write_deps_file__Var_564;
    MR_String parse_tree__write_deps_file__Var_567;
    MR_String parse_tree__write_deps_file__Var_570;
    MR_String parse_tree__write_deps_file__Var_572;
    MR_String parse_tree__write_deps_file__Var_573;
    MR_String parse_tree__write_deps_file__Var_582;
    MR_String parse_tree__write_deps_file__Var_585;
    MR_String parse_tree__write_deps_file__Var_588;
    MR_String parse_tree__write_deps_file__Var_591;
    MR_String parse_tree__write_deps_file__Var_594;
    MR_String parse_tree__write_deps_file__Var_597;
    MR_String parse_tree__write_deps_file__Var_600;
    MR_String parse_tree__write_deps_file__Var_603;
    MR_String parse_tree__write_deps_file__Var_606;
    MR_String parse_tree__write_deps_file__Var_609;
    MR_String parse_tree__write_deps_file__Var_612;
    MR_String parse_tree__write_deps_file__Var_615;
    MR_String parse_tree__write_deps_file__Var_618;
    MR_Box parse_tree__write_deps_file__conv5_STATE_VARIABLE_IO_136_136;

    parse_tree__write_deps_file__ModuleNameString_15 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_11);
    mercury__library__version_2_p_0(&parse_tree__write_deps_file__Version_16, &parse_tree__write_deps_file__FullArch_17);
    {
      parse_tree__write_deps_file__MmakeStartComment_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MmakeStartComment_18, 0) = ((MR_Box) ((MR_String) "dependency variables"));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MmakeStartComment_18, 1) = ((MR_Box) (parse_tree__write_deps_file__ModuleNameString_15));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MmakeStartComment_18, 2) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_10));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MmakeStartComment_18, 3) = ((MR_Box) (parse_tree__write_deps_file__Version_16));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MmakeStartComment_18, 4) = ((MR_Box) (parse_tree__write_deps_file__FullArch_17));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeStartComment_18, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_91, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_96_96);
    parse_tree__write_deps_file__TypeCtorInfo_490_490 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    mercury__map__keys_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_490_490, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_12, &parse_tree__write_deps_file__Modules0_19);
    parse_tree__write_deps_file__select_ok_modules_3_p_0(parse_tree__write_deps_file__Modules0_19, parse_tree__write_deps_file__DepsMap_12, &parse_tree__write_deps_file__Modules1_20);
    mercury__list__sort_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_490_490, (MR_Word) &parse_tree__write_deps_file_scalar_common_2[6], parse_tree__write_deps_file__Modules1_20, &parse_tree__write_deps_file__Modules_21);
    parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_11, &parse_tree__write_deps_file__ModuleMakeVarName_22);
    {
      parse_tree__write_deps_file__Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_98, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_98, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_8_p_0_2));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_98, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_98, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_12));
    }
    parse_tree__write_deps_file__TypeCtorInfo_497_497 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__map_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_490_490, parse_tree__write_deps_file__TypeCtorInfo_497_497, parse_tree__write_deps_file__Var_98, parse_tree__write_deps_file__Modules_21, &parse_tree__write_deps_file__SourceFiles0_23);
    mercury__list__sort_and_remove_dups_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_497_497, parse_tree__write_deps_file__SourceFiles0_23, &parse_tree__write_deps_file__SourceFiles_24);
    parse_tree__write_deps_file__Var_99 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".ms");
    parse_tree__write_deps_file__Var_101 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_497_497, parse_tree__write_deps_file__TypeCtorInfo_497_497, (MR_Word) &parse_tree__write_deps_file_scalar_common_9[0], parse_tree__write_deps_file__SourceFiles_24);
    {
      parse_tree__write_deps_file__MmakeVarModuleMs_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarModuleMs_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarModuleMs_25, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_99));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarModuleMs_25, 2) = ((MR_Box) (parse_tree__write_deps_file__Var_101));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarModuleMs_25, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_96_96, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_104_104);
    parse_tree__write_deps_file__Var_105 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".errs");
    parse_tree__write_deps_file__Var_107 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_497_497, parse_tree__write_deps_file__TypeCtorInfo_497_497, (MR_Word) &parse_tree__write_deps_file_scalar_common_9[1], parse_tree__write_deps_file__SourceFiles_24);
    {
      parse_tree__write_deps_file__MmakeVarModuleErrs_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarModuleErrs_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarModuleErrs_26, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_105));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarModuleErrs_26, 2) = ((MR_Box) (parse_tree__write_deps_file__Var_107));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarModuleErrs_26, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_104_104, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_110_110);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) "", parse_tree__write_deps_file__Modules_21, &parse_tree__write_deps_file__ModulesSourceFileNames_27);
    parse_tree__write_deps_file__Var_113 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods");
    {
      parse_tree__write_deps_file__MmakeVarModuleMods_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarModuleMods_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarModuleMods_28, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_113));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarModuleMods_28, 2) = ((MR_Box) (parse_tree__write_deps_file__ModulesSourceFileNames_27));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarModuleMods_28, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_110_110, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_115_115);
    {
      parse_tree__write_deps_file__Var_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_116, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_116, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_8_p_0_5));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_116, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_116, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_12));
    }
    parse_tree__write_deps_file__ModulesWithSubModules_29 = mercury__list__filter_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_490_490, parse_tree__write_deps_file__Var_116, parse_tree__write_deps_file__Modules_21);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) "", parse_tree__write_deps_file__ModulesWithSubModules_29, &parse_tree__write_deps_file__ModulesWithSubModulesSourceFileNames_33);
    parse_tree__write_deps_file__Var_122 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".parent_mods");
    {
      parse_tree__write_deps_file__MmakeVarModuleParentMods_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarModuleParentMods_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarModuleParentMods_34, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_122));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarModuleParentMods_34, 2) = ((MR_Box) (parse_tree__write_deps_file__ModulesWithSubModulesSourceFileNames_33));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarModuleParentMods_34, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_115_115, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_124_124);
    libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_9, &parse_tree__write_deps_file__Target_35);
    parse_tree__write_deps_file__ForeignModulesAndExts_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    parse_tree__write_deps_file__ForeignModules_37 = mercury__assoc_list__keys_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_490_490, parse_tree__write_deps_file__TypeCtorInfo_497_497, parse_tree__write_deps_file__ForeignModulesAndExts_36);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) "", parse_tree__write_deps_file__ForeignModules_37, &parse_tree__write_deps_file__ForeignModulesFileNames_38);
    parse_tree__write_deps_file__Var_127 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".foreign");
    {
      parse_tree__write_deps_file__MmakeVarForeignModules_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarForeignModules_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarForeignModules_39, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_127));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarForeignModules_39, 2) = ((MR_Box) (parse_tree__write_deps_file__ForeignModulesFileNames_38));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarForeignModules_39, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_124_124, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_129_129);
    {
      parse_tree__write_deps_file__MakeFileName_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_40, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_40, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_8_p_0_6));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_40, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_9));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) &parse_tree__write_deps_file_scalar_common_2[1], parse_tree__write_deps_file__TypeCtorInfo_497_497, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__MakeFileName_40, parse_tree__write_deps_file__ForeignModulesAndExts_36, &parse_tree__write_deps_file__ForeignFileNames_46, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv5_STATE_VARIABLE_IO_136_136);
    parse_tree__write_deps_file__Var_137 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".foreign_cs");
    {
      parse_tree__write_deps_file__MmakeVarForeignFileNames_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarForeignFileNames_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarForeignFileNames_47, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_137));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarForeignFileNames_47, 2) = ((MR_Box) (parse_tree__write_deps_file__ForeignFileNames_46));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarForeignFileNames_47, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_129_129, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_139_139);
    parse_tree__write_deps_file__Var_140 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".foreign_dlls");
    parse_tree__write_deps_file__Var_507 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".foreign:%=\044(dlls_subdir)%.dll)");
    parse_tree__write_deps_file__Var_142 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_507);
    {
      parse_tree__write_deps_file__MmakeVarForeignDlls_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarForeignDlls_48, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_140));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarForeignDlls_48, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_142));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarForeignDlls_48, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_139_139, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_147_147);
    parse_tree__write_deps_file__Var_148 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".init_cs");
    parse_tree__write_deps_file__Var_510 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(cs_subdir)%.c)");
    parse_tree__write_deps_file__Var_150 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_510);
    {
      parse_tree__write_deps_file__MmakeVarInitCs_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarInitCs_49, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_148));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarInitCs_49, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_150));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarInitCs_49, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_147_147, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_155_155);
    parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(parse_tree__write_deps_file__Modules_21, parse_tree__write_deps_file__DepsMap_12, &parse_tree__write_deps_file__ExtraLinkObjs_50);
    parse_tree__write_deps_file__get_extra_link_dependencies_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".c", parse_tree__write_deps_file__ExtraLinkObjs_50, &parse_tree__write_deps_file__ExtraLinkObjFileNamesC_51);
    parse_tree__write_deps_file__Var_158 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".cs");
    parse_tree__write_deps_file__Var_163 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".init_cs)");
    parse_tree__write_deps_file__Var_161 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_163);
    {
      parse_tree__write_deps_file__Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_160, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_161));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_160, 1) = ((MR_Box) (parse_tree__write_deps_file__ExtraLinkObjFileNamesC_51));
    }
    {
      parse_tree__write_deps_file__MmakeVarCs_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarCs_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarCs_52, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_158));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarCs_52, 2) = ((MR_Box) (parse_tree__write_deps_file__Var_160));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarCs_52, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_155_155, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_165_165);
    parse_tree__write_deps_file__Var_166 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".dlls");
    parse_tree__write_deps_file__Var_513 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(dlls_subdir)%.dll)");
    parse_tree__write_deps_file__Var_168 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_513);
    {
      parse_tree__write_deps_file__MmakeVarDlls_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarDlls_53, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_166));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarDlls_53, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_168));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarDlls_53, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_165_165, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_173_173);
    parse_tree__write_deps_file__get_extra_link_dependencies_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".\044O", parse_tree__write_deps_file__ExtraLinkObjs_50, &parse_tree__write_deps_file__ExtraLinkObjFileNamesOs_54);
    parse_tree__write_deps_file__Var_176 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".all_os");
    parse_tree__write_deps_file__Var_516 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(os_subdir)%.\044O)");
    parse_tree__write_deps_file__Var_179 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_516);
    {
      parse_tree__write_deps_file__Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_178, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_179));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_178, 1) = ((MR_Box) (parse_tree__write_deps_file__ExtraLinkObjFileNamesOs_54));
    }
    {
      parse_tree__write_deps_file__MmakeVarAllOs_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarAllOs_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarAllOs_55, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_176));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarAllOs_55, 2) = ((MR_Box) (parse_tree__write_deps_file__Var_178));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarAllOs_55, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_173_173, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_184_184);
    parse_tree__write_deps_file__get_extra_link_dependencies_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)", parse_tree__write_deps_file__ExtraLinkObjs_50, &parse_tree__write_deps_file__ExtraLinkObjFileNamesPicOs_56);
    parse_tree__write_deps_file__Var_187 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".all_pic_os");
    parse_tree__write_deps_file__Var_519 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(os_subdir)%.\044(EXT_FOR_PIC_OBJECTS))");
    parse_tree__write_deps_file__Var_190 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_519);
    {
      parse_tree__write_deps_file__Var_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_189, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_190));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_189, 1) = ((MR_Box) (parse_tree__write_deps_file__ExtraLinkObjFileNamesPicOs_56));
    }
    {
      parse_tree__write_deps_file__MmakeVarAllPicOs_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarAllPicOs_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarAllPicOs_57, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_187));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarAllPicOs_57, 2) = ((MR_Box) (parse_tree__write_deps_file__Var_189));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarAllPicOs_57, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_184_184, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_195_195);
    parse_tree__write_deps_file__Var_196 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".os");
    parse_tree__write_deps_file__Var_522 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".all_os)");
    parse_tree__write_deps_file__Var_198 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_522);
    {
      parse_tree__write_deps_file__MmakeVarOs_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarOs_58, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_196));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarOs_58, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_198));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarOs_58, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_195_195, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_203_203);
    parse_tree__write_deps_file__Var_204 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".pic_os");
    parse_tree__write_deps_file__Var_525 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".all_pic_os)");
    parse_tree__write_deps_file__Var_206 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_525);
    {
      parse_tree__write_deps_file__MmakeVarPicOs_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarPicOs_59, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_204));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarPicOs_59, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_206));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarPicOs_59, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_203_203, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_211_211);
    parse_tree__write_deps_file__Var_212 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".useds");
    parse_tree__write_deps_file__Var_528 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(used_subdir)%.used)");
    parse_tree__write_deps_file__Var_214 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_528);
    {
      parse_tree__write_deps_file__MmakeVarUseds_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarUseds_60, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_212));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarUseds_60, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_214));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarUseds_60, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_211_211, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_219_219);
    parse_tree__write_deps_file__Var_220 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".javas");
    parse_tree__write_deps_file__Var_531 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(javas_subdir)%.java)");
    parse_tree__write_deps_file__Var_222 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_531);
    {
      parse_tree__write_deps_file__MmakeVarJavas_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarJavas_61, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_220));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarJavas_61, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_222));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarJavas_61, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_219_219, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_227_227);
    parse_tree__write_deps_file__Var_228 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".classes");
    parse_tree__write_deps_file__Var_534 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(classes_subdir)%.class)");
    parse_tree__write_deps_file__Var_231 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_534);
    parse_tree__write_deps_file__Var_537 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(classes_subdir)%\\\044\044*.class))");
    parse_tree__write_deps_file__Var_237 = mercury__string__f_43_43_2_f_0((MR_String) "\044(wildcard \044(", parse_tree__write_deps_file__Var_537);
    {
      parse_tree__write_deps_file__Var_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_236, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_237));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_236, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_230, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_231));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_230, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_236));
    }
    {
      parse_tree__write_deps_file__MmakeVarClasses_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarClasses_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarClasses_62, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_228));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarClasses_62, 2) = ((MR_Box) (parse_tree__write_deps_file__Var_230));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarClasses_62, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_227_227, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_243_243);
    parse_tree__write_deps_file__Var_244 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".dirs");
    parse_tree__write_deps_file__Var_540 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(dirs_subdir)%.dir)");
    parse_tree__write_deps_file__Var_246 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_540);
    {
      parse_tree__write_deps_file__MmakeVarDirs_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarDirs_63, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_244));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarDirs_63, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_246));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarDirs_63, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_243_243, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_251_251);
    parse_tree__write_deps_file__Var_252 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".dir_os");
    parse_tree__write_deps_file__Var_543 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(dirs_subdir)%.dir/*.\044O)");
    parse_tree__write_deps_file__Var_254 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_543);
    {
      parse_tree__write_deps_file__MmakeVarDirOs_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarDirOs_64, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_252));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarDirOs_64, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_254));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarDirOs_64, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_251_251, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_259_259);
    parse_tree__write_deps_file__Var_260 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".dates");
    parse_tree__write_deps_file__Var_546 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(dates_subdir)%.date)");
    parse_tree__write_deps_file__Var_262 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_546);
    {
      parse_tree__write_deps_file__MmakeVarDates_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarDates_65, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_260));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarDates_65, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_262));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarDates_65, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_259_259, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_267_267);
    parse_tree__write_deps_file__Var_268 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".date0s");
    parse_tree__write_deps_file__Var_549 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(date0s_subdir)%.date0)");
    parse_tree__write_deps_file__Var_270 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_549);
    {
      parse_tree__write_deps_file__MmakeVarDate0s_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarDate0s_66, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_268));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarDate0s_66, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_270));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarDate0s_66, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_267_267, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_275_275);
    parse_tree__write_deps_file__Var_276 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".date3s");
    parse_tree__write_deps_file__Var_552 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(date3s_subdir)%.date3)");
    parse_tree__write_deps_file__Var_278 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_552);
    {
      parse_tree__write_deps_file__MmakeVarDate3s_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarDate3s_67, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_276));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarDate3s_67, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_278));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarDate3s_67, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_275_275, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_283_283);
    parse_tree__write_deps_file__Var_284 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".optdates");
    parse_tree__write_deps_file__Var_555 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(optdates_subdir)%.optdate)");
    parse_tree__write_deps_file__Var_286 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_555);
    {
      parse_tree__write_deps_file__MmakeVarOptDates_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarOptDates_68, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_284));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarOptDates_68, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_286));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarOptDates_68, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_283_283, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_291_291);
    parse_tree__write_deps_file__Var_292 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".trans_opt_dates");
    parse_tree__write_deps_file__Var_558 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(trans_opt_dates_subdir)%.trans_opt_date)");
    parse_tree__write_deps_file__Var_294 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_558);
    {
      parse_tree__write_deps_file__MmakeVarTransOptDates_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarTransOptDates_69, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_292));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarTransOptDates_69, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_294));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarTransOptDates_69, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_291_291, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_299_299);
    parse_tree__write_deps_file__Var_300 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".c_dates");
    parse_tree__write_deps_file__Var_561 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(c_dates_subdir)%.c_date)");
    parse_tree__write_deps_file__Var_302 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_561);
    {
      parse_tree__write_deps_file__MmakeVarCDates_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarCDates_70, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_300));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarCDates_70, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_302));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarCDates_70, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_299_299, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_307_307);
    parse_tree__write_deps_file__Var_308 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".java_dates");
    parse_tree__write_deps_file__Var_564 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(java_dates_subdir)%.java_date)");
    parse_tree__write_deps_file__Var_310 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_564);
    {
      parse_tree__write_deps_file__MmakeVarJavaDates_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarJavaDates_71, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_308));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarJavaDates_71, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_310));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarJavaDates_71, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_307_307, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_315_315);
    parse_tree__write_deps_file__Var_316 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".ds");
    parse_tree__write_deps_file__Var_567 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(ds_subdir)%.d)");
    parse_tree__write_deps_file__Var_318 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_567);
    {
      parse_tree__write_deps_file__MmakeVarDs_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarDs_72, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_316));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarDs_72, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_318));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarDs_72, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_315_315, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_323_323);
    parse_tree__write_deps_file__Var_324 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".module_deps");
    parse_tree__write_deps_file__Var_332 = make__make_module_dep_file_extension_0_f_0();
    parse_tree__write_deps_file__Var_570 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__Var_332, (MR_String) ")");
    parse_tree__write_deps_file__Var_572 = mercury__string__f_43_43_2_f_0((MR_String) ".mods:%=\044(module_deps_subdir)%", parse_tree__write_deps_file__Var_570);
    parse_tree__write_deps_file__Var_573 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, parse_tree__write_deps_file__Var_572);
    parse_tree__write_deps_file__Var_326 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_573);
    {
      parse_tree__write_deps_file__MmakeVarModuleDeps_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarModuleDeps_73, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_324));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarModuleDeps_73, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_326));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarModuleDeps_73, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_323_323, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_334_334);
    libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 264, &parse_tree__write_deps_file__HighLevelCode_74);
    switch (parse_tree__write_deps_file__HighLevelCode_74) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__write_deps_file__MihSources_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        switch (parse_tree__write_deps_file__Target_35) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String parse_tree__write_deps_file__Var_336;
              MR_String parse_tree__write_deps_file__Var_576;

              parse_tree__write_deps_file__Var_576 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
              parse_tree__write_deps_file__Var_336 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_576);
              {
                parse_tree__write_deps_file__MihSources_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MihSources_75, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_336));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MihSources_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 2:
            parse_tree__write_deps_file__MihSources_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
    }
    parse_tree__write_deps_file__Var_342 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mihs");
    {
      parse_tree__write_deps_file__MmakeVarMihs_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarMihs_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarMihs_76, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_342));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarMihs_76, 2) = ((MR_Box) (parse_tree__write_deps_file__MihSources_75));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarMihs_76, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_334_334, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_344_344);
    switch (parse_tree__write_deps_file__Target_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String parse_tree__write_deps_file__Var_345;
          MR_String parse_tree__write_deps_file__Var_579;

          parse_tree__write_deps_file__Var_579 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=%.mh)");
          parse_tree__write_deps_file__Var_345 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_579);
          {
            parse_tree__write_deps_file__MhSources_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MhSources_77, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_345));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MhSources_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        parse_tree__write_deps_file__MhSources_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
    parse_tree__write_deps_file__Var_351 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mhs");
    {
      parse_tree__write_deps_file__MmakeVarMhs_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarMhs_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarMhs_78, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_351));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarMhs_78, 2) = ((MR_Box) (parse_tree__write_deps_file__MhSources_77));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarMhs_78, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_344_344, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_353_353);
    parse_tree__write_deps_file__Var_354 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".all_mihs");
    parse_tree__write_deps_file__Var_582 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
    parse_tree__write_deps_file__Var_356 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_582);
    {
      parse_tree__write_deps_file__MmakeVarAllMihs_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarAllMihs_79, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_354));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarAllMihs_79, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_356));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarAllMihs_79, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_353_353, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_361_361);
    parse_tree__write_deps_file__Var_362 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".all_mhs");
    parse_tree__write_deps_file__Var_585 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=%.mh)");
    parse_tree__write_deps_file__Var_364 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_585);
    {
      parse_tree__write_deps_file__MmakeVarAllMhs_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarAllMhs_80, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_362));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarAllMhs_80, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_364));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarAllMhs_80, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_361_361, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_369_369);
    parse_tree__write_deps_file__Var_370 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".ints");
    parse_tree__write_deps_file__Var_588 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(ints_subdir)%.int)");
    parse_tree__write_deps_file__Var_373 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_588);
    parse_tree__write_deps_file__Var_591 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(int2s_subdir)%.int2)");
    parse_tree__write_deps_file__Var_379 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_591);
    {
      parse_tree__write_deps_file__Var_378 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_378, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_379));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_378, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_372 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_372, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_373));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_372, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_378));
    }
    {
      parse_tree__write_deps_file__MmakeVarInts_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarInts_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarInts_81, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_370));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarInts_81, 2) = ((MR_Box) (parse_tree__write_deps_file__Var_372));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarInts_81, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_369_369, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_385_385);
    parse_tree__write_deps_file__Var_386 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".int0s");
    parse_tree__write_deps_file__Var_594 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".parent_mods:%=\044(int0s_subdir)%.int0)");
    parse_tree__write_deps_file__Var_388 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_594);
    {
      parse_tree__write_deps_file__MmakeVarInt0s_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarInt0s_82, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_386));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarInt0s_82, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_388));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarInt0s_82, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_385_385, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_393_393);
    parse_tree__write_deps_file__Var_394 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".all_int0s");
    parse_tree__write_deps_file__Var_597 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(int0s_subdir)%.int0)");
    parse_tree__write_deps_file__Var_396 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_597);
    {
      parse_tree__write_deps_file__MmakeVarAllInt0s_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarAllInt0s_83, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_394));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarAllInt0s_83, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_396));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarAllInt0s_83, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_393_393, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_401_401);
    parse_tree__write_deps_file__Var_402 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".int3s");
    parse_tree__write_deps_file__Var_600 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(int3s_subdir)%.int3)");
    parse_tree__write_deps_file__Var_404 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_600);
    {
      parse_tree__write_deps_file__MmakeVarInt3s_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarInt3s_84, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_402));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarInt3s_84, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_404));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarInt3s_84, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_401_401, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_409_409);
    parse_tree__write_deps_file__Var_410 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".opts");
    parse_tree__write_deps_file__Var_603 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(opts_subdir)%.opt)");
    parse_tree__write_deps_file__Var_412 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_603);
    {
      parse_tree__write_deps_file__MmakeVarOpts_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarOpts_85, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_410));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarOpts_85, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_412));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarOpts_85, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_409_409, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_417_417);
    parse_tree__write_deps_file__Var_418 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".trans_opts");
    parse_tree__write_deps_file__Var_606 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(trans_opts_subdir)%.trans_opt)");
    parse_tree__write_deps_file__Var_420 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_606);
    {
      parse_tree__write_deps_file__MmakeVarTransOpts_86 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarTransOpts_86, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_418));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarTransOpts_86, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_420));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarTransOpts_86, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_417_417, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_425_425);
    parse_tree__write_deps_file__Var_426 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".analysiss");
    parse_tree__write_deps_file__Var_609 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(analysiss_subdir)%.analysis)");
    parse_tree__write_deps_file__Var_428 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_609);
    {
      parse_tree__write_deps_file__MmakeVarAnalysiss_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarAnalysiss_87, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_426));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarAnalysiss_87, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_428));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarAnalysiss_87, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_425_425, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_433_433);
    parse_tree__write_deps_file__Var_434 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".requests");
    parse_tree__write_deps_file__Var_612 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(requests_subdir)%.request)");
    parse_tree__write_deps_file__Var_436 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_612);
    {
      parse_tree__write_deps_file__MmakeVarRequests_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarRequests_88, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_434));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarRequests_88, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_436));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarRequests_88, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_433_433, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_441_441);
    parse_tree__write_deps_file__Var_442 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".imdgs");
    parse_tree__write_deps_file__Var_615 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(imdgs_subdir)%.imdg)");
    parse_tree__write_deps_file__Var_444 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_615);
    {
      parse_tree__write_deps_file__MmakeVarImdgs_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarImdgs_89, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_442));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarImdgs_89, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_444));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarImdgs_89, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_441_441, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_449_449);
    parse_tree__write_deps_file__Var_450 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".profs");
    parse_tree__write_deps_file__Var_618 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=%.prof)");
    parse_tree__write_deps_file__Var_452 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_618);
    {
      parse_tree__write_deps_file__MmakeVarProfs_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarProfs_90, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_450));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarProfs_90, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_452));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarProfs_90, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_449_449, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_92);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(
  MR_Word parse_tree__write_deps_file__Modules_5,
  MR_Word parse_tree__write_deps_file__DepsMap_6,
  MR_Word * parse_tree__write_deps_file__ExtraLinkObjs_8)
{
  {
    MR_Word parse_tree__write_deps_file__ExtraLinkObjs0_9;

    parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(parse_tree__write_deps_file__Modules_5, parse_tree__write_deps_file__DepsMap_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &parse_tree__write_deps_file__ExtraLinkObjs0_9);
    mercury__list__reverse_2_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_2[2], parse_tree__write_deps_file__ExtraLinkObjs0_9, parse_tree__write_deps_file__ExtraLinkObjs_8);
  }
}

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

      mercury__map__lookup_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_54_54, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__HeadVar__2_2, ((MR_Box) (parse_tree__write_deps_file__Module_11)), &parse_tree__write_deps_file__conv0_Var_25);
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
      mercury__list__length_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_56_56, parse_tree__write_deps_file__FactDeps_18, &parse_tree__write_deps_file__NumFactDeps_19);
      mercury__list__duplicate_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_54_54, parse_tree__write_deps_file__NumFactDeps_19, ((MR_Box) (parse_tree__write_deps_file__Module_11)), &parse_tree__write_deps_file__ModuleList_20);
      mercury__assoc_list__from_corresponding_lists_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_56_56, parse_tree__write_deps_file__TypeCtorInfo_54_54, parse_tree__write_deps_file__FactDeps_18, parse_tree__write_deps_file__ModuleList_20, &parse_tree__write_deps_file__NewLinkObjs_22);
      mercury__list__append_3_p_1((MR_Word) &parse_tree__write_deps_file_scalar_common_2[2], parse_tree__write_deps_file__NewLinkObjs_22, parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4, &parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26);
      /* direct tailcall eliminated */
      {
        MR_Word parse_tree__write_deps_file__next_value_of_HeadVar__1_1 = parse_tree__write_deps_file__Modules_12;
        MR_Word parse_tree__write_deps_file__next_value_of_STATE_VARIABLE_ExtraLinkObjs_0_4 = parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_26_26;

        parse_tree__write_deps_file__HeadVar__1_1 = parse_tree__write_deps_file__next_value_of_HeadVar__1_1;
        parse_tree__write_deps_file__STATE_VARIABLE_ExtraLinkObjs_0_4 = parse_tree__write_deps_file__next_value_of_STATE_VARIABLE_ExtraLinkObjs_0_4;
      }
      continue;
    }
    break;
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

      parse_tree__write_deps_file__select_ok_modules_3_p_0(parse_tree__write_deps_file__Modules0_6, parse_tree__write_deps_file__DepsMap_2, &parse_tree__write_deps_file__ModulesTail_9);
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_2, ((MR_Box) (parse_tree__write_deps_file__Module_5)), &parse_tree__write_deps_file__conv0_Var_14);
      parse_tree__write_deps_file__Var_14 = ((MR_Word) parse_tree__write_deps_file__conv0_Var_14);
      parse_tree__write_deps_file__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, (MR_Integer) 0)));
      parse_tree__write_deps_file__ModuleImports_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, (MR_Integer) 1)));
      parse_tree__module_imports__module_and_imports_get_errors_2_p_0(parse_tree__write_deps_file__ModuleImports_11, &parse_tree__write_deps_file__Errors_12);
      parse_tree__write_deps_file__Var_15 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
      parse_tree__write_deps_file__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0;
      mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_18_18, parse_tree__write_deps_file__Errors_12, parse_tree__write_deps_file__Var_15, &parse_tree__write_deps_file__FatalErrors_13);
      parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_18_18, parse_tree__write_deps_file__FatalErrors_13);
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
parse_tree__write_deps_file__get_extra_link_dependencies_6_p_0(
  MR_Word parse_tree__write_deps_file__Globals_1,
  MR_String parse_tree__write_deps_file__Suffix_2,
  MR_Word parse_tree__write_deps_file__HeadVar__3_3,
  MR_Word * parse_tree__write_deps_file__HeadVar__4_4)
{
  if ((parse_tree__write_deps_file__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *parse_tree__write_deps_file__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_String parse_tree__write_deps_file__ExtraLink_14;
    MR_Word parse_tree__write_deps_file__Module_15;
    MR_Word parse_tree__write_deps_file__ExtraLinks_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 1)));
    MR_String parse_tree__write_deps_file__FileName_17;
    MR_Word parse_tree__write_deps_file__FileNames_18;
    MR_Word parse_tree__write_deps_file__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__3_3, (MR_Integer) 0)));

    parse_tree__write_deps_file__ExtraLink_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_22, (MR_Integer) 0)));
    parse_tree__write_deps_file__Module_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_22, (MR_Integer) 1)));
    parse_tree__file_names__extra_link_obj_file_name_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_15, parse_tree__write_deps_file__ExtraLink_14, parse_tree__write_deps_file__Suffix_2, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_17);
    parse_tree__write_deps_file__get_extra_link_dependencies_6_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Suffix_2, parse_tree__write_deps_file__ExtraLinks_16, &parse_tree__write_deps_file__FileNames_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__write_deps_file__HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__FileName_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__FileNames_18));
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
  parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__HeadVar__2_2, parse_tree__write_deps_file__IntDepsGraph_3, parse_tree__write_deps_file__ImpDepsGraph_4, parse_tree__write_deps_file__IndirectDepsGraph_5, parse_tree__write_deps_file__IndirectOptDepsGraph_6, parse_tree__write_deps_file__TransOptOrder_7);
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
    if (!((parse_tree__write_deps_file__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word parse_tree__write_deps_file__Dep_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word parse_tree__write_deps_file__Deps_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__2_2, (MR_Integer) 1)));

      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_56_93_95_48_10_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Dep_22, parse_tree__write_deps_file__IntDepsGraph_3, parse_tree__write_deps_file__ImpDepsGraph_4, parse_tree__write_deps_file__IndirectDepsGraph_5, parse_tree__write_deps_file__IndirectOptDepsGraph_6, parse_tree__write_deps_file__TransOptOrder_7);
      /* direct tailcall eliminated */
      {
        MR_Word parse_tree__write_deps_file__next_value_of_HeadVar__2_2 = parse_tree__write_deps_file__Deps_23;

        parse_tree__write_deps_file__HeadVar__2_2 = parse_tree__write_deps_file__next_value_of_HeadVar__2_2;
      }
      continue;
    }
    break;
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

    parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1068__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
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

    parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_41_41, &parse_tree__write_deps_file__ModuleName_22);
    parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__IndirectOptDepsGraph_16, parse_tree__write_deps_file__ModuleName_22, &parse_tree__write_deps_file__IndirectOptDeps_23);
    libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_11, (MR_Integer) 332, &parse_tree__write_deps_file__Intermod_24);
    switch (parse_tree__write_deps_file__Intermod_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__IntDepsGraph_13, parse_tree__write_deps_file__ModuleName_22, &parse_tree__write_deps_file__IntDeps_25);
          parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__ImpDepsGraph_14, parse_tree__write_deps_file__ModuleName_22, &parse_tree__write_deps_file__ImpDeps_26);
          parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(parse_tree__write_deps_file__IndirectDepsGraph_15, parse_tree__write_deps_file__ModuleName_22, &parse_tree__write_deps_file__IndirectDeps_27);
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
    parse_tree__write_deps_file__ForeignImportModules0_28 = parse_tree__prog_data_foreign__init_foreign_import_modules_0_f_0();
    libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_11, &parse_tree__write_deps_file__Target_29);
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
    parse_tree__module_imports__module_and_imports_set_int_deps_3_p_0(parse_tree__write_deps_file__IntDeps_25, parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_43_43, &parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_44_44);
    parse_tree__module_imports__module_and_imports_set_imp_deps_3_p_0(parse_tree__write_deps_file__ImpDeps_26, parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_44_44, &parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_45_45);
    parse_tree__module_imports__module_and_imports_set_indirect_deps_3_p_0(parse_tree__write_deps_file__IndirectDeps_27, parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_45_45, &parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46);
    {
      parse_tree__write_deps_file__FindModule_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_31, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_31, 1) = ((MR_Box) (parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_56_93_95_48_10_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_31, 3) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_22));
    }
    mercury__list__drop_while_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, parse_tree__write_deps_file__FindModule_31, parse_tree__write_deps_file__TransOptOrder_17, &parse_tree__write_deps_file__TransOptDeps0_33);
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
    parse_tree__write_deps_file__Var_48 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
    parse_tree__write_deps_file__TypeCtorInfo_122_122 = (MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0;
    mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_122_122, parse_tree__write_deps_file__Errors_37, parse_tree__write_deps_file__Var_48, &parse_tree__write_deps_file__FatalErrors_38);
    parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_122_122, parse_tree__write_deps_file__FatalErrors_38);
    if (parse_tree__write_deps_file__succeeded)
    {
      MR_Word parse_tree__write_deps_file__Var_49;

      {
        parse_tree__write_deps_file__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_49, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDeps_36));
      }
      parse_tree__write_deps_file__write_dependency_file_6_p_0(parse_tree__write_deps_file__Globals_11, parse_tree__write_deps_file__STATE_VARIABLE_ModuleAndImports_46_46, parse_tree__write_deps_file__IndirectOptDeps_23, parse_tree__write_deps_file__Var_49);
    }
    else
    {
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

    parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1097__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_2), &parse_tree__write_deps_file__conv0_LambdaHeadVar__3_17);
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
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_22_22 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word parse_tree__write_deps_file__ModuleKey_7;
    MR_Word parse_tree__write_deps_file__DepsGraph_8;
    MR_Word parse_tree__write_deps_file__DepsKeysSet_9;
    MR_Word parse_tree__write_deps_file__AddKeyDep_10;
    MR_Word parse_tree__write_deps_file__Var_18;
    MR_Box parse_tree__write_deps_file__conv1_Dependencies_6;

    mercury__digraph__add_vertex_4_p_0(parse_tree__write_deps_file__TypeCtorInfo_22_22, ((MR_Box) (parse_tree__write_deps_file__ModuleName_5)), &parse_tree__write_deps_file__ModuleKey_7, parse_tree__write_deps_file__DepsGraph0_4, &parse_tree__write_deps_file__DepsGraph_8);
    mercury__digraph__lookup_key_set_from_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_22_22, parse_tree__write_deps_file__DepsGraph_8, parse_tree__write_deps_file__ModuleKey_7, &parse_tree__write_deps_file__DepsKeysSet_9);
    {
      parse_tree__write_deps_file__AddKeyDep_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__AddKeyDep_10, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__AddKeyDep_10, 1) = ((MR_Box) (parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__AddKeyDep_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__AddKeyDep_10, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsGraph_8));
    }
    parse_tree__write_deps_file__Var_18 = mercury__set__init_0_f_0(parse_tree__write_deps_file__TypeCtorInfo_22_22);
    mercury__sparse_bitset__foldl_4_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[0], parse_tree__write_deps_file__AddKeyDep_10, parse_tree__write_deps_file__DepsKeysSet_9, ((MR_Box) (parse_tree__write_deps_file__Var_18)), &parse_tree__write_deps_file__conv1_Dependencies_6);
    *parse_tree__write_deps_file__Dependencies_6 = ((MR_Word) parse_tree__write_deps_file__conv1_Dependencies_6);
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
    MR_Word parse_tree__write_deps_file__Verbose_12;
    MR_Word parse_tree__write_deps_file__ModuleName_13;
    MR_String parse_tree__write_deps_file__DependencyFileName_14;
    MR_Word parse_tree__write_deps_file__TmpDependencyFileNameRes_15;
    MR_String parse_tree__write_deps_file__Var_38;
    MR_String parse_tree__write_deps_file__Var_112;
    MR_Word parse_tree__write_deps_file__Var_113;
    MR_Word parse_tree__write_deps_file__Var_114;
    MR_Word parse_tree__write_deps_file__Var_115;
    MR_Word parse_tree__write_deps_file__Var_116;
    MR_Word parse_tree__write_deps_file__Var_117;
    MR_Word parse_tree__write_deps_file__Var_118;
    MR_Word parse_tree__write_deps_file__Var_119;
    MR_Word parse_tree__write_deps_file__Var_120;
    MR_Word parse_tree__write_deps_file__Var_121;
    MR_Word parse_tree__write_deps_file__Var_122;
    MR_Word parse_tree__write_deps_file__Var_123;
    MR_Word parse_tree__write_deps_file__Var_124;
    MR_Word parse_tree__write_deps_file__Var_125;
    MR_Word parse_tree__write_deps_file__Var_126;
    MR_Word parse_tree__write_deps_file__Var_127;
    MR_Word parse_tree__write_deps_file__Var_128;
    MR_Word parse_tree__write_deps_file__Var_129;
    MR_Word parse_tree__write_deps_file__Var_130;
    MR_Word parse_tree__write_deps_file__Var_131;
    MR_Word parse_tree__write_deps_file__Var_132;
    MR_Word parse_tree__write_deps_file__Var_133;
    MR_Word parse_tree__write_deps_file__Var_134;
    MR_Word parse_tree__write_deps_file__Var_135;
    MR_Word parse_tree__write_deps_file__Var_136;
    MR_String parse_tree__write_deps_file__Var_137;

    libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 56, &parse_tree__write_deps_file__Verbose_12);
    parse_tree__write_deps_file__Var_112 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 0)));
    parse_tree__write_deps_file__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 1)));
    parse_tree__write_deps_file__ModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 2)));
    parse_tree__write_deps_file__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 3)));
    parse_tree__write_deps_file__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 4)));
    parse_tree__write_deps_file__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 5)));
    parse_tree__write_deps_file__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 6)));
    parse_tree__write_deps_file__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 7)));
    parse_tree__write_deps_file__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 8)));
    parse_tree__write_deps_file__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 9)));
    parse_tree__write_deps_file__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 10)));
    parse_tree__write_deps_file__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 11)));
    parse_tree__write_deps_file__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 12)));
    parse_tree__write_deps_file__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 13)));
    parse_tree__write_deps_file__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 14)));
    parse_tree__write_deps_file__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 15)));
    parse_tree__write_deps_file__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 16)));
    parse_tree__write_deps_file__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 17)));
    parse_tree__write_deps_file__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 18)));
    parse_tree__write_deps_file__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 19)));
    parse_tree__write_deps_file__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 20)));
    parse_tree__write_deps_file__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 21)));
    parse_tree__write_deps_file__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 22)));
    parse_tree__write_deps_file__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 23)));
    parse_tree__write_deps_file__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 24)));
    parse_tree__write_deps_file__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 25)));
    parse_tree__write_deps_file__Var_137 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 26)));
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 0, (MR_String) ".d", parse_tree__write_deps_file__ModuleName_13, &parse_tree__write_deps_file__DependencyFileName_14);
    parse_tree__write_deps_file__Var_38 = mercury__dir__dirname_1_f_0(parse_tree__write_deps_file__DependencyFileName_14);
    mercury__io__make_temp_file_6_p_0(parse_tree__write_deps_file__Var_38, (MR_String) "tmp_d", (MR_String) "", &parse_tree__write_deps_file__TmpDependencyFileNameRes_15);
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__TmpDependencyFileNameRes_15)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word parse_tree__write_deps_file__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__TmpDependencyFileNameRes_15, (MR_Integer) 0)));
      MR_String parse_tree__write_deps_file__Message_17;
      MR_String parse_tree__write_deps_file__Var_96;

      parse_tree__write_deps_file__Var_96 = mercury__io__error_message_1_f_0(parse_tree__write_deps_file__Error_16);
      parse_tree__write_deps_file__Message_17 = mercury__string__f_43_43_2_f_0((MR_String) "Could not create temporary file: ", parse_tree__write_deps_file__Var_96);
      libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_17);
    }
    else
    {
      MR_String parse_tree__write_deps_file__TmpDependencyFileName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__TmpDependencyFileNameRes_15, (MR_Integer) 0)));
      MR_Word parse_tree__write_deps_file__Result_19;

      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "% Writing auto-dependency file \140");
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, parse_tree__write_deps_file__DependencyFileName_14);
      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) "\'...");
      libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
      mercury__io__open_output_4_p_0(parse_tree__write_deps_file__TmpDependencyFileName_18, &parse_tree__write_deps_file__Result_19);
      if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result_19)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__write_deps_file__IOError_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Result_19, (MR_Integer) 0)));
        MR_String parse_tree__write_deps_file__IOErrorMessage_21;
        MR_Word parse_tree__write_deps_file__Var_87;
        MR_Word parse_tree__write_deps_file__Var_89;
        MR_Word parse_tree__write_deps_file__Var_90;
        MR_Word parse_tree__write_deps_file__Var_92;
        MR_String parse_tree__write_deps_file__Message_98;

        libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
        libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
        mercury__io__error_message_2_p_0(parse_tree__write_deps_file__IOError_20, &parse_tree__write_deps_file__IOErrorMessage_21);
        {
          parse_tree__write_deps_file__Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_92, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_21));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_90, 0) = ((MR_Box) ((MR_String) "\' for output: "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_90, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_92));
        }
        {
          parse_tree__write_deps_file__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_89, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpDependencyFileName_18));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_89, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_90));
        }
        {
          parse_tree__write_deps_file__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_87, 0) = ((MR_Box) ((MR_String) "error opening temporary file \140"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_87, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_89));
        }
        mercury__string__append_list_2_p_0(parse_tree__write_deps_file__Var_87, &parse_tree__write_deps_file__Message_98);
        libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_98);
      }
      else
      {
        MR_Word parse_tree__write_deps_file__DepStream_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Result_19, (MR_Integer) 0)));
        MR_Word parse_tree__write_deps_file__MmakeFile0_23;
        MR_Word parse_tree__write_deps_file__MmakeFile_24;
        MR_Word parse_tree__write_deps_file__FirstRenameResult_25;

        libs__mmakefiles__start_mmakefile_1_p_0(&parse_tree__write_deps_file__MmakeFile0_23);
        parse_tree__write_deps_file__generate_d_file_8_p_0(parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleAndImports_8, parse_tree__write_deps_file__AllDeps_9, parse_tree__write_deps_file__MaybeTransOptDeps_10, parse_tree__write_deps_file__MmakeFile0_23, &parse_tree__write_deps_file__MmakeFile_24);
        libs__mmakefiles__end_mmakefile_4_p_0(parse_tree__write_deps_file__DepStream_22, parse_tree__write_deps_file__MmakeFile_24);
        mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DepStream_22);
        mercury__io__rename_file_5_p_0(parse_tree__write_deps_file__TmpDependencyFileName_18, parse_tree__write_deps_file__DependencyFileName_14, &parse_tree__write_deps_file__FirstRenameResult_25);
        if ((parse_tree__write_deps_file__FirstRenameResult_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " done.\n");
        }
        else
        {
          MR_Word parse_tree__write_deps_file__RemoveResult_27;

          mercury__io__remove_file_4_p_0(parse_tree__write_deps_file__DependencyFileName_14, &parse_tree__write_deps_file__RemoveResult_27);
          if ((parse_tree__write_deps_file__RemoveResult_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word parse_tree__write_deps_file__SecondRenameResult_30;

            mercury__io__rename_file_5_p_0(parse_tree__write_deps_file__TmpDependencyFileName_18, parse_tree__write_deps_file__DependencyFileName_14, &parse_tree__write_deps_file__SecondRenameResult_30);
            if ((parse_tree__write_deps_file__SecondRenameResult_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " done.\n");
            }
            else
            {
              MR_Word parse_tree__write_deps_file__Error5_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__SecondRenameResult_30, (MR_Integer) 0)));
              MR_Word parse_tree__write_deps_file__Var_62;
              MR_Word parse_tree__write_deps_file__Var_64;
              MR_Word parse_tree__write_deps_file__Var_65;
              MR_Word parse_tree__write_deps_file__Var_67;
              MR_Word parse_tree__write_deps_file__Var_68;
              MR_Word parse_tree__write_deps_file__Var_70;
              MR_String parse_tree__write_deps_file__Message_100;
              MR_String parse_tree__write_deps_file__ErrorMsg_101;

              libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
              libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
              mercury__io__error_message_2_p_0(parse_tree__write_deps_file__Error5_31, &parse_tree__write_deps_file__ErrorMsg_101);
              {
                parse_tree__write_deps_file__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_70, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrorMsg_101));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__write_deps_file__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_68, 0) = ((MR_Box) ((MR_String) "\': "));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_68, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_70));
              }
              {
                parse_tree__write_deps_file__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_67, 0) = ((MR_Box) (parse_tree__write_deps_file__DependencyFileName_14));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_67, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_68));
              }
              {
                parse_tree__write_deps_file__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_65, 0) = ((MR_Box) ((MR_String) "\' as \140"));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_65, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_67));
              }
              {
                parse_tree__write_deps_file__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_64, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpDependencyFileName_18));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_64, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_65));
              }
              {
                parse_tree__write_deps_file__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_62, 0) = ((MR_Box) ((MR_String) "can\'t rename file \140"));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_62, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_64));
              }
              mercury__string__append_list_2_p_0(parse_tree__write_deps_file__Var_62, &parse_tree__write_deps_file__Message_100);
              libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_100);
            }
          }
          else
          {
            MR_Word parse_tree__write_deps_file__Error4_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__RemoveResult_27, (MR_Integer) 0)));
            MR_String parse_tree__write_deps_file__ErrorMsg_29;
            MR_Word parse_tree__write_deps_file__Var_76;
            MR_Word parse_tree__write_deps_file__Var_78;
            MR_Word parse_tree__write_deps_file__Var_79;
            MR_Word parse_tree__write_deps_file__Var_81;
            MR_String parse_tree__write_deps_file__Message_99;

            libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
            libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
            mercury__io__error_message_2_p_0(parse_tree__write_deps_file__Error4_28, &parse_tree__write_deps_file__ErrorMsg_29);
            {
              parse_tree__write_deps_file__Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_81, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrorMsg_29));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__write_deps_file__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_79, 0) = ((MR_Box) ((MR_String) "\': "));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_79, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_81));
            }
            {
              parse_tree__write_deps_file__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_78, 0) = ((MR_Box) (parse_tree__write_deps_file__DependencyFileName_14));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_78, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_79));
            }
            {
              parse_tree__write_deps_file__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_76, 0) = ((MR_Box) ((MR_String) "can\'t remove file \140"));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_76, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_78));
            }
            mercury__string__append_list_2_p_0(parse_tree__write_deps_file__Var_76, &parse_tree__write_deps_file__Message_99);
            libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_99);
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_6(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_Word parse_tree__write_deps_file__conv7_MmakeRule_10;

    parse_tree__write_deps_file__construct_subdirs_shorthand_rule_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv7_MmakeRule_10);
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv7_MmakeRule_10));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_5(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_Word parse_tree__write_deps_file__conv5_MmakeRule_12;

    parse_tree__write_deps_file__gather_foreign_import_deps_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv5_MmakeRule_12);
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv5_MmakeRule_12));
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_4(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_Word parse_tree__write_deps_file__conv4_LambdaHeadVar__2_518;

    parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_d_file__751__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv4_LambdaHeadVar__2_518);
    if (parse_tree__write_deps_file__succeeded)
    {
      *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv4_LambdaHeadVar__2_518));
      parse_tree__write_deps_file__succeeded = MR_TRUE;
    }
    return parse_tree__write_deps_file__succeeded;
  }
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_3(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
{
  {
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_Word parse_tree__write_deps_file__conv3_HeadVar__2_2;

    parse_tree__write_deps_file__conv3_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv3_HeadVar__2_2));
    return parse_tree__write_deps_file__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_2(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_Word parse_tree__write_deps_file__conv1_MmakeRule_12;

    parse_tree__write_deps_file__gather_nested_deps_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv1_MmakeRule_12);
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_MmakeRule_12));
  }
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
{
  {
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_String parse_tree__write_deps_file__conv0_IncludePath_6;

    parse_tree__write_deps_file__conv0_IncludePath_6 = parse_tree__write_deps_file__foreign_include_file_path_name_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_IncludePath_6));
    return parse_tree__write_deps_file__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0(
  MR_Word parse_tree__write_deps_file__Globals_9,
  MR_Word parse_tree__write_deps_file__ModuleAndImports_10,
  MR_Word parse_tree__write_deps_file__AllDeps_11,
  MR_Word parse_tree__write_deps_file__MaybeTransOptDeps_12,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_196,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_197)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_708_708;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_709_709;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_711_711;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_712_712;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_724_724;
    MR_String parse_tree__write_deps_file__SourceFileName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 0)));
    MR_Word parse_tree__write_deps_file__SourceFileModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 1)));
    MR_Word parse_tree__write_deps_file__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 2)));
    MR_Word parse_tree__write_deps_file__ParentDeps_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 4)));
    MR_Word parse_tree__write_deps_file__IntDeps_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 5)));
    MR_Word parse_tree__write_deps_file__ImpDeps_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 6)));
    MR_Word parse_tree__write_deps_file__InclDeps_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 9)));
    MR_Word parse_tree__write_deps_file__NestedDeps_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 10)));
    MR_Word parse_tree__write_deps_file__FactDeps0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 11)));
    MR_Word parse_tree__write_deps_file__ForeignImportModules0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 12)));
    MR_Word parse_tree__write_deps_file__ForeignIncludeFilesCord_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 13)));
    MR_Word parse_tree__write_deps_file__ContainsForeignCode_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 14)));
    MR_Word parse_tree__write_deps_file__SrcItemBlocks_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 16)));
    MR_Word parse_tree__write_deps_file__DirectIntItemBlocksCord_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 17)));
    MR_Word parse_tree__write_deps_file__IndirectIntItemBlocksCord_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 18)));
    MR_Word parse_tree__write_deps_file__OptItemBlocksCord_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 19)));
    MR_Word parse_tree__write_deps_file__IntForOptItemBlocksCord_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 20)));
    MR_String parse_tree__write_deps_file__ModuleNameString_42;
    MR_String parse_tree__write_deps_file__Version_43;
    MR_String parse_tree__write_deps_file__FullArch_44;
    MR_Word parse_tree__write_deps_file__MmakeStartComment_45;
    MR_String parse_tree__write_deps_file__ModuleMakeVarName_46;
    MR_Word parse_tree__write_deps_file__LongDeps0_47;
    MR_Word parse_tree__write_deps_file__ShortDeps0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 7)));
    MR_Word parse_tree__write_deps_file__LongDeps_49;
    MR_Word parse_tree__write_deps_file__ShortDeps1_50;
    MR_Word parse_tree__write_deps_file__ShortDeps_51;
    MR_Word parse_tree__write_deps_file__FactDeps_52;
    MR_String parse_tree__write_deps_file__TransOptDateFileName_53;
    MR_String parse_tree__write_deps_file__ErrFileName_65;
    MR_String parse_tree__write_deps_file__OptDateFileName_66;
    MR_String parse_tree__write_deps_file__CDateFileName_67;
    MR_String parse_tree__write_deps_file__ObjFileName_68;
    MR_String parse_tree__write_deps_file__JavaDateFileName_69;
    MR_String parse_tree__write_deps_file__PicObjFileName_70;
    MR_String parse_tree__write_deps_file__Int0FileName_71;
    MR_Word parse_tree__write_deps_file__ParentDepsSourceGroups_75;
    MR_Word parse_tree__write_deps_file__LongDepsSourceGroups_76;
    MR_Word parse_tree__write_deps_file__ShortDepsSourceGroups_77;
    MR_Word parse_tree__write_deps_file__ForeignIncludeFiles_78;
    MR_Word parse_tree__write_deps_file__ForeignImportFileNames_79;
    MR_Word parse_tree__write_deps_file__UseOptFiles_91;
    MR_Word parse_tree__write_deps_file__Intermod_92;
    MR_Word parse_tree__write_deps_file__IntermodDirs_93;
    MR_Word parse_tree__write_deps_file__HighLevelCode_111;
    MR_Word parse_tree__write_deps_file__CompilationTarget_112;
    MR_String parse_tree__write_deps_file__CFileName_114;
    MR_String parse_tree__write_deps_file__MhHeaderFileName_115;
    MR_String parse_tree__write_deps_file__MihHeaderFileName_116;
    MR_Word parse_tree__write_deps_file__MmakeRuleMhMihOnC_117;
    MR_String parse_tree__write_deps_file__JavaFileName_118;
    MR_String parse_tree__write_deps_file__ModuleDepFileName_119;
    MR_Word parse_tree__write_deps_file__MmakeFragmentModuleDep_120;
    MR_String parse_tree__write_deps_file__DateFileName_121;
    MR_String parse_tree__write_deps_file__Date0FileName_122;
    MR_Word parse_tree__write_deps_file__ParentDepDateFileNames_123;
    MR_Word parse_tree__write_deps_file__ParentDepInt0FileNames_124;
    MR_Word parse_tree__write_deps_file__LongDepInt3FileNames_125;
    MR_Word parse_tree__write_deps_file__ShortDepInt3FileNames_126;
    MR_Word parse_tree__write_deps_file__MmakeRuleParentDates_127;
    MR_Word parse_tree__write_deps_file__ParentDepDate0FileNames_128;
    MR_Word parse_tree__write_deps_file__MmakeRuleParentDate0s_129;
    MR_Word parse_tree__write_deps_file__HaveMap_130;
    MR_String parse_tree__write_deps_file__ModuleArg_131;
    MR_Word parse_tree__write_deps_file__ForeignImportModules_133;
    MR_Word parse_tree__write_deps_file__ForeignImports_175;
    MR_Word parse_tree__write_deps_file__ForeignImportedModuleNames_178;
    MR_String parse_tree__write_deps_file__IntFileName_185;
    MR_String parse_tree__write_deps_file__Int2FileName_186;
    MR_String parse_tree__write_deps_file__Int3FileName_187;
    MR_String parse_tree__write_deps_file__OptFileName_188;
    MR_String parse_tree__write_deps_file__TransOptFileName_189;
    MR_String parse_tree__write_deps_file__Date3FileName_190;
    MR_Word parse_tree__write_deps_file__MmakeRulesInstallShadows_191;
    MR_Word parse_tree__write_deps_file__UseSubdirs_192;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_201_201;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_212_212;
    MR_Word parse_tree__write_deps_file__Var_254;
    MR_Word parse_tree__write_deps_file__Var_255;
    MR_Word parse_tree__write_deps_file__Var_256;
    MR_Word parse_tree__write_deps_file__Var_257;
    MR_Word parse_tree__write_deps_file__Var_258;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_261_261;
    MR_Word parse_tree__write_deps_file__Var_262;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_264_264;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_277_277;
    MR_Word parse_tree__write_deps_file__Var_278;
    MR_Word parse_tree__write_deps_file__Var_279;
    MR_Word parse_tree__write_deps_file__Var_280;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_281_281;
    MR_Word parse_tree__write_deps_file__Var_282;
    MR_Word parse_tree__write_deps_file__Var_296;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_323_323;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_337_337;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_347_347;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_381_381;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_391_391;
    MR_Word parse_tree__write_deps_file__Var_403;
    MR_Word parse_tree__write_deps_file__Var_404;
    MR_Word parse_tree__write_deps_file__Var_406;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_409_409;
    MR_String parse_tree__write_deps_file__Var_414;
    MR_Word parse_tree__write_deps_file__Var_418;
    MR_Word parse_tree__write_deps_file__Var_421;
    MR_Word parse_tree__write_deps_file__Var_424;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_430_430;
    MR_Word parse_tree__write_deps_file__Var_438;
    MR_Word parse_tree__write_deps_file__Var_441;
    MR_Word parse_tree__write_deps_file__Var_444;
    MR_Word parse_tree__write_deps_file__Var_447;
    MR_Word parse_tree__write_deps_file__Var_451;
    MR_Word parse_tree__write_deps_file__Var_452;
    MR_Word parse_tree__write_deps_file__Var_454;
    MR_Word parse_tree__write_deps_file__Var_455;
    MR_Word parse_tree__write_deps_file__Var_457;
    MR_Word parse_tree__write_deps_file__Var_458;
    MR_Word parse_tree__write_deps_file__Var_459;
    MR_Word parse_tree__write_deps_file__Var_461;
    MR_Word parse_tree__write_deps_file__Var_462;
    MR_Word parse_tree__write_deps_file__Var_464;
    MR_Word parse_tree__write_deps_file__Var_465;
    MR_Word parse_tree__write_deps_file__Var_467;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_470_470;
    MR_Word parse_tree__write_deps_file__Var_472;
    MR_Word parse_tree__write_deps_file__Var_476;
    MR_Word parse_tree__write_deps_file__Var_477;
    MR_Word parse_tree__write_deps_file__Var_479;
    MR_Word parse_tree__write_deps_file__Var_481;
    MR_Word parse_tree__write_deps_file__Var_482;
    MR_Word parse_tree__write_deps_file__Var_483;
    MR_Word parse_tree__write_deps_file__Var_485;
    MR_Word parse_tree__write_deps_file__Var_486;
    MR_Word parse_tree__write_deps_file__Var_488;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_491_491;
    MR_Word parse_tree__write_deps_file__Var_516;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_533_533;
    MR_Word parse_tree__write_deps_file__Var_552;
    MR_Word parse_tree__write_deps_file__Var_555;
    MR_Word parse_tree__write_deps_file__Var_557;
    MR_String parse_tree__write_deps_file__Var_558;
    MR_Word parse_tree__write_deps_file__Var_560;
    MR_Word parse_tree__write_deps_file__Var_561;
    MR_Word parse_tree__write_deps_file__Var_564;
    MR_Word parse_tree__write_deps_file__Var_566;
    MR_String parse_tree__write_deps_file__Var_567;
    MR_Word parse_tree__write_deps_file__Var_569;
    MR_Word parse_tree__write_deps_file__Var_570;
    MR_Word parse_tree__write_deps_file__Var_575;
    MR_String parse_tree__write_deps_file__Var_576;
    MR_Word parse_tree__write_deps_file__Var_578;
    MR_Word parse_tree__write_deps_file__Var_579;
    MR_Word parse_tree__write_deps_file__Var_582;
    MR_Word parse_tree__write_deps_file__Var_584;
    MR_String parse_tree__write_deps_file__Var_585;
    MR_Word parse_tree__write_deps_file__Var_587;
    MR_Word parse_tree__write_deps_file__Var_588;
    MR_Word parse_tree__write_deps_file__Var_591;
    MR_Word parse_tree__write_deps_file__Var_593;
    MR_String parse_tree__write_deps_file__Var_594;
    MR_Word parse_tree__write_deps_file__Var_596;
    MR_Word parse_tree__write_deps_file__Var_597;
    MR_Word parse_tree__write_deps_file__Var_600;
    MR_Word parse_tree__write_deps_file__Var_602;
    MR_String parse_tree__write_deps_file__Var_603;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_606_606;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_622_622;
    MR_Word parse_tree__write_deps_file__TargetGroup_698;
    MR_Word parse_tree__write_deps_file__TargetGroups_699;
    MR_Word parse_tree__write_deps_file___ModuleNameContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 3)));
    MR_Word parse_tree__write_deps_file___Children_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 8)));
    MR_Word parse_tree__write_deps_file___ContainsForeignExport_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 15)));
    MR_Word parse_tree__write_deps_file___ModuleVersionNumbersCord_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 21)));
    MR_Word parse_tree__write_deps_file___Specs_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 22)));
    MR_Word parse_tree__write_deps_file___Error_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 23)));
    MR_Word parse_tree__write_deps_file___Timestamps_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 24)));
    MR_Word parse_tree__write_deps_file___HasMain_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 25)));
    MR_String parse_tree__write_deps_file___Dir_41 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 26)));
    MR_String parse_tree__write_deps_file__SourceFileBase_64;
    MR_String parse_tree__write_deps_file__Var_745;

    parse_tree__write_deps_file__ModuleNameString_42 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_17);
    mercury__library__version_2_p_0(&parse_tree__write_deps_file__Version_43, &parse_tree__write_deps_file__FullArch_44);
    {
      parse_tree__write_deps_file__MmakeStartComment_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MmakeStartComment_45, 0) = ((MR_Box) ((MR_String) "module dependencies"));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MmakeStartComment_45, 1) = ((MR_Box) (parse_tree__write_deps_file__ModuleNameString_42));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MmakeStartComment_45, 2) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_15));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MmakeStartComment_45, 3) = ((MR_Box) (parse_tree__write_deps_file__Version_43));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MmakeStartComment_45, 4) = ((MR_Box) (parse_tree__write_deps_file__FullArch_44));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeStartComment_45, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_196, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_201_201);
    parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__ModuleMakeVarName_46);
    parse_tree__write_deps_file__TypeCtorInfo_708_708 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    mercury__set__union_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__IntDeps_20, parse_tree__write_deps_file__ImpDeps_21, &parse_tree__write_deps_file__LongDeps0_47);
    mercury__set__delete_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, ((MR_Box) (parse_tree__write_deps_file__ModuleName_17)), parse_tree__write_deps_file__LongDeps0_47, &parse_tree__write_deps_file__LongDeps_49);
    mercury__set__difference_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__ShortDeps0_48, parse_tree__write_deps_file__LongDeps_49, &parse_tree__write_deps_file__ShortDeps1_50);
    mercury__set__delete_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, ((MR_Box) (parse_tree__write_deps_file__ModuleName_17)), parse_tree__write_deps_file__ShortDeps1_50, &parse_tree__write_deps_file__ShortDeps_51);
    parse_tree__write_deps_file__TypeCtorInfo_709_709 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__sort_and_remove_dups_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_709_709, parse_tree__write_deps_file__FactDeps0_26, &parse_tree__write_deps_file__FactDeps_52);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".trans_opt_date", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__TransOptDateFileName_53);
    if ((parse_tree__write_deps_file__MaybeTransOptDeps_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_212_212 = parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_201_201;
    else
    {
      MR_Word parse_tree__write_deps_file__TransOptDeps0_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeTransOptDeps_12, (MR_Integer) 0)));
      MR_Word parse_tree__write_deps_file__TransOptDateDeps_55;
      MR_Word parse_tree__write_deps_file__TransOptDateDepsFileNames_56;
      MR_Word parse_tree__write_deps_file__MmakeRuleTransOpt_57;
      MR_Word parse_tree__write_deps_file__Var_205;
      MR_Word parse_tree__write_deps_file__Var_207;

      parse_tree__write_deps_file__Var_205 = mercury__set__list_to_set_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__TransOptDeps0_54);
      mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__Var_205, parse_tree__write_deps_file__LongDeps_49, &parse_tree__write_deps_file__TransOptDateDeps_55);
      parse_tree__write_deps_file__Var_207 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__TransOptDateDeps_55);
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".trans_opt", parse_tree__write_deps_file__Var_207, &parse_tree__write_deps_file__TransOptDateDepsFileNames_56);
      {
        parse_tree__write_deps_file__MmakeRuleTransOpt_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOpt_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOpt_57, 1) = ((MR_Box) ((MR_String) "trans_opt_deps"));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOpt_57, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOpt_57, 3) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_53));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOpt_57, 4) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateDepsFileNames_56));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOpt_57, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeRuleTransOpt_57, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_201_201, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_212_212);
    }
    parse_tree__write_deps_file__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__write_deps_file__SourceFileName_15, (MR_String) ".m", &parse_tree__write_deps_file__SourceFileBase_64);
    if (parse_tree__write_deps_file__succeeded)
    {
      parse_tree__write_deps_file__ErrFileName_65 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__SourceFileBase_64, (MR_String) ".err");
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/8", (MR_String) "source file name doesn\'t end in \140.m\'");
        return;
      }
    }
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".optdate", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__OptDateFileName_66);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".c_date", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__CDateFileName_67);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".\044O", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__ObjFileName_68);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".java_date", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__JavaDateFileName_69);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".pic_o", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__PicObjFileName_70);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".int0", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__Int0FileName_71);
    {
      parse_tree__write_deps_file__Var_258 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_258, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_69));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_258, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_257, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_67));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_257, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_258));
    }
    {
      parse_tree__write_deps_file__Var_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_256, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrFileName_65));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_256, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_257));
    }
    {
      parse_tree__write_deps_file__Var_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_255, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_53));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_255, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_256));
    }
    {
      parse_tree__write_deps_file__Var_254 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_254, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_66));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_254, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_255));
    }
    {
      parse_tree__write_deps_file__TargetGroup_698 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__TargetGroup_698, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__TargetGroup_698, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_254));
    }
    {
      parse_tree__write_deps_file__TargetGroups_699 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__TargetGroups_699, 0) = ((MR_Box) (parse_tree__write_deps_file__TargetGroup_698));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__TargetGroups_699, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__write_deps_file__Var_262 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(parse_tree__write_deps_file__SourceFileName_15);
    {
      parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_261_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_261_261, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_262));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_261_261, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__InclDeps_24);
    if (parse_tree__write_deps_file__succeeded)
      parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_264_264 = parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_261_261;
    else
    {
      MR_Word parse_tree__write_deps_file__Var_265;
      MR_Word parse_tree__write_deps_file__Var_266;

      parse_tree__write_deps_file__Var_266 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(parse_tree__write_deps_file__Int0FileName_71);
      {
        parse_tree__write_deps_file__Var_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_265, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_266));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_265, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_264_264 = mercury__list__f_43_43_2_f_0((MR_Word) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0, parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_261_261, parse_tree__write_deps_file__Var_265);
    }
    parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) "parent deps", (MR_String) ".int0", parse_tree__write_deps_file__ParentDeps_19, &parse_tree__write_deps_file__ParentDepsSourceGroups_75);
    parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) "long deps", (MR_String) ".int", parse_tree__write_deps_file__LongDeps_49, &parse_tree__write_deps_file__LongDepsSourceGroups_76);
    parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) "short deps", (MR_String) ".int2", parse_tree__write_deps_file__ShortDeps_51, &parse_tree__write_deps_file__ShortDepsSourceGroups_77);
    parse_tree__write_deps_file__TypeCtorInfo_711_711 = (MR_Word) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0;
    parse_tree__write_deps_file__Var_279 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_711_711, parse_tree__write_deps_file__LongDepsSourceGroups_76, parse_tree__write_deps_file__ShortDepsSourceGroups_77);
    parse_tree__write_deps_file__Var_278 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_711_711, parse_tree__write_deps_file__ParentDepsSourceGroups_75, parse_tree__write_deps_file__Var_279);
    parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_277_277 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_711_711, parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_264_264, parse_tree__write_deps_file__Var_278);
    parse_tree__write_deps_file__TypeCtorInfo_712_712 = (MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0;
    parse_tree__write_deps_file__ForeignIncludeFiles_78 = mercury__cord__list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_712_712, parse_tree__write_deps_file__ForeignIncludeFilesCord_28);
    {
      parse_tree__write_deps_file__Var_280 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_280, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_280, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_280, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_280, 3) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_15));
    }
    parse_tree__write_deps_file__ForeignImportFileNames_79 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_712_712, parse_tree__write_deps_file__TypeCtorInfo_709_709, parse_tree__write_deps_file__Var_280, parse_tree__write_deps_file__ForeignIncludeFiles_78);
    parse_tree__write_deps_file__Var_282 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "foreign imports", parse_tree__write_deps_file__ForeignImportFileNames_79);
    parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_281_281 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_711_711, parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_277_277, parse_tree__write_deps_file__Var_282);
    parse_tree__write_deps_file__Var_296 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    if ((parse_tree__write_deps_file__FactDeps_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word parse_tree__write_deps_file__MmakeRuleDateFileDeps_83;

      {
        parse_tree__write_deps_file__MmakeRuleDateFileDeps_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_83, 1) = ((MR_Box) ((MR_String) "date_file_deps"));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_83, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_83, 3) = ((MR_Box) (parse_tree__write_deps_file__TargetGroups_699));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_83, 4) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_281_281));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_83, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_296));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeRuleDateFileDeps_83, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_212_212, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_323_323);
    }
    else
    {
      MR_Word parse_tree__write_deps_file__MmakeVarFactTables_60;
      MR_Word parse_tree__write_deps_file__MmakeVarFactTablesOs_61;
      MR_Word parse_tree__write_deps_file__MmakeVarFactTablesCs_62;
      MR_Word parse_tree__write_deps_file__MmakeVarsFactTables_63;
      MR_Word parse_tree__write_deps_file__FactTableSourceGroup_82;
      MR_Word parse_tree__write_deps_file__MmakeRuleFactOs_86;
      MR_Word parse_tree__write_deps_file__MmakeRuleFactCs_87;
      MR_Word parse_tree__write_deps_file__MmakeRulesFactOsCs_88;
      MR_String parse_tree__write_deps_file__Var_213;
      MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_215_215;
      MR_String parse_tree__write_deps_file__Var_216;
      MR_String parse_tree__write_deps_file__Var_218;
      MR_String parse_tree__write_deps_file__Var_220;
      MR_String parse_tree__write_deps_file__Var_222;
      MR_String parse_tree__write_deps_file__Var_224;
      MR_String parse_tree__write_deps_file__Var_226;
      MR_Word parse_tree__write_deps_file__Var_228;
      MR_Word parse_tree__write_deps_file__Var_285;
      MR_String parse_tree__write_deps_file__Var_286;
      MR_String parse_tree__write_deps_file__Var_288;
      MR_Word parse_tree__write_deps_file__Var_292;
      MR_String parse_tree__write_deps_file__Var_300;
      MR_String parse_tree__write_deps_file__Var_302;
      MR_Word parse_tree__write_deps_file__Var_304;
      MR_String parse_tree__write_deps_file__Var_305;
      MR_String parse_tree__write_deps_file__Var_307;
      MR_Word parse_tree__write_deps_file__Var_309;
      MR_String parse_tree__write_deps_file__Var_314;
      MR_String parse_tree__write_deps_file__Var_316;
      MR_Word parse_tree__write_deps_file__Var_318;
      MR_Word parse_tree__write_deps_file__Var_321;
      MR_Word parse_tree__write_deps_file__MmakeRuleDateFileDeps_746;
      MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_230_747;
      MR_Word parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_291_748;
      MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_297_749;

      parse_tree__write_deps_file__Var_213 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_46, (MR_String) ".fact_tables");
      {
        parse_tree__write_deps_file__MmakeVarFactTables_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarFactTables_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarFactTables_60, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_213));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeVarFactTables_60, 2) = ((MR_Box) (parse_tree__write_deps_file__FactDeps_52));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeVarFactTables_60, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_212_212, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_215_215);
      parse_tree__write_deps_file__Var_216 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_46, (MR_String) ".fact_tables.os");
      parse_tree__write_deps_file__Var_220 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_46, (MR_String) ".fact_tables:%=\044(os_subdir)%.\044O)");
      parse_tree__write_deps_file__Var_218 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_220);
      {
        parse_tree__write_deps_file__MmakeVarFactTablesOs_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarFactTablesOs_61, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_216));
        MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarFactTablesOs_61, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_218));
      }
      parse_tree__write_deps_file__Var_222 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_46, (MR_String) ".fact_tables.cs");
      parse_tree__write_deps_file__Var_226 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_46, (MR_String) ".fact_tables:%=\044(cs_subdir)%.c)");
      parse_tree__write_deps_file__Var_224 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_226);
      {
        parse_tree__write_deps_file__MmakeVarFactTablesCs_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarFactTablesCs_62, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_222));
        MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarFactTablesCs_62, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_224));
      }
      {
        parse_tree__write_deps_file__Var_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_228, 0) = ((MR_Box) (parse_tree__write_deps_file__MmakeVarFactTablesCs_62));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_228, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__MmakeVarsFactTables_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarsFactTables_63, 0) = ((MR_Box) (parse_tree__write_deps_file__MmakeVarFactTablesOs_61));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarsFactTables_63, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_228));
      }
      libs__mmakefiles__add_mmake_entries_3_p_0(parse_tree__write_deps_file__MmakeVarsFactTables_63, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_215_215, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_230_747);
      parse_tree__write_deps_file__Var_288 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_46, (MR_String) ".fact_tables)");
      parse_tree__write_deps_file__Var_286 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_288);
      {
        parse_tree__write_deps_file__Var_285 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_285, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_286));
        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_285, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__FactTableSourceGroup_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FactTableSourceGroup_82, 0) = ((MR_Box) ((MR_String) "fact tables"));
        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FactTableSourceGroup_82, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_285));
      }
      {
        parse_tree__write_deps_file__Var_292 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_292, 0) = ((MR_Box) (parse_tree__write_deps_file__FactTableSourceGroup_82));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_292, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_291_748 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_711_711, parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_281_281, parse_tree__write_deps_file__Var_292);
      {
        parse_tree__write_deps_file__MmakeRuleDateFileDeps_746 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_746, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_746, 1) = ((MR_Box) ((MR_String) "date_file_deps"));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_746, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_746, 3) = ((MR_Box) (parse_tree__write_deps_file__TargetGroups_699));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_746, 4) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_291_748));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_746, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_296));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeRuleDateFileDeps_746, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_230_747, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_297_749);
      parse_tree__write_deps_file__Var_302 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_46, (MR_String) ".fact_tables.os)");
      parse_tree__write_deps_file__Var_300 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_302);
      parse_tree__write_deps_file__Var_307 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_46, (MR_String) ".fact_tables)");
      parse_tree__write_deps_file__Var_305 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_307);
      {
        parse_tree__write_deps_file__Var_309 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_309, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_15));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_309, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__Var_304 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_304, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_305));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_304, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_309));
      }
      {
        parse_tree__write_deps_file__MmakeRuleFactOs_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactOs_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactOs_86, 1) = ((MR_Box) ((MR_String) "fact_table_os"));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactOs_86, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactOs_86, 3) = ((MR_Box) (parse_tree__write_deps_file__Var_300));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactOs_86, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_304));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactOs_86, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      parse_tree__write_deps_file__Var_316 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_46, (MR_String) ".fact_tables.cs)");
      parse_tree__write_deps_file__Var_314 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_316);
      {
        parse_tree__write_deps_file__Var_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_318, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_68));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_318, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__MmakeRuleFactCs_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactCs_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactCs_87, 1) = ((MR_Box) ((MR_String) "fact_table_cs"));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactCs_87, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactCs_87, 3) = ((MR_Box) (parse_tree__write_deps_file__Var_314));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactCs_87, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_318));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactCs_87, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__Var_321 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_321, 0) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleFactCs_87));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_321, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__MmakeRulesFactOsCs_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeRulesFactOsCs_88, 0) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleFactOs_86));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeRulesFactOsCs_88, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_321));
      }
      libs__mmakefiles__add_mmake_entries_3_p_0(parse_tree__write_deps_file__MmakeRulesFactOsCs_88, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_297_749, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_323_323);
    }
    parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__NestedDeps_25);
    if (parse_tree__write_deps_file__succeeded)
      parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_337_337 = parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_323_323;
    else
    {
      MR_Word parse_tree__write_deps_file__MmakeRulesNestedDeps_90;
      MR_Word parse_tree__write_deps_file__Var_334;
      MR_Word parse_tree__write_deps_file__Var_336;
      MR_Box parse_tree__write_deps_file__conv2_STATE_VARIABLE_IO_335_335;

      parse_tree__write_deps_file__Var_336 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__NestedDeps_25);
      {
        parse_tree__write_deps_file__Var_334 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_334, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_334, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_2));
        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_334, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_334, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_9));
        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_334, 4) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_17));
        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_334, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_336));
      }
      mercury__list__map_foldl_5_p_2(parse_tree__write_deps_file__TypeCtorInfo_709_709, (MR_Word) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Var_334, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[11]), &parse_tree__write_deps_file__MmakeRulesNestedDeps_90, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv2_STATE_VARIABLE_IO_335_335);
      libs__mmakefiles__add_mmake_entries_3_p_0(parse_tree__write_deps_file__MmakeRulesNestedDeps_90, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_323_323, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_337_337);
    }
    libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 334, &parse_tree__write_deps_file__UseOptFiles_91);
    libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 332, &parse_tree__write_deps_file__Intermod_92);
    libs__globals__lookup_accumulating_option_3_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 653, &parse_tree__write_deps_file__IntermodDirs_93);
    switch (parse_tree__write_deps_file__Intermod_92) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_347_347 = parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_337_337;
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__write_deps_file__AllDepsFileNames_94;
          MR_Word parse_tree__write_deps_file__MmakeRuleMhDeps_95;
          MR_Word parse_tree__write_deps_file__Var_342;

          parse_tree__write_deps_file__Var_342 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__AllDeps_11);
          parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".mh", parse_tree__write_deps_file__Var_342, &parse_tree__write_deps_file__AllDepsFileNames_94);
          {
            parse_tree__write_deps_file__MmakeRuleMhDeps_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhDeps_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhDeps_95, 1) = ((MR_Box) ((MR_String) "machine_dependent_header_deps"));
            MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhDeps_95, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhDeps_95, 3) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_68));
            MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhDeps_95, 4) = ((MR_Box) (parse_tree__write_deps_file__AllDepsFileNames_94));
            MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhDeps_95, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeRuleMhDeps_95, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_337_337, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_347_347);
        }
        break;
    }
    parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Intermod_92 == (MR_Integer) 1);
    if (!(parse_tree__write_deps_file__succeeded))
      parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__UseOptFiles_91 == (MR_Integer) 1);
    if (parse_tree__write_deps_file__succeeded)
    {
      MR_Word parse_tree__write_deps_file__TransOpt_98;
      MR_Word parse_tree__write_deps_file__UseTransOpt_99;
      MR_Word parse_tree__write_deps_file__BuildOptFiles_100;
      MR_Word parse_tree__write_deps_file__OptDeps_101;
      MR_Word parse_tree__write_deps_file__MaybeTransOptDeps1_103;
      MR_Word parse_tree__write_deps_file__OptInt0Deps_104;
      MR_Word parse_tree__write_deps_file__OptDepsFileNames_105;
      MR_Word parse_tree__write_deps_file__OptInt0DepsFileNames_106;
      MR_Word parse_tree__write_deps_file__MmakeRuleDateOptInt0Deps_107;
      MR_Word parse_tree__write_deps_file__Var_361;
      MR_Word parse_tree__write_deps_file__Var_366;
      MR_Word parse_tree__write_deps_file__Var_370;
      MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_372_372;
      MR_Word parse_tree__write_deps_file__Targets_702;

      {
        parse_tree__write_deps_file__Targets_702 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Targets_702, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_53));
        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Targets_702, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_256));
      }
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 336, &parse_tree__write_deps_file__TransOpt_98);
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 335, &parse_tree__write_deps_file__UseTransOpt_99);
      mercury__bool__not_2_p_0(parse_tree__write_deps_file__UseTransOpt_99, &parse_tree__write_deps_file__BuildOptFiles_100);
      parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__TransOpt_98 == (MR_Integer) 1);
      if (!(parse_tree__write_deps_file__succeeded))
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__UseTransOpt_99 == (MR_Integer) 1);
      if (parse_tree__write_deps_file__succeeded)
      {
        MR_Word parse_tree__write_deps_file__TransOptDeps1_102;
        MR_Word parse_tree__write_deps_file__Var_354;
        MR_Word parse_tree__write_deps_file__Var_356;

        parse_tree__write_deps_file__Var_356 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__LongDeps_49);
        {
          parse_tree__write_deps_file__Var_354 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_354, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_17));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_354, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_356));
        }
        parse_tree__write_deps_file__get_both_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__BuildOptFiles_100, parse_tree__write_deps_file__IntermodDirs_93, parse_tree__write_deps_file__Var_354, &parse_tree__write_deps_file__OptDeps_101, &parse_tree__write_deps_file__TransOptDeps1_102);
        {
          parse_tree__write_deps_file__MaybeTransOptDeps1_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeTransOptDeps1_103, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDeps1_102));
        }
      }
      else
      {
        MR_Word parse_tree__write_deps_file__Var_358;
        MR_Word parse_tree__write_deps_file__Var_360;

        parse_tree__write_deps_file__Var_360 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__LongDeps_49);
        {
          parse_tree__write_deps_file__Var_358 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_358, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_17));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_358, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_360));
        }
        parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__BuildOptFiles_100, parse_tree__write_deps_file__IntermodDirs_93, (MR_String) ".opt", parse_tree__write_deps_file__Var_358, &parse_tree__write_deps_file__OptDeps_101);
        parse_tree__write_deps_file__MaybeTransOptDeps1_103 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      parse_tree__write_deps_file__Var_361 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[5], parse_tree__write_deps_file__OptDeps_101);
      parse_tree__write_deps_file__OptInt0Deps_104 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__Var_361);
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".opt", parse_tree__write_deps_file__OptDeps_101, &parse_tree__write_deps_file__OptDepsFileNames_105);
      parse_tree__write_deps_file__Var_366 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__OptInt0Deps_104);
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".int0", parse_tree__write_deps_file__Var_366, &parse_tree__write_deps_file__OptInt0DepsFileNames_106);
      parse_tree__write_deps_file__Var_370 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_709_709, parse_tree__write_deps_file__OptDepsFileNames_105, parse_tree__write_deps_file__OptInt0DepsFileNames_106);
      {
        parse_tree__write_deps_file__MmakeRuleDateOptInt0Deps_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateOptInt0Deps_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateOptInt0Deps_107, 1) = ((MR_Box) ((MR_String) "dates_on_opts_and_int0s"));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateOptInt0Deps_107, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateOptInt0Deps_107, 3) = ((MR_Box) (parse_tree__write_deps_file__Targets_702));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateOptInt0Deps_107, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_370));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateOptInt0Deps_107, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeRuleDateOptInt0Deps_107, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_347_347, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_372_372);
      if ((parse_tree__write_deps_file__MaybeTransOptDeps1_103 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_381_381 = parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_372_372;
      else
      {
        MR_Word parse_tree__write_deps_file__TransOptDeps2_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeTransOptDeps1_103, (MR_Integer) 0)));
        MR_Word parse_tree__write_deps_file__TransOptDepsOptFileNames_109;
        MR_Word parse_tree__write_deps_file__MmakeRuleTransOptOpts_110;
        MR_Word parse_tree__write_deps_file__Targets_703;

        {
          parse_tree__write_deps_file__Targets_703 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Targets_703, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrFileName_65));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Targets_703, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_257));
        }
        parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".trans_opt", parse_tree__write_deps_file__TransOptDeps2_108, &parse_tree__write_deps_file__TransOptDepsOptFileNames_109);
        {
          parse_tree__write_deps_file__MmakeRuleTransOptOpts_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOptOpts_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOptOpts_110, 1) = ((MR_Box) ((MR_String) "dates_on_trans_opts\'_opts"));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOptOpts_110, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOptOpts_110, 3) = ((MR_Box) (parse_tree__write_deps_file__Targets_703));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOptOpts_110, 4) = ((MR_Box) (parse_tree__write_deps_file__TransOptDepsOptFileNames_109));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOptOpts_110, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeRuleTransOptOpts_110, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_372_372, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_381_381);
      }
    }
    else
      parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_381_381 = parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_347_347;
    libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 264, &parse_tree__write_deps_file__HighLevelCode_111);
    libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_9, &parse_tree__write_deps_file__CompilationTarget_112);
    parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__HighLevelCode_111 == (MR_Integer) 1);
    if (parse_tree__write_deps_file__succeeded)
      parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__CompilationTarget_112 == (MR_Integer) 0);
    if (parse_tree__write_deps_file__succeeded)
    {
      MR_Word parse_tree__write_deps_file__MmakeRuleObjOnMihs_113;
      MR_Word parse_tree__write_deps_file__Var_383;
      MR_Word parse_tree__write_deps_file__Var_386;
      MR_Word parse_tree__write_deps_file__AllDepsFileNames_704;
      MR_Word parse_tree__write_deps_file__Targets_705;

      {
        parse_tree__write_deps_file__Var_383 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_383, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_68));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_383, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__Targets_705 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Targets_705, 0) = ((MR_Box) (parse_tree__write_deps_file__PicObjFileName_70));
        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Targets_705, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_383));
      }
      parse_tree__write_deps_file__Var_386 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__AllDeps_11);
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".mih", parse_tree__write_deps_file__Var_386, &parse_tree__write_deps_file__AllDepsFileNames_704);
      {
        parse_tree__write_deps_file__MmakeRuleObjOnMihs_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleObjOnMihs_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleObjOnMihs_113, 1) = ((MR_Box) ((MR_String) "objs_on_mihs"));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleObjOnMihs_113, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleObjOnMihs_113, 3) = ((MR_Box) (parse_tree__write_deps_file__Targets_705));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleObjOnMihs_113, 4) = ((MR_Box) (parse_tree__write_deps_file__AllDepsFileNames_704));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleObjOnMihs_113, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeRuleObjOnMihs_113, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_381_381, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_391_391);
    }
    else
      parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_391_391 = parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_381_381;
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".c", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__CFileName_114);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".mh", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__MhHeaderFileName_115);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".mih", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__MihHeaderFileName_116);
    {
      parse_tree__write_deps_file__Var_404 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_404, 0) = ((MR_Box) (parse_tree__write_deps_file__MihHeaderFileName_116));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_404, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_403 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_403, 0) = ((MR_Box) (parse_tree__write_deps_file__MhHeaderFileName_115));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_403, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_404));
    }
    {
      parse_tree__write_deps_file__Var_406 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_406, 0) = ((MR_Box) (parse_tree__write_deps_file__CFileName_114));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_406, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__MmakeRuleMhMihOnC_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhMihOnC_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhMihOnC_117, 1) = ((MR_Box) ((MR_String) "mh_and_mih_on_c"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhMihOnC_117, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhMihOnC_117, 3) = ((MR_Box) (parse_tree__write_deps_file__Var_403));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhMihOnC_117, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_406));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhMihOnC_117, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeRuleMhMihOnC_117, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_391_391, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_409_409);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".java", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__JavaFileName_118);
    parse_tree__write_deps_file__Var_414 = make__make_module_dep_file_extension_0_f_0();
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, parse_tree__write_deps_file__Var_414, parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__ModuleDepFileName_119);
    {
      parse_tree__write_deps_file__Var_421 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_421, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaFileName_118));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_421, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_418 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_418, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_418, 1) = ((MR_Box) ((MR_String) "module_dep_on_java"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_418, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_418, 3) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_119));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_418, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_421));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_418, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_424 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_424, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_424, 1) = ((MR_Box) ((MR_String) "module_dep_on_c"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_424, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_424, 3) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_119));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_424, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_406));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_424, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__MmakeFragmentModuleDep_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentModuleDep_120, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentModuleDep_120, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_418));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentModuleDep_120, 2) = ((MR_Box) (parse_tree__write_deps_file__Var_424));
    }
    libs__mmakefiles__add_mmake_fragment_3_p_0(parse_tree__write_deps_file__MmakeFragmentModuleDep_120, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_409_409, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_430_430);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".date", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__DateFileName_121);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".date0", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__Date0FileName_122);
    parse_tree__write_deps_file__Var_438 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__ParentDeps_19);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".date", parse_tree__write_deps_file__Var_438, &parse_tree__write_deps_file__ParentDepDateFileNames_123);
    parse_tree__write_deps_file__Var_441 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__ParentDeps_19);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".int0", parse_tree__write_deps_file__Var_441, &parse_tree__write_deps_file__ParentDepInt0FileNames_124);
    parse_tree__write_deps_file__Var_444 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__LongDeps_49);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".int3", parse_tree__write_deps_file__Var_444, &parse_tree__write_deps_file__LongDepInt3FileNames_125);
    parse_tree__write_deps_file__Var_447 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__ShortDeps_51);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".int3", parse_tree__write_deps_file__Var_447, &parse_tree__write_deps_file__ShortDepInt3FileNames_126);
    {
      parse_tree__write_deps_file__Var_455 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_455, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_122));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_455, 1) = ((MR_Box) (parse_tree__write_deps_file__ParentDepDateFileNames_123));
    }
    {
      parse_tree__write_deps_file__Var_454 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_454, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_121));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_454, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_455));
    }
    {
      parse_tree__write_deps_file__Var_452 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_452, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_452, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_454));
    }
    {
      parse_tree__write_deps_file__Var_451 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_451, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_452));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_451, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__write_deps_file__TypeCtorInfo_724_724 = (MR_Word) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0;
    parse_tree__write_deps_file__Var_459 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(parse_tree__write_deps_file__SourceFileName_15);
    {
      parse_tree__write_deps_file__Var_458 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_458, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_459));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_458, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__write_deps_file__Var_462 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "parent dep int0", parse_tree__write_deps_file__ParentDepInt0FileNames_124);
    parse_tree__write_deps_file__Var_465 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "long dep int3s", parse_tree__write_deps_file__LongDepInt3FileNames_125);
    parse_tree__write_deps_file__Var_467 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "short dep int3s", parse_tree__write_deps_file__ShortDepInt3FileNames_126);
    parse_tree__write_deps_file__Var_464 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_724_724, parse_tree__write_deps_file__Var_465, parse_tree__write_deps_file__Var_467);
    parse_tree__write_deps_file__Var_461 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_724_724, parse_tree__write_deps_file__Var_462, parse_tree__write_deps_file__Var_464);
    parse_tree__write_deps_file__Var_457 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_724_724, parse_tree__write_deps_file__Var_458, parse_tree__write_deps_file__Var_461);
    {
      parse_tree__write_deps_file__MmakeRuleParentDates_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDates_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDates_127, 1) = ((MR_Box) ((MR_String) "self_and_parent_date_deps"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDates_127, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDates_127, 3) = ((MR_Box) (parse_tree__write_deps_file__Var_451));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDates_127, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_457));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDates_127, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeRuleParentDates_127, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_430_430, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_470_470);
    parse_tree__write_deps_file__Var_472 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__ParentDeps_19);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".date0", parse_tree__write_deps_file__Var_472, &parse_tree__write_deps_file__ParentDepDate0FileNames_128);
    {
      parse_tree__write_deps_file__Var_479 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_479, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_122));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_479, 1) = ((MR_Box) (parse_tree__write_deps_file__ParentDepDate0FileNames_128));
    }
    {
      parse_tree__write_deps_file__Var_477 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_477, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_477, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_479));
    }
    {
      parse_tree__write_deps_file__Var_476 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_476, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_477));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_476, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__write_deps_file__Var_483 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(parse_tree__write_deps_file__SourceFileName_15);
    {
      parse_tree__write_deps_file__Var_482 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_482, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_483));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_482, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__write_deps_file__Var_486 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "long dep int3s", parse_tree__write_deps_file__LongDepInt3FileNames_125);
    parse_tree__write_deps_file__Var_488 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "short dep int3s", parse_tree__write_deps_file__ShortDepInt3FileNames_126);
    parse_tree__write_deps_file__Var_485 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_724_724, parse_tree__write_deps_file__Var_486, parse_tree__write_deps_file__Var_488);
    parse_tree__write_deps_file__Var_481 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_724_724, parse_tree__write_deps_file__Var_482, parse_tree__write_deps_file__Var_485);
    {
      parse_tree__write_deps_file__MmakeRuleParentDate0s_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDate0s_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDate0s_129, 1) = ((MR_Box) ((MR_String) "self_and_parent_date0_deps"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDate0s_129, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDate0s_129, 3) = ((MR_Box) (parse_tree__write_deps_file__Var_476));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDate0s_129, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_481));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDate0s_129, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(parse_tree__write_deps_file__MmakeRuleParentDate0s_129, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_470_470, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_491_491);
    parse_tree__source_file_map__have_source_file_map_3_p_0(&parse_tree__write_deps_file__HaveMap_130);
    switch (parse_tree__write_deps_file__HaveMap_130) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__write_deps_file__ModuleArg_131 = parse_tree__write_deps_file__SourceFileName_15;
        break;
      case (MR_Integer) 1:
        parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__write_deps_file__SourceFileModuleName_16, &parse_tree__write_deps_file__ModuleArg_131);
        break;
    }
    switch (MR_tag((MR_Word) parse_tree__write_deps_file__ContainsForeignCode_29)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(parse_tree__write_deps_file__ContainsForeignCode_29)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            parse_tree__write_deps_file__ForeignImportModules_133 = parse_tree__write_deps_file__ForeignImportModules0_27;
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__write_deps_file__TypeInfo_726_726;
              MR_Word parse_tree__write_deps_file__SrcForeignImportModules_135;
              MR_Word parse_tree__write_deps_file__IntItemBlocksCord_138;
              MR_Word parse_tree__write_deps_file__IntForeignImportModules_140;
              MR_Word parse_tree__write_deps_file__OptForeignImportModules_144;
              MR_Word parse_tree__write_deps_file__IntForOptForeignImportModules_148;
              MR_Word parse_tree__write_deps_file__Var_493;
              MR_Word parse_tree__write_deps_file__Var_494;
              MR_Word parse_tree__write_deps_file__Var_495;
              MR_Word parse_tree__write_deps_file___SrcLangSet_134;
              MR_Word parse_tree__write_deps_file__Var_136;
              MR_Word parse_tree__write_deps_file__Var_137;
              MR_Word parse_tree__write_deps_file___IntLangSet_139;
              MR_Word parse_tree__write_deps_file__Var_141;
              MR_Word parse_tree__write_deps_file__Var_142;
              MR_Word parse_tree__write_deps_file___OptLangSet_143;
              MR_Word parse_tree__write_deps_file__Var_145;
              MR_Word parse_tree__write_deps_file__Var_146;
              MR_Word parse_tree__write_deps_file___IntForOptLangSet_147;
              MR_Word parse_tree__write_deps_file__Var_149;
              MR_Word parse_tree__write_deps_file__Var_150;
              MR_Word parse_tree__write_deps_file__C0_151;
              MR_Word parse_tree__write_deps_file__CSharp0_152;
              MR_Word parse_tree__write_deps_file__Java0_153;
              MR_Word parse_tree__write_deps_file__Erlang0_154;

              parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0, parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__SrcItemBlocks_31, &parse_tree__write_deps_file___SrcLangSet_134, &parse_tree__write_deps_file__SrcForeignImportModules_135, &parse_tree__write_deps_file__Var_136, &parse_tree__write_deps_file__Var_137);
              parse_tree__write_deps_file__TypeInfo_726_726 = (MR_Word) &parse_tree__write_deps_file_scalar_common_1[1];
              parse_tree__write_deps_file__IntItemBlocksCord_138 = mercury__cord__f_43_43_2_f_0(parse_tree__write_deps_file__TypeInfo_726_726, parse_tree__write_deps_file__DirectIntItemBlocksCord_32, parse_tree__write_deps_file__IndirectIntItemBlocksCord_33);
              parse_tree__write_deps_file__Var_493 = mercury__cord__list_1_f_0(parse_tree__write_deps_file__TypeInfo_726_726, parse_tree__write_deps_file__IntItemBlocksCord_138);
              parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0, parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__Var_493, &parse_tree__write_deps_file___IntLangSet_139, &parse_tree__write_deps_file__IntForeignImportModules_140, &parse_tree__write_deps_file__Var_141, &parse_tree__write_deps_file__Var_142);
              parse_tree__write_deps_file__Var_494 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[2], parse_tree__write_deps_file__OptItemBlocksCord_34);
              parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0, parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__Var_494, &parse_tree__write_deps_file___OptLangSet_143, &parse_tree__write_deps_file__OptForeignImportModules_144, &parse_tree__write_deps_file__Var_145, &parse_tree__write_deps_file__Var_146);
              parse_tree__write_deps_file__Var_495 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[3], parse_tree__write_deps_file__IntForOptItemBlocksCord_35);
              parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0, parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__Var_495, &parse_tree__write_deps_file___IntForOptLangSet_147, &parse_tree__write_deps_file__IntForOptForeignImportModules_148, &parse_tree__write_deps_file__Var_149, &parse_tree__write_deps_file__Var_150);
              parse_tree__write_deps_file__C0_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_27, (MR_Integer) 0)));
              parse_tree__write_deps_file__CSharp0_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_27, (MR_Integer) 1)));
              parse_tree__write_deps_file__Java0_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_27, (MR_Integer) 2)));
              parse_tree__write_deps_file__Erlang0_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_27, (MR_Integer) 3)));
              parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__C0_151);
              if (parse_tree__write_deps_file__succeeded)
              {
                parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__CSharp0_152);
                if (parse_tree__write_deps_file__succeeded)
                {
                  parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__Java0_153);
                  if (parse_tree__write_deps_file__succeeded)
                    parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__Erlang0_154);
                }
              }
              if (parse_tree__write_deps_file__succeeded)
              {
                MR_Word parse_tree__write_deps_file__SrcC_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_135, (MR_Integer) 0)));
                MR_Word parse_tree__write_deps_file__SrcCSharp_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_135, (MR_Integer) 1)));
                MR_Word parse_tree__write_deps_file__SrcJava_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_135, (MR_Integer) 2)));
                MR_Word parse_tree__write_deps_file__SrcErlang_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_135, (MR_Integer) 3)));
                MR_Word parse_tree__write_deps_file__IntC_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_140, (MR_Integer) 0)));
                MR_Word parse_tree__write_deps_file__IntCSharp_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_140, (MR_Integer) 1)));
                MR_Word parse_tree__write_deps_file__IntJava_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_140, (MR_Integer) 2)));
                MR_Word parse_tree__write_deps_file__IntErlang_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_140, (MR_Integer) 3)));
                MR_Word parse_tree__write_deps_file__OptC_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_144, (MR_Integer) 0)));
                MR_Word parse_tree__write_deps_file__OptCSharp_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_144, (MR_Integer) 1)));
                MR_Word parse_tree__write_deps_file__OptJava_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_144, (MR_Integer) 2)));
                MR_Word parse_tree__write_deps_file__OptErlang_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_144, (MR_Integer) 3)));
                MR_Word parse_tree__write_deps_file__IntForOptC_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_148, (MR_Integer) 0)));
                MR_Word parse_tree__write_deps_file__IntForOptCSharp_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_148, (MR_Integer) 1)));
                MR_Word parse_tree__write_deps_file__IntForOptJava_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_148, (MR_Integer) 2)));
                MR_Word parse_tree__write_deps_file__IntForOptErlang_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_148, (MR_Integer) 3)));
                MR_Word parse_tree__write_deps_file__C_171;
                MR_Word parse_tree__write_deps_file__CSharp_172;
                MR_Word parse_tree__write_deps_file__Java_173;
                MR_Word parse_tree__write_deps_file__Erlang_174;
                MR_Word parse_tree__write_deps_file__Var_496;
                MR_Word parse_tree__write_deps_file__Var_497;
                MR_Word parse_tree__write_deps_file__Var_498;
                MR_Word parse_tree__write_deps_file__Var_499;
                MR_Word parse_tree__write_deps_file__Var_501;
                MR_Word parse_tree__write_deps_file__Var_502;
                MR_Word parse_tree__write_deps_file__Var_503;
                MR_Word parse_tree__write_deps_file__Var_504;
                MR_Word parse_tree__write_deps_file__Var_506;
                MR_Word parse_tree__write_deps_file__Var_507;
                MR_Word parse_tree__write_deps_file__Var_508;
                MR_Word parse_tree__write_deps_file__Var_509;
                MR_Word parse_tree__write_deps_file__Var_511;
                MR_Word parse_tree__write_deps_file__Var_512;
                MR_Word parse_tree__write_deps_file__Var_513;
                MR_Word parse_tree__write_deps_file__Var_514;

                {
                  parse_tree__write_deps_file__Var_499 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_499, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptC_167));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_499, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__write_deps_file__Var_498 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_498, 0) = ((MR_Box) (parse_tree__write_deps_file__OptC_163));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_498, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_499));
                }
                {
                  parse_tree__write_deps_file__Var_497 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_497, 0) = ((MR_Box) (parse_tree__write_deps_file__IntC_159));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_497, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_498));
                }
                {
                  parse_tree__write_deps_file__Var_496 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_496, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcC_155));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_496, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_497));
                }
                parse_tree__write_deps_file__C_171 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__Var_496);
                {
                  parse_tree__write_deps_file__Var_504 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_504, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptCSharp_168));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_504, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__write_deps_file__Var_503 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_503, 0) = ((MR_Box) (parse_tree__write_deps_file__OptCSharp_164));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_503, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_504));
                }
                {
                  parse_tree__write_deps_file__Var_502 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_502, 0) = ((MR_Box) (parse_tree__write_deps_file__IntCSharp_160));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_502, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_503));
                }
                {
                  parse_tree__write_deps_file__Var_501 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_501, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcCSharp_156));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_501, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_502));
                }
                parse_tree__write_deps_file__CSharp_172 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__Var_501);
                {
                  parse_tree__write_deps_file__Var_509 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_509, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptJava_169));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_509, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__write_deps_file__Var_508 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_508, 0) = ((MR_Box) (parse_tree__write_deps_file__OptJava_165));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_508, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_509));
                }
                {
                  parse_tree__write_deps_file__Var_507 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_507, 0) = ((MR_Box) (parse_tree__write_deps_file__IntJava_161));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_507, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_508));
                }
                {
                  parse_tree__write_deps_file__Var_506 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_506, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcJava_157));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_506, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_507));
                }
                parse_tree__write_deps_file__Java_173 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__Var_506);
                {
                  parse_tree__write_deps_file__Var_514 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_514, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptErlang_170));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_514, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  parse_tree__write_deps_file__Var_513 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_513, 0) = ((MR_Box) (parse_tree__write_deps_file__OptErlang_166));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_513, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_514));
                }
                {
                  parse_tree__write_deps_file__Var_512 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_512, 0) = ((MR_Box) (parse_tree__write_deps_file__IntErlang_162));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_512, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_513));
                }
                {
                  parse_tree__write_deps_file__Var_511 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_511, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcErlang_158));
                  MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_511, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_512));
                }
                parse_tree__write_deps_file__Erlang_174 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__Var_511);
                {
                  parse_tree__write_deps_file__ForeignImportModules_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_133, 0) = ((MR_Box) (parse_tree__write_deps_file__C_171));
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_133, 1) = ((MR_Box) (parse_tree__write_deps_file__CSharp_172));
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_133, 2) = ((MR_Box) (parse_tree__write_deps_file__Java_173));
                  MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_133, 3) = ((MR_Box) (parse_tree__write_deps_file__Erlang_174));
                }
              }
              else
                parse_tree__write_deps_file__ForeignImportModules_133 = parse_tree__write_deps_file__ForeignImportModules0_27;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        parse_tree__write_deps_file__ForeignImportModules_133 = parse_tree__write_deps_file__ForeignImportModules0_27;
        break;
    }
    parse_tree__write_deps_file__ForeignImports_175 = parse_tree__prog_data_foreign__get_all_foreign_import_module_infos_1_f_0(parse_tree__write_deps_file__ForeignImportModules_133);
    {
      parse_tree__write_deps_file__Var_516 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_516, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_516, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_4));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_516, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_516, 3) = ((MR_Box) (parse_tree__write_deps_file__SourceFileModuleName_16));
    }
    mercury__set__filter_map_3_p_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0, parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__Var_516, parse_tree__write_deps_file__ForeignImports_175, &parse_tree__write_deps_file__ForeignImportedModuleNames_178);
    parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__ForeignImportedModuleNames_178);
    if (parse_tree__write_deps_file__succeeded)
      parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_533_533 = parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_491_491;
    else
    {
      MR_Word parse_tree__write_deps_file__Target_179;
      MR_Word parse_tree__write_deps_file__ForeignImportTargets_180;
      MR_String parse_tree__write_deps_file__ForeignImportExt_181;
      MR_Word parse_tree__write_deps_file__MmakeRulesForeignImports_184;
      MR_Word parse_tree__write_deps_file__Var_530;
      MR_Word parse_tree__write_deps_file__Var_532;
      MR_Box parse_tree__write_deps_file__conv6_STATE_VARIABLE_IO_531_531;

      libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_9, &parse_tree__write_deps_file__Target_179);
      switch (parse_tree__write_deps_file__Target_179) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word parse_tree__write_deps_file__Var_520;

            {
              parse_tree__write_deps_file__Var_520 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_520, 0) = ((MR_Box) (parse_tree__write_deps_file__PicObjFileName_70));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_520, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__write_deps_file__ForeignImportTargets_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_180, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_68));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_180, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_520));
            }
            parse_tree__write_deps_file__ForeignImportExt_181 = (MR_String) ".mh";
          }
          break;
        case (MR_Integer) 1:
          {
            parse_tree__write_deps_file__ForeignImportTargets_180 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            parse_tree__write_deps_file__ForeignImportExt_181 = (MR_String) ".cs";
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String parse_tree__write_deps_file__BeamFileName_183;

            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".beam", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__BeamFileName_183);
            {
              parse_tree__write_deps_file__ForeignImportTargets_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_180, 0) = ((MR_Box) (parse_tree__write_deps_file__BeamFileName_183));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_180, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            parse_tree__write_deps_file__ForeignImportExt_181 = (MR_String) ".hrl";
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String parse_tree__write_deps_file__ClassFileName_182;

            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".class", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__ClassFileName_182);
            {
              parse_tree__write_deps_file__ForeignImportTargets_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_180, 0) = ((MR_Box) (parse_tree__write_deps_file__ClassFileName_182));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_180, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            parse_tree__write_deps_file__ForeignImportExt_181 = (MR_String) ".java";
          }
          break;
      }
      parse_tree__write_deps_file__Var_532 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_708_708, parse_tree__write_deps_file__ForeignImportedModuleNames_178);
      {
        parse_tree__write_deps_file__Var_530 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_530, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[2]));
        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_530, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_5));
        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_530, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_530, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_9));
        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_530, 4) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportExt_181));
        MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_530, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_532));
      }
      mercury__list__map_foldl_5_p_2(parse_tree__write_deps_file__TypeCtorInfo_709_709, (MR_Word) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Var_530, parse_tree__write_deps_file__ForeignImportTargets_180, &parse_tree__write_deps_file__MmakeRulesForeignImports_184, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv6_STATE_VARIABLE_IO_531_531);
      libs__mmakefiles__add_mmake_entries_3_p_0(parse_tree__write_deps_file__MmakeRulesForeignImports_184, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_491_491, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_533_533);
    }
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".int", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__IntFileName_185);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".int2", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__Int2FileName_186);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".int3", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__Int3FileName_187);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".opt", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__OptFileName_188);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".trans_opt", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__TransOptFileName_189);
    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".date3", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__Date3FileName_190);
    {
      parse_tree__write_deps_file__Var_555 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_555, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_122));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_555, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__write_deps_file__Var_558 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      parse_tree__write_deps_file__Var_557 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_557, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_558));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_557, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_552 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_552, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_552, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_552, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_552, 3) = ((MR_Box) (parse_tree__write_deps_file__Int0FileName_71));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_552, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_555));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_552, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_557));
    }
    {
      parse_tree__write_deps_file__Var_564 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_564, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_121));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_564, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__write_deps_file__Var_567 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      parse_tree__write_deps_file__Var_566 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_566, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_567));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_566, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_561 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_561, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_561, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_561, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_561, 3) = ((MR_Box) (parse_tree__write_deps_file__IntFileName_185));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_561, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_564));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_561, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_566));
    }
    parse_tree__write_deps_file__Var_576 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      parse_tree__write_deps_file__Var_575 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_575, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_576));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_575, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_570 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_570, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_570, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_570, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_570, 3) = ((MR_Box) (parse_tree__write_deps_file__Int2FileName_186));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_570, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_564));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_570, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_575));
    }
    {
      parse_tree__write_deps_file__Var_582 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_582, 0) = ((MR_Box) (parse_tree__write_deps_file__Date3FileName_190));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_582, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__write_deps_file__Var_585 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      parse_tree__write_deps_file__Var_584 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_584, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_585));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_584, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_579 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_579, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_579, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_579, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_579, 3) = ((MR_Box) (parse_tree__write_deps_file__Int3FileName_187));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_579, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_582));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_579, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_584));
    }
    {
      parse_tree__write_deps_file__Var_591 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_591, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_66));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_591, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__write_deps_file__Var_594 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      parse_tree__write_deps_file__Var_593 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_593, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_594));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_593, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_588 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_588, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_588, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_588, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_588, 3) = ((MR_Box) (parse_tree__write_deps_file__OptFileName_188));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_588, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_591));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_588, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_593));
    }
    {
      parse_tree__write_deps_file__Var_600 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_600, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_53));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_600, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__write_deps_file__Var_603 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      parse_tree__write_deps_file__Var_602 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_602, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_603));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_602, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_597 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_597, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_597, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_597, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_597, 3) = ((MR_Box) (parse_tree__write_deps_file__TransOptFileName_189));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_597, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_600));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_597, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_602));
    }
    {
      parse_tree__write_deps_file__Var_596 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_596, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_597));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_596, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_587 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_587, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_588));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_587, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_596));
    }
    {
      parse_tree__write_deps_file__Var_578 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_578, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_579));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_578, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_587));
    }
    {
      parse_tree__write_deps_file__Var_569 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_569, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_570));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_569, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_578));
    }
    {
      parse_tree__write_deps_file__Var_560 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_560, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_561));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_560, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_569));
    }
    {
      parse_tree__write_deps_file__MmakeRulesInstallShadows_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeRulesInstallShadows_191, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_552));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeRulesInstallShadows_191, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_560));
    }
    libs__mmakefiles__add_mmake_entries_3_p_0(parse_tree__write_deps_file__MmakeRulesInstallShadows_191, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_533_533, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_606_606);
    libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 650, &parse_tree__write_deps_file__UseSubdirs_192);
    switch (parse_tree__write_deps_file__UseSubdirs_192) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_622_622 = parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_606_606;
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__write_deps_file__MmakeRulesSubDirShorthand_194;
          MR_Word parse_tree__write_deps_file__Var_620;
          MR_Box parse_tree__write_deps_file__conv8_STATE_VARIABLE_IO_199;

          {
            parse_tree__write_deps_file__Var_620 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_620, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_620, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_6));
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_620, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_620, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_9));
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_620, 4) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_17));
          }
          mercury__list__map_foldl_5_p_2(parse_tree__write_deps_file__TypeCtorInfo_709_709, (MR_Word) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Var_620, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[17]), &parse_tree__write_deps_file__MmakeRulesSubDirShorthand_194, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv8_STATE_VARIABLE_IO_199);
          libs__mmakefiles__add_mmake_entries_3_p_0(parse_tree__write_deps_file__MmakeRulesSubDirShorthand_194, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_606_606, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_622_622);
        }
        break;
    }
    parse_tree__write_deps_file__Var_745 = parse_tree__source_file_map__default_source_file_1_f_0(parse_tree__write_deps_file__ModuleName_17);
    parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__SourceFileName_15, parse_tree__write_deps_file__Var_745) == 0);
    if (parse_tree__write_deps_file__succeeded)
      *parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_197 = parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_622_622;
    else
    {
      MR_Word parse_tree__write_deps_file__MmakeRulesPattern_195;
      MR_Word parse_tree__write_deps_file__Var_623;
      MR_Word parse_tree__write_deps_file__Var_626;
      MR_Word parse_tree__write_deps_file__Var_628;
      MR_String parse_tree__write_deps_file__Var_629;
      MR_Word parse_tree__write_deps_file__Var_632;
      MR_Word parse_tree__write_deps_file__Var_633;
      MR_Word parse_tree__write_deps_file__Var_638;
      MR_String parse_tree__write_deps_file__Var_639;
      MR_Word parse_tree__write_deps_file__Var_642;
      MR_Word parse_tree__write_deps_file__Var_643;
      MR_Word parse_tree__write_deps_file__Var_648;
      MR_String parse_tree__write_deps_file__Var_649;
      MR_Word parse_tree__write_deps_file__Var_652;
      MR_Word parse_tree__write_deps_file__Var_653;
      MR_Word parse_tree__write_deps_file__Var_658;
      MR_String parse_tree__write_deps_file__Var_659;
      MR_Word parse_tree__write_deps_file__Var_662;
      MR_Word parse_tree__write_deps_file__Var_663;
      MR_Word parse_tree__write_deps_file__Var_668;
      MR_String parse_tree__write_deps_file__Var_669;
      MR_Word parse_tree__write_deps_file__Var_672;
      MR_Word parse_tree__write_deps_file__Var_673;
      MR_Word parse_tree__write_deps_file__Var_678;
      MR_String parse_tree__write_deps_file__Var_679;
      MR_String parse_tree__write_deps_file__Var_681;
      MR_Word parse_tree__write_deps_file__Var_684;
      MR_Word parse_tree__write_deps_file__Var_685;
      MR_Word parse_tree__write_deps_file__Var_690;
      MR_String parse_tree__write_deps_file__Var_691;
      MR_String parse_tree__write_deps_file__Var_693;

      {
        parse_tree__write_deps_file__Var_626 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_626, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_15));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_626, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      parse_tree__write_deps_file__Var_629 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCPI) \044(ALL_GRADEFLAGS) \044(ALL_MCPIFLAGS) ", parse_tree__write_deps_file__ModuleArg_131);
      {
        parse_tree__write_deps_file__Var_628 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_628, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_629));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_628, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__Var_623 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_623, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_623, 1) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_623, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_623, 3) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_122));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_623, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_626));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_623, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_628));
      }
      parse_tree__write_deps_file__Var_639 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCI) \044(ALL_GRADEFLAGS) \044(ALL_MCIFLAGS) ", parse_tree__write_deps_file__ModuleArg_131);
      {
        parse_tree__write_deps_file__Var_638 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_638, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_639));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_638, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__Var_633 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_633, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_633, 1) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_633, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_633, 3) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_121));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_633, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_626));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_633, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_638));
      }
      parse_tree__write_deps_file__Var_649 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCSI) \044(ALL_GRADEFLAGS) \044(ALL_MCSIFLAGS) ", parse_tree__write_deps_file__ModuleArg_131);
      {
        parse_tree__write_deps_file__Var_648 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_648, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_649));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_648, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__Var_643 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_643, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_643, 1) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_643, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_643, 3) = ((MR_Box) (parse_tree__write_deps_file__Date3FileName_190));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_643, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_626));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_643, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_648));
      }
      parse_tree__write_deps_file__Var_659 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCOI) \044(ALL_GRADEFLAGS) \044(ALL_MCOIFLAGS) ", parse_tree__write_deps_file__ModuleArg_131);
      {
        parse_tree__write_deps_file__Var_658 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_658, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_659));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_658, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__Var_653 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_653, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_653, 1) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_653, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_653, 3) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_66));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_653, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_626));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_653, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_658));
      }
      parse_tree__write_deps_file__Var_669 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCTOI) \044(ALL_GRADEFLAGS) \044(ALL_MCTOIFLAGS) ", parse_tree__write_deps_file__ModuleArg_131);
      {
        parse_tree__write_deps_file__Var_668 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_668, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_669));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_668, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__Var_663 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_663, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_663, 1) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_663, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_663, 3) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_53));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_663, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_626));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_663, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_668));
      }
      parse_tree__write_deps_file__Var_681 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleArg_131, (MR_String) " \044(ERR_REDIRECT)");
      parse_tree__write_deps_file__Var_679 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) ", parse_tree__write_deps_file__Var_681);
      {
        parse_tree__write_deps_file__Var_678 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_678, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_679));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_678, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__Var_673 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_673, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_673, 1) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_673, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_673, 3) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_67));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_673, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_626));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_673, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_678));
      }
      parse_tree__write_deps_file__Var_693 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleArg_131, (MR_String) " \044(ERR_REDIRECT)");
      parse_tree__write_deps_file__Var_691 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) --java-only ", parse_tree__write_deps_file__Var_693);
      {
        parse_tree__write_deps_file__Var_690 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_690, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_691));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_690, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__Var_685 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_685, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_685, 1) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_685, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_685, 3) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_69));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_685, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_626));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_685, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_690));
      }
      {
        parse_tree__write_deps_file__Var_684 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_684, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_685));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_684, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__Var_672 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_672, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_673));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_672, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_684));
      }
      {
        parse_tree__write_deps_file__Var_662 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_662, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_663));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_662, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_672));
      }
      {
        parse_tree__write_deps_file__Var_652 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_652, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_653));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_652, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_662));
      }
      {
        parse_tree__write_deps_file__Var_642 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_642, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_643));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_642, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_652));
      }
      {
        parse_tree__write_deps_file__Var_632 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_632, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_633));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_632, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_642));
      }
      {
        parse_tree__write_deps_file__MmakeRulesPattern_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeRulesPattern_195, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_623));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeRulesPattern_195, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_632));
      }
      libs__mmakefiles__add_mmake_entries_3_p_0(parse_tree__write_deps_file__MmakeRulesPattern_195, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_622_622, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_197);
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

    parse_tree__write_deps_file__get_both_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__BuildOptFiles_2, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__Deps_19, &parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_39_39, &parse_tree__write_deps_file__STATE_VARIABLE_TransOptDeps_40_40);
    switch (parse_tree__write_deps_file__BuildOptFiles_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String parse_tree__write_deps_file__OptName_27;
          MR_Word parse_tree__write_deps_file__MaybeOptDir_28;
          MR_String parse_tree__write_deps_file__TransOptName_31;
          MR_Word parse_tree__write_deps_file__MaybeTransOptDir_32;

          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, (MR_Integer) 1, (MR_String) ".opt", parse_tree__write_deps_file__Dep_18, &parse_tree__write_deps_file__OptName_27);
          libs__file_util__search_for_file_returning_dir_5_p_0(parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__OptName_27, &parse_tree__write_deps_file__MaybeOptDir_28);
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
          parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, (MR_Integer) 1, (MR_String) ".trans_opt", parse_tree__write_deps_file__Dep_18, &parse_tree__write_deps_file__TransOptName_31);
          libs__file_util__search_for_file_returning_dir_5_p_0(parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__TransOptName_31, &parse_tree__write_deps_file__MaybeTransOptDir_32);
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

          parse_tree__find_module__search_for_module_source_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__Dep_18, &parse_tree__write_deps_file__MaybeFileName_23);
          if (((MR_tag((MR_Word) parse_tree__write_deps_file__MaybeFileName_23)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String parse_tree__write_deps_file__OptName_56;
            MR_Word parse_tree__write_deps_file__MaybeOptDir_57;
            MR_String parse_tree__write_deps_file__TransOptName_58;
            MR_Word parse_tree__write_deps_file__MaybeTransOptDir_59;

            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, (MR_Integer) 1, (MR_String) ".opt", parse_tree__write_deps_file__Dep_18, &parse_tree__write_deps_file__OptName_56);
            libs__file_util__search_for_file_returning_dir_5_p_0(parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__OptName_56, &parse_tree__write_deps_file__MaybeOptDir_57);
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
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, (MR_Integer) 1, (MR_String) ".trans_opt", parse_tree__write_deps_file__Dep_18, &parse_tree__write_deps_file__TransOptName_58);
            libs__file_util__search_for_file_returning_dir_5_p_0(parse_tree__write_deps_file__IntermodDirs_3, parse_tree__write_deps_file__TransOptName_58, &parse_tree__write_deps_file__MaybeTransOptDir_59);
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

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_String parse_tree__write_deps_file__conv0_HeadVar__5_5;

    parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv0_HeadVar__5_5);
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(
  MR_Word parse_tree__write_deps_file__Globals_8,
  MR_String parse_tree__write_deps_file__GroupName_9,
  MR_String parse_tree__write_deps_file__Suffix_10,
  MR_Word parse_tree__write_deps_file__Modules_11,
  MR_Word * parse_tree__write_deps_file__Groups_12)
{
  {
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_25_25;
    MR_Word parse_tree__write_deps_file__FileNames_14;
    MR_Word parse_tree__write_deps_file__Var_17;
    MR_Word parse_tree__write_deps_file__Var_18;
    MR_Box parse_tree__write_deps_file__conv1_STATE_VARIABLE_IO_16;

    {
      parse_tree__write_deps_file__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_17, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_17, 1) = ((MR_Box) (parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_17, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_8));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_17, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_17, 5) = ((MR_Box) (parse_tree__write_deps_file__Suffix_10));
    }
    parse_tree__write_deps_file__TypeCtorInfo_25_25 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    parse_tree__write_deps_file__Var_18 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_25_25, parse_tree__write_deps_file__Modules_11);
    mercury__list__map_foldl_5_p_2(parse_tree__write_deps_file__TypeCtorInfo_25_25, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Var_17, parse_tree__write_deps_file__Var_18, &parse_tree__write_deps_file__FileNames_14, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv1_STATE_VARIABLE_IO_16);
    *parse_tree__write_deps_file__Groups_12 = libs__mmakefiles__make_file_name_group_2_f_0(parse_tree__write_deps_file__GroupName_9, parse_tree__write_deps_file__FileNames_14);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_String parse_tree__write_deps_file__conv0_HeadVar__5_5;

    parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv0_HeadVar__5_5);
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(
  MR_Word parse_tree__write_deps_file__Globals_7,
  MR_String parse_tree__write_deps_file__Suffix_8,
  MR_Word parse_tree__write_deps_file__Modules_9,
  MR_Word * parse_tree__write_deps_file__FileNames_10)
{
  {
    MR_Word parse_tree__write_deps_file__Var_14;
    MR_Box parse_tree__write_deps_file__conv1_STATE_VARIABLE_IO_13;

    {
      parse_tree__write_deps_file__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, 1) = ((MR_Box) (parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, 5) = ((MR_Box) (parse_tree__write_deps_file__Suffix_8));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Var_14, parse_tree__write_deps_file__Modules_9, parse_tree__write_deps_file__FileNames_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv1_STATE_VARIABLE_IO_13);
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
  if ((parse_tree__write_deps_file__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *parse_tree__write_deps_file__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word parse_tree__write_deps_file__Dep_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 0)));
    MR_Word parse_tree__write_deps_file__Deps_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 1)));
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35;

    parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__HeadVar__2_2, parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__HeadVar__4_4, parse_tree__write_deps_file__Deps_21, &parse_tree__write_deps_file__STATE_VARIABLE_OptDeps_35_35);
    switch (parse_tree__write_deps_file__HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String parse_tree__write_deps_file__OptName_28;
          MR_Word parse_tree__write_deps_file__MaybeOptDir_29;

          parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__HeadVar__4_4, parse_tree__write_deps_file__Dep_20, &parse_tree__write_deps_file__OptName_28);
          libs__file_util__search_for_file_5_p_0(parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__OptName_28, &parse_tree__write_deps_file__MaybeOptDir_29);
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

          parse_tree__find_module__search_for_module_source_7_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__Dep_20, &parse_tree__write_deps_file__Result1_24);
          if (((MR_tag((MR_Word) parse_tree__write_deps_file__Result1_24)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String parse_tree__write_deps_file__OptName_43;
            MR_Word parse_tree__write_deps_file__MaybeOptDir_44;

            parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__HeadVar__4_4, parse_tree__write_deps_file__Dep_20, &parse_tree__write_deps_file__OptName_43);
            libs__file_util__search_for_file_5_p_0(parse_tree__write_deps_file__HeadVar__3_3, parse_tree__write_deps_file__OptName_43, &parse_tree__write_deps_file__MaybeOptDir_44);
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

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0_10001(
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;

    parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_2));
    return parse_tree__write_deps_file__succeeded;
  }
}

static void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_mmake_var_0_0_10001(
  MR_Box * parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3)
{
  {
    MR_Word parse_tree__write_deps_file__conv0_HeadVar__1_1;

    parse_tree__write_deps_file____Compare____maybe_mmake_var_0_0(&parse_tree__write_deps_file__conv0_HeadVar__1_1, ((MR_Word) parse_tree__write_deps_file__wrapper_arg_2), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_3));
    *parse_tree__write_deps_file__wrapper_arg_1 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__write_deps_file__init(void)
{
}

void mercury__parse_tree__write_deps_file__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_maybe_mmake_var_0);
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
