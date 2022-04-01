/*
** Automatically generated from `write_deps_file.m'
** by the Mercury compiler,
** version rotd-2022-04-01
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
#include "getopt.mih"
#include "integer.mih"
#include "io.mih"
#include "library.mih"
#include "libs.mih"
#include "list.mih"
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
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.mmakefiles.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.deps_map.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_dep_info.mih"
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
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_398_398;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__IncludeMap_44;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_99;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__BurdenedModule_359;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_41;
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv1_Var_41;
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv0_Var_99;
};


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_names__type_ctor_info_ext_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_builtin__type_ctor_info_string_0;

static const MR_DuFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_maybe_intermod_deps_0_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo parse_tree__write_deps_file__parse_tree__write_deps_file__field_types_maybe_intermod_deps_0_1[4];

static const MR_ConstString parse_tree__write_deps_file__parse_tree__write_deps_file__field_names_maybe_intermod_deps_0_1[4];

static const MR_DuFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_maybe_intermod_deps_0_1;

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_maybe_intermod_deps_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_maybe_intermod_deps_0_1[1];

static const MR_DuPtagLayout parse_tree__write_deps_file__parse_tree__write_deps_file__du_ptag_ordered_maybe_intermod_deps_0[2];

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_name_ordered_maybe_intermod_deps_0[2];

static const MR_Integer parse_tree__write_deps_file__parse_tree__write_deps_file__functor_number_map_maybe_intermod_deps_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__write_deps_file__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0;

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1430__1_5_p_0(
  MR_Word Globals_8,
  MR_Word LambdaHeadVar__1_142,
  MR_String * LambdaHeadVar__2_143);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1400__1_2_p_0(
  MR_Word DepsMap_11,
  MR_Word LambdaHeadVar__1_128);

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1327__1_4_p_0(
  MR_Word DepsGraph_8,
  MR_Word LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1297__1_2_p_0(
  MR_Word ModuleName_24,
  MR_Word LambdaHeadVar__1_44);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__construct_foreign_import_rules__884__1_3_p_0(
  MR_Word SourceFileModuleName_13,
  MR_Word LambdaHeadVar__1_62,
  MR_Word * LambdaHeadVar__2_63);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__construct_foreign_import_rules__878__1_2_p_0(
  MR_Word BackendLangs_33,
  MR_Word LambdaHeadVar__1_59);

static void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_mmake_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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
parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_String ModuleMakeVarName_10,
  MR_Word HeadVar__4_4,
  MR_Word * MmakeRule_13);

static void MR_CALL 
parse_tree__write_deps_file__construct_subdirs_shorthand_rule_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word OtherExt_9,
  MR_Word * MmakeRule_10);

static MR_String MR_CALL 
parse_tree__write_deps_file__foreign_include_file_path_name_2_f_0(
  MR_String SourceFileName_4,
  MR_Word IncludeFile_5);

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
  MR_Word OtherExt_11,
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
parse_tree__write_deps_file__gather_fim_specs_in_indirect_int2_spec_3_p_0(
  MR_Word IndirectInt2Spec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9);

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_direct_int1_spec_3_p_0(
  MR_Word DirectInt1Spec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9);

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
parse_tree__write_deps_file__generate_dep_file_7_p_0(
  MR_Word Globals_8,
  MR_String SourceFileName_9,
  MR_Word ModuleName_10,
  MR_Word DepsMap_11,
  MR_Word * STATE_VARIABLE_MmakeFile_44);

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
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_String ModuleMakeVarName_10,
  MR_Word STATE_VARIABLE_MmakeFile_0_14,
  MR_Word * STATE_VARIABLE_MmakeFile_15);

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
  MR_Word STATE_VARIABLE_MmakeFile_0_65,
  MR_Word * STATE_VARIABLE_MmakeFile_66);

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

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0(
  MR_Word Globals_8,
  MR_String SourceFileName_9,
  MR_Word ModuleName_10,
  MR_Word DepsMap_11,
  MR_Word * MmakeFile_12);

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
parse_tree__write_deps_file__get_fact_table_dependencies_6_p_0(
  MR_Word Globals_1,
  MR_Word OtherExt_2,
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
parse_tree__write_deps_file__generate_d_file_8_p_0(
  MR_Word Globals_9,
  MR_Word BurdenedAugCompUnit_10,
  MR_Word IntermodDeps_11,
  MR_Word AllDeps_12,
  MR_Word MaybeTransOptDeps_13,
  MR_Word * STATE_VARIABLE_MmakeFile_71);

static void MR_CALL 
parse_tree__write_deps_file__construct_any_needed_pattern_rules_12_p_0(
  MR_Word HaveMap_13,
  MR_Word ModuleName_14,
  MR_Word SourceFileModuleName_15,
  MR_String SourceFileName_16,
  MR_String Date0FileName_17,
  MR_String DateFileName_18,
  MR_String Date3FileName_19,
  MR_String OptDateFileName_20,
  MR_String TransOptDateFileName_21,
  MR_String CDateFileName_22,
  MR_String JavaDateFileName_23,
  MR_Word * MmakeRulesPatterns_24);

static void MR_CALL 
parse_tree__write_deps_file__construct_subdir_short_rules_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__write_deps_file__construct_subdir_short_rules_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleName_7,
  MR_Word * MmakeRulesSubDirShorthand_8);

static void MR_CALL 
parse_tree__write_deps_file__construct_install_shadow_rules_11_p_0(
  MR_Word Globals_12,
  MR_Word ModuleName_13,
  MR_String Int0FileName_14,
  MR_String Date0FileName_15,
  MR_String DateFileName_16,
  MR_String Date3FileName_17,
  MR_String OptDateFileName_18,
  MR_String TransOptDateFileName_19,
  MR_Word * MmakeRulesInstallShadows_20);

static MR_bool MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0(
  MR_Word Globals_10,
  MR_Word AugCompUnit_11,
  MR_Word IntermodDeps_12,
  MR_Word SourceFileModuleName_13,
  MR_String ObjFileName_14,
  MR_String PicObjFileName_15,
  MR_Word * MmakeRulesForeignImports_16);

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
  MR_Word ForeignImportOtherExt_9,
  MR_Word ForeignImportTargets_10,
  MR_Word ForeignImportedModuleNames_11,
  MR_Word * MmakeRule_12);

static void MR_CALL 
parse_tree__write_deps_file__construct_self_and_parent_date_date0_rules_10_p_0(
  MR_Word Globals_11,
  MR_String SourceFileName_12,
  MR_String Date0FileName_13,
  MR_String DateFileName_14,
  MR_Word Ancestors_15,
  MR_Word LongDeps_16,
  MR_Word ShortDeps_17,
  MR_Word * MmakeRulesParentDates_18);

static void MR_CALL 
parse_tree__write_deps_file__construct_module_dep_fragment_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_String CFileName_9,
  MR_Word * MmakeFragmentModuleDep_10);

static void MR_CALL 
parse_tree__write_deps_file__construct_c_header_rules_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__write_deps_file__construct_c_header_rules_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word AllDeps_12,
  MR_String CFileName_13,
  MR_String ObjFileName_14,
  MR_String PicObjFileName_15,
  MR_Word * MmakeRulesCHeaders_16);

static MR_Box MR_CALL 
parse_tree__write_deps_file__construct_intermod_rules_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__construct_intermod_rules_12_p_0(
  MR_Word Globals_13,
  MR_Word ModuleName_14,
  MR_Word LongDeps_15,
  MR_Word AllDeps_16,
  MR_String ErrFileName_17,
  MR_String TransOptDateFileName_18,
  MR_String CDateFileName_19,
  MR_String JavaDateFileName_20,
  MR_String ObjFileName_21,
  MR_Word * MmakeRulesIntermod_22);

static void MR_CALL 
parse_tree__write_deps_file__get_both_opt_deps_8_p_0(
  MR_Word Globals_1,
  MR_Word BuildOptFiles_2,
  MR_Word IntermodDirs_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6);

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

static void MR_CALL 
parse_tree__write_deps_file__construct_build_nested_children_first_rule_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__write_deps_file__construct_build_nested_children_first_rule_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word MaybeTopModule_9,
  MR_Word * MmakeRulesNestedDeps_10);

static MR_Box MR_CALL 
parse_tree__write_deps_file__construct_date_file_deps_rule_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__construct_date_file_deps_rule_18_p_0(
  MR_Word Globals_19,
  MR_Word ModuleName_20,
  MR_String SourceFileName_21,
  MR_Word Ancestors_22,
  MR_Word LongDeps_23,
  MR_Word ShortDeps_24,
  MR_Word PublicChildren_25,
  MR_String Int0FileName_26,
  MR_String OptDateFileName_27,
  MR_String TransOptDateFileName_28,
  MR_Word ForeignIncludeFilesSet_29,
  MR_String CDateFileName_30,
  MR_String JavaDateFileName_31,
  MR_String ErrFileName_32,
  MR_Word FactTableSourceGroups_33,
  MR_Word * MmakeRuleDateFileDeps_34);

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
parse_tree__write_deps_file__construct_fact_tables_entries_7_p_0(
  MR_String ModuleMakeVarName_8,
  MR_String SourceFileName_9,
  MR_String ObjFileName_10,
  MR_Word FactTableFileNamesSet_11,
  MR_Word * MmakeVarsFactTables_12,
  MR_Word * FactTableSourceGroups_13,
  MR_Word * MmakeRulesFactTables_14);

static void MR_CALL 
parse_tree__write_deps_file__construct_trans_opt_deps_rule_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__write_deps_file__construct_trans_opt_deps_rule_7_p_0(
  MR_Word Globals_8,
  MR_Word MaybeTransOptDeps_9,
  MR_Word LongDeps_10,
  MR_String TransOptDateFileName_11,
  MR_Word * MmakeRulesTransOpt_12);

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_intermod_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_intermod_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_mmake_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[114][2];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[12][3];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[44][1];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[1][11];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[10][6];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[2][10];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_7[5][5];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[1][9];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[3][7];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_10[3][4];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_11[1][8];




static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[114][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".java_date")))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   5 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".dir/*.\044O")))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[4])))
  },
  /* row   6 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".c_date")))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[5])))
  },
  /* row   7 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".trans_opt_date")))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[6])))
  },
  /* row   8 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".optdate")))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[7])))
  },
  /* row   9 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".dll")))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  10 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".class")))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[9])))
  },
  /* row  11 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".java")))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[10])))
  },
  /* row  12 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".pic_o")))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[11])))
  },
  /* row  13 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".\044O")))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[12])))
  },
  /* row  14 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".c")))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[13])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE)")),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  16 */
  {
    ((MR_Box) ((MR_String) "\044(EXT_FOR_SHARED_LIB)")),
    ((MR_Box) ((MR_String) "\044(A)"))
  },
  /* row  17 */
  {
    ((MR_Box) ((MR_String) "install_lib_dirs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  18 */
  {
    ((MR_Box) ((MR_String) "done")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) ((MR_String) "\t} || exit 1; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[18])))
  },
  /* row  20 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044(INSTALL_INT_DIR)\"/*.\044\044ext \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[19])))
  },
  /* row  21 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[20])))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \"\044\044dir\" ] || \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[21])))
  },
  /* row  23 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \"\044\044dir\" || { \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[22])))
  },
  /* row  24 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[23])))
  },
  /* row  25 */
  {
    ((MR_Box) ((MR_String) "\tdir=\"\044(INSTALL_INT_DIR)/Mercury/\044\044{ext}s\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[24])))
  },
  /* row  26 */
  {
    ((MR_Box) ((MR_String) "install_grade_dirs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  27 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[19])))
  },
  /* row  28 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044(INSTALL_GRADE_INT_DIR)\"/*.\044\044ext \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[27])))
  },
  /* row  29 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[28])))
  },
  /* row  30 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \"\044\044dir\" ] || \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[29])))
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \"\044\044dir\" || { \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[30])))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[31])))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_String) "\tdir=\"\044(INSTALL_GRADE_INT_DIR)/Mercury/\044\044{ext}s\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[32])))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INC_DIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[18])))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[34])))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_String) "} || exit 1")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[36])))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[37])))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_String) "\t} && \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[38])))
  },
  /* row  40 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_INT_DIR)/Mercury/mihs; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[39])))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[40])))
  },
  /* row  42 */
  {
    ((MR_Box) ((MR_String) "\t{ [ -d \044(INSTALL_INT_DIR)/Mercury/mihs ] || \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[41])))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_String) "\044(LN_S) .. \044(INSTALL_INT_DIR)/Mercury/mihs || { \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_String) "rm -rf \044(INSTALL_INT_DIR)/Mercury/mihs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[43])))
  },
  /* row  45 */
  {
    ((MR_Box) ((MR_String) "} || exit 1")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[44])))
  },
  /* row  46 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_GRADE_INC_SUBDIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[45])))
  },
  /* row  47 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[46])))
  },
  /* row  48 */
  {
    ((MR_Box) ((MR_String) "\t} && \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[47])))
  },
  /* row  49 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \044(INSTALL_GRADE_INC_SUBDIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[48])))
  },
  /* row  50 */
  {
    ((MR_Box) ((MR_String) "\t{ [ -d \044(INSTALL_GRADE_INC_SUBDIR) ] || \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[49])))
  },
  /* row  51 */
  {
    ((MR_Box) ((MR_String) "\044(LN_S) .. \044(INSTALL_GRADE_INC_SUBDIR) || { \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[50])))
  },
  /* row  52 */
  {
    ((MR_Box) ((MR_String) "rm -rf \044(INSTALL_GRADE_INC_SUBDIR)")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[51])))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'.")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[52])))
  },
  /* row  54 */
  {
    ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[53])))
  },
  /* row  55 */
  {
    ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option.")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[54])))
  },
  /* row  56 */
  {
    ((MR_Box) ((MR_String) "done")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[55])))
  },
  /* row  57 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_GRADE_INC_DIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[57])))
  },
  /* row  59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[31]))),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row  60 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[59])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[32]))),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row  62 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[61])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[60])))
  },
  /* row  63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[33]))),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row  64 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[63])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[62])))
  },
  /* row  65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[34]))),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row  66 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[65])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[64])))
  },
  /* row  67 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[35]))),
    ((MR_Box) ((MR_String) ".classes"))
  },
  /* row  68 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[67])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[66])))
  },
  /* row  69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[36]))),
    ((MR_Box) ((MR_String) ".javas"))
  },
  /* row  70 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[69])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[68])))
  },
  /* row  71 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[37]))),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row  72 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[71])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[70])))
  },
  /* row  73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[38]))),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row  74 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[73])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[72])))
  },
  /* row  75 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[39]))),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row  76 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[75])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[74])))
  },
  /* row  77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[40]))),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row  78 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[77])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[76])))
  },
  /* row  79 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[41]))),
    ((MR_Box) ((MR_String) ".errs"))
  },
  /* row  80 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[79])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[78])))
  },
  /* row  81 */
  {
    ((MR_Box) ((MR_String) ".foreign_cs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  82 */
  {
    ((MR_Box) ((MR_String) ".errs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[81])))
  },
  /* row  83 */
  {
    ((MR_Box) ((MR_String) ".dep_errs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[82])))
  },
  /* row  84 */
  {
    ((MR_Box) ((MR_String) ".profs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[83])))
  },
  /* row  85 */
  {
    ((MR_Box) ((MR_String) ".javas")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[84])))
  },
  /* row  86 */
  {
    ((MR_Box) ((MR_String) ".useds")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[85])))
  },
  /* row  87 */
  {
    ((MR_Box) ((MR_String) ".java_dates")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[86])))
  },
  /* row  88 */
  {
    ((MR_Box) ((MR_String) ".c_dates")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[87])))
  },
  /* row  89 */
  {
    ((MR_Box) ((MR_String) ".all_pic_os")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[88])))
  },
  /* row  90 */
  {
    ((MR_Box) ((MR_String) ".all_os")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[89])))
  },
  /* row  91 */
  {
    ((MR_Box) ((MR_String) ".mihs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[90])))
  },
  /* row  92 */
  {
    ((MR_Box) ((MR_String) ".cs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[91])))
  },
  /* row  93 */
  {
    ((MR_Box) ((MR_String) ".dirs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[92])))
  },
  /* row  94 */
  {
    ((MR_Box) ((MR_String) ".classes")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  95 */
  {
    ((MR_Box) ((MR_String) ".foreign_dlls")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[94])))
  },
  /* row  96 */
  {
    ((MR_Box) ((MR_String) ".dlls")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[95])))
  },
  /* row  97 */
  {
    ((MR_Box) ((MR_String) ".all_mihs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[96])))
  },
  /* row  98 */
  {
    ((MR_Box) ((MR_String) ".all_mhs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[97])))
  },
  /* row  99 */
  {
    ((MR_Box) ((MR_String) ".module_deps")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[98])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_String) ".ds")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[99])))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_String) ".imdgs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[100])))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_String) ".requests")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[101])))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_String) ".analysiss")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_String) ".trans_opts")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_String) ".opts")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_String) ".int3s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[105])))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_String) ".all_int0s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[106])))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_String) ".ints")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_String) ".trans_opt_dates")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[108])))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_String) ".optdates")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_String) ".date3s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[110])))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_String) ".date0s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[111])))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_String) ".dates")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[112])))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[12][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__digraph__digraph_key__arity1__)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[2]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[3])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[0])),
    ((MR_Box) (parse_tree__write_deps_file__construct_intermod_rules_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[1])),
    ((MR_Box) (parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[2])),
    ((MR_Box) (parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[3])),
    ((MR_Box) (parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[4])),
    ((MR_Box) (parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[5])),
    ((MR_Box) (parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[7])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[4])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_8)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[44][1] = {
  /* row   0 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".d"))))
  },
  /* row   1 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".dv"))))
  },
  /* row   2 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".dep"))))
  },
  /* row   3 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".order"))))
  },
  /* row   4 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".trans_opt_date"))))
  },
  /* row   5 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".optdate"))))
  },
  /* row   6 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".c_date"))))
  },
  /* row   7 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".\044O"))))
  },
  /* row   8 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".java_date"))))
  },
  /* row   9 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".pic_o"))))
  },
  /* row  10 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".int0"))))
  },
  /* row  11 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".c"))))
  },
  /* row  12 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".date"))))
  },
  /* row  13 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".date0"))))
  },
  /* row  14 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".date3"))))
  },
  /* row  15 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".trans_opt"))))
  },
  /* row  16 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".int"))))
  },
  /* row  17 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".int2"))))
  },
  /* row  18 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".mh"))))
  },
  /* row  19 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".opt"))))
  },
  /* row  20 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".mih"))))
  },
  /* row  21 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".java"))))
  },
  /* row  22 */
  {
    ((MR_Box) ((MR_String) "java"))
  },
  /* row  23 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".int3"))))
  },
  /* row  24 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".class"))))
  },
  /* row  25 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ""))))
  },
  /* row  26 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".init"))))
  },
  /* row  27 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "_init.c"))))
  },
  /* row  28 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "_init.\044O"))))
  },
  /* row  29 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "_init.pic_o"))))
  },
  /* row  30 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".jar"))))
  },
  /* row  31 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".all_trans_opts"))))
  },
  /* row  32 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".all_opts"))))
  },
  /* row  33 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".all_int3s"))))
  },
  /* row  34 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".all_ints"))))
  },
  /* row  35 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".classes"))))
  },
  /* row  36 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".javas"))))
  },
  /* row  37 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".trans_opts"))))
  },
  /* row  38 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".opts"))))
  },
  /* row  39 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".int3s"))))
  },
  /* row  40 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".ints"))))
  },
  /* row  41 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".check"))))
  },
  /* row  42 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".clean"))))
  },
  /* row  43 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".realclean"))))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[10][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_other_ext_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__write_deps_file__pair__pti_pair_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_7[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_other_ext_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_10[3][4] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[9])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".m"))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[9])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".err"))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[9])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".dep_err"))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_11[1][8] = {
  /* row   0 */
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

static const MR_DuFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_maybe_intermod_deps_0_0 = {
  (MR_String) "no_intermod_deps",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__write_deps_file__parse_tree__write_deps_file__field_types_maybe_intermod_deps_0_1[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__write_deps_file__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__write_deps_file__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__write_deps_file__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__write_deps_file__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_ConstString parse_tree__write_deps_file__parse_tree__write_deps_file__field_names_maybe_intermod_deps_0_1[4] = {
  (MR_String) "id_int_deps",
  (MR_String) "id_imp_deps",
  (MR_String) "id_indirect_deps",
  (MR_String) "id_fim_deps"
};

static const MR_DuFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_maybe_intermod_deps_0_1 = {
  (MR_String) "intermod_deps",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__write_deps_file__parse_tree__write_deps_file__field_types_maybe_intermod_deps_0_1,
  parse_tree__write_deps_file__parse_tree__write_deps_file__field_names_maybe_intermod_deps_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_maybe_intermod_deps_0_0[1] = {
  &parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_maybe_intermod_deps_0_0
};

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_maybe_intermod_deps_0_1[1] = {
  &parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_maybe_intermod_deps_0_1
};

static const MR_DuPtagLayout parse_tree__write_deps_file__parse_tree__write_deps_file__du_ptag_ordered_maybe_intermod_deps_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_maybe_intermod_deps_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_maybe_intermod_deps_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_name_ordered_maybe_intermod_deps_0[2] = {
  &parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_maybe_intermod_deps_0_1,
  &parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_maybe_intermod_deps_0_0
};

static const MR_Integer parse_tree__write_deps_file__parse_tree__write_deps_file__functor_number_map_maybe_intermod_deps_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_maybe_intermod_deps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__write_deps_file____Unify____maybe_intermod_deps_0_0_10001)),
  ((MR_Box) (parse_tree__write_deps_file____Compare____maybe_intermod_deps_0_0_10001)),
  (MR_String) "parse_tree.write_deps_file",
  (MR_String) "maybe_intermod_deps",
  { parse_tree__write_deps_file__parse_tree__write_deps_file__du_name_ordered_maybe_intermod_deps_0 },
  { parse_tree__write_deps_file__parse_tree__write_deps_file__du_ptag_ordered_maybe_intermod_deps_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__write_deps_file__parse_tree__write_deps_file__functor_number_map_maybe_intermod_deps_0,

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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0_10001)),
  ((MR_Box) (parse_tree__write_deps_file____Compare____maybe_mmake_var_0_0_10001)),
  (MR_String) "parse_tree.write_deps_file",
  (MR_String) "maybe_mmake_var",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__write_deps_file__pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1430__1_5_p_0(
  MR_Word Globals_8,
  MR_Word LambdaHeadVar__1_142,
  MR_String * LambdaHeadVar__2_143)
{
  MR_String F0_47;
  MR_Word M_524 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_142, (MR_Integer) 0))));
  MR_Word E_525 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_142, (MR_Integer) 1))));

  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_8, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dv_file\'/7", (MR_Integer) 0, E_525, M_524, &F0_47);
  *LambdaHeadVar__2_143 = mercury__string__f_43_43_2_f_0((MR_String) "\044(os_subdir)", F0_47);
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1400__1_2_p_0(
  MR_Word DepsMap_11,
  MR_Word LambdaHeadVar__1_128)
{
  MR_bool succeeded;
  MR_Word BurdenedModule_32;
  MR_Word ParseTreeModuleSrc_33;
  MR_Word IncludeMap_34;
  MR_Word Var_129;
  MR_Box conv0_Var_129;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_11, ((MR_Box) (LambdaHeadVar__1_128)), &conv0_Var_129);
  Var_129 = ((MR_Word) (conv0_Var_129));
  BurdenedModule_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_129, (MR_Integer) 1))));
  ParseTreeModuleSrc_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BurdenedModule_32, (MR_Integer) 1))));
  IncludeMap_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_33, (MR_Integer) 4))));
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), IncludeMap_34);
  succeeded = !(succeeded);
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1327__1_4_p_0(
  MR_Word DepsGraph_8,
  MR_Word LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17)
{
  MR_Word Dep_14;
  MR_Box conv0_Dep_14;

  mercury__digraph__lookup_vertex_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DepsGraph_8, LambdaHeadVar__1_15, &conv0_Dep_14);
  Dep_14 = ((MR_Word) (conv0_Dep_14));
  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (Dep_14)), LambdaHeadVar__2_16, LambdaHeadVar__3_17);
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1297__1_2_p_0(
  MR_Word ModuleName_24,
  MR_Word LambdaHeadVar__1_44)
{
  MR_bool succeeded;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_24, LambdaHeadVar__1_44);
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__construct_foreign_import_rules__884__1_3_p_0(
  MR_Word SourceFileModuleName_13,
  MR_Word LambdaHeadVar__1_62,
  MR_Word * LambdaHeadVar__2_63)
{
  MR_bool succeeded;
  MR_String Var_64;

  *LambdaHeadVar__2_63 = parse_tree__prog_foreign__fim_spec_module_name_from_module_2_f_0(LambdaHeadVar__1_62, SourceFileModuleName_13);
  succeeded = ((MR_tag((MR_Word) *LambdaHeadVar__2_63)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_64 = ((MR_String) ((MR_hl_field(MR_mktag(0), *LambdaHeadVar__2_63, (MR_Integer) 0))));
    succeeded = (strcmp(Var_64, (MR_String) "mercury") == 0);
  }
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__construct_foreign_import_rules__878__1_2_p_0(
  MR_Word BackendLangs_33,
  MR_Word LambdaHeadVar__1_59)
{
  MR_bool succeeded;
  MR_Word Var_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_59, (MR_Integer) 0))) & (MR_Integer) 3);

  succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_60)), BackendLangs_33);
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_mmake_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_intermod_deps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_23 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_24 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_23 == CastY_24);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
    MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
    MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgY3_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgY4_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word SubResult1_14;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), &SubResult1_14, ((MR_Box) (Var_32)), ((MR_Box) (ArgY1_13)));
      succeeded = (SubResult1_14 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_14;
      else
      {
        MR_Word SubResult2_17;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), &SubResult2_17, ((MR_Box) (Var_31)), ((MR_Box) (ArgY2_16)));
        succeeded = (SubResult2_17 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_17;
        else
        {
          MR_Word SubResult3_20;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), &SubResult3_20, ((MR_Box) (Var_30)), ((MR_Box) (ArgY3_19)));
          succeeded = (SubResult3_20 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_20;
          else
            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_29)), ((MR_Box) (ArgY4_22)));
        }
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_intermod_deps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word TypeInfo_15_15;
    MR_Word TypeInfo_16_16;
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_10;
    MR_Word ArgX4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_12;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      ArgY4_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
      TypeInfo_15_15 = (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
      {
        TypeInfo_16_16 = (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_16_16, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        if (succeeded)
        {
          TypeInfo_17_17 = (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
          if (succeeded)
          {
            TypeInfo_18_18 = (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX4_11)), ((MR_Box) (ArgY4_12)));
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file__compare_module_names_3_p_0(
  MR_Word Sym1_4,
  MR_Word Sym2_5,
  MR_Word * Result_6)
{
  MR_String Str1_7;
  MR_String Str2_8;

  Str1_7 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Sym1_4);
  Str2_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(Sym2_5);
  mercury__private_builtin__builtin_compare_string_3_p_0(Result_6, Str1_7, Str2_8);
}

static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__prog_out__write_sym_name_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
parse_tree__write_deps_file__write_module_scc_4_p_0(
  MR_Word Stream_5,
  MR_Word SCC0_6)
{
  MR_Word SCC_8;
  MR_Word Var_12;

  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), SCC0_6, &SCC_8);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_9[2]));
    MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (parse_tree__write_deps_file__write_module_scc_4_p_0_1));
    MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Stream_5));
  }
  mercury__io__write_list_6_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Stream_5, SCC_8, (MR_String) "\n", Var_12);
}

static void MR_CALL 
parse_tree__write_deps_file__get_source_file_3_p_0(
  MR_Word DepsMap_4,
  MR_Word ModuleName_5,
  MR_String * FileName_6)
{
  MR_bool succeeded;
  MR_Word Deps_7;
  MR_Word BurdenedModule_9;
  MR_Word Baggage_10;
  MR_String SourceFileName_11;
  MR_Box conv0_Deps_7;
  MR_String SourceFileBase_12;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_4, ((MR_Box) (ModuleName_5)), &conv0_Deps_7);
  Deps_7 = ((MR_Word) (conv0_Deps_7));
  BurdenedModule_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Deps_7, (MR_Integer) 1))));
  Baggage_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BurdenedModule_9, (MR_Integer) 0))));
  SourceFileName_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), Baggage_10, (MR_Integer) 0))));
  succeeded = mercury__string__remove_suffix_3_p_0(SourceFileName_11, (MR_String) ".m", &SourceFileBase_12);
  if (succeeded)
    *FileName_6 = SourceFileBase_12;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_deps_file.get_source_file\'/3", (MR_String) "source file name doesn\'t end in \140.m\'");
      return;
    }
}

