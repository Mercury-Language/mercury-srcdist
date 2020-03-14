/*
** Automatically generated from `write_deps_file.m'
** by the Mercury compiler,
** version rotd-2020-03-14
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.mmakefiles.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.options_file.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"



struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s {
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__DepsMap_17;
  MR_bool parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded;
  jmp_buf parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__commit_0;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_351_351;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ChildrenMap_43;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_90;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_41;
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv1_Var_41;
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv0_Var_90;
};


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__write_deps_file__one_or_more__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__cord__pti_cord_1__plain_libs__mmakefiles__type_ctor_info_mmake_fragment_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__write_deps_file__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0;

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1229__1_5_p_0(
  MR_Word Globals_9,
  MR_Word LambdaHeadVar__1_132,
  MR_String * LambdaHeadVar__2_133);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1197__1_2_p_0(
  MR_Word DepsMap_12,
  MR_Word LambdaHeadVar__1_120);

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1124__1_4_p_0(
  MR_Word DepsGraph_8,
  MR_Word LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1095__1_2_p_0(
  MR_Word ModuleName_22,
  MR_Word LambdaHeadVar__1_49);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_d_file__700__1_3_p_0(
  MR_Word SourceFileModuleName_16,
  MR_Word LambdaHeadVar__1_471,
  MR_Word * LambdaHeadVar__2_472);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_d_file__686__1_2_p_0(
  MR_Word BackendLangs_137,
  MR_Word LambdaHeadVar__1_468);

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
parse_tree__write_deps_file__gather_fim_specs_in_parse_tree_plain_opt_3_p_0(
  MR_Word ParseTreePlainOpt_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_6,
  MR_Word * STATE_VARIABLE_FIMSpecs_7);

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_int_for_opt_spec_3_p_0(
  MR_Word IntForOptSpec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_12,
  MR_Word * STATE_VARIABLE_FIMSpecs_13);

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_parse_tree_int2_3_p_0(
  MR_Word ParseTreeInt2_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9);

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_parse_tree_int1_3_p_0(
  MR_Word ParseTreeInt1_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9);

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_indirect_int_spec_3_p_0(
  MR_Word IndirectIntSpec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_10,
  MR_Word * STATE_VARIABLE_FIMSpecs_11);

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_direct_int_spec_3_p_0(
  MR_Word DirectIntSpec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_10,
  MR_Word * STATE_VARIABLE_FIMSpecs_11);

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_ancestor_int_spec_3_p_0(
  MR_Word AncestorIntSpec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9);

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
  MR_Word STATE_VARIABLE_MmakeFile_0_64,
  MR_Word * STATE_VARIABLE_MmakeFile_65);

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
  MR_Word STATE_VARIABLE_MmakeFile_0_94,
  MR_Word * STATE_VARIABLE_MmakeFile_95);

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
parse_tree__write_deps_file__generate_d_file_8_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

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
  MR_Word STATE_VARIABLE_MmakeFile_0_160,
  MR_Word * STATE_VARIABLE_MmakeFile_161);

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


static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[115][2];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[14][3];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[3][10];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[11][6];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[4][5];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[1][1];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_7[1][9];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[2][7];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[2][4];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_10[1][8];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_11[1][11];




static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[115][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) ".java_date")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) ".dir/*.\044O")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) ".c_date")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) ".trans_opt_date")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) ".optdate")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) ".dll")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) ".class")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) ".java")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) ".pic_o")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) ".\044O")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) ".c")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "done")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "\t} || exit 1; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044(INSTALL_INT_DIR)\"/*.\044\044ext \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \"\044\044dir\" ] || \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \"\044\044dir\" || { \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "\tdir=\"\044(INSTALL_INT_DIR)/Mercury/\044\044{ext}s\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[18])))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044(INSTALL_GRADE_INT_DIR)\"/*.\044\044ext \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \"\044\044dir\" ] || \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \"\044\044dir\" || { \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "\tdir=\"\044(INSTALL_GRADE_INT_DIR)/Mercury/\044\044{ext}s\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INC_DIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[17])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) "} || exit 1")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "\t} && \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_INT_DIR)/Mercury/mihs; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_String) "\t{ [ -d \044(INSTALL_INT_DIR)/Mercury/mihs ] || \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_String) "\044(LN_S) .. \044(INSTALL_INT_DIR)/Mercury/mihs || { \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_String) "rm -rf \044(INSTALL_INT_DIR)/Mercury/mihs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[41])))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_String) "} || exit 1")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_GRADE_INC_SUBDIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_String) "\t} && \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \044(INSTALL_GRADE_INC_SUBDIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_String) "\t{ [ -d \044(INSTALL_GRADE_INC_SUBDIR) ] || \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[47])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_String) "\044(LN_S) .. \044(INSTALL_GRADE_INC_SUBDIR) || { \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_String) "rm -rf \044(INSTALL_GRADE_INC_SUBDIR)")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[49])))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'.")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option.")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[52])))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_String) "done")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[53])))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_GRADE_INC_DIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_String) ".all_trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 58 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[57])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_String) ".all_opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 60 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[59])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[58])))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_String) ".all_int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 62 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[61])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[60])))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_String) ".all_ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 64 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[63])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[62])))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_String) ".classes")),
    ((MR_Box) ((MR_String) ".classes"))
  },
  /* row 66 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[65])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[64])))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_String) ".javas")),
    ((MR_Box) ((MR_String) ".javas"))
  },
  /* row 68 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[67])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[66])))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_String) ".trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 70 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[69])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[68])))
  },
  /* row 71 */
  {
    ((MR_Box) ((MR_String) ".opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 72 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[71])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[70])))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_String) ".int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 74 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[73])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[72])))
  },
  /* row 75 */
  {
    ((MR_Box) ((MR_String) ".ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 76 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[75])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[74])))
  },
  /* row 77 */
  {
    ((MR_Box) ((MR_String) ".check")),
    ((MR_Box) ((MR_String) ".errs"))
  },
  /* row 78 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[77])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[76])))
  },
  /* row 79 */
  {
    ((MR_Box) ((MR_String) ".foreign_cs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 80 */
  {
    ((MR_Box) ((MR_String) ".errs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[79])))
  },
  /* row 81 */
  {
    ((MR_Box) ((MR_String) ".profs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[80])))
  },
  /* row 82 */
  {
    ((MR_Box) ((MR_String) ".javas")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[81])))
  },
  /* row 83 */
  {
    ((MR_Box) ((MR_String) ".useds")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[82])))
  },
  /* row 84 */
  {
    ((MR_Box) ((MR_String) ".java_dates")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[83])))
  },
  /* row 85 */
  {
    ((MR_Box) ((MR_String) ".c_dates")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[84])))
  },
  /* row 86 */
  {
    ((MR_Box) ((MR_String) ".all_pic_os")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[85])))
  },
  /* row 87 */
  {
    ((MR_Box) ((MR_String) ".all_os")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[86])))
  },
  /* row 88 */
  {
    ((MR_Box) ((MR_String) ".mihs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[87])))
  },
  /* row 89 */
  {
    ((MR_Box) ((MR_String) ".cs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[88])))
  },
  /* row 90 */
  {
    ((MR_Box) ((MR_String) ".dirs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[89])))
  },
  /* row 91 */
  {
    ((MR_Box) ((MR_String) ".classes")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 92 */
  {
    ((MR_Box) ((MR_String) ".foreign_dlls")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[91])))
  },
  /* row 93 */
  {
    ((MR_Box) ((MR_String) ".dlls")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[92])))
  },
  /* row 94 */
  {
    ((MR_Box) ((MR_String) ".all_mihs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[93])))
  },
  /* row 95 */
  {
    ((MR_Box) ((MR_String) ".all_mhs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[94])))
  },
  /* row 96 */
  {
    ((MR_Box) ((MR_String) ".module_deps")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[95])))
  },
  /* row 97 */
  {
    ((MR_Box) ((MR_String) ".ds")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[96])))
  },
  /* row 98 */
  {
    ((MR_Box) ((MR_String) ".imdgs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[97])))
  },
  /* row 99 */
  {
    ((MR_Box) ((MR_String) ".requests")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[98])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_String) ".analysiss")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[99])))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_String) ".trans_opts")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[100])))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_String) ".opts")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[101])))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_String) ".int3s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_String) ".all_int0s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_String) ".ints")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_String) ".trans_opt_dates")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[105])))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_String) ".optdates")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[106])))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_String) ".date3s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_String) ".date0s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[108])))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_String) ".dates")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE)")),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_String) "\044(EXT_FOR_SHARED_LIB)")),
    ((MR_Box) ((MR_String) "\044(A)"))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_String) "install_lib_dirs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_String) "install_grade_dirs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[14][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[3]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[5])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0])),
    ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[1])),
    ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[2])),
    ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[3])),
    ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[4])),
    ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[5])),
    ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[7])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[10])),
    ((MR_Box) (parse_tree__write_deps_file__write_module_scc_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[3][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
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
    ((MR_Box) ((MR_Integer) 7)),
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
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[11][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[4][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
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
    ((MR_Box) ((MR_Integer) 6)),
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
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[9])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".m"))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[9])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".err"))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_10[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
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
    ((MR_Box) ((MR_Integer) 8)),
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



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__write_deps_file__one_or_more__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__one_or_more__one_or_more__type_ctor_info_one_or_more_1,
  {
    (MR_TypeInfo) (&mercury__term__term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_one_or_more__ti_one_or_more_1term__type_ctor_info_context_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__write_deps_file__one_or_more__ti_one_or_more_1term__type_ctor_info_context_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__cord__pti_cord_1__plain_libs__mmakefiles__type_ctor_info_mmake_fragment_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_PseudoTypeInfo) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__write_deps_file__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__write_deps_file__list__ti_list_1builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_maybe_mmake_var_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0_10001)),
  ((MR_Box) (parse_tree__write_deps_file____Compare____maybe_mmake_var_0_0_10001)),
  (MR_String) "parse_tree.write_deps_file",
  (MR_String) "maybe_mmake_var",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__write_deps_file__pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1229__1_5_p_0(
  MR_Word Globals_9,
  MR_Word LambdaHeadVar__1_132,
  MR_String * LambdaHeadVar__2_133)
{
  {
    MR_String F0_46;
    MR_Word M_478 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_132, (MR_Integer) 0))));
    MR_String E_479 = ((MR_String) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_132, (MR_Integer) 1))));

    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 0, E_479, M_478, &F0_46);
    *LambdaHeadVar__2_133 = mercury__string__f_43_43_2_f_0((MR_String) "\044(os_subdir)", F0_46);
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1197__1_2_p_0(
  MR_Word DepsMap_12,
  MR_Word LambdaHeadVar__1_120)
{
  {
    MR_bool succeeded;
    MR_Word ModuleAndImports_32;
    MR_Word ChildrenMap_33;
    MR_Word Var_121;
    MR_Box conv0_Var_121;

    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_12, ((MR_Box) (LambdaHeadVar__1_120)), &conv0_Var_121);
    Var_121 = ((MR_Word) (conv0_Var_121));
    ModuleAndImports_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_121, (MR_Integer) 1))));
    parse_tree__module_imports__module_and_imports_get_children_map_2_p_0(ModuleAndImports_32, &ChildrenMap_33);
    succeeded = mercury__one_or_more_map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ChildrenMap_33);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1124__1_4_p_0(
  MR_Word DepsGraph_8,
  MR_Word LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17)
{
  {
    MR_Word Dep_14;
    MR_Word Var_18;
    MR_Box conv0_Dep_14;

    mercury__digraph__lookup_vertex_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DepsGraph_8, LambdaHeadVar__1_15, &conv0_Dep_14);
    Dep_14 = ((MR_Word) (conv0_Dep_14));
    Var_18 = mercury__term__context_init_0_f_0();
    mercury__one_or_more_map__add_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ((MR_Box) (Dep_14)), ((MR_Box) (Var_18)), LambdaHeadVar__2_16, LambdaHeadVar__3_17);
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1095__1_2_p_0(
  MR_Word ModuleName_22,
  MR_Word LambdaHeadVar__1_49)
{
  {
    MR_bool succeeded;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_22, LambdaHeadVar__1_49);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_d_file__700__1_3_p_0(
  MR_Word SourceFileModuleName_16,
  MR_Word LambdaHeadVar__1_471,
  MR_Word * LambdaHeadVar__2_472)
{
  {
    MR_bool succeeded;
    MR_String Var_473;

    *LambdaHeadVar__2_472 = parse_tree__prog_foreign__fim_spec_module_name_from_module_2_f_0(LambdaHeadVar__1_471, SourceFileModuleName_16);
    succeeded = ((MR_tag((MR_Word) *LambdaHeadVar__2_472)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_473 = ((MR_String) ((MR_hl_field(MR_mktag(0), *LambdaHeadVar__2_472, (MR_Integer) 0))));
      succeeded = (strcmp(Var_473, (MR_String) "mercury") == 0);
    }
    succeeded = !(succeeded);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_d_file__686__1_2_p_0(
  MR_Word BackendLangs_137,
  MR_Word LambdaHeadVar__1_468)
{
  {
    MR_bool succeeded;
    MR_Word Var_469 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_468, (MR_Integer) 0))) & (MR_Integer) 3);

    succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_469)), BackendLangs_137);
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[5]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[5]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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

    parse_tree__prog_out__write_sym_name_3_p_0(((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0(
  MR_Word Stream_5,
  MR_Word SCC0_6)
{
  {
    MR_Word SCC_8;

    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SCC0_6, &SCC_8);
    mercury__io__write_list_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Stream_5, SCC_8, (MR_String) "\n", (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[13]));
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
    MR_String SourceFileBase_11;

    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_4, ((MR_Box) (ModuleName_5)), &conv0_Deps_7);
    Deps_7 = ((MR_Word) (conv0_Deps_7));
    ModuleAndImports_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Deps_7, (MR_Integer) 1))));
    parse_tree__module_imports__module_and_imports_get_source_file_name_2_p_0(ModuleAndImports_9, &SourceFileName_10);
    succeeded = mercury__string__remove_suffix_3_p_0(SourceFileName_10, (MR_String) ".m", &SourceFileBase_11);
    if (succeeded)
      *FileName_6 = SourceFileBase_11;
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_deps_file.get_source_file\'/3", (MR_String) "source file name doesn\'t end in \140.m\'");
        return;
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
    MR_String Extension_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
    MR_String VarExtension_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));
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
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Source_17));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRule_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRule_18, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRule_18, 1) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(3), MmakeRule_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRule_18, 3) = ((MR_Box) (TargetName_16));
      MR_hl_field(MR_mktag(3), MmakeRule_18, 4) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(3), MmakeRule_18, 5) = ((MR_Box) ((MR_Unsigned) 0U));
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
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Target_14));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      *MmakeRule_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_19));
      MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ShorthandTarget_13));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Var_22));
      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
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
    MR_String IncludeFileName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), IncludeFile_5, (MR_Integer) 1))));

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

    parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
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
      Var_29 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (parse_tree__write_deps_file__gather_foreign_import_deps_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (Globals_8));
      MR_hl_field(MR_mktag(0), Var_29, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_29, 5) = ((MR_Box) (ForeignImportExt_9));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_29, ForeignImportedModuleNames_10, &ForeignImportedFileNames_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16);
    Var_18 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_deps_for_", ForeignImportExt_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      *MmakeRule_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ForeignImportTarget_11));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ForeignImportedFileNames_14));
      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
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

    parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
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
      Var_32 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (parse_tree__write_deps_file__gather_nested_deps_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (Globals_8));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_32, 5) = ((MR_Box) (Ext_11));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_32, NestedDeps_10, &NestedDepsFileNames_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_17);
    Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "nested_deps_for_", Ext_11);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      *MmakeRule_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_21));
      MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ExtName_14));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (NestedDepsFileNames_15));
      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_parse_tree_plain_opt_3_p_0(
  MR_Word ParseTreePlainOpt_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_6,
  MR_Word * STATE_VARIABLE_FIMSpecs_7)
{
  {
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreePlainOpt_4, (MR_Integer) 3))));

    mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_8, STATE_VARIABLE_FIMSpecs_0_6, STATE_VARIABLE_FIMSpecs_7);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_int_for_opt_spec_3_p_0(
  MR_Word IntForOptSpec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_12,
  MR_Word * STATE_VARIABLE_FIMSpecs_13)
{
  switch (MR_tag((MR_Word) IntForOptSpec_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ParseTreeInt0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IntForOptSpec_4, (MR_Integer) 0))));
        MR_Word IntFIMS_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 11))));
        MR_Word ImpFIMS_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 12))));
        MR_Word Var_24;
        MR_Word Var_25;
        MR_Word Var_26;

        {
          Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_26, 0) = ((MR_Box) (STATE_VARIABLE_FIMSpecs_0_12));
          MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ImpFIMS_22));
          MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (Var_26));
        }
        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (IntFIMS_21));
          MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (Var_25));
        }
        *STATE_VARIABLE_FIMSpecs_13 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_24);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParseTreeInt1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntForOptSpec_4, (MR_Integer) 0))));

        parse_tree__write_deps_file__gather_fim_specs_in_parse_tree_int1_3_p_0(ParseTreeInt1_8, STATE_VARIABLE_FIMSpecs_0_12, STATE_VARIABLE_FIMSpecs_13);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), IntForOptSpec_4, (MR_Integer) 0))));

        parse_tree__write_deps_file__gather_fim_specs_in_parse_tree_int2_3_p_0(ParseTreeInt2_10, STATE_VARIABLE_FIMSpecs_0_12, STATE_VARIABLE_FIMSpecs_13);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_parse_tree_int2_3_p_0(
  MR_Word ParseTreeInt2_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9)
{
  {
    MR_Word IntFIMS_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_4, (MR_Integer) 7))));
    MR_Word ImpFIMS_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_4, (MR_Integer) 8))));
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (STATE_VARIABLE_FIMSpecs_0_8));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (ImpFIMS_7));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_13));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (IntFIMS_6));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_12));
    }
    *STATE_VARIABLE_FIMSpecs_9 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_11);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_parse_tree_int1_3_p_0(
  MR_Word ParseTreeInt1_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9)
{
  {
    MR_Word IntFIMS_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_4, (MR_Integer) 9))));
    MR_Word ImpFIMS_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_4, (MR_Integer) 10))));
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;

    {
      Var_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_13, 0) = ((MR_Box) (STATE_VARIABLE_FIMSpecs_0_8));
      MR_hl_field(MR_mktag(1), Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (ImpFIMS_7));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (Var_13));
    }
    {
      Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (IntFIMS_6));
      MR_hl_field(MR_mktag(1), Var_11, 1) = ((MR_Box) (Var_12));
    }
    *STATE_VARIABLE_FIMSpecs_9 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_11);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_indirect_int_spec_3_p_0(
  MR_Word IndirectIntSpec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_10,
  MR_Word * STATE_VARIABLE_FIMSpecs_11)
{
  if (((MR_tag((MR_Word) IndirectIntSpec_4)) == (MR_Integer) 0))
  {
    MR_Word ParseTreeInt2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IndirectIntSpec_4, (MR_Integer) 0))));
    MR_Word IntFIMS_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_6, (MR_Integer) 7))));
    MR_Word ImpFIMS_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_6, (MR_Integer) 8))));
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (STATE_VARIABLE_FIMSpecs_0_10));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (ImpFIMS_18));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (IntFIMS_17));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_21));
    }
    *STATE_VARIABLE_FIMSpecs_11 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_20);
  }
  else
    *STATE_VARIABLE_FIMSpecs_11 = STATE_VARIABLE_FIMSpecs_0_10;
}

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_direct_int_spec_3_p_0(
  MR_Word DirectIntSpec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_10,
  MR_Word * STATE_VARIABLE_FIMSpecs_11)
{
  if (((MR_tag((MR_Word) DirectIntSpec_4)) == (MR_Integer) 0))
  {
    MR_Word ParseTreeInt1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DirectIntSpec_4, (MR_Integer) 0))));
    MR_Word IntFIMS_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 9))));
    MR_Word ImpFIMS_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 10))));
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;

    {
      Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (STATE_VARIABLE_FIMSpecs_0_10));
      MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (ImpFIMS_18));
      MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_22));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (IntFIMS_17));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (Var_21));
    }
    *STATE_VARIABLE_FIMSpecs_11 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_20);
  }
  else
    *STATE_VARIABLE_FIMSpecs_11 = STATE_VARIABLE_FIMSpecs_0_10;
}

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_ancestor_int_spec_3_p_0(
  MR_Word AncestorIntSpec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9)
{
  {
    MR_Word ParseTreeInt0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AncestorIntSpec_4, (MR_Integer) 0))));
    MR_Word IntFIMS_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 11))));
    MR_Word ImpFIMS_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt0_6, (MR_Integer) 12))));
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (STATE_VARIABLE_FIMSpecs_0_8));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (ImpFIMS_16));
      MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (Var_20));
    }
    {
      Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (IntFIMS_15));
      MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (Var_19));
    }
    *STATE_VARIABLE_FIMSpecs_9 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_18);
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

    parse_tree__write_deps_file__write_module_scc_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 113, &Order_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 65, &Verbose_11);
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
          if (((MR_tag((MR_Word) OrdResult_13)) == (MR_Integer) 1))
          {
            MR_Word IOError_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrdResult_13, (MR_Integer) 0))));
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
              Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (IOErrorMessage_16));
              MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) ((MR_String) "\' for output: "));
              MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
            }
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (OrdFileName_12));
              MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_37));
            }
            {
              Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
              MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_36));
            }
            mercury__string__append_list_2_p_0(Var_34, &OrdMessage_17);
            libs__file_util__report_error_3_p_0(OrdMessage_17);
          }
          else
          {
            MR_Word OrdStream_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrdResult_13, (MR_Integer) 0))));
            MR_Word Var_43;

            {
              Var_43 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[1]));
              MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1));
              MR_hl_field(MR_mktag(0), Var_43, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_43, 3) = ((MR_Box) (OrdStream_14));
            }
            mercury__io__write_list_6_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), OrdStream_14, DepsOrdering_8, (MR_String) "\n\n", Var_43);
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

    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 65, &Verbose_12);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 0, (MR_String) ".dep", ModuleName_9, &DepFileName_13);
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, DepFileName_13);
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "\'...\n");
    mercury__io__open_output_4_p_0(DepFileName_13, &DepResult_14);
    if (((MR_tag((MR_Word) DepResult_14)) == (MR_Integer) 1))
    {
      MR_Word IOError_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DepResult_14, (MR_Integer) 0))));
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
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (IOErrorMessage_19));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) ((MR_String) "\' for output: "));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (DepFileName_13));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
      }
      mercury__string__append_list_2_p_0(Var_36, &DepMessage_20);
      libs__file_util__report_error_3_p_0(DepMessage_20);
    }
    else
    {
      MR_Word DepStream_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DepResult_14, (MR_Integer) 0))));
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
      MmakeStartComment_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 137, &MmcMakeDeps_24);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 354, &Intermod_25);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 358, &TransOpt_26);
    switch (MmcMakeDeps_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeModuleDepsVar_28 = (MR_Word) ((MR_Unsigned) 0U);
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
            MaybeModuleDepsVar_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeModuleDepsVar_28, 0) = ((MR_Box) (ModuleDepsVar_27));
            MR_hl_field(MR_mktag(1), MaybeModuleDepsVar_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          MaybeModuleDepsVarSpace_29 = mercury__string__f_43_43_2_f_0(ModuleDepsVar_27, (MR_String) " ");
        }
        break;
    }
    switch (Intermod_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeOptsVar_31 = (MR_Word) ((MR_Unsigned) 0U);
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
            MaybeOptsVar_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeOptsVar_31, 0) = ((MR_Box) (OptsVar_30));
            MR_hl_field(MR_mktag(1), MaybeOptsVar_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          MaybeOptsVarSpace_32 = mercury__string__f_43_43_2_f_0(OptsVar_30, (MR_String) " ");
        }
        break;
    }
    switch (TransOpt_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MaybeTransOptsVar_34 = (MR_Word) ((MR_Unsigned) 0U);
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
            MaybeTransOptsVar_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeTransOptsVar_34, 0) = ((MR_Box) (TransOptsVar_33));
            MR_hl_field(MR_mktag(1), MaybeTransOptsVar_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          MaybeTransOptsVarSpace_35 = mercury__string__f_43_43_2_f_0(TransOptsVar_33, (MR_String) " ");
        }
        break;
    }
    {
      MaybeModuleDepsVarPair_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MaybeModuleDepsVarPair_36, 0) = ((MR_Box) (MaybeModuleDepsVar_28));
      MR_hl_field(MR_mktag(0), MaybeModuleDepsVarPair_36, 1) = ((MR_Box) (MaybeModuleDepsVarSpace_29));
    }
    {
      MaybeOptsVarPair_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MaybeOptsVarPair_37, 0) = ((MR_Box) (MaybeOptsVar_31));
      MR_hl_field(MR_mktag(0), MaybeOptsVarPair_37, 1) = ((MR_Box) (MaybeOptsVarSpace_32));
    }
    {
      MaybeTransOptsVarPair_38 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
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

    conv0_HeadVar__3_3 = parse_tree__write_deps_file__remove_suffix_files_cmd_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
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
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (InitPicObjFileName_24));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (InitObjFileName_23));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_76));
    }
    {
      CleanFiles_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CleanFiles_36, 0) = ((MR_Box) (InitCFileName_22));
      MR_hl_field(MR_mktag(1), CleanFiles_36, 1) = ((MR_Box) (Var_75));
    }
    {
      Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (CleanTargetName_33));
      MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_78, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_78, 1) = ((MR_Box) ((MR_String) "clean_local"));
      MR_hl_field(MR_mktag(3), Var_78, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_78, 3) = ((MR_Box) ((MR_String) "clean_local"));
      MR_hl_field(MR_mktag(3), Var_78, 4) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(3), Var_78, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_92 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_92, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[9]));
      MR_hl_field(MR_mktag(0), Var_92, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0_1));
      MR_hl_field(MR_mktag(0), Var_92, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_92, 3) = ((MR_Box) (ModuleMakeVarName_20));
    }
    Var_91 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_92, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[90])));
    Var_94 = parse_tree__write_deps_file__remove_files_cmd_1_f_0(CleanFiles_36);
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_91, Var_93);
    {
      Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) ((MR_String) "clean_target"));
      MR_hl_field(MR_mktag(3), Var_86, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_86, 3) = ((MR_Box) (CleanTargetName_33));
      MR_hl_field(MR_mktag(3), Var_86, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_86, 5) = ((MR_Box) (Var_90));
    }
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRulesClean_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MmakeRulesClean_37, 0) = ((MR_Box) (Var_78));
      MR_hl_field(MR_mktag(1), MmakeRulesClean_37, 1) = ((MR_Box) (Var_85));
    }
    libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesClean_37, STATE_VARIABLE_MmakeFile_0_41, &STATE_VARIABLE_MmakeFile_97_97);
    Var_138 = mercury__string__f_43_43_2_f_0(ExeFileName_21, (MR_String) "\044(EXT_FOR_EXE) ");
    {
      Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (DvFileName_30));
      MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (DepFileName_29));
      MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (Var_145));
    }
    {
      Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (JarFileName_28));
      MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (Var_144));
    }
    {
      Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (SharedLibFileName_27));
      MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (Var_143));
    }
    {
      Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) (LibFileName_26));
      MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (Var_142));
    }
    {
      Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) (InitFileName_25));
      MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_141));
    }
    {
      RealCleanFiles_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RealCleanFiles_39, 0) = ((MR_Box) (Var_138));
      MR_hl_field(MR_mktag(1), RealCleanFiles_39, 1) = ((MR_Box) (Var_140));
    }
    {
      Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (RealCleanTargetName_34));
      MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_147, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_147, 1) = ((MR_Box) ((MR_String) "realclean_local"));
      MR_hl_field(MR_mktag(3), Var_147, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_147, 3) = ((MR_Box) ((MR_String) "realclean_local"));
      MR_hl_field(MR_mktag(3), Var_147, 4) = ((MR_Box) (Var_151));
      MR_hl_field(MR_mktag(3), Var_147, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_161 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_92, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[110])));
    Var_164 = parse_tree__write_deps_file__remove_files_cmd_1_f_0(RealCleanFiles_39);
    {
      Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_163, 0) = ((MR_Box) (Var_164));
      MR_hl_field(MR_mktag(1), Var_163, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_161, Var_163);
    {
      Var_155 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_155, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_155, 1) = ((MR_Box) ((MR_String) "realclean_target"));
      MR_hl_field(MR_mktag(3), Var_155, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_155, 3) = ((MR_Box) (RealCleanTargetName_34));
      MR_hl_field(MR_mktag(3), Var_155, 4) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(3), Var_155, 5) = ((MR_Box) (Var_160));
    }
    {
      Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (Var_155));
      MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRulesRealClean_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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

    parse_tree__write_deps_file__generate_dep_file_collective_target_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_MmakeFile_20);
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
      Var_17 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_collective_targets_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Globals_8));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) (ModuleName_9));
      MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) (ModuleMakeVarName_10));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[4]), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[4]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[78])), ((MR_Box) (STATE_VARIABLE_MmakeFile_0_13)), &conv2_STATE_VARIABLE_MmakeFile_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16);
    *STATE_VARIABLE_MmakeFile_14 = ((MR_Word) (conv2_STATE_VARIABLE_MmakeFile_14));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s * env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s * env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_41 = ((MR_Word) ((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv1_Var_41));
    (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_90 = ((MR_Word) ((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv0_Var_90));
    parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_2(env_ptr);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s * env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_90, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_90, (MR_Integer) 0)));

      (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_90, (MR_Integer) 1))));
      parse_tree__module_imports__module_and_imports_get_children_map_2_p_0((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_350, &(env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ChildrenMap_43);
      (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = mercury__one_or_more_map__is_empty_1_p_0((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_351_351, (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ChildrenMap_43);
      (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = !((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded);
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
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s * env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__commit_0) == 0)
      {
        {
          (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_351_351 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
          mercury__map__member_3_p_0((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_351_351, (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__DepsMap_17, &(env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv1_Var_41, &(env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv0_Var_90, parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_3, env_ptr);
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
  MR_Word STATE_VARIABLE_MmakeFile_0_64,
  MR_Word * STATE_VARIABLE_MmakeFile_65)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s env;

    (env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__DepsMap_17 = DepsMap_17;
    {
      MR_Word MaybeOptsVar_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeOptsVarPair_23, (MR_Integer) 0))));
      MR_String MaybeOptsVarSpace_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), MaybeOptsVarPair_23, (MR_Integer) 1))));
      MR_Word MaybeTransOptsVar_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeTransOptsVarPair_24, (MR_Integer) 0))));
      MR_String MaybeTransOptsVarSpace_30 = ((MR_String) ((MR_hl_field(MR_mktag(0), MaybeTransOptsVarPair_24, (MR_Integer) 1))));
      MR_Word MaybeModuleDepsVar_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeModuleDepsVarPair_22, (MR_Integer) 0))));
      MR_String MaybeModuleDepsVarSpace_32 = ((MR_String) ((MR_hl_field(MR_mktag(0), MaybeModuleDepsVarPair_22, (MR_Integer) 1))));
      MR_String LibInstallIntsTargetName_33;
      MR_String LibInstallOptsTargetName_34;
      MR_String LibInstallHdrsTargetName_35;
      MR_String LibInstallGradeHdrsTargetName_36;
      MR_String ModuleMakeVarNameInts_37;
      MR_String ModuleMakeVarNameInt3s_38;
      MR_String MaybeSpaceOptStr_39;
      MR_String SpaceInt0Str_44;
      MR_String MaybeModuleVarNameInt0sSpace_46;
      MR_Word MaybeModuleVarNameInt0s_47;
      MR_String MaybeSpaceTransOptStr_48;
      MR_String MaybeSpaceDepStr_49;
      MR_String LibInstallIntsFiles_50;
      MR_Word MmakeRuleLibInstallInts_51;
      MR_Word LibInstallOptsSources_52;
      MR_Word LibInstallOptsActions_53;
      MR_Word MmakeRuleLibInstallOpts_55;
      MR_String ModuleMakeVarNameMhs_56;
      MR_Word MmakeRuleLibInstallHdrsNoMhs_57;
      MR_Word MmakeRuleLibInstallHdrsMhs_58;
      MR_Word MmakeFragmentLibInstallHdrs_59;
      MR_String ModuleMakeVarNameMihs_60;
      MR_Word MmakeRuleLibInstallGradeHdrsNoMihs_61;
      MR_Word MmakeRuleLibInstallGradeHdrsMihs_62;
      MR_Word MmakeFragmentLibInstallGradeHdrs_63;
      MR_String Var_85;
      MR_String Var_88;
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
      MR_String Var_356;
      MR_String Var_359;

      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_15, (MR_String) "lib", ModuleName_16, (MR_String) ".install_ints", (MR_Integer) 1, &LibInstallIntsTargetName_33);
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_15, (MR_String) "lib", ModuleName_16, (MR_String) ".install_opts", (MR_Integer) 1, &LibInstallOptsTargetName_34);
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_15, (MR_String) "lib", ModuleName_16, (MR_String) ".install_hdrs", (MR_Integer) 1, &LibInstallHdrsTargetName_35);
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_15, (MR_String) "lib", ModuleName_16, (MR_String) ".install_grade_hdrs", (MR_Integer) 1, &LibInstallGradeHdrsTargetName_36);
      Var_85 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".ints)");
      ModuleMakeVarNameInts_37 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_85);
      Var_88 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".int3s)");
      ModuleMakeVarNameInt3s_38 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_88);
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
        MR_String ModuleVarNameInt0s_45;
        MR_String Var_92;

        SpaceInt0Str_44 = (MR_String) " int0";
        Var_92 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".int0s)");
        ModuleVarNameInt0s_45 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_92);
        MaybeModuleVarNameInt0sSpace_46 = mercury__string__f_43_43_2_f_0(ModuleVarNameInt0s_45, (MR_String) " ");
        {
          MaybeModuleVarNameInt0s_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeModuleVarNameInt0s_47, 0) = ((MR_Box) (ModuleVarNameInt0s_45));
          MR_hl_field(MR_mktag(1), MaybeModuleVarNameInt0s_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        SpaceInt0Str_44 = (MR_String) "";
        MaybeModuleVarNameInt0sSpace_46 = (MR_String) "";
        MaybeModuleVarNameInt0s_47 = (MR_Word) ((MR_Unsigned) 0U);
      }
      switch (TransOpt_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeSpaceTransOptStr_48 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          MaybeSpaceTransOptStr_48 = (MR_String) " trans_opt";
          break;
      }
      switch (MmcMakeDeps_19) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeSpaceDepStr_49 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          MaybeSpaceDepStr_49 = (MR_String) " module_dep";
          break;
      }
      Var_106 = mercury__string__f_43_43_2_f_0(MaybeModuleDepsVarSpace_32, (MR_String) "\"");
      Var_105 = mercury__string__f_43_43_2_f_0(MaybeTransOptsVarSpace_30, Var_106);
      Var_104 = mercury__string__f_43_43_2_f_0(MaybeOptsVarSpace_28, Var_105);
      Var_103 = mercury__string__f_43_43_2_f_0(MaybeModuleVarNameInt0sSpace_46, Var_104);
      Var_101 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_103);
      Var_100 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInt3s_38, Var_101);
      Var_98 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_100);
      Var_97 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInts_37, Var_98);
      LibInstallIntsFiles_50 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_97);
      {
        Var_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_112, 0) = ((MR_Box) (ModuleMakeVarNameInt3s_38));
        MR_hl_field(MR_mktag(1), Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (ModuleMakeVarNameInts_37));
        MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_112));
      }
      Var_118 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[113]));
      Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeModuleDepsVar_31, Var_118);
      Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTransOptsVar_29, Var_117);
      Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeOptsVar_27, Var_116);
      Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeModuleVarNameInt0s_47, Var_115);
      Var_110 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_111, Var_114);
      Var_124 = mercury__string__f_43_43_2_f_0(LibInstallIntsFiles_50, (MR_String) "; \\");
      Var_122 = mercury__string__f_43_43_2_f_0((MR_String) "files=", Var_124);
      Var_156 = mercury__string__f_43_43_2_f_0(MaybeSpaceDepStr_49, (MR_String) "; do \\");
      Var_155 = mercury__string__f_43_43_2_f_0(MaybeSpaceTransOptStr_48, Var_156);
      Var_154 = mercury__string__f_43_43_2_f_0(MaybeSpaceOptStr_39, Var_155);
      Var_153 = mercury__string__f_43_43_2_f_0(SpaceInt0Str_44, Var_154);
      Var_151 = mercury__string__f_43_43_2_f_0((MR_String) "for ext in int int2 int3", Var_153);
      {
        Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (Var_151));
        MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[24])));
      }
      {
        Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'."));
        MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (Var_150));
      }
      {
        Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use"));
        MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Var_148));
      }
      {
        Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option."));
        MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (Var_146));
      }
      {
        Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) ((MR_String) "done"));
        MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (Var_144));
      }
      {
        Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) ((MR_String) "\tfi; \\"));
        MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_142));
      }
      {
        Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\"));
        MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_140));
      }
      {
        Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) ((MR_String) "\t\techo \"installing \044\044target\"; \\"));
        MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (Var_138));
      }
      {
        Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) ((MR_String) "\telse \\"));
        MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_136));
      }
      {
        Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) ((MR_String) "\t\techo \"\044\044target unchanged\"; \\"));
        MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_134));
      }
      {
        Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) ((MR_String) "\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\"));
        MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_132));
      }
      {
        Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_128, 0) = ((MR_Box) ((MR_String) "\ttarget=\"\044(INSTALL_INT_DIR)/\140basename \044\044file\140\"; \\"));
        MR_hl_field(MR_mktag(1), Var_128, 1) = ((MR_Box) (Var_130));
      }
      {
        Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) ((MR_String) "for file in \044\044files; do \\"));
        MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_128));
      }
      {
        Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (Var_122));
        MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) (Var_126));
      }
      {
        MmakeRuleLibInstallInts_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_51, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_51, 1) = ((MR_Box) ((MR_String) "lib_install_ints"));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_51, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_51, 3) = ((MR_Box) (LibInstallIntsTargetName_33));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_51, 4) = ((MR_Box) (Var_110));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_51, 5) = ((MR_Box) (Var_121));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleLibInstallInts_51, STATE_VARIABLE_MmakeFile_0_64, &STATE_VARIABLE_MmakeFile_175_175);
      (env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = (Intermod_20 == (MR_Integer) 0);
      if ((env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded)
        (env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = (TransOpt_21 == (MR_Integer) 0);
      if ((env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded)
      {
        MR_String Var_176;

        LibInstallOptsSources_52 = (MR_Word) ((MR_Unsigned) 0U);
        Var_176 = libs__mmakefiles__silent_noop_action_0_f_0();
        {
          LibInstallOptsActions_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LibInstallOptsActions_53, 0) = ((MR_Box) (Var_176));
          MR_hl_field(MR_mktag(1), LibInstallOptsActions_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_String LibInstallOptsFiles_54;
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

        Var_178 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTransOptsVar_29, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[114])));
        LibInstallOptsSources_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeOptsVar_27, Var_178);
        Var_184 = mercury__string__f_43_43_2_f_0(MaybeTransOptsVarSpace_30, (MR_String) "\"");
        Var_183 = mercury__string__f_43_43_2_f_0(MaybeOptsVarSpace_28, Var_184);
        LibInstallOptsFiles_54 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_183);
        Var_188 = mercury__string__f_43_43_2_f_0(LibInstallOptsFiles_54, (MR_String) "; \\");
        Var_186 = mercury__string__f_43_43_2_f_0((MR_String) "files=", Var_188);
        Var_218 = mercury__string__f_43_43_2_f_0(MaybeSpaceTransOptStr_48, (MR_String) "; do \\");
        Var_217 = mercury__string__f_43_43_2_f_0(MaybeSpaceOptStr_39, Var_218);
        Var_215 = mercury__string__f_43_43_2_f_0((MR_String) "for ext in ", Var_217);
        {
          Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_214, 0) = ((MR_Box) (Var_215));
          MR_hl_field(MR_mktag(1), Var_214, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[31])));
        }
        {
          Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'."));
          MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) (Var_214));
        }
        {
          Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_210, 0) = ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use"));
          MR_hl_field(MR_mktag(1), Var_210, 1) = ((MR_Box) (Var_212));
        }
        {
          Var_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_208, 0) = ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option"));
          MR_hl_field(MR_mktag(1), Var_208, 1) = ((MR_Box) (Var_210));
        }
        {
          Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) ((MR_String) "done"));
          MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) (Var_208));
        }
        {
          Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) ((MR_String) "\tfi; \\"));
          MR_hl_field(MR_mktag(1), Var_204, 1) = ((MR_Box) (Var_206));
        }
        {
          Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\"));
          MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) (Var_204));
        }
        {
          Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) ((MR_String) "\t\techo \"installing \044\044target\"; \\"));
          MR_hl_field(MR_mktag(1), Var_200, 1) = ((MR_Box) (Var_202));
        }
        {
          Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) ((MR_String) "\telse \\"));
          MR_hl_field(MR_mktag(1), Var_198, 1) = ((MR_Box) (Var_200));
        }
        {
          Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_196, 0) = ((MR_Box) ((MR_String) "\t\techo \"\044\044target unchanged\"; \\"));
          MR_hl_field(MR_mktag(1), Var_196, 1) = ((MR_Box) (Var_198));
        }
        {
          Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_194, 0) = ((MR_Box) ((MR_String) "\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\"));
          MR_hl_field(MR_mktag(1), Var_194, 1) = ((MR_Box) (Var_196));
        }
        {
          Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) ((MR_String) "\ttarget=\"\044(INSTALL_GRADE_INT_DIR)/\140basename \044\044file\140\";\\"));
          MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) (Var_194));
        }
        {
          Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_190, 0) = ((MR_Box) ((MR_String) "for file in \044\044files; do \\"));
          MR_hl_field(MR_mktag(1), Var_190, 1) = ((MR_Box) (Var_192));
        }
        {
          LibInstallOptsActions_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LibInstallOptsActions_53, 0) = ((MR_Box) (Var_186));
          MR_hl_field(MR_mktag(1), LibInstallOptsActions_53, 1) = ((MR_Box) (Var_190));
        }
      }
      {
        MmakeRuleLibInstallOpts_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallOpts_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallOpts_55, 1) = ((MR_Box) ((MR_String) "lib_install_opts"));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallOpts_55, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallOpts_55, 3) = ((MR_Box) (LibInstallOptsTargetName_34));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallOpts_55, 4) = ((MR_Box) (LibInstallOptsSources_52));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallOpts_55, 5) = ((MR_Box) (LibInstallOptsActions_53));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleLibInstallOpts_55, STATE_VARIABLE_MmakeFile_175_175, &STATE_VARIABLE_MmakeFile_241_241);
      Var_356 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".mhs)");
      ModuleMakeVarNameMhs_56 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_356);
      {
        Var_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_248, 0) = ((MR_Box) (ModuleMakeVarNameMhs_56));
        MR_hl_field(MR_mktag(1), Var_248, 1) = ((MR_Box) (Var_118));
      }
      Var_253 = libs__mmakefiles__silent_noop_action_0_f_0();
      {
        Var_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_252, 0) = ((MR_Box) (Var_253));
        MR_hl_field(MR_mktag(1), Var_252, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MmakeRuleLibInstallHdrsNoMhs_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_57, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_57, 1) = ((MR_Box) ((MR_String) "install_lib_hdrs_nomhs"));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_57, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_57, 3) = ((MR_Box) (LibInstallHdrsTargetName_35));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_57, 4) = ((MR_Box) (Var_248));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_57, 5) = ((MR_Box) (Var_252));
      }
      Var_264 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameMhs_56, (MR_String) "; do \\");
      Var_262 = mercury__string__f_43_43_2_f_0((MR_String) "for hdr in ", Var_264);
      {
        Var_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_261, 0) = ((MR_Box) (Var_262));
        MR_hl_field(MR_mktag(1), Var_261, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[33])));
      }
      {
        MmakeRuleLibInstallHdrsMhs_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_58, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_58, 1) = ((MR_Box) ((MR_String) "install_lib_hdrs_mhs"));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_58, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_58, 3) = ((MR_Box) (LibInstallHdrsTargetName_35));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_58, 4) = ((MR_Box) (Var_248));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_58, 5) = ((MR_Box) (Var_261));
      }
      {
        Var_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_273, 0) = ((MR_Box) (ModuleMakeVarNameMhs_56));
        MR_hl_field(MR_mktag(1), Var_273, 1) = ((MR_Box) ((MR_String) ""));
      }
      {
        MmakeFragmentLibInstallHdrs_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallHdrs_59, 0) = ((MR_Box) (Var_273));
        MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallHdrs_59, 1) = ((MR_Box) (MmakeRuleLibInstallHdrsNoMhs_57));
        MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallHdrs_59, 2) = ((MR_Box) (MmakeRuleLibInstallHdrsMhs_58));
      }
      libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibInstallHdrs_59, STATE_VARIABLE_MmakeFile_241_241, &STATE_VARIABLE_MmakeFile_275_275);
      Var_359 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".mihs)");
      ModuleMakeVarNameMihs_60 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_359);
      {
        Var_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_282, 0) = ((MR_Box) (ModuleMakeVarNameMihs_60));
        MR_hl_field(MR_mktag(1), Var_282, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[114])));
      }
      Var_287 = libs__mmakefiles__silent_noop_action_0_f_0();
      {
        Var_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_286, 0) = ((MR_Box) (Var_287));
        MR_hl_field(MR_mktag(1), Var_286, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MmakeRuleLibInstallGradeHdrsNoMihs_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_61, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_61, 1) = ((MR_Box) ((MR_String) "install_grade_hdrs_no_mihs"));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_61, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_61, 3) = ((MR_Box) (LibInstallGradeHdrsTargetName_36));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_61, 4) = ((MR_Box) (Var_282));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_61, 5) = ((MR_Box) (Var_286));
      }
      Var_298 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameMihs_60, (MR_String) "; do \\");
      Var_296 = mercury__string__f_43_43_2_f_0((MR_String) "for hdr in ", Var_298);
      {
        Var_295 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_295, 0) = ((MR_Box) (Var_296));
        MR_hl_field(MR_mktag(1), Var_295, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[56])));
      }
      {
        MmakeRuleLibInstallGradeHdrsMihs_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_62, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_62, 1) = ((MR_Box) ((MR_String) "install_grade_hdrs_mihs"));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_62, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_62, 3) = ((MR_Box) (LibInstallGradeHdrsTargetName_36));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_62, 4) = ((MR_Box) (Var_282));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_62, 5) = ((MR_Box) (Var_295));
      }
      {
        Var_347 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_347, 0) = ((MR_Box) (ModuleMakeVarNameMihs_60));
        MR_hl_field(MR_mktag(1), Var_347, 1) = ((MR_Box) ((MR_String) ""));
      }
      {
        MmakeFragmentLibInstallGradeHdrs_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallGradeHdrs_63, 0) = ((MR_Box) (Var_347));
        MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallGradeHdrs_63, 1) = ((MR_Box) (MmakeRuleLibInstallGradeHdrsNoMihs_61));
        MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallGradeHdrs_63, 2) = ((MR_Box) (MmakeRuleLibInstallGradeHdrsMihs_62));
      }
      libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibInstallGradeHdrs_63, STATE_VARIABLE_MmakeFile_275_275, STATE_VARIABLE_MmakeFile_65);
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
      Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (ModuleMakeVarNameCs_21));
      MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (*DepFileName_17));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (InitAction3_24));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (InitAction2_23));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (InitAction1_22));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_59));
    }
    {
      MmakeRuleInitFile_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 1) = ((MR_Box) ((MR_String) "init_file"));
      MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 3) = ((MR_Box) (InitFileName_16));
      MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 4) = ((MR_Box) (Var_55));
      MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 5) = ((MR_Box) (Var_58));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleInitFile_25, STATE_VARIABLE_MmakeFile_0_34, &STATE_VARIABLE_MmakeFile_62_62);
    ModuleFileName_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_13);
    Var_64 = mercury__string__f_43_43_2_f_0(ModuleFileName_26, (MR_String) "_init");
    ForceC2InitTarget_27 = mercury__string__f_43_43_2_f_0((MR_String) "force-", Var_64);
    {
      MmakeRuleForceInitCFile_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 1) = ((MR_Box) ((MR_String) "force_init_c_file"));
      MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 3) = ((MR_Box) (ForceC2InitTarget_27));
      MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 5) = ((MR_Box) ((MR_Unsigned) 0U));
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
      Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (ForceC2InitTarget_27));
      MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) (Var_56));
    }
    {
      Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (InitCAction2_32));
      MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (InitCAction1_31));
      MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_90));
    }
    {
      MmakeRuleInitCFile_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleInitCFile_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleInitCFile_33, 1) = ((MR_Box) ((MR_String) "init_c_file"));
      MR_hl_field(MR_mktag(3), MmakeRuleInitCFile_33, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
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
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRuleExtForExe_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 1) = ((MR_Box) ((MR_String) "ext_for_exe"));
      MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 3) = ((MR_Box) (*ExeFileName_23));
      MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 4) = ((MR_Box) (Var_75));
      MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_84 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (MmakeRuleExtForExe_29));
    }
    {
      Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeFragmentExtForExe_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeFragmentExtForExe_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__write_deps_file_scalar_common_1[111])));
      MR_hl_field(MR_mktag(2), MmakeFragmentExtForExe_30, 1) = ((MR_Box) (Var_83));
      MR_hl_field(MR_mktag(2), MmakeFragmentExtForExe_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
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
      Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (ModuleMakeVarNameClasses_35));
      MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRuleExecutableJava_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 1) = ((MR_Box) ((MR_String) "executable_java"));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 3) = ((MR_Box) (*ExeFileName_23));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 4) = ((MR_Box) (Var_122));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_127 = mercury__string__f_43_43_2_f_0(*ExeFileName_23, (MR_String) "\044(EXT_FOR_EXE)");
    {
      Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (All_MLLibsDep_31));
      MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (All_MLObjs_32));
      MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_132));
    }
    {
      Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (InitObjFileName_20));
      MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_131));
    }
    {
      Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) (ModuleMakeVarNameOs_36));
      MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_130));
    }
    {
      Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (NonJavaMainRuleAction1Line2_38));
      MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (NonJavaMainRuleAction1Line1_37));
      MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_135));
    }
    {
      MmakeRuleExecutableNonJava_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 1) = ((MR_Box) ((MR_String) "executable_non_java"));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 3) = ((MR_Box) (Var_127));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 4) = ((MR_Box) (Var_129));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 5) = ((MR_Box) (Var_134));
    }
    {
      MmakeFragmentExecutable_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MmakeFragmentExecutable_41, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
      MR_hl_field(MR_mktag(1), MmakeFragmentExecutable_41, 1) = ((MR_Box) (MmakeRuleExecutableJava_39));
      MR_hl_field(MR_mktag(1), MmakeFragmentExecutable_41, 2) = ((MR_Box) (MmakeRuleExecutableNonJava_40));
    }
    libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentExecutable_41, STATE_VARIABLE_MmakeFile_87_87, &STATE_VARIABLE_MmakeFile_139_139);
    parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_16, (MR_String) "lib", ModuleName_17, (MR_String) "", (MR_Integer) 1, &LibTargetName_42);
    parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_16, (MR_String) "lib", ModuleName_17, (MR_String) ".\044A", (MR_Integer) 0, LibFileName_25);
    parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_16, (MR_String) "lib", ModuleName_17, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 0, SharedLibFileName_26);
    parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_16, (MR_String) "lib", ModuleName_17, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 1, &MaybeSharedLibFileName_43);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_16, (MR_Integer) 1, (MR_String) ".jar", ModuleName_17, JarFileName_24);
    libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 645, &UseInstallName_44);
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
    {
      Var_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_167, 0) = ((MR_Box) (ModuleMakeVarNameInt3s_47));
      MR_hl_field(MR_mktag(1), Var_167, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_166, 0) = ((MR_Box) (ModuleMakeVarNameInts_46));
      MR_hl_field(MR_mktag(1), Var_166, 1) = ((MR_Box) (Var_167));
    }
    {
      Var_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_171, 0) = ((MR_Box) (InitFileName_19));
      MR_hl_field(MR_mktag(1), Var_171, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_170 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTransOptsVar_22, Var_171);
    Var_169 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeOptsVar_21, Var_170);
    AllIntSources_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_166, Var_169);
    {
      Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_175, 0) = ((MR_Box) (*JarFileName_24));
      MR_hl_field(MR_mktag(1), Var_175, 1) = ((MR_Box) (AllIntSources_48));
    }
    {
      MmakeRuleLibTargetJava_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 1) = ((MR_Box) ((MR_String) "lib_target_java"));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 3) = ((MR_Box) (LibTargetName_42));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 4) = ((MR_Box) (Var_175));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_180, 0) = ((MR_Box) (MaybeSharedLibFileName_43));
      MR_hl_field(MR_mktag(1), Var_180, 1) = ((MR_Box) (AllIntSources_48));
    }
    {
      Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (*LibFileName_25));
      MR_hl_field(MR_mktag(1), Var_179, 1) = ((MR_Box) (Var_180));
    }
    {
      MmakeRuleLibTargetNonJava_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 1) = ((MR_Box) ((MR_String) "lib_target_non_java"));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 3) = ((MR_Box) (LibTargetName_42));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 4) = ((MR_Box) (Var_179));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeFragmentLibTarget_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MmakeFragmentLibTarget_51, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
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
      Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_207, 0) = ((MR_Box) (All_MLPicObjs_33));
      MR_hl_field(MR_mktag(1), Var_207, 1) = ((MR_Box) (Var_132));
    }
    {
      Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) (ModuleMakeVarNamePicOs_52));
      MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) (Var_207));
    }
    {
      Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) (SharedLibAction1Line3_55));
      MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_211, 0) = ((MR_Box) (SharedLibAction1Line2_54));
      MR_hl_field(MR_mktag(1), Var_211, 1) = ((MR_Box) (Var_212));
    }
    {
      Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_210, 0) = ((MR_Box) (SharedLibAction1Line1_53));
      MR_hl_field(MR_mktag(1), Var_210, 1) = ((MR_Box) (Var_211));
    }
    {
      MmakeRuleSharedLib_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 1) = ((MR_Box) ((MR_String) "shared_lib"));
      MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 3) = ((MR_Box) (*SharedLibFileName_26));
      MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 4) = ((MR_Box) (Var_206));
      MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 5) = ((MR_Box) (Var_210));
    }
    {
      Var_218 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_218, 0) = ((MR_Box) (MmakeRuleSharedLib_56));
    }
    {
      Var_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_217, 0) = ((MR_Box) (Var_218));
      MR_hl_field(MR_mktag(1), Var_217, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeFragmentSharedLib_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeFragmentSharedLib_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__write_deps_file_scalar_common_1[112])));
      MR_hl_field(MR_mktag(2), MmakeFragmentSharedLib_57, 1) = ((MR_Box) (Var_217));
      MR_hl_field(MR_mktag(2), MmakeFragmentSharedLib_57, 2) = ((MR_Box) ((MR_Unsigned) 0U));
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
      Var_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_234, 0) = ((MR_Box) (All_MLObjs_32));
      MR_hl_field(MR_mktag(1), Var_234, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_233, 0) = ((MR_Box) (ModuleMakeVarNameOs_36));
      MR_hl_field(MR_mktag(1), Var_233, 1) = ((MR_Box) (Var_234));
    }
    {
      Var_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_239, 0) = ((MR_Box) (LibAction3_61));
      MR_hl_field(MR_mktag(1), Var_239, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_238, 0) = ((MR_Box) (LibAction2Line2_60));
      MR_hl_field(MR_mktag(1), Var_238, 1) = ((MR_Box) (Var_239));
    }
    {
      Var_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_237, 0) = ((MR_Box) (LibAction2Line1_59));
      MR_hl_field(MR_mktag(1), Var_237, 1) = ((MR_Box) (Var_238));
    }
    {
      Var_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_236, 0) = ((MR_Box) (LibAction1_58));
      MR_hl_field(MR_mktag(1), Var_236, 1) = ((MR_Box) (Var_237));
    }
    {
      MmakeRuleLib_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleLib_62, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleLib_62, 1) = ((MR_Box) ((MR_String) "lib"));
      MR_hl_field(MR_mktag(3), MmakeRuleLib_62, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
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
      Var_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_250, 0) = ((MR_Box) (JarAction1_64));
      MR_hl_field(MR_mktag(1), Var_250, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRuleJar_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleJar_65, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleJar_65, 1) = ((MR_Box) ((MR_String) "jar"));
      MR_hl_field(MR_mktag(3), MmakeRuleJar_65, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
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

    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 65, &Verbose_12);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 0, (MR_String) ".dv", ModuleName_9, &DvFileName_13);
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, DvFileName_13);
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "\'...\n");
    mercury__io__open_output_4_p_0(DvFileName_13, &DvResult_14);
    if (((MR_tag((MR_Word) DvResult_14)) == (MR_Integer) 1))
    {
      MR_Word IOError_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DvResult_14, (MR_Integer) 0))));
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
        Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (IOErrorMessage_19));
        MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) ((MR_String) "\' for output: "));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_41));
      }
      {
        Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (DvFileName_13));
        MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_39));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
        MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (Var_38));
      }
      mercury__string__append_list_2_p_0(Var_36, &DvMessage_20);
      libs__file_util__report_error_3_p_0(DvMessage_20);
    }
    else
    {
      MR_Word DvStream_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DvResult_14, (MR_Integer) 0))));
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

    parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1229__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_LambdaHeadVar__2_133);
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

    succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1197__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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

    conv3_HeadVar__3_3 = parse_tree__write_deps_file__add_suffix_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
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

    conv2_HeadVar__3_3 = parse_tree__write_deps_file__add_suffix_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
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

    parse_tree__write_deps_file__get_source_file_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_6);
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

    parse_tree__write_deps_file__compare_module_names_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_8_p_0(
  MR_Word Globals_9,
  MR_String SourceFileName_10,
  MR_Word ModuleName_11,
  MR_Word DepsMap_12,
  MR_Word STATE_VARIABLE_MmakeFile_0_94,
  MR_Word * STATE_VARIABLE_MmakeFile_95)
{
  {
    MR_bool succeeded;
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
    MR_Word ModulesWithSubModulesSourceFileNames_34;
    MR_Word MmakeVarModuleParentMods_35;
    MR_Word Target_36;
    MR_Word ForeignModules_38;
    MR_Word ForeignModulesFileNames_39;
    MR_Word MmakeVarForeignModules_40;
    MR_Word MakeFileName_41;
    MR_Word ForeignFileNames_47;
    MR_Word MmakeVarForeignFileNames_48;
    MR_Word MmakeVarForeignDlls_49;
    MR_Word MmakeVarInitCs_50;
    MR_Word ExtraLinkObjs_51;
    MR_Word ExtraLinkObjFileNamesC_52;
    MR_Word MmakeVarCs_53;
    MR_Word MmakeVarDlls_54;
    MR_Word ExtraLinkObjFileNamesOs_55;
    MR_Word MmakeVarAllOs_56;
    MR_Word ExtraLinkObjFileNamesPicOs_57;
    MR_Word MmakeVarAllPicOs_58;
    MR_Word MmakeVarOs_59;
    MR_Word MmakeVarPicOs_60;
    MR_Word MmakeVarUseds_61;
    MR_Word MmakeVarJavas_62;
    MR_Word MmakeVarClasses_63;
    MR_Word MmakeVarCss_64;
    MR_Word MmakeVarDirs_65;
    MR_Word MmakeVarDirOs_66;
    MR_Word MmakeVarDates_67;
    MR_Word MmakeVarDate0s_68;
    MR_Word MmakeVarDate3s_69;
    MR_Word MmakeVarOptDates_70;
    MR_Word MmakeVarTransOptDates_71;
    MR_Word MmakeVarCDates_72;
    MR_Word MmakeVarJavaDates_73;
    MR_Word MmakeVarCsDates_74;
    MR_Word MmakeVarDs_75;
    MR_Word MmakeVarModuleDeps_76;
    MR_Word HighLevelCode_77;
    MR_Word MihSources_78;
    MR_Word MmakeVarMihs_79;
    MR_Word MhSources_80;
    MR_Word MmakeVarMhs_81;
    MR_Word MmakeVarAllMihs_82;
    MR_Word MmakeVarAllMhs_83;
    MR_Word MmakeVarInts_84;
    MR_Word MmakeVarInt0s_85;
    MR_Word MmakeVarAllInt0s_86;
    MR_Word MmakeVarInt3s_87;
    MR_Word MmakeVarOpts_88;
    MR_Word MmakeVarTransOpts_89;
    MR_Word MmakeVarAnalysiss_90;
    MR_Word MmakeVarRequests_91;
    MR_Word MmakeVarImdgs_92;
    MR_Word MmakeVarProfs_93;
    MR_Word STATE_VARIABLE_MmakeFile_99_99;
    MR_Word Var_101;
    MR_String Var_102;
    MR_Word Var_104;
    MR_Word STATE_VARIABLE_MmakeFile_107_107;
    MR_String Var_108;
    MR_Word Var_110;
    MR_Word STATE_VARIABLE_MmakeFile_113_113;
    MR_String Var_116;
    MR_Word STATE_VARIABLE_MmakeFile_118_118;
    MR_Word Var_119;
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
    MR_String Var_500;
    MR_String Var_503;
    MR_String Var_506;
    MR_String Var_509;
    MR_String Var_512;
    MR_String Var_515;
    MR_String Var_518;
    MR_String Var_521;
    MR_String Var_524;
    MR_String Var_527;
    MR_String Var_530;
    MR_String Var_533;
    MR_String Var_536;
    MR_String Var_539;
    MR_String Var_542;
    MR_String Var_545;
    MR_String Var_548;
    MR_String Var_551;
    MR_String Var_554;
    MR_String Var_557;
    MR_String Var_560;
    MR_String Var_563;
    MR_String Var_566;
    MR_String Var_569;
    MR_String Var_571;
    MR_String Var_572;
    MR_String Var_581;
    MR_String Var_584;
    MR_String Var_587;
    MR_String Var_590;
    MR_String Var_593;
    MR_String Var_596;
    MR_String Var_599;
    MR_String Var_602;
    MR_String Var_605;
    MR_String Var_608;
    MR_String Var_611;
    MR_String Var_614;
    MR_String Var_617;
    MR_Box conv5_STATE_VARIABLE_IO_138_138;

    ModuleNameString_15 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_11);
    mercury__library__version_2_p_0(&Version_16, &FullArch_17);
    {
      MmakeStartComment_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MmakeStartComment_18, 0) = ((MR_Box) ((MR_String) "dependency variables"));
      MR_hl_field(MR_mktag(0), MmakeStartComment_18, 1) = ((MR_Box) (ModuleNameString_15));
      MR_hl_field(MR_mktag(0), MmakeStartComment_18, 2) = ((MR_Box) (SourceFileName_10));
      MR_hl_field(MR_mktag(0), MmakeStartComment_18, 3) = ((MR_Box) (Version_16));
      MR_hl_field(MR_mktag(0), MmakeStartComment_18, 4) = ((MR_Box) (FullArch_17));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeStartComment_18, STATE_VARIABLE_MmakeFile_0_94, &STATE_VARIABLE_MmakeFile_99_99);
    mercury__map__keys_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_12, &Modules0_19);
    parse_tree__write_deps_file__select_ok_modules_3_p_0(Modules0_19, DepsMap_12, &Modules1_20);
    mercury__list__sort_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[12]), Modules1_20, &Modules_21);
    parse_tree__file_names__module_name_to_make_var_name_2_p_0(ModuleName_11, &ModuleMakeVarName_22);
    {
      Var_101 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_101, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[8]));
      MR_hl_field(MR_mktag(0), Var_101, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_101, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_101, 3) = ((MR_Box) (DepsMap_12));
    }
    mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_101, Modules_21, &SourceFiles0_23);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFiles0_23, &SourceFiles_24);
    Var_102 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".ms");
    Var_104 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_9[0]), SourceFiles_24);
    {
      MmakeVarModuleMs_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarModuleMs_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarModuleMs_25, 1) = ((MR_Box) (Var_102));
      MR_hl_field(MR_mktag(3), MmakeVarModuleMs_25, 2) = ((MR_Box) (Var_104));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarModuleMs_25, STATE_VARIABLE_MmakeFile_99_99, &STATE_VARIABLE_MmakeFile_107_107);
    Var_108 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".errs");
    Var_110 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_9[1]), SourceFiles_24);
    {
      MmakeVarModuleErrs_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarModuleErrs_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarModuleErrs_26, 1) = ((MR_Box) (Var_108));
      MR_hl_field(MR_mktag(3), MmakeVarModuleErrs_26, 2) = ((MR_Box) (Var_110));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarModuleErrs_26, STATE_VARIABLE_MmakeFile_107_107, &STATE_VARIABLE_MmakeFile_113_113);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) "", Modules_21, &ModulesSourceFileNames_27);
    Var_116 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods");
    {
      MmakeVarModuleMods_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarModuleMods_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarModuleMods_28, 1) = ((MR_Box) (Var_116));
      MR_hl_field(MR_mktag(3), MmakeVarModuleMods_28, 2) = ((MR_Box) (ModulesSourceFileNames_27));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarModuleMods_28, STATE_VARIABLE_MmakeFile_113_113, &STATE_VARIABLE_MmakeFile_118_118);
    {
      Var_119 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_119, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_119, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_8_p_0_5));
      MR_hl_field(MR_mktag(0), Var_119, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_119, 3) = ((MR_Box) (DepsMap_12));
    }
    ModulesWithSubModules_29 = mercury__list__filter_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_119, Modules_21);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) "", ModulesWithSubModules_29, &ModulesWithSubModulesSourceFileNames_34);
    Var_124 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".parent_mods");
    {
      MmakeVarModuleParentMods_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarModuleParentMods_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarModuleParentMods_35, 1) = ((MR_Box) (Var_124));
      MR_hl_field(MR_mktag(3), MmakeVarModuleParentMods_35, 2) = ((MR_Box) (ModulesWithSubModulesSourceFileNames_34));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarModuleParentMods_35, STATE_VARIABLE_MmakeFile_118_118, &STATE_VARIABLE_MmakeFile_126_126);
    libs__globals__get_target_2_p_0(Globals_9, &Target_36);
    ForeignModules_38 = mercury__assoc_list__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) ((MR_Unsigned) 0U));
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) "", ForeignModules_38, &ForeignModulesFileNames_39);
    Var_129 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".foreign");
    {
      MmakeVarForeignModules_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarForeignModules_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarForeignModules_40, 1) = ((MR_Box) (Var_129));
      MR_hl_field(MR_mktag(3), MmakeVarForeignModules_40, 2) = ((MR_Box) (ForeignModulesFileNames_39));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarForeignModules_40, STATE_VARIABLE_MmakeFile_126_126, &STATE_VARIABLE_MmakeFile_131_131);
    {
      MakeFileName_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MakeFileName_41, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), MakeFileName_41, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_8_p_0_6));
      MR_hl_field(MR_mktag(0), MakeFileName_41, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), MakeFileName_41, 3) = ((MR_Box) (Globals_9));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), MakeFileName_41, (MR_Word) ((MR_Unsigned) 0U), &ForeignFileNames_47, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_138_138);
    Var_139 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".foreign_cs");
    {
      MmakeVarForeignFileNames_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarForeignFileNames_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarForeignFileNames_48, 1) = ((MR_Box) (Var_139));
      MR_hl_field(MR_mktag(3), MmakeVarForeignFileNames_48, 2) = ((MR_Box) (ForeignFileNames_47));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarForeignFileNames_48, STATE_VARIABLE_MmakeFile_131_131, &STATE_VARIABLE_MmakeFile_141_141);
    Var_142 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".foreign_dlls");
    Var_500 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".foreign:%=\044(dlls_subdir)%.dll)");
    Var_144 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_500);
    {
      MmakeVarForeignDlls_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarForeignDlls_49, 0) = ((MR_Box) (Var_142));
      MR_hl_field(MR_mktag(2), MmakeVarForeignDlls_49, 1) = ((MR_Box) (Var_144));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarForeignDlls_49, STATE_VARIABLE_MmakeFile_141_141, &STATE_VARIABLE_MmakeFile_149_149);
    Var_150 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".init_cs");
    Var_503 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(cs_subdir)%.c)");
    Var_152 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_503);
    {
      MmakeVarInitCs_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarInitCs_50, 0) = ((MR_Box) (Var_150));
      MR_hl_field(MR_mktag(2), MmakeVarInitCs_50, 1) = ((MR_Box) (Var_152));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarInitCs_50, STATE_VARIABLE_MmakeFile_149_149, &STATE_VARIABLE_MmakeFile_157_157);
    parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(Modules_21, DepsMap_12, &ExtraLinkObjs_51);
    parse_tree__write_deps_file__get_extra_link_dependencies_6_p_0(Globals_9, (MR_String) ".c", ExtraLinkObjs_51, &ExtraLinkObjFileNamesC_52);
    Var_160 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".cs");
    Var_165 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".init_cs)");
    Var_163 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_165);
    {
      Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_162, 0) = ((MR_Box) (Var_163));
      MR_hl_field(MR_mktag(1), Var_162, 1) = ((MR_Box) (ExtraLinkObjFileNamesC_52));
    }
    {
      MmakeVarCs_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarCs_53, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarCs_53, 1) = ((MR_Box) (Var_160));
      MR_hl_field(MR_mktag(3), MmakeVarCs_53, 2) = ((MR_Box) (Var_162));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarCs_53, STATE_VARIABLE_MmakeFile_157_157, &STATE_VARIABLE_MmakeFile_167_167);
    Var_168 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".dlls");
    Var_506 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(dlls_subdir)%.dll)");
    Var_170 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_506);
    {
      MmakeVarDlls_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarDlls_54, 0) = ((MR_Box) (Var_168));
      MR_hl_field(MR_mktag(2), MmakeVarDlls_54, 1) = ((MR_Box) (Var_170));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarDlls_54, STATE_VARIABLE_MmakeFile_167_167, &STATE_VARIABLE_MmakeFile_175_175);
    parse_tree__write_deps_file__get_extra_link_dependencies_6_p_0(Globals_9, (MR_String) ".\044O", ExtraLinkObjs_51, &ExtraLinkObjFileNamesOs_55);
    Var_178 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_os");
    Var_509 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(os_subdir)%.\044O)");
    Var_181 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_509);
    {
      Var_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_180, 0) = ((MR_Box) (Var_181));
      MR_hl_field(MR_mktag(1), Var_180, 1) = ((MR_Box) (ExtraLinkObjFileNamesOs_55));
    }
    {
      MmakeVarAllOs_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarAllOs_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarAllOs_56, 1) = ((MR_Box) (Var_178));
      MR_hl_field(MR_mktag(3), MmakeVarAllOs_56, 2) = ((MR_Box) (Var_180));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarAllOs_56, STATE_VARIABLE_MmakeFile_175_175, &STATE_VARIABLE_MmakeFile_186_186);
    parse_tree__write_deps_file__get_extra_link_dependencies_6_p_0(Globals_9, (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)", ExtraLinkObjs_51, &ExtraLinkObjFileNamesPicOs_57);
    Var_189 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_pic_os");
    Var_512 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(os_subdir)%.\044(EXT_FOR_PIC_OBJECTS))");
    Var_192 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_512);
    {
      Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (Var_192));
      MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) (ExtraLinkObjFileNamesPicOs_57));
    }
    {
      MmakeVarAllPicOs_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarAllPicOs_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarAllPicOs_58, 1) = ((MR_Box) (Var_189));
      MR_hl_field(MR_mktag(3), MmakeVarAllPicOs_58, 2) = ((MR_Box) (Var_191));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarAllPicOs_58, STATE_VARIABLE_MmakeFile_186_186, &STATE_VARIABLE_MmakeFile_197_197);
    Var_198 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".os");
    Var_515 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_os)");
    Var_200 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_515);
    {
      MmakeVarOs_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarOs_59, 0) = ((MR_Box) (Var_198));
      MR_hl_field(MR_mktag(2), MmakeVarOs_59, 1) = ((MR_Box) (Var_200));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarOs_59, STATE_VARIABLE_MmakeFile_197_197, &STATE_VARIABLE_MmakeFile_205_205);
    Var_206 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".pic_os");
    Var_518 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_pic_os)");
    Var_208 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_518);
    {
      MmakeVarPicOs_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarPicOs_60, 0) = ((MR_Box) (Var_206));
      MR_hl_field(MR_mktag(2), MmakeVarPicOs_60, 1) = ((MR_Box) (Var_208));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarPicOs_60, STATE_VARIABLE_MmakeFile_205_205, &STATE_VARIABLE_MmakeFile_213_213);
    Var_214 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".useds");
    Var_521 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(used_subdir)%.used)");
    Var_216 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_521);
    {
      MmakeVarUseds_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarUseds_61, 0) = ((MR_Box) (Var_214));
      MR_hl_field(MR_mktag(2), MmakeVarUseds_61, 1) = ((MR_Box) (Var_216));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarUseds_61, STATE_VARIABLE_MmakeFile_213_213, &STATE_VARIABLE_MmakeFile_221_221);
    Var_222 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".javas");
    Var_524 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(javas_subdir)%.java)");
    Var_224 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_524);
    {
      MmakeVarJavas_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarJavas_62, 0) = ((MR_Box) (Var_222));
      MR_hl_field(MR_mktag(2), MmakeVarJavas_62, 1) = ((MR_Box) (Var_224));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarJavas_62, STATE_VARIABLE_MmakeFile_221_221, &STATE_VARIABLE_MmakeFile_229_229);
    Var_230 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".classes");
    Var_527 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(classes_subdir)%.class)");
    Var_233 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_527);
    Var_530 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(classes_subdir)%\\\044\044*.class))");
    Var_239 = mercury__string__f_43_43_2_f_0((MR_String) "\044(wildcard \044(", Var_530);
    {
      Var_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_238, 0) = ((MR_Box) (Var_239));
      MR_hl_field(MR_mktag(1), Var_238, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_232, 0) = ((MR_Box) (Var_233));
      MR_hl_field(MR_mktag(1), Var_232, 1) = ((MR_Box) (Var_238));
    }
    {
      MmakeVarClasses_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarClasses_63, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarClasses_63, 1) = ((MR_Box) (Var_230));
      MR_hl_field(MR_mktag(3), MmakeVarClasses_63, 2) = ((MR_Box) (Var_232));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarClasses_63, STATE_VARIABLE_MmakeFile_229_229, &STATE_VARIABLE_MmakeFile_245_245);
    Var_246 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".css");
    Var_533 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(css_subdir)%.cs)");
    Var_248 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_533);
    {
      MmakeVarCss_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarCss_64, 0) = ((MR_Box) (Var_246));
      MR_hl_field(MR_mktag(2), MmakeVarCss_64, 1) = ((MR_Box) (Var_248));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarCss_64, STATE_VARIABLE_MmakeFile_245_245, &STATE_VARIABLE_MmakeFile_253_253);
    Var_254 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".dirs");
    Var_536 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(dirs_subdir)%.dir)");
    Var_256 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_536);
    {
      MmakeVarDirs_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarDirs_65, 0) = ((MR_Box) (Var_254));
      MR_hl_field(MR_mktag(2), MmakeVarDirs_65, 1) = ((MR_Box) (Var_256));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarDirs_65, STATE_VARIABLE_MmakeFile_253_253, &STATE_VARIABLE_MmakeFile_261_261);
    Var_262 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".dir_os");
    Var_539 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(dirs_subdir)%.dir/*.\044O)");
    Var_264 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_539);
    {
      MmakeVarDirOs_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarDirOs_66, 0) = ((MR_Box) (Var_262));
      MR_hl_field(MR_mktag(2), MmakeVarDirOs_66, 1) = ((MR_Box) (Var_264));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarDirOs_66, STATE_VARIABLE_MmakeFile_261_261, &STATE_VARIABLE_MmakeFile_269_269);
    Var_270 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".dates");
    Var_542 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(dates_subdir)%.date)");
    Var_272 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_542);
    {
      MmakeVarDates_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarDates_67, 0) = ((MR_Box) (Var_270));
      MR_hl_field(MR_mktag(2), MmakeVarDates_67, 1) = ((MR_Box) (Var_272));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarDates_67, STATE_VARIABLE_MmakeFile_269_269, &STATE_VARIABLE_MmakeFile_277_277);
    Var_278 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".date0s");
    Var_545 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(date0s_subdir)%.date0)");
    Var_280 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_545);
    {
      MmakeVarDate0s_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarDate0s_68, 0) = ((MR_Box) (Var_278));
      MR_hl_field(MR_mktag(2), MmakeVarDate0s_68, 1) = ((MR_Box) (Var_280));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarDate0s_68, STATE_VARIABLE_MmakeFile_277_277, &STATE_VARIABLE_MmakeFile_285_285);
    Var_286 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".date3s");
    Var_548 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(date3s_subdir)%.date3)");
    Var_288 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_548);
    {
      MmakeVarDate3s_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarDate3s_69, 0) = ((MR_Box) (Var_286));
      MR_hl_field(MR_mktag(2), MmakeVarDate3s_69, 1) = ((MR_Box) (Var_288));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarDate3s_69, STATE_VARIABLE_MmakeFile_285_285, &STATE_VARIABLE_MmakeFile_293_293);
    Var_294 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".optdates");
    Var_551 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(optdates_subdir)%.optdate)");
    Var_296 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_551);
    {
      MmakeVarOptDates_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarOptDates_70, 0) = ((MR_Box) (Var_294));
      MR_hl_field(MR_mktag(2), MmakeVarOptDates_70, 1) = ((MR_Box) (Var_296));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarOptDates_70, STATE_VARIABLE_MmakeFile_293_293, &STATE_VARIABLE_MmakeFile_301_301);
    Var_302 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".trans_opt_dates");
    Var_554 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(trans_opt_dates_subdir)%.trans_opt_date)");
    Var_304 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_554);
    {
      MmakeVarTransOptDates_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarTransOptDates_71, 0) = ((MR_Box) (Var_302));
      MR_hl_field(MR_mktag(2), MmakeVarTransOptDates_71, 1) = ((MR_Box) (Var_304));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarTransOptDates_71, STATE_VARIABLE_MmakeFile_301_301, &STATE_VARIABLE_MmakeFile_309_309);
    Var_310 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".c_dates");
    Var_557 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(c_dates_subdir)%.c_date)");
    Var_312 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_557);
    {
      MmakeVarCDates_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarCDates_72, 0) = ((MR_Box) (Var_310));
      MR_hl_field(MR_mktag(2), MmakeVarCDates_72, 1) = ((MR_Box) (Var_312));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarCDates_72, STATE_VARIABLE_MmakeFile_309_309, &STATE_VARIABLE_MmakeFile_317_317);
    Var_318 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".java_dates");
    Var_560 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(java_dates_subdir)%.java_date)");
    Var_320 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_560);
    {
      MmakeVarJavaDates_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarJavaDates_73, 0) = ((MR_Box) (Var_318));
      MR_hl_field(MR_mktag(2), MmakeVarJavaDates_73, 1) = ((MR_Box) (Var_320));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarJavaDates_73, STATE_VARIABLE_MmakeFile_317_317, &STATE_VARIABLE_MmakeFile_325_325);
    Var_326 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".cs_dates");
    Var_563 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(cs_dates_subdir)%.cs_date)");
    Var_328 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_563);
    {
      MmakeVarCsDates_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarCsDates_74, 0) = ((MR_Box) (Var_326));
      MR_hl_field(MR_mktag(2), MmakeVarCsDates_74, 1) = ((MR_Box) (Var_328));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarCsDates_74, STATE_VARIABLE_MmakeFile_325_325, &STATE_VARIABLE_MmakeFile_333_333);
    Var_334 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".ds");
    Var_566 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(ds_subdir)%.d)");
    Var_336 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_566);
    {
      MmakeVarDs_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarDs_75, 0) = ((MR_Box) (Var_334));
      MR_hl_field(MR_mktag(2), MmakeVarDs_75, 1) = ((MR_Box) (Var_336));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarDs_75, STATE_VARIABLE_MmakeFile_333_333, &STATE_VARIABLE_MmakeFile_341_341);
    Var_342 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".module_deps");
    Var_350 = make__make_module_dep_file_extension_0_f_0();
    Var_569 = mercury__string__f_43_43_2_f_0(Var_350, (MR_String) ")");
    Var_571 = mercury__string__f_43_43_2_f_0((MR_String) ".mods:%=\044(module_deps_subdir)%", Var_569);
    Var_572 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, Var_571);
    Var_344 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_572);
    {
      MmakeVarModuleDeps_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarModuleDeps_76, 0) = ((MR_Box) (Var_342));
      MR_hl_field(MR_mktag(2), MmakeVarModuleDeps_76, 1) = ((MR_Box) (Var_344));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarModuleDeps_76, STATE_VARIABLE_MmakeFile_341_341, &STATE_VARIABLE_MmakeFile_352_352);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 286, &HighLevelCode_77);
    switch (HighLevelCode_77) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MihSources_78 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        switch (Target_36) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_354;
              MR_String Var_575;

              Var_575 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
              Var_354 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_575);
              {
                MihSources_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MihSources_78, 0) = ((MR_Box) (Var_354));
                MR_hl_field(MR_mktag(1), MihSources_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 2:
            MihSources_78 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        break;
    }
    Var_360 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mihs");
    {
      MmakeVarMihs_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarMihs_79, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarMihs_79, 1) = ((MR_Box) (Var_360));
      MR_hl_field(MR_mktag(3), MmakeVarMihs_79, 2) = ((MR_Box) (MihSources_78));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarMihs_79, STATE_VARIABLE_MmakeFile_352_352, &STATE_VARIABLE_MmakeFile_362_362);
    switch (Target_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_363;
          MR_String Var_578;

          Var_578 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=%.mh)");
          Var_363 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_578);
          {
            MhSources_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MhSources_80, 0) = ((MR_Box) (Var_363));
            MR_hl_field(MR_mktag(1), MhSources_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        MhSources_80 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    Var_369 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mhs");
    {
      MmakeVarMhs_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarMhs_81, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarMhs_81, 1) = ((MR_Box) (Var_369));
      MR_hl_field(MR_mktag(3), MmakeVarMhs_81, 2) = ((MR_Box) (MhSources_80));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarMhs_81, STATE_VARIABLE_MmakeFile_362_362, &STATE_VARIABLE_MmakeFile_371_371);
    Var_372 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_mihs");
    Var_581 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
    Var_374 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_581);
    {
      MmakeVarAllMihs_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarAllMihs_82, 0) = ((MR_Box) (Var_372));
      MR_hl_field(MR_mktag(2), MmakeVarAllMihs_82, 1) = ((MR_Box) (Var_374));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarAllMihs_82, STATE_VARIABLE_MmakeFile_371_371, &STATE_VARIABLE_MmakeFile_379_379);
    Var_380 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_mhs");
    Var_584 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=%.mh)");
    Var_382 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_584);
    {
      MmakeVarAllMhs_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarAllMhs_83, 0) = ((MR_Box) (Var_380));
      MR_hl_field(MR_mktag(2), MmakeVarAllMhs_83, 1) = ((MR_Box) (Var_382));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarAllMhs_83, STATE_VARIABLE_MmakeFile_379_379, &STATE_VARIABLE_MmakeFile_387_387);
    Var_388 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".ints");
    Var_587 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(ints_subdir)%.int)");
    Var_391 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_587);
    Var_590 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(int2s_subdir)%.int2)");
    Var_397 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_590);
    {
      Var_396 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_396, 0) = ((MR_Box) (Var_397));
      MR_hl_field(MR_mktag(1), Var_396, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_390 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_390, 0) = ((MR_Box) (Var_391));
      MR_hl_field(MR_mktag(1), Var_390, 1) = ((MR_Box) (Var_396));
    }
    {
      MmakeVarInts_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarInts_84, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarInts_84, 1) = ((MR_Box) (Var_388));
      MR_hl_field(MR_mktag(3), MmakeVarInts_84, 2) = ((MR_Box) (Var_390));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarInts_84, STATE_VARIABLE_MmakeFile_387_387, &STATE_VARIABLE_MmakeFile_403_403);
    Var_404 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".int0s");
    Var_593 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".parent_mods:%=\044(int0s_subdir)%.int0)");
    Var_406 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_593);
    {
      MmakeVarInt0s_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarInt0s_85, 0) = ((MR_Box) (Var_404));
      MR_hl_field(MR_mktag(2), MmakeVarInt0s_85, 1) = ((MR_Box) (Var_406));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarInt0s_85, STATE_VARIABLE_MmakeFile_403_403, &STATE_VARIABLE_MmakeFile_411_411);
    Var_412 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_int0s");
    Var_596 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(int0s_subdir)%.int0)");
    Var_414 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_596);
    {
      MmakeVarAllInt0s_86 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarAllInt0s_86, 0) = ((MR_Box) (Var_412));
      MR_hl_field(MR_mktag(2), MmakeVarAllInt0s_86, 1) = ((MR_Box) (Var_414));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarAllInt0s_86, STATE_VARIABLE_MmakeFile_411_411, &STATE_VARIABLE_MmakeFile_419_419);
    Var_420 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".int3s");
    Var_599 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(int3s_subdir)%.int3)");
    Var_422 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_599);
    {
      MmakeVarInt3s_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarInt3s_87, 0) = ((MR_Box) (Var_420));
      MR_hl_field(MR_mktag(2), MmakeVarInt3s_87, 1) = ((MR_Box) (Var_422));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarInt3s_87, STATE_VARIABLE_MmakeFile_419_419, &STATE_VARIABLE_MmakeFile_427_427);
    Var_428 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".opts");
    Var_602 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(opts_subdir)%.opt)");
    Var_430 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_602);
    {
      MmakeVarOpts_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarOpts_88, 0) = ((MR_Box) (Var_428));
      MR_hl_field(MR_mktag(2), MmakeVarOpts_88, 1) = ((MR_Box) (Var_430));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarOpts_88, STATE_VARIABLE_MmakeFile_427_427, &STATE_VARIABLE_MmakeFile_435_435);
    Var_436 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".trans_opts");
    Var_605 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(trans_opts_subdir)%.trans_opt)");
    Var_438 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_605);
    {
      MmakeVarTransOpts_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarTransOpts_89, 0) = ((MR_Box) (Var_436));
      MR_hl_field(MR_mktag(2), MmakeVarTransOpts_89, 1) = ((MR_Box) (Var_438));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarTransOpts_89, STATE_VARIABLE_MmakeFile_435_435, &STATE_VARIABLE_MmakeFile_443_443);
    Var_444 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".analysiss");
    Var_608 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(analysiss_subdir)%.analysis)");
    Var_446 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_608);
    {
      MmakeVarAnalysiss_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarAnalysiss_90, 0) = ((MR_Box) (Var_444));
      MR_hl_field(MR_mktag(2), MmakeVarAnalysiss_90, 1) = ((MR_Box) (Var_446));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarAnalysiss_90, STATE_VARIABLE_MmakeFile_443_443, &STATE_VARIABLE_MmakeFile_451_451);
    Var_452 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".requests");
    Var_611 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(requests_subdir)%.request)");
    Var_454 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_611);
    {
      MmakeVarRequests_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarRequests_91, 0) = ((MR_Box) (Var_452));
      MR_hl_field(MR_mktag(2), MmakeVarRequests_91, 1) = ((MR_Box) (Var_454));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarRequests_91, STATE_VARIABLE_MmakeFile_451_451, &STATE_VARIABLE_MmakeFile_459_459);
    Var_460 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".imdgs");
    Var_614 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(imdgs_subdir)%.imdg)");
    Var_462 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_614);
    {
      MmakeVarImdgs_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarImdgs_92, 0) = ((MR_Box) (Var_460));
      MR_hl_field(MR_mktag(2), MmakeVarImdgs_92, 1) = ((MR_Box) (Var_462));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarImdgs_92, STATE_VARIABLE_MmakeFile_459_459, &STATE_VARIABLE_MmakeFile_467_467);
    Var_468 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".profs");
    Var_617 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=%.prof)");
    Var_470 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_617);
    {
      MmakeVarProfs_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarProfs_93, 0) = ((MR_Box) (Var_468));
      MR_hl_field(MR_mktag(2), MmakeVarProfs_93, 1) = ((MR_Box) (Var_470));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarProfs_93, STATE_VARIABLE_MmakeFile_467_467, STATE_VARIABLE_MmakeFile_95);
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

    parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_50_95_95_91_51_93_95_48_5_p_0(Modules_5, DepsMap_6, (MR_Word) ((MR_Unsigned) 0U), &ExtraLinkObjs0_9);
    mercury__list__reverse_2_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[3]), ExtraLinkObjs0_9, ExtraLinkObjs_8);
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
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_ExtraLinkObjs_5 = STATE_VARIABLE_ExtraLinkObjs_0_4;
    else
    {
      MR_Word Module_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Modules_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ModuleAndImports_17;
      MR_Word FactDeps_18;
      MR_Integer NumFactDeps_19;
      MR_Word ModuleList_20;
      MR_Word NewLinkObjs_22;
      MR_Word Var_25;
      MR_Word STATE_VARIABLE_ExtraLinkObjs_26_26;
      MR_Box conv0_Var_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_ExtraLinkObjs_0_4;

      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), HeadVar__2_2, ((MR_Box) (Module_11)), &conv0_Var_25);
      Var_25 = ((MR_Word) (conv0_Var_25));
      ModuleAndImports_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_25, (MR_Integer) 1))));
      parse_tree__module_imports__module_and_imports_get_fact_table_deps_2_p_0(ModuleAndImports_17, &FactDeps_18);
      mercury__list__length_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactDeps_18, &NumFactDeps_19);
      mercury__list__duplicate_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NumFactDeps_19, ((MR_Box) (Module_11)), &ModuleList_20);
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), FactDeps_18, ModuleList_20, &NewLinkObjs_22);
      mercury__list__append_3_p_1((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[3]), NewLinkObjs_22, STATE_VARIABLE_ExtraLinkObjs_0_4, &STATE_VARIABLE_ExtraLinkObjs_26_26);
      // direct tailcall eliminated
      ;
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

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Module_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Modules0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ModulesTail_9;
      MR_Word ModuleAndImports_11;
      MR_Word Errors_12;
      MR_Word FatalErrors_13;
      MR_Word Var_14;
      MR_Word Var_15;
      MR_Box conv0_Var_14;

      parse_tree__write_deps_file__select_ok_modules_3_p_0(Modules0_6, DepsMap_2, &ModulesTail_9);
      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_2, ((MR_Box) (Module_5)), &conv0_Var_14);
      Var_14 = ((MR_Word) (conv0_Var_14));
      ModuleAndImports_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1))));
      parse_tree__module_imports__module_and_imports_get_errors_2_p_0(ModuleAndImports_11, &Errors_12);
      Var_15 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
      mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_12, Var_15, &FatalErrors_13);
      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_13);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String ExtraLink_14;
    MR_Word Module_15;
    MR_Word ExtraLinks_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_String FileName_17;
    MR_Word FileNames_18;
    MR_Word Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

    ExtraLink_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0))));
    Module_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1))));
    parse_tree__file_names__extra_link_obj_file_name_8_p_0(Globals_1, Module_15, ExtraLink_14, Suffix_2, (MR_Integer) 1, &FileName_17);
    parse_tree__write_deps_file__get_extra_link_dependencies_6_p_0(Globals_1, Suffix_2, ExtraLinks_16, &FileNames_18);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Dep_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Deps_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_56_93_95_48_10_p_0(Globals_1, Dep_22, IntDepsGraph_3, ImpDepsGraph_4, IndirectDepsGraph_5, IndirectOptDepsGraph_6, TransOptOrder_7);
      // direct tailcall eliminated
      ;
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

    succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1095__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
    MR_Word ModuleName_22;
    MR_Word IndirectOptDepsMap_23;
    MR_Word IndirectOptDeps_24;
    MR_Word Intermod_25;
    MR_Word IntDepsMap_26;
    MR_Word ImpDepsMap_27;
    MR_Word IndirectDeps_28;
    MR_Word CJCsEFIMs0_30;
    MR_Word Target_31;
    MR_Word CJCsEFIMs_32;
    MR_Word FindModule_33;
    MR_Word TransOptDeps0_35;
    MR_Word TransOptDeps_38;
    MR_Word Errors_39;
    MR_Word FatalErrors_40;
    MR_Word STATE_VARIABLE_ModuleAndImports_43_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Dep_12, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_ModuleAndImports_45_45;
    MR_Word STATE_VARIABLE_ModuleAndImports_46_46;
    MR_Word STATE_VARIABLE_ModuleAndImports_47_47;
    MR_Word STATE_VARIABLE_ModuleAndImports_48_48;
    MR_Word Var_50;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word TransOptDeps1_37;

    parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(STATE_VARIABLE_ModuleAndImports_43_43, &ModuleName_22);
    parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(IndirectOptDepsGraph_16, ModuleName_22, &IndirectOptDepsMap_23);
    mercury__one_or_more_map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IndirectOptDepsMap_23, &IndirectOptDeps_24);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 354, &Intermod_25);
    switch (Intermod_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word IndirectDepsMap_29;

          parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(IntDepsGraph_13, ModuleName_22, &IntDepsMap_26);
          parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(ImpDepsGraph_14, ModuleName_22, &ImpDepsMap_27);
          parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(IndirectDepsGraph_15, ModuleName_22, &IndirectDepsMap_29);
          mercury__one_or_more_map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IndirectDepsMap_29, &IndirectDeps_28);
        }
        break;
      case (MR_Integer) 1:
        {
          IntDepsMap_26 = IndirectOptDepsMap_23;
          ImpDepsMap_27 = IndirectOptDepsMap_23;
          IndirectDeps_28 = IndirectOptDeps_24;
        }
        break;
    }
    CJCsEFIMs0_30 = parse_tree__prog_data_foreign__init_foreign_import_modules_0_f_0();
    libs__globals__get_target_2_p_0(Globals_11, &Target_31);
    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsEFIMs0_30, (MR_Integer) 0))));
    Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsEFIMs0_30, (MR_Integer) 1))));
    Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsEFIMs0_30, (MR_Integer) 2))));
    Var_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CJCsEFIMs0_30, (MR_Integer) 3))));
    switch (Target_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          CJCsEFIMs_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CJCsEFIMs_32, 0) = ((MR_Box) (IndirectOptDeps_24));
          MR_hl_field(MR_mktag(0), CJCsEFIMs_32, 1) = ((MR_Box) (Var_75));
          MR_hl_field(MR_mktag(0), CJCsEFIMs_32, 2) = ((MR_Box) (Var_74));
          MR_hl_field(MR_mktag(0), CJCsEFIMs_32, 3) = ((MR_Box) (Var_73));
        }
        break;
      case (MR_Integer) 1:
        {
          CJCsEFIMs_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CJCsEFIMs_32, 0) = ((MR_Box) (Var_76));
          MR_hl_field(MR_mktag(0), CJCsEFIMs_32, 1) = ((MR_Box) (Var_75));
          MR_hl_field(MR_mktag(0), CJCsEFIMs_32, 2) = ((MR_Box) (IndirectOptDeps_24));
          MR_hl_field(MR_mktag(0), CJCsEFIMs_32, 3) = ((MR_Box) (Var_73));
        }
        break;
      case (MR_Integer) 3:
        {
          CJCsEFIMs_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CJCsEFIMs_32, 0) = ((MR_Box) (Var_76));
          MR_hl_field(MR_mktag(0), CJCsEFIMs_32, 1) = ((MR_Box) (Var_75));
          MR_hl_field(MR_mktag(0), CJCsEFIMs_32, 2) = ((MR_Box) (Var_74));
          MR_hl_field(MR_mktag(0), CJCsEFIMs_32, 3) = ((MR_Box) (IndirectOptDeps_24));
        }
        break;
      case (MR_Integer) 2:
        {
          CJCsEFIMs_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), CJCsEFIMs_32, 0) = ((MR_Box) (Var_76));
          MR_hl_field(MR_mktag(0), CJCsEFIMs_32, 1) = ((MR_Box) (IndirectOptDeps_24));
          MR_hl_field(MR_mktag(0), CJCsEFIMs_32, 2) = ((MR_Box) (Var_74));
          MR_hl_field(MR_mktag(0), CJCsEFIMs_32, 3) = ((MR_Box) (Var_73));
        }
        break;
    }
    parse_tree__module_imports__module_and_imports_set_int_deps_map_3_p_0(IntDepsMap_26, STATE_VARIABLE_ModuleAndImports_43_43, &STATE_VARIABLE_ModuleAndImports_45_45);
    parse_tree__module_imports__module_and_imports_set_imp_deps_map_3_p_0(ImpDepsMap_27, STATE_VARIABLE_ModuleAndImports_45_45, &STATE_VARIABLE_ModuleAndImports_46_46);
    parse_tree__module_imports__module_and_imports_set_indirect_deps_3_p_0(IndirectDeps_28, STATE_VARIABLE_ModuleAndImports_46_46, &STATE_VARIABLE_ModuleAndImports_47_47);
    parse_tree__module_imports__module_and_imports_set_c_j_cs_e_fims_3_p_0(CJCsEFIMs_32, STATE_VARIABLE_ModuleAndImports_47_47, &STATE_VARIABLE_ModuleAndImports_48_48);
    {
      FindModule_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FindModule_33, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[2]));
      MR_hl_field(MR_mktag(0), FindModule_33, 1) = ((MR_Box) (parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_56_93_95_48_10_p_0_1));
      MR_hl_field(MR_mktag(0), FindModule_33, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), FindModule_33, 3) = ((MR_Box) (ModuleName_22));
    }
    mercury__list__drop_while_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), FindModule_33, TransOptOrder_17, &TransOptDeps0_35);
    succeeded = (TransOptDeps0_35 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      TransOptDeps1_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TransOptDeps0_35, (MR_Integer) 1))));
      TransOptDeps_38 = TransOptDeps1_37;
    }
    else
      TransOptDeps_38 = (MR_Word) ((MR_Unsigned) 0U);
    parse_tree__module_imports__module_and_imports_get_errors_2_p_0(STATE_VARIABLE_ModuleAndImports_48_48, &Errors_39);
    Var_50 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
    mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_39, Var_50, &FatalErrors_40);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_40);
    if (succeeded)
    {
      MR_Word Var_51;

      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (TransOptDeps_38));
      }
      parse_tree__write_deps_file__write_dependency_file_6_p_0(Globals_11, STATE_VARIABLE_ModuleAndImports_48_48, IndirectOptDeps_24, Var_51);
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

    parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1124__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_17);
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
    MR_Word ModuleKey_7;
    MR_Word DepsGraph_8;
    MR_Word DepsKeysSet_9;
    MR_Word AddKeyDep_10;
    MR_Word Var_19;
    MR_Box conv1_Dependencies_6;

    mercury__digraph__add_vertex_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_5)), &ModuleKey_7, DepsGraph0_4, &DepsGraph_8);
    mercury__digraph__lookup_key_set_from_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DepsGraph_8, ModuleKey_7, &DepsKeysSet_9);
    {
      AddKeyDep_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AddKeyDep_10, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), AddKeyDep_10, 1) = ((MR_Box) (parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1));
      MR_hl_field(MR_mktag(0), AddKeyDep_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), AddKeyDep_10, 3) = ((MR_Box) (DepsGraph_8));
    }
    Var_19 = mercury__one_or_more_map__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0));
    mercury__sparse_bitset__foldl_4_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[1]), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]), AddKeyDep_10, DepsKeysSet_9, ((MR_Box) (Var_19)), &conv1_Dependencies_6);
    *Dependencies_6 = ((MR_Word) (conv1_Dependencies_6));
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

    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 65, &Verbose_12);
    parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(ModuleAndImports_8, &ModuleName_13);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 0, (MR_String) ".d", ModuleName_13, &DependencyFileName_14);
    Var_38 = mercury__dir__dirname_1_f_0(DependencyFileName_14);
    mercury__io__make_temp_file_6_p_0(Var_38, (MR_String) "tmp_d", (MR_String) "", &TmpDependencyFileNameRes_15);
    if (((MR_tag((MR_Word) TmpDependencyFileNameRes_15)) == (MR_Integer) 1))
    {
      MR_Word Error_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TmpDependencyFileNameRes_15, (MR_Integer) 0))));
      MR_String Message_17;
      MR_String Var_96;

      Var_96 = mercury__io__error_message_1_f_0(Error_16);
      Message_17 = mercury__string__f_43_43_2_f_0((MR_String) "Could not create temporary file: ", Var_96);
      libs__file_util__report_error_3_p_0(Message_17);
    }
    else
    {
      MR_String TmpDependencyFileName_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), TmpDependencyFileNameRes_15, (MR_Integer) 0))));
      MR_Word Result_19;

      libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% Writing auto-dependency file \140");
      libs__file_util__maybe_write_string_4_p_0(Verbose_12, DependencyFileName_14);
      libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "\'...");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_12);
      mercury__io__open_output_4_p_0(TmpDependencyFileName_18, &Result_19);
      if (((MR_tag((MR_Word) Result_19)) == (MR_Integer) 1))
      {
        MR_Word IOError_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_19, (MR_Integer) 0))));
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
          Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (IOErrorMessage_21));
          MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) ((MR_String) "\' for output: "));
          MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_92));
        }
        {
          Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (TmpDependencyFileName_18));
          MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_90));
        }
        {
          Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) ((MR_String) "error opening temporary file \140"));
          MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (Var_89));
        }
        mercury__string__append_list_2_p_0(Var_87, &Message_98);
        libs__file_util__report_error_3_p_0(Message_98);
      }
      else
      {
        MR_Word DepStream_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result_19, (MR_Integer) 0))));
        MR_Word MmakeFile0_23;
        MR_Word MmakeFile_24;
        MR_Word FirstRenameResult_25;

        libs__mmakefiles__start_mmakefile_1_p_0(&MmakeFile0_23);
        parse_tree__write_deps_file__generate_d_file_8_p_0(Globals_7, ModuleAndImports_8, AllDeps_9, MaybeTransOptDeps_10, MmakeFile0_23, &MmakeFile_24);
        libs__mmakefiles__end_mmakefile_4_p_0(DepStream_22, MmakeFile_24);
        mercury__io__close_output_3_p_0(DepStream_22);
        mercury__io__rename_file_5_p_0(TmpDependencyFileName_18, DependencyFileName_14, &FirstRenameResult_25);
        if ((FirstRenameResult_25 == (MR_Word) ((MR_Unsigned) 0U)))
          libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) " done.\n");
        else
        {
          MR_Word RemoveResult_27;

          mercury__io__remove_file_4_p_0(DependencyFileName_14, &RemoveResult_27);
          if ((RemoveResult_27 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word SecondRenameResult_30;

            mercury__io__rename_file_5_p_0(TmpDependencyFileName_18, DependencyFileName_14, &SecondRenameResult_30);
            if ((SecondRenameResult_30 == (MR_Word) ((MR_Unsigned) 0U)))
              libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) " done.\n");
            else
            {
              MR_Word Error5_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SecondRenameResult_30, (MR_Integer) 0))));
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
                Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_70, 0) = ((MR_Box) (ErrorMsg_101));
                MR_hl_field(MR_mktag(1), Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) ((MR_String) "\': "));
                MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_70));
              }
              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (DependencyFileName_14));
                MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_68));
              }
              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) ((MR_String) "\' as \140"));
                MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_67));
              }
              {
                Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (TmpDependencyFileName_18));
                MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_65));
              }
              {
                Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) ((MR_String) "can\'t rename file \140"));
                MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) (Var_64));
              }
              mercury__string__append_list_2_p_0(Var_62, &Message_100);
              libs__file_util__report_error_3_p_0(Message_100);
            }
          }
          else
          {
            MR_Word Error4_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoveResult_27, (MR_Integer) 0))));
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
              Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (ErrorMsg_29));
              MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) ((MR_String) "\': "));
              MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_81));
            }
            {
              Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (DependencyFileName_14));
              MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) (Var_79));
            }
            {
              Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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
parse_tree__write_deps_file__generate_d_file_8_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv17_MmakeRule_10;

    parse_tree__write_deps_file__construct_subdirs_shorthand_rule_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), &conv17_MmakeRule_10);
    *wrapper_arg_2 = ((MR_Box) (conv17_MmakeRule_10));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv15_MmakeRule_12;

    parse_tree__write_deps_file__gather_foreign_import_deps_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), &conv15_MmakeRule_12);
    *wrapper_arg_2 = ((MR_Box) (conv15_MmakeRule_12));
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv14_LambdaHeadVar__2_472;

    succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_d_file__700__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv14_LambdaHeadVar__2_472);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv14_LambdaHeadVar__2_472));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_d_file__686__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv12_STATE_VARIABLE_FIMSpecs_13;

    parse_tree__write_deps_file__gather_fim_specs_in_int_for_opt_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv12_STATE_VARIABLE_FIMSpecs_13);
    *wrapper_arg_3 = ((MR_Box) (conv12_STATE_VARIABLE_FIMSpecs_13));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_STATE_VARIABLE_FIMSpecs_7;

    parse_tree__write_deps_file__gather_fim_specs_in_parse_tree_plain_opt_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv10_STATE_VARIABLE_FIMSpecs_7);
    *wrapper_arg_3 = ((MR_Box) (conv10_STATE_VARIABLE_FIMSpecs_7));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv8_STATE_VARIABLE_FIMSpecs_11;

    parse_tree__write_deps_file__gather_fim_specs_in_indirect_int_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_FIMSpecs_11);
    *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_FIMSpecs_11));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_STATE_VARIABLE_FIMSpecs_11;

    parse_tree__write_deps_file__gather_fim_specs_in_direct_int_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_FIMSpecs_11);
    *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_FIMSpecs_11));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_STATE_VARIABLE_FIMSpecs_9;

    parse_tree__write_deps_file__gather_fim_specs_in_ancestor_int_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_FIMSpecs_9);
    *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_FIMSpecs_9));
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

    conv3_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) (wrapper_arg_1)));
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

    parse_tree__write_deps_file__gather_nested_deps_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), &conv1_MmakeRule_12);
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

    conv0_IncludePath_6 = parse_tree__write_deps_file__foreign_include_file_path_name_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
  MR_Word STATE_VARIABLE_MmakeFile_0_160,
  MR_Word * STATE_VARIABLE_MmakeFile_161)
{
  {
    MR_bool succeeded;
    MR_String SourceFileName_15;
    MR_Word SourceFileModuleName_16;
    MR_Word ModuleName_17;
    MR_Word Ancestors_18;
    MR_Word PublicChildrenMap_19;
    MR_Word NestedDeps_20;
    MR_Word IntDepsMap_21;
    MR_Word ImpDepsMap_22;
    MR_Word FactDeps0_24;
    MR_Word ForeignImportModules0_25;
    MR_Word ForeignIncludeFilesCord_26;
    MR_Word ContainsForeignCode_27;
    MR_Word AugCompUnit_28;
    MR_Word IntDeps_29;
    MR_Word ImpDeps_30;
    MR_Word PublicChildren_31;
    MR_String ModuleNameString_32;
    MR_String Version_33;
    MR_String FullArch_34;
    MR_Word MmakeStartComment_35;
    MR_String ModuleMakeVarName_36;
    MR_Word LongDeps0_37;
    MR_Word ShortDeps0_38;
    MR_Word LongDeps_39;
    MR_Word ShortDeps1_40;
    MR_Word ShortDeps_41;
    MR_Word FactDeps_42;
    MR_String TransOptDateFileName_43;
    MR_String ErrFileName_55;
    MR_String OptDateFileName_56;
    MR_String CDateFileName_57;
    MR_String ObjFileName_58;
    MR_String JavaDateFileName_59;
    MR_String PicObjFileName_60;
    MR_String Int0FileName_61;
    MR_Word AncestorSourceGroups_65;
    MR_Word LongDepsSourceGroups_66;
    MR_Word ShortDepsSourceGroups_67;
    MR_Word ForeignIncludeFiles_68;
    MR_Word ForeignImportFileNames_69;
    MR_Word UseOptFiles_81;
    MR_Word Intermod_82;
    MR_Word IntermodDirs_83;
    MR_Word HighLevelCode_100;
    MR_Word CompilationTarget_101;
    MR_String CFileName_103;
    MR_String MhHeaderFileName_104;
    MR_String MihHeaderFileName_105;
    MR_Word MmakeRuleMhMihOnC_106;
    MR_String JavaFileName_107;
    MR_String ModuleDepFileName_108;
    MR_Word MmakeFragmentModuleDep_109;
    MR_String DateFileName_110;
    MR_String Date0FileName_111;
    MR_Word AncestorDateFileNames_112;
    MR_Word AncestorInt0FileNames_113;
    MR_Word LongDepInt3FileNames_114;
    MR_Word ShortDepInt3FileNames_115;
    MR_Word MmakeRuleParentDates_116;
    MR_Word AncestorDate0FileNames_117;
    MR_Word MmakeRuleParentDate0s_118;
    MR_Word HaveMap_119;
    MR_String ModuleArg_120;
    MR_Word FIMSpecs_122;
    MR_Word ForeignImportedModuleNames_142;
    MR_String IntFileName_149;
    MR_String Int2FileName_150;
    MR_String Int3FileName_151;
    MR_String OptFileName_152;
    MR_String TransOptFileName_153;
    MR_String Date3FileName_154;
    MR_Word MmakeRulesInstallShadows_155;
    MR_Word UseSubdirs_156;
    MR_Word STATE_VARIABLE_MmakeFile_165_165;
    MR_Word STATE_VARIABLE_MmakeFile_176_176;
    MR_Word Var_218;
    MR_Word Var_219;
    MR_Word Var_220;
    MR_Word Var_221;
    MR_Word Var_222;
    MR_Word STATE_VARIABLE_SourceGroups_225_225;
    MR_Word Var_226;
    MR_Word STATE_VARIABLE_SourceGroups_228_228;
    MR_Word STATE_VARIABLE_SourceGroups_241_241;
    MR_Word Var_242;
    MR_Word Var_243;
    MR_Word Var_244;
    MR_Word STATE_VARIABLE_SourceGroups_245_245;
    MR_Word Var_246;
    MR_Word STATE_VARIABLE_MmakeFile_287_287;
    MR_Word STATE_VARIABLE_MmakeFile_301_301;
    MR_Word STATE_VARIABLE_MmakeFile_311_311;
    MR_Word STATE_VARIABLE_MmakeFile_345_345;
    MR_Word STATE_VARIABLE_MmakeFile_355_355;
    MR_Word Var_367;
    MR_Word Var_368;
    MR_Word Var_370;
    MR_Word STATE_VARIABLE_MmakeFile_373_373;
    MR_String Var_378;
    MR_Word Var_382;
    MR_Word Var_385;
    MR_Word Var_388;
    MR_Word STATE_VARIABLE_MmakeFile_394_394;
    MR_Word Var_402;
    MR_Word Var_405;
    MR_Word Var_408;
    MR_Word Var_411;
    MR_Word Var_415;
    MR_Word Var_416;
    MR_Word Var_418;
    MR_Word Var_419;
    MR_Word Var_421;
    MR_Word Var_422;
    MR_Word Var_423;
    MR_Word Var_425;
    MR_Word Var_426;
    MR_Word Var_428;
    MR_Word Var_429;
    MR_Word Var_431;
    MR_Word STATE_VARIABLE_MmakeFile_434_434;
    MR_Word Var_436;
    MR_Word Var_440;
    MR_Word Var_441;
    MR_Word Var_443;
    MR_Word Var_445;
    MR_Word Var_446;
    MR_Word Var_447;
    MR_Word Var_449;
    MR_Word Var_450;
    MR_Word Var_452;
    MR_Word STATE_VARIABLE_MmakeFile_455_455;
    MR_Word Var_470;
    MR_Word STATE_VARIABLE_MmakeFile_487_487;
    MR_Word Var_506;
    MR_Word Var_509;
    MR_Word Var_511;
    MR_String Var_512;
    MR_Word Var_514;
    MR_Word Var_515;
    MR_Word Var_518;
    MR_Word Var_520;
    MR_String Var_521;
    MR_Word Var_523;
    MR_Word Var_524;
    MR_Word Var_529;
    MR_String Var_530;
    MR_Word Var_532;
    MR_Word Var_533;
    MR_Word Var_536;
    MR_Word Var_538;
    MR_String Var_539;
    MR_Word Var_541;
    MR_Word Var_542;
    MR_Word Var_545;
    MR_Word Var_547;
    MR_String Var_548;
    MR_Word Var_550;
    MR_Word Var_551;
    MR_Word Var_554;
    MR_Word Var_556;
    MR_String Var_557;
    MR_Word STATE_VARIABLE_MmakeFile_560_560;
    MR_Word STATE_VARIABLE_MmakeFile_576_576;
    MR_Word TargetGroup_652;
    MR_Word TargetGroups_653;
    MR_String SourceFileBase_54;
    MR_String Var_718;

    parse_tree__module_imports__module_and_imports_d_file_15_p_0(ModuleAndImports_10, &SourceFileName_15, &SourceFileModuleName_16, &ModuleName_17, &Ancestors_18, &PublicChildrenMap_19, &NestedDeps_20, &IntDepsMap_21, &ImpDepsMap_22, &ShortDeps0_38, &FactDeps0_24, &ForeignImportModules0_25, &ForeignIncludeFilesCord_26, &ContainsForeignCode_27, &AugCompUnit_28);
    mercury__one_or_more_map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), IntDepsMap_21, &IntDeps_29);
    mercury__one_or_more_map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpDepsMap_22, &ImpDeps_30);
    mercury__one_or_more_map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), PublicChildrenMap_19, &PublicChildren_31);
    ModuleNameString_32 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_17);
    mercury__library__version_2_p_0(&Version_33, &FullArch_34);
    {
      MmakeStartComment_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MmakeStartComment_35, 0) = ((MR_Box) ((MR_String) "module dependencies"));
      MR_hl_field(MR_mktag(0), MmakeStartComment_35, 1) = ((MR_Box) (ModuleNameString_32));
      MR_hl_field(MR_mktag(0), MmakeStartComment_35, 2) = ((MR_Box) (SourceFileName_15));
      MR_hl_field(MR_mktag(0), MmakeStartComment_35, 3) = ((MR_Box) (Version_33));
      MR_hl_field(MR_mktag(0), MmakeStartComment_35, 4) = ((MR_Box) (FullArch_34));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeStartComment_35, STATE_VARIABLE_MmakeFile_0_160, &STATE_VARIABLE_MmakeFile_165_165);
    parse_tree__file_names__module_name_to_make_var_name_2_p_0(ModuleName_17, &ModuleMakeVarName_36);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDeps_29, ImpDeps_30, &LongDeps0_37);
    mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_17)), LongDeps0_37, &LongDeps_39);
    mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ShortDeps0_38, LongDeps_39, &ShortDeps1_40);
    mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_17)), ShortDeps1_40, &ShortDeps_41);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactDeps0_24, &FactDeps_42);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".trans_opt_date", ModuleName_17, &TransOptDateFileName_43);
    if ((MaybeTransOptDeps_12 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_MmakeFile_176_176 = STATE_VARIABLE_MmakeFile_165_165;
    else
    {
      MR_Word TransOptDeps0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTransOptDeps_12, (MR_Integer) 0))));
      MR_Word TransOptDateDeps_45;
      MR_Word TransOptDateDepsFileNames_46;
      MR_Word MmakeRuleTransOpt_47;
      MR_Word Var_169;
      MR_Word Var_171;

      Var_169 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptDeps0_44);
      mercury__set__intersect_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_169, LongDeps_39, &TransOptDateDeps_45);
      Var_171 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptDateDeps_45);
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) ".trans_opt", Var_171, &TransOptDateDepsFileNames_46);
      {
        MmakeRuleTransOpt_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_47, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_47, 1) = ((MR_Box) ((MR_String) "trans_opt_deps"));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_47, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_47, 3) = ((MR_Box) (TransOptDateFileName_43));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_47, 4) = ((MR_Box) (TransOptDateDepsFileNames_46));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_47, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleTransOpt_47, STATE_VARIABLE_MmakeFile_165_165, &STATE_VARIABLE_MmakeFile_176_176);
    }
    succeeded = mercury__string__remove_suffix_3_p_0(SourceFileName_15, (MR_String) ".m", &SourceFileBase_54);
    if (succeeded)
      ErrFileName_55 = mercury__string__f_43_43_2_f_0(SourceFileBase_54, (MR_String) ".err");
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/8", (MR_String) "source file name doesn\'t end in \140.m\'");
        return;
      }
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".optdate", ModuleName_17, &OptDateFileName_56);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".c_date", ModuleName_17, &CDateFileName_57);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".\044O", ModuleName_17, &ObjFileName_58);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".java_date", ModuleName_17, &JavaDateFileName_59);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".pic_o", ModuleName_17, &PicObjFileName_60);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".int0", ModuleName_17, &Int0FileName_61);
    {
      Var_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_222, 0) = ((MR_Box) (JavaDateFileName_59));
      MR_hl_field(MR_mktag(1), Var_222, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_221, 0) = ((MR_Box) (CDateFileName_57));
      MR_hl_field(MR_mktag(1), Var_221, 1) = ((MR_Box) (Var_222));
    }
    {
      Var_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_220, 0) = ((MR_Box) (ErrFileName_55));
      MR_hl_field(MR_mktag(1), Var_220, 1) = ((MR_Box) (Var_221));
    }
    {
      Var_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_219, 0) = ((MR_Box) (TransOptDateFileName_43));
      MR_hl_field(MR_mktag(1), Var_219, 1) = ((MR_Box) (Var_220));
    }
    {
      Var_218 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_218, 0) = ((MR_Box) (OptDateFileName_56));
      MR_hl_field(MR_mktag(0), Var_218, 1) = ((MR_Box) (Var_219));
    }
    {
      TargetGroup_652 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TargetGroup_652, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), TargetGroup_652, 1) = ((MR_Box) (Var_218));
    }
    {
      TargetGroups_653 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TargetGroups_653, 0) = ((MR_Box) (TargetGroup_652));
      MR_hl_field(MR_mktag(0), TargetGroups_653, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_226 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(SourceFileName_15);
    {
      STATE_VARIABLE_SourceGroups_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_SourceGroups_225_225, 0) = ((MR_Box) (Var_226));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_SourceGroups_225_225, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), PublicChildren_31);
    if (succeeded)
      STATE_VARIABLE_SourceGroups_228_228 = STATE_VARIABLE_SourceGroups_225_225;
    else
    {
      MR_Word Var_229;
      MR_Word Var_230;

      Var_230 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(Int0FileName_61);
      {
        Var_229 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_229, 0) = ((MR_Box) (Var_230));
        MR_hl_field(MR_mktag(1), Var_229, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      STATE_VARIABLE_SourceGroups_228_228 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), STATE_VARIABLE_SourceGroups_225_225, Var_229);
    }
    parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(Globals_9, (MR_String) "ancestors", (MR_String) ".int0", Ancestors_18, &AncestorSourceGroups_65);
    parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(Globals_9, (MR_String) "long deps", (MR_String) ".int", LongDeps_39, &LongDepsSourceGroups_66);
    parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(Globals_9, (MR_String) "short deps", (MR_String) ".int2", ShortDeps_41, &ShortDepsSourceGroups_67);
    Var_243 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), LongDepsSourceGroups_66, ShortDepsSourceGroups_67);
    Var_242 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), AncestorSourceGroups_65, Var_243);
    STATE_VARIABLE_SourceGroups_241_241 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), STATE_VARIABLE_SourceGroups_228_228, Var_242);
    ForeignIncludeFiles_68 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ForeignIncludeFilesCord_26);
    {
      Var_244 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_244, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_244, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_244, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_244, 3) = ((MR_Box) (SourceFileName_15));
    }
    ForeignImportFileNames_69 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_244, ForeignIncludeFiles_68);
    Var_246 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "foreign imports", ForeignImportFileNames_69);
    STATE_VARIABLE_SourceGroups_245_245 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), STATE_VARIABLE_SourceGroups_241_241, Var_246);
    if ((FactDeps_42 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MmakeRuleDateFileDeps_73;

      {
        MmakeRuleDateFileDeps_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_73, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_73, 1) = ((MR_Box) ((MR_String) "date_file_deps"));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_73, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_73, 3) = ((MR_Box) (TargetGroups_653));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_73, 4) = ((MR_Box) (STATE_VARIABLE_SourceGroups_245_245));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_73, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleDateFileDeps_73, STATE_VARIABLE_MmakeFile_176_176, &STATE_VARIABLE_MmakeFile_287_287);
    }
    else
    {
      MR_Word MmakeVarFactTables_50;
      MR_Word MmakeVarFactTablesOs_51;
      MR_Word MmakeVarFactTablesCs_52;
      MR_Word MmakeVarsFactTables_53;
      MR_Word FactTableSourceGroup_72;
      MR_Word MmakeRuleFactOs_76;
      MR_Word MmakeRuleFactCs_77;
      MR_Word MmakeRulesFactOsCs_78;
      MR_String Var_177;
      MR_Word STATE_VARIABLE_MmakeFile_179_179;
      MR_String Var_180;
      MR_String Var_182;
      MR_String Var_184;
      MR_String Var_186;
      MR_String Var_188;
      MR_String Var_190;
      MR_Word Var_192;
      MR_Word Var_249;
      MR_String Var_250;
      MR_String Var_252;
      MR_Word Var_256;
      MR_String Var_264;
      MR_String Var_266;
      MR_Word Var_268;
      MR_String Var_269;
      MR_String Var_271;
      MR_Word Var_273;
      MR_String Var_278;
      MR_String Var_280;
      MR_Word Var_282;
      MR_Word Var_285;
      MR_Word MmakeRuleDateFileDeps_719;
      MR_Word STATE_VARIABLE_MmakeFile_194_720;
      MR_Word STATE_VARIABLE_SourceGroups_255_721;
      MR_Word STATE_VARIABLE_MmakeFile_261_722;

      Var_177 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_36, (MR_String) ".fact_tables");
      {
        MmakeVarFactTables_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeVarFactTables_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), MmakeVarFactTables_50, 1) = ((MR_Box) (Var_177));
        MR_hl_field(MR_mktag(3), MmakeVarFactTables_50, 2) = ((MR_Box) (FactDeps_42));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarFactTables_50, STATE_VARIABLE_MmakeFile_176_176, &STATE_VARIABLE_MmakeFile_179_179);
      Var_180 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_36, (MR_String) ".fact_tables.os");
      Var_184 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_36, (MR_String) ".fact_tables:%=\044(os_subdir)%.\044O)");
      Var_182 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_184);
      {
        MmakeVarFactTablesOs_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), MmakeVarFactTablesOs_51, 0) = ((MR_Box) (Var_180));
        MR_hl_field(MR_mktag(2), MmakeVarFactTablesOs_51, 1) = ((MR_Box) (Var_182));
      }
      Var_186 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_36, (MR_String) ".fact_tables.cs");
      Var_190 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_36, (MR_String) ".fact_tables:%=\044(cs_subdir)%.c)");
      Var_188 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_190);
      {
        MmakeVarFactTablesCs_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), MmakeVarFactTablesCs_52, 0) = ((MR_Box) (Var_186));
        MR_hl_field(MR_mktag(2), MmakeVarFactTablesCs_52, 1) = ((MR_Box) (Var_188));
      }
      {
        Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) (MmakeVarFactTablesCs_52));
        MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MmakeVarsFactTables_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MmakeVarsFactTables_53, 0) = ((MR_Box) (MmakeVarFactTablesOs_51));
        MR_hl_field(MR_mktag(1), MmakeVarsFactTables_53, 1) = ((MR_Box) (Var_192));
      }
      libs__mmakefiles__add_mmake_entries_3_p_0(MmakeVarsFactTables_53, STATE_VARIABLE_MmakeFile_179_179, &STATE_VARIABLE_MmakeFile_194_720);
      Var_252 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_36, (MR_String) ".fact_tables)");
      Var_250 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_252);
      {
        Var_249 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_249, 0) = ((MR_Box) (Var_250));
        MR_hl_field(MR_mktag(0), Var_249, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        FactTableSourceGroup_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FactTableSourceGroup_72, 0) = ((MR_Box) ((MR_String) "fact tables"));
        MR_hl_field(MR_mktag(0), FactTableSourceGroup_72, 1) = ((MR_Box) (Var_249));
      }
      {
        Var_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_256, 0) = ((MR_Box) (FactTableSourceGroup_72));
        MR_hl_field(MR_mktag(1), Var_256, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      STATE_VARIABLE_SourceGroups_255_721 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), STATE_VARIABLE_SourceGroups_245_245, Var_256);
      {
        MmakeRuleDateFileDeps_719 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_719, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_719, 1) = ((MR_Box) ((MR_String) "date_file_deps"));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_719, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_719, 3) = ((MR_Box) (TargetGroups_653));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_719, 4) = ((MR_Box) (STATE_VARIABLE_SourceGroups_255_721));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_719, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleDateFileDeps_719, STATE_VARIABLE_MmakeFile_194_720, &STATE_VARIABLE_MmakeFile_261_722);
      Var_266 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_36, (MR_String) ".fact_tables.os)");
      Var_264 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_266);
      Var_271 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_36, (MR_String) ".fact_tables)");
      Var_269 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_271);
      {
        Var_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_273, 0) = ((MR_Box) (SourceFileName_15));
        MR_hl_field(MR_mktag(1), Var_273, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_268, 0) = ((MR_Box) (Var_269));
        MR_hl_field(MR_mktag(1), Var_268, 1) = ((MR_Box) (Var_273));
      }
      {
        MmakeRuleFactOs_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleFactOs_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), MmakeRuleFactOs_76, 1) = ((MR_Box) ((MR_String) "fact_table_os"));
        MR_hl_field(MR_mktag(3), MmakeRuleFactOs_76, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeRuleFactOs_76, 3) = ((MR_Box) (Var_264));
        MR_hl_field(MR_mktag(3), MmakeRuleFactOs_76, 4) = ((MR_Box) (Var_268));
        MR_hl_field(MR_mktag(3), MmakeRuleFactOs_76, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_280 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_36, (MR_String) ".fact_tables.cs)");
      Var_278 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_280);
      {
        Var_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_282, 0) = ((MR_Box) (ObjFileName_58));
        MR_hl_field(MR_mktag(1), Var_282, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MmakeRuleFactCs_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleFactCs_77, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), MmakeRuleFactCs_77, 1) = ((MR_Box) ((MR_String) "fact_table_cs"));
        MR_hl_field(MR_mktag(3), MmakeRuleFactCs_77, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeRuleFactCs_77, 3) = ((MR_Box) (Var_278));
        MR_hl_field(MR_mktag(3), MmakeRuleFactCs_77, 4) = ((MR_Box) (Var_282));
        MR_hl_field(MR_mktag(3), MmakeRuleFactCs_77, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_285, 0) = ((MR_Box) (MmakeRuleFactCs_77));
        MR_hl_field(MR_mktag(1), Var_285, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MmakeRulesFactOsCs_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MmakeRulesFactOsCs_78, 0) = ((MR_Box) (MmakeRuleFactOs_76));
        MR_hl_field(MR_mktag(1), MmakeRulesFactOsCs_78, 1) = ((MR_Box) (Var_285));
      }
      libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesFactOsCs_78, STATE_VARIABLE_MmakeFile_261_722, &STATE_VARIABLE_MmakeFile_287_287);
    }
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedDeps_20);
    if (succeeded)
      STATE_VARIABLE_MmakeFile_301_301 = STATE_VARIABLE_MmakeFile_287_287;
    else
    {
      MR_Word MmakeRulesNestedDeps_80;
      MR_Word Var_298;
      MR_Word Var_300;
      MR_Box conv2_STATE_VARIABLE_IO_299_299;

      Var_300 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedDeps_20);
      {
        Var_298 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_298, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_298, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_2));
        MR_hl_field(MR_mktag(0), Var_298, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_298, 3) = ((MR_Box) (Globals_9));
        MR_hl_field(MR_mktag(0), Var_298, 4) = ((MR_Box) (ModuleName_17));
        MR_hl_field(MR_mktag(0), Var_298, 5) = ((MR_Box) (Var_300));
      }
      mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_298, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[10])), &MmakeRulesNestedDeps_80, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_299_299);
      libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesNestedDeps_80, STATE_VARIABLE_MmakeFile_287_287, &STATE_VARIABLE_MmakeFile_301_301);
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 356, &UseOptFiles_81);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 354, &Intermod_82);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 678, &IntermodDirs_83);
    switch (Intermod_82) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_MmakeFile_311_311 = STATE_VARIABLE_MmakeFile_301_301;
        break;
      case (MR_Integer) 1:
        {
          MR_Word AllDepsFileNames_84;
          MR_Word MmakeRuleMhDeps_85;
          MR_Word Var_306;

          Var_306 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllDeps_11);
          parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) ".mh", Var_306, &AllDepsFileNames_84);
          {
            MmakeRuleMhDeps_85 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_85, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_85, 1) = ((MR_Box) ((MR_String) "machine_dependent_header_deps"));
            MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_85, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_85, 3) = ((MR_Box) (ObjFileName_58));
            MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_85, 4) = ((MR_Box) (AllDepsFileNames_84));
            MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_85, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleMhDeps_85, STATE_VARIABLE_MmakeFile_301_301, &STATE_VARIABLE_MmakeFile_311_311);
        }
        break;
    }
    succeeded = (Intermod_82 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (UseOptFiles_81 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word TransOpt_87;
      MR_Word UseTransOpt_88;
      MR_Word BuildOptFiles_89;
      MR_Word OptDeps_90;
      MR_Word MaybeTransOptDeps1_92;
      MR_Word OptInt0Deps_93;
      MR_Word OptDepsFileNames_94;
      MR_Word OptInt0DepsFileNames_95;
      MR_Word MmakeRuleDateOptInt0Deps_96;
      MR_Word Var_325;
      MR_Word Var_330;
      MR_Word Var_334;
      MR_Word STATE_VARIABLE_MmakeFile_336_336;
      MR_Word Targets_656;

      {
        Targets_656 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Targets_656, 0) = ((MR_Box) (TransOptDateFileName_43));
        MR_hl_field(MR_mktag(0), Targets_656, 1) = ((MR_Box) (Var_220));
      }
      libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 358, &TransOpt_87);
      libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 357, &UseTransOpt_88);
      mercury__bool__not_2_p_0(UseTransOpt_88, &BuildOptFiles_89);
      succeeded = (TransOpt_87 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (UseTransOpt_88 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word TransOptDeps1_91;
        MR_Word Var_318;
        MR_Word Var_320;

        Var_320 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), LongDeps_39);
        {
          Var_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_318, 0) = ((MR_Box) (ModuleName_17));
          MR_hl_field(MR_mktag(1), Var_318, 1) = ((MR_Box) (Var_320));
        }
        parse_tree__write_deps_file__get_both_opt_deps_8_p_0(Globals_9, BuildOptFiles_89, IntermodDirs_83, Var_318, &OptDeps_90, &TransOptDeps1_91);
        {
          MaybeTransOptDeps1_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTransOptDeps1_92, 0) = ((MR_Box) (TransOptDeps1_91));
        }
      }
      else
      {
        MR_Word Var_322;
        MR_Word Var_324;

        Var_324 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), LongDeps_39);
        {
          Var_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_322, 0) = ((MR_Box) (ModuleName_17));
          MR_hl_field(MR_mktag(1), Var_322, 1) = ((MR_Box) (Var_324));
        }
        parse_tree__write_deps_file__get_opt_deps_8_p_0(Globals_9, BuildOptFiles_89, IntermodDirs_83, (MR_String) ".opt", Var_322, &OptDeps_90);
        MaybeTransOptDeps1_92 = (MR_Word) ((MR_Unsigned) 0U);
      }
      Var_325 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[6]), OptDeps_90);
      OptInt0Deps_93 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_325);
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) ".opt", OptDeps_90, &OptDepsFileNames_94);
      Var_330 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptInt0Deps_93);
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) ".int0", Var_330, &OptInt0DepsFileNames_95);
      Var_334 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptDepsFileNames_94, OptInt0DepsFileNames_95);
      {
        MmakeRuleDateOptInt0Deps_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_96, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_96, 1) = ((MR_Box) ((MR_String) "dates_on_opts_and_int0s"));
        MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_96, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_96, 3) = ((MR_Box) (Targets_656));
        MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_96, 4) = ((MR_Box) (Var_334));
        MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_96, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleDateOptInt0Deps_96, STATE_VARIABLE_MmakeFile_311_311, &STATE_VARIABLE_MmakeFile_336_336);
      if ((MaybeTransOptDeps1_92 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_MmakeFile_345_345 = STATE_VARIABLE_MmakeFile_336_336;
      else
      {
        MR_Word TransOptDeps2_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTransOptDeps1_92, (MR_Integer) 0))));
        MR_Word TransOptDepsOptFileNames_98;
        MR_Word MmakeRuleTransOptOpts_99;
        MR_Word Targets_657;

        {
          Targets_657 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Targets_657, 0) = ((MR_Box) (ErrFileName_55));
          MR_hl_field(MR_mktag(0), Targets_657, 1) = ((MR_Box) (Var_221));
        }
        parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) ".trans_opt", TransOptDeps2_97, &TransOptDepsOptFileNames_98);
        {
          MmakeRuleTransOptOpts_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_99, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_99, 1) = ((MR_Box) ((MR_String) "dates_on_trans_opts\'_opts"));
          MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_99, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_99, 3) = ((MR_Box) (Targets_657));
          MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_99, 4) = ((MR_Box) (TransOptDepsOptFileNames_98));
          MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_99, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleTransOptOpts_99, STATE_VARIABLE_MmakeFile_336_336, &STATE_VARIABLE_MmakeFile_345_345);
      }
    }
    else
      STATE_VARIABLE_MmakeFile_345_345 = STATE_VARIABLE_MmakeFile_311_311;
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 286, &HighLevelCode_100);
    libs__globals__get_target_2_p_0(Globals_9, &CompilationTarget_101);
    succeeded = (HighLevelCode_100 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (CompilationTarget_101 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word MmakeRuleObjOnMihs_102;
      MR_Word Var_347;
      MR_Word Var_350;
      MR_Word AllDepsFileNames_658;
      MR_Word Targets_659;

      {
        Var_347 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_347, 0) = ((MR_Box) (ObjFileName_58));
        MR_hl_field(MR_mktag(1), Var_347, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Targets_659 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Targets_659, 0) = ((MR_Box) (PicObjFileName_60));
        MR_hl_field(MR_mktag(0), Targets_659, 1) = ((MR_Box) (Var_347));
      }
      Var_350 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllDeps_11);
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) ".mih", Var_350, &AllDepsFileNames_658);
      {
        MmakeRuleObjOnMihs_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_102, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_102, 1) = ((MR_Box) ((MR_String) "objs_on_mihs"));
        MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_102, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_102, 3) = ((MR_Box) (Targets_659));
        MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_102, 4) = ((MR_Box) (AllDepsFileNames_658));
        MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_102, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleObjOnMihs_102, STATE_VARIABLE_MmakeFile_345_345, &STATE_VARIABLE_MmakeFile_355_355);
    }
    else
      STATE_VARIABLE_MmakeFile_355_355 = STATE_VARIABLE_MmakeFile_345_345;
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".c", ModuleName_17, &CFileName_103);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".mh", ModuleName_17, &MhHeaderFileName_104);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".mih", ModuleName_17, &MihHeaderFileName_105);
    {
      Var_368 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_368, 0) = ((MR_Box) (MihHeaderFileName_105));
      MR_hl_field(MR_mktag(1), Var_368, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_367 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_367, 0) = ((MR_Box) (MhHeaderFileName_104));
      MR_hl_field(MR_mktag(0), Var_367, 1) = ((MR_Box) (Var_368));
    }
    {
      Var_370 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_370, 0) = ((MR_Box) (CFileName_103));
      MR_hl_field(MR_mktag(1), Var_370, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRuleMhMihOnC_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_106, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_106, 1) = ((MR_Box) ((MR_String) "mh_and_mih_on_c"));
      MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_106, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_106, 3) = ((MR_Box) (Var_367));
      MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_106, 4) = ((MR_Box) (Var_370));
      MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_106, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleMhMihOnC_106, STATE_VARIABLE_MmakeFile_355_355, &STATE_VARIABLE_MmakeFile_373_373);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".java", ModuleName_17, &JavaFileName_107);
    Var_378 = make__make_module_dep_file_extension_0_f_0();
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, Var_378, ModuleName_17, &ModuleDepFileName_108);
    {
      Var_385 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_385, 0) = ((MR_Box) (JavaFileName_107));
      MR_hl_field(MR_mktag(1), Var_385, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_382 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_382, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_382, 1) = ((MR_Box) ((MR_String) "module_dep_on_java"));
      MR_hl_field(MR_mktag(3), Var_382, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_382, 3) = ((MR_Box) (ModuleDepFileName_108));
      MR_hl_field(MR_mktag(3), Var_382, 4) = ((MR_Box) (Var_385));
      MR_hl_field(MR_mktag(3), Var_382, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_388 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_388, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_388, 1) = ((MR_Box) ((MR_String) "module_dep_on_c"));
      MR_hl_field(MR_mktag(3), Var_388, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_388, 3) = ((MR_Box) (ModuleDepFileName_108));
      MR_hl_field(MR_mktag(3), Var_388, 4) = ((MR_Box) (Var_370));
      MR_hl_field(MR_mktag(3), Var_388, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeFragmentModuleDep_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MmakeFragmentModuleDep_109, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
      MR_hl_field(MR_mktag(1), MmakeFragmentModuleDep_109, 1) = ((MR_Box) (Var_382));
      MR_hl_field(MR_mktag(1), MmakeFragmentModuleDep_109, 2) = ((MR_Box) (Var_388));
    }
    libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentModuleDep_109, STATE_VARIABLE_MmakeFile_373_373, &STATE_VARIABLE_MmakeFile_394_394);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".date", ModuleName_17, &DateFileName_110);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".date0", ModuleName_17, &Date0FileName_111);
    Var_402 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_18);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) ".date", Var_402, &AncestorDateFileNames_112);
    Var_405 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_18);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) ".int0", Var_405, &AncestorInt0FileNames_113);
    Var_408 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), LongDeps_39);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) ".int3", Var_408, &LongDepInt3FileNames_114);
    Var_411 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ShortDeps_41);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) ".int3", Var_411, &ShortDepInt3FileNames_115);
    {
      Var_419 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_419, 0) = ((MR_Box) (Date0FileName_111));
      MR_hl_field(MR_mktag(1), Var_419, 1) = ((MR_Box) (AncestorDateFileNames_112));
    }
    {
      Var_418 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_418, 0) = ((MR_Box) (DateFileName_110));
      MR_hl_field(MR_mktag(0), Var_418, 1) = ((MR_Box) (Var_419));
    }
    {
      Var_416 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_416, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), Var_416, 1) = ((MR_Box) (Var_418));
    }
    {
      Var_415 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_415, 0) = ((MR_Box) (Var_416));
      MR_hl_field(MR_mktag(0), Var_415, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_423 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(SourceFileName_15);
    {
      Var_422 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_422, 0) = ((MR_Box) (Var_423));
      MR_hl_field(MR_mktag(1), Var_422, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_426 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "ancestor int0", AncestorInt0FileNames_113);
    Var_429 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "long dep int3s", LongDepInt3FileNames_114);
    Var_431 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "short dep int3s", ShortDepInt3FileNames_115);
    Var_428 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_429, Var_431);
    Var_425 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_426, Var_428);
    Var_421 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_422, Var_425);
    {
      MmakeRuleParentDates_116 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDates_116, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDates_116, 1) = ((MR_Box) ((MR_String) "self_and_parent_date_deps"));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDates_116, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDates_116, 3) = ((MR_Box) (Var_415));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDates_116, 4) = ((MR_Box) (Var_421));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDates_116, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleParentDates_116, STATE_VARIABLE_MmakeFile_394_394, &STATE_VARIABLE_MmakeFile_434_434);
    Var_436 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_18);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_String) ".date0", Var_436, &AncestorDate0FileNames_117);
    {
      Var_443 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_443, 0) = ((MR_Box) (Date0FileName_111));
      MR_hl_field(MR_mktag(0), Var_443, 1) = ((MR_Box) (AncestorDate0FileNames_117));
    }
    {
      Var_441 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_441, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), Var_441, 1) = ((MR_Box) (Var_443));
    }
    {
      Var_440 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_440, 0) = ((MR_Box) (Var_441));
      MR_hl_field(MR_mktag(0), Var_440, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_447 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(SourceFileName_15);
    {
      Var_446 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_446, 0) = ((MR_Box) (Var_447));
      MR_hl_field(MR_mktag(1), Var_446, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_450 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "long dep int3s", LongDepInt3FileNames_114);
    Var_452 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "short dep int3s", ShortDepInt3FileNames_115);
    Var_449 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_450, Var_452);
    Var_445 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_446, Var_449);
    {
      MmakeRuleParentDate0s_118 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_118, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_118, 1) = ((MR_Box) ((MR_String) "self_and_parent_date0_deps"));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_118, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_118, 3) = ((MR_Box) (Var_440));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_118, 4) = ((MR_Box) (Var_445));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_118, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleParentDate0s_118, STATE_VARIABLE_MmakeFile_434_434, &STATE_VARIABLE_MmakeFile_455_455);
    parse_tree__source_file_map__have_source_file_map_3_p_0(&HaveMap_119);
    switch (HaveMap_119) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ModuleArg_120 = SourceFileName_15;
        break;
      case (MR_Integer) 1:
        parse_tree__file_names__module_name_to_file_name_stem_2_p_0(SourceFileModuleName_16, &ModuleArg_120);
        break;
    }
    if ((ContainsForeignCode_27 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word C0_123 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignImportModules0_25, (MR_Integer) 0))));
      MR_Word Java0_124 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignImportModules0_25, (MR_Integer) 1))));
      MR_Word CSharp0_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignImportModules0_25, (MR_Integer) 2))));
      MR_Word Erlang0_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignImportModules0_25, (MR_Integer) 3))));

      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), C0_123);
      if (succeeded)
      {
        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Java0_124);
        if (succeeded)
        {
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), CSharp0_125);
          if (succeeded)
            succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Erlang0_126);
        }
      }
      if (succeeded)
      {
        MR_Word AncestorIntSpecs_131 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_28, (MR_Integer) 4))));
        MR_Word DirectIntSpecs_132 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_28, (MR_Integer) 5))));
        MR_Word IndirectIntSpecs_133 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_28, (MR_Integer) 6))));
        MR_Word PlainOpts_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_28, (MR_Integer) 7))));
        MR_Word IntForOptSpecs_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_28, (MR_Integer) 9))));
        MR_Word BackendLangs_137;
        MR_Word IsBackendFIM_138;
        MR_Word STATE_VARIABLE_FIMSpecs_457_457;
        MR_Word STATE_VARIABLE_FIMSpecs_459_459;
        MR_Word STATE_VARIABLE_FIMSpecs_461_461;
        MR_Word STATE_VARIABLE_FIMSpecs_463_463;
        MR_Word STATE_VARIABLE_FIMSpecs_465_465;
        MR_Word STATE_VARIABLE_FIMSpecs_467_467;
        MR_Box conv5_STATE_VARIABLE_FIMSpecs_459_459;
        MR_Box conv7_STATE_VARIABLE_FIMSpecs_461_461;
        MR_Box conv9_STATE_VARIABLE_FIMSpecs_463_463;
        MR_Box conv11_STATE_VARIABLE_FIMSpecs_465_465;
        MR_Box conv13_STATE_VARIABLE_FIMSpecs_467_467;

        mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), &STATE_VARIABLE_FIMSpecs_457_457);
        mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[7]), AncestorIntSpecs_131, ((MR_Box) (STATE_VARIABLE_FIMSpecs_457_457)), &conv5_STATE_VARIABLE_FIMSpecs_459_459);
        STATE_VARIABLE_FIMSpecs_459_459 = ((MR_Word) (conv5_STATE_VARIABLE_FIMSpecs_459_459));
        mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[8]), DirectIntSpecs_132, ((MR_Box) (STATE_VARIABLE_FIMSpecs_459_459)), &conv7_STATE_VARIABLE_FIMSpecs_461_461);
        STATE_VARIABLE_FIMSpecs_461_461 = ((MR_Word) (conv7_STATE_VARIABLE_FIMSpecs_461_461));
        mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[9]), IndirectIntSpecs_133, ((MR_Box) (STATE_VARIABLE_FIMSpecs_461_461)), &conv9_STATE_VARIABLE_FIMSpecs_463_463);
        STATE_VARIABLE_FIMSpecs_463_463 = ((MR_Word) (conv9_STATE_VARIABLE_FIMSpecs_463_463));
        mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[10]), PlainOpts_134, ((MR_Box) (STATE_VARIABLE_FIMSpecs_463_463)), &conv11_STATE_VARIABLE_FIMSpecs_465_465);
        STATE_VARIABLE_FIMSpecs_465_465 = ((MR_Word) (conv11_STATE_VARIABLE_FIMSpecs_465_465));
        mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[11]), IntForOptSpecs_136, ((MR_Box) (STATE_VARIABLE_FIMSpecs_465_465)), &conv13_STATE_VARIABLE_FIMSpecs_467_467);
        STATE_VARIABLE_FIMSpecs_467_467 = ((MR_Word) (conv13_STATE_VARIABLE_FIMSpecs_467_467));
        libs__globals__get_backend_foreign_languages_2_p_0(Globals_9, &BackendLangs_137);
        {
          IsBackendFIM_138 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), IsBackendFIM_138, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), IsBackendFIM_138, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_9));
          MR_hl_field(MR_mktag(0), IsBackendFIM_138, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), IsBackendFIM_138, 3) = ((MR_Box) (BackendLangs_137));
        }
        mercury__set__filter_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), IsBackendFIM_138, STATE_VARIABLE_FIMSpecs_467_467, &FIMSpecs_122);
      }
      else
        FIMSpecs_122 = parse_tree__prog_data_foreign__get_all_fim_specs_1_f_0(ForeignImportModules0_25);
    }
    else
      FIMSpecs_122 = parse_tree__prog_data_foreign__get_all_fim_specs_1_f_0(ForeignImportModules0_25);
    {
      Var_470 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_470, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_470, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_10));
      MR_hl_field(MR_mktag(0), Var_470, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_470, 3) = ((MR_Box) (SourceFileModuleName_16));
    }
    mercury__set__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_470, FIMSpecs_122, &ForeignImportedModuleNames_142);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ForeignImportedModuleNames_142);
    if (succeeded)
      STATE_VARIABLE_MmakeFile_487_487 = STATE_VARIABLE_MmakeFile_455_455;
    else
    {
      MR_Word Target_143;
      MR_Word ForeignImportTargets_144;
      MR_String ForeignImportExt_145;
      MR_Word MmakeRulesForeignImports_148;
      MR_Word Var_484;
      MR_Word Var_486;
      MR_Box conv16_STATE_VARIABLE_IO_485_485;

      libs__globals__get_target_2_p_0(Globals_9, &Target_143);
      switch (Target_143) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_482;

            {
              Var_482 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_482, 0) = ((MR_Box) (PicObjFileName_60));
              MR_hl_field(MR_mktag(1), Var_482, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ForeignImportTargets_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ForeignImportTargets_144, 0) = ((MR_Box) (ObjFileName_58));
              MR_hl_field(MR_mktag(1), ForeignImportTargets_144, 1) = ((MR_Box) (Var_482));
            }
            ForeignImportExt_145 = (MR_String) ".mh";
          }
          break;
        case (MR_Integer) 1:
          {
            ForeignImportTargets_144 = (MR_Word) ((MR_Unsigned) 0U);
            ForeignImportExt_145 = (MR_String) ".cs";
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String BeamFileName_147;

            parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".beam", ModuleName_17, &BeamFileName_147);
            {
              ForeignImportTargets_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ForeignImportTargets_144, 0) = ((MR_Box) (BeamFileName_147));
              MR_hl_field(MR_mktag(1), ForeignImportTargets_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            ForeignImportExt_145 = (MR_String) ".hrl";
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ClassFileName_146;

            parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".class", ModuleName_17, &ClassFileName_146);
            {
              ForeignImportTargets_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ForeignImportTargets_144, 0) = ((MR_Box) (ClassFileName_146));
              MR_hl_field(MR_mktag(1), ForeignImportTargets_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            ForeignImportExt_145 = (MR_String) ".java";
          }
          break;
      }
      Var_486 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ForeignImportedModuleNames_142);
      {
        Var_484 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_484, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[2]));
        MR_hl_field(MR_mktag(0), Var_484, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_11));
        MR_hl_field(MR_mktag(0), Var_484, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_484, 3) = ((MR_Box) (Globals_9));
        MR_hl_field(MR_mktag(0), Var_484, 4) = ((MR_Box) (ForeignImportExt_145));
        MR_hl_field(MR_mktag(0), Var_484, 5) = ((MR_Box) (Var_486));
      }
      mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_484, ForeignImportTargets_144, &MmakeRulesForeignImports_148, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_485_485);
      libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesForeignImports_148, STATE_VARIABLE_MmakeFile_455_455, &STATE_VARIABLE_MmakeFile_487_487);
    }
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".int", ModuleName_17, &IntFileName_149);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".int2", ModuleName_17, &Int2FileName_150);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".int3", ModuleName_17, &Int3FileName_151);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".opt", ModuleName_17, &OptFileName_152);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".trans_opt", ModuleName_17, &TransOptFileName_153);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_String) ".date3", ModuleName_17, &Date3FileName_154);
    {
      Var_509 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_509, 0) = ((MR_Box) (Date0FileName_111));
      MR_hl_field(MR_mktag(1), Var_509, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_512 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_511 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_511, 0) = ((MR_Box) (Var_512));
      MR_hl_field(MR_mktag(1), Var_511, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_506 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_506, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_506, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), Var_506, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_506, 3) = ((MR_Box) (Int0FileName_61));
      MR_hl_field(MR_mktag(3), Var_506, 4) = ((MR_Box) (Var_509));
      MR_hl_field(MR_mktag(3), Var_506, 5) = ((MR_Box) (Var_511));
    }
    {
      Var_518 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_518, 0) = ((MR_Box) (DateFileName_110));
      MR_hl_field(MR_mktag(1), Var_518, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_521 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_520 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_520, 0) = ((MR_Box) (Var_521));
      MR_hl_field(MR_mktag(1), Var_520, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_515 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_515, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_515, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), Var_515, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_515, 3) = ((MR_Box) (IntFileName_149));
      MR_hl_field(MR_mktag(3), Var_515, 4) = ((MR_Box) (Var_518));
      MR_hl_field(MR_mktag(3), Var_515, 5) = ((MR_Box) (Var_520));
    }
    Var_530 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_529 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_529, 0) = ((MR_Box) (Var_530));
      MR_hl_field(MR_mktag(1), Var_529, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_524 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_524, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_524, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), Var_524, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_524, 3) = ((MR_Box) (Int2FileName_150));
      MR_hl_field(MR_mktag(3), Var_524, 4) = ((MR_Box) (Var_518));
      MR_hl_field(MR_mktag(3), Var_524, 5) = ((MR_Box) (Var_529));
    }
    {
      Var_536 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_536, 0) = ((MR_Box) (Date3FileName_154));
      MR_hl_field(MR_mktag(1), Var_536, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_539 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_538 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_538, 0) = ((MR_Box) (Var_539));
      MR_hl_field(MR_mktag(1), Var_538, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_533 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_533, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_533, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), Var_533, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_533, 3) = ((MR_Box) (Int3FileName_151));
      MR_hl_field(MR_mktag(3), Var_533, 4) = ((MR_Box) (Var_536));
      MR_hl_field(MR_mktag(3), Var_533, 5) = ((MR_Box) (Var_538));
    }
    {
      Var_545 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_545, 0) = ((MR_Box) (OptDateFileName_56));
      MR_hl_field(MR_mktag(1), Var_545, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_548 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_547 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_547, 0) = ((MR_Box) (Var_548));
      MR_hl_field(MR_mktag(1), Var_547, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_542 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_542, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_542, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), Var_542, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_542, 3) = ((MR_Box) (OptFileName_152));
      MR_hl_field(MR_mktag(3), Var_542, 4) = ((MR_Box) (Var_545));
      MR_hl_field(MR_mktag(3), Var_542, 5) = ((MR_Box) (Var_547));
    }
    {
      Var_554 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_554, 0) = ((MR_Box) (TransOptDateFileName_43));
      MR_hl_field(MR_mktag(1), Var_554, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_557 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_556 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_556, 0) = ((MR_Box) (Var_557));
      MR_hl_field(MR_mktag(1), Var_556, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_551 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_551, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_551, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), Var_551, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_551, 3) = ((MR_Box) (TransOptFileName_153));
      MR_hl_field(MR_mktag(3), Var_551, 4) = ((MR_Box) (Var_554));
      MR_hl_field(MR_mktag(3), Var_551, 5) = ((MR_Box) (Var_556));
    }
    {
      Var_550 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_550, 0) = ((MR_Box) (Var_551));
      MR_hl_field(MR_mktag(1), Var_550, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_541 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_541, 0) = ((MR_Box) (Var_542));
      MR_hl_field(MR_mktag(1), Var_541, 1) = ((MR_Box) (Var_550));
    }
    {
      Var_532 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_532, 0) = ((MR_Box) (Var_533));
      MR_hl_field(MR_mktag(1), Var_532, 1) = ((MR_Box) (Var_541));
    }
    {
      Var_523 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_523, 0) = ((MR_Box) (Var_524));
      MR_hl_field(MR_mktag(1), Var_523, 1) = ((MR_Box) (Var_532));
    }
    {
      Var_514 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_514, 0) = ((MR_Box) (Var_515));
      MR_hl_field(MR_mktag(1), Var_514, 1) = ((MR_Box) (Var_523));
    }
    {
      MmakeRulesInstallShadows_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MmakeRulesInstallShadows_155, 0) = ((MR_Box) (Var_506));
      MR_hl_field(MR_mktag(1), MmakeRulesInstallShadows_155, 1) = ((MR_Box) (Var_514));
    }
    libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesInstallShadows_155, STATE_VARIABLE_MmakeFile_487_487, &STATE_VARIABLE_MmakeFile_560_560);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 675, &UseSubdirs_156);
    switch (UseSubdirs_156) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_MmakeFile_576_576 = STATE_VARIABLE_MmakeFile_560_560;
        break;
      case (MR_Integer) 1:
        {
          MR_Word MmakeRulesSubDirShorthand_158;
          MR_Word Var_574;
          MR_Box conv18_STATE_VARIABLE_IO_163;

          {
            Var_574 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_574, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), Var_574, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_12));
            MR_hl_field(MR_mktag(0), Var_574, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_574, 3) = ((MR_Box) (Globals_9));
            MR_hl_field(MR_mktag(0), Var_574, 4) = ((MR_Box) (ModuleName_17));
          }
          mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_574, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[16])), &MmakeRulesSubDirShorthand_158, ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_IO_163);
          libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesSubDirShorthand_158, STATE_VARIABLE_MmakeFile_560_560, &STATE_VARIABLE_MmakeFile_576_576);
        }
        break;
    }
    Var_718 = parse_tree__source_file_map__default_source_file_1_f_0(ModuleName_17);
    succeeded = (strcmp(SourceFileName_15, Var_718) == 0);
    if (succeeded)
      *STATE_VARIABLE_MmakeFile_161 = STATE_VARIABLE_MmakeFile_576_576;
    else
    {
      MR_Word MmakeRulesPattern_159;
      MR_Word Var_577;
      MR_Word Var_580;
      MR_Word Var_582;
      MR_String Var_583;
      MR_Word Var_586;
      MR_Word Var_587;
      MR_Word Var_592;
      MR_String Var_593;
      MR_Word Var_596;
      MR_Word Var_597;
      MR_Word Var_602;
      MR_String Var_603;
      MR_Word Var_606;
      MR_Word Var_607;
      MR_Word Var_612;
      MR_String Var_613;
      MR_Word Var_616;
      MR_Word Var_617;
      MR_Word Var_622;
      MR_String Var_623;
      MR_Word Var_626;
      MR_Word Var_627;
      MR_Word Var_632;
      MR_String Var_633;
      MR_String Var_635;
      MR_Word Var_638;
      MR_Word Var_639;
      MR_Word Var_644;
      MR_String Var_645;
      MR_String Var_647;

      {
        Var_580 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_580, 0) = ((MR_Box) (SourceFileName_15));
        MR_hl_field(MR_mktag(1), Var_580, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_583 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCPI) \044(ALL_GRADEFLAGS) \044(ALL_MCPIFLAGS) ", ModuleArg_120);
      {
        Var_582 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_582, 0) = ((MR_Box) (Var_583));
        MR_hl_field(MR_mktag(1), Var_582, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_577 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_577, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_577, 1) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(3), Var_577, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_577, 3) = ((MR_Box) (Date0FileName_111));
        MR_hl_field(MR_mktag(3), Var_577, 4) = ((MR_Box) (Var_580));
        MR_hl_field(MR_mktag(3), Var_577, 5) = ((MR_Box) (Var_582));
      }
      Var_593 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCI) \044(ALL_GRADEFLAGS) \044(ALL_MCIFLAGS) ", ModuleArg_120);
      {
        Var_592 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_592, 0) = ((MR_Box) (Var_593));
        MR_hl_field(MR_mktag(1), Var_592, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_587 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_587, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_587, 1) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(3), Var_587, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_587, 3) = ((MR_Box) (DateFileName_110));
        MR_hl_field(MR_mktag(3), Var_587, 4) = ((MR_Box) (Var_580));
        MR_hl_field(MR_mktag(3), Var_587, 5) = ((MR_Box) (Var_592));
      }
      Var_603 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCSI) \044(ALL_GRADEFLAGS) \044(ALL_MCSIFLAGS) ", ModuleArg_120);
      {
        Var_602 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_602, 0) = ((MR_Box) (Var_603));
        MR_hl_field(MR_mktag(1), Var_602, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_597 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_597, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_597, 1) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(3), Var_597, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_597, 3) = ((MR_Box) (Date3FileName_154));
        MR_hl_field(MR_mktag(3), Var_597, 4) = ((MR_Box) (Var_580));
        MR_hl_field(MR_mktag(3), Var_597, 5) = ((MR_Box) (Var_602));
      }
      Var_613 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCOI) \044(ALL_GRADEFLAGS) \044(ALL_MCOIFLAGS) ", ModuleArg_120);
      {
        Var_612 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_612, 0) = ((MR_Box) (Var_613));
        MR_hl_field(MR_mktag(1), Var_612, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_607 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_607, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_607, 1) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(3), Var_607, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_607, 3) = ((MR_Box) (OptDateFileName_56));
        MR_hl_field(MR_mktag(3), Var_607, 4) = ((MR_Box) (Var_580));
        MR_hl_field(MR_mktag(3), Var_607, 5) = ((MR_Box) (Var_612));
      }
      Var_623 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCTOI) \044(ALL_GRADEFLAGS) \044(ALL_MCTOIFLAGS) ", ModuleArg_120);
      {
        Var_622 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_622, 0) = ((MR_Box) (Var_623));
        MR_hl_field(MR_mktag(1), Var_622, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_617 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_617, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_617, 1) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(3), Var_617, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_617, 3) = ((MR_Box) (TransOptDateFileName_43));
        MR_hl_field(MR_mktag(3), Var_617, 4) = ((MR_Box) (Var_580));
        MR_hl_field(MR_mktag(3), Var_617, 5) = ((MR_Box) (Var_622));
      }
      Var_635 = mercury__string__f_43_43_2_f_0(ModuleArg_120, (MR_String) " \044(ERR_REDIRECT)");
      Var_633 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) ", Var_635);
      {
        Var_632 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_632, 0) = ((MR_Box) (Var_633));
        MR_hl_field(MR_mktag(1), Var_632, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_627 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_627, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_627, 1) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(3), Var_627, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_627, 3) = ((MR_Box) (CDateFileName_57));
        MR_hl_field(MR_mktag(3), Var_627, 4) = ((MR_Box) (Var_580));
        MR_hl_field(MR_mktag(3), Var_627, 5) = ((MR_Box) (Var_632));
      }
      Var_647 = mercury__string__f_43_43_2_f_0(ModuleArg_120, (MR_String) " \044(ERR_REDIRECT)");
      Var_645 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) --java-only ", Var_647);
      {
        Var_644 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_644, 0) = ((MR_Box) (Var_645));
        MR_hl_field(MR_mktag(1), Var_644, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_639 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_639, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_639, 1) = ((MR_Box) ((MR_String) ""));
        MR_hl_field(MR_mktag(3), Var_639, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_639, 3) = ((MR_Box) (JavaDateFileName_59));
        MR_hl_field(MR_mktag(3), Var_639, 4) = ((MR_Box) (Var_580));
        MR_hl_field(MR_mktag(3), Var_639, 5) = ((MR_Box) (Var_644));
      }
      {
        Var_638 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_638, 0) = ((MR_Box) (Var_639));
        MR_hl_field(MR_mktag(1), Var_638, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_626 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_626, 0) = ((MR_Box) (Var_627));
        MR_hl_field(MR_mktag(1), Var_626, 1) = ((MR_Box) (Var_638));
      }
      {
        Var_616 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_616, 0) = ((MR_Box) (Var_617));
        MR_hl_field(MR_mktag(1), Var_616, 1) = ((MR_Box) (Var_626));
      }
      {
        Var_606 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_606, 0) = ((MR_Box) (Var_607));
        MR_hl_field(MR_mktag(1), Var_606, 1) = ((MR_Box) (Var_616));
      }
      {
        Var_596 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_596, 0) = ((MR_Box) (Var_597));
        MR_hl_field(MR_mktag(1), Var_596, 1) = ((MR_Box) (Var_606));
      }
      {
        Var_586 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_586, 0) = ((MR_Box) (Var_587));
        MR_hl_field(MR_mktag(1), Var_586, 1) = ((MR_Box) (Var_596));
      }
      {
        MmakeRulesPattern_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MmakeRulesPattern_159, 0) = ((MR_Box) (Var_577));
        MR_hl_field(MR_mktag(1), MmakeRulesPattern_159, 1) = ((MR_Box) (Var_586));
      }
      libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesPattern_159, STATE_VARIABLE_MmakeFile_576_576, STATE_VARIABLE_MmakeFile_161);
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
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word Dep_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Deps_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
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
          if (((MR_tag((MR_Word) MaybeOptDir_28)) == (MR_Integer) 1))
            *HeadVar__5_5 = STATE_VARIABLE_OptDeps_39_39;
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dep_18));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_39_39));
            }
          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_1, (MR_Integer) 1, (MR_String) ".trans_opt", Dep_18, &TransOptName_31);
          libs__file_util__search_for_file_returning_dir_5_p_0(IntermodDirs_3, TransOptName_31, &MaybeTransOptDir_32);
          if (((MR_tag((MR_Word) MaybeTransOptDir_32)) == (MR_Integer) 1))
            *HeadVar__6_6 = STATE_VARIABLE_TransOptDeps_40_40;
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dep_18));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_TransOptDeps_40_40));
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeFileName_23;

          parse_tree__find_module__search_for_module_source_6_p_0(Globals_1, IntermodDirs_3, Dep_18, &MaybeFileName_23);
          if (((MR_tag((MR_Word) MaybeFileName_23)) == (MR_Integer) 1))
          {
            MR_String OptName_55;
            MR_Word MaybeOptDir_56;
            MR_String TransOptName_57;
            MR_Word MaybeTransOptDir_58;

            parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_1, (MR_Integer) 1, (MR_String) ".opt", Dep_18, &OptName_55);
            libs__file_util__search_for_file_returning_dir_5_p_0(IntermodDirs_3, OptName_55, &MaybeOptDir_56);
            if (((MR_tag((MR_Word) MaybeOptDir_56)) == (MR_Integer) 1))
              *HeadVar__5_5 = STATE_VARIABLE_OptDeps_39_39;
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dep_18));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_39_39));
              }
            parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_1, (MR_Integer) 1, (MR_String) ".trans_opt", Dep_18, &TransOptName_57);
            libs__file_util__search_for_file_returning_dir_5_p_0(IntermodDirs_3, TransOptName_57, &MaybeTransOptDir_58);
            if (((MR_tag((MR_Word) MaybeTransOptDir_58)) == (MR_Integer) 1))
              *HeadVar__6_6 = STATE_VARIABLE_TransOptDeps_40_40;
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__6_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dep_18));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_TransOptDeps_40_40));
              }
          }
          else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dep_18));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_39_39));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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

    parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
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
    MR_Word FileNames_14;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Box conv1_STATE_VARIABLE_IO_16;

    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Globals_8));
      MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) (Suffix_10));
    }
    Var_18 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Modules_11);
    mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, Var_18, &FileNames_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16);
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

    parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
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
      Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Globals_7));
      MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (Suffix_8));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, Modules_9, FileNames_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13);
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
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Dep_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
    MR_Word Deps_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
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
          if (((MR_tag((MR_Word) MaybeOptDir_29)) == (MR_Integer) 1))
            *HeadVar__6_6 = STATE_VARIABLE_OptDeps_35_35;
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dep_20));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_35_35));
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Result1_24;

          parse_tree__find_module__search_for_module_source_6_p_0(HeadVar__1_1, HeadVar__3_3, Dep_20, &Result1_24);
          if (((MR_tag((MR_Word) Result1_24)) == (MR_Integer) 1))
          {
            MR_String OptName_42;
            MR_Word MaybeOptDir_43;

            parse_tree__file_names__module_name_to_search_file_name_6_p_0(HeadVar__1_1, HeadVar__4_4, Dep_20, &OptName_42);
            libs__file_util__search_for_file_5_p_0(HeadVar__3_3, OptName_42, &MaybeOptDir_43);
            if (((MR_tag((MR_Word) MaybeOptDir_43)) == (MR_Integer) 1))
              *HeadVar__6_6 = STATE_VARIABLE_OptDeps_35_35;
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__6_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dep_20));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_35_35));
              }
          }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
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

    succeeded = parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

    parse_tree__write_deps_file____Compare____maybe_mmake_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
