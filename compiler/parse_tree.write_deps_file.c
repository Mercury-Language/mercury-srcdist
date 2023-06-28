/*
** Automatically generated from `write_deps_file.m'
** by the Mercury compiler,
** version rotd-2023-06-28
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
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
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
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.module_deps_graph.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_sym_name.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s {
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__DepsMap_17;
  MR_bool parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded;
  jmp_buf parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__commit_0;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_406_406;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__IncludeMap_44;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_107;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__BurdenedModule_367;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_41;
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv1_Var_41;
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv0_Var_107;
};


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_parse_tree__write_deps_file__type_ctor_info_module_name_and_ext_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file____vpti_tuple_2__plain_parse_tree__file_names__type_ctor_info_other_ext_0__plain_parse_tree__file_names__type_ctor_info_newext_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__write_deps_file____vpti_tuple_3__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_parse_tree__file_names__type_ctor_info_newext_0;

static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__write_deps_file____vpti_tuple_3__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_parse_tree__file_names__type_ctor_info_newext_0__plain_builtin__type_ctor_info_string_0;

static const MR_DuFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_maybe_include_trans_opt_rule_0_0;

static const MR_PseudoTypeInfo parse_tree__write_deps_file__parse_tree__write_deps_file__field_types_maybe_include_trans_opt_rule_0_1[1];

static const MR_DuFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_maybe_include_trans_opt_rule_0_1;

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_maybe_include_trans_opt_rule_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_maybe_include_trans_opt_rule_0_1[1];

static const MR_DuPtagLayout parse_tree__write_deps_file__parse_tree__write_deps_file__du_ptag_ordered_maybe_include_trans_opt_rule_0[2];

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_name_ordered_maybe_include_trans_opt_rule_0[2];

static const MR_Integer parse_tree__write_deps_file__parse_tree__write_deps_file__functor_number_map_maybe_include_trans_opt_rule_0[2];

static const MR_DuFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_maybe_intermod_deps_0_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo parse_tree__write_deps_file__parse_tree__write_deps_file__field_types_maybe_intermod_deps_0_1[5];

static const MR_ConstString parse_tree__write_deps_file__parse_tree__write_deps_file__field_names_maybe_intermod_deps_0_1[5];

static const MR_DuFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_maybe_intermod_deps_0_1;

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_maybe_intermod_deps_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_maybe_intermod_deps_0_1[1];

static const MR_DuPtagLayout parse_tree__write_deps_file__parse_tree__write_deps_file__du_ptag_ordered_maybe_intermod_deps_0[2];

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_name_ordered_maybe_intermod_deps_0[2];

static const MR_Integer parse_tree__write_deps_file__parse_tree__write_deps_file__functor_number_map_maybe_intermod_deps_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__write_deps_file__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__tree234__ti_tree234_2parse_tree__write_deps_file__type_ctor_info_module_name_and_ext_0builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo parse_tree__write_deps_file__parse_tree__write_deps_file__field_types_module_name_and_ext_0_0[2];

static const MR_DuFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_module_name_and_ext_0_0;

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_module_name_and_ext_0_0[1];

static const MR_DuPtagLayout parse_tree__write_deps_file__parse_tree__write_deps_file__du_ptag_ordered_module_name_and_ext_0[1];

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_name_ordered_module_name_and_ext_0[1];

static const MR_Integer parse_tree__write_deps_file__parse_tree__write_deps_file__functor_number_map_module_name_and_ext_0[1];

static const MR_PseudoTypeInfo parse_tree__write_deps_file__parse_tree__write_deps_file__field_types_trans_opt_rule_info_0_0[1];

static const MR_DuFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_trans_opt_rule_info_0_0;

static const MR_PseudoTypeInfo parse_tree__write_deps_file__parse_tree__write_deps_file__field_types_trans_opt_rule_info_0_1[1];

static const MR_DuFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_trans_opt_rule_info_0_1;

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_trans_opt_rule_info_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_trans_opt_rule_info_0_1[1];

static const MR_DuPtagLayout parse_tree__write_deps_file__parse_tree__write_deps_file__du_ptag_ordered_trans_opt_rule_info_0[2];

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_name_ordered_trans_opt_rule_info_0[2];

static const MR_Integer parse_tree__write_deps_file__parse_tree__write_deps_file__functor_number_map_trans_opt_rule_info_0[2];

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1645__1_5_p_0(
  MR_Word Globals_10,
  MR_Tuple LambdaHeadVar__1_166,
  MR_String * LambdaHeadVar__2_167);

static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__generate_dv_file__1636__1_1_f_0(
  MR_Tuple LambdaHeadVar__1_155);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1612__1_2_p_0(
  MR_Word DepsMap_13,
  MR_Word LambdaHeadVar__1_143);

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1530__1_4_p_0(
  MR_Word DepsGraph_4,
  MR_Word LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1498__1_2_p_0(
  MR_Word ModuleName_29,
  MR_Word LambdaHeadVar__1_55);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__construct_foreign_import_rules__1012__1_3_p_0(
  MR_Word SourceFileModuleName_15,
  MR_Word LambdaHeadVar__1_69,
  MR_Word * LambdaHeadVar__2_70);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__construct_foreign_import_rules__1006__1_2_p_0(
  MR_Word BackendLangs_37,
  MR_Word LambdaHeadVar__1_66);

static void MR_CALL 
parse_tree__write_deps_file____Compare____module_name_and_ext_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____module_name_and_ext_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_deps_file____Compare____module_file_name_cache_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____module_file_name_cache_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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
  MR_Tuple HeadVar__4_4,
  MR_Word * MmakeRule_14);

static void MR_CALL 
parse_tree__write_deps_file__construct_subdirs_shorthand_rule_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Tuple HeadVar__3_3,
  MR_Word * MmakeRule_13,
  MR_Word STATE_VARIABLE_Cache_0_20,
  MR_Word * STATE_VARIABLE_Cache_21);

static MR_String MR_CALL 
parse_tree__write_deps_file__foreign_include_file_path_name_2_f_0(
  MR_String SourceFileName_4,
  MR_Word IncludeFile_5);

static void MR_CALL 
parse_tree__write_deps_file__gather_nested_deps_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__write_deps_file__gather_nested_deps_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word NestedDeps_12,
  MR_Tuple HeadVar__4_4,
  MR_Word * MmakeRule_15,
  MR_Word STATE_VARIABLE_Cache_0_21,
  MR_Word * STATE_VARIABLE_Cache_22);

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
parse_tree__write_deps_file__output_module_order_7_p_0_1(
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
parse_tree__write_deps_file__generate_dv_file_9_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0(
  MR_Word Globals_10,
  MR_String SourceFileName_11,
  MR_Word ModuleName_12,
  MR_Word DepsMap_13,
  MR_Word * MmakeFile_14,
  MR_Word STATE_VARIABLE_Cache_0_111,
  MR_Word * STATE_VARIABLE_Cache_112);

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
  MR_Word DepsMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
parse_tree__write_deps_file__get_fact_table_dependencies_7_p_0(
  MR_Word Globals_1,
  MR_Word OtherExt_2,
  MR_Word NewExt_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_108_111_111_112_95_95_91_57_93_95_48_13_p_0(
  MR_Word Globals_1,
  MR_Word HeadVar__2_2,
  MR_Word IntDepsGraph_3,
  MR_Word ImpDepsGraph_4,
  MR_Word IndirectDepsGraph_5,
  MR_Word IndirectOptDepsGraph_6,
  MR_Word TransOptDepsGraph_7,
  MR_Word TransOptOrder_8,
  MR_Word STATE_VARIABLE_Cache_0_10,
  MR_Word * STATE_VARIABLE_Cache_11);

static MR_bool MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_57_93_95_48_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_57_93_95_48_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_57_93_95_48_13_p_0(
  MR_Word Globals_14,
  MR_Word Dep_15,
  MR_Word IntDepsGraph_16,
  MR_Word ImpDepsGraph_17,
  MR_Word IndirectDepsGraph_18,
  MR_Word IndirectOptDepsGraph_19,
  MR_Word TransOptDepsGraph_20,
  MR_Word FullTransOptOrder_21,
  MR_Word STATE_VARIABLE_Cache_0_50,
  MR_Word * STATE_VARIABLE_Cache_51);

static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(
  MR_Word DepsGraph_4,
  MR_Word ModuleName_5,
  MR_Word * Dependencies_6);

static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_fn_cache_9_p_0(
  MR_Word Globals_10,
  MR_Word BurdenedAugCompUnit_11,
  MR_Word IntermodDeps_12,
  MR_Word AllDeps_13,
  MR_Word MaybeInclTransOptRule_14,
  MR_Word STATE_VARIABLE_Cache_0_41,
  MR_Word * STATE_VARIABLE_Cache_42);

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_10_p_0(
  MR_Word Globals_11,
  MR_Word BurdenedAugCompUnit_12,
  MR_Word IntermodDeps_13,
  MR_Word AllDeps_14,
  MR_Word MaybeInclTransOptRule_15,
  MR_Word * STATE_VARIABLE_MmakeFile_75,
  MR_Word STATE_VARIABLE_Cache_0_76,
  MR_Word * STATE_VARIABLE_Cache_77);

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
parse_tree__write_deps_file__construct_subdir_short_rules_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__write_deps_file__construct_subdir_short_rules_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * MmakeRulesSubDirShorthand_10,
  MR_Word STATE_VARIABLE_Cache_0_15,
  MR_Word * STATE_VARIABLE_Cache_16);

static void MR_CALL 
parse_tree__write_deps_file__construct_install_shadow_rules_13_p_0(
  MR_Word Globals_14,
  MR_Word ModuleName_15,
  MR_String Int0FileName_16,
  MR_String Date0FileName_17,
  MR_String DateFileName_18,
  MR_String Date3FileName_19,
  MR_String OptDateFileName_20,
  MR_String TransOptDateFileName_21,
  MR_Word * MmakeRulesInstallShadows_22,
  MR_Word STATE_VARIABLE_Cache_0_30,
  MR_Word * STATE_VARIABLE_Cache_31);

static MR_bool MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0(
  MR_Word Globals_12,
  MR_Word AugCompUnit_13,
  MR_Word IntermodDeps_14,
  MR_Word SourceFileModuleName_15,
  MR_String ObjFileName_16,
  MR_String PicObjFileName_17,
  MR_Word * MmakeRulesForeignImports_18,
  MR_Word STATE_VARIABLE_Cache_0_51,
  MR_Word * STATE_VARIABLE_Cache_52);

static void MR_CALL 
parse_tree__write_deps_file__gather_foreign_import_deps_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__write_deps_file__gather_foreign_import_deps_10_p_0(
  MR_Word Globals_11,
  MR_Word ForeignImportOtherExt_12,
  MR_Word ForeignImportNewExt_13,
  MR_Word ForeignImportTargets_14,
  MR_Word ForeignImportedModuleNames_15,
  MR_Word * MmakeRule_16,
  MR_Word STATE_VARIABLE_Cache_0_22,
  MR_Word * STATE_VARIABLE_Cache_23);

static void MR_CALL 
parse_tree__write_deps_file__construct_self_and_parent_date_date0_rules_12_p_0(
  MR_Word Globals_13,
  MR_String SourceFileName_14,
  MR_String Date0FileName_15,
  MR_String DateFileName_16,
  MR_Word Ancestors_17,
  MR_Word LongDeps_18,
  MR_Word ShortDeps_19,
  MR_Word * MmakeRulesParentDates_20,
  MR_Word STATE_VARIABLE_Cache_0_30,
  MR_Word * STATE_VARIABLE_Cache_31);

static void MR_CALL 
parse_tree__write_deps_file__construct_module_dep_fragment_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_String CFileName_11,
  MR_Word * MmakeFragmentModuleDep_12,
  MR_Word STATE_VARIABLE_Cache_0_17,
  MR_Word * STATE_VARIABLE_Cache_18);

static void MR_CALL 
parse_tree__write_deps_file__construct_c_header_rules_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__write_deps_file__construct_c_header_rules_11_p_0(
  MR_Word Globals_12,
  MR_Word ModuleName_13,
  MR_Word AllDeps_14,
  MR_String CFileName_15,
  MR_String ObjFileName_16,
  MR_String PicObjFileName_17,
  MR_Word * MmakeRulesCHeaders_18,
  MR_Word STATE_VARIABLE_Cache_0_30,
  MR_Word * STATE_VARIABLE_Cache_31);

static MR_Box MR_CALL 
parse_tree__write_deps_file__construct_intermod_rules_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__construct_intermod_rules_14_p_0(
  MR_Word Globals_15,
  MR_Word ModuleName_16,
  MR_Word LongDeps_17,
  MR_Word AllDeps_18,
  MR_String ErrFileName_19,
  MR_String TransOptDateFileName_20,
  MR_String CDateFileName_21,
  MR_String JavaDateFileName_22,
  MR_String ObjFileName_23,
  MR_Word * MmakeRulesIntermod_24,
  MR_Word STATE_VARIABLE_Cache_0_49,
  MR_Word * STATE_VARIABLE_Cache_50);

static void MR_CALL 
parse_tree__write_deps_file__get_both_opt_deps_10_p_0(
  MR_Word Globals_1,
  MR_Word BuildOptFiles_2,
  MR_Word IntermodDirs_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Cache_0_7,
  MR_Word * STATE_VARIABLE_Cache_8);

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_name_10_p_0(
  MR_Word Globals_11,
  MR_String From_12,
  MR_Word Ext_13,
  MR_Word NewExt_14,
  MR_Word ModuleName_15,
  MR_String * FileName_16,
  MR_Word STATE_VARIABLE_Cache_0_22,
  MR_Word * STATE_VARIABLE_Cache_23);

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_names_with_suffix_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_names_with_suffix_9_p_0(
  MR_Word Globals_10,
  MR_Word Ext_11,
  MR_Word NewExt_12,
  MR_Word Modules_13,
  MR_Word * FileNames_14,
  MR_Word STATE_VARIABLE_Cache_0_17,
  MR_Word * STATE_VARIABLE_Cache_18);

static void MR_CALL 
parse_tree__write_deps_file__construct_build_nested_children_first_rule_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__write_deps_file__construct_build_nested_children_first_rule_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word MaybeTopModule_11,
  MR_Word * MmakeRulesNestedDeps_12,
  MR_Word STATE_VARIABLE_Cache_0_19,
  MR_Word * STATE_VARIABLE_Cache_20);

static MR_Box MR_CALL 
parse_tree__write_deps_file__construct_date_file_deps_rule_20_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__construct_date_file_deps_rule_20_p_0(
  MR_Word Globals_21,
  MR_Word ModuleName_22,
  MR_String SourceFileName_23,
  MR_Word Ancestors_24,
  MR_Word LongDeps_25,
  MR_Word ShortDeps_26,
  MR_Word PublicChildren_27,
  MR_String Int0FileName_28,
  MR_String OptDateFileName_29,
  MR_String TransOptDateFileName_30,
  MR_Word ForeignIncludeFilesSet_31,
  MR_String CDateFileName_32,
  MR_String JavaDateFileName_33,
  MR_String ErrFileName_34,
  MR_Word FactTableSourceGroups_35,
  MR_Word * MmakeRuleDateFileDeps_36,
  MR_Word STATE_VARIABLE_Cache_0_52,
  MR_Word * STATE_VARIABLE_Cache_53);

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_name_group_with_suffix_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_name_group_with_suffix_10_p_0(
  MR_Word Globals_11,
  MR_String GroupName_12,
  MR_Word Ext_13,
  MR_Word NewExt_14,
  MR_Word Modules_15,
  MR_Word * Groups_16,
  MR_Word STATE_VARIABLE_Cache_0_20,
  MR_Word * STATE_VARIABLE_Cache_21);

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
parse_tree__write_deps_file__construct_trans_opt_deps_rule_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__write_deps_file__construct_trans_opt_deps_rule_9_p_0(
  MR_Word Globals_10,
  MR_Word MaybeInclTransOptRule_11,
  MR_Word IntermodDeps_12,
  MR_String TransOptDateFileName_13,
  MR_Word * MmakeRulesTransOpt_14,
  MR_Word STATE_VARIABLE_Cache_0_28,
  MR_Word * STATE_VARIABLE_Cache_29);

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_include_trans_opt_rule_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_include_trans_opt_rule_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

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

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____module_file_name_cache_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_deps_file____Compare____module_file_name_cache_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____module_name_and_ext_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_deps_file____Compare____module_name_and_ext_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____trans_opt_rule_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_deps_file____Compare____trans_opt_rule_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[156][2];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[4][4];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[24][3];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[8][5];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[50][1];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[1][13];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_7[10][6];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[1][12];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[1][11];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_10[3][7];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_11[1][8];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_12[1][10];




static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[156][2] = {
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 12U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 12U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 12U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  13 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".java_date")))),
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[10])))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[13])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 12U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row  16 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".dir/*.\044O")))),
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[15])))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[16])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[14])))
  },
  /* row  18 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".c_date")))),
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[8])))
  },
  /* row  19 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[18])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[17])))
  },
  /* row  20 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".trans_opt_date")))),
    ((MR_Box) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_5[4])))
  },
  /* row  21 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[20])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[19])))
  },
  /* row  22 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".optdate")))),
    ((MR_Box) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_5[6])))
  },
  /* row  23 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[22])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[21])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 18U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 11U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  30 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".dll")))),
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[29])))
  },
  /* row  31 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[30])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  32 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".class")))),
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[28])))
  },
  /* row  33 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[32])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[31])))
  },
  /* row  34 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".java")))),
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[26])))
  },
  /* row  35 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[34])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[33])))
  },
  /* row  36 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".pic_o")))),
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[11])))
  },
  /* row  37 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[36])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[35])))
  },
  /* row  38 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".\044O")))),
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[9])))
  },
  /* row  39 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[38])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[37])))
  },
  /* row  40 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".c")))),
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[12])))
  },
  /* row  41 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[40])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[39])))
  },
  /* row  42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 9U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  43 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 11U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row  45 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  47 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  48 */
  {
    ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE)")),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  49 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 11U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 10U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  51 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 11U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row  52 */
  {
    ((MR_Box) ((MR_String) "\044(EXT_FOR_SHARED_LIB)")),
    ((MR_Box) ((MR_String) "\044(A)"))
  },
  /* row  53 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 10U)
  },
  /* row  54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 11U)
  },
  /* row  55 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 9U)
  },
  /* row  56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 8U)
  },
  /* row  57 */
  {
    ((MR_Box) ((MR_String) "install_lib_dirs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  58 */
  {
    ((MR_Box) ((MR_String) "done")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  59 */
  {
    ((MR_Box) ((MR_String) "\t} || exit 1; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[58])))
  },
  /* row  60 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044(INSTALL_INT_DIR)\"/*.\044\044ext \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[59])))
  },
  /* row  61 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[60])))
  },
  /* row  62 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \"\044\044dir\" ] || \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[61])))
  },
  /* row  63 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \"\044\044dir\" || { \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[62])))
  },
  /* row  64 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[63])))
  },
  /* row  65 */
  {
    ((MR_Box) ((MR_String) "\tdir=\"\044(INSTALL_INT_DIR)/Mercury/\044\044{ext}s\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[64])))
  },
  /* row  66 */
  {
    ((MR_Box) ((MR_String) "install_grade_dirs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  67 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[59])))
  },
  /* row  68 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044(INSTALL_GRADE_INT_DIR)\"/*.\044\044ext \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[67])))
  },
  /* row  69 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[68])))
  },
  /* row  70 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \"\044\044dir\" ] || \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[69])))
  },
  /* row  71 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \"\044\044dir\" || { \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[70])))
  },
  /* row  72 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[71])))
  },
  /* row  73 */
  {
    ((MR_Box) ((MR_String) "\tdir=\"\044(INSTALL_GRADE_INT_DIR)/Mercury/\044\044{ext}s\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[72])))
  },
  /* row  74 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INC_DIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[58])))
  },
  /* row  75 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[74])))
  },
  /* row  76 */
  {
    ((MR_Box) ((MR_String) "} || exit 1")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  77 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[76])))
  },
  /* row  78 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[77])))
  },
  /* row  79 */
  {
    ((MR_Box) ((MR_String) "\t} && \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[78])))
  },
  /* row  80 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_INT_DIR)/Mercury/mihs; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[79])))
  },
  /* row  81 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[80])))
  },
  /* row  82 */
  {
    ((MR_Box) ((MR_String) "\t{ [ -d \044(INSTALL_INT_DIR)/Mercury/mihs ] || \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[81])))
  },
  /* row  83 */
  {
    ((MR_Box) ((MR_String) "\044(LN_S) .. \044(INSTALL_INT_DIR)/Mercury/mihs || { \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[82])))
  },
  /* row  84 */
  {
    ((MR_Box) ((MR_String) "rm -rf \044(INSTALL_INT_DIR)/Mercury/mihs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[83])))
  },
  /* row  85 */
  {
    ((MR_Box) ((MR_String) "} || exit 1")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[84])))
  },
  /* row  86 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_GRADE_INC_SUBDIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[85])))
  },
  /* row  87 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[86])))
  },
  /* row  88 */
  {
    ((MR_Box) ((MR_String) "\t} && \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[87])))
  },
  /* row  89 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \044(INSTALL_GRADE_INC_SUBDIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[88])))
  },
  /* row  90 */
  {
    ((MR_Box) ((MR_String) "\t{ [ -d \044(INSTALL_GRADE_INC_SUBDIR) ] || \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[89])))
  },
  /* row  91 */
  {
    ((MR_Box) ((MR_String) "\044(LN_S) .. \044(INSTALL_GRADE_INC_SUBDIR) || { \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[90])))
  },
  /* row  92 */
  {
    ((MR_Box) ((MR_String) "rm -rf \044(INSTALL_GRADE_INC_SUBDIR)")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[91])))
  },
  /* row  93 */
  {
    ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'.")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[92])))
  },
  /* row  94 */
  {
    ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[93])))
  },
  /* row  95 */
  {
    ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option.")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[94])))
  },
  /* row  96 */
  {
    ((MR_Box) ((MR_String) "done")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[95])))
  },
  /* row  97 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_GRADE_INC_DIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[96])))
  },
  /* row  98 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[97])))
  },
  /* row  99 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row 100 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[3])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 101 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row 102 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[4])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[100])))
  },
  /* row 103 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 104 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[102])))
  },
  /* row 105 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 106 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[6])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[104])))
  },
  /* row 107 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row 108 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[7])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[106])))
  },
  /* row 109 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 14U)
  },
  /* row 110 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[8])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[108])))
  },
  /* row 111 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 17U)
  },
  /* row 112 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[9])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[110])))
  },
  /* row 113 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 15U)
  },
  /* row 114 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[10])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[112])))
  },
  /* row 115 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 12U)
  },
  /* row 116 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[11])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[114])))
  },
  /* row 117 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 13U)
  },
  /* row 118 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[12])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[116])))
  },
  /* row 119 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row 120 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_3[13])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[118])))
  },
  /* row 121 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row 122 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 13U)),
    (MR_Box) ((MR_Unsigned) 16U)
  },
  /* row 123 */
  {
    ((MR_Box) ((MR_String) ".foreign_cs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 124 */
  {
    ((MR_Box) ((MR_String) ".errs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[123])))
  },
  /* row 125 */
  {
    ((MR_Box) ((MR_String) ".dep_errs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[124])))
  },
  /* row 126 */
  {
    ((MR_Box) ((MR_String) ".profs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[125])))
  },
  /* row 127 */
  {
    ((MR_Box) ((MR_String) ".javas")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[126])))
  },
  /* row 128 */
  {
    ((MR_Box) ((MR_String) ".useds")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[127])))
  },
  /* row 129 */
  {
    ((MR_Box) ((MR_String) ".java_dates")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[128])))
  },
  /* row 130 */
  {
    ((MR_Box) ((MR_String) ".c_dates")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[129])))
  },
  /* row 131 */
  {
    ((MR_Box) ((MR_String) ".all_pic_os")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[130])))
  },
  /* row 132 */
  {
    ((MR_Box) ((MR_String) ".all_os")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[131])))
  },
  /* row 133 */
  {
    ((MR_Box) ((MR_String) ".mihs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[132])))
  },
  /* row 134 */
  {
    ((MR_Box) ((MR_String) ".cs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[133])))
  },
  /* row 135 */
  {
    ((MR_Box) ((MR_String) ".dirs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[134])))
  },
  /* row 136 */
  {
    ((MR_Box) ((MR_String) ".classes")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 137 */
  {
    ((MR_Box) ((MR_String) ".foreign_dlls")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[136])))
  },
  /* row 138 */
  {
    ((MR_Box) ((MR_String) ".dlls")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[137])))
  },
  /* row 139 */
  {
    ((MR_Box) ((MR_String) ".all_mihs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[138])))
  },
  /* row 140 */
  {
    ((MR_Box) ((MR_String) ".all_mhs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[139])))
  },
  /* row 141 */
  {
    ((MR_Box) ((MR_String) ".module_deps")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[140])))
  },
  /* row 142 */
  {
    ((MR_Box) ((MR_String) ".ds")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[141])))
  },
  /* row 143 */
  {
    ((MR_Box) ((MR_String) ".imdgs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[142])))
  },
  /* row 144 */
  {
    ((MR_Box) ((MR_String) ".requests")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[143])))
  },
  /* row 145 */
  {
    ((MR_Box) ((MR_String) ".analysiss")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[144])))
  },
  /* row 146 */
  {
    ((MR_Box) ((MR_String) ".trans_opts")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[145])))
  },
  /* row 147 */
  {
    ((MR_Box) ((MR_String) ".opts")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[146])))
  },
  /* row 148 */
  {
    ((MR_Box) ((MR_String) ".int3s")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[147])))
  },
  /* row 149 */
  {
    ((MR_Box) ((MR_String) ".all_int0s")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[148])))
  },
  /* row 150 */
  {
    ((MR_Box) ((MR_String) ".ints")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[149])))
  },
  /* row 151 */
  {
    ((MR_Box) ((MR_String) ".trans_opt_dates")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[150])))
  },
  /* row 152 */
  {
    ((MR_Box) ((MR_String) ".optdates")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[151])))
  },
  /* row 153 */
  {
    ((MR_Box) ((MR_String) ".date3s")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[152])))
  },
  /* row 154 */
  {
    ((MR_Box) ((MR_String) ".date0s")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[153])))
  },
  /* row 155 */
  {
    ((MR_Box) ((MR_String) ".dates")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[154])))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[4][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_other_ext_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_newext_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[9])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".m"))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[9])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_9_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".err"))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[9])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_9_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".dep_err"))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[24][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_module_name_and_ext_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[2]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[4])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[37]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[99]))),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[38]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[101]))),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[39]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[103]))),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[40]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[105]))),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row   7 */
  {
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[41]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[107]))),
    ((MR_Box) ((MR_String) ".classes"))
  },
  /* row   8 */
  {
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[42]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[109]))),
    ((MR_Box) ((MR_String) ".javas"))
  },
  /* row   9 */
  {
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[43]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[111]))),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row  10 */
  {
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[44]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[113]))),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row  11 */
  {
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[45]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[115]))),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row  12 */
  {
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[46]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[117]))),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[47]))),
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[119]))),
    ((MR_Box) ((MR_String) ".errs"))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[2])),
    ((MR_Box) (parse_tree__write_deps_file__construct_intermod_rules_14_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[1])),
    ((MR_Box) (parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[2])),
    ((MR_Box) (parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  17 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[3])),
    ((MR_Box) (parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  18 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[4])),
    ((MR_Box) (parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[5])),
    ((MR_Box) (parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  20 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[7])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  21 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[6])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_9_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  22 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[7])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_9_p_0_9)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[7])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_9_p_0_10)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[8][5] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_newext_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_newext_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__write_deps_file____vpti_tuple_3__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_parse_tree__file_names__type_ctor_info_newext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[50][1] = {
  /* row   0 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".dv")))) },
  /* row   1 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".dep")))) },
  /* row   2 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".d")))) },
  /* row   3 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".trans_opt_date")))) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row   5 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".optdate")))) },
  /* row   6 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   7 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".c_date")))) },
  /* row   8 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".\044O")))) },
  /* row   9 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".java_date")))) },
  /* row  10 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".pic_o")))) },
  /* row  11 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".int0")))) },
  /* row  12 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row  13 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".c")))) },
  /* row  14 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".date")))) },
  /* row  15 */
  { (MR_Box) ((MR_Unsigned) 5U) },
  /* row  16 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".date0")))) },
  /* row  17 */
  { (MR_Box) ((MR_Unsigned) 4U) },
  /* row  18 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".date3")))) },
  /* row  19 */
  { (MR_Box) ((MR_Unsigned) 6U) },
  /* row  20 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".trans_opt")))) },
  /* row  21 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row  22 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".int")))) },
  /* row  23 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".int2")))) },
  /* row  24 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".mh")))) },
  /* row  25 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".opt")))) },
  /* row  26 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".mih")))) },
  /* row  27 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".java")))) },
  /* row  28 */
  { ((MR_Box) ((MR_String) "java")) },
  /* row  29 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".int3")))) },
  /* row  30 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".class")))) },
  /* row  31 */
  { ((MR_Box) (((MR_Box) ((MR_String) "")))) },
  /* row  32 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".init")))) },
  /* row  33 */
  { ((MR_Box) (((MR_Box) ((MR_String) "_init.c")))) },
  /* row  34 */
  { ((MR_Box) (((MR_Box) ((MR_String) "_init.\044O")))) },
  /* row  35 */
  { ((MR_Box) (((MR_Box) ((MR_String) "_init.pic_o")))) },
  /* row  36 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".jar")))) },
  /* row  37 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".all_trans_opts")))) },
  /* row  38 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".all_opts")))) },
  /* row  39 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".all_int3s")))) },
  /* row  40 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".all_ints")))) },
  /* row  41 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".classes")))) },
  /* row  42 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".javas")))) },
  /* row  43 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".trans_opts")))) },
  /* row  44 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".opts")))) },
  /* row  45 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".int3s")))) },
  /* row  46 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".ints")))) },
  /* row  47 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".check")))) },
  /* row  48 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".clean")))) },
  /* row  49 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".realclean")))) },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[1][13] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_newext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_parse_tree__write_deps_file__type_ctor_info_module_name_and_ext_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_parse_tree__write_deps_file__type_ctor_info_module_name_and_ext_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_7[10][6] = {
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

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file____vpti_tuple_2__plain_parse_tree__file_names__type_ctor_info_other_ext_0__plain_parse_tree__file_names__type_ctor_info_newext_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_parse_tree__write_deps_file__type_ctor_info_module_name_and_ext_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_parse_tree__write_deps_file__type_ctor_info_module_name_and_ext_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file____vpti_tuple_2__plain_parse_tree__file_names__type_ctor_info_other_ext_0__plain_parse_tree__file_names__type_ctor_info_newext_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_parse_tree__write_deps_file__type_ctor_info_module_name_and_ext_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_parse_tree__write_deps_file__type_ctor_info_module_name_and_ext_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_10[3][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_11[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__write_deps_file____vpti_tuple_3__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_parse_tree__file_names__type_ctor_info_newext_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_12[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__write_deps_file____vpti_tuple_3__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_parse_tree__file_names__type_ctor_info_newext_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
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
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_parse_tree__write_deps_file__type_ctor_info_module_name_and_ext_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_module_name_and_ext_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file____vpti_tuple_2__plain_parse_tree__file_names__type_ctor_info_other_ext_0__plain_parse_tree__file_names__type_ctor_info_newext_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_other_ext_0),
    (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_newext_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__write_deps_file____vpti_tuple_3__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_parse_tree__file_names__type_ctor_info_newext_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0),
    (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_newext_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 parse_tree__write_deps_file____vpti_tuple_3__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_parse_tree__file_names__type_ctor_info_newext_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0),
    (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_newext_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_DuFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_maybe_include_trans_opt_rule_0_0 = {
  (MR_String) "do_not_include_trans_opt_rule",
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

static const MR_PseudoTypeInfo parse_tree__write_deps_file__parse_tree__write_deps_file__field_types_maybe_include_trans_opt_rule_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_trans_opt_rule_info_0) };

static const MR_DuFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_maybe_include_trans_opt_rule_0_1 = {
  (MR_String) "include_trans_opt_rule",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__write_deps_file__parse_tree__write_deps_file__field_types_maybe_include_trans_opt_rule_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_maybe_include_trans_opt_rule_0_0[1] = { &parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_maybe_include_trans_opt_rule_0_0 };

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_maybe_include_trans_opt_rule_0_1[1] = { &parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_maybe_include_trans_opt_rule_0_1 };

static const MR_DuPtagLayout parse_tree__write_deps_file__parse_tree__write_deps_file__du_ptag_ordered_maybe_include_trans_opt_rule_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_maybe_include_trans_opt_rule_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_maybe_include_trans_opt_rule_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_name_ordered_maybe_include_trans_opt_rule_0[2] = {
  &parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_maybe_include_trans_opt_rule_0_0,
  &parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_maybe_include_trans_opt_rule_0_1
};

static const MR_Integer parse_tree__write_deps_file__parse_tree__write_deps_file__functor_number_map_maybe_include_trans_opt_rule_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_maybe_include_trans_opt_rule_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__write_deps_file____Unify____maybe_include_trans_opt_rule_0_0_10001)),
  ((MR_Box) (parse_tree__write_deps_file____Compare____maybe_include_trans_opt_rule_0_0_10001)),
  (MR_String) "parse_tree.write_deps_file",
  (MR_String) "maybe_include_trans_opt_rule",
  { parse_tree__write_deps_file__parse_tree__write_deps_file__du_name_ordered_maybe_include_trans_opt_rule_0 },
  { parse_tree__write_deps_file__parse_tree__write_deps_file__du_ptag_ordered_maybe_include_trans_opt_rule_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__write_deps_file__parse_tree__write_deps_file__functor_number_map_maybe_include_trans_opt_rule_0,

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
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_PseudoTypeInfo parse_tree__write_deps_file__parse_tree__write_deps_file__field_types_maybe_intermod_deps_0_1[5] = {
  (MR_PseudoTypeInfo) (&parse_tree__write_deps_file__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__write_deps_file__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__write_deps_file__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__write_deps_file__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__write_deps_file__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_ConstString parse_tree__write_deps_file__parse_tree__write_deps_file__field_names_maybe_intermod_deps_0_1[5] = {
  (MR_String) "id_int_deps",
  (MR_String) "id_imp_deps",
  (MR_String) "id_indirect_deps",
  (MR_String) "id_fim_deps",
  (MR_String) "id_trans_opt_deps"
};

static const MR_DuFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_maybe_intermod_deps_0_1 = {
  (MR_String) "intermod_deps",
  INT16_C(5),
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

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_maybe_intermod_deps_0_0[1] = { &parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_maybe_intermod_deps_0_0 };

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_maybe_intermod_deps_0_1[1] = { &parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_maybe_intermod_deps_0_1 };

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
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
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

static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__tree234__ti_tree234_2parse_tree__write_deps_file__type_ctor_info_module_name_and_ext_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_module_name_and_ext_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_module_file_name_cache_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__write_deps_file____Unify____module_file_name_cache_0_0_10001)),
  ((MR_Box) (parse_tree__write_deps_file____Compare____module_file_name_cache_0_0_10001)),
  (MR_String) "parse_tree.write_deps_file",
  (MR_String) "module_file_name_cache",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__write_deps_file__tree234__ti_tree234_2parse_tree__write_deps_file__type_ctor_info_module_name_and_ext_0builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo parse_tree__write_deps_file__parse_tree__write_deps_file__field_types_module_name_and_ext_0_0[2] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_other_ext_0)
};

static const MR_DuFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_module_name_and_ext_0_0 = {
  (MR_String) "module_name_and_ext",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__write_deps_file__parse_tree__write_deps_file__field_types_module_name_and_ext_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_module_name_and_ext_0_0[1] = { &parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_module_name_and_ext_0_0 };

static const MR_DuPtagLayout parse_tree__write_deps_file__parse_tree__write_deps_file__du_ptag_ordered_module_name_and_ext_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_module_name_and_ext_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_name_ordered_module_name_and_ext_0[1] = { &parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_module_name_and_ext_0_0 };

static const MR_Integer parse_tree__write_deps_file__parse_tree__write_deps_file__functor_number_map_module_name_and_ext_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_module_name_and_ext_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__write_deps_file____Unify____module_name_and_ext_0_0_10001)),
  ((MR_Box) (parse_tree__write_deps_file____Compare____module_name_and_ext_0_0_10001)),
  (MR_String) "parse_tree.write_deps_file",
  (MR_String) "module_name_and_ext",
  { parse_tree__write_deps_file__parse_tree__write_deps_file__du_name_ordered_module_name_and_ext_0 },
  { parse_tree__write_deps_file__parse_tree__write_deps_file__du_ptag_ordered_module_name_and_ext_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__write_deps_file__parse_tree__write_deps_file__functor_number_map_module_name_and_ext_0,

};

static const MR_PseudoTypeInfo parse_tree__write_deps_file__parse_tree__write_deps_file__field_types_trans_opt_rule_info_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__write_deps_file__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0) };

static const MR_DuFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_trans_opt_rule_info_0_0 = {
  (MR_String) "trans_opt_deps_from_order",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__write_deps_file__parse_tree__write_deps_file__field_types_trans_opt_rule_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__write_deps_file__parse_tree__write_deps_file__field_types_trans_opt_rule_info_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__write_deps_file__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0) };

static const MR_DuFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_trans_opt_rule_info_0_1 = {
  (MR_String) "trans_opt_deps_from_d_file",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__write_deps_file__parse_tree__write_deps_file__field_types_trans_opt_rule_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_trans_opt_rule_info_0_0[1] = { &parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_trans_opt_rule_info_0_0 };

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_trans_opt_rule_info_0_1[1] = { &parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_trans_opt_rule_info_0_1 };

static const MR_DuPtagLayout parse_tree__write_deps_file__parse_tree__write_deps_file__du_ptag_ordered_trans_opt_rule_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_trans_opt_rule_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_trans_opt_rule_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_name_ordered_trans_opt_rule_info_0[2] = {
  &parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_trans_opt_rule_info_0_1,
  &parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_trans_opt_rule_info_0_0
};

static const MR_Integer parse_tree__write_deps_file__parse_tree__write_deps_file__functor_number_map_trans_opt_rule_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_trans_opt_rule_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__write_deps_file____Unify____trans_opt_rule_info_0_0_10001)),
  ((MR_Box) (parse_tree__write_deps_file____Compare____trans_opt_rule_info_0_0_10001)),
  (MR_String) "parse_tree.write_deps_file",
  (MR_String) "trans_opt_rule_info",
  { parse_tree__write_deps_file__parse_tree__write_deps_file__du_name_ordered_trans_opt_rule_info_0 },
  { parse_tree__write_deps_file__parse_tree__write_deps_file__du_ptag_ordered_trans_opt_rule_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__write_deps_file__parse_tree__write_deps_file__functor_number_map_trans_opt_rule_info_0,

};

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1645__1_5_p_0(
  MR_Word Globals_10,
  MR_Tuple LambdaHeadVar__1_166,
  MR_String * LambdaHeadVar__2_167)
{
  MR_String F0_54;
  MR_Word M_572 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_166, (MR_Integer) 0))));
  MR_Word E_573 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_166, (MR_Integer) 1))));
  MR_Word NE_574 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_166, (MR_Integer) 2))));

  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_10, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dv_file\'/9", (MR_Integer) 0, E_573, NE_574, M_572, &F0_54);
  *LambdaHeadVar__2_167 = mercury__string__f_43_43_2_f_0((MR_String) "\044(os_subdir)", F0_54);
}

static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__generate_dv_file__1636__1_1_f_0(
  MR_Tuple LambdaHeadVar__1_155)
{
  MR_Word LambdaHeadVar__2_156 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_155, (MR_Integer) 0))));

  return LambdaHeadVar__2_156;
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1612__1_2_p_0(
  MR_Word DepsMap_13,
  MR_Word LambdaHeadVar__1_143)
{
  MR_bool succeeded;
  MR_Word BurdenedModule_35;
  MR_Word ParseTreeModuleSrc_36;
  MR_Word IncludeMap_37;
  MR_Word Var_144;
  MR_Box conv0_Var_144;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_13, ((MR_Box) (LambdaHeadVar__1_143)), &conv0_Var_144);
  Var_144 = ((MR_Word) (conv0_Var_144));
  BurdenedModule_35 = ((MR_Word) ((MR_hl_field(0, Var_144, (MR_Integer) 1))));
  ParseTreeModuleSrc_36 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_35, (MR_Integer) 1))));
  IncludeMap_37 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_36, (MR_Integer) 4))));
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), IncludeMap_37);
  succeeded = !(succeeded);
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1530__1_4_p_0(
  MR_Word DepsGraph_4,
  MR_Word LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17)
{
  MR_Word Dep_13;
  MR_Box conv0_Dep_13;

  mercury__digraph__lookup_vertex_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DepsGraph_4, LambdaHeadVar__1_15, &conv0_Dep_13);
  Dep_13 = ((MR_Word) (conv0_Dep_13));
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *LambdaHeadVar__3_17 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Dep_13));
    MR_hl_field(1, base, 1) = ((MR_Box) (LambdaHeadVar__2_16));
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1498__1_2_p_0(
  MR_Word ModuleName_29,
  MR_Word LambdaHeadVar__1_55)
{
  MR_bool succeeded;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_29, LambdaHeadVar__1_55);
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__construct_foreign_import_rules__1012__1_3_p_0(
  MR_Word SourceFileModuleName_15,
  MR_Word LambdaHeadVar__1_69,
  MR_Word * LambdaHeadVar__2_70)
{
  MR_bool succeeded;
  MR_String Var_71;

  *LambdaHeadVar__2_70 = parse_tree__prog_foreign__fim_spec_module_name_from_module_2_f_0(LambdaHeadVar__1_69, SourceFileModuleName_15);
  succeeded = ((MR_tag((MR_Word) *LambdaHeadVar__2_70)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_71 = ((MR_String) ((MR_hl_field(0, *LambdaHeadVar__2_70, (MR_Integer) 0))));
    succeeded = (strcmp(Var_71, (MR_String) "mercury") == 0);
  }
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__construct_foreign_import_rules__1006__1_2_p_0(
  MR_Word BackendLangs_37,
  MR_Word LambdaHeadVar__1_66)
{
  MR_bool succeeded;
  MR_Word Var_67 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_66, (MR_Integer) 0))) & (MR_Integer) 3);

  succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_67)), BackendLangs_37);
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file____Compare____module_name_and_ext_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_String Var_13 = (MR_String) (ArgX2_7);
      MR_String Var_14 = (MR_String) (ArgY2_8);

      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_13, Var_14);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____module_name_and_ext_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_11;
    MR_String Var_12;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      Var_11 = (MR_String) (ArgX2_5);
      Var_12 = (MR_String) (ArgY2_6);
      succeeded = (strcmp(Var_11, Var_12) == 0);
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file____Compare____module_file_name_cache_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_3[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____module_file_name_cache_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_3[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_3[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_3[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_intermod_deps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_28 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_29 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_28 == CastY_29);
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
    MR_Word Var_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word Var_36 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word Var_37 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word Var_38 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgY2_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgY3_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgY4_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgY5_27 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 4))));
      MR_Word SubResult1_16;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), &SubResult1_16, ((MR_Box) (Var_39)), ((MR_Box) (ArgY1_15)));
      succeeded = (SubResult1_16 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_16;
      else
      {
        MR_Word SubResult2_19;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), &SubResult2_19, ((MR_Box) (Var_38)), ((MR_Box) (ArgY2_18)));
        succeeded = (SubResult2_19 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_19;
        else
        {
          MR_Word SubResult3_22;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), &SubResult3_22, ((MR_Box) (Var_37)), ((MR_Box) (ArgY3_21)));
          succeeded = (SubResult3_22 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_22;
          else
          {
            MR_Word SubResult4_25;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), &SubResult4_25, ((MR_Box) (Var_36)), ((MR_Box) (ArgY4_24)));
            succeeded = (SubResult4_25 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_25;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_35)), ((MR_Box) (ArgY5_27)));
          }
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
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_15 == CastY_16);
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
    MR_Word TypeInfo_17_17;
    MR_Word TypeInfo_18_18;
    MR_Word TypeInfo_19_19;
    MR_Word TypeInfo_20_20;
    MR_Word TypeInfo_21_21;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;
    MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_10;
    MR_Word ArgX4_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_12;
    MR_Word ArgX5_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_14;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      ArgY3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 2))));
      ArgY4_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 3))));
      ArgY5_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 4))));
      TypeInfo_17_17 = (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
      {
        TypeInfo_18_18 = (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX4_11)), ((MR_Box) (ArgY4_12)));
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (ArgX5_13)), ((MR_Box) (ArgY5_14)));
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_include_trans_opt_rule_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
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
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      parse_tree__write_deps_file____Compare____trans_opt_rule_info_0_0(HeadVar__1_1, Var_11, ArgY1_7);
    }
  }
}

void MR_CALL 
parse_tree__write_deps_file____Compare____trans_opt_rule_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word Var_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_16)), ((MR_Box) (ArgY1_11)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  }
  else
  {
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_include_trans_opt_rule_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = parse_tree__write_deps_file____Unify____trans_opt_rule_info_0_0(ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____trans_opt_rule_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_10_10 = (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
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

  parse_tree__parse_tree_out_sym_name__write_sym_name_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_10[2]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (parse_tree__write_deps_file__write_module_scc_4_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (Stream_5));
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
  BurdenedModule_9 = ((MR_Word) ((MR_hl_field(0, Deps_7, (MR_Integer) 1))));
  Baggage_10 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_9, (MR_Integer) 0))));
  SourceFileName_11 = ((MR_String) ((MR_hl_field(0, Baggage_10, (MR_Integer) 0))));
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
  MR_Tuple HeadVar__4_4,
  MR_Word * MmakeRule_14)
{
  MR_Word Ext_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 0))));
  MR_Word NewExt_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 1))));
  MR_String VarExtension_13 = ((MR_String) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 2))));
  MR_String TargetName_16;
  MR_String Source_17;
  MR_String ExtStr_18;
  MR_String Var_30;
  MR_String Var_32;
  MR_Word Var_34;
  MR_String Var_38;
  MR_String Var_39;

  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_8, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_collective_target\'/7", (MR_Integer) 1, Ext_11, NewExt_12, ModuleName_9, &TargetName_16);
  Var_38 = mercury__string__f_43_43_2_f_0(VarExtension_13, (MR_String) ")");
  Var_39 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_10, Var_38);
  Source_17 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_39);
  ExtStr_18 = parse_tree__file_names__extension_to_string_3_f_0(Globals_8, Ext_11, NewExt_12);
  Var_32 = mercury__string__f_43_43_2_f_0(ExtStr_18, VarExtension_13);
  Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "collective_target_", Var_32);
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Source_17));
    MR_hl_field(1, Var_34, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRule_14 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Var_30));
    MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, base, 3) = ((MR_Box) (TargetName_16));
    MR_hl_field(3, base, 4) = ((MR_Box) (Var_34));
    MR_hl_field(3, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__construct_subdirs_shorthand_rule_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Tuple HeadVar__3_3,
  MR_Word * MmakeRule_13,
  MR_Word STATE_VARIABLE_Cache_0_20,
  MR_Word * STATE_VARIABLE_Cache_21)
{
  MR_Word OtherExt_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word NewExt_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_String ModuleStr_16;
  MR_String Target_17;
  MR_String ExtStr_18;
  MR_String ShorthandTarget_19;
  MR_Word Var_25;
  MR_String Var_29;
  MR_Word Var_32;

  parse_tree__file_names__module_name_to_file_name_stem_2_p_0(ModuleName_10, &ModuleStr_16);
  {
    Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_25, 0) = ((MR_Box) (OtherExt_11));
  }
  parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.construct_subdirs_shorthand_rule\'/8", Var_25, NewExt_12, ModuleName_10, &Target_17, STATE_VARIABLE_Cache_0_20, STATE_VARIABLE_Cache_21);
  ExtStr_18 = parse_tree__file_names__extension_to_string_3_f_0(Globals_9, Var_25, NewExt_12);
  ShorthandTarget_19 = mercury__string__f_43_43_2_f_0(ModuleStr_16, ExtStr_18);
  Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "subdir_shorthand_for_", ExtStr_18);
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Target_17));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRule_13 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Var_29));
    MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, base, 3) = ((MR_Box) (ShorthandTarget_19));
    MR_hl_field(3, base, 4) = ((MR_Box) (Var_32));
    MR_hl_field(3, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static MR_String MR_CALL 
parse_tree__write_deps_file__foreign_include_file_path_name_2_f_0(
  MR_String SourceFileName_4,
  MR_Word IncludeFile_5)
{
  MR_String IncludePath_6;
  MR_String IncludeFileName_8 = ((MR_String) ((MR_hl_field(0, IncludeFile_5, (MR_Integer) 1))));

  parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_4, IncludeFileName_8, &IncludePath_6);
  return IncludePath_6;
}

static void MR_CALL 
parse_tree__write_deps_file__gather_nested_deps_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_String conv1_FileName_16;
  MR_Word conv0_STATE_VARIABLE_Cache_23;

  parse_tree__write_deps_file__make_module_file_name_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_16, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_23);
  *wrapper_arg_2 = ((MR_Box) (conv1_FileName_16));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_23));
}

static void MR_CALL 
parse_tree__write_deps_file__gather_nested_deps_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word NestedDeps_12,
  MR_Tuple HeadVar__4_4,
  MR_Word * MmakeRule_15,
  MR_Word STATE_VARIABLE_Cache_0_21,
  MR_Word * STATE_VARIABLE_Cache_22)
{
  MR_Word OtherExt_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 0))));
  MR_Word NewExt_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 1))));
  MR_String ModuleExtName_18;
  MR_Word NestedDepsFileNames_19;
  MR_String ExtStr_20;
  MR_Word Var_26;
  MR_Word STATE_VARIABLE_Cache_27_27;
  MR_String Var_33;
  MR_Word Var_37;
  MR_Box conv3_STATE_VARIABLE_Cache_22;
  MR_Box conv2_STATE_VARIABLE_IO_24;

  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (OtherExt_13));
  }
  parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_10, (MR_String) "predicate \140parse_tree.write_deps_file.gather_nested_deps\'/9", Var_26, NewExt_14, ModuleName_11, &ModuleExtName_18, STATE_VARIABLE_Cache_0_21, &STATE_VARIABLE_Cache_27_27);
  {
    Var_37 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_37, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
    MR_hl_field(0, Var_37, 1) = ((MR_Box) (parse_tree__write_deps_file__gather_nested_deps_9_p_0_1));
    MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_37, 3) = ((MR_Box) (Globals_10));
    MR_hl_field(0, Var_37, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_deps_file.make_module_file_names_with_suffix\'/9"));
    MR_hl_field(0, Var_37, 5) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_37, 6) = ((MR_Box) (NewExt_14));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_37, NestedDeps_12, &NestedDepsFileNames_19, ((MR_Box) (STATE_VARIABLE_Cache_27_27)), &conv3_STATE_VARIABLE_Cache_22, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_24);
  *STATE_VARIABLE_Cache_22 = ((MR_Word) (conv3_STATE_VARIABLE_Cache_22));
  ExtStr_20 = parse_tree__file_names__extension_to_string_3_f_0(Globals_10, Var_26, NewExt_14);
  Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "nested_deps_for_", ExtStr_20);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRule_15 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Var_33));
    MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, base, 3) = ((MR_Box) (ModuleExtName_18));
    MR_hl_field(3, base, 4) = ((MR_Box) (NestedDepsFileNames_19));
    MR_hl_field(3, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_parse_tree_plain_opt_3_p_0(
  MR_Word ParseTreePlainOpt_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_6,
  MR_Word * STATE_VARIABLE_FIMSpecs_7)
{
  MR_Word Var_8 = ((MR_Word) ((MR_hl_field(0, ParseTreePlainOpt_4, (MR_Integer) 3))));

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
        MR_Word ParseTreeInt0_6 = ((MR_Word) ((MR_hl_field(0, IntForOptSpec_4, (MR_Integer) 0))));
        MR_Word IntFIMS_14 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 5))));
        MR_Word ImpFIMS_15 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 6))));
        MR_Word Var_16;
        MR_Word Var_17;
        MR_Word Var_18;

        {
          Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_18, 0) = ((MR_Box) (STATE_VARIABLE_FIMSpecs_0_12));
          MR_hl_field(1, Var_18, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_17, 0) = ((MR_Box) (ImpFIMS_15));
          MR_hl_field(1, Var_17, 1) = ((MR_Box) (Var_18));
        }
        {
          Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_16, 0) = ((MR_Box) (IntFIMS_14));
          MR_hl_field(1, Var_16, 1) = ((MR_Box) (Var_17));
        }
        *STATE_VARIABLE_FIMSpecs_13 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_16);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParseTreeInt1_8 = ((MR_Word) ((MR_hl_field(1, IntForOptSpec_4, (MR_Integer) 0))));

        parse_tree__write_deps_file__gather_fim_specs_in_parse_tree_int1_3_p_0(ParseTreeInt1_8, STATE_VARIABLE_FIMSpecs_0_12, STATE_VARIABLE_FIMSpecs_13);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParseTreeInt2_10 = ((MR_Word) ((MR_hl_field(2, IntForOptSpec_4, (MR_Integer) 0))));
        MR_Word IntFIMS_63 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_10, (MR_Integer) 5))));
        MR_Word ImpFIMS_64 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_10, (MR_Integer) 6))));
        MR_Word Var_65;
        MR_Word Var_66;
        MR_Word Var_67;

        {
          Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_67, 0) = ((MR_Box) (STATE_VARIABLE_FIMSpecs_0_12));
          MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_66, 0) = ((MR_Box) (ImpFIMS_64));
          MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_67));
        }
        {
          Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_65, 0) = ((MR_Box) (IntFIMS_63));
          MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_66));
        }
        *STATE_VARIABLE_FIMSpecs_13 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_65);
      }
      break;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_parse_tree_int1_3_p_0(
  MR_Word ParseTreeInt1_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9)
{
  MR_Word IntFIMS_6 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_4, (MR_Integer) 5))));
  MR_Word ImpFIMS_7 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_4, (MR_Integer) 6))));
  MR_Word Var_11;
  MR_Word Var_12;
  MR_Word Var_13;

  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (STATE_VARIABLE_FIMSpecs_0_8));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (ImpFIMS_7));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_13));
  }
  {
    Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_11, 0) = ((MR_Box) (IntFIMS_6));
    MR_hl_field(1, Var_11, 1) = ((MR_Box) (Var_12));
  }
  *STATE_VARIABLE_FIMSpecs_9 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_11);
}

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_indirect_int2_spec_3_p_0(
  MR_Word IndirectInt2Spec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9)
{
  MR_Word ParseTreeInt2_6 = ((MR_Word) ((MR_hl_field(0, IndirectInt2Spec_4, (MR_Integer) 0))));
  MR_Word IntFIMS_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_6, (MR_Integer) 5))));
  MR_Word ImpFIMS_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_6, (MR_Integer) 6))));
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;

  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (STATE_VARIABLE_FIMSpecs_0_8));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (ImpFIMS_11));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_14));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (IntFIMS_10));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_13));
  }
  *STATE_VARIABLE_FIMSpecs_9 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_12);
}

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_direct_int1_spec_3_p_0(
  MR_Word DirectInt1Spec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9)
{
  MR_Word ParseTreeInt1_6 = ((MR_Word) ((MR_hl_field(0, DirectInt1Spec_4, (MR_Integer) 0))));
  MR_Word IntFIMS_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_6, (MR_Integer) 5))));
  MR_Word ImpFIMS_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt1_6, (MR_Integer) 6))));
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;

  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (STATE_VARIABLE_FIMSpecs_0_8));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (ImpFIMS_11));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_14));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (IntFIMS_10));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_13));
  }
  *STATE_VARIABLE_FIMSpecs_9 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_12);
}

static void MR_CALL 
parse_tree__write_deps_file__gather_fim_specs_in_ancestor_int_spec_3_p_0(
  MR_Word AncestorIntSpec_4,
  MR_Word STATE_VARIABLE_FIMSpecs_0_8,
  MR_Word * STATE_VARIABLE_FIMSpecs_9)
{
  MR_Word ParseTreeInt0_6 = ((MR_Word) ((MR_hl_field(0, AncestorIntSpec_4, (MR_Integer) 0))));
  MR_Word IntFIMS_10 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 5))));
  MR_Word ImpFIMS_11 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt0_6, (MR_Integer) 6))));
  MR_Word Var_12;
  MR_Word Var_13;
  MR_Word Var_14;

  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (STATE_VARIABLE_FIMSpecs_0_8));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (ImpFIMS_11));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_14));
  }
  {
    Var_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_12, 0) = ((MR_Box) (IntFIMS_10));
    MR_hl_field(1, Var_12, 1) = ((MR_Box) (Var_13));
  }
  *STATE_VARIABLE_FIMSpecs_9 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_12);
}

static void MR_CALL 
parse_tree__write_deps_file__output_module_order_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__write_deps_file__write_module_scc_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
parse_tree__write_deps_file__output_module_order_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word Ext_10,
  MR_Word NewExt_11,
  MR_Word DepsOrdering_12)
{
  MR_String OrdFileName_14;
  MR_Word ProgressStream_15;
  MR_Word Verbose_16;
  MR_String CreatingMsg_17;
  MR_Word OrdResult_18;
  MR_Word Var_28;
  MR_String Var_59;

  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Ext_10));
  }
  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_8, (MR_String) "predicate \140parse_tree.write_deps_file.output_module_order\'/7", (MR_Integer) 0, Var_28, NewExt_11, ModuleName_9, &OrdFileName_14);
  libs__globals__get_progress_output_stream_5_p_0(Globals_8, ModuleName_9, &ProgressStream_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 72, &Verbose_16);
  Var_59 = mercury__string__f_43_43_2_f_0(OrdFileName_14, (MR_String) "\'...");
  CreatingMsg_17 = mercury__string__f_43_43_2_f_0((MR_String) "% Creating module order file \140", Var_59);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_15, Verbose_16, CreatingMsg_17);
  mercury__io__open_output_4_p_0(OrdFileName_14, &OrdResult_18);
  if (((MR_tag((MR_Word) OrdResult_18)) == (MR_Integer) 1))
  {
    MR_Word IOError_20 = ((MR_Word) ((MR_hl_field(1, OrdResult_18, (MR_Integer) 0))));
    MR_Word ErrorStream_21;
    MR_String IOErrorMessage_22;
    MR_String OrdMessage_23;
    MR_String Var_62;
    MR_String Var_63;

    libs__file_util__maybe_write_string_5_p_0(ProgressStream_15, Verbose_16, (MR_String) " failed.\n");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_15, Verbose_16);
    libs__globals__get_error_output_stream_5_p_0(Globals_8, ModuleName_9, &ErrorStream_21);
    mercury__io__error_message_2_p_0(IOError_20, &IOErrorMessage_22);
    Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", IOErrorMessage_22);
    Var_63 = mercury__string__f_43_43_2_f_0(OrdFileName_14, Var_62);
    OrdMessage_23 = mercury__string__f_43_43_2_f_0((MR_String) "error opening file \140", Var_63);
    libs__file_util__report_error_4_p_0(ErrorStream_21, OrdMessage_23);
  }
  else
  {
    MR_Word OrdStream_19 = ((MR_Word) ((MR_hl_field(0, OrdResult_18, (MR_Integer) 0))));
    MR_Word Var_39;

    {
      Var_39 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_39, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_10[1]));
      MR_hl_field(0, Var_39, 1) = ((MR_Box) (parse_tree__write_deps_file__output_module_order_7_p_0_1));
      MR_hl_field(0, Var_39, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_39, 3) = ((MR_Box) (OrdStream_19));
    }
    mercury__io__write_list_6_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), OrdStream_19, DepsOrdering_12, (MR_String) "\n\n", Var_39);
    mercury__io__close_output_3_p_0(OrdStream_19);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_15, Verbose_16, (MR_String) " done.\n");
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
  MR_String Var_57;

  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 72, &Verbose_12);
  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_7, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dependencies_write_dep_file\'/6", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[1])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[6])), ModuleName_9, &DepFileName_13);
  libs__globals__get_progress_output_stream_5_p_0(Globals_7, ModuleName_9, &ProgressStream_14);
  Var_57 = mercury__string__f_43_43_2_f_0(DepFileName_13, (MR_String) "\'...\n");
  CreatingMsg_15 = mercury__string__f_43_43_2_f_0((MR_String) "% Creating auto-dependency file \140", Var_57);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_14, Verbose_12, CreatingMsg_15);
  mercury__io__open_output_4_p_0(DepFileName_13, &DepResult_16);
  if (((MR_tag((MR_Word) DepResult_16)) == (MR_Integer) 1))
  {
    MR_Word IOError_19 = ((MR_Word) ((MR_hl_field(1, DepResult_16, (MR_Integer) 0))));
    MR_Word ErrorStream_20;
    MR_String IOErrorMessage_21;
    MR_String DepMessage_22;
    MR_String Var_60;
    MR_String Var_61;

    libs__file_util__maybe_write_string_5_p_0(ProgressStream_14, Verbose_12, (MR_String) " failed.\n");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_14, Verbose_12);
    libs__globals__get_error_output_stream_5_p_0(Globals_7, ModuleName_9, &ErrorStream_20);
    mercury__io__error_message_2_p_0(IOError_19, &IOErrorMessage_21);
    Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", IOErrorMessage_21);
    Var_61 = mercury__string__f_43_43_2_f_0(DepFileName_13, Var_60);
    DepMessage_22 = mercury__string__f_43_43_2_f_0((MR_String) "error opening file \140", Var_61);
    libs__file_util__report_error_4_p_0(ErrorStream_20, DepMessage_22);
  }
  else
  {
    MR_Word DepStream_17 = ((MR_Word) ((MR_hl_field(0, DepResult_16, (MR_Integer) 0))));
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
  MR_Word STATE_VARIABLE_MmakeFile_98_98;
  MR_Word STATE_VARIABLE_MmakeFile_99_99;
  MR_Word STATE_VARIABLE_MmakeFile_100_100;
  MR_Word STATE_VARIABLE_MmakeFile_102_102;
  MR_Word STATE_VARIABLE_MmakeFile_104_104;
  MR_Word STATE_VARIABLE_MmakeFile_106_106;

  ModuleNameString_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_10);
  mercury__library__version_2_p_0(&Version_15, &FullArch_16);
  {
    MmakeStartComment_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MmakeStartComment_17, 0) = ((MR_Box) ((MR_String) "program dependencies"));
    MR_hl_field(0, MmakeStartComment_17, 1) = ((MR_Box) (ModuleNameString_14));
    MR_hl_field(0, MmakeStartComment_17, 2) = ((MR_Box) (SourceFileName_9));
    MR_hl_field(0, MmakeStartComment_17, 3) = ((MR_Box) (Version_15));
    MR_hl_field(0, MmakeStartComment_17, 4) = ((MR_Box) (FullArch_16));
  }
  parse_tree__file_names__module_name_to_make_var_name_2_p_0(ModuleName_10, &ModuleMakeVarName_18);
  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_8, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[32])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[44])), ModuleName_10, &InitFileName_19);
  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_8, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[33])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[45])), ModuleName_10, &InitCFileName_20);
  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_8, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[34])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[46])), ModuleName_10, &InitObjFileName_21);
  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_8, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[35])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[47])), ModuleName_10, &InitPicObjFileName_22);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 154, &MmcMakeDeps_23);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 499, &Intermod_24);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 503, &TransOpt_25);
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
        MR_String Var_84;

        Var_84 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".module_deps)");
        ModuleDepsVar_26 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_84);
        {
          MaybeModuleDepsVar_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeModuleDepsVar_27, 0) = ((MR_Box) (ModuleDepsVar_26));
          MR_hl_field(1, MaybeModuleDepsVar_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
        MR_String Var_89;

        Var_89 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".opts)");
        OptsVar_29 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_89);
        {
          MaybeOptsVar_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeOptsVar_30, 0) = ((MR_Box) (OptsVar_29));
          MR_hl_field(1, MaybeOptsVar_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
        MR_String Var_94;

        Var_94 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".trans_opts)");
        TransOptsVar_32 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_94);
        {
          MaybeTransOptsVar_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeTransOptsVar_33, 0) = ((MR_Box) (TransOptsVar_32));
          MR_hl_field(1, MaybeTransOptsVar_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        MaybeTransOptsVarSpace_34 = mercury__string__f_43_43_2_f_0(TransOptsVar_32, (MR_String) " ");
      }
      break;
  }
  {
    MaybeModuleDepsVarPair_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MaybeModuleDepsVarPair_35, 0) = ((MR_Box) (MaybeModuleDepsVar_27));
    MR_hl_field(0, MaybeModuleDepsVarPair_35, 1) = ((MR_Box) (MaybeModuleDepsVarSpace_28));
  }
  {
    MaybeOptsVarPair_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MaybeOptsVarPair_36, 0) = ((MR_Box) (MaybeOptsVar_30));
    MR_hl_field(0, MaybeOptsVarPair_36, 1) = ((MR_Box) (MaybeOptsVarSpace_31));
  }
  {
    MaybeTransOptsVarPair_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MaybeTransOptsVarPair_37, 0) = ((MR_Box) (MaybeTransOptsVar_33));
    MR_hl_field(0, MaybeTransOptsVarPair_37, 1) = ((MR_Box) (MaybeTransOptsVarSpace_34));
  }
  libs__mmakefiles__start_mmakefile_1_p_0(&STATE_VARIABLE_MmakeFile_98_98);
  libs__mmakefiles__add_mmake_entry_3_p_0(MmakeStartComment_17, STATE_VARIABLE_MmakeFile_98_98, &STATE_VARIABLE_MmakeFile_99_99);
  parse_tree__write_deps_file__generate_dep_file_exec_library_targets_15_p_0(Globals_8, ModuleName_10, ModuleMakeVarName_18, InitFileName_19, InitObjFileName_21, MaybeOptsVar_30, MaybeTransOptsVar_33, &ExeFileName_38, &JarFileName_39, &LibFileName_40, &SharedLibFileName_41, STATE_VARIABLE_MmakeFile_99_99, &STATE_VARIABLE_MmakeFile_100_100);
  parse_tree__write_deps_file__generate_dep_file_init_targets_11_p_0(Globals_8, ModuleName_10, ModuleMakeVarName_18, InitCFileName_20, InitFileName_19, &DepFileName_42, &DvFileName_43, STATE_VARIABLE_MmakeFile_100_100, &STATE_VARIABLE_MmakeFile_102_102);
  parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0(Globals_8, ModuleName_10, DepsMap_11, ModuleMakeVarName_18, MmcMakeDeps_23, Intermod_24, TransOpt_25, MaybeModuleDepsVarPair_35, MaybeOptsVarPair_36, MaybeTransOptsVarPair_37, STATE_VARIABLE_MmakeFile_102_102, &STATE_VARIABLE_MmakeFile_104_104);
  parse_tree__write_deps_file__generate_dep_file_collective_targets_7_p_0(Globals_8, ModuleName_10, ModuleMakeVarName_18, STATE_VARIABLE_MmakeFile_104_104, &STATE_VARIABLE_MmakeFile_106_106);
  parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0(Globals_8, ModuleName_10, ModuleMakeVarName_18, ExeFileName_38, InitCFileName_20, InitObjFileName_21, InitPicObjFileName_22, InitFileName_19, LibFileName_40, SharedLibFileName_41, JarFileName_39, DepFileName_42, DvFileName_43, STATE_VARIABLE_MmakeFile_106_106, STATE_VARIABLE_MmakeFile_44);
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = parse_tree__write_deps_file__remove_suffix_files_cmd_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
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
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_90;
  MR_Word Var_94;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word Var_104;
  MR_Word Var_105;
  MR_String Var_106;
  MR_String Var_149;
  MR_Word Var_151;
  MR_Word Var_152;
  MR_Word Var_153;
  MR_Word Var_154;
  MR_Word Var_155;
  MR_Word Var_156;
  MR_Word Var_158;
  MR_Word Var_162;
  MR_Word Var_165;
  MR_Word Var_166;
  MR_Word Var_171;
  MR_Word Var_172;
  MR_Word Var_174;
  MR_String Var_175;
  MR_Word Var_178;
  MR_String Var_186;
  MR_String Var_189;

  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_18, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_clean_targets\'/17", (MR_Integer) 1, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[48])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[121])), ModuleName_19, &CleanTargetName_33);
  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_18, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_clean_targets\'/17", (MR_Integer) 1, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[49])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[122])), ModuleName_19, &RealCleanTargetName_34);
  {
    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_88, 0) = ((MR_Box) (InitPicObjFileName_24));
    MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (InitObjFileName_23));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_88));
  }
  {
    CleanFiles_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CleanFiles_36, 0) = ((MR_Box) (InitCFileName_22));
    MR_hl_field(1, CleanFiles_36, 1) = ((MR_Box) (Var_87));
  }
  {
    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_94, 0) = ((MR_Box) (CleanTargetName_33));
    MR_hl_field(1, Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_90 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_90, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_90, 1) = ((MR_Box) ((MR_String) "clean_local"));
    MR_hl_field(3, Var_90, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_90, 3) = ((MR_Box) ((MR_String) "clean_local"));
    MR_hl_field(3, Var_90, 4) = ((MR_Box) (Var_94));
    MR_hl_field(3, Var_90, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_104 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_104, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[9]));
    MR_hl_field(0, Var_104, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0_1));
    MR_hl_field(0, Var_104, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_104, 3) = ((MR_Box) (ModuleMakeVarName_20));
  }
  Var_103 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_104, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[135])));
  Var_186 = mercury__string__join_list_2_f_0((MR_String) " ", CleanFiles_36);
  Var_106 = mercury__string__f_43_43_2_f_0((MR_String) "-rm -f ", Var_186);
  {
    Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_105, 0) = ((MR_Box) (Var_106));
    MR_hl_field(1, Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_103, Var_105);
  {
    Var_98 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_98, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_98, 1) = ((MR_Box) ((MR_String) "clean_target"));
    MR_hl_field(3, Var_98, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, Var_98, 3) = ((MR_Box) (CleanTargetName_33));
    MR_hl_field(3, Var_98, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_98, 5) = ((MR_Box) (Var_102));
  }
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
    MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRulesClean_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MmakeRulesClean_37, 0) = ((MR_Box) (Var_90));
    MR_hl_field(1, MmakeRulesClean_37, 1) = ((MR_Box) (Var_97));
  }
  Var_149 = mercury__string__f_43_43_2_f_0(ExeFileName_21, (MR_String) "\044(EXT_FOR_EXE) ");
  {
    Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_156, 0) = ((MR_Box) (DvFileName_30));
    MR_hl_field(1, Var_156, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_155, 0) = ((MR_Box) (DepFileName_29));
    MR_hl_field(1, Var_155, 1) = ((MR_Box) (Var_156));
  }
  {
    Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_154, 0) = ((MR_Box) (JarFileName_28));
    MR_hl_field(1, Var_154, 1) = ((MR_Box) (Var_155));
  }
  {
    Var_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_153, 0) = ((MR_Box) (SharedLibFileName_27));
    MR_hl_field(1, Var_153, 1) = ((MR_Box) (Var_154));
  }
  {
    Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_152, 0) = ((MR_Box) (LibFileName_26));
    MR_hl_field(1, Var_152, 1) = ((MR_Box) (Var_153));
  }
  {
    Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_151, 0) = ((MR_Box) (InitFileName_25));
    MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_152));
  }
  {
    RealCleanFiles_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RealCleanFiles_39, 0) = ((MR_Box) (Var_149));
    MR_hl_field(1, RealCleanFiles_39, 1) = ((MR_Box) (Var_151));
  }
  {
    Var_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_162, 0) = ((MR_Box) (RealCleanTargetName_34));
    MR_hl_field(1, Var_162, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_158 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_158, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_158, 1) = ((MR_Box) ((MR_String) "realclean_local"));
    MR_hl_field(3, Var_158, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_158, 3) = ((MR_Box) ((MR_String) "realclean_local"));
    MR_hl_field(3, Var_158, 4) = ((MR_Box) (Var_162));
    MR_hl_field(3, Var_158, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_172 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_104, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[155])));
  Var_189 = mercury__string__join_list_2_f_0((MR_String) " ", RealCleanFiles_39);
  Var_175 = mercury__string__f_43_43_2_f_0((MR_String) "-rm -f ", Var_189);
  {
    Var_174 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_174, 0) = ((MR_Box) (Var_175));
    MR_hl_field(1, Var_174, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_171 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_172, Var_174);
  {
    Var_166 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_166, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_166, 1) = ((MR_Box) ((MR_String) "realclean_target"));
    MR_hl_field(3, Var_166, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, Var_166, 3) = ((MR_Box) (RealCleanTargetName_34));
    MR_hl_field(3, Var_166, 4) = ((MR_Box) (Var_94));
    MR_hl_field(3, Var_166, 5) = ((MR_Box) (Var_171));
  }
  {
    Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_165, 0) = ((MR_Box) (Var_166));
    MR_hl_field(1, Var_165, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRulesRealClean_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MmakeRulesRealClean_40, 0) = ((MR_Box) (Var_158));
    MR_hl_field(1, MmakeRulesRealClean_40, 1) = ((MR_Box) (Var_165));
  }
  Var_178 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), MmakeRulesClean_37, MmakeRulesRealClean_40);
  libs__mmakefiles__add_mmake_entries_3_p_0(Var_178, STATE_VARIABLE_MmakeFile_0_41, STATE_VARIABLE_MmakeFile_42);
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
  MR_Word conv0_MmakeRule_14;

  parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Tuple) (wrapper_arg_1)), &conv0_MmakeRule_14);
  *wrapper_arg_2 = ((MR_Box) (conv0_MmakeRule_14));
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
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_12[0]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_collective_targets_7_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (Globals_8));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (ModuleName_9));
    MR_hl_field(0, Var_18, 5) = ((MR_Box) (ModuleMakeVarName_10));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__write_deps_file_scalar_common_4[1]), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_18, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[120])), &MmakeRules_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_17);
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
  (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_107 = ((MR_Word) ((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv0_Var_107));
  parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_2(env_ptr);
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_2(
  void * env_ptr_arg)
{
  struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s * env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_42 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_107, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_107, (MR_Integer) 0)));
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
    MR_Word Var_398;
    MR_Word Var_399;
    MR_Word Var_400;
    MR_Word Var_401;
    MR_Word Var_402;
    MR_Word Var_403;
    MR_Word Var_404;
    MR_Word Var_405;

    (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__BurdenedModule_367 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_107, (MR_Integer) 1))));
    Var_368 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__BurdenedModule_367, (MR_Integer) 0))));
    (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__BurdenedModule_367, (MR_Integer) 1))));
    Var_369 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 0))));
    Var_370 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 1))));
    Var_371 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 2))));
    Var_372 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 3))));
    (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__IncludeMap_44 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 4))));
    Var_373 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 5))));
    Var_374 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 6))));
    Var_375 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 7))));
    Var_376 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 8))));
    Var_377 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 9))));
    Var_378 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 10))));
    Var_379 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 11))));
    Var_380 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 12))));
    Var_381 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 13))));
    Var_382 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 14))));
    Var_383 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 15))));
    Var_384 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 16))));
    Var_385 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 17))));
    Var_386 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 18))));
    Var_387 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 19))));
    Var_388 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 20))));
    Var_389 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 21))));
    Var_390 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 22))));
    Var_391 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 23))));
    Var_392 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 24))));
    Var_393 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 25))));
    Var_394 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 26))));
    Var_395 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 27))));
    Var_396 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 28))));
    Var_397 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 29))));
    Var_398 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 30))));
    Var_399 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 31))));
    Var_400 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 32))));
    Var_401 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 33))));
    Var_402 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 34))));
    Var_403 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 35))));
    Var_404 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 36))));
    Var_405 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_43, (MR_Integer) 37))));
    (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = mercury__map__is_empty_1_p_0((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_406_406, (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__IncludeMap_44);
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
        (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_406_406 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
        mercury__map__member_3_p_0((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_406_406, (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__DepsMap_17, &(env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv1_Var_41, &(env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv0_Var_107, parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_3, env_ptr);
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
    MR_Word MaybeOptsVar_27 = ((MR_Word) ((MR_hl_field(0, MaybeOptsVarPair_23, (MR_Integer) 0))));
    MR_String MaybeOptsVarSpace_28 = ((MR_String) ((MR_hl_field(0, MaybeOptsVarPair_23, (MR_Integer) 1))));
    MR_Word MaybeTransOptsVar_29 = ((MR_Word) ((MR_hl_field(0, MaybeTransOptsVarPair_24, (MR_Integer) 0))));
    MR_String MaybeTransOptsVarSpace_30 = ((MR_String) ((MR_hl_field(0, MaybeTransOptsVarPair_24, (MR_Integer) 1))));
    MR_Word MaybeModuleDepsVar_31 = ((MR_Word) ((MR_hl_field(0, MaybeModuleDepsVarPair_22, (MR_Integer) 0))));
    MR_String MaybeModuleDepsVarSpace_32 = ((MR_String) ((MR_hl_field(0, MaybeModuleDepsVarPair_22, (MR_Integer) 1))));
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
    MR_String Var_102;
    MR_String Var_105;
    MR_String Var_114;
    MR_String Var_115;
    MR_String Var_117;
    MR_String Var_118;
    MR_String Var_120;
    MR_String Var_121;
    MR_String Var_122;
    MR_String Var_123;
    MR_Word Var_127;
    MR_Word Var_128;
    MR_Word Var_129;
    MR_Word Var_131;
    MR_Word Var_132;
    MR_Word Var_133;
    MR_Word Var_134;
    MR_Word Var_138;
    MR_String Var_139;
    MR_String Var_141;
    MR_Word Var_143;
    MR_Word Var_145;
    MR_Word Var_147;
    MR_Word Var_149;
    MR_Word Var_151;
    MR_Word Var_153;
    MR_Word Var_155;
    MR_Word Var_157;
    MR_Word Var_159;
    MR_Word Var_161;
    MR_Word Var_163;
    MR_Word Var_165;
    MR_Word Var_167;
    MR_String Var_168;
    MR_String Var_170;
    MR_String Var_171;
    MR_String Var_172;
    MR_String Var_173;
    MR_Word Var_263;
    MR_Word Var_267;
    MR_String Var_268;
    MR_Word Var_276;
    MR_String Var_277;
    MR_String Var_279;
    MR_Word Var_288;
    MR_Word Var_296;
    MR_Word Var_300;
    MR_String Var_301;
    MR_Word Var_309;
    MR_String Var_310;
    MR_String Var_312;
    MR_Word Var_361;
    MR_Word STATE_VARIABLE_MmakeFile_363_363;
    MR_Word STATE_VARIABLE_MmakeFile_364_364;
    MR_Word STATE_VARIABLE_MmakeFile_365_365;
    MR_String Var_411;
    MR_String Var_414;

    parse_tree__file_names__module_name_to_lib_file_name_10_p_0(Globals_15, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_install_targets\'/14", (MR_Integer) 1, (MR_String) "lib", (MR_Word) (((MR_Box) ((MR_String) ".install_ints"))), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[53])), ModuleName_16, &LibInstallIntsTargetName_33);
    parse_tree__file_names__module_name_to_lib_file_name_10_p_0(Globals_15, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_install_targets\'/14", (MR_Integer) 1, (MR_String) "lib", (MR_Word) (((MR_Box) ((MR_String) ".install_opts"))), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[54])), ModuleName_16, &LibInstallOptsTargetName_34);
    parse_tree__file_names__module_name_to_lib_file_name_10_p_0(Globals_15, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_install_targets\'/14", (MR_Integer) 1, (MR_String) "lib", (MR_Word) (((MR_Box) ((MR_String) ".install_hdrs"))), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[55])), ModuleName_16, &LibInstallHdrsTargetName_35);
    parse_tree__file_names__module_name_to_lib_file_name_10_p_0(Globals_15, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_install_targets\'/14", (MR_Integer) 1, (MR_String) "lib", (MR_Word) (((MR_Box) ((MR_String) ".install_grade_hdrs"))), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[56])), ModuleName_16, &LibInstallGradeHdrsTargetName_36);
    Var_102 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".ints)");
    ModuleMakeVarNameInts_37 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_102);
    Var_105 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".int3s)");
    ModuleMakeVarNameInt3s_38 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_105);
    switch (Intermod_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeSpaceOptStr_39 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        MaybeSpaceOptStr_39 = (MR_String) " opt";
        break;
    }
    parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_4(&env);
    if ((env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded)
    {
      MR_String ModuleVarNameInt0s_46;
      MR_String Var_109;

      SpaceInt0Str_45 = (MR_String) " int0";
      Var_109 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".int0s)");
      ModuleVarNameInt0s_46 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_109);
      MaybeModuleVarNameInt0sSpace_47 = mercury__string__f_43_43_2_f_0(ModuleVarNameInt0s_46, (MR_String) " ");
      {
        MaybeModuleVarNameInt0s_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeModuleVarNameInt0s_48, 0) = ((MR_Box) (ModuleVarNameInt0s_46));
        MR_hl_field(1, MaybeModuleVarNameInt0s_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
    Var_123 = mercury__string__f_43_43_2_f_0(MaybeModuleDepsVarSpace_32, (MR_String) "\"");
    Var_122 = mercury__string__f_43_43_2_f_0(MaybeTransOptsVarSpace_30, Var_123);
    Var_121 = mercury__string__f_43_43_2_f_0(MaybeOptsVarSpace_28, Var_122);
    Var_120 = mercury__string__f_43_43_2_f_0(MaybeModuleVarNameInt0sSpace_47, Var_121);
    Var_118 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_120);
    Var_117 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInt3s_38, Var_118);
    Var_115 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_117);
    Var_114 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInts_37, Var_115);
    LibInstallIntsFiles_51 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_114);
    {
      Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_129, 0) = ((MR_Box) (ModuleMakeVarNameInt3s_38));
      MR_hl_field(1, Var_129, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_128, 0) = ((MR_Box) (ModuleMakeVarNameInts_37));
      MR_hl_field(1, Var_128, 1) = ((MR_Box) (Var_129));
    }
    Var_134 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeModuleDepsVar_31, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[57])));
    Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTransOptsVar_29, Var_134);
    Var_132 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeOptsVar_27, Var_133);
    Var_131 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeModuleVarNameInt0s_48, Var_132);
    Var_127 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_128, Var_131);
    Var_141 = mercury__string__f_43_43_2_f_0(LibInstallIntsFiles_51, (MR_String) "; \\");
    Var_139 = mercury__string__f_43_43_2_f_0((MR_String) "files=", Var_141);
    Var_173 = mercury__string__f_43_43_2_f_0(MaybeSpaceDepStr_50, (MR_String) "; do \\");
    Var_172 = mercury__string__f_43_43_2_f_0(MaybeSpaceTransOptStr_49, Var_173);
    Var_171 = mercury__string__f_43_43_2_f_0(MaybeSpaceOptStr_39, Var_172);
    Var_170 = mercury__string__f_43_43_2_f_0(SpaceInt0Str_45, Var_171);
    Var_168 = mercury__string__f_43_43_2_f_0((MR_String) "for ext in int int2 int3", Var_170);
    {
      Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_167, 0) = ((MR_Box) (Var_168));
      MR_hl_field(1, Var_167, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[65])));
    }
    {
      Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_165, 0) = ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'."));
      MR_hl_field(1, Var_165, 1) = ((MR_Box) (Var_167));
    }
    {
      Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_163, 0) = ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use"));
      MR_hl_field(1, Var_163, 1) = ((MR_Box) (Var_165));
    }
    {
      Var_161 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_161, 0) = ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option."));
      MR_hl_field(1, Var_161, 1) = ((MR_Box) (Var_163));
    }
    {
      Var_159 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_159, 0) = ((MR_Box) ((MR_String) "done"));
      MR_hl_field(1, Var_159, 1) = ((MR_Box) (Var_161));
    }
    {
      Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_157, 0) = ((MR_Box) ((MR_String) "\tfi; \\"));
      MR_hl_field(1, Var_157, 1) = ((MR_Box) (Var_159));
    }
    {
      Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_155, 0) = ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\"));
      MR_hl_field(1, Var_155, 1) = ((MR_Box) (Var_157));
    }
    {
      Var_153 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_153, 0) = ((MR_Box) ((MR_String) "\t\techo \"installing \044\044target\"; \\"));
      MR_hl_field(1, Var_153, 1) = ((MR_Box) (Var_155));
    }
    {
      Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_151, 0) = ((MR_Box) ((MR_String) "\telse \\"));
      MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_153));
    }
    {
      Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_149, 0) = ((MR_Box) ((MR_String) "\t\techo \"\044\044target unchanged\"; \\"));
      MR_hl_field(1, Var_149, 1) = ((MR_Box) (Var_151));
    }
    {
      Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_147, 0) = ((MR_Box) ((MR_String) "\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\"));
      MR_hl_field(1, Var_147, 1) = ((MR_Box) (Var_149));
    }
    {
      Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_145, 0) = ((MR_Box) ((MR_String) "\ttarget=\"\044(INSTALL_INT_DIR)/\140basename \044\044file\140\"; \\"));
      MR_hl_field(1, Var_145, 1) = ((MR_Box) (Var_147));
    }
    {
      Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_143, 0) = ((MR_Box) ((MR_String) "for file in \044\044files; do \\"));
      MR_hl_field(1, Var_143, 1) = ((MR_Box) (Var_145));
    }
    {
      Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_138, 0) = ((MR_Box) (Var_139));
      MR_hl_field(1, Var_138, 1) = ((MR_Box) (Var_143));
    }
    {
      MmakeRuleLibInstallInts_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallInts_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallInts_52, 1) = ((MR_Box) ((MR_String) "lib_install_ints"));
      MR_hl_field(3, MmakeRuleLibInstallInts_52, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallInts_52, 3) = ((MR_Box) (LibInstallIntsTargetName_33));
      MR_hl_field(3, MmakeRuleLibInstallInts_52, 4) = ((MR_Box) (Var_127));
      MR_hl_field(3, MmakeRuleLibInstallInts_52, 5) = ((MR_Box) (Var_138));
    }
    (env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = (Intermod_20 == (MR_Integer) 0);
    if ((env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded)
      (env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = (TransOpt_21 == (MR_Integer) 0);
    if ((env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded)
    {
      MR_String Var_192;

      LibInstallOptsSources_53 = (MR_Word) ((MR_Unsigned) 0U);
      Var_192 = libs__mmakefiles__silent_noop_action_0_f_0();
      {
        LibInstallOptsActions_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, LibInstallOptsActions_54, 0) = ((MR_Box) (Var_192));
        MR_hl_field(1, LibInstallOptsActions_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_String LibInstallOptsFiles_55;
      MR_Word Var_194;
      MR_String Var_199;
      MR_String Var_200;
      MR_String Var_202;
      MR_String Var_204;
      MR_Word Var_206;
      MR_Word Var_208;
      MR_Word Var_210;
      MR_Word Var_212;
      MR_Word Var_214;
      MR_Word Var_216;
      MR_Word Var_218;
      MR_Word Var_220;
      MR_Word Var_222;
      MR_Word Var_224;
      MR_Word Var_226;
      MR_Word Var_228;
      MR_Word Var_230;
      MR_String Var_231;
      MR_String Var_233;
      MR_String Var_234;

      Var_194 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTransOptsVar_29, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[66])));
      LibInstallOptsSources_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeOptsVar_27, Var_194);
      Var_200 = mercury__string__f_43_43_2_f_0(MaybeTransOptsVarSpace_30, (MR_String) "\"");
      Var_199 = mercury__string__f_43_43_2_f_0(MaybeOptsVarSpace_28, Var_200);
      LibInstallOptsFiles_55 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_199);
      Var_204 = mercury__string__f_43_43_2_f_0(LibInstallOptsFiles_55, (MR_String) "; \\");
      Var_202 = mercury__string__f_43_43_2_f_0((MR_String) "files=", Var_204);
      Var_234 = mercury__string__f_43_43_2_f_0(MaybeSpaceTransOptStr_49, (MR_String) "; do \\");
      Var_233 = mercury__string__f_43_43_2_f_0(MaybeSpaceOptStr_39, Var_234);
      Var_231 = mercury__string__f_43_43_2_f_0((MR_String) "for ext in ", Var_233);
      {
        Var_230 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_230, 0) = ((MR_Box) (Var_231));
        MR_hl_field(1, Var_230, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[73])));
      }
      {
        Var_228 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_228, 0) = ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'."));
        MR_hl_field(1, Var_228, 1) = ((MR_Box) (Var_230));
      }
      {
        Var_226 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_226, 0) = ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use"));
        MR_hl_field(1, Var_226, 1) = ((MR_Box) (Var_228));
      }
      {
        Var_224 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_224, 0) = ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option"));
        MR_hl_field(1, Var_224, 1) = ((MR_Box) (Var_226));
      }
      {
        Var_222 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_222, 0) = ((MR_Box) ((MR_String) "done"));
        MR_hl_field(1, Var_222, 1) = ((MR_Box) (Var_224));
      }
      {
        Var_220 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_220, 0) = ((MR_Box) ((MR_String) "\tfi; \\"));
        MR_hl_field(1, Var_220, 1) = ((MR_Box) (Var_222));
      }
      {
        Var_218 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_218, 0) = ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\"));
        MR_hl_field(1, Var_218, 1) = ((MR_Box) (Var_220));
      }
      {
        Var_216 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_216, 0) = ((MR_Box) ((MR_String) "\t\techo \"installing \044\044target\"; \\"));
        MR_hl_field(1, Var_216, 1) = ((MR_Box) (Var_218));
      }
      {
        Var_214 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_214, 0) = ((MR_Box) ((MR_String) "\telse \\"));
        MR_hl_field(1, Var_214, 1) = ((MR_Box) (Var_216));
      }
      {
        Var_212 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_212, 0) = ((MR_Box) ((MR_String) "\t\techo \"\044\044target unchanged\"; \\"));
        MR_hl_field(1, Var_212, 1) = ((MR_Box) (Var_214));
      }
      {
        Var_210 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_210, 0) = ((MR_Box) ((MR_String) "\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\"));
        MR_hl_field(1, Var_210, 1) = ((MR_Box) (Var_212));
      }
      {
        Var_208 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_208, 0) = ((MR_Box) ((MR_String) "\ttarget=\"\044(INSTALL_GRADE_INT_DIR)/\140basename \044\044file\140\";\\"));
        MR_hl_field(1, Var_208, 1) = ((MR_Box) (Var_210));
      }
      {
        Var_206 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_206, 0) = ((MR_Box) ((MR_String) "for file in \044\044files; do \\"));
        MR_hl_field(1, Var_206, 1) = ((MR_Box) (Var_208));
      }
      {
        LibInstallOptsActions_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, LibInstallOptsActions_54, 0) = ((MR_Box) (Var_202));
        MR_hl_field(1, LibInstallOptsActions_54, 1) = ((MR_Box) (Var_206));
      }
    }
    {
      MmakeRuleLibInstallOpts_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallOpts_56, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallOpts_56, 1) = ((MR_Box) ((MR_String) "lib_install_opts"));
      MR_hl_field(3, MmakeRuleLibInstallOpts_56, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallOpts_56, 3) = ((MR_Box) (LibInstallOptsTargetName_34));
      MR_hl_field(3, MmakeRuleLibInstallOpts_56, 4) = ((MR_Box) (LibInstallOptsSources_53));
      MR_hl_field(3, MmakeRuleLibInstallOpts_56, 5) = ((MR_Box) (LibInstallOptsActions_54));
    }
    Var_411 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".mhs)");
    ModuleMakeVarNameMhs_57 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_411);
    {
      Var_263 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_263, 0) = ((MR_Box) (ModuleMakeVarNameMhs_57));
      MR_hl_field(1, Var_263, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[57])));
    }
    Var_268 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_267 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_267, 0) = ((MR_Box) (Var_268));
      MR_hl_field(1, Var_267, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRuleLibInstallHdrsNoMhs_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_58, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_58, 1) = ((MR_Box) ((MR_String) "install_lib_hdrs_nomhs"));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_58, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_58, 3) = ((MR_Box) (LibInstallHdrsTargetName_35));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_58, 4) = ((MR_Box) (Var_263));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_58, 5) = ((MR_Box) (Var_267));
    }
    Var_279 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameMhs_57, (MR_String) "; do \\");
    Var_277 = mercury__string__f_43_43_2_f_0((MR_String) "for hdr in ", Var_279);
    {
      Var_276 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_276, 0) = ((MR_Box) (Var_277));
      MR_hl_field(1, Var_276, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[75])));
    }
    {
      MmakeRuleLibInstallHdrsMhs_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_59, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_59, 1) = ((MR_Box) ((MR_String) "install_lib_hdrs_mhs"));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_59, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_59, 3) = ((MR_Box) (LibInstallHdrsTargetName_35));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_59, 4) = ((MR_Box) (Var_263));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_59, 5) = ((MR_Box) (Var_276));
    }
    {
      Var_288 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_288, 0) = ((MR_Box) (ModuleMakeVarNameMhs_57));
      MR_hl_field(1, Var_288, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      MmakeFragmentLibInstallHdrs_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MmakeFragmentLibInstallHdrs_60, 0) = ((MR_Box) (Var_288));
      MR_hl_field(1, MmakeFragmentLibInstallHdrs_60, 1) = ((MR_Box) (MmakeRuleLibInstallHdrsNoMhs_58));
      MR_hl_field(1, MmakeFragmentLibInstallHdrs_60, 2) = ((MR_Box) (MmakeRuleLibInstallHdrsMhs_59));
    }
    Var_414 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".mihs)");
    ModuleMakeVarNameMihs_61 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_414);
    {
      Var_296 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_296, 0) = ((MR_Box) (ModuleMakeVarNameMihs_61));
      MR_hl_field(1, Var_296, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[66])));
    }
    Var_301 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_300 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_300, 0) = ((MR_Box) (Var_301));
      MR_hl_field(1, Var_300, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRuleLibInstallGradeHdrsNoMihs_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_62, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_62, 1) = ((MR_Box) ((MR_String) "install_grade_hdrs_no_mihs"));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_62, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_62, 3) = ((MR_Box) (LibInstallGradeHdrsTargetName_36));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_62, 4) = ((MR_Box) (Var_296));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_62, 5) = ((MR_Box) (Var_300));
    }
    Var_312 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameMihs_61, (MR_String) "; do \\");
    Var_310 = mercury__string__f_43_43_2_f_0((MR_String) "for hdr in ", Var_312);
    {
      Var_309 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_309, 0) = ((MR_Box) (Var_310));
      MR_hl_field(1, Var_309, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[98])));
    }
    {
      MmakeRuleLibInstallGradeHdrsMihs_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_63, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_63, 1) = ((MR_Box) ((MR_String) "install_grade_hdrs_mihs"));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_63, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_63, 3) = ((MR_Box) (LibInstallGradeHdrsTargetName_36));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_63, 4) = ((MR_Box) (Var_296));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_63, 5) = ((MR_Box) (Var_309));
    }
    {
      Var_361 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_361, 0) = ((MR_Box) (ModuleMakeVarNameMihs_61));
      MR_hl_field(1, Var_361, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      MmakeFragmentLibInstallGradeHdrs_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MmakeFragmentLibInstallGradeHdrs_64, 0) = ((MR_Box) (Var_361));
      MR_hl_field(1, MmakeFragmentLibInstallGradeHdrs_64, 1) = ((MR_Box) (MmakeRuleLibInstallGradeHdrsNoMihs_62));
      MR_hl_field(1, MmakeFragmentLibInstallGradeHdrs_64, 2) = ((MR_Box) (MmakeRuleLibInstallGradeHdrsMihs_63));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleLibInstallInts_52, STATE_VARIABLE_MmakeFile_0_65, &STATE_VARIABLE_MmakeFile_363_363);
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleLibInstallOpts_56, STATE_VARIABLE_MmakeFile_363_363, &STATE_VARIABLE_MmakeFile_364_364);
    libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibInstallHdrs_60, STATE_VARIABLE_MmakeFile_364_364, &STATE_VARIABLE_MmakeFile_365_365);
    libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibInstallGradeHdrs_64, STATE_VARIABLE_MmakeFile_365_365, STATE_VARIABLE_MmakeFile_66);
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
  MR_String Var_55;
  MR_String Var_59;
  MR_String Var_60;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_String Var_73;
  MR_String Var_81;
  MR_String Var_84;
  MR_String Var_86;
  MR_String Var_87;
  MR_String Var_89;
  MR_Word Var_94;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_100;
  MR_Word Var_102;
  MR_Word Var_103;

  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_init_targets\'/11", (MR_Integer) 1, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[1])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[6])), ModuleName_13, DepFileName_17);
  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_init_targets\'/11", (MR_Integer) 1, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[0])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[5])), ModuleName_13, DvFileName_18);
  Var_55 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_14, (MR_String) ".cs)");
  ModuleMakeVarNameCs_21 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_55);
  InitAction1_22 = mercury__string__f_43_43_2_f_0((MR_String) "echo > ", InitFileName_16);
  Var_60 = mercury__string__f_43_43_2_f_0((MR_String) " >> ", InitFileName_16);
  Var_59 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameCs_21, Var_60);
  InitAction2_23 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MKLIBINIT) ", Var_59);
  InitAction3_24 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXTRA_INIT_COMMAND) >> ", InitFileName_16);
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (ModuleMakeVarNameCs_21));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (*DepFileName_17));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_66));
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (InitAction3_24));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (InitAction2_23));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_70));
  }
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (InitAction1_22));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_69));
  }
  {
    MmakeRuleInitFile_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleInitFile_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleInitFile_25, 1) = ((MR_Box) ((MR_String) "init_file"));
    MR_hl_field(3, MmakeRuleInitFile_25, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleInitFile_25, 3) = ((MR_Box) (InitFileName_16));
    MR_hl_field(3, MmakeRuleInitFile_25, 4) = ((MR_Box) (Var_65));
    MR_hl_field(3, MmakeRuleInitFile_25, 5) = ((MR_Box) (Var_68));
  }
  ModuleFileName_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_13);
  Var_73 = mercury__string__f_43_43_2_f_0(ModuleFileName_26, (MR_String) "_init");
  ForceC2InitTarget_27 = mercury__string__f_43_43_2_f_0((MR_String) "force-", Var_73);
  {
    MmakeRuleForceInitCFile_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleForceInitCFile_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleForceInitCFile_28, 1) = ((MR_Box) ((MR_String) "force_init_c_file"));
    MR_hl_field(3, MmakeRuleForceInitCFile_28, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleForceInitCFile_28, 3) = ((MR_Box) (ForceC2InitTarget_27));
    MR_hl_field(3, MmakeRuleForceInitCFile_28, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeRuleForceInitCFile_28, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  TmpInitCFileName_29 = mercury__string__f_43_43_2_f_0(InitCFileName_15, (MR_String) ".tmp");
  Var_81 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_14, (MR_String) ".init_cs)");
  ModuleMakeVarNameInitCs_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_81);
  Var_89 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInitCs_30, (MR_String) " \044(ALL_C2INITARGS)");
  Var_87 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_89);
  Var_86 = mercury__string__f_43_43_2_f_0(TmpInitCFileName_29, Var_87);
  Var_84 = mercury__string__f_43_43_2_f_0((MR_String) "--init-c-file ", Var_86);
  InitCAction1_31 = mercury__string__f_43_43_2_f_0((MR_String) "\100\044(C2INIT) \044(ALL_GRADEFLAGS) \044(ALL_C2INITFLAGS) ", Var_84);
  InitCAction2_32 = mercury__string__f_43_43_2_f_0((MR_String) "\100mercury_update_interface ", InitCFileName_15);
  {
    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_94, 0) = ((MR_Box) (ForceC2InitTarget_27));
    MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_66));
  }
  {
    Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_98, 0) = ((MR_Box) (InitCAction2_32));
    MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) (InitCAction1_31));
    MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_98));
  }
  {
    MmakeRuleInitCFile_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleInitCFile_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleInitCFile_33, 1) = ((MR_Box) ((MR_String) "init_c_file"));
    MR_hl_field(3, MmakeRuleInitCFile_33, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleInitCFile_33, 3) = ((MR_Box) (InitCFileName_15));
    MR_hl_field(3, MmakeRuleInitCFile_33, 4) = ((MR_Box) (Var_94));
    MR_hl_field(3, MmakeRuleInitCFile_33, 5) = ((MR_Box) (Var_97));
  }
  {
    Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_103, 0) = ((MR_Box) (MmakeRuleInitCFile_33));
    MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_102, 0) = ((MR_Box) (MmakeRuleForceInitCFile_28));
    MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_103));
  }
  {
    Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_100, 0) = ((MR_Box) (MmakeRuleInitFile_25));
    MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_102));
  }
  libs__mmakefiles__add_mmake_entries_3_p_0(Var_100, STATE_VARIABLE_MmakeFile_0_34, STATE_VARIABLE_MmakeFile_35);
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
  MR_Word Var_80;
  MR_String Var_81;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_String Var_93;
  MR_String Var_96;
  MR_String Var_99;
  MR_String Var_101;
  MR_String Var_105;
  MR_String Var_108;
  MR_String Var_111;
  MR_String Var_113;
  MR_String Var_114;
  MR_String Var_116;
  MR_String Var_119;
  MR_String Var_120;
  MR_String Var_122;
  MR_Word Var_126;
  MR_String Var_131;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Word Var_135;
  MR_Word Var_136;
  MR_Word Var_138;
  MR_Word Var_139;
  MR_String Var_185;
  MR_String Var_188;
  MR_Word Var_190;
  MR_Word Var_191;
  MR_Word Var_193;
  MR_Word Var_194;
  MR_Word Var_195;
  MR_Word Var_199;
  MR_Word Var_203;
  MR_Word Var_204;
  MR_String Var_209;
  MR_String Var_212;
  MR_String Var_214;
  MR_String Var_215;
  MR_String Var_217;
  MR_String Var_219;
  MR_String Var_222;
  MR_String Var_225;
  MR_Word Var_229;
  MR_Word Var_230;
  MR_Word Var_233;
  MR_Word Var_234;
  MR_Word Var_235;
  MR_Word Var_240;
  MR_Word Var_241;
  MR_String Var_246;
  MR_String Var_247;
  MR_String Var_249;
  MR_Word Var_255;
  MR_Word Var_256;
  MR_Word Var_258;
  MR_Word Var_259;
  MR_Word Var_260;
  MR_Word Var_261;
  MR_String Var_264;
  MR_String Var_265;
  MR_Word Var_271;
  MR_Word STATE_VARIABLE_MmakeFile_273_273;
  MR_Word STATE_VARIABLE_MmakeFile_274_274;
  MR_Word STATE_VARIABLE_MmakeFile_275_275;
  MR_Word STATE_VARIABLE_MmakeFile_276_276;
  MR_Word Var_277;
  MR_Word Var_279;

  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_16, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_exec_library_targets\'/15", (MR_Integer) 1, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[31])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[42])), ModuleName_17, ExeFileName_23);
  Var_81 = mercury__string__f_43_43_2_f_0(*ExeFileName_23, (MR_String) "\044(EXT_FOR_EXE)");
  {
    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_80, 0) = ((MR_Box) (Var_81));
    MR_hl_field(1, Var_80, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRuleExtForExe_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleExtForExe_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleExtForExe_29, 1) = ((MR_Box) ((MR_String) "ext_for_exe"));
    MR_hl_field(3, MmakeRuleExtForExe_29, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, MmakeRuleExtForExe_29, 3) = ((MR_Box) (*ExeFileName_23));
    MR_hl_field(3, MmakeRuleExtForExe_29, 4) = ((MR_Box) (Var_80));
    MR_hl_field(3, MmakeRuleExtForExe_29, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_89 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_89, 0) = ((MR_Box) (MmakeRuleExtForExe_29));
  }
  {
    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
    MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeFragmentExtForExe_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeFragmentExtForExe_30, 0) = ((MR_Box) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_1[48])));
    MR_hl_field(2, MmakeFragmentExtForExe_30, 1) = ((MR_Box) (Var_88));
    MR_hl_field(2, MmakeFragmentExtForExe_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_93 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ",\044(ALL_MLLIBS_DEP))");
  All_MLLibsDep_31 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", Var_93);
  Var_96 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ",\044(ALL_MLOBJS))");
  All_MLObjs_32 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", Var_96);
  Var_101 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ",\044(ALL_MLOBJS)))");
  Var_99 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", Var_101);
  All_MLPicObjs_33 = mercury__string__f_43_43_2_f_0((MR_String) "\044(patsubst %.o,%.\044(EXT_FOR_PIC_OBJECTS),", Var_99);
  NL_All_MLObjs_34 = mercury__string__f_43_43_2_f_0((MR_String) "\\\n\t\t", All_MLObjs_32);
  Var_105 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".classes)");
  ModuleMakeVarNameClasses_35 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_105);
  Var_108 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".os)");
  ModuleMakeVarNameOs_36 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_108);
  Var_116 = mercury__string__f_43_43_2_f_0(InitObjFileName_20, (MR_String) " \\");
  Var_114 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXT_FOR_EXE) ", Var_116);
  Var_113 = mercury__string__f_43_43_2_f_0(*ExeFileName_23, Var_114);
  Var_111 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXEFILE_OPT)", Var_113);
  NonJavaMainRuleAction1Line1_37 = mercury__string__f_43_43_2_f_0((MR_String) "\044(ML) \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) -- \044(ALL_LDFLAGS) ", Var_111);
  Var_122 = mercury__string__f_43_43_2_f_0(NL_All_MLObjs_34, (MR_String) " \044(ALL_MLLIBS)");
  Var_120 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_122);
  Var_119 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameOs_36, Var_120);
  NonJavaMainRuleAction1Line2_38 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_119);
  {
    Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_126, 0) = ((MR_Box) (ModuleMakeVarNameClasses_35));
    MR_hl_field(1, Var_126, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRuleExecutableJava_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleExecutableJava_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleExecutableJava_39, 1) = ((MR_Box) ((MR_String) "executable_java"));
    MR_hl_field(3, MmakeRuleExecutableJava_39, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleExecutableJava_39, 3) = ((MR_Box) (*ExeFileName_23));
    MR_hl_field(3, MmakeRuleExecutableJava_39, 4) = ((MR_Box) (Var_126));
    MR_hl_field(3, MmakeRuleExecutableJava_39, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_131 = mercury__string__f_43_43_2_f_0(*ExeFileName_23, (MR_String) "\044(EXT_FOR_EXE)");
  {
    Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_136, 0) = ((MR_Box) (All_MLLibsDep_31));
    MR_hl_field(1, Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_135, 0) = ((MR_Box) (All_MLObjs_32));
    MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_136));
  }
  {
    Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_134, 0) = ((MR_Box) (InitObjFileName_20));
    MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_135));
  }
  {
    Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_133, 0) = ((MR_Box) (ModuleMakeVarNameOs_36));
    MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_134));
  }
  {
    Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_139, 0) = ((MR_Box) (NonJavaMainRuleAction1Line2_38));
    MR_hl_field(1, Var_139, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_138, 0) = ((MR_Box) (NonJavaMainRuleAction1Line1_37));
    MR_hl_field(1, Var_138, 1) = ((MR_Box) (Var_139));
  }
  {
    MmakeRuleExecutableNonJava_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleExecutableNonJava_40, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleExecutableNonJava_40, 1) = ((MR_Box) ((MR_String) "executable_non_java"));
    MR_hl_field(3, MmakeRuleExecutableNonJava_40, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleExecutableNonJava_40, 3) = ((MR_Box) (Var_131));
    MR_hl_field(3, MmakeRuleExecutableNonJava_40, 4) = ((MR_Box) (Var_133));
    MR_hl_field(3, MmakeRuleExecutableNonJava_40, 5) = ((MR_Box) (Var_138));
  }
  {
    MmakeFragmentExecutable_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MmakeFragmentExecutable_41, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[28]));
    MR_hl_field(1, MmakeFragmentExecutable_41, 1) = ((MR_Box) (MmakeRuleExecutableJava_39));
    MR_hl_field(1, MmakeFragmentExecutable_41, 2) = ((MR_Box) (MmakeRuleExecutableNonJava_40));
  }
  parse_tree__file_names__module_name_to_lib_file_name_10_p_0(Globals_16, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_exec_library_targets\'/15", (MR_Integer) 1, (MR_String) "lib", (MR_Word) (((MR_Box) ((MR_String) ""))), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[42])), ModuleName_17, &LibTargetName_42);
  parse_tree__file_names__module_name_to_lib_file_name_10_p_0(Globals_16, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_exec_library_targets\'/15", (MR_Integer) 0, (MR_String) "lib", (MR_Word) (((MR_Box) ((MR_String) ".\044A"))), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[49])), ModuleName_17, LibFileName_25);
  parse_tree__file_names__module_name_to_lib_file_name_10_p_0(Globals_16, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_exec_library_targets\'/15", (MR_Integer) 0, (MR_String) "lib", (MR_Word) (((MR_Box) ((MR_String) ".\044(EXT_FOR_SHARED_LIB)"))), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[50])), ModuleName_17, SharedLibFileName_26);
  parse_tree__file_names__module_name_to_lib_file_name_10_p_0(Globals_16, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_exec_library_targets\'/15", (MR_Integer) 1, (MR_String) "lib", (MR_Word) (((MR_Box) ((MR_String) ".\044(EXT_FOR_SHARED_LIB)"))), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[50])), ModuleName_17, &MaybeSharedLibFileName_43);
  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_16, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_exec_library_targets\'/15", (MR_Integer) 1, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[36])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[51])), ModuleName_17, JarFileName_24);
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 654, &UseInstallName_44);
  switch (UseInstallName_44) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      InstallNameOpt_45 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      libs__file_util__get_install_name_option_3_p_0(Globals_16, *SharedLibFileName_26, &InstallNameOpt_45);
      break;
  }
  Var_185 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".ints)");
  ModuleMakeVarNameInts_46 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_185);
  Var_188 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".int3s)");
  ModuleMakeVarNameInt3s_47 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_188);
  {
    Var_191 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_191, 0) = ((MR_Box) (ModuleMakeVarNameInt3s_47));
    MR_hl_field(1, Var_191, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_190 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_190, 0) = ((MR_Box) (ModuleMakeVarNameInts_46));
    MR_hl_field(1, Var_190, 1) = ((MR_Box) (Var_191));
  }
  {
    Var_195 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_195, 0) = ((MR_Box) (InitFileName_19));
    MR_hl_field(1, Var_195, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_194 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTransOptsVar_22, Var_195);
  Var_193 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeOptsVar_21, Var_194);
  AllIntSources_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_190, Var_193);
  {
    Var_199 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_199, 0) = ((MR_Box) (*JarFileName_24));
    MR_hl_field(1, Var_199, 1) = ((MR_Box) (AllIntSources_48));
  }
  {
    MmakeRuleLibTargetJava_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleLibTargetJava_49, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleLibTargetJava_49, 1) = ((MR_Box) ((MR_String) "lib_target_java"));
    MR_hl_field(3, MmakeRuleLibTargetJava_49, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, MmakeRuleLibTargetJava_49, 3) = ((MR_Box) (LibTargetName_42));
    MR_hl_field(3, MmakeRuleLibTargetJava_49, 4) = ((MR_Box) (Var_199));
    MR_hl_field(3, MmakeRuleLibTargetJava_49, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_204 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_204, 0) = ((MR_Box) (MaybeSharedLibFileName_43));
    MR_hl_field(1, Var_204, 1) = ((MR_Box) (AllIntSources_48));
  }
  {
    Var_203 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_203, 0) = ((MR_Box) (*LibFileName_25));
    MR_hl_field(1, Var_203, 1) = ((MR_Box) (Var_204));
  }
  {
    MmakeRuleLibTargetNonJava_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleLibTargetNonJava_50, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleLibTargetNonJava_50, 1) = ((MR_Box) ((MR_String) "lib_target_non_java"));
    MR_hl_field(3, MmakeRuleLibTargetNonJava_50, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, MmakeRuleLibTargetNonJava_50, 3) = ((MR_Box) (LibTargetName_42));
    MR_hl_field(3, MmakeRuleLibTargetNonJava_50, 4) = ((MR_Box) (Var_203));
    MR_hl_field(3, MmakeRuleLibTargetNonJava_50, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeFragmentLibTarget_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MmakeFragmentLibTarget_51, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[28]));
    MR_hl_field(1, MmakeFragmentLibTarget_51, 1) = ((MR_Box) (MmakeRuleLibTargetJava_49));
    MR_hl_field(1, MmakeFragmentLibTarget_51, 2) = ((MR_Box) (MmakeRuleLibTargetNonJava_50));
  }
  Var_209 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".pic_os)");
  ModuleMakeVarNamePicOs_52 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_209);
  Var_219 = mercury__string__f_43_43_2_f_0(*SharedLibFileName_26, (MR_String) " \\");
  Var_217 = mercury__string__f_43_43_2_f_0((MR_String) "-o ", Var_219);
  Var_215 = mercury__string__f_43_43_2_f_0((MR_String) " \044(ALL_LD_LIBFLAGS) ", Var_217);
  Var_214 = mercury__string__f_43_43_2_f_0(InstallNameOpt_45, Var_215);
  Var_212 = mercury__string__f_43_43_2_f_0((MR_String) "-- ", Var_214);
  SharedLibAction1Line1_53 = mercury__string__f_43_43_2_f_0((MR_String) "\044(ML) --make-shared-lib \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) ", Var_212);
  Var_222 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNamePicOs_52, (MR_String) " \\");
  SharedLibAction1Line2_54 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_222);
  Var_225 = mercury__string__f_43_43_2_f_0(All_MLPicObjs_33, (MR_String) " \044(ALL_MLLIBS)");
  SharedLibAction1Line3_55 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_225);
  {
    Var_230 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_230, 0) = ((MR_Box) (All_MLPicObjs_33));
    MR_hl_field(1, Var_230, 1) = ((MR_Box) (Var_136));
  }
  {
    Var_229 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_229, 0) = ((MR_Box) (ModuleMakeVarNamePicOs_52));
    MR_hl_field(1, Var_229, 1) = ((MR_Box) (Var_230));
  }
  {
    Var_235 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_235, 0) = ((MR_Box) (SharedLibAction1Line3_55));
    MR_hl_field(1, Var_235, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_234 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_234, 0) = ((MR_Box) (SharedLibAction1Line2_54));
    MR_hl_field(1, Var_234, 1) = ((MR_Box) (Var_235));
  }
  {
    Var_233 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_233, 0) = ((MR_Box) (SharedLibAction1Line1_53));
    MR_hl_field(1, Var_233, 1) = ((MR_Box) (Var_234));
  }
  {
    MmakeRuleSharedLib_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleSharedLib_56, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleSharedLib_56, 1) = ((MR_Box) ((MR_String) "shared_lib"));
    MR_hl_field(3, MmakeRuleSharedLib_56, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleSharedLib_56, 3) = ((MR_Box) (*SharedLibFileName_26));
    MR_hl_field(3, MmakeRuleSharedLib_56, 4) = ((MR_Box) (Var_229));
    MR_hl_field(3, MmakeRuleSharedLib_56, 5) = ((MR_Box) (Var_233));
  }
  {
    Var_241 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_241, 0) = ((MR_Box) (MmakeRuleSharedLib_56));
  }
  {
    Var_240 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_240, 0) = ((MR_Box) (Var_241));
    MR_hl_field(1, Var_240, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeFragmentSharedLib_57 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeFragmentSharedLib_57, 0) = ((MR_Box) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_1[52])));
    MR_hl_field(2, MmakeFragmentSharedLib_57, 1) = ((MR_Box) (Var_240));
    MR_hl_field(2, MmakeFragmentSharedLib_57, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  LibAction1_58 = mercury__string__f_43_43_2_f_0((MR_String) "rm -f ", *LibFileName_25);
  Var_249 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameOs_36, (MR_String) " \\");
  Var_247 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_249);
  Var_246 = mercury__string__f_43_43_2_f_0(*LibFileName_25, Var_247);
  LibAction2Line1_59 = mercury__string__f_43_43_2_f_0((MR_String) "\044(AR) \044(ALL_ARFLAGS) \044(AR_LIBFILE_OPT)", Var_246);
  LibAction2Line2_60 = mercury__string__f_43_43_2_f_0((MR_String) "\t", All_MLObjs_32);
  LibAction3_61 = mercury__string__f_43_43_2_f_0((MR_String) "\044(RANLIB) \044(ALL_RANLIBFLAGS) ", *LibFileName_25);
  {
    Var_256 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_256, 0) = ((MR_Box) (All_MLObjs_32));
    MR_hl_field(1, Var_256, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_255 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_255, 0) = ((MR_Box) (ModuleMakeVarNameOs_36));
    MR_hl_field(1, Var_255, 1) = ((MR_Box) (Var_256));
  }
  {
    Var_261 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_261, 0) = ((MR_Box) (LibAction3_61));
    MR_hl_field(1, Var_261, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_260 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_260, 0) = ((MR_Box) (LibAction2Line2_60));
    MR_hl_field(1, Var_260, 1) = ((MR_Box) (Var_261));
  }
  {
    Var_259 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_259, 0) = ((MR_Box) (LibAction2Line1_59));
    MR_hl_field(1, Var_259, 1) = ((MR_Box) (Var_260));
  }
  {
    Var_258 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_258, 0) = ((MR_Box) (LibAction1_58));
    MR_hl_field(1, Var_258, 1) = ((MR_Box) (Var_259));
  }
  {
    MmakeRuleLib_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleLib_62, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleLib_62, 1) = ((MR_Box) ((MR_String) "lib"));
    MR_hl_field(3, MmakeRuleLib_62, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleLib_62, 3) = ((MR_Box) (*LibFileName_25));
    MR_hl_field(3, MmakeRuleLib_62, 4) = ((MR_Box) (Var_255));
    MR_hl_field(3, MmakeRuleLib_62, 5) = ((MR_Box) (Var_258));
  }
  parse_tree__module_cmds__list_class_files_for_jar_mmake_3_p_0(Globals_16, ModuleMakeVarNameClasses_35, &ListClassFiles_63);
  Var_265 = mercury__string__f_43_43_2_f_0((MR_String) " ", ListClassFiles_63);
  Var_264 = mercury__string__f_43_43_2_f_0(*JarFileName_24, Var_265);
  JarAction1_64 = mercury__string__f_43_43_2_f_0((MR_String) "\044(JAR) \044(JAR_CREATE_FLAGS) ", Var_264);
  {
    Var_271 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_271, 0) = ((MR_Box) (JarAction1_64));
    MR_hl_field(1, Var_271, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRuleJar_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleJar_65, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleJar_65, 1) = ((MR_Box) ((MR_String) "jar"));
    MR_hl_field(3, MmakeRuleJar_65, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleJar_65, 3) = ((MR_Box) (*JarFileName_24));
    MR_hl_field(3, MmakeRuleJar_65, 4) = ((MR_Box) (Var_126));
    MR_hl_field(3, MmakeRuleJar_65, 5) = ((MR_Box) (Var_271));
  }
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentExtForExe_30, STATE_VARIABLE_MmakeFile_0_66, &STATE_VARIABLE_MmakeFile_273_273);
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentExecutable_41, STATE_VARIABLE_MmakeFile_273_273, &STATE_VARIABLE_MmakeFile_274_274);
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibTarget_51, STATE_VARIABLE_MmakeFile_274_274, &STATE_VARIABLE_MmakeFile_275_275);
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentSharedLib_57, STATE_VARIABLE_MmakeFile_275_275, &STATE_VARIABLE_MmakeFile_276_276);
  {
    Var_279 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_279, 0) = ((MR_Box) (MmakeRuleJar_65));
    MR_hl_field(1, Var_279, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_277 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_277, 0) = ((MR_Box) (MmakeRuleLib_62));
    MR_hl_field(1, Var_277, 1) = ((MR_Box) (Var_279));
  }
  libs__mmakefiles__add_mmake_entries_3_p_0(Var_277, STATE_VARIABLE_MmakeFile_276_276, STATE_VARIABLE_MmakeFile_67);
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
  MR_String Var_61;

  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 72, &Verbose_12);
  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_7, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dependencies_write_dv_file\'/6", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[0])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[5])), ModuleName_9, &DvFileName_13);
  libs__globals__get_progress_output_stream_5_p_0(Globals_7, ModuleName_9, &ProgressStream_14);
  Var_61 = mercury__string__f_43_43_2_f_0(DvFileName_13, (MR_String) "\'...\n");
  CreatingMsg_15 = mercury__string__f_43_43_2_f_0((MR_String) "% Creating auto-dependency file \140", Var_61);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_14, Verbose_12, CreatingMsg_15);
  mercury__io__open_output_4_p_0(DvFileName_13, &DvResult_16);
  if (((MR_tag((MR_Word) DvResult_16)) == (MR_Integer) 1))
  {
    MR_Word IOError_21 = ((MR_Word) ((MR_hl_field(1, DvResult_16, (MR_Integer) 0))));
    MR_Word ErrorStream_22;
    MR_String IOErrorMessage_23;
    MR_String DepMessage_24;
    MR_String Var_64;
    MR_String Var_65;

    libs__file_util__maybe_write_string_5_p_0(ProgressStream_14, Verbose_12, (MR_String) " failed.\n");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_14, Verbose_12);
    libs__globals__get_error_output_stream_5_p_0(Globals_7, ModuleName_9, &ErrorStream_22);
    mercury__io__error_message_2_p_0(IOError_21, &IOErrorMessage_23);
    Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", IOErrorMessage_23);
    Var_65 = mercury__string__f_43_43_2_f_0(DvFileName_13, Var_64);
    DepMessage_24 = mercury__string__f_43_43_2_f_0((MR_String) "error opening file \140", Var_65);
    libs__file_util__report_error_4_p_0(ErrorStream_22, DepMessage_24);
  }
  else
  {
    MR_Word DvStream_17 = ((MR_Word) ((MR_hl_field(0, DvResult_16, (MR_Integer) 0))));
    MR_Word Cache0_18;
    MR_Word MmakeFile_19;
    MR_Word _Cache_20;

    mercury__map__init_1_p_0((MR_Word) (&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_module_name_and_ext_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &Cache0_18);
    parse_tree__write_deps_file__generate_dv_file_9_p_0(Globals_7, SourceFileName_8, ModuleName_9, DepsMap_10, &MmakeFile_19, Cache0_18, &_Cache_20);
    libs__mmakefiles__write_mmakefile_4_p_0(DvStream_17, MmakeFile_19);
    mercury__io__close_output_3_p_0(DvStream_17);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_14, Verbose_12, (MR_String) "% done.\n");
  }
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv9_HeadVar__2_2;

  conv9_HeadVar__2_2 = libs__mmakefiles__mmake_entry_to_fragment_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__2_2;

  conv8_HeadVar__2_2 = libs__mmakefiles__mmake_entry_to_fragment_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_8(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv6_LambdaHeadVar__2_167;

  parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1645__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Tuple) (wrapper_arg_1)), &conv6_LambdaHeadVar__2_167);
  *wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_167));
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv5_LambdaHeadVar__2_156;

  conv5_LambdaHeadVar__2_156 = parse_tree__write_deps_file__IntroducedFrom__func__generate_dv_file__1636__1_1_f_0(((MR_Tuple) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_156));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1612__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv4_HeadVar__3_3;

  conv4_HeadVar__3_3 = mercury__string__add_suffix_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv3_HeadVar__3_3;

  conv3_HeadVar__3_3 = mercury__string__add_suffix_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__3_3;

  conv2_HeadVar__3_3 = mercury__string__add_suffix_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv1_FileName_6;

  parse_tree__write_deps_file__get_source_file_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_FileName_6));
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_1(
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
parse_tree__write_deps_file__generate_dv_file_9_p_0(
  MR_Word Globals_10,
  MR_String SourceFileName_11,
  MR_Word ModuleName_12,
  MR_Word DepsMap_13,
  MR_Word * MmakeFile_14,
  MR_Word STATE_VARIABLE_Cache_0_111,
  MR_Word * STATE_VARIABLE_Cache_112)
{
  MR_bool succeeded;
  MR_String ModuleNameString_17;
  MR_String Version_18;
  MR_String FullArch_19;
  MR_Word MmakeStartComment_20;
  MR_Word Modules0_21;
  MR_Word Modules1_22;
  MR_Word Modules_23;
  MR_String ModuleMakeVarName_24;
  MR_Word SourceFiles0_25;
  MR_Word SourceFiles_26;
  MR_Word MmakeVarModuleMs_27;
  MR_Word MmakeVarModuleErrs_28;
  MR_Word MmakeVarModuleDepErrs_29;
  MR_Word ModulesSourceFileNames_30;
  MR_Word MmakeVarModuleMods_31;
  MR_Word ModulesWithSubModules_32;
  MR_Word ModulesWithSubModulesSourceFileNames_38;
  MR_Word MmakeVarModuleParentMods_39;
  MR_Word Target_40;
  MR_Word ForeignModules_42;
  MR_Word ForeignModulesFileNames_46;
  MR_Word MmakeVarForeignModules_47;
  MR_Word MakeFileName_48;
  MR_Word ForeignFileNames_55;
  MR_Word MmakeVarForeignFileNames_56;
  MR_Word MmakeVarForeignDlls_57;
  MR_Word MmakeVarInitCs_58;
  MR_Word MmakeVarAllCs_59;
  MR_Word FactTableFileNames_60;
  MR_Word FactTableFileNamesC_61;
  MR_Word FactTableFileNamesOs_62;
  MR_Word FactTableFileNamesPicOs_63;
  MR_Word MmakeVarCs_64;
  MR_Word MmakeVarDlls_65;
  MR_Word MmakeVarAllOs_66;
  MR_Word MmakeVarAllPicOs_67;
  MR_Word MmakeVarOs_68;
  MR_Word MmakeVarPicOs_69;
  MR_Word MmakeVarUseds_70;
  MR_Word MmakeVarJavas_71;
  MR_Word MmakeVarAllJavas_72;
  MR_Word MmakeVarClassesJava_73;
  MR_Word MmakeVarClassesNonJava_74;
  MR_Word MmakeFragmentVarClasses_75;
  MR_Word MmakeVarCss_76;
  MR_Word MmakeVarAllCss_77;
  MR_Word MmakeVarDirs_78;
  MR_Word MmakeVarDirOs_79;
  MR_Word MmakeVarDates_80;
  MR_Word MmakeVarDate0s_81;
  MR_Word MmakeVarDate3s_82;
  MR_Word MmakeVarOptDates_83;
  MR_Word MmakeVarTransOptDates_84;
  MR_Word MmakeVarCDates_85;
  MR_Word MmakeVarJavaDates_86;
  MR_Word MmakeVarCsDates_87;
  MR_Word MmakeVarDs_88;
  MR_Word ModuleDepFileExt_89;
  MR_String ModuleDepFileExtStr_90;
  MR_Word MmakeVarModuleDeps_91;
  MR_Word MihSources_93;
  MR_Word MhSources_94;
  MR_Word MmakeVarMihs_95;
  MR_Word MmakeVarMhs_96;
  MR_Word MmakeVarAllMihs_97;
  MR_Word MmakeVarAllMhs_98;
  MR_Word MmakeVarInts_99;
  MR_Word MmakeVarInt0s_100;
  MR_Word MmakeVarAllInt0s_101;
  MR_Word MmakeVarInt3s_102;
  MR_Word MmakeVarOpts_103;
  MR_Word MmakeVarTransOpts_104;
  MR_Word MmakeVarAnalysiss_105;
  MR_Word MmakeVarRequests_106;
  MR_Word MmakeVarImdgs_107;
  MR_Word MmakeVarProfs_108;
  MR_Word MmakeFragmentsA_109;
  MR_Word MmakeFragmentsB_110;
  MR_Word Var_117;
  MR_String Var_118;
  MR_Word Var_120;
  MR_String Var_123;
  MR_Word Var_125;
  MR_String Var_128;
  MR_Word Var_130;
  MR_Word STATE_VARIABLE_Cache_135_135;
  MR_String Var_140;
  MR_Word Var_142;
  MR_Word STATE_VARIABLE_Cache_147_147;
  MR_String Var_152;
  MR_String Var_164;
  MR_String Var_174;
  MR_String Var_176;
  MR_String Var_178;
  MR_String Var_183;
  MR_String Var_185;
  MR_String Var_190;
  MR_String Var_192;
  MR_String Var_212;
  MR_Word Var_214;
  MR_String Var_215;
  MR_String Var_217;
  MR_String Var_219;
  MR_String Var_221;
  MR_String Var_226;
  MR_Word Var_228;
  MR_String Var_229;
  MR_String Var_234;
  MR_Word Var_236;
  MR_String Var_237;
  MR_String Var_242;
  MR_String Var_244;
  MR_String Var_249;
  MR_String Var_251;
  MR_String Var_256;
  MR_String Var_258;
  MR_String Var_263;
  MR_String Var_265;
  MR_String Var_270;
  MR_String Var_272;
  MR_String Var_277;
  MR_Word Var_279;
  MR_String Var_280;
  MR_Word Var_285;
  MR_String Var_286;
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
  MR_String Var_360;
  MR_String Var_362;
  MR_String Var_367;
  MR_String Var_369;
  MR_String Var_374;
  MR_String Var_376;
  MR_String Var_381;
  MR_String Var_383;
  MR_Word Var_388;
  MR_String Var_391;
  MR_String Var_393;
  MR_String Var_413;
  MR_String Var_415;
  MR_String Var_417;
  MR_String Var_419;
  MR_String Var_424;
  MR_String Var_426;
  MR_String Var_431;
  MR_Word Var_433;
  MR_String Var_434;
  MR_Word Var_439;
  MR_String Var_440;
  MR_String Var_446;
  MR_String Var_448;
  MR_String Var_453;
  MR_String Var_455;
  MR_String Var_460;
  MR_String Var_462;
  MR_String Var_467;
  MR_String Var_469;
  MR_String Var_474;
  MR_String Var_476;
  MR_String Var_481;
  MR_String Var_483;
  MR_String Var_488;
  MR_String Var_490;
  MR_String Var_495;
  MR_String Var_497;
  MR_String Var_502;
  MR_String Var_504;
  MR_Word Var_510;
  MR_Word Var_511;
  MR_Word Var_512;
  MR_Word Var_513;
  MR_Word Var_514;
  MR_Word Var_515;
  MR_Word Var_516;
  MR_Word Var_517;
  MR_Word Var_518;
  MR_Word Var_519;
  MR_Word Var_520;
  MR_Word Var_521;
  MR_Word Var_522;
  MR_Word Var_523;
  MR_Word Var_524;
  MR_Word Var_525;
  MR_Word Var_526;
  MR_Word Var_527;
  MR_Word Var_528;
  MR_Word Var_529;
  MR_Word Var_532;
  MR_Word Var_533;
  MR_Word Var_534;
  MR_Word Var_535;
  MR_Word Var_536;
  MR_Word Var_537;
  MR_Word Var_538;
  MR_Word Var_539;
  MR_Word Var_540;
  MR_Word Var_541;
  MR_Word Var_542;
  MR_Word Var_543;
  MR_Word Var_544;
  MR_Word Var_545;
  MR_Word Var_546;
  MR_Word Var_547;
  MR_Word Var_548;
  MR_Word Var_549;
  MR_Word Var_550;
  MR_Word Var_551;
  MR_Word Var_552;
  MR_Word Var_553;
  MR_Word Var_554;
  MR_Word Var_555;
  MR_Word Var_556;
  MR_Word Var_557;
  MR_Word Var_558;
  MR_Word Var_559;
  MR_Word Var_561;
  MR_Word Var_562;
  MR_Word Var_563;
  MR_Word Var_564;
  MR_String Var_641;
  MR_String Var_644;
  MR_String Var_647;
  MR_String Var_650;
  MR_String Var_653;
  MR_String Var_656;
  MR_String Var_659;
  MR_String Var_662;
  MR_String Var_665;
  MR_String Var_668;
  MR_String Var_671;
  MR_String Var_674;
  MR_String Var_677;
  MR_String Var_680;
  MR_String Var_683;
  MR_String Var_686;
  MR_String Var_689;
  MR_String Var_692;
  MR_String Var_695;
  MR_String Var_698;
  MR_String Var_701;
  MR_String Var_704;
  MR_String Var_707;
  MR_String Var_710;
  MR_String Var_713;
  MR_String Var_716;
  MR_String Var_719;
  MR_String Var_721;
  MR_String Var_722;
  MR_String Var_731;
  MR_String Var_734;
  MR_String Var_737;
  MR_String Var_740;
  MR_String Var_743;
  MR_String Var_746;
  MR_String Var_749;
  MR_String Var_752;
  MR_String Var_755;
  MR_String Var_758;
  MR_String Var_761;
  MR_String Var_764;
  MR_String Var_767;
  MR_Box conv7_STATE_VARIABLE_IO_173_173;

  ModuleNameString_17 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_12);
  mercury__library__version_2_p_0(&Version_18, &FullArch_19);
  {
    MmakeStartComment_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MmakeStartComment_20, 0) = ((MR_Box) ((MR_String) "dependency variables"));
    MR_hl_field(0, MmakeStartComment_20, 1) = ((MR_Box) (ModuleNameString_17));
    MR_hl_field(0, MmakeStartComment_20, 2) = ((MR_Box) (SourceFileName_11));
    MR_hl_field(0, MmakeStartComment_20, 3) = ((MR_Box) (Version_18));
    MR_hl_field(0, MmakeStartComment_20, 4) = ((MR_Box) (FullArch_19));
  }
  mercury__map__keys_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_13, &Modules0_21);
  parse_tree__write_deps_file__select_ok_modules_3_p_0(DepsMap_13, Modules0_21, &Modules1_22);
  mercury__list__sort_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[20]), Modules1_22, &Modules_23);
  parse_tree__file_names__module_name_to_make_var_name_2_p_0(ModuleName_12, &ModuleMakeVarName_24);
  {
    Var_117 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_117, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[8]));
    MR_hl_field(0, Var_117, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_9_p_0_2));
    MR_hl_field(0, Var_117, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_117, 3) = ((MR_Box) (DepsMap_13));
  }
  mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_117, Modules_23, &SourceFiles0_25);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFiles0_25, &SourceFiles_26);
  Var_118 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".ms");
  Var_120 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[1]), SourceFiles_26);
  {
    MmakeVarModuleMs_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarModuleMs_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarModuleMs_27, 1) = ((MR_Box) (Var_118));
    MR_hl_field(3, MmakeVarModuleMs_27, 2) = ((MR_Box) (Var_120));
  }
  Var_123 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".errs");
  Var_125 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[2]), SourceFiles_26);
  {
    MmakeVarModuleErrs_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarModuleErrs_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarModuleErrs_28, 1) = ((MR_Box) (Var_123));
    MR_hl_field(3, MmakeVarModuleErrs_28, 2) = ((MR_Box) (Var_125));
  }
  Var_128 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".dep_errs");
  Var_130 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[3]), SourceFiles_26);
  {
    MmakeVarModuleDepErrs_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarModuleDepErrs_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarModuleDepErrs_29, 1) = ((MR_Box) (Var_128));
    MR_hl_field(3, MmakeVarModuleDepErrs_29, 2) = ((MR_Box) (Var_130));
  }
  parse_tree__write_deps_file__make_module_file_names_with_suffix_9_p_0(Globals_10, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[31])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[42])), Modules_23, &ModulesSourceFileNames_30, STATE_VARIABLE_Cache_0_111, &STATE_VARIABLE_Cache_135_135);
  Var_140 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods");
  {
    MmakeVarModuleMods_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarModuleMods_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarModuleMods_31, 1) = ((MR_Box) (Var_140));
    MR_hl_field(3, MmakeVarModuleMods_31, 2) = ((MR_Box) (ModulesSourceFileNames_30));
  }
  {
    Var_142 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_142, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[5]));
    MR_hl_field(0, Var_142, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_9_p_0_6));
    MR_hl_field(0, Var_142, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_142, 3) = ((MR_Box) (DepsMap_13));
  }
  ModulesWithSubModules_32 = mercury__list__filter_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_142, Modules_23);
  parse_tree__write_deps_file__make_module_file_names_with_suffix_9_p_0(Globals_10, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[31])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[42])), ModulesWithSubModules_32, &ModulesWithSubModulesSourceFileNames_38, STATE_VARIABLE_Cache_135_135, &STATE_VARIABLE_Cache_147_147);
  Var_152 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".parent_mods");
  {
    MmakeVarModuleParentMods_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarModuleParentMods_39, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarModuleParentMods_39, 1) = ((MR_Box) (Var_152));
    MR_hl_field(3, MmakeVarModuleParentMods_39, 2) = ((MR_Box) (ModulesWithSubModulesSourceFileNames_38));
  }
  libs__globals__get_target_2_p_0(Globals_10, &Target_40);
  ForeignModules_42 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_4[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[21]), (MR_Word) ((MR_Unsigned) 0U));
  parse_tree__write_deps_file__make_module_file_names_with_suffix_9_p_0(Globals_10, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[31])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[42])), ForeignModules_42, &ForeignModulesFileNames_46, STATE_VARIABLE_Cache_147_147, STATE_VARIABLE_Cache_112);
  Var_164 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".foreign");
  {
    MmakeVarForeignModules_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarForeignModules_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarForeignModules_47, 1) = ((MR_Box) (Var_164));
    MR_hl_field(3, MmakeVarForeignModules_47, 2) = ((MR_Box) (ForeignModulesFileNames_46));
  }
  {
    MakeFileName_48 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MakeFileName_48, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_11[0]));
    MR_hl_field(0, MakeFileName_48, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_9_p_0_8));
    MR_hl_field(0, MakeFileName_48, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, MakeFileName_48, 3) = ((MR_Box) (Globals_10));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__write_deps_file_scalar_common_4[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), MakeFileName_48, (MR_Word) ((MR_Unsigned) 0U), &ForeignFileNames_55, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_173_173);
  Var_174 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".foreign_cs");
  {
    MmakeVarForeignFileNames_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarForeignFileNames_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarForeignFileNames_56, 1) = ((MR_Box) (Var_174));
    MR_hl_field(3, MmakeVarForeignFileNames_56, 2) = ((MR_Box) (ForeignFileNames_55));
  }
  Var_176 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".foreign_dlls");
  Var_641 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".foreign:%=\044(dlls_subdir)%.dll)");
  Var_178 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_641);
  {
    MmakeVarForeignDlls_57 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarForeignDlls_57, 0) = ((MR_Box) (Var_176));
    MR_hl_field(2, MmakeVarForeignDlls_57, 1) = ((MR_Box) (Var_178));
  }
  Var_183 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".init_cs");
  Var_644 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(cs_subdir)%.c)");
  Var_185 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_644);
  {
    MmakeVarInitCs_58 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarInitCs_58, 0) = ((MR_Box) (Var_183));
    MR_hl_field(2, MmakeVarInitCs_58, 1) = ((MR_Box) (Var_185));
  }
  Var_190 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".all_cs");
  Var_647 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(cs_subdir)%.c)");
  Var_192 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_647);
  {
    MmakeVarAllCs_59 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllCs_59, 0) = ((MR_Box) (Var_190));
    MR_hl_field(2, MmakeVarAllCs_59, 1) = ((MR_Box) (Var_192));
  }
  parse_tree__write_deps_file__get_fact_table_file_names_3_p_0(DepsMap_13, Modules_23, &FactTableFileNames_60);
  parse_tree__write_deps_file__get_fact_table_dependencies_7_p_0(Globals_10, (MR_Word) (((MR_Box) ((MR_String) ".c"))), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[12])), FactTableFileNames_60, &FactTableFileNamesC_61);
  parse_tree__write_deps_file__get_fact_table_dependencies_7_p_0(Globals_10, (MR_Word) (((MR_Box) ((MR_String) ".\044O"))), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[9])), FactTableFileNames_60, &FactTableFileNamesOs_62);
  parse_tree__write_deps_file__get_fact_table_dependencies_7_p_0(Globals_10, (MR_Word) (((MR_Box) ((MR_String) ".\044(EXT_FOR_PIC_OBJECTS)"))), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[43])), FactTableFileNames_60, &FactTableFileNamesPicOs_63);
  Var_212 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".cs");
  Var_217 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".init_cs)");
  Var_215 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_217);
  {
    Var_214 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_214, 0) = ((MR_Box) (Var_215));
    MR_hl_field(1, Var_214, 1) = ((MR_Box) (FactTableFileNamesC_61));
  }
  {
    MmakeVarCs_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarCs_64, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarCs_64, 1) = ((MR_Box) (Var_212));
    MR_hl_field(3, MmakeVarCs_64, 2) = ((MR_Box) (Var_214));
  }
  Var_219 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".dlls");
  Var_650 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(dlls_subdir)%.dll)");
  Var_221 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_650);
  {
    MmakeVarDlls_65 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarDlls_65, 0) = ((MR_Box) (Var_219));
    MR_hl_field(2, MmakeVarDlls_65, 1) = ((MR_Box) (Var_221));
  }
  Var_226 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".all_os");
  Var_653 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(os_subdir)%.\044O)");
  Var_229 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_653);
  {
    Var_228 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_228, 0) = ((MR_Box) (Var_229));
    MR_hl_field(1, Var_228, 1) = ((MR_Box) (FactTableFileNamesOs_62));
  }
  {
    MmakeVarAllOs_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarAllOs_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarAllOs_66, 1) = ((MR_Box) (Var_226));
    MR_hl_field(3, MmakeVarAllOs_66, 2) = ((MR_Box) (Var_228));
  }
  Var_234 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".all_pic_os");
  Var_656 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(os_subdir)%.\044(EXT_FOR_PIC_OBJECTS))");
  Var_237 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_656);
  {
    Var_236 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_236, 0) = ((MR_Box) (Var_237));
    MR_hl_field(1, Var_236, 1) = ((MR_Box) (FactTableFileNamesPicOs_63));
  }
  {
    MmakeVarAllPicOs_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarAllPicOs_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarAllPicOs_67, 1) = ((MR_Box) (Var_234));
    MR_hl_field(3, MmakeVarAllPicOs_67, 2) = ((MR_Box) (Var_236));
  }
  Var_242 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".os");
  Var_659 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".all_os)");
  Var_244 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_659);
  {
    MmakeVarOs_68 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarOs_68, 0) = ((MR_Box) (Var_242));
    MR_hl_field(2, MmakeVarOs_68, 1) = ((MR_Box) (Var_244));
  }
  Var_249 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".pic_os");
  Var_662 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".all_pic_os)");
  Var_251 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_662);
  {
    MmakeVarPicOs_69 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarPicOs_69, 0) = ((MR_Box) (Var_249));
    MR_hl_field(2, MmakeVarPicOs_69, 1) = ((MR_Box) (Var_251));
  }
  Var_256 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".useds");
  Var_665 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(useds_subdir)%.used)");
  Var_258 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_665);
  {
    MmakeVarUseds_70 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarUseds_70, 0) = ((MR_Box) (Var_256));
    MR_hl_field(2, MmakeVarUseds_70, 1) = ((MR_Box) (Var_258));
  }
  Var_263 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".javas");
  Var_668 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(javas_subdir)%.java)");
  Var_265 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_668);
  {
    MmakeVarJavas_71 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarJavas_71, 0) = ((MR_Box) (Var_263));
    MR_hl_field(2, MmakeVarJavas_71, 1) = ((MR_Box) (Var_265));
  }
  Var_270 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".all_javas");
  Var_671 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(javas_subdir)%.java)");
  Var_272 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_671);
  {
    MmakeVarAllJavas_72 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllJavas_72, 0) = ((MR_Box) (Var_270));
    MR_hl_field(2, MmakeVarAllJavas_72, 1) = ((MR_Box) (Var_272));
  }
  Var_277 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".classes");
  Var_674 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(classes_subdir)%.class)");
  Var_280 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_674);
  Var_677 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(classes_subdir)%\\\044\044*.class))");
  Var_286 = mercury__string__f_43_43_2_f_0((MR_String) "\044(wildcard \044(", Var_677);
  {
    Var_285 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_285, 0) = ((MR_Box) (Var_286));
    MR_hl_field(1, Var_285, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_279 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_279, 0) = ((MR_Box) (Var_280));
    MR_hl_field(1, Var_279, 1) = ((MR_Box) (Var_285));
  }
  {
    MmakeVarClassesJava_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarClassesJava_73, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarClassesJava_73, 1) = ((MR_Box) (Var_277));
    MR_hl_field(3, MmakeVarClassesJava_73, 2) = ((MR_Box) (Var_279));
  }
  Var_292 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".classes");
  {
    MmakeVarClassesNonJava_74 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarClassesNonJava_74, 0) = ((MR_Box) (Var_292));
    MR_hl_field(2, MmakeVarClassesNonJava_74, 1) = ((MR_Box) ((MR_String) ""));
  }
  {
    MmakeFragmentVarClasses_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MmakeFragmentVarClasses_75, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[28]));
    MR_hl_field(1, MmakeFragmentVarClasses_75, 1) = ((MR_Box) (MmakeVarClassesJava_73));
    MR_hl_field(1, MmakeFragmentVarClasses_75, 2) = ((MR_Box) (MmakeVarClassesNonJava_74));
  }
  Var_297 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".css");
  Var_680 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(css_subdir)%.cs)");
  Var_299 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_680);
  {
    MmakeVarCss_76 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarCss_76, 0) = ((MR_Box) (Var_297));
    MR_hl_field(2, MmakeVarCss_76, 1) = ((MR_Box) (Var_299));
  }
  Var_304 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".all_css");
  Var_683 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(css_subdir)%.cs)");
  Var_306 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_683);
  {
    MmakeVarAllCss_77 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllCss_77, 0) = ((MR_Box) (Var_304));
    MR_hl_field(2, MmakeVarAllCss_77, 1) = ((MR_Box) (Var_306));
  }
  Var_311 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".dirs");
  Var_686 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(dirs_subdir)%.dir)");
  Var_313 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_686);
  {
    MmakeVarDirs_78 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarDirs_78, 0) = ((MR_Box) (Var_311));
    MR_hl_field(2, MmakeVarDirs_78, 1) = ((MR_Box) (Var_313));
  }
  Var_318 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".dir_os");
  Var_689 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(dirs_subdir)%.dir/*.\044O)");
  Var_320 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_689);
  {
    MmakeVarDirOs_79 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarDirOs_79, 0) = ((MR_Box) (Var_318));
    MR_hl_field(2, MmakeVarDirOs_79, 1) = ((MR_Box) (Var_320));
  }
  Var_325 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".dates");
  Var_692 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(dates_subdir)%.date)");
  Var_327 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_692);
  {
    MmakeVarDates_80 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarDates_80, 0) = ((MR_Box) (Var_325));
    MR_hl_field(2, MmakeVarDates_80, 1) = ((MR_Box) (Var_327));
  }
  Var_332 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".date0s");
  Var_695 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(date0s_subdir)%.date0)");
  Var_334 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_695);
  {
    MmakeVarDate0s_81 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarDate0s_81, 0) = ((MR_Box) (Var_332));
    MR_hl_field(2, MmakeVarDate0s_81, 1) = ((MR_Box) (Var_334));
  }
  Var_339 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".date3s");
  Var_698 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(date3s_subdir)%.date3)");
  Var_341 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_698);
  {
    MmakeVarDate3s_82 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarDate3s_82, 0) = ((MR_Box) (Var_339));
    MR_hl_field(2, MmakeVarDate3s_82, 1) = ((MR_Box) (Var_341));
  }
  Var_346 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".optdates");
  Var_701 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(optdates_subdir)%.optdate)");
  Var_348 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_701);
  {
    MmakeVarOptDates_83 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarOptDates_83, 0) = ((MR_Box) (Var_346));
    MR_hl_field(2, MmakeVarOptDates_83, 1) = ((MR_Box) (Var_348));
  }
  Var_353 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".trans_opt_dates");
  Var_704 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(trans_opt_dates_subdir)%.trans_opt_date)");
  Var_355 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_704);
  {
    MmakeVarTransOptDates_84 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarTransOptDates_84, 0) = ((MR_Box) (Var_353));
    MR_hl_field(2, MmakeVarTransOptDates_84, 1) = ((MR_Box) (Var_355));
  }
  Var_360 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".c_dates");
  Var_707 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(c_dates_subdir)%.c_date)");
  Var_362 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_707);
  {
    MmakeVarCDates_85 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarCDates_85, 0) = ((MR_Box) (Var_360));
    MR_hl_field(2, MmakeVarCDates_85, 1) = ((MR_Box) (Var_362));
  }
  Var_367 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".java_dates");
  Var_710 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(java_dates_subdir)%.java_date)");
  Var_369 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_710);
  {
    MmakeVarJavaDates_86 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarJavaDates_86, 0) = ((MR_Box) (Var_367));
    MR_hl_field(2, MmakeVarJavaDates_86, 1) = ((MR_Box) (Var_369));
  }
  Var_374 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".cs_dates");
  Var_713 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(cs_dates_subdir)%.cs_date)");
  Var_376 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_713);
  {
    MmakeVarCsDates_87 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarCsDates_87, 0) = ((MR_Box) (Var_374));
    MR_hl_field(2, MmakeVarCsDates_87, 1) = ((MR_Box) (Var_376));
  }
  Var_381 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".ds");
  Var_716 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(ds_subdir)%.d)");
  Var_383 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_716);
  {
    MmakeVarDs_88 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarDs_88, 0) = ((MR_Box) (Var_381));
    MR_hl_field(2, MmakeVarDs_88, 1) = ((MR_Box) (Var_383));
  }
  ModuleDepFileExt_89 = parse_tree__file_names__make_module_dep_file_extension_0_f_0();
  {
    Var_388 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_388, 0) = ((MR_Box) (ModuleDepFileExt_89));
  }
  ModuleDepFileExtStr_90 = parse_tree__file_names__extension_to_string_3_f_0(Globals_10, Var_388, (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[27])));
  Var_391 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".module_deps");
  Var_719 = mercury__string__f_43_43_2_f_0(ModuleDepFileExtStr_90, (MR_String) ")");
  Var_721 = mercury__string__f_43_43_2_f_0((MR_String) ".mods:%=\044(module_deps_subdir)%", Var_719);
  Var_722 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, Var_721);
  Var_393 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_722);
  {
    MmakeVarModuleDeps_91 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarModuleDeps_91, 0) = ((MR_Box) (Var_391));
    MR_hl_field(2, MmakeVarModuleDeps_91, 1) = ((MR_Box) (Var_393));
  }
  switch (Target_40) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word HighLevelCode_92;
        MR_String Var_407;
        MR_String Var_728;

        libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 309, &HighLevelCode_92);
        switch (HighLevelCode_92) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MihSources_93 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_401;
              MR_String Var_725;

              Var_725 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
              Var_401 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_725);
              {
                MihSources_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MihSources_93, 0) = ((MR_Box) (Var_401));
                MR_hl_field(1, MihSources_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
        }
        Var_728 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=%.mh)");
        Var_407 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_728);
        {
          MhSources_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MhSources_94, 0) = ((MR_Box) (Var_407));
          MR_hl_field(1, MhSources_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MihSources_93 = (MR_Word) ((MR_Unsigned) 0U);
        MhSources_94 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
  Var_413 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mihs");
  {
    MmakeVarMihs_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarMihs_95, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarMihs_95, 1) = ((MR_Box) (Var_413));
    MR_hl_field(3, MmakeVarMihs_95, 2) = ((MR_Box) (MihSources_93));
  }
  Var_415 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mhs");
  {
    MmakeVarMhs_96 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarMhs_96, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarMhs_96, 1) = ((MR_Box) (Var_415));
    MR_hl_field(3, MmakeVarMhs_96, 2) = ((MR_Box) (MhSources_94));
  }
  Var_417 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".all_mihs");
  Var_731 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
  Var_419 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_731);
  {
    MmakeVarAllMihs_97 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllMihs_97, 0) = ((MR_Box) (Var_417));
    MR_hl_field(2, MmakeVarAllMihs_97, 1) = ((MR_Box) (Var_419));
  }
  Var_424 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".all_mhs");
  Var_734 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=%.mh)");
  Var_426 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_734);
  {
    MmakeVarAllMhs_98 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllMhs_98, 0) = ((MR_Box) (Var_424));
    MR_hl_field(2, MmakeVarAllMhs_98, 1) = ((MR_Box) (Var_426));
  }
  Var_431 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".ints");
  Var_737 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(ints_subdir)%.int)");
  Var_434 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_737);
  Var_740 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(int2s_subdir)%.int2)");
  Var_440 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_740);
  {
    Var_439 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_439, 0) = ((MR_Box) (Var_440));
    MR_hl_field(1, Var_439, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_433 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_433, 0) = ((MR_Box) (Var_434));
    MR_hl_field(1, Var_433, 1) = ((MR_Box) (Var_439));
  }
  {
    MmakeVarInts_99 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarInts_99, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarInts_99, 1) = ((MR_Box) (Var_431));
    MR_hl_field(3, MmakeVarInts_99, 2) = ((MR_Box) (Var_433));
  }
  Var_446 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".int0s");
  Var_743 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".parent_mods:%=\044(int0s_subdir)%.int0)");
  Var_448 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_743);
  {
    MmakeVarInt0s_100 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarInt0s_100, 0) = ((MR_Box) (Var_446));
    MR_hl_field(2, MmakeVarInt0s_100, 1) = ((MR_Box) (Var_448));
  }
  Var_453 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".all_int0s");
  Var_746 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(int0s_subdir)%.int0)");
  Var_455 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_746);
  {
    MmakeVarAllInt0s_101 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllInt0s_101, 0) = ((MR_Box) (Var_453));
    MR_hl_field(2, MmakeVarAllInt0s_101, 1) = ((MR_Box) (Var_455));
  }
  Var_460 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".int3s");
  Var_749 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(int3s_subdir)%.int3)");
  Var_462 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_749);
  {
    MmakeVarInt3s_102 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarInt3s_102, 0) = ((MR_Box) (Var_460));
    MR_hl_field(2, MmakeVarInt3s_102, 1) = ((MR_Box) (Var_462));
  }
  Var_467 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".opts");
  Var_752 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(opts_subdir)%.opt)");
  Var_469 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_752);
  {
    MmakeVarOpts_103 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarOpts_103, 0) = ((MR_Box) (Var_467));
    MR_hl_field(2, MmakeVarOpts_103, 1) = ((MR_Box) (Var_469));
  }
  Var_474 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".trans_opts");
  Var_755 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(trans_opts_subdir)%.trans_opt)");
  Var_476 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_755);
  {
    MmakeVarTransOpts_104 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarTransOpts_104, 0) = ((MR_Box) (Var_474));
    MR_hl_field(2, MmakeVarTransOpts_104, 1) = ((MR_Box) (Var_476));
  }
  Var_481 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".analysiss");
  Var_758 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(analysiss_subdir)%.analysis)");
  Var_483 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_758);
  {
    MmakeVarAnalysiss_105 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAnalysiss_105, 0) = ((MR_Box) (Var_481));
    MR_hl_field(2, MmakeVarAnalysiss_105, 1) = ((MR_Box) (Var_483));
  }
  Var_488 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".requests");
  Var_761 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(requests_subdir)%.request)");
  Var_490 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_761);
  {
    MmakeVarRequests_106 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarRequests_106, 0) = ((MR_Box) (Var_488));
    MR_hl_field(2, MmakeVarRequests_106, 1) = ((MR_Box) (Var_490));
  }
  Var_495 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".imdgs");
  Var_764 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(imdgs_subdir)%.imdg)");
  Var_497 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_764);
  {
    MmakeVarImdgs_107 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarImdgs_107, 0) = ((MR_Box) (Var_495));
    MR_hl_field(2, MmakeVarImdgs_107, 1) = ((MR_Box) (Var_497));
  }
  Var_502 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".profs");
  Var_767 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=%.prof)");
  Var_504 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_767);
  {
    MmakeVarProfs_108 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarProfs_108, 0) = ((MR_Box) (Var_502));
    MR_hl_field(2, MmakeVarProfs_108, 1) = ((MR_Box) (Var_504));
  }
  {
    Var_529 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_529, 0) = ((MR_Box) (MmakeVarAllJavas_72));
    MR_hl_field(1, Var_529, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_528 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_528, 0) = ((MR_Box) (MmakeVarJavas_71));
    MR_hl_field(1, Var_528, 1) = ((MR_Box) (Var_529));
  }
  {
    Var_527 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_527, 0) = ((MR_Box) (MmakeVarUseds_70));
    MR_hl_field(1, Var_527, 1) = ((MR_Box) (Var_528));
  }
  {
    Var_526 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_526, 0) = ((MR_Box) (MmakeVarPicOs_69));
    MR_hl_field(1, Var_526, 1) = ((MR_Box) (Var_527));
  }
  {
    Var_525 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_525, 0) = ((MR_Box) (MmakeVarOs_68));
    MR_hl_field(1, Var_525, 1) = ((MR_Box) (Var_526));
  }
  {
    Var_524 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_524, 0) = ((MR_Box) (MmakeVarAllPicOs_67));
    MR_hl_field(1, Var_524, 1) = ((MR_Box) (Var_525));
  }
  {
    Var_523 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_523, 0) = ((MR_Box) (MmakeVarAllOs_66));
    MR_hl_field(1, Var_523, 1) = ((MR_Box) (Var_524));
  }
  {
    Var_522 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_522, 0) = ((MR_Box) (MmakeVarDlls_65));
    MR_hl_field(1, Var_522, 1) = ((MR_Box) (Var_523));
  }
  {
    Var_521 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_521, 0) = ((MR_Box) (MmakeVarCs_64));
    MR_hl_field(1, Var_521, 1) = ((MR_Box) (Var_522));
  }
  {
    Var_520 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_520, 0) = ((MR_Box) (MmakeVarAllCs_59));
    MR_hl_field(1, Var_520, 1) = ((MR_Box) (Var_521));
  }
  {
    Var_519 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_519, 0) = ((MR_Box) (MmakeVarInitCs_58));
    MR_hl_field(1, Var_519, 1) = ((MR_Box) (Var_520));
  }
  {
    Var_518 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_518, 0) = ((MR_Box) (MmakeVarForeignDlls_57));
    MR_hl_field(1, Var_518, 1) = ((MR_Box) (Var_519));
  }
  {
    Var_517 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_517, 0) = ((MR_Box) (MmakeVarForeignFileNames_56));
    MR_hl_field(1, Var_517, 1) = ((MR_Box) (Var_518));
  }
  {
    Var_516 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_516, 0) = ((MR_Box) (MmakeVarForeignModules_47));
    MR_hl_field(1, Var_516, 1) = ((MR_Box) (Var_517));
  }
  {
    Var_515 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_515, 0) = ((MR_Box) (MmakeVarModuleParentMods_39));
    MR_hl_field(1, Var_515, 1) = ((MR_Box) (Var_516));
  }
  {
    Var_514 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_514, 0) = ((MR_Box) (MmakeVarModuleMods_31));
    MR_hl_field(1, Var_514, 1) = ((MR_Box) (Var_515));
  }
  {
    Var_513 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_513, 0) = ((MR_Box) (MmakeVarModuleErrs_28));
    MR_hl_field(1, Var_513, 1) = ((MR_Box) (Var_514));
  }
  {
    Var_512 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_512, 0) = ((MR_Box) (MmakeVarModuleDepErrs_29));
    MR_hl_field(1, Var_512, 1) = ((MR_Box) (Var_513));
  }
  {
    Var_511 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_511, 0) = ((MR_Box) (MmakeVarModuleMs_27));
    MR_hl_field(1, Var_511, 1) = ((MR_Box) (Var_512));
  }
  {
    Var_510 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_510, 0) = ((MR_Box) (MmakeStartComment_20));
    MR_hl_field(1, Var_510, 1) = ((MR_Box) (Var_511));
  }
  MmakeFragmentsA_109 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[22]), Var_510);
  {
    Var_559 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_559, 0) = ((MR_Box) (MmakeVarProfs_108));
    MR_hl_field(1, Var_559, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_558 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_558, 0) = ((MR_Box) (MmakeVarImdgs_107));
    MR_hl_field(1, Var_558, 1) = ((MR_Box) (Var_559));
  }
  {
    Var_557 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_557, 0) = ((MR_Box) (MmakeVarRequests_106));
    MR_hl_field(1, Var_557, 1) = ((MR_Box) (Var_558));
  }
  {
    Var_556 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_556, 0) = ((MR_Box) (MmakeVarAnalysiss_105));
    MR_hl_field(1, Var_556, 1) = ((MR_Box) (Var_557));
  }
  {
    Var_555 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_555, 0) = ((MR_Box) (MmakeVarTransOpts_104));
    MR_hl_field(1, Var_555, 1) = ((MR_Box) (Var_556));
  }
  {
    Var_554 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_554, 0) = ((MR_Box) (MmakeVarOpts_103));
    MR_hl_field(1, Var_554, 1) = ((MR_Box) (Var_555));
  }
  {
    Var_553 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_553, 0) = ((MR_Box) (MmakeVarInt3s_102));
    MR_hl_field(1, Var_553, 1) = ((MR_Box) (Var_554));
  }
  {
    Var_552 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_552, 0) = ((MR_Box) (MmakeVarAllInt0s_101));
    MR_hl_field(1, Var_552, 1) = ((MR_Box) (Var_553));
  }
  {
    Var_551 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_551, 0) = ((MR_Box) (MmakeVarInt0s_100));
    MR_hl_field(1, Var_551, 1) = ((MR_Box) (Var_552));
  }
  {
    Var_550 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_550, 0) = ((MR_Box) (MmakeVarInts_99));
    MR_hl_field(1, Var_550, 1) = ((MR_Box) (Var_551));
  }
  {
    Var_549 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_549, 0) = ((MR_Box) (MmakeVarAllMhs_98));
    MR_hl_field(1, Var_549, 1) = ((MR_Box) (Var_550));
  }
  {
    Var_548 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_548, 0) = ((MR_Box) (MmakeVarAllMihs_97));
    MR_hl_field(1, Var_548, 1) = ((MR_Box) (Var_549));
  }
  {
    Var_547 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_547, 0) = ((MR_Box) (MmakeVarMhs_96));
    MR_hl_field(1, Var_547, 1) = ((MR_Box) (Var_548));
  }
  {
    Var_546 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_546, 0) = ((MR_Box) (MmakeVarMihs_95));
    MR_hl_field(1, Var_546, 1) = ((MR_Box) (Var_547));
  }
  {
    Var_545 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_545, 0) = ((MR_Box) (MmakeVarModuleDeps_91));
    MR_hl_field(1, Var_545, 1) = ((MR_Box) (Var_546));
  }
  {
    Var_544 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_544, 0) = ((MR_Box) (MmakeVarDs_88));
    MR_hl_field(1, Var_544, 1) = ((MR_Box) (Var_545));
  }
  {
    Var_543 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_543, 0) = ((MR_Box) (MmakeVarCsDates_87));
    MR_hl_field(1, Var_543, 1) = ((MR_Box) (Var_544));
  }
  {
    Var_542 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_542, 0) = ((MR_Box) (MmakeVarJavaDates_86));
    MR_hl_field(1, Var_542, 1) = ((MR_Box) (Var_543));
  }
  {
    Var_541 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_541, 0) = ((MR_Box) (MmakeVarCDates_85));
    MR_hl_field(1, Var_541, 1) = ((MR_Box) (Var_542));
  }
  {
    Var_540 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_540, 0) = ((MR_Box) (MmakeVarTransOptDates_84));
    MR_hl_field(1, Var_540, 1) = ((MR_Box) (Var_541));
  }
  {
    Var_539 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_539, 0) = ((MR_Box) (MmakeVarOptDates_83));
    MR_hl_field(1, Var_539, 1) = ((MR_Box) (Var_540));
  }
  {
    Var_538 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_538, 0) = ((MR_Box) (MmakeVarDate3s_82));
    MR_hl_field(1, Var_538, 1) = ((MR_Box) (Var_539));
  }
  {
    Var_537 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_537, 0) = ((MR_Box) (MmakeVarDate0s_81));
    MR_hl_field(1, Var_537, 1) = ((MR_Box) (Var_538));
  }
  {
    Var_536 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_536, 0) = ((MR_Box) (MmakeVarDates_80));
    MR_hl_field(1, Var_536, 1) = ((MR_Box) (Var_537));
  }
  {
    Var_535 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_535, 0) = ((MR_Box) (MmakeVarDirOs_79));
    MR_hl_field(1, Var_535, 1) = ((MR_Box) (Var_536));
  }
  {
    Var_534 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_534, 0) = ((MR_Box) (MmakeVarDirs_78));
    MR_hl_field(1, Var_534, 1) = ((MR_Box) (Var_535));
  }
  {
    Var_533 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_533, 0) = ((MR_Box) (MmakeVarAllCss_77));
    MR_hl_field(1, Var_533, 1) = ((MR_Box) (Var_534));
  }
  {
    Var_532 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_532, 0) = ((MR_Box) (MmakeVarCss_76));
    MR_hl_field(1, Var_532, 1) = ((MR_Box) (Var_533));
  }
  MmakeFragmentsB_110 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[23]), Var_532);
  Var_561 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), MmakeFragmentsA_109);
  Var_563 = mercury__cord__singleton_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), ((MR_Box) (MmakeFragmentVarClasses_75)));
  Var_564 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), MmakeFragmentsB_110);
  Var_562 = mercury__cord__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Var_563, Var_564);
  *MmakeFile_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Var_561, Var_562);
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
      MR_Word Module_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Modules_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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
      BurdenedModule_14 = ((MR_Word) ((MR_hl_field(0, Var_18, (MR_Integer) 1))));
      ParseTreeModuleSrc_15 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_14, (MR_Integer) 1))));
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
  MR_Word DepsMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ModuleName_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ModuleNames0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ModuleNamesTail_9;
    MR_Word BurdenedModule_11;
    MR_Word Baggage_12;
    MR_Word ModuleErrors_13;
    MR_Word FatalErrors_14;
    MR_Word Var_15;
    MR_Box conv0_Var_15;

    parse_tree__write_deps_file__select_ok_modules_3_p_0(DepsMap_1, ModuleNames0_7, &ModuleNamesTail_9);
    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_1, ((MR_Box) (ModuleName_6)), &conv0_Var_15);
    Var_15 = ((MR_Word) (conv0_Var_15));
    BurdenedModule_11 = ((MR_Word) ((MR_hl_field(0, Var_15, (MR_Integer) 1))));
    Baggage_12 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_11, (MR_Integer) 0))));
    ModuleErrors_13 = ((MR_Word) ((MR_hl_field(0, Baggage_12, (MR_Integer) 6))));
    FatalErrors_14 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_13, (MR_Integer) 0))));
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_14);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (ModuleName_6));
        MR_hl_field(1, base, 1) = ((MR_Box) (ModuleNamesTail_9));
      }
    else
      *HeadVar__3_3 = ModuleNamesTail_9;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__get_fact_table_dependencies_7_p_0(
  MR_Word Globals_1,
  MR_Word OtherExt_2,
  MR_Word NewExt_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_String ExtraLink_17 = ((MR_String) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word ExtraLinks_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_String FileName_19;
    MR_Word FileNames_20;

    parse_tree__file_names__fact_table_file_name_9_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_fact_table_dependencies\'/7", (MR_Integer) 1, OtherExt_2, NewExt_3, ExtraLink_17, &FileName_19);
    parse_tree__write_deps_file__get_fact_table_dependencies_7_p_0(Globals_1, OtherExt_2, NewExt_3, ExtraLinks_18, &FileNames_20);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__5_5 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FileName_19));
      MR_hl_field(1, base, 1) = ((MR_Box) (FileNames_20));
    }
  }
}

void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_d_files_11_p_0(
  MR_Word Globals_12,
  MR_Word Deps_13,
  MR_Word IntDepsGraph_14,
  MR_Word ImpDepsGraph_15,
  MR_Word IndirectDepsGraph_16,
  MR_Word IndirectOptDepsGraph_17,
  MR_Word TransOptDepsGraph_18,
  MR_Word TransOptOrder_19,
  MR_Word DepsMap_20)
{
  parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_57_93_95_48_11_p_0(Globals_12, Deps_13, IntDepsGraph_14, ImpDepsGraph_15, IndirectDepsGraph_16, IndirectOptDepsGraph_17, TransOptDepsGraph_18, TransOptOrder_19);
}

void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_95_91_57_93_95_48_11_p_0(
  MR_Word Globals_12,
  MR_Word Deps_13,
  MR_Word IntDepsGraph_14,
  MR_Word ImpDepsGraph_15,
  MR_Word IndirectDepsGraph_16,
  MR_Word IndirectOptDepsGraph_17,
  MR_Word TransOptDepsGraph_18,
  MR_Word TransOptOrder_19)
{
  MR_Word Cache0_22;
  MR_Word _Cache_23;

  mercury__map__init_1_p_0((MR_Word) (&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_module_name_and_ext_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &Cache0_22);
  parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_108_111_111_112_95_95_91_57_93_95_48_13_p_0(Globals_12, Deps_13, IntDepsGraph_14, ImpDepsGraph_15, IndirectDepsGraph_16, IndirectOptDepsGraph_17, TransOptDepsGraph_18, TransOptOrder_19, Cache0_22, &_Cache_23);
}

static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_115_95_108_111_111_112_95_95_91_57_93_95_48_13_p_0(
  MR_Word Globals_1,
  MR_Word HeadVar__2_2,
  MR_Word IntDepsGraph_3,
  MR_Word ImpDepsGraph_4,
  MR_Word IndirectDepsGraph_5,
  MR_Word IndirectOptDepsGraph_6,
  MR_Word TransOptDepsGraph_7,
  MR_Word TransOptOrder_8,
  MR_Word STATE_VARIABLE_Cache_0_10,
  MR_Word * STATE_VARIABLE_Cache_11)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Cache_11 = STATE_VARIABLE_Cache_0_10;
    else
    {
      MR_Word Dep_29 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Deps_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Cache_44_44;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Cache_0_10;

      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_57_93_95_48_13_p_0(Globals_1, Dep_29, IntDepsGraph_3, ImpDepsGraph_4, IndirectDepsGraph_5, IndirectOptDepsGraph_6, TransOptDepsGraph_7, TransOptOrder_8, STATE_VARIABLE_Cache_0_10, &STATE_VARIABLE_Cache_44_44);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Deps_30;
      next_value_of_STATE_VARIABLE_Cache_0_10 = STATE_VARIABLE_Cache_44_44;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Cache_0_10 = next_value_of_STATE_VARIABLE_Cache_0_10;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_57_93_95_48_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1498__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_57_93_95_48_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_17;

  parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1530__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_17));
}

static void MR_CALL 
parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_57_93_95_48_13_p_0(
  MR_Word Globals_14,
  MR_Word Dep_15,
  MR_Word IntDepsGraph_16,
  MR_Word ImpDepsGraph_17,
  MR_Word IndirectDepsGraph_18,
  MR_Word IndirectOptDepsGraph_19,
  MR_Word TransOptDepsGraph_20,
  MR_Word FullTransOptOrder_21,
  MR_Word STATE_VARIABLE_Cache_0_50,
  MR_Word * STATE_VARIABLE_Cache_51)
{
  MR_bool succeeded;
  MR_Word BurdenedModule_26 = ((MR_Word) ((MR_hl_field(0, Dep_15, (MR_Integer) 1))));
  MR_Word Baggage_27 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_26, (MR_Integer) 0))));
  MR_Word ParseTreeModuleSrc_28 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_26, (MR_Integer) 1))));
  MR_Word ModuleName_29 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_28, (MR_Integer) 0))));
  MR_Word IndirectOptDeps_30;
  MR_Word Intermod_31;
  MR_Word IntDeps_32;
  MR_Word ImpDeps_33;
  MR_Word IndirectDeps_34;
  MR_Word TransOptDeps0_35;
  MR_Word TransOptDeps_36;
  MR_Word IntermodDeps_37;
  MR_Word NotThisModule_38;
  MR_Word TailTransOptOrder_40;
  MR_Word TransOptOrder_43;
  MR_Word TransOptRuleInfo_44;
  MR_Word MaybeInclTransOptRule_45;
  MR_Word ModuleErrors_46;
  MR_Word FatalErrors_47;
  MR_Word ModuleKey_108;
  MR_Word TransOptOrderList_42;

  succeeded = mercury__digraph__search_key_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IndirectOptDepsGraph_19, ((MR_Box) (ModuleName_29)), &ModuleKey_108);
  if (succeeded)
  {
    MR_Word DepsKeysSet_109;
    MR_Word AddKeyDep_110;
    MR_Word DependenciesList_111;
    MR_Box conv1_DependenciesList_111;

    mercury__digraph__lookup_key_set_from_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IndirectOptDepsGraph_19, ModuleKey_108, &DepsKeysSet_109);
    {
      AddKeyDep_110 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, AddKeyDep_110, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_10[0]));
      MR_hl_field(0, AddKeyDep_110, 1) = ((MR_Box) (parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_57_93_95_48_13_p_0_1));
      MR_hl_field(0, AddKeyDep_110, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, AddKeyDep_110, 3) = ((MR_Box) (IndirectOptDepsGraph_19));
    }
    mercury__sparse_bitset__foldr_4_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[3]), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[1]), AddKeyDep_110, DepsKeysSet_109, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_DependenciesList_111);
    DependenciesList_111 = ((MR_Word) (conv1_DependenciesList_111));
    mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DependenciesList_111, &IndirectOptDeps_30);
  }
  else
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IndirectOptDeps_30);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 499, &Intermod_31);
  switch (Intermod_31) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(IntDepsGraph_16, ModuleName_29, &IntDeps_32);
        parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(ImpDepsGraph_17, ModuleName_29, &ImpDeps_33);
        parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(IndirectDepsGraph_18, ModuleName_29, &IndirectDeps_34);
      }
      break;
    case (MR_Integer) 1:
      {
        IntDeps_32 = IndirectOptDeps_30;
        ImpDeps_33 = IndirectOptDeps_30;
        IndirectDeps_34 = IndirectOptDeps_30;
      }
      break;
  }
  parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(TransOptDepsGraph_20, ModuleName_29, &TransOptDeps0_35);
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_29)), TransOptDeps0_35, &TransOptDeps_36);
  {
    IntermodDeps_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, IntermodDeps_37, 0) = ((MR_Box) (IntDeps_32));
    MR_hl_field(1, IntermodDeps_37, 1) = ((MR_Box) (ImpDeps_33));
    MR_hl_field(1, IntermodDeps_37, 2) = ((MR_Box) (IndirectDeps_34));
    MR_hl_field(1, IntermodDeps_37, 3) = ((MR_Box) (IndirectOptDeps_30));
    MR_hl_field(1, IntermodDeps_37, 4) = ((MR_Box) (TransOptDeps_36));
  }
  {
    NotThisModule_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NotThisModule_38, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[4]));
    MR_hl_field(0, NotThisModule_38, 1) = ((MR_Box) (parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_100_101_112_101_110_100_101_110_99_105_101_115_95_119_114_105_116_101_95_100_95_102_105_108_101_95_95_91_57_93_95_48_13_p_0_2));
    MR_hl_field(0, NotThisModule_38, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, NotThisModule_38, 3) = ((MR_Box) (ModuleName_29));
  }
  mercury__list__drop_while_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NotThisModule_38, FullTransOptOrder_21, &TailTransOptOrder_40);
  succeeded = (TailTransOptOrder_40 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    TransOptOrderList_42 = ((MR_Word) ((MR_hl_field(1, TailTransOptOrder_40, (MR_Integer) 1))));
    mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptOrderList_42, &TransOptOrder_43);
  }
  else
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &TransOptOrder_43);
  {
    TransOptRuleInfo_44 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TransOptRuleInfo_44, 0) = ((MR_Box) (TransOptOrder_43));
  }
  {
    MaybeInclTransOptRule_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybeInclTransOptRule_45, 0) = ((MR_Box) (TransOptRuleInfo_44));
  }
  ModuleErrors_46 = ((MR_Word) ((MR_hl_field(0, Baggage_27, (MR_Integer) 6))));
  FatalErrors_47 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_46, (MR_Integer) 0))));
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_47);
  if (succeeded)
  {
    MR_Word AugCompUnit_48;
    MR_Word BurdenedAugCompUnit_49;

    parse_tree__prog_item__init_aug_compilation_unit_2_p_0(ParseTreeModuleSrc_28, &AugCompUnit_48);
    {
      BurdenedAugCompUnit_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, BurdenedAugCompUnit_49, 0) = ((MR_Box) (Baggage_27));
      MR_hl_field(0, BurdenedAugCompUnit_49, 1) = ((MR_Box) (AugCompUnit_48));
    }
    parse_tree__write_deps_file__write_dependency_file_fn_cache_9_p_0(Globals_14, BurdenedAugCompUnit_49, IntermodDeps_37, IndirectOptDeps_30, MaybeInclTransOptRule_45, STATE_VARIABLE_Cache_0_50, STATE_VARIABLE_Cache_51);
  }
  else
    *STATE_VARIABLE_Cache_51 = STATE_VARIABLE_Cache_0_50;
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

  parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1530__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_17));
}

static void MR_CALL 
parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(
  MR_Word DepsGraph_4,
  MR_Word ModuleName_5,
  MR_Word * Dependencies_6)
{
  MR_bool succeeded;
  MR_Word ModuleKey_7;

  succeeded = mercury__digraph__search_key_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DepsGraph_4, ((MR_Box) (ModuleName_5)), &ModuleKey_7);
  if (succeeded)
  {
    MR_Word DepsKeysSet_8;
    MR_Word AddKeyDep_9;
    MR_Word DependenciesList_14;
    MR_Box conv1_DependenciesList_14;

    mercury__digraph__lookup_key_set_from_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DepsGraph_4, ModuleKey_7, &DepsKeysSet_8);
    {
      AddKeyDep_9 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, AddKeyDep_9, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_10[0]));
      MR_hl_field(0, AddKeyDep_9, 1) = ((MR_Box) (parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1));
      MR_hl_field(0, AddKeyDep_9, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, AddKeyDep_9, 3) = ((MR_Box) (DepsGraph_4));
    }
    mercury__sparse_bitset__foldr_4_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[3]), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[1]), AddKeyDep_9, DepsKeysSet_8, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_DependenciesList_14);
    DependenciesList_14 = ((MR_Word) (conv1_DependenciesList_14));
    mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DependenciesList_14, Dependencies_6);
  }
  else
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Dependencies_6);
}

void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_7_p_0(
  MR_Word Globals_8,
  MR_Word BurdenedAugCompUnit_9,
  MR_Word IntermodDeps_10,
  MR_Word AllDeps_11,
  MR_Word MaybeInclTransOptRule_12)
{
  MR_Word Cache0_14;
  MR_Word _Cache_15;

  mercury__map__init_1_p_0((MR_Word) (&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_module_name_and_ext_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &Cache0_14);
  parse_tree__write_deps_file__write_dependency_file_fn_cache_9_p_0(Globals_8, BurdenedAugCompUnit_9, IntermodDeps_10, AllDeps_11, MaybeInclTransOptRule_12, Cache0_14, &_Cache_15);
}

static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_fn_cache_9_p_0(
  MR_Word Globals_10,
  MR_Word BurdenedAugCompUnit_11,
  MR_Word IntermodDeps_12,
  MR_Word AllDeps_13,
  MR_Word MaybeInclTransOptRule_14,
  MR_Word STATE_VARIABLE_Cache_0_41,
  MR_Word * STATE_VARIABLE_Cache_42)
{
  MR_Word AugCompUnit_18 = ((MR_Word) ((MR_hl_field(0, BurdenedAugCompUnit_11, (MR_Integer) 1))));
  MR_Word ParseTreeModuleSrc_19 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_18, (MR_Integer) 0))));
  MR_Word ModuleName_20 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_19, (MR_Integer) 0))));
  MR_String DependencyFileName_21;
  MR_Word TmpDependencyFileNameRes_22;
  MR_Word ErrorStream_23;
  MR_Word ProgressStream_24;
  MR_String Var_53;

  parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_10, (MR_String) "predicate \140parse_tree.write_deps_file.write_dependency_file_fn_cache\'/9", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[2])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[7])), ModuleName_20, &DependencyFileName_21);
  Var_53 = mercury__dir__dirname_1_f_0(DependencyFileName_21);
  mercury__io__file__make_temp_file_6_p_0(Var_53, (MR_String) "tmp_d", (MR_String) "", &TmpDependencyFileNameRes_22);
  libs__globals__get_error_output_stream_5_p_0(Globals_10, ModuleName_20, &ErrorStream_23);
  libs__globals__get_progress_output_stream_5_p_0(Globals_10, ModuleName_20, &ProgressStream_24);
  if (((MR_tag((MR_Word) TmpDependencyFileNameRes_22)) == (MR_Integer) 1))
  {
    MR_Word Error_25 = ((MR_Word) ((MR_hl_field(1, TmpDependencyFileNameRes_22, (MR_Integer) 0))));
    MR_String Message_26;
    MR_String Var_60;

    Var_60 = mercury__io__error_message_1_f_0(Error_25);
    Message_26 = mercury__string__f_43_43_2_f_0((MR_String) "Could not create temporary file: ", Var_60);
    libs__file_util__report_error_4_p_0(ErrorStream_23, Message_26);
    *STATE_VARIABLE_Cache_42 = STATE_VARIABLE_Cache_0_41;
  }
  else
  {
    MR_String TmpDependencyFileName_27 = ((MR_String) ((MR_hl_field(0, TmpDependencyFileNameRes_22, (MR_Integer) 0))));
    MR_Word Verbose_28;
    MR_Word Result_29;

    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 72, &Verbose_28);
    switch (Verbose_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(ProgressStream_24, (MR_String) "% Writing auto-dependency file \140");
          mercury__io__write_string_4_p_0(ProgressStream_24, DependencyFileName_21);
          mercury__io__write_string_4_p_0(ProgressStream_24, (MR_String) "\'...");
          mercury__io__flush_output_3_p_0(ProgressStream_24);
        }
        break;
    }
    mercury__io__open_output_4_p_0(TmpDependencyFileName_27, &Result_29);
    if (((MR_tag((MR_Word) Result_29)) == (MR_Integer) 1))
    {
      MR_Word IOError_30 = ((MR_Word) ((MR_hl_field(1, Result_29, (MR_Integer) 0))));
      MR_String IOErrorMessage_31;
      MR_String Message_113;
      MR_String Var_178;
      MR_String Var_179;

      libs__file_util__maybe_write_string_5_p_0(ProgressStream_24, Verbose_28, (MR_String) " failed.\n");
      libs__file_util__maybe_flush_output_4_p_0(ProgressStream_24, Verbose_28);
      mercury__io__error_message_2_p_0(IOError_30, &IOErrorMessage_31);
      Var_178 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", IOErrorMessage_31);
      Var_179 = mercury__string__f_43_43_2_f_0(TmpDependencyFileName_27, Var_178);
      Message_113 = mercury__string__f_43_43_2_f_0((MR_String) "error opening temporary file \140", Var_179);
      libs__file_util__report_error_4_p_0(ErrorStream_23, Message_113);
      *STATE_VARIABLE_Cache_42 = STATE_VARIABLE_Cache_0_41;
    }
    else
    {
      MR_Word DepStream_32 = ((MR_Word) ((MR_hl_field(0, Result_29, (MR_Integer) 0))));
      MR_Word MmakeFile_33;
      MR_Word FirstRenameResult_34;

      parse_tree__write_deps_file__generate_d_file_10_p_0(Globals_10, BurdenedAugCompUnit_11, IntermodDeps_12, AllDeps_13, MaybeInclTransOptRule_14, &MmakeFile_33, STATE_VARIABLE_Cache_0_41, STATE_VARIABLE_Cache_42);
      libs__mmakefiles__write_mmakefile_4_p_0(DepStream_32, MmakeFile_33);
      mercury__io__close_output_3_p_0(DepStream_32);
      mercury__io__file__rename_file_5_p_0(TmpDependencyFileName_27, DependencyFileName_21, &FirstRenameResult_34);
      if ((FirstRenameResult_34 == (MR_Word) ((MR_Unsigned) 0U)))
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_24, Verbose_28, (MR_String) " done.\n");
      else
      {
        MR_Word RemoveResult_36;

        mercury__io__file__remove_file_4_p_0(DependencyFileName_21, &RemoveResult_36);
        if ((RemoveResult_36 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word SecondRenameResult_39;

          mercury__io__file__rename_file_5_p_0(TmpDependencyFileName_27, DependencyFileName_21, &SecondRenameResult_39);
          if ((SecondRenameResult_39 == (MR_Word) ((MR_Unsigned) 0U)))
            libs__file_util__maybe_write_string_5_p_0(ProgressStream_24, Verbose_28, (MR_String) " done.\n");
          else
          {
            MR_Word Error5_40 = ((MR_Word) ((MR_hl_field(1, SecondRenameResult_39, (MR_Integer) 0))));
            MR_String Message_115;
            MR_String ErrorMsg_116;
            MR_String Var_167;
            MR_String Var_168;
            MR_String Var_170;
            MR_String Var_171;

            libs__file_util__maybe_write_string_5_p_0(ProgressStream_24, Verbose_28, (MR_String) " failed.\n");
            libs__file_util__maybe_flush_output_4_p_0(ProgressStream_24, Verbose_28);
            mercury__io__error_message_2_p_0(Error5_40, &ErrorMsg_116);
            Var_167 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", ErrorMsg_116);
            Var_168 = mercury__string__f_43_43_2_f_0(DependencyFileName_21, Var_167);
            Var_170 = mercury__string__f_43_43_2_f_0((MR_String) "\' as \140", Var_168);
            Var_171 = mercury__string__f_43_43_2_f_0(TmpDependencyFileName_27, Var_170);
            Message_115 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t rename file \140", Var_171);
            libs__file_util__report_error_4_p_0(ErrorStream_23, Message_115);
          }
        }
        else
        {
          MR_Word Error4_37 = ((MR_Word) ((MR_hl_field(1, RemoveResult_36, (MR_Integer) 0))));
          MR_String ErrorMsg_38;
          MR_String Message_114;
          MR_String Var_174;
          MR_String Var_175;

          libs__file_util__maybe_write_string_5_p_0(ProgressStream_24, Verbose_28, (MR_String) " failed.\n");
          libs__file_util__maybe_flush_output_4_p_0(ProgressStream_24, Verbose_28);
          mercury__io__error_message_2_p_0(Error4_37, &ErrorMsg_38);
          Var_174 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", ErrorMsg_38);
          Var_175 = mercury__string__f_43_43_2_f_0(DependencyFileName_21, Var_174);
          Message_114 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t remove file \140", Var_175);
          libs__file_util__report_error_4_p_0(ErrorStream_23, Message_114);
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_10_p_0(
  MR_Word Globals_11,
  MR_Word BurdenedAugCompUnit_12,
  MR_Word IntermodDeps_13,
  MR_Word AllDeps_14,
  MR_Word MaybeInclTransOptRule_15,
  MR_Word * STATE_VARIABLE_MmakeFile_75,
  MR_Word STATE_VARIABLE_Cache_0_76,
  MR_Word * STATE_VARIABLE_Cache_77)
{
  MR_bool succeeded;
  MR_Word Baggage_19 = ((MR_Word) ((MR_hl_field(0, BurdenedAugCompUnit_12, (MR_Integer) 0))));
  MR_Word AugCompUnit_20 = ((MR_Word) ((MR_hl_field(0, BurdenedAugCompUnit_12, (MR_Integer) 1))));
  MR_String SourceFileName_21 = ((MR_String) ((MR_hl_field(0, Baggage_19, (MR_Integer) 0))));
  MR_Word SourceFileModuleName_22 = ((MR_Word) ((MR_hl_field(0, Baggage_19, (MR_Integer) 2))));
  MR_Word MaybeTopModule_23 = ((MR_Word) ((MR_hl_field(0, Baggage_19, (MR_Integer) 3))));
  MR_Word ParseTreeModuleSrc_24 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_20, (MR_Integer) 0))));
  MR_Word ModuleName_25 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_24, (MR_Integer) 0))));
  MR_String ModuleNameString_26;
  MR_Word Ancestors_27;
  MR_Word LongDeps0_28;
  MR_Word PublicChildrenMap_35;
  MR_Word PublicChildren_36;
  MR_Word FactTableFileNamesSet_37;
  MR_Word ForeignIncludeFiles_38;
  MR_String Version_39;
  MR_String FullArch_40;
  MR_Word MmakeStartComment_41;
  MR_String ModuleMakeVarName_42;
  MR_Word LongDeps_43;
  MR_Word ShortDeps0_44;
  MR_Word ShortDeps1_45;
  MR_Word ShortDeps_46;
  MR_String TransOptDateFileName_47;
  MR_Word MmakeRulesTransOpt_48;
  MR_String ObjFileName_49;
  MR_Word MmakeVarsFactTables_50;
  MR_Word FactTableSourceGroups_51;
  MR_Word MmakeRulesFactTables_52;
  MR_String ErrFileName_54;
  MR_String OptDateFileName_55;
  MR_String CDateFileName_56;
  MR_String JavaDateFileName_57;
  MR_String PicObjFileName_58;
  MR_String Int0FileName_59;
  MR_Word MmakeRuleDateFileDeps_60;
  MR_Word MmakeRulesNestedDeps_61;
  MR_Word MmakeRulesIntermod_62;
  MR_String CFileName_63;
  MR_Word MmakeRulesCHeaders_64;
  MR_Word MmakeFragmentModuleDep_65;
  MR_String DateFileName_66;
  MR_String Date0FileName_67;
  MR_Word MmakeRulesParentDates_68;
  MR_Word MmakeRulesForeignImports_69;
  MR_String Date3FileName_70;
  MR_Word MmakeRulesInstallShadows_71;
  MR_Word MmakeRulesSubDirShorthand_72;
  MR_Word HaveMap_73;
  MR_Word MmakeRulesPatterns_74;
  MR_Word STATE_VARIABLE_Cache_85_85;
  MR_Word STATE_VARIABLE_Cache_90_90;
  MR_Word STATE_VARIABLE_Cache_99_99;
  MR_Word STATE_VARIABLE_Cache_107_107;
  MR_Word STATE_VARIABLE_Cache_115_115;
  MR_Word STATE_VARIABLE_Cache_123_123;
  MR_Word STATE_VARIABLE_Cache_131_131;
  MR_Word STATE_VARIABLE_Cache_139_139;
  MR_Word STATE_VARIABLE_Cache_144_144;
  MR_Word STATE_VARIABLE_Cache_146_146;
  MR_Word STATE_VARIABLE_Cache_148_148;
  MR_Word STATE_VARIABLE_Cache_153_153;
  MR_Word STATE_VARIABLE_Cache_158_158;
  MR_Word STATE_VARIABLE_Cache_160_160;
  MR_Word STATE_VARIABLE_Cache_165_165;
  MR_Word STATE_VARIABLE_Cache_173_173;
  MR_Word STATE_VARIABLE_Cache_178_178;
  MR_Word STATE_VARIABLE_Cache_180_180;
  MR_Word STATE_VARIABLE_Cache_185_185;
  MR_Word STATE_VARIABLE_Cache_190_190;
  MR_Word STATE_VARIABLE_MmakeFile_195_195;
  MR_Word STATE_VARIABLE_MmakeFile_196_196;
  MR_Word STATE_VARIABLE_MmakeFile_197_197;
  MR_Word STATE_VARIABLE_MmakeFile_198_198;
  MR_Word STATE_VARIABLE_MmakeFile_199_199;
  MR_Word STATE_VARIABLE_MmakeFile_200_200;
  MR_Word STATE_VARIABLE_MmakeFile_201_201;
  MR_Word STATE_VARIABLE_MmakeFile_202_202;
  MR_Word STATE_VARIABLE_MmakeFile_203_203;
  MR_Word STATE_VARIABLE_MmakeFile_204_204;
  MR_Word STATE_VARIABLE_MmakeFile_205_205;
  MR_Word STATE_VARIABLE_MmakeFile_206_206;
  MR_Word STATE_VARIABLE_MmakeFile_207_207;
  MR_Word STATE_VARIABLE_MmakeFile_208_208;
  MR_String SourceFileBase_53;

  ModuleNameString_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_25);
  Ancestors_27 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_25);
  if ((IntermodDeps_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word IndirectIntSpecs_29;
    MR_Word Var_80 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_24, (MR_Integer) 9))));

    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), Var_80, &LongDeps0_28);
    IndirectIntSpecs_29 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_20, (MR_Integer) 3))));
    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0), IndirectIntSpecs_29, &ShortDeps0_44);
  }
  else
  {
    MR_Word IntDeps_31 = ((MR_Word) ((MR_hl_field(1, IntermodDeps_13, (MR_Integer) 0))));
    MR_Word ImpDeps_32 = ((MR_Word) ((MR_hl_field(1, IntermodDeps_13, (MR_Integer) 1))));

    ShortDeps0_44 = ((MR_Word) ((MR_hl_field(1, IntermodDeps_13, (MR_Integer) 2))));
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDeps_31, ImpDeps_32, &LongDeps0_28);
  }
  PublicChildrenMap_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_24, (MR_Integer) 2))));
  mercury__one_or_more_map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term_context__term_context__type_ctor_info_term_context_0), PublicChildrenMap_35, &PublicChildren_36);
  parse_tree__get_dependencies__get_fact_tables_2_p_0(ParseTreeModuleSrc_24, &FactTableFileNamesSet_37);
  parse_tree__get_dependencies__get_foreign_include_file_infos_2_p_0(ParseTreeModuleSrc_24, &ForeignIncludeFiles_38);
  mercury__library__version_2_p_0(&Version_39, &FullArch_40);
  {
    MmakeStartComment_41 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MmakeStartComment_41, 0) = ((MR_Box) ((MR_String) "module dependencies"));
    MR_hl_field(0, MmakeStartComment_41, 1) = ((MR_Box) (ModuleNameString_26));
    MR_hl_field(0, MmakeStartComment_41, 2) = ((MR_Box) (SourceFileName_21));
    MR_hl_field(0, MmakeStartComment_41, 3) = ((MR_Box) (Version_39));
    MR_hl_field(0, MmakeStartComment_41, 4) = ((MR_Box) (FullArch_40));
  }
  parse_tree__file_names__module_name_to_make_var_name_2_p_0(ModuleName_25, &ModuleMakeVarName_42);
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_25)), LongDeps0_28, &LongDeps_43);
  mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ShortDeps0_44, LongDeps_43, &ShortDeps1_45);
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_25)), ShortDeps1_45, &ShortDeps_46);
  parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[3])), (MR_Word) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_5[4])), ModuleName_25, &TransOptDateFileName_47, STATE_VARIABLE_Cache_0_76, &STATE_VARIABLE_Cache_85_85);
  parse_tree__write_deps_file__construct_trans_opt_deps_rule_9_p_0(Globals_11, MaybeInclTransOptRule_15, IntermodDeps_13, TransOptDateFileName_47, &MmakeRulesTransOpt_48, STATE_VARIABLE_Cache_85_85, &STATE_VARIABLE_Cache_90_90);
  succeeded = mercury__string__remove_suffix_3_p_0(SourceFileName_21, (MR_String) ".m", &SourceFileBase_53);
  if (succeeded)
    ErrFileName_54 = mercury__string__f_43_43_2_f_0(SourceFileBase_53, (MR_String) ".err");
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_String) "source file name doesn\'t end in \140.m\'");
      return;
    }
  parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[5])), (MR_Word) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_5[6])), ModuleName_25, &OptDateFileName_55, STATE_VARIABLE_Cache_90_90, &STATE_VARIABLE_Cache_99_99);
  parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[7])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[8])), ModuleName_25, &CDateFileName_56, STATE_VARIABLE_Cache_99_99, &STATE_VARIABLE_Cache_107_107);
  parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[8])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[9])), ModuleName_25, &ObjFileName_49, STATE_VARIABLE_Cache_107_107, &STATE_VARIABLE_Cache_115_115);
  parse_tree__write_deps_file__construct_fact_tables_entries_7_p_0(ModuleMakeVarName_42, SourceFileName_21, ObjFileName_49, FactTableFileNamesSet_37, &MmakeVarsFactTables_50, &FactTableSourceGroups_51, &MmakeRulesFactTables_52);
  parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[9])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[10])), ModuleName_25, &JavaDateFileName_57, STATE_VARIABLE_Cache_115_115, &STATE_VARIABLE_Cache_123_123);
  parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[10])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[11])), ModuleName_25, &PicObjFileName_58, STATE_VARIABLE_Cache_123_123, &STATE_VARIABLE_Cache_131_131);
  parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[11])), (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[12])), ModuleName_25, &Int0FileName_59, STATE_VARIABLE_Cache_131_131, &STATE_VARIABLE_Cache_139_139);
  parse_tree__write_deps_file__construct_date_file_deps_rule_20_p_0(Globals_11, ModuleName_25, SourceFileName_21, Ancestors_27, LongDeps_43, ShortDeps_46, PublicChildren_36, Int0FileName_59, OptDateFileName_55, TransOptDateFileName_47, ForeignIncludeFiles_38, CDateFileName_56, JavaDateFileName_57, ErrFileName_54, FactTableSourceGroups_51, &MmakeRuleDateFileDeps_60, STATE_VARIABLE_Cache_139_139, &STATE_VARIABLE_Cache_144_144);
  parse_tree__write_deps_file__construct_build_nested_children_first_rule_8_p_0(Globals_11, ModuleName_25, MaybeTopModule_23, &MmakeRulesNestedDeps_61, STATE_VARIABLE_Cache_144_144, &STATE_VARIABLE_Cache_146_146);
  parse_tree__write_deps_file__construct_intermod_rules_14_p_0(Globals_11, ModuleName_25, LongDeps_43, AllDeps_14, ErrFileName_54, TransOptDateFileName_47, CDateFileName_56, JavaDateFileName_57, ObjFileName_49, &MmakeRulesIntermod_62, STATE_VARIABLE_Cache_146_146, &STATE_VARIABLE_Cache_148_148);
  parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[13])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[12])), ModuleName_25, &CFileName_63, STATE_VARIABLE_Cache_148_148, &STATE_VARIABLE_Cache_153_153);
  parse_tree__write_deps_file__construct_c_header_rules_11_p_0(Globals_11, ModuleName_25, AllDeps_14, CFileName_63, ObjFileName_49, PicObjFileName_58, &MmakeRulesCHeaders_64, STATE_VARIABLE_Cache_153_153, &STATE_VARIABLE_Cache_158_158);
  parse_tree__write_deps_file__construct_module_dep_fragment_8_p_0(Globals_11, ModuleName_25, CFileName_63, &MmakeFragmentModuleDep_65, STATE_VARIABLE_Cache_158_158, &STATE_VARIABLE_Cache_160_160);
  parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[14])), (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[15])), ModuleName_25, &DateFileName_66, STATE_VARIABLE_Cache_160_160, &STATE_VARIABLE_Cache_165_165);
  parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[16])), (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[17])), ModuleName_25, &Date0FileName_67, STATE_VARIABLE_Cache_165_165, &STATE_VARIABLE_Cache_173_173);
  parse_tree__write_deps_file__construct_self_and_parent_date_date0_rules_12_p_0(Globals_11, SourceFileName_21, Date0FileName_67, DateFileName_66, Ancestors_27, LongDeps_43, ShortDeps_46, &MmakeRulesParentDates_68, STATE_VARIABLE_Cache_173_173, &STATE_VARIABLE_Cache_178_178);
  parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0(Globals_11, AugCompUnit_20, IntermodDeps_13, SourceFileModuleName_22, ObjFileName_49, PicObjFileName_58, &MmakeRulesForeignImports_69, STATE_VARIABLE_Cache_178_178, &STATE_VARIABLE_Cache_180_180);
  parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[18])), (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[19])), ModuleName_25, &Date3FileName_70, STATE_VARIABLE_Cache_180_180, &STATE_VARIABLE_Cache_185_185);
  parse_tree__write_deps_file__construct_install_shadow_rules_13_p_0(Globals_11, ModuleName_25, Int0FileName_59, Date0FileName_67, DateFileName_66, Date3FileName_70, OptDateFileName_55, TransOptDateFileName_47, &MmakeRulesInstallShadows_71, STATE_VARIABLE_Cache_185_185, &STATE_VARIABLE_Cache_190_190);
  parse_tree__write_deps_file__construct_subdir_short_rules_7_p_0(Globals_11, ModuleName_25, &MmakeRulesSubDirShorthand_72, STATE_VARIABLE_Cache_190_190, STATE_VARIABLE_Cache_77);
  parse_tree__source_file_map__have_source_file_map_3_p_0(&HaveMap_73);
  parse_tree__write_deps_file__construct_any_needed_pattern_rules_12_p_0(HaveMap_73, ModuleName_25, SourceFileModuleName_22, SourceFileName_21, Date0FileName_67, DateFileName_66, Date3FileName_70, OptDateFileName_55, TransOptDateFileName_47, CDateFileName_56, JavaDateFileName_57, &MmakeRulesPatterns_74);
  libs__mmakefiles__start_mmakefile_1_p_0(&STATE_VARIABLE_MmakeFile_195_195);
  libs__mmakefiles__add_mmake_entry_3_p_0(MmakeStartComment_41, STATE_VARIABLE_MmakeFile_195_195, &STATE_VARIABLE_MmakeFile_196_196);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesTransOpt_48, STATE_VARIABLE_MmakeFile_196_196, &STATE_VARIABLE_MmakeFile_197_197);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeVarsFactTables_50, STATE_VARIABLE_MmakeFile_197_197, &STATE_VARIABLE_MmakeFile_198_198);
  libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleDateFileDeps_60, STATE_VARIABLE_MmakeFile_198_198, &STATE_VARIABLE_MmakeFile_199_199);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesFactTables_52, STATE_VARIABLE_MmakeFile_199_199, &STATE_VARIABLE_MmakeFile_200_200);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesNestedDeps_61, STATE_VARIABLE_MmakeFile_200_200, &STATE_VARIABLE_MmakeFile_201_201);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesIntermod_62, STATE_VARIABLE_MmakeFile_201_201, &STATE_VARIABLE_MmakeFile_202_202);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesCHeaders_64, STATE_VARIABLE_MmakeFile_202_202, &STATE_VARIABLE_MmakeFile_203_203);
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentModuleDep_65, STATE_VARIABLE_MmakeFile_203_203, &STATE_VARIABLE_MmakeFile_204_204);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesParentDates_68, STATE_VARIABLE_MmakeFile_204_204, &STATE_VARIABLE_MmakeFile_205_205);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesForeignImports_69, STATE_VARIABLE_MmakeFile_205_205, &STATE_VARIABLE_MmakeFile_206_206);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesInstallShadows_71, STATE_VARIABLE_MmakeFile_206_206, &STATE_VARIABLE_MmakeFile_207_207);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesSubDirShorthand_72, STATE_VARIABLE_MmakeFile_207_207, &STATE_VARIABLE_MmakeFile_208_208);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesPatterns_74, STATE_VARIABLE_MmakeFile_208_208, STATE_VARIABLE_MmakeFile_75);
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
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (SourceFileName_16));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCPI) \044(ALL_GRADEFLAGS) \044(ALL_MCPIFLAGS) ", ModuleArg_25);
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (Var_32));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_26, 1) = ((MR_Box) ((MR_String) "date0_on_src"));
      MR_hl_field(3, Var_26, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, Var_26, 3) = ((MR_Box) (Date0FileName_17));
      MR_hl_field(3, Var_26, 4) = ((MR_Box) (Var_29));
      MR_hl_field(3, Var_26, 5) = ((MR_Box) (Var_31));
    }
    Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCI) \044(ALL_GRADEFLAGS) \044(ALL_MCIFLAGS) ", ModuleArg_25);
    {
      Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
      MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_36, 1) = ((MR_Box) ((MR_String) "date_on_src"));
      MR_hl_field(3, Var_36, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, Var_36, 3) = ((MR_Box) (DateFileName_18));
      MR_hl_field(3, Var_36, 4) = ((MR_Box) (Var_29));
      MR_hl_field(3, Var_36, 5) = ((MR_Box) (Var_41));
    }
    Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCSI) \044(ALL_GRADEFLAGS) \044(ALL_MCSIFLAGS) ", ModuleArg_25);
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (Var_52));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_46 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_46, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_46, 1) = ((MR_Box) ((MR_String) "date3_on_src"));
      MR_hl_field(3, Var_46, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, Var_46, 3) = ((MR_Box) (Date3FileName_19));
      MR_hl_field(3, Var_46, 4) = ((MR_Box) (Var_29));
      MR_hl_field(3, Var_46, 5) = ((MR_Box) (Var_51));
    }
    Var_62 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCOI) \044(ALL_GRADEFLAGS) \044(ALL_MCOIFLAGS) ", ModuleArg_25);
    {
      Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
      MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_56, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_56, 1) = ((MR_Box) ((MR_String) "opt_date_on_src"));
      MR_hl_field(3, Var_56, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, Var_56, 3) = ((MR_Box) (OptDateFileName_20));
      MR_hl_field(3, Var_56, 4) = ((MR_Box) (Var_29));
      MR_hl_field(3, Var_56, 5) = ((MR_Box) (Var_61));
    }
    Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCTOI) \044(ALL_GRADEFLAGS) \044(ALL_MCTOIFLAGS) ", ModuleArg_25);
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
      MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_66, 1) = ((MR_Box) ((MR_String) "trans_opt_date_on_src"));
      MR_hl_field(3, Var_66, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, Var_66, 3) = ((MR_Box) (TransOptDateFileName_21));
      MR_hl_field(3, Var_66, 4) = ((MR_Box) (Var_29));
      MR_hl_field(3, Var_66, 5) = ((MR_Box) (Var_71));
    }
    Var_84 = mercury__string__f_43_43_2_f_0(ModuleArg_25, (MR_String) " \044(ERR_REDIRECT)");
    Var_82 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) ", Var_84);
    {
      Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
      MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_76, 1) = ((MR_Box) ((MR_String) "c_date_on_src"));
      MR_hl_field(3, Var_76, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, Var_76, 3) = ((MR_Box) (CDateFileName_22));
      MR_hl_field(3, Var_76, 4) = ((MR_Box) (Var_29));
      MR_hl_field(3, Var_76, 5) = ((MR_Box) (Var_81));
    }
    Var_96 = mercury__string__f_43_43_2_f_0(ModuleArg_25, (MR_String) " \044(ERR_REDIRECT)");
    Var_94 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) --java-only ", Var_96);
    {
      Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_94));
      MR_hl_field(1, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_88, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Var_88, 1) = ((MR_Box) ((MR_String) "java_date_on_src"));
      MR_hl_field(3, Var_88, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, Var_88, 3) = ((MR_Box) (JavaDateFileName_23));
      MR_hl_field(3, Var_88, 4) = ((MR_Box) (Var_29));
      MR_hl_field(3, Var_88, 5) = ((MR_Box) (Var_93));
    }
    {
      Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
      MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
      MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_87));
    }
    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = ((MR_Box) (Var_66));
      MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_75));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_65));
    }
    {
      Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_45));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MmakeRulesPatterns_24 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_26));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_35));
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__construct_subdir_short_rules_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MmakeRule_13;
  MR_Word conv0_STATE_VARIABLE_Cache_21;

  parse_tree__write_deps_file__construct_subdirs_shorthand_rule_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Tuple) (wrapper_arg_1)), &conv1_MmakeRule_13, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_21);
  *wrapper_arg_2 = ((MR_Box) (conv1_MmakeRule_13));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_21));
}

static void MR_CALL 
parse_tree__write_deps_file__construct_subdir_short_rules_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * MmakeRulesSubDirShorthand_10,
  MR_Word STATE_VARIABLE_Cache_0_15,
  MR_Word * STATE_VARIABLE_Cache_16)
{
  MR_Word UseSubdirs_13;

  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 684, &UseSubdirs_13);
  switch (UseSubdirs_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *MmakeRulesSubDirShorthand_10 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Cache_16 = STATE_VARIABLE_Cache_0_15;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_56;
        MR_Box conv3_STATE_VARIABLE_Cache_16;
        MR_Box conv2_STATE_VARIABLE_IO_18;

        {
          Var_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_56, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_9[0]));
          MR_hl_field(0, Var_56, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_subdir_short_rules_7_p_0_1));
          MR_hl_field(0, Var_56, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_56, 3) = ((MR_Box) (Globals_8));
          MR_hl_field(0, Var_56, 4) = ((MR_Box) (ModuleName_9));
        }
        mercury__list__map_foldl2_7_p_2((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_56, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[41])), MmakeRulesSubDirShorthand_10, ((MR_Box) (STATE_VARIABLE_Cache_0_15)), &conv3_STATE_VARIABLE_Cache_16, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_18);
        *STATE_VARIABLE_Cache_16 = ((MR_Word) (conv3_STATE_VARIABLE_Cache_16));
      }
      break;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__construct_install_shadow_rules_13_p_0(
  MR_Word Globals_14,
  MR_Word ModuleName_15,
  MR_String Int0FileName_16,
  MR_String Date0FileName_17,
  MR_String DateFileName_18,
  MR_String Date3FileName_19,
  MR_String OptDateFileName_20,
  MR_String TransOptDateFileName_21,
  MR_Word * MmakeRulesInstallShadows_22,
  MR_Word STATE_VARIABLE_Cache_0_30,
  MR_Word * STATE_VARIABLE_Cache_31)
{
  MR_String IntFileName_25;
  MR_String Int2FileName_26;
  MR_String Int3FileName_27;
  MR_String OptFileName_28;
  MR_String TransOptFileName_29;
  MR_Word STATE_VARIABLE_Cache_37_37;
  MR_Word STATE_VARIABLE_Cache_45_45;
  MR_Word STATE_VARIABLE_Cache_53_53;
  MR_Word STATE_VARIABLE_Cache_61_61;
  MR_Word Var_74;
  MR_Word Var_77;
  MR_Word Var_79;
  MR_String Var_80;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_86;
  MR_Word Var_88;
  MR_String Var_89;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_97;
  MR_String Var_98;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_104;
  MR_Word Var_106;
  MR_String Var_107;
  MR_Word Var_109;
  MR_Word Var_110;
  MR_Word Var_113;
  MR_Word Var_115;
  MR_String Var_116;
  MR_Word Var_118;
  MR_Word Var_119;
  MR_Word Var_122;
  MR_Word Var_124;
  MR_String Var_125;

  parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_14, (MR_String) "predicate \140parse_tree.write_deps_file.construct_install_shadow_rules\'/13", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[22])), (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[21])), ModuleName_15, &IntFileName_25, STATE_VARIABLE_Cache_0_30, &STATE_VARIABLE_Cache_37_37);
  parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_14, (MR_String) "predicate \140parse_tree.write_deps_file.construct_install_shadow_rules\'/13", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[23])), (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[6])), ModuleName_15, &Int2FileName_26, STATE_VARIABLE_Cache_37_37, &STATE_VARIABLE_Cache_45_45);
  parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_14, (MR_String) "predicate \140parse_tree.write_deps_file.construct_install_shadow_rules\'/13", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[29])), (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[4])), ModuleName_15, &Int3FileName_27, STATE_VARIABLE_Cache_45_45, &STATE_VARIABLE_Cache_53_53);
  parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_14, (MR_String) "predicate \140parse_tree.write_deps_file.construct_install_shadow_rules\'/13", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[25])), (MR_Word) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_5[12])), ModuleName_15, &OptFileName_28, STATE_VARIABLE_Cache_53_53, &STATE_VARIABLE_Cache_61_61);
  parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_14, (MR_String) "predicate \140parse_tree.write_deps_file.construct_install_shadow_rules\'/13", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[20])), (MR_Word) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_5[21])), ModuleName_15, &TransOptFileName_29, STATE_VARIABLE_Cache_61_61, STATE_VARIABLE_Cache_31);
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (Date0FileName_17));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_80 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_74, 1) = ((MR_Box) ((MR_String) "int0_on_date0"));
    MR_hl_field(3, Var_74, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_74, 3) = ((MR_Box) (Int0FileName_16));
    MR_hl_field(3, Var_74, 4) = ((MR_Box) (Var_77));
    MR_hl_field(3, Var_74, 5) = ((MR_Box) (Var_79));
  }
  {
    Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_86, 0) = ((MR_Box) (DateFileName_18));
    MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_89 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_88, 0) = ((MR_Box) (Var_89));
    MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_83 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_83, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_83, 1) = ((MR_Box) ((MR_String) "int_on_date"));
    MR_hl_field(3, Var_83, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_83, 3) = ((MR_Box) (IntFileName_25));
    MR_hl_field(3, Var_83, 4) = ((MR_Box) (Var_86));
    MR_hl_field(3, Var_83, 5) = ((MR_Box) (Var_88));
  }
  Var_98 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
    MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_92, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_92, 1) = ((MR_Box) ((MR_String) "int2_on_date"));
    MR_hl_field(3, Var_92, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_92, 3) = ((MR_Box) (Int2FileName_26));
    MR_hl_field(3, Var_92, 4) = ((MR_Box) (Var_86));
    MR_hl_field(3, Var_92, 5) = ((MR_Box) (Var_97));
  }
  {
    Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_104, 0) = ((MR_Box) (Date3FileName_19));
    MR_hl_field(1, Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_107 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_106, 0) = ((MR_Box) (Var_107));
    MR_hl_field(1, Var_106, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_101 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_101, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_101, 1) = ((MR_Box) ((MR_String) "int3_on_date3"));
    MR_hl_field(3, Var_101, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_101, 3) = ((MR_Box) (Int3FileName_27));
    MR_hl_field(3, Var_101, 4) = ((MR_Box) (Var_104));
    MR_hl_field(3, Var_101, 5) = ((MR_Box) (Var_106));
  }
  {
    Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_113, 0) = ((MR_Box) (OptDateFileName_20));
    MR_hl_field(1, Var_113, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_116 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_115, 0) = ((MR_Box) (Var_116));
    MR_hl_field(1, Var_115, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_110 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_110, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_110, 1) = ((MR_Box) ((MR_String) "opt_on_opt_date"));
    MR_hl_field(3, Var_110, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_110, 3) = ((MR_Box) (OptFileName_28));
    MR_hl_field(3, Var_110, 4) = ((MR_Box) (Var_113));
    MR_hl_field(3, Var_110, 5) = ((MR_Box) (Var_115));
  }
  {
    Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_122, 0) = ((MR_Box) (TransOptDateFileName_21));
    MR_hl_field(1, Var_122, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_125 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_124, 0) = ((MR_Box) (Var_125));
    MR_hl_field(1, Var_124, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_119 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_119, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_119, 1) = ((MR_Box) ((MR_String) "trans_opt_on_trans_opt_date"));
    MR_hl_field(3, Var_119, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_119, 3) = ((MR_Box) (TransOptFileName_29));
    MR_hl_field(3, Var_119, 4) = ((MR_Box) (Var_122));
    MR_hl_field(3, Var_119, 5) = ((MR_Box) (Var_124));
  }
  {
    Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_118, 0) = ((MR_Box) (Var_119));
    MR_hl_field(1, Var_118, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_109, 0) = ((MR_Box) (Var_110));
    MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_118));
  }
  {
    Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_100, 0) = ((MR_Box) (Var_101));
    MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_109));
  }
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) (Var_100));
  }
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_91));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRulesInstallShadows_22 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_74));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_82));
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv10_LambdaHeadVar__2_70;

  succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__construct_foreign_import_rules__1012__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv10_LambdaHeadVar__2_70);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv10_LambdaHeadVar__2_70));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__construct_foreign_import_rules__1006__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_5(
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
parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_4(
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
parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_3(
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
parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_2(
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
parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_1(
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
parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0(
  MR_Word Globals_12,
  MR_Word AugCompUnit_13,
  MR_Word IntermodDeps_14,
  MR_Word SourceFileModuleName_15,
  MR_String ObjFileName_16,
  MR_String PicObjFileName_17,
  MR_Word * MmakeRulesForeignImports_18,
  MR_Word STATE_VARIABLE_Cache_0_51,
  MR_Word * STATE_VARIABLE_Cache_52)
{
  MR_bool succeeded;
  MR_Word ParseTreeModuleSrc_21 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_13, (MR_Integer) 0))));
  MR_Word AncestorIntSpecs_22 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_13, (MR_Integer) 1))));
  MR_Word DirectInt1Specs_23 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_13, (MR_Integer) 2))));
  MR_Word IndirectInt2Specs_24 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_13, (MR_Integer) 3))));
  MR_Word PlainOpts_25 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_13, (MR_Integer) 4))));
  MR_Word IntForOptSpecs_27 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_13, (MR_Integer) 6))));
  MR_Word ModuleName_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_21, (MR_Integer) 0))));
  MR_Word ForeignImportedModuleNamesSet_34;
  MR_Word ForeignImportedModuleNames_42;

  if ((IntermodDeps_14 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word FIMSpecs_36;
    MR_Word BackendLangs_37;
    MR_Word IsBackendFIM_38;
    MR_Word STATE_VARIABLE_FIMSpecs_55_55;
    MR_Word STATE_VARIABLE_FIMSpecs_57_57;
    MR_Word STATE_VARIABLE_FIMSpecs_59_59;
    MR_Word STATE_VARIABLE_FIMSpecs_61_61;
    MR_Word STATE_VARIABLE_FIMSpecs_63_63;
    MR_Word STATE_VARIABLE_FIMSpecs_65_65;
    MR_Word Var_68;
    MR_Box conv1_STATE_VARIABLE_FIMSpecs_57_57;
    MR_Box conv3_STATE_VARIABLE_FIMSpecs_59_59;
    MR_Box conv5_STATE_VARIABLE_FIMSpecs_61_61;
    MR_Box conv7_STATE_VARIABLE_FIMSpecs_63_63;
    MR_Box conv9_STATE_VARIABLE_FIMSpecs_65_65;

    parse_tree__get_dependencies__get_fim_specs_2_p_0(ParseTreeModuleSrc_21, &STATE_VARIABLE_FIMSpecs_55_55);
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[15]), AncestorIntSpecs_22, ((MR_Box) (STATE_VARIABLE_FIMSpecs_55_55)), &conv1_STATE_VARIABLE_FIMSpecs_57_57);
    STATE_VARIABLE_FIMSpecs_57_57 = ((MR_Word) (conv1_STATE_VARIABLE_FIMSpecs_57_57));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[16]), DirectInt1Specs_23, ((MR_Box) (STATE_VARIABLE_FIMSpecs_57_57)), &conv3_STATE_VARIABLE_FIMSpecs_59_59);
    STATE_VARIABLE_FIMSpecs_59_59 = ((MR_Word) (conv3_STATE_VARIABLE_FIMSpecs_59_59));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[17]), IndirectInt2Specs_24, ((MR_Box) (STATE_VARIABLE_FIMSpecs_59_59)), &conv5_STATE_VARIABLE_FIMSpecs_61_61);
    STATE_VARIABLE_FIMSpecs_61_61 = ((MR_Word) (conv5_STATE_VARIABLE_FIMSpecs_61_61));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[18]), PlainOpts_25, ((MR_Box) (STATE_VARIABLE_FIMSpecs_61_61)), &conv7_STATE_VARIABLE_FIMSpecs_63_63);
    STATE_VARIABLE_FIMSpecs_63_63 = ((MR_Word) (conv7_STATE_VARIABLE_FIMSpecs_63_63));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[19]), IntForOptSpecs_27, ((MR_Box) (STATE_VARIABLE_FIMSpecs_63_63)), &conv9_STATE_VARIABLE_FIMSpecs_65_65);
    STATE_VARIABLE_FIMSpecs_65_65 = ((MR_Word) (conv9_STATE_VARIABLE_FIMSpecs_65_65));
    libs__globals__get_backend_foreign_languages_2_p_0(Globals_12, &BackendLangs_37);
    {
      IsBackendFIM_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, IsBackendFIM_38, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[3]));
      MR_hl_field(0, IsBackendFIM_38, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_6));
      MR_hl_field(0, IsBackendFIM_38, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, IsBackendFIM_38, 3) = ((MR_Box) (BackendLangs_37));
    }
    mercury__set__filter_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), IsBackendFIM_38, STATE_VARIABLE_FIMSpecs_65_65, &FIMSpecs_36);
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_68, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[6]));
      MR_hl_field(0, Var_68, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_7));
      MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_68, 3) = ((MR_Box) (SourceFileModuleName_15));
    }
    mercury__set__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_68, FIMSpecs_36, &ForeignImportedModuleNamesSet_34);
  }
  else
    ForeignImportedModuleNamesSet_34 = ((MR_Word) ((MR_hl_field(1, IntermodDeps_14, (MR_Integer) 3))));
  ForeignImportedModuleNames_42 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ForeignImportedModuleNamesSet_34);
  if ((ForeignImportedModuleNames_42 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MmakeRulesForeignImports_18 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Cache_52 = STATE_VARIABLE_Cache_0_51;
  }
  else
  {
    MR_Word Target_45;

    libs__globals__get_target_2_p_0(Globals_12, &Target_45);
    switch (Target_45) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ForeignImportTargets_46;
          MR_Word MmakeRuleForeignImports_49;
          MR_Word Var_72;

          {
            Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_72, 0) = ((MR_Box) (PicObjFileName_17));
            MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            ForeignImportTargets_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ForeignImportTargets_46, 0) = ((MR_Box) (ObjFileName_16));
            MR_hl_field(0, ForeignImportTargets_46, 1) = ((MR_Box) (Var_72));
          }
          parse_tree__write_deps_file__gather_foreign_import_deps_10_p_0(Globals_12, (MR_Word) (((MR_Box) ((MR_String) ".mh"))), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[24])), ForeignImportTargets_46, ForeignImportedModuleNames_42, &MmakeRuleForeignImports_49, STATE_VARIABLE_Cache_0_51, STATE_VARIABLE_Cache_52);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MmakeRulesForeignImports_18 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (MmakeRuleForeignImports_49));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *MmakeRulesForeignImports_18 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Cache_52 = STATE_VARIABLE_Cache_0_51;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ClassFileName_50;
          MR_Word STATE_VARIABLE_Cache_82_82;
          MR_Word ForeignImportTargets_96;
          MR_Word MmakeRuleForeignImports_99;

          parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_deps_file.construct_foreign_import_rules\'/11", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[30])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[28])), ModuleName_30, &ClassFileName_50, STATE_VARIABLE_Cache_0_51, &STATE_VARIABLE_Cache_82_82);
          {
            ForeignImportTargets_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ForeignImportTargets_96, 0) = ((MR_Box) (ClassFileName_50));
            MR_hl_field(0, ForeignImportTargets_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__write_deps_file__gather_foreign_import_deps_10_p_0(Globals_12, (MR_Word) (((MR_Box) ((MR_String) ".java"))), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[26])), ForeignImportTargets_96, ForeignImportedModuleNames_42, &MmakeRuleForeignImports_99, STATE_VARIABLE_Cache_82_82, STATE_VARIABLE_Cache_52);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MmakeRulesForeignImports_18 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (MmakeRuleForeignImports_99));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__gather_foreign_import_deps_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_String conv1_FileName_16;
  MR_Word conv0_STATE_VARIABLE_Cache_23;

  parse_tree__write_deps_file__make_module_file_name_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_16, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_23);
  *wrapper_arg_2 = ((MR_Box) (conv1_FileName_16));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_23));
}

static void MR_CALL 
parse_tree__write_deps_file__gather_foreign_import_deps_10_p_0(
  MR_Word Globals_11,
  MR_Word ForeignImportOtherExt_12,
  MR_Word ForeignImportNewExt_13,
  MR_Word ForeignImportTargets_14,
  MR_Word ForeignImportedModuleNames_15,
  MR_Word * MmakeRule_16,
  MR_Word STATE_VARIABLE_Cache_0_22,
  MR_Word * STATE_VARIABLE_Cache_23)
{
  MR_Word ForeignImportedFileNames_19;
  MR_String ForeignImportExtStr_20;
  MR_String RuleName_21;
  MR_Word Var_26;
  MR_String Var_31;
  MR_Word Var_35;
  MR_Box conv3_STATE_VARIABLE_Cache_23;
  MR_Box conv2_STATE_VARIABLE_IO_25;

  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (ForeignImportOtherExt_12));
  }
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (parse_tree__write_deps_file__gather_foreign_import_deps_10_p_0_1));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (Globals_11));
    MR_hl_field(0, Var_35, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_deps_file.make_module_file_names_with_suffix\'/9"));
    MR_hl_field(0, Var_35, 5) = ((MR_Box) (Var_26));
    MR_hl_field(0, Var_35, 6) = ((MR_Box) (ForeignImportNewExt_13));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_35, ForeignImportedModuleNames_15, &ForeignImportedFileNames_19, ((MR_Box) (STATE_VARIABLE_Cache_0_22)), &conv3_STATE_VARIABLE_Cache_23, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_25);
  *STATE_VARIABLE_Cache_23 = ((MR_Word) (conv3_STATE_VARIABLE_Cache_23));
  ForeignImportExtStr_20 = parse_tree__file_names__extension_to_string_3_f_0(Globals_11, Var_26, ForeignImportNewExt_13);
  Var_31 = mercury__string__remove_prefix_if_present_2_f_0((MR_String) ".", ForeignImportExtStr_20);
  RuleName_21 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_deps_for_", Var_31);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRule_16 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, base, 1) = ((MR_Box) (RuleName_21));
    MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, base, 3) = ((MR_Box) (ForeignImportTargets_14));
    MR_hl_field(3, base, 4) = ((MR_Box) (ForeignImportedFileNames_19));
    MR_hl_field(3, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__construct_self_and_parent_date_date0_rules_12_p_0(
  MR_Word Globals_13,
  MR_String SourceFileName_14,
  MR_String Date0FileName_15,
  MR_String DateFileName_16,
  MR_Word Ancestors_17,
  MR_Word LongDeps_18,
  MR_Word ShortDeps_19,
  MR_Word * MmakeRulesParentDates_20,
  MR_Word STATE_VARIABLE_Cache_0_30,
  MR_Word * STATE_VARIABLE_Cache_31)
{
  MR_Word AncestorDateFileNames_23;
  MR_Word AncestorInt0FileNames_24;
  MR_Word LongDepInt3FileNames_25;
  MR_Word ShortDepInt3FileNames_26;
  MR_Word MmakeRuleParentDates_27;
  MR_Word AncestorDate0FileNames_28;
  MR_Word MmakeRuleParentDate0s_29;
  MR_Word Var_36;
  MR_Word STATE_VARIABLE_Cache_37_37;
  MR_Word Var_44;
  MR_Word STATE_VARIABLE_Cache_45_45;
  MR_Word Var_52;
  MR_Word STATE_VARIABLE_Cache_53_53;
  MR_Word Var_60;
  MR_Word STATE_VARIABLE_Cache_61_61;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_71;
  MR_Word Var_72;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_84;
  MR_Word Var_89;
  MR_Word Var_97;
  MR_Word Var_98;
  MR_Word Var_100;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word Var_104;
  MR_Word Var_106;
  MR_Word Var_107;
  MR_Word Var_109;
  MR_Word Var_112;

  Var_36 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_17);
  parse_tree__write_deps_file__make_module_file_names_with_suffix_9_p_0(Globals_13, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[14])), (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[15])), Var_36, &AncestorDateFileNames_23, STATE_VARIABLE_Cache_0_30, &STATE_VARIABLE_Cache_37_37);
  Var_44 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_17);
  parse_tree__write_deps_file__make_module_file_names_with_suffix_9_p_0(Globals_13, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[11])), (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[12])), Var_44, &AncestorInt0FileNames_24, STATE_VARIABLE_Cache_37_37, &STATE_VARIABLE_Cache_45_45);
  Var_52 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), LongDeps_18);
  parse_tree__write_deps_file__make_module_file_names_with_suffix_9_p_0(Globals_13, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[29])), (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[4])), Var_52, &LongDepInt3FileNames_25, STATE_VARIABLE_Cache_45_45, &STATE_VARIABLE_Cache_53_53);
  Var_60 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ShortDeps_19);
  parse_tree__write_deps_file__make_module_file_names_with_suffix_9_p_0(Globals_13, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[29])), (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[4])), Var_60, &ShortDepInt3FileNames_26, STATE_VARIABLE_Cache_53_53, &STATE_VARIABLE_Cache_61_61);
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (Date0FileName_15));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) (AncestorDateFileNames_23));
  }
  {
    Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_71, 0) = ((MR_Box) (DateFileName_16));
    MR_hl_field(0, Var_71, 1) = ((MR_Box) (Var_72));
  }
  {
    Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_69, 0) = ((MR_Box) ((MR_String) ""));
    MR_hl_field(0, Var_69, 1) = ((MR_Box) (Var_71));
  }
  {
    Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_68, 0) = ((MR_Box) (Var_69));
    MR_hl_field(0, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_76 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(SourceFileName_14);
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_79 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "ancestor int0", AncestorInt0FileNames_24);
  Var_82 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "long dep int3s", LongDepInt3FileNames_25);
  Var_84 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "short dep int3s", ShortDepInt3FileNames_26);
  Var_81 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_82, Var_84);
  Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_79, Var_81);
  Var_74 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_75, Var_78);
  {
    MmakeRuleParentDates_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleParentDates_27, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, MmakeRuleParentDates_27, 1) = ((MR_Box) ((MR_String) "self_and_parent_date_deps"));
    MR_hl_field(3, MmakeRuleParentDates_27, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleParentDates_27, 3) = ((MR_Box) (Var_68));
    MR_hl_field(3, MmakeRuleParentDates_27, 4) = ((MR_Box) (Var_74));
    MR_hl_field(3, MmakeRuleParentDates_27, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_89 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_17);
  parse_tree__write_deps_file__make_module_file_names_with_suffix_9_p_0(Globals_13, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[16])), (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[17])), Var_89, &AncestorDate0FileNames_28, STATE_VARIABLE_Cache_61_61, STATE_VARIABLE_Cache_31);
  {
    Var_100 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_100, 0) = ((MR_Box) (Date0FileName_15));
    MR_hl_field(0, Var_100, 1) = ((MR_Box) (AncestorDate0FileNames_28));
  }
  {
    Var_98 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_98, 0) = ((MR_Box) ((MR_String) "date0s"));
    MR_hl_field(0, Var_98, 1) = ((MR_Box) (Var_100));
  }
  {
    Var_97 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_97, 0) = ((MR_Box) (Var_98));
    MR_hl_field(0, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_104 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(SourceFileName_14);
  {
    Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_103, 0) = ((MR_Box) (Var_104));
    MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_107 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "long dep int3s", LongDepInt3FileNames_25);
  Var_109 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "short dep int3s", ShortDepInt3FileNames_26);
  Var_106 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_107, Var_109);
  Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_103, Var_106);
  {
    MmakeRuleParentDate0s_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleParentDate0s_29, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, MmakeRuleParentDate0s_29, 1) = ((MR_Box) ((MR_String) "self_and_parent_date0_deps"));
    MR_hl_field(3, MmakeRuleParentDate0s_29, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleParentDate0s_29, 3) = ((MR_Box) (Var_97));
    MR_hl_field(3, MmakeRuleParentDate0s_29, 4) = ((MR_Box) (Var_102));
    MR_hl_field(3, MmakeRuleParentDate0s_29, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_112, 0) = ((MR_Box) (MmakeRuleParentDate0s_29));
    MR_hl_field(1, Var_112, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRulesParentDates_20 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (MmakeRuleParentDates_27));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_112));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__construct_module_dep_fragment_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_String CFileName_11,
  MR_Word * MmakeFragmentModuleDep_12,
  MR_Word STATE_VARIABLE_Cache_0_17,
  MR_Word * STATE_VARIABLE_Cache_18)
{
  MR_String JavaFileName_15;
  MR_String ModuleDepFileName_16;
  MR_Word STATE_VARIABLE_Cache_24_24;
  MR_Word Var_30;
  MR_Word Var_34;
  MR_Word Var_38;
  MR_Word Var_41;
  MR_Word Var_44;
  MR_Word Var_47;

  parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.construct_module_dep_fragment\'/8", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[27])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[26])), ModuleName_10, &JavaFileName_15, STATE_VARIABLE_Cache_0_17, &STATE_VARIABLE_Cache_24_24);
  Var_34 = parse_tree__file_names__make_module_dep_file_extension_0_f_0();
  {
    Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_30, 0) = ((MR_Box) (Var_34));
  }
  parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.construct_module_dep_fragment\'/8", Var_30, (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[27])), ModuleName_10, &ModuleDepFileName_16, STATE_VARIABLE_Cache_24_24, STATE_VARIABLE_Cache_18);
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (JavaFileName_15));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_38 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_38, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_38, 1) = ((MR_Box) ((MR_String) "module_dep_on_java"));
    MR_hl_field(3, Var_38, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_38, 3) = ((MR_Box) (ModuleDepFileName_16));
    MR_hl_field(3, Var_38, 4) = ((MR_Box) (Var_41));
    MR_hl_field(3, Var_38, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (CFileName_11));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_44, 1) = ((MR_Box) ((MR_String) "module_dep_on_c"));
    MR_hl_field(3, Var_44, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_44, 3) = ((MR_Box) (ModuleDepFileName_16));
    MR_hl_field(3, Var_44, 4) = ((MR_Box) (Var_47));
    MR_hl_field(3, Var_44, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *MmakeFragmentModuleDep_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[28]));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_38));
    MR_hl_field(1, base, 2) = ((MR_Box) (Var_44));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__construct_c_header_rules_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_String conv1_FileName_16;
  MR_Word conv0_STATE_VARIABLE_Cache_23;

  parse_tree__write_deps_file__make_module_file_name_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_16, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_23);
  *wrapper_arg_2 = ((MR_Box) (conv1_FileName_16));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_23));
}

static void MR_CALL 
parse_tree__write_deps_file__construct_c_header_rules_11_p_0(
  MR_Word Globals_12,
  MR_Word ModuleName_13,
  MR_Word AllDeps_14,
  MR_String CFileName_15,
  MR_String ObjFileName_16,
  MR_String PicObjFileName_17,
  MR_Word * MmakeRulesCHeaders_18,
  MR_Word STATE_VARIABLE_Cache_0_30,
  MR_Word * STATE_VARIABLE_Cache_31)
{
  MR_bool succeeded;
  MR_Word HighLevelCode_21;
  MR_Word CompilationTarget_22;
  MR_Word MmakeRulesObjOnMihs_26;
  MR_String MhHeaderFileName_27;
  MR_String MihHeaderFileName_28;
  MR_Word MmakeRuleMhMihOnC_29;
  MR_Word STATE_VARIABLE_Cache_40_40;
  MR_Word STATE_VARIABLE_Cache_52_52;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_70;
  MR_Word Var_73;

  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 309, &HighLevelCode_21);
  libs__globals__get_target_2_p_0(Globals_12, &CompilationTarget_22);
  succeeded = (HighLevelCode_21 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (CompilationTarget_22 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Targets_23;
    MR_Word AllDepsFileNames_24;
    MR_Word MmakeRuleObjOnMihs_25;
    MR_Word Var_35;
    MR_Word Var_39;
    MR_Word Var_77;
    MR_Box conv3_STATE_VARIABLE_Cache_40_40;
    MR_Box conv2_STATE_VARIABLE_IO_41_41;

    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (ObjFileName_16));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Targets_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Targets_23, 0) = ((MR_Box) (PicObjFileName_17));
      MR_hl_field(0, Targets_23, 1) = ((MR_Box) (Var_35));
    }
    Var_39 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllDeps_14);
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_77, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
      MR_hl_field(0, Var_77, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_c_header_rules_11_p_0_1));
      MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_77, 3) = ((MR_Box) (Globals_12));
      MR_hl_field(0, Var_77, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_deps_file.make_module_file_names_with_suffix\'/9"));
      MR_hl_field(0, Var_77, 5) = ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[26])));
      MR_hl_field(0, Var_77, 6) = ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[25])));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_77, Var_39, &AllDepsFileNames_24, ((MR_Box) (STATE_VARIABLE_Cache_0_30)), &conv3_STATE_VARIABLE_Cache_40_40, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_41_41);
    STATE_VARIABLE_Cache_40_40 = ((MR_Word) (conv3_STATE_VARIABLE_Cache_40_40));
    {
      MmakeRuleObjOnMihs_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleObjOnMihs_25, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, MmakeRuleObjOnMihs_25, 1) = ((MR_Box) ((MR_String) "objs_on_mihs"));
      MR_hl_field(3, MmakeRuleObjOnMihs_25, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, MmakeRuleObjOnMihs_25, 3) = ((MR_Box) (Targets_23));
      MR_hl_field(3, MmakeRuleObjOnMihs_25, 4) = ((MR_Box) (AllDepsFileNames_24));
      MR_hl_field(3, MmakeRuleObjOnMihs_25, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRulesObjOnMihs_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MmakeRulesObjOnMihs_26, 0) = ((MR_Box) (MmakeRuleObjOnMihs_25));
      MR_hl_field(1, MmakeRulesObjOnMihs_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MmakeRulesObjOnMihs_26 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Cache_40_40 = STATE_VARIABLE_Cache_0_30;
  }
  parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_deps_file.construct_c_header_rules\'/11", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[24])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[24])), ModuleName_13, &MhHeaderFileName_27, STATE_VARIABLE_Cache_40_40, &STATE_VARIABLE_Cache_52_52);
  parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_deps_file.construct_c_header_rules\'/11", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[26])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[25])), ModuleName_13, &MihHeaderFileName_28, STATE_VARIABLE_Cache_52_52, STATE_VARIABLE_Cache_31);
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (MihHeaderFileName_28));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_67 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_67, 0) = ((MR_Box) (MhHeaderFileName_27));
    MR_hl_field(0, Var_67, 1) = ((MR_Box) (Var_68));
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) (CFileName_15));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRuleMhMihOnC_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleMhMihOnC_29, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, MmakeRuleMhMihOnC_29, 1) = ((MR_Box) ((MR_String) "mh_and_mih_on_c"));
    MR_hl_field(3, MmakeRuleMhMihOnC_29, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleMhMihOnC_29, 3) = ((MR_Box) (Var_67));
    MR_hl_field(3, MmakeRuleMhMihOnC_29, 4) = ((MR_Box) (Var_70));
    MR_hl_field(3, MmakeRuleMhMihOnC_29, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (MmakeRuleMhMihOnC_29));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  *MmakeRulesCHeaders_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), MmakeRulesObjOnMihs_26, Var_73);
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__construct_intermod_rules_14_p_0_1(
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
parse_tree__write_deps_file__construct_intermod_rules_14_p_0(
  MR_Word Globals_15,
  MR_Word ModuleName_16,
  MR_Word LongDeps_17,
  MR_Word AllDeps_18,
  MR_String ErrFileName_19,
  MR_String TransOptDateFileName_20,
  MR_String CDateFileName_21,
  MR_String JavaDateFileName_22,
  MR_String ObjFileName_23,
  MR_Word * MmakeRulesIntermod_24,
  MR_Word STATE_VARIABLE_Cache_0_49,
  MR_Word * STATE_VARIABLE_Cache_50)
{
  MR_bool succeeded;
  MR_Word UseOptFiles_27;
  MR_Word Intermod_28;
  MR_Word IntermodDirs_29;
  MR_Word MmakeRulesMhDeps_32;
  MR_Word STATE_VARIABLE_Cache_59_59;

  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 501, &UseOptFiles_27);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 499, &Intermod_28);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_15, (MR_Integer) 687, &IntermodDirs_29);
  switch (Intermod_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MmakeRulesMhDeps_32 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Cache_59_59 = STATE_VARIABLE_Cache_0_49;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word AllDepsFileNames_30;
        MR_Word MmakeRuleMhDeps_31;
        MR_Word Var_58;

        Var_58 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllDeps_18);
        parse_tree__write_deps_file__make_module_file_names_with_suffix_9_p_0(Globals_15, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[24])), (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_1[24])), Var_58, &AllDepsFileNames_30, STATE_VARIABLE_Cache_0_49, &STATE_VARIABLE_Cache_59_59);
        {
          MmakeRuleMhDeps_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, MmakeRuleMhDeps_31, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, MmakeRuleMhDeps_31, 1) = ((MR_Box) ((MR_String) "machine_dependent_header_deps"));
          MR_hl_field(3, MmakeRuleMhDeps_31, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(3, MmakeRuleMhDeps_31, 3) = ((MR_Box) (ObjFileName_23));
          MR_hl_field(3, MmakeRuleMhDeps_31, 4) = ((MR_Box) (AllDepsFileNames_30));
          MR_hl_field(3, MmakeRuleMhDeps_31, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          MmakeRulesMhDeps_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MmakeRulesMhDeps_32, 0) = ((MR_Box) (MmakeRuleMhDeps_31));
          MR_hl_field(1, MmakeRulesMhDeps_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
  succeeded = (Intermod_28 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (UseOptFiles_27 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word Targets_33;
    MR_Word TransOpt_34;
    MR_Word UseTransOpt_35;
    MR_Word BuildOptFiles_36;
    MR_Word BaseDeps_37;
    MR_Word OptDeps_38;
    MR_Word MaybeTransOptDeps1_40;
    MR_Word OptInt0Deps_41;
    MR_Word OptDepsFileNames_42;
    MR_Word OptInt0DepsFileNames_43;
    MR_Word MmakeRuleDateOptInt0Deps_44;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_74;
    MR_Word STATE_VARIABLE_Cache_75_75;
    MR_Word Var_82;
    MR_Word STATE_VARIABLE_Cache_86_86;
    MR_Word Var_93;
    MR_Word STATE_VARIABLE_Cache_94_94;
    MR_Word Var_101;

    {
      Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_70, 0) = ((MR_Box) (JavaDateFileName_22));
      MR_hl_field(1, Var_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_69, 0) = ((MR_Box) (CDateFileName_21));
      MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_70));
    }
    {
      Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_68, 0) = ((MR_Box) (ErrFileName_19));
      MR_hl_field(1, Var_68, 1) = ((MR_Box) (Var_69));
    }
    {
      Targets_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Targets_33, 0) = ((MR_Box) (TransOptDateFileName_20));
      MR_hl_field(0, Targets_33, 1) = ((MR_Box) (Var_68));
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 503, &TransOpt_34);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 502, &UseTransOpt_35);
    mercury__bool__not_2_p_0(UseTransOpt_35, &BuildOptFiles_36);
    Var_74 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), LongDeps_17);
    {
      BaseDeps_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, BaseDeps_37, 0) = ((MR_Box) (ModuleName_16));
      MR_hl_field(1, BaseDeps_37, 1) = ((MR_Box) (Var_74));
    }
    succeeded = (TransOpt_34 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (UseTransOpt_35 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word TransOptDeps1_39;

      parse_tree__write_deps_file__get_both_opt_deps_10_p_0(Globals_15, BuildOptFiles_36, IntermodDirs_29, BaseDeps_37, &OptDeps_38, &TransOptDeps1_39, STATE_VARIABLE_Cache_59_59, &STATE_VARIABLE_Cache_75_75);
      {
        MaybeTransOptDeps1_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeTransOptDeps1_40, 0) = ((MR_Box) (TransOptDeps1_39));
      }
    }
    else
    {
      parse_tree__write_deps_file__get_opt_deps_9_p_0(Globals_15, BuildOptFiles_36, IntermodDirs_29, (MR_Word) (((MR_Box) ((MR_String) ".opt"))), (MR_Word) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_5[12])), BaseDeps_37, &OptDeps_38);
      MaybeTransOptDeps1_40 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Cache_75_75 = STATE_VARIABLE_Cache_59_59;
    }
    Var_82 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[14]), OptDeps_38);
    OptInt0Deps_41 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_82);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_9_p_0(Globals_15, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[25])), (MR_Word) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_5[12])), OptDeps_38, &OptDepsFileNames_42, STATE_VARIABLE_Cache_75_75, &STATE_VARIABLE_Cache_86_86);
    Var_93 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptInt0Deps_41);
    parse_tree__write_deps_file__make_module_file_names_with_suffix_9_p_0(Globals_15, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[11])), (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[12])), Var_93, &OptInt0DepsFileNames_43, STATE_VARIABLE_Cache_86_86, &STATE_VARIABLE_Cache_94_94);
    Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptDepsFileNames_42, OptInt0DepsFileNames_43);
    {
      MmakeRuleDateOptInt0Deps_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_44, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_44, 1) = ((MR_Box) ((MR_String) "dates_on_opts_and_int0s"));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_44, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_44, 3) = ((MR_Box) (Targets_33));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_44, 4) = ((MR_Box) (Var_101));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_44, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    if ((MaybeTransOptDeps1_40 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_119;

      {
        Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_119, 0) = ((MR_Box) (MmakeRuleDateOptInt0Deps_44));
        MR_hl_field(1, Var_119, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *MmakeRulesIntermod_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), MmakeRulesMhDeps_32, Var_119);
      *STATE_VARIABLE_Cache_50 = STATE_VARIABLE_Cache_94_94;
    }
    else
    {
      MR_Word TransOptDeps2_45 = ((MR_Word) ((MR_hl_field(1, MaybeTransOptDeps1_40, (MR_Integer) 0))));
      MR_Word ErrDateTargets_46;
      MR_Word TransOptDepsOptFileNames_47;
      MR_Word MmakeRuleTransOptOpts_48;
      MR_Word Var_116;
      MR_Word Var_117;

      {
        ErrDateTargets_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ErrDateTargets_46, 0) = ((MR_Box) (ErrFileName_19));
        MR_hl_field(0, ErrDateTargets_46, 1) = ((MR_Box) (Var_69));
      }
      parse_tree__write_deps_file__make_module_file_names_with_suffix_9_p_0(Globals_15, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[20])), (MR_Word) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_5[21])), TransOptDeps2_45, &TransOptDepsOptFileNames_47, STATE_VARIABLE_Cache_94_94, STATE_VARIABLE_Cache_50);
      {
        MmakeRuleTransOptOpts_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, MmakeRuleTransOptOpts_48, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, MmakeRuleTransOptOpts_48, 1) = ((MR_Box) ((MR_String) "dates_on_trans_opts"));
        MR_hl_field(3, MmakeRuleTransOptOpts_48, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(3, MmakeRuleTransOptOpts_48, 3) = ((MR_Box) (ErrDateTargets_46));
        MR_hl_field(3, MmakeRuleTransOptOpts_48, 4) = ((MR_Box) (TransOptDepsOptFileNames_47));
        MR_hl_field(3, MmakeRuleTransOptOpts_48, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_117, 0) = ((MR_Box) (MmakeRuleTransOptOpts_48));
        MR_hl_field(1, Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_116, 0) = ((MR_Box) (MmakeRuleDateOptInt0Deps_44));
        MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_117));
      }
      *MmakeRulesIntermod_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), MmakeRulesMhDeps_32, Var_116);
    }
  }
  else
  {
    *MmakeRulesIntermod_24 = MmakeRulesMhDeps_32;
    *STATE_VARIABLE_Cache_50 = STATE_VARIABLE_Cache_59_59;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__get_both_opt_deps_10_p_0(
  MR_Word Globals_1,
  MR_Word BuildOptFiles_2,
  MR_Word IntermodDirs_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_Cache_0_7,
  MR_Word * STATE_VARIABLE_Cache_8)
{
  if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Cache_8 = STATE_VARIABLE_Cache_0_7;
  }
  else
  {
    MR_Word Dep_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word Deps_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_OptDeps_47_47;
    MR_Word STATE_VARIABLE_TransOptDeps_48_48;
    MR_Word STATE_VARIABLE_Cache_49_49;

    parse_tree__write_deps_file__get_both_opt_deps_10_p_0(Globals_1, BuildOptFiles_2, IntermodDirs_3, Deps_24, &STATE_VARIABLE_OptDeps_47_47, &STATE_VARIABLE_TransOptDeps_48_48, STATE_VARIABLE_Cache_0_7, &STATE_VARIABLE_Cache_49_49);
    switch (BuildOptFiles_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String OptName_33;
          MR_Word MaybeOptDir_34;
          MR_String TransOptName_37;
          MR_Word MaybeTransOptDir_38;
          MR_Word STATE_VARIABLE_Cache_57_57;

          parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_both_opt_deps\'/10", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[25])), (MR_Word) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_5[12])), Dep_23, &OptName_33, STATE_VARIABLE_Cache_49_49, &STATE_VARIABLE_Cache_57_57);
          parse_tree__find_module__search_for_file_returning_dir_5_p_0(IntermodDirs_3, OptName_33, &MaybeOptDir_34);
          if (((MR_tag((MR_Word) MaybeOptDir_34)) == (MR_Integer) 1))
            *HeadVar__5_5 = STATE_VARIABLE_OptDeps_47_47;
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Dep_23));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_47_47));
            }
          parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_both_opt_deps\'/10", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[20])), (MR_Word) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_5[21])), Dep_23, &TransOptName_37, STATE_VARIABLE_Cache_57_57, STATE_VARIABLE_Cache_8);
          parse_tree__find_module__search_for_file_returning_dir_5_p_0(IntermodDirs_3, TransOptName_37, &MaybeTransOptDir_38);
          if (((MR_tag((MR_Word) MaybeTransOptDir_38)) == (MR_Integer) 1))
            *HeadVar__6_6 = STATE_VARIABLE_TransOptDeps_48_48;
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Dep_23));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TransOptDeps_48_48));
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeFileName_29;

          parse_tree__find_module__search_for_module_source_5_p_0(IntermodDirs_3, Dep_23, &MaybeFileName_29);
          if (((MR_tag((MR_Word) MaybeFileName_29)) == (MR_Integer) 1))
          {
            MR_String OptName_72;
            MR_Word MaybeOptDir_73;
            MR_String TransOptName_74;
            MR_Word MaybeTransOptDir_75;
            MR_Word STATE_VARIABLE_Cache_57_79;

            parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_both_opt_deps\'/10", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[25])), (MR_Word) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_5[12])), Dep_23, &OptName_72, STATE_VARIABLE_Cache_49_49, &STATE_VARIABLE_Cache_57_79);
            parse_tree__find_module__search_for_file_returning_dir_5_p_0(IntermodDirs_3, OptName_72, &MaybeOptDir_73);
            if (((MR_tag((MR_Word) MaybeOptDir_73)) == (MR_Integer) 1))
              *HeadVar__5_5 = STATE_VARIABLE_OptDeps_47_47;
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Dep_23));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_47_47));
              }
            parse_tree__write_deps_file__make_module_file_name_10_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_both_opt_deps\'/10", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[20])), (MR_Word) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_5[21])), Dep_23, &TransOptName_74, STATE_VARIABLE_Cache_57_79, STATE_VARIABLE_Cache_8);
            parse_tree__find_module__search_for_file_returning_dir_5_p_0(IntermodDirs_3, TransOptName_74, &MaybeTransOptDir_75);
            if (((MR_tag((MR_Word) MaybeTransOptDir_75)) == (MR_Integer) 1))
              *HeadVar__6_6 = STATE_VARIABLE_TransOptDeps_48_48;
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__6_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Dep_23));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TransOptDeps_48_48));
              }
          }
          else
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__5_5 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Dep_23));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_47_47));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Dep_23));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_TransOptDeps_48_48));
            }
            *STATE_VARIABLE_Cache_8 = STATE_VARIABLE_Cache_49_49;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_name_10_p_0(
  MR_Word Globals_11,
  MR_String From_12,
  MR_Word Ext_13,
  MR_Word NewExt_14,
  MR_Word ModuleName_15,
  MR_String * FileName_16,
  MR_Word STATE_VARIABLE_Cache_0_22,
  MR_Word * STATE_VARIABLE_Cache_23)
{
  MR_bool succeeded;

  if ((Ext_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_11, From_12, (MR_Integer) 1, Ext_13, NewExt_14, ModuleName_15, FileName_16);
    *STATE_VARIABLE_Cache_23 = STATE_VARIABLE_Cache_0_22;
  }
  else
  {
    MR_Word OtherExt_19 = ((MR_Word) ((MR_hl_field(1, Ext_13, (MR_Integer) 0))));
    MR_Word ModuleNameExt_20;
    MR_String FileName0_21;
    MR_Box conv0_FileName0_21;

    {
      ModuleNameExt_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ModuleNameExt_20, 0) = ((MR_Box) (ModuleName_15));
      MR_hl_field(0, ModuleNameExt_20, 1) = ((MR_Box) (OtherExt_19));
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_module_name_and_ext_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), STATE_VARIABLE_Cache_0_22, ((MR_Box) (ModuleNameExt_20)), &conv0_FileName0_21);
    if (succeeded)
    {
      FileName0_21 = ((MR_String) (conv0_FileName0_21));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *FileName_16 = FileName0_21;
      *STATE_VARIABLE_Cache_23 = STATE_VARIABLE_Cache_0_22;
    }
    else
    {
      parse_tree__file_names__module_name_to_file_name_9_p_0(Globals_11, From_12, (MR_Integer) 1, Ext_13, NewExt_14, ModuleName_15, FileName_16);
      mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_module_name_and_ext_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ModuleNameExt_20)), ((MR_Box) (*FileName_16)), STATE_VARIABLE_Cache_0_22, STATE_VARIABLE_Cache_23);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_names_with_suffix_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_String conv1_FileName_16;
  MR_Word conv0_STATE_VARIABLE_Cache_23;

  parse_tree__write_deps_file__make_module_file_name_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_16, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_23);
  *wrapper_arg_2 = ((MR_Box) (conv1_FileName_16));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_23));
}

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_names_with_suffix_9_p_0(
  MR_Word Globals_10,
  MR_Word Ext_11,
  MR_Word NewExt_12,
  MR_Word Modules_13,
  MR_Word * FileNames_14,
  MR_Word STATE_VARIABLE_Cache_0_17,
  MR_Word * STATE_VARIABLE_Cache_18)
{
  MR_Word Var_21;
  MR_Box conv3_STATE_VARIABLE_Cache_18;
  MR_Box conv2_STATE_VARIABLE_IO_20;

  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (parse_tree__write_deps_file__make_module_file_names_with_suffix_9_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (Globals_10));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_deps_file.make_module_file_names_with_suffix\'/9"));
    MR_hl_field(0, Var_21, 5) = ((MR_Box) (Ext_11));
    MR_hl_field(0, Var_21, 6) = ((MR_Box) (NewExt_12));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, Modules_13, FileNames_14, ((MR_Box) (STATE_VARIABLE_Cache_0_17)), &conv3_STATE_VARIABLE_Cache_18, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_20);
  *STATE_VARIABLE_Cache_18 = ((MR_Word) (conv3_STATE_VARIABLE_Cache_18));
}

void MR_CALL 
parse_tree__write_deps_file__get_opt_deps_9_p_0(
  MR_Word Globals_1,
  MR_Word BuildOptFiles_2,
  MR_Word IntermodDirs_3,
  MR_Word OtherExt_4,
  MR_Word NewExt_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7)
{
  if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Dep_23 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
    MR_Word Deps_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_OptDeps_38_38;

    parse_tree__write_deps_file__get_opt_deps_9_p_0(Globals_1, BuildOptFiles_2, IntermodDirs_3, OtherExt_4, NewExt_5, Deps_24, &STATE_VARIABLE_OptDeps_38_38);
    switch (BuildOptFiles_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String OptName_31;
          MR_Word MaybeOptDir_32;
          MR_Word Var_43;

          {
            Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_43, 0) = ((MR_Box) (OtherExt_4));
          }
          parse_tree__file_names__module_name_to_search_file_name_8_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_opt_deps\'/9", Var_43, NewExt_5, Dep_23, &OptName_31);
          parse_tree__find_module__search_for_file_5_p_0(IntermodDirs_3, OptName_31, &MaybeOptDir_32);
          if (((MR_tag((MR_Word) MaybeOptDir_32)) == (MR_Integer) 1))
            *HeadVar__7_7 = STATE_VARIABLE_OptDeps_38_38;
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__7_7 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Dep_23));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_38_38));
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Result1_27;

          parse_tree__find_module__search_for_module_source_5_p_0(IntermodDirs_3, Dep_23, &Result1_27);
          if (((MR_tag((MR_Word) Result1_27)) == (MR_Integer) 1))
          {
            MR_String OptName_45;
            MR_Word MaybeOptDir_46;
            MR_Word Var_48;

            {
              Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_48, 0) = ((MR_Box) (OtherExt_4));
            }
            parse_tree__file_names__module_name_to_search_file_name_8_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_opt_deps\'/9", Var_48, NewExt_5, Dep_23, &OptName_45);
            parse_tree__find_module__search_for_file_5_p_0(IntermodDirs_3, OptName_45, &MaybeOptDir_46);
            if (((MR_tag((MR_Word) MaybeOptDir_46)) == (MR_Integer) 1))
              *HeadVar__7_7 = STATE_VARIABLE_OptDeps_38_38;
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__7_7 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Dep_23));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_38_38));
              }
          }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__7_7 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Dep_23));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_38_38));
            }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__construct_build_nested_children_first_rule_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MmakeRule_15;
  MR_Word conv0_STATE_VARIABLE_Cache_22;

  parse_tree__write_deps_file__gather_nested_deps_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Tuple) (wrapper_arg_1)), &conv1_MmakeRule_15, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_22);
  *wrapper_arg_2 = ((MR_Box) (conv1_MmakeRule_15));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_22));
}

static void MR_CALL 
parse_tree__write_deps_file__construct_build_nested_children_first_rule_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word MaybeTopModule_11,
  MR_Word * MmakeRulesNestedDeps_12,
  MR_Word STATE_VARIABLE_Cache_0_19,
  MR_Word * STATE_VARIABLE_Cache_20)
{
  MR_Word NestedModuleNames_15;

  NestedModuleNames_15 = parse_tree__module_baggage__get_nested_children_list_of_top_module_1_f_0(MaybeTopModule_11);
  if ((NestedModuleNames_15 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MmakeRulesNestedDeps_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Cache_20 = STATE_VARIABLE_Cache_0_19;
  }
  else
  {
    MR_Word Var_53;
    MR_Box conv3_STATE_VARIABLE_Cache_20;
    MR_Box conv2_STATE_VARIABLE_IO_22;

    {
      Var_53 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_53, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[0]));
      MR_hl_field(0, Var_53, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_build_nested_children_first_rule_8_p_0_1));
      MR_hl_field(0, Var_53, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_53, 3) = ((MR_Box) (Globals_9));
      MR_hl_field(0, Var_53, 4) = ((MR_Box) (ModuleName_10));
      MR_hl_field(0, Var_53, 5) = ((MR_Box) (NestedModuleNames_15));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_53, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_1[23])), MmakeRulesNestedDeps_12, ((MR_Box) (STATE_VARIABLE_Cache_0_19)), &conv3_STATE_VARIABLE_Cache_20, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_22);
    *STATE_VARIABLE_Cache_20 = ((MR_Word) (conv3_STATE_VARIABLE_Cache_20));
  }
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__construct_date_file_deps_rule_20_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_IncludePath_6;

  conv0_IncludePath_6 = parse_tree__write_deps_file__foreign_include_file_path_name_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_IncludePath_6));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__write_deps_file__construct_date_file_deps_rule_20_p_0(
  MR_Word Globals_21,
  MR_Word ModuleName_22,
  MR_String SourceFileName_23,
  MR_Word Ancestors_24,
  MR_Word LongDeps_25,
  MR_Word ShortDeps_26,
  MR_Word PublicChildren_27,
  MR_String Int0FileName_28,
  MR_String OptDateFileName_29,
  MR_String TransOptDateFileName_30,
  MR_Word ForeignIncludeFilesSet_31,
  MR_String CDateFileName_32,
  MR_String JavaDateFileName_33,
  MR_String ErrFileName_34,
  MR_Word FactTableSourceGroups_35,
  MR_Word * MmakeRuleDateFileDeps_36,
  MR_Word STATE_VARIABLE_Cache_0_52,
  MR_Word * STATE_VARIABLE_Cache_53)
{
  MR_bool succeeded;
  MR_Word TargetGroup_39;
  MR_Word TargetGroups_40;
  MR_Word SourceFileNameGroup_41;
  MR_Word Int0FileNameGroups_42;
  MR_Word AncestorSourceGroups_43;
  MR_Word LongDepsSourceGroups_44;
  MR_Word ShortDepsSourceGroups_45;
  MR_Word TypeRepnSelfDepGroups_46;
  MR_Word TypeRepnAncestorsDepGroups_47;
  MR_Word ForeignIncludeFiles_48;
  MR_Word ForeignImportFileNames_49;
  MR_Word ForeignImportFileNameGroup_50;
  MR_Word SourceGroups_51;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_64;
  MR_Word STATE_VARIABLE_Cache_71_71;
  MR_Word STATE_VARIABLE_Cache_79_79;
  MR_Word STATE_VARIABLE_Cache_87_87;
  MR_Word Var_95;
  MR_Word STATE_VARIABLE_Cache_96_96;
  MR_Word Var_104;
  MR_Word Var_110;
  MR_Word Var_112;
  MR_Word Var_113;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_117;
  MR_Word Var_118;

  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (JavaDateFileName_33));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (CDateFileName_32));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_61));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (ErrFileName_34));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_60));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (TransOptDateFileName_30));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_59));
  }
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) (OptDateFileName_29));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (Var_58));
  }
  {
    TargetGroup_39 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TargetGroup_39, 0) = ((MR_Box) ((MR_String) "dates_and_err"));
    MR_hl_field(0, TargetGroup_39, 1) = ((MR_Box) (Var_57));
  }
  {
    TargetGroups_40 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TargetGroups_40, 0) = ((MR_Box) (TargetGroup_39));
    MR_hl_field(0, TargetGroups_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_64 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(SourceFileName_23);
  {
    SourceFileNameGroup_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SourceFileNameGroup_41, 0) = ((MR_Box) (Var_64));
    MR_hl_field(1, SourceFileNameGroup_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), PublicChildren_27);
  if (succeeded)
    Int0FileNameGroups_42 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_66;

    Var_66 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(Int0FileName_28);
    {
      Int0FileNameGroups_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Int0FileNameGroups_42, 0) = ((MR_Box) (Var_66));
      MR_hl_field(1, Int0FileNameGroups_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  parse_tree__write_deps_file__make_module_file_name_group_with_suffix_10_p_0(Globals_21, (MR_String) "ancestors", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[11])), (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[12])), Ancestors_24, &AncestorSourceGroups_43, STATE_VARIABLE_Cache_0_52, &STATE_VARIABLE_Cache_71_71);
  parse_tree__write_deps_file__make_module_file_name_group_with_suffix_10_p_0(Globals_21, (MR_String) "long deps", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[22])), (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[21])), LongDeps_25, &LongDepsSourceGroups_44, STATE_VARIABLE_Cache_71_71, &STATE_VARIABLE_Cache_79_79);
  parse_tree__write_deps_file__make_module_file_name_group_with_suffix_10_p_0(Globals_21, (MR_String) "short deps", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[23])), (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[6])), ShortDeps_26, &ShortDepsSourceGroups_45, STATE_VARIABLE_Cache_79_79, &STATE_VARIABLE_Cache_87_87);
  Var_95 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)));
  parse_tree__write_deps_file__make_module_file_name_group_with_suffix_10_p_0(Globals_21, (MR_String) "type_repn self dep", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[22])), (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[21])), Var_95, &TypeRepnSelfDepGroups_46, STATE_VARIABLE_Cache_87_87, &STATE_VARIABLE_Cache_96_96);
  Var_104 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_22);
  parse_tree__write_deps_file__make_module_file_name_group_with_suffix_10_p_0(Globals_21, (MR_String) "type_repn ancestor dep", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[22])), (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[21])), Var_104, &TypeRepnAncestorsDepGroups_47, STATE_VARIABLE_Cache_96_96, STATE_VARIABLE_Cache_53);
  ForeignIncludeFiles_48 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ForeignIncludeFilesSet_31);
  {
    Var_110 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_110, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[0]));
    MR_hl_field(0, Var_110, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_date_file_deps_rule_20_p_0_1));
    MR_hl_field(0, Var_110, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_110, 3) = ((MR_Box) (SourceFileName_23));
  }
  ForeignImportFileNames_49 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_110, ForeignIncludeFiles_48);
  ForeignImportFileNameGroup_50 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "foreign imports", ForeignImportFileNames_49);
  Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), ForeignImportFileNameGroup_50, FactTableSourceGroups_35);
  Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), TypeRepnAncestorsDepGroups_47, Var_118);
  Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), TypeRepnSelfDepGroups_46, Var_117);
  Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), ShortDepsSourceGroups_45, Var_116);
  Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), LongDepsSourceGroups_44, Var_115);
  Var_113 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), AncestorSourceGroups_43, Var_114);
  Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Int0FileNameGroups_42, Var_113);
  SourceGroups_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), SourceFileNameGroup_41, Var_112);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRuleDateFileDeps_36 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, base, 1) = ((MR_Box) ((MR_String) "date_file_deps"));
    MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, base, 3) = ((MR_Box) (TargetGroups_40));
    MR_hl_field(3, base, 4) = ((MR_Box) (SourceGroups_51));
    MR_hl_field(3, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_name_group_with_suffix_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_String conv1_FileName_16;
  MR_Word conv0_STATE_VARIABLE_Cache_23;

  parse_tree__write_deps_file__make_module_file_name_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_16, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_23);
  *wrapper_arg_2 = ((MR_Box) (conv1_FileName_16));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_23));
}

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_name_group_with_suffix_10_p_0(
  MR_Word Globals_11,
  MR_String GroupName_12,
  MR_Word Ext_13,
  MR_Word NewExt_14,
  MR_Word Modules_15,
  MR_Word * Groups_16,
  MR_Word STATE_VARIABLE_Cache_0_20,
  MR_Word * STATE_VARIABLE_Cache_21)
{
  MR_Word FileNames_19;
  MR_Word Var_24;
  MR_Word Var_25;
  MR_Box conv3_STATE_VARIABLE_Cache_21;
  MR_Box conv2_STATE_VARIABLE_IO_23;

  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (parse_tree__write_deps_file__make_module_file_name_group_with_suffix_10_p_0_1));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) (Globals_11));
    MR_hl_field(0, Var_24, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_deps_file.make_module_file_name_group_with_suffix\'/10"));
    MR_hl_field(0, Var_24, 5) = ((MR_Box) (Ext_13));
    MR_hl_field(0, Var_24, 6) = ((MR_Box) (NewExt_14));
  }
  Var_25 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Modules_15);
  mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, Var_25, &FileNames_19, ((MR_Box) (STATE_VARIABLE_Cache_0_20)), &conv3_STATE_VARIABLE_Cache_21, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_23);
  *STATE_VARIABLE_Cache_21 = ((MR_Word) (conv3_STATE_VARIABLE_Cache_21));
  *Groups_16 = libs__mmakefiles__make_file_name_group_2_f_0(GroupName_12, FileNames_19);
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
      MmakeVarFactTables_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeVarFactTables_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, MmakeVarFactTables_18, 1) = ((MR_Box) (Var_26));
      MR_hl_field(3, MmakeVarFactTables_18, 2) = ((MR_Box) (FactTableFileNames_15));
    }
    Var_28 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables.os");
    Var_32 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables:%=\044(os_subdir)%.\044O)");
    Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_32);
    {
      MmakeVarFactTablesOs_19 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, MmakeVarFactTablesOs_19, 0) = ((MR_Box) (Var_28));
      MR_hl_field(2, MmakeVarFactTablesOs_19, 1) = ((MR_Box) (Var_30));
    }
    Var_34 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables.all_os");
    Var_38 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables:%=\044(os_subdir)%.\044O)");
    Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_38);
    {
      MmakeVarFactTablesAllOs_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, MmakeVarFactTablesAllOs_20, 0) = ((MR_Box) (Var_34));
      MR_hl_field(2, MmakeVarFactTablesAllOs_20, 1) = ((MR_Box) (Var_36));
    }
    Var_40 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables.cs");
    Var_44 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables:%=\044(cs_subdir)%.c)");
    Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_44);
    {
      MmakeVarFactTablesCs_21 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, MmakeVarFactTablesCs_21, 0) = ((MR_Box) (Var_40));
      MR_hl_field(2, MmakeVarFactTablesCs_21, 1) = ((MR_Box) (Var_42));
    }
    Var_46 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables.all_cs");
    Var_50 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables:%=\044(cs_subdir)%.c)");
    Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_50);
    {
      MmakeVarFactTablesAllCs_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, MmakeVarFactTablesAllCs_22, 0) = ((MR_Box) (Var_46));
      MR_hl_field(2, MmakeVarFactTablesAllCs_22, 1) = ((MR_Box) (Var_48));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (MmakeVarFactTablesAllCs_22));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (MmakeVarFactTablesCs_21));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (MmakeVarFactTablesAllOs_20));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
    }
    {
      Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_52, 0) = ((MR_Box) (MmakeVarFactTablesOs_19));
      MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_53));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MmakeVarsFactTables_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MmakeVarFactTables_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_52));
    }
    Var_61 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables)");
    Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_61);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_58, 0) = ((MR_Box) (Var_59));
      MR_hl_field(0, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FactTableSourceGroup_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FactTableSourceGroup_23, 0) = ((MR_Box) ((MR_String) "fact tables"));
      MR_hl_field(0, FactTableSourceGroup_23, 1) = ((MR_Box) (Var_58));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *FactTableSourceGroups_13 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FactTableSourceGroup_23));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_69 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables.os)");
    Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_69);
    Var_74 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables)");
    Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_74);
    {
      Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_76, 0) = ((MR_Box) (SourceFileName_9));
      MR_hl_field(1, Var_76, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
      MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_76));
    }
    {
      MmakeRuleFactOs_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleFactOs_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleFactOs_24, 1) = ((MR_Box) ((MR_String) "fact_table_os"));
      MR_hl_field(3, MmakeRuleFactOs_24, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, MmakeRuleFactOs_24, 3) = ((MR_Box) (Var_67));
      MR_hl_field(3, MmakeRuleFactOs_24, 4) = ((MR_Box) (Var_71));
      MR_hl_field(3, MmakeRuleFactOs_24, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_83 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables.cs)");
    Var_81 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_83);
    {
      Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_85, 0) = ((MR_Box) (ObjFileName_10));
      MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRuleFactCs_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleFactCs_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleFactCs_25, 1) = ((MR_Box) ((MR_String) "fact_table_cs"));
      MR_hl_field(3, MmakeRuleFactCs_25, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, MmakeRuleFactCs_25, 3) = ((MR_Box) (Var_81));
      MR_hl_field(3, MmakeRuleFactCs_25, 4) = ((MR_Box) (Var_85));
      MR_hl_field(3, MmakeRuleFactCs_25, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_88, 0) = ((MR_Box) (MmakeRuleFactCs_25));
      MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MmakeRulesFactTables_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MmakeRuleFactOs_24));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_88));
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__construct_trans_opt_deps_rule_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_String conv1_FileName_16;
  MR_Word conv0_STATE_VARIABLE_Cache_23;

  parse_tree__write_deps_file__make_module_file_name_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_16, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_23);
  *wrapper_arg_2 = ((MR_Box) (conv1_FileName_16));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_23));
}

static void MR_CALL 
parse_tree__write_deps_file__construct_trans_opt_deps_rule_9_p_0(
  MR_Word Globals_10,
  MR_Word MaybeInclTransOptRule_11,
  MR_Word IntermodDeps_12,
  MR_String TransOptDateFileName_13,
  MR_Word * MmakeRulesTransOpt_14,
  MR_Word STATE_VARIABLE_Cache_0_28,
  MR_Word * STATE_VARIABLE_Cache_29)
{
  if ((MaybeInclTransOptRule_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MmakeRulesTransOpt_14 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Cache_29 = STATE_VARIABLE_Cache_0_28;
  }
  else
  {
    MR_Word TransOptRuleInfo_17 = ((MR_Word) ((MR_hl_field(1, MaybeInclTransOptRule_11, (MR_Integer) 0))));
    MR_Word TransOptDeps_24;
    MR_Word TransOptDepsFileNames_26;
    MR_Word MmakeRuleTransOpt_27;
    MR_Word Var_36;
    MR_Word Var_48;
    MR_Box conv3_STATE_VARIABLE_Cache_29;
    MR_Box conv2_STATE_VARIABLE_IO_31;

    if (((MR_tag((MR_Word) TransOptRuleInfo_17)) == (MR_Integer) 1))
      TransOptDeps_24 = ((MR_Word) ((MR_hl_field(1, TransOptRuleInfo_17, (MR_Integer) 0))));
    else
    {
      MR_Word TransOptOrder_18 = ((MR_Word) ((MR_hl_field(0, TransOptRuleInfo_17, (MR_Integer) 0))));

      if ((IntermodDeps_12 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_deps_file.construct_trans_opt_deps_rule\'/9", (MR_String) "no_intermod_deps");
          return;
        }
      else
      {
        MR_Word TransOptDeps0_23 = ((MR_Word) ((MR_hl_field(1, IntermodDeps_12, (MR_Integer) 4))));

        mercury__set__intersect_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptOrder_18, TransOptDeps0_23, &TransOptDeps_24);
      }
    }
    Var_36 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptDeps_24);
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_48, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
      MR_hl_field(0, Var_48, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_trans_opt_deps_rule_9_p_0_1));
      MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_48, 3) = ((MR_Box) (Globals_10));
      MR_hl_field(0, Var_48, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_deps_file.make_module_file_names_with_suffix\'/9"));
      MR_hl_field(0, Var_48, 5) = ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_5[20])));
      MR_hl_field(0, Var_48, 6) = ((MR_Box) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_5[21])));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, Var_36, &TransOptDepsFileNames_26, ((MR_Box) (STATE_VARIABLE_Cache_0_28)), &conv3_STATE_VARIABLE_Cache_29, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_31);
    *STATE_VARIABLE_Cache_29 = ((MR_Word) (conv3_STATE_VARIABLE_Cache_29));
    {
      MmakeRuleTransOpt_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleTransOpt_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleTransOpt_27, 1) = ((MR_Box) ((MR_String) "trans_opt_deps"));
      MR_hl_field(3, MmakeRuleTransOpt_27, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, MmakeRuleTransOpt_27, 3) = ((MR_Box) (TransOptDateFileName_13));
      MR_hl_field(3, MmakeRuleTransOpt_27, 4) = ((MR_Box) (TransOptDepsFileNames_26));
      MR_hl_field(3, MmakeRuleTransOpt_27, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MmakeRulesTransOpt_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MmakeRuleTransOpt_27));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_include_trans_opt_rule_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_deps_file____Unify____maybe_include_trans_opt_rule_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_include_trans_opt_rule_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_deps_file____Compare____maybe_include_trans_opt_rule_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____module_file_name_cache_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_deps_file____Unify____module_file_name_cache_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file____Compare____module_file_name_cache_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_deps_file____Compare____module_file_name_cache_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____module_name_and_ext_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_deps_file____Unify____module_name_and_ext_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file____Compare____module_name_and_ext_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_deps_file____Compare____module_name_and_ext_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____trans_opt_rule_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_deps_file____Unify____trans_opt_rule_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file____Compare____trans_opt_rule_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_deps_file____Compare____trans_opt_rule_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

	MR_register_type_ctor_info(&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_maybe_include_trans_opt_rule_0);
	MR_register_type_ctor_info(&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_maybe_intermod_deps_0);
	MR_register_type_ctor_info(&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_maybe_mmake_var_0);
	MR_register_type_ctor_info(&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_module_file_name_cache_0);
	MR_register_type_ctor_info(&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_module_name_and_ext_0);
	MR_register_type_ctor_info(&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_trans_opt_rule_info_0);
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
