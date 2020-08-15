/*
** Automatically generated from `write_deps_file.m'
** by the Mercury compiler,
** version rotd-2020-08-15
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
#include "libs.mih"
#include "list.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "recompilation.mih"
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
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_355_355;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ChildrenMap_43;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_94;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_354;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_41;
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv1_Var_41;
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv0_Var_94;
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

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_names__type_ctor_info_ext_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__cord__pti_cord_1__plain_libs__mmakefiles__type_ctor_info_mmake_fragment_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__write_deps_file__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0;

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1263__1_5_p_0(
  MR_Word Globals_9,
  MR_Word LambdaHeadVar__1_140,
  MR_String * LambdaHeadVar__2_141);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1231__1_2_p_0(
  MR_Word DepsMap_12,
  MR_Word LambdaHeadVar__1_126);

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1158__1_4_p_0(
  MR_Word DepsGraph_8,
  MR_Word LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1129__1_2_p_0(
  MR_Word ModuleName_22,
  MR_Word LambdaHeadVar__1_49);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_d_file__718__1_3_p_0(
  MR_Word SourceFileModuleName_16,
  MR_Word LambdaHeadVar__1_527,
  MR_Word * LambdaHeadVar__2_528);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_d_file__704__1_2_p_0(
  MR_Word BackendLangs_140,
  MR_Word LambdaHeadVar__1_524);

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
  MR_Word STATE_VARIABLE_MmakeFile_0_20,
  MR_Word * STATE_VARIABLE_MmakeFile_21);

static void MR_CALL 
parse_tree__write_deps_file__construct_subdirs_shorthand_rule_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word Ext_9,
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
  MR_Word ForeignImportExt_9,
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
  MR_Word Ext_11,
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
  MR_Word STATE_VARIABLE_MmakeFile_0_99,
  MR_Word * STATE_VARIABLE_MmakeFile_100);

static void MR_CALL 
parse_tree__write_deps_file__get_fact_table_file_names_3_p_0(
  MR_Word DepsMap_4,
  MR_Word Modules_5,
  MR_Word * FactTableFileNames_6);

static void MR_CALL 
parse_tree__write_deps_file__get_fact_table_file_names_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FactTableFileNames_0_3,
  MR_Word * STATE_VARIABLE_FactTableFileNames_4);

static void MR_CALL 
parse_tree__write_deps_file__select_ok_modules_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word DepsMap_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
parse_tree__write_deps_file__get_extra_link_dependencies_6_p_0(
  MR_Word Globals_1,
  MR_Word Ext_2,
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
  MR_Word STATE_VARIABLE_MmakeFile_0_163,
  MR_Word * STATE_VARIABLE_MmakeFile_164);

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
  MR_Word Ext_10,
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
  MR_Word Ext_8,
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

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[13][3];

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
    ((MR_Box) (((MR_Box) ((MR_String) ".java_date")))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".dir/*.\044O")))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".c_date")))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".trans_opt_date")))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".optdate")))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".dll")))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 12 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".class")))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".java")))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".pic_o")))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".\044O")))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".c")))),
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
    ((MR_Box) (((MR_Box) ((MR_String) ".all_trans_opts")))),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 58 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[57])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 59 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".all_opts")))),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 60 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[59])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[58])))
  },
  /* row 61 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".all_int3s")))),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 62 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[61])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[60])))
  },
  /* row 63 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".all_ints")))),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 64 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[63])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[62])))
  },
  /* row 65 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".classes")))),
    ((MR_Box) ((MR_String) ".classes"))
  },
  /* row 66 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[65])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[64])))
  },
  /* row 67 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".javas")))),
    ((MR_Box) ((MR_String) ".javas"))
  },
  /* row 68 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[67])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[66])))
  },
  /* row 69 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".trans_opts")))),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 70 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[69])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[68])))
  },
  /* row 71 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".opts")))),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 72 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[71])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[70])))
  },
  /* row 73 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".int3s")))),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 74 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[73])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[72])))
  },
  /* row 75 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".ints")))),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 76 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[75])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[74])))
  },
  /* row 77 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".check")))),
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

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[13][3] = {
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
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[5])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0])),
    ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[1])),
    ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[2])),
    ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[3])),
    ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[4])),
    ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[5])),
    ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[7])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
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
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
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
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
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
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
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
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
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
    ((MR_Box) (&parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_names__type_ctor_info_ext_0)),
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
    ((MR_Box) (&parse_tree__write_deps_file__pair__pti_pair_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_builtin__type_ctor_info_string_0)),
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

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_names__type_ctor_info_ext_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0),
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
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1263__1_5_p_0(
  MR_Word Globals_9,
  MR_Word LambdaHeadVar__1_140,
  MR_String * LambdaHeadVar__2_141)
{
  {
    MR_String F0_46;
    MR_Word M_512 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_140, (MR_Integer) 0))));
    MR_Word E_513 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_140, (MR_Integer) 1))));

    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 0, E_513, M_512, &F0_46);
    *LambdaHeadVar__2_141 = mercury__string__f_43_43_2_f_0((MR_String) "\044(os_subdir)", F0_46);
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1231__1_2_p_0(
  MR_Word DepsMap_12,
  MR_Word LambdaHeadVar__1_126)
{
  {
    MR_bool succeeded;
    MR_Word ModuleAndImports_32;
    MR_Word ChildrenMap_33;
    MR_Word Var_127;
    MR_Box conv0_Var_127;

    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_12, ((MR_Box) (LambdaHeadVar__1_126)), &conv0_Var_127);
    Var_127 = ((MR_Word) (conv0_Var_127));
    ModuleAndImports_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_127, (MR_Integer) 1))));
    parse_tree__module_imports__module_and_imports_get_children_map_2_p_0(ModuleAndImports_32, &ChildrenMap_33);
    succeeded = mercury__one_or_more_map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ChildrenMap_33);
    succeeded = !(succeeded);
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1158__1_4_p_0(
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
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1129__1_2_p_0(
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
parse_tree__write_deps_file__IntroducedFrom__pred__generate_d_file__718__1_3_p_0(
  MR_Word SourceFileModuleName_16,
  MR_Word LambdaHeadVar__1_527,
  MR_Word * LambdaHeadVar__2_528)
{
  {
    MR_bool succeeded;
    MR_String Var_529;

    *LambdaHeadVar__2_528 = parse_tree__prog_foreign__fim_spec_module_name_from_module_2_f_0(LambdaHeadVar__1_527, SourceFileModuleName_16);
    succeeded = ((MR_tag((MR_Word) *LambdaHeadVar__2_528)) == (MR_Integer) 0);
    if (succeeded)
    {
      Var_529 = ((MR_String) ((MR_hl_field(MR_mktag(0), *LambdaHeadVar__2_528, (MR_Integer) 0))));
      succeeded = (strcmp(Var_529, (MR_String) "mercury") == 0);
    }
    succeeded = !(succeeded);
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_d_file__704__1_2_p_0(
  MR_Word BackendLangs_140,
  MR_Word LambdaHeadVar__1_524)
{
  {
    MR_bool succeeded;
    MR_Word Var_525 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_524, (MR_Integer) 0))) & (MR_Integer) 3);

    succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_525)), BackendLangs_140);
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

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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
    mercury__io__write_list_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Stream_5, SCC_8, (MR_String) "\n", (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[12]));
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
  MR_Word STATE_VARIABLE_MmakeFile_0_20,
  MR_Word * STATE_VARIABLE_MmakeFile_21)
{
  {
    MR_Word Ext_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
    MR_String VarExtension_13 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));
    MR_String TargetName_16;
    MR_String Source_17;
    MR_String ExtStr_18;
    MR_Word MmakeRule_19;
    MR_String Var_32;
    MR_String Var_34;
    MR_Word Var_36;
    MR_String Var_41;
    MR_String Var_42;

    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, Ext_12, ModuleName_10, &TargetName_16);
    Var_41 = mercury__string__f_43_43_2_f_0(VarExtension_13, (MR_String) ")");
    Var_42 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_11, Var_41);
    Source_17 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_42);
    ExtStr_18 = parse_tree__file_names__extension_to_string_1_f_0(Ext_12);
    Var_34 = mercury__string__f_43_43_2_f_0(ExtStr_18, VarExtension_13);
    Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "collective_target_", Var_34);
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) (Source_17));
      MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRule_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRule_19, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRule_19, 1) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(3), MmakeRule_19, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRule_19, 3) = ((MR_Box) (TargetName_16));
      MR_hl_field(MR_mktag(3), MmakeRule_19, 4) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(3), MmakeRule_19, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRule_19, STATE_VARIABLE_MmakeFile_0_20, STATE_VARIABLE_MmakeFile_21);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__construct_subdirs_shorthand_rule_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word Ext_9,
  MR_Word * MmakeRule_10)
{
  {
    MR_String ModuleStr_12;
    MR_String ExtStr_13;
    MR_String Target_14;
    MR_String ShorthandTarget_15;
    MR_String Var_20;
    MR_Word Var_23;

    parse_tree__file_names__module_name_to_file_name_stem_2_p_0(ModuleName_8, &ModuleStr_12);
    ExtStr_13 = parse_tree__file_names__extension_to_string_1_f_0(Ext_9);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 1, Ext_9, ModuleName_8, &Target_14);
    ShorthandTarget_15 = mercury__string__f_43_43_2_f_0(ModuleStr_12, ExtStr_13);
    Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "subdir_shorthand_for_", ExtStr_13);
    {
      Var_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_23, 0) = ((MR_Box) (Target_14));
      MR_hl_field(MR_mktag(1), Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      *MmakeRule_10 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_20));
      MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ShorthandTarget_15));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Var_23));
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

    parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__gather_foreign_import_deps_7_p_0(
  MR_Word Globals_8,
  MR_Word ForeignImportExt_9,
  MR_Word ForeignImportedModuleNames_10,
  MR_String ForeignImportTarget_11,
  MR_Word * MmakeRule_12)
{
  {
    MR_Word ForeignImportedFileNames_14;
    MR_String ForeignImportExtStr_15;
    MR_String Var_19;
    MR_Word Var_30;
    MR_Box conv1_STATE_VARIABLE_IO_17;

    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (parse_tree__write_deps_file__gather_foreign_import_deps_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (Globals_8));
      MR_hl_field(MR_mktag(0), Var_30, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 5) = ((MR_Box) (ForeignImportExt_9));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_30, ForeignImportedModuleNames_10, &ForeignImportedFileNames_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_17);
    ForeignImportExtStr_15 = parse_tree__file_names__extension_to_string_1_f_0(ForeignImportExt_9);
    Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_deps_for_", ForeignImportExtStr_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      *MmakeRule_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_19));
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

    parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__gather_nested_deps_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word NestedDeps_10,
  MR_Word Ext_11,
  MR_Word * MmakeRule_12)
{
  {
    MR_String ExtName_14;
    MR_Word NestedDepsFileNames_15;
    MR_String ExtStr_16;
    MR_String Var_22;
    MR_Word Var_33;
    MR_Box conv1_STATE_VARIABLE_IO_18;

    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_8, (MR_Integer) 1, Ext_11, ModuleName_9, &ExtName_14);
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (parse_tree__write_deps_file__gather_nested_deps_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Globals_8));
      MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_33, 5) = ((MR_Box) (Ext_11));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_33, NestedDeps_10, &NestedDepsFileNames_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18);
    ExtStr_16 = parse_tree__file_names__extension_to_string_1_f_0(Ext_11);
    Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "nested_deps_for_", ExtStr_16);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      *MmakeRule_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_22));
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

          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_6, (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_String) ".order"))), Module_7, &OrdFileName_12);
          libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Creating module order file \140");
          libs__file_util__maybe_write_string_4_p_0(Verbose_11, OrdFileName_12);
          libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "\'...");
          mercury__io__open_output_4_p_0(OrdFileName_12, &OrdResult_13);
          if (((MR_tag((MR_Word) OrdResult_13)) == (MR_Integer) 1))
          {
            MR_Word IOError_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrdResult_13, (MR_Integer) 0))));
            MR_String IOErrorMessage_16;
            MR_String OrdMessage_17;
            MR_Word Var_35;
            MR_Word Var_37;
            MR_Word Var_38;
            MR_Word Var_40;

            libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) " failed.\n");
            libs__file_util__maybe_flush_output_3_p_0(Verbose_11);
            mercury__io__error_message_2_p_0(IOError_15, &IOErrorMessage_16);
            {
              Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (IOErrorMessage_16));
              MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) ((MR_String) "\' for output: "));
              MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_40));
            }
            {
              Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (OrdFileName_12));
              MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_38));
            }
            {
              Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
              MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_37));
            }
            mercury__string__append_list_2_p_0(Var_35, &OrdMessage_17);
            libs__file_util__report_error_3_p_0(OrdMessage_17);
          }
          else
          {
            MR_Word OrdStream_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrdResult_13, (MR_Integer) 0))));
            MR_Word Var_44;

            {
              Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[1]));
              MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1));
              MR_hl_field(MR_mktag(0), Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), Var_44, 3) = ((MR_Box) (OrdStream_14));
            }
            mercury__io__write_list_6_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), OrdStream_14, DepsOrdering_8, (MR_String) "\n\n", Var_44);
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
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_String) ".dep"))), ModuleName_9, &DepFileName_13);
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, DepFileName_13);
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "\'...\n");
    mercury__io__open_output_4_p_0(DepFileName_13, &DepResult_14);
    if (((MR_tag((MR_Word) DepResult_14)) == (MR_Integer) 1))
    {
      MR_Word IOError_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DepResult_14, (MR_Integer) 0))));
      MR_String IOErrorMessage_19;
      MR_String DepMessage_20;
      MR_Word Var_37;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_42;

      libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) " failed.\n");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_12);
      mercury__io__error_message_2_p_0(IOError_18, &IOErrorMessage_19);
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (IOErrorMessage_19));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) ((MR_String) "\' for output: "));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (DepFileName_13));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_40));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
      }
      mercury__string__append_list_2_p_0(Var_37, &DepMessage_20);
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
    MR_Word STATE_VARIABLE_MmakeFile_85_85;
    MR_Word STATE_VARIABLE_MmakeFile_87_87;
    MR_Word STATE_VARIABLE_MmakeFile_89_89;
    MR_Word STATE_VARIABLE_MmakeFile_91_91;

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
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_String) ".init"))), ModuleName_11, &InitFileName_20);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_String) "_init.c"))), ModuleName_11, &InitCFileName_21);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_String) "_init.\044O"))), ModuleName_11, &InitObjFileName_22);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_String) "_init.pic_o"))), ModuleName_11, &InitPicObjFileName_23);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 137, &MmcMakeDeps_24);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 355, &Intermod_25);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 359, &TransOpt_26);
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
          MR_String Var_71;

          Var_71 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_19, (MR_String) ".module_deps)");
          ModuleDepsVar_27 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_71);
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
          MR_String Var_76;

          Var_76 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_19, (MR_String) ".opts)");
          OptsVar_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_76);
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
          MR_String Var_81;

          Var_81 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_19, (MR_String) ".trans_opts)");
          TransOptsVar_33 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_81);
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
    parse_tree__write_deps_file__generate_dep_file_exec_library_targets_15_p_0(Globals_9, ModuleName_11, ModuleMakeVarName_19, InitFileName_20, InitObjFileName_22, MaybeOptsVar_31, MaybeTransOptsVar_34, &ExeFileName_39, &JarFileName_40, &LibFileName_41, &SharedLibFileName_42, STATE_VARIABLE_MmakeFile_50_50, &STATE_VARIABLE_MmakeFile_85_85);
    parse_tree__write_deps_file__generate_dep_file_init_targets_11_p_0(Globals_9, ModuleName_11, ModuleMakeVarName_19, InitCFileName_21, InitFileName_20, &DepFileName_43, &DvFileName_44, STATE_VARIABLE_MmakeFile_85_85, &STATE_VARIABLE_MmakeFile_87_87);
    parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0(Globals_9, ModuleName_11, DepsMap_12, ModuleMakeVarName_19, MmcMakeDeps_24, Intermod_25, TransOpt_26, MaybeModuleDepsVarPair_36, MaybeOptsVarPair_37, MaybeTransOptsVarPair_38, STATE_VARIABLE_MmakeFile_87_87, &STATE_VARIABLE_MmakeFile_89_89);
    parse_tree__write_deps_file__generate_dep_file_collective_targets_7_p_0(Globals_9, ModuleName_11, ModuleMakeVarName_19, STATE_VARIABLE_MmakeFile_89_89, &STATE_VARIABLE_MmakeFile_91_91);
    parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0(Globals_9, ModuleName_11, ModuleMakeVarName_19, ExeFileName_39, InitCFileName_21, InitObjFileName_22, InitPicObjFileName_23, InitFileName_20, LibFileName_41, SharedLibFileName_42, JarFileName_40, DepFileName_43, DvFileName_44, STATE_VARIABLE_MmakeFile_91_91, STATE_VARIABLE_MmakeFile_46);
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
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_80;
    MR_Word Var_84;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_92;
    MR_Word Var_93;
    MR_Word Var_94;
    MR_Word Var_95;
    MR_String Var_96;
    MR_Word STATE_VARIABLE_MmakeFile_99_99;
    MR_String Var_140;
    MR_Word Var_142;
    MR_Word Var_143;
    MR_Word Var_144;
    MR_Word Var_145;
    MR_Word Var_146;
    MR_Word Var_147;
    MR_Word Var_149;
    MR_Word Var_153;
    MR_Word Var_156;
    MR_Word Var_157;
    MR_Word Var_162;
    MR_Word Var_163;
    MR_Word Var_165;
    MR_String Var_166;

    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_18, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".clean"))), ModuleName_19, &CleanTargetName_33);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_18, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".realclean"))), ModuleName_19, &RealCleanTargetName_34);
    {
      Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (InitPicObjFileName_24));
      MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (InitObjFileName_23));
      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_78));
    }
    {
      CleanFiles_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CleanFiles_36, 0) = ((MR_Box) (InitCFileName_22));
      MR_hl_field(MR_mktag(1), CleanFiles_36, 1) = ((MR_Box) (Var_77));
    }
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (CleanTargetName_33));
      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) ((MR_String) "clean_local"));
      MR_hl_field(MR_mktag(3), Var_80, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_80, 3) = ((MR_Box) ((MR_String) "clean_local"));
      MR_hl_field(MR_mktag(3), Var_80, 4) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(3), Var_80, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_94 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[9]));
      MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0_1));
      MR_hl_field(MR_mktag(0), Var_94, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_94, 3) = ((MR_Box) (ModuleMakeVarName_20));
    }
    Var_93 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_94, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[90])));
    Var_96 = parse_tree__write_deps_file__remove_files_cmd_1_f_0(CleanFiles_36);
    {
      Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_95, 0) = ((MR_Box) (Var_96));
      MR_hl_field(MR_mktag(1), Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_93, Var_95);
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) ((MR_String) "clean_target"));
      MR_hl_field(MR_mktag(3), Var_88, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_88, 3) = ((MR_Box) (CleanTargetName_33));
      MR_hl_field(MR_mktag(3), Var_88, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Var_88, 5) = ((MR_Box) (Var_92));
    }
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRulesClean_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MmakeRulesClean_37, 0) = ((MR_Box) (Var_80));
      MR_hl_field(MR_mktag(1), MmakeRulesClean_37, 1) = ((MR_Box) (Var_87));
    }
    libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesClean_37, STATE_VARIABLE_MmakeFile_0_41, &STATE_VARIABLE_MmakeFile_99_99);
    Var_140 = mercury__string__f_43_43_2_f_0(ExeFileName_21, (MR_String) "\044(EXT_FOR_EXE) ");
    {
      Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (DvFileName_30));
      MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) (DepFileName_29));
      MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Var_147));
    }
    {
      Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) (JarFileName_28));
      MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (Var_146));
    }
    {
      Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) (SharedLibFileName_27));
      MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (Var_145));
    }
    {
      Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) (LibFileName_26));
      MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (Var_144));
    }
    {
      Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) (InitFileName_25));
      MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (Var_143));
    }
    {
      RealCleanFiles_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), RealCleanFiles_39, 0) = ((MR_Box) (Var_140));
      MR_hl_field(MR_mktag(1), RealCleanFiles_39, 1) = ((MR_Box) (Var_142));
    }
    {
      Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) (RealCleanTargetName_34));
      MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_149 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_149, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_149, 1) = ((MR_Box) ((MR_String) "realclean_local"));
      MR_hl_field(MR_mktag(3), Var_149, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_149, 3) = ((MR_Box) ((MR_String) "realclean_local"));
      MR_hl_field(MR_mktag(3), Var_149, 4) = ((MR_Box) (Var_153));
      MR_hl_field(MR_mktag(3), Var_149, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_163 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_94, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[110])));
    Var_166 = parse_tree__write_deps_file__remove_files_cmd_1_f_0(RealCleanFiles_39);
    {
      Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_165, 0) = ((MR_Box) (Var_166));
      MR_hl_field(MR_mktag(1), Var_165, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_162 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_163, Var_165);
    {
      Var_157 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_157, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_157, 1) = ((MR_Box) ((MR_String) "realclean_target"));
      MR_hl_field(MR_mktag(3), Var_157, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), Var_157, 3) = ((MR_Box) (RealCleanTargetName_34));
      MR_hl_field(MR_mktag(3), Var_157, 4) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(3), Var_157, 5) = ((MR_Box) (Var_162));
    }
    {
      Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_156, 0) = ((MR_Box) (Var_157));
      MR_hl_field(MR_mktag(1), Var_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRulesRealClean_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MmakeRulesRealClean_40, 0) = ((MR_Box) (Var_149));
      MR_hl_field(MR_mktag(1), MmakeRulesRealClean_40, 1) = ((MR_Box) (Var_156));
    }
    libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesRealClean_40, STATE_VARIABLE_MmakeFile_99_99, STATE_VARIABLE_MmakeFile_42);
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
    MR_Word conv0_STATE_VARIABLE_MmakeFile_21;

    parse_tree__write_deps_file__generate_dep_file_collective_target_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_MmakeFile_21);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_MmakeFile_21));
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
    mercury__list__foldl2_6_p_2((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[3]), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[4]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[78])), ((MR_Box) (STATE_VARIABLE_MmakeFile_0_13)), &conv2_STATE_VARIABLE_MmakeFile_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16);
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
    (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_94 = ((MR_Word) ((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv0_Var_94));
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
      MR_Word Var_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_94, (MR_Integer) 0))) & (MR_Integer) 1);
      MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_94, (MR_Integer) 0)));

      (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_354 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_94, (MR_Integer) 1))));
      parse_tree__module_imports__module_and_imports_get_children_map_2_p_0((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ModuleAndImports_354, &(env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ChildrenMap_43);
      (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = mercury__one_or_more_map__is_empty_1_p_0((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_355_355, (MR_Word) (&mercury__term__term__type_ctor_info_context_0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ChildrenMap_43);
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
          (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_355_355 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
          mercury__map__member_3_p_0((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_355_355, (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__DepsMap_17, &(env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv1_Var_41, &(env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv0_Var_94, parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_3, env_ptr);
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
      MR_String Var_89;
      MR_String Var_92;
      MR_String Var_101;
      MR_String Var_102;
      MR_String Var_104;
      MR_String Var_105;
      MR_String Var_107;
      MR_String Var_108;
      MR_String Var_109;
      MR_String Var_110;
      MR_Word Var_114;
      MR_Word Var_115;
      MR_Word Var_116;
      MR_Word Var_118;
      MR_Word Var_119;
      MR_Word Var_120;
      MR_Word Var_121;
      MR_Word Var_122;
      MR_Word Var_125;
      MR_String Var_126;
      MR_String Var_128;
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
      MR_Word Var_152;
      MR_Word Var_154;
      MR_String Var_155;
      MR_String Var_157;
      MR_String Var_158;
      MR_String Var_159;
      MR_String Var_160;
      MR_Word STATE_VARIABLE_MmakeFile_179_179;
      MR_Word STATE_VARIABLE_MmakeFile_245_245;
      MR_Word Var_252;
      MR_Word Var_256;
      MR_String Var_257;
      MR_Word Var_265;
      MR_String Var_266;
      MR_String Var_268;
      MR_Word Var_277;
      MR_Word STATE_VARIABLE_MmakeFile_279_279;
      MR_Word Var_286;
      MR_Word Var_290;
      MR_String Var_291;
      MR_Word Var_299;
      MR_String Var_300;
      MR_String Var_302;
      MR_Word Var_351;
      MR_String Var_360;
      MR_String Var_363;

      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_15, (MR_Integer) 1, (MR_String) "lib", (MR_Word) (((MR_Box) ((MR_String) ".install_ints"))), ModuleName_16, &LibInstallIntsTargetName_33);
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_15, (MR_Integer) 1, (MR_String) "lib", (MR_Word) (((MR_Box) ((MR_String) ".install_opts"))), ModuleName_16, &LibInstallOptsTargetName_34);
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_15, (MR_Integer) 1, (MR_String) "lib", (MR_Word) (((MR_Box) ((MR_String) ".install_hdrs"))), ModuleName_16, &LibInstallHdrsTargetName_35);
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_15, (MR_Integer) 1, (MR_String) "lib", (MR_Word) (((MR_Box) ((MR_String) ".install_grade_hdrs"))), ModuleName_16, &LibInstallGradeHdrsTargetName_36);
      Var_89 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".ints)");
      ModuleMakeVarNameInts_37 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_89);
      Var_92 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".int3s)");
      ModuleMakeVarNameInt3s_38 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_92);
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
        MR_String Var_96;

        SpaceInt0Str_44 = (MR_String) " int0";
        Var_96 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".int0s)");
        ModuleVarNameInt0s_45 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_96);
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
      Var_110 = mercury__string__f_43_43_2_f_0(MaybeModuleDepsVarSpace_32, (MR_String) "\"");
      Var_109 = mercury__string__f_43_43_2_f_0(MaybeTransOptsVarSpace_30, Var_110);
      Var_108 = mercury__string__f_43_43_2_f_0(MaybeOptsVarSpace_28, Var_109);
      Var_107 = mercury__string__f_43_43_2_f_0(MaybeModuleVarNameInt0sSpace_46, Var_108);
      Var_105 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_107);
      Var_104 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInt3s_38, Var_105);
      Var_102 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_104);
      Var_101 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInts_37, Var_102);
      LibInstallIntsFiles_50 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_101);
      {
        Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) (ModuleMakeVarNameInt3s_38));
        MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (ModuleMakeVarNameInts_37));
        MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_116));
      }
      Var_122 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[113]));
      Var_121 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeModuleDepsVar_31, Var_122);
      Var_120 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTransOptsVar_29, Var_121);
      Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeOptsVar_27, Var_120);
      Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeModuleVarNameInt0s_47, Var_119);
      Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_115, Var_118);
      Var_128 = mercury__string__f_43_43_2_f_0(LibInstallIntsFiles_50, (MR_String) "; \\");
      Var_126 = mercury__string__f_43_43_2_f_0((MR_String) "files=", Var_128);
      Var_160 = mercury__string__f_43_43_2_f_0(MaybeSpaceDepStr_49, (MR_String) "; do \\");
      Var_159 = mercury__string__f_43_43_2_f_0(MaybeSpaceTransOptStr_48, Var_160);
      Var_158 = mercury__string__f_43_43_2_f_0(MaybeSpaceOptStr_39, Var_159);
      Var_157 = mercury__string__f_43_43_2_f_0(SpaceInt0Str_44, Var_158);
      Var_155 = mercury__string__f_43_43_2_f_0((MR_String) "for ext in int int2 int3", Var_157);
      {
        Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_154, 0) = ((MR_Box) (Var_155));
        MR_hl_field(MR_mktag(1), Var_154, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[24])));
      }
      {
        Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'."));
        MR_hl_field(MR_mktag(1), Var_152, 1) = ((MR_Box) (Var_154));
      }
      {
        Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use"));
        MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (Var_152));
      }
      {
        Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option."));
        MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (Var_150));
      }
      {
        Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_146, 0) = ((MR_Box) ((MR_String) "done"));
        MR_hl_field(MR_mktag(1), Var_146, 1) = ((MR_Box) (Var_148));
      }
      {
        Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_144, 0) = ((MR_Box) ((MR_String) "\tfi; \\"));
        MR_hl_field(MR_mktag(1), Var_144, 1) = ((MR_Box) (Var_146));
      }
      {
        Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\"));
        MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (Var_144));
      }
      {
        Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_140, 0) = ((MR_Box) ((MR_String) "\t\techo \"installing \044\044target\"; \\"));
        MR_hl_field(MR_mktag(1), Var_140, 1) = ((MR_Box) (Var_142));
      }
      {
        Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_138, 0) = ((MR_Box) ((MR_String) "\telse \\"));
        MR_hl_field(MR_mktag(1), Var_138, 1) = ((MR_Box) (Var_140));
      }
      {
        Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) ((MR_String) "\t\techo \"\044\044target unchanged\"; \\"));
        MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (Var_138));
      }
      {
        Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) ((MR_String) "\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\"));
        MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (Var_136));
      }
      {
        Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) ((MR_String) "\ttarget=\"\044(INSTALL_INT_DIR)/\140basename \044\044file\140\"; \\"));
        MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_134));
      }
      {
        Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) ((MR_String) "for file in \044\044files; do \\"));
        MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_132));
      }
      {
        Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_125, 0) = ((MR_Box) (Var_126));
        MR_hl_field(MR_mktag(1), Var_125, 1) = ((MR_Box) (Var_130));
      }
      {
        MmakeRuleLibInstallInts_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_51, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_51, 1) = ((MR_Box) ((MR_String) "lib_install_ints"));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_51, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_51, 3) = ((MR_Box) (LibInstallIntsTargetName_33));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_51, 4) = ((MR_Box) (Var_114));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_51, 5) = ((MR_Box) (Var_125));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleLibInstallInts_51, STATE_VARIABLE_MmakeFile_0_64, &STATE_VARIABLE_MmakeFile_179_179);
      (env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = (Intermod_20 == (MR_Integer) 0);
      if ((env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded)
        (env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = (TransOpt_21 == (MR_Integer) 0);
      if ((env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded)
      {
        MR_String Var_180;

        LibInstallOptsSources_52 = (MR_Word) ((MR_Unsigned) 0U);
        Var_180 = libs__mmakefiles__silent_noop_action_0_f_0();
        {
          LibInstallOptsActions_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LibInstallOptsActions_53, 0) = ((MR_Box) (Var_180));
          MR_hl_field(MR_mktag(1), LibInstallOptsActions_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_String LibInstallOptsFiles_54;
        MR_Word Var_182;
        MR_String Var_187;
        MR_String Var_188;
        MR_String Var_190;
        MR_String Var_192;
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
        MR_Word Var_216;
        MR_Word Var_218;
        MR_String Var_219;
        MR_String Var_221;
        MR_String Var_222;

        Var_182 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTransOptsVar_29, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[114])));
        LibInstallOptsSources_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeOptsVar_27, Var_182);
        Var_188 = mercury__string__f_43_43_2_f_0(MaybeTransOptsVarSpace_30, (MR_String) "\"");
        Var_187 = mercury__string__f_43_43_2_f_0(MaybeOptsVarSpace_28, Var_188);
        LibInstallOptsFiles_54 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_187);
        Var_192 = mercury__string__f_43_43_2_f_0(LibInstallOptsFiles_54, (MR_String) "; \\");
        Var_190 = mercury__string__f_43_43_2_f_0((MR_String) "files=", Var_192);
        Var_222 = mercury__string__f_43_43_2_f_0(MaybeSpaceTransOptStr_48, (MR_String) "; do \\");
        Var_221 = mercury__string__f_43_43_2_f_0(MaybeSpaceOptStr_39, Var_222);
        Var_219 = mercury__string__f_43_43_2_f_0((MR_String) "for ext in ", Var_221);
        {
          Var_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_218, 0) = ((MR_Box) (Var_219));
          MR_hl_field(MR_mktag(1), Var_218, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[31])));
        }
        {
          Var_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_216, 0) = ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'."));
          MR_hl_field(MR_mktag(1), Var_216, 1) = ((MR_Box) (Var_218));
        }
        {
          Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_214, 0) = ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use"));
          MR_hl_field(MR_mktag(1), Var_214, 1) = ((MR_Box) (Var_216));
        }
        {
          Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option"));
          MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) (Var_214));
        }
        {
          Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_210, 0) = ((MR_Box) ((MR_String) "done"));
          MR_hl_field(MR_mktag(1), Var_210, 1) = ((MR_Box) (Var_212));
        }
        {
          Var_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_208, 0) = ((MR_Box) ((MR_String) "\tfi; \\"));
          MR_hl_field(MR_mktag(1), Var_208, 1) = ((MR_Box) (Var_210));
        }
        {
          Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\"));
          MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) (Var_208));
        }
        {
          Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) ((MR_String) "\t\techo \"installing \044\044target\"; \\"));
          MR_hl_field(MR_mktag(1), Var_204, 1) = ((MR_Box) (Var_206));
        }
        {
          Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) ((MR_String) "\telse \\"));
          MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) (Var_204));
        }
        {
          Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) ((MR_String) "\t\techo \"\044\044target unchanged\"; \\"));
          MR_hl_field(MR_mktag(1), Var_200, 1) = ((MR_Box) (Var_202));
        }
        {
          Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) ((MR_String) "\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\"));
          MR_hl_field(MR_mktag(1), Var_198, 1) = ((MR_Box) (Var_200));
        }
        {
          Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_196, 0) = ((MR_Box) ((MR_String) "\ttarget=\"\044(INSTALL_GRADE_INT_DIR)/\140basename \044\044file\140\";\\"));
          MR_hl_field(MR_mktag(1), Var_196, 1) = ((MR_Box) (Var_198));
        }
        {
          Var_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_194, 0) = ((MR_Box) ((MR_String) "for file in \044\044files; do \\"));
          MR_hl_field(MR_mktag(1), Var_194, 1) = ((MR_Box) (Var_196));
        }
        {
          LibInstallOptsActions_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), LibInstallOptsActions_53, 0) = ((MR_Box) (Var_190));
          MR_hl_field(MR_mktag(1), LibInstallOptsActions_53, 1) = ((MR_Box) (Var_194));
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
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleLibInstallOpts_55, STATE_VARIABLE_MmakeFile_179_179, &STATE_VARIABLE_MmakeFile_245_245);
      Var_360 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".mhs)");
      ModuleMakeVarNameMhs_56 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_360);
      {
        Var_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_252, 0) = ((MR_Box) (ModuleMakeVarNameMhs_56));
        MR_hl_field(MR_mktag(1), Var_252, 1) = ((MR_Box) (Var_122));
      }
      Var_257 = libs__mmakefiles__silent_noop_action_0_f_0();
      {
        Var_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_256, 0) = ((MR_Box) (Var_257));
        MR_hl_field(MR_mktag(1), Var_256, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MmakeRuleLibInstallHdrsNoMhs_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_57, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_57, 1) = ((MR_Box) ((MR_String) "install_lib_hdrs_nomhs"));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_57, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_57, 3) = ((MR_Box) (LibInstallHdrsTargetName_35));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_57, 4) = ((MR_Box) (Var_252));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_57, 5) = ((MR_Box) (Var_256));
      }
      Var_268 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameMhs_56, (MR_String) "; do \\");
      Var_266 = mercury__string__f_43_43_2_f_0((MR_String) "for hdr in ", Var_268);
      {
        Var_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_265, 0) = ((MR_Box) (Var_266));
        MR_hl_field(MR_mktag(1), Var_265, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[33])));
      }
      {
        MmakeRuleLibInstallHdrsMhs_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_58, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_58, 1) = ((MR_Box) ((MR_String) "install_lib_hdrs_mhs"));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_58, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_58, 3) = ((MR_Box) (LibInstallHdrsTargetName_35));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_58, 4) = ((MR_Box) (Var_252));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_58, 5) = ((MR_Box) (Var_265));
      }
      {
        Var_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_277, 0) = ((MR_Box) (ModuleMakeVarNameMhs_56));
        MR_hl_field(MR_mktag(1), Var_277, 1) = ((MR_Box) ((MR_String) ""));
      }
      {
        MmakeFragmentLibInstallHdrs_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallHdrs_59, 0) = ((MR_Box) (Var_277));
        MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallHdrs_59, 1) = ((MR_Box) (MmakeRuleLibInstallHdrsNoMhs_57));
        MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallHdrs_59, 2) = ((MR_Box) (MmakeRuleLibInstallHdrsMhs_58));
      }
      libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibInstallHdrs_59, STATE_VARIABLE_MmakeFile_245_245, &STATE_VARIABLE_MmakeFile_279_279);
      Var_363 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".mihs)");
      ModuleMakeVarNameMihs_60 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_363);
      {
        Var_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_286, 0) = ((MR_Box) (ModuleMakeVarNameMihs_60));
        MR_hl_field(MR_mktag(1), Var_286, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[114])));
      }
      Var_291 = libs__mmakefiles__silent_noop_action_0_f_0();
      {
        Var_290 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_290, 0) = ((MR_Box) (Var_291));
        MR_hl_field(MR_mktag(1), Var_290, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MmakeRuleLibInstallGradeHdrsNoMihs_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_61, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_61, 1) = ((MR_Box) ((MR_String) "install_grade_hdrs_no_mihs"));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_61, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_61, 3) = ((MR_Box) (LibInstallGradeHdrsTargetName_36));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_61, 4) = ((MR_Box) (Var_286));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_61, 5) = ((MR_Box) (Var_290));
      }
      Var_302 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameMihs_60, (MR_String) "; do \\");
      Var_300 = mercury__string__f_43_43_2_f_0((MR_String) "for hdr in ", Var_302);
      {
        Var_299 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_299, 0) = ((MR_Box) (Var_300));
        MR_hl_field(MR_mktag(1), Var_299, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[56])));
      }
      {
        MmakeRuleLibInstallGradeHdrsMihs_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_62, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_62, 1) = ((MR_Box) ((MR_String) "install_grade_hdrs_mihs"));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_62, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_62, 3) = ((MR_Box) (LibInstallGradeHdrsTargetName_36));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_62, 4) = ((MR_Box) (Var_286));
        MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_62, 5) = ((MR_Box) (Var_299));
      }
      {
        Var_351 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_351, 0) = ((MR_Box) (ModuleMakeVarNameMihs_60));
        MR_hl_field(MR_mktag(1), Var_351, 1) = ((MR_Box) ((MR_String) ""));
      }
      {
        MmakeFragmentLibInstallGradeHdrs_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallGradeHdrs_63, 0) = ((MR_Box) (Var_351));
        MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallGradeHdrs_63, 1) = ((MR_Box) (MmakeRuleLibInstallGradeHdrsNoMihs_61));
        MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallGradeHdrs_63, 2) = ((MR_Box) (MmakeRuleLibInstallGradeHdrsMihs_62));
      }
      libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibInstallGradeHdrs_63, STATE_VARIABLE_MmakeFile_279_279, STATE_VARIABLE_MmakeFile_65);
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
    MR_String Var_47;
    MR_String Var_51;
    MR_String Var_52;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word STATE_VARIABLE_MmakeFile_64_64;
    MR_String Var_66;
    MR_Word STATE_VARIABLE_MmakeFile_72_72;
    MR_String Var_75;
    MR_String Var_78;
    MR_String Var_80;
    MR_String Var_81;
    MR_String Var_83;
    MR_Word Var_88;
    MR_Word Var_91;
    MR_Word Var_92;

    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_12, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".dep"))), ModuleName_13, DepFileName_17);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_12, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".dv"))), ModuleName_13, DvFileName_18);
    Var_47 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_14, (MR_String) ".cs)");
    ModuleMakeVarNameCs_21 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_47);
    InitAction1_22 = mercury__string__f_43_43_2_f_0((MR_String) "echo > ", InitFileName_16);
    Var_52 = mercury__string__f_43_43_2_f_0((MR_String) " >> ", InitFileName_16);
    Var_51 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameCs_21, Var_52);
    InitAction2_23 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MKLIBINIT) ", Var_51);
    InitAction3_24 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXTRA_INIT_COMMAND) >> ", InitFileName_16);
    {
      Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (ModuleMakeVarNameCs_21));
      MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (*DepFileName_17));
      MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (InitAction3_24));
      MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (InitAction2_23));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_62));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (InitAction1_22));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_61));
    }
    {
      MmakeRuleInitFile_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 1) = ((MR_Box) ((MR_String) "init_file"));
      MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 3) = ((MR_Box) (InitFileName_16));
      MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 4) = ((MR_Box) (Var_57));
      MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 5) = ((MR_Box) (Var_60));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleInitFile_25, STATE_VARIABLE_MmakeFile_0_34, &STATE_VARIABLE_MmakeFile_64_64);
    ModuleFileName_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_13);
    Var_66 = mercury__string__f_43_43_2_f_0(ModuleFileName_26, (MR_String) "_init");
    ForceC2InitTarget_27 = mercury__string__f_43_43_2_f_0((MR_String) "force-", Var_66);
    {
      MmakeRuleForceInitCFile_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 1) = ((MR_Box) ((MR_String) "force_init_c_file"));
      MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 3) = ((MR_Box) (ForceC2InitTarget_27));
      MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleForceInitCFile_28, STATE_VARIABLE_MmakeFile_64_64, &STATE_VARIABLE_MmakeFile_72_72);
    TmpInitCFileName_29 = mercury__string__f_43_43_2_f_0(InitCFileName_15, (MR_String) ".tmp");
    Var_75 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_14, (MR_String) ".init_cs)");
    ModuleMakeVarNameInitCs_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_75);
    Var_83 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInitCs_30, (MR_String) " \044(ALL_C2INITARGS)");
    Var_81 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_83);
    Var_80 = mercury__string__f_43_43_2_f_0(TmpInitCFileName_29, Var_81);
    Var_78 = mercury__string__f_43_43_2_f_0((MR_String) "--init-c-file ", Var_80);
    InitCAction1_31 = mercury__string__f_43_43_2_f_0((MR_String) "\100\044(C2INIT) \044(ALL_GRADEFLAGS) \044(ALL_C2INITFLAGS) ", Var_78);
    InitCAction2_32 = mercury__string__f_43_43_2_f_0((MR_String) "\100mercury_update_interface ", InitCFileName_15);
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (ForceC2InitTarget_27));
      MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_58));
    }
    {
      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (InitCAction2_32));
      MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (InitCAction1_31));
      MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_92));
    }
    {
      MmakeRuleInitCFile_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleInitCFile_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleInitCFile_33, 1) = ((MR_Box) ((MR_String) "init_c_file"));
      MR_hl_field(MR_mktag(3), MmakeRuleInitCFile_33, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleInitCFile_33, 3) = ((MR_Box) (InitCFileName_15));
      MR_hl_field(MR_mktag(3), MmakeRuleInitCFile_33, 4) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(3), MmakeRuleInitCFile_33, 5) = ((MR_Box) (Var_91));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleInitCFile_33, STATE_VARIABLE_MmakeFile_72_72, STATE_VARIABLE_MmakeFile_35);
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
    MR_Word Var_71 = (MR_Word) (((MR_Box) ((MR_String) "")));
    MR_Word Var_76;
    MR_String Var_77;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word STATE_VARIABLE_MmakeFile_88_88;
    MR_String Var_90;
    MR_String Var_93;
    MR_String Var_96;
    MR_String Var_98;
    MR_String Var_102;
    MR_String Var_105;
    MR_String Var_108;
    MR_String Var_110;
    MR_String Var_111;
    MR_String Var_113;
    MR_String Var_116;
    MR_String Var_117;
    MR_String Var_119;
    MR_Word Var_123;
    MR_String Var_128;
    MR_Word Var_130;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word Var_135;
    MR_Word Var_136;
    MR_Word STATE_VARIABLE_MmakeFile_140_140;
    MR_Word Var_153;
    MR_String Var_167;
    MR_String Var_170;
    MR_Word Var_172;
    MR_Word Var_173;
    MR_Word Var_175;
    MR_Word Var_176;
    MR_Word Var_177;
    MR_Word Var_181;
    MR_Word Var_185;
    MR_Word Var_186;
    MR_Word STATE_VARIABLE_MmakeFile_190_190;
    MR_String Var_192;
    MR_String Var_195;
    MR_String Var_197;
    MR_String Var_198;
    MR_String Var_200;
    MR_String Var_202;
    MR_String Var_205;
    MR_String Var_208;
    MR_Word Var_212;
    MR_Word Var_213;
    MR_Word Var_216;
    MR_Word Var_217;
    MR_Word Var_218;
    MR_Word Var_223;
    MR_Word Var_224;
    MR_Word STATE_VARIABLE_MmakeFile_227_227;
    MR_String Var_230;
    MR_String Var_231;
    MR_String Var_233;
    MR_Word Var_239;
    MR_Word Var_240;
    MR_Word Var_242;
    MR_Word Var_243;
    MR_Word Var_244;
    MR_Word Var_245;
    MR_Word STATE_VARIABLE_MmakeFile_247_247;
    MR_String Var_249;
    MR_String Var_250;
    MR_Word Var_256;

    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_16, (MR_Integer) 1, Var_71, ModuleName_17, ExeFileName_23);
    Var_77 = mercury__string__f_43_43_2_f_0(*ExeFileName_23, (MR_String) "\044(EXT_FOR_EXE)");
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRuleExtForExe_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 1) = ((MR_Box) ((MR_String) "ext_for_exe"));
      MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 3) = ((MR_Box) (*ExeFileName_23));
      MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 4) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_85 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (MmakeRuleExtForExe_29));
    }
    {
      Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeFragmentExtForExe_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeFragmentExtForExe_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__write_deps_file_scalar_common_1[111])));
      MR_hl_field(MR_mktag(2), MmakeFragmentExtForExe_30, 1) = ((MR_Box) (Var_84));
      MR_hl_field(MR_mktag(2), MmakeFragmentExtForExe_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentExtForExe_30, STATE_VARIABLE_MmakeFile_0_66, &STATE_VARIABLE_MmakeFile_88_88);
    Var_90 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ",\044(ALL_MLLIBS_DEP))");
    All_MLLibsDep_31 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", Var_90);
    Var_93 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ",\044(ALL_MLOBJS))");
    All_MLObjs_32 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", Var_93);
    Var_98 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ",\044(ALL_MLOBJS)))");
    Var_96 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", Var_98);
    All_MLPicObjs_33 = mercury__string__f_43_43_2_f_0((MR_String) "\044(patsubst %.o,%.\044(EXT_FOR_PIC_OBJECTS),", Var_96);
    NL_All_MLObjs_34 = mercury__string__f_43_43_2_f_0((MR_String) "\\\n\t\t", All_MLObjs_32);
    Var_102 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".classes)");
    ModuleMakeVarNameClasses_35 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_102);
    Var_105 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".os)");
    ModuleMakeVarNameOs_36 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_105);
    Var_113 = mercury__string__f_43_43_2_f_0(InitObjFileName_20, (MR_String) " \\");
    Var_111 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXT_FOR_EXE) ", Var_113);
    Var_110 = mercury__string__f_43_43_2_f_0(*ExeFileName_23, Var_111);
    Var_108 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXEFILE_OPT)", Var_110);
    NonJavaMainRuleAction1Line1_37 = mercury__string__f_43_43_2_f_0((MR_String) "\044(ML) \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) -- \044(ALL_LDFLAGS) ", Var_108);
    Var_119 = mercury__string__f_43_43_2_f_0(NL_All_MLObjs_34, (MR_String) " \044(ALL_MLLIBS)");
    Var_117 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_119);
    Var_116 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameOs_36, Var_117);
    NonJavaMainRuleAction1Line2_38 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_116);
    {
      Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_123, 0) = ((MR_Box) (ModuleMakeVarNameClasses_35));
      MR_hl_field(MR_mktag(1), Var_123, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRuleExecutableJava_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 1) = ((MR_Box) ((MR_String) "executable_java"));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 3) = ((MR_Box) (*ExeFileName_23));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 4) = ((MR_Box) (Var_123));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_128 = mercury__string__f_43_43_2_f_0(*ExeFileName_23, (MR_String) "\044(EXT_FOR_EXE)");
    {
      Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (All_MLLibsDep_31));
      MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (All_MLObjs_32));
      MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_133));
    }
    {
      Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (InitObjFileName_20));
      MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_132));
    }
    {
      Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (ModuleMakeVarNameOs_36));
      MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_131));
    }
    {
      Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (NonJavaMainRuleAction1Line2_38));
      MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) (NonJavaMainRuleAction1Line1_37));
      MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (Var_136));
    }
    {
      MmakeRuleExecutableNonJava_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 1) = ((MR_Box) ((MR_String) "executable_non_java"));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 3) = ((MR_Box) (Var_128));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 4) = ((MR_Box) (Var_130));
      MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 5) = ((MR_Box) (Var_135));
    }
    {
      MmakeFragmentExecutable_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MmakeFragmentExecutable_41, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
      MR_hl_field(MR_mktag(1), MmakeFragmentExecutable_41, 1) = ((MR_Box) (MmakeRuleExecutableJava_39));
      MR_hl_field(MR_mktag(1), MmakeFragmentExecutable_41, 2) = ((MR_Box) (MmakeRuleExecutableNonJava_40));
    }
    libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentExecutable_41, STATE_VARIABLE_MmakeFile_88_88, &STATE_VARIABLE_MmakeFile_140_140);
    parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_16, (MR_Integer) 1, (MR_String) "lib", Var_71, ModuleName_17, &LibTargetName_42);
    parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_16, (MR_Integer) 0, (MR_String) "lib", (MR_Word) (((MR_Box) ((MR_String) ".\044A"))), ModuleName_17, LibFileName_25);
    Var_153 = (MR_Word) (((MR_Box) ((MR_String) ".\044(EXT_FOR_SHARED_LIB)")));
    parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_16, (MR_Integer) 0, (MR_String) "lib", Var_153, ModuleName_17, SharedLibFileName_26);
    parse_tree__file_names__module_name_to_lib_file_name_8_p_0(Globals_16, (MR_Integer) 1, (MR_String) "lib", Var_153, ModuleName_17, &MaybeSharedLibFileName_43);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_16, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".jar"))), ModuleName_17, JarFileName_24);
    libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 646, &UseInstallName_44);
    switch (UseInstallName_44) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        InstallNameOpt_45 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        libs__file_util__get_install_name_option_3_p_0(Globals_16, *SharedLibFileName_26, &InstallNameOpt_45);
        break;
    }
    Var_167 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".ints)");
    ModuleMakeVarNameInts_46 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_167);
    Var_170 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".int3s)");
    ModuleMakeVarNameInt3s_47 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_170);
    {
      Var_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_173, 0) = ((MR_Box) (ModuleMakeVarNameInt3s_47));
      MR_hl_field(MR_mktag(1), Var_173, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_172, 0) = ((MR_Box) (ModuleMakeVarNameInts_46));
      MR_hl_field(MR_mktag(1), Var_172, 1) = ((MR_Box) (Var_173));
    }
    {
      Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_177, 0) = ((MR_Box) (InitFileName_19));
      MR_hl_field(MR_mktag(1), Var_177, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_176 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTransOptsVar_22, Var_177);
    Var_175 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeOptsVar_21, Var_176);
    AllIntSources_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_172, Var_175);
    {
      Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_181, 0) = ((MR_Box) (*JarFileName_24));
      MR_hl_field(MR_mktag(1), Var_181, 1) = ((MR_Box) (AllIntSources_48));
    }
    {
      MmakeRuleLibTargetJava_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 1) = ((MR_Box) ((MR_String) "lib_target_java"));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 3) = ((MR_Box) (LibTargetName_42));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 4) = ((MR_Box) (Var_181));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_186, 0) = ((MR_Box) (MaybeSharedLibFileName_43));
      MR_hl_field(MR_mktag(1), Var_186, 1) = ((MR_Box) (AllIntSources_48));
    }
    {
      Var_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_185, 0) = ((MR_Box) (*LibFileName_25));
      MR_hl_field(MR_mktag(1), Var_185, 1) = ((MR_Box) (Var_186));
    }
    {
      MmakeRuleLibTargetNonJava_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 1) = ((MR_Box) ((MR_String) "lib_target_non_java"));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 3) = ((MR_Box) (LibTargetName_42));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 4) = ((MR_Box) (Var_185));
      MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeFragmentLibTarget_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MmakeFragmentLibTarget_51, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
      MR_hl_field(MR_mktag(1), MmakeFragmentLibTarget_51, 1) = ((MR_Box) (MmakeRuleLibTargetJava_49));
      MR_hl_field(MR_mktag(1), MmakeFragmentLibTarget_51, 2) = ((MR_Box) (MmakeRuleLibTargetNonJava_50));
    }
    libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibTarget_51, STATE_VARIABLE_MmakeFile_140_140, &STATE_VARIABLE_MmakeFile_190_190);
    Var_192 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".pic_os)");
    ModuleMakeVarNamePicOs_52 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_192);
    Var_202 = mercury__string__f_43_43_2_f_0(*SharedLibFileName_26, (MR_String) " \\");
    Var_200 = mercury__string__f_43_43_2_f_0((MR_String) "-o ", Var_202);
    Var_198 = mercury__string__f_43_43_2_f_0((MR_String) " \044(ALL_LD_LIBFLAGS) ", Var_200);
    Var_197 = mercury__string__f_43_43_2_f_0(InstallNameOpt_45, Var_198);
    Var_195 = mercury__string__f_43_43_2_f_0((MR_String) "-- ", Var_197);
    SharedLibAction1Line1_53 = mercury__string__f_43_43_2_f_0((MR_String) "\044(ML) --make-shared-lib \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) ", Var_195);
    Var_205 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNamePicOs_52, (MR_String) " \\");
    SharedLibAction1Line2_54 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_205);
    Var_208 = mercury__string__f_43_43_2_f_0(All_MLPicObjs_33, (MR_String) " \044(ALL_MLLIBS)");
    SharedLibAction1Line3_55 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_208);
    {
      Var_213 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_213, 0) = ((MR_Box) (All_MLPicObjs_33));
      MR_hl_field(MR_mktag(1), Var_213, 1) = ((MR_Box) (Var_133));
    }
    {
      Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) (ModuleMakeVarNamePicOs_52));
      MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) (Var_213));
    }
    {
      Var_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_218, 0) = ((MR_Box) (SharedLibAction1Line3_55));
      MR_hl_field(MR_mktag(1), Var_218, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_217, 0) = ((MR_Box) (SharedLibAction1Line2_54));
      MR_hl_field(MR_mktag(1), Var_217, 1) = ((MR_Box) (Var_218));
    }
    {
      Var_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_216, 0) = ((MR_Box) (SharedLibAction1Line1_53));
      MR_hl_field(MR_mktag(1), Var_216, 1) = ((MR_Box) (Var_217));
    }
    {
      MmakeRuleSharedLib_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 1) = ((MR_Box) ((MR_String) "shared_lib"));
      MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 3) = ((MR_Box) (*SharedLibFileName_26));
      MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 4) = ((MR_Box) (Var_212));
      MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 5) = ((MR_Box) (Var_216));
    }
    {
      Var_224 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_224, 0) = ((MR_Box) (MmakeRuleSharedLib_56));
    }
    {
      Var_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_223, 0) = ((MR_Box) (Var_224));
      MR_hl_field(MR_mktag(1), Var_223, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeFragmentSharedLib_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeFragmentSharedLib_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__write_deps_file_scalar_common_1[112])));
      MR_hl_field(MR_mktag(2), MmakeFragmentSharedLib_57, 1) = ((MR_Box) (Var_223));
      MR_hl_field(MR_mktag(2), MmakeFragmentSharedLib_57, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentSharedLib_57, STATE_VARIABLE_MmakeFile_190_190, &STATE_VARIABLE_MmakeFile_227_227);
    LibAction1_58 = mercury__string__f_43_43_2_f_0((MR_String) "rm -f ", *LibFileName_25);
    Var_233 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameOs_36, (MR_String) " \\");
    Var_231 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_233);
    Var_230 = mercury__string__f_43_43_2_f_0(*LibFileName_25, Var_231);
    LibAction2Line1_59 = mercury__string__f_43_43_2_f_0((MR_String) "\044(AR) \044(ALL_ARFLAGS) \044(AR_LIBFILE_OPT)", Var_230);
    LibAction2Line2_60 = mercury__string__f_43_43_2_f_0((MR_String) "\t", All_MLObjs_32);
    LibAction3_61 = mercury__string__f_43_43_2_f_0((MR_String) "\044(RANLIB) \044(ALL_RANLIBFLAGS) ", *LibFileName_25);
    {
      Var_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_240, 0) = ((MR_Box) (All_MLObjs_32));
      MR_hl_field(MR_mktag(1), Var_240, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_239, 0) = ((MR_Box) (ModuleMakeVarNameOs_36));
      MR_hl_field(MR_mktag(1), Var_239, 1) = ((MR_Box) (Var_240));
    }
    {
      Var_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_245, 0) = ((MR_Box) (LibAction3_61));
      MR_hl_field(MR_mktag(1), Var_245, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_244, 0) = ((MR_Box) (LibAction2Line2_60));
      MR_hl_field(MR_mktag(1), Var_244, 1) = ((MR_Box) (Var_245));
    }
    {
      Var_243 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_243, 0) = ((MR_Box) (LibAction2Line1_59));
      MR_hl_field(MR_mktag(1), Var_243, 1) = ((MR_Box) (Var_244));
    }
    {
      Var_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_242, 0) = ((MR_Box) (LibAction1_58));
      MR_hl_field(MR_mktag(1), Var_242, 1) = ((MR_Box) (Var_243));
    }
    {
      MmakeRuleLib_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleLib_62, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleLib_62, 1) = ((MR_Box) ((MR_String) "lib"));
      MR_hl_field(MR_mktag(3), MmakeRuleLib_62, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleLib_62, 3) = ((MR_Box) (*LibFileName_25));
      MR_hl_field(MR_mktag(3), MmakeRuleLib_62, 4) = ((MR_Box) (Var_239));
      MR_hl_field(MR_mktag(3), MmakeRuleLib_62, 5) = ((MR_Box) (Var_242));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleLib_62, STATE_VARIABLE_MmakeFile_227_227, &STATE_VARIABLE_MmakeFile_247_247);
    parse_tree__module_cmds__list_class_files_for_jar_mmake_3_p_0(Globals_16, ModuleMakeVarNameClasses_35, &ListClassFiles_63);
    Var_250 = mercury__string__f_43_43_2_f_0((MR_String) " ", ListClassFiles_63);
    Var_249 = mercury__string__f_43_43_2_f_0(*JarFileName_24, Var_250);
    JarAction1_64 = mercury__string__f_43_43_2_f_0((MR_String) "\044(JAR) \044(JAR_CREATE_FLAGS) ", Var_249);
    {
      Var_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_256, 0) = ((MR_Box) (JarAction1_64));
      MR_hl_field(MR_mktag(1), Var_256, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRuleJar_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleJar_65, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleJar_65, 1) = ((MR_Box) ((MR_String) "jar"));
      MR_hl_field(MR_mktag(3), MmakeRuleJar_65, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleJar_65, 3) = ((MR_Box) (*JarFileName_24));
      MR_hl_field(MR_mktag(3), MmakeRuleJar_65, 4) = ((MR_Box) (Var_123));
      MR_hl_field(MR_mktag(3), MmakeRuleJar_65, 5) = ((MR_Box) (Var_256));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleJar_65, STATE_VARIABLE_MmakeFile_247_247, STATE_VARIABLE_MmakeFile_67);
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
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_String) ".dv"))), ModuleName_9, &DvFileName_13);
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% Creating auto-dependency file \140");
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, DvFileName_13);
    libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "\'...\n");
    mercury__io__open_output_4_p_0(DvFileName_13, &DvResult_14);
    if (((MR_tag((MR_Word) DvResult_14)) == (MR_Integer) 1))
    {
      MR_Word IOError_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DvResult_14, (MR_Integer) 0))));
      MR_String IOErrorMessage_19;
      MR_String DvMessage_20;
      MR_Word Var_37;
      MR_Word Var_39;
      MR_Word Var_40;
      MR_Word Var_42;

      libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) " failed.\n");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_12);
      mercury__io__error_message_2_p_0(IOError_18, &IOErrorMessage_19);
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (IOErrorMessage_19));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) ((MR_String) "\' for output: "));
        MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) (Var_42));
      }
      {
        Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (DvFileName_13));
        MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Var_40));
      }
      {
        Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) ((MR_String) "error opening file \140"));
        MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (Var_39));
      }
      mercury__string__append_list_2_p_0(Var_37, &DvMessage_20);
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
    MR_String conv4_LambdaHeadVar__2_141;

    parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1263__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv4_LambdaHeadVar__2_141);
    *wrapper_arg_2 = ((MR_Box) (conv4_LambdaHeadVar__2_141));
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

    succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1231__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
  MR_Word STATE_VARIABLE_MmakeFile_0_99,
  MR_Word * STATE_VARIABLE_MmakeFile_100)
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
    MR_Word MmakeVarAllCs_51;
    MR_Word FactTableFileNames_52;
    MR_Word FactTableFileNamesC_53;
    MR_Word FactTableFileNamesOs_54;
    MR_Word FactTableFileNamesPicOs_55;
    MR_Word MmakeVarCs_56;
    MR_Word MmakeVarDlls_57;
    MR_Word MmakeVarAllOs_58;
    MR_Word MmakeVarAllPicOs_59;
    MR_Word MmakeVarOs_60;
    MR_Word MmakeVarPicOs_61;
    MR_Word MmakeVarUseds_62;
    MR_Word MmakeVarJavas_63;
    MR_Word MmakeVarAllJavas_64;
    MR_Word MmakeVarClasses_65;
    MR_Word MmakeVarCss_66;
    MR_Word MmakeVarAllCss_67;
    MR_Word MmakeVarDirs_68;
    MR_Word MmakeVarDirOs_69;
    MR_Word MmakeVarDates_70;
    MR_Word MmakeVarDate0s_71;
    MR_Word MmakeVarDate3s_72;
    MR_Word MmakeVarOptDates_73;
    MR_Word MmakeVarTransOptDates_74;
    MR_Word MmakeVarCDates_75;
    MR_Word MmakeVarJavaDates_76;
    MR_Word MmakeVarCsDates_77;
    MR_Word MmakeVarDs_78;
    MR_Word ModuleDepFileExt_79;
    MR_String ModuleDepFileExtStr_80;
    MR_Word MmakeVarModuleDeps_81;
    MR_Word HighLevelCode_82;
    MR_Word MihSources_83;
    MR_Word MmakeVarMihs_84;
    MR_Word MhSources_85;
    MR_Word MmakeVarMhs_86;
    MR_Word MmakeVarAllMihs_87;
    MR_Word MmakeVarAllMhs_88;
    MR_Word MmakeVarInts_89;
    MR_Word MmakeVarInt0s_90;
    MR_Word MmakeVarAllInt0s_91;
    MR_Word MmakeVarInt3s_92;
    MR_Word MmakeVarOpts_93;
    MR_Word MmakeVarTransOpts_94;
    MR_Word MmakeVarAnalysiss_95;
    MR_Word MmakeVarRequests_96;
    MR_Word MmakeVarImdgs_97;
    MR_Word MmakeVarProfs_98;
    MR_Word STATE_VARIABLE_MmakeFile_104_104;
    MR_Word Var_106;
    MR_String Var_107;
    MR_Word Var_109;
    MR_Word STATE_VARIABLE_MmakeFile_112_112;
    MR_String Var_113;
    MR_Word Var_115;
    MR_Word STATE_VARIABLE_MmakeFile_118_118;
    MR_Word Var_119;
    MR_String Var_122;
    MR_Word STATE_VARIABLE_MmakeFile_124_124;
    MR_Word Var_125;
    MR_String Var_131;
    MR_Word STATE_VARIABLE_MmakeFile_133_133;
    MR_String Var_137;
    MR_Word STATE_VARIABLE_MmakeFile_139_139;
    MR_String Var_147;
    MR_Word STATE_VARIABLE_MmakeFile_149_149;
    MR_String Var_150;
    MR_String Var_152;
    MR_Word STATE_VARIABLE_MmakeFile_157_157;
    MR_String Var_158;
    MR_String Var_160;
    MR_Word STATE_VARIABLE_MmakeFile_165_165;
    MR_String Var_166;
    MR_String Var_168;
    MR_Word STATE_VARIABLE_MmakeFile_173_173;
    MR_String Var_183;
    MR_Word Var_185;
    MR_String Var_186;
    MR_String Var_188;
    MR_Word STATE_VARIABLE_MmakeFile_190_190;
    MR_String Var_191;
    MR_String Var_193;
    MR_Word STATE_VARIABLE_MmakeFile_198_198;
    MR_String Var_199;
    MR_Word Var_201;
    MR_String Var_202;
    MR_Word STATE_VARIABLE_MmakeFile_207_207;
    MR_String Var_208;
    MR_Word Var_210;
    MR_String Var_211;
    MR_Word STATE_VARIABLE_MmakeFile_216_216;
    MR_String Var_217;
    MR_String Var_219;
    MR_Word STATE_VARIABLE_MmakeFile_224_224;
    MR_String Var_225;
    MR_String Var_227;
    MR_Word STATE_VARIABLE_MmakeFile_232_232;
    MR_String Var_233;
    MR_String Var_235;
    MR_Word STATE_VARIABLE_MmakeFile_240_240;
    MR_String Var_241;
    MR_String Var_243;
    MR_Word STATE_VARIABLE_MmakeFile_248_248;
    MR_String Var_249;
    MR_String Var_251;
    MR_Word STATE_VARIABLE_MmakeFile_256_256;
    MR_String Var_257;
    MR_Word Var_259;
    MR_String Var_260;
    MR_Word Var_265;
    MR_String Var_266;
    MR_Word STATE_VARIABLE_MmakeFile_272_272;
    MR_String Var_273;
    MR_String Var_275;
    MR_Word STATE_VARIABLE_MmakeFile_280_280;
    MR_String Var_281;
    MR_String Var_283;
    MR_Word STATE_VARIABLE_MmakeFile_288_288;
    MR_String Var_289;
    MR_String Var_291;
    MR_Word STATE_VARIABLE_MmakeFile_296_296;
    MR_String Var_297;
    MR_String Var_299;
    MR_Word STATE_VARIABLE_MmakeFile_304_304;
    MR_String Var_305;
    MR_String Var_307;
    MR_Word STATE_VARIABLE_MmakeFile_312_312;
    MR_String Var_313;
    MR_String Var_315;
    MR_Word STATE_VARIABLE_MmakeFile_320_320;
    MR_String Var_321;
    MR_String Var_323;
    MR_Word STATE_VARIABLE_MmakeFile_328_328;
    MR_String Var_329;
    MR_String Var_331;
    MR_Word STATE_VARIABLE_MmakeFile_336_336;
    MR_String Var_337;
    MR_String Var_339;
    MR_Word STATE_VARIABLE_MmakeFile_344_344;
    MR_String Var_345;
    MR_String Var_347;
    MR_Word STATE_VARIABLE_MmakeFile_352_352;
    MR_String Var_353;
    MR_String Var_355;
    MR_Word STATE_VARIABLE_MmakeFile_360_360;
    MR_String Var_361;
    MR_String Var_363;
    MR_Word STATE_VARIABLE_MmakeFile_368_368;
    MR_String Var_369;
    MR_String Var_371;
    MR_Word STATE_VARIABLE_MmakeFile_376_376;
    MR_String Var_377;
    MR_String Var_379;
    MR_Word STATE_VARIABLE_MmakeFile_386_386;
    MR_String Var_394;
    MR_Word STATE_VARIABLE_MmakeFile_396_396;
    MR_String Var_403;
    MR_Word STATE_VARIABLE_MmakeFile_405_405;
    MR_String Var_406;
    MR_String Var_408;
    MR_Word STATE_VARIABLE_MmakeFile_413_413;
    MR_String Var_414;
    MR_String Var_416;
    MR_Word STATE_VARIABLE_MmakeFile_421_421;
    MR_String Var_422;
    MR_Word Var_424;
    MR_String Var_425;
    MR_Word Var_430;
    MR_String Var_431;
    MR_Word STATE_VARIABLE_MmakeFile_437_437;
    MR_String Var_438;
    MR_String Var_440;
    MR_Word STATE_VARIABLE_MmakeFile_445_445;
    MR_String Var_446;
    MR_String Var_448;
    MR_Word STATE_VARIABLE_MmakeFile_453_453;
    MR_String Var_454;
    MR_String Var_456;
    MR_Word STATE_VARIABLE_MmakeFile_461_461;
    MR_String Var_462;
    MR_String Var_464;
    MR_Word STATE_VARIABLE_MmakeFile_469_469;
    MR_String Var_470;
    MR_String Var_472;
    MR_Word STATE_VARIABLE_MmakeFile_477_477;
    MR_String Var_478;
    MR_String Var_480;
    MR_Word STATE_VARIABLE_MmakeFile_485_485;
    MR_String Var_486;
    MR_String Var_488;
    MR_Word STATE_VARIABLE_MmakeFile_493_493;
    MR_String Var_494;
    MR_String Var_496;
    MR_Word STATE_VARIABLE_MmakeFile_501_501;
    MR_String Var_502;
    MR_String Var_504;
    MR_String Var_535;
    MR_String Var_538;
    MR_String Var_541;
    MR_String Var_544;
    MR_String Var_547;
    MR_String Var_550;
    MR_String Var_553;
    MR_String Var_556;
    MR_String Var_559;
    MR_String Var_562;
    MR_String Var_565;
    MR_String Var_568;
    MR_String Var_571;
    MR_String Var_574;
    MR_String Var_577;
    MR_String Var_580;
    MR_String Var_583;
    MR_String Var_586;
    MR_String Var_589;
    MR_String Var_592;
    MR_String Var_595;
    MR_String Var_598;
    MR_String Var_601;
    MR_String Var_604;
    MR_String Var_607;
    MR_String Var_610;
    MR_String Var_613;
    MR_String Var_615;
    MR_String Var_616;
    MR_String Var_625;
    MR_String Var_628;
    MR_String Var_631;
    MR_String Var_634;
    MR_String Var_637;
    MR_String Var_640;
    MR_String Var_643;
    MR_String Var_646;
    MR_String Var_649;
    MR_String Var_652;
    MR_String Var_655;
    MR_String Var_658;
    MR_String Var_661;
    MR_Box conv5_STATE_VARIABLE_IO_146_146;

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
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeStartComment_18, STATE_VARIABLE_MmakeFile_0_99, &STATE_VARIABLE_MmakeFile_104_104);
    mercury__map__keys_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_12, &Modules0_19);
    parse_tree__write_deps_file__select_ok_modules_3_p_0(Modules0_19, DepsMap_12, &Modules1_20);
    mercury__list__sort_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[11]), Modules1_20, &Modules_21);
    parse_tree__file_names__module_name_to_make_var_name_2_p_0(ModuleName_11, &ModuleMakeVarName_22);
    {
      Var_106 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[8]));
      MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_8_p_0_2));
      MR_hl_field(MR_mktag(0), Var_106, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_106, 3) = ((MR_Box) (DepsMap_12));
    }
    mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_106, Modules_21, &SourceFiles0_23);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFiles0_23, &SourceFiles_24);
    Var_107 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".ms");
    Var_109 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_9[0]), SourceFiles_24);
    {
      MmakeVarModuleMs_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarModuleMs_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarModuleMs_25, 1) = ((MR_Box) (Var_107));
      MR_hl_field(MR_mktag(3), MmakeVarModuleMs_25, 2) = ((MR_Box) (Var_109));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarModuleMs_25, STATE_VARIABLE_MmakeFile_104_104, &STATE_VARIABLE_MmakeFile_112_112);
    Var_113 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".errs");
    Var_115 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_9[1]), SourceFiles_24);
    {
      MmakeVarModuleErrs_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarModuleErrs_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarModuleErrs_26, 1) = ((MR_Box) (Var_113));
      MR_hl_field(MR_mktag(3), MmakeVarModuleErrs_26, 2) = ((MR_Box) (Var_115));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarModuleErrs_26, STATE_VARIABLE_MmakeFile_112_112, &STATE_VARIABLE_MmakeFile_118_118);
    Var_119 = (MR_Word) (((MR_Box) ((MR_String) "")));
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, Var_119, Modules_21, &ModulesSourceFileNames_27);
    Var_122 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods");
    {
      MmakeVarModuleMods_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarModuleMods_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarModuleMods_28, 1) = ((MR_Box) (Var_122));
      MR_hl_field(MR_mktag(3), MmakeVarModuleMods_28, 2) = ((MR_Box) (ModulesSourceFileNames_27));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarModuleMods_28, STATE_VARIABLE_MmakeFile_118_118, &STATE_VARIABLE_MmakeFile_124_124);
    {
      Var_125 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_125, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), Var_125, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_8_p_0_5));
      MR_hl_field(MR_mktag(0), Var_125, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_125, 3) = ((MR_Box) (DepsMap_12));
    }
    ModulesWithSubModules_29 = mercury__list__filter_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_125, Modules_21);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, Var_119, ModulesWithSubModules_29, &ModulesWithSubModulesSourceFileNames_34);
    Var_131 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".parent_mods");
    {
      MmakeVarModuleParentMods_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarModuleParentMods_35, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarModuleParentMods_35, 1) = ((MR_Box) (Var_131));
      MR_hl_field(MR_mktag(3), MmakeVarModuleParentMods_35, 2) = ((MR_Box) (ModulesWithSubModulesSourceFileNames_34));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarModuleParentMods_35, STATE_VARIABLE_MmakeFile_124_124, &STATE_VARIABLE_MmakeFile_133_133);
    libs__globals__get_target_2_p_0(Globals_9, &Target_36);
    ForeignModules_38 = mercury__assoc_list__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) ((MR_Unsigned) 0U));
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, Var_119, ForeignModules_38, &ForeignModulesFileNames_39);
    Var_137 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".foreign");
    {
      MmakeVarForeignModules_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarForeignModules_40, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarForeignModules_40, 1) = ((MR_Box) (Var_137));
      MR_hl_field(MR_mktag(3), MmakeVarForeignModules_40, 2) = ((MR_Box) (ForeignModulesFileNames_39));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarForeignModules_40, STATE_VARIABLE_MmakeFile_133_133, &STATE_VARIABLE_MmakeFile_139_139);
    {
      MakeFileName_41 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MakeFileName_41, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_10[0]));
      MR_hl_field(MR_mktag(0), MakeFileName_41, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_8_p_0_6));
      MR_hl_field(MR_mktag(0), MakeFileName_41, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), MakeFileName_41, 3) = ((MR_Box) (Globals_9));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), MakeFileName_41, (MR_Word) ((MR_Unsigned) 0U), &ForeignFileNames_47, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_146_146);
    Var_147 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".foreign_cs");
    {
      MmakeVarForeignFileNames_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarForeignFileNames_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarForeignFileNames_48, 1) = ((MR_Box) (Var_147));
      MR_hl_field(MR_mktag(3), MmakeVarForeignFileNames_48, 2) = ((MR_Box) (ForeignFileNames_47));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarForeignFileNames_48, STATE_VARIABLE_MmakeFile_139_139, &STATE_VARIABLE_MmakeFile_149_149);
    Var_150 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".foreign_dlls");
    Var_535 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".foreign:%=\044(dlls_subdir)%.dll)");
    Var_152 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_535);
    {
      MmakeVarForeignDlls_49 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarForeignDlls_49, 0) = ((MR_Box) (Var_150));
      MR_hl_field(MR_mktag(2), MmakeVarForeignDlls_49, 1) = ((MR_Box) (Var_152));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarForeignDlls_49, STATE_VARIABLE_MmakeFile_149_149, &STATE_VARIABLE_MmakeFile_157_157);
    Var_158 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".init_cs");
    Var_538 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(cs_subdir)%.c)");
    Var_160 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_538);
    {
      MmakeVarInitCs_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarInitCs_50, 0) = ((MR_Box) (Var_158));
      MR_hl_field(MR_mktag(2), MmakeVarInitCs_50, 1) = ((MR_Box) (Var_160));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarInitCs_50, STATE_VARIABLE_MmakeFile_157_157, &STATE_VARIABLE_MmakeFile_165_165);
    Var_166 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_cs");
    Var_541 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(cs_subdir)%.c)");
    Var_168 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_541);
    {
      MmakeVarAllCs_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarAllCs_51, 0) = ((MR_Box) (Var_166));
      MR_hl_field(MR_mktag(2), MmakeVarAllCs_51, 1) = ((MR_Box) (Var_168));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarAllCs_51, STATE_VARIABLE_MmakeFile_165_165, &STATE_VARIABLE_MmakeFile_173_173);
    parse_tree__write_deps_file__get_fact_table_file_names_3_p_0(DepsMap_12, Modules_21, &FactTableFileNames_52);
    parse_tree__write_deps_file__get_extra_link_dependencies_6_p_0(Globals_9, (MR_Word) (((MR_Box) ((MR_String) ".c"))), FactTableFileNames_52, &FactTableFileNamesC_53);
    parse_tree__write_deps_file__get_extra_link_dependencies_6_p_0(Globals_9, (MR_Word) (((MR_Box) ((MR_String) ".\044O"))), FactTableFileNames_52, &FactTableFileNamesOs_54);
    parse_tree__write_deps_file__get_extra_link_dependencies_6_p_0(Globals_9, (MR_Word) (((MR_Box) ((MR_String) ".\044(EXT_FOR_PIC_OBJECTS)"))), FactTableFileNames_52, &FactTableFileNamesPicOs_55);
    Var_183 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".cs");
    Var_188 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".init_cs)");
    Var_186 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_188);
    {
      Var_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_185, 0) = ((MR_Box) (Var_186));
      MR_hl_field(MR_mktag(1), Var_185, 1) = ((MR_Box) (FactTableFileNamesC_53));
    }
    {
      MmakeVarCs_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarCs_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarCs_56, 1) = ((MR_Box) (Var_183));
      MR_hl_field(MR_mktag(3), MmakeVarCs_56, 2) = ((MR_Box) (Var_185));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarCs_56, STATE_VARIABLE_MmakeFile_173_173, &STATE_VARIABLE_MmakeFile_190_190);
    Var_191 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".dlls");
    Var_544 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(dlls_subdir)%.dll)");
    Var_193 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_544);
    {
      MmakeVarDlls_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarDlls_57, 0) = ((MR_Box) (Var_191));
      MR_hl_field(MR_mktag(2), MmakeVarDlls_57, 1) = ((MR_Box) (Var_193));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarDlls_57, STATE_VARIABLE_MmakeFile_190_190, &STATE_VARIABLE_MmakeFile_198_198);
    Var_199 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_os");
    Var_547 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(os_subdir)%.\044O)");
    Var_202 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_547);
    {
      Var_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_201, 0) = ((MR_Box) (Var_202));
      MR_hl_field(MR_mktag(1), Var_201, 1) = ((MR_Box) (FactTableFileNamesOs_54));
    }
    {
      MmakeVarAllOs_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarAllOs_58, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarAllOs_58, 1) = ((MR_Box) (Var_199));
      MR_hl_field(MR_mktag(3), MmakeVarAllOs_58, 2) = ((MR_Box) (Var_201));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarAllOs_58, STATE_VARIABLE_MmakeFile_198_198, &STATE_VARIABLE_MmakeFile_207_207);
    Var_208 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_pic_os");
    Var_550 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(os_subdir)%.\044(EXT_FOR_PIC_OBJECTS))");
    Var_211 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_550);
    {
      Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_210, 0) = ((MR_Box) (Var_211));
      MR_hl_field(MR_mktag(1), Var_210, 1) = ((MR_Box) (FactTableFileNamesPicOs_55));
    }
    {
      MmakeVarAllPicOs_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarAllPicOs_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarAllPicOs_59, 1) = ((MR_Box) (Var_208));
      MR_hl_field(MR_mktag(3), MmakeVarAllPicOs_59, 2) = ((MR_Box) (Var_210));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarAllPicOs_59, STATE_VARIABLE_MmakeFile_207_207, &STATE_VARIABLE_MmakeFile_216_216);
    Var_217 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".os");
    Var_553 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_os)");
    Var_219 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_553);
    {
      MmakeVarOs_60 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarOs_60, 0) = ((MR_Box) (Var_217));
      MR_hl_field(MR_mktag(2), MmakeVarOs_60, 1) = ((MR_Box) (Var_219));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarOs_60, STATE_VARIABLE_MmakeFile_216_216, &STATE_VARIABLE_MmakeFile_224_224);
    Var_225 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".pic_os");
    Var_556 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_pic_os)");
    Var_227 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_556);
    {
      MmakeVarPicOs_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarPicOs_61, 0) = ((MR_Box) (Var_225));
      MR_hl_field(MR_mktag(2), MmakeVarPicOs_61, 1) = ((MR_Box) (Var_227));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarPicOs_61, STATE_VARIABLE_MmakeFile_224_224, &STATE_VARIABLE_MmakeFile_232_232);
    Var_233 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".useds");
    Var_559 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(used_subdir)%.used)");
    Var_235 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_559);
    {
      MmakeVarUseds_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarUseds_62, 0) = ((MR_Box) (Var_233));
      MR_hl_field(MR_mktag(2), MmakeVarUseds_62, 1) = ((MR_Box) (Var_235));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarUseds_62, STATE_VARIABLE_MmakeFile_232_232, &STATE_VARIABLE_MmakeFile_240_240);
    Var_241 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".javas");
    Var_562 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(javas_subdir)%.java)");
    Var_243 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_562);
    {
      MmakeVarJavas_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarJavas_63, 0) = ((MR_Box) (Var_241));
      MR_hl_field(MR_mktag(2), MmakeVarJavas_63, 1) = ((MR_Box) (Var_243));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarJavas_63, STATE_VARIABLE_MmakeFile_240_240, &STATE_VARIABLE_MmakeFile_248_248);
    Var_249 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_javas");
    Var_565 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(javas_subdir)%.java)");
    Var_251 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_565);
    {
      MmakeVarAllJavas_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarAllJavas_64, 0) = ((MR_Box) (Var_249));
      MR_hl_field(MR_mktag(2), MmakeVarAllJavas_64, 1) = ((MR_Box) (Var_251));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarAllJavas_64, STATE_VARIABLE_MmakeFile_248_248, &STATE_VARIABLE_MmakeFile_256_256);
    Var_257 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".classes");
    Var_568 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(classes_subdir)%.class)");
    Var_260 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_568);
    Var_571 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(classes_subdir)%\\\044\044*.class))");
    Var_266 = mercury__string__f_43_43_2_f_0((MR_String) "\044(wildcard \044(", Var_571);
    {
      Var_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_265, 0) = ((MR_Box) (Var_266));
      MR_hl_field(MR_mktag(1), Var_265, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_259 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_259, 0) = ((MR_Box) (Var_260));
      MR_hl_field(MR_mktag(1), Var_259, 1) = ((MR_Box) (Var_265));
    }
    {
      MmakeVarClasses_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarClasses_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarClasses_65, 1) = ((MR_Box) (Var_257));
      MR_hl_field(MR_mktag(3), MmakeVarClasses_65, 2) = ((MR_Box) (Var_259));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarClasses_65, STATE_VARIABLE_MmakeFile_256_256, &STATE_VARIABLE_MmakeFile_272_272);
    Var_273 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".css");
    Var_574 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(css_subdir)%.cs)");
    Var_275 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_574);
    {
      MmakeVarCss_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarCss_66, 0) = ((MR_Box) (Var_273));
      MR_hl_field(MR_mktag(2), MmakeVarCss_66, 1) = ((MR_Box) (Var_275));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarCss_66, STATE_VARIABLE_MmakeFile_272_272, &STATE_VARIABLE_MmakeFile_280_280);
    Var_281 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_css");
    Var_577 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(css_subdir)%.cs)");
    Var_283 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_577);
    {
      MmakeVarAllCss_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarAllCss_67, 0) = ((MR_Box) (Var_281));
      MR_hl_field(MR_mktag(2), MmakeVarAllCss_67, 1) = ((MR_Box) (Var_283));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarAllCss_67, STATE_VARIABLE_MmakeFile_280_280, &STATE_VARIABLE_MmakeFile_288_288);
    Var_289 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".dirs");
    Var_580 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(dirs_subdir)%.dir)");
    Var_291 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_580);
    {
      MmakeVarDirs_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarDirs_68, 0) = ((MR_Box) (Var_289));
      MR_hl_field(MR_mktag(2), MmakeVarDirs_68, 1) = ((MR_Box) (Var_291));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarDirs_68, STATE_VARIABLE_MmakeFile_288_288, &STATE_VARIABLE_MmakeFile_296_296);
    Var_297 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".dir_os");
    Var_583 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(dirs_subdir)%.dir/*.\044O)");
    Var_299 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_583);
    {
      MmakeVarDirOs_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarDirOs_69, 0) = ((MR_Box) (Var_297));
      MR_hl_field(MR_mktag(2), MmakeVarDirOs_69, 1) = ((MR_Box) (Var_299));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarDirOs_69, STATE_VARIABLE_MmakeFile_296_296, &STATE_VARIABLE_MmakeFile_304_304);
    Var_305 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".dates");
    Var_586 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(dates_subdir)%.date)");
    Var_307 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_586);
    {
      MmakeVarDates_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarDates_70, 0) = ((MR_Box) (Var_305));
      MR_hl_field(MR_mktag(2), MmakeVarDates_70, 1) = ((MR_Box) (Var_307));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarDates_70, STATE_VARIABLE_MmakeFile_304_304, &STATE_VARIABLE_MmakeFile_312_312);
    Var_313 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".date0s");
    Var_589 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(date0s_subdir)%.date0)");
    Var_315 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_589);
    {
      MmakeVarDate0s_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarDate0s_71, 0) = ((MR_Box) (Var_313));
      MR_hl_field(MR_mktag(2), MmakeVarDate0s_71, 1) = ((MR_Box) (Var_315));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarDate0s_71, STATE_VARIABLE_MmakeFile_312_312, &STATE_VARIABLE_MmakeFile_320_320);
    Var_321 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".date3s");
    Var_592 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(date3s_subdir)%.date3)");
    Var_323 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_592);
    {
      MmakeVarDate3s_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarDate3s_72, 0) = ((MR_Box) (Var_321));
      MR_hl_field(MR_mktag(2), MmakeVarDate3s_72, 1) = ((MR_Box) (Var_323));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarDate3s_72, STATE_VARIABLE_MmakeFile_320_320, &STATE_VARIABLE_MmakeFile_328_328);
    Var_329 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".optdates");
    Var_595 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(optdates_subdir)%.optdate)");
    Var_331 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_595);
    {
      MmakeVarOptDates_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarOptDates_73, 0) = ((MR_Box) (Var_329));
      MR_hl_field(MR_mktag(2), MmakeVarOptDates_73, 1) = ((MR_Box) (Var_331));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarOptDates_73, STATE_VARIABLE_MmakeFile_328_328, &STATE_VARIABLE_MmakeFile_336_336);
    Var_337 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".trans_opt_dates");
    Var_598 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(trans_opt_dates_subdir)%.trans_opt_date)");
    Var_339 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_598);
    {
      MmakeVarTransOptDates_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarTransOptDates_74, 0) = ((MR_Box) (Var_337));
      MR_hl_field(MR_mktag(2), MmakeVarTransOptDates_74, 1) = ((MR_Box) (Var_339));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarTransOptDates_74, STATE_VARIABLE_MmakeFile_336_336, &STATE_VARIABLE_MmakeFile_344_344);
    Var_345 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".c_dates");
    Var_601 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(c_dates_subdir)%.c_date)");
    Var_347 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_601);
    {
      MmakeVarCDates_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarCDates_75, 0) = ((MR_Box) (Var_345));
      MR_hl_field(MR_mktag(2), MmakeVarCDates_75, 1) = ((MR_Box) (Var_347));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarCDates_75, STATE_VARIABLE_MmakeFile_344_344, &STATE_VARIABLE_MmakeFile_352_352);
    Var_353 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".java_dates");
    Var_604 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(java_dates_subdir)%.java_date)");
    Var_355 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_604);
    {
      MmakeVarJavaDates_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarJavaDates_76, 0) = ((MR_Box) (Var_353));
      MR_hl_field(MR_mktag(2), MmakeVarJavaDates_76, 1) = ((MR_Box) (Var_355));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarJavaDates_76, STATE_VARIABLE_MmakeFile_352_352, &STATE_VARIABLE_MmakeFile_360_360);
    Var_361 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".cs_dates");
    Var_607 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(cs_dates_subdir)%.cs_date)");
    Var_363 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_607);
    {
      MmakeVarCsDates_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarCsDates_77, 0) = ((MR_Box) (Var_361));
      MR_hl_field(MR_mktag(2), MmakeVarCsDates_77, 1) = ((MR_Box) (Var_363));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarCsDates_77, STATE_VARIABLE_MmakeFile_360_360, &STATE_VARIABLE_MmakeFile_368_368);
    Var_369 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".ds");
    Var_610 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(ds_subdir)%.d)");
    Var_371 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_610);
    {
      MmakeVarDs_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarDs_78, 0) = ((MR_Box) (Var_369));
      MR_hl_field(MR_mktag(2), MmakeVarDs_78, 1) = ((MR_Box) (Var_371));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarDs_78, STATE_VARIABLE_MmakeFile_368_368, &STATE_VARIABLE_MmakeFile_376_376);
    ModuleDepFileExt_79 = make__make_module_dep_file_extension_0_f_0();
    ModuleDepFileExtStr_80 = (MR_String) (ModuleDepFileExt_79);
    Var_377 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".module_deps");
    Var_613 = mercury__string__f_43_43_2_f_0(ModuleDepFileExtStr_80, (MR_String) ")");
    Var_615 = mercury__string__f_43_43_2_f_0((MR_String) ".mods:%=\044(module_deps_subdir)%", Var_613);
    Var_616 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, Var_615);
    Var_379 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_616);
    {
      MmakeVarModuleDeps_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarModuleDeps_81, 0) = ((MR_Box) (Var_377));
      MR_hl_field(MR_mktag(2), MmakeVarModuleDeps_81, 1) = ((MR_Box) (Var_379));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarModuleDeps_81, STATE_VARIABLE_MmakeFile_376_376, &STATE_VARIABLE_MmakeFile_386_386);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 288, &HighLevelCode_82);
    switch (HighLevelCode_82) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MihSources_83 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        switch (Target_36) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_388;
              MR_String Var_619;

              Var_619 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
              Var_388 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_619);
              {
                MihSources_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MihSources_83, 0) = ((MR_Box) (Var_388));
                MR_hl_field(MR_mktag(1), MihSources_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 2:
            MihSources_83 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
        break;
    }
    Var_394 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mihs");
    {
      MmakeVarMihs_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarMihs_84, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarMihs_84, 1) = ((MR_Box) (Var_394));
      MR_hl_field(MR_mktag(3), MmakeVarMihs_84, 2) = ((MR_Box) (MihSources_83));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarMihs_84, STATE_VARIABLE_MmakeFile_386_386, &STATE_VARIABLE_MmakeFile_396_396);
    switch (Target_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_397;
          MR_String Var_622;

          Var_622 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=%.mh)");
          Var_397 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_622);
          {
            MhSources_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MhSources_85, 0) = ((MR_Box) (Var_397));
            MR_hl_field(MR_mktag(1), MhSources_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        MhSources_85 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
    Var_403 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mhs");
    {
      MmakeVarMhs_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarMhs_86, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarMhs_86, 1) = ((MR_Box) (Var_403));
      MR_hl_field(MR_mktag(3), MmakeVarMhs_86, 2) = ((MR_Box) (MhSources_85));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarMhs_86, STATE_VARIABLE_MmakeFile_396_396, &STATE_VARIABLE_MmakeFile_405_405);
    Var_406 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_mihs");
    Var_625 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
    Var_408 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_625);
    {
      MmakeVarAllMihs_87 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarAllMihs_87, 0) = ((MR_Box) (Var_406));
      MR_hl_field(MR_mktag(2), MmakeVarAllMihs_87, 1) = ((MR_Box) (Var_408));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarAllMihs_87, STATE_VARIABLE_MmakeFile_405_405, &STATE_VARIABLE_MmakeFile_413_413);
    Var_414 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_mhs");
    Var_628 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=%.mh)");
    Var_416 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_628);
    {
      MmakeVarAllMhs_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarAllMhs_88, 0) = ((MR_Box) (Var_414));
      MR_hl_field(MR_mktag(2), MmakeVarAllMhs_88, 1) = ((MR_Box) (Var_416));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarAllMhs_88, STATE_VARIABLE_MmakeFile_413_413, &STATE_VARIABLE_MmakeFile_421_421);
    Var_422 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".ints");
    Var_631 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(ints_subdir)%.int)");
    Var_425 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_631);
    Var_634 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(int2s_subdir)%.int2)");
    Var_431 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_634);
    {
      Var_430 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_430, 0) = ((MR_Box) (Var_431));
      MR_hl_field(MR_mktag(1), Var_430, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_424 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_424, 0) = ((MR_Box) (Var_425));
      MR_hl_field(MR_mktag(1), Var_424, 1) = ((MR_Box) (Var_430));
    }
    {
      MmakeVarInts_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarInts_89, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarInts_89, 1) = ((MR_Box) (Var_422));
      MR_hl_field(MR_mktag(3), MmakeVarInts_89, 2) = ((MR_Box) (Var_424));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarInts_89, STATE_VARIABLE_MmakeFile_421_421, &STATE_VARIABLE_MmakeFile_437_437);
    Var_438 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".int0s");
    Var_637 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".parent_mods:%=\044(int0s_subdir)%.int0)");
    Var_440 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_637);
    {
      MmakeVarInt0s_90 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarInt0s_90, 0) = ((MR_Box) (Var_438));
      MR_hl_field(MR_mktag(2), MmakeVarInt0s_90, 1) = ((MR_Box) (Var_440));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarInt0s_90, STATE_VARIABLE_MmakeFile_437_437, &STATE_VARIABLE_MmakeFile_445_445);
    Var_446 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".all_int0s");
    Var_640 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(int0s_subdir)%.int0)");
    Var_448 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_640);
    {
      MmakeVarAllInt0s_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarAllInt0s_91, 0) = ((MR_Box) (Var_446));
      MR_hl_field(MR_mktag(2), MmakeVarAllInt0s_91, 1) = ((MR_Box) (Var_448));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarAllInt0s_91, STATE_VARIABLE_MmakeFile_445_445, &STATE_VARIABLE_MmakeFile_453_453);
    Var_454 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".int3s");
    Var_643 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(int3s_subdir)%.int3)");
    Var_456 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_643);
    {
      MmakeVarInt3s_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarInt3s_92, 0) = ((MR_Box) (Var_454));
      MR_hl_field(MR_mktag(2), MmakeVarInt3s_92, 1) = ((MR_Box) (Var_456));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarInt3s_92, STATE_VARIABLE_MmakeFile_453_453, &STATE_VARIABLE_MmakeFile_461_461);
    Var_462 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".opts");
    Var_646 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(opts_subdir)%.opt)");
    Var_464 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_646);
    {
      MmakeVarOpts_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarOpts_93, 0) = ((MR_Box) (Var_462));
      MR_hl_field(MR_mktag(2), MmakeVarOpts_93, 1) = ((MR_Box) (Var_464));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarOpts_93, STATE_VARIABLE_MmakeFile_461_461, &STATE_VARIABLE_MmakeFile_469_469);
    Var_470 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".trans_opts");
    Var_649 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(trans_opts_subdir)%.trans_opt)");
    Var_472 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_649);
    {
      MmakeVarTransOpts_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarTransOpts_94, 0) = ((MR_Box) (Var_470));
      MR_hl_field(MR_mktag(2), MmakeVarTransOpts_94, 1) = ((MR_Box) (Var_472));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarTransOpts_94, STATE_VARIABLE_MmakeFile_469_469, &STATE_VARIABLE_MmakeFile_477_477);
    Var_478 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".analysiss");
    Var_652 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(analysiss_subdir)%.analysis)");
    Var_480 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_652);
    {
      MmakeVarAnalysiss_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarAnalysiss_95, 0) = ((MR_Box) (Var_478));
      MR_hl_field(MR_mktag(2), MmakeVarAnalysiss_95, 1) = ((MR_Box) (Var_480));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarAnalysiss_95, STATE_VARIABLE_MmakeFile_477_477, &STATE_VARIABLE_MmakeFile_485_485);
    Var_486 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".requests");
    Var_655 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(requests_subdir)%.request)");
    Var_488 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_655);
    {
      MmakeVarRequests_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarRequests_96, 0) = ((MR_Box) (Var_486));
      MR_hl_field(MR_mktag(2), MmakeVarRequests_96, 1) = ((MR_Box) (Var_488));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarRequests_96, STATE_VARIABLE_MmakeFile_485_485, &STATE_VARIABLE_MmakeFile_493_493);
    Var_494 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".imdgs");
    Var_658 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=\044(imdgs_subdir)%.imdg)");
    Var_496 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_658);
    {
      MmakeVarImdgs_97 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarImdgs_97, 0) = ((MR_Box) (Var_494));
      MR_hl_field(MR_mktag(2), MmakeVarImdgs_97, 1) = ((MR_Box) (Var_496));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarImdgs_97, STATE_VARIABLE_MmakeFile_493_493, &STATE_VARIABLE_MmakeFile_501_501);
    Var_502 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".profs");
    Var_661 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_22, (MR_String) ".mods:%=%.prof)");
    Var_504 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_661);
    {
      MmakeVarProfs_98 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarProfs_98, 0) = ((MR_Box) (Var_502));
      MR_hl_field(MR_mktag(2), MmakeVarProfs_98, 1) = ((MR_Box) (Var_504));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarProfs_98, STATE_VARIABLE_MmakeFile_501_501, STATE_VARIABLE_MmakeFile_100);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__get_fact_table_file_names_3_p_0(
  MR_Word DepsMap_4,
  MR_Word Modules_5,
  MR_Word * FactTableFileNames_6)
{
  {
    MR_Word FactTableFileNamesSet_7;
    MR_Word Var_8;

    Var_8 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
    parse_tree__write_deps_file__get_fact_table_file_names_4_p_0(DepsMap_4, Modules_5, Var_8, &FactTableFileNamesSet_7);
    mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFileNamesSet_7, FactTableFileNames_6);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__get_fact_table_file_names_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FactTableFileNames_0_3,
  MR_Word * STATE_VARIABLE_FactTableFileNames_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_FactTableFileNames_4 = STATE_VARIABLE_FactTableFileNames_0_3;
    else
    {
      MR_Word Module_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Modules_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ModuleAndImports_14;
      MR_Word FactTableDeps_15;
      MR_Word Var_18;
      MR_Word STATE_VARIABLE_FactTableFileNames_19_19;
      MR_Box conv0_Var_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_FactTableFileNames_0_3;

      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), HeadVar__1_1, ((MR_Box) (Module_10)), &conv0_Var_18);
      Var_18 = ((MR_Word) (conv0_Var_18));
      ModuleAndImports_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
      parse_tree__module_imports__module_and_imports_get_fact_table_deps_2_p_0(ModuleAndImports_14, &FactTableDeps_15);
      mercury__set__insert_list_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableDeps_15, STATE_VARIABLE_FactTableFileNames_0_3, &STATE_VARIABLE_FactTableFileNames_19_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Modules_11;
      next_value_of_STATE_VARIABLE_FactTableFileNames_0_3 = STATE_VARIABLE_FactTableFileNames_19_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_FactTableFileNames_0_3 = next_value_of_STATE_VARIABLE_FactTableFileNames_0_3;
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
  MR_Word Ext_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String ExtraLink_14 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ExtraLinks_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
    MR_String FileName_16;
    MR_Word FileNames_17;

    parse_tree__file_names__extra_link_obj_file_name_7_p_0(Globals_1, (MR_Integer) 1, Ext_2, ExtraLink_14, &FileName_16);
    parse_tree__write_deps_file__get_extra_link_dependencies_6_p_0(Globals_1, Ext_2, ExtraLinks_15, &FileNames_17);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FileName_16));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (FileNames_17));
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

    succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1129__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 355, &Intermod_25);
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

    parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1158__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_17);
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
    MR_String Var_39;

    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 65, &Verbose_12);
    parse_tree__module_imports__module_and_imports_get_module_name_2_p_0(ModuleAndImports_8, &ModuleName_13);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 0, (MR_Word) (((MR_Box) ((MR_String) ".d"))), ModuleName_13, &DependencyFileName_14);
    Var_39 = mercury__dir__dirname_1_f_0(DependencyFileName_14);
    mercury__io__make_temp_file_6_p_0(Var_39, (MR_String) "tmp_d", (MR_String) "", &TmpDependencyFileNameRes_15);
    if (((MR_tag((MR_Word) TmpDependencyFileNameRes_15)) == (MR_Integer) 1))
    {
      MR_Word Error_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TmpDependencyFileNameRes_15, (MR_Integer) 0))));
      MR_String Message_17;
      MR_String Var_97;

      Var_97 = mercury__io__error_message_1_f_0(Error_16);
      Message_17 = mercury__string__f_43_43_2_f_0((MR_String) "Could not create temporary file: ", Var_97);
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
        MR_Word Var_88;
        MR_Word Var_90;
        MR_Word Var_91;
        MR_Word Var_93;
        MR_String Message_99;

        libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) " failed.\n");
        libs__file_util__maybe_flush_output_3_p_0(Verbose_12);
        mercury__io__error_message_2_p_0(IOError_20, &IOErrorMessage_21);
        {
          Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (IOErrorMessage_21));
          MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) ((MR_String) "\' for output: "));
          MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) (Var_93));
        }
        {
          Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (TmpDependencyFileName_18));
          MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_91));
        }
        {
          Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) ((MR_String) "error opening temporary file \140"));
          MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) (Var_90));
        }
        mercury__string__append_list_2_p_0(Var_88, &Message_99);
        libs__file_util__report_error_3_p_0(Message_99);
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
              MR_Word Var_63;
              MR_Word Var_65;
              MR_Word Var_66;
              MR_Word Var_68;
              MR_Word Var_69;
              MR_Word Var_71;
              MR_String Message_101;
              MR_String ErrorMsg_102;

              libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) " failed.\n");
              libs__file_util__maybe_flush_output_3_p_0(Verbose_12);
              mercury__io__error_message_2_p_0(Error5_31, &ErrorMsg_102);
              {
                Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (ErrorMsg_102));
                MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              {
                Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) ((MR_String) "\': "));
                MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_71));
              }
              {
                Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (DependencyFileName_14));
                MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_69));
              }
              {
                Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) ((MR_String) "\' as \140"));
                MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_68));
              }
              {
                Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (TmpDependencyFileName_18));
                MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_66));
              }
              {
                Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) ((MR_String) "can\'t rename file \140"));
                MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_65));
              }
              mercury__string__append_list_2_p_0(Var_63, &Message_101);
              libs__file_util__report_error_3_p_0(Message_101);
            }
          }
          else
          {
            MR_Word Error4_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoveResult_27, (MR_Integer) 0))));
            MR_String ErrorMsg_29;
            MR_Word Var_77;
            MR_Word Var_79;
            MR_Word Var_80;
            MR_Word Var_82;
            MR_String Message_100;

            libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) " failed.\n");
            libs__file_util__maybe_flush_output_3_p_0(Verbose_12);
            mercury__io__error_message_2_p_0(Error4_28, &ErrorMsg_29);
            {
              Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (ErrorMsg_29));
              MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) ((MR_String) "\': "));
              MR_hl_field(MR_mktag(1), Var_80, 1) = ((MR_Box) (Var_82));
            }
            {
              Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (DependencyFileName_14));
              MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_80));
            }
            {
              Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) ((MR_String) "can\'t remove file \140"));
              MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_79));
            }
            mercury__string__append_list_2_p_0(Var_77, &Message_100);
            libs__file_util__report_error_3_p_0(Message_100);
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

    parse_tree__write_deps_file__construct_subdirs_shorthand_rule_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv17_MmakeRule_10);
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

    parse_tree__write_deps_file__gather_foreign_import_deps_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), &conv15_MmakeRule_12);
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
    MR_Word conv14_LambdaHeadVar__2_528;

    succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_d_file__718__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv14_LambdaHeadVar__2_528);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv14_LambdaHeadVar__2_528));
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

    succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_d_file__704__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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

    parse_tree__write_deps_file__gather_nested_deps_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_MmakeRule_12);
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
  MR_Word STATE_VARIABLE_MmakeFile_0_163,
  MR_Word * STATE_VARIABLE_MmakeFile_164)
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
    MR_String ErrFileName_57;
    MR_String OptDateFileName_58;
    MR_String CDateFileName_59;
    MR_String ObjFileName_60;
    MR_String JavaDateFileName_61;
    MR_String PicObjFileName_62;
    MR_String Int0FileName_63;
    MR_Word AncestorSourceGroups_67;
    MR_Word LongDepsSourceGroups_68;
    MR_Word ShortDepsSourceGroups_69;
    MR_Word TypeRepnSelfDepGroups_70;
    MR_Word ForeignIncludeFiles_71;
    MR_Word ForeignImportFileNames_72;
    MR_Word UseOptFiles_84;
    MR_Word Intermod_85;
    MR_Word IntermodDirs_86;
    MR_Word HighLevelCode_103;
    MR_Word CompilationTarget_104;
    MR_String CFileName_106;
    MR_String MhHeaderFileName_107;
    MR_String MihHeaderFileName_108;
    MR_Word MmakeRuleMhMihOnC_109;
    MR_String JavaFileName_110;
    MR_String ModuleDepFileName_111;
    MR_Word MmakeFragmentModuleDep_112;
    MR_String DateFileName_113;
    MR_String Date0FileName_114;
    MR_Word AncestorDateFileNames_115;
    MR_Word AncestorInt0FileNames_116;
    MR_Word LongDepInt3FileNames_117;
    MR_Word ShortDepInt3FileNames_118;
    MR_Word MmakeRuleParentDates_119;
    MR_Word AncestorDate0FileNames_120;
    MR_Word MmakeRuleParentDate0s_121;
    MR_Word HaveMap_122;
    MR_String ModuleArg_123;
    MR_Word FIMSpecs_125;
    MR_Word ForeignImportedModuleNames_145;
    MR_String IntFileName_152;
    MR_String Int2FileName_153;
    MR_String Int3FileName_154;
    MR_String OptFileName_155;
    MR_String TransOptFileName_156;
    MR_String Date3FileName_157;
    MR_Word MmakeRulesInstallShadows_158;
    MR_Word UseSubdirs_159;
    MR_Word STATE_VARIABLE_MmakeFile_168_168;
    MR_Word STATE_VARIABLE_MmakeFile_181_181;
    MR_Word Var_239;
    MR_Word Var_243;
    MR_Word Var_244;
    MR_Word Var_245;
    MR_Word Var_246;
    MR_Word Var_247;
    MR_Word STATE_VARIABLE_SourceGroups_250_250;
    MR_Word Var_251;
    MR_Word STATE_VARIABLE_SourceGroups_253_253;
    MR_Word Var_262;
    MR_Word Var_266;
    MR_Word Var_271;
    MR_Word STATE_VARIABLE_SourceGroups_274_274;
    MR_Word Var_275;
    MR_Word Var_276;
    MR_Word Var_277;
    MR_Word Var_278;
    MR_Word STATE_VARIABLE_SourceGroups_279_279;
    MR_Word Var_280;
    MR_Word STATE_VARIABLE_MmakeFile_321_321;
    MR_Word STATE_VARIABLE_MmakeFile_340_340;
    MR_Word STATE_VARIABLE_MmakeFile_351_351;
    MR_Word STATE_VARIABLE_MmakeFile_389_389;
    MR_Word STATE_VARIABLE_MmakeFile_400_400;
    MR_Word Var_406;
    MR_Word Var_415;
    MR_Word Var_416;
    MR_Word Var_418;
    MR_Word STATE_VARIABLE_MmakeFile_421_421;
    MR_Word Var_423;
    MR_Word Var_427;
    MR_Word Var_431;
    MR_Word Var_434;
    MR_Word Var_437;
    MR_Word STATE_VARIABLE_MmakeFile_443_443;
    MR_Word Var_445;
    MR_Word Var_449;
    MR_Word Var_453;
    MR_Word Var_457;
    MR_Word Var_460;
    MR_Word Var_461;
    MR_Word Var_465;
    MR_Word Var_470;
    MR_Word Var_471;
    MR_Word Var_473;
    MR_Word Var_474;
    MR_Word Var_476;
    MR_Word Var_477;
    MR_Word Var_478;
    MR_Word Var_480;
    MR_Word Var_481;
    MR_Word Var_483;
    MR_Word Var_484;
    MR_Word Var_486;
    MR_Word STATE_VARIABLE_MmakeFile_489_489;
    MR_Word Var_491;
    MR_Word Var_496;
    MR_Word Var_497;
    MR_Word Var_499;
    MR_Word Var_501;
    MR_Word Var_502;
    MR_Word Var_503;
    MR_Word Var_505;
    MR_Word Var_506;
    MR_Word Var_508;
    MR_Word STATE_VARIABLE_MmakeFile_511_511;
    MR_Word Var_526;
    MR_Word STATE_VARIABLE_MmakeFile_549_549;
    MR_Word Var_574;
    MR_Word Var_577;
    MR_Word Var_579;
    MR_String Var_580;
    MR_Word Var_582;
    MR_Word Var_583;
    MR_Word Var_586;
    MR_Word Var_588;
    MR_String Var_589;
    MR_Word Var_591;
    MR_Word Var_592;
    MR_Word Var_597;
    MR_String Var_598;
    MR_Word Var_600;
    MR_Word Var_601;
    MR_Word Var_604;
    MR_Word Var_606;
    MR_String Var_607;
    MR_Word Var_609;
    MR_Word Var_610;
    MR_Word Var_613;
    MR_Word Var_615;
    MR_String Var_616;
    MR_Word Var_618;
    MR_Word Var_619;
    MR_Word Var_622;
    MR_Word Var_624;
    MR_String Var_625;
    MR_Word STATE_VARIABLE_MmakeFile_628_628;
    MR_Word STATE_VARIABLE_MmakeFile_650_650;
    MR_Word TargetGroup_726;
    MR_Word TargetGroups_727;
    MR_String SourceFileBase_56;
    MR_String Var_794;

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
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeStartComment_35, STATE_VARIABLE_MmakeFile_0_163, &STATE_VARIABLE_MmakeFile_168_168);
    parse_tree__file_names__module_name_to_make_var_name_2_p_0(ModuleName_17, &ModuleMakeVarName_36);
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDeps_29, ImpDeps_30, &LongDeps0_37);
    mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_17)), LongDeps0_37, &LongDeps_39);
    mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ShortDeps0_38, LongDeps_39, &ShortDeps1_40);
    mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_17)), ShortDeps1_40, &ShortDeps_41);
    mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactDeps0_24, &FactDeps_42);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".trans_opt_date"))), ModuleName_17, &TransOptDateFileName_43);
    if ((MaybeTransOptDeps_12 == (MR_Word) ((MR_Unsigned) 0U)))
      STATE_VARIABLE_MmakeFile_181_181 = STATE_VARIABLE_MmakeFile_168_168;
    else
    {
      MR_Word TransOptDeps0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTransOptDeps_12, (MR_Integer) 0))));
      MR_Word TransOptDateDeps_45;
      MR_Word TransOptDateDepsFileNames_46;
      MR_Word MmakeRuleTransOpt_47;
      MR_Word Var_173;
      MR_Word Var_175;

      Var_173 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptDeps0_44);
      mercury__set__intersect_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_173, LongDeps_39, &TransOptDateDeps_45);
      Var_175 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptDateDeps_45);
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_Word) (((MR_Box) ((MR_String) ".trans_opt"))), Var_175, &TransOptDateDepsFileNames_46);
      {
        MmakeRuleTransOpt_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_47, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_47, 1) = ((MR_Box) ((MR_String) "trans_opt_deps"));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_47, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_47, 3) = ((MR_Box) (TransOptDateFileName_43));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_47, 4) = ((MR_Box) (TransOptDateDepsFileNames_46));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_47, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleTransOpt_47, STATE_VARIABLE_MmakeFile_168_168, &STATE_VARIABLE_MmakeFile_181_181);
    }
    succeeded = mercury__string__remove_suffix_3_p_0(SourceFileName_15, (MR_String) ".m", &SourceFileBase_56);
    if (succeeded)
      ErrFileName_57 = mercury__string__f_43_43_2_f_0(SourceFileBase_56, (MR_String) ".err");
    else
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/8", (MR_String) "source file name doesn\'t end in \140.m\'");
        return;
      }
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".optdate"))), ModuleName_17, &OptDateFileName_58);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".c_date"))), ModuleName_17, &CDateFileName_59);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".\044O"))), ModuleName_17, &ObjFileName_60);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".java_date"))), ModuleName_17, &JavaDateFileName_61);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".pic_o"))), ModuleName_17, &PicObjFileName_62);
    Var_239 = (MR_Word) (((MR_Box) ((MR_String) ".int0")));
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, Var_239, ModuleName_17, &Int0FileName_63);
    {
      Var_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_247, 0) = ((MR_Box) (JavaDateFileName_61));
      MR_hl_field(MR_mktag(1), Var_247, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_246, 0) = ((MR_Box) (CDateFileName_59));
      MR_hl_field(MR_mktag(1), Var_246, 1) = ((MR_Box) (Var_247));
    }
    {
      Var_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_245, 0) = ((MR_Box) (ErrFileName_57));
      MR_hl_field(MR_mktag(1), Var_245, 1) = ((MR_Box) (Var_246));
    }
    {
      Var_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_244, 0) = ((MR_Box) (TransOptDateFileName_43));
      MR_hl_field(MR_mktag(1), Var_244, 1) = ((MR_Box) (Var_245));
    }
    {
      Var_243 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_243, 0) = ((MR_Box) (OptDateFileName_58));
      MR_hl_field(MR_mktag(0), Var_243, 1) = ((MR_Box) (Var_244));
    }
    {
      TargetGroup_726 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TargetGroup_726, 0) = ((MR_Box) ((MR_String) "dates_and_err"));
      MR_hl_field(MR_mktag(0), TargetGroup_726, 1) = ((MR_Box) (Var_243));
    }
    {
      TargetGroups_727 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TargetGroups_727, 0) = ((MR_Box) (TargetGroup_726));
      MR_hl_field(MR_mktag(0), TargetGroups_727, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_251 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(SourceFileName_15);
    {
      STATE_VARIABLE_SourceGroups_250_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_SourceGroups_250_250, 0) = ((MR_Box) (Var_251));
      MR_hl_field(MR_mktag(1), STATE_VARIABLE_SourceGroups_250_250, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), PublicChildren_31);
    if (succeeded)
      STATE_VARIABLE_SourceGroups_253_253 = STATE_VARIABLE_SourceGroups_250_250;
    else
    {
      MR_Word Var_254;
      MR_Word Var_255;

      Var_255 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(Int0FileName_63);
      {
        Var_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_254, 0) = ((MR_Box) (Var_255));
        MR_hl_field(MR_mktag(1), Var_254, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      STATE_VARIABLE_SourceGroups_253_253 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), STATE_VARIABLE_SourceGroups_250_250, Var_254);
    }
    parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(Globals_9, (MR_String) "ancestors", Var_239, Ancestors_18, &AncestorSourceGroups_67);
    Var_262 = (MR_Word) (((MR_Box) ((MR_String) ".int")));
    parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(Globals_9, (MR_String) "long deps", Var_262, LongDeps_39, &LongDepsSourceGroups_68);
    Var_266 = (MR_Word) (((MR_Box) ((MR_String) ".int2")));
    parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(Globals_9, (MR_String) "short deps", Var_266, ShortDeps_41, &ShortDepsSourceGroups_69);
    Var_271 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_17)));
    parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(Globals_9, (MR_String) "type_repn self dep", Var_262, Var_271, &TypeRepnSelfDepGroups_70);
    Var_277 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), ShortDepsSourceGroups_69, TypeRepnSelfDepGroups_70);
    Var_276 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), LongDepsSourceGroups_68, Var_277);
    Var_275 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), AncestorSourceGroups_67, Var_276);
    STATE_VARIABLE_SourceGroups_274_274 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), STATE_VARIABLE_SourceGroups_253_253, Var_275);
    ForeignIncludeFiles_71 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ForeignIncludeFilesCord_26);
    {
      Var_278 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_278, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_278, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_278, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_278, 3) = ((MR_Box) (SourceFileName_15));
    }
    ForeignImportFileNames_72 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_278, ForeignIncludeFiles_71);
    Var_280 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "foreign imports", ForeignImportFileNames_72);
    STATE_VARIABLE_SourceGroups_279_279 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), STATE_VARIABLE_SourceGroups_274_274, Var_280);
    if ((FactDeps_42 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word MmakeRuleDateFileDeps_76;

      {
        MmakeRuleDateFileDeps_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_76, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_76, 1) = ((MR_Box) ((MR_String) "date_file_deps"));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_76, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_76, 3) = ((MR_Box) (TargetGroups_727));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_76, 4) = ((MR_Box) (STATE_VARIABLE_SourceGroups_279_279));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_76, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleDateFileDeps_76, STATE_VARIABLE_MmakeFile_181_181, &STATE_VARIABLE_MmakeFile_321_321);
    }
    else
    {
      MR_Word MmakeVarFactTables_50;
      MR_Word MmakeVarFactTablesOs_51;
      MR_Word MmakeVarFactTablesAllOs_52;
      MR_Word MmakeVarFactTablesCs_53;
      MR_Word MmakeVarFactTablesAllCs_54;
      MR_Word MmakeVarsFactTables_55;
      MR_Word FactTableSourceGroup_75;
      MR_Word MmakeRuleFactOs_79;
      MR_Word MmakeRuleFactCs_80;
      MR_Word MmakeRulesFactOsCs_81;
      MR_String Var_182;
      MR_Word STATE_VARIABLE_MmakeFile_184_184;
      MR_String Var_185;
      MR_String Var_187;
      MR_String Var_189;
      MR_String Var_191;
      MR_String Var_193;
      MR_String Var_195;
      MR_String Var_197;
      MR_String Var_199;
      MR_String Var_201;
      MR_String Var_203;
      MR_String Var_205;
      MR_String Var_207;
      MR_Word Var_209;
      MR_Word Var_210;
      MR_Word Var_211;
      MR_Word Var_283;
      MR_String Var_284;
      MR_String Var_286;
      MR_Word Var_290;
      MR_String Var_298;
      MR_String Var_300;
      MR_Word Var_302;
      MR_String Var_303;
      MR_String Var_305;
      MR_Word Var_307;
      MR_String Var_312;
      MR_String Var_314;
      MR_Word Var_316;
      MR_Word Var_319;
      MR_Word MmakeRuleDateFileDeps_795;
      MR_Word STATE_VARIABLE_MmakeFile_213_796;
      MR_Word STATE_VARIABLE_SourceGroups_289_797;
      MR_Word STATE_VARIABLE_MmakeFile_295_798;

      Var_182 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_36, (MR_String) ".fact_tables");
      {
        MmakeVarFactTables_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeVarFactTables_50, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), MmakeVarFactTables_50, 1) = ((MR_Box) (Var_182));
        MR_hl_field(MR_mktag(3), MmakeVarFactTables_50, 2) = ((MR_Box) (FactDeps_42));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeVarFactTables_50, STATE_VARIABLE_MmakeFile_181_181, &STATE_VARIABLE_MmakeFile_184_184);
      Var_185 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_36, (MR_String) ".fact_tables.os");
      Var_189 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_36, (MR_String) ".fact_tables:%=\044(os_subdir)%.\044O)");
      Var_187 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_189);
      {
        MmakeVarFactTablesOs_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), MmakeVarFactTablesOs_51, 0) = ((MR_Box) (Var_185));
        MR_hl_field(MR_mktag(2), MmakeVarFactTablesOs_51, 1) = ((MR_Box) (Var_187));
      }
      Var_191 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_36, (MR_String) ".fact_tables.all_os");
      Var_195 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_36, (MR_String) ".fact_tables:%=\044(os_subdir)%.\044O)");
      Var_193 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_195);
      {
        MmakeVarFactTablesAllOs_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), MmakeVarFactTablesAllOs_52, 0) = ((MR_Box) (Var_191));
        MR_hl_field(MR_mktag(2), MmakeVarFactTablesAllOs_52, 1) = ((MR_Box) (Var_193));
      }
      Var_197 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_36, (MR_String) ".fact_tables.cs");
      Var_201 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_36, (MR_String) ".fact_tables:%=\044(cs_subdir)%.c)");
      Var_199 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_201);
      {
        MmakeVarFactTablesCs_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), MmakeVarFactTablesCs_53, 0) = ((MR_Box) (Var_197));
        MR_hl_field(MR_mktag(2), MmakeVarFactTablesCs_53, 1) = ((MR_Box) (Var_199));
      }
      Var_203 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_36, (MR_String) ".fact_tables.all_cs");
      Var_207 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_36, (MR_String) ".fact_tables:%=\044(cs_subdir)%.c)");
      Var_205 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_207);
      {
        MmakeVarFactTablesAllCs_54 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), MmakeVarFactTablesAllCs_54, 0) = ((MR_Box) (Var_203));
        MR_hl_field(MR_mktag(2), MmakeVarFactTablesAllCs_54, 1) = ((MR_Box) (Var_205));
      }
      {
        Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_211, 0) = ((MR_Box) (MmakeVarFactTablesAllCs_54));
        MR_hl_field(MR_mktag(1), Var_211, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_210, 0) = ((MR_Box) (MmakeVarFactTablesCs_53));
        MR_hl_field(MR_mktag(1), Var_210, 1) = ((MR_Box) (Var_211));
      }
      {
        Var_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_209, 0) = ((MR_Box) (MmakeVarFactTablesAllOs_52));
        MR_hl_field(MR_mktag(1), Var_209, 1) = ((MR_Box) (Var_210));
      }
      {
        MmakeVarsFactTables_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MmakeVarsFactTables_55, 0) = ((MR_Box) (MmakeVarFactTablesOs_51));
        MR_hl_field(MR_mktag(1), MmakeVarsFactTables_55, 1) = ((MR_Box) (Var_209));
      }
      libs__mmakefiles__add_mmake_entries_3_p_0(MmakeVarsFactTables_55, STATE_VARIABLE_MmakeFile_184_184, &STATE_VARIABLE_MmakeFile_213_796);
      Var_286 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_36, (MR_String) ".fact_tables)");
      Var_284 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_286);
      {
        Var_283 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_283, 0) = ((MR_Box) (Var_284));
        MR_hl_field(MR_mktag(0), Var_283, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        FactTableSourceGroup_75 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), FactTableSourceGroup_75, 0) = ((MR_Box) ((MR_String) "fact tables"));
        MR_hl_field(MR_mktag(0), FactTableSourceGroup_75, 1) = ((MR_Box) (Var_283));
      }
      {
        Var_290 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_290, 0) = ((MR_Box) (FactTableSourceGroup_75));
        MR_hl_field(MR_mktag(1), Var_290, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      STATE_VARIABLE_SourceGroups_289_797 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), STATE_VARIABLE_SourceGroups_279_279, Var_290);
      {
        MmakeRuleDateFileDeps_795 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_795, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_795, 1) = ((MR_Box) ((MR_String) "date_file_deps"));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_795, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_795, 3) = ((MR_Box) (TargetGroups_727));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_795, 4) = ((MR_Box) (STATE_VARIABLE_SourceGroups_289_797));
        MR_hl_field(MR_mktag(3), MmakeRuleDateFileDeps_795, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleDateFileDeps_795, STATE_VARIABLE_MmakeFile_213_796, &STATE_VARIABLE_MmakeFile_295_798);
      Var_300 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_36, (MR_String) ".fact_tables.os)");
      Var_298 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_300);
      Var_305 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_36, (MR_String) ".fact_tables)");
      Var_303 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_305);
      {
        Var_307 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_307, 0) = ((MR_Box) (SourceFileName_15));
        MR_hl_field(MR_mktag(1), Var_307, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_302 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_302, 0) = ((MR_Box) (Var_303));
        MR_hl_field(MR_mktag(1), Var_302, 1) = ((MR_Box) (Var_307));
      }
      {
        MmakeRuleFactOs_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleFactOs_79, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), MmakeRuleFactOs_79, 1) = ((MR_Box) ((MR_String) "fact_table_os"));
        MR_hl_field(MR_mktag(3), MmakeRuleFactOs_79, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeRuleFactOs_79, 3) = ((MR_Box) (Var_298));
        MR_hl_field(MR_mktag(3), MmakeRuleFactOs_79, 4) = ((MR_Box) (Var_302));
        MR_hl_field(MR_mktag(3), MmakeRuleFactOs_79, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_314 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_36, (MR_String) ".fact_tables.cs)");
      Var_312 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_314);
      {
        Var_316 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_316, 0) = ((MR_Box) (ObjFileName_60));
        MR_hl_field(MR_mktag(1), Var_316, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MmakeRuleFactCs_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleFactCs_80, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), MmakeRuleFactCs_80, 1) = ((MR_Box) ((MR_String) "fact_table_cs"));
        MR_hl_field(MR_mktag(3), MmakeRuleFactCs_80, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeRuleFactCs_80, 3) = ((MR_Box) (Var_312));
        MR_hl_field(MR_mktag(3), MmakeRuleFactCs_80, 4) = ((MR_Box) (Var_316));
        MR_hl_field(MR_mktag(3), MmakeRuleFactCs_80, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_319 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_319, 0) = ((MR_Box) (MmakeRuleFactCs_80));
        MR_hl_field(MR_mktag(1), Var_319, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MmakeRulesFactOsCs_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MmakeRulesFactOsCs_81, 0) = ((MR_Box) (MmakeRuleFactOs_79));
        MR_hl_field(MR_mktag(1), MmakeRulesFactOsCs_81, 1) = ((MR_Box) (Var_319));
      }
      libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesFactOsCs_81, STATE_VARIABLE_MmakeFile_295_798, &STATE_VARIABLE_MmakeFile_321_321);
    }
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedDeps_20);
    if (succeeded)
      STATE_VARIABLE_MmakeFile_340_340 = STATE_VARIABLE_MmakeFile_321_321;
    else
    {
      MR_Word MmakeRulesNestedDeps_83;
      MR_Word Var_337;
      MR_Word Var_339;
      MR_Box conv2_STATE_VARIABLE_IO_338_338;

      Var_339 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedDeps_20);
      {
        Var_337 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_337, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[1]));
        MR_hl_field(MR_mktag(0), Var_337, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_2));
        MR_hl_field(MR_mktag(0), Var_337, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_337, 3) = ((MR_Box) (Globals_9));
        MR_hl_field(MR_mktag(0), Var_337, 4) = ((MR_Box) (ModuleName_17));
        MR_hl_field(MR_mktag(0), Var_337, 5) = ((MR_Box) (Var_339));
      }
      mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_337, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[10])), &MmakeRulesNestedDeps_83, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_338_338);
      libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesNestedDeps_83, STATE_VARIABLE_MmakeFile_321_321, &STATE_VARIABLE_MmakeFile_340_340);
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 357, &UseOptFiles_84);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 355, &Intermod_85);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 679, &IntermodDirs_86);
    switch (Intermod_85) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_MmakeFile_351_351 = STATE_VARIABLE_MmakeFile_340_340;
        break;
      case (MR_Integer) 1:
        {
          MR_Word AllDepsFileNames_87;
          MR_Word MmakeRuleMhDeps_88;
          MR_Word Var_345;

          Var_345 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllDeps_11);
          parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_Word) (((MR_Box) ((MR_String) ".mh"))), Var_345, &AllDepsFileNames_87);
          {
            MmakeRuleMhDeps_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_88, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_88, 1) = ((MR_Box) ((MR_String) "machine_dependent_header_deps"));
            MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_88, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_88, 3) = ((MR_Box) (ObjFileName_60));
            MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_88, 4) = ((MR_Box) (AllDepsFileNames_87));
            MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_88, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleMhDeps_88, STATE_VARIABLE_MmakeFile_340_340, &STATE_VARIABLE_MmakeFile_351_351);
        }
        break;
    }
    succeeded = (Intermod_85 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (UseOptFiles_84 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word TransOpt_90;
      MR_Word UseTransOpt_91;
      MR_Word BuildOptFiles_92;
      MR_Word OptDeps_93;
      MR_Word MaybeTransOptDeps1_95;
      MR_Word OptInt0Deps_96;
      MR_Word OptDepsFileNames_97;
      MR_Word OptInt0DepsFileNames_98;
      MR_Word MmakeRuleDateOptInt0Deps_99;
      MR_Word Var_366;
      MR_Word Var_372;
      MR_Word Var_377;
      MR_Word STATE_VARIABLE_MmakeFile_379_379;
      MR_Word Targets_730;

      {
        Targets_730 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Targets_730, 0) = ((MR_Box) (TransOptDateFileName_43));
        MR_hl_field(MR_mktag(0), Targets_730, 1) = ((MR_Box) (Var_245));
      }
      libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 359, &TransOpt_90);
      libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 358, &UseTransOpt_91);
      mercury__bool__not_2_p_0(UseTransOpt_91, &BuildOptFiles_92);
      succeeded = (TransOpt_90 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (UseTransOpt_91 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word TransOptDeps1_94;
        MR_Word Var_358;
        MR_Word Var_360;

        Var_360 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), LongDeps_39);
        {
          Var_358 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_358, 0) = ((MR_Box) (ModuleName_17));
          MR_hl_field(MR_mktag(1), Var_358, 1) = ((MR_Box) (Var_360));
        }
        parse_tree__write_deps_file__get_both_opt_deps_8_p_0(Globals_9, BuildOptFiles_92, IntermodDirs_86, Var_358, &OptDeps_93, &TransOptDeps1_94);
        {
          MaybeTransOptDeps1_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTransOptDeps1_95, 0) = ((MR_Box) (TransOptDeps1_94));
        }
      }
      else
      {
        MR_Word Var_362;
        MR_Word Var_365;

        Var_365 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), LongDeps_39);
        {
          Var_362 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_362, 0) = ((MR_Box) (ModuleName_17));
          MR_hl_field(MR_mktag(1), Var_362, 1) = ((MR_Box) (Var_365));
        }
        parse_tree__write_deps_file__get_opt_deps_8_p_0(Globals_9, BuildOptFiles_92, IntermodDirs_86, (MR_Word) (((MR_Box) ((MR_String) ".opt"))), Var_362, &OptDeps_93);
        MaybeTransOptDeps1_95 = (MR_Word) ((MR_Unsigned) 0U);
      }
      Var_366 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[5]), OptDeps_93);
      OptInt0Deps_96 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_366);
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_Word) (((MR_Box) ((MR_String) ".opt"))), OptDeps_93, &OptDepsFileNames_97);
      Var_372 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptInt0Deps_96);
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, Var_239, Var_372, &OptInt0DepsFileNames_98);
      Var_377 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptDepsFileNames_97, OptInt0DepsFileNames_98);
      {
        MmakeRuleDateOptInt0Deps_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_99, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_99, 1) = ((MR_Box) ((MR_String) "dates_on_opts_and_int0s"));
        MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_99, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_99, 3) = ((MR_Box) (Targets_730));
        MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_99, 4) = ((MR_Box) (Var_377));
        MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_99, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleDateOptInt0Deps_99, STATE_VARIABLE_MmakeFile_351_351, &STATE_VARIABLE_MmakeFile_379_379);
      if ((MaybeTransOptDeps1_95 == (MR_Word) ((MR_Unsigned) 0U)))
        STATE_VARIABLE_MmakeFile_389_389 = STATE_VARIABLE_MmakeFile_379_379;
      else
      {
        MR_Word TransOptDeps2_100 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTransOptDeps1_95, (MR_Integer) 0))));
        MR_Word TransOptDepsOptFileNames_101;
        MR_Word MmakeRuleTransOptOpts_102;
        MR_Word Targets_731;

        {
          Targets_731 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Targets_731, 0) = ((MR_Box) (ErrFileName_57));
          MR_hl_field(MR_mktag(0), Targets_731, 1) = ((MR_Box) (Var_246));
        }
        parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_Word) (((MR_Box) ((MR_String) ".trans_opt"))), TransOptDeps2_100, &TransOptDepsOptFileNames_101);
        {
          MmakeRuleTransOptOpts_102 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_102, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_102, 1) = ((MR_Box) ((MR_String) "dates_on_trans_opts\'_opts"));
          MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_102, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_102, 3) = ((MR_Box) (Targets_731));
          MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_102, 4) = ((MR_Box) (TransOptDepsOptFileNames_101));
          MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_102, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleTransOptOpts_102, STATE_VARIABLE_MmakeFile_379_379, &STATE_VARIABLE_MmakeFile_389_389);
      }
    }
    else
      STATE_VARIABLE_MmakeFile_389_389 = STATE_VARIABLE_MmakeFile_351_351;
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 288, &HighLevelCode_103);
    libs__globals__get_target_2_p_0(Globals_9, &CompilationTarget_104);
    succeeded = (HighLevelCode_103 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (CompilationTarget_104 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word MmakeRuleObjOnMihs_105;
      MR_Word Var_391;
      MR_Word Var_394;
      MR_Word AllDepsFileNames_732;
      MR_Word Targets_733;

      {
        Var_391 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_391, 0) = ((MR_Box) (ObjFileName_60));
        MR_hl_field(MR_mktag(1), Var_391, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Targets_733 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Targets_733, 0) = ((MR_Box) (PicObjFileName_62));
        MR_hl_field(MR_mktag(0), Targets_733, 1) = ((MR_Box) (Var_391));
      }
      Var_394 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllDeps_11);
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, (MR_Word) (((MR_Box) ((MR_String) ".mih"))), Var_394, &AllDepsFileNames_732);
      {
        MmakeRuleObjOnMihs_105 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_105, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_105, 1) = ((MR_Box) ((MR_String) "objs_on_mihs"));
        MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_105, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_105, 3) = ((MR_Box) (Targets_733));
        MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_105, 4) = ((MR_Box) (AllDepsFileNames_732));
        MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_105, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleObjOnMihs_105, STATE_VARIABLE_MmakeFile_389_389, &STATE_VARIABLE_MmakeFile_400_400);
    }
    else
      STATE_VARIABLE_MmakeFile_400_400 = STATE_VARIABLE_MmakeFile_389_389;
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".c"))), ModuleName_17, &CFileName_106);
    Var_406 = (MR_Word) (((MR_Box) ((MR_String) ".mh")));
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, Var_406, ModuleName_17, &MhHeaderFileName_107);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".mih"))), ModuleName_17, &MihHeaderFileName_108);
    {
      Var_416 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_416, 0) = ((MR_Box) (MihHeaderFileName_108));
      MR_hl_field(MR_mktag(1), Var_416, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_415 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_415, 0) = ((MR_Box) (MhHeaderFileName_107));
      MR_hl_field(MR_mktag(0), Var_415, 1) = ((MR_Box) (Var_416));
    }
    {
      Var_418 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_418, 0) = ((MR_Box) (CFileName_106));
      MR_hl_field(MR_mktag(1), Var_418, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRuleMhMihOnC_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_109, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_109, 1) = ((MR_Box) ((MR_String) "mh_and_mih_on_c"));
      MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_109, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_109, 3) = ((MR_Box) (Var_415));
      MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_109, 4) = ((MR_Box) (Var_418));
      MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_109, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleMhMihOnC_109, STATE_VARIABLE_MmakeFile_400_400, &STATE_VARIABLE_MmakeFile_421_421);
    Var_423 = (MR_Word) (((MR_Box) ((MR_String) ".java")));
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, Var_423, ModuleName_17, &JavaFileName_110);
    Var_427 = make__make_module_dep_file_extension_0_f_0();
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, Var_427, ModuleName_17, &ModuleDepFileName_111);
    {
      Var_434 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_434, 0) = ((MR_Box) (JavaFileName_110));
      MR_hl_field(MR_mktag(1), Var_434, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_431 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_431, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_431, 1) = ((MR_Box) ((MR_String) "module_dep_on_java"));
      MR_hl_field(MR_mktag(3), Var_431, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_431, 3) = ((MR_Box) (ModuleDepFileName_111));
      MR_hl_field(MR_mktag(3), Var_431, 4) = ((MR_Box) (Var_434));
      MR_hl_field(MR_mktag(3), Var_431, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_437 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_437, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_437, 1) = ((MR_Box) ((MR_String) "module_dep_on_c"));
      MR_hl_field(MR_mktag(3), Var_437, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_437, 3) = ((MR_Box) (ModuleDepFileName_111));
      MR_hl_field(MR_mktag(3), Var_437, 4) = ((MR_Box) (Var_418));
      MR_hl_field(MR_mktag(3), Var_437, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeFragmentModuleDep_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MmakeFragmentModuleDep_112, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
      MR_hl_field(MR_mktag(1), MmakeFragmentModuleDep_112, 1) = ((MR_Box) (Var_431));
      MR_hl_field(MR_mktag(1), MmakeFragmentModuleDep_112, 2) = ((MR_Box) (Var_437));
    }
    libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentModuleDep_112, STATE_VARIABLE_MmakeFile_421_421, &STATE_VARIABLE_MmakeFile_443_443);
    Var_445 = (MR_Word) (((MR_Box) ((MR_String) ".date")));
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, Var_445, ModuleName_17, &DateFileName_113);
    Var_449 = (MR_Word) (((MR_Box) ((MR_String) ".date0")));
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, Var_449, ModuleName_17, &Date0FileName_114);
    Var_453 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_18);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, Var_445, Var_453, &AncestorDateFileNames_115);
    Var_457 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_18);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, Var_239, Var_457, &AncestorInt0FileNames_116);
    Var_460 = (MR_Word) (((MR_Box) ((MR_String) ".int3")));
    Var_461 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), LongDeps_39);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, Var_460, Var_461, &LongDepInt3FileNames_117);
    Var_465 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ShortDeps_41);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, Var_460, Var_465, &ShortDepInt3FileNames_118);
    {
      Var_474 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_474, 0) = ((MR_Box) (Date0FileName_114));
      MR_hl_field(MR_mktag(1), Var_474, 1) = ((MR_Box) (AncestorDateFileNames_115));
    }
    {
      Var_473 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_473, 0) = ((MR_Box) (DateFileName_113));
      MR_hl_field(MR_mktag(0), Var_473, 1) = ((MR_Box) (Var_474));
    }
    {
      Var_471 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_471, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), Var_471, 1) = ((MR_Box) (Var_473));
    }
    {
      Var_470 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_470, 0) = ((MR_Box) (Var_471));
      MR_hl_field(MR_mktag(0), Var_470, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_478 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(SourceFileName_15);
    {
      Var_477 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_477, 0) = ((MR_Box) (Var_478));
      MR_hl_field(MR_mktag(1), Var_477, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_481 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "ancestor int0", AncestorInt0FileNames_116);
    Var_484 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "long dep int3s", LongDepInt3FileNames_117);
    Var_486 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "short dep int3s", ShortDepInt3FileNames_118);
    Var_483 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_484, Var_486);
    Var_480 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_481, Var_483);
    Var_476 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_477, Var_480);
    {
      MmakeRuleParentDates_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDates_119, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDates_119, 1) = ((MR_Box) ((MR_String) "self_and_parent_date_deps"));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDates_119, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDates_119, 3) = ((MR_Box) (Var_470));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDates_119, 4) = ((MR_Box) (Var_476));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDates_119, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleParentDates_119, STATE_VARIABLE_MmakeFile_443_443, &STATE_VARIABLE_MmakeFile_489_489);
    Var_491 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_18);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_9, Var_449, Var_491, &AncestorDate0FileNames_120);
    {
      Var_499 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_499, 0) = ((MR_Box) (Date0FileName_114));
      MR_hl_field(MR_mktag(0), Var_499, 1) = ((MR_Box) (AncestorDate0FileNames_120));
    }
    {
      Var_497 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_497, 0) = ((MR_Box) ((MR_String) "date0s"));
      MR_hl_field(MR_mktag(0), Var_497, 1) = ((MR_Box) (Var_499));
    }
    {
      Var_496 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_496, 0) = ((MR_Box) (Var_497));
      MR_hl_field(MR_mktag(0), Var_496, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_503 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(SourceFileName_15);
    {
      Var_502 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_502, 0) = ((MR_Box) (Var_503));
      MR_hl_field(MR_mktag(1), Var_502, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_506 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "long dep int3s", LongDepInt3FileNames_117);
    Var_508 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "short dep int3s", ShortDepInt3FileNames_118);
    Var_505 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_506, Var_508);
    Var_501 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_502, Var_505);
    {
      MmakeRuleParentDate0s_121 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_121, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_121, 1) = ((MR_Box) ((MR_String) "self_and_parent_date0_deps"));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_121, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_121, 3) = ((MR_Box) (Var_496));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_121, 4) = ((MR_Box) (Var_501));
      MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_121, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleParentDate0s_121, STATE_VARIABLE_MmakeFile_489_489, &STATE_VARIABLE_MmakeFile_511_511);
    parse_tree__source_file_map__have_source_file_map_3_p_0(&HaveMap_122);
    switch (HaveMap_122) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ModuleArg_123 = SourceFileName_15;
        break;
      case (MR_Integer) 1:
        parse_tree__file_names__module_name_to_file_name_stem_2_p_0(SourceFileModuleName_16, &ModuleArg_123);
        break;
    }
    if ((ContainsForeignCode_27 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word C0_126 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignImportModules0_25, (MR_Integer) 0))));
      MR_Word Java0_127 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignImportModules0_25, (MR_Integer) 1))));
      MR_Word CSharp0_128 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignImportModules0_25, (MR_Integer) 2))));
      MR_Word Erlang0_129 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignImportModules0_25, (MR_Integer) 3))));

      succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), C0_126);
      if (succeeded)
      {
        succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Java0_127);
        if (succeeded)
        {
          succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), CSharp0_128);
          if (succeeded)
            succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Erlang0_129);
        }
      }
      if (succeeded)
      {
        MR_Word AncestorIntSpecs_134 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_28, (MR_Integer) 4))));
        MR_Word DirectIntSpecs_135 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_28, (MR_Integer) 5))));
        MR_Word IndirectIntSpecs_136 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_28, (MR_Integer) 6))));
        MR_Word PlainOpts_137 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_28, (MR_Integer) 7))));
        MR_Word IntForOptSpecs_139 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_28, (MR_Integer) 9))));
        MR_Word BackendLangs_140;
        MR_Word IsBackendFIM_141;
        MR_Word STATE_VARIABLE_FIMSpecs_513_513;
        MR_Word STATE_VARIABLE_FIMSpecs_515_515;
        MR_Word STATE_VARIABLE_FIMSpecs_517_517;
        MR_Word STATE_VARIABLE_FIMSpecs_519_519;
        MR_Word STATE_VARIABLE_FIMSpecs_521_521;
        MR_Word STATE_VARIABLE_FIMSpecs_523_523;
        MR_Box conv5_STATE_VARIABLE_FIMSpecs_515_515;
        MR_Box conv7_STATE_VARIABLE_FIMSpecs_517_517;
        MR_Box conv9_STATE_VARIABLE_FIMSpecs_519_519;
        MR_Box conv11_STATE_VARIABLE_FIMSpecs_521_521;
        MR_Box conv13_STATE_VARIABLE_FIMSpecs_523_523;

        mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), &STATE_VARIABLE_FIMSpecs_513_513);
        mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[6]), AncestorIntSpecs_134, ((MR_Box) (STATE_VARIABLE_FIMSpecs_513_513)), &conv5_STATE_VARIABLE_FIMSpecs_515_515);
        STATE_VARIABLE_FIMSpecs_515_515 = ((MR_Word) (conv5_STATE_VARIABLE_FIMSpecs_515_515));
        mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[7]), DirectIntSpecs_135, ((MR_Box) (STATE_VARIABLE_FIMSpecs_515_515)), &conv7_STATE_VARIABLE_FIMSpecs_517_517);
        STATE_VARIABLE_FIMSpecs_517_517 = ((MR_Word) (conv7_STATE_VARIABLE_FIMSpecs_517_517));
        mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[8]), IndirectIntSpecs_136, ((MR_Box) (STATE_VARIABLE_FIMSpecs_517_517)), &conv9_STATE_VARIABLE_FIMSpecs_519_519);
        STATE_VARIABLE_FIMSpecs_519_519 = ((MR_Word) (conv9_STATE_VARIABLE_FIMSpecs_519_519));
        mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[9]), PlainOpts_137, ((MR_Box) (STATE_VARIABLE_FIMSpecs_519_519)), &conv11_STATE_VARIABLE_FIMSpecs_521_521);
        STATE_VARIABLE_FIMSpecs_521_521 = ((MR_Word) (conv11_STATE_VARIABLE_FIMSpecs_521_521));
        mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[10]), IntForOptSpecs_139, ((MR_Box) (STATE_VARIABLE_FIMSpecs_521_521)), &conv13_STATE_VARIABLE_FIMSpecs_523_523);
        STATE_VARIABLE_FIMSpecs_523_523 = ((MR_Word) (conv13_STATE_VARIABLE_FIMSpecs_523_523));
        libs__globals__get_backend_foreign_languages_2_p_0(Globals_9, &BackendLangs_140);
        {
          IsBackendFIM_141 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), IsBackendFIM_141, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), IsBackendFIM_141, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_9));
          MR_hl_field(MR_mktag(0), IsBackendFIM_141, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), IsBackendFIM_141, 3) = ((MR_Box) (BackendLangs_140));
        }
        mercury__set__filter_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), IsBackendFIM_141, STATE_VARIABLE_FIMSpecs_523_523, &FIMSpecs_125);
      }
      else
        FIMSpecs_125 = parse_tree__prog_data_foreign__get_all_fim_specs_1_f_0(ForeignImportModules0_25);
    }
    else
      FIMSpecs_125 = parse_tree__prog_data_foreign__get_all_fim_specs_1_f_0(ForeignImportModules0_25);
    {
      Var_526 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_526, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[6]));
      MR_hl_field(MR_mktag(0), Var_526, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_10));
      MR_hl_field(MR_mktag(0), Var_526, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_526, 3) = ((MR_Box) (SourceFileModuleName_16));
    }
    mercury__set__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_526, FIMSpecs_125, &ForeignImportedModuleNames_145);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ForeignImportedModuleNames_145);
    if (succeeded)
      STATE_VARIABLE_MmakeFile_549_549 = STATE_VARIABLE_MmakeFile_511_511;
    else
    {
      MR_Word Target_146;
      MR_Word ForeignImportTargets_147;
      MR_Word ForeignImportExt_148;
      MR_Word MmakeRulesForeignImports_151;
      MR_Word Var_546;
      MR_Word Var_548;
      MR_Box conv16_STATE_VARIABLE_IO_547_547;

      libs__globals__get_target_2_p_0(Globals_9, &Target_146);
      switch (Target_146) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_543;

            {
              Var_543 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_543, 0) = ((MR_Box) (PicObjFileName_62));
              MR_hl_field(MR_mktag(1), Var_543, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              ForeignImportTargets_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ForeignImportTargets_147, 0) = ((MR_Box) (ObjFileName_60));
              MR_hl_field(MR_mktag(1), ForeignImportTargets_147, 1) = ((MR_Box) (Var_543));
            }
            ForeignImportExt_148 = Var_406;
          }
          break;
        case (MR_Integer) 1:
          {
            ForeignImportTargets_147 = (MR_Word) ((MR_Unsigned) 0U);
            ForeignImportExt_148 = (MR_Word) (((MR_Box) ((MR_String) ".cs")));
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String BeamFileName_150;

            parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".beam"))), ModuleName_17, &BeamFileName_150);
            {
              ForeignImportTargets_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ForeignImportTargets_147, 0) = ((MR_Box) (BeamFileName_150));
              MR_hl_field(MR_mktag(1), ForeignImportTargets_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            ForeignImportExt_148 = (MR_Word) (((MR_Box) ((MR_String) ".hrl")));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ClassFileName_149;

            parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".class"))), ModuleName_17, &ClassFileName_149);
            {
              ForeignImportTargets_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ForeignImportTargets_147, 0) = ((MR_Box) (ClassFileName_149));
              MR_hl_field(MR_mktag(1), ForeignImportTargets_147, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            ForeignImportExt_148 = Var_423;
          }
          break;
      }
      Var_548 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ForeignImportedModuleNames_145);
      {
        Var_546 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_546, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[2]));
        MR_hl_field(MR_mktag(0), Var_546, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_11));
        MR_hl_field(MR_mktag(0), Var_546, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_546, 3) = ((MR_Box) (Globals_9));
        MR_hl_field(MR_mktag(0), Var_546, 4) = ((MR_Box) (ForeignImportExt_148));
        MR_hl_field(MR_mktag(0), Var_546, 5) = ((MR_Box) (Var_548));
      }
      mercury__list__map_foldl_5_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_546, ForeignImportTargets_147, &MmakeRulesForeignImports_151, ((MR_Box) ((MR_Integer) 0)), &conv16_STATE_VARIABLE_IO_547_547);
      libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesForeignImports_151, STATE_VARIABLE_MmakeFile_511_511, &STATE_VARIABLE_MmakeFile_549_549);
    }
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, Var_262, ModuleName_17, &IntFileName_152);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, Var_266, ModuleName_17, &Int2FileName_153);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, Var_460, ModuleName_17, &Int3FileName_154);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".opt"))), ModuleName_17, &OptFileName_155);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".trans_opt"))), ModuleName_17, &TransOptFileName_156);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_9, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".date3"))), ModuleName_17, &Date3FileName_157);
    {
      Var_577 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_577, 0) = ((MR_Box) (Date0FileName_114));
      MR_hl_field(MR_mktag(1), Var_577, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_580 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_579 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_579, 0) = ((MR_Box) (Var_580));
      MR_hl_field(MR_mktag(1), Var_579, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_574 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_574, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_574, 1) = ((MR_Box) ((MR_String) "int0_on_date0"));
      MR_hl_field(MR_mktag(3), Var_574, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_574, 3) = ((MR_Box) (Int0FileName_63));
      MR_hl_field(MR_mktag(3), Var_574, 4) = ((MR_Box) (Var_577));
      MR_hl_field(MR_mktag(3), Var_574, 5) = ((MR_Box) (Var_579));
    }
    {
      Var_586 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_586, 0) = ((MR_Box) (DateFileName_113));
      MR_hl_field(MR_mktag(1), Var_586, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_589 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_588 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_588, 0) = ((MR_Box) (Var_589));
      MR_hl_field(MR_mktag(1), Var_588, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_583 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_583, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_583, 1) = ((MR_Box) ((MR_String) "int_on_date"));
      MR_hl_field(MR_mktag(3), Var_583, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_583, 3) = ((MR_Box) (IntFileName_152));
      MR_hl_field(MR_mktag(3), Var_583, 4) = ((MR_Box) (Var_586));
      MR_hl_field(MR_mktag(3), Var_583, 5) = ((MR_Box) (Var_588));
    }
    Var_598 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_597 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_597, 0) = ((MR_Box) (Var_598));
      MR_hl_field(MR_mktag(1), Var_597, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_592 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_592, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_592, 1) = ((MR_Box) ((MR_String) "int2_on_date"));
      MR_hl_field(MR_mktag(3), Var_592, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_592, 3) = ((MR_Box) (Int2FileName_153));
      MR_hl_field(MR_mktag(3), Var_592, 4) = ((MR_Box) (Var_586));
      MR_hl_field(MR_mktag(3), Var_592, 5) = ((MR_Box) (Var_597));
    }
    {
      Var_604 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_604, 0) = ((MR_Box) (Date3FileName_157));
      MR_hl_field(MR_mktag(1), Var_604, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_607 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_606 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_606, 0) = ((MR_Box) (Var_607));
      MR_hl_field(MR_mktag(1), Var_606, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_601 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_601, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_601, 1) = ((MR_Box) ((MR_String) "int3_on_date3"));
      MR_hl_field(MR_mktag(3), Var_601, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_601, 3) = ((MR_Box) (Int3FileName_154));
      MR_hl_field(MR_mktag(3), Var_601, 4) = ((MR_Box) (Var_604));
      MR_hl_field(MR_mktag(3), Var_601, 5) = ((MR_Box) (Var_606));
    }
    {
      Var_613 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_613, 0) = ((MR_Box) (OptDateFileName_58));
      MR_hl_field(MR_mktag(1), Var_613, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_616 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_615 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_615, 0) = ((MR_Box) (Var_616));
      MR_hl_field(MR_mktag(1), Var_615, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_610 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_610, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_610, 1) = ((MR_Box) ((MR_String) "opt_on_opt_date"));
      MR_hl_field(MR_mktag(3), Var_610, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_610, 3) = ((MR_Box) (OptFileName_155));
      MR_hl_field(MR_mktag(3), Var_610, 4) = ((MR_Box) (Var_613));
      MR_hl_field(MR_mktag(3), Var_610, 5) = ((MR_Box) (Var_615));
    }
    {
      Var_622 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_622, 0) = ((MR_Box) (TransOptDateFileName_43));
      MR_hl_field(MR_mktag(1), Var_622, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_625 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_624 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_624, 0) = ((MR_Box) (Var_625));
      MR_hl_field(MR_mktag(1), Var_624, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_619 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_619, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_619, 1) = ((MR_Box) ((MR_String) "trans_opt_on_trans_opt_date"));
      MR_hl_field(MR_mktag(3), Var_619, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_619, 3) = ((MR_Box) (TransOptFileName_156));
      MR_hl_field(MR_mktag(3), Var_619, 4) = ((MR_Box) (Var_622));
      MR_hl_field(MR_mktag(3), Var_619, 5) = ((MR_Box) (Var_624));
    }
    {
      Var_618 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_618, 0) = ((MR_Box) (Var_619));
      MR_hl_field(MR_mktag(1), Var_618, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_609 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_609, 0) = ((MR_Box) (Var_610));
      MR_hl_field(MR_mktag(1), Var_609, 1) = ((MR_Box) (Var_618));
    }
    {
      Var_600 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_600, 0) = ((MR_Box) (Var_601));
      MR_hl_field(MR_mktag(1), Var_600, 1) = ((MR_Box) (Var_609));
    }
    {
      Var_591 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_591, 0) = ((MR_Box) (Var_592));
      MR_hl_field(MR_mktag(1), Var_591, 1) = ((MR_Box) (Var_600));
    }
    {
      Var_582 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_582, 0) = ((MR_Box) (Var_583));
      MR_hl_field(MR_mktag(1), Var_582, 1) = ((MR_Box) (Var_591));
    }
    {
      MmakeRulesInstallShadows_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MmakeRulesInstallShadows_158, 0) = ((MR_Box) (Var_574));
      MR_hl_field(MR_mktag(1), MmakeRulesInstallShadows_158, 1) = ((MR_Box) (Var_582));
    }
    libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesInstallShadows_158, STATE_VARIABLE_MmakeFile_549_549, &STATE_VARIABLE_MmakeFile_628_628);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 676, &UseSubdirs_159);
    switch (UseSubdirs_159) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_MmakeFile_650_650 = STATE_VARIABLE_MmakeFile_628_628;
        break;
      case (MR_Integer) 1:
        {
          MR_Word MmakeRulesSubDirShorthand_161;
          MR_Word Var_648;
          MR_Box conv18_STATE_VARIABLE_IO_166;

          {
            Var_648 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_648, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[0]));
            MR_hl_field(MR_mktag(0), Var_648, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_d_file_8_p_0_12));
            MR_hl_field(MR_mktag(0), Var_648, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_648, 3) = ((MR_Box) (Globals_9));
            MR_hl_field(MR_mktag(0), Var_648, 4) = ((MR_Box) (ModuleName_17));
          }
          mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_648, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[16])), &MmakeRulesSubDirShorthand_161, ((MR_Box) ((MR_Integer) 0)), &conv18_STATE_VARIABLE_IO_166);
          libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesSubDirShorthand_161, STATE_VARIABLE_MmakeFile_628_628, &STATE_VARIABLE_MmakeFile_650_650);
        }
        break;
    }
    Var_794 = parse_tree__source_file_map__default_source_file_1_f_0(ModuleName_17);
    succeeded = (strcmp(SourceFileName_15, Var_794) == 0);
    if (succeeded)
      *STATE_VARIABLE_MmakeFile_164 = STATE_VARIABLE_MmakeFile_650_650;
    else
    {
      MR_Word MmakeRulesPattern_162;
      MR_Word Var_651;
      MR_Word Var_654;
      MR_Word Var_656;
      MR_String Var_657;
      MR_Word Var_660;
      MR_Word Var_661;
      MR_Word Var_666;
      MR_String Var_667;
      MR_Word Var_670;
      MR_Word Var_671;
      MR_Word Var_676;
      MR_String Var_677;
      MR_Word Var_680;
      MR_Word Var_681;
      MR_Word Var_686;
      MR_String Var_687;
      MR_Word Var_690;
      MR_Word Var_691;
      MR_Word Var_696;
      MR_String Var_697;
      MR_Word Var_700;
      MR_Word Var_701;
      MR_Word Var_706;
      MR_String Var_707;
      MR_String Var_709;
      MR_Word Var_712;
      MR_Word Var_713;
      MR_Word Var_718;
      MR_String Var_719;
      MR_String Var_721;

      {
        Var_654 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_654, 0) = ((MR_Box) (SourceFileName_15));
        MR_hl_field(MR_mktag(1), Var_654, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      Var_657 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCPI) \044(ALL_GRADEFLAGS) \044(ALL_MCPIFLAGS) ", ModuleArg_123);
      {
        Var_656 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_656, 0) = ((MR_Box) (Var_657));
        MR_hl_field(MR_mktag(1), Var_656, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_651 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_651, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_651, 1) = ((MR_Box) ((MR_String) "date0_on_src"));
        MR_hl_field(MR_mktag(3), Var_651, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_651, 3) = ((MR_Box) (Date0FileName_114));
        MR_hl_field(MR_mktag(3), Var_651, 4) = ((MR_Box) (Var_654));
        MR_hl_field(MR_mktag(3), Var_651, 5) = ((MR_Box) (Var_656));
      }
      Var_667 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCI) \044(ALL_GRADEFLAGS) \044(ALL_MCIFLAGS) ", ModuleArg_123);
      {
        Var_666 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_666, 0) = ((MR_Box) (Var_667));
        MR_hl_field(MR_mktag(1), Var_666, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_661 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_661, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_661, 1) = ((MR_Box) ((MR_String) "date_on_src"));
        MR_hl_field(MR_mktag(3), Var_661, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_661, 3) = ((MR_Box) (DateFileName_113));
        MR_hl_field(MR_mktag(3), Var_661, 4) = ((MR_Box) (Var_654));
        MR_hl_field(MR_mktag(3), Var_661, 5) = ((MR_Box) (Var_666));
      }
      Var_677 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCSI) \044(ALL_GRADEFLAGS) \044(ALL_MCSIFLAGS) ", ModuleArg_123);
      {
        Var_676 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_676, 0) = ((MR_Box) (Var_677));
        MR_hl_field(MR_mktag(1), Var_676, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_671 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_671, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_671, 1) = ((MR_Box) ((MR_String) "date3_on_src"));
        MR_hl_field(MR_mktag(3), Var_671, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_671, 3) = ((MR_Box) (Date3FileName_157));
        MR_hl_field(MR_mktag(3), Var_671, 4) = ((MR_Box) (Var_654));
        MR_hl_field(MR_mktag(3), Var_671, 5) = ((MR_Box) (Var_676));
      }
      Var_687 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCOI) \044(ALL_GRADEFLAGS) \044(ALL_MCOIFLAGS) ", ModuleArg_123);
      {
        Var_686 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_686, 0) = ((MR_Box) (Var_687));
        MR_hl_field(MR_mktag(1), Var_686, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_681 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_681, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_681, 1) = ((MR_Box) ((MR_String) "opt_date_on_src"));
        MR_hl_field(MR_mktag(3), Var_681, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_681, 3) = ((MR_Box) (OptDateFileName_58));
        MR_hl_field(MR_mktag(3), Var_681, 4) = ((MR_Box) (Var_654));
        MR_hl_field(MR_mktag(3), Var_681, 5) = ((MR_Box) (Var_686));
      }
      Var_697 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCTOI) \044(ALL_GRADEFLAGS) \044(ALL_MCTOIFLAGS) ", ModuleArg_123);
      {
        Var_696 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_696, 0) = ((MR_Box) (Var_697));
        MR_hl_field(MR_mktag(1), Var_696, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_691 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_691, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_691, 1) = ((MR_Box) ((MR_String) "trans_opt_date_on_src"));
        MR_hl_field(MR_mktag(3), Var_691, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_691, 3) = ((MR_Box) (TransOptDateFileName_43));
        MR_hl_field(MR_mktag(3), Var_691, 4) = ((MR_Box) (Var_654));
        MR_hl_field(MR_mktag(3), Var_691, 5) = ((MR_Box) (Var_696));
      }
      Var_709 = mercury__string__f_43_43_2_f_0(ModuleArg_123, (MR_String) " \044(ERR_REDIRECT)");
      Var_707 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) ", Var_709);
      {
        Var_706 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_706, 0) = ((MR_Box) (Var_707));
        MR_hl_field(MR_mktag(1), Var_706, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_701 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_701, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_701, 1) = ((MR_Box) ((MR_String) "c_date_on_src"));
        MR_hl_field(MR_mktag(3), Var_701, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_701, 3) = ((MR_Box) (CDateFileName_59));
        MR_hl_field(MR_mktag(3), Var_701, 4) = ((MR_Box) (Var_654));
        MR_hl_field(MR_mktag(3), Var_701, 5) = ((MR_Box) (Var_706));
      }
      Var_721 = mercury__string__f_43_43_2_f_0(ModuleArg_123, (MR_String) " \044(ERR_REDIRECT)");
      Var_719 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) --java-only ", Var_721);
      {
        Var_718 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_718, 0) = ((MR_Box) (Var_719));
        MR_hl_field(MR_mktag(1), Var_718, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_713 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_713, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(MR_mktag(3), Var_713, 1) = ((MR_Box) ((MR_String) "java_date_on_src"));
        MR_hl_field(MR_mktag(3), Var_713, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), Var_713, 3) = ((MR_Box) (JavaDateFileName_61));
        MR_hl_field(MR_mktag(3), Var_713, 4) = ((MR_Box) (Var_654));
        MR_hl_field(MR_mktag(3), Var_713, 5) = ((MR_Box) (Var_718));
      }
      {
        Var_712 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_712, 0) = ((MR_Box) (Var_713));
        MR_hl_field(MR_mktag(1), Var_712, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_700 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_700, 0) = ((MR_Box) (Var_701));
        MR_hl_field(MR_mktag(1), Var_700, 1) = ((MR_Box) (Var_712));
      }
      {
        Var_690 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_690, 0) = ((MR_Box) (Var_691));
        MR_hl_field(MR_mktag(1), Var_690, 1) = ((MR_Box) (Var_700));
      }
      {
        Var_680 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_680, 0) = ((MR_Box) (Var_681));
        MR_hl_field(MR_mktag(1), Var_680, 1) = ((MR_Box) (Var_690));
      }
      {
        Var_670 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_670, 0) = ((MR_Box) (Var_671));
        MR_hl_field(MR_mktag(1), Var_670, 1) = ((MR_Box) (Var_680));
      }
      {
        Var_660 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_660, 0) = ((MR_Box) (Var_661));
        MR_hl_field(MR_mktag(1), Var_660, 1) = ((MR_Box) (Var_670));
      }
      {
        MmakeRulesPattern_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MmakeRulesPattern_162, 0) = ((MR_Box) (Var_651));
        MR_hl_field(MR_mktag(1), MmakeRulesPattern_162, 1) = ((MR_Box) (Var_660));
      }
      libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesPattern_162, STATE_VARIABLE_MmakeFile_650_650, STATE_VARIABLE_MmakeFile_164);
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

          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_1, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".opt"))), Dep_18, &OptName_27);
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
          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_1, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".trans_opt"))), Dep_18, &TransOptName_31);
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
            MR_String OptName_57;
            MR_Word MaybeOptDir_58;
            MR_String TransOptName_59;
            MR_Word MaybeTransOptDir_60;

            parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_1, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".opt"))), Dep_18, &OptName_57);
            libs__file_util__search_for_file_returning_dir_5_p_0(IntermodDirs_3, OptName_57, &MaybeOptDir_58);
            if (((MR_tag((MR_Word) MaybeOptDir_58)) == (MR_Integer) 1))
              *HeadVar__5_5 = STATE_VARIABLE_OptDeps_39_39;
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dep_18));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_39_39));
              }
            parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_1, (MR_Integer) 1, (MR_Word) (((MR_Box) ((MR_String) ".trans_opt"))), Dep_18, &TransOptName_59);
            libs__file_util__search_for_file_returning_dir_5_p_0(IntermodDirs_3, TransOptName_59, &MaybeTransOptDir_60);
            if (((MR_tag((MR_Word) MaybeTransOptDir_60)) == (MR_Integer) 1))
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

    parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(
  MR_Word Globals_8,
  MR_String GroupName_9,
  MR_Word Ext_10,
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
      MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) (Ext_10));
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

    parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__5_5);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(
  MR_Word Globals_7,
  MR_Word Ext_8,
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
      MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) (Ext_8));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, Modules_9, FileNames_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13);
  }
}

void MR_CALL 
parse_tree__write_deps_file__get_opt_deps_8_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4,
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