static MR_String MR_CALL 
parse_tree__write_deps_file__remove_suffix_files_cmd_2_f_0(
  MR_String ModuleMakeVarName_4,
  MR_String Extension_5)
{
  MR_String HeadVar__3_3;
  MR_String Var_13;
  MR_String Var_14;

  Var_13 = mercury__string__f_43_43_2_f_0(Extension_5, (MR_String) ") | xargs rm -f");
  Var_14 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_4, Var_13);
  HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "-echo \044(", Var_14);
  return HeadVar__3_3;
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_String ModuleMakeVarName_10,
  MR_Word HeadVar__4_4,
  MR_Word * MmakeRule_13)
{
  MR_Word Ext_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 0))));
  MR_String VarExtension_12 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__4_4, (MR_Integer) 1))));
  MR_String TargetName_15;
  MR_String Source_16;
  MR_String ExtStr_17;
  MR_String Var_29;
  MR_String Var_31;
  MR_Word Var_33;
  MR_String Var_37;
  MR_String Var_38;

  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_8, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_collective_target\'/7", (MR_Integer) 1, Ext_11, ModuleName_9, &TargetName_15);
  Var_37 = mercury__string__f_43_43_2_f_0(VarExtension_12, (MR_String) ")");
  Var_38 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_10, Var_37);
  Source_16 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_38);
  ExtStr_17 = parse_tree__file_names__extension_to_string_1_f_0(Ext_11);
  Var_31 = mercury__string__f_43_43_2_f_0(ExtStr_17, VarExtension_12);
  Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "collective_target_", Var_31);
  {
    Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Source_16));
    MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRule_13 = base;
    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_29));
    MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (TargetName_15));
    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Var_33));
    MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__construct_subdirs_shorthand_rule_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word OtherExt_9,
  MR_Word * MmakeRule_10)
{
  MR_String ModuleStr_12;
  MR_String Target_13;
  MR_String ExtStr_14;
  MR_String ShorthandTarget_15;
  MR_Word Var_20;
  MR_String Var_22;
  MR_Word Var_25;

  parse_tree__file_names__module_name_to_file_name_stem_2_p_0(ModuleName_8, &ModuleStr_12);
  {
    Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (OtherExt_9));
  }
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140parse_tree.write_deps_file.construct_subdirs_shorthand_rule\'/6", (MR_Integer) 1, Var_20, ModuleName_8, &Target_13);
  ExtStr_14 = parse_tree__file_names__other_extension_to_string_1_f_0(OtherExt_9);
  ShorthandTarget_15 = mercury__string__f_43_43_2_f_0(ModuleStr_12, ExtStr_14);
  Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "subdir_shorthand_for_", ExtStr_14);
  {
    Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Target_13));
    MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRule_10 = base;
    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_22));
    MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ShorthandTarget_15));
    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Var_25));
    MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static MR_String MR_CALL 
parse_tree__write_deps_file__foreign_include_file_path_name_2_f_0(
  MR_String SourceFileName_4,
  MR_Word IncludeFile_5)
{
  MR_String IncludePath_6;
  MR_String IncludeFileName_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), IncludeFile_5, (MR_Integer) 1))));

  parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_4, IncludeFileName_8, &IncludePath_6);
  return IncludePath_6;
}

static void MR_CALL 
parse_tree__write_deps_file__gather_nested_deps_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__6_6;

  parse_tree__file_names__module_name_to_file_name_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
parse_tree__write_deps_file__gather_nested_deps_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word NestedDeps_10,
  MR_Word OtherExt_11,
  MR_Word * MmakeRule_12)
{
  MR_String ModuleExtName_14;
  MR_Word NestedDepsFileNames_15;
  MR_String ExtStr_16;
  MR_Word Var_21;
  MR_String Var_25;
  MR_Word Var_36;
  MR_Box conv1_STATE_VARIABLE_IO_18;

  {
    Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (OtherExt_11));
  }
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_8, (MR_String) "predicate \140parse_tree.write_deps_file.gather_nested_deps\'/7", (MR_Integer) 1, Var_21, ModuleName_9, &ModuleExtName_14);
  {
    Var_36 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (parse_tree__write_deps_file__gather_nested_deps_7_p_0_1));
    MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (Globals_8));
    MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_deps_file.make_module_file_names_with_suffix\'/6"));
    MR_hl_field(MR_mktag(0), Var_36, 5) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_36, 6) = ((MR_Box) (Var_21));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_36, NestedDeps_10, &NestedDepsFileNames_15, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18);
  ExtStr_16 = parse_tree__file_names__other_extension_to_string_1_f_0(OtherExt_11);
  Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "nested_deps_for_", ExtStr_16);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRule_12 = base;
    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Var_25));
    MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ModuleExtName_14));
    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (NestedDepsFileNames_15));
    MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_parse_tree_plain_opt_3_p_0(
  MR_Word ParseTreePlainOpt_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_6,
  MR_Word * STATE_VARIABLE_FIMSpecs_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreePlainOpt_4, (MR_Integer) 3))));

  mercury__set__union_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_8, STATE_VARIABLE_FIMSpecs_0_6, STATE_VARIABLE_FIMSpecs_7);
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

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_parse_tree_int1_3_p_0(
  MR_Word ParseTreeInt1_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9)
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

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_indirect_int2_spec_3_p_0(
  MR_Word IndirectInt2Spec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9)
{
  MR_Word ParseTreeInt2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), IndirectInt2Spec_4, (MR_Integer) 0))));
  MR_Word IntFIMS_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_6, (MR_Integer) 7))));
  MR_Word ImpFIMS_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt2_6, (MR_Integer) 8))));
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

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_direct_int1_spec_3_p_0(
  MR_Word DirectInt1Spec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9)
{
  MR_Word ParseTreeInt1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DirectInt1Spec_4, (MR_Integer) 0))));
  MR_Word IntFIMS_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 9))));
  MR_Word ImpFIMS_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeInt1_6, (MR_Integer) 10))));
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

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_ancestor_int_spec_3_p_0(
  MR_Word AncestorIntSpec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9)
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

static void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__write_deps_file__write_module_scc_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleName_7,
  MR_Word DepsOrdering_8)
{
  MR_Word Order_10;

  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 119, &Order_10);
  switch (Order_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String OrdFileName_11;
        MR_Word ProgressStream_12;
        MR_Word Verbose_13;
        MR_String CreatingMsg_14;
        MR_Word OrdResult_15;
        MR_String Var_60;

        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_6, (MR_String) "predicate \140parse_tree.write_deps_file.maybe_output_module_order\'/5", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[3])), ModuleName_7, &OrdFileName_11);
        libs__globals__get_progress_output_stream_5_p_0(Globals_6, ModuleName_7, &ProgressStream_12);
        libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 70, &Verbose_13);
        Var_60 = mercury__string__f_43_43_2_f_0(OrdFileName_11, (MR_String) "\'...");
        CreatingMsg_14 = mercury__string__f_43_43_2_f_0((MR_String) "% Creating module order file \140", Var_60);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, Verbose_13, CreatingMsg_14);
        mercury__io__open_output_4_p_0(OrdFileName_11, &OrdResult_15);
        if (((MR_tag((MR_Word) OrdResult_15)) == (MR_Integer) 1))
        {
          MR_Word IOError_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OrdResult_15, (MR_Integer) 0))));
          MR_Word ErrorStream_18;
          MR_String IOErrorMessage_19;
          MR_String OrdMessage_20;
          MR_String Var_63;
          MR_String Var_64;

          libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, Verbose_13, (MR_String) " failed.\n");
          libs__file_util__maybe_flush_output_4_p_0(ProgressStream_12, Verbose_13);
          libs__globals__get_error_output_stream_5_p_0(Globals_6, ModuleName_7, &ErrorStream_18);
          mercury__io__error_message_2_p_0(IOError_17, &IOErrorMessage_19);
          Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", IOErrorMessage_19);
          Var_64 = mercury__string__f_43_43_2_f_0(OrdFileName_11, Var_63);
          OrdMessage_20 = mercury__string__f_43_43_2_f_0((MR_String) "error opening file \140", Var_64);
          libs__file_util__report_error_4_p_0(ErrorStream_18, OrdMessage_20);
        }
        else
        {
          MR_Word OrdStream_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OrdResult_15, (MR_Integer) 0))));
          MR_Word Var_50;

          {
            Var_50 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_9[1]));
            MR_hl_field(MR_mktag(0), Var_50, 1) = ((MR_Box) (parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_50, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_50, 3) = ((MR_Box) (OrdStream_16));
          }
          mercury__io__write_list_6_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), OrdStream_16, DepsOrdering_8, (MR_String) "\n\n", Var_50);
          mercury__io__close_output_3_p_0(OrdStream_16);
          libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, Verbose_13, (MR_String) " done.\n");
        }
      }
      break;
  }
}

void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_dep_file_6_p_0(
  MR_Word Globals_7,
  MR_String SourceFileName_8,
  MR_Word ModuleName_9,
  MR_Word DepsMap_10)
{
  MR_Word Verbose_12;
  MR_String DepFileName_13;
  MR_Word ProgressStream_14;
  MR_String CreatingMsg_15;
  MR_Word DepResult_16;
  MR_String Var_56;

  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 70, &Verbose_12);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dependencies_write_dep_file\'/6", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[2])), ModuleName_9, &DepFileName_13);
  libs__globals__get_progress_output_stream_5_p_0(Globals_7, ModuleName_9, &ProgressStream_14);
  Var_56 = mercury__string__f_43_43_2_f_0(DepFileName_13, (MR_String) "\'...\n");
  CreatingMsg_15 = mercury__string__f_43_43_2_f_0((MR_String) "% Creating auto-dependency file \140", Var_56);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_14, Verbose_12, CreatingMsg_15);
  mercury__io__open_output_4_p_0(DepFileName_13, &DepResult_16);
  if (((MR_tag((MR_Word) DepResult_16)) == (MR_Integer) 1))
  {
    MR_Word IOError_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DepResult_16, (MR_Integer) 0))));
    MR_Word ErrorStream_20;
    MR_String IOErrorMessage_21;
    MR_String DepMessage_22;
    MR_String Var_59;
    MR_String Var_60;

    libs__file_util__maybe_write_string_5_p_0(ProgressStream_14, Verbose_12, (MR_String) " failed.\n");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_14, Verbose_12);
    libs__globals__get_error_output_stream_5_p_0(Globals_7, ModuleName_9, &ErrorStream_20);
    mercury__io__error_message_2_p_0(IOError_19, &IOErrorMessage_21);
    Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", IOErrorMessage_21);
    Var_60 = mercury__string__f_43_43_2_f_0(DepFileName_13, Var_59);
    DepMessage_22 = mercury__string__f_43_43_2_f_0((MR_String) "error opening file \140", Var_60);
    libs__file_util__report_error_4_p_0(ErrorStream_20, DepMessage_22);
  }
  else
  {
    MR_Word DepStream_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DepResult_16, (MR_Integer) 0))));
    MR_Word MmakeFile_18;

    parse_tree__write_deps_file__generate_dep_file_7_p_0(Globals_7, SourceFileName_8, ModuleName_9, DepsMap_10, &MmakeFile_18);
    libs__mmakefiles__write_mmakefile_4_p_0(DepStream_17, MmakeFile_18);
    mercury__io__close_output_3_p_0(DepStream_17);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_14, Verbose_12, (MR_String) "% done.\n");
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_7_p_0(
  MR_Word Globals_8,
  MR_String SourceFileName_9,
  MR_Word ModuleName_10,
  MR_Word DepsMap_11,
  MR_Word * STATE_VARIABLE_MmakeFile_44)
{
  MR_String ModuleNameString_14;
  MR_String Version_15;
  MR_String FullArch_16;
  MR_Word MmakeStartComment_17;
  MR_String ModuleMakeVarName_18;
  MR_String InitFileName_19;
  MR_String InitCFileName_20;
  MR_String InitObjFileName_21;
  MR_String InitPicObjFileName_22;
  MR_Word MmcMakeDeps_23;
  MR_Word Intermod_24;
  MR_Word TransOpt_25;
  MR_Word MaybeModuleDepsVar_27;
  MR_String MaybeModuleDepsVarSpace_28;
  MR_Word MaybeOptsVar_30;
  MR_String MaybeOptsVarSpace_31;
  MR_Word MaybeTransOptsVar_33;
  MR_String MaybeTransOptsVarSpace_34;
  MR_Word MaybeModuleDepsVarPair_35;
  MR_Word MaybeOptsVarPair_36;
  MR_Word MaybeTransOptsVarPair_37;
  MR_String ExeFileName_38;
  MR_String JarFileName_39;
  MR_String LibFileName_40;
  MR_String SharedLibFileName_41;
  MR_String DepFileName_42;
  MR_String DvFileName_43;
  MR_Word STATE_VARIABLE_MmakeFile_90_90;
  MR_Word STATE_VARIABLE_MmakeFile_91_91;
  MR_Word STATE_VARIABLE_MmakeFile_92_92;
  MR_Word STATE_VARIABLE_MmakeFile_94_94;
  MR_Word STATE_VARIABLE_MmakeFile_96_96;
  MR_Word STATE_VARIABLE_MmakeFile_98_98;

  ModuleNameString_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_10);
  mercury__library__version_2_p_0(&Version_15, &FullArch_16);
  {
    MmakeStartComment_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), MmakeStartComment_17, 0) = ((MR_Box) ((MR_String) "program dependencies"));
    MR_hl_field(MR_mktag(0), MmakeStartComment_17, 1) = ((MR_Box) (ModuleNameString_14));
    MR_hl_field(MR_mktag(0), MmakeStartComment_17, 2) = ((MR_Box) (SourceFileName_9));
    MR_hl_field(MR_mktag(0), MmakeStartComment_17, 3) = ((MR_Box) (Version_15));
    MR_hl_field(MR_mktag(0), MmakeStartComment_17, 4) = ((MR_Box) (FullArch_16));
  }
  parse_tree__file_names__module_name_to_make_var_name_2_p_0(ModuleName_10, &ModuleMakeVarName_18);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_8, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[26])), ModuleName_10, &InitFileName_19);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_8, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[27])), ModuleName_10, &InitCFileName_20);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_8, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[28])), ModuleName_10, &InitObjFileName_21);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_8, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[29])), ModuleName_10, &InitPicObjFileName_22);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 150, &MmcMakeDeps_23);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 492, &Intermod_24);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 496, &TransOpt_25);
  switch (MmcMakeDeps_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MaybeModuleDepsVar_27 = (MR_Word) ((MR_Unsigned) 0U);
        MaybeModuleDepsVarSpace_28 = (MR_String) "";
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String ModuleDepsVar_26;
        MR_String Var_76;

        Var_76 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".module_deps)");
        ModuleDepsVar_26 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_76);
        {
          MaybeModuleDepsVar_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeModuleDepsVar_27, 0) = ((MR_Box) (ModuleDepsVar_26));
          MR_hl_field(MR_mktag(1), MaybeModuleDepsVar_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        MaybeModuleDepsVarSpace_28 = mercury__string__f_43_43_2_f_0(ModuleDepsVar_26, (MR_String) " ");
      }
      break;
  }
  switch (Intermod_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MaybeOptsVar_30 = (MR_Word) ((MR_Unsigned) 0U);
        MaybeOptsVarSpace_31 = (MR_String) "";
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String OptsVar_29;
        MR_String Var_81;

        Var_81 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".opts)");
        OptsVar_29 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_81);
        {
          MaybeOptsVar_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeOptsVar_30, 0) = ((MR_Box) (OptsVar_29));
          MR_hl_field(MR_mktag(1), MaybeOptsVar_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        MaybeOptsVarSpace_31 = mercury__string__f_43_43_2_f_0(OptsVar_29, (MR_String) " ");
      }
      break;
  }
  switch (TransOpt_25) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MaybeTransOptsVar_33 = (MR_Word) ((MR_Unsigned) 0U);
        MaybeTransOptsVarSpace_34 = (MR_String) "";
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String TransOptsVar_32;
        MR_String Var_86;

        Var_86 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".trans_opts)");
        TransOptsVar_32 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_86);
        {
          MaybeTransOptsVar_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeTransOptsVar_33, 0) = ((MR_Box) (TransOptsVar_32));
          MR_hl_field(MR_mktag(1), MaybeTransOptsVar_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        MaybeTransOptsVarSpace_34 = mercury__string__f_43_43_2_f_0(TransOptsVar_32, (MR_String) " ");
      }
      break;
  }
  {
    MaybeModuleDepsVarPair_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), MaybeModuleDepsVarPair_35, 0) = ((MR_Box) (MaybeModuleDepsVar_27));
    MR_hl_field(MR_mktag(0), MaybeModuleDepsVarPair_35, 1) = ((MR_Box) (MaybeModuleDepsVarSpace_28));
  }
  {
    MaybeOptsVarPair_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), MaybeOptsVarPair_36, 0) = ((MR_Box) (MaybeOptsVar_30));
    MR_hl_field(MR_mktag(0), MaybeOptsVarPair_36, 1) = ((MR_Box) (MaybeOptsVarSpace_31));
  }
  {
    MaybeTransOptsVarPair_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), MaybeTransOptsVarPair_37, 0) = ((MR_Box) (MaybeTransOptsVar_33));
    MR_hl_field(MR_mktag(0), MaybeTransOptsVarPair_37, 1) = ((MR_Box) (MaybeTransOptsVarSpace_34));
  }
  libs__mmakefiles__start_mmakefile_1_p_0(&STATE_VARIABLE_MmakeFile_90_90);
  libs__mmakefiles__add_mmake_entry_3_p_0(MmakeStartComment_17, STATE_VARIABLE_MmakeFile_90_90, &STATE_VARIABLE_MmakeFile_91_91);
  parse_tree__write_deps_file__generate_dep_file_exec_library_targets_15_p_0(Globals_8, ModuleName_10, ModuleMakeVarName_18, InitFileName_19, InitObjFileName_21, MaybeOptsVar_30, MaybeTransOptsVar_33, &ExeFileName_38, &JarFileName_39, &LibFileName_40, &SharedLibFileName_41, STATE_VARIABLE_MmakeFile_91_91, &STATE_VARIABLE_MmakeFile_92_92);
  parse_tree__write_deps_file__generate_dep_file_init_targets_11_p_0(Globals_8, ModuleName_10, ModuleMakeVarName_18, InitCFileName_20, InitFileName_19, &DepFileName_42, &DvFileName_43, STATE_VARIABLE_MmakeFile_92_92, &STATE_VARIABLE_MmakeFile_94_94);
  parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0(Globals_8, ModuleName_10, DepsMap_11, ModuleMakeVarName_18, MmcMakeDeps_23, Intermod_24, TransOpt_25, MaybeModuleDepsVarPair_35, MaybeOptsVarPair_36, MaybeTransOptsVarPair_37, STATE_VARIABLE_MmakeFile_94_94, &STATE_VARIABLE_MmakeFile_96_96);
  parse_tree__write_deps_file__generate_dep_file_collective_targets_7_p_0(Globals_8, ModuleName_10, ModuleMakeVarName_18, STATE_VARIABLE_MmakeFile_96_96, &STATE_VARIABLE_MmakeFile_98_98);
  parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0(Globals_8, ModuleName_10, ModuleMakeVarName_18, ExeFileName_38, InitCFileName_20, InitObjFileName_21, InitPicObjFileName_22, InitFileName_19, LibFileName_40, SharedLibFileName_41, JarFileName_39, DepFileName_42, DvFileName_43, STATE_VARIABLE_MmakeFile_98_98, STATE_VARIABLE_MmakeFile_44);
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = parse_tree__write_deps_file__remove_suffix_files_cmd_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
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
  MR_String CleanTargetName_33;
  MR_String RealCleanTargetName_34;
  MR_Word CleanFiles_36;
  MR_Word MmakeRulesClean_37;
  MR_Word RealCleanFiles_39;
  MR_Word MmakeRulesRealClean_40;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_86;
  MR_Word Var_90;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_String Var_102;
  MR_String Var_145;
  MR_Word Var_147;
  MR_Word Var_148;
  MR_Word Var_149;
  MR_Word Var_150;
  MR_Word Var_151;
  MR_Word Var_152;
  MR_Word Var_154;
  MR_Word Var_158;
  MR_Word Var_161;
  MR_Word Var_162;
  MR_Word Var_167;
  MR_Word Var_168;
  MR_Word Var_170;
  MR_String Var_171;
  MR_Word Var_174;

  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_18, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_clean_targets\'/17", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[42])), ModuleName_19, &CleanTargetName_33);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_18, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_clean_targets\'/17", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[43])), ModuleName_19, &RealCleanTargetName_34);
  {
    Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (InitPicObjFileName_24));
    MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (InitObjFileName_23));
    MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_84));
  }
  {
    CleanFiles_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), CleanFiles_36, 0) = ((MR_Box) (InitCFileName_22));
    MR_hl_field(MR_mktag(1), CleanFiles_36, 1) = ((MR_Box) (Var_83));
  }
  {
    Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (CleanTargetName_33));
    MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) ((MR_String) "clean_local"));
    MR_hl_field(MR_mktag(3), Var_86, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), Var_86, 3) = ((MR_Box) ((MR_String) "clean_local"));
    MR_hl_field(MR_mktag(3), Var_86, 4) = ((MR_Box) (Var_90));
    MR_hl_field(MR_mktag(3), Var_86, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_100 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_100, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[9]));
    MR_hl_field(MR_mktag(0), Var_100, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0_1));
    MR_hl_field(MR_mktag(0), Var_100, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_100, 3) = ((MR_Box) (ModuleMakeVarName_20));
  }
  Var_99 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_100, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[93])));
  Var_102 = parse_tree__write_deps_file__remove_files_cmd_1_f_0(CleanFiles_36);
  {
    Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (Var_102));
    MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_99, Var_101);
  {
    Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) ((MR_String) "clean_target"));
    MR_hl_field(MR_mktag(3), Var_94, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(3), Var_94, 3) = ((MR_Box) (CleanTargetName_33));
    MR_hl_field(MR_mktag(3), Var_94, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), Var_94, 5) = ((MR_Box) (Var_98));
  }
  {
    Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
    MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRulesClean_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), MmakeRulesClean_37, 0) = ((MR_Box) (Var_86));
    MR_hl_field(MR_mktag(1), MmakeRulesClean_37, 1) = ((MR_Box) (Var_93));
  }
  Var_145 = mercury__string__f_43_43_2_f_0(ExeFileName_21, (MR_String) "\044(EXT_FOR_EXE) ");
  {
    Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_152, 0) = ((MR_Box) (DvFileName_30));
    MR_hl_field(MR_mktag(1), Var_152, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) (DepFileName_29));
    MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (Var_152));
  }
  {
    Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (JarFileName_28));
    MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (Var_151));
  }
  {
    Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) (SharedLibFileName_27));
    MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) (Var_150));
  }
  {
    Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) (LibFileName_26));
    MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (Var_149));
  }
  {
    Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (InitFileName_25));
    MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_148));
  }
  {
    RealCleanFiles_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), RealCleanFiles_39, 0) = ((MR_Box) (Var_145));
    MR_hl_field(MR_mktag(1), RealCleanFiles_39, 1) = ((MR_Box) (Var_147));
  }
  {
    Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_158, 0) = ((MR_Box) (RealCleanTargetName_34));
    MR_hl_field(MR_mktag(1), Var_158, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_154 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_154, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), Var_154, 1) = ((MR_Box) ((MR_String) "realclean_local"));
    MR_hl_field(MR_mktag(3), Var_154, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), Var_154, 3) = ((MR_Box) ((MR_String) "realclean_local"));
    MR_hl_field(MR_mktag(3), Var_154, 4) = ((MR_Box) (Var_158));
    MR_hl_field(MR_mktag(3), Var_154, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_168 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_100, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[113])));
  Var_171 = parse_tree__write_deps_file__remove_files_cmd_1_f_0(RealCleanFiles_39);
  {
    Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_170, 0) = ((MR_Box) (Var_171));
    MR_hl_field(MR_mktag(1), Var_170, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_167 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_168, Var_170);
  {
    Var_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_162, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), Var_162, 1) = ((MR_Box) ((MR_String) "realclean_target"));
    MR_hl_field(MR_mktag(3), Var_162, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(3), Var_162, 3) = ((MR_Box) (RealCleanTargetName_34));
    MR_hl_field(MR_mktag(3), Var_162, 4) = ((MR_Box) (Var_90));
    MR_hl_field(MR_mktag(3), Var_162, 5) = ((MR_Box) (Var_167));
  }
  {
    Var_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_161, 0) = ((MR_Box) (Var_162));
    MR_hl_field(MR_mktag(1), Var_161, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRulesRealClean_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), MmakeRulesRealClean_40, 0) = ((MR_Box) (Var_154));
    MR_hl_field(MR_mktag(1), MmakeRulesRealClean_40, 1) = ((MR_Box) (Var_161));
  }
  Var_174 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), MmakeRulesClean_37, MmakeRulesRealClean_40);
  libs__mmakefiles__add_mmake_entries_3_p_0(Var_174, STATE_VARIABLE_MmakeFile_0_41, STATE_VARIABLE_MmakeFile_42);
}

