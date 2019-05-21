/*
** Automatically generated from `write_deps_file.m'
** by the Mercury compiler,
** version rotd-2017-11-09
** configured for x86_64-pc-linux-gnu.
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


// :- module parse_tree.write_deps_file.
// :- implementation.

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
  MR_Word Globals_9,
  MR_Word LambdaHeadVar__1_132,
  MR_String * LambdaHeadVar__2_133);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1140__1_2_p_0(
  MR_Word DepsMap_12,
  MR_Word LambdaHeadVar__1_119);

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1097__1_4_p_0(
  MR_Word DepsGraph_8,
  MR_Word LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1068__1_2_p_0(
  MR_Word ModuleName_22,
  MR_Word LambdaHeadVar__1_47);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_d_file__751__1_3_p_0(
  MR_Word SourceFileModuleName_16,
  MR_Word LambdaHeadVar__1_517,
  MR_Word * LambdaHeadVar__2_518);

static void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_mmake_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
parse_tree__write_deps_file__add_suffix_2_f_0(
  MR_String Suffix_4,
  MR_String Str_5);

static void MR_CALL 
parse_tree__write_deps_file__compare_module_names_3_p_0(
  MR_Word Sym1_4,
  MR_Word Sym2_5,
  MR_Word * Result_6);

static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0(
  MR_Word Stream_5,
  MR_Word SCC0_6);

static void MR_CALL 
parse_tree__write_deps_file__get_source_file_3_p_0(
  MR_Word DepsMap_4,
  MR_Word ModuleName_5,
  MR_String * FileName_6);

static MR_String MR_CALL 
parse_tree__write_deps_file__remove_suffix_files_cmd_2_f_0(
  MR_String ModuleMakeVarName_4,
  MR_String Extension_5);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_String ModuleMakeVarName_11,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_MmakeFile_0_19,
  MR_Word * STATE_VARIABLE_MmakeFile_20);

static void MR_CALL 
parse_tree__write_deps_file__construct_subdirs_shorthand_rule_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_String Ext_9,
  MR_Word * MmakeRule_10);

static MR_String MR_CALL 
parse_tree__write_deps_file__foreign_include_file_path_name_2_f_0(
  MR_String SourceFileName_4,
  MR_Word IncludeFile_5);

static void MR_CALL 
parse_tree__write_deps_file__gather_foreign_import_deps_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__write_deps_file__gather_foreign_import_deps_7_p_0(
  MR_Word Globals_8,
  MR_String ForeignImportExt_9,
  MR_Word ForeignImportedModuleNames_10,
  MR_String ForeignImportTarget_11,
  MR_Word * MmakeRule_12);

static void MR_CALL 
parse_tree__write_deps_file__gather_nested_deps_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__write_deps_file__gather_nested_deps_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word NestedDeps_10,
  MR_String Ext_11,
  MR_Word * MmakeRule_12);

static void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_8_p_0(
  MR_Word Globals_9,
  MR_String SourceFileName_10,
  MR_Word ModuleName_11,
  MR_Word DepsMap_12,
  MR_Word STATE_VARIABLE_MmakeFile_0_45,
  MR_Word * STATE_VARIABLE_MmakeFile_46);

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0(
  MR_Word Globals_18,
  MR_Word ModuleName_19,
  MR_String ModuleMakeVarName_20,
  MR_String ExeFileName_21,
  MR_String InitCFileName_22,
  MR_String InitObjFileName_23,
  MR_String InitPicObjFileName_24,
  MR_String InitFileName_25,
  MR_String LibFileName_26,
  MR_String SharedLibFileName_27,
  MR_String JarFileName_28,
  MR_String DepFileName_29,
  MR_String DvFileName_30,
  MR_Word STATE_VARIABLE_MmakeFile_0_41,
  MR_Word * STATE_VARIABLE_MmakeFile_42);

static MR_String MR_CALL 
parse_tree__write_deps_file__remove_files_cmd_1_f_0(
  MR_Word Files_3);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_String ModuleMakeVarName_10,
  MR_Word STATE_VARIABLE_MmakeFile_0_13,
  MR_Word * STATE_VARIABLE_MmakeFile_14);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0(
  MR_Word Globals_15,
  MR_Word ModuleName_16,
  MR_Word DepsMap_17,
  MR_String ModuleMakeVarName_18,
  MR_Word MmcMakeDeps_19,
  MR_Word Intermod_20,
  MR_Word TransOpt_21,
  MR_Word MaybeModuleDepsVarPair_22,
  MR_Word MaybeOptsVarPair_23,
  MR_Word MaybeTransOptsVarPair_24,
  MR_Word STATE_VARIABLE_MmakeFile_0_63,
  MR_Word * STATE_VARIABLE_MmakeFile_64);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_init_targets_11_p_0(
  MR_Word Globals_12,
  MR_Word ModuleName_13,
  MR_String ModuleMakeVarName_14,
  MR_String InitCFileName_15,
  MR_String InitFileName_16,
  MR_String * DepFileName_17,
  MR_String * DvFileName_18,
  MR_Word STATE_VARIABLE_MmakeFile_0_34,
  MR_Word * STATE_VARIABLE_MmakeFile_35);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_exec_library_targets_15_p_0(
  MR_Word Globals_16,
  MR_Word ModuleName_17,
  MR_String ModuleMakeVarName_18,
  MR_String InitFileName_19,
  MR_String InitObjFileName_20,
  MR_Word MaybeOptsVar_21,
  MR_Word MaybeTransOptsVar_22,
  MR_String * ExeFileName_23,
  MR_String * JarFileName_24,
  MR_String * LibFileName_25,
  MR_String * SharedLibFileName_26,
  MR_Word STATE_VARIABLE_MmakeFile_0_66,
  MR_Word * STATE_VARIABLE_MmakeFile_67);

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0(
  MR_Word Globals_9,
  MR_String SourceFileName_10,
  MR_Word ModuleName_11,
  MR_Word DepsMap_12,
  MR_Word STATE_VARIABLE_MmakeFile_0_93,
  MR_Word * STATE_VARIABLE_MmakeFile_94);

static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(
  MR_Word Modules_5,
  MR_Word DepsMap_6,
  MR_Word * ExtraLinkObjs_8);

static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ExtraLinkObjs_0_4,
  MR_Word * STATE_VARIABLE_ExtraLinkObjs_5);

static void MR_CALL 
parse_tree__write_deps_file__select_ok_modules_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word DepsMap_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
parse_tree__write_deps_file__get_extra_link_dependencies_6_p_0(
  MR_Word Globals_1,
  MR_String Suffix_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_56_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_56_93_95_48_10_p_0(
  MR_Word Globals_11,
  MR_Word Dep_12,
  MR_Word IntDepsGraph_13,
  MR_Word ImpDepsGraph_14,
  MR_Word IndirectDepsGraph_15,
  MR_Word IndirectOptDepsGraph_16,
  MR_Word TransOptOrder_17);

static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(
  MR_Word DepsGraph0_4,
  MR_Word ModuleName_5,
  MR_Word * Dependencies_6);

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleAndImports_10,
  MR_Word AllDeps_11,
  MR_Word MaybeTransOptDeps_12,
  MR_Word STATE_VARIABLE_MmakeFile_0_196,
  MR_Word * STATE_VARIABLE_MmakeFile_197);

static void MR_CALL 
parse_tree__write_deps_file__get_both_opt_deps_8_p_0(
  MR_Word Globals_1,
  MR_Word BuildOptFiles_2,
  MR_Word IntermodDirs_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(
  MR_Word Globals_8,
  MR_String GroupName_9,
  MR_String Suffix_10,
  MR_Word Modules_11,
  MR_Word * Groups_12);

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(
  MR_Word Globals_7,
  MR_String Suffix_8,
  MR_Word Modules_9,
  MR_Word * FileNames_10);

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_mmake_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
  MR_Word Globals_9,
  MR_Word LambdaHeadVar__1_132,
  MR_String * LambdaHeadVar__2_133)
{
  {
    MR_String F0_45;
    MR_Word M_478 = ((MR_Word) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_132, (MR_Integer) 0)));
    MR_String E_479 = ((MR_String) (MR_hl_field(MR_mktag(0), LambdaHeadVar__1_132, (MR_Integer) 1)));

    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 0, E_479, M_478, &F0_45);
    *LambdaHeadVar__2_133 = mercury__string__f_43_43_2_f_0((MR_String) "\044(os_subdir)", F0_45);
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1140__1_2_p_0(
  MR_Word DepsMap_12,
  MR_Word LambdaHeadVar__1_119)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_520_520 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word ModuleImports_32;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Box conv0_Var_120;
    MR_Word Var_31;
    MR_String Var_482;
    MR_Word Var_483;
    MR_Word Var_484;
    MR_Word Var_485;
    MR_Word Var_486;
    MR_Word Var_487;
    MR_Word Var_488;
    MR_Word Var_489;
    MR_Word Var_490;
    MR_Word Var_491;
    MR_Word Var_492;
    MR_Word Var_493;
    MR_Word Var_494;
    MR_Word Var_495;
    MR_Word Var_496;
    MR_Word Var_497;
    MR_Word Var_498;
    MR_Word Var_499;
    MR_Word Var_500;
    MR_Word Var_501;
    MR_Word Var_502;
    MR_Word Var_503;
    MR_Word Var_504;
    MR_Word Var_505;
    MR_Word Var_506;
    MR_String Var_507;

    mercury__map__lookup_3_p_0(TypeCtorInfo_520_520, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, DepsMap_12, ((MR_Box) (LambdaHeadVar__1_119)), &conv0_Var_120);
    Var_120 = ((MR_Word) conv0_Var_120);
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_120, (MR_Integer) 0)));
    ModuleImports_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_120, (MR_Integer) 1)));
    Var_482 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 0)));
    Var_483 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 1)));
    Var_484 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 2)));
    Var_485 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 3)));
    Var_486 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 4)));
    Var_487 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 5)));
    Var_488 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 6)));
    Var_489 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 7)));
    Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 8)));
    Var_490 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 9)));
    Var_491 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 10)));
    Var_492 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 11)));
    Var_493 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 12)));
    Var_494 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 13)));
    Var_495 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 14)));
    Var_496 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 15)));
    Var_497 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 16)));
    Var_498 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 17)));
    Var_499 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 18)));
    Var_500 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 19)));
    Var_501 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 20)));
    Var_502 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 21)));
    Var_503 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 22)));
    Var_504 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 23)));
    Var_505 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 24)));
    Var_506 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 25)));
    Var_507 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_32, (MR_Integer) 26)));
    succeeded = mercury__set__non_empty_1_p_0(TypeCtorInfo_520_520, Var_121);
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1097__1_4_p_0(
  MR_Word DepsGraph_8,
  MR_Word LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17)
{
  {
    MR_Word TypeCtorInfo_23_23 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word Dep_14;
    MR_Box conv0_Dep_14;

    mercury__digraph__lookup_vertex_3_p_0(TypeCtorInfo_23_23, DepsGraph_8, LambdaHeadVar__1_15, &conv0_Dep_14);
    Dep_14 = ((MR_Word) conv0_Dep_14);
    mercury__set__insert_3_p_0(TypeCtorInfo_23_23, ((MR_Box) (Dep_14)), LambdaHeadVar__2_16, LambdaHeadVar__3_17);
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1068__1_2_p_0(
  MR_Word ModuleName_22,
  MR_Word LambdaHeadVar__1_47)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_22, LambdaHeadVar__1_47);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_d_file__751__1_3_p_0(
  MR_Word SourceFileModuleName_16,
  MR_Word LambdaHeadVar__1_517,
  MR_Word * LambdaHeadVar__2_518)
{
  {
    MR_bool succeeded;
    MR_String Var_519;

    *LambdaHeadVar__2_518 = parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(LambdaHeadVar__1_517, SourceFileModuleName_16);
    succeeded = ((MR_tag((MR_Word) *LambdaHeadVar__2_518)) == (MR_mktag((MR_Integer) 0)));
    if (succeeded)
    {
      Var_519 = ((MR_String) (MR_hl_field(MR_mktag(0), *LambdaHeadVar__2_518, (MR_Integer) 0)));
      succeeded = (strcmp(Var_519, (MR_String) "mercury") == 0);
    }
    succeeded = !(succeeded);
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_mmake_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_2[4], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_2[4], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static MR_String MR_CALL 
parse_tree__write_deps_file__add_suffix_2_f_0(
  MR_String Suffix_4,
  MR_String Str_5)
{
  {
    MR_String HeadVar__3_3;

    HeadVar__3_3 = mercury__string__f_43_43_2_f_0(Str_5, Suffix_4);
    return HeadVar__3_3;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__compare_module_names_3_p_0(
  MR_Word Sym1_4,
  MR_Word Sym2_5,
  MR_Word * Result_6)
{
  {
    MR_String Str1_7;
    MR_String Str2_8;

    Str1_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Sym1_4);
    Str2_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Sym2_5);
    mercury__private_builtin__builtin_compare_string_3_p_0(Result_6, Str1_7, Str2_8);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__prog_out__write_sym_name_3_p_0(((MR_Word) wrapper_arg_1));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0(
  MR_Word Stream_5,
  MR_Word SCC0_6)
{
  {
    MR_Word TypeCtorInfo_14_14 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word SCC_8;

    mercury__set__to_sorted_list_2_p_0(TypeCtorInfo_14_14, SCC0_6, &SCC_8);
    mercury__io__write_list_6_p_0(TypeCtorInfo_14_14, Stream_5, SCC_8, (MR_String) "\n", (MR_Word) &parse_tree__write_deps_file_scalar_common_2[7]);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__get_source_file_3_p_0(
  MR_Word DepsMap_4,
  MR_Word ModuleName_5,
  MR_String * FileName_6)
{
  {
    MR_bool succeeded;
    MR_Word Deps_7;
    MR_Word ModuleAndImports_9;
    MR_String SourceFileName_10;
    MR_Box conv0_Deps_7;
    MR_Word Var_8;
    MR_String SourceFileBase_11;

    mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, DepsMap_4, ((MR_Box) (ModuleName_5)), &conv0_Deps_7);
    Deps_7 = ((MR_Word) conv0_Deps_7);
    Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deps_7, (MR_Integer) 0)));
    ModuleAndImports_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Deps_7, (MR_Integer) 1)));
    parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(ModuleAndImports_9, &SourceFileName_10);
    succeeded = mercury__string__remove_suffix_3_p_0(SourceFileName_10, (MR_String) ".m", &SourceFileBase_11);
    if (succeeded)
      *FileName_6 = SourceFileBase_11;
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
  MR_String ModuleMakeVarName_4,
  MR_String Extension_5)
{
  {
    MR_String HeadVar__3_3;
    MR_String Var_13;
    MR_String Var_14;

    Var_13 = mercury__string__f_43_43_2_f_0(Extension_5, (MR_String) ") | xargs rm -f");
    Var_14 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_4, Var_13);
    HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "-echo \044(", Var_14);
    return HeadVar__3_3;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_String ModuleMakeVarName_11,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_MmakeFile_0_19,
  MR_Word * STATE_VARIABLE_MmakeFile_20)
{
  {
    MR_String Extension_12 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0)));
    MR_String VarExtension_13 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1)));
    MR_String TargetName_16;
    MR_String Source_17;
    MR_Word MmakeRule_18;
    MR_String Var_31;
    MR_String Var_33;
    MR_Word Var_35;
    MR_String Var_40;
    MR_String Var_41;

    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, Extension_12, ModuleName_10, &TargetName_16);
    Var_40 = mercury__string__f_43_43_2_f_0(VarExtension_13, (MR_String) ")");
    Var_41 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_11, Var_40);
    Source_17 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_41);
    Var_33 = mercury__string__f_43_43_2_f_0(Extension_12, VarExtension_13);
    Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "collective_target_", Var_33);
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Source_17));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MmakeRule_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRule_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRule_18, 1) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(3), MmakeRule_18, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRule_18, 3) = ((MR_Box) (TargetName_16));
      MR_hl_field(MR_mktag(3), MmakeRule_18, 4) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(3), MmakeRule_18, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRule_18, STATE_VARIABLE_MmakeFile_0_19, STATE_VARIABLE_MmakeFile_20);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__construct_subdirs_shorthand_rule_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_String Ext_9,
  MR_Word * MmakeRule_10)
{
  {
    MR_String ModuleStr_12;
    MR_String ShorthandTarget_13;
    MR_String Target_14;
    MR_String Var_19;
    MR_Word Var_22;

    parse_tree__file_names__module_name_to_file_name_stem_2_p_0(ModuleName_8, &ModuleStr_12);
    ShorthandTarget_13 = mercury__string__f_43_43_2_f_0(ModuleStr_12, Ext_9);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 1, Ext_9, ModuleName_8, &Target_14);
    Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "subdir_shorthand_for_", Ext_9);
    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Target_14));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      *MmakeRule_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ShorthandTarget_13));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static MR_String MR_CALL 
parse_tree__write_deps_file__foreign_include_file_path_name_2_f_0(
  MR_String SourceFileName_4,
  MR_Word IncludeFile_5)
{
  {
    MR_String IncludePath_6;
    MR_String IncludeFileName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), IncludeFile_5, (MR_Integer) 1)));
    MR_Word _Lang_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), IncludeFile_5, (MR_Integer) 0)));

    parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_4, IncludeFileName_8, &IncludePath_6);
    return IncludePath_6;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__gather_foreign_import_deps_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__5_5;

    parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv0_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__gather_foreign_import_deps_7_p_0(
  MR_Word Globals_8,
  MR_String ForeignImportExt_9,
  MR_Word ForeignImportedModuleNames_10,
  MR_String ForeignImportTarget_11,
  MR_Word * MmakeRule_12)
{
  {
    MR_Word ForeignImportedFileNames_14;
    MR_String Var_18;
    MR_Word Var_29;
    MR_Box conv1_STATE_VARIABLE_IO_16;

    {
      Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (parse_tree__write_deps_file__gather_foreign_import_deps_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (Globals_8));
      MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_29, 5) = ((MR_Box) (ForeignImportExt_9));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_29, ForeignImportedModuleNames_10, &ForeignImportedFileNames_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16);
    Var_18 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_deps_for_", ForeignImportExt_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      *MmakeRule_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ForeignImportTarget_11));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ForeignImportedFileNames_14));
      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__gather_nested_deps_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__5_5;

    parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv0_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__gather_nested_deps_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word NestedDeps_10,
  MR_String Ext_11,
  MR_Word * MmakeRule_12)
{
  {
    MR_String ExtName_14;
    MR_Word NestedDepsFileNames_15;
    MR_String Var_21;
    MR_Word Var_32;
    MR_Box conv1_STATE_VARIABLE_IO_17;

    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_8, (MR_Integer) 1, Ext_11, ModuleName_9, &ExtName_14);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (parse_tree__write_deps_file__gather_nested_deps_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (Globals_8));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_32, 5) = ((MR_Box) (Ext_11));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_32, NestedDeps_10, &NestedDepsFileNames_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_17);
    Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "nested_deps_for_", Ext_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      *MmakeRule_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ExtName_14));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (NestedDepsFileNames_15));
      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__write_deps_file__write_module_scc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
  }
}

void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0(
  MR_Word Globals_6,
  MR_Word Module_7,
  MR_Word DepsOrdering_8)
{
  {
    MR_Word Order_10;
    MR_Word Verbose_11;

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 105, &Order_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 57, &Verbose_11);
    switch (Order_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String OrdFileName_12;
          MR_Word OrdResult_13;

          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_6, (MR_Integer) 0, (MR_String) ".order", Module_7, &OrdFileName_12);
          libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Creating module order file \140");
          libs__file_util__maybe_write_string_4_p_0(Verbose_11, OrdFileName_12);
          libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "\'...");
          mercury__io__open_output_4_p_0(OrdFileName_12, &OrdResult_13);
          if (((MR_tag((MR_Word) OrdResult_13)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word IOError_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), OrdResult_13, (MR_Integer) 0)));
            MR_String IOErrorMessage_16;
            MR_String OrdMessage_17;
            MR_Word Var_34;
            MR_Word Var_36;
            MR_Word Var_37;
            MR_Word Var_39;

            libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) " failed.\n");
            libs__file_util__maybe_flush_output_3_p_0(Verbose_11);
            mercury__io__error_message_2_p_0(IOError_15, &IOErrorMessage_16);
            {
              Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (IOErrorMessage_16));
              MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
              MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
            }
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (OrdFileName_12));
              MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
            }
            {
              Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
              MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
            }
            mercury__string__append_list_2_p_0(Var_34, &OrdMessage_17);
            libs__file_util__report_error_3_p_0(OrdMessage_17);
          }
          else
          {
            MR_Word OrdStream_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), OrdResult_13, (MR_Integer) 0)));
            MR_Word Var_43;

            {
              Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[1]));
              MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1));
              MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (OrdStream_14));
            }
            mercury__io__write_list_6_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], OrdStream_14, DepsOrdering_8, (MR_String) "\n\n", Var_43);
            mercury__io__close_output_3_p_0(OrdStream_14);
            libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) " done.\n");
          }
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_dep_file_6_p_0(
  MR_Word Globals_7,
  MR_String SourceFileName_8,
  MR_Word ModuleName_9,
  MR_Word DepsMap_10)
{
  {
    MR_Word Verbose_12;
    MR_String DepFileName_13;
    MR_Word DepResult_14;

    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 57, &Verbose_12);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 0, (MR_String) ".dep", ModuleName_9, &DepFileName_13);
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, DepFileName_13);
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "\'...\n");
    mercury__io__open_output_4_p_0(DepFileName_13, &DepResult_14);
    if (((MR_tag((MR_Word) DepResult_14)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word IOError_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), DepResult_14, (MR_Integer) 0)));
      MR_String IOErrorMessage_19;
      MR_String DepMessage_20;
      MR_Word Var_36;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_41;

      libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) " failed.\n");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_12);
      mercury__io__error_message_2_p_0(IOError_18, &IOErrorMessage_19);
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (IOErrorMessage_19));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) ((MR_String) "\' for output: "));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (DepFileName_13));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
      }
      mercury__string__append_list_2_p_0(Var_36, &DepMessage_20);
      libs__file_util__report_error_3_p_0(DepMessage_20);
    }
    else
    {
      MR_Word DepStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), DepResult_14, (MR_Integer) 0)));
      MR_Word MmakeFile0_16;
      MR_Word MmakeFile_17;

      libs__mmakefiles__start_mmakefile_1_p_0(&MmakeFile0_16);
      parse_tree__write_deps_file__generate_dep_file_8_p_0(Globals_7, SourceFileName_8, ModuleName_9, DepsMap_10, MmakeFile0_16, &MmakeFile_17);
      libs__mmakefiles__end_mmakefile_4_p_0(DepStream_15, MmakeFile_17);
      mercury__io__close_output_3_p_0(DepStream_15);
      libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% done.\n");
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_8_p_0(
  MR_Word Globals_9,
  MR_String SourceFileName_10,
  MR_Word ModuleName_11,
  MR_Word DepsMap_12,
  MR_Word STATE_VARIABLE_MmakeFile_0_45,
  MR_Word * STATE_VARIABLE_MmakeFile_46)
{
  {
    MR_String ModuleNameString_15;
    MR_String Version_16;
    MR_String FullArch_17;
    MR_Word MmakeStartComment_18;
    MR_String ModuleMakeVarName_19;
    MR_String InitFileName_20;
    MR_String InitCFileName_21;
    MR_String InitObjFileName_22;
    MR_String InitPicObjFileName_23;
    MR_Word MmcMakeDeps_24;
    MR_Word Intermod_25;
    MR_Word TransOpt_26;
    MR_Word MaybeModuleDepsVar_28;
    MR_String MaybeModuleDepsVarSpace_29;
    MR_Word MaybeOptsVar_31;
    MR_String MaybeOptsVarSpace_32;
    MR_Word MaybeTransOptsVar_34;
    MR_String MaybeTransOptsVarSpace_35;
    MR_Word MaybeModuleDepsVarPair_36;
    MR_Word MaybeOptsVarPair_37;
    MR_Word MaybeTransOptsVarPair_38;
    MR_String ExeFileName_39;
    MR_String JarFileName_40;
    MR_String LibFileName_41;
    MR_String SharedLibFileName_42;
    MR_String DepFileName_43;
    MR_String DvFileName_44;
    MR_Word STATE_VARIABLE_MmakeFile_50_50;
    MR_Word STATE_VARIABLE_MmakeFile_81_81;
    MR_Word STATE_VARIABLE_MmakeFile_83_83;
    MR_Word STATE_VARIABLE_MmakeFile_85_85;
    MR_Word STATE_VARIABLE_MmakeFile_87_87;

    ModuleNameString_15 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_11);
    mercury__library__version_2_p_0(&Version_16, &FullArch_17);
    {
      MmakeStartComment_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MmakeStartComment_18, 0) = ((MR_Box) ((MR_String) "program dependencies"));
      MR_hl_field(MR_mktag(0), MmakeStartComment_18, 1) = ((MR_Box) (ModuleNameString_15));
      MR_hl_field(MR_mktag(0), MmakeStartComment_18, 2) = ((MR_Box) (SourceFileName_10));
      MR_hl_field(MR_mktag(0), MmakeStartComment_18, 3) = ((MR_Box) (Version_16));
      MR_hl_field(MR_mktag(0), MmakeStartComment_18, 4) = ((MR_Box) (FullArch_17));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeStartComment_18, STATE_VARIABLE_MmakeFile_0_45, &STATE_VARIABLE_MmakeFile_50_50);
    parse_tree__file_names__module_name_to_make_var_name_2_p_0(ModuleName_11, &ModuleMakeVarName_19);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 0, (MR_String) ".init", ModuleName_11, &InitFileName_20);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 0, (MR_String) "_init.c", ModuleName_11, &InitCFileName_21);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 0, (MR_String) "_init.\044O", ModuleName_11, &InitObjFileName_22);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 0, (MR_String) "_init.pic_o", ModuleName_11, &InitPicObjFileName_23);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 129, &MmcMakeDeps_24);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 333, &Intermod_25);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 337, &TransOpt_26);
    switch (MmcMakeDeps_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeModuleDepsVar_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          MaybeModuleDepsVarSpace_29 = (MR_String) "";
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ModuleDepsVar_27;
          MR_String Var_67;

          Var_67 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_19, (MR_String) ".module_deps)");
          ModuleDepsVar_27 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_67);
          {
            MaybeModuleDepsVar_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeModuleDepsVar_28, 0) = ((MR_Box) (ModuleDepsVar_27));
            MR_hl_field(MR_mktag(1), MaybeModuleDepsVar_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          MaybeModuleDepsVarSpace_29 = mercury__string__f_43_43_2_f_0(ModuleDepsVar_27, (MR_String) " ");
        }
        break;
    }
    switch (Intermod_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeOptsVar_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          MaybeOptsVarSpace_32 = (MR_String) "";
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String OptsVar_30;
          MR_String Var_72;

          Var_72 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_19, (MR_String) ".opts)");
          OptsVar_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_72);
          {
            MaybeOptsVar_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeOptsVar_31, 0) = ((MR_Box) (OptsVar_30));
            MR_hl_field(MR_mktag(1), MaybeOptsVar_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          MaybeOptsVarSpace_32 = mercury__string__f_43_43_2_f_0(OptsVar_30, (MR_String) " ");
        }
        break;
    }
    switch (TransOpt_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeTransOptsVar_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          MaybeTransOptsVarSpace_35 = (MR_String) "";
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String TransOptsVar_33;
          MR_String Var_77;

          Var_77 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_19, (MR_String) ".trans_opts)");
          TransOptsVar_33 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_77);
          {
            MaybeTransOptsVar_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeTransOptsVar_34, 0) = ((MR_Box) (TransOptsVar_33));
            MR_hl_field(MR_mktag(1), MaybeTransOptsVar_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          MaybeTransOptsVarSpace_35 = mercury__string__f_43_43_2_f_0(TransOptsVar_33, (MR_String) " ");
        }
        break;
    }
    {
      MaybeModuleDepsVarPair_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MaybeModuleDepsVarPair_36, 0) = ((MR_Box) (MaybeModuleDepsVar_28));
      MR_hl_field(MR_mktag(0), MaybeModuleDepsVarPair_36, 1) = ((MR_Box) (MaybeModuleDepsVarSpace_29));
    }
    {
      MaybeOptsVarPair_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MaybeOptsVarPair_37, 0) = ((MR_Box) (MaybeOptsVar_31));
      MR_hl_field(MR_mktag(0), MaybeOptsVarPair_37, 1) = ((MR_Box) (MaybeOptsVarSpace_32));
    }
    {
      MaybeTransOptsVarPair_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MaybeTransOptsVarPair_38, 0) = ((MR_Box) (MaybeTransOptsVar_34));
      MR_hl_field(MR_mktag(0), MaybeTransOptsVarPair_38, 1) = ((MR_Box) (MaybeTransOptsVarSpace_35));
    }
    parse_tree__write_deps_file__generate_dep_file_exec_library_targets_15_p_0(Globals_9, ModuleName_11, ModuleMakeVarName_19, InitFileName_20, InitObjFileName_22, MaybeOptsVar_31, MaybeTransOptsVar_34, &ExeFileName_39, &JarFileName_40, &LibFileName_41, &SharedLibFileName_42, STATE_VARIABLE_MmakeFile_50_50, &STATE_VARIABLE_MmakeFile_81_81);
    parse_tree__write_deps_file__generate_dep_file_init_targets_11_p_0(Globals_9, ModuleName_11, ModuleMakeVarName_19, InitCFileName_21, InitFileName_20, &DepFileName_43, &DvFileName_44, STATE_VARIABLE_MmakeFile_81_81, &STATE_VARIABLE_MmakeFile_83_83);
    parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0(Globals_9, ModuleName_11, DepsMap_12, ModuleMakeVarName_19, MmcMakeDeps_24, Intermod_25, TransOpt_26, MaybeModuleDepsVarPair_36, MaybeOptsVarPair_37, MaybeTransOptsVarPair_38, STATE_VARIABLE_MmakeFile_83_83, &STATE_VARIABLE_MmakeFile_85_85);
    parse_tree__write_deps_file__generate_dep_file_collective_targets_7_p_0(Globals_9, ModuleName_11, ModuleMakeVarName_19, STATE_VARIABLE_MmakeFile_85_85, &STATE_VARIABLE_MmakeFile_87_87);
    parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0(Globals_9, ModuleName_11, ModuleMakeVarName_19, ExeFileName_39, InitCFileName_21, InitObjFileName_22, InitPicObjFileName_23, InitFileName_20, LibFileName_41, SharedLibFileName_42, JarFileName_40, DepFileName_43, DvFileName_44, STATE_VARIABLE_MmakeFile_87_87, STATE_VARIABLE_MmakeFile_46);
  }
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = parse_tree__write_deps_file__remove_suffix_files_cmd_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0(
  MR_Word Globals_18,
  MR_Word ModuleName_19,
  MR_String ModuleMakeVarName_20,
  MR_String ExeFileName_21,
  MR_String InitCFileName_22,
  MR_String InitObjFileName_23,
  MR_String InitPicObjFileName_24,
  MR_String InitFileName_25,
  MR_String LibFileName_26,
  MR_String SharedLibFileName_27,
  MR_String JarFileName_28,
  MR_String DepFileName_29,
  MR_String DvFileName_30,
  MR_Word STATE_VARIABLE_MmakeFile_0_41,
  MR_Word * STATE_VARIABLE_MmakeFile_42)
{
  {
    MR_Word TypeCtorInfo_168_168;
    MR_String CleanTargetName_33;
    MR_String RealCleanTargetName_34;
    MR_Word CleanFiles_36;
    MR_Word MmakeRulesClean_37;
    MR_Word RealCleanFiles_39;
    MR_Word MmakeRulesRealClean_40;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_78;
    MR_Word Var_82;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_String Var_94;
    MR_Word STATE_VARIABLE_MmakeFile_97_97;
    MR_String Var_138;
    MR_Word Var_140;
    MR_Word Var_141;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_145;
    MR_Word Var_147;
    MR_Word Var_151;
    MR_Word Var_154;
    MR_Word Var_155;
    MR_Word Var_160;
    MR_Word Var_161;
    MR_Word Var_163;
    MR_String Var_164;

    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_18, (MR_Integer) 1, (MR_String) ".clean", ModuleName_19, &CleanTargetName_33);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_18, (MR_Integer) 1, (MR_String) ".realclean", ModuleName_19, &RealCleanTargetName_34);
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (InitPicObjFileName_24));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (InitObjFileName_23));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_76));
    }
    {
      CleanFiles_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CleanFiles_36, 0) = ((MR_Box) (InitCFileName_22));
      MR_hl_field(MR_mktag(1), CleanFiles_36, 1) = ((MR_Box) (Var_75));
    }
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (CleanTargetName_33));
      MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) ((MR_String) "clean_local"));
      MR_hl_field(MR_mktag(3), Var_78, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_78, 3) = ((MR_Box) ((MR_String) "clean_local"));
      MR_hl_field(MR_mktag(3), Var_78, 4) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(3), Var_78, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    TypeCtorInfo_168_168 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      Var_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0_1));
      MR_hl_field(MR_mktag(0), Var_92, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_92, 3) = ((MR_Box) (ModuleMakeVarName_20));
    }
    Var_91 = mercury__list__map_2_f_0(TypeCtorInfo_168_168, TypeCtorInfo_168_168, Var_92, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[91]));
    Var_94 = parse_tree__write_deps_file__remove_files_cmd_1_f_0(CleanFiles_36);
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_90 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_168_168, Var_91, Var_93);
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) ((MR_String) "clean_target"));
      MR_hl_field(MR_mktag(3), Var_86, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_86, 3) = ((MR_Box) (CleanTargetName_33));
      MR_hl_field(MR_mktag(3), Var_86, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), Var_86, 5) = ((MR_Box) (Var_90));
    }
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MmakeRulesClean_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MmakeRulesClean_37, 0) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(1), MmakeRulesClean_37, 1) = ((MR_Box) (Var_85));
    }
    libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesClean_37, STATE_VARIABLE_MmakeFile_0_41, &STATE_VARIABLE_MmakeFile_97_97);
    Var_138 = mercury__string__f_43_43_2_f_0(ExeFileName_21, (MR_String) "\044(EXT_FOR_EXE) ");
    {
      Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (DvFileName_30));
      MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (DepFileName_29));
      MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (Var_145));
    }
    {
      Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (JarFileName_28));
      MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (Var_144));
    }
    {
      Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (SharedLibFileName_27));
      MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (Var_143));
    }
    {
      Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (LibFileName_26));
      MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (Var_142));
    }
    {
      Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (InitFileName_25));
      MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_141));
    }
    {
      RealCleanFiles_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RealCleanFiles_39, 0) = ((MR_Box) (Var_138));
      MR_hl_field(MR_mktag(1), RealCleanFiles_39, 1) = ((MR_Box) (Var_140));
    }
    {
      Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (RealCleanTargetName_34));
      MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_147, 1) = ((MR_Box) ((MR_String) "realclean_local"));
      MR_hl_field(MR_mktag(3), Var_147, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_147, 3) = ((MR_Box) ((MR_String) "realclean_local"));
      MR_hl_field(MR_mktag(3), Var_147, 4) = ((MR_Box) (Var_151));
      MR_hl_field(MR_mktag(3), Var_147, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_161 = mercury__list__map_2_f_0(TypeCtorInfo_168_168, TypeCtorInfo_168_168, Var_92, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[111]));
    Var_164 = parse_tree__write_deps_file__remove_files_cmd_1_f_0(RealCleanFiles_39);
    {
      Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (Var_164));
      MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_160 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_168_168, Var_161, Var_163);
    {
      Var_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_155, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_155, 1) = ((MR_Box) ((MR_String) "realclean_target"));
      MR_hl_field(MR_mktag(3), Var_155, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_155, 3) = ((MR_Box) (RealCleanTargetName_34));
      MR_hl_field(MR_mktag(3), Var_155, 4) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(3), Var_155, 5) = ((MR_Box) (Var_160));
    }
    {
      Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (Var_155));
      MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MmakeRulesRealClean_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MmakeRulesRealClean_40, 0) = ((MR_Box) (Var_147));
      MR_hl_field(MR_mktag(1), MmakeRulesRealClean_40, 1) = ((MR_Box) (Var_154));
    }
    libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesRealClean_40, STATE_VARIABLE_MmakeFile_97_97, STATE_VARIABLE_MmakeFile_42);
  }
}

static MR_String MR_CALL 
parse_tree__write_deps_file__remove_files_cmd_1_f_0(
  MR_Word Files_3)
{
  {
    MR_String HeadVar__2_2;
    MR_String Var_5;

    Var_5 = mercury__string__join_list_2_f_0((MR_String) " ", Files_3);
    HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "-rm -f ", Var_5);
    return HeadVar__2_2;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_MmakeFile_20;

    parse_tree__write_deps_file__generate_dep_file_collective_target_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_MmakeFile_20);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_MmakeFile_20));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_String ModuleMakeVarName_10,
  MR_Word STATE_VARIABLE_MmakeFile_0_13,
  MR_Word * STATE_VARIABLE_MmakeFile_14)
{
  {
    MR_Word Var_17;
    MR_Box conv2_STATE_VARIABLE_MmakeFile_14;
    MR_Box conv1_STATE_VARIABLE_IO_16;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_collective_targets_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Globals_8));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) (ModuleMakeVarName_10));
    }
    mercury__list__foldl2_6_p_2((MR_Word) &parse_tree__write_deps_file_scalar_common_2[3], (MR_Word) &parse_tree__write_deps_file_scalar_common_1[5], (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_17, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[79]), ((MR_Box) (STATE_VARIABLE_MmakeFile_0_13)), &conv2_STATE_VARIABLE_MmakeFile_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16);
    *STATE_VARIABLE_MmakeFile_14 = ((MR_Word) conv2_STATE_VARIABLE_MmakeFile_14);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s * env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s * env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_41 = ((MR_Word) (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv1_Var_41);
    (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_89 = ((MR_Word) (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv0_Var_89);
    parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_2(env_ptr);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s * env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_89, (MR_Integer) 0)));
      MR_String Var_351;
      MR_Word Var_352;
      MR_Word Var_353;
      MR_Word Var_354;
      MR_Word Var_355;
      MR_Word Var_356;
      MR_Word Var_357;
      MR_Word Var_358;
      MR_Word Var_359;
      MR_Word Var_360;
      MR_Word Var_361;
      MR_Word Var_362;
      MR_Word Var_363;
      MR_Word Var_364;
      MR_Word Var_365;
      MR_Word Var_366;
      MR_Word Var_367;
      MR_Word Var_368;
      MR_Word Var_369;
      MR_Word Var_370;
      MR_Word Var_371;
      MR_Word Var_372;
      MR_Word Var_373;
      MR_Word Var_374;
      MR_Word Var_375;
      MR_String Var_376;

      (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_89, (MR_Integer) 1)));
      Var_351 = ((MR_String) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 0)));
      Var_352 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 1)));
      Var_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 2)));
      Var_354 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 3)));
      Var_355 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 4)));
      Var_356 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 5)));
      Var_357 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 6)));
      Var_358 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 7)));
      (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 8)));
      Var_359 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 9)));
      Var_360 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 10)));
      Var_361 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 11)));
      Var_362 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 12)));
      Var_363 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 13)));
      Var_364 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 14)));
      Var_365 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 15)));
      Var_366 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 16)));
      Var_367 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 17)));
      Var_368 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 18)));
      Var_369 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 19)));
      Var_370 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 20)));
      Var_371 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 21)));
      Var_372 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 22)));
      Var_373 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 23)));
      Var_374 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 24)));
      Var_375 = ((MR_Word) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 25)));
      Var_376 = ((MR_String) (MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, (MR_Integer) 26)));
      (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = mercury__set__non_empty_1_p_0((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_377_377, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_90);
      if ((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded)
        parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_4(
  void * env_ptr_arg)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s * env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__commit_0) == 0)
      {
        {
          (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_377_377 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
          mercury__map__member_3_p_0((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_377_377, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__DepsMap_17, &(env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv1_Var_41, &(env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv0_Var_89, parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_3, env_ptr);
        }
        (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0(
  MR_Word Globals_15,
  MR_Word ModuleName_16,
  MR_Word DepsMap_17,
  MR_String ModuleMakeVarName_18,
  MR_Word MmcMakeDeps_19,
  MR_Word Intermod_20,
  MR_Word TransOpt_21,
  MR_Word MaybeModuleDepsVarPair_22,
  MR_Word MaybeOptsVarPair_23,
  MR_Word MaybeTransOptsVarPair_24,
  MR_Word STATE_VARIABLE_MmakeFile_0_63,
  MR_Word * STATE_VARIABLE_MmakeFile_64)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s env;

    (env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__DepsMap_17 = DepsMap_17;
    {
      MR_Word TypeCtorInfo_379_379;
      MR_Word MaybeOptsVar_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeOptsVarPair_23, (MR_Integer) 0)));
      MR_String MaybeOptsVarSpace_28 = ((MR_String) (MR_hl_field(MR_mktag(0), MaybeOptsVarPair_23, (MR_Integer) 1)));
      MR_Word MaybeTransOptsVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeTransOptsVarPair_24, (MR_Integer) 0)));
      MR_String MaybeTransOptsVarSpace_30 = ((MR_String) (MR_hl_field(MR_mktag(0), MaybeTransOptsVarPair_24, (MR_Integer) 1)));
      MR_Word MaybeModuleDepsVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), MaybeModuleDepsVarPair_22, (MR_Integer) 0)));
      MR_String MaybeModuleDepsVarSpace_32 = ((MR_String) (MR_hl_field(MR_mktag(0), MaybeModuleDepsVarPair_22, (MR_Integer) 1)));
      MR_String LibInstallIntsTargetName_33;
      MR_String LibInstallOptsTargetName_34;
      MR_String LibInstallHdrsTargetName_35;
      MR_String LibInstallGradeHdrsTargetName_36;
      MR_String ModuleMakeVarNameInts_37;
      MR_String ModuleMakeVarNameInt3s_38;
      MR_String MaybeSpaceOptStr_39;
      MR_String SpaceInt0Str_43;
      MR_String MaybeModuleVarNameInt0sSpace_45;
      MR_Word MaybeModuleVarNameInt0s_46;
      MR_String MaybeSpaceTransOptStr_47;
      MR_String MaybeSpaceDepStr_48;
      MR_String LibInstallIntsFiles_49;
      MR_Word MmakeRuleLibInstallInts_50;
      MR_Word LibInstallOptsSources_51;
      MR_Word LibInstallOptsActions_52;
      MR_Word MmakeRuleLibInstallOpts_54;
      MR_String ModuleMakeVarNameMhs_55;
      MR_Word MmakeRuleLibInstallHdrsNoMhs_56;
      MR_Word MmakeRuleLibInstallHdrsMhs_57;
      MR_Word MmakeFragmentLibInstallHdrs_58;
      MR_String ModuleMakeVarNameMihs_59;
      MR_Word MmakeRuleLibInstallGradeHdrsNoMihs_60;
      MR_Word MmakeRuleLibInstallGradeHdrsMihs_61;
      MR_Word MmakeFragmentLibInstallGradeHdrs_62;
      MR_String Var_84;
      MR_String Var_87;
      MR_String Var_97;
      MR_String Var_98;
      MR_String Var_100;
      MR_String Var_101;
      MR_String Var_103;
      MR_String Var_104;
      MR_String Var_105;
      MR_String Var_106;
      MR_Word Var_110;
      MR_Word Var_111;
      MR_Word Var_112;
      MR_Word Var_114;
      MR_Word Var_115;
      MR_Word Var_116;
      MR_Word Var_117;
      MR_Word Var_118;
      MR_Word Var_121;
      MR_String Var_122;
      MR_String Var_124;
      MR_Word Var_126;
      MR_Word Var_128;
      MR_Word Var_130;
      MR_Word Var_132;
      MR_Word Var_134;
      MR_Word Var_136;
      MR_Word Var_138;
      MR_Word Var_140;
      MR_Word Var_142;
      MR_Word Var_144;
      MR_Word Var_146;
      MR_Word Var_148;
      MR_Word Var_150;
      MR_String Var_151;
      MR_String Var_153;
      MR_String Var_154;
      MR_String Var_155;
      MR_String Var_156;
      MR_Word STATE_VARIABLE_MmakeFile_175_175;
      MR_Word STATE_VARIABLE_MmakeFile_241_241;
      MR_Word Var_248;
      MR_Word Var_252;
      MR_String Var_253;
      MR_Word Var_261;
      MR_String Var_262;
      MR_String Var_264;
      MR_Word Var_273;
      MR_Word STATE_VARIABLE_MmakeFile_275_275;
      MR_Word Var_282;
      MR_Word Var_286;
      MR_String Var_287;
      MR_Word Var_295;
      MR_String Var_296;
      MR_String Var_298;
      MR_Word Var_347;
      MR_String Var_381;
      MR_String Var_384;

      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_15, (MR_String) "lib", ModuleName_16, (MR_String) ".install_ints", (MR_Integer) 1, &LibInstallIntsTargetName_33);
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_15, (MR_String) "lib", ModuleName_16, (MR_String) ".install_opts", (MR_Integer) 1, &LibInstallOptsTargetName_34);
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_15, (MR_String) "lib", ModuleName_16, (MR_String) ".install_hdrs", (MR_Integer) 1, &LibInstallHdrsTargetName_35);
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_15, (MR_String) "lib", ModuleName_16, (MR_String) ".install_grade_hdrs", (MR_Integer) 1, &LibInstallGradeHdrsTargetName_36);
      Var_84 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".ints)");
      ModuleMakeVarNameInts_37 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_84);
      Var_87 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".int3s)");
      ModuleMakeVarNameInt3s_38 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_87);
      switch (Intermod_20) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeSpaceOptStr_39 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          MaybeSpaceOptStr_39 = (MR_String) " opt";
          break;
      }
      (env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = (Intermod_20 == (MR_Integer) 1);
      if ((env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded)
        parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_4(&env);
      if ((env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded)
      {
        MR_String ModuleVarNameInt0s_44;
        MR_String Var_92;

        SpaceInt0Str_43 = (MR_String) " int0";
        Var_92 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".int0s)");
        ModuleVarNameInt0s_44 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_92);
        MaybeModuleVarNameInt0sSpace_45 = mercury__string__f_43_43_2_f_0(ModuleVarNameInt0s_44, (MR_String) " ");
        {
          MaybeModuleVarNameInt0s_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeModuleVarNameInt0s_46, 0) = ((MR_Box) (ModuleVarNameInt0s_44));
          MR_hl_field(MR_mktag(1), MaybeModuleVarNameInt0s_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      else
      {
        SpaceInt0Str_43 = (MR_String) "";
        MaybeModuleVarNameInt0sSpace_45 = (MR_String) "";
        MaybeModuleVarNameInt0s_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      switch (TransOpt_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeSpaceTransOptStr_47 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          MaybeSpaceTransOptStr_47 = (MR_String) " trans_opt";
          break;
      }
      switch (MmcMakeDeps_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeSpaceDepStr_48 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          MaybeSpaceDepStr_48 = (MR_String) " module_dep";
          break;
      }
      Var_106 = mercury__string__f_43_43_2_f_0(MaybeModuleDepsVarSpace_32, (MR_String) "\"");
      Var_105 = mercury__string__f_43_43_2_f_0(MaybeTransOptsVarSpace_30, Var_106);
      Var_104 = mercury__string__f_43_43_2_f_0(MaybeOptsVarSpace_28, Var_105);
      Var_103 = mercury__string__f_43_43_2_f_0(MaybeModuleVarNameInt0sSpace_45, Var_104);
      Var_101 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_103);
      Var_100 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInt3s_38, Var_101);
      Var_98 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_100);
      Var_97 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInts_37, Var_98);
      LibInstallIntsFiles_49 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_97);
      TypeCtorInfo_379_379 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      {
        Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (ModuleMakeVarNameInt3s_38));
        MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (ModuleMakeVarNameInts_37));
        MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_112));
      }
      Var_118 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[114]);
      Var_117 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_379_379, MaybeModuleDepsVar_31, Var_118);
      Var_116 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_379_379, MaybeTransOptsVar_29, Var_117);
      Var_115 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_379_379, MaybeOptsVar_27, Var_116);
      Var_114 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_379_379, MaybeModuleVarNameInt0s_46, Var_115);
      Var_110 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_379_379, Var_111, Var_114);
      Var_124 = mercury__string__f_43_43_2_f_0(LibInstallIntsFiles_49, (MR_String) "; \\");
      Var_122 = mercury__string__f_43_43_2_f_0((MR_String) "files=", Var_124);
      Var_156 = mercury__string__f_43_43_2_f_0(MaybeSpaceDepStr_48, (MR_String) "; do \\");
      Var_155 = mercury__string__f_43_43_2_f_0(MaybeSpaceTransOptStr_47, Var_156);
      Var_154 = mercury__string__f_43_43_2_f_0(MaybeSpaceOptStr_39, Var_155);
      Var_153 = mercury__string__f_43_43_2_f_0(SpaceInt0Str_43, Var_154);
      Var_151 = mercury__string__f_43_43_2_f_0((MR_String) "for ext in int int2 int3", Var_153);
      {
        Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Var_151));
        MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[25])));
      }
      {
        Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'."));
        MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (Var_150));
      }
      {
        Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use"));
        MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Var_148));
      }
      {
        Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option."));
        MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (Var_146));
      }
      {
        Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) ((MR_String) "done"));
        MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (Var_144));
      }
      {
        Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) ((MR_String) "\tfi; \\"));
        MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_142));
      }
      {
        Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\"));
        MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_140));
      }
      {
        Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) ((MR_String) "\t\techo \"installing \044\044target\"; \\"));
        MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (Var_138));
      }
      {
        Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) ((MR_String) "\telse \\"));
        MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_136));
      }
      {
        Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) ((MR_String) "\t\techo \"\044\044target unchanged\"; \\"));
        MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_134));
      }
      {
        Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) ((MR_String) "\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\"));
        MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_132));
      }
      {
        Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) ((MR_String) "\ttarget=\"\044(INSTALL_INT_DIR)/\140basename \044\044file\140\"; \\"));
        MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (Var_130));
      }
      {
        Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) ((MR_String) "for file in \044\044files; do \\"));
        MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_128));
      }
      {
        Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
        MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_126));
      }
      {
        MmakeRuleLibInstallInts_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_50, 1) = ((MR_Box) ((MR_String) "lib_install_ints"));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_50, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_50, 3) = ((MR_Box) (LibInstallIntsTargetName_33));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_50, 4) = ((MR_Box) (Var_110));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_50, 5) = ((MR_Box) (Var_121));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleLibInstallInts_50, STATE_VARIABLE_MmakeFile_0_63, &STATE_VARIABLE_MmakeFile_175_175);
      (env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = (Intermod_20 == (MR_Integer) 0);
      if ((env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded)
        (env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = (TransOpt_21 == (MR_Integer) 0);
      if ((env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded)
      {
        MR_String Var_176;

        LibInstallOptsSources_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        Var_176 = libs__mmakefiles__silent_noop_action_0_f_0();
        {
          LibInstallOptsActions_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LibInstallOptsActions_52, 0) = ((MR_Box) (Var_176));
          MR_hl_field(MR_mktag(1), LibInstallOptsActions_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
      else
      {
        MR_String LibInstallOptsFiles_53;
        MR_Word Var_178;
        MR_String Var_183;
        MR_String Var_184;
        MR_String Var_186;
        MR_String Var_188;
        MR_Word Var_190;
        MR_Word Var_192;
        MR_Word Var_194;
        MR_Word Var_196;
        MR_Word Var_198;
        MR_Word Var_200;
        MR_Word Var_202;
        MR_Word Var_204;
        MR_Word Var_206;
        MR_Word Var_208;
        MR_Word Var_210;
        MR_Word Var_212;
        MR_Word Var_214;
        MR_String Var_215;
        MR_String Var_217;
        MR_String Var_218;

        Var_178 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_379_379, MaybeTransOptsVar_29, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[115]));
        LibInstallOptsSources_51 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_379_379, MaybeOptsVar_27, Var_178);
        Var_184 = mercury__string__f_43_43_2_f_0(MaybeTransOptsVarSpace_30, (MR_String) "\"");
        Var_183 = mercury__string__f_43_43_2_f_0(MaybeOptsVarSpace_28, Var_184);
        LibInstallOptsFiles_53 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_183);
        Var_188 = mercury__string__f_43_43_2_f_0(LibInstallOptsFiles_53, (MR_String) "; \\");
        Var_186 = mercury__string__f_43_43_2_f_0((MR_String) "files=", Var_188);
        Var_218 = mercury__string__f_43_43_2_f_0(MaybeSpaceTransOptStr_47, (MR_String) "; do \\");
        Var_217 = mercury__string__f_43_43_2_f_0(MaybeSpaceOptStr_39, Var_218);
        Var_215 = mercury__string__f_43_43_2_f_0((MR_String) "for ext in ", Var_217);
        {
          Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_214, 0) = ((MR_Box) (Var_215));
          MR_hl_field(MR_mktag(1), Var_214, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[32])));
        }
        {
          Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'."));
          MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) (Var_214));
        }
        {
          Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_210, 0) = ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use"));
          MR_hl_field(MR_mktag(1), Var_210, 1) = ((MR_Box) (Var_212));
        }
        {
          Var_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_208, 0) = ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option"));
          MR_hl_field(MR_mktag(1), Var_208, 1) = ((MR_Box) (Var_210));
        }
        {
          Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) ((MR_String) "done"));
          MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) (Var_208));
        }
        {
          Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) ((MR_String) "\tfi; \\"));
          MR_hl_field(MR_mktag(1), Var_204, 1) = ((MR_Box) (Var_206));
        }
        {
          Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\"));
          MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) (Var_204));
        }
        {
          Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) ((MR_String) "\t\techo \"installing \044\044target\"; \\"));
          MR_hl_field(MR_mktag(1), Var_200, 1) = ((MR_Box) (Var_202));
        }
        {
          Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) ((MR_String) "\telse \\"));
          MR_hl_field(MR_mktag(1), Var_198, 1) = ((MR_Box) (Var_200));
        }
        {
          Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_196, 0) = ((MR_Box) ((MR_String) "\t\techo \"\044\044target unchanged\"; \\"));
          MR_hl_field(MR_mktag(1), Var_196, 1) = ((MR_Box) (Var_198));
        }
        {
          Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_194, 0) = ((MR_Box) ((MR_String) "\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\"));
          MR_hl_field(MR_mktag(1), Var_194, 1) = ((MR_Box) (Var_196));
        }
        {
          Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) ((MR_String) "\ttarget=\"\044(INSTALL_GRADE_INT_DIR)/\140basename \044\044file\140\";\\"));
          MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) (Var_194));
        }
        {
          Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_190, 0) = ((MR_Box) ((MR_String) "for file in \044\044files; do \\"));
          MR_hl_field(MR_mktag(1), Var_190, 1) = ((MR_Box) (Var_192));
        }
        {
          LibInstallOptsActions_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LibInstallOptsActions_52, 0) = ((MR_Box) (Var_186));
          MR_hl_field(MR_mktag(1), LibInstallOptsActions_52, 1) = ((MR_Box) (Var_190));
        }
      }
      {
        MmakeRuleLibInstallOpts_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallOpts_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallOpts_54, 1) = ((MR_Box) ((MR_String) "lib_install_opts"));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallOpts_54, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallOpts_54, 3) = ((MR_Box) (LibInstallOptsTargetName_34));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallOpts_54, 4) = ((MR_Box) (LibInstallOptsSources_51));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallOpts_54, 5) = ((MR_Box) (LibInstallOptsActions_52));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleLibInstallOpts_54, STATE_VARIABLE_MmakeFile_175_175, &STATE_VARIABLE_MmakeFile_241_241);
      Var_381 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".mhs)");
      ModuleMakeVarNameMhs_55 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_381);
      {
        Var_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_248, 0) = ((MR_Box) (ModuleMakeVarNameMhs_55));
        MR_hl_field(MR_mktag(1), Var_248, 1) = ((MR_Box) (Var_118));
      }
      Var_253 = libs__mmakefiles__silent_noop_action_0_f_0();
      {
        Var_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_252, 0) = ((MR_Box) (Var_253));
        MR_hl_field(MR_mktag(1), Var_252, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MmakeRuleLibInstallHdrsNoMhs_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_56, 1) = ((MR_Box) ((MR_String) "install_lib_hdrs_nomhs"));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_56, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_56, 3) = ((MR_Box) (LibInstallHdrsTargetName_35));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_56, 4) = ((MR_Box) (Var_248));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_56, 5) = ((MR_Box) (Var_252));
      }
      Var_264 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameMhs_55, (MR_String) "; do \\");
      Var_262 = mercury__string__f_43_43_2_f_0((MR_String) "for hdr in ", Var_264);
      {
        Var_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_261, 0) = ((MR_Box) (Var_262));
        MR_hl_field(MR_mktag(1), Var_261, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[34])));
      }
      {
        MmakeRuleLibInstallHdrsMhs_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_57, 1) = ((MR_Box) ((MR_String) "install_lib_hdrs_mhs"));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_57, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_57, 3) = ((MR_Box) (LibInstallHdrsTargetName_35));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_57, 4) = ((MR_Box) (Var_248));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_57, 5) = ((MR_Box) (Var_261));
      }
      {
        Var_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_273, 0) = ((MR_Box) (ModuleMakeVarNameMhs_55));
        MR_hl_field(MR_mktag(1), Var_273, 1) = ((MR_Box) ((MR_String) ""));
      }
      {
        MmakeFragmentLibInstallHdrs_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallHdrs_58, 0) = ((MR_Box) (Var_273));
        MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallHdrs_58, 1) = ((MR_Box) (MmakeRuleLibInstallHdrsNoMhs_56));
        MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallHdrs_58, 2) = ((MR_Box) (MmakeRuleLibInstallHdrsMhs_57));
      }
      libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibInstallHdrs_58, STATE_VARIABLE_MmakeFile_241_241, &STATE_VARIABLE_MmakeFile_275_275);
      Var_384 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".mihs)");
      ModuleMakeVarNameMihs_59 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_384);
      {
        Var_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_282, 0) = ((MR_Box) (ModuleMakeVarNameMihs_59));
        MR_hl_field(MR_mktag(1), Var_282, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[115])));
      }
      Var_287 = libs__mmakefiles__silent_noop_action_0_f_0();
      {
        Var_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_286, 0) = ((MR_Box) (Var_287));
        MR_hl_field(MR_mktag(1), Var_286, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MmakeRuleLibInstallGradeHdrsNoMihs_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_60, 1) = ((MR_Box) ((MR_String) "install_grade_hdrs_no_mihs"));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_60, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_60, 3) = ((MR_Box) (LibInstallGradeHdrsTargetName_36));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_60, 4) = ((MR_Box) (Var_282));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_60, 5) = ((MR_Box) (Var_286));
      }
      Var_298 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameMihs_59, (MR_String) "; do \\");
      Var_296 = mercury__string__f_43_43_2_f_0((MR_String) "for hdr in ", Var_298);
      {
        Var_295 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_295, 0) = ((MR_Box) (Var_296));
        MR_hl_field(MR_mktag(1), Var_295, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[57])));
      }
      {
        MmakeRuleLibInstallGradeHdrsMihs_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_61, 1) = ((MR_Box) ((MR_String) "install_grade_hdrs_mihs"));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_61, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_61, 3) = ((MR_Box) (LibInstallGradeHdrsTargetName_36));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_61, 4) = ((MR_Box) (Var_282));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_61, 5) = ((MR_Box) (Var_295));
      }
      {
        Var_347 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_347, 0) = ((MR_Box) (ModuleMakeVarNameMihs_59));
        MR_hl_field(MR_mktag(1), Var_347, 1) = ((MR_Box) ((MR_String) ""));
      }
      {
        MmakeFragmentLibInstallGradeHdrs_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallGradeHdrs_62, 0) = ((MR_Box) (Var_347));
        MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallGradeHdrs_62, 1) = ((MR_Box) (MmakeRuleLibInstallGradeHdrsNoMihs_60));
        MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallGradeHdrs_62, 2) = ((MR_Box) (MmakeRuleLibInstallGradeHdrsMihs_61));
      }
      libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibInstallGradeHdrs_62, STATE_VARIABLE_MmakeFile_275_275, STATE_VARIABLE_MmakeFile_64);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_init_targets_11_p_0(
  MR_Word Globals_12,
  MR_Word ModuleName_13,
  MR_String ModuleMakeVarName_14,
  MR_String InitCFileName_15,
  MR_String InitFileName_16,
  MR_String * DepFileName_17,
  MR_String * DvFileName_18,
  MR_Word STATE_VARIABLE_MmakeFile_0_34,
  MR_Word * STATE_VARIABLE_MmakeFile_35)
{
  {
    MR_String ModuleMakeVarNameCs_21;
    MR_String InitAction1_22;
    MR_String InitAction2_23;
    MR_String InitAction3_24;
    MR_Word MmakeRuleInitFile_25;
    MR_String ModuleFileName_26;
    MR_String ForceC2InitTarget_27;
    MR_Word MmakeRuleForceInitCFile_28;
    MR_String TmpInitCFileName_29;
    MR_String ModuleMakeVarNameInitCs_30;
    MR_String InitCAction1_31;
    MR_String InitCAction2_32;
    MR_Word MmakeRuleInitCFile_33;
    MR_String Var_45;
    MR_String Var_49;
    MR_String Var_50;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word STATE_VARIABLE_MmakeFile_62_62;
    MR_String Var_64;
    MR_Word STATE_VARIABLE_MmakeFile_70_70;
    MR_String Var_73;
    MR_String Var_76;
    MR_String Var_78;
    MR_String Var_79;
    MR_String Var_81;
    MR_Word Var_86;
    MR_Word Var_89;
    MR_Word Var_90;

    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_12, (MR_Integer) 1, (MR_String) ".dep", ModuleName_13, DepFileName_17);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_12, (MR_Integer) 1, (MR_String) ".dv", ModuleName_13, DvFileName_18);
    Var_45 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_14, (MR_String) ".cs)");
    ModuleMakeVarNameCs_21 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_45);
    InitAction1_22 = mercury__string__f_43_43_2_f_0((MR_String) "echo > ", InitFileName_16);
    Var_50 = mercury__string__f_43_43_2_f_0((MR_String) " >> ", InitFileName_16);
    Var_49 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameCs_21, Var_50);
    InitAction2_23 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MKLIBINIT) ", Var_49);
    InitAction3_24 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXTRA_INIT_COMMAND) >> ", InitFileName_16);
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (ModuleMakeVarNameCs_21));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (*DepFileName_17));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (InitAction3_24));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (InitAction2_23));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (InitAction1_22));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_59));
    }
    {
      MmakeRuleInitFile_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 1) = ((MR_Box) ((MR_String) "init_file"));
      MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 3) = ((MR_Box) (InitFileName_16));
      MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 4) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 5) = ((MR_Box) (Var_58));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleInitFile_25, STATE_VARIABLE_MmakeFile_0_34, &STATE_VARIABLE_MmakeFile_62_62);
    ModuleFileName_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_13);
    Var_64 = mercury__string__f_43_43_2_f_0(ModuleFileName_26, (MR_String) "_init");
    ForceC2InitTarget_27 = mercury__string__f_43_43_2_f_0((MR_String) "force-", Var_64);
    {
      MmakeRuleForceInitCFile_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 1) = ((MR_Box) ((MR_String) "force_init_c_file"));
      MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 3) = ((MR_Box) (ForceC2InitTarget_27));
      MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleForceInitCFile_28, STATE_VARIABLE_MmakeFile_62_62, &STATE_VARIABLE_MmakeFile_70_70);
    TmpInitCFileName_29 = mercury__string__f_43_43_2_f_0(InitCFileName_15, (MR_String) ".tmp");
    Var_73 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_14, (MR_String) ".init_cs)");
    ModuleMakeVarNameInitCs_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_73);
    Var_81 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInitCs_30, (MR_String) " \044(ALL_C2INITARGS)");
    Var_79 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_81);
    Var_78 = mercury__string__f_43_43_2_f_0(TmpInitCFileName_29, Var_79);
    Var_76 = mercury__string__f_43_43_2_f_0((MR_String) "--init-c-file ", Var_78);
    InitCAction1_31 = mercury__string__f_43_43_2_f_0((MR_String) "\100\044(C2INIT) \044(ALL_GRADEFLAGS) \044(ALL_C2INITFLAGS) ", Var_76);
    InitCAction2_32 = mercury__string__f_43_43_2_f_0((MR_String) "\100mercury_update_interface ", InitCFileName_15);
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (ForceC2InitTarget_27));
      MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (InitCAction2_32));
      MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (InitCAction1_31));
      MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_90));
    }
    {
      MmakeRuleInitCFile_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleInitCFile_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleInitCFile_33, 1) = ((MR_Box) ((MR_String) "init_c_file"));
      MR_hl_field(MR_mktag(3), MmakeRuleInitCFile_33, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleInitCFile_33, 3) = ((MR_Box) (InitCFileName_15));
      MR_hl_field(MR_mktag(3), MmakeRuleInitCFile_33, 4) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(3), MmakeRuleInitCFile_33, 5) = ((MR_Box) (Var_89));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleInitCFile_33, STATE_VARIABLE_MmakeFile_70_70, STATE_VARIABLE_MmakeFile_35);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_exec_library_targets_15_p_0(
  MR_Word Globals_16,
  MR_Word ModuleName_17,
  MR_String ModuleMakeVarName_18,
  MR_String InitFileName_19,
  MR_String InitObjFileName_20,
  MR_Word MaybeOptsVar_21,
  MR_Word MaybeTransOptsVar_22,
  MR_String * ExeFileName_23,
  MR_String * JarFileName_24,
  MR_String * LibFileName_25,
  MR_String * SharedLibFileName_26,
  MR_Word STATE_VARIABLE_MmakeFile_0_66,
  MR_Word * STATE_VARIABLE_MmakeFile_67)
{
  {
    MR_Word TypeCtorInfo_253_253;
    MR_Word MmakeRuleExtForExe_29;
    MR_Word MmakeFragmentExtForExe_30;
    MR_String All_MLLibsDep_31;
    MR_String All_MLObjs_32;
    MR_String All_MLPicObjs_33;
    MR_String NL_All_MLObjs_34;
    MR_String ModuleMakeVarNameClasses_35;
    MR_String ModuleMakeVarNameOs_36;
    MR_String NonJavaMainRuleAction1Line1_37;
    MR_String NonJavaMainRuleAction1Line2_38;
    MR_Word MmakeRuleExecutableJava_39;
    MR_Word MmakeRuleExecutableNonJava_40;
    MR_Word MmakeFragmentExecutable_41;
    MR_String LibTargetName_42;
    MR_String MaybeSharedLibFileName_43;
    MR_Word UseInstallName_44;
    MR_String InstallNameOpt_45;
    MR_String ModuleMakeVarNameInts_46;
    MR_String ModuleMakeVarNameInt3s_47;
    MR_Word AllIntSources_48;
    MR_Word MmakeRuleLibTargetJava_49;
    MR_Word MmakeRuleLibTargetNonJava_50;
    MR_Word MmakeFragmentLibTarget_51;
    MR_String ModuleMakeVarNamePicOs_52;
    MR_String SharedLibAction1Line1_53;
    MR_String SharedLibAction1Line2_54;
    MR_String SharedLibAction1Line3_55;
    MR_Word MmakeRuleSharedLib_56;
    MR_Word MmakeFragmentSharedLib_57;
    MR_String LibAction1_58;
    MR_String LibAction2Line1_59;
    MR_String LibAction2Line2_60;
    MR_String LibAction3_61;
    MR_Word MmakeRuleLib_62;
    MR_String ListClassFiles_63;
    MR_String JarAction1_64;
    MR_Word MmakeRuleJar_65;
    MR_Word Var_75;
    MR_String Var_76;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word STATE_VARIABLE_MmakeFile_87_87;
    MR_String Var_89;
    MR_String Var_92;
    MR_String Var_95;
    MR_String Var_97;
    MR_String Var_101;
    MR_String Var_104;
    MR_String Var_107;
    MR_String Var_109;
    MR_String Var_110;
    MR_String Var_112;
    MR_String Var_115;
    MR_String Var_116;
    MR_String Var_118;
    MR_Word Var_122;
    MR_String Var_127;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word Var_137;
    MR_Word STATE_VARIABLE_MmakeFile_139_139;
    MR_String Var_161;
    MR_String Var_164;
    MR_Word Var_166;
    MR_Word Var_167;
    MR_Word Var_169;
    MR_Word Var_170;
    MR_Word Var_171;
    MR_Word Var_175;
    MR_Word Var_179;
    MR_Word Var_180;
    MR_Word STATE_VARIABLE_MmakeFile_184_184;
    MR_String Var_186;
    MR_String Var_189;
    MR_String Var_191;
    MR_String Var_192;
    MR_String Var_194;
    MR_String Var_196;
    MR_String Var_199;
    MR_String Var_202;
    MR_Word Var_206;
    MR_Word Var_207;
    MR_Word Var_210;
    MR_Word Var_211;
    MR_Word Var_212;
    MR_Word Var_217;
    MR_Word Var_218;
    MR_Word STATE_VARIABLE_MmakeFile_221_221;
    MR_String Var_224;
    MR_String Var_225;
    MR_String Var_227;
    MR_Word Var_233;
    MR_Word Var_234;
    MR_Word Var_236;
    MR_Word Var_237;
    MR_Word Var_238;
    MR_Word Var_239;
    MR_Word STATE_VARIABLE_MmakeFile_241_241;
    MR_String Var_243;
    MR_String Var_244;
    MR_Word Var_250;

    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_16, (MR_Integer) 1, (MR_String) "", ModuleName_17, ExeFileName_23);
    Var_76 = mercury__string__f_43_43_2_f_0(*ExeFileName_23, (MR_String) "\044(EXT_FOR_EXE)");
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MmakeRuleExtForExe_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 1) = ((MR_Box) ((MR_String) "ext_for_exe"));
      MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 3) = ((MR_Box) (*ExeFileName_23));
      MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 4) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (MmakeRuleExtForExe_29));
    }
    {
      Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MmakeFragmentExtForExe_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeFragmentExtForExe_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__write_deps_file_scalar_common_1[112])));
      MR_hl_field(MR_mktag(2), MmakeFragmentExtForExe_30, 1) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(2), MmakeFragmentExtForExe_30, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentExtForExe_30, STATE_VARIABLE_MmakeFile_0_66, &STATE_VARIABLE_MmakeFile_87_87);
    Var_89 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ",\044(ALL_MLLIBS_DEP))");
    All_MLLibsDep_31 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", Var_89);
    Var_92 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ",\044(ALL_MLOBJS))");
    All_MLObjs_32 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", Var_92);
    Var_97 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ",\044(ALL_MLOBJS)))");
    Var_95 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", Var_97);
    All_MLPicObjs_33 = mercury__string__f_43_43_2_f_0((MR_String) "\044(patsubst %.o,%.\044(EXT_FOR_PIC_OBJECTS),", Var_95);
    NL_All_MLObjs_34 = mercury__string__f_43_43_2_f_0((MR_String) "\\\n\t\t", All_MLObjs_32);
    Var_101 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".classes)");
    ModuleMakeVarNameClasses_35 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_101);
    Var_104 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".os)");
    ModuleMakeVarNameOs_36 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_104);
    Var_112 = mercury__string__f_43_43_2_f_0(InitObjFileName_20, (MR_String) " \\");
    Var_110 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXT_FOR_EXE) ", Var_112);
    Var_109 = mercury__string__f_43_43_2_f_0(*ExeFileName_23, Var_110);
    Var_107 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXEFILE_OPT)", Var_109);
    NonJavaMainRuleAction1Line1_37 = mercury__string__f_43_43_2_f_0((MR_String) "\044(ML) \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) -- \044(ALL_LDFLAGS) ", Var_107);
    Var_118 = mercury__string__f_43_43_2_f_0(NL_All_MLObjs_34, (MR_String) " \044(ALL_MLLIBS)");
    Var_116 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_118);
    Var_115 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameOs_36, Var_116);
    NonJavaMainRuleAction1Line2_38 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_115);
    {
      Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (ModuleMakeVarNameClasses_35));
      MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MmakeRuleExecutableJava_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 1) = ((MR_Box) ((MR_String) "executable_java"));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 3) = ((MR_Box) (*ExeFileName_23));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 4) = ((MR_Box) (Var_122));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_127 = mercury__string__f_43_43_2_f_0(*ExeFileName_23, (MR_String) "\044(EXT_FOR_EXE)");
    {
      Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (All_MLLibsDep_31));
      MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (All_MLObjs_32));
      MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_132));
    }
    {
      Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (InitObjFileName_20));
      MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_131));
    }
    {
      Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (ModuleMakeVarNameOs_36));
      MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_130));
    }
    {
      Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (NonJavaMainRuleAction1Line2_38));
      MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (NonJavaMainRuleAction1Line1_37));
      MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_135));
    }
    {
      MmakeRuleExecutableNonJava_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 1) = ((MR_Box) ((MR_String) "executable_non_java"));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 3) = ((MR_Box) (Var_127));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 4) = ((MR_Box) (Var_129));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 5) = ((MR_Box) (Var_134));
    }
    Var_137 = (MR_Word) &parse_tree__write_deps_file_scalar_common_6[0];
    {
      MmakeFragmentExecutable_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MmakeFragmentExecutable_41, 0) = ((MR_Box) (Var_137));
      MR_hl_field(MR_mktag(1), MmakeFragmentExecutable_41, 1) = ((MR_Box) (MmakeRuleExecutableJava_39));
      MR_hl_field(MR_mktag(1), MmakeFragmentExecutable_41, 2) = ((MR_Box) (MmakeRuleExecutableNonJava_40));
    }
    libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentExecutable_41, STATE_VARIABLE_MmakeFile_87_87, &STATE_VARIABLE_MmakeFile_139_139);
    parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_16, (MR_String) "lib", ModuleName_17, (MR_String) "", (MR_Integer) 1, &LibTargetName_42);
    parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_16, (MR_String) "lib", ModuleName_17, (MR_String) ".\044A", (MR_Integer) 0, LibFileName_25);
    parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_16, (MR_String) "lib", ModuleName_17, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 0, SharedLibFileName_26);
    parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_16, (MR_String) "lib", ModuleName_17, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 1, &MaybeSharedLibFileName_43);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_16, (MR_Integer) 1, (MR_String) ".jar", ModuleName_17, JarFileName_24);
    libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 622, &UseInstallName_44);
    switch (UseInstallName_44) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        InstallNameOpt_45 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        libs__file_util__get_install_name_option_3_p_0(Globals_16, *SharedLibFileName_26, &InstallNameOpt_45);
        break;
    }
    Var_161 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".ints)");
    ModuleMakeVarNameInts_46 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_161);
    Var_164 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".int3s)");
    ModuleMakeVarNameInt3s_47 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_164);
    TypeCtorInfo_253_253 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (ModuleMakeVarNameInt3s_47));
      MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (ModuleMakeVarNameInts_46));
      MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) (Var_167));
    }
    {
      Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (InitFileName_19));
      MR_hl_field(MR_mktag(1), Var_171, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_170 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_253_253, MaybeTransOptsVar_22, Var_171);
    Var_169 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_253_253, MaybeOptsVar_21, Var_170);
    AllIntSources_48 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_253_253, Var_166, Var_169);
    {
      Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_175, 0) = ((MR_Box) (*JarFileName_24));
      MR_hl_field(MR_mktag(1), Var_175, 1) = ((MR_Box) (AllIntSources_48));
    }
    {
      MmakeRuleLibTargetJava_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 1) = ((MR_Box) ((MR_String) "lib_target_java"));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 3) = ((MR_Box) (LibTargetName_42));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 4) = ((MR_Box) (Var_175));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_180, 0) = ((MR_Box) (MaybeSharedLibFileName_43));
      MR_hl_field(MR_mktag(1), Var_180, 1) = ((MR_Box) (AllIntSources_48));
    }
    {
      Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (*LibFileName_25));
      MR_hl_field(MR_mktag(1), Var_179, 1) = ((MR_Box) (Var_180));
    }
    {
      MmakeRuleLibTargetNonJava_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 1) = ((MR_Box) ((MR_String) "lib_target_non_java"));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 3) = ((MR_Box) (LibTargetName_42));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 4) = ((MR_Box) (Var_179));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MmakeFragmentLibTarget_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MmakeFragmentLibTarget_51, 0) = ((MR_Box) (Var_137));
      MR_hl_field(MR_mktag(1), MmakeFragmentLibTarget_51, 1) = ((MR_Box) (MmakeRuleLibTargetJava_49));
      MR_hl_field(MR_mktag(1), MmakeFragmentLibTarget_51, 2) = ((MR_Box) (MmakeRuleLibTargetNonJava_50));
    }
    libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibTarget_51, STATE_VARIABLE_MmakeFile_139_139, &STATE_VARIABLE_MmakeFile_184_184);
    Var_186 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".pic_os)");
    ModuleMakeVarNamePicOs_52 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_186);
    Var_196 = mercury__string__f_43_43_2_f_0(*SharedLibFileName_26, (MR_String) " \\");
    Var_194 = mercury__string__f_43_43_2_f_0((MR_String) "-o ", Var_196);
    Var_192 = mercury__string__f_43_43_2_f_0((MR_String) " \044(ALL_LD_LIBFLAGS) ", Var_194);
    Var_191 = mercury__string__f_43_43_2_f_0(InstallNameOpt_45, Var_192);
    Var_189 = mercury__string__f_43_43_2_f_0((MR_String) "-- ", Var_191);
    SharedLibAction1Line1_53 = mercury__string__f_43_43_2_f_0((MR_String) "\044(ML) --make-shared-lib \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) ", Var_189);
    Var_199 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNamePicOs_52, (MR_String) " \\");
    SharedLibAction1Line2_54 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_199);
    Var_202 = mercury__string__f_43_43_2_f_0(All_MLPicObjs_33, (MR_String) " \044(ALL_MLLIBS)");
    SharedLibAction1Line3_55 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_202);
    {
      Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_207, 0) = ((MR_Box) (All_MLPicObjs_33));
      MR_hl_field(MR_mktag(1), Var_207, 1) = ((MR_Box) (Var_132));
    }
    {
      Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) (ModuleMakeVarNamePicOs_52));
      MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) (Var_207));
    }
    {
      Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) (SharedLibAction1Line3_55));
      MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_211, 0) = ((MR_Box) (SharedLibAction1Line2_54));
      MR_hl_field(MR_mktag(1), Var_211, 1) = ((MR_Box) (Var_212));
    }
    {
      Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_210, 0) = ((MR_Box) (SharedLibAction1Line1_53));
      MR_hl_field(MR_mktag(1), Var_210, 1) = ((MR_Box) (Var_211));
    }
    {
      MmakeRuleSharedLib_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 1) = ((MR_Box) ((MR_String) "shared_lib"));
      MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 3) = ((MR_Box) (*SharedLibFileName_26));
      MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 4) = ((MR_Box) (Var_206));
      MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 5) = ((MR_Box) (Var_210));
    }
    {
      Var_218 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_218, 0) = ((MR_Box) (MmakeRuleSharedLib_56));
    }
    {
      Var_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_217, 0) = ((MR_Box) (Var_218));
      MR_hl_field(MR_mktag(1), Var_217, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MmakeFragmentSharedLib_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeFragmentSharedLib_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__write_deps_file_scalar_common_1[113])));
      MR_hl_field(MR_mktag(2), MmakeFragmentSharedLib_57, 1) = ((MR_Box) (Var_217));
      MR_hl_field(MR_mktag(2), MmakeFragmentSharedLib_57, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentSharedLib_57, STATE_VARIABLE_MmakeFile_184_184, &STATE_VARIABLE_MmakeFile_221_221);
    LibAction1_58 = mercury__string__f_43_43_2_f_0((MR_String) "rm -f ", *LibFileName_25);
    Var_227 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameOs_36, (MR_String) " \\");
    Var_225 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_227);
    Var_224 = mercury__string__f_43_43_2_f_0(*LibFileName_25, Var_225);
    LibAction2Line1_59 = mercury__string__f_43_43_2_f_0((MR_String) "\044(AR) \044(ALL_ARFLAGS) \044(AR_LIBFILE_OPT)", Var_224);
    LibAction2Line2_60 = mercury__string__f_43_43_2_f_0((MR_String) "\t", All_MLObjs_32);
    LibAction3_61 = mercury__string__f_43_43_2_f_0((MR_String) "\044(RANLIB) \044(ALL_RANLIBFLAGS) ", *LibFileName_25);
    {
      Var_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_234, 0) = ((MR_Box) (All_MLObjs_32));
      MR_hl_field(MR_mktag(1), Var_234, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_233, 0) = ((MR_Box) (ModuleMakeVarNameOs_36));
      MR_hl_field(MR_mktag(1), Var_233, 1) = ((MR_Box) (Var_234));
    }
    {
      Var_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_239, 0) = ((MR_Box) (LibAction3_61));
      MR_hl_field(MR_mktag(1), Var_239, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_238, 0) = ((MR_Box) (LibAction2Line2_60));
      MR_hl_field(MR_mktag(1), Var_238, 1) = ((MR_Box) (Var_239));
    }
    {
      Var_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_237, 0) = ((MR_Box) (LibAction2Line1_59));
      MR_hl_field(MR_mktag(1), Var_237, 1) = ((MR_Box) (Var_238));
    }
    {
      Var_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_236, 0) = ((MR_Box) (LibAction1_58));
      MR_hl_field(MR_mktag(1), Var_236, 1) = ((MR_Box) (Var_237));
    }
    {
      MmakeRuleLib_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleLib_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleLib_62, 1) = ((MR_Box) ((MR_String) "lib"));
      MR_hl_field(MR_mktag(3), MmakeRuleLib_62, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleLib_62, 3) = ((MR_Box) (*LibFileName_25));
      MR_hl_field(MR_mktag(3), MmakeRuleLib_62, 4) = ((MR_Box) (Var_233));
      MR_hl_field(MR_mktag(3), MmakeRuleLib_62, 5) = ((MR_Box) (Var_236));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleLib_62, STATE_VARIABLE_MmakeFile_221_221, &STATE_VARIABLE_MmakeFile_241_241);
    parse_tree__module_cmds__list_class_files_for_jar_mmake_3_p_0(Globals_16, ModuleMakeVarNameClasses_35, &ListClassFiles_63);
    Var_244 = mercury__string__f_43_43_2_f_0((MR_String) " ", ListClassFiles_63);
    Var_243 = mercury__string__f_43_43_2_f_0(*JarFileName_24, Var_244);
    JarAction1_64 = mercury__string__f_43_43_2_f_0((MR_String) "\044(JAR) \044(JAR_CREATE_FLAGS) ", Var_243);
    {
      Var_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_250, 0) = ((MR_Box) (JarAction1_64));
      MR_hl_field(MR_mktag(1), Var_250, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MmakeRuleJar_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleJar_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleJar_65, 1) = ((MR_Box) ((MR_String) "jar"));
      MR_hl_field(MR_mktag(3), MmakeRuleJar_65, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleJar_65, 3) = ((MR_Box) (*JarFileName_24));
      MR_hl_field(MR_mktag(3), MmakeRuleJar_65, 4) = ((MR_Box) (Var_122));
      MR_hl_field(MR_mktag(3), MmakeRuleJar_65, 5) = ((MR_Box) (Var_250));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleJar_65, STATE_VARIABLE_MmakeFile_241_241, STATE_VARIABLE_MmakeFile_67);
  }
}

void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_dv_file_6_p_0(
  MR_Word Globals_7,
  MR_String SourceFileName_8,
  MR_Word ModuleName_9,
  MR_Word DepsMap_10)
{
  {
    MR_Word Verbose_12;
    MR_String DvFileName_13;
    MR_Word DvResult_14;

    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 57, &Verbose_12);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 0, (MR_String) ".dv", ModuleName_9, &DvFileName_13);
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, DvFileName_13);
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "\'...\n");
    mercury__io__open_output_4_p_0(DvFileName_13, &DvResult_14);
    if (((MR_tag((MR_Word) DvResult_14)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word IOError_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), DvResult_14, (MR_Integer) 0)));
      MR_String IOErrorMessage_19;
      MR_String DvMessage_20;
      MR_Word Var_36;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_41;

      libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) " failed.\n");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_12);
      mercury__io__error_message_2_p_0(IOError_18, &IOErrorMessage_19);
      {
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (IOErrorMessage_19));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) ((MR_String) "\' for output: "));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (DvFileName_13));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
      }
      mercury__string__append_list_2_p_0(Var_36, &DvMessage_20);
      libs__file_util__report_error_3_p_0(DvMessage_20);
    }
    else
    {
      MR_Word DvStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), DvResult_14, (MR_Integer) 0)));
      MR_Word MmakeFile0_16;
      MR_Word MmakeFile_17;

      libs__mmakefiles__start_mmakefile_1_p_0(&MmakeFile0_16);
      parse_tree__write_deps_file__generate_dv_file_8_p_0(Globals_7, SourceFileName_8, ModuleName_9, DepsMap_10, MmakeFile0_16, &MmakeFile_17);
      libs__mmakefiles__end_mmakefile_4_p_0(DvStream_15, MmakeFile_17);
      mercury__io__close_output_3_p_0(DvStream_15);
      libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% done.\n");
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv4_LambdaHeadVar__2_133;

    parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1171__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv4_LambdaHeadVar__2_133);
    *wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_133));
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1140__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv3_HeadVar__3_3;

    conv3_HeadVar__3_3 = parse_tree__write_deps_file__add_suffix_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv2_HeadVar__3_3;

    conv2_HeadVar__3_3 = parse_tree__write_deps_file__add_suffix_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv1_FileName_6;

    parse_tree__write_deps_file__get_source_file_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv1_FileName_6);
    *wrapper_arg_2 = ((MR_Box) (conv1_FileName_6));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Result_6;

    parse_tree__write_deps_file__compare_module_names_3_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_Result_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0(
  MR_Word Globals_9,
  MR_String SourceFileName_10,
  MR_Word ModuleName_11,
  MR_Word DepsMap_12,
  MR_Word STATE_VARIABLE_MmakeFile_0_93,
  MR_Word * STATE_VARIABLE_MmakeFile_94)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_508_508;
    MR_Word TypeCtorInfo_515_515;
    MR_String ModuleNameString_15;
    MR_String Version_16;
    MR_String FullArch_17;
    MR_Word MmakeStartComment_18;
    MR_Word Modules0_19;
    MR_Word Modules1_20;
    MR_Word Modules_21;
    MR_String ModuleMakeVarName_22;
    MR_Word SourceFiles0_23;
    MR_Word SourceFiles_24;
    MR_Word MmakeVarModuleMs_25;
    MR_Word MmakeVarModuleErrs_26;
    MR_Word ModulesSourceFileNames_27;
    MR_Word MmakeVarModuleMods_28;
    MR_Word ModulesWithSubModules_29;
    MR_Word ModulesWithSubModulesSourceFileNames_33;
    MR_Word MmakeVarModuleParentMods_34;
    MR_Word Target_35;
    MR_Word ForeignModulesAndExts_36;
    MR_Word ForeignModules_37;
    MR_Word ForeignModulesFileNames_38;
    MR_Word MmakeVarForeignModules_39;
    MR_Word MakeFileName_40;
    MR_Word ForeignFileNames_46;
    MR_Word MmakeVarForeignFileNames_47;
    MR_Word MmakeVarForeignDlls_48;
    MR_Word MmakeVarInitCs_49;
    MR_Word ExtraLinkObjs_50;
    MR_Word ExtraLinkObjFileNamesC_51;
    MR_Word MmakeVarCs_52;
    MR_Word MmakeVarDlls_53;
    MR_Word ExtraLinkObjFileNamesOs_54;
    MR_Word MmakeVarAllOs_55;
    MR_Word ExtraLinkObjFileNamesPicOs_56;
    MR_Word MmakeVarAllPicOs_57;
    MR_Word MmakeVarOs_58;
    MR_Word MmakeVarPicOs_59;
    MR_Word MmakeVarUseds_60;
    MR_Word MmakeVarJavas_61;
    MR_Word MmakeVarClasses_62;
    MR_Word MmakeVarCss_63;
    MR_Word MmakeVarDirs_64;
    MR_Word MmakeVarDirOs_65;
    MR_Word MmakeVarDates_66;
    MR_Word MmakeVarDate0s_67;
    MR_Word MmakeVarDate3s_68;
    MR_Word MmakeVarOptDates_69;
    MR_Word MmakeVarTransOptDates_70;
    MR_Word MmakeVarCDates_71;
    MR_Word MmakeVarJavaDates_72;
    MR_Word MmakeVarCsDates_73;
    MR_Word MmakeVarDs_74;
    MR_Word MmakeVarModuleDeps_75;
    MR_Word HighLevelCode_76;
    MR_Word MihSources_77;
    MR_Word MmakeVarMihs_78;
    MR_Word MhSources_79;
    MR_Word MmakeVarMhs_80;
    MR_Word MmakeVarAllMihs_81;
    MR_Word MmakeVarAllMhs_82;
    MR_Word MmakeVarInts_83;
    MR_Word MmakeVarInt0s_84;
    MR_Word MmakeVarAllInt0s_85;
    MR_Word MmakeVarInt3s_86;
    MR_Word MmakeVarOpts_87;
    MR_Word MmakeVarTransOpts_88;
    MR_Word MmakeVarAnalysiss_89;
    MR_Word MmakeVarRequests_90;
    MR_Word MmakeVarImdgs_91;
    MR_Word MmakeVarProfs_92;
    MR_Word STATE_VARIABLE_MmakeFile_98_98;
    MR_Word Var_100;
    MR_String Var_101;
    MR_Word Var_103;
    MR_Word STATE_VARIABLE_MmakeFile_106_106;
    MR_String Var_107;
    MR_Word Var_109;
    MR_Word STATE_VARIABLE_MmakeFile_112_112;
    MR_String Var_115;
    MR_Word STATE_VARIABLE_MmakeFile_117_117;
    MR_Word Var_118;
    MR_String Var_124;
    MR_Word STATE_VARIABLE_MmakeFile_126_126;
    MR_String Var_129;
    MR_Word STATE_VARIABLE_MmakeFile_131_131;
    MR_String Var_139;
    MR_Word STATE_VARIABLE_MmakeFile_141_141;
    MR_String Var_142;
    MR_String Var_144;
    MR_Word STATE_VARIABLE_MmakeFile_149_149;
    MR_String Var_150;
    MR_String Var_152;
    MR_Word STATE_VARIABLE_MmakeFile_157_157;
    MR_String Var_160;
    MR_Word Var_162;
    MR_String Var_163;
    MR_String Var_165;
    MR_Word STATE_VARIABLE_MmakeFile_167_167;
    MR_String Var_168;
    MR_String Var_170;
    MR_Word STATE_VARIABLE_MmakeFile_175_175;
    MR_String Var_178;
    MR_Word Var_180;
    MR_String Var_181;
    MR_Word STATE_VARIABLE_MmakeFile_186_186;
    MR_String Var_189;
    MR_Word Var_191;
    MR_String Var_192;
    MR_Word STATE_VARIABLE_MmakeFile_197_197;
    MR_String Var_198;
    MR_String Var_200;
    MR_Word STATE_VARIABLE_MmakeFile_205_205;
    MR_String Var_206;
    MR_String Var_208;
    MR_Word STATE_VARIABLE_MmakeFile_213_213;
    MR_String Var_214;
    MR_String Var_216;
    MR_Word STATE_VARIABLE_MmakeFile_221_221;
    MR_String Var_222;
    MR_String Var_224;
    MR_Word STATE_VARIABLE_MmakeFile_229_229;
    MR_String Var_230;
    MR_Word Var_232;
    MR_String Var_233;
    MR_Word Var_238;
    MR_String Var_239;
    MR_Word STATE_VARIABLE_MmakeFile_245_245;
    MR_String Var_246;
    MR_String Var_248;
    MR_Word STATE_VARIABLE_MmakeFile_253_253;
    MR_String Var_254;
    MR_String Var_256;
    MR_Word STATE_VARIABLE_MmakeFile_261_261;
    MR_String Var_262;
    MR_String Var_264;
    MR_Word STATE_VARIABLE_MmakeFile_269_269;
    MR_String Var_270;
    MR_String Var_272;
    MR_Word STATE_VARIABLE_MmakeFile_277_277;
    MR_String Var_278;
    MR_String Var_280;
    MR_Word STATE_VARIABLE_MmakeFile_285_285;
    MR_String Var_286;
    MR_String Var_288;
    MR_Word STATE_VARIABLE_MmakeFile_293_293;
    MR_String Var_294;
    MR_String Var_296;
    MR_Word STATE_VARIABLE_MmakeFile_301_301;
    MR_String Var_302;
    MR_String Var_304;
    MR_Word STATE_VARIABLE_MmakeFile_309_309;
    MR_String Var_310;
    MR_String Var_312;
    MR_Word STATE_VARIABLE_MmakeFile_317_317;
    MR_String Var_318;
    MR_String Var_320;
    MR_Word STATE_VARIABLE_MmakeFile_325_325;
    MR_String Var_326;
    MR_String Var_328;
    MR_Word STATE_VARIABLE_MmakeFile_333_333;
    MR_String Var_334;
    MR_String Var_336;
    MR_Word STATE_VARIABLE_MmakeFile_341_341;
    MR_String Var_342;
    MR_String Var_344;
    MR_String Var_350;
    MR_Word STATE_VARIABLE_MmakeFile_352_352;
    MR_String Var_360;
    MR_Word STATE_VARIABLE_MmakeFile_362_362;
    MR_String Var_369;
    MR_Word STATE_VARIABLE_MmakeFile_371_371;
    MR_String Var_372;
    MR_String Var_374;
    MR_Word STATE_VARIABLE_MmakeFile_379_379;
    MR_String Var_380;
    MR_String Var_382;
    MR_Word STATE_VARIABLE_MmakeFile_387_387;
    MR_String Var_388;
    MR_Word Var_390;
    MR_String Var_391;
    MR_Word Var_396;
    MR_String Var_397;
    MR_Word STATE_VARIABLE_MmakeFile_403_403;
    MR_String Var_404;
    MR_String Var_406;
    MR_Word STATE_VARIABLE_MmakeFile_411_411;
    MR_String Var_412;
    MR_String Var_414;
    MR_Word STATE_VARIABLE_MmakeFile_419_419;
    MR_String Var_420;
    MR_String Var_422;
    MR_Word STATE_VARIABLE_MmakeFile_427_427;
    MR_String Var_428;
    MR_String Var_430;
    MR_Word STATE_VARIABLE_MmakeFile_435_435;
    MR_String Var_436;
    MR_String Var_438;
    MR_Word STATE_VARIABLE_MmakeFile_443_443;
    MR_String Var_444;
    MR_String Var_446;
    MR_Word STATE_VARIABLE_MmakeFile_451_451;
    MR_String Var_452;
    MR_String Var_454;
    MR_Word STATE_VARIABLE_MmakeFile_459_459;
    MR_String Var_460;
    MR_String Var_462;
    MR_Word STATE_VARIABLE_MmakeFile_467_467;
    MR_String Var_468;
    MR_String Var_470;
    MR_String Var_525;
    MR_String Var_528;
    MR_String Var_531;
    MR_String Var_534;
    MR_String Var_537;
    MR_String Var_540;
    MR_String Var_543;
    MR_String Var_546;
    MR_String Var_549;
    MR_String Var_552;
    MR_String Var_555;
    MR_String Var_558;
    MR_String Var_561;
    MR_String Var_564;
    MR_String Var_567;
    MR_String Var_570;
    MR_String Var_573;
    MR_String Var_576;
    MR_String Var_579;
    MR_String Var_582;
    MR_String Var_585;
    MR_String Var_588;
    MR_String Var_591;
    MR_String Var_594;
    MR_String Var_596;
    MR_String Var_597;
    MR_String Var_606;
    MR_String Var_609;
    MR_String Var_612;
    MR_String Var_615;
    MR_String Var_618;
    MR_String Var_621;
    MR_String Var_624;
    MR_String Var_627;
    MR_String Var_630;
    MR_String Var_633;
    MR_String Var_636;
    MR_String Var_639;
    MR_String Var_642;
    MR_Box conv5_STATE_VARIABLE_IO_138_138;

    ModuleNameString_15 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_11);
    mercury__library__version_2_p_0(&Version_16, &FullArch_17);
    {
      MmakeStartComment_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MmakeStartComment_18, 0) = ((MR_Box) ((MR_String) "dependency variables"));
      MR_hl_field(MR_mktag(0), MmakeStartComment_18, 1) = ((MR_Box) (ModuleNameString_15));
      MR_hl_field(MR_mktag(0), MmakeStartComment_18, 2) = ((MR_Box) (SourceFileName_10));
      MR_hl_field(MR_mktag(0), MmakeStartComment_18, 3) = ((MR_Box) (Version_16));
      MR_hl_field(MR_mktag(0), MmakeStartComment_18, 4) = ((MR_Box) (FullArch_17));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeStartComment_18, STATE_VARIABLE_MmakeFile_0_93, &STATE_VARIABLE_MmakeFile_98_98);
    TypeCtorInfo_508_508 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    mercury__map__keys_2_p_0(TypeCtorInfo_508_508, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, DepsMap_12, &Modules0_19);
    parse_tree__write_deps_file__select_ok_modules_3_p_0(Modules0_19, DepsMap_12, &Modules1_20);
    mercury__list__sort_3_p_0(TypeCtorInfo_508_508, (MR_Word) &parse_tree__write_deps_file_scalar_common_2[6], Modules1_20, &Modules_21);
    parse_tree__file_names__module_name_to_make_var_name_2_p_0(ModuleName_11, &ModuleMakeVarName_22);
    {
      Var_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), Var_100, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_100, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_100, 3) = ((MR_Box) (DepsMap_12));
    }
    TypeCtorInfo_515_515 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__map_3_p_0(TypeCtorInfo_508_508, TypeCtorInfo_515_515, Var_100, Modules_21, &SourceFiles0_23);
    mercury__list__sort_and_remove_dups_2_p_0(TypeCtorInfo_515_515, SourceFiles0_23, &SourceFiles_24);
    Var_101 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".ms");
    Var_103 = mercury__list__map_2_f_0(TypeCtorInfo_515_515, TypeCtorInfo_515_515, (MR_Word) &parse_tree__write_deps_file_scalar_common_9[0], SourceFiles_24);
    {
      MmakeVarModuleMs_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarModuleMs_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeVarModuleMs_25, 1) = ((MR_Box) (Var_101));
      MR_hl_field(MR_mktag(3), MmakeVarModuleMs_25, 2) = ((MR_Box) (Var_103));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarModuleMs_25, STATE_VARIABLE_MmakeFile_98_98, &STATE_VARIABLE_MmakeFile_106_106);
    Var_107 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".errs");
    Var_109 = mercury__list__map_2_f_0(TypeCtorInfo_515_515, TypeCtorInfo_515_515, (MR_Word) &parse_tree__write_deps_file_scalar_common_9[1], SourceFiles_24);
    {
      MmakeVarModuleErrs_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarModuleErrs_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeVarModuleErrs_26, 1) = ((MR_Box) (Var_107));
      MR_hl_field(MR_mktag(3), MmakeVarModuleErrs_26, 2) = ((MR_Box) (Var_109));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarModuleErrs_26, STATE_VARIABLE_MmakeFile_106_106, &STATE_VARIABLE_MmakeFile_112_112);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) "", Modules_21, &ModulesSourceFileNames_27);
    Var_115 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods");
    {
      MmakeVarModuleMods_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarModuleMods_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeVarModuleMods_28, 1) = ((MR_Box) (Var_115));
      MR_hl_field(MR_mktag(3), MmakeVarModuleMods_28, 2) = ((MR_Box) (ModulesSourceFileNames_27));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarModuleMods_28, STATE_VARIABLE_MmakeFile_112_112, &STATE_VARIABLE_MmakeFile_117_117);
    {
      Var_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_118, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), Var_118, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_8_p_0_5));
      MR_hl_field(MR_mktag(0), Var_118, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_118, 3) = ((MR_Box) (DepsMap_12));
    }
    ModulesWithSubModules_29 = mercury__list__filter_2_f_0(TypeCtorInfo_508_508, Var_118, Modules_21);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) "", ModulesWithSubModules_29, &ModulesWithSubModulesSourceFileNames_33);
    Var_124 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".parent_mods");
    {
      MmakeVarModuleParentMods_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarModuleParentMods_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeVarModuleParentMods_34, 1) = ((MR_Box) (Var_124));
      MR_hl_field(MR_mktag(3), MmakeVarModuleParentMods_34, 2) = ((MR_Box) (ModulesWithSubModulesSourceFileNames_33));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarModuleParentMods_34, STATE_VARIABLE_MmakeFile_117_117, &STATE_VARIABLE_MmakeFile_126_126);
    libs__globals__get_target_2_p_0(Globals_9, &Target_35);
    ForeignModulesAndExts_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    ForeignModules_37 = mercury__assoc_list__keys_1_f_0(TypeCtorInfo_508_508, TypeCtorInfo_515_515, ForeignModulesAndExts_36);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) "", ForeignModules_37, &ForeignModulesFileNames_38);
    Var_129 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".foreign");
    {
      MmakeVarForeignModules_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarForeignModules_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeVarForeignModules_39, 1) = ((MR_Box) (Var_129));
      MR_hl_field(MR_mktag(3), MmakeVarForeignModules_39, 2) = ((MR_Box) (ForeignModulesFileNames_38));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarForeignModules_39, STATE_VARIABLE_MmakeFile_126_126, &STATE_VARIABLE_MmakeFile_131_131);
    {
      MakeFileName_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MakeFileName_40, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), MakeFileName_40, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_8_p_0_6));
      MR_hl_field(MR_mktag(0), MakeFileName_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), MakeFileName_40, 3) = ((MR_Box) (Globals_9));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) &parse_tree__write_deps_file_scalar_common_2[1], TypeCtorInfo_515_515, (MR_Word) &mercury__io__io__type_ctor_info_state_0, MakeFileName_40, ForeignModulesAndExts_36, &ForeignFileNames_46, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_138_138);
    Var_139 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".foreign_cs");
    {
      MmakeVarForeignFileNames_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarForeignFileNames_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeVarForeignFileNames_47, 1) = ((MR_Box) (Var_139));
      MR_hl_field(MR_mktag(3), MmakeVarForeignFileNames_47, 2) = ((MR_Box) (ForeignFileNames_46));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarForeignFileNames_47, STATE_VARIABLE_MmakeFile_131_131, &STATE_VARIABLE_MmakeFile_141_141);
    Var_142 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".foreign_dlls");
    Var_525 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".foreign:%=\044(dlls_subdir)%.dll)");
    Var_144 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_525);
    {
      MmakeVarForeignDlls_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarForeignDlls_48, 0) = ((MR_Box) (Var_142));
      MR_hl_field(MR_mktag(2), MmakeVarForeignDlls_48, 1) = ((MR_Box) (Var_144));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarForeignDlls_48, STATE_VARIABLE_MmakeFile_141_141, &STATE_VARIABLE_MmakeFile_149_149);
    Var_150 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".init_cs");
    Var_528 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(cs_subdir)%.c)");
    Var_152 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_528);
    {
      MmakeVarInitCs_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarInitCs_49, 0) = ((MR_Box) (Var_150));
      MR_hl_field(MR_mktag(2), MmakeVarInitCs_49, 1) = ((MR_Box) (Var_152));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarInitCs_49, STATE_VARIABLE_MmakeFile_149_149, &STATE_VARIABLE_MmakeFile_157_157);
    parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(Modules_21, DepsMap_12, &ExtraLinkObjs_50);
    parse_tree__write_deps_file__get_extra_link_dependencies_6_p_0(Globals_9, (MR_String) ".c", ExtraLinkObjs_50, &ExtraLinkObjFileNamesC_51);
    Var_160 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".cs");
    Var_165 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".init_cs)");
    Var_163 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_165);
    {
      Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (Var_163));
      MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) (ExtraLinkObjFileNamesC_51));
    }
    {
      MmakeVarCs_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarCs_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeVarCs_52, 1) = ((MR_Box) (Var_160));
      MR_hl_field(MR_mktag(3), MmakeVarCs_52, 2) = ((MR_Box) (Var_162));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarCs_52, STATE_VARIABLE_MmakeFile_157_157, &STATE_VARIABLE_MmakeFile_167_167);
    Var_168 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".dlls");
    Var_531 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(dlls_subdir)%.dll)");
    Var_170 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_531);
    {
      MmakeVarDlls_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarDlls_53, 0) = ((MR_Box) (Var_168));
      MR_hl_field(MR_mktag(2), MmakeVarDlls_53, 1) = ((MR_Box) (Var_170));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarDlls_53, STATE_VARIABLE_MmakeFile_167_167, &STATE_VARIABLE_MmakeFile_175_175);
    parse_tree__write_deps_file__get_extra_link_dependencies_6_p_0(Globals_9, (MR_String) ".\044O", ExtraLinkObjs_50, &ExtraLinkObjFileNamesOs_54);
    Var_178 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_os");
    Var_534 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(os_subdir)%.\044O)");
    Var_181 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_534);
    {
      Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_180, 0) = ((MR_Box) (Var_181));
      MR_hl_field(MR_mktag(1), Var_180, 1) = ((MR_Box) (ExtraLinkObjFileNamesOs_54));
    }
    {
      MmakeVarAllOs_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarAllOs_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeVarAllOs_55, 1) = ((MR_Box) (Var_178));
      MR_hl_field(MR_mktag(3), MmakeVarAllOs_55, 2) = ((MR_Box) (Var_180));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarAllOs_55, STATE_VARIABLE_MmakeFile_175_175, &STATE_VARIABLE_MmakeFile_186_186);
    parse_tree__write_deps_file__get_extra_link_dependencies_6_p_0(Globals_9, (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)", ExtraLinkObjs_50, &ExtraLinkObjFileNamesPicOs_56);
    Var_189 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_pic_os");
    Var_537 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(os_subdir)%.\044(EXT_FOR_PIC_OBJECTS))");
    Var_192 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_537);
    {
      Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (Var_192));
      MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) (ExtraLinkObjFileNamesPicOs_56));
    }
    {
      MmakeVarAllPicOs_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarAllPicOs_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeVarAllPicOs_57, 1) = ((MR_Box) (Var_189));
      MR_hl_field(MR_mktag(3), MmakeVarAllPicOs_57, 2) = ((MR_Box) (Var_191));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarAllPicOs_57, STATE_VARIABLE_MmakeFile_186_186, &STATE_VARIABLE_MmakeFile_197_197);
    Var_198 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".os");
    Var_540 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_os)");
    Var_200 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_540);
    {
      MmakeVarOs_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarOs_58, 0) = ((MR_Box) (Var_198));
      MR_hl_field(MR_mktag(2), MmakeVarOs_58, 1) = ((MR_Box) (Var_200));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarOs_58, STATE_VARIABLE_MmakeFile_197_197, &STATE_VARIABLE_MmakeFile_205_205);
    Var_206 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".pic_os");
    Var_543 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_pic_os)");
    Var_208 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_543);
    {
      MmakeVarPicOs_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarPicOs_59, 0) = ((MR_Box) (Var_206));
      MR_hl_field(MR_mktag(2), MmakeVarPicOs_59, 1) = ((MR_Box) (Var_208));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarPicOs_59, STATE_VARIABLE_MmakeFile_205_205, &STATE_VARIABLE_MmakeFile_213_213);
    Var_214 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".useds");
    Var_546 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(used_subdir)%.used)");
    Var_216 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_546);
    {
      MmakeVarUseds_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarUseds_60, 0) = ((MR_Box) (Var_214));
      MR_hl_field(MR_mktag(2), MmakeVarUseds_60, 1) = ((MR_Box) (Var_216));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarUseds_60, STATE_VARIABLE_MmakeFile_213_213, &STATE_VARIABLE_MmakeFile_221_221);
    Var_222 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".javas");
    Var_549 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(javas_subdir)%.java)");
    Var_224 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_549);
    {
      MmakeVarJavas_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarJavas_61, 0) = ((MR_Box) (Var_222));
      MR_hl_field(MR_mktag(2), MmakeVarJavas_61, 1) = ((MR_Box) (Var_224));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarJavas_61, STATE_VARIABLE_MmakeFile_221_221, &STATE_VARIABLE_MmakeFile_229_229);
    Var_230 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".classes");
    Var_552 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(classes_subdir)%.class)");
    Var_233 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_552);
    Var_555 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(classes_subdir)%\\\044\044*.class))");
    Var_239 = mercury__string__f_43_43_2_f_0((MR_String) "\044(wildcard \044(", Var_555);
    {
      Var_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_238, 0) = ((MR_Box) (Var_239));
      MR_hl_field(MR_mktag(1), Var_238, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_232, 0) = ((MR_Box) (Var_233));
      MR_hl_field(MR_mktag(1), Var_232, 1) = ((MR_Box) (Var_238));
    }
    {
      MmakeVarClasses_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarClasses_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeVarClasses_62, 1) = ((MR_Box) (Var_230));
      MR_hl_field(MR_mktag(3), MmakeVarClasses_62, 2) = ((MR_Box) (Var_232));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarClasses_62, STATE_VARIABLE_MmakeFile_229_229, &STATE_VARIABLE_MmakeFile_245_245);
    Var_246 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".css");
    Var_558 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(css_subdir)%.cs)");
    Var_248 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_558);
    {
      MmakeVarCss_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarCss_63, 0) = ((MR_Box) (Var_246));
      MR_hl_field(MR_mktag(2), MmakeVarCss_63, 1) = ((MR_Box) (Var_248));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarCss_63, STATE_VARIABLE_MmakeFile_245_245, &STATE_VARIABLE_MmakeFile_253_253);
    Var_254 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".dirs");
    Var_561 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(dirs_subdir)%.dir)");
    Var_256 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_561);
    {
      MmakeVarDirs_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarDirs_64, 0) = ((MR_Box) (Var_254));
      MR_hl_field(MR_mktag(2), MmakeVarDirs_64, 1) = ((MR_Box) (Var_256));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarDirs_64, STATE_VARIABLE_MmakeFile_253_253, &STATE_VARIABLE_MmakeFile_261_261);
    Var_262 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".dir_os");
    Var_564 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(dirs_subdir)%.dir/*.\044O)");
    Var_264 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_564);
    {
      MmakeVarDirOs_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarDirOs_65, 0) = ((MR_Box) (Var_262));
      MR_hl_field(MR_mktag(2), MmakeVarDirOs_65, 1) = ((MR_Box) (Var_264));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarDirOs_65, STATE_VARIABLE_MmakeFile_261_261, &STATE_VARIABLE_MmakeFile_269_269);
    Var_270 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".dates");
    Var_567 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(dates_subdir)%.date)");
    Var_272 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_567);
    {
      MmakeVarDates_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarDates_66, 0) = ((MR_Box) (Var_270));
      MR_hl_field(MR_mktag(2), MmakeVarDates_66, 1) = ((MR_Box) (Var_272));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarDates_66, STATE_VARIABLE_MmakeFile_269_269, &STATE_VARIABLE_MmakeFile_277_277);
    Var_278 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".date0s");
    Var_570 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(date0s_subdir)%.date0)");
    Var_280 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_570);
    {
      MmakeVarDate0s_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarDate0s_67, 0) = ((MR_Box) (Var_278));
      MR_hl_field(MR_mktag(2), MmakeVarDate0s_67, 1) = ((MR_Box) (Var_280));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarDate0s_67, STATE_VARIABLE_MmakeFile_277_277, &STATE_VARIABLE_MmakeFile_285_285);
    Var_286 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".date3s");
    Var_573 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(date3s_subdir)%.date3)");
    Var_288 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_573);
    {
      MmakeVarDate3s_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarDate3s_68, 0) = ((MR_Box) (Var_286));
      MR_hl_field(MR_mktag(2), MmakeVarDate3s_68, 1) = ((MR_Box) (Var_288));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarDate3s_68, STATE_VARIABLE_MmakeFile_285_285, &STATE_VARIABLE_MmakeFile_293_293);
    Var_294 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".optdates");
    Var_576 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(optdates_subdir)%.optdate)");
    Var_296 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_576);
    {
      MmakeVarOptDates_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarOptDates_69, 0) = ((MR_Box) (Var_294));
      MR_hl_field(MR_mktag(2), MmakeVarOptDates_69, 1) = ((MR_Box) (Var_296));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarOptDates_69, STATE_VARIABLE_MmakeFile_293_293, &STATE_VARIABLE_MmakeFile_301_301);
    Var_302 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".trans_opt_dates");
    Var_579 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(trans_opt_dates_subdir)%.trans_opt_date)");
    Var_304 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_579);
    {
      MmakeVarTransOptDates_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarTransOptDates_70, 0) = ((MR_Box) (Var_302));
      MR_hl_field(MR_mktag(2), MmakeVarTransOptDates_70, 1) = ((MR_Box) (Var_304));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarTransOptDates_70, STATE_VARIABLE_MmakeFile_301_301, &STATE_VARIABLE_MmakeFile_309_309);
    Var_310 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".c_dates");
    Var_582 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(c_dates_subdir)%.c_date)");
    Var_312 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_582);
    {
      MmakeVarCDates_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarCDates_71, 0) = ((MR_Box) (Var_310));
      MR_hl_field(MR_mktag(2), MmakeVarCDates_71, 1) = ((MR_Box) (Var_312));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarCDates_71, STATE_VARIABLE_MmakeFile_309_309, &STATE_VARIABLE_MmakeFile_317_317);
    Var_318 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".java_dates");
    Var_585 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(java_dates_subdir)%.java_date)");
    Var_320 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_585);
    {
      MmakeVarJavaDates_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarJavaDates_72, 0) = ((MR_Box) (Var_318));
      MR_hl_field(MR_mktag(2), MmakeVarJavaDates_72, 1) = ((MR_Box) (Var_320));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarJavaDates_72, STATE_VARIABLE_MmakeFile_317_317, &STATE_VARIABLE_MmakeFile_325_325);
    Var_326 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".cs_dates");
    Var_588 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(cs_dates_subdir)%.cs_date)");
    Var_328 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_588);
    {
      MmakeVarCsDates_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarCsDates_73, 0) = ((MR_Box) (Var_326));
      MR_hl_field(MR_mktag(2), MmakeVarCsDates_73, 1) = ((MR_Box) (Var_328));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarCsDates_73, STATE_VARIABLE_MmakeFile_325_325, &STATE_VARIABLE_MmakeFile_333_333);
    Var_334 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".ds");
    Var_591 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(ds_subdir)%.d)");
    Var_336 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_591);
    {
      MmakeVarDs_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarDs_74, 0) = ((MR_Box) (Var_334));
      MR_hl_field(MR_mktag(2), MmakeVarDs_74, 1) = ((MR_Box) (Var_336));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarDs_74, STATE_VARIABLE_MmakeFile_333_333, &STATE_VARIABLE_MmakeFile_341_341);
    Var_342 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".module_deps");
    Var_350 = make__make_module_dep_file_extension_0_f_0();
    Var_594 = mercury__string__f_43_43_2_f_0(Var_350, (MR_String) ")");
    Var_596 = mercury__string__f_43_43_2_f_0((MR_String) ".mods:%=\044(module_deps_subdir)%", Var_594);
    Var_597 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, Var_596);
    Var_344 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_597);
    {
      MmakeVarModuleDeps_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarModuleDeps_75, 0) = ((MR_Box) (Var_342));
      MR_hl_field(MR_mktag(2), MmakeVarModuleDeps_75, 1) = ((MR_Box) (Var_344));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarModuleDeps_75, STATE_VARIABLE_MmakeFile_341_341, &STATE_VARIABLE_MmakeFile_352_352);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 265, &HighLevelCode_76);
    switch (HighLevelCode_76) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MihSources_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        switch (Target_35) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_354;
              MR_String Var_600;

              Var_600 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
              Var_354 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_600);
              {
                MihSources_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MihSources_77, 0) = ((MR_Box) (Var_354));
                MR_hl_field(MR_mktag(1), MihSources_77, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 2:
            MihSources_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
    }
    Var_360 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mihs");
    {
      MmakeVarMihs_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarMihs_78, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeVarMihs_78, 1) = ((MR_Box) (Var_360));
      MR_hl_field(MR_mktag(3), MmakeVarMihs_78, 2) = ((MR_Box) (MihSources_77));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarMihs_78, STATE_VARIABLE_MmakeFile_352_352, &STATE_VARIABLE_MmakeFile_362_362);
    switch (Target_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_363;
          MR_String Var_603;

          Var_603 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=%.mh)");
          Var_363 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_603);
          {
            MhSources_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MhSources_79, 0) = ((MR_Box) (Var_363));
            MR_hl_field(MR_mktag(1), MhSources_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        MhSources_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
    Var_369 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mhs");
    {
      MmakeVarMhs_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarMhs_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeVarMhs_80, 1) = ((MR_Box) (Var_369));
      MR_hl_field(MR_mktag(3), MmakeVarMhs_80, 2) = ((MR_Box) (MhSources_79));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarMhs_80, STATE_VARIABLE_MmakeFile_362_362, &STATE_VARIABLE_MmakeFile_371_371);
    Var_372 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_mihs");
    Var_606 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
    Var_374 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_606);
    {
      MmakeVarAllMihs_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarAllMihs_81, 0) = ((MR_Box) (Var_372));
      MR_hl_field(MR_mktag(2), MmakeVarAllMihs_81, 1) = ((MR_Box) (Var_374));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarAllMihs_81, STATE_VARIABLE_MmakeFile_371_371, &STATE_VARIABLE_MmakeFile_379_379);
    Var_380 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_mhs");
    Var_609 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=%.mh)");
    Var_382 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_609);
    {
      MmakeVarAllMhs_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarAllMhs_82, 0) = ((MR_Box) (Var_380));
      MR_hl_field(MR_mktag(2), MmakeVarAllMhs_82, 1) = ((MR_Box) (Var_382));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarAllMhs_82, STATE_VARIABLE_MmakeFile_379_379, &STATE_VARIABLE_MmakeFile_387_387);
    Var_388 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".ints");
    Var_612 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(ints_subdir)%.int)");
    Var_391 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_612);
    Var_615 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(int2s_subdir)%.int2)");
    Var_397 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_615);
    {
      Var_396 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_396, 0) = ((MR_Box) (Var_397));
      MR_hl_field(MR_mktag(1), Var_396, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_390 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_390, 0) = ((MR_Box) (Var_391));
      MR_hl_field(MR_mktag(1), Var_390, 1) = ((MR_Box) (Var_396));
    }
    {
      MmakeVarInts_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarInts_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeVarInts_83, 1) = ((MR_Box) (Var_388));
      MR_hl_field(MR_mktag(3), MmakeVarInts_83, 2) = ((MR_Box) (Var_390));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarInts_83, STATE_VARIABLE_MmakeFile_387_387, &STATE_VARIABLE_MmakeFile_403_403);
    Var_404 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".int0s");
    Var_618 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".parent_mods:%=\044(int0s_subdir)%.int0)");
    Var_406 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_618);
    {
      MmakeVarInt0s_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarInt0s_84, 0) = ((MR_Box) (Var_404));
      MR_hl_field(MR_mktag(2), MmakeVarInt0s_84, 1) = ((MR_Box) (Var_406));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarInt0s_84, STATE_VARIABLE_MmakeFile_403_403, &STATE_VARIABLE_MmakeFile_411_411);
    Var_412 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_int0s");
    Var_621 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(int0s_subdir)%.int0)");
    Var_414 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_621);
    {
      MmakeVarAllInt0s_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarAllInt0s_85, 0) = ((MR_Box) (Var_412));
      MR_hl_field(MR_mktag(2), MmakeVarAllInt0s_85, 1) = ((MR_Box) (Var_414));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarAllInt0s_85, STATE_VARIABLE_MmakeFile_411_411, &STATE_VARIABLE_MmakeFile_419_419);
    Var_420 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".int3s");
    Var_624 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(int3s_subdir)%.int3)");
    Var_422 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_624);
    {
      MmakeVarInt3s_86 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarInt3s_86, 0) = ((MR_Box) (Var_420));
      MR_hl_field(MR_mktag(2), MmakeVarInt3s_86, 1) = ((MR_Box) (Var_422));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarInt3s_86, STATE_VARIABLE_MmakeFile_419_419, &STATE_VARIABLE_MmakeFile_427_427);
    Var_428 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".opts");
    Var_627 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(opts_subdir)%.opt)");
    Var_430 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_627);
    {
      MmakeVarOpts_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarOpts_87, 0) = ((MR_Box) (Var_428));
      MR_hl_field(MR_mktag(2), MmakeVarOpts_87, 1) = ((MR_Box) (Var_430));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarOpts_87, STATE_VARIABLE_MmakeFile_427_427, &STATE_VARIABLE_MmakeFile_435_435);
    Var_436 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".trans_opts");
    Var_630 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(trans_opts_subdir)%.trans_opt)");
    Var_438 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_630);
    {
      MmakeVarTransOpts_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarTransOpts_88, 0) = ((MR_Box) (Var_436));
      MR_hl_field(MR_mktag(2), MmakeVarTransOpts_88, 1) = ((MR_Box) (Var_438));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarTransOpts_88, STATE_VARIABLE_MmakeFile_435_435, &STATE_VARIABLE_MmakeFile_443_443);
    Var_444 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".analysiss");
    Var_633 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(analysiss_subdir)%.analysis)");
    Var_446 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_633);
    {
      MmakeVarAnalysiss_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarAnalysiss_89, 0) = ((MR_Box) (Var_444));
      MR_hl_field(MR_mktag(2), MmakeVarAnalysiss_89, 1) = ((MR_Box) (Var_446));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarAnalysiss_89, STATE_VARIABLE_MmakeFile_443_443, &STATE_VARIABLE_MmakeFile_451_451);
    Var_452 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".requests");
    Var_636 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(requests_subdir)%.request)");
    Var_454 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_636);
    {
      MmakeVarRequests_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarRequests_90, 0) = ((MR_Box) (Var_452));
      MR_hl_field(MR_mktag(2), MmakeVarRequests_90, 1) = ((MR_Box) (Var_454));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarRequests_90, STATE_VARIABLE_MmakeFile_451_451, &STATE_VARIABLE_MmakeFile_459_459);
    Var_460 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".imdgs");
    Var_639 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(imdgs_subdir)%.imdg)");
    Var_462 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_639);
    {
      MmakeVarImdgs_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarImdgs_91, 0) = ((MR_Box) (Var_460));
      MR_hl_field(MR_mktag(2), MmakeVarImdgs_91, 1) = ((MR_Box) (Var_462));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarImdgs_91, STATE_VARIABLE_MmakeFile_459_459, &STATE_VARIABLE_MmakeFile_467_467);
    Var_468 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".profs");
    Var_642 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=%.prof)");
    Var_470 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_642);
    {
      MmakeVarProfs_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarProfs_92, 0) = ((MR_Box) (Var_468));
      MR_hl_field(MR_mktag(2), MmakeVarProfs_92, 1) = ((MR_Box) (Var_470));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarProfs_92, STATE_VARIABLE_MmakeFile_467_467, STATE_VARIABLE_MmakeFile_94);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(
  MR_Word Modules_5,
  MR_Word DepsMap_6,
  MR_Word * ExtraLinkObjs_8)
{
  {
    MR_Word ExtraLinkObjs0_9;

    parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(Modules_5, DepsMap_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ExtraLinkObjs0_9);
    mercury__list__reverse_2_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_2[2], ExtraLinkObjs0_9, ExtraLinkObjs_8);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_ExtraLinkObjs_0_4,
  MR_Word * STATE_VARIABLE_ExtraLinkObjs_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_ExtraLinkObjs_5 = STATE_VARIABLE_ExtraLinkObjs_0_4;
    else
    {
      MR_Word TypeCtorInfo_54_54 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
      MR_Word TypeCtorInfo_56_56;
      MR_Word Module_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Modules_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ModuleImports_17;
      MR_Word FactDeps_18;
      MR_Integer NumFactDeps_19;
      MR_Word ModuleList_20;
      MR_Word NewLinkObjs_22;
      MR_Word Var_25;
      MR_Word STATE_VARIABLE_ExtraLinkObjs_26_26;
      MR_Box conv0_Var_25;
      MR_Word Var_16;
      MR_String Var_28;
      MR_Word Var_29;
      MR_Word Var_30;
      MR_Word Var_31;
      MR_Word Var_32;
      MR_Word Var_33;
      MR_Word Var_34;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_38;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_41;
      MR_Word Var_42;
      MR_Word Var_43;
      MR_Word Var_44;
      MR_Word Var_45;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_String Var_53;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ExtraLinkObjs_0_4;

      mercury__map__lookup_3_p_0(TypeCtorInfo_54_54, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, HeadVar__2_2, ((MR_Box) (Module_11)), &conv0_Var_25);
      Var_25 = ((MR_Word) conv0_Var_25);
      Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 0)));
      ModuleImports_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1)));
      Var_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 0)));
      Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 1)));
      Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 2)));
      Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 3)));
      Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 4)));
      Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 5)));
      Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 6)));
      Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 7)));
      Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 8)));
      Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 9)));
      Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 10)));
      FactDeps_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 11)));
      Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 12)));
      Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 13)));
      Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 14)));
      Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 15)));
      Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 16)));
      Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 17)));
      Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 18)));
      Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 19)));
      Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 20)));
      Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 21)));
      Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 22)));
      Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 23)));
      Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 24)));
      Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 25)));
      Var_53 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_17, (MR_Integer) 26)));
      TypeCtorInfo_56_56 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      mercury__list__length_2_p_0(TypeCtorInfo_56_56, FactDeps_18, &NumFactDeps_19);
      mercury__list__duplicate_3_p_0(TypeCtorInfo_54_54, NumFactDeps_19, ((MR_Box) (Module_11)), &ModuleList_20);
      mercury__assoc_list__from_corresponding_lists_3_p_0(TypeCtorInfo_56_56, TypeCtorInfo_54_54, FactDeps_18, ModuleList_20, &NewLinkObjs_22);
      mercury__list__append_3_p_1((MR_Word) &parse_tree__write_deps_file_scalar_common_2[2], NewLinkObjs_22, STATE_VARIABLE_ExtraLinkObjs_0_4, &STATE_VARIABLE_ExtraLinkObjs_26_26);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Modules_12;
      next_value_of_STATE_VARIABLE_ExtraLinkObjs_0_4 = STATE_VARIABLE_ExtraLinkObjs_26_26;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_ExtraLinkObjs_0_4 = next_value_of_STATE_VARIABLE_ExtraLinkObjs_0_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__select_ok_modules_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word DepsMap_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word TypeCtorInfo_18_18;
      MR_Word Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Modules0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ModulesTail_9;
      MR_Word ModuleImports_11;
      MR_Word Errors_12;
      MR_Word FatalErrors_13;
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Box conv0_Var_14;
      MR_Word Var_10;

      parse_tree__write_deps_file__select_ok_modules_3_p_0(Modules0_6, DepsMap_2, &ModulesTail_9);
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, DepsMap_2, ((MR_Box) (Module_5)), &conv0_Var_14);
      Var_14 = ((MR_Word) conv0_Var_14);
      Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0)));
      ModuleImports_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1)));
      parse_tree__module_imports__module_and_imports_get_errors_2_p_0(ModuleImports_11, &Errors_12);
      Var_15 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
      TypeCtorInfo_18_18 = (MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0;
      mercury__set__intersect_3_p_0(TypeCtorInfo_18_18, Errors_12, Var_15, &FatalErrors_13);
      succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_18_18, FatalErrors_13);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Module_5));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ModulesTail_9));
        }
      else
        *HeadVar__3_3 = ModulesTail_9;
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__get_extra_link_dependencies_6_p_0(
  MR_Word Globals_1,
  MR_String Suffix_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_String ExtraLink_14;
    MR_Word Module_15;
    MR_Word ExtraLinks_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
    MR_String FileName_17;
    MR_Word FileNames_18;
    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

    ExtraLink_14 = ((MR_String) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0)));
    Module_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1)));
    parse_tree__file_names__extra_link_obj_file_name_8_p_0(Globals_1, Module_15, ExtraLink_14, Suffix_2, (MR_Integer) 1, &FileName_17);
    parse_tree__write_deps_file__get_extra_link_dependencies_6_p_0(Globals_1, Suffix_2, ExtraLinks_16, &FileNames_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FileName_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FileNames_18));
    }
  }
}

void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_d_files_10_p_0(
  MR_Word Globals_1,
  MR_Word HeadVar__2_2,
  MR_Word IntDepsGraph_3,
  MR_Word ImpDepsGraph_4,
  MR_Word IndirectDepsGraph_5,
  MR_Word IndirectOptDepsGraph_6,
  MR_Word TransOptOrder_7,
  MR_Word DepsMap_8)
{
  parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0(Globals_1, HeadVar__2_2, IntDepsGraph_3, ImpDepsGraph_4, IndirectDepsGraph_5, IndirectOptDepsGraph_6, TransOptOrder_7);
}

void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_56_93_95_48_10_p_0(
  MR_Word Globals_1,
  MR_Word HeadVar__2_2,
  MR_Word IntDepsGraph_3,
  MR_Word ImpDepsGraph_4,
  MR_Word IndirectDepsGraph_5,
  MR_Word IndirectOptDepsGraph_6,
  MR_Word TransOptOrder_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Dep_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Deps_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__2_2;

      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_56_93_95_48_10_p_0(Globals_1, Dep_22, IntDepsGraph_3, ImpDepsGraph_4, IndirectDepsGraph_5, IndirectOptDepsGraph_6, TransOptOrder_7);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = Deps_23;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_56_93_95_48_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1068__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_56_93_95_48_10_p_0(
  MR_Word Globals_11,
  MR_Word Dep_12,
  MR_Word IntDepsGraph_13,
  MR_Word ImpDepsGraph_14,
  MR_Word IndirectDepsGraph_15,
  MR_Word IndirectOptDepsGraph_16,
  MR_Word TransOptOrder_17)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_122_122;
    MR_Word ModuleName_22;
    MR_Word IndirectOptDeps_23;
    MR_Word Intermod_24;
    MR_Word IntDeps_25;
    MR_Word ImpDeps_26;
    MR_Word IndirectDeps_27;
    MR_Word ForeignImportModules0_28;
    MR_Word Target_29;
    MR_Word ForeignImportModules_30;
    MR_Word FindModule_31;
    MR_Word TransOptDeps0_33;
    MR_Word TransOptDeps_36;
    MR_Word Errors_37;
    MR_Word FatalErrors_38;
    MR_Word STATE_VARIABLE_ModuleAndImports_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Dep_12, (MR_Integer) 1)));
    MR_Word STATE_VARIABLE_ModuleAndImports_43_43;
    MR_Word STATE_VARIABLE_ModuleAndImports_44_44;
    MR_Word STATE_VARIABLE_ModuleAndImports_45_45;
    MR_Word STATE_VARIABLE_ModuleAndImports_46_46;
    MR_Word Var_48;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), Dep_12, (MR_Integer) 0)));
    MR_String Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_Word Var_90;
    MR_Word Var_91;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_String Var_94;
    MR_Word Var_80;
    MR_Word TransOptDeps1_35;
    MR_Word Var_34;
    MR_String Var_95;
    MR_Word Var_96;
    MR_Word Var_97;
    MR_Word Var_98;
    MR_Word Var_99;
    MR_Word Var_100;
    MR_Word Var_101;
    MR_Word Var_102;
    MR_Word Var_103;
    MR_Word Var_104;
    MR_Word Var_105;
    MR_Word Var_106;
    MR_Word Var_107;
    MR_Word Var_108;
    MR_Word Var_109;
    MR_Word Var_110;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_String Var_120;

    parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(STATE_VARIABLE_ModuleAndImports_41_41, &ModuleName_22);
    parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(IndirectOptDepsGraph_16, ModuleName_22, &IndirectOptDeps_23);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 333, &Intermod_24);
    switch (Intermod_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(IntDepsGraph_13, ModuleName_22, &IntDeps_25);
          parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(ImpDepsGraph_14, ModuleName_22, &ImpDeps_26);
          parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(IndirectDepsGraph_15, ModuleName_22, &IndirectDeps_27);
        }
        break;
      case (MR_Integer) 1:
        {
          IntDeps_25 = IndirectOptDeps_23;
          ImpDeps_26 = IndirectOptDeps_23;
          IndirectDeps_27 = IndirectOptDeps_23;
        }
        break;
    }
    ForeignImportModules0_28 = parse_tree__prog_data_foreign__init_foreign_import_modules_0_f_0();
    libs__globals__get_target_2_p_0(Globals_11, &Target_29);
    Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignImportModules0_28, (MR_Integer) 0)));
    Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignImportModules0_28, (MR_Integer) 1)));
    Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignImportModules0_28, (MR_Integer) 2)));
    Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignImportModules0_28, (MR_Integer) 3)));
    switch (Target_29) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          ForeignImportModules_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ForeignImportModules_30, 0) = ((MR_Box) (IndirectOptDeps_23));
          MR_hl_field(MR_mktag(0), ForeignImportModules_30, 1) = ((MR_Box) (Var_125));
          MR_hl_field(MR_mktag(0), ForeignImportModules_30, 2) = ((MR_Box) (Var_124));
          MR_hl_field(MR_mktag(0), ForeignImportModules_30, 3) = ((MR_Box) (Var_123));
        }
        break;
      case (MR_Integer) 1:
        {
          ForeignImportModules_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ForeignImportModules_30, 0) = ((MR_Box) (Var_126));
          MR_hl_field(MR_mktag(0), ForeignImportModules_30, 1) = ((MR_Box) (IndirectOptDeps_23));
          MR_hl_field(MR_mktag(0), ForeignImportModules_30, 2) = ((MR_Box) (Var_124));
          MR_hl_field(MR_mktag(0), ForeignImportModules_30, 3) = ((MR_Box) (Var_123));
        }
        break;
      case (MR_Integer) 3:
        {
          ForeignImportModules_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ForeignImportModules_30, 0) = ((MR_Box) (Var_126));
          MR_hl_field(MR_mktag(0), ForeignImportModules_30, 1) = ((MR_Box) (Var_125));
          MR_hl_field(MR_mktag(0), ForeignImportModules_30, 2) = ((MR_Box) (Var_124));
          MR_hl_field(MR_mktag(0), ForeignImportModules_30, 3) = ((MR_Box) (IndirectOptDeps_23));
        }
        break;
      case (MR_Integer) 2:
        {
          ForeignImportModules_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ForeignImportModules_30, 0) = ((MR_Box) (Var_126));
          MR_hl_field(MR_mktag(0), ForeignImportModules_30, 1) = ((MR_Box) (Var_125));
          MR_hl_field(MR_mktag(0), ForeignImportModules_30, 2) = ((MR_Box) (IndirectOptDeps_23));
          MR_hl_field(MR_mktag(0), ForeignImportModules_30, 3) = ((MR_Box) (Var_123));
        }
        break;
    }
    Var_68 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 0)));
    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 1)));
    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 2)));
    Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 3)));
    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 4)));
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 5)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 6)));
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 7)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 8)));
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 9)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 10)));
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 11)));
    Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 12)));
    Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 13)));
    Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 14)));
    Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 15)));
    Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 16)));
    Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 17)));
    Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 18)));
    Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 19)));
    Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 20)));
    Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 21)));
    Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 22)));
    Var_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 23)));
    Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 24)));
    Var_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 25)));
    Var_94 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_41_41, (MR_Integer) 26)));
    {
      STATE_VARIABLE_ModuleAndImports_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 27 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 0) = ((MR_Box) (Var_68));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 1) = ((MR_Box) (Var_69));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 2) = ((MR_Box) (Var_70));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 3) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 4) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 5) = ((MR_Box) (Var_73));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 6) = ((MR_Box) (Var_74));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 7) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 8) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 9) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 10) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 11) = ((MR_Box) (Var_79));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 12) = ((MR_Box) (ForeignImportModules_30));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 13) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 14) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 15) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 16) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 17) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 18) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 19) = ((MR_Box) (Var_87));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 20) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 21) = ((MR_Box) (Var_89));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 22) = ((MR_Box) (Var_90));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 23) = ((MR_Box) (Var_91));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 24) = ((MR_Box) (Var_92));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 25) = ((MR_Box) (Var_93));
      MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_43_43, 26) = ((MR_Box) (Var_94));
    }
    parse_tree__module_imports__module_and_imports_set_int_deps_3_p_0(IntDeps_25, STATE_VARIABLE_ModuleAndImports_43_43, &STATE_VARIABLE_ModuleAndImports_44_44);
    parse_tree__module_imports__module_and_imports_set_imp_deps_3_p_0(ImpDeps_26, STATE_VARIABLE_ModuleAndImports_44_44, &STATE_VARIABLE_ModuleAndImports_45_45);
    parse_tree__module_imports__module_and_imports_set_indirect_deps_3_p_0(IndirectDeps_27, STATE_VARIABLE_ModuleAndImports_45_45, &STATE_VARIABLE_ModuleAndImports_46_46);
    {
      FindModule_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FindModule_31, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), FindModule_31, 1) = ((MR_Box) (parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_56_93_95_48_10_p_0_1));
      MR_hl_field(MR_mktag(0), FindModule_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), FindModule_31, 3) = ((MR_Box) (ModuleName_22));
    }
    mercury__list__drop_while_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, FindModule_31, TransOptOrder_17, &TransOptDeps0_33);
    succeeded = ((MR_tag((MR_Word) TransOptDeps0_33)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), TransOptDeps0_33, (MR_Integer) 0)));
      TransOptDeps1_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), TransOptDeps0_33, (MR_Integer) 1)));
      TransOptDeps_36 = TransOptDeps1_35;
    }
    else
      TransOptDeps_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    Var_95 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 0)));
    Var_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 1)));
    Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 2)));
    Var_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 3)));
    Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 4)));
    Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 5)));
    Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 6)));
    Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 7)));
    Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 8)));
    Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 9)));
    Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 10)));
    Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 11)));
    Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 12)));
    Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 13)));
    Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 14)));
    Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 15)));
    Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 16)));
    Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 17)));
    Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 18)));
    Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 19)));
    Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 20)));
    Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 21)));
    Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 22)));
    Errors_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 23)));
    Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 24)));
    Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 25)));
    Var_120 = ((MR_String) (MR_hl_field(MR_mktag(0), STATE_VARIABLE_ModuleAndImports_46_46, (MR_Integer) 26)));
    Var_48 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
    TypeCtorInfo_122_122 = (MR_Word) &parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0;
    mercury__set__intersect_3_p_0(TypeCtorInfo_122_122, Errors_37, Var_48, &FatalErrors_38);
    succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_122_122, FatalErrors_38);
    if (succeeded)
    {
      MR_Word Var_49;

      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (TransOptDeps_36));
      }
      parse_tree__write_deps_file__write_dependency_file_6_p_0(Globals_11, STATE_VARIABLE_ModuleAndImports_46_46, IndirectOptDeps_23, Var_49);
    }
    else
    {
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_LambdaHeadVar__3_17;

    parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1097__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_LambdaHeadVar__3_17);
    *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_17));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(
  MR_Word DepsGraph0_4,
  MR_Word ModuleName_5,
  MR_Word * Dependencies_6)
{
  {
    MR_Word TypeCtorInfo_22_22 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word ModuleKey_7;
    MR_Word DepsGraph_8;
    MR_Word DepsKeysSet_9;
    MR_Word AddKeyDep_10;
    MR_Word Var_18;
    MR_Box conv1_Dependencies_6;

    mercury__digraph__add_vertex_4_p_0(TypeCtorInfo_22_22, ((MR_Box) (ModuleName_5)), &ModuleKey_7, DepsGraph0_4, &DepsGraph_8);
    mercury__digraph__lookup_key_set_from_3_p_0(TypeCtorInfo_22_22, DepsGraph_8, ModuleKey_7, &DepsKeysSet_9);
    {
      AddKeyDep_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AddKeyDep_10, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), AddKeyDep_10, 1) = ((MR_Box) (parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1));
      MR_hl_field(MR_mktag(0), AddKeyDep_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), AddKeyDep_10, 3) = ((MR_Box) (DepsGraph_8));
    }
    Var_18 = mercury__set__init_0_f_0(TypeCtorInfo_22_22);
    mercury__sparse_bitset__foldl_4_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[0], AddKeyDep_10, DepsKeysSet_9, ((MR_Box) (Var_18)), &conv1_Dependencies_6);
    *Dependencies_6 = ((MR_Word) conv1_Dependencies_6);
  }
}

void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleAndImports_8,
  MR_Word AllDeps_9,
  MR_Word MaybeTransOptDeps_10)
{
  {
    MR_Word Verbose_12;
    MR_Word ModuleName_13;
    MR_String DependencyFileName_14;
    MR_Word TmpDependencyFileNameRes_15;
    MR_String Var_38;
    MR_String Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_115;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_122;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_String Var_137;

    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 57, &Verbose_12);
    Var_112 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 0)));
    Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 1)));
    ModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 2)));
    Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 3)));
    Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 4)));
    Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 5)));
    Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 6)));
    Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 7)));
    Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 8)));
    Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 9)));
    Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 10)));
    Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 11)));
    Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 12)));
    Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 13)));
    Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 14)));
    Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 15)));
    Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 16)));
    Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 17)));
    Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 18)));
    Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 19)));
    Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 20)));
    Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 21)));
    Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 22)));
    Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 23)));
    Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 24)));
    Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 25)));
    Var_137 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleAndImports_8, (MR_Integer) 26)));
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 0, (MR_String) ".d", ModuleName_13, &DependencyFileName_14);
    Var_38 = mercury__dir__dirname_1_f_0(DependencyFileName_14);
    mercury__io__make_temp_file_6_p_0(Var_38, (MR_String) "tmp_d", (MR_String) "", &TmpDependencyFileNameRes_15);
    if (((MR_tag((MR_Word) TmpDependencyFileNameRes_15)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), TmpDependencyFileNameRes_15, (MR_Integer) 0)));
      MR_String Message_17;
      MR_String Var_96;

      Var_96 = mercury__io__error_message_1_f_0(Error_16);
      Message_17 = mercury__string__f_43_43_2_f_0((MR_String) "Could not create temporary file: ", Var_96);
      libs__file_util__report_error_3_p_0(Message_17);
    }
    else
    {
      MR_String TmpDependencyFileName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), TmpDependencyFileNameRes_15, (MR_Integer) 0)));
      MR_Word Result_19;

      libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% Writing auto-dependency file \140");
      libs__file_util__maybe_write_string_4_p_0(Verbose_12, DependencyFileName_14);
      libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "\'...");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_12);
      mercury__io__open_output_4_p_0(TmpDependencyFileName_18, &Result_19);
      if (((MR_tag((MR_Word) Result_19)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word IOError_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result_19, (MR_Integer) 0)));
        MR_String IOErrorMessage_21;
        MR_Word Var_87;
        MR_Word Var_89;
        MR_Word Var_90;
        MR_Word Var_92;
        MR_String Message_98;

        libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) " failed.\n");
        libs__file_util__maybe_flush_output_3_p_0(Verbose_12);
        mercury__io__error_message_2_p_0(IOError_20, &IOErrorMessage_21);
        {
          Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (IOErrorMessage_21));
          MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) ((MR_String) "\' for output: "));
          MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_92));
        }
        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (TmpDependencyFileName_18));
          MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_90));
        }
        {
          Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) ((MR_String) "error opening temporary file \140"));
          MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_89));
        }
        mercury__string__append_list_2_p_0(Var_87, &Message_98);
        libs__file_util__report_error_3_p_0(Message_98);
      }
      else
      {
        MR_Word DepStream_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result_19, (MR_Integer) 0)));
        MR_Word MmakeFile0_23;
        MR_Word MmakeFile_24;
        MR_Word FirstRenameResult_25;

        libs__mmakefiles__start_mmakefile_1_p_0(&MmakeFile0_23);
        parse_tree__write_deps_file__generate_d_file_8_p_0(Globals_7, ModuleAndImports_8, AllDeps_9, MaybeTransOptDeps_10, MmakeFile0_23, &MmakeFile_24);
        libs__mmakefiles__end_mmakefile_4_p_0(DepStream_22, MmakeFile_24);
        mercury__io__close_output_3_p_0(DepStream_22);
        mercury__io__rename_file_5_p_0(TmpDependencyFileName_18, DependencyFileName_14, &FirstRenameResult_25);
        if ((FirstRenameResult_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) " done.\n");
        }
        else
        {
          MR_Word RemoveResult_27;

          mercury__io__remove_file_4_p_0(DependencyFileName_14, &RemoveResult_27);
          if ((RemoveResult_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word SecondRenameResult_30;

            mercury__io__rename_file_5_p_0(TmpDependencyFileName_18, DependencyFileName_14, &SecondRenameResult_30);
            if ((SecondRenameResult_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) " done.\n");
            }
            else
            {
              MR_Word Error5_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), SecondRenameResult_30, (MR_Integer) 0)));
              MR_Word Var_62;
              MR_Word Var_64;
              MR_Word Var_65;
              MR_Word Var_67;
              MR_Word Var_68;
              MR_Word Var_70;
              MR_String Message_100;
              MR_String ErrorMsg_101;

              libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) " failed.\n");
              libs__file_util__maybe_flush_output_3_p_0(Verbose_12);
              mercury__io__error_message_2_p_0(Error5_31, &ErrorMsg_101);
              {
                Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (ErrorMsg_101));
                MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) ((MR_String) "\': "));
                MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_70));
              }
              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (DependencyFileName_14));
                MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_68));
              }
              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) ((MR_String) "\' as \140"));
                MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_67));
              }
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (TmpDependencyFileName_18));
                MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_65));
              }
              {
                Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) ((MR_String) "can\'t rename file \140"));
                MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_64));
              }
              mercury__string__append_list_2_p_0(Var_62, &Message_100);
              libs__file_util__report_error_3_p_0(Message_100);
            }
          }
          else
          {
            MR_Word Error4_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), RemoveResult_27, (MR_Integer) 0)));
            MR_String ErrorMsg_29;
            MR_Word Var_76;
            MR_Word Var_78;
            MR_Word Var_79;
            MR_Word Var_81;
            MR_String Message_99;

            libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) " failed.\n");
            libs__file_util__maybe_flush_output_3_p_0(Verbose_12);
            mercury__io__error_message_2_p_0(Error4_28, &ErrorMsg_29);
            {
              Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (ErrorMsg_29));
              MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) ((MR_String) "\': "));
              MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_81));
            }
            {
              Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (DependencyFileName_14));
              MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_79));
            }
            {
              Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) ((MR_String) "can\'t remove file \140"));
              MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_78));
            }
            mercury__string__append_list_2_p_0(Var_76, &Message_99);
            libs__file_util__report_error_3_p_0(Message_99);
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_MmakeRule_10;

    parse_tree__write_deps_file__construct_subdirs_shorthand_rule_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_String) wrapper_arg_1), &conv7_MmakeRule_10);
    *wrapper_arg_2 = ((MR_Box) (conv7_MmakeRule_10));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_MmakeRule_12;

    parse_tree__write_deps_file__gather_foreign_import_deps_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_String) wrapper_arg_1), &conv5_MmakeRule_12);
    *wrapper_arg_2 = ((MR_Box) (conv5_MmakeRule_12));
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv4_LambdaHeadVar__2_518;

    succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_d_file__751__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), &conv4_LambdaHeadVar__2_518);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_518));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__2_2;

    conv3_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_MmakeRule_12;

    parse_tree__write_deps_file__gather_nested_deps_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_String) wrapper_arg_1), &conv1_MmakeRule_12);
    *wrapper_arg_2 = ((MR_Box) (conv1_MmakeRule_12));
  }
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_IncludePath_6;

    conv0_IncludePath_6 = parse_tree__write_deps_file__foreign_include_file_path_name_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_IncludePath_6));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleAndImports_10,
  MR_Word AllDeps_11,
  MR_Word MaybeTransOptDeps_12,
  MR_Word STATE_VARIABLE_MmakeFile_0_196,
  MR_Word * STATE_VARIABLE_MmakeFile_197)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_708_708;
    MR_Word TypeCtorInfo_709_709;
    MR_Word TypeCtorInfo_711_711;
    MR_Word TypeCtorInfo_712_712;
    MR_Word TypeCtorInfo_724_724;
    MR_String SourceFileName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 0)));
    MR_Word SourceFileModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 1)));
    MR_Word ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 2)));
    MR_Word ParentDeps_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 4)));
    MR_Word IntDeps_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 5)));
    MR_Word ImpDeps_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 6)));
    MR_Word InclDeps_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 9)));
    MR_Word NestedDeps_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 10)));
    MR_Word FactDeps0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 11)));
    MR_Word ForeignImportModules0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 12)));
    MR_Word ForeignIncludeFilesCord_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 13)));
    MR_Word ContainsForeignCode_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 14)));
    MR_Word SrcItemBlocks_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 16)));
    MR_Word DirectIntItemBlocksCord_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 17)));
    MR_Word IndirectIntItemBlocksCord_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 18)));
    MR_Word OptItemBlocksCord_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 19)));
    MR_Word IntForOptItemBlocksCord_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 20)));
    MR_String ModuleNameString_42;
    MR_String Version_43;
    MR_String FullArch_44;
    MR_Word MmakeStartComment_45;
    MR_String ModuleMakeVarName_46;
    MR_Word LongDeps0_47;
    MR_Word ShortDeps0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 7)));
    MR_Word LongDeps_49;
    MR_Word ShortDeps1_50;
    MR_Word ShortDeps_51;
    MR_Word FactDeps_52;
    MR_String TransOptDateFileName_53;
    MR_String ErrFileName_65;
    MR_String OptDateFileName_66;
    MR_String CDateFileName_67;
    MR_String ObjFileName_68;
    MR_String JavaDateFileName_69;
    MR_String PicObjFileName_70;
    MR_String Int0FileName_71;
    MR_Word ParentDepsSourceGroups_75;
    MR_Word LongDepsSourceGroups_76;
    MR_Word ShortDepsSourceGroups_77;
    MR_Word ForeignIncludeFiles_78;
    MR_Word ForeignImportFileNames_79;
    MR_Word UseOptFiles_91;
    MR_Word Intermod_92;
    MR_Word IntermodDirs_93;
    MR_Word HighLevelCode_111;
    MR_Word CompilationTarget_112;
    MR_String CFileName_114;
    MR_String MhHeaderFileName_115;
    MR_String MihHeaderFileName_116;
    MR_Word MmakeRuleMhMihOnC_117;
    MR_String JavaFileName_118;
    MR_String ModuleDepFileName_119;
    MR_Word MmakeFragmentModuleDep_120;
    MR_String DateFileName_121;
    MR_String Date0FileName_122;
    MR_Word ParentDepDateFileNames_123;
    MR_Word ParentDepInt0FileNames_124;
    MR_Word LongDepInt3FileNames_125;
    MR_Word ShortDepInt3FileNames_126;
    MR_Word MmakeRuleParentDates_127;
    MR_Word ParentDepDate0FileNames_128;
    MR_Word MmakeRuleParentDate0s_129;
    MR_Word HaveMap_130;
    MR_String ModuleArg_131;
    MR_Word ForeignImportModules_133;
    MR_Word ForeignImports_175;
    MR_Word ForeignImportedModuleNames_178;
    MR_String IntFileName_185;
    MR_String Int2FileName_186;
    MR_String Int3FileName_187;
    MR_String OptFileName_188;
    MR_String TransOptFileName_189;
    MR_String Date3FileName_190;
    MR_Word MmakeRulesInstallShadows_191;
    MR_Word UseSubdirs_192;
    MR_Word STATE_VARIABLE_MmakeFile_201_201;
    MR_Word STATE_VARIABLE_MmakeFile_212_212;
    MR_Word Var_254;
    MR_Word Var_255;
    MR_Word Var_256;
    MR_Word Var_257;
    MR_Word Var_258;
    MR_Word STATE_VARIABLE_SourceGroups_261_261;
    MR_Word Var_262;
    MR_Word STATE_VARIABLE_SourceGroups_264_264;
    MR_Word STATE_VARIABLE_SourceGroups_277_277;
    MR_Word Var_278;
    MR_Word Var_279;
    MR_Word Var_280;
    MR_Word STATE_VARIABLE_SourceGroups_281_281;
    MR_Word Var_282;
    MR_Word Var_296;
    MR_Word STATE_VARIABLE_MmakeFile_323_323;
    MR_Word STATE_VARIABLE_MmakeFile_337_337;
    MR_Word STATE_VARIABLE_MmakeFile_347_347;
    MR_Word STATE_VARIABLE_MmakeFile_381_381;
    MR_Word STATE_VARIABLE_MmakeFile_391_391;
    MR_Word Var_403;
    MR_Word Var_404;
    MR_Word Var_406;
    MR_Word STATE_VARIABLE_MmakeFile_409_409;
    MR_String Var_414;
    MR_Word Var_418;
    MR_Word Var_421;
    MR_Word Var_424;
    MR_Word STATE_VARIABLE_MmakeFile_430_430;
    MR_Word Var_438;
    MR_Word Var_441;
    MR_Word Var_444;
    MR_Word Var_447;
    MR_Word Var_451;
    MR_Word Var_452;
    MR_Word Var_454;
    MR_Word Var_455;
    MR_Word Var_457;
    MR_Word Var_458;
    MR_Word Var_459;
    MR_Word Var_461;
    MR_Word Var_462;
    MR_Word Var_464;
    MR_Word Var_465;
    MR_Word Var_467;
    MR_Word STATE_VARIABLE_MmakeFile_470_470;
    MR_Word Var_472;
    MR_Word Var_476;
    MR_Word Var_477;
    MR_Word Var_479;
    MR_Word Var_481;
    MR_Word Var_482;
    MR_Word Var_483;
    MR_Word Var_485;
    MR_Word Var_486;
    MR_Word Var_488;
    MR_Word STATE_VARIABLE_MmakeFile_491_491;
    MR_Word Var_516;
    MR_Word STATE_VARIABLE_MmakeFile_533_533;
    MR_Word Var_552;
    MR_Word Var_555;
    MR_Word Var_557;
    MR_String Var_558;
    MR_Word Var_560;
    MR_Word Var_561;
    MR_Word Var_564;
    MR_Word Var_566;
    MR_String Var_567;
    MR_Word Var_569;
    MR_Word Var_570;
    MR_Word Var_575;
    MR_String Var_576;
    MR_Word Var_578;
    MR_Word Var_579;
    MR_Word Var_582;
    MR_Word Var_584;
    MR_String Var_585;
    MR_Word Var_587;
    MR_Word Var_588;
    MR_Word Var_591;
    MR_Word Var_593;
    MR_String Var_594;
    MR_Word Var_596;
    MR_Word Var_597;
    MR_Word Var_600;
    MR_Word Var_602;
    MR_String Var_603;
    MR_Word STATE_VARIABLE_MmakeFile_606_606;
    MR_Word STATE_VARIABLE_MmakeFile_622_622;
    MR_Word TargetGroup_698;
    MR_Word TargetGroups_699;
    MR_Word _ModuleNameContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 3)));
    MR_Word _Children_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 8)));
    MR_Word _ContainsForeignExport_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 15)));
    MR_Word _ModuleVersionNumbersCord_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 21)));
    MR_Word _Specs_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 22)));
    MR_Word _Error_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 23)));
    MR_Word _Timestamps_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 24)));
    MR_Word _HasMain_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 25)));
    MR_String _Dir_41 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleAndImports_10, (MR_Integer) 26)));
    MR_String SourceFileBase_64;
    MR_String Var_745;

    ModuleNameString_42 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_17);
    mercury__library__version_2_p_0(&Version_43, &FullArch_44);
    {
      MmakeStartComment_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MmakeStartComment_45, 0) = ((MR_Box) ((MR_String) "module dependencies"));
      MR_hl_field(MR_mktag(0), MmakeStartComment_45, 1) = ((MR_Box) (ModuleNameString_42));
      MR_hl_field(MR_mktag(0), MmakeStartComment_45, 2) = ((MR_Box) (SourceFileName_15));
      MR_hl_field(MR_mktag(0), MmakeStartComment_45, 3) = ((MR_Box) (Version_43));
      MR_hl_field(MR_mktag(0), MmakeStartComment_45, 4) = ((MR_Box) (FullArch_44));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeStartComment_45, STATE_VARIABLE_MmakeFile_0_196, &STATE_VARIABLE_MmakeFile_201_201);
    parse_tree__file_names__module_name_to_make_var_name_2_p_0(ModuleName_17, &ModuleMakeVarName_46);
    TypeCtorInfo_708_708 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    mercury__set__union_3_p_0(TypeCtorInfo_708_708, IntDeps_20, ImpDeps_21, &LongDeps0_47);
    mercury__set__delete_3_p_0(TypeCtorInfo_708_708, ((MR_Box) (ModuleName_17)), LongDeps0_47, &LongDeps_49);
    mercury__set__difference_3_p_0(TypeCtorInfo_708_708, ShortDeps0_48, LongDeps_49, &ShortDeps1_50);
    mercury__set__delete_3_p_0(TypeCtorInfo_708_708, ((MR_Box) (ModuleName_17)), ShortDeps1_50, &ShortDeps_51);
    TypeCtorInfo_709_709 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__sort_and_remove_dups_2_p_0(TypeCtorInfo_709_709, FactDeps0_26, &FactDeps_52);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".trans_opt_date", ModuleName_17, &TransOptDateFileName_53);
    if ((MaybeTransOptDeps_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      STATE_VARIABLE_MmakeFile_212_212 = STATE_VARIABLE_MmakeFile_201_201;
    else
    {
      MR_Word TransOptDeps0_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTransOptDeps_12, (MR_Integer) 0)));
      MR_Word TransOptDateDeps_55;
      MR_Word TransOptDateDepsFileNames_56;
      MR_Word MmakeRuleTransOpt_57;
      MR_Word Var_205;
      MR_Word Var_207;

      Var_205 = mercury__set__list_to_set_1_f_0(TypeCtorInfo_708_708, TransOptDeps0_54);
      mercury__set__intersect_3_p_0(TypeCtorInfo_708_708, Var_205, LongDeps_49, &TransOptDateDeps_55);
      Var_207 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_708_708, TransOptDateDeps_55);
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) ".trans_opt", Var_207, &TransOptDateDepsFileNames_56);
      {
        MmakeRuleTransOpt_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_57, 1) = ((MR_Box) ((MR_String) "trans_opt_deps"));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_57, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_57, 3) = ((MR_Box) (TransOptDateFileName_53));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_57, 4) = ((MR_Box) (TransOptDateDepsFileNames_56));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_57, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleTransOpt_57, STATE_VARIABLE_MmakeFile_201_201, &STATE_VARIABLE_MmakeFile_212_212);
    }
    succeeded = mercury__string__remove_suffix_3_p_0(SourceFileName_15, (MR_String) ".m", &SourceFileBase_64);
    if (succeeded)
    {
      ErrFileName_65 = mercury__string__f_43_43_2_f_0(SourceFileBase_64, (MR_String) ".err");
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/8", (MR_String) "source file name doesn\'t end in \140.m\'");
        return;
      }
    }
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".optdate", ModuleName_17, &OptDateFileName_66);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".c_date", ModuleName_17, &CDateFileName_67);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".\044O", ModuleName_17, &ObjFileName_68);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".java_date", ModuleName_17, &JavaDateFileName_69);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".pic_o", ModuleName_17, &PicObjFileName_70);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".int0", ModuleName_17, &Int0FileName_71);
    {
      Var_258 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_258, 0) = ((MR_Box) (JavaDateFileName_69));
      MR_hl_field(MR_mktag(1), Var_258, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_257, 0) = ((MR_Box) (CDateFileName_67));
      MR_hl_field(MR_mktag(1), Var_257, 1) = ((MR_Box) (Var_258));
    }
    {
      Var_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_256, 0) = ((MR_Box) (ErrFileName_65));
      MR_hl_field(MR_mktag(1), Var_256, 1) = ((MR_Box) (Var_257));
    }
    {
      Var_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_255, 0) = ((MR_Box) (TransOptDateFileName_53));
      MR_hl_field(MR_mktag(1), Var_255, 1) = ((MR_Box) (Var_256));
    }
    {
      Var_254 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_254, 0) = ((MR_Box) (OptDateFileName_66));
      MR_hl_field(MR_mktag(0), Var_254, 1) = ((MR_Box) (Var_255));
    }
    {
      TargetGroup_698 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TargetGroup_698, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), TargetGroup_698, 1) = ((MR_Box) (Var_254));
    }
    {
      TargetGroups_699 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TargetGroups_699, 0) = ((MR_Box) (TargetGroup_698));
      MR_hl_field(MR_mktag(0), TargetGroups_699, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_262 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(SourceFileName_15);
    {
      STATE_VARIABLE_SourceGroups_261_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_SourceGroups_261_261, 0) = ((MR_Box) (Var_262));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_SourceGroups_261_261, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_708_708, InclDeps_24);
    if (succeeded)
      STATE_VARIABLE_SourceGroups_264_264 = STATE_VARIABLE_SourceGroups_261_261;
    else
    {
      MR_Word Var_265;
      MR_Word Var_266;

      Var_266 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(Int0FileName_71);
      {
        Var_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_265, 0) = ((MR_Box) (Var_266));
        MR_hl_field(MR_mktag(1), Var_265, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      STATE_VARIABLE_SourceGroups_264_264 = mercury__list__f_43_43_2_f_0((MR_Word) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0, STATE_VARIABLE_SourceGroups_261_261, Var_265);
    }
    parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(Globals_9, (MR_String) "parent deps", (MR_String) ".int0", ParentDeps_19, &ParentDepsSourceGroups_75);
    parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(Globals_9, (MR_String) "long deps", (MR_String) ".int", LongDeps_49, &LongDepsSourceGroups_76);
    parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(Globals_9, (MR_String) "short deps", (MR_String) ".int2", ShortDeps_51, &ShortDepsSourceGroups_77);
    TypeCtorInfo_711_711 = (MR_Word) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0;
    Var_279 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_711_711, LongDepsSourceGroups_76, ShortDepsSourceGroups_77);
    Var_278 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_711_711, ParentDepsSourceGroups_75, Var_279);
    STATE_VARIABLE_SourceGroups_277_277 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_711_711, STATE_VARIABLE_SourceGroups_264_264, Var_278);
    TypeCtorInfo_712_712 = (MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0;
    ForeignIncludeFiles_78 = mercury__cord__list_1_f_0(TypeCtorInfo_712_712, ForeignIncludeFilesCord_28);
    {
      Var_280 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_280, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_280, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_280, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_280, 3) = ((MR_Box) (SourceFileName_15));
    }
    ForeignImportFileNames_79 = mercury__list__map_2_f_0(TypeCtorInfo_712_712, TypeCtorInfo_709_709, Var_280, ForeignIncludeFiles_78);
    Var_282 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "foreign imports", ForeignImportFileNames_79);
    STATE_VARIABLE_SourceGroups_281_281 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_711_711, STATE_VARIABLE_SourceGroups_277_277, Var_282);
    Var_296 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    if ((FactDeps_52 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word MmakeRuleDateFileDeps_83;

      {
        MmakeRuleDateFileDeps_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_83, 1) = ((MR_Box) ((MR_String) "date_file_deps"));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_83, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_83, 3) = ((MR_Box) (TargetGroups_699));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_83, 4) = ((MR_Box) (STATE_VARIABLE_SourceGroups_281_281));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_83, 5) = ((MR_Box) (Var_296));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleDateFileDeps_83, STATE_VARIABLE_MmakeFile_212_212, &STATE_VARIABLE_MmakeFile_323_323);
    }
    else
    {
      MR_Word MmakeVarFactTables_60;
      MR_Word MmakeVarFactTablesOs_61;
      MR_Word MmakeVarFactTablesCs_62;
      MR_Word MmakeVarsFactTables_63;
      MR_Word FactTableSourceGroup_82;
      MR_Word MmakeRuleFactOs_86;
      MR_Word MmakeRuleFactCs_87;
      MR_Word MmakeRulesFactOsCs_88;
      MR_String Var_213;
      MR_Word STATE_VARIABLE_MmakeFile_215_215;
      MR_String Var_216;
      MR_String Var_218;
      MR_String Var_220;
      MR_String Var_222;
      MR_String Var_224;
      MR_String Var_226;
      MR_Word Var_228;
      MR_Word Var_285;
      MR_String Var_286;
      MR_String Var_288;
      MR_Word Var_292;
      MR_String Var_300;
      MR_String Var_302;
      MR_Word Var_304;
      MR_String Var_305;
      MR_String Var_307;
      MR_Word Var_309;
      MR_String Var_314;
      MR_String Var_316;
      MR_Word Var_318;
      MR_Word Var_321;
      MR_Word MmakeRuleDateFileDeps_746;
      MR_Word STATE_VARIABLE_MmakeFile_230_747;
      MR_Word STATE_VARIABLE_SourceGroups_291_748;
      MR_Word STATE_VARIABLE_MmakeFile_297_749;

      Var_213 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_46, (MR_String) ".fact_tables");
      {
        MmakeVarFactTables_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeVarFactTables_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeVarFactTables_60, 1) = ((MR_Box) (Var_213));
        MR_hl_field(MR_mktag(3), MmakeVarFactTables_60, 2) = ((MR_Box) (FactDeps_52));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarFactTables_60, STATE_VARIABLE_MmakeFile_212_212, &STATE_VARIABLE_MmakeFile_215_215);
      Var_216 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_46, (MR_String) ".fact_tables.os");
      Var_220 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_46, (MR_String) ".fact_tables:%=\044(os_subdir)%.\044O)");
      Var_218 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_220);
      {
        MmakeVarFactTablesOs_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), MmakeVarFactTablesOs_61, 0) = ((MR_Box) (Var_216));
        MR_hl_field(MR_mktag(2), MmakeVarFactTablesOs_61, 1) = ((MR_Box) (Var_218));
      }
      Var_222 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_46, (MR_String) ".fact_tables.cs");
      Var_226 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_46, (MR_String) ".fact_tables:%=\044(cs_subdir)%.c)");
      Var_224 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_226);
      {
        MmakeVarFactTablesCs_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), MmakeVarFactTablesCs_62, 0) = ((MR_Box) (Var_222));
        MR_hl_field(MR_mktag(2), MmakeVarFactTablesCs_62, 1) = ((MR_Box) (Var_224));
      }
      {
        Var_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_228, 0) = ((MR_Box) (MmakeVarFactTablesCs_62));
        MR_hl_field(MR_mktag(1), Var_228, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MmakeVarsFactTables_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MmakeVarsFactTables_63, 0) = ((MR_Box) (MmakeVarFactTablesOs_61));
        MR_hl_field(MR_mktag(1), MmakeVarsFactTables_63, 1) = ((MR_Box) (Var_228));
      }
      libs__mmakefiles__add_mmake_entries_3_p_0(MmakeVarsFactTables_63, STATE_VARIABLE_MmakeFile_215_215, &STATE_VARIABLE_MmakeFile_230_747);
      Var_288 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_46, (MR_String) ".fact_tables)");
      Var_286 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_288);
      {
        Var_285 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_285, 0) = ((MR_Box) (Var_286));
        MR_hl_field(MR_mktag(0), Var_285, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        FactTableSourceGroup_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FactTableSourceGroup_82, 0) = ((MR_Box) ((MR_String) "fact tables"));
        MR_hl_field(MR_mktag(0), FactTableSourceGroup_82, 1) = ((MR_Box) (Var_285));
      }
      {
        Var_292 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_292, 0) = ((MR_Box) (FactTableSourceGroup_82));
        MR_hl_field(MR_mktag(1), Var_292, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      STATE_VARIABLE_SourceGroups_291_748 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_711_711, STATE_VARIABLE_SourceGroups_281_281, Var_292);
      {
        MmakeRuleDateFileDeps_746 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_746, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_746, 1) = ((MR_Box) ((MR_String) "date_file_deps"));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_746, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_746, 3) = ((MR_Box) (TargetGroups_699));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_746, 4) = ((MR_Box) (STATE_VARIABLE_SourceGroups_291_748));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_746, 5) = ((MR_Box) (Var_296));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleDateFileDeps_746, STATE_VARIABLE_MmakeFile_230_747, &STATE_VARIABLE_MmakeFile_297_749);
      Var_302 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_46, (MR_String) ".fact_tables.os)");
      Var_300 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_302);
      Var_307 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_46, (MR_String) ".fact_tables)");
      Var_305 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_307);
      {
        Var_309 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_309, 0) = ((MR_Box) (SourceFileName_15));
        MR_hl_field(MR_mktag(1), Var_309, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_304 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_304, 0) = ((MR_Box) (Var_305));
        MR_hl_field(MR_mktag(1), Var_304, 1) = ((MR_Box) (Var_309));
      }
      {
        MmakeRuleFactOs_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleFactOs_86, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleFactOs_86, 1) = ((MR_Box) ((MR_String) "fact_table_os"));
        MR_hl_field(MR_mktag(3), MmakeRuleFactOs_86, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeRuleFactOs_86, 3) = ((MR_Box) (Var_300));
        MR_hl_field(MR_mktag(3), MmakeRuleFactOs_86, 4) = ((MR_Box) (Var_304));
        MR_hl_field(MR_mktag(3), MmakeRuleFactOs_86, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      Var_316 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_46, (MR_String) ".fact_tables.cs)");
      Var_314 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_316);
      {
        Var_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_318, 0) = ((MR_Box) (ObjFileName_68));
        MR_hl_field(MR_mktag(1), Var_318, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MmakeRuleFactCs_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleFactCs_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleFactCs_87, 1) = ((MR_Box) ((MR_String) "fact_table_cs"));
        MR_hl_field(MR_mktag(3), MmakeRuleFactCs_87, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeRuleFactCs_87, 3) = ((MR_Box) (Var_314));
        MR_hl_field(MR_mktag(3), MmakeRuleFactCs_87, 4) = ((MR_Box) (Var_318));
        MR_hl_field(MR_mktag(3), MmakeRuleFactCs_87, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_321 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_321, 0) = ((MR_Box) (MmakeRuleFactCs_87));
        MR_hl_field(MR_mktag(1), Var_321, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        MmakeRulesFactOsCs_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MmakeRulesFactOsCs_88, 0) = ((MR_Box) (MmakeRuleFactOs_86));
        MR_hl_field(MR_mktag(1), MmakeRulesFactOsCs_88, 1) = ((MR_Box) (Var_321));
      }
      libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesFactOsCs_88, STATE_VARIABLE_MmakeFile_297_749, &STATE_VARIABLE_MmakeFile_323_323);
    }
    succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_708_708, NestedDeps_25);
    if (succeeded)
      STATE_VARIABLE_MmakeFile_337_337 = STATE_VARIABLE_MmakeFile_323_323;
    else
    {
      MR_Word MmakeRulesNestedDeps_90;
      MR_Word Var_334;
      MR_Word Var_336;
      MR_Box conv2_STATE_VARIABLE_IO_335_335;

      Var_336 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_708_708, NestedDeps_25);
      {
        Var_334 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_334, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_334, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_2));
        MR_hl_field(MR_mktag(0), Var_334, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_334, 3) = ((MR_Box) (Globals_9));
        MR_hl_field(MR_mktag(0), Var_334, 4) = ((MR_Box) (ModuleName_17));
        MR_hl_field(MR_mktag(0), Var_334, 5) = ((MR_Box) (Var_336));
      }
      mercury__list__map_foldl_5_p_2(TypeCtorInfo_709_709, (MR_Word) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_334, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[11]), &MmakeRulesNestedDeps_90, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_335_335);
      libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesNestedDeps_90, STATE_VARIABLE_MmakeFile_323_323, &STATE_VARIABLE_MmakeFile_337_337);
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 335, &UseOptFiles_91);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 333, &Intermod_92);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 655, &IntermodDirs_93);
    switch (Intermod_92) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_MmakeFile_347_347 = STATE_VARIABLE_MmakeFile_337_337;
        break;
      case (MR_Integer) 1:
        {
          MR_Word AllDepsFileNames_94;
          MR_Word MmakeRuleMhDeps_95;
          MR_Word Var_342;

          Var_342 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_708_708, AllDeps_11);
          parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) ".mh", Var_342, &AllDepsFileNames_94);
          {
            MmakeRuleMhDeps_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_95, 1) = ((MR_Box) ((MR_String) "machine_dependent_header_deps"));
            MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_95, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_95, 3) = ((MR_Box) (ObjFileName_68));
            MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_95, 4) = ((MR_Box) (AllDepsFileNames_94));
            MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_95, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleMhDeps_95, STATE_VARIABLE_MmakeFile_337_337, &STATE_VARIABLE_MmakeFile_347_347);
        }
        break;
    }
    succeeded = (Intermod_92 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (UseOptFiles_91 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word TransOpt_98;
      MR_Word UseTransOpt_99;
      MR_Word BuildOptFiles_100;
      MR_Word OptDeps_101;
      MR_Word MaybeTransOptDeps1_103;
      MR_Word OptInt0Deps_104;
      MR_Word OptDepsFileNames_105;
      MR_Word OptInt0DepsFileNames_106;
      MR_Word MmakeRuleDateOptInt0Deps_107;
      MR_Word Var_361;
      MR_Word Var_366;
      MR_Word Var_370;
      MR_Word STATE_VARIABLE_MmakeFile_372_372;
      MR_Word Targets_702;

      {
        Targets_702 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Targets_702, 0) = ((MR_Box) (TransOptDateFileName_53));
        MR_hl_field(MR_mktag(0), Targets_702, 1) = ((MR_Box) (Var_256));
      }
      libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 337, &TransOpt_98);
      libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 336, &UseTransOpt_99);
      mercury__bool__not_2_p_0(UseTransOpt_99, &BuildOptFiles_100);
      succeeded = (TransOpt_98 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (UseTransOpt_99 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word TransOptDeps1_102;
        MR_Word Var_354;
        MR_Word Var_356;

        Var_356 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_708_708, LongDeps_49);
        {
          Var_354 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_354, 0) = ((MR_Box) (ModuleName_17));
          MR_hl_field(MR_mktag(1), Var_354, 1) = ((MR_Box) (Var_356));
        }
        parse_tree__write_deps_file__get_both_opt_deps_8_p_0(Globals_9, BuildOptFiles_100, IntermodDirs_93, Var_354, &OptDeps_101, &TransOptDeps1_102);
        {
          MaybeTransOptDeps1_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTransOptDeps1_103, 0) = ((MR_Box) (TransOptDeps1_102));
        }
      }
      else
      {
        MR_Word Var_358;
        MR_Word Var_360;

        Var_360 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_708_708, LongDeps_49);
        {
          Var_358 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_358, 0) = ((MR_Box) (ModuleName_17));
          MR_hl_field(MR_mktag(1), Var_358, 1) = ((MR_Box) (Var_360));
        }
        parse_tree__write_deps_file__get_opt_deps_8_p_0(Globals_9, BuildOptFiles_100, IntermodDirs_93, (MR_String) ".opt", Var_358, &OptDeps_101);
        MaybeTransOptDeps1_103 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
      Var_361 = mercury__list__map_2_f_0(TypeCtorInfo_708_708, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[5], OptDeps_101);
      OptInt0Deps_104 = mercury__set__union_list_1_f_0(TypeCtorInfo_708_708, Var_361);
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) ".opt", OptDeps_101, &OptDepsFileNames_105);
      Var_366 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_708_708, OptInt0Deps_104);
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) ".int0", Var_366, &OptInt0DepsFileNames_106);
      Var_370 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_709_709, OptDepsFileNames_105, OptInt0DepsFileNames_106);
      {
        MmakeRuleDateOptInt0Deps_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_107, 1) = ((MR_Box) ((MR_String) "dates_on_opts_and_int0s"));
        MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_107, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_107, 3) = ((MR_Box) (Targets_702));
        MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_107, 4) = ((MR_Box) (Var_370));
        MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_107, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleDateOptInt0Deps_107, STATE_VARIABLE_MmakeFile_347_347, &STATE_VARIABLE_MmakeFile_372_372);
      if ((MaybeTransOptDeps1_103 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        STATE_VARIABLE_MmakeFile_381_381 = STATE_VARIABLE_MmakeFile_372_372;
      else
      {
        MR_Word TransOptDeps2_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeTransOptDeps1_103, (MR_Integer) 0)));
        MR_Word TransOptDepsOptFileNames_109;
        MR_Word MmakeRuleTransOptOpts_110;
        MR_Word Targets_703;

        {
          Targets_703 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Targets_703, 0) = ((MR_Box) (ErrFileName_65));
          MR_hl_field(MR_mktag(0), Targets_703, 1) = ((MR_Box) (Var_257));
        }
        parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) ".trans_opt", TransOptDeps2_108, &TransOptDepsOptFileNames_109);
        {
          MmakeRuleTransOptOpts_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_110, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_110, 1) = ((MR_Box) ((MR_String) "dates_on_trans_opts\'_opts"));
          MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_110, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_110, 3) = ((MR_Box) (Targets_703));
          MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_110, 4) = ((MR_Box) (TransOptDepsOptFileNames_109));
          MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_110, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleTransOptOpts_110, STATE_VARIABLE_MmakeFile_372_372, &STATE_VARIABLE_MmakeFile_381_381);
      }
    }
    else
      STATE_VARIABLE_MmakeFile_381_381 = STATE_VARIABLE_MmakeFile_347_347;
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 265, &HighLevelCode_111);
    libs__globals__get_target_2_p_0(Globals_9, &CompilationTarget_112);
    succeeded = (HighLevelCode_111 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (CompilationTarget_112 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word MmakeRuleObjOnMihs_113;
      MR_Word Var_383;
      MR_Word Var_386;
      MR_Word AllDepsFileNames_704;
      MR_Word Targets_705;

      {
        Var_383 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_383, 0) = ((MR_Box) (ObjFileName_68));
        MR_hl_field(MR_mktag(1), Var_383, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Targets_705 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Targets_705, 0) = ((MR_Box) (PicObjFileName_70));
        MR_hl_field(MR_mktag(0), Targets_705, 1) = ((MR_Box) (Var_383));
      }
      Var_386 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_708_708, AllDeps_11);
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) ".mih", Var_386, &AllDepsFileNames_704);
      {
        MmakeRuleObjOnMihs_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_113, 1) = ((MR_Box) ((MR_String) "objs_on_mihs"));
        MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_113, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_113, 3) = ((MR_Box) (Targets_705));
        MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_113, 4) = ((MR_Box) (AllDepsFileNames_704));
        MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_113, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleObjOnMihs_113, STATE_VARIABLE_MmakeFile_381_381, &STATE_VARIABLE_MmakeFile_391_391);
    }
    else
      STATE_VARIABLE_MmakeFile_391_391 = STATE_VARIABLE_MmakeFile_381_381;
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".c", ModuleName_17, &CFileName_114);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".mh", ModuleName_17, &MhHeaderFileName_115);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".mih", ModuleName_17, &MihHeaderFileName_116);
    {
      Var_404 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_404, 0) = ((MR_Box) (MihHeaderFileName_116));
      MR_hl_field(MR_mktag(1), Var_404, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_403 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_403, 0) = ((MR_Box) (MhHeaderFileName_115));
      MR_hl_field(MR_mktag(0), Var_403, 1) = ((MR_Box) (Var_404));
    }
    {
      Var_406 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_406, 0) = ((MR_Box) (CFileName_114));
      MR_hl_field(MR_mktag(1), Var_406, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MmakeRuleMhMihOnC_117 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_117, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_117, 1) = ((MR_Box) ((MR_String) "mh_and_mih_on_c"));
      MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_117, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_117, 3) = ((MR_Box) (Var_403));
      MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_117, 4) = ((MR_Box) (Var_406));
      MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_117, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleMhMihOnC_117, STATE_VARIABLE_MmakeFile_391_391, &STATE_VARIABLE_MmakeFile_409_409);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".java", ModuleName_17, &JavaFileName_118);
    Var_414 = make__make_module_dep_file_extension_0_f_0();
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, Var_414, ModuleName_17, &ModuleDepFileName_119);
    {
      Var_421 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_421, 0) = ((MR_Box) (JavaFileName_118));
      MR_hl_field(MR_mktag(1), Var_421, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_418 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_418, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_418, 1) = ((MR_Box) ((MR_String) "module_dep_on_java"));
      MR_hl_field(MR_mktag(3), Var_418, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_418, 3) = ((MR_Box) (ModuleDepFileName_119));
      MR_hl_field(MR_mktag(3), Var_418, 4) = ((MR_Box) (Var_421));
      MR_hl_field(MR_mktag(3), Var_418, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_424 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_424, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_424, 1) = ((MR_Box) ((MR_String) "module_dep_on_c"));
      MR_hl_field(MR_mktag(3), Var_424, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_424, 3) = ((MR_Box) (ModuleDepFileName_119));
      MR_hl_field(MR_mktag(3), Var_424, 4) = ((MR_Box) (Var_406));
      MR_hl_field(MR_mktag(3), Var_424, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MmakeFragmentModuleDep_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MmakeFragmentModuleDep_120, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
      MR_hl_field(MR_mktag(1), MmakeFragmentModuleDep_120, 1) = ((MR_Box) (Var_418));
      MR_hl_field(MR_mktag(1), MmakeFragmentModuleDep_120, 2) = ((MR_Box) (Var_424));
    }
    libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentModuleDep_120, STATE_VARIABLE_MmakeFile_409_409, &STATE_VARIABLE_MmakeFile_430_430);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".date", ModuleName_17, &DateFileName_121);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".date0", ModuleName_17, &Date0FileName_122);
    Var_438 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_708_708, ParentDeps_19);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) ".date", Var_438, &ParentDepDateFileNames_123);
    Var_441 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_708_708, ParentDeps_19);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) ".int0", Var_441, &ParentDepInt0FileNames_124);
    Var_444 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_708_708, LongDeps_49);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) ".int3", Var_444, &LongDepInt3FileNames_125);
    Var_447 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_708_708, ShortDeps_51);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) ".int3", Var_447, &ShortDepInt3FileNames_126);
    {
      Var_455 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_455, 0) = ((MR_Box) (Date0FileName_122));
      MR_hl_field(MR_mktag(1), Var_455, 1) = ((MR_Box) (ParentDepDateFileNames_123));
    }
    {
      Var_454 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_454, 0) = ((MR_Box) (DateFileName_121));
      MR_hl_field(MR_mktag(0), Var_454, 1) = ((MR_Box) (Var_455));
    }
    {
      Var_452 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_452, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), Var_452, 1) = ((MR_Box) (Var_454));
    }
    {
      Var_451 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_451, 0) = ((MR_Box) (Var_452));
      MR_hl_field(MR_mktag(0), Var_451, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    TypeCtorInfo_724_724 = (MR_Word) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0;
    Var_459 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(SourceFileName_15);
    {
      Var_458 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_458, 0) = ((MR_Box) (Var_459));
      MR_hl_field(MR_mktag(1), Var_458, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_462 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "parent dep int0", ParentDepInt0FileNames_124);
    Var_465 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "long dep int3s", LongDepInt3FileNames_125);
    Var_467 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "short dep int3s", ShortDepInt3FileNames_126);
    Var_464 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_724_724, Var_465, Var_467);
    Var_461 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_724_724, Var_462, Var_464);
    Var_457 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_724_724, Var_458, Var_461);
    {
      MmakeRuleParentDates_127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDates_127, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDates_127, 1) = ((MR_Box) ((MR_String) "self_and_parent_date_deps"));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDates_127, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDates_127, 3) = ((MR_Box) (Var_451));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDates_127, 4) = ((MR_Box) (Var_457));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDates_127, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleParentDates_127, STATE_VARIABLE_MmakeFile_430_430, &STATE_VARIABLE_MmakeFile_470_470);
    Var_472 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_708_708, ParentDeps_19);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) ".date0", Var_472, &ParentDepDate0FileNames_128);
    {
      Var_479 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_479, 0) = ((MR_Box) (Date0FileName_122));
      MR_hl_field(MR_mktag(0), Var_479, 1) = ((MR_Box) (ParentDepDate0FileNames_128));
    }
    {
      Var_477 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_477, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), Var_477, 1) = ((MR_Box) (Var_479));
    }
    {
      Var_476 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_476, 0) = ((MR_Box) (Var_477));
      MR_hl_field(MR_mktag(0), Var_476, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_483 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(SourceFileName_15);
    {
      Var_482 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_482, 0) = ((MR_Box) (Var_483));
      MR_hl_field(MR_mktag(1), Var_482, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_486 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "long dep int3s", LongDepInt3FileNames_125);
    Var_488 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "short dep int3s", ShortDepInt3FileNames_126);
    Var_485 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_724_724, Var_486, Var_488);
    Var_481 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_724_724, Var_482, Var_485);
    {
      MmakeRuleParentDate0s_129 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_129, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_129, 1) = ((MR_Box) ((MR_String) "self_and_parent_date0_deps"));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_129, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_129, 3) = ((MR_Box) (Var_476));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_129, 4) = ((MR_Box) (Var_481));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_129, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleParentDate0s_129, STATE_VARIABLE_MmakeFile_470_470, &STATE_VARIABLE_MmakeFile_491_491);
    parse_tree__source_file_map__have_source_file_map_3_p_0(&HaveMap_130);
    switch (HaveMap_130) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ModuleArg_131 = SourceFileName_15;
        break;
      case (MR_Integer) 1:
        parse_tree__file_names__module_name_to_file_name_stem_2_p_0(SourceFileModuleName_16, &ModuleArg_131);
        break;
    }
    switch (MR_tag((MR_Word) ContainsForeignCode_29)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ContainsForeignCode_29)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ForeignImportModules_133 = ForeignImportModules0_27;
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeInfo_726_726;
              MR_Word SrcForeignImportModules_135;
              MR_Word IntItemBlocksCord_138;
              MR_Word IntForeignImportModules_140;
              MR_Word OptForeignImportModules_144;
              MR_Word IntForOptForeignImportModules_148;
              MR_Word Var_493;
              MR_Word Var_494;
              MR_Word Var_495;
              MR_Word _SrcLangSet_134;
              MR_Word Var_136;
              MR_Word Var_137;
              MR_Word _IntLangSet_139;
              MR_Word Var_141;
              MR_Word Var_142;
              MR_Word _OptLangSet_143;
              MR_Word Var_145;
              MR_Word Var_146;
              MR_Word _IntForOptLangSet_147;
              MR_Word Var_149;
              MR_Word Var_150;
              MR_Word C0_151;
              MR_Word CSharp0_152;
              MR_Word Java0_153;
              MR_Word Erlang0_154;

              parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0, Globals_9, SrcItemBlocks_31, &_SrcLangSet_134, &SrcForeignImportModules_135, &Var_136, &Var_137);
              TypeInfo_726_726 = (MR_Word) &parse_tree__write_deps_file_scalar_common_1[1];
              IntItemBlocksCord_138 = mercury__cord__f_43_43_2_f_0(TypeInfo_726_726, DirectIntItemBlocksCord_32, IndirectIntItemBlocksCord_33);
              Var_493 = mercury__cord__list_1_f_0(TypeInfo_726_726, IntItemBlocksCord_138);
              parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0, Globals_9, Var_493, &_IntLangSet_139, &IntForeignImportModules_140, &Var_141, &Var_142);
              Var_494 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[2], OptItemBlocksCord_34);
              parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0, Globals_9, Var_494, &_OptLangSet_143, &OptForeignImportModules_144, &Var_145, &Var_146);
              Var_495 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[3], IntForOptItemBlocksCord_35);
              parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0, Globals_9, Var_495, &_IntForOptLangSet_147, &IntForOptForeignImportModules_148, &Var_149, &Var_150);
              C0_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignImportModules0_27, (MR_Integer) 0)));
              CSharp0_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignImportModules0_27, (MR_Integer) 1)));
              Java0_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignImportModules0_27, (MR_Integer) 2)));
              Erlang0_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ForeignImportModules0_27, (MR_Integer) 3)));
              succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_708_708, C0_151);
              if (succeeded)
              {
                succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_708_708, CSharp0_152);
                if (succeeded)
                {
                  succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_708_708, Java0_153);
                  if (succeeded)
                    succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_708_708, Erlang0_154);
                }
              }
              if (succeeded)
              {
                MR_Word SrcC_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), SrcForeignImportModules_135, (MR_Integer) 0)));
                MR_Word SrcCSharp_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), SrcForeignImportModules_135, (MR_Integer) 1)));
                MR_Word SrcJava_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), SrcForeignImportModules_135, (MR_Integer) 2)));
                MR_Word SrcErlang_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), SrcForeignImportModules_135, (MR_Integer) 3)));
                MR_Word IntC_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntForeignImportModules_140, (MR_Integer) 0)));
                MR_Word IntCSharp_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntForeignImportModules_140, (MR_Integer) 1)));
                MR_Word IntJava_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntForeignImportModules_140, (MR_Integer) 2)));
                MR_Word IntErlang_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntForeignImportModules_140, (MR_Integer) 3)));
                MR_Word OptC_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptForeignImportModules_144, (MR_Integer) 0)));
                MR_Word OptCSharp_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptForeignImportModules_144, (MR_Integer) 1)));
                MR_Word OptJava_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptForeignImportModules_144, (MR_Integer) 2)));
                MR_Word OptErlang_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptForeignImportModules_144, (MR_Integer) 3)));
                MR_Word IntForOptC_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntForOptForeignImportModules_148, (MR_Integer) 0)));
                MR_Word IntForOptCSharp_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntForOptForeignImportModules_148, (MR_Integer) 1)));
                MR_Word IntForOptJava_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntForOptForeignImportModules_148, (MR_Integer) 2)));
                MR_Word IntForOptErlang_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), IntForOptForeignImportModules_148, (MR_Integer) 3)));
                MR_Word C_171;
                MR_Word CSharp_172;
                MR_Word Java_173;
                MR_Word Erlang_174;
                MR_Word Var_496;
                MR_Word Var_497;
                MR_Word Var_498;
                MR_Word Var_499;
                MR_Word Var_501;
                MR_Word Var_502;
                MR_Word Var_503;
                MR_Word Var_504;
                MR_Word Var_506;
                MR_Word Var_507;
                MR_Word Var_508;
                MR_Word Var_509;
                MR_Word Var_511;
                MR_Word Var_512;
                MR_Word Var_513;
                MR_Word Var_514;

                {
                  Var_499 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_499, 0) = ((MR_Box) (IntForOptC_167));
                  MR_hl_field(MR_mktag(1), Var_499, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Var_498 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_498, 0) = ((MR_Box) (OptC_163));
                  MR_hl_field(MR_mktag(1), Var_498, 1) = ((MR_Box) (Var_499));
                }
                {
                  Var_497 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_497, 0) = ((MR_Box) (IntC_159));
                  MR_hl_field(MR_mktag(1), Var_497, 1) = ((MR_Box) (Var_498));
                }
                {
                  Var_496 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_496, 0) = ((MR_Box) (SrcC_155));
                  MR_hl_field(MR_mktag(1), Var_496, 1) = ((MR_Box) (Var_497));
                }
                C_171 = mercury__set__union_list_1_f_0(TypeCtorInfo_708_708, Var_496);
                {
                  Var_504 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_504, 0) = ((MR_Box) (IntForOptCSharp_168));
                  MR_hl_field(MR_mktag(1), Var_504, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Var_503 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_503, 0) = ((MR_Box) (OptCSharp_164));
                  MR_hl_field(MR_mktag(1), Var_503, 1) = ((MR_Box) (Var_504));
                }
                {
                  Var_502 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_502, 0) = ((MR_Box) (IntCSharp_160));
                  MR_hl_field(MR_mktag(1), Var_502, 1) = ((MR_Box) (Var_503));
                }
                {
                  Var_501 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_501, 0) = ((MR_Box) (SrcCSharp_156));
                  MR_hl_field(MR_mktag(1), Var_501, 1) = ((MR_Box) (Var_502));
                }
                CSharp_172 = mercury__set__union_list_1_f_0(TypeCtorInfo_708_708, Var_501);
                {
                  Var_509 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_509, 0) = ((MR_Box) (IntForOptJava_169));
                  MR_hl_field(MR_mktag(1), Var_509, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Var_508 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_508, 0) = ((MR_Box) (OptJava_165));
                  MR_hl_field(MR_mktag(1), Var_508, 1) = ((MR_Box) (Var_509));
                }
                {
                  Var_507 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_507, 0) = ((MR_Box) (IntJava_161));
                  MR_hl_field(MR_mktag(1), Var_507, 1) = ((MR_Box) (Var_508));
                }
                {
                  Var_506 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_506, 0) = ((MR_Box) (SrcJava_157));
                  MR_hl_field(MR_mktag(1), Var_506, 1) = ((MR_Box) (Var_507));
                }
                Java_173 = mercury__set__union_list_1_f_0(TypeCtorInfo_708_708, Var_506);
                {
                  Var_514 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_514, 0) = ((MR_Box) (IntForOptErlang_170));
                  MR_hl_field(MR_mktag(1), Var_514, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  Var_513 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_513, 0) = ((MR_Box) (OptErlang_166));
                  MR_hl_field(MR_mktag(1), Var_513, 1) = ((MR_Box) (Var_514));
                }
                {
                  Var_512 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_512, 0) = ((MR_Box) (IntErlang_162));
                  MR_hl_field(MR_mktag(1), Var_512, 1) = ((MR_Box) (Var_513));
                }
                {
                  Var_511 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_511, 0) = ((MR_Box) (SrcErlang_158));
                  MR_hl_field(MR_mktag(1), Var_511, 1) = ((MR_Box) (Var_512));
                }
                Erlang_174 = mercury__set__union_list_1_f_0(TypeCtorInfo_708_708, Var_511);
                {
                  ForeignImportModules_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ForeignImportModules_133, 0) = ((MR_Box) (C_171));
                  MR_hl_field(MR_mktag(0), ForeignImportModules_133, 1) = ((MR_Box) (CSharp_172));
                  MR_hl_field(MR_mktag(0), ForeignImportModules_133, 2) = ((MR_Box) (Java_173));
                  MR_hl_field(MR_mktag(0), ForeignImportModules_133, 3) = ((MR_Box) (Erlang_174));
                }
              }
              else
                ForeignImportModules_133 = ForeignImportModules0_27;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        ForeignImportModules_133 = ForeignImportModules0_27;
        break;
    }
    ForeignImports_175 = parse_tree__prog_data_foreign__get_all_foreign_import_module_infos_1_f_0(ForeignImportModules_133);
    {
      Var_516 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_516, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), Var_516, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_4));
      MR_hl_field(MR_mktag(0), Var_516, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_516, 3) = ((MR_Box) (SourceFileModuleName_16));
    }
    mercury__set__filter_map_3_p_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0, TypeCtorInfo_708_708, Var_516, ForeignImports_175, &ForeignImportedModuleNames_178);
    succeeded = mercury__set__is_empty_1_p_0(TypeCtorInfo_708_708, ForeignImportedModuleNames_178);
    if (succeeded)
      STATE_VARIABLE_MmakeFile_533_533 = STATE_VARIABLE_MmakeFile_491_491;
    else
    {
      MR_Word Target_179;
      MR_Word ForeignImportTargets_180;
      MR_String ForeignImportExt_181;
      MR_Word MmakeRulesForeignImports_184;
      MR_Word Var_530;
      MR_Word Var_532;
      MR_Box conv6_STATE_VARIABLE_IO_531_531;

      libs__globals__get_target_2_p_0(Globals_9, &Target_179);
      switch (Target_179) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_520;

            {
              Var_520 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_520, 0) = ((MR_Box) (PicObjFileName_70));
              MR_hl_field(MR_mktag(1), Var_520, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              ForeignImportTargets_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ForeignImportTargets_180, 0) = ((MR_Box) (ObjFileName_68));
              MR_hl_field(MR_mktag(1), ForeignImportTargets_180, 1) = ((MR_Box) (Var_520));
            }
            ForeignImportExt_181 = (MR_String) ".mh";
          }
          break;
        case (MR_Integer) 1:
          {
            ForeignImportTargets_180 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            ForeignImportExt_181 = (MR_String) ".cs";
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String BeamFileName_183;

            parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".beam", ModuleName_17, &BeamFileName_183);
            {
              ForeignImportTargets_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ForeignImportTargets_180, 0) = ((MR_Box) (BeamFileName_183));
              MR_hl_field(MR_mktag(1), ForeignImportTargets_180, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            ForeignImportExt_181 = (MR_String) ".hrl";
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ClassFileName_182;

            parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".class", ModuleName_17, &ClassFileName_182);
            {
              ForeignImportTargets_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ForeignImportTargets_180, 0) = ((MR_Box) (ClassFileName_182));
              MR_hl_field(MR_mktag(1), ForeignImportTargets_180, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            ForeignImportExt_181 = (MR_String) ".java";
          }
          break;
      }
      Var_532 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_708_708, ForeignImportedModuleNames_178);
      {
        Var_530 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_530, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[2]));
        MR_hl_field(MR_mktag(0), Var_530, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_5));
        MR_hl_field(MR_mktag(0), Var_530, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_530, 3) = ((MR_Box) (Globals_9));
        MR_hl_field(MR_mktag(0), Var_530, 4) = ((MR_Box) (ForeignImportExt_181));
        MR_hl_field(MR_mktag(0), Var_530, 5) = ((MR_Box) (Var_532));
      }
      mercury__list__map_foldl_5_p_2(TypeCtorInfo_709_709, (MR_Word) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_530, ForeignImportTargets_180, &MmakeRulesForeignImports_184, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_531_531);
      libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesForeignImports_184, STATE_VARIABLE_MmakeFile_491_491, &STATE_VARIABLE_MmakeFile_533_533);
    }
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".int", ModuleName_17, &IntFileName_185);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".int2", ModuleName_17, &Int2FileName_186);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".int3", ModuleName_17, &Int3FileName_187);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".opt", ModuleName_17, &OptFileName_188);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".trans_opt", ModuleName_17, &TransOptFileName_189);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".date3", ModuleName_17, &Date3FileName_190);
    {
      Var_555 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_555, 0) = ((MR_Box) (Date0FileName_122));
      MR_hl_field(MR_mktag(1), Var_555, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_558 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_557 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_557, 0) = ((MR_Box) (Var_558));
      MR_hl_field(MR_mktag(1), Var_557, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_552 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_552, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_552, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), Var_552, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_552, 3) = ((MR_Box) (Int0FileName_71));
      MR_hl_field(MR_mktag(3), Var_552, 4) = ((MR_Box) (Var_555));
      MR_hl_field(MR_mktag(3), Var_552, 5) = ((MR_Box) (Var_557));
    }
    {
      Var_564 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_564, 0) = ((MR_Box) (DateFileName_121));
      MR_hl_field(MR_mktag(1), Var_564, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_567 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_566 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_566, 0) = ((MR_Box) (Var_567));
      MR_hl_field(MR_mktag(1), Var_566, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_561 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_561, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_561, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), Var_561, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_561, 3) = ((MR_Box) (IntFileName_185));
      MR_hl_field(MR_mktag(3), Var_561, 4) = ((MR_Box) (Var_564));
      MR_hl_field(MR_mktag(3), Var_561, 5) = ((MR_Box) (Var_566));
    }
    Var_576 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_575 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_575, 0) = ((MR_Box) (Var_576));
      MR_hl_field(MR_mktag(1), Var_575, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_570 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_570, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_570, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), Var_570, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_570, 3) = ((MR_Box) (Int2FileName_186));
      MR_hl_field(MR_mktag(3), Var_570, 4) = ((MR_Box) (Var_564));
      MR_hl_field(MR_mktag(3), Var_570, 5) = ((MR_Box) (Var_575));
    }
    {
      Var_582 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_582, 0) = ((MR_Box) (Date3FileName_190));
      MR_hl_field(MR_mktag(1), Var_582, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_585 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_584 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_584, 0) = ((MR_Box) (Var_585));
      MR_hl_field(MR_mktag(1), Var_584, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_579 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_579, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_579, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), Var_579, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_579, 3) = ((MR_Box) (Int3FileName_187));
      MR_hl_field(MR_mktag(3), Var_579, 4) = ((MR_Box) (Var_582));
      MR_hl_field(MR_mktag(3), Var_579, 5) = ((MR_Box) (Var_584));
    }
    {
      Var_591 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_591, 0) = ((MR_Box) (OptDateFileName_66));
      MR_hl_field(MR_mktag(1), Var_591, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_594 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_593 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_593, 0) = ((MR_Box) (Var_594));
      MR_hl_field(MR_mktag(1), Var_593, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_588 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_588, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_588, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), Var_588, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_588, 3) = ((MR_Box) (OptFileName_188));
      MR_hl_field(MR_mktag(3), Var_588, 4) = ((MR_Box) (Var_591));
      MR_hl_field(MR_mktag(3), Var_588, 5) = ((MR_Box) (Var_593));
    }
    {
      Var_600 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_600, 0) = ((MR_Box) (TransOptDateFileName_53));
      MR_hl_field(MR_mktag(1), Var_600, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    Var_603 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_602 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_602, 0) = ((MR_Box) (Var_603));
      MR_hl_field(MR_mktag(1), Var_602, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_597 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_597, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_597, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), Var_597, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_597, 3) = ((MR_Box) (TransOptFileName_189));
      MR_hl_field(MR_mktag(3), Var_597, 4) = ((MR_Box) (Var_600));
      MR_hl_field(MR_mktag(3), Var_597, 5) = ((MR_Box) (Var_602));
    }
    {
      Var_596 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_596, 0) = ((MR_Box) (Var_597));
      MR_hl_field(MR_mktag(1), Var_596, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Var_587 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_587, 0) = ((MR_Box) (Var_588));
      MR_hl_field(MR_mktag(1), Var_587, 1) = ((MR_Box) (Var_596));
    }
    {
      Var_578 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_578, 0) = ((MR_Box) (Var_579));
      MR_hl_field(MR_mktag(1), Var_578, 1) = ((MR_Box) (Var_587));
    }
    {
      Var_569 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_569, 0) = ((MR_Box) (Var_570));
      MR_hl_field(MR_mktag(1), Var_569, 1) = ((MR_Box) (Var_578));
    }
    {
      Var_560 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_560, 0) = ((MR_Box) (Var_561));
      MR_hl_field(MR_mktag(1), Var_560, 1) = ((MR_Box) (Var_569));
    }
    {
      MmakeRulesInstallShadows_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MmakeRulesInstallShadows_191, 0) = ((MR_Box) (Var_552));
      MR_hl_field(MR_mktag(1), MmakeRulesInstallShadows_191, 1) = ((MR_Box) (Var_560));
    }
    libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesInstallShadows_191, STATE_VARIABLE_MmakeFile_533_533, &STATE_VARIABLE_MmakeFile_606_606);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 652, &UseSubdirs_192);
    switch (UseSubdirs_192) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_MmakeFile_622_622 = STATE_VARIABLE_MmakeFile_606_606;
        break;
      case (MR_Integer) 1:
        {
          MR_Word MmakeRulesSubDirShorthand_194;
          MR_Word Var_620;
          MR_Box conv8_STATE_VARIABLE_IO_199;

          {
            Var_620 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_620, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), Var_620, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_6));
            MR_hl_field(MR_mktag(0), Var_620, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_620, 3) = ((MR_Box) (Globals_9));
            MR_hl_field(MR_mktag(0), Var_620, 4) = ((MR_Box) (ModuleName_17));
          }
          mercury__list__map_foldl_5_p_2(TypeCtorInfo_709_709, (MR_Word) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_620, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[17]), &MmakeRulesSubDirShorthand_194, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_199);
          libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesSubDirShorthand_194, STATE_VARIABLE_MmakeFile_606_606, &STATE_VARIABLE_MmakeFile_622_622);
        }
        break;
    }
    Var_745 = parse_tree__source_file_map__default_source_file_1_f_0(ModuleName_17);
    succeeded = (strcmp(SourceFileName_15, Var_745) == 0);
    if (succeeded)
      *STATE_VARIABLE_MmakeFile_197 = STATE_VARIABLE_MmakeFile_622_622;
    else
    {
      MR_Word MmakeRulesPattern_195;
      MR_Word Var_623;
      MR_Word Var_626;
      MR_Word Var_628;
      MR_String Var_629;
      MR_Word Var_632;
      MR_Word Var_633;
      MR_Word Var_638;
      MR_String Var_639;
      MR_Word Var_642;
      MR_Word Var_643;
      MR_Word Var_648;
      MR_String Var_649;
      MR_Word Var_652;
      MR_Word Var_653;
      MR_Word Var_658;
      MR_String Var_659;
      MR_Word Var_662;
      MR_Word Var_663;
      MR_Word Var_668;
      MR_String Var_669;
      MR_Word Var_672;
      MR_Word Var_673;
      MR_Word Var_678;
      MR_String Var_679;
      MR_String Var_681;
      MR_Word Var_684;
      MR_Word Var_685;
      MR_Word Var_690;
      MR_String Var_691;
      MR_String Var_693;

      {
        Var_626 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_626, 0) = ((MR_Box) (SourceFileName_15));
        MR_hl_field(MR_mktag(1), Var_626, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      Var_629 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCPI) \044(ALL_GRADEFLAGS) \044(ALL_MCPIFLAGS) ", ModuleArg_131);
      {
        Var_628 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_628, 0) = ((MR_Box) (Var_629));
        MR_hl_field(MR_mktag(1), Var_628, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_623 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_623, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_623, 1) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(3), Var_623, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_623, 3) = ((MR_Box) (Date0FileName_122));
        MR_hl_field(MR_mktag(3), Var_623, 4) = ((MR_Box) (Var_626));
        MR_hl_field(MR_mktag(3), Var_623, 5) = ((MR_Box) (Var_628));
      }
      Var_639 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCI) \044(ALL_GRADEFLAGS) \044(ALL_MCIFLAGS) ", ModuleArg_131);
      {
        Var_638 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_638, 0) = ((MR_Box) (Var_639));
        MR_hl_field(MR_mktag(1), Var_638, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_633 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_633, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_633, 1) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(3), Var_633, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_633, 3) = ((MR_Box) (DateFileName_121));
        MR_hl_field(MR_mktag(3), Var_633, 4) = ((MR_Box) (Var_626));
        MR_hl_field(MR_mktag(3), Var_633, 5) = ((MR_Box) (Var_638));
      }
      Var_649 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCSI) \044(ALL_GRADEFLAGS) \044(ALL_MCSIFLAGS) ", ModuleArg_131);
      {
        Var_648 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_648, 0) = ((MR_Box) (Var_649));
        MR_hl_field(MR_mktag(1), Var_648, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_643 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_643, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_643, 1) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(3), Var_643, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_643, 3) = ((MR_Box) (Date3FileName_190));
        MR_hl_field(MR_mktag(3), Var_643, 4) = ((MR_Box) (Var_626));
        MR_hl_field(MR_mktag(3), Var_643, 5) = ((MR_Box) (Var_648));
      }
      Var_659 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCOI) \044(ALL_GRADEFLAGS) \044(ALL_MCOIFLAGS) ", ModuleArg_131);
      {
        Var_658 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_658, 0) = ((MR_Box) (Var_659));
        MR_hl_field(MR_mktag(1), Var_658, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_653 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_653, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_653, 1) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(3), Var_653, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_653, 3) = ((MR_Box) (OptDateFileName_66));
        MR_hl_field(MR_mktag(3), Var_653, 4) = ((MR_Box) (Var_626));
        MR_hl_field(MR_mktag(3), Var_653, 5) = ((MR_Box) (Var_658));
      }
      Var_669 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCTOI) \044(ALL_GRADEFLAGS) \044(ALL_MCTOIFLAGS) ", ModuleArg_131);
      {
        Var_668 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_668, 0) = ((MR_Box) (Var_669));
        MR_hl_field(MR_mktag(1), Var_668, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_663 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_663, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_663, 1) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(3), Var_663, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_663, 3) = ((MR_Box) (TransOptDateFileName_53));
        MR_hl_field(MR_mktag(3), Var_663, 4) = ((MR_Box) (Var_626));
        MR_hl_field(MR_mktag(3), Var_663, 5) = ((MR_Box) (Var_668));
      }
      Var_681 = mercury__string__f_43_43_2_f_0(ModuleArg_131, (MR_String) " \044(ERR_REDIRECT)");
      Var_679 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) ", Var_681);
      {
        Var_678 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_678, 0) = ((MR_Box) (Var_679));
        MR_hl_field(MR_mktag(1), Var_678, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_673 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_673, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_673, 1) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(3), Var_673, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_673, 3) = ((MR_Box) (CDateFileName_67));
        MR_hl_field(MR_mktag(3), Var_673, 4) = ((MR_Box) (Var_626));
        MR_hl_field(MR_mktag(3), Var_673, 5) = ((MR_Box) (Var_678));
      }
      Var_693 = mercury__string__f_43_43_2_f_0(ModuleArg_131, (MR_String) " \044(ERR_REDIRECT)");
      Var_691 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) --java-only ", Var_693);
      {
        Var_690 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_690, 0) = ((MR_Box) (Var_691));
        MR_hl_field(MR_mktag(1), Var_690, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_685 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_685, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Var_685, 1) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(3), Var_685, 2) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_685, 3) = ((MR_Box) (JavaDateFileName_69));
        MR_hl_field(MR_mktag(3), Var_685, 4) = ((MR_Box) (Var_626));
        MR_hl_field(MR_mktag(3), Var_685, 5) = ((MR_Box) (Var_690));
      }
      {
        Var_684 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_684, 0) = ((MR_Box) (Var_685));
        MR_hl_field(MR_mktag(1), Var_684, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        Var_672 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_672, 0) = ((MR_Box) (Var_673));
        MR_hl_field(MR_mktag(1), Var_672, 1) = ((MR_Box) (Var_684));
      }
      {
        Var_662 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_662, 0) = ((MR_Box) (Var_663));
        MR_hl_field(MR_mktag(1), Var_662, 1) = ((MR_Box) (Var_672));
      }
      {
        Var_652 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_652, 0) = ((MR_Box) (Var_653));
        MR_hl_field(MR_mktag(1), Var_652, 1) = ((MR_Box) (Var_662));
      }
      {
        Var_642 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_642, 0) = ((MR_Box) (Var_643));
        MR_hl_field(MR_mktag(1), Var_642, 1) = ((MR_Box) (Var_652));
      }
      {
        Var_632 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_632, 0) = ((MR_Box) (Var_633));
        MR_hl_field(MR_mktag(1), Var_632, 1) = ((MR_Box) (Var_642));
      }
      {
        MmakeRulesPattern_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MmakeRulesPattern_195, 0) = ((MR_Box) (Var_623));
        MR_hl_field(MR_mktag(1), MmakeRulesPattern_195, 1) = ((MR_Box) (Var_632));
      }
      libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesPattern_195, STATE_VARIABLE_MmakeFile_622_622, STATE_VARIABLE_MmakeFile_197);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__get_both_opt_deps_8_p_0(
  MR_Word Globals_1,
  MR_Word BuildOptFiles_2,
  MR_Word IntermodDirs_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
  else
  {
    MR_Word Dep_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0)));
    MR_Word Deps_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1)));
    MR_Word STATE_VARIABLE_OptDeps_39_39;
    MR_Word STATE_VARIABLE_TransOptDeps_40_40;

    parse_tree__write_deps_file__get_both_opt_deps_8_p_0(Globals_1, BuildOptFiles_2, IntermodDirs_3, Deps_19, &STATE_VARIABLE_OptDeps_39_39, &STATE_VARIABLE_TransOptDeps_40_40);
    switch (BuildOptFiles_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String OptName_27;
          MR_Word MaybeOptDir_28;
          MR_String TransOptName_31;
          MR_Word MaybeTransOptDir_32;

          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_1, (MR_Integer) 1, (MR_String) ".opt", Dep_18, &OptName_27);
          libs__file_util__search_for_file_returning_dir_5_p_0(IntermodDirs_3, OptName_27, &MaybeOptDir_28);
          if (((MR_tag((MR_Word) MaybeOptDir_28)) == (MR_mktag((MR_Integer) 1))))
            *HeadVar__5_5 = STATE_VARIABLE_OptDeps_39_39;
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dep_18));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_39_39));
            }
          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_1, (MR_Integer) 1, (MR_String) ".trans_opt", Dep_18, &TransOptName_31);
          libs__file_util__search_for_file_returning_dir_5_p_0(IntermodDirs_3, TransOptName_31, &MaybeTransOptDir_32);
          if (((MR_tag((MR_Word) MaybeTransOptDir_32)) == (MR_mktag((MR_Integer) 1))))
            *HeadVar__6_6 = STATE_VARIABLE_TransOptDeps_40_40;
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dep_18));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_TransOptDeps_40_40));
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeFileName_23;

          parse_tree__find_module__search_for_module_source_7_p_0(Globals_1, IntermodDirs_3, IntermodDirs_3, Dep_18, &MaybeFileName_23);
          if (((MR_tag((MR_Word) MaybeFileName_23)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String OptName_56;
            MR_Word MaybeOptDir_57;
            MR_String TransOptName_58;
            MR_Word MaybeTransOptDir_59;

            parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_1, (MR_Integer) 1, (MR_String) ".opt", Dep_18, &OptName_56);
            libs__file_util__search_for_file_returning_dir_5_p_0(IntermodDirs_3, OptName_56, &MaybeOptDir_57);
            if (((MR_tag((MR_Word) MaybeOptDir_57)) == (MR_mktag((MR_Integer) 1))))
              *HeadVar__5_5 = STATE_VARIABLE_OptDeps_39_39;
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dep_18));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_39_39));
              }
            parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_1, (MR_Integer) 1, (MR_String) ".trans_opt", Dep_18, &TransOptName_58);
            libs__file_util__search_for_file_returning_dir_5_p_0(IntermodDirs_3, TransOptName_58, &MaybeTransOptDir_59);
            if (((MR_tag((MR_Word) MaybeTransOptDir_59)) == (MR_mktag((MR_Integer) 1))))
              *HeadVar__6_6 = STATE_VARIABLE_TransOptDeps_40_40;
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__6_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dep_18));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_TransOptDeps_40_40));
              }
          }
          else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dep_18));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_39_39));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dep_18));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_TransOptDeps_40_40));
            }
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__5_5;

    parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv0_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(
  MR_Word Globals_8,
  MR_String GroupName_9,
  MR_String Suffix_10,
  MR_Word Modules_11,
  MR_Word * Groups_12)
{
  {
    MR_Word TypeCtorInfo_25_25;
    MR_Word FileNames_14;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Box conv1_STATE_VARIABLE_IO_16;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Globals_8));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) (Suffix_10));
    }
    TypeCtorInfo_25_25 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    Var_18 = mercury__set__to_sorted_list_1_f_0(TypeCtorInfo_25_25, Modules_11);
    mercury__list__map_foldl_5_p_2(TypeCtorInfo_25_25, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_17, Var_18, &FileNames_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16);
    *Groups_12 = libs__mmakefiles__make_file_name_group_2_f_0(GroupName_9, FileNames_14);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__5_5;

    parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) wrapper_arg_1), &conv0_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(
  MR_Word Globals_7,
  MR_String Suffix_8,
  MR_Word Modules_9,
  MR_Word * FileNames_10)
{
  {
    MR_Word Var_14;
    MR_Box conv1_STATE_VARIABLE_IO_13;

    {
      Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Globals_7));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (Suffix_8));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, Var_14, Modules_9, FileNames_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13);
  }
}

void MR_CALL 
parse_tree__write_deps_file__get_opt_deps_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_String HeadVar__4_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word Dep_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0)));
    MR_Word Deps_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1)));
    MR_Word STATE_VARIABLE_OptDeps_35_35;

    parse_tree__write_deps_file__get_opt_deps_8_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, Deps_21, &STATE_VARIABLE_OptDeps_35_35);
    switch (HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String OptName_28;
          MR_Word MaybeOptDir_29;

          parse_tree__file_names__module_name_to_search_file_name_6_p_0(HeadVar__1_1, HeadVar__4_4, Dep_20, &OptName_28);
          libs__file_util__search_for_file_5_p_0(HeadVar__3_3, OptName_28, &MaybeOptDir_29);
          if (((MR_tag((MR_Word) MaybeOptDir_29)) == (MR_mktag((MR_Integer) 1))))
            *HeadVar__6_6 = STATE_VARIABLE_OptDeps_35_35;
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dep_20));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_35_35));
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Result1_24;

          parse_tree__find_module__search_for_module_source_7_p_0(HeadVar__1_1, HeadVar__3_3, HeadVar__3_3, Dep_20, &Result1_24);
          if (((MR_tag((MR_Word) Result1_24)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String OptName_43;
            MR_Word MaybeOptDir_44;

            parse_tree__file_names__module_name_to_search_file_name_6_p_0(HeadVar__1_1, HeadVar__4_4, Dep_20, &OptName_43);
            libs__file_util__search_for_file_5_p_0(HeadVar__3_3, OptName_43, &MaybeOptDir_44);
            if (((MR_tag((MR_Word) MaybeOptDir_44)) == (MR_mktag((MR_Integer) 1))))
              *HeadVar__6_6 = STATE_VARIABLE_OptDeps_35_35;
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__6_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dep_20));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_35_35));
              }
          }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dep_20));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_35_35));
            }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_mmake_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__write_deps_file____Compare____maybe_mmake_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module parse_tree.write_deps_file.