static MR_String MR_CALL 
parse_tree__write_deps_file__remove_files_cmd_1_f_0(
  MR_Word Files_3)
{
  MR_String HeadVar__2_2;
  MR_String Var_5;

  Var_5 = mercury__string__join_list_2_f_0((MR_String) " ", Files_3);
  HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "-rm -f ", Var_5);
  return HeadVar__2_2;
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MmakeRule_13;

  parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_MmakeRule_13);
  *wrapper_arg_2 = ((MR_Box) (conv0_MmakeRule_13));
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_String ModuleMakeVarName_10,
  MR_Word STATE_VARIABLE_MmakeFile_0_14,
  MR_Word * STATE_VARIABLE_MmakeFile_15)
{
  MR_Word MmakeRules_13;
  MR_Word Var_18;
  MR_Box conv1_STATE_VARIABLE_IO_17;

  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[1]));
    MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_collective_targets_7_p_0_1));
    MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Globals_8));
    MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (ModuleName_9));
    MR_hl_field(MR_mktag(0), Var_18, 5) = ((MR_Box) (ModuleMakeVarName_10));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[2]), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_18, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[80])), &MmakeRules_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_17);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRules_13, STATE_VARIABLE_MmakeFile_0_14, STATE_VARIABLE_MmakeFile_15);
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_1(
  void * env_ptr_arg)
{
  struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s * env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_3(
  void * env_ptr_arg)
{
  struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s * env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_41 = ((MR_Word) ((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv1_Var_41));
  (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_99 = ((MR_Word) ((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv0_Var_99));
  parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_2(env_ptr);
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_2(
  void * env_ptr_arg)
{
  struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s * env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_99, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_99, (MR_Integer) 0)));
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
    MR_Word Var_376;
    MR_Word Var_377;
    MR_Word Var_378;
    MR_Word Var_379;
    MR_Word Var_380;
    MR_Word Var_381;
    MR_Word Var_382;
    MR_Word Var_383;
    MR_Word Var_384;
    MR_Word Var_385;
    MR_Word Var_386;
    MR_Word Var_387;
    MR_Word Var_388;
    MR_Word Var_389;
    MR_Word Var_390;
    MR_Word Var_391;
    MR_Word Var_392;
    MR_Word Var_393;
    MR_Word Var_394;
    MR_Word Var_395;
    MR_Word Var_396;
    MR_Word Var_397;

    (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__BurdenedModule_359 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_99, (MR_Integer) 1))));
    Var_360 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__BurdenedModule_359, (MR_Integer) 0))));
    (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__BurdenedModule_359, (MR_Integer) 1))));
    Var_361 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 0))));
    Var_362 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 1))));
    Var_363 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 2))));
    Var_364 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 3))));
    (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__IncludeMap_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 4))));
    Var_365 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 5))));
    Var_366 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 6))));
    Var_367 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 7))));
    Var_368 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 8))));
    Var_369 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 9))));
    Var_370 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 10))));
    Var_371 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 11))));
    Var_372 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 12))));
    Var_373 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 13))));
    Var_374 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 14))));
    Var_375 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 15))));
    Var_376 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 16))));
    Var_377 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 17))));
    Var_378 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 18))));
    Var_379 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 19))));
    Var_380 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 20))));
    Var_381 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 21))));
    Var_382 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 22))));
    Var_383 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 23))));
    Var_384 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 24))));
    Var_385 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 25))));
    Var_386 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 26))));
    Var_387 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 27))));
    Var_388 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 28))));
    Var_389 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 29))));
    Var_390 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 30))));
    Var_391 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 31))));
    Var_392 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 32))));
    Var_393 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 33))));
    Var_394 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 34))));
    Var_395 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 35))));
    Var_396 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 36))));
    Var_397 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 37))));
    (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = mercury__map__is_empty_1_p_0((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_398_398, (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__IncludeMap_44);
    (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = !((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded);
    if ((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded)
      parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_1(env_ptr);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_4(
  void * env_ptr_arg)
{
  struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s * env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__commit_0) == 0)
    {
      {
        (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_398_398 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
        mercury__map__member_3_p_0((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_398_398, (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__DepsMap_17, &(env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv1_Var_41, &(env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv0_Var_99, parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_3, env_ptr);
      }
      (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = MR_TRUE;
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
  MR_Word STATE_VARIABLE_MmakeFile_0_65,
  MR_Word * STATE_VARIABLE_MmakeFile_66)
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
    MR_String SpaceInt0Str_45;
    MR_String MaybeModuleVarNameInt0sSpace_47;
    MR_Word MaybeModuleVarNameInt0s_48;
    MR_String MaybeSpaceTransOptStr_49;
    MR_String MaybeSpaceDepStr_50;
    MR_String LibInstallIntsFiles_51;
    MR_Word MmakeRuleLibInstallInts_52;
    MR_Word LibInstallOptsSources_53;
    MR_Word LibInstallOptsActions_54;
    MR_Word MmakeRuleLibInstallOpts_56;
    MR_String ModuleMakeVarNameMhs_57;
    MR_Word MmakeRuleLibInstallHdrsNoMhs_58;
    MR_Word MmakeRuleLibInstallHdrsMhs_59;
    MR_Word MmakeFragmentLibInstallHdrs_60;
    MR_String ModuleMakeVarNameMihs_61;
    MR_Word MmakeRuleLibInstallGradeHdrsNoMihs_62;
    MR_Word MmakeRuleLibInstallGradeHdrsMihs_63;
    MR_Word MmakeFragmentLibInstallGradeHdrs_64;
    MR_String Var_94;
    MR_String Var_97;
    MR_String Var_106;
    MR_String Var_107;
    MR_String Var_109;
    MR_String Var_110;
    MR_String Var_112;
    MR_String Var_113;
    MR_String Var_114;
    MR_String Var_115;
    MR_Word Var_119;
    MR_Word Var_120;
    MR_Word Var_121;
    MR_Word Var_123;
    MR_Word Var_124;
    MR_Word Var_125;
    MR_Word Var_126;
    MR_Word Var_130;
    MR_String Var_131;
    MR_String Var_133;
    MR_Word Var_135;
    MR_Word Var_137;
    MR_Word Var_139;
    MR_Word Var_141;
    MR_Word Var_143;
    MR_Word Var_145;
    MR_Word Var_147;
    MR_Word Var_149;
    MR_Word Var_151;
    MR_Word Var_153;
    MR_Word Var_155;
    MR_Word Var_157;
    MR_Word Var_159;
    MR_String Var_160;
    MR_String Var_162;
    MR_String Var_163;
    MR_String Var_164;
    MR_String Var_165;
    MR_Word Var_255;
    MR_Word Var_259;
    MR_String Var_260;
    MR_Word Var_268;
    MR_String Var_269;
    MR_String Var_271;
    MR_Word Var_280;
    MR_Word Var_288;
    MR_Word Var_292;
    MR_String Var_293;
    MR_Word Var_301;
    MR_String Var_302;
    MR_String Var_304;
    MR_Word Var_353;
    MR_Word STATE_VARIABLE_MmakeFile_355_355;
    MR_Word STATE_VARIABLE_MmakeFile_356_356;
    MR_Word STATE_VARIABLE_MmakeFile_357_357;
    MR_String Var_403;
    MR_String Var_406;

    parse_tree__file_names__module_name_to_lib_file_name_9_p_0(Globals_15, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_install_targets\'/14", (MR_Integer) 1, (MR_String) "lib", (MR_Word) (((MR_Box) ((MR_String) ".install_ints"))), ModuleName_16, &LibInstallIntsTargetName_33);
    parse_tree__file_names__module_name_to_lib_file_name_9_p_0(Globals_15, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_install_targets\'/14", (MR_Integer) 1, (MR_String) "lib", (MR_Word) (((MR_Box) ((MR_String) ".install_opts"))), ModuleName_16, &LibInstallOptsTargetName_34);
    parse_tree__file_names__module_name_to_lib_file_name_9_p_0(Globals_15, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_install_targets\'/14", (MR_Integer) 1, (MR_String) "lib", (MR_Word) (((MR_Box) ((MR_String) ".install_hdrs"))), ModuleName_16, &LibInstallHdrsTargetName_35);
    parse_tree__file_names__module_name_to_lib_file_name_9_p_0(Globals_15, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_install_targets\'/14", (MR_Integer) 1, (MR_String) "lib", (MR_Word) (((MR_Box) ((MR_String) ".install_grade_hdrs"))), ModuleName_16, &LibInstallGradeHdrsTargetName_36);
    Var_94 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".ints)");
    ModuleMakeVarNameInts_37 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_94);
    Var_97 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".int3s)");
    ModuleMakeVarNameInt3s_38 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_97);
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
      MR_String ModuleVarNameInt0s_46;
      MR_String Var_101;

      SpaceInt0Str_45 = (MR_String) " int0";
      Var_101 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".int0s)");
      ModuleVarNameInt0s_46 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_101);
      MaybeModuleVarNameInt0sSpace_47 = mercury__string__f_43_43_2_f_0(ModuleVarNameInt0s_46, (MR_String) " ");
      {
        MaybeModuleVarNameInt0s_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeModuleVarNameInt0s_48, 0) = ((MR_Box) (ModuleVarNameInt0s_46));
        MR_hl_field(MR_mktag(1), MaybeModuleVarNameInt0s_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      SpaceInt0Str_45 = (MR_String) "";
      MaybeModuleVarNameInt0sSpace_47 = (MR_String) "";
      MaybeModuleVarNameInt0s_48 = (MR_Word) ((MR_Unsigned) 0U);
    }
    switch (TransOpt_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeSpaceTransOptStr_49 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        MaybeSpaceTransOptStr_49 = (MR_String) " trans_opt";
        break;
    }
    switch (MmcMakeDeps_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeSpaceDepStr_50 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        MaybeSpaceDepStr_50 = (MR_String) " module_dep";
        break;
    }
    Var_115 = mercury__string__f_43_43_2_f_0(MaybeModuleDepsVarSpace_32, (MR_String) "\"");
    Var_114 = mercury__string__f_43_43_2_f_0(MaybeTransOptsVarSpace_30, Var_115);
    Var_113 = mercury__string__f_43_43_2_f_0(MaybeOptsVarSpace_28, Var_114);
    Var_112 = mercury__string__f_43_43_2_f_0(MaybeModuleVarNameInt0sSpace_47, Var_113);
    Var_110 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_112);
    Var_109 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInt3s_38, Var_110);
    Var_107 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_109);
    Var_106 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInts_37, Var_107);
    LibInstallIntsFiles_51 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_106);
    {
      Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_121, 0) = ((MR_Box) (ModuleMakeVarNameInt3s_38));
      MR_hl_field(MR_mktag(1), Var_121, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_120, 0) = ((MR_Box) (ModuleMakeVarNameInts_37));
      MR_hl_field(MR_mktag(1), Var_120, 1) = ((MR_Box) (Var_121));
    }
    Var_126 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeModuleDepsVar_31, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[17])));
    Var_125 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTransOptsVar_29, Var_126);
    Var_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeOptsVar_27, Var_125);
    Var_123 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeModuleVarNameInt0s_48, Var_124);
    Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_120, Var_123);
    Var_133 = mercury__string__f_43_43_2_f_0(LibInstallIntsFiles_51, (MR_String) "; \\");
    Var_131 = mercury__string__f_43_43_2_f_0((MR_String) "files=", Var_133);
    Var_165 = mercury__string__f_43_43_2_f_0(MaybeSpaceDepStr_50, (MR_String) "; do \\");
    Var_164 = mercury__string__f_43_43_2_f_0(MaybeSpaceTransOptStr_49, Var_165);
    Var_163 = mercury__string__f_43_43_2_f_0(MaybeSpaceOptStr_39, Var_164);
    Var_162 = mercury__string__f_43_43_2_f_0(SpaceInt0Str_45, Var_163);
    Var_160 = mercury__string__f_43_43_2_f_0((MR_String) "for ext in int int2 int3", Var_162);
    {
      Var_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_159, 0) = ((MR_Box) (Var_160));
      MR_hl_field(MR_mktag(1), Var_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[25])));
    }
    {
      Var_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_157, 0) = ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'."));
      MR_hl_field(MR_mktag(1), Var_157, 1) = ((MR_Box) (Var_159));
    }
    {
      Var_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_155, 0) = ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use"));
      MR_hl_field(MR_mktag(1), Var_155, 1) = ((MR_Box) (Var_157));
    }
    {
      Var_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_153, 0) = ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option."));
      MR_hl_field(MR_mktag(1), Var_153, 1) = ((MR_Box) (Var_155));
    }
    {
      Var_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_151, 0) = ((MR_Box) ((MR_String) "done"));
      MR_hl_field(MR_mktag(1), Var_151, 1) = ((MR_Box) (Var_153));
    }
    {
      Var_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_149, 0) = ((MR_Box) ((MR_String) "\tfi; \\"));
      MR_hl_field(MR_mktag(1), Var_149, 1) = ((MR_Box) (Var_151));
    }
    {
      Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\"));
      MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_149));
    }
    {
      Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) ((MR_String) "\t\techo \"installing \044\044target\"; \\"));
      MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (Var_147));
    }
    {
      Var_143 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_143, 0) = ((MR_Box) ((MR_String) "\telse \\"));
      MR_hl_field(MR_mktag(1), Var_143, 1) = ((MR_Box) (Var_145));
    }
    {
      Var_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_141, 0) = ((MR_Box) ((MR_String) "\t\techo \"\044\044target unchanged\"; \\"));
      MR_hl_field(MR_mktag(1), Var_141, 1) = ((MR_Box) (Var_143));
    }
    {
      Var_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_139, 0) = ((MR_Box) ((MR_String) "\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\"));
      MR_hl_field(MR_mktag(1), Var_139, 1) = ((MR_Box) (Var_141));
    }
    {
      Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) ((MR_String) "\ttarget=\"\044(INSTALL_INT_DIR)/\140basename \044\044file\140\"; \\"));
      MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) (Var_139));
    }
    {
      Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_135, 0) = ((MR_Box) ((MR_String) "for file in \044\044files; do \\"));
      MR_hl_field(MR_mktag(1), Var_135, 1) = ((MR_Box) (Var_137));
    }
    {
      Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_130, 0) = ((MR_Box) (Var_131));
      MR_hl_field(MR_mktag(1), Var_130, 1) = ((MR_Box) (Var_135));
    }
    {
      MmakeRuleLibInstallInts_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_52, 1) = ((MR_Box) ((MR_String) "lib_install_ints"));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_52, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_52, 3) = ((MR_Box) (LibInstallIntsTargetName_33));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_52, 4) = ((MR_Box) (Var_119));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallInts_52, 5) = ((MR_Box) (Var_130));
    }
    (env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = (Intermod_20 == (MR_Integer) 0);
    if ((env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded)
      (env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = (TransOpt_21 == (MR_Integer) 0);
    if ((env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded)
    {
      MR_String Var_184;

      LibInstallOptsSources_53 = (MR_Word) ((MR_Unsigned) 0U);
      Var_184 = libs__mmakefiles__silent_noop_action_0_f_0();
      {
        LibInstallOptsActions_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), LibInstallOptsActions_54, 0) = ((MR_Box) (Var_184));
        MR_hl_field(MR_mktag(1), LibInstallOptsActions_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_String LibInstallOptsFiles_55;
      MR_Word Var_186;
      MR_String Var_191;
      MR_String Var_192;
      MR_String Var_194;
      MR_String Var_196;
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
      MR_Word Var_220;
      MR_Word Var_222;
      MR_String Var_223;
      MR_String Var_225;
      MR_String Var_226;

      Var_186 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTransOptsVar_29, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[26])));
      LibInstallOptsSources_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeOptsVar_27, Var_186);
      Var_192 = mercury__string__f_43_43_2_f_0(MaybeTransOptsVarSpace_30, (MR_String) "\"");
      Var_191 = mercury__string__f_43_43_2_f_0(MaybeOptsVarSpace_28, Var_192);
      LibInstallOptsFiles_55 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_191);
      Var_196 = mercury__string__f_43_43_2_f_0(LibInstallOptsFiles_55, (MR_String) "; \\");
      Var_194 = mercury__string__f_43_43_2_f_0((MR_String) "files=", Var_196);
      Var_226 = mercury__string__f_43_43_2_f_0(MaybeSpaceTransOptStr_49, (MR_String) "; do \\");
      Var_225 = mercury__string__f_43_43_2_f_0(MaybeSpaceOptStr_39, Var_226);
      Var_223 = mercury__string__f_43_43_2_f_0((MR_String) "for ext in ", Var_225);
      {
        Var_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_222, 0) = ((MR_Box) (Var_223));
        MR_hl_field(MR_mktag(1), Var_222, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[33])));
      }
      {
        Var_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_220, 0) = ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'."));
        MR_hl_field(MR_mktag(1), Var_220, 1) = ((MR_Box) (Var_222));
      }
      {
        Var_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_218, 0) = ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use"));
        MR_hl_field(MR_mktag(1), Var_218, 1) = ((MR_Box) (Var_220));
      }
      {
        Var_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_216, 0) = ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option"));
        MR_hl_field(MR_mktag(1), Var_216, 1) = ((MR_Box) (Var_218));
      }
      {
        Var_214 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_214, 0) = ((MR_Box) ((MR_String) "done"));
        MR_hl_field(MR_mktag(1), Var_214, 1) = ((MR_Box) (Var_216));
      }
      {
        Var_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_212, 0) = ((MR_Box) ((MR_String) "\tfi; \\"));
        MR_hl_field(MR_mktag(1), Var_212, 1) = ((MR_Box) (Var_214));
      }
      {
        Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_210, 0) = ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\"));
        MR_hl_field(MR_mktag(1), Var_210, 1) = ((MR_Box) (Var_212));
      }
      {
        Var_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_208, 0) = ((MR_Box) ((MR_String) "\t\techo \"installing \044\044target\"; \\"));
        MR_hl_field(MR_mktag(1), Var_208, 1) = ((MR_Box) (Var_210));
      }
      {
        Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) ((MR_String) "\telse \\"));
        MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) (Var_208));
      }
      {
        Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_204, 0) = ((MR_Box) ((MR_String) "\t\techo \"\044\044target unchanged\"; \\"));
        MR_hl_field(MR_mktag(1), Var_204, 1) = ((MR_Box) (Var_206));
      }
      {
        Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_202, 0) = ((MR_Box) ((MR_String) "\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\"));
        MR_hl_field(MR_mktag(1), Var_202, 1) = ((MR_Box) (Var_204));
      }
      {
        Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_200, 0) = ((MR_Box) ((MR_String) "\ttarget=\"\044(INSTALL_GRADE_INT_DIR)/\140basename \044\044file\140\";\\"));
        MR_hl_field(MR_mktag(1), Var_200, 1) = ((MR_Box) (Var_202));
      }
      {
        Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) ((MR_String) "for file in \044\044files; do \\"));
        MR_hl_field(MR_mktag(1), Var_198, 1) = ((MR_Box) (Var_200));
      }
      {
        LibInstallOptsActions_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), LibInstallOptsActions_54, 0) = ((MR_Box) (Var_194));
        MR_hl_field(MR_mktag(1), LibInstallOptsActions_54, 1) = ((MR_Box) (Var_198));
      }
    }
    {
      MmakeRuleLibInstallOpts_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallOpts_56, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallOpts_56, 1) = ((MR_Box) ((MR_String) "lib_install_opts"));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallOpts_56, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallOpts_56, 3) = ((MR_Box) (LibInstallOptsTargetName_34));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallOpts_56, 4) = ((MR_Box) (LibInstallOptsSources_53));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallOpts_56, 5) = ((MR_Box) (LibInstallOptsActions_54));
    }
    Var_403 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".mhs)");
    ModuleMakeVarNameMhs_57 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_403);
    {
      Var_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_255, 0) = ((MR_Box) (ModuleMakeVarNameMhs_57));
      MR_hl_field(MR_mktag(1), Var_255, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[17])));
    }
    Var_260 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_259 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_259, 0) = ((MR_Box) (Var_260));
      MR_hl_field(MR_mktag(1), Var_259, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRuleLibInstallHdrsNoMhs_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_58, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_58, 1) = ((MR_Box) ((MR_String) "install_lib_hdrs_nomhs"));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_58, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_58, 3) = ((MR_Box) (LibInstallHdrsTargetName_35));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_58, 4) = ((MR_Box) (Var_255));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsNoMhs_58, 5) = ((MR_Box) (Var_259));
    }
    Var_271 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameMhs_57, (MR_String) "; do \\");
    Var_269 = mercury__string__f_43_43_2_f_0((MR_String) "for hdr in ", Var_271);
    {
      Var_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_268, 0) = ((MR_Box) (Var_269));
      MR_hl_field(MR_mktag(1), Var_268, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[35])));
    }
    {
      MmakeRuleLibInstallHdrsMhs_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_59, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_59, 1) = ((MR_Box) ((MR_String) "install_lib_hdrs_mhs"));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_59, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_59, 3) = ((MR_Box) (LibInstallHdrsTargetName_35));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_59, 4) = ((MR_Box) (Var_255));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallHdrsMhs_59, 5) = ((MR_Box) (Var_268));
    }
    {
      Var_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_280, 0) = ((MR_Box) (ModuleMakeVarNameMhs_57));
      MR_hl_field(MR_mktag(1), Var_280, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      MmakeFragmentLibInstallHdrs_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallHdrs_60, 0) = ((MR_Box) (Var_280));
      MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallHdrs_60, 1) = ((MR_Box) (MmakeRuleLibInstallHdrsNoMhs_58));
      MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallHdrs_60, 2) = ((MR_Box) (MmakeRuleLibInstallHdrsMhs_59));
    }
    Var_406 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".mihs)");
    ModuleMakeVarNameMihs_61 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_406);
    {
      Var_288 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_288, 0) = ((MR_Box) (ModuleMakeVarNameMihs_61));
      MR_hl_field(MR_mktag(1), Var_288, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[26])));
    }
    Var_293 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_292 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_292, 0) = ((MR_Box) (Var_293));
      MR_hl_field(MR_mktag(1), Var_292, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRuleLibInstallGradeHdrsNoMihs_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_62, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_62, 1) = ((MR_Box) ((MR_String) "install_grade_hdrs_no_mihs"));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_62, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_62, 3) = ((MR_Box) (LibInstallGradeHdrsTargetName_36));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_62, 4) = ((MR_Box) (Var_288));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsNoMihs_62, 5) = ((MR_Box) (Var_292));
    }
    Var_304 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameMihs_61, (MR_String) "; do \\");
    Var_302 = mercury__string__f_43_43_2_f_0((MR_String) "for hdr in ", Var_304);
    {
      Var_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_301, 0) = ((MR_Box) (Var_302));
      MR_hl_field(MR_mktag(1), Var_301, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[58])));
    }
    {
      MmakeRuleLibInstallGradeHdrsMihs_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_63, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_63, 1) = ((MR_Box) ((MR_String) "install_grade_hdrs_mihs"));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_63, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_63, 3) = ((MR_Box) (LibInstallGradeHdrsTargetName_36));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_63, 4) = ((MR_Box) (Var_288));
      MR_hl_field(MR_mktag(3), MmakeRuleLibInstallGradeHdrsMihs_63, 5) = ((MR_Box) (Var_301));
    }
    {
      Var_353 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_353, 0) = ((MR_Box) (ModuleMakeVarNameMihs_61));
      MR_hl_field(MR_mktag(1), Var_353, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      MmakeFragmentLibInstallGradeHdrs_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallGradeHdrs_64, 0) = ((MR_Box) (Var_353));
      MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallGradeHdrs_64, 1) = ((MR_Box) (MmakeRuleLibInstallGradeHdrsNoMihs_62));
      MR_hl_field(MR_mktag(1), MmakeFragmentLibInstallGradeHdrs_64, 2) = ((MR_Box) (MmakeRuleLibInstallGradeHdrsMihs_63));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleLibInstallInts_52, STATE_VARIABLE_MmakeFile_0_65, &STATE_VARIABLE_MmakeFile_355_355);
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleLibInstallOpts_56, STATE_VARIABLE_MmakeFile_355_355, &STATE_VARIABLE_MmakeFile_356_356);
    libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibInstallHdrs_60, STATE_VARIABLE_MmakeFile_356_356, &STATE_VARIABLE_MmakeFile_357_357);
    libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibInstallGradeHdrs_64, STATE_VARIABLE_MmakeFile_357_357, STATE_VARIABLE_MmakeFile_66);
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
  MR_String Var_51;
  MR_String Var_55;
  MR_String Var_56;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_String Var_69;
  MR_String Var_77;
  MR_String Var_80;
  MR_String Var_82;
  MR_String Var_83;
  MR_String Var_85;
  MR_Word Var_90;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_96;
  MR_Word Var_98;
  MR_Word Var_99;

  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_init_targets\'/11", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[2])), ModuleName_13, DepFileName_17);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_init_targets\'/11", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[1])), ModuleName_13, DvFileName_18);
  Var_51 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_14, (MR_String) ".cs)");
  ModuleMakeVarNameCs_21 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_51);
  InitAction1_22 = mercury__string__f_43_43_2_f_0((MR_String) "echo > ", InitFileName_16);
  Var_56 = mercury__string__f_43_43_2_f_0((MR_String) " >> ", InitFileName_16);
  Var_55 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameCs_21, Var_56);
  InitAction2_23 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MKLIBINIT) ", Var_55);
  InitAction3_24 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXTRA_INIT_COMMAND) >> ", InitFileName_16);
  {
    Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (ModuleMakeVarNameCs_21));
    MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (*DepFileName_17));
    MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_62));
  }
  {
    Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (InitAction3_24));
    MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (InitAction2_23));
    MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_66));
  }
  {
    Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (InitAction1_22));
    MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_65));
  }
  {
    MmakeRuleInitFile_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 1) = ((MR_Box) ((MR_String) "init_file"));
    MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 3) = ((MR_Box) (InitFileName_16));
    MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 4) = ((MR_Box) (Var_61));
    MR_hl_field(MR_mktag(3), MmakeRuleInitFile_25, 5) = ((MR_Box) (Var_64));
  }
  ModuleFileName_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_13);
  Var_69 = mercury__string__f_43_43_2_f_0(ModuleFileName_26, (MR_String) "_init");
  ForceC2InitTarget_27 = mercury__string__f_43_43_2_f_0((MR_String) "force-", Var_69);
  {
    MmakeRuleForceInitCFile_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 1) = ((MR_Box) ((MR_String) "force_init_c_file"));
    MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 3) = ((MR_Box) (ForceC2InitTarget_27));
    MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), MmakeRuleForceInitCFile_28, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  TmpInitCFileName_29 = mercury__string__f_43_43_2_f_0(InitCFileName_15, (MR_String) ".tmp");
  Var_77 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_14, (MR_String) ".init_cs)");
  ModuleMakeVarNameInitCs_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_77);
  Var_85 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInitCs_30, (MR_String) " \044(ALL_C2INITARGS)");
  Var_83 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_85);
  Var_82 = mercury__string__f_43_43_2_f_0(TmpInitCFileName_29, Var_83);
  Var_80 = mercury__string__f_43_43_2_f_0((MR_String) "--init-c-file ", Var_82);
  InitCAction1_31 = mercury__string__f_43_43_2_f_0((MR_String) "\100\044(C2INIT) \044(ALL_GRADEFLAGS) \044(ALL_C2INITFLAGS) ", Var_80);
  InitCAction2_32 = mercury__string__f_43_43_2_f_0((MR_String) "\100mercury_update_interface ", InitCFileName_15);
  {
    Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (ForceC2InitTarget_27));
    MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (Var_62));
  }
  {
    Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (InitCAction2_32));
    MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (InitCAction1_31));
    MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_94));
  }
  {
    MmakeRuleInitCFile_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeRuleInitCFile_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), MmakeRuleInitCFile_33, 1) = ((MR_Box) ((MR_String) "init_c_file"));
    MR_hl_field(MR_mktag(3), MmakeRuleInitCFile_33, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), MmakeRuleInitCFile_33, 3) = ((MR_Box) (InitCFileName_15));
    MR_hl_field(MR_mktag(3), MmakeRuleInitCFile_33, 4) = ((MR_Box) (Var_90));
    MR_hl_field(MR_mktag(3), MmakeRuleInitCFile_33, 5) = ((MR_Box) (Var_93));
  }
  {
    Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) (MmakeRuleInitCFile_33));
    MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (MmakeRuleForceInitCFile_28));
    MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_99));
  }
  {
    Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) (MmakeRuleInitFile_25));
    MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_98));
  }
  libs__mmakefiles__add_mmake_entries_3_p_0(Var_96, STATE_VARIABLE_MmakeFile_0_34, STATE_VARIABLE_MmakeFile_35);
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
  MR_Word Var_78;
  MR_String Var_79;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_String Var_91;
  MR_String Var_94;
  MR_String Var_97;
  MR_String Var_99;
  MR_String Var_103;
  MR_String Var_106;
  MR_String Var_109;
  MR_String Var_111;
  MR_String Var_112;
  MR_String Var_114;
  MR_String Var_117;
  MR_String Var_118;
  MR_String Var_120;
  MR_Word Var_124;
  MR_String Var_129;
  MR_Word Var_131;
  MR_Word Var_132;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Word Var_136;
  MR_Word Var_137;
  MR_String Var_173;
  MR_String Var_176;
  MR_Word Var_178;
  MR_Word Var_179;
  MR_Word Var_181;
  MR_Word Var_182;
  MR_Word Var_183;
  MR_Word Var_187;
  MR_Word Var_191;
  MR_Word Var_192;
  MR_String Var_197;
  MR_String Var_200;
  MR_String Var_202;
  MR_String Var_203;
  MR_String Var_205;
  MR_String Var_207;
  MR_String Var_210;
  MR_String Var_213;
  MR_Word Var_217;
  MR_Word Var_218;
  MR_Word Var_221;
  MR_Word Var_222;
  MR_Word Var_223;
  MR_Word Var_228;
  MR_Word Var_229;
  MR_String Var_234;
  MR_String Var_235;
  MR_String Var_237;
  MR_Word Var_243;
  MR_Word Var_244;
  MR_Word Var_246;
  MR_Word Var_247;
  MR_Word Var_248;
  MR_Word Var_249;
  MR_String Var_252;
  MR_String Var_253;
  MR_Word Var_259;
  MR_Word STATE_VARIABLE_MmakeFile_261_261;
  MR_Word STATE_VARIABLE_MmakeFile_262_262;
  MR_Word STATE_VARIABLE_MmakeFile_263_263;
  MR_Word STATE_VARIABLE_MmakeFile_264_264;
  MR_Word Var_265;
  MR_Word Var_267;

  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_16, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_exec_library_targets\'/15", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[25])), ModuleName_17, ExeFileName_23);
  Var_79 = mercury__string__f_43_43_2_f_0(*ExeFileName_23, (MR_String) "\044(EXT_FOR_EXE)");
  {
    Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Var_79));
    MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRuleExtForExe_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 1) = ((MR_Box) ((MR_String) "ext_for_exe"));
    MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 3) = ((MR_Box) (*ExeFileName_23));
    MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 4) = ((MR_Box) (Var_78));
    MR_hl_field(MR_mktag(3), MmakeRuleExtForExe_29, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_87 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_87, 0) = ((MR_Box) (MmakeRuleExtForExe_29));
  }
  {
    Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_86, 0) = ((MR_Box) (Var_87));
    MR_hl_field(MR_mktag(1), Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeFragmentExtForExe_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeFragmentExtForExe_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__write_deps_file_scalar_common_1[15])));
    MR_hl_field(MR_mktag(2), MmakeFragmentExtForExe_30, 1) = ((MR_Box) (Var_86));
    MR_hl_field(MR_mktag(2), MmakeFragmentExtForExe_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_91 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ",\044(ALL_MLLIBS_DEP))");
  All_MLLibsDep_31 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", Var_91);
  Var_94 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ",\044(ALL_MLOBJS))");
  All_MLObjs_32 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", Var_94);
  Var_99 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ",\044(ALL_MLOBJS)))");
  Var_97 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", Var_99);
  All_MLPicObjs_33 = mercury__string__f_43_43_2_f_0((MR_String) "\044(patsubst %.o,%.\044(EXT_FOR_PIC_OBJECTS),", Var_97);
  NL_All_MLObjs_34 = mercury__string__f_43_43_2_f_0((MR_String) "\\\n\t\t", All_MLObjs_32);
  Var_103 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".classes)");
  ModuleMakeVarNameClasses_35 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_103);
  Var_106 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".os)");
  ModuleMakeVarNameOs_36 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_106);
  Var_114 = mercury__string__f_43_43_2_f_0(InitObjFileName_20, (MR_String) " \\");
  Var_112 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXT_FOR_EXE) ", Var_114);
  Var_111 = mercury__string__f_43_43_2_f_0(*ExeFileName_23, Var_112);
  Var_109 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXEFILE_OPT)", Var_111);
  NonJavaMainRuleAction1Line1_37 = mercury__string__f_43_43_2_f_0((MR_String) "\044(ML) \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) -- \044(ALL_LDFLAGS) ", Var_109);
  Var_120 = mercury__string__f_43_43_2_f_0(NL_All_MLObjs_34, (MR_String) " \044(ALL_MLLIBS)");
  Var_118 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_120);
  Var_117 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameOs_36, Var_118);
  NonJavaMainRuleAction1Line2_38 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_117);
  {
    Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_124, 0) = ((MR_Box) (ModuleMakeVarNameClasses_35));
    MR_hl_field(MR_mktag(1), Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRuleExecutableJava_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 1) = ((MR_Box) ((MR_String) "executable_java"));
    MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 3) = ((MR_Box) (*ExeFileName_23));
    MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 4) = ((MR_Box) (Var_124));
    MR_hl_field(MR_mktag(3), MmakeRuleExecutableJava_39, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_129 = mercury__string__f_43_43_2_f_0(*ExeFileName_23, (MR_String) "\044(EXT_FOR_EXE)");
  {
    Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (All_MLLibsDep_31));
    MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (All_MLObjs_32));
    MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (Var_134));
  }
  {
    Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) (InitObjFileName_20));
    MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_133));
  }
  {
    Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (ModuleMakeVarNameOs_36));
    MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_132));
  }
  {
    Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_137, 0) = ((MR_Box) (NonJavaMainRuleAction1Line2_38));
    MR_hl_field(MR_mktag(1), Var_137, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_136, 0) = ((MR_Box) (NonJavaMainRuleAction1Line1_37));
    MR_hl_field(MR_mktag(1), Var_136, 1) = ((MR_Box) (Var_137));
  }
  {
    MmakeRuleExecutableNonJava_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 1) = ((MR_Box) ((MR_String) "executable_non_java"));
    MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 3) = ((MR_Box) (Var_129));
    MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 4) = ((MR_Box) (Var_131));
    MR_hl_field(MR_mktag(3), MmakeRuleExecutableNonJava_40, 5) = ((MR_Box) (Var_136));
  }
  {
    MmakeFragmentExecutable_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), MmakeFragmentExecutable_41, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[22]));
    MR_hl_field(MR_mktag(1), MmakeFragmentExecutable_41, 1) = ((MR_Box) (MmakeRuleExecutableJava_39));
    MR_hl_field(MR_mktag(1), MmakeFragmentExecutable_41, 2) = ((MR_Box) (MmakeRuleExecutableNonJava_40));
  }
  parse_tree__file_names__module_name_to_lib_file_name_9_p_0(Globals_16, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_exec_library_targets\'/15", (MR_Integer) 1, (MR_String) "lib", (MR_Word) (((MR_Box) ((MR_String) ""))), ModuleName_17, &LibTargetName_42);
  parse_tree__file_names__module_name_to_lib_file_name_9_p_0(Globals_16, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_exec_library_targets\'/15", (MR_Integer) 0, (MR_String) "lib", (MR_Word) (((MR_Box) ((MR_String) ".\044A"))), ModuleName_17, LibFileName_25);
  parse_tree__file_names__module_name_to_lib_file_name_9_p_0(Globals_16, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_exec_library_targets\'/15", (MR_Integer) 0, (MR_String) "lib", (MR_Word) (((MR_Box) ((MR_String) ".\044(EXT_FOR_SHARED_LIB)"))), ModuleName_17, SharedLibFileName_26);
  parse_tree__file_names__module_name_to_lib_file_name_9_p_0(Globals_16, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_exec_library_targets\'/15", (MR_Integer) 1, (MR_String) "lib", (MR_Word) (((MR_Box) ((MR_String) ".\044(EXT_FOR_SHARED_LIB)"))), ModuleName_17, &MaybeSharedLibFileName_43);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_16, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_exec_library_targets\'/15", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[30])), ModuleName_17, JarFileName_24);
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
  Var_173 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".ints)");
  ModuleMakeVarNameInts_46 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_173);
  Var_176 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".int3s)");
  ModuleMakeVarNameInt3s_47 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_176);
  {
    Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_179, 0) = ((MR_Box) (ModuleMakeVarNameInt3s_47));
    MR_hl_field(MR_mktag(1), Var_179, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_178, 0) = ((MR_Box) (ModuleMakeVarNameInts_46));
    MR_hl_field(MR_mktag(1), Var_178, 1) = ((MR_Box) (Var_179));
  }
  {
    Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_183, 0) = ((MR_Box) (InitFileName_19));
    MR_hl_field(MR_mktag(1), Var_183, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_182 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTransOptsVar_22, Var_183);
  Var_181 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeOptsVar_21, Var_182);
  AllIntSources_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_178, Var_181);
  {
    Var_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_187, 0) = ((MR_Box) (*JarFileName_24));
    MR_hl_field(MR_mktag(1), Var_187, 1) = ((MR_Box) (AllIntSources_48));
  }
  {
    MmakeRuleLibTargetJava_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 1) = ((MR_Box) ((MR_String) "lib_target_java"));
    MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 3) = ((MR_Box) (LibTargetName_42));
    MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 4) = ((MR_Box) (Var_187));
    MR_hl_field(MR_mktag(3), MmakeRuleLibTargetJava_49, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_192, 0) = ((MR_Box) (MaybeSharedLibFileName_43));
    MR_hl_field(MR_mktag(1), Var_192, 1) = ((MR_Box) (AllIntSources_48));
  }
  {
    Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_191, 0) = ((MR_Box) (*LibFileName_25));
    MR_hl_field(MR_mktag(1), Var_191, 1) = ((MR_Box) (Var_192));
  }
  {
    MmakeRuleLibTargetNonJava_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 1) = ((MR_Box) ((MR_String) "lib_target_non_java"));
    MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 3) = ((MR_Box) (LibTargetName_42));
    MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 4) = ((MR_Box) (Var_191));
    MR_hl_field(MR_mktag(3), MmakeRuleLibTargetNonJava_50, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeFragmentLibTarget_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), MmakeFragmentLibTarget_51, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[22]));
    MR_hl_field(MR_mktag(1), MmakeFragmentLibTarget_51, 1) = ((MR_Box) (MmakeRuleLibTargetJava_49));
    MR_hl_field(MR_mktag(1), MmakeFragmentLibTarget_51, 2) = ((MR_Box) (MmakeRuleLibTargetNonJava_50));
  }
  Var_197 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".pic_os)");
  ModuleMakeVarNamePicOs_52 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_197);
  Var_207 = mercury__string__f_43_43_2_f_0(*SharedLibFileName_26, (MR_String) " \\");
  Var_205 = mercury__string__f_43_43_2_f_0((MR_String) "-o ", Var_207);
  Var_203 = mercury__string__f_43_43_2_f_0((MR_String) " \044(ALL_LD_LIBFLAGS) ", Var_205);
  Var_202 = mercury__string__f_43_43_2_f_0(InstallNameOpt_45, Var_203);
  Var_200 = mercury__string__f_43_43_2_f_0((MR_String) "-- ", Var_202);
  SharedLibAction1Line1_53 = mercury__string__f_43_43_2_f_0((MR_String) "\044(ML) --make-shared-lib \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) ", Var_200);
  Var_210 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNamePicOs_52, (MR_String) " \\");
  SharedLibAction1Line2_54 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_210);
  Var_213 = mercury__string__f_43_43_2_f_0(All_MLPicObjs_33, (MR_String) " \044(ALL_MLLIBS)");
  SharedLibAction1Line3_55 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_213);
  {
    Var_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_218, 0) = ((MR_Box) (All_MLPicObjs_33));
    MR_hl_field(MR_mktag(1), Var_218, 1) = ((MR_Box) (Var_134));
  }
  {
    Var_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_217, 0) = ((MR_Box) (ModuleMakeVarNamePicOs_52));
    MR_hl_field(MR_mktag(1), Var_217, 1) = ((MR_Box) (Var_218));
  }
  {
    Var_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_223, 0) = ((MR_Box) (SharedLibAction1Line3_55));
    MR_hl_field(MR_mktag(1), Var_223, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_222, 0) = ((MR_Box) (SharedLibAction1Line2_54));
    MR_hl_field(MR_mktag(1), Var_222, 1) = ((MR_Box) (Var_223));
  }
  {
    Var_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_221, 0) = ((MR_Box) (SharedLibAction1Line1_53));
    MR_hl_field(MR_mktag(1), Var_221, 1) = ((MR_Box) (Var_222));
  }
  {
    MmakeRuleSharedLib_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 1) = ((MR_Box) ((MR_String) "shared_lib"));
    MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 3) = ((MR_Box) (*SharedLibFileName_26));
    MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 4) = ((MR_Box) (Var_217));
    MR_hl_field(MR_mktag(3), MmakeRuleSharedLib_56, 5) = ((MR_Box) (Var_221));
  }
  {
    Var_229 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_229, 0) = ((MR_Box) (MmakeRuleSharedLib_56));
  }
  {
    Var_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_228, 0) = ((MR_Box) (Var_229));
    MR_hl_field(MR_mktag(1), Var_228, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeFragmentSharedLib_57 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeFragmentSharedLib_57, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__write_deps_file_scalar_common_1[16])));
    MR_hl_field(MR_mktag(2), MmakeFragmentSharedLib_57, 1) = ((MR_Box) (Var_228));
    MR_hl_field(MR_mktag(2), MmakeFragmentSharedLib_57, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  LibAction1_58 = mercury__string__f_43_43_2_f_0((MR_String) "rm -f ", *LibFileName_25);
  Var_237 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameOs_36, (MR_String) " \\");
  Var_235 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_237);
  Var_234 = mercury__string__f_43_43_2_f_0(*LibFileName_25, Var_235);
  LibAction2Line1_59 = mercury__string__f_43_43_2_f_0((MR_String) "\044(AR) \044(ALL_ARFLAGS) \044(AR_LIBFILE_OPT)", Var_234);
  LibAction2Line2_60 = mercury__string__f_43_43_2_f_0((MR_String) "\t", All_MLObjs_32);
  LibAction3_61 = mercury__string__f_43_43_2_f_0((MR_String) "\044(RANLIB) \044(ALL_RANLIBFLAGS) ", *LibFileName_25);
  {
    Var_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_244, 0) = ((MR_Box) (All_MLObjs_32));
    MR_hl_field(MR_mktag(1), Var_244, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_243 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_243, 0) = ((MR_Box) (ModuleMakeVarNameOs_36));
    MR_hl_field(MR_mktag(1), Var_243, 1) = ((MR_Box) (Var_244));
  }
  {
    Var_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_249, 0) = ((MR_Box) (LibAction3_61));
    MR_hl_field(MR_mktag(1), Var_249, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_248, 0) = ((MR_Box) (LibAction2Line2_60));
    MR_hl_field(MR_mktag(1), Var_248, 1) = ((MR_Box) (Var_249));
  }
  {
    Var_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_247, 0) = ((MR_Box) (LibAction2Line1_59));
    MR_hl_field(MR_mktag(1), Var_247, 1) = ((MR_Box) (Var_248));
  }
  {
    Var_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_246, 0) = ((MR_Box) (LibAction1_58));
    MR_hl_field(MR_mktag(1), Var_246, 1) = ((MR_Box) (Var_247));
  }
  {
    MmakeRuleLib_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeRuleLib_62, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), MmakeRuleLib_62, 1) = ((MR_Box) ((MR_String) "lib"));
    MR_hl_field(MR_mktag(3), MmakeRuleLib_62, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), MmakeRuleLib_62, 3) = ((MR_Box) (*LibFileName_25));
    MR_hl_field(MR_mktag(3), MmakeRuleLib_62, 4) = ((MR_Box) (Var_243));
    MR_hl_field(MR_mktag(3), MmakeRuleLib_62, 5) = ((MR_Box) (Var_246));
  }
  parse_tree__module_cmds__list_class_files_for_jar_mmake_3_p_0(Globals_16, ModuleMakeVarNameClasses_35, &ListClassFiles_63);
  Var_253 = mercury__string__f_43_43_2_f_0((MR_String) " ", ListClassFiles_63);
  Var_252 = mercury__string__f_43_43_2_f_0(*JarFileName_24, Var_253);
  JarAction1_64 = mercury__string__f_43_43_2_f_0((MR_String) "\044(JAR) \044(JAR_CREATE_FLAGS) ", Var_252);
  {
    Var_259 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_259, 0) = ((MR_Box) (JarAction1_64));
    MR_hl_field(MR_mktag(1), Var_259, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRuleJar_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeRuleJar_65, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), MmakeRuleJar_65, 1) = ((MR_Box) ((MR_String) "jar"));
    MR_hl_field(MR_mktag(3), MmakeRuleJar_65, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), MmakeRuleJar_65, 3) = ((MR_Box) (*JarFileName_24));
    MR_hl_field(MR_mktag(3), MmakeRuleJar_65, 4) = ((MR_Box) (Var_124));
    MR_hl_field(MR_mktag(3), MmakeRuleJar_65, 5) = ((MR_Box) (Var_259));
  }
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentExtForExe_30, STATE_VARIABLE_MmakeFile_0_66, &STATE_VARIABLE_MmakeFile_261_261);
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentExecutable_41, STATE_VARIABLE_MmakeFile_261_261, &STATE_VARIABLE_MmakeFile_262_262);
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibTarget_51, STATE_VARIABLE_MmakeFile_262_262, &STATE_VARIABLE_MmakeFile_263_263);
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentSharedLib_57, STATE_VARIABLE_MmakeFile_263_263, &STATE_VARIABLE_MmakeFile_264_264);
  {
    Var_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_267, 0) = ((MR_Box) (MmakeRuleJar_65));
    MR_hl_field(MR_mktag(1), Var_267, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_265, 0) = ((MR_Box) (MmakeRuleLib_62));
    MR_hl_field(MR_mktag(1), Var_265, 1) = ((MR_Box) (Var_267));
  }
  libs__mmakefiles__add_mmake_entries_3_p_0(Var_265, STATE_VARIABLE_MmakeFile_264_264, STATE_VARIABLE_MmakeFile_67);
}

void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_dv_file_6_p_0(
  MR_Word Globals_7,
  MR_String SourceFileName_8,
  MR_Word ModuleName_9,
  MR_Word DepsMap_10)
{
  MR_Word Verbose_12;
  MR_String DvFileName_13;
  MR_Word ProgressStream_14;
  MR_String CreatingMsg_15;
  MR_Word DvResult_16;
  MR_String Var_56;

  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 70, &Verbose_12);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dependencies_write_dv_file\'/6", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[1])), ModuleName_9, &DvFileName_13);
  libs__globals__get_progress_output_stream_5_p_0(Globals_7, ModuleName_9, &ProgressStream_14);
  Var_56 = mercury__string__f_43_43_2_f_0(DvFileName_13, (MR_String) "\'...\n");
  CreatingMsg_15 = mercury__string__f_43_43_2_f_0((MR_String) "% Creating auto-dependency file \140", Var_56);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_14, Verbose_12, CreatingMsg_15);
  mercury__io__open_output_4_p_0(DvFileName_13, &DvResult_16);
  if (((MR_tag((MR_Word) DvResult_16)) == (MR_Integer) 1))
  {
    MR_Word IOError_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DvResult_16, (MR_Integer) 0))));
    MR_Word ErrorStream_20;
    MR_String IOErrorMessage_21;
    MR_String DepMessage_22;
    MR_String Var_59;
    MR_String Var_60;

    libs__file_util__maybe_write_string_5_p_0(ProgressStream_14, Verbose_12, (MR_String) " failed.\n");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_14, Verbose_12);
    libs__globals__get_error_output_stream_5_p_0(Globals_7, ModuleName_9, &ErrorStream_20);
    mercury__io__error_message_2_p_0(IOError_19, &IOErrorMessage_21);
    Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", IOErrorMessage_21);
    Var_60 = mercury__string__f_43_43_2_f_0(DvFileName_13, Var_59);
    DepMessage_22 = mercury__string__f_43_43_2_f_0((MR_String) "error opening file \140", Var_60);
    libs__file_util__report_error_4_p_0(ErrorStream_20, DepMessage_22);
  }
  else
  {
    MR_Word DvStream_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DvResult_16, (MR_Integer) 0))));
    MR_Word MmakeFile_18;

    parse_tree__write_deps_file__generate_dv_file_7_p_0(Globals_7, SourceFileName_8, ModuleName_9, DepsMap_10, &MmakeFile_18);
    libs__mmakefiles__write_mmakefile_4_p_0(DvStream_17, MmakeFile_18);
    mercury__io__close_output_3_p_0(DvStream_17);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_14, Verbose_12, (MR_String) "% done.\n");
  }
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv7_HeadVar__2_2;

  conv7_HeadVar__2_2 = libs__mmakefiles__mmake_entry_to_fragment_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv7_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv5_LambdaHeadVar__2_143;

  parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1430__1_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv5_LambdaHeadVar__2_143);
  *wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_143));
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1400__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv4_HeadVar__3_3;

  conv4_HeadVar__3_3 = mercury__string__add_suffix_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv3_HeadVar__3_3;

  conv3_HeadVar__3_3 = mercury__string__add_suffix_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__3_3;

  conv2_HeadVar__3_3 = mercury__string__add_suffix_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv1_FileName_6;

  parse_tree__write_deps_file__get_source_file_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_FileName_6));
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_6;

  parse_tree__write_deps_file__compare_module_names_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0(
  MR_Word Globals_8,
  MR_String SourceFileName_9,
  MR_Word ModuleName_10,
  MR_Word DepsMap_11,
  MR_Word * MmakeFile_12)
{
  MR_bool succeeded;
  MR_String ModuleNameString_14;
  MR_String Version_15;
  MR_String FullArch_16;
  MR_Word MmakeStartComment_17;
  MR_Word Modules0_18;
  MR_Word Modules1_19;
  MR_Word Modules_20;
  MR_String ModuleMakeVarName_21;
  MR_Word SourceFiles0_22;
  MR_Word SourceFiles_23;
  MR_Word MmakeVarModuleMs_24;
  MR_Word MmakeVarModuleErrs_25;
  MR_Word MmakeVarModuleDepErrs_26;
  MR_Word ModulesSourceFileNames_27;
  MR_Word MmakeVarModuleMods_28;
  MR_Word ModulesWithSubModules_29;
  MR_Word ModulesWithSubModulesSourceFileNames_35;
  MR_Word MmakeVarModuleParentMods_36;
  MR_Word Target_37;
  MR_Word ForeignModules_39;
  MR_Word ForeignModulesFileNames_40;
  MR_Word MmakeVarForeignModules_41;
  MR_Word MakeFileName_42;
  MR_Word ForeignFileNames_48;
  MR_Word MmakeVarForeignFileNames_49;
  MR_Word MmakeVarForeignDlls_50;
  MR_Word MmakeVarInitCs_51;
  MR_Word MmakeVarAllCs_52;
  MR_Word FactTableFileNames_53;
  MR_Word FactTableFileNamesC_54;
  MR_Word FactTableFileNamesOs_55;
  MR_Word FactTableFileNamesPicOs_56;
  MR_Word MmakeVarCs_57;
  MR_Word MmakeVarDlls_58;
  MR_Word MmakeVarAllOs_59;
  MR_Word MmakeVarAllPicOs_60;
  MR_Word MmakeVarOs_61;
  MR_Word MmakeVarPicOs_62;
  MR_Word MmakeVarUseds_63;
  MR_Word MmakeVarJavas_64;
  MR_Word MmakeVarAllJavas_65;
  MR_Word MmakeVarClasses_66;
  MR_Word MmakeVarCss_67;
  MR_Word MmakeVarAllCss_68;
  MR_Word MmakeVarDirs_69;
  MR_Word MmakeVarDirOs_70;
  MR_Word MmakeVarDates_71;
  MR_Word MmakeVarDate0s_72;
  MR_Word MmakeVarDate3s_73;
  MR_Word MmakeVarOptDates_74;
  MR_Word MmakeVarTransOptDates_75;
  MR_Word MmakeVarCDates_76;
  MR_Word MmakeVarJavaDates_77;
  MR_Word MmakeVarCsDates_78;
  MR_Word MmakeVarDs_79;
  MR_Word ModuleDepFileExt_80;
  MR_String ModuleDepFileExtStr_81;
  MR_Word MmakeVarModuleDeps_82;
  MR_Word MihSources_84;
  MR_Word MhSources_85;
  MR_Word MmakeVarMihs_86;
  MR_Word MmakeVarMhs_87;
  MR_Word MmakeVarAllMihs_88;
  MR_Word MmakeVarAllMhs_89;
  MR_Word MmakeVarInts_90;
  MR_Word MmakeVarInt0s_91;
  MR_Word MmakeVarAllInt0s_92;
  MR_Word MmakeVarInt3s_93;
  MR_Word MmakeVarOpts_94;
  MR_Word MmakeVarTransOpts_95;
  MR_Word MmakeVarAnalysiss_96;
  MR_Word MmakeVarRequests_97;
  MR_Word MmakeVarImdgs_98;
  MR_Word MmakeVarProfs_99;
  MR_Word MmakeEntries_100;
  MR_Word Var_105;
  MR_String Var_106;
  MR_Word Var_108;
  MR_String Var_111;
  MR_Word Var_113;
  MR_String Var_116;
  MR_Word Var_118;
  MR_String Var_125;
  MR_Word Var_127;
  MR_String Var_134;
  MR_String Var_140;
  MR_String Var_150;
  MR_String Var_152;
  MR_String Var_154;
  MR_String Var_159;
  MR_String Var_161;
  MR_String Var_166;
  MR_String Var_168;
  MR_String Var_182;
  MR_Word Var_184;
  MR_String Var_185;
  MR_String Var_187;
  MR_String Var_189;
  MR_String Var_191;
  MR_String Var_196;
  MR_Word Var_198;
  MR_String Var_199;
  MR_String Var_204;
  MR_Word Var_206;
  MR_String Var_207;
  MR_String Var_212;
  MR_String Var_214;
  MR_String Var_219;
  MR_String Var_221;
  MR_String Var_226;
  MR_String Var_228;
  MR_String Var_233;
  MR_String Var_235;
  MR_String Var_240;
  MR_String Var_242;
  MR_String Var_247;
  MR_Word Var_249;
  MR_String Var_250;
  MR_Word Var_255;
  MR_String Var_256;
  MR_String Var_262;
  MR_String Var_264;
  MR_String Var_269;
  MR_String Var_271;
  MR_String Var_276;
  MR_String Var_278;
  MR_String Var_283;
  MR_String Var_285;
  MR_String Var_290;
  MR_String Var_292;
  MR_String Var_297;
  MR_String Var_299;
  MR_String Var_304;
  MR_String Var_306;
  MR_String Var_311;
  MR_String Var_313;
  MR_String Var_318;
  MR_String Var_320;
  MR_String Var_325;
  MR_String Var_327;
  MR_String Var_332;
  MR_String Var_334;
  MR_String Var_339;
  MR_String Var_341;
  MR_String Var_346;
  MR_String Var_348;
  MR_String Var_353;
  MR_String Var_355;
  MR_String Var_375;
  MR_String Var_377;
  MR_String Var_379;
  MR_String Var_381;
  MR_String Var_386;
  MR_String Var_388;
  MR_String Var_393;
  MR_Word Var_395;
  MR_String Var_396;
  MR_Word Var_401;
  MR_String Var_402;
  MR_String Var_408;
  MR_String Var_410;
  MR_String Var_415;
  MR_String Var_417;
  MR_String Var_422;
  MR_String Var_424;
  MR_String Var_429;
  MR_String Var_431;
  MR_String Var_436;
  MR_String Var_438;
  MR_String Var_443;
  MR_String Var_445;
  MR_String Var_450;
  MR_String Var_452;
  MR_String Var_457;
  MR_String Var_459;
  MR_String Var_464;
  MR_String Var_466;
  MR_Word Var_471;
  MR_Word Var_472;
  MR_Word Var_473;
  MR_Word Var_474;
  MR_Word Var_475;
  MR_Word Var_476;
  MR_Word Var_477;
  MR_Word Var_478;
  MR_Word Var_479;
  MR_Word Var_480;
  MR_Word Var_481;
  MR_Word Var_482;
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
  MR_Word Var_507;
  MR_Word Var_508;
  MR_Word Var_509;
  MR_Word Var_510;
  MR_Word Var_511;
  MR_Word Var_512;
  MR_Word Var_513;
  MR_Word Var_514;
  MR_Word Var_515;
  MR_Word Var_516;
  MR_Word Var_517;
  MR_Word Var_518;
  MR_Word Var_520;
  MR_String Var_591;
  MR_String Var_594;
  MR_String Var_597;
  MR_String Var_600;
  MR_String Var_603;
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
  MR_String Var_645;
  MR_String Var_648;
  MR_String Var_651;
  MR_String Var_654;
  MR_String Var_657;
  MR_String Var_660;
  MR_String Var_663;
  MR_String Var_666;
  MR_String Var_669;
  MR_String Var_671;
  MR_String Var_672;
  MR_String Var_681;
  MR_String Var_684;
  MR_String Var_687;
  MR_String Var_690;
  MR_String Var_693;
  MR_String Var_696;
  MR_String Var_699;
  MR_String Var_702;
  MR_String Var_705;
  MR_String Var_708;
  MR_String Var_711;
  MR_String Var_714;
  MR_String Var_717;
  MR_Box conv6_STATE_VARIABLE_IO_149_149;

  ModuleNameString_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_10);
  mercury__library__version_2_p_0(&Version_15, &FullArch_16);
  {
    MmakeStartComment_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), MmakeStartComment_17, 0) = ((MR_Box) ((MR_String) "dependency variables"));
    MR_hl_field(MR_mktag(0), MmakeStartComment_17, 1) = ((MR_Box) (ModuleNameString_14));
    MR_hl_field(MR_mktag(0), MmakeStartComment_17, 2) = ((MR_Box) (SourceFileName_9));
    MR_hl_field(MR_mktag(0), MmakeStartComment_17, 3) = ((MR_Box) (Version_15));
    MR_hl_field(MR_mktag(0), MmakeStartComment_17, 4) = ((MR_Box) (FullArch_16));
  }
  mercury__map__keys_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_11, &Modules0_18);
  parse_tree__write_deps_file__select_ok_modules_3_p_0(Modules0_18, DepsMap_11, &Modules1_19);
  mercury__list__sort_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[10]), Modules1_19, &Modules_20);
  parse_tree__file_names__module_name_to_make_var_name_2_p_0(ModuleName_10, &ModuleMakeVarName_21);
  {
    Var_105 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_105, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[8]));
    MR_hl_field(MR_mktag(0), Var_105, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_2));
    MR_hl_field(MR_mktag(0), Var_105, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_105, 3) = ((MR_Box) (DepsMap_11));
  }
  mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_105, Modules_20, &SourceFiles0_22);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFiles0_22, &SourceFiles_23);
  Var_106 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".ms");
  Var_108 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_10[0]), SourceFiles_23);
  {
    MmakeVarModuleMs_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeVarModuleMs_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), MmakeVarModuleMs_24, 1) = ((MR_Box) (Var_106));
    MR_hl_field(MR_mktag(3), MmakeVarModuleMs_24, 2) = ((MR_Box) (Var_108));
  }
  Var_111 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".errs");
  Var_113 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_10[1]), SourceFiles_23);
  {
    MmakeVarModuleErrs_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeVarModuleErrs_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), MmakeVarModuleErrs_25, 1) = ((MR_Box) (Var_111));
    MR_hl_field(MR_mktag(3), MmakeVarModuleErrs_25, 2) = ((MR_Box) (Var_113));
  }
  Var_116 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".dep_errs");
  Var_118 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_10[2]), SourceFiles_23);
  {
    MmakeVarModuleDepErrs_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeVarModuleDepErrs_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), MmakeVarModuleDepErrs_26, 1) = ((MR_Box) (Var_116));
    MR_hl_field(MR_mktag(3), MmakeVarModuleDepErrs_26, 2) = ((MR_Box) (Var_118));
  }
  parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_8, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[25])), Modules_20, &ModulesSourceFileNames_27);
  Var_125 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods");
  {
    MmakeVarModuleMods_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeVarModuleMods_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), MmakeVarModuleMods_28, 1) = ((MR_Box) (Var_125));
    MR_hl_field(MR_mktag(3), MmakeVarModuleMods_28, 2) = ((MR_Box) (ModulesSourceFileNames_27));
  }
  {
    Var_127 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_127, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[3]));
    MR_hl_field(MR_mktag(0), Var_127, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_6));
    MR_hl_field(MR_mktag(0), Var_127, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_127, 3) = ((MR_Box) (DepsMap_11));
  }
  ModulesWithSubModules_29 = mercury__list__filter_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_127, Modules_20);
  parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_8, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[25])), ModulesWithSubModules_29, &ModulesWithSubModulesSourceFileNames_35);
  Var_134 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".parent_mods");
  {
    MmakeVarModuleParentMods_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeVarModuleParentMods_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), MmakeVarModuleParentMods_36, 1) = ((MR_Box) (Var_134));
    MR_hl_field(MR_mktag(3), MmakeVarModuleParentMods_36, 2) = ((MR_Box) (ModulesWithSubModulesSourceFileNames_35));
  }
  libs__globals__get_target_2_p_0(Globals_8, &Target_37);
  ForeignModules_39 = mercury__assoc_list__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) ((MR_Unsigned) 0U));
  parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_8, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[25])), ForeignModules_39, &ForeignModulesFileNames_40);
  Var_140 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".foreign");
  {
    MmakeVarForeignModules_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeVarForeignModules_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), MmakeVarForeignModules_41, 1) = ((MR_Box) (Var_140));
    MR_hl_field(MR_mktag(3), MmakeVarForeignModules_41, 2) = ((MR_Box) (ForeignModulesFileNames_40));
  }
  {
    MakeFileName_42 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), MakeFileName_42, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_11[0]));
    MR_hl_field(MR_mktag(0), MakeFileName_42, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_7));
    MR_hl_field(MR_mktag(0), MakeFileName_42, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), MakeFileName_42, 3) = ((MR_Box) (Globals_8));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[1]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), MakeFileName_42, (MR_Word) ((MR_Unsigned) 0U), &ForeignFileNames_48, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_149_149);
  Var_150 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".foreign_cs");
  {
    MmakeVarForeignFileNames_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeVarForeignFileNames_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), MmakeVarForeignFileNames_49, 1) = ((MR_Box) (Var_150));
    MR_hl_field(MR_mktag(3), MmakeVarForeignFileNames_49, 2) = ((MR_Box) (ForeignFileNames_48));
  }
  Var_152 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".foreign_dlls");
  Var_591 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".foreign:%=\044(dlls_subdir)%.dll)");
  Var_154 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_591);
  {
    MmakeVarForeignDlls_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarForeignDlls_50, 0) = ((MR_Box) (Var_152));
    MR_hl_field(MR_mktag(2), MmakeVarForeignDlls_50, 1) = ((MR_Box) (Var_154));
  }
  Var_159 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".init_cs");
  Var_594 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(cs_subdir)%.c)");
  Var_161 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_594);
  {
    MmakeVarInitCs_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarInitCs_51, 0) = ((MR_Box) (Var_159));
    MR_hl_field(MR_mktag(2), MmakeVarInitCs_51, 1) = ((MR_Box) (Var_161));
  }
  Var_166 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".all_cs");
  Var_597 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(cs_subdir)%.c)");
  Var_168 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_597);
  {
    MmakeVarAllCs_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarAllCs_52, 0) = ((MR_Box) (Var_166));
    MR_hl_field(MR_mktag(2), MmakeVarAllCs_52, 1) = ((MR_Box) (Var_168));
  }
  parse_tree__write_deps_file__get_fact_table_file_names_3_p_0(DepsMap_11, Modules_20, &FactTableFileNames_53);
  parse_tree__write_deps_file__get_fact_table_dependencies_6_p_0(Globals_8, (MR_Word) (((MR_Box) ((MR_String) ".c"))), FactTableFileNames_53, &FactTableFileNamesC_54);
  parse_tree__write_deps_file__get_fact_table_dependencies_6_p_0(Globals_8, (MR_Word) (((MR_Box) ((MR_String) ".\044O"))), FactTableFileNames_53, &FactTableFileNamesOs_55);
  parse_tree__write_deps_file__get_fact_table_dependencies_6_p_0(Globals_8, (MR_Word) (((MR_Box) ((MR_String) ".\044(EXT_FOR_PIC_OBJECTS)"))), FactTableFileNames_53, &FactTableFileNamesPicOs_56);
  Var_182 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".cs");
  Var_187 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".init_cs)");
  Var_185 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_187);
  {
    Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_184, 0) = ((MR_Box) (Var_185));
    MR_hl_field(MR_mktag(1), Var_184, 1) = ((MR_Box) (FactTableFileNamesC_54));
  }
  {
    MmakeVarCs_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeVarCs_57, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), MmakeVarCs_57, 1) = ((MR_Box) (Var_182));
    MR_hl_field(MR_mktag(3), MmakeVarCs_57, 2) = ((MR_Box) (Var_184));
  }
  Var_189 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".dlls");
  Var_600 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(dlls_subdir)%.dll)");
  Var_191 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_600);
  {
    MmakeVarDlls_58 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarDlls_58, 0) = ((MR_Box) (Var_189));
    MR_hl_field(MR_mktag(2), MmakeVarDlls_58, 1) = ((MR_Box) (Var_191));
  }
  Var_196 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".all_os");
  Var_603 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(os_subdir)%.\044O)");
  Var_199 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_603);
  {
    Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_198, 0) = ((MR_Box) (Var_199));
    MR_hl_field(MR_mktag(1), Var_198, 1) = ((MR_Box) (FactTableFileNamesOs_55));
  }
  {
    MmakeVarAllOs_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeVarAllOs_59, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), MmakeVarAllOs_59, 1) = ((MR_Box) (Var_196));
    MR_hl_field(MR_mktag(3), MmakeVarAllOs_59, 2) = ((MR_Box) (Var_198));
  }
  Var_204 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".all_pic_os");
  Var_606 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(os_subdir)%.\044(EXT_FOR_PIC_OBJECTS))");
  Var_207 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_606);
  {
    Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_206, 0) = ((MR_Box) (Var_207));
    MR_hl_field(MR_mktag(1), Var_206, 1) = ((MR_Box) (FactTableFileNamesPicOs_56));
  }
  {
    MmakeVarAllPicOs_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeVarAllPicOs_60, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), MmakeVarAllPicOs_60, 1) = ((MR_Box) (Var_204));
    MR_hl_field(MR_mktag(3), MmakeVarAllPicOs_60, 2) = ((MR_Box) (Var_206));
  }
  Var_212 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".os");
  Var_609 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".all_os)");
  Var_214 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_609);
  {
    MmakeVarOs_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarOs_61, 0) = ((MR_Box) (Var_212));
    MR_hl_field(MR_mktag(2), MmakeVarOs_61, 1) = ((MR_Box) (Var_214));
  }
  Var_219 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".pic_os");
  Var_612 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".all_pic_os)");
  Var_221 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_612);
  {
    MmakeVarPicOs_62 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarPicOs_62, 0) = ((MR_Box) (Var_219));
    MR_hl_field(MR_mktag(2), MmakeVarPicOs_62, 1) = ((MR_Box) (Var_221));
  }
  Var_226 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".useds");
  Var_615 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(used_subdir)%.used)");
  Var_228 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_615);
  {
    MmakeVarUseds_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarUseds_63, 0) = ((MR_Box) (Var_226));
    MR_hl_field(MR_mktag(2), MmakeVarUseds_63, 1) = ((MR_Box) (Var_228));
  }
  Var_233 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".javas");
  Var_618 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(javas_subdir)%.java)");
  Var_235 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_618);
  {
    MmakeVarJavas_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarJavas_64, 0) = ((MR_Box) (Var_233));
    MR_hl_field(MR_mktag(2), MmakeVarJavas_64, 1) = ((MR_Box) (Var_235));
  }
  Var_240 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".all_javas");
  Var_621 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(javas_subdir)%.java)");
  Var_242 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_621);
  {
    MmakeVarAllJavas_65 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarAllJavas_65, 0) = ((MR_Box) (Var_240));
    MR_hl_field(MR_mktag(2), MmakeVarAllJavas_65, 1) = ((MR_Box) (Var_242));
  }
  Var_247 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".classes");
  Var_624 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(classes_subdir)%.class)");
  Var_250 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_624);
  Var_627 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(classes_subdir)%\\\044\044*.class))");
  Var_256 = mercury__string__f_43_43_2_f_0((MR_String) "\044(wildcard \044(", Var_627);
  {
    Var_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_255, 0) = ((MR_Box) (Var_256));
    MR_hl_field(MR_mktag(1), Var_255, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_249, 0) = ((MR_Box) (Var_250));
    MR_hl_field(MR_mktag(1), Var_249, 1) = ((MR_Box) (Var_255));
  }
  {
    MmakeVarClasses_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeVarClasses_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), MmakeVarClasses_66, 1) = ((MR_Box) (Var_247));
    MR_hl_field(MR_mktag(3), MmakeVarClasses_66, 2) = ((MR_Box) (Var_249));
  }
  Var_262 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".css");
  Var_630 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(css_subdir)%.cs)");
  Var_264 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_630);
  {
    MmakeVarCss_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarCss_67, 0) = ((MR_Box) (Var_262));
    MR_hl_field(MR_mktag(2), MmakeVarCss_67, 1) = ((MR_Box) (Var_264));
  }
  Var_269 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".all_css");
  Var_633 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(css_subdir)%.cs)");
  Var_271 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_633);
  {
    MmakeVarAllCss_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarAllCss_68, 0) = ((MR_Box) (Var_269));
    MR_hl_field(MR_mktag(2), MmakeVarAllCss_68, 1) = ((MR_Box) (Var_271));
  }
  Var_276 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".dirs");
  Var_636 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(dirs_subdir)%.dir)");
  Var_278 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_636);
  {
    MmakeVarDirs_69 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarDirs_69, 0) = ((MR_Box) (Var_276));
    MR_hl_field(MR_mktag(2), MmakeVarDirs_69, 1) = ((MR_Box) (Var_278));
  }
  Var_283 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".dir_os");
  Var_639 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(dirs_subdir)%.dir/*.\044O)");
  Var_285 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_639);
  {
    MmakeVarDirOs_70 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarDirOs_70, 0) = ((MR_Box) (Var_283));
    MR_hl_field(MR_mktag(2), MmakeVarDirOs_70, 1) = ((MR_Box) (Var_285));
  }
  Var_290 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".dates");
  Var_642 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(dates_subdir)%.date)");
  Var_292 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_642);
  {
    MmakeVarDates_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarDates_71, 0) = ((MR_Box) (Var_290));
    MR_hl_field(MR_mktag(2), MmakeVarDates_71, 1) = ((MR_Box) (Var_292));
  }
  Var_297 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".date0s");
  Var_645 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(date0s_subdir)%.date0)");
  Var_299 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_645);
  {
    MmakeVarDate0s_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarDate0s_72, 0) = ((MR_Box) (Var_297));
    MR_hl_field(MR_mktag(2), MmakeVarDate0s_72, 1) = ((MR_Box) (Var_299));
  }
  Var_304 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".date3s");
  Var_648 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(date3s_subdir)%.date3)");
  Var_306 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_648);
  {
    MmakeVarDate3s_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarDate3s_73, 0) = ((MR_Box) (Var_304));
    MR_hl_field(MR_mktag(2), MmakeVarDate3s_73, 1) = ((MR_Box) (Var_306));
  }
  Var_311 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".optdates");
  Var_651 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(optdates_subdir)%.optdate)");
  Var_313 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_651);
  {
    MmakeVarOptDates_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarOptDates_74, 0) = ((MR_Box) (Var_311));
    MR_hl_field(MR_mktag(2), MmakeVarOptDates_74, 1) = ((MR_Box) (Var_313));
  }
  Var_318 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".trans_opt_dates");
  Var_654 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(trans_opt_dates_subdir)%.trans_opt_date)");
  Var_320 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_654);
  {
    MmakeVarTransOptDates_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarTransOptDates_75, 0) = ((MR_Box) (Var_318));
    MR_hl_field(MR_mktag(2), MmakeVarTransOptDates_75, 1) = ((MR_Box) (Var_320));
  }
  Var_325 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".c_dates");
  Var_657 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(c_dates_subdir)%.c_date)");
  Var_327 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_657);
  {
    MmakeVarCDates_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarCDates_76, 0) = ((MR_Box) (Var_325));
    MR_hl_field(MR_mktag(2), MmakeVarCDates_76, 1) = ((MR_Box) (Var_327));
  }
  Var_332 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".java_dates");
  Var_660 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(java_dates_subdir)%.java_date)");
  Var_334 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_660);
  {
    MmakeVarJavaDates_77 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarJavaDates_77, 0) = ((MR_Box) (Var_332));
    MR_hl_field(MR_mktag(2), MmakeVarJavaDates_77, 1) = ((MR_Box) (Var_334));
  }
  Var_339 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".cs_dates");
  Var_663 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(cs_dates_subdir)%.cs_date)");
  Var_341 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_663);
  {
    MmakeVarCsDates_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarCsDates_78, 0) = ((MR_Box) (Var_339));
    MR_hl_field(MR_mktag(2), MmakeVarCsDates_78, 1) = ((MR_Box) (Var_341));
  }
  Var_346 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".ds");
  Var_666 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(ds_subdir)%.d)");
  Var_348 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_666);
  {
    MmakeVarDs_79 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarDs_79, 0) = ((MR_Box) (Var_346));
    MR_hl_field(MR_mktag(2), MmakeVarDs_79, 1) = ((MR_Box) (Var_348));
  }
  ModuleDepFileExt_80 = parse_tree__file_names__make_module_dep_file_extension_0_f_0();
  ModuleDepFileExtStr_81 = parse_tree__file_names__other_extension_to_string_1_f_0(ModuleDepFileExt_80);
  Var_353 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".module_deps");
  Var_669 = mercury__string__f_43_43_2_f_0(ModuleDepFileExtStr_81, (MR_String) ")");
  Var_671 = mercury__string__f_43_43_2_f_0((MR_String) ".mods:%=\044(module_deps_subdir)%", Var_669);
  Var_672 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, Var_671);
  Var_355 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_672);
  {
    MmakeVarModuleDeps_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarModuleDeps_82, 0) = ((MR_Box) (Var_353));
    MR_hl_field(MR_mktag(2), MmakeVarModuleDeps_82, 1) = ((MR_Box) (Var_355));
  }
  switch (Target_37) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word HighLevelCode_83;
        MR_String Var_369;
        MR_String Var_678;

        libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 302, &HighLevelCode_83);
        switch (HighLevelCode_83) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MihSources_84 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_363;
              MR_String Var_675;

              Var_675 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
              Var_363 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_675);
              {
                MihSources_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MihSources_84, 0) = ((MR_Box) (Var_363));
                MR_hl_field(MR_mktag(1), MihSources_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
        }
        Var_678 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=%.mh)");
        Var_369 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_678);
        {
          MhSources_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MhSources_85, 0) = ((MR_Box) (Var_369));
          MR_hl_field(MR_mktag(1), MhSources_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MihSources_84 = (MR_Word) ((MR_Unsigned) 0U);
        MhSources_85 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
  Var_375 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mihs");
  {
    MmakeVarMihs_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeVarMihs_86, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), MmakeVarMihs_86, 1) = ((MR_Box) (Var_375));
    MR_hl_field(MR_mktag(3), MmakeVarMihs_86, 2) = ((MR_Box) (MihSources_84));
  }
  Var_377 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mhs");
  {
    MmakeVarMhs_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeVarMhs_87, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), MmakeVarMhs_87, 1) = ((MR_Box) (Var_377));
    MR_hl_field(MR_mktag(3), MmakeVarMhs_87, 2) = ((MR_Box) (MhSources_85));
  }
  Var_379 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".all_mihs");
  Var_681 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
  Var_381 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_681);
  {
    MmakeVarAllMihs_88 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarAllMihs_88, 0) = ((MR_Box) (Var_379));
    MR_hl_field(MR_mktag(2), MmakeVarAllMihs_88, 1) = ((MR_Box) (Var_381));
  }
  Var_386 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".all_mhs");
  Var_684 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=%.mh)");
  Var_388 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_684);
  {
    MmakeVarAllMhs_89 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarAllMhs_89, 0) = ((MR_Box) (Var_386));
    MR_hl_field(MR_mktag(2), MmakeVarAllMhs_89, 1) = ((MR_Box) (Var_388));
  }
  Var_393 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".ints");
  Var_687 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(ints_subdir)%.int)");
  Var_396 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_687);
  Var_690 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(int2s_subdir)%.int2)");
  Var_402 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_690);
  {
    Var_401 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_401, 0) = ((MR_Box) (Var_402));
    MR_hl_field(MR_mktag(1), Var_401, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_395 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_395, 0) = ((MR_Box) (Var_396));
    MR_hl_field(MR_mktag(1), Var_395, 1) = ((MR_Box) (Var_401));
  }
  {
    MmakeVarInts_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeVarInts_90, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(MR_mktag(3), MmakeVarInts_90, 1) = ((MR_Box) (Var_393));
    MR_hl_field(MR_mktag(3), MmakeVarInts_90, 2) = ((MR_Box) (Var_395));
  }
  Var_408 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".int0s");
  Var_693 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".parent_mods:%=\044(int0s_subdir)%.int0)");
  Var_410 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_693);
  {
    MmakeVarInt0s_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarInt0s_91, 0) = ((MR_Box) (Var_408));
    MR_hl_field(MR_mktag(2), MmakeVarInt0s_91, 1) = ((MR_Box) (Var_410));
  }
  Var_415 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".all_int0s");
  Var_696 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(int0s_subdir)%.int0)");
  Var_417 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_696);
  {
    MmakeVarAllInt0s_92 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarAllInt0s_92, 0) = ((MR_Box) (Var_415));
    MR_hl_field(MR_mktag(2), MmakeVarAllInt0s_92, 1) = ((MR_Box) (Var_417));
  }
  Var_422 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".int3s");
  Var_699 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(int3s_subdir)%.int3)");
  Var_424 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_699);
  {
    MmakeVarInt3s_93 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarInt3s_93, 0) = ((MR_Box) (Var_422));
    MR_hl_field(MR_mktag(2), MmakeVarInt3s_93, 1) = ((MR_Box) (Var_424));
  }
  Var_429 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".opts");
  Var_702 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(opts_subdir)%.opt)");
  Var_431 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_702);
  {
    MmakeVarOpts_94 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarOpts_94, 0) = ((MR_Box) (Var_429));
    MR_hl_field(MR_mktag(2), MmakeVarOpts_94, 1) = ((MR_Box) (Var_431));
  }
  Var_436 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".trans_opts");
  Var_705 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(trans_opts_subdir)%.trans_opt)");
  Var_438 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_705);
  {
    MmakeVarTransOpts_95 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarTransOpts_95, 0) = ((MR_Box) (Var_436));
    MR_hl_field(MR_mktag(2), MmakeVarTransOpts_95, 1) = ((MR_Box) (Var_438));
  }
  Var_443 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".analysiss");
  Var_708 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(analysiss_subdir)%.analysis)");
  Var_445 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_708);
  {
    MmakeVarAnalysiss_96 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarAnalysiss_96, 0) = ((MR_Box) (Var_443));
    MR_hl_field(MR_mktag(2), MmakeVarAnalysiss_96, 1) = ((MR_Box) (Var_445));
  }
  Var_450 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".requests");
  Var_711 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(requests_subdir)%.request)");
  Var_452 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_711);
  {
    MmakeVarRequests_97 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarRequests_97, 0) = ((MR_Box) (Var_450));
    MR_hl_field(MR_mktag(2), MmakeVarRequests_97, 1) = ((MR_Box) (Var_452));
  }
  Var_457 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".imdgs");
  Var_714 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=\044(imdgs_subdir)%.imdg)");
  Var_459 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_714);
  {
    MmakeVarImdgs_98 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarImdgs_98, 0) = ((MR_Box) (Var_457));
    MR_hl_field(MR_mktag(2), MmakeVarImdgs_98, 1) = ((MR_Box) (Var_459));
  }
  Var_464 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".profs");
  Var_717 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_21, (MR_String) ".mods:%=%.prof)");
  Var_466 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_717);
  {
    MmakeVarProfs_99 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(2), MmakeVarProfs_99, 0) = ((MR_Box) (Var_464));
    MR_hl_field(MR_mktag(2), MmakeVarProfs_99, 1) = ((MR_Box) (Var_466));
  }
  {
    Var_518 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_518, 0) = ((MR_Box) (MmakeVarProfs_99));
    MR_hl_field(MR_mktag(1), Var_518, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_517 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_517, 0) = ((MR_Box) (MmakeVarImdgs_98));
    MR_hl_field(MR_mktag(1), Var_517, 1) = ((MR_Box) (Var_518));
  }
  {
    Var_516 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_516, 0) = ((MR_Box) (MmakeVarRequests_97));
    MR_hl_field(MR_mktag(1), Var_516, 1) = ((MR_Box) (Var_517));
  }
  {
    Var_515 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_515, 0) = ((MR_Box) (MmakeVarAnalysiss_96));
    MR_hl_field(MR_mktag(1), Var_515, 1) = ((MR_Box) (Var_516));
  }
  {
    Var_514 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_514, 0) = ((MR_Box) (MmakeVarTransOpts_95));
    MR_hl_field(MR_mktag(1), Var_514, 1) = ((MR_Box) (Var_515));
  }
  {
    Var_513 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_513, 0) = ((MR_Box) (MmakeVarOpts_94));
    MR_hl_field(MR_mktag(1), Var_513, 1) = ((MR_Box) (Var_514));
  }
  {
    Var_512 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_512, 0) = ((MR_Box) (MmakeVarInt3s_93));
    MR_hl_field(MR_mktag(1), Var_512, 1) = ((MR_Box) (Var_513));
  }
  {
    Var_511 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_511, 0) = ((MR_Box) (MmakeVarAllInt0s_92));
    MR_hl_field(MR_mktag(1), Var_511, 1) = ((MR_Box) (Var_512));
  }
  {
    Var_510 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_510, 0) = ((MR_Box) (MmakeVarInt0s_91));
    MR_hl_field(MR_mktag(1), Var_510, 1) = ((MR_Box) (Var_511));
  }
  {
    Var_509 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_509, 0) = ((MR_Box) (MmakeVarInts_90));
    MR_hl_field(MR_mktag(1), Var_509, 1) = ((MR_Box) (Var_510));
  }
  {
    Var_508 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_508, 0) = ((MR_Box) (MmakeVarAllMhs_89));
    MR_hl_field(MR_mktag(1), Var_508, 1) = ((MR_Box) (Var_509));
  }
  {
    Var_507 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_507, 0) = ((MR_Box) (MmakeVarAllMihs_88));
    MR_hl_field(MR_mktag(1), Var_507, 1) = ((MR_Box) (Var_508));
  }
  {
    Var_506 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_506, 0) = ((MR_Box) (MmakeVarMhs_87));
    MR_hl_field(MR_mktag(1), Var_506, 1) = ((MR_Box) (Var_507));
  }
  {
    Var_505 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_505, 0) = ((MR_Box) (MmakeVarMihs_86));
    MR_hl_field(MR_mktag(1), Var_505, 1) = ((MR_Box) (Var_506));
  }
  {
    Var_504 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_504, 0) = ((MR_Box) (MmakeVarModuleDeps_82));
    MR_hl_field(MR_mktag(1), Var_504, 1) = ((MR_Box) (Var_505));
  }
  {
    Var_503 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_503, 0) = ((MR_Box) (MmakeVarDs_79));
    MR_hl_field(MR_mktag(1), Var_503, 1) = ((MR_Box) (Var_504));
  }
  {
    Var_502 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_502, 0) = ((MR_Box) (MmakeVarCsDates_78));
    MR_hl_field(MR_mktag(1), Var_502, 1) = ((MR_Box) (Var_503));
  }
  {
    Var_501 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_501, 0) = ((MR_Box) (MmakeVarJavaDates_77));
    MR_hl_field(MR_mktag(1), Var_501, 1) = ((MR_Box) (Var_502));
  }
  {
    Var_500 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_500, 0) = ((MR_Box) (MmakeVarCDates_76));
    MR_hl_field(MR_mktag(1), Var_500, 1) = ((MR_Box) (Var_501));
  }
  {
    Var_499 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_499, 0) = ((MR_Box) (MmakeVarTransOptDates_75));
    MR_hl_field(MR_mktag(1), Var_499, 1) = ((MR_Box) (Var_500));
  }
  {
    Var_498 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_498, 0) = ((MR_Box) (MmakeVarOptDates_74));
    MR_hl_field(MR_mktag(1), Var_498, 1) = ((MR_Box) (Var_499));
  }
  {
    Var_497 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_497, 0) = ((MR_Box) (MmakeVarDate3s_73));
    MR_hl_field(MR_mktag(1), Var_497, 1) = ((MR_Box) (Var_498));
  }
  {
    Var_496 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_496, 0) = ((MR_Box) (MmakeVarDate0s_72));
    MR_hl_field(MR_mktag(1), Var_496, 1) = ((MR_Box) (Var_497));
  }
  {
    Var_495 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_495, 0) = ((MR_Box) (MmakeVarDates_71));
    MR_hl_field(MR_mktag(1), Var_495, 1) = ((MR_Box) (Var_496));
  }
  {
    Var_494 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_494, 0) = ((MR_Box) (MmakeVarDirOs_70));
    MR_hl_field(MR_mktag(1), Var_494, 1) = ((MR_Box) (Var_495));
  }
  {
    Var_493 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_493, 0) = ((MR_Box) (MmakeVarDirs_69));
    MR_hl_field(MR_mktag(1), Var_493, 1) = ((MR_Box) (Var_494));
  }
  {
    Var_492 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_492, 0) = ((MR_Box) (MmakeVarAllCss_68));
    MR_hl_field(MR_mktag(1), Var_492, 1) = ((MR_Box) (Var_493));
  }
  {
    Var_491 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_491, 0) = ((MR_Box) (MmakeVarCss_67));
    MR_hl_field(MR_mktag(1), Var_491, 1) = ((MR_Box) (Var_492));
  }
  {
    Var_490 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_490, 0) = ((MR_Box) (MmakeVarClasses_66));
    MR_hl_field(MR_mktag(1), Var_490, 1) = ((MR_Box) (Var_491));
  }
  {
    Var_489 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_489, 0) = ((MR_Box) (MmakeVarAllJavas_65));
    MR_hl_field(MR_mktag(1), Var_489, 1) = ((MR_Box) (Var_490));
  }
  {
    Var_488 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_488, 0) = ((MR_Box) (MmakeVarJavas_64));
    MR_hl_field(MR_mktag(1), Var_488, 1) = ((MR_Box) (Var_489));
  }
  {
    Var_487 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_487, 0) = ((MR_Box) (MmakeVarUseds_63));
    MR_hl_field(MR_mktag(1), Var_487, 1) = ((MR_Box) (Var_488));
  }
  {
    Var_486 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_486, 0) = ((MR_Box) (MmakeVarPicOs_62));
    MR_hl_field(MR_mktag(1), Var_486, 1) = ((MR_Box) (Var_487));
  }
  {
    Var_485 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_485, 0) = ((MR_Box) (MmakeVarOs_61));
    MR_hl_field(MR_mktag(1), Var_485, 1) = ((MR_Box) (Var_486));
  }
  {
    Var_484 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_484, 0) = ((MR_Box) (MmakeVarAllPicOs_60));
    MR_hl_field(MR_mktag(1), Var_484, 1) = ((MR_Box) (Var_485));
  }
  {
    Var_483 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_483, 0) = ((MR_Box) (MmakeVarAllOs_59));
    MR_hl_field(MR_mktag(1), Var_483, 1) = ((MR_Box) (Var_484));
  }
  {
    Var_482 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_482, 0) = ((MR_Box) (MmakeVarDlls_58));
    MR_hl_field(MR_mktag(1), Var_482, 1) = ((MR_Box) (Var_483));
  }
  {
    Var_481 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_481, 0) = ((MR_Box) (MmakeVarCs_57));
    MR_hl_field(MR_mktag(1), Var_481, 1) = ((MR_Box) (Var_482));
  }
  {
    Var_480 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_480, 0) = ((MR_Box) (MmakeVarAllCs_52));
    MR_hl_field(MR_mktag(1), Var_480, 1) = ((MR_Box) (Var_481));
  }
  {
    Var_479 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_479, 0) = ((MR_Box) (MmakeVarInitCs_51));
    MR_hl_field(MR_mktag(1), Var_479, 1) = ((MR_Box) (Var_480));
  }
  {
    Var_478 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_478, 0) = ((MR_Box) (MmakeVarForeignDlls_50));
    MR_hl_field(MR_mktag(1), Var_478, 1) = ((MR_Box) (Var_479));
  }
  {
    Var_477 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_477, 0) = ((MR_Box) (MmakeVarForeignFileNames_49));
    MR_hl_field(MR_mktag(1), Var_477, 1) = ((MR_Box) (Var_478));
  }
  {
    Var_476 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_476, 0) = ((MR_Box) (MmakeVarForeignModules_41));
    MR_hl_field(MR_mktag(1), Var_476, 1) = ((MR_Box) (Var_477));
  }
  {
    Var_475 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_475, 0) = ((MR_Box) (MmakeVarModuleParentMods_36));
    MR_hl_field(MR_mktag(1), Var_475, 1) = ((MR_Box) (Var_476));
  }
  {
    Var_474 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_474, 0) = ((MR_Box) (MmakeVarModuleMods_28));
    MR_hl_field(MR_mktag(1), Var_474, 1) = ((MR_Box) (Var_475));
  }
  {
    Var_473 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_473, 0) = ((MR_Box) (MmakeVarModuleErrs_25));
    MR_hl_field(MR_mktag(1), Var_473, 1) = ((MR_Box) (Var_474));
  }
  {
    Var_472 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_472, 0) = ((MR_Box) (MmakeVarModuleDepErrs_26));
    MR_hl_field(MR_mktag(1), Var_472, 1) = ((MR_Box) (Var_473));
  }
  {
    Var_471 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_471, 0) = ((MR_Box) (MmakeVarModuleMs_24));
    MR_hl_field(MR_mktag(1), Var_471, 1) = ((MR_Box) (Var_472));
  }
  {
    MmakeEntries_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), MmakeEntries_100, 0) = ((MR_Box) (MmakeStartComment_17));
    MR_hl_field(MR_mktag(1), MmakeEntries_100, 1) = ((MR_Box) (Var_471));
  }
  Var_520 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[11]), MmakeEntries_100);
  *MmakeFile_12 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Var_520);
}

static void MR_CALL 
parse_tree__write_deps_file__get_fact_table_file_names_3_p_0(
  MR_Word DepsMap_4,
  MR_Word Modules_5,
  MR_Word * FactTableFileNames_6)
{
  MR_Word FactTableFileNamesSet_7;
  MR_Word Var_8;

  Var_8 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  parse_tree__write_deps_file__get_fact_table_file_names_4_p_0(DepsMap_4, Modules_5, Var_8, &FactTableFileNamesSet_7);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFileNamesSet_7, FactTableFileNames_6);
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
      MR_Word FactTableFileNames_12;
      MR_Word BurdenedModule_14;
      MR_Word ParseTreeModuleSrc_15;
      MR_Word Var_18;
      MR_Word STATE_VARIABLE_FactTableFileNames_19_19;
      MR_Box conv0_Var_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_FactTableFileNames_0_3;

      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), HeadVar__1_1, ((MR_Box) (Module_10)), &conv0_Var_18);
      Var_18 = ((MR_Word) (conv0_Var_18));
      BurdenedModule_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
      ParseTreeModuleSrc_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BurdenedModule_14, (MR_Integer) 1))));
      parse_tree__get_dependencies__get_fact_tables_2_p_0(ParseTreeModuleSrc_15, &FactTableFileNames_12);
      mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFileNames_12, STATE_VARIABLE_FactTableFileNames_0_3, &STATE_VARIABLE_FactTableFileNames_19_19);
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
  MR_bool succeeded;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Module_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Modules0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ModulesTail_9;
    MR_Word BurdenedModule_11;
    MR_Word Baggage_12;
    MR_Word Errors_13;
    MR_Word FatalErrors_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Box conv0_Var_15;

    parse_tree__write_deps_file__select_ok_modules_3_p_0(Modules0_6, DepsMap_2, &ModulesTail_9);
    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_2, ((MR_Box) (Module_5)), &conv0_Var_15);
    Var_15 = ((MR_Word) (conv0_Var_15));
    BurdenedModule_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 1))));
    Baggage_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BurdenedModule_11, (MR_Integer) 0))));
    Errors_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage_12, (MR_Integer) 7))));
    Var_16 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
    mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_13, Var_16, &FatalErrors_14);
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_14);
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

static void MR_CALL 
parse_tree__write_deps_file__get_fact_table_dependencies_6_p_0(
  MR_Word Globals_1,
  MR_Word OtherExt_2,
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

    parse_tree__file_names__fact_table_file_name_8_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_fact_table_dependencies\'/6", (MR_Integer) 1, OtherExt_2, ExtraLink_14, &FileName_16);
    parse_tree__write_deps_file__get_fact_table_dependencies_6_p_0(Globals_1, OtherExt_2, ExtraLinks_15, &FileNames_17);
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
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1297__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
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
  MR_bool succeeded;
  MR_Word BurdenedModule_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Dep_12, (MR_Integer) 1))));
  MR_Word Baggage_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BurdenedModule_21, (MR_Integer) 0))));
  MR_Word ParseTreeModuleSrc_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BurdenedModule_21, (MR_Integer) 1))));
  MR_Word ModuleName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_23, (MR_Integer) 0))));
  MR_Word IndirectOptDeps_25;
  MR_Word Intermod_26;
  MR_Word IntDeps_27;
  MR_Word ImpDeps_28;
  MR_Word IndirectDeps_29;
  MR_Word IntermodDeps_30;
  MR_Word FindModule_31;
  MR_Word TransOptDeps0_33;
  MR_Word TransOptDeps_36;
  MR_Word Errors_37;
  MR_Word FatalErrors_38;
  MR_Word Var_45;
  MR_Word TransOptDeps1_35;

  parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(IndirectOptDepsGraph_16, ModuleName_24, &IndirectOptDeps_25);
  libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 492, &Intermod_26);
  switch (Intermod_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(IntDepsGraph_13, ModuleName_24, &IntDeps_27);
        parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(ImpDepsGraph_14, ModuleName_24, &ImpDeps_28);
        parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(IndirectDepsGraph_15, ModuleName_24, &IndirectDeps_29);
      }
      break;
    case (MR_Integer) 1:
      {
        IntDeps_27 = IndirectOptDeps_25;
        ImpDeps_28 = IndirectOptDeps_25;
        IndirectDeps_29 = IndirectOptDeps_25;
      }
      break;
  }
  {
    IntermodDeps_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), IntermodDeps_30, 0) = ((MR_Box) (IntDeps_27));
    MR_hl_field(MR_mktag(1), IntermodDeps_30, 1) = ((MR_Box) (ImpDeps_28));
    MR_hl_field(MR_mktag(1), IntermodDeps_30, 2) = ((MR_Box) (IndirectDeps_29));
    MR_hl_field(MR_mktag(1), IntermodDeps_30, 3) = ((MR_Box) (IndirectOptDeps_25));
  }
  {
    FindModule_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), FindModule_31, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[2]));
    MR_hl_field(MR_mktag(0), FindModule_31, 1) = ((MR_Box) (parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_56_93_95_48_10_p_0_1));
    MR_hl_field(MR_mktag(0), FindModule_31, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), FindModule_31, 3) = ((MR_Box) (ModuleName_24));
  }
  mercury__list__drop_while_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), FindModule_31, TransOptOrder_17, &TransOptDeps0_33);
  succeeded = (TransOptDeps0_33 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    TransOptDeps1_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TransOptDeps0_33, (MR_Integer) 1))));
    TransOptDeps_36 = TransOptDeps1_35;
  }
  else
    TransOptDeps_36 = (MR_Word) ((MR_Unsigned) 0U);
  Errors_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage_22, (MR_Integer) 7))));
  Var_45 = parse_tree__parse_error__fatal_read_module_errors_0_f_0();
  mercury__set__intersect_3_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), Errors_37, Var_45, &FatalErrors_38);
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_read_module_error_0), FatalErrors_38);
  if (succeeded)
  {
    MR_Word AugCompUnit_39;
    MR_Word BurdenedAugCompUnit_40;
    MR_Word Var_46;

    parse_tree__prog_item__init_aug_compilation_unit_2_p_0(ParseTreeModuleSrc_23, &AugCompUnit_39);
    {
      BurdenedAugCompUnit_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), BurdenedAugCompUnit_40, 0) = ((MR_Box) (Baggage_22));
      MR_hl_field(MR_mktag(0), BurdenedAugCompUnit_40, 1) = ((MR_Box) (AugCompUnit_39));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (TransOptDeps_36));
    }
    parse_tree__write_deps_file__write_dependency_file_7_p_0(Globals_11, BurdenedAugCompUnit_40, IntermodDeps_30, IndirectOptDeps_25, Var_46);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_17;

  parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1327__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_17));
}

static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(
  MR_Word DepsGraph0_4,
  MR_Word ModuleName_5,
  MR_Word * Dependencies_6)
{
  MR_Word ModuleKey_7;
  MR_Word DepsGraph_8;
  MR_Word DepsKeysSet_9;
  MR_Word AddKeyDep_10;
  MR_Word Var_18;
  MR_Box conv1_Dependencies_6;

  mercury__digraph__add_vertex_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_5)), &ModuleKey_7, DepsGraph0_4, &DepsGraph_8);
  mercury__digraph__lookup_key_set_from_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DepsGraph_8, ModuleKey_7, &DepsKeysSet_9);
  {
    AddKeyDep_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), AddKeyDep_10, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_9[0]));
    MR_hl_field(MR_mktag(0), AddKeyDep_10, 1) = ((MR_Box) (parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1));
    MR_hl_field(MR_mktag(0), AddKeyDep_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), AddKeyDep_10, 3) = ((MR_Box) (DepsGraph_8));
  }
  Var_18 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  mercury__sparse_bitset__foldl_4_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]), AddKeyDep_10, DepsKeysSet_9, ((MR_Box) (Var_18)), &conv1_Dependencies_6);
  *Dependencies_6 = ((MR_Word) (conv1_Dependencies_6));
}

void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_7_p_0(
  MR_Word Globals_8,
  MR_Word BurdenedAugCompUnit_9,
  MR_Word IntermodDeps_10,
  MR_Word AllDeps_11,
  MR_Word MaybeTransOptDeps_12)
{
  MR_Word AugCompUnit_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BurdenedAugCompUnit_9, (MR_Integer) 1))));
  MR_Word ParseTreeModuleSrc_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_15, (MR_Integer) 0))));
  MR_Word ModuleName_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_16, (MR_Integer) 0))));
  MR_String DependencyFileName_18;
  MR_Word TmpDependencyFileNameRes_19;
  MR_Word ErrorStream_20;
  MR_Word ProgressStream_21;
  MR_String Var_46;

  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_8, (MR_String) "predicate \140parse_tree.write_deps_file.write_dependency_file\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[0])), ModuleName_17, &DependencyFileName_18);
  Var_46 = mercury__dir__dirname_1_f_0(DependencyFileName_18);
  mercury__io__file__make_temp_file_6_p_0(Var_46, (MR_String) "tmp_d", (MR_String) "", &TmpDependencyFileNameRes_19);
  libs__globals__get_error_output_stream_5_p_0(Globals_8, ModuleName_17, &ErrorStream_20);
  libs__globals__get_progress_output_stream_5_p_0(Globals_8, ModuleName_17, &ProgressStream_21);
  if (((MR_tag((MR_Word) TmpDependencyFileNameRes_19)) == (MR_Integer) 1))
  {
    MR_Word Error_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TmpDependencyFileNameRes_19, (MR_Integer) 0))));
    MR_String Message_23;
    MR_String Var_103;

    Var_103 = mercury__io__error_message_1_f_0(Error_22);
    Message_23 = mercury__string__f_43_43_2_f_0((MR_String) "Could not create temporary file: ", Var_103);
    libs__file_util__report_error_4_p_0(ErrorStream_20, Message_23);
  }
  else
  {
    MR_String TmpDependencyFileName_24 = ((MR_String) ((MR_hl_field(MR_mktag(0), TmpDependencyFileNameRes_19, (MR_Integer) 0))));
    MR_Word Verbose_25;
    MR_Word Result_26;

    libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 70, &Verbose_25);
    switch (Verbose_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(ProgressStream_21, (MR_String) "% Writing auto-dependency file \140");
          mercury__io__write_string_4_p_0(ProgressStream_21, DependencyFileName_18);
          mercury__io__write_string_4_p_0(ProgressStream_21, (MR_String) "\'...");
          mercury__io__flush_output_3_p_0(ProgressStream_21);
        }
        break;
    }
    mercury__io__open_output_4_p_0(TmpDependencyFileName_24, &Result_26);
    if (((MR_tag((MR_Word) Result_26)) == (MR_Integer) 1))
    {
      MR_Word IOError_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_26, (MR_Integer) 0))));
      MR_String IOErrorMessage_28;
      MR_String Message_105;
      MR_String Var_180;
      MR_String Var_181;

      libs__file_util__maybe_write_string_5_p_0(ProgressStream_21, Verbose_25, (MR_String) " failed.\n");
      libs__file_util__maybe_flush_output_4_p_0(ProgressStream_21, Verbose_25);
      mercury__io__error_message_2_p_0(IOError_27, &IOErrorMessage_28);
      Var_180 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", IOErrorMessage_28);
      Var_181 = mercury__string__f_43_43_2_f_0(TmpDependencyFileName_24, Var_180);
      Message_105 = mercury__string__f_43_43_2_f_0((MR_String) "error opening temporary file \140", Var_181);
      libs__file_util__report_error_4_p_0(ErrorStream_20, Message_105);
    }
    else
    {
      MR_Word DepStream_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result_26, (MR_Integer) 0))));
      MR_Word MmakeFile_30;
      MR_Word FirstRenameResult_31;

      parse_tree__write_deps_file__generate_d_file_8_p_0(Globals_8, BurdenedAugCompUnit_9, IntermodDeps_10, AllDeps_11, MaybeTransOptDeps_12, &MmakeFile_30);
      libs__mmakefiles__write_mmakefile_4_p_0(DepStream_29, MmakeFile_30);
      mercury__io__close_output_3_p_0(DepStream_29);
      mercury__io__file__rename_file_5_p_0(TmpDependencyFileName_24, DependencyFileName_18, &FirstRenameResult_31);
      if ((FirstRenameResult_31 == (MR_Word) ((MR_Unsigned) 0U)))
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_21, Verbose_25, (MR_String) " done.\n");
      else
      {
        MR_Word RemoveResult_33;

        mercury__io__file__remove_file_4_p_0(DependencyFileName_18, &RemoveResult_33);
        if ((RemoveResult_33 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word SecondRenameResult_36;

          mercury__io__file__rename_file_5_p_0(TmpDependencyFileName_24, DependencyFileName_18, &SecondRenameResult_36);
          if ((SecondRenameResult_36 == (MR_Word) ((MR_Unsigned) 0U)))
            libs__file_util__maybe_write_string_5_p_0(ProgressStream_21, Verbose_25, (MR_String) " done.\n");
          else
          {
            MR_Word Error5_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), SecondRenameResult_36, (MR_Integer) 0))));
            MR_String Message_107;
            MR_String ErrorMsg_108;
            MR_String Var_169;
            MR_String Var_170;
            MR_String Var_172;
            MR_String Var_173;

            libs__file_util__maybe_write_string_5_p_0(ProgressStream_21, Verbose_25, (MR_String) " failed.\n");
            libs__file_util__maybe_flush_output_4_p_0(ProgressStream_21, Verbose_25);
            mercury__io__error_message_2_p_0(Error5_37, &ErrorMsg_108);
            Var_169 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", ErrorMsg_108);
            Var_170 = mercury__string__f_43_43_2_f_0(DependencyFileName_18, Var_169);
            Var_172 = mercury__string__f_43_43_2_f_0((MR_String) "\' as \140", Var_170);
            Var_173 = mercury__string__f_43_43_2_f_0(TmpDependencyFileName_24, Var_172);
            Message_107 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t rename file \140", Var_173);
            libs__file_util__report_error_4_p_0(ErrorStream_20, Message_107);
          }
        }
        else
        {
          MR_Word Error4_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RemoveResult_33, (MR_Integer) 0))));
          MR_String ErrorMsg_35;
          MR_String Message_106;
          MR_String Var_176;
          MR_String Var_177;

          libs__file_util__maybe_write_string_5_p_0(ProgressStream_21, Verbose_25, (MR_String) " failed.\n");
          libs__file_util__maybe_flush_output_4_p_0(ProgressStream_21, Verbose_25);
          mercury__io__error_message_2_p_0(Error4_34, &ErrorMsg_35);
          Var_176 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", ErrorMsg_35);
          Var_177 = mercury__string__f_43_43_2_f_0(DependencyFileName_18, Var_176);
          Message_106 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t remove file \140", Var_177);
          libs__file_util__report_error_4_p_0(ErrorStream_20, Message_106);
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_8_p_0(
  MR_Word Globals_9,
  MR_Word BurdenedAugCompUnit_10,
  MR_Word IntermodDeps_11,
  MR_Word AllDeps_12,
  MR_Word MaybeTransOptDeps_13,
  MR_Word * STATE_VARIABLE_MmakeFile_71)
{
  MR_bool succeeded;
  MR_Word Baggage_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BurdenedAugCompUnit_10, (MR_Integer) 0))));
  MR_Word AugCompUnit_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), BurdenedAugCompUnit_10, (MR_Integer) 1))));
  MR_String SourceFileName_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), Baggage_16, (MR_Integer) 0))));
  MR_Word SourceFileModuleName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage_16, (MR_Integer) 2))));
  MR_Word MaybeTopModule_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Baggage_16, (MR_Integer) 3))));
  MR_Word ParseTreeModuleSrc_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_17, (MR_Integer) 0))));
  MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_21, (MR_Integer) 0))));
  MR_String ModuleNameString_23;
  MR_Word Ancestors_24;
  MR_Word LongDeps0_25;
  MR_Word PublicChildrenMap_31;
  MR_Word PublicChildren_32;
  MR_Word FactTableFileNamesSet_33;
  MR_Word ForeignIncludeFiles_34;
  MR_String Version_35;
  MR_String FullArch_36;
  MR_Word MmakeStartComment_37;
  MR_String ModuleMakeVarName_38;
  MR_Word LongDeps_39;
  MR_Word ShortDeps0_40;
  MR_Word ShortDeps1_41;
  MR_Word ShortDeps_42;
  MR_String TransOptDateFileName_43;
  MR_Word MmakeRulesTransOpt_44;
  MR_String ObjFileName_45;
  MR_Word MmakeVarsFactTables_46;
  MR_Word FactTableSourceGroups_47;
  MR_Word MmakeRulesFactTables_48;
  MR_String ErrFileName_50;
  MR_String OptDateFileName_51;
  MR_String CDateFileName_52;
  MR_String JavaDateFileName_53;
  MR_String PicObjFileName_54;
  MR_String Int0FileName_55;
  MR_Word MmakeRuleDateFileDeps_56;
  MR_Word MmakeRulesNestedDeps_57;
  MR_Word MmakeRulesIntermod_58;
  MR_String CFileName_59;
  MR_Word MmakeRulesCHeaders_60;
  MR_Word MmakeFragmentModuleDep_61;
  MR_String DateFileName_62;
  MR_String Date0FileName_63;
  MR_Word MmakeRulesParentDates_64;
  MR_Word MmakeRulesForeignImports_65;
  MR_String Date3FileName_66;
  MR_Word MmakeRulesInstallShadows_67;
  MR_Word MmakeRulesSubDirShorthand_68;
  MR_Word HaveMap_69;
  MR_Word MmakeRulesPatterns_70;
  MR_Word STATE_VARIABLE_MmakeFile_157_157;
  MR_Word STATE_VARIABLE_MmakeFile_158_158;
  MR_Word STATE_VARIABLE_MmakeFile_159_159;
  MR_Word STATE_VARIABLE_MmakeFile_160_160;
  MR_Word STATE_VARIABLE_MmakeFile_161_161;
  MR_Word STATE_VARIABLE_MmakeFile_162_162;
  MR_Word STATE_VARIABLE_MmakeFile_163_163;
  MR_Word STATE_VARIABLE_MmakeFile_164_164;
  MR_Word STATE_VARIABLE_MmakeFile_165_165;
  MR_Word STATE_VARIABLE_MmakeFile_166_166;
  MR_Word STATE_VARIABLE_MmakeFile_167_167;
  MR_Word STATE_VARIABLE_MmakeFile_168_168;
  MR_Word STATE_VARIABLE_MmakeFile_169_169;
  MR_Word STATE_VARIABLE_MmakeFile_170_170;
  MR_String SourceFileBase_49;

  ModuleNameString_23 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_22);
  Ancestors_24 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_22);
  if ((IntermodDeps_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word IndirectIntSpecs_26;
    MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_21, (MR_Integer) 9))));

    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), Var_74, &LongDeps0_25);
    IndirectIntSpecs_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_17, (MR_Integer) 3))));
    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0), IndirectIntSpecs_26, &ShortDeps0_40);
  }
  else
  {
    MR_Word IntDeps_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntermodDeps_11, (MR_Integer) 0))));
    MR_Word ImpDeps_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntermodDeps_11, (MR_Integer) 1))));

    ShortDeps0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntermodDeps_11, (MR_Integer) 2))));
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDeps_28, ImpDeps_29, &LongDeps0_25);
  }
  PublicChildrenMap_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_21, (MR_Integer) 2))));
  mercury__one_or_more_map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), PublicChildrenMap_31, &PublicChildren_32);
  parse_tree__get_dependencies__get_fact_tables_2_p_0(ParseTreeModuleSrc_21, &FactTableFileNamesSet_33);
  parse_tree__get_dependencies__get_foreign_include_file_infos_2_p_0(ParseTreeModuleSrc_21, &ForeignIncludeFiles_34);
  mercury__library__version_2_p_0(&Version_35, &FullArch_36);
  {
    MmakeStartComment_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), MmakeStartComment_37, 0) = ((MR_Box) ((MR_String) "module dependencies"));
    MR_hl_field(MR_mktag(0), MmakeStartComment_37, 1) = ((MR_Box) (ModuleNameString_23));
    MR_hl_field(MR_mktag(0), MmakeStartComment_37, 2) = ((MR_Box) (SourceFileName_18));
    MR_hl_field(MR_mktag(0), MmakeStartComment_37, 3) = ((MR_Box) (Version_35));
    MR_hl_field(MR_mktag(0), MmakeStartComment_37, 4) = ((MR_Box) (FullArch_36));
  }
  parse_tree__file_names__module_name_to_make_var_name_2_p_0(ModuleName_22, &ModuleMakeVarName_38);
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)), LongDeps0_25, &LongDeps_39);
  mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ShortDeps0_40, LongDeps_39, &ShortDeps1_41);
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)), ShortDeps1_41, &ShortDeps_42);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/8", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[4])), ModuleName_22, &TransOptDateFileName_43);
  parse_tree__write_deps_file__construct_trans_opt_deps_rule_7_p_0(Globals_9, MaybeTransOptDeps_13, LongDeps_39, TransOptDateFileName_43, &MmakeRulesTransOpt_44);
  succeeded = mercury__string__remove_suffix_3_p_0(SourceFileName_18, (MR_String) ".m", &SourceFileBase_49);
  if (succeeded)
    ErrFileName_50 = mercury__string__f_43_43_2_f_0(SourceFileBase_49, (MR_String) ".err");
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/8", (MR_String) "source file name doesn\'t end in \140.m\'");
      return;
    }
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/8", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[5])), ModuleName_22, &OptDateFileName_51);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/8", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[6])), ModuleName_22, &CDateFileName_52);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/8", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[7])), ModuleName_22, &ObjFileName_45);
  parse_tree__write_deps_file__construct_fact_tables_entries_7_p_0(ModuleMakeVarName_38, SourceFileName_18, ObjFileName_45, FactTableFileNamesSet_33, &MmakeVarsFactTables_46, &FactTableSourceGroups_47, &MmakeRulesFactTables_48);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/8", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[8])), ModuleName_22, &JavaDateFileName_53);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/8", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[9])), ModuleName_22, &PicObjFileName_54);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/8", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[10])), ModuleName_22, &Int0FileName_55);
  parse_tree__write_deps_file__construct_date_file_deps_rule_18_p_0(Globals_9, ModuleName_22, SourceFileName_18, Ancestors_24, LongDeps_39, ShortDeps_42, PublicChildren_32, Int0FileName_55, OptDateFileName_51, TransOptDateFileName_43, ForeignIncludeFiles_34, CDateFileName_52, JavaDateFileName_53, ErrFileName_50, FactTableSourceGroups_47, &MmakeRuleDateFileDeps_56);
  parse_tree__write_deps_file__construct_build_nested_children_first_rule_6_p_0(Globals_9, ModuleName_22, MaybeTopModule_20, &MmakeRulesNestedDeps_57);
  parse_tree__write_deps_file__construct_intermod_rules_12_p_0(Globals_9, ModuleName_22, LongDeps_39, AllDeps_12, ErrFileName_50, TransOptDateFileName_43, CDateFileName_52, JavaDateFileName_53, ObjFileName_45, &MmakeRulesIntermod_58);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/8", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[11])), ModuleName_22, &CFileName_59);
  parse_tree__write_deps_file__construct_c_header_rules_9_p_0(Globals_9, ModuleName_22, AllDeps_12, CFileName_59, ObjFileName_45, PicObjFileName_54, &MmakeRulesCHeaders_60);
  parse_tree__write_deps_file__construct_module_dep_fragment_6_p_0(Globals_9, ModuleName_22, CFileName_59, &MmakeFragmentModuleDep_61);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/8", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[12])), ModuleName_22, &DateFileName_62);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/8", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[13])), ModuleName_22, &Date0FileName_63);
  parse_tree__write_deps_file__construct_self_and_parent_date_date0_rules_10_p_0(Globals_9, SourceFileName_18, Date0FileName_63, DateFileName_62, Ancestors_24, LongDeps_39, ShortDeps_42, &MmakeRulesParentDates_64);
  parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0(Globals_9, AugCompUnit_17, IntermodDeps_11, SourceFileModuleName_19, ObjFileName_45, PicObjFileName_54, &MmakeRulesForeignImports_65);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/8", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[14])), ModuleName_22, &Date3FileName_66);
  parse_tree__write_deps_file__construct_install_shadow_rules_11_p_0(Globals_9, ModuleName_22, Int0FileName_55, Date0FileName_63, DateFileName_62, Date3FileName_66, OptDateFileName_51, TransOptDateFileName_43, &MmakeRulesInstallShadows_67);
  parse_tree__write_deps_file__construct_subdir_short_rules_5_p_0(Globals_9, ModuleName_22, &MmakeRulesSubDirShorthand_68);
  parse_tree__source_file_map__have_source_file_map_3_p_0(&HaveMap_69);
  parse_tree__write_deps_file__construct_any_needed_pattern_rules_12_p_0(HaveMap_69, ModuleName_22, SourceFileModuleName_19, SourceFileName_18, Date0FileName_63, DateFileName_62, Date3FileName_66, OptDateFileName_51, TransOptDateFileName_43, CDateFileName_52, JavaDateFileName_53, &MmakeRulesPatterns_70);
  libs__mmakefiles__start_mmakefile_1_p_0(&STATE_VARIABLE_MmakeFile_157_157);
  libs__mmakefiles__add_mmake_entry_3_p_0(MmakeStartComment_37, STATE_VARIABLE_MmakeFile_157_157, &STATE_VARIABLE_MmakeFile_158_158);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesTransOpt_44, STATE_VARIABLE_MmakeFile_158_158, &STATE_VARIABLE_MmakeFile_159_159);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeVarsFactTables_46, STATE_VARIABLE_MmakeFile_159_159, &STATE_VARIABLE_MmakeFile_160_160);
  libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleDateFileDeps_56, STATE_VARIABLE_MmakeFile_160_160, &STATE_VARIABLE_MmakeFile_161_161);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesFactTables_48, STATE_VARIABLE_MmakeFile_161_161, &STATE_VARIABLE_MmakeFile_162_162);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesNestedDeps_57, STATE_VARIABLE_MmakeFile_162_162, &STATE_VARIABLE_MmakeFile_163_163);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesIntermod_58, STATE_VARIABLE_MmakeFile_163_163, &STATE_VARIABLE_MmakeFile_164_164);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesCHeaders_60, STATE_VARIABLE_MmakeFile_164_164, &STATE_VARIABLE_MmakeFile_165_165);
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentModuleDep_61, STATE_VARIABLE_MmakeFile_165_165, &STATE_VARIABLE_MmakeFile_166_166);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesParentDates_64, STATE_VARIABLE_MmakeFile_166_166, &STATE_VARIABLE_MmakeFile_167_167);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesForeignImports_65, STATE_VARIABLE_MmakeFile_167_167, &STATE_VARIABLE_MmakeFile_168_168);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesInstallShadows_67, STATE_VARIABLE_MmakeFile_168_168, &STATE_VARIABLE_MmakeFile_169_169);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesSubDirShorthand_68, STATE_VARIABLE_MmakeFile_169_169, &STATE_VARIABLE_MmakeFile_170_170);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesPatterns_70, STATE_VARIABLE_MmakeFile_170_170, STATE_VARIABLE_MmakeFile_71);
}

static void MR_CALL 
parse_tree__write_deps_file__construct_any_needed_pattern_rules_12_p_0(
  MR_Word HaveMap_13,
  MR_Word ModuleName_14,
  MR_Word SourceFileModuleName_15,
  MR_String SourceFileName_16,
  MR_String Date0FileName_17,
  MR_String DateFileName_18,
  MR_String Date3FileName_19,
  MR_String OptDateFileName_20,
  MR_String TransOptDateFileName_21,
  MR_String CDateFileName_22,
  MR_String JavaDateFileName_23,
  MR_Word * MmakeRulesPatterns_24)
{
  MR_bool succeeded;
  MR_String ModuleArg_25;
  MR_String Var_100;

  switch (HaveMap_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ModuleArg_25 = SourceFileName_16;
      break;
    case (MR_Integer) 1:
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(SourceFileModuleName_15, &ModuleArg_25);
      break;
  }
  Var_100 = parse_tree__source_file_map__default_source_file_name_1_f_0(ModuleName_14);
  succeeded = (strcmp(SourceFileName_16, Var_100) == 0);
  if (succeeded)
    *MmakeRulesPatterns_24 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_31;
    MR_String Var_32;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_41;
    MR_String Var_42;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_51;
    MR_String Var_52;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_61;
    MR_String Var_62;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_71;
    MR_String Var_72;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_81;
    MR_String Var_82;
    MR_String Var_84;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_93;
    MR_String Var_94;
    MR_String Var_96;

    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_29, 0) = ((MR_Box) (SourceFileName_16));
      MR_hl_field(MR_mktag(1), Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCPI) \044(ALL_GRADEFLAGS) \044(ALL_MCPIFLAGS) ", ModuleArg_25);
    {
      Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) ((MR_String) "date0_on_src"));
      MR_hl_field(MR_mktag(3), Var_26, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_26, 3) = ((MR_Box) (Date0FileName_17));
      MR_hl_field(MR_mktag(3), Var_26, 4) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(3), Var_26, 5) = ((MR_Box) (Var_31));
    }
    Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCI) \044(ALL_GRADEFLAGS) \044(ALL_MCIFLAGS) ", ModuleArg_25);
    {
      Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) ((MR_String) "date_on_src"));
      MR_hl_field(MR_mktag(3), Var_36, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_36, 3) = ((MR_Box) (DateFileName_18));
      MR_hl_field(MR_mktag(3), Var_36, 4) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(3), Var_36, 5) = ((MR_Box) (Var_41));
    }
    Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCSI) \044(ALL_GRADEFLAGS) \044(ALL_MCSIFLAGS) ", ModuleArg_25);
    {
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_46, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_46, 1) = ((MR_Box) ((MR_String) "date3_on_src"));
      MR_hl_field(MR_mktag(3), Var_46, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_46, 3) = ((MR_Box) (Date3FileName_19));
      MR_hl_field(MR_mktag(3), Var_46, 4) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(3), Var_46, 5) = ((MR_Box) (Var_51));
    }
    Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCOI) \044(ALL_GRADEFLAGS) \044(ALL_MCOIFLAGS) ", ModuleArg_25);
    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_56, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_56, 1) = ((MR_Box) ((MR_String) "opt_date_on_src"));
      MR_hl_field(MR_mktag(3), Var_56, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_56, 3) = ((MR_Box) (OptDateFileName_20));
      MR_hl_field(MR_mktag(3), Var_56, 4) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(3), Var_56, 5) = ((MR_Box) (Var_61));
    }
    Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCTOI) \044(ALL_GRADEFLAGS) \044(ALL_MCTOIFLAGS) ", ModuleArg_25);
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_66, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_66, 1) = ((MR_Box) ((MR_String) "trans_opt_date_on_src"));
      MR_hl_field(MR_mktag(3), Var_66, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_66, 3) = ((MR_Box) (TransOptDateFileName_21));
      MR_hl_field(MR_mktag(3), Var_66, 4) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(3), Var_66, 5) = ((MR_Box) (Var_71));
    }
    Var_84 = mercury__string__f_43_43_2_f_0(ModuleArg_25, (MR_String) " \044(ERR_REDIRECT)");
    Var_82 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) ", Var_84);
    {
      Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
      MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) ((MR_String) "c_date_on_src"));
      MR_hl_field(MR_mktag(3), Var_76, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_76, 3) = ((MR_Box) (CDateFileName_22));
      MR_hl_field(MR_mktag(3), Var_76, 4) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(3), Var_76, 5) = ((MR_Box) (Var_81));
    }
    Var_96 = mercury__string__f_43_43_2_f_0(ModuleArg_25, (MR_String) " \044(ERR_REDIRECT)");
    Var_94 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) --java-only ", Var_96);
    {
      Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) (Var_94));
      MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_88, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), Var_88, 1) = ((MR_Box) ((MR_String) "java_date_on_src"));
      MR_hl_field(MR_mktag(3), Var_88, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_88, 3) = ((MR_Box) (JavaDateFileName_23));
      MR_hl_field(MR_mktag(3), Var_88, 4) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(3), Var_88, 5) = ((MR_Box) (Var_93));
    }
    {
      Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Var_88));
      MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (Var_76));
      MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) (Var_87));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_75));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_65));
    }
    {
      Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_45));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MmakeRulesPatterns_24 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_35));
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__construct_subdir_short_rules_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MmakeRule_10;

  parse_tree__write_deps_file__construct_subdirs_shorthand_rule_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_MmakeRule_10);
  *wrapper_arg_2 = ((MR_Box) (conv0_MmakeRule_10));
}

static void MR_CALL 
parse_tree__write_deps_file__construct_subdir_short_rules_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleName_7,
  MR_Word * MmakeRulesSubDirShorthand_8)
{
  MR_Word UseSubdirs_10;

  libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 676, &UseSubdirs_10);
  switch (UseSubdirs_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *MmakeRulesSubDirShorthand_8 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_33;
        MR_Box conv1_STATE_VARIABLE_IO_13;

        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_subdir_short_rules_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Globals_6));
          MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) (ModuleName_7));
        }
        mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_other_ext_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_33, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[14])), MmakeRulesSubDirShorthand_8, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__construct_install_shadow_rules_11_p_0(
  MR_Word Globals_12,
  MR_Word ModuleName_13,
  MR_String Int0FileName_14,
  MR_String Date0FileName_15,
  MR_String DateFileName_16,
  MR_String Date3FileName_17,
  MR_String OptDateFileName_18,
  MR_String TransOptDateFileName_19,
  MR_Word * MmakeRulesInstallShadows_20)
{
  MR_String IntFileName_22;
  MR_String Int2FileName_23;
  MR_String Int3FileName_24;
  MR_String OptFileName_25;
  MR_String TransOptFileName_26;
  MR_Word Var_59;
  MR_Word Var_62;
  MR_Word Var_64;
  MR_String Var_65;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_71;
  MR_Word Var_73;
  MR_String Var_74;
  MR_Word Var_76;
  MR_Word Var_77;
  MR_Word Var_82;
  MR_String Var_83;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_89;
  MR_Word Var_91;
  MR_String Var_92;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_98;
  MR_Word Var_100;
  MR_String Var_101;
  MR_Word Var_103;
  MR_Word Var_104;
  MR_Word Var_107;
  MR_Word Var_109;
  MR_String Var_110;

  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_deps_file.construct_install_shadow_rules\'/11", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[16])), ModuleName_13, &IntFileName_22);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_deps_file.construct_install_shadow_rules\'/11", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[17])), ModuleName_13, &Int2FileName_23);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_deps_file.construct_install_shadow_rules\'/11", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[23])), ModuleName_13, &Int3FileName_24);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_deps_file.construct_install_shadow_rules\'/11", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[19])), ModuleName_13, &OptFileName_25);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_deps_file.construct_install_shadow_rules\'/11", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[15])), ModuleName_13, &TransOptFileName_26);
  {
    Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_62, 0) = ((MR_Box) (Date0FileName_15));
    MR_hl_field(MR_mktag(1), Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_65 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_65));
    MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) ((MR_String) "int0_on_date0"));
    MR_hl_field(MR_mktag(3), Var_59, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), Var_59, 3) = ((MR_Box) (Int0FileName_14));
    MR_hl_field(MR_mktag(3), Var_59, 4) = ((MR_Box) (Var_62));
    MR_hl_field(MR_mktag(3), Var_59, 5) = ((MR_Box) (Var_64));
  }
  {
    Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (DateFileName_16));
    MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_74 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_74));
    MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_68, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), Var_68, 1) = ((MR_Box) ((MR_String) "int_on_date"));
    MR_hl_field(MR_mktag(3), Var_68, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), Var_68, 3) = ((MR_Box) (IntFileName_22));
    MR_hl_field(MR_mktag(3), Var_68, 4) = ((MR_Box) (Var_71));
    MR_hl_field(MR_mktag(3), Var_68, 5) = ((MR_Box) (Var_73));
  }
  Var_83 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Var_83));
    MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_77, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), Var_77, 1) = ((MR_Box) ((MR_String) "int2_on_date"));
    MR_hl_field(MR_mktag(3), Var_77, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), Var_77, 3) = ((MR_Box) (Int2FileName_23));
    MR_hl_field(MR_mktag(3), Var_77, 4) = ((MR_Box) (Var_71));
    MR_hl_field(MR_mktag(3), Var_77, 5) = ((MR_Box) (Var_82));
  }
  {
    Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (Date3FileName_17));
    MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_92 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (Var_92));
    MR_hl_field(MR_mktag(1), Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_86 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_86, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), Var_86, 1) = ((MR_Box) ((MR_String) "int3_on_date3"));
    MR_hl_field(MR_mktag(3), Var_86, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), Var_86, 3) = ((MR_Box) (Int3FileName_24));
    MR_hl_field(MR_mktag(3), Var_86, 4) = ((MR_Box) (Var_89));
    MR_hl_field(MR_mktag(3), Var_86, 5) = ((MR_Box) (Var_91));
  }
  {
    Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (OptDateFileName_18));
    MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_101 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (Var_101));
    MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_95, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), Var_95, 1) = ((MR_Box) ((MR_String) "opt_on_opt_date"));
    MR_hl_field(MR_mktag(3), Var_95, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), Var_95, 3) = ((MR_Box) (OptFileName_25));
    MR_hl_field(MR_mktag(3), Var_95, 4) = ((MR_Box) (Var_98));
    MR_hl_field(MR_mktag(3), Var_95, 5) = ((MR_Box) (Var_100));
  }
  {
    Var_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_107, 0) = ((MR_Box) (TransOptDateFileName_19));
    MR_hl_field(MR_mktag(1), Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_110 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (Var_110));
    MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_104 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_104, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), Var_104, 1) = ((MR_Box) ((MR_String) "trans_opt_on_trans_opt_date"));
    MR_hl_field(MR_mktag(3), Var_104, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), Var_104, 3) = ((MR_Box) (TransOptFileName_26));
    MR_hl_field(MR_mktag(3), Var_104, 4) = ((MR_Box) (Var_107));
    MR_hl_field(MR_mktag(3), Var_104, 5) = ((MR_Box) (Var_109));
  }
  {
    Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_103, 0) = ((MR_Box) (Var_104));
    MR_hl_field(MR_mktag(1), Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (Var_95));
    MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) (Var_103));
  }
  {
    Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (Var_86));
    MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) (Var_94));
  }
  {
    Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Var_77));
    MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (Var_85));
  }
  {
    Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (Var_68));
    MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_76));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRulesInstallShadows_20 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_59));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_67));
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv10_LambdaHeadVar__2_63;

  succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__construct_foreign_import_rules__884__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv10_LambdaHeadVar__2_63);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv10_LambdaHeadVar__2_63));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__construct_foreign_import_rules__878__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_STATE_VARIABLE_FIMSpecs_13;

  parse_tree__write_deps_file__gather_fim_specs_in_int_for_opt_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_STATE_VARIABLE_FIMSpecs_13);
  *wrapper_arg_3 = ((MR_Box) (conv8_STATE_VARIABLE_FIMSpecs_13));
}

static void MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_STATE_VARIABLE_FIMSpecs_7;

  parse_tree__write_deps_file__gather_fim_specs_in_parse_tree_plain_opt_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv6_STATE_VARIABLE_FIMSpecs_7);
  *wrapper_arg_3 = ((MR_Box) (conv6_STATE_VARIABLE_FIMSpecs_7));
}

static void MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_STATE_VARIABLE_FIMSpecs_9;

  parse_tree__write_deps_file__gather_fim_specs_in_indirect_int2_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv4_STATE_VARIABLE_FIMSpecs_9);
  *wrapper_arg_3 = ((MR_Box) (conv4_STATE_VARIABLE_FIMSpecs_9));
}

static void MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_FIMSpecs_9;

  parse_tree__write_deps_file__gather_fim_specs_in_direct_int1_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_FIMSpecs_9);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_FIMSpecs_9));
}

static void MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_FIMSpecs_9;

  parse_tree__write_deps_file__gather_fim_specs_in_ancestor_int_spec_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_FIMSpecs_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_FIMSpecs_9));
}

static void MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0(
  MR_Word Globals_10,
  MR_Word AugCompUnit_11,
  MR_Word IntermodDeps_12,
  MR_Word SourceFileModuleName_13,
  MR_String ObjFileName_14,
  MR_String PicObjFileName_15,
  MR_Word * MmakeRulesForeignImports_16)
{
  MR_bool succeeded;
  MR_Word ParseTreeModuleSrc_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_11, (MR_Integer) 0))));
  MR_Word AncestorIntSpecs_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_11, (MR_Integer) 1))));
  MR_Word DirectInt1Specs_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_11, (MR_Integer) 2))));
  MR_Word IndirectInt2Specs_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_11, (MR_Integer) 3))));
  MR_Word PlainOpts_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_11, (MR_Integer) 4))));
  MR_Word IntForOptSpecs_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), AugCompUnit_11, (MR_Integer) 6))));
  MR_Word ModuleName_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ParseTreeModuleSrc_18, (MR_Integer) 0))));
  MR_Word ForeignImportedModuleNamesSet_31;
  MR_Word ForeignImportedModuleNames_38;

  if ((IntermodDeps_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word FIMSpecs_32;
    MR_Word BackendLangs_33;
    MR_Word IsBackendFIM_34;
    MR_Word STATE_VARIABLE_FIMSpecs_48_48;
    MR_Word STATE_VARIABLE_FIMSpecs_50_50;
    MR_Word STATE_VARIABLE_FIMSpecs_52_52;
    MR_Word STATE_VARIABLE_FIMSpecs_54_54;
    MR_Word STATE_VARIABLE_FIMSpecs_56_56;
    MR_Word STATE_VARIABLE_FIMSpecs_58_58;
    MR_Word Var_61;
    MR_Box conv1_STATE_VARIABLE_FIMSpecs_50_50;
    MR_Box conv3_STATE_VARIABLE_FIMSpecs_52_52;
    MR_Box conv5_STATE_VARIABLE_FIMSpecs_54_54;
    MR_Box conv7_STATE_VARIABLE_FIMSpecs_56_56;
    MR_Box conv9_STATE_VARIABLE_FIMSpecs_58_58;

    parse_tree__get_dependencies__get_fim_specs_2_p_0(ParseTreeModuleSrc_18, &STATE_VARIABLE_FIMSpecs_48_48);
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[5]), AncestorIntSpecs_19, ((MR_Box) (STATE_VARIABLE_FIMSpecs_48_48)), &conv1_STATE_VARIABLE_FIMSpecs_50_50);
    STATE_VARIABLE_FIMSpecs_50_50 = ((MR_Word) (conv1_STATE_VARIABLE_FIMSpecs_50_50));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[6]), DirectInt1Specs_20, ((MR_Box) (STATE_VARIABLE_FIMSpecs_50_50)), &conv3_STATE_VARIABLE_FIMSpecs_52_52);
    STATE_VARIABLE_FIMSpecs_52_52 = ((MR_Word) (conv3_STATE_VARIABLE_FIMSpecs_52_52));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[7]), IndirectInt2Specs_21, ((MR_Box) (STATE_VARIABLE_FIMSpecs_52_52)), &conv5_STATE_VARIABLE_FIMSpecs_54_54);
    STATE_VARIABLE_FIMSpecs_54_54 = ((MR_Word) (conv5_STATE_VARIABLE_FIMSpecs_54_54));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[8]), PlainOpts_22, ((MR_Box) (STATE_VARIABLE_FIMSpecs_54_54)), &conv7_STATE_VARIABLE_FIMSpecs_56_56);
    STATE_VARIABLE_FIMSpecs_56_56 = ((MR_Word) (conv7_STATE_VARIABLE_FIMSpecs_56_56));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[9]), IntForOptSpecs_24, ((MR_Box) (STATE_VARIABLE_FIMSpecs_56_56)), &conv9_STATE_VARIABLE_FIMSpecs_58_58);
    STATE_VARIABLE_FIMSpecs_58_58 = ((MR_Word) (conv9_STATE_VARIABLE_FIMSpecs_58_58));
    libs__globals__get_backend_foreign_languages_2_p_0(Globals_10, &BackendLangs_33);
    {
      IsBackendFIM_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), IsBackendFIM_34, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), IsBackendFIM_34, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0_6));
      MR_hl_field(MR_mktag(0), IsBackendFIM_34, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), IsBackendFIM_34, 3) = ((MR_Box) (BackendLangs_33));
    }
    mercury__set__filter_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), IsBackendFIM_34, STATE_VARIABLE_FIMSpecs_58_58, &FIMSpecs_32);
    {
      Var_61 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_61, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[6]));
      MR_hl_field(MR_mktag(0), Var_61, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_foreign_import_rules_9_p_0_7));
      MR_hl_field(MR_mktag(0), Var_61, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_61, 3) = ((MR_Box) (SourceFileModuleName_13));
    }
    mercury__set__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_61, FIMSpecs_32, &ForeignImportedModuleNamesSet_31);
  }
  else
    ForeignImportedModuleNamesSet_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), IntermodDeps_12, (MR_Integer) 3))));
  ForeignImportedModuleNames_38 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ForeignImportedModuleNamesSet_31);
  if ((ForeignImportedModuleNames_38 == (MR_Word) ((MR_Unsigned) 0U)))
    *MmakeRulesForeignImports_16 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Target_41;

    libs__globals__get_target_2_p_0(Globals_10, &Target_41);
    switch (Target_41) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ForeignImportTargets_42;
          MR_Word MmakeRuleForeignImports_44;
          MR_Word Var_75;

          {
            Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_75, 0) = ((MR_Box) (PicObjFileName_15));
            MR_hl_field(MR_mktag(1), Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            ForeignImportTargets_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ForeignImportTargets_42, 0) = ((MR_Box) (ObjFileName_14));
            MR_hl_field(MR_mktag(0), ForeignImportTargets_42, 1) = ((MR_Box) (Var_75));
          }
          parse_tree__write_deps_file__gather_foreign_import_deps_7_p_0(Globals_10, (MR_Word) (((MR_Box) ((MR_String) ".mh"))), ForeignImportTargets_42, ForeignImportedModuleNames_38, &MmakeRuleForeignImports_44);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MmakeRulesForeignImports_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MmakeRuleForeignImports_44));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
        *MmakeRulesForeignImports_16 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 2:
        {
          MR_String ClassFileName_45;
          MR_Word ForeignImportTargets_83;
          MR_Word MmakeRuleForeignImports_85;

          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140parse_tree.write_deps_file.construct_foreign_import_rules\'/9", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[24])), ModuleName_27, &ClassFileName_45);
          {
            ForeignImportTargets_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ForeignImportTargets_83, 0) = ((MR_Box) (ClassFileName_45));
            MR_hl_field(MR_mktag(0), ForeignImportTargets_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__write_deps_file__gather_foreign_import_deps_7_p_0(Globals_10, (MR_Word) (((MR_Box) ((MR_String) ".java"))), ForeignImportTargets_83, ForeignImportedModuleNames_38, &MmakeRuleForeignImports_85);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MmakeRulesForeignImports_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MmakeRuleForeignImports_85));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
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
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__6_6;

  parse_tree__file_names__module_name_to_file_name_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
parse_tree__write_deps_file__gather_foreign_import_deps_7_p_0(
  MR_Word Globals_8,
  MR_Word ForeignImportOtherExt_9,
  MR_Word ForeignImportTargets_10,
  MR_Word ForeignImportedModuleNames_11,
  MR_Word * MmakeRule_12)
{
  MR_Word ForeignImportedFileNames_14;
  MR_String ForeignImportExtStr_15;
  MR_String RuleName_16;
  MR_Word Var_19;
  MR_String Var_22;
  MR_Word Var_33;
  MR_Box conv1_STATE_VARIABLE_IO_18;

  {
    Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (ForeignImportOtherExt_9));
  }
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (parse_tree__write_deps_file__gather_foreign_import_deps_7_p_0_1));
    MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Globals_8));
    MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_deps_file.make_module_file_names_with_suffix\'/6"));
    MR_hl_field(MR_mktag(0), Var_33, 5) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_33, 6) = ((MR_Box) (Var_19));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_33, ForeignImportedModuleNames_11, &ForeignImportedFileNames_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_18);
  ForeignImportExtStr_15 = parse_tree__file_names__other_extension_to_string_1_f_0(ForeignImportOtherExt_9);
  Var_22 = mercury__string__remove_prefix_if_present_2_f_0((MR_String) ".", ForeignImportExtStr_15);
  RuleName_16 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_deps_for_", Var_22);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRule_12 = base;
    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (RuleName_16));
    MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ForeignImportTargets_10));
    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ForeignImportedFileNames_14));
    MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__construct_self_and_parent_date_date0_rules_10_p_0(
  MR_Word Globals_11,
  MR_String SourceFileName_12,
  MR_String Date0FileName_13,
  MR_String DateFileName_14,
  MR_Word Ancestors_15,
  MR_Word LongDeps_16,
  MR_Word ShortDeps_17,
  MR_Word * MmakeRulesParentDates_18)
{
  MR_Word AncestorDateFileNames_20;
  MR_Word AncestorInt0FileNames_21;
  MR_Word LongDepInt3FileNames_22;
  MR_Word ShortDepInt3FileNames_23;
  MR_Word MmakeRuleParentDates_24;
  MR_Word AncestorDate0FileNames_25;
  MR_Word MmakeRuleParentDate0s_26;
  MR_Word Var_30;
  MR_Word Var_35;
  MR_Word Var_40;
  MR_Word Var_45;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_67;
  MR_Word Var_71;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_80;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_89;
  MR_Word Var_92;

  Var_30 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_15);
  parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_11, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[12])), Var_30, &AncestorDateFileNames_20);
  Var_35 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_15);
  parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_11, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[10])), Var_35, &AncestorInt0FileNames_21);
  Var_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), LongDeps_16);
  parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_11, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[23])), Var_40, &LongDepInt3FileNames_22);
  Var_45 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ShortDeps_17);
  parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_11, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[23])), Var_45, &ShortDepInt3FileNames_23);
  {
    Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (Date0FileName_13));
    MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (AncestorDateFileNames_20));
  }
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_54, 0) = ((MR_Box) (DateFileName_14));
    MR_hl_field(MR_mktag(0), Var_54, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (Var_54));
  }
  {
    Var_51 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_51, 0) = ((MR_Box) (Var_52));
    MR_hl_field(MR_mktag(0), Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_59 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(SourceFileName_12);
  {
    Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
    MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_62 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "ancestor int0", AncestorInt0FileNames_21);
  Var_65 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "long dep int3s", LongDepInt3FileNames_22);
  Var_67 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "short dep int3s", ShortDepInt3FileNames_23);
  Var_64 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_65, Var_67);
  Var_61 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_62, Var_64);
  Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_58, Var_61);
  {
    MmakeRuleParentDates_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeRuleParentDates_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(MR_mktag(3), MmakeRuleParentDates_24, 1) = ((MR_Box) ((MR_String) "self_and_parent_date_deps"));
    MR_hl_field(MR_mktag(3), MmakeRuleParentDates_24, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), MmakeRuleParentDates_24, 3) = ((MR_Box) (Var_51));
    MR_hl_field(MR_mktag(3), MmakeRuleParentDates_24, 4) = ((MR_Box) (Var_57));
    MR_hl_field(MR_mktag(3), MmakeRuleParentDates_24, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_71 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_15);
  parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_11, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[13])), Var_71, &AncestorDate0FileNames_25);
  {
    Var_80 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Date0FileName_13));
    MR_hl_field(MR_mktag(0), Var_80, 1) = ((MR_Box) (AncestorDate0FileNames_25));
  }
  {
    Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_78, 0) = ((MR_Box) ((MR_String) "date0s"));
    MR_hl_field(MR_mktag(0), Var_78, 1) = ((MR_Box) (Var_80));
  }
  {
    Var_77 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_77, 0) = ((MR_Box) (Var_78));
    MR_hl_field(MR_mktag(0), Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_84 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(SourceFileName_12);
  {
    Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (Var_84));
    MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_87 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "long dep int3s", LongDepInt3FileNames_22);
  Var_89 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "short dep int3s", ShortDepInt3FileNames_23);
  Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_87, Var_89);
  Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_83, Var_86);
  {
    MmakeRuleParentDate0s_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_26, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_26, 1) = ((MR_Box) ((MR_String) "self_and_parent_date0_deps"));
    MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_26, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_26, 3) = ((MR_Box) (Var_77));
    MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_26, 4) = ((MR_Box) (Var_82));
    MR_hl_field(MR_mktag(3), MmakeRuleParentDate0s_26, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (MmakeRuleParentDate0s_26));
    MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRulesParentDates_18 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MmakeRuleParentDates_24));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_92));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__construct_module_dep_fragment_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_String CFileName_9,
  MR_Word * MmakeFragmentModuleDep_10)
{
  MR_String JavaFileName_12;
  MR_String ModuleDepFileName_13;
  MR_Word Var_24;
  MR_Word Var_26;
  MR_Word Var_29;
  MR_Word Var_32;
  MR_Word Var_35;
  MR_Word Var_38;

  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140parse_tree.write_deps_file.construct_module_dep_fragment\'/6", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[21])), ModuleName_8, &JavaFileName_12);
  Var_26 = parse_tree__file_names__make_module_dep_file_extension_0_f_0();
  {
    Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Var_26));
  }
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140parse_tree.write_deps_file.construct_module_dep_fragment\'/6", (MR_Integer) 1, Var_24, ModuleName_8, &ModuleDepFileName_13);
  {
    Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_32, 0) = ((MR_Box) (JavaFileName_12));
    MR_hl_field(MR_mktag(1), Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) ((MR_String) "module_dep_on_java"));
    MR_hl_field(MR_mktag(3), Var_29, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), Var_29, 3) = ((MR_Box) (ModuleDepFileName_13));
    MR_hl_field(MR_mktag(3), Var_29, 4) = ((MR_Box) (Var_32));
    MR_hl_field(MR_mktag(3), Var_29, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (CFileName_9));
    MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), Var_35, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(MR_mktag(3), Var_35, 1) = ((MR_Box) ((MR_String) "module_dep_on_c"));
    MR_hl_field(MR_mktag(3), Var_35, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), Var_35, 3) = ((MR_Box) (ModuleDepFileName_13));
    MR_hl_field(MR_mktag(3), Var_35, 4) = ((MR_Box) (Var_38));
    MR_hl_field(MR_mktag(3), Var_35, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *MmakeFragmentModuleDep_10 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[22]));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_29));
    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_35));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__construct_c_header_rules_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__6_6;

  parse_tree__file_names__module_name_to_file_name_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
parse_tree__write_deps_file__construct_c_header_rules_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word AllDeps_12,
  MR_String CFileName_13,
  MR_String ObjFileName_14,
  MR_String PicObjFileName_15,
  MR_Word * MmakeRulesCHeaders_16)
{
  MR_bool succeeded;
  MR_Word HighLevelCode_18;
  MR_Word CompilationTarget_19;
  MR_Word MmakeRulesObjOnMihs_23;
  MR_String MhHeaderFileName_24;
  MR_String MihHeaderFileName_25;
  MR_Word MmakeRuleMhMihOnC_26;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_58;
  MR_Word Var_61;

  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 302, &HighLevelCode_18);
  libs__globals__get_target_2_p_0(Globals_10, &CompilationTarget_19);
  succeeded = (HighLevelCode_18 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (CompilationTarget_19 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Targets_20;
    MR_Word AllDepsFileNames_21;
    MR_Word MmakeRuleObjOnMihs_22;
    MR_Word Var_30;
    MR_Word Var_33;
    MR_Word Var_72;
    MR_Box conv1_STATE_VARIABLE_IO_34_34;

    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (ObjFileName_14));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Targets_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Targets_20, 0) = ((MR_Box) (PicObjFileName_15));
      MR_hl_field(MR_mktag(0), Targets_20, 1) = ((MR_Box) (Var_30));
    }
    Var_33 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllDeps_12);
    {
      Var_72 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_c_header_rules_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_72, 3) = ((MR_Box) (Globals_10));
      MR_hl_field(MR_mktag(0), Var_72, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_deps_file.make_module_file_names_with_suffix\'/6"));
      MR_hl_field(MR_mktag(0), Var_72, 5) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_72, 6) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[20])));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_72, Var_33, &AllDepsFileNames_21, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_34_34);
    {
      MmakeRuleObjOnMihs_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_22, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_22, 1) = ((MR_Box) ((MR_String) "objs_on_mihs"));
      MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_22, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_22, 3) = ((MR_Box) (Targets_20));
      MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_22, 4) = ((MR_Box) (AllDepsFileNames_21));
      MR_hl_field(MR_mktag(3), MmakeRuleObjOnMihs_22, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRulesObjOnMihs_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), MmakeRulesObjOnMihs_23, 0) = ((MR_Box) (MmakeRuleObjOnMihs_22));
      MR_hl_field(MR_mktag(1), MmakeRulesObjOnMihs_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
    MmakeRulesObjOnMihs_23 = (MR_Word) ((MR_Unsigned) 0U);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140parse_tree.write_deps_file.construct_c_header_rules\'/9", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[18])), ModuleName_11, &MhHeaderFileName_24);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_10, (MR_String) "predicate \140parse_tree.write_deps_file.construct_c_header_rules\'/9", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[20])), ModuleName_11, &MihHeaderFileName_25);
  {
    Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (MihHeaderFileName_25));
    MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_55 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_55, 0) = ((MR_Box) (MhHeaderFileName_24));
    MR_hl_field(MR_mktag(0), Var_55, 1) = ((MR_Box) (Var_56));
  }
  {
    Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (CFileName_13));
    MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRuleMhMihOnC_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_26, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_26, 1) = ((MR_Box) ((MR_String) "mh_and_mih_on_c"));
    MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_26, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_26, 3) = ((MR_Box) (Var_55));
    MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_26, 4) = ((MR_Box) (Var_58));
    MR_hl_field(MR_mktag(3), MmakeRuleMhMihOnC_26, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MmakeRuleMhMihOnC_26));
    MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  *MmakeRulesCHeaders_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), MmakeRulesObjOnMihs_23, Var_61);
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__construct_intermod_rules_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__write_deps_file__construct_intermod_rules_12_p_0(
  MR_Word Globals_13,
  MR_Word ModuleName_14,
  MR_Word LongDeps_15,
  MR_Word AllDeps_16,
  MR_String ErrFileName_17,
  MR_String TransOptDateFileName_18,
  MR_String CDateFileName_19,
  MR_String JavaDateFileName_20,
  MR_String ObjFileName_21,
  MR_Word * MmakeRulesIntermod_22)
{
  MR_bool succeeded;
  MR_Word UseOptFiles_24;
  MR_Word Intermod_25;
  MR_Word IntermodDirs_26;
  MR_Word MmakeRulesMhDeps_29;

  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 494, &UseOptFiles_24);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 492, &Intermod_25);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_13, (MR_Integer) 679, &IntermodDirs_26);
  switch (Intermod_25) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MmakeRulesMhDeps_29 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word AllDepsFileNames_27;
        MR_Word MmakeRuleMhDeps_28;
        MR_Word Var_51;

        Var_51 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllDeps_16);
        parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_13, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[18])), Var_51, &AllDepsFileNames_27);
        {
          MmakeRuleMhDeps_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_28, 1) = ((MR_Box) ((MR_String) "machine_dependent_header_deps"));
          MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_28, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_28, 3) = ((MR_Box) (ObjFileName_21));
          MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_28, 4) = ((MR_Box) (AllDepsFileNames_27));
          MR_hl_field(MR_mktag(3), MmakeRuleMhDeps_28, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MmakeRulesMhDeps_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MmakeRulesMhDeps_29, 0) = ((MR_Box) (MmakeRuleMhDeps_28));
          MR_hl_field(MR_mktag(1), MmakeRulesMhDeps_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
  succeeded = (Intermod_25 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (UseOptFiles_24 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word Targets_30;
    MR_Word TransOpt_31;
    MR_Word UseTransOpt_32;
    MR_Word BuildOptFiles_33;
    MR_Word OptDeps_34;
    MR_Word MaybeTransOptDeps1_36;
    MR_Word OptInt0Deps_37;
    MR_Word OptDepsFileNames_38;
    MR_Word OptInt0DepsFileNames_39;
    MR_Word MmakeRuleDateOptInt0Deps_40;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_73;
    MR_Word Var_80;
    MR_Word Var_86;

    {
      Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (JavaDateFileName_20));
      MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (CDateFileName_19));
      MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (Var_61));
    }
    {
      Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (ErrFileName_17));
      MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) (Var_60));
    }
    {
      Targets_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Targets_30, 0) = ((MR_Box) (TransOptDateFileName_18));
      MR_hl_field(MR_mktag(0), Targets_30, 1) = ((MR_Box) (Var_59));
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 496, &TransOpt_31);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 495, &UseTransOpt_32);
    mercury__bool__not_2_p_0(UseTransOpt_32, &BuildOptFiles_33);
    succeeded = (TransOpt_31 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (UseTransOpt_32 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word TransOptDeps1_35;
      MR_Word Var_65;
      MR_Word Var_67;

      Var_67 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), LongDeps_15);
      {
        Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (ModuleName_14));
        MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_67));
      }
      parse_tree__write_deps_file__get_both_opt_deps_8_p_0(Globals_13, BuildOptFiles_33, IntermodDirs_26, Var_65, &OptDeps_34, &TransOptDeps1_35);
      {
        MaybeTransOptDeps1_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeTransOptDeps1_36, 0) = ((MR_Box) (TransOptDeps1_35));
      }
    }
    else
    {
      MR_Word Var_69;
      MR_Word Var_72;

      Var_72 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), LongDeps_15);
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (ModuleName_14));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_72));
      }
      parse_tree__write_deps_file__get_opt_deps_8_p_0(Globals_13, BuildOptFiles_33, IntermodDirs_26, (MR_Word) (((MR_Box) ((MR_String) ".opt"))), Var_69, &OptDeps_34);
      MaybeTransOptDeps1_36 = (MR_Word) ((MR_Unsigned) 0U);
    }
    Var_73 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[4]), OptDeps_34);
    OptInt0Deps_37 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_73);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_13, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[19])), OptDeps_34, &OptDepsFileNames_38);
    Var_80 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptInt0Deps_37);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_13, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[10])), Var_80, &OptInt0DepsFileNames_39);
    Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptDepsFileNames_38, OptInt0DepsFileNames_39);
    {
      MmakeRuleDateOptInt0Deps_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_40, 1) = ((MR_Box) ((MR_String) "dates_on_opts_and_int0s"));
      MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_40, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_40, 3) = ((MR_Box) (Targets_30));
      MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_40, 4) = ((MR_Box) (Var_86));
      MR_hl_field(MR_mktag(3), MmakeRuleDateOptInt0Deps_40, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    if ((MaybeTransOptDeps1_36 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_88;

      {
        Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (MmakeRuleDateOptInt0Deps_40));
        MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *MmakeRulesIntermod_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), MmakeRulesMhDeps_29, Var_88);
    }
    else
    {
      MR_Word TransOptDeps2_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTransOptDeps1_36, (MR_Integer) 0))));
      MR_Word ErrDateTargets_42;
      MR_Word TransOptDepsOptFileNames_43;
      MR_Word MmakeRuleTransOptOpts_44;
      MR_Word Var_100;
      MR_Word Var_101;

      {
        ErrDateTargets_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ErrDateTargets_42, 0) = ((MR_Box) (ErrFileName_17));
        MR_hl_field(MR_mktag(0), ErrDateTargets_42, 1) = ((MR_Box) (Var_60));
      }
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(Globals_13, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[15])), TransOptDeps2_41, &TransOptDepsOptFileNames_43);
      {
        MmakeRuleTransOptOpts_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_44, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_44, 1) = ((MR_Box) ((MR_String) "dates_on_trans_opts"));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_44, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_44, 3) = ((MR_Box) (ErrDateTargets_42));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_44, 4) = ((MR_Box) (TransOptDepsOptFileNames_43));
        MR_hl_field(MR_mktag(3), MmakeRuleTransOptOpts_44, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (MmakeRuleTransOptOpts_44));
        MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_100, 0) = ((MR_Box) (MmakeRuleDateOptInt0Deps_40));
        MR_hl_field(MR_mktag(1), Var_100, 1) = ((MR_Box) (Var_101));
      }
      *MmakeRulesIntermod_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), MmakeRulesMhDeps_29, Var_100);
    }
  }
  else
    *MmakeRulesIntermod_22 = MmakeRulesMhDeps_29;
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

          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_both_opt_deps\'/8", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[19])), Dep_18, &OptName_27);
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
          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_both_opt_deps\'/8", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[15])), Dep_18, &TransOptName_31);
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

          parse_tree__find_module__search_for_module_source_5_p_0(IntermodDirs_3, Dep_18, &MaybeFileName_23);
          if (((MR_tag((MR_Word) MaybeFileName_23)) == (MR_Integer) 1))
          {
            MR_String OptName_61;
            MR_Word MaybeOptDir_62;
            MR_String TransOptName_63;
            MR_Word MaybeTransOptDir_64;

            parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_both_opt_deps\'/8", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[19])), Dep_18, &OptName_61);
            libs__file_util__search_for_file_returning_dir_5_p_0(IntermodDirs_3, OptName_61, &MaybeOptDir_62);
            if (((MR_tag((MR_Word) MaybeOptDir_62)) == (MR_Integer) 1))
              *HeadVar__5_5 = STATE_VARIABLE_OptDeps_39_39;
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dep_18));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_39_39));
              }
            parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_both_opt_deps\'/8", (MR_Integer) 1, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[15])), Dep_18, &TransOptName_63);
            libs__file_util__search_for_file_returning_dir_5_p_0(IntermodDirs_3, TransOptName_63, &MaybeTransOptDir_64);
            if (((MR_tag((MR_Word) MaybeTransOptDir_64)) == (MR_Integer) 1))
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
parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__6_6;

  parse_tree__file_names__module_name_to_file_name_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(
  MR_Word Globals_7,
  MR_Word Ext_8,
  MR_Word Modules_9,
  MR_Word * FileNames_10)
{
  MR_Word Var_14;
  MR_Box conv1_STATE_VARIABLE_IO_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_14, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_14, 1) = ((MR_Box) (parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0_1));
    MR_hl_field(MR_mktag(0), Var_14, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(MR_mktag(0), Var_14, 3) = ((MR_Box) (Globals_7));
    MR_hl_field(MR_mktag(0), Var_14, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_deps_file.make_module_file_names_with_suffix\'/6"));
    MR_hl_field(MR_mktag(0), Var_14, 5) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_14, 6) = ((MR_Box) (Ext_8));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, Modules_9, FileNames_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_13);
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
          MR_Word Var_40;

          {
            Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (HeadVar__4_4));
          }
          parse_tree__file_names__module_name_to_search_file_name_7_p_0(HeadVar__1_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_opt_deps\'/8", Var_40, Dep_20, &OptName_28);
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

          parse_tree__find_module__search_for_module_source_5_p_0(HeadVar__3_3, Dep_20, &Result1_24);
          if (((MR_tag((MR_Word) Result1_24)) == (MR_Integer) 1))
          {
            MR_String OptName_44;
            MR_Word MaybeOptDir_45;
            MR_Word Var_47;

            {
              Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (HeadVar__4_4));
            }
            parse_tree__file_names__module_name_to_search_file_name_7_p_0(HeadVar__1_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_opt_deps\'/8", Var_47, Dep_20, &OptName_44);
            libs__file_util__search_for_file_5_p_0(HeadVar__3_3, OptName_44, &MaybeOptDir_45);
            if (((MR_tag((MR_Word) MaybeOptDir_45)) == (MR_Integer) 1))
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

static void MR_CALL 
parse_tree__write_deps_file__construct_build_nested_children_first_rule_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MmakeRule_12;

  parse_tree__write_deps_file__gather_nested_deps_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv0_MmakeRule_12);
  *wrapper_arg_2 = ((MR_Box) (conv0_MmakeRule_12));
}

static void MR_CALL 
parse_tree__write_deps_file__construct_build_nested_children_first_rule_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word MaybeTopModule_9,
  MR_Word * MmakeRulesNestedDeps_10)
{
  MR_Word NestedModuleNames_12;

  NestedModuleNames_12 = parse_tree__module_imports__get_nested_children_list_of_top_module_1_f_0(MaybeTopModule_9);
  if ((NestedModuleNames_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *MmakeRulesNestedDeps_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_33;
    MR_Box conv1_STATE_VARIABLE_IO_17;

    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_build_nested_children_first_rule_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_33, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_33, 3) = ((MR_Box) (Globals_7));
      MR_hl_field(MR_mktag(0), Var_33, 4) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(0), Var_33, 5) = ((MR_Box) (NestedModuleNames_12));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_other_ext_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_33, (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[8])), MmakeRulesNestedDeps_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_17);
  }
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__construct_date_file_deps_rule_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_IncludePath_6;

  conv0_IncludePath_6 = parse_tree__write_deps_file__foreign_include_file_path_name_2_f_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_IncludePath_6));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__write_deps_file__construct_date_file_deps_rule_18_p_0(
  MR_Word Globals_19,
  MR_Word ModuleName_20,
  MR_String SourceFileName_21,
  MR_Word Ancestors_22,
  MR_Word LongDeps_23,
  MR_Word ShortDeps_24,
  MR_Word PublicChildren_25,
  MR_String Int0FileName_26,
  MR_String OptDateFileName_27,
  MR_String TransOptDateFileName_28,
  MR_Word ForeignIncludeFilesSet_29,
  MR_String CDateFileName_30,
  MR_String JavaDateFileName_31,
  MR_String ErrFileName_32,
  MR_Word FactTableSourceGroups_33,
  MR_Word * MmakeRuleDateFileDeps_34)
{
  MR_bool succeeded;
  MR_Word TargetGroup_36;
  MR_Word TargetGroups_37;
  MR_Word SourceFileNameGroup_38;
  MR_Word Int0FileNameGroups_39;
  MR_Word AncestorSourceGroups_40;
  MR_Word LongDepsSourceGroups_41;
  MR_Word ShortDepsSourceGroups_42;
  MR_Word TypeRepnSelfDepGroups_43;
  MR_Word TypeRepnAncestorsDepGroups_44;
  MR_Word ForeignIncludeFiles_45;
  MR_Word ForeignImportFileNames_46;
  MR_Word ForeignImportFileNameGroup_47;
  MR_Word SourceGroups_48;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_59;
  MR_Word Var_80;
  MR_Word Var_86;
  MR_Word Var_90;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_Word Var_98;

  {
    Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (JavaDateFileName_31));
    MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (CDateFileName_30));
    MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_56));
  }
  {
    Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (ErrFileName_32));
    MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (TransOptDateFileName_28));
    MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
  }
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_52, 0) = ((MR_Box) (OptDateFileName_27));
    MR_hl_field(MR_mktag(0), Var_52, 1) = ((MR_Box) (Var_53));
  }
  {
    TargetGroup_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TargetGroup_36, 0) = ((MR_Box) ((MR_String) "dates_and_err"));
    MR_hl_field(MR_mktag(0), TargetGroup_36, 1) = ((MR_Box) (Var_52));
  }
  {
    TargetGroups_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), TargetGroups_37, 0) = ((MR_Box) (TargetGroup_36));
    MR_hl_field(MR_mktag(0), TargetGroups_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_59 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(SourceFileName_21);
  {
    SourceFileNameGroup_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), SourceFileNameGroup_38, 0) = ((MR_Box) (Var_59));
    MR_hl_field(MR_mktag(1), SourceFileNameGroup_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), PublicChildren_25);
  if (succeeded)
    Int0FileNameGroups_39 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_61;

    Var_61 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(Int0FileName_26);
    {
      Int0FileNameGroups_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Int0FileNameGroups_39, 0) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(1), Int0FileNameGroups_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(Globals_19, (MR_String) "ancestors", (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[10])), Ancestors_22, &AncestorSourceGroups_40);
  parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(Globals_19, (MR_String) "long deps", (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[16])), LongDeps_23, &LongDepsSourceGroups_41);
  parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(Globals_19, (MR_String) "short deps", (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[17])), ShortDeps_24, &ShortDepsSourceGroups_42);
  Var_80 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_20)));
  parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(Globals_19, (MR_String) "type_repn self dep", (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[16])), Var_80, &TypeRepnSelfDepGroups_43);
  Var_86 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_20);
  parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(Globals_19, (MR_String) "type_repn ancestor dep", (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[16])), Var_86, &TypeRepnAncestorsDepGroups_44);
  ForeignIncludeFiles_45 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ForeignIncludeFilesSet_29);
  {
    Var_90 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_90, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0]));
    MR_hl_field(MR_mktag(0), Var_90, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_date_file_deps_rule_18_p_0_1));
    MR_hl_field(MR_mktag(0), Var_90, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_90, 3) = ((MR_Box) (SourceFileName_21));
  }
  ForeignImportFileNames_46 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_90, ForeignIncludeFiles_45);
  ForeignImportFileNameGroup_47 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "foreign imports", ForeignImportFileNames_46);
  Var_98 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), ForeignImportFileNameGroup_47, FactTableSourceGroups_33);
  Var_97 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), TypeRepnAncestorsDepGroups_44, Var_98);
  Var_96 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), TypeRepnSelfDepGroups_43, Var_97);
  Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), ShortDepsSourceGroups_42, Var_96);
  Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), LongDepsSourceGroups_41, Var_95);
  Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), AncestorSourceGroups_40, Var_94);
  Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Int0FileNameGroups_39, Var_93);
  SourceGroups_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), SourceFileNameGroup_38, Var_92);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRuleDateFileDeps_34 = base;
    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_String) "date_file_deps"));
    MR_hl_field(MR_mktag(3), base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (TargetGroups_37));
    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (SourceGroups_48));
    MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
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
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__6_6;

  parse_tree__file_names__module_name_to_file_name_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(
  MR_Word Globals_8,
  MR_String GroupName_9,
  MR_Word Ext_10,
  MR_Word Modules_11,
  MR_Word * Groups_12)
{
  MR_Word FileNames_14;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Box conv1_STATE_VARIABLE_IO_16;

  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_17, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_17, 1) = ((MR_Box) (parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0_1));
    MR_hl_field(MR_mktag(0), Var_17, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(MR_mktag(0), Var_17, 3) = ((MR_Box) (Globals_8));
    MR_hl_field(MR_mktag(0), Var_17, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_deps_file.make_module_file_name_group_with_suffix\'/7"));
    MR_hl_field(MR_mktag(0), Var_17, 5) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_17, 6) = ((MR_Box) (Ext_10));
  }
  Var_18 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Modules_11);
  mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, Var_18, &FileNames_14, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16);
  *Groups_12 = libs__mmakefiles__make_file_name_group_2_f_0(GroupName_9, FileNames_14);
}

static void MR_CALL 
parse_tree__write_deps_file__construct_fact_tables_entries_7_p_0(
  MR_String ModuleMakeVarName_8,
  MR_String SourceFileName_9,
  MR_String ObjFileName_10,
  MR_Word FactTableFileNamesSet_11,
  MR_Word * MmakeVarsFactTables_12,
  MR_Word * FactTableSourceGroups_13,
  MR_Word * MmakeRulesFactTables_14)
{
  MR_Word FactTableFileNames_15;

  FactTableFileNames_15 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFileNamesSet_11);
  if ((FactTableFileNames_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MmakeVarsFactTables_12 = (MR_Word) ((MR_Unsigned) 0U);
    *FactTableSourceGroups_13 = (MR_Word) ((MR_Unsigned) 0U);
    *MmakeRulesFactTables_14 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word MmakeVarFactTables_18;
    MR_Word MmakeVarFactTablesOs_19;
    MR_Word MmakeVarFactTablesAllOs_20;
    MR_Word MmakeVarFactTablesCs_21;
    MR_Word MmakeVarFactTablesAllCs_22;
    MR_Word FactTableSourceGroup_23;
    MR_Word MmakeRuleFactOs_24;
    MR_Word MmakeRuleFactCs_25;
    MR_String Var_26;
    MR_String Var_28;
    MR_String Var_30;
    MR_String Var_32;
    MR_String Var_34;
    MR_String Var_36;
    MR_String Var_38;
    MR_String Var_40;
    MR_String Var_42;
    MR_String Var_44;
    MR_String Var_46;
    MR_String Var_48;
    MR_String Var_50;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_58;
    MR_String Var_59;
    MR_String Var_61;
    MR_String Var_67;
    MR_String Var_69;
    MR_Word Var_71;
    MR_String Var_72;
    MR_String Var_74;
    MR_Word Var_76;
    MR_String Var_81;
    MR_String Var_83;
    MR_Word Var_85;
    MR_Word Var_88;

    Var_26 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables");
    {
      MmakeVarFactTables_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeVarFactTables_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), MmakeVarFactTables_18, 1) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(3), MmakeVarFactTables_18, 2) = ((MR_Box) (FactTableFileNames_15));
    }
    Var_28 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables.os");
    Var_32 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables:%=\044(os_subdir)%.\044O)");
    Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_32);
    {
      MmakeVarFactTablesOs_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarFactTablesOs_19, 0) = ((MR_Box) (Var_28));
      MR_hl_field(MR_mktag(2), MmakeVarFactTablesOs_19, 1) = ((MR_Box) (Var_30));
    }
    Var_34 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables.all_os");
    Var_38 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables:%=\044(os_subdir)%.\044O)");
    Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_38);
    {
      MmakeVarFactTablesAllOs_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarFactTablesAllOs_20, 0) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(2), MmakeVarFactTablesAllOs_20, 1) = ((MR_Box) (Var_36));
    }
    Var_40 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables.cs");
    Var_44 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables:%=\044(cs_subdir)%.c)");
    Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_44);
    {
      MmakeVarFactTablesCs_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarFactTablesCs_21, 0) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(2), MmakeVarFactTablesCs_21, 1) = ((MR_Box) (Var_42));
    }
    Var_46 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables.all_cs");
    Var_50 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables:%=\044(cs_subdir)%.c)");
    Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_50);
    {
      MmakeVarFactTablesAllCs_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), MmakeVarFactTablesAllCs_22, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(2), MmakeVarFactTablesAllCs_22, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MmakeVarFactTablesAllCs_22));
      MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_54, 0) = ((MR_Box) (MmakeVarFactTablesCs_21));
      MR_hl_field(MR_mktag(1), Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MmakeVarFactTablesAllOs_20));
      MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (MmakeVarFactTablesOs_19));
      MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_53));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MmakeVarsFactTables_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MmakeVarFactTables_18));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_52));
    }
    Var_61 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables)");
    Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_61);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FactTableSourceGroup_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FactTableSourceGroup_23, 0) = ((MR_Box) ((MR_String) "fact tables"));
      MR_hl_field(MR_mktag(0), FactTableSourceGroup_23, 1) = ((MR_Box) (Var_58));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *FactTableSourceGroups_13 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FactTableSourceGroup_23));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_69 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables.os)");
    Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_69);
    Var_74 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables)");
    Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_74);
    {
      Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (SourceFileName_9));
      MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_76));
    }
    {
      MmakeRuleFactOs_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleFactOs_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleFactOs_24, 1) = ((MR_Box) ((MR_String) "fact_table_os"));
      MR_hl_field(MR_mktag(3), MmakeRuleFactOs_24, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleFactOs_24, 3) = ((MR_Box) (Var_67));
      MR_hl_field(MR_mktag(3), MmakeRuleFactOs_24, 4) = ((MR_Box) (Var_71));
      MR_hl_field(MR_mktag(3), MmakeRuleFactOs_24, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_83 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables.cs)");
    Var_81 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_83);
    {
      Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_85, 0) = ((MR_Box) (ObjFileName_10));
      MR_hl_field(MR_mktag(1), Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRuleFactCs_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleFactCs_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleFactCs_25, 1) = ((MR_Box) ((MR_String) "fact_table_cs"));
      MR_hl_field(MR_mktag(3), MmakeRuleFactCs_25, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleFactCs_25, 3) = ((MR_Box) (Var_81));
      MR_hl_field(MR_mktag(3), MmakeRuleFactCs_25, 4) = ((MR_Box) (Var_85));
      MR_hl_field(MR_mktag(3), MmakeRuleFactCs_25, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_88, 0) = ((MR_Box) (MmakeRuleFactCs_25));
      MR_hl_field(MR_mktag(1), Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MmakeRulesFactTables_14 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MmakeRuleFactOs_24));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_88));
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__construct_trans_opt_deps_rule_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__6_6;

  parse_tree__file_names__module_name_to_file_name_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
parse_tree__write_deps_file__construct_trans_opt_deps_rule_7_p_0(
  MR_Word Globals_8,
  MR_Word MaybeTransOptDeps_9,
  MR_Word LongDeps_10,
  MR_String TransOptDateFileName_11,
  MR_Word * MmakeRulesTransOpt_12)
{
  if ((MaybeTransOptDeps_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *MmakeRulesTransOpt_12 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word TransOptDeps0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTransOptDeps_9, (MR_Integer) 0))));
    MR_Word TransOptDateDeps_15;
    MR_Word TransOptDateDepsFileNames_16;
    MR_Word MmakeRuleTransOpt_17;
    MR_Word Var_20;
    MR_Word Var_22;
    MR_Word Var_38;
    MR_Box conv1_STATE_VARIABLE_IO_19;

    Var_20 = mercury__set__list_to_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptDeps0_14);
    mercury__set__intersect_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_20, LongDeps_10, &TransOptDateDeps_15);
    Var_22 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptDateDeps_15);
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_trans_opt_deps_rule_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Globals_8));
      MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_deps_file.make_module_file_names_with_suffix\'/6"));
      MR_hl_field(MR_mktag(0), Var_38, 5) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_38, 6) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_3[15])));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_38, Var_22, &TransOptDateDepsFileNames_16, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_19);
    {
      MmakeRuleTransOpt_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_17, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_17, 1) = ((MR_Box) ((MR_String) "trans_opt_deps"));
      MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_17, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_17, 3) = ((MR_Box) (TransOptDateFileName_11));
      MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_17, 4) = ((MR_Box) (TransOptDateDepsFileNames_16));
      MR_hl_field(MR_mktag(3), MmakeRuleTransOpt_17, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MmakeRulesTransOpt_12 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MmakeRuleTransOpt_17));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_intermod_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_deps_file____Unify____maybe_intermod_deps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_intermod_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_deps_file____Compare____maybe_intermod_deps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_mmake_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_deps_file____Compare____maybe_mmake_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__write_deps_file__init(void)
{
}

void mercury__parse_tree__write_deps_file__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_maybe_intermod_deps_0);
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
