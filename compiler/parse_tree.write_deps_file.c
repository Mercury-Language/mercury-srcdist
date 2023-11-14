/*
** Automatically generated from `write_deps_file.m'
** by the Mercury compiler,
** version rotd-2023-11-14
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
REQUIRED_INIT mercury__parse_tree__write_deps_file__required_init
ENDINIT
*/

#include "parse_tree.write_deps_file.mih"
#include "parse_tree.write_deps_file.mh"


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
#include "uint.mih"
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
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_389_389;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__IncludeMap_45;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_92;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__BurdenedModule_352;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_41;
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv1_Var_41;
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv0_Var_92;
};


static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_libs__globals__type_ctor_info_foreign_language_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file____vpti_tuple_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_names__type_ctor_info_ext_0;

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file____vpti_tuple_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo parse_tree__write_deps_file__parse_tree__write_deps_file__field_types_cache_stats_0_0[2];

static const MR_ConstString parse_tree__write_deps_file__parse_tree__write_deps_file__field_names_cache_stats_0_0[2];

static const MR_DuFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_cache_stats_0_0;

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_cache_stats_0_0[1];

static const MR_DuPtagLayout parse_tree__write_deps_file__parse_tree__write_deps_file__du_ptag_ordered_cache_stats_0[1];

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_name_ordered_cache_stats_0[1];

static const MR_Integer parse_tree__write_deps_file__parse_tree__write_deps_file__functor_number_map_cache_stats_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__tree234__ti_tree234_2parse_tree__file_names__type_ctor_info_ext_0parse_tree__write_deps_file__type_ctor_info_cache_stats_0;

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

static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__tree234__ti_tree234_2parse_tree__file_names__type_ctor_info_ext_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

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
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1573__1_5_p_0(
  MR_Word Globals_10,
  MR_Tuple LambdaHeadVar__1_152,
  MR_String * LambdaHeadVar__2_153);

static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__generate_dv_file__1564__1_1_f_0(
  MR_Tuple LambdaHeadVar__1_144);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1539__1_2_p_0(
  MR_Word DepsMap_13,
  MR_Word LambdaHeadVar__1_135);

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1460__1_4_p_0(
  MR_Word DepsGraph_4,
  MR_Word LambdaHeadVar__1_15,
  MR_Word LambdaHeadVar__2_16,
  MR_Word * LambdaHeadVar__3_17);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1427__1_2_p_0(
  MR_Word ModuleName_27,
  MR_Word LambdaHeadVar__1_53);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__construct_foreign_import_rules__1004__1_3_p_0(
  MR_Word SourceFileModuleName_15,
  MR_Word LambdaHeadVar__1_68,
  MR_Word * LambdaHeadVar__2_69);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__construct_foreign_import_rules__998__1_2_p_0(
  MR_Word BackendLangs_37,
  MR_Word LambdaHeadVar__1_65);

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_d_file__320__1_4_p_0(
  MR_Word LambdaHeadVar__1_87,
  MR_Word LambdaHeadVar__2_88,
  MR_Word LambdaHeadVar__3_89,
  MR_Word * LambdaHeadVar__4_90);

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
parse_tree__write_deps_file____Compare____file_name_cache_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____file_name_cache_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_deps_file____Compare____cache_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____cache_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__write_deps_file__unsafe_set_module_file_name_cache_stats_1_p_0(
  MR_Word X_1);

static void MR_CALL 
parse_tree__write_deps_file__unsafe_get_module_file_name_cache_stats_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
parse_tree__write_deps_file__unlock_module_file_name_cache_stats_0_p_0(void);

static void MR_CALL 
parse_tree__write_deps_file__lock_module_file_name_cache_stats_0_p_0(void);

static void MR_CALL 
parse_tree__write_deps_file__pre_initialise_mutable_module_file_name_cache_stats_0_p_0(void);

static void MR_CALL 
parse_tree__write_deps_file__initialise_mutable_module_file_name_cache_stats_0_p_0(void);

static void MR_CALL 
parse_tree__write_deps_file__write_cache_stats_entry_5_p_0(
  MR_Word OutStream_6,
  MR_Word Ext_7,
  MR_Word Stats_8);

static void MR_CALL 
parse_tree__write_deps_file__compare_module_names_3_p_0(
  MR_Word Sym1_4,
  MR_Word Sym2_5,
  MR_Word * Result_6);

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
  MR_Word * MmakeRule_13);

static void MR_CALL 
parse_tree__write_deps_file__construct_subdirs_shorthand_rule_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word Ext_11,
  MR_Word * MmakeRule_12,
  MR_Word STATE_VARIABLE_Cache_0_19,
  MR_Word * STATE_VARIABLE_Cache_20);

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
  MR_Word Ext_13,
  MR_Word * MmakeRule_14,
  MR_Word STATE_VARIABLE_Cache_0_20,
  MR_Word * STATE_VARIABLE_Cache_21);

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
parse_tree__write_deps_file__record_write_deps_file_cache_stats_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
  MR_Word STATE_VARIABLE_MmakeFile_0_66,
  MR_Word * STATE_VARIABLE_MmakeFile_67);

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
  MR_Word STATE_VARIABLE_MmakeFile_0_65,
  MR_Word * STATE_VARIABLE_MmakeFile_66);

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

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
  MR_Word STATE_VARIABLE_Cache_0_107,
  MR_Word * STATE_VARIABLE_Cache_108);

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
parse_tree__write_deps_file__generate_dependencies_write_d_files_loop_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word HeadVar__3_3,
  MR_Word IntDepsGraph_4,
  MR_Word ImpDepsGraph_5,
  MR_Word IndirectDepsGraph_6,
  MR_Word IndirectOptDepsGraph_7,
  MR_Word TransOptDepsGraph_8,
  MR_Word TransOptOrder_9,
  MR_Word STATE_VARIABLE_Cache_0_10,
  MR_Word * STATE_VARIABLE_Cache_11);

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_d_file_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_d_file_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_d_file_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word BurdenedModule_16,
  MR_Word IntDepsGraph_17,
  MR_Word ImpDepsGraph_18,
  MR_Word IndirectDepsGraph_19,
  MR_Word IndirectOptDepsGraph_20,
  MR_Word TransOptDepsGraph_21,
  MR_Word FullTransOptOrder_22,
  MR_Word STATE_VARIABLE_Cache_0_48,
  MR_Word * STATE_VARIABLE_Cache_49);

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
parse_tree__write_deps_file__write_dependency_file_fn_cache_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word BurdenedAugCompUnit_13,
  MR_Word IntermodDeps_14,
  MR_Word AllDeps_15,
  MR_Word MaybeInclTransOptRule_16,
  MR_Word STATE_VARIABLE_Cache_0_41,
  MR_Word * STATE_VARIABLE_Cache_42);

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_10_p_0(
  MR_Word Globals_11,
  MR_Word BurdenedAugCompUnit_12,
  MR_Word IntermodDeps_13,
  MR_Word AllDeps_14,
  MR_Word MaybeInclTransOptRule_15,
  MR_Word * STATE_VARIABLE_MmakeFile_82,
  MR_Word STATE_VARIABLE_Cache_0_83,
  MR_Word * STATE_VARIABLE_Cache_84);

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
  MR_Word STATE_VARIABLE_Cache_0_50,
  MR_Word * STATE_VARIABLE_Cache_51);

static void MR_CALL 
parse_tree__write_deps_file__gather_foreign_import_deps_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__write_deps_file__gather_foreign_import_deps_9_p_0(
  MR_Word Globals_10,
  MR_Word ForeignImportExt_11,
  MR_Word ForeignImportTargets_12,
  MR_Word ForeignImportedModuleNames_13,
  MR_Word * MmakeRule_14,
  MR_Word STATE_VARIABLE_Cache_0_20,
  MR_Word * STATE_VARIABLE_Cache_21);

static void MR_CALL 
parse_tree__write_deps_file__construct_self_and_parent_date_date0_rules_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

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
parse_tree__write_deps_file__construct_intermod_rules_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__construct_intermod_rules_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

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
parse_tree__write_deps_file__make_module_file_names_with_ext_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_names_with_ext_8_p_0(
  MR_Word Globals_9,
  MR_Word Ext_10,
  MR_Word Modules_11,
  MR_Word * FileNames_12,
  MR_Word STATE_VARIABLE_Cache_0_15,
  MR_Word * STATE_VARIABLE_Cache_16);

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
parse_tree__write_deps_file__make_module_file_name_9_p_0(
  MR_Word Globals_10,
  MR_String From_11,
  MR_Word Ext_12,
  MR_Word ModuleName_13,
  MR_String * FileName_14,
  MR_Word STATE_VARIABLE_Cache_0_21,
  MR_Word * STATE_VARIABLE_Cache_22);

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
parse_tree__write_deps_file__make_module_file_name_group_with_ext_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_name_group_with_ext_9_p_0(
  MR_Word Globals_10,
  MR_String GroupName_11,
  MR_Word Ext_12,
  MR_Word ModuleSet_13,
  MR_Word * Groups_14,
  MR_Word STATE_VARIABLE_Cache_0_19,
  MR_Word * STATE_VARIABLE_Cache_20);

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
parse_tree__write_deps_file____Unify____cache_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_deps_file____Compare____cache_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____file_name_cache_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_deps_file____Compare____file_name_cache_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

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
parse_tree__write_deps_file____Unify____trans_opt_rule_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__write_deps_file____Compare____trans_opt_rule_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[16][3];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[130][2];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[5][4];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[22][1];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[2][12];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[10][6];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_7[6][5];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[1][11];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[2][7];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_10[3][8];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_11[1][10];




static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[16][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__digraph__digraph_key__arity1__)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_2[2]))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_cache_stats_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_2[4])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[0])),
    ((MR_Box) (parse_tree__write_deps_file__construct_intermod_rules_14_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[1])),
    ((MR_Box) (parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[2])),
    ((MR_Box) (parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[3])),
    ((MR_Box) (parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[4])),
    ((MR_Box) (parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[5])),
    ((MR_Box) (parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_9[0])),
    ((MR_Box) (parse_tree__write_deps_file__generate_d_file_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[7])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[4])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_9_p_0_7)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[5])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_9_p_0_11)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[5])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_9_p_0_12)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[130][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 8U)
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 11U)
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  13 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[9]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  14 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[13])))
  },
  /* row  15 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[5]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[14])))
  },
  /* row  16 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[6]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[15])))
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_4[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[20]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[21])))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[19]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[22])))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[10]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[23])))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[8]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[24])))
  },
  /* row  26 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[11]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[25])))
  },
  /* row  27 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 9U)
  },
  /* row  28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 7U)
  },
  /* row  29 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 14U)
  },
  /* row  30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 16U)
  },
  /* row  31 */
  {
    ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE)")),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  32 */
  {
    ((MR_Box) ((MR_String) "\044(EXT_FOR_SHARED_LIB)")),
    ((MR_Box) ((MR_String) "\044(A)"))
  },
  /* row  33 */
  {
    ((MR_Box) ((MR_String) "install_lib_dirs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_String) "done")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_String) "\t} || exit 1; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[34])))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044(INSTALL_INT_DIR)\"/*.\044\044ext \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[35])))
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[36])))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \"\044\044dir\" ] || \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[37])))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \"\044\044dir\" || { \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[38])))
  },
  /* row  40 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[39])))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_String) "\tdir=\"\044(INSTALL_INT_DIR)/Mercury/\044\044{ext}s\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[40])))
  },
  /* row  42 */
  {
    ((MR_Box) ((MR_String) "install_grade_dirs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[35])))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044(INSTALL_GRADE_INT_DIR)\"/*.\044\044ext \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[43])))
  },
  /* row  45 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[44])))
  },
  /* row  46 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \"\044\044dir\" ] || \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[45])))
  },
  /* row  47 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \"\044\044dir\" || { \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[46])))
  },
  /* row  48 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[47])))
  },
  /* row  49 */
  {
    ((MR_Box) ((MR_String) "\tdir=\"\044(INSTALL_GRADE_INT_DIR)/Mercury/\044\044{ext}s\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[48])))
  },
  /* row  50 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INC_DIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[34])))
  },
  /* row  51 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[50])))
  },
  /* row  52 */
  {
    ((MR_Box) ((MR_String) "} || exit 1")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[52])))
  },
  /* row  54 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[53])))
  },
  /* row  55 */
  {
    ((MR_Box) ((MR_String) "\t} && \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[54])))
  },
  /* row  56 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_INT_DIR)/Mercury/mihs; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[55])))
  },
  /* row  57 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[56])))
  },
  /* row  58 */
  {
    ((MR_Box) ((MR_String) "\t{ [ -d \044(INSTALL_INT_DIR)/Mercury/mihs ] || \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[57])))
  },
  /* row  59 */
  {
    ((MR_Box) ((MR_String) "\044(LN_S) .. \044(INSTALL_INT_DIR)/Mercury/mihs || { \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[58])))
  },
  /* row  60 */
  {
    ((MR_Box) ((MR_String) "rm -rf \044(INSTALL_INT_DIR)/Mercury/mihs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[59])))
  },
  /* row  61 */
  {
    ((MR_Box) ((MR_String) "} || exit 1")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[60])))
  },
  /* row  62 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_GRADE_INC_SUBDIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[61])))
  },
  /* row  63 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[62])))
  },
  /* row  64 */
  {
    ((MR_Box) ((MR_String) "\t} && \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[63])))
  },
  /* row  65 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \044(INSTALL_GRADE_INC_SUBDIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[64])))
  },
  /* row  66 */
  {
    ((MR_Box) ((MR_String) "\t{ [ -d \044(INSTALL_GRADE_INC_SUBDIR) ] || \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[65])))
  },
  /* row  67 */
  {
    ((MR_Box) ((MR_String) "\044(LN_S) .. \044(INSTALL_GRADE_INC_SUBDIR) || { \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[66])))
  },
  /* row  68 */
  {
    ((MR_Box) ((MR_String) "rm -rf \044(INSTALL_GRADE_INC_SUBDIR)")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[67])))
  },
  /* row  69 */
  {
    ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'.")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[68])))
  },
  /* row  70 */
  {
    ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[69])))
  },
  /* row  71 */
  {
    ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option.")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[70])))
  },
  /* row  72 */
  {
    ((MR_Box) ((MR_String) "done")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[71])))
  },
  /* row  73 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_GRADE_INC_DIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[72])))
  },
  /* row  74 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[73])))
  },
  /* row  75 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[5])),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row  76 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_2[75])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  77 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[11])),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row  78 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_2[77])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[76])))
  },
  /* row  79 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[7])),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row  80 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_2[79])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[78])))
  },
  /* row  81 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[8])),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row  82 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_2[81])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[80])))
  },
  /* row  83 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[6])),
    ((MR_Box) ((MR_String) ".classes"))
  },
  /* row  84 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_2[83])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[82])))
  },
  /* row  85 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[14])),
    ((MR_Box) ((MR_String) ".all_javas"))
  },
  /* row  86 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_2[85])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[84])))
  },
  /* row  87 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[15])),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row  88 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_2[87])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[86])))
  },
  /* row  89 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[16])),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row  90 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_2[89])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[88])))
  },
  /* row  91 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[17])),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row  92 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_2[91])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[90])))
  },
  /* row  93 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[18])),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row  94 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_2[93])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[92])))
  },
  /* row  95 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[4])),
    ((MR_Box) ((MR_String) ".errs"))
  },
  /* row  96 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_2[95])),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[94])))
  },
  /* row  97 */
  {
    ((MR_Box) ((MR_String) ".foreign_cs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  98 */
  {
    ((MR_Box) ((MR_String) ".errs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[97])))
  },
  /* row  99 */
  {
    ((MR_Box) ((MR_String) ".dep_errs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[98])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_String) ".profs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[99])))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_String) ".all_javas")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[100])))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_String) ".useds")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[101])))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_String) ".java_dates")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[102])))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_String) ".c_dates")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[103])))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_String) ".all_pic_os")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[104])))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_String) ".all_os")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[105])))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_String) ".mihs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[106])))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_String) ".all_cs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[107])))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_String) ".dirs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[108])))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_String) ".classes")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_String) ".foreign_dlls")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[110])))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_String) ".dlls")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[111])))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_String) ".mihs_to_clean")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[112])))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_String) ".mhs_to_clean")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[113])))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_String) ".module_deps")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[114])))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_String) ".ds")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[115])))
  },
  /* row 117 */
  {
    ((MR_Box) ((MR_String) ".imdgs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[116])))
  },
  /* row 118 */
  {
    ((MR_Box) ((MR_String) ".requests")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[117])))
  },
  /* row 119 */
  {
    ((MR_Box) ((MR_String) ".analyses")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[118])))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_String) ".trans_opts")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[119])))
  },
  /* row 121 */
  {
    ((MR_Box) ((MR_String) ".opts")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[120])))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_String) ".int3s")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[121])))
  },
  /* row 123 */
  {
    ((MR_Box) ((MR_String) ".int0s_to_clean")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[122])))
  },
  /* row 124 */
  {
    ((MR_Box) ((MR_String) ".ints")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[123])))
  },
  /* row 125 */
  {
    ((MR_Box) ((MR_String) ".trans_opt_dates")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[124])))
  },
  /* row 126 */
  {
    ((MR_Box) ((MR_String) ".optdates")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[125])))
  },
  /* row 127 */
  {
    ((MR_Box) ((MR_String) ".date3s")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[126])))
  },
  /* row 128 */
  {
    ((MR_Box) ((MR_String) ".date0s")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[127])))
  },
  /* row 129 */
  {
    ((MR_Box) ((MR_String) ".dates")),
    ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[128])))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[5][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[9])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".m"))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[9])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_9_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".err"))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[9])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_9_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".dep_err"))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[22][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 8U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 9U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 7U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 5U) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 4U) },
  /* row   6 */
  { (MR_Box) ((MR_Unsigned) 6U) },
  /* row   7 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   8 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   9 */
  { (MR_Box) ((MR_Unsigned) 12U) },
  /* row  10 */
  { ((MR_Box) ((MR_String) "java")) },
  /* row  11 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row  12 */
  { (MR_Box) ((MR_Unsigned) 11U) },
  /* row  13 */
  { (MR_Box) ((MR_Unsigned) 10U) },
  /* row  14 */
  { (MR_Box) ((MR_Unsigned) 15U) },
  /* row  15 */
  { (MR_Box) ((MR_Unsigned) 18U) },
  /* row  16 */
  { (MR_Box) ((MR_Unsigned) 16U) },
  /* row  17 */
  { (MR_Box) ((MR_Unsigned) 13U) },
  /* row  18 */
  { (MR_Box) ((MR_Unsigned) 14U) },
  /* row  19 */
  { (MR_Box) ((MR_Unsigned) 17U) },
  /* row  20 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 1U << 1)))))))) },
  /* row  21 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[2][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[10][6] = {
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

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_7[6][5] = {
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
    ((MR_Box) (&parse_tree__write_deps_file____vpti_tuple_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__write_deps_file__tree234__pti_tree234_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_10[3][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__write_deps_file____vpti_tuple_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_cache_stats_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_11[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__write_deps_file____vpti_tuple_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_builtin__type_ctor_info_string_0)),
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
#include "parse_tree.write_deps_file.mh"
#line 2858 "write_deps_file.m"
MR_Word parse_tree__write_deps_file__mutable_variable_module_file_name_cache_stats;
#ifdef MR_THREAD_SAFE
    MercuryLock parse_tree__write_deps_file__mutable_variable_module_file_name_cache_stats_lock;
#endif


#line 2858 "write_deps_file.m"
void 
parse_tree__write_deps_file__user_init_pred_160_0(void)
#line 2858 "write_deps_file.m"
{
#line 2858 "write_deps_file.m"
	parse_tree__write_deps_file__initialise_mutable_module_file_name_cache_stats_0_p_0();
}


static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0),
    (MR_PseudoTypeInfo) (&parse_tree__write_deps_file__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
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

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file____vpti_tuple_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_names__type_ctor_info_ext_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file____vpti_tuple_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__write_deps_file__parse_tree__write_deps_file__field_types_cache_stats_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_ConstString parse_tree__write_deps_file__parse_tree__write_deps_file__field_names_cache_stats_0_0[2] = {
  (MR_String) "lookups",
  (MR_String) "misses"
};

static const MR_DuFunctorDesc parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_cache_stats_0_0 = {
  (MR_String) "cache_stats",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__write_deps_file__parse_tree__write_deps_file__field_types_cache_stats_0_0,
  parse_tree__write_deps_file__parse_tree__write_deps_file__field_names_cache_stats_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_cache_stats_0_0[1] = { &parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_cache_stats_0_0 };

static const MR_DuPtagLayout parse_tree__write_deps_file__parse_tree__write_deps_file__du_ptag_ordered_cache_stats_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__write_deps_file__parse_tree__write_deps_file__du_stag_ordered_cache_stats_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__write_deps_file__parse_tree__write_deps_file__du_name_ordered_cache_stats_0[1] = { &parse_tree__write_deps_file__parse_tree__write_deps_file__du_functor_desc_cache_stats_0_0 };

static const MR_Integer parse_tree__write_deps_file__parse_tree__write_deps_file__functor_number_map_cache_stats_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_cache_stats_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__write_deps_file____Unify____cache_stats_0_0_10001)),
  ((MR_Box) (parse_tree__write_deps_file____Compare____cache_stats_0_0_10001)),
  (MR_String) "parse_tree.write_deps_file",
  (MR_String) "cache_stats",
  { parse_tree__write_deps_file__parse_tree__write_deps_file__du_name_ordered_cache_stats_0 },
  { parse_tree__write_deps_file__parse_tree__write_deps_file__du_ptag_ordered_cache_stats_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__write_deps_file__parse_tree__write_deps_file__functor_number_map_cache_stats_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__tree234__ti_tree234_2parse_tree__file_names__type_ctor_info_ext_0parse_tree__write_deps_file__type_ctor_info_cache_stats_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0),
    (MR_TypeInfo) (&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_cache_stats_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_file_name_cache_stats_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__write_deps_file____Unify____file_name_cache_stats_0_0_10001)),
  ((MR_Box) (parse_tree__write_deps_file____Compare____file_name_cache_stats_0_0_10001)),
  (MR_String) "parse_tree.write_deps_file",
  (MR_String) "file_name_cache_stats",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__write_deps_file__tree234__ti_tree234_2parse_tree__file_names__type_ctor_info_ext_0parse_tree__write_deps_file__type_ctor_info_cache_stats_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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

static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__tree234__ti_tree234_2parse_tree__file_names__type_ctor_info_ext_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0),
    (MR_TypeInfo) (&parse_tree__write_deps_file__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)
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
  { (MR_PseudoTypeInfo) (&parse_tree__write_deps_file__tree234__ti_tree234_2parse_tree__file_names__type_ctor_info_ext_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

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
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1573__1_5_p_0(
  MR_Word Globals_10,
  MR_Tuple LambdaHeadVar__1_152,
  MR_String * LambdaHeadVar__2_153)
{
  MR_String F0_54;
  MR_Word M_531 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_152, (MR_Integer) 0))));
  MR_Word NE_532 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_152, (MR_Integer) 1))));

  parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_10, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dv_file\'/9", NE_532, M_531, &F0_54);
  *LambdaHeadVar__2_153 = mercury__string__f_43_43_2_f_0((MR_String) "\044(os_subdir)", F0_54);
}

static MR_Word MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__func__generate_dv_file__1564__1_1_f_0(
  MR_Tuple LambdaHeadVar__1_144)
{
  MR_Word LambdaHeadVar__2_145 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_144, (MR_Integer) 0))));

  return LambdaHeadVar__2_145;
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1539__1_2_p_0(
  MR_Word DepsMap_13,
  MR_Word LambdaHeadVar__1_135)
{
  MR_bool succeeded;
  MR_Word BurdenedModule_36;
  MR_Word ParseTreeModuleSrc_37;
  MR_Word IncludeMap_38;
  MR_Word Var_136;
  MR_Box conv0_Var_136;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_13, ((MR_Box) (LambdaHeadVar__1_135)), &conv0_Var_136);
  Var_136 = ((MR_Word) (conv0_Var_136));
  BurdenedModule_36 = ((MR_Word) ((MR_hl_field(0, Var_136, (MR_Integer) 1))));
  ParseTreeModuleSrc_37 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_36, (MR_Integer) 1))));
  IncludeMap_38 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_37, (MR_Integer) 2))));
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), IncludeMap_38);
  succeeded = !(succeeded);
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1460__1_4_p_0(
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
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1427__1_2_p_0(
  MR_Word ModuleName_27,
  MR_Word LambdaHeadVar__1_53)
{
  MR_bool succeeded;

  succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ModuleName_27, LambdaHeadVar__1_53);
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__construct_foreign_import_rules__1004__1_3_p_0(
  MR_Word SourceFileModuleName_15,
  MR_Word LambdaHeadVar__1_68,
  MR_Word * LambdaHeadVar__2_69)
{
  MR_bool succeeded;
  MR_String Var_70;

  *LambdaHeadVar__2_69 = parse_tree__prog_foreign__fim_spec_module_name_from_module_2_f_0(LambdaHeadVar__1_68, SourceFileModuleName_15);
  succeeded = ((MR_tag((MR_Word) *LambdaHeadVar__2_69)) == (MR_Integer) 0);
  if (succeeded)
  {
    Var_70 = ((MR_String) ((MR_hl_field(0, *LambdaHeadVar__2_69, (MR_Integer) 0))));
    succeeded = (strcmp(Var_70, (MR_String) "mercury") == 0);
  }
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__construct_foreign_import_rules__998__1_2_p_0(
  MR_Word BackendLangs_37,
  MR_Word LambdaHeadVar__1_65)
{
  MR_bool succeeded;
  MR_Word Var_66 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__1_65, (MR_Integer) 0))) & (MR_Integer) 3);

  succeeded = mercury__list__member_2_p_0((MR_Word) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0), ((MR_Box) (Var_66)), BackendLangs_37);
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_d_file__320__1_4_p_0(
  MR_Word LambdaHeadVar__1_87,
  MR_Word LambdaHeadVar__2_88,
  MR_Word LambdaHeadVar__3_89,
  MR_Word * LambdaHeadVar__4_90)
{
  MR_Word Section_34 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__2_88, (MR_Integer) 0))) & (MR_Integer) 1);

  switch (Section_34) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *LambdaHeadVar__4_90 = LambdaHeadVar__3_89;
      break;
    case (MR_Integer) 0:
      mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (LambdaHeadVar__1_87)), LambdaHeadVar__3_89, LambdaHeadVar__4_90);
      break;
  }
}

static void MR_CALL 
parse_tree__write_deps_file____Compare____module_file_name_cache_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____module_file_name_cache_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[4]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]), &SubResult1_16, ((MR_Box) (Var_39)), ((MR_Box) (ArgY1_15)));
      succeeded = (SubResult1_16 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_16;
      else
      {
        MR_Word SubResult2_19;

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]), &SubResult2_19, ((MR_Box) (Var_38)), ((MR_Box) (ArgY2_18)));
        succeeded = (SubResult2_19 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_19;
        else
        {
          MR_Word SubResult3_22;

          mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]), &SubResult3_22, ((MR_Box) (Var_37)), ((MR_Box) (ArgY3_21)));
          succeeded = (SubResult3_22 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_22;
          else
          {
            MR_Word SubResult4_25;

            mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]), &SubResult4_25, ((MR_Box) (Var_36)), ((MR_Box) (ArgY4_24)));
            succeeded = (SubResult4_25 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult4_25;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Var_35)), ((MR_Box) (ArgY5_27)));
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
      TypeInfo_17_17 = (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
      {
        TypeInfo_18_18 = (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_9)), ((MR_Box) (ArgY3_10)));
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX4_11)), ((MR_Box) (ArgY4_12)));
            if (succeeded)
            {
              TypeInfo_21_21 = (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]);
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

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Var_16)), ((MR_Box) (ArgY1_11)));
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

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Var_17)), ((MR_Box) (ArgY1_5)));
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
      TypeInfo_9_9 = (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]);
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
      TypeInfo_10_10 = (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file____Compare____file_name_cache_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____file_name_cache_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_1[3]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file____Compare____cache_stats_0_0(
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
    MR_Unsigned ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Unsigned ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Unsigned ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Unsigned ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____cache_stats_0_0(
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
    MR_Unsigned ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Unsigned ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Unsigned ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Unsigned ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file__unsafe_set_module_file_name_cache_stats_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL parse_tree__write_deps_file__unsafe_set_module_file_name_cache_stats_1_p_0

	MR_Word X;

	X = X_1 ;
		{
parse_tree__write_deps_file__mutable_variable_module_file_name_cache_stats = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__write_deps_file__unsafe_get_module_file_name_cache_stats_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL parse_tree__write_deps_file__unsafe_get_module_file_name_cache_stats_1_p_0

	MR_Word X;

		{
X = parse_tree__write_deps_file__mutable_variable_module_file_name_cache_stats;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
parse_tree__write_deps_file__unlock_module_file_name_cache_stats_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__write_deps_file__unlock_module_file_name_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__write_deps_file__mutable_variable_module_file_name_cache_stats_lock, "parse_tree__write_deps_file__mutable_variable_module_file_name_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__write_deps_file__lock_module_file_name_cache_stats_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__write_deps_file__lock_module_file_name_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__write_deps_file__mutable_variable_module_file_name_cache_stats_lock, "parse_tree__write_deps_file__mutable_variable_module_file_name_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__write_deps_file__pre_initialise_mutable_module_file_name_cache_stats_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__write_deps_file__pre_initialise_mutable_module_file_name_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__write_deps_file__mutable_variable_module_file_name_cache_stats_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__write_deps_file__initialise_mutable_module_file_name_cache_stats_0_p_0(void)
{
  MR_Word X_1;

{
#define MR_PROC_LABEL parse_tree__write_deps_file__initialise_mutable_module_file_name_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__write_deps_file__mutable_variable_module_file_name_cache_stats_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  X_1 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_cache_stats_0));
{
#define MR_PROC_LABEL parse_tree__write_deps_file__initialise_mutable_module_file_name_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__write_deps_file__mutable_variable_module_file_name_cache_stats_lock, "parse_tree__write_deps_file__mutable_variable_module_file_name_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_deps_file__initialise_mutable_module_file_name_cache_stats_0_p_0

	MR_Word X;

	X = X_1 ;
		{
parse_tree__write_deps_file__mutable_variable_module_file_name_cache_stats = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_deps_file__initialise_mutable_module_file_name_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__write_deps_file__mutable_variable_module_file_name_cache_stats_lock, "parse_tree__write_deps_file__mutable_variable_module_file_name_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__write_deps_file__write_cache_stats_entry_5_p_0(
  MR_Word OutStream_6,
  MR_Word Ext_7,
  MR_Word Stats_8)
{
  MR_Unsigned Lookups_10 = ((MR_Unsigned) ((MR_hl_field(0, Stats_8, (MR_Integer) 0))));
  MR_Unsigned Misses_11 = ((MR_Unsigned) ((MR_hl_field(0, Stats_8, (MR_Integer) 1))));
  MR_String Var_18;
  MR_String Var_26;
  MR_String Var_38;
  MR_String Var_50;

  Var_18 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), ((MR_Box) (Ext_7)));
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_4[20]), (MR_Integer) 55, Var_18, &Var_26);
  mercury__io__write_string_4_p_0(OutStream_6, Var_26);
  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " ");
  mercury__string__format__format_uint_component_width_noprec_5_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_4[21]), (MR_Integer) 8, (MR_Integer) 1, Lookups_10, &Var_38);
  mercury__io__write_string_4_p_0(OutStream_6, Var_38);
  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " ");
  mercury__string__format__format_uint_component_width_noprec_5_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_4[21]), (MR_Integer) 8, (MR_Integer) 1, Misses_11, &Var_50);
  mercury__io__write_string_4_p_0(OutStream_6, Var_50);
  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\n");
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
parse_tree__write_deps_file__get_source_file_3_p_0(
  MR_Word DepsMap_4,
  MR_Word ModuleName_5,
  MR_String * FileName_6)
{
  MR_bool succeeded;
  MR_Word Deps_7;
  MR_Word BurdenedModule_10;
  MR_Word Baggage_11;
  MR_String SourceFileName_12;
  MR_Box conv0_Deps_7;
  MR_String SourceFileBase_13;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_4, ((MR_Box) (ModuleName_5)), &conv0_Deps_7);
  Deps_7 = ((MR_Word) (conv0_Deps_7));
  BurdenedModule_10 = ((MR_Word) ((MR_hl_field(0, Deps_7, (MR_Integer) 1))));
  Baggage_11 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_10, (MR_Integer) 0))));
  SourceFileName_12 = ((MR_String) ((MR_hl_field(0, Baggage_11, (MR_Integer) 0))));
  succeeded = mercury__string__remove_suffix_3_p_0(SourceFileName_12, (MR_String) ".m", &SourceFileBase_13);
  if (succeeded)
    *FileName_6 = SourceFileBase_13;
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
  MR_Word * MmakeRule_13)
{
  MR_Word Ext_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 0))));
  MR_String VarExtension_12 = ((MR_String) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 1))));
  MR_String TargetName_15;
  MR_String Source_16;
  MR_String ExtStr_17;
  MR_String Var_27;
  MR_String Var_29;
  MR_Word Var_31;
  MR_String Var_35;
  MR_String Var_36;

  parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_8, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_collective_target\'/7", Ext_11, ModuleName_9, &TargetName_15);
  Var_35 = mercury__string__f_43_43_2_f_0(VarExtension_12, (MR_String) ")");
  Var_36 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_10, Var_35);
  Source_16 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_36);
  ExtStr_17 = parse_tree__file_names__extension_to_string_2_f_0(Globals_8, Ext_11);
  Var_29 = mercury__string__f_43_43_2_f_0(ExtStr_17, VarExtension_12);
  Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "collective_target_", Var_29);
  {
    Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_31, 0) = ((MR_Box) (Source_16));
    MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRule_13 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Var_27));
    MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, base, 3) = ((MR_Box) (TargetName_15));
    MR_hl_field(3, base, 4) = ((MR_Box) (Var_31));
    MR_hl_field(3, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__construct_subdirs_shorthand_rule_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word Ext_11,
  MR_Word * MmakeRule_12,
  MR_Word STATE_VARIABLE_Cache_0_19,
  MR_Word * STATE_VARIABLE_Cache_20)
{
  MR_String ModuleStr_15;
  MR_String Target_16;
  MR_String ExtStr_17;
  MR_String ShorthandTarget_18;
  MR_String Var_26;
  MR_Word Var_29;

  parse_tree__file_names__module_name_to_file_name_stem_2_p_0(ModuleName_10, &ModuleStr_15);
  parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.construct_subdirs_shorthand_rule\'/8", Ext_11, ModuleName_10, &Target_16, STATE_VARIABLE_Cache_0_19, STATE_VARIABLE_Cache_20);
  ExtStr_17 = parse_tree__file_names__extension_to_string_2_f_0(Globals_9, Ext_11);
  ShorthandTarget_18 = mercury__string__f_43_43_2_f_0(ModuleStr_15, ExtStr_17);
  Var_26 = mercury__string__f_43_43_2_f_0((MR_String) "subdir_shorthand_for_", ExtStr_17);
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Target_16));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRule_12 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Var_26));
    MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, base, 3) = ((MR_Box) (ShorthandTarget_18));
    MR_hl_field(3, base, 4) = ((MR_Box) (Var_29));
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
  MR_String conv1_FileName_14;
  MR_Word conv0_STATE_VARIABLE_Cache_22;

  parse_tree__write_deps_file__make_module_file_name_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_22);
  *wrapper_arg_2 = ((MR_Box) (conv1_FileName_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_22));
}

static void MR_CALL 
parse_tree__write_deps_file__gather_nested_deps_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word NestedDeps_12,
  MR_Word Ext_13,
  MR_Word * MmakeRule_14,
  MR_Word STATE_VARIABLE_Cache_0_20,
  MR_Word * STATE_VARIABLE_Cache_21)
{
  MR_String ModuleExtName_17;
  MR_Word NestedDepsFileNames_18;
  MR_String ExtStr_19;
  MR_Word STATE_VARIABLE_Cache_25_25;
  MR_String Var_29;
  MR_Word Var_33;
  MR_Box conv3_STATE_VARIABLE_Cache_21;
  MR_Box conv2_STATE_VARIABLE_IO_23;

  parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_10, (MR_String) "predicate \140parse_tree.write_deps_file.gather_nested_deps\'/9", Ext_13, ModuleName_11, &ModuleExtName_17, STATE_VARIABLE_Cache_0_20, &STATE_VARIABLE_Cache_25_25);
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0]));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (parse_tree__write_deps_file__gather_nested_deps_9_p_0_1));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_33, 3) = ((MR_Box) (Globals_10));
    MR_hl_field(0, Var_33, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_deps_file.make_module_file_names_with_ext\'/8"));
    MR_hl_field(0, Var_33, 5) = ((MR_Box) (Ext_13));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_33, NestedDeps_12, &NestedDepsFileNames_18, ((MR_Box) (STATE_VARIABLE_Cache_25_25)), &conv3_STATE_VARIABLE_Cache_21, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_23);
  *STATE_VARIABLE_Cache_21 = ((MR_Word) (conv3_STATE_VARIABLE_Cache_21));
  ExtStr_19 = parse_tree__file_names__extension_to_string_2_f_0(Globals_10, Ext_13);
  Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "nested_deps_for_", ExtStr_19);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRule_14 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Var_29));
    MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, base, 3) = ((MR_Box) (ModuleExtName_17));
    MR_hl_field(3, base, 4) = ((MR_Box) (NestedDepsFileNames_18));
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
        MR_Word IntFIMS_67 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_10, (MR_Integer) 5))));
        MR_Word ImpFIMS_68 = ((MR_Word) ((MR_hl_field(0, ParseTreeInt2_10, (MR_Integer) 6))));
        MR_Word Var_69;
        MR_Word Var_70;
        MR_Word Var_71;

        {
          Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_71, 0) = ((MR_Box) (STATE_VARIABLE_FIMSpecs_0_12));
          MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_70, 0) = ((MR_Box) (ImpFIMS_68));
          MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_71));
        }
        {
          Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_69, 0) = ((MR_Box) (IntFIMS_67));
          MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_70));
        }
        *STATE_VARIABLE_FIMSpecs_13 = mercury__set__union_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_69);
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
parse_tree__write_deps_file__record_write_deps_file_cache_stats_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__write_deps_file__write_cache_stats_entry_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
parse_tree__write_deps_file__record_write_deps_file_cache_stats_2_p_0(void)
{
  MR_bool succeeded;
  MR_Word Map_4;

{
#define MR_PROC_LABEL parse_tree__write_deps_file__record_write_deps_file_cache_stats_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__write_deps_file__mutable_variable_module_file_name_cache_stats_lock, "parse_tree__write_deps_file__mutable_variable_module_file_name_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__write_deps_file__record_write_deps_file_cache_stats_2_p_0

	MR_Word X;

		{
X = parse_tree__write_deps_file__mutable_variable_module_file_name_cache_stats;


		;}
#undef MR_PROC_LABEL
	Map_4  = X;
}
{
#define MR_PROC_LABEL parse_tree__write_deps_file__record_write_deps_file_cache_stats_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__write_deps_file__mutable_variable_module_file_name_cache_stats_lock, "parse_tree__write_deps_file__mutable_variable_module_file_name_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_cache_stats_0), Map_4);
  if (!(succeeded))
  {
    MR_Word Result_5;

    mercury__io__open_append_4_p_0((MR_String) "/tmp/WRITE_DEPS_FILE_CACHE_STATS", &Result_5);
    if (!(((MR_tag((MR_Word) Result_5)) == (MR_Integer) 1)))
    {
      MR_Word OutStream_7 = ((MR_Word) ((MR_hl_field(0, Result_5, (MR_Integer) 0))));
      MR_Word Var_13;
      MR_Box conv0_STATE_VARIABLE_IO_14_14;

      {
        Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_13, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_10[2]));
        MR_hl_field(0, Var_13, 1) = ((MR_Box) (parse_tree__write_deps_file__record_write_deps_file_cache_stats_2_p_0_1));
        MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_13, 3) = ((MR_Box) (OutStream_7));
      }
      mercury__map__foldl_4_p_2((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_cache_stats_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_13, Map_4, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14_14);
      mercury__io__close_output_3_p_0(OutStream_7);
    }
  }
}

void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_dep_file_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String SourceFileName_10,
  MR_Word ModuleName_11,
  MR_Word DepsMap_12)
{
  MR_Word Verbose_14;
  MR_String DepFileName_15;
  MR_String CreatingMsg_16;
  MR_Word DepResult_17;
  MR_String Var_51;

  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 72, &Verbose_14);
  parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dependencies_write_dep_file\'/7", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[1])), ModuleName_11, &DepFileName_15);
  Var_51 = mercury__string__f_43_43_2_f_0(DepFileName_15, (MR_String) "\'...\n");
  CreatingMsg_16 = mercury__string__f_43_43_2_f_0((MR_String) "% Creating auto-dependency file \140", Var_51);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_14, CreatingMsg_16);
  mercury__io__open_output_4_p_0(DepFileName_15, &DepResult_17);
  if (((MR_tag((MR_Word) DepResult_17)) == (MR_Integer) 1))
  {
    MR_Word IOError_20 = ((MR_Word) ((MR_hl_field(1, DepResult_17, (MR_Integer) 0))));
    MR_String IOErrorMessage_21;
    MR_String DepMessage_22;
    MR_String Var_54;
    MR_String Var_55;

    libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_14, (MR_String) " failed.\n");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_14);
    mercury__io__error_message_2_p_0(IOError_20, &IOErrorMessage_21);
    Var_54 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", IOErrorMessage_21);
    Var_55 = mercury__string__f_43_43_2_f_0(DepFileName_15, Var_54);
    DepMessage_22 = mercury__string__f_43_43_2_f_0((MR_String) "error opening file \140", Var_55);
    libs__file_util__report_error_4_p_0(ProgressStream_8, DepMessage_22);
  }
  else
  {
    MR_Word DepStream_18 = ((MR_Word) ((MR_hl_field(0, DepResult_17, (MR_Integer) 0))));
    MR_Word MmakeFile_19;

    parse_tree__write_deps_file__generate_dep_file_7_p_0(Globals_9, SourceFileName_10, ModuleName_11, DepsMap_12, &MmakeFile_19);
    libs__mmakefiles__write_mmakefile_4_p_0(DepStream_18, MmakeFile_19);
    mercury__io__close_output_3_p_0(DepStream_18);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_14, (MR_String) "% done.\n");
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MmakeRule_13;

  parse_tree__write_deps_file__generate_dep_file_collective_target_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Tuple) (wrapper_arg_1)), &conv0_MmakeRule_13);
  *wrapper_arg_2 = ((MR_Box) (conv0_MmakeRule_13));
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
  MR_Word STATE_VARIABLE_MmakeFile_82_82;
  MR_Word STATE_VARIABLE_MmakeFile_83_83;
  MR_Word STATE_VARIABLE_MmakeFile_84_84;
  MR_Word STATE_VARIABLE_MmakeFile_86_86;
  MR_Word STATE_VARIABLE_MmakeFile_88_88;
  MR_Word STATE_VARIABLE_MmakeFile_90_90;
  MR_Word MmakeRules_92;
  MR_Word Var_93;
  MR_Box conv1_STATE_VARIABLE_IO_91_91;

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
  parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_8, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file\'/7", (MR_Word) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_4[0])), ModuleName_10, &InitFileName_19);
  parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_8, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file\'/7", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[28])), ModuleName_10, &InitCFileName_20);
  parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_8, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file\'/7", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[29])), ModuleName_10, &InitObjFileName_21);
  parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_8, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file\'/7", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[30])), ModuleName_10, &InitPicObjFileName_22);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 156, &MmcMakeDeps_23);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 502, &Intermod_24);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 506, &TransOpt_25);
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
        MR_String Var_68;

        Var_68 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".module_deps)");
        ModuleDepsVar_26 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_68);
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
        MR_String Var_73;

        Var_73 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".all_opts)");
        OptsVar_29 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_73);
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
        MR_String Var_78;

        Var_78 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".all_trans_opts)");
        TransOptsVar_32 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_78);
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
  libs__mmakefiles__start_mmakefile_1_p_0(&STATE_VARIABLE_MmakeFile_82_82);
  libs__mmakefiles__add_mmake_entry_3_p_0(MmakeStartComment_17, STATE_VARIABLE_MmakeFile_82_82, &STATE_VARIABLE_MmakeFile_83_83);
  parse_tree__write_deps_file__generate_dep_file_exec_library_targets_15_p_0(Globals_8, ModuleName_10, ModuleMakeVarName_18, InitFileName_19, InitObjFileName_21, MaybeOptsVar_30, MaybeTransOptsVar_33, &ExeFileName_38, &JarFileName_39, &LibFileName_40, &SharedLibFileName_41, STATE_VARIABLE_MmakeFile_83_83, &STATE_VARIABLE_MmakeFile_84_84);
  parse_tree__write_deps_file__generate_dep_file_init_targets_11_p_0(Globals_8, ModuleName_10, ModuleMakeVarName_18, InitCFileName_20, InitFileName_19, &DepFileName_42, &DvFileName_43, STATE_VARIABLE_MmakeFile_84_84, &STATE_VARIABLE_MmakeFile_86_86);
  parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0(Globals_8, ModuleName_10, DepsMap_11, ModuleMakeVarName_18, MmcMakeDeps_23, Intermod_24, TransOpt_25, MaybeModuleDepsVarPair_35, MaybeOptsVarPair_36, MaybeTransOptsVarPair_37, STATE_VARIABLE_MmakeFile_86_86, &STATE_VARIABLE_MmakeFile_88_88);
  {
    Var_93 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_93, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_11[0]));
    MR_hl_field(0, Var_93, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_7_p_0_1));
    MR_hl_field(0, Var_93, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_93, 3) = ((MR_Box) (Globals_8));
    MR_hl_field(0, Var_93, 4) = ((MR_Box) (ModuleName_10));
    MR_hl_field(0, Var_93, 5) = ((MR_Box) (ModuleMakeVarName_18));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__write_deps_file_scalar_common_3[1]), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_93, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[96])), &MmakeRules_92, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_91_91);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRules_92, STATE_VARIABLE_MmakeFile_88_88, &STATE_VARIABLE_MmakeFile_90_90);
  parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0(Globals_8, ModuleName_10, ModuleMakeVarName_18, ExeFileName_38, InitCFileName_20, InitObjFileName_21, InitPicObjFileName_22, InitFileName_19, LibFileName_40, SharedLibFileName_41, JarFileName_39, DepFileName_42, DvFileName_43, STATE_VARIABLE_MmakeFile_90_90, STATE_VARIABLE_MmakeFile_44);
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
  MR_String Var_139;
  MR_Word Var_141;
  MR_Word Var_142;
  MR_Word Var_143;
  MR_Word Var_144;
  MR_Word Var_145;
  MR_Word Var_146;
  MR_Word Var_148;
  MR_Word Var_152;
  MR_Word Var_155;
  MR_Word Var_156;
  MR_Word Var_161;
  MR_Word Var_162;
  MR_Word Var_164;
  MR_String Var_165;
  MR_Word Var_168;
  MR_String Var_176;
  MR_String Var_179;

  parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_18, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_clean_targets\'/17", (MR_Word) (&parse_tree__write_deps_file_scalar_common_4[2]), ModuleName_19, &CleanTargetName_33);
  parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_18, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_clean_targets\'/17", (MR_Word) (&parse_tree__write_deps_file_scalar_common_4[19]), ModuleName_19, &RealCleanTargetName_34);
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (InitPicObjFileName_24));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (InitObjFileName_23));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_78));
  }
  {
    CleanFiles_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CleanFiles_36, 0) = ((MR_Box) (InitCFileName_22));
    MR_hl_field(1, CleanFiles_36, 1) = ((MR_Box) (Var_77));
  }
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (CleanTargetName_33));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_80 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_80, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_80, 1) = ((MR_Box) ((MR_String) "clean_local"));
    MR_hl_field(3, Var_80, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_80, 3) = ((MR_Box) ((MR_String) "clean_local"));
    MR_hl_field(3, Var_80, 4) = ((MR_Box) (Var_84));
    MR_hl_field(3, Var_80, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_94 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_94, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[9]));
    MR_hl_field(0, Var_94, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_clean_targets_17_p_0_1));
    MR_hl_field(0, Var_94, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_94, 3) = ((MR_Box) (ModuleMakeVarName_20));
  }
  Var_93 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_94, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[109])));
  Var_176 = mercury__string__join_list_2_f_0((MR_String) " ", CleanFiles_36);
  Var_96 = mercury__string__f_43_43_2_f_0((MR_String) "-rm -f ", Var_176);
  {
    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_95, 0) = ((MR_Box) (Var_96));
    MR_hl_field(1, Var_95, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_93, Var_95);
  {
    Var_88 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_88, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_88, 1) = ((MR_Box) ((MR_String) "clean_target"));
    MR_hl_field(3, Var_88, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, Var_88, 3) = ((MR_Box) (CleanTargetName_33));
    MR_hl_field(3, Var_88, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_88, 5) = ((MR_Box) (Var_92));
  }
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (Var_88));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRulesClean_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MmakeRulesClean_37, 0) = ((MR_Box) (Var_80));
    MR_hl_field(1, MmakeRulesClean_37, 1) = ((MR_Box) (Var_87));
  }
  Var_139 = mercury__string__f_43_43_2_f_0(ExeFileName_21, (MR_String) "\044(EXT_FOR_EXE) ");
  {
    Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_146, 0) = ((MR_Box) (DvFileName_30));
    MR_hl_field(1, Var_146, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_145, 0) = ((MR_Box) (DepFileName_29));
    MR_hl_field(1, Var_145, 1) = ((MR_Box) (Var_146));
  }
  {
    Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_144, 0) = ((MR_Box) (JarFileName_28));
    MR_hl_field(1, Var_144, 1) = ((MR_Box) (Var_145));
  }
  {
    Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_143, 0) = ((MR_Box) (SharedLibFileName_27));
    MR_hl_field(1, Var_143, 1) = ((MR_Box) (Var_144));
  }
  {
    Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_142, 0) = ((MR_Box) (LibFileName_26));
    MR_hl_field(1, Var_142, 1) = ((MR_Box) (Var_143));
  }
  {
    Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_141, 0) = ((MR_Box) (InitFileName_25));
    MR_hl_field(1, Var_141, 1) = ((MR_Box) (Var_142));
  }
  {
    RealCleanFiles_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RealCleanFiles_39, 0) = ((MR_Box) (Var_139));
    MR_hl_field(1, RealCleanFiles_39, 1) = ((MR_Box) (Var_141));
  }
  {
    Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_152, 0) = ((MR_Box) (RealCleanTargetName_34));
    MR_hl_field(1, Var_152, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_148 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_148, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_148, 1) = ((MR_Box) ((MR_String) "realclean_local"));
    MR_hl_field(3, Var_148, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_148, 3) = ((MR_Box) ((MR_String) "realclean_local"));
    MR_hl_field(3, Var_148, 4) = ((MR_Box) (Var_152));
    MR_hl_field(3, Var_148, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_162 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_94, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[129])));
  Var_179 = mercury__string__join_list_2_f_0((MR_String) " ", RealCleanFiles_39);
  Var_165 = mercury__string__f_43_43_2_f_0((MR_String) "-rm -f ", Var_179);
  {
    Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_164, 0) = ((MR_Box) (Var_165));
    MR_hl_field(1, Var_164, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_161 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_162, Var_164);
  {
    Var_156 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_156, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_156, 1) = ((MR_Box) ((MR_String) "realclean_target"));
    MR_hl_field(3, Var_156, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, Var_156, 3) = ((MR_Box) (RealCleanTargetName_34));
    MR_hl_field(3, Var_156, 4) = ((MR_Box) (Var_84));
    MR_hl_field(3, Var_156, 5) = ((MR_Box) (Var_161));
  }
  {
    Var_155 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_155, 0) = ((MR_Box) (Var_156));
    MR_hl_field(1, Var_155, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRulesRealClean_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MmakeRulesRealClean_40, 0) = ((MR_Box) (Var_148));
    MR_hl_field(1, MmakeRulesRealClean_40, 1) = ((MR_Box) (Var_155));
  }
  Var_168 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), MmakeRulesClean_37, MmakeRulesRealClean_40);
  libs__mmakefiles__add_mmake_entries_3_p_0(Var_168, STATE_VARIABLE_MmakeFile_0_41, STATE_VARIABLE_MmakeFile_42);
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
  (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_92 = ((MR_Word) ((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv0_Var_92));
  parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_2(env_ptr);
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_2(
  void * env_ptr_arg)
{
  struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s * env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_42 = ((((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_92, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_43 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_92, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_92, (MR_Integer) 0)));
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

    (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__BurdenedModule_352 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__Var_92, (MR_Integer) 1))));
    Var_353 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__BurdenedModule_352, (MR_Integer) 0))));
    (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__BurdenedModule_352, (MR_Integer) 1))));
    Var_354 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 0))));
    Var_355 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 1))));
    (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__IncludeMap_45 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 2))));
    Var_356 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 3))));
    Var_357 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 4))));
    Var_358 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 5))));
    Var_359 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 6))));
    Var_360 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 7))));
    Var_361 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 8))));
    Var_362 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 9))));
    Var_363 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 10))));
    Var_364 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 11))));
    Var_365 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 12))));
    Var_366 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 13))));
    Var_367 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 14))));
    Var_368 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 15))));
    Var_369 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 16))));
    Var_370 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 17))));
    Var_371 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 18))));
    Var_372 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 19))));
    Var_373 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 20))));
    Var_374 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 21))));
    Var_375 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 22))));
    Var_376 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 23))));
    Var_377 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 24))));
    Var_378 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 25))));
    Var_379 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 26))));
    Var_380 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 27))));
    Var_381 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 28))));
    Var_382 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 29))));
    Var_383 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 30))));
    Var_384 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 31))));
    Var_385 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 32))));
    Var_386 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 33))));
    Var_387 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 34))));
    Var_388 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__ParseTreeModuleSrc_44, (MR_Integer) 35))));
    (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = mercury__map__is_empty_1_p_0((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_389_389, (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__IncludeMap_45);
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
        (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_389_389 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
        mercury__map__member_3_p_0((env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__TypeCtorInfo_389_389, (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), (env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__DepsMap_17, &(env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv1_Var_41, &(env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__conv0_Var_92, parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_3, env_ptr);
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
  MR_Word STATE_VARIABLE_MmakeFile_0_66,
  MR_Word * STATE_VARIABLE_MmakeFile_67)
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
    MR_String SpaceInt0Str_46;
    MR_String MaybeModuleVarNameInt0sSpace_48;
    MR_Word MaybeModuleVarNameInt0s_49;
    MR_String MaybeSpaceTransOptStr_50;
    MR_String MaybeSpaceDepStr_51;
    MR_String LibInstallIntsFiles_52;
    MR_Word MmakeRuleLibInstallInts_53;
    MR_Word LibInstallOptsSources_54;
    MR_Word LibInstallOptsActions_55;
    MR_Word MmakeRuleLibInstallOpts_57;
    MR_String ModuleMakeVarNameMhs_58;
    MR_Word MmakeRuleLibInstallHdrsNoMhs_59;
    MR_Word MmakeRuleLibInstallHdrsMhs_60;
    MR_Word MmakeFragmentLibInstallHdrs_61;
    MR_String ModuleMakeVarNameMihs_62;
    MR_Word MmakeRuleLibInstallGradeHdrsNoMihs_63;
    MR_Word MmakeRuleLibInstallGradeHdrsMihs_64;
    MR_Word MmakeFragmentLibInstallGradeHdrs_65;
    MR_String Var_87;
    MR_String Var_90;
    MR_String Var_99;
    MR_String Var_100;
    MR_String Var_102;
    MR_String Var_103;
    MR_String Var_105;
    MR_String Var_106;
    MR_String Var_107;
    MR_String Var_108;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Word Var_116;
    MR_Word Var_117;
    MR_Word Var_118;
    MR_Word Var_119;
    MR_Word Var_123;
    MR_String Var_124;
    MR_String Var_126;
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
    MR_Word Var_152;
    MR_String Var_153;
    MR_String Var_155;
    MR_String Var_156;
    MR_String Var_157;
    MR_String Var_158;
    MR_Word Var_248;
    MR_Word Var_252;
    MR_String Var_253;
    MR_Word Var_261;
    MR_String Var_262;
    MR_String Var_264;
    MR_Word Var_273;
    MR_Word Var_281;
    MR_Word Var_285;
    MR_String Var_286;
    MR_Word Var_294;
    MR_String Var_295;
    MR_String Var_297;
    MR_Word Var_346;
    MR_Word STATE_VARIABLE_MmakeFile_348_348;
    MR_Word STATE_VARIABLE_MmakeFile_349_349;
    MR_Word STATE_VARIABLE_MmakeFile_350_350;
    MR_String Var_394;
    MR_String Var_397;

    parse_tree__file_names__module_name_to_lib_file_name_6_p_0(Globals_15, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_install_targets\'/14", (MR_String) "lib", (MR_Word) (&parse_tree__write_deps_file_scalar_common_4[12]), ModuleName_16, &LibInstallIntsTargetName_33);
    parse_tree__file_names__module_name_to_lib_file_name_6_p_0(Globals_15, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_install_targets\'/14", (MR_String) "lib", (MR_Word) (&parse_tree__write_deps_file_scalar_common_4[9]), ModuleName_16, &LibInstallOptsTargetName_34);
    parse_tree__file_names__module_name_to_lib_file_name_6_p_0(Globals_15, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_install_targets\'/14", (MR_String) "lib", (MR_Word) (&parse_tree__write_deps_file_scalar_common_4[13]), ModuleName_16, &LibInstallHdrsTargetName_35);
    parse_tree__file_names__module_name_to_lib_file_name_6_p_0(Globals_15, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_install_targets\'/14", (MR_String) "lib", (MR_Word) (&parse_tree__write_deps_file_scalar_common_4[1]), ModuleName_16, &LibInstallGradeHdrsTargetName_36);
    Var_87 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".ints)");
    ModuleMakeVarNameInts_37 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_87);
    Var_90 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".int3s)");
    ModuleMakeVarNameInt3s_38 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_90);
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
      MR_String ModuleVarNameInt0s_47;
      MR_String Var_94;

      SpaceInt0Str_46 = (MR_String) " int0";
      Var_94 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".int0s)");
      ModuleVarNameInt0s_47 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_94);
      MaybeModuleVarNameInt0sSpace_48 = mercury__string__f_43_43_2_f_0(ModuleVarNameInt0s_47, (MR_String) " ");
      {
        MaybeModuleVarNameInt0s_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeModuleVarNameInt0s_49, 0) = ((MR_Box) (ModuleVarNameInt0s_47));
        MR_hl_field(1, MaybeModuleVarNameInt0s_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      SpaceInt0Str_46 = (MR_String) "";
      MaybeModuleVarNameInt0sSpace_48 = (MR_String) "";
      MaybeModuleVarNameInt0s_49 = (MR_Word) ((MR_Unsigned) 0U);
    }
    switch (TransOpt_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeSpaceTransOptStr_50 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        MaybeSpaceTransOptStr_50 = (MR_String) " trans_opt";
        break;
    }
    switch (MmcMakeDeps_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeSpaceDepStr_51 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        MaybeSpaceDepStr_51 = (MR_String) " module_dep";
        break;
    }
    Var_108 = mercury__string__f_43_43_2_f_0(MaybeModuleDepsVarSpace_32, (MR_String) "\"");
    Var_107 = mercury__string__f_43_43_2_f_0(MaybeTransOptsVarSpace_30, Var_108);
    Var_106 = mercury__string__f_43_43_2_f_0(MaybeOptsVarSpace_28, Var_107);
    Var_105 = mercury__string__f_43_43_2_f_0(MaybeModuleVarNameInt0sSpace_48, Var_106);
    Var_103 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_105);
    Var_102 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInt3s_38, Var_103);
    Var_100 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_102);
    Var_99 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInts_37, Var_100);
    LibInstallIntsFiles_52 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_99);
    {
      Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_114, 0) = ((MR_Box) (ModuleMakeVarNameInt3s_38));
      MR_hl_field(1, Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_113, 0) = ((MR_Box) (ModuleMakeVarNameInts_37));
      MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_114));
    }
    Var_119 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeModuleDepsVar_31, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[33])));
    Var_118 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTransOptsVar_29, Var_119);
    Var_117 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeOptsVar_27, Var_118);
    Var_116 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeModuleVarNameInt0s_49, Var_117);
    Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_113, Var_116);
    Var_126 = mercury__string__f_43_43_2_f_0(LibInstallIntsFiles_52, (MR_String) "; \\");
    Var_124 = mercury__string__f_43_43_2_f_0((MR_String) "files=", Var_126);
    Var_158 = mercury__string__f_43_43_2_f_0(MaybeSpaceDepStr_51, (MR_String) "; do \\");
    Var_157 = mercury__string__f_43_43_2_f_0(MaybeSpaceTransOptStr_50, Var_158);
    Var_156 = mercury__string__f_43_43_2_f_0(MaybeSpaceOptStr_39, Var_157);
    Var_155 = mercury__string__f_43_43_2_f_0(SpaceInt0Str_46, Var_156);
    Var_153 = mercury__string__f_43_43_2_f_0((MR_String) "for ext in int int2 int3", Var_155);
    {
      Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_152, 0) = ((MR_Box) (Var_153));
      MR_hl_field(1, Var_152, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[41])));
    }
    {
      Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_150, 0) = ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'."));
      MR_hl_field(1, Var_150, 1) = ((MR_Box) (Var_152));
    }
    {
      Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_148, 0) = ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use"));
      MR_hl_field(1, Var_148, 1) = ((MR_Box) (Var_150));
    }
    {
      Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_146, 0) = ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option."));
      MR_hl_field(1, Var_146, 1) = ((MR_Box) (Var_148));
    }
    {
      Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_144, 0) = ((MR_Box) ((MR_String) "done"));
      MR_hl_field(1, Var_144, 1) = ((MR_Box) (Var_146));
    }
    {
      Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_142, 0) = ((MR_Box) ((MR_String) "\tfi; \\"));
      MR_hl_field(1, Var_142, 1) = ((MR_Box) (Var_144));
    }
    {
      Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_140, 0) = ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\"));
      MR_hl_field(1, Var_140, 1) = ((MR_Box) (Var_142));
    }
    {
      Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_138, 0) = ((MR_Box) ((MR_String) "\t\techo \"installing \044\044target\"; \\"));
      MR_hl_field(1, Var_138, 1) = ((MR_Box) (Var_140));
    }
    {
      Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_136, 0) = ((MR_Box) ((MR_String) "\telse \\"));
      MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_138));
    }
    {
      Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_134, 0) = ((MR_Box) ((MR_String) "\t\techo \"\044\044target unchanged\"; \\"));
      MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_136));
    }
    {
      Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_132, 0) = ((MR_Box) ((MR_String) "\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\"));
      MR_hl_field(1, Var_132, 1) = ((MR_Box) (Var_134));
    }
    {
      Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_130, 0) = ((MR_Box) ((MR_String) "\ttarget=\"\044(INSTALL_INT_DIR)/\140basename \044\044file\140\"; \\"));
      MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_132));
    }
    {
      Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_128, 0) = ((MR_Box) ((MR_String) "for file in \044\044files; do \\"));
      MR_hl_field(1, Var_128, 1) = ((MR_Box) (Var_130));
    }
    {
      Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_123, 0) = ((MR_Box) (Var_124));
      MR_hl_field(1, Var_123, 1) = ((MR_Box) (Var_128));
    }
    {
      MmakeRuleLibInstallInts_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallInts_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallInts_53, 1) = ((MR_Box) ((MR_String) "lib_install_ints"));
      MR_hl_field(3, MmakeRuleLibInstallInts_53, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallInts_53, 3) = ((MR_Box) (LibInstallIntsTargetName_33));
      MR_hl_field(3, MmakeRuleLibInstallInts_53, 4) = ((MR_Box) (Var_112));
      MR_hl_field(3, MmakeRuleLibInstallInts_53, 5) = ((MR_Box) (Var_123));
    }
    (env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = (Intermod_20 == (MR_Integer) 0);
    if ((env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded)
      (env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded = (TransOpt_21 == (MR_Integer) 0);
    if ((env).parse_tree__write_deps_file__generate_dep_file_install_targets_14_p_0_env_0__succeeded)
    {
      MR_String Var_177;

      LibInstallOptsSources_54 = (MR_Word) ((MR_Unsigned) 0U);
      Var_177 = libs__mmakefiles__silent_noop_action_0_f_0();
      {
        LibInstallOptsActions_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, LibInstallOptsActions_55, 0) = ((MR_Box) (Var_177));
        MR_hl_field(1, LibInstallOptsActions_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_String LibInstallOptsFiles_56;
      MR_Word Var_179;
      MR_String Var_184;
      MR_String Var_185;
      MR_String Var_187;
      MR_String Var_189;
      MR_Word Var_191;
      MR_Word Var_193;
      MR_Word Var_195;
      MR_Word Var_197;
      MR_Word Var_199;
      MR_Word Var_201;
      MR_Word Var_203;
      MR_Word Var_205;
      MR_Word Var_207;
      MR_Word Var_209;
      MR_Word Var_211;
      MR_Word Var_213;
      MR_Word Var_215;
      MR_String Var_216;
      MR_String Var_218;
      MR_String Var_219;

      Var_179 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTransOptsVar_29, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[42])));
      LibInstallOptsSources_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeOptsVar_27, Var_179);
      Var_185 = mercury__string__f_43_43_2_f_0(MaybeTransOptsVarSpace_30, (MR_String) "\"");
      Var_184 = mercury__string__f_43_43_2_f_0(MaybeOptsVarSpace_28, Var_185);
      LibInstallOptsFiles_56 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_184);
      Var_189 = mercury__string__f_43_43_2_f_0(LibInstallOptsFiles_56, (MR_String) "; \\");
      Var_187 = mercury__string__f_43_43_2_f_0((MR_String) "files=", Var_189);
      Var_219 = mercury__string__f_43_43_2_f_0(MaybeSpaceTransOptStr_50, (MR_String) "; do \\");
      Var_218 = mercury__string__f_43_43_2_f_0(MaybeSpaceOptStr_39, Var_219);
      Var_216 = mercury__string__f_43_43_2_f_0((MR_String) "for ext in ", Var_218);
      {
        Var_215 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_215, 0) = ((MR_Box) (Var_216));
        MR_hl_field(1, Var_215, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[49])));
      }
      {
        Var_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_213, 0) = ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'."));
        MR_hl_field(1, Var_213, 1) = ((MR_Box) (Var_215));
      }
      {
        Var_211 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_211, 0) = ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use"));
        MR_hl_field(1, Var_211, 1) = ((MR_Box) (Var_213));
      }
      {
        Var_209 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_209, 0) = ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option"));
        MR_hl_field(1, Var_209, 1) = ((MR_Box) (Var_211));
      }
      {
        Var_207 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_207, 0) = ((MR_Box) ((MR_String) "done"));
        MR_hl_field(1, Var_207, 1) = ((MR_Box) (Var_209));
      }
      {
        Var_205 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_205, 0) = ((MR_Box) ((MR_String) "\tfi; \\"));
        MR_hl_field(1, Var_205, 1) = ((MR_Box) (Var_207));
      }
      {
        Var_203 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_203, 0) = ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\"));
        MR_hl_field(1, Var_203, 1) = ((MR_Box) (Var_205));
      }
      {
        Var_201 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_201, 0) = ((MR_Box) ((MR_String) "\t\techo \"installing \044\044target\"; \\"));
        MR_hl_field(1, Var_201, 1) = ((MR_Box) (Var_203));
      }
      {
        Var_199 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_199, 0) = ((MR_Box) ((MR_String) "\telse \\"));
        MR_hl_field(1, Var_199, 1) = ((MR_Box) (Var_201));
      }
      {
        Var_197 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_197, 0) = ((MR_Box) ((MR_String) "\t\techo \"\044\044target unchanged\"; \\"));
        MR_hl_field(1, Var_197, 1) = ((MR_Box) (Var_199));
      }
      {
        Var_195 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_195, 0) = ((MR_Box) ((MR_String) "\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\"));
        MR_hl_field(1, Var_195, 1) = ((MR_Box) (Var_197));
      }
      {
        Var_193 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_193, 0) = ((MR_Box) ((MR_String) "\ttarget=\"\044(INSTALL_GRADE_INT_DIR)/\140basename \044\044file\140\";\\"));
        MR_hl_field(1, Var_193, 1) = ((MR_Box) (Var_195));
      }
      {
        Var_191 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_191, 0) = ((MR_Box) ((MR_String) "for file in \044\044files; do \\"));
        MR_hl_field(1, Var_191, 1) = ((MR_Box) (Var_193));
      }
      {
        LibInstallOptsActions_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, LibInstallOptsActions_55, 0) = ((MR_Box) (Var_187));
        MR_hl_field(1, LibInstallOptsActions_55, 1) = ((MR_Box) (Var_191));
      }
    }
    {
      MmakeRuleLibInstallOpts_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallOpts_57, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallOpts_57, 1) = ((MR_Box) ((MR_String) "lib_install_opts"));
      MR_hl_field(3, MmakeRuleLibInstallOpts_57, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallOpts_57, 3) = ((MR_Box) (LibInstallOptsTargetName_34));
      MR_hl_field(3, MmakeRuleLibInstallOpts_57, 4) = ((MR_Box) (LibInstallOptsSources_54));
      MR_hl_field(3, MmakeRuleLibInstallOpts_57, 5) = ((MR_Box) (LibInstallOptsActions_55));
    }
    Var_394 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".mhs)");
    ModuleMakeVarNameMhs_58 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_394);
    {
      Var_248 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_248, 0) = ((MR_Box) (ModuleMakeVarNameMhs_58));
      MR_hl_field(1, Var_248, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[33])));
    }
    Var_253 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_252 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_252, 0) = ((MR_Box) (Var_253));
      MR_hl_field(1, Var_252, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRuleLibInstallHdrsNoMhs_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_59, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_59, 1) = ((MR_Box) ((MR_String) "install_lib_hdrs_nomhs"));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_59, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_59, 3) = ((MR_Box) (LibInstallHdrsTargetName_35));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_59, 4) = ((MR_Box) (Var_248));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_59, 5) = ((MR_Box) (Var_252));
    }
    Var_264 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameMhs_58, (MR_String) "; do \\");
    Var_262 = mercury__string__f_43_43_2_f_0((MR_String) "for hdr in ", Var_264);
    {
      Var_261 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_261, 0) = ((MR_Box) (Var_262));
      MR_hl_field(1, Var_261, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[51])));
    }
    {
      MmakeRuleLibInstallHdrsMhs_60 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_60, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_60, 1) = ((MR_Box) ((MR_String) "install_lib_hdrs_mhs"));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_60, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_60, 3) = ((MR_Box) (LibInstallHdrsTargetName_35));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_60, 4) = ((MR_Box) (Var_248));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_60, 5) = ((MR_Box) (Var_261));
    }
    {
      Var_273 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_273, 0) = ((MR_Box) (ModuleMakeVarNameMhs_58));
      MR_hl_field(1, Var_273, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      MmakeFragmentLibInstallHdrs_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MmakeFragmentLibInstallHdrs_61, 0) = ((MR_Box) (Var_273));
      MR_hl_field(1, MmakeFragmentLibInstallHdrs_61, 1) = ((MR_Box) (MmakeRuleLibInstallHdrsNoMhs_59));
      MR_hl_field(1, MmakeFragmentLibInstallHdrs_61, 2) = ((MR_Box) (MmakeRuleLibInstallHdrsMhs_60));
    }
    Var_397 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".mihs)");
    ModuleMakeVarNameMihs_62 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_397);
    {
      Var_281 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_281, 0) = ((MR_Box) (ModuleMakeVarNameMihs_62));
      MR_hl_field(1, Var_281, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[42])));
    }
    Var_286 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_285 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_285, 0) = ((MR_Box) (Var_286));
      MR_hl_field(1, Var_285, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRuleLibInstallGradeHdrsNoMihs_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_63, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_63, 1) = ((MR_Box) ((MR_String) "install_grade_hdrs_no_mihs"));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_63, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_63, 3) = ((MR_Box) (LibInstallGradeHdrsTargetName_36));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_63, 4) = ((MR_Box) (Var_281));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_63, 5) = ((MR_Box) (Var_285));
    }
    Var_297 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameMihs_62, (MR_String) "; do \\");
    Var_295 = mercury__string__f_43_43_2_f_0((MR_String) "for hdr in ", Var_297);
    {
      Var_294 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_294, 0) = ((MR_Box) (Var_295));
      MR_hl_field(1, Var_294, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[74])));
    }
    {
      MmakeRuleLibInstallGradeHdrsMihs_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_64, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_64, 1) = ((MR_Box) ((MR_String) "install_grade_hdrs_mihs"));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_64, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_64, 3) = ((MR_Box) (LibInstallGradeHdrsTargetName_36));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_64, 4) = ((MR_Box) (Var_281));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_64, 5) = ((MR_Box) (Var_294));
    }
    {
      Var_346 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_346, 0) = ((MR_Box) (ModuleMakeVarNameMihs_62));
      MR_hl_field(1, Var_346, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      MmakeFragmentLibInstallGradeHdrs_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MmakeFragmentLibInstallGradeHdrs_65, 0) = ((MR_Box) (Var_346));
      MR_hl_field(1, MmakeFragmentLibInstallGradeHdrs_65, 1) = ((MR_Box) (MmakeRuleLibInstallGradeHdrsNoMihs_63));
      MR_hl_field(1, MmakeFragmentLibInstallGradeHdrs_65, 2) = ((MR_Box) (MmakeRuleLibInstallGradeHdrsMihs_64));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleLibInstallInts_53, STATE_VARIABLE_MmakeFile_0_66, &STATE_VARIABLE_MmakeFile_348_348);
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleLibInstallOpts_57, STATE_VARIABLE_MmakeFile_348_348, &STATE_VARIABLE_MmakeFile_349_349);
    libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibInstallHdrs_61, STATE_VARIABLE_MmakeFile_349_349, &STATE_VARIABLE_MmakeFile_350_350);
    libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibInstallGradeHdrs_65, STATE_VARIABLE_MmakeFile_350_350, STATE_VARIABLE_MmakeFile_67);
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
  MR_String Var_45;
  MR_String Var_49;
  MR_String Var_50;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_String Var_63;
  MR_String Var_71;
  MR_String Var_74;
  MR_String Var_76;
  MR_String Var_77;
  MR_String Var_79;
  MR_Word Var_84;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_90;
  MR_Word Var_92;
  MR_Word Var_93;

  parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_init_targets\'/11", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[1])), ModuleName_13, DepFileName_17);
  parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_init_targets\'/11", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[0])), ModuleName_13, DvFileName_18);
  Var_45 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_14, (MR_String) ".all_cs)");
  ModuleMakeVarNameCs_21 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_45);
  InitAction1_22 = mercury__string__f_43_43_2_f_0((MR_String) "echo > ", InitFileName_16);
  Var_50 = mercury__string__f_43_43_2_f_0((MR_String) " >> ", InitFileName_16);
  Var_49 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameCs_21, Var_50);
  InitAction2_23 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MKLIBINIT) ", Var_49);
  InitAction3_24 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXTRA_INIT_COMMAND) >> ", InitFileName_16);
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (ModuleMakeVarNameCs_21));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (*DepFileName_17));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_56));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (InitAction3_24));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (InitAction2_23));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_60));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (InitAction1_22));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_59));
  }
  {
    MmakeRuleInitFile_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleInitFile_25, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleInitFile_25, 1) = ((MR_Box) ((MR_String) "init_file"));
    MR_hl_field(3, MmakeRuleInitFile_25, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleInitFile_25, 3) = ((MR_Box) (InitFileName_16));
    MR_hl_field(3, MmakeRuleInitFile_25, 4) = ((MR_Box) (Var_55));
    MR_hl_field(3, MmakeRuleInitFile_25, 5) = ((MR_Box) (Var_58));
  }
  ModuleFileName_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_13);
  Var_63 = mercury__string__f_43_43_2_f_0(ModuleFileName_26, (MR_String) "_init");
  ForceC2InitTarget_27 = mercury__string__f_43_43_2_f_0((MR_String) "force-", Var_63);
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
  Var_71 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_14, (MR_String) ".init_cs)");
  ModuleMakeVarNameInitCs_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_71);
  Var_79 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInitCs_30, (MR_String) " \044(ALL_C2INITARGS)");
  Var_77 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_79);
  Var_76 = mercury__string__f_43_43_2_f_0(TmpInitCFileName_29, Var_77);
  Var_74 = mercury__string__f_43_43_2_f_0((MR_String) "--init-c-file ", Var_76);
  InitCAction1_31 = mercury__string__f_43_43_2_f_0((MR_String) "\100\044(C2INIT) \044(ALL_GRADEFLAGS) \044(ALL_C2INITFLAGS) ", Var_74);
  InitCAction2_32 = mercury__string__f_43_43_2_f_0((MR_String) "\100mercury_update_interface ", InitCFileName_15);
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (ForceC2InitTarget_27));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_56));
  }
  {
    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_88, 0) = ((MR_Box) (InitCAction2_32));
    MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (InitCAction1_31));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_88));
  }
  {
    MmakeRuleInitCFile_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleInitCFile_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleInitCFile_33, 1) = ((MR_Box) ((MR_String) "init_c_file"));
    MR_hl_field(3, MmakeRuleInitCFile_33, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleInitCFile_33, 3) = ((MR_Box) (InitCFileName_15));
    MR_hl_field(3, MmakeRuleInitCFile_33, 4) = ((MR_Box) (Var_84));
    MR_hl_field(3, MmakeRuleInitCFile_33, 5) = ((MR_Box) (Var_87));
  }
  {
    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_93, 0) = ((MR_Box) (MmakeRuleInitCFile_33));
    MR_hl_field(1, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) (MmakeRuleForceInitCFile_28));
    MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_93));
  }
  {
    Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_90, 0) = ((MR_Box) (MmakeRuleInitFile_25));
    MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_92));
  }
  libs__mmakefiles__add_mmake_entries_3_p_0(Var_90, STATE_VARIABLE_MmakeFile_0_34, STATE_VARIABLE_MmakeFile_35);
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
  MR_Word STATE_VARIABLE_MmakeFile_0_65,
  MR_Word * STATE_VARIABLE_MmakeFile_66)
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
  MR_Word UseInstallName_43;
  MR_String InstallNameOpt_44;
  MR_String ModuleMakeVarNameInts_45;
  MR_String ModuleMakeVarNameInt3s_46;
  MR_Word AllIntSources_47;
  MR_Word MmakeRuleLibTargetJava_48;
  MR_Word MmakeRuleLibTargetNonJava_49;
  MR_Word MmakeFragmentLibTarget_50;
  MR_String ModuleMakeVarNamePicOs_51;
  MR_String SharedLibAction1Line1_52;
  MR_String SharedLibAction1Line2_53;
  MR_String SharedLibAction1Line3_54;
  MR_Word MmakeRuleSharedLib_55;
  MR_Word MmakeFragmentSharedLib_56;
  MR_String LibAction1_57;
  MR_String LibAction2Line1_58;
  MR_String LibAction2Line2_59;
  MR_String LibAction3_60;
  MR_Word MmakeRuleLib_61;
  MR_String ListClassFiles_62;
  MR_String JarAction1_63;
  MR_Word MmakeRuleJar_64;
  MR_Word Var_74;
  MR_String Var_75;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_String Var_87;
  MR_String Var_90;
  MR_String Var_93;
  MR_String Var_95;
  MR_String Var_99;
  MR_String Var_102;
  MR_String Var_105;
  MR_String Var_107;
  MR_String Var_108;
  MR_String Var_110;
  MR_String Var_113;
  MR_String Var_114;
  MR_String Var_116;
  MR_Word Var_120;
  MR_String Var_125;
  MR_Word Var_127;
  MR_Word Var_128;
  MR_Word Var_129;
  MR_Word Var_130;
  MR_Word Var_132;
  MR_Word Var_133;
  MR_String Var_157;
  MR_String Var_160;
  MR_Word Var_162;
  MR_Word Var_163;
  MR_Word Var_165;
  MR_Word Var_166;
  MR_Word Var_167;
  MR_Word Var_171;
  MR_Word Var_175;
  MR_Word Var_176;
  MR_String Var_181;
  MR_String Var_184;
  MR_String Var_186;
  MR_String Var_187;
  MR_String Var_189;
  MR_String Var_191;
  MR_String Var_194;
  MR_String Var_197;
  MR_Word Var_201;
  MR_Word Var_202;
  MR_Word Var_205;
  MR_Word Var_206;
  MR_Word Var_207;
  MR_Word Var_212;
  MR_Word Var_213;
  MR_String Var_218;
  MR_String Var_219;
  MR_String Var_221;
  MR_Word Var_227;
  MR_Word Var_228;
  MR_Word Var_230;
  MR_Word Var_231;
  MR_Word Var_232;
  MR_Word Var_233;
  MR_String Var_236;
  MR_String Var_237;
  MR_Word Var_243;
  MR_Word STATE_VARIABLE_MmakeFile_245_245;
  MR_Word STATE_VARIABLE_MmakeFile_246_246;
  MR_Word STATE_VARIABLE_MmakeFile_247_247;
  MR_Word STATE_VARIABLE_MmakeFile_248_248;
  MR_Word Var_249;
  MR_Word Var_251;

  parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_16, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_exec_library_targets\'/15", (MR_Word) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_4[3])), ModuleName_17, ExeFileName_23);
  Var_75 = mercury__string__f_43_43_2_f_0(*ExeFileName_23, (MR_String) "\044(EXT_FOR_EXE)");
  {
    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
    MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRuleExtForExe_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleExtForExe_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleExtForExe_29, 1) = ((MR_Box) ((MR_String) "ext_for_exe"));
    MR_hl_field(3, MmakeRuleExtForExe_29, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, MmakeRuleExtForExe_29, 3) = ((MR_Box) (*ExeFileName_23));
    MR_hl_field(3, MmakeRuleExtForExe_29, 4) = ((MR_Box) (Var_74));
    MR_hl_field(3, MmakeRuleExtForExe_29, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_83 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_83, 0) = ((MR_Box) (MmakeRuleExtForExe_29));
  }
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeFragmentExtForExe_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeFragmentExtForExe_30, 0) = ((MR_Box) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_2[31])));
    MR_hl_field(2, MmakeFragmentExtForExe_30, 1) = ((MR_Box) (Var_82));
    MR_hl_field(2, MmakeFragmentExtForExe_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_87 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ",\044(ALL_MLLIBS_DEP))");
  All_MLLibsDep_31 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", Var_87);
  Var_90 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ",\044(ALL_MLOBJS))");
  All_MLObjs_32 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", Var_90);
  Var_95 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ",\044(ALL_MLOBJS)))");
  Var_93 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", Var_95);
  All_MLPicObjs_33 = mercury__string__f_43_43_2_f_0((MR_String) "\044(patsubst %.o,%.\044(EXT_FOR_PIC_OBJECTS),", Var_93);
  NL_All_MLObjs_34 = mercury__string__f_43_43_2_f_0((MR_String) "\\\n\t\t", All_MLObjs_32);
  Var_99 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".classes)");
  ModuleMakeVarNameClasses_35 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_99);
  Var_102 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".all_os)");
  ModuleMakeVarNameOs_36 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_102);
  Var_110 = mercury__string__f_43_43_2_f_0(InitObjFileName_20, (MR_String) " \\");
  Var_108 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXT_FOR_EXE) ", Var_110);
  Var_107 = mercury__string__f_43_43_2_f_0(*ExeFileName_23, Var_108);
  Var_105 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXEFILE_OPT)", Var_107);
  NonJavaMainRuleAction1Line1_37 = mercury__string__f_43_43_2_f_0((MR_String) "\044(ML) \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) -- \044(ALL_LDFLAGS) ", Var_105);
  Var_116 = mercury__string__f_43_43_2_f_0(NL_All_MLObjs_34, (MR_String) " \044(ALL_MLLIBS)");
  Var_114 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_116);
  Var_113 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameOs_36, Var_114);
  NonJavaMainRuleAction1Line2_38 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_113);
  {
    Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_120, 0) = ((MR_Box) (ModuleMakeVarNameClasses_35));
    MR_hl_field(1, Var_120, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRuleExecutableJava_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleExecutableJava_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleExecutableJava_39, 1) = ((MR_Box) ((MR_String) "executable_java"));
    MR_hl_field(3, MmakeRuleExecutableJava_39, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleExecutableJava_39, 3) = ((MR_Box) (*ExeFileName_23));
    MR_hl_field(3, MmakeRuleExecutableJava_39, 4) = ((MR_Box) (Var_120));
    MR_hl_field(3, MmakeRuleExecutableJava_39, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_125 = mercury__string__f_43_43_2_f_0(*ExeFileName_23, (MR_String) "\044(EXT_FOR_EXE)");
  {
    Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_130, 0) = ((MR_Box) (All_MLLibsDep_31));
    MR_hl_field(1, Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_129, 0) = ((MR_Box) (All_MLObjs_32));
    MR_hl_field(1, Var_129, 1) = ((MR_Box) (Var_130));
  }
  {
    Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_128, 0) = ((MR_Box) (InitObjFileName_20));
    MR_hl_field(1, Var_128, 1) = ((MR_Box) (Var_129));
  }
  {
    Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_127, 0) = ((MR_Box) (ModuleMakeVarNameOs_36));
    MR_hl_field(1, Var_127, 1) = ((MR_Box) (Var_128));
  }
  {
    Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_133, 0) = ((MR_Box) (NonJavaMainRuleAction1Line2_38));
    MR_hl_field(1, Var_133, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_132, 0) = ((MR_Box) (NonJavaMainRuleAction1Line1_37));
    MR_hl_field(1, Var_132, 1) = ((MR_Box) (Var_133));
  }
  {
    MmakeRuleExecutableNonJava_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleExecutableNonJava_40, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleExecutableNonJava_40, 1) = ((MR_Box) ((MR_String) "executable_non_java"));
    MR_hl_field(3, MmakeRuleExecutableNonJava_40, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleExecutableNonJava_40, 3) = ((MR_Box) (Var_125));
    MR_hl_field(3, MmakeRuleExecutableNonJava_40, 4) = ((MR_Box) (Var_127));
    MR_hl_field(3, MmakeRuleExecutableNonJava_40, 5) = ((MR_Box) (Var_132));
  }
  {
    MmakeFragmentExecutable_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MmakeFragmentExecutable_41, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[10]));
    MR_hl_field(1, MmakeFragmentExecutable_41, 1) = ((MR_Box) (MmakeRuleExecutableJava_39));
    MR_hl_field(1, MmakeFragmentExecutable_41, 2) = ((MR_Box) (MmakeRuleExecutableNonJava_40));
  }
  parse_tree__file_names__module_name_to_lib_file_name_create_dirs_8_p_0(Globals_16, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_exec_library_targets\'/15", (MR_String) "lib", (MR_Word) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_4[3])), ModuleName_17, &LibTargetName_42);
  parse_tree__file_names__module_name_to_lib_file_name_create_dirs_8_p_0(Globals_16, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_exec_library_targets\'/15", (MR_String) "lib", (MR_Word) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_4[4])), ModuleName_17, LibFileName_25);
  parse_tree__file_names__module_name_to_lib_file_name_create_dirs_8_p_0(Globals_16, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_exec_library_targets\'/15", (MR_String) "lib", (MR_Word) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_4[5])), ModuleName_17, SharedLibFileName_26);
  parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_16, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dep_file_exec_library_targets\'/15", (MR_Word) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_4[1])), ModuleName_17, JarFileName_24);
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 657, &UseInstallName_43);
  switch (UseInstallName_43) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      InstallNameOpt_44 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      libs__file_util__get_install_name_option_3_p_0(Globals_16, *SharedLibFileName_26, &InstallNameOpt_44);
      break;
  }
  Var_157 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".ints)");
  ModuleMakeVarNameInts_45 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_157);
  Var_160 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".int3s)");
  ModuleMakeVarNameInt3s_46 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_160);
  {
    Var_163 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_163, 0) = ((MR_Box) (ModuleMakeVarNameInt3s_46));
    MR_hl_field(1, Var_163, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_162 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_162, 0) = ((MR_Box) (ModuleMakeVarNameInts_45));
    MR_hl_field(1, Var_162, 1) = ((MR_Box) (Var_163));
  }
  {
    Var_167 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_167, 0) = ((MR_Box) (InitFileName_19));
    MR_hl_field(1, Var_167, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_166 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTransOptsVar_22, Var_167);
  Var_165 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeOptsVar_21, Var_166);
  AllIntSources_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_162, Var_165);
  {
    Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_171, 0) = ((MR_Box) (*JarFileName_24));
    MR_hl_field(1, Var_171, 1) = ((MR_Box) (AllIntSources_47));
  }
  {
    MmakeRuleLibTargetJava_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleLibTargetJava_48, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleLibTargetJava_48, 1) = ((MR_Box) ((MR_String) "lib_target_java"));
    MR_hl_field(3, MmakeRuleLibTargetJava_48, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, MmakeRuleLibTargetJava_48, 3) = ((MR_Box) (LibTargetName_42));
    MR_hl_field(3, MmakeRuleLibTargetJava_48, 4) = ((MR_Box) (Var_171));
    MR_hl_field(3, MmakeRuleLibTargetJava_48, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_176, 0) = ((MR_Box) (*SharedLibFileName_26));
    MR_hl_field(1, Var_176, 1) = ((MR_Box) (AllIntSources_47));
  }
  {
    Var_175 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_175, 0) = ((MR_Box) (*LibFileName_25));
    MR_hl_field(1, Var_175, 1) = ((MR_Box) (Var_176));
  }
  {
    MmakeRuleLibTargetNonJava_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleLibTargetNonJava_49, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleLibTargetNonJava_49, 1) = ((MR_Box) ((MR_String) "lib_target_non_java"));
    MR_hl_field(3, MmakeRuleLibTargetNonJava_49, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, MmakeRuleLibTargetNonJava_49, 3) = ((MR_Box) (LibTargetName_42));
    MR_hl_field(3, MmakeRuleLibTargetNonJava_49, 4) = ((MR_Box) (Var_175));
    MR_hl_field(3, MmakeRuleLibTargetNonJava_49, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeFragmentLibTarget_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MmakeFragmentLibTarget_50, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[10]));
    MR_hl_field(1, MmakeFragmentLibTarget_50, 1) = ((MR_Box) (MmakeRuleLibTargetJava_48));
    MR_hl_field(1, MmakeFragmentLibTarget_50, 2) = ((MR_Box) (MmakeRuleLibTargetNonJava_49));
  }
  Var_181 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".all_pic_os)");
  ModuleMakeVarNamePicOs_51 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_181);
  Var_191 = mercury__string__f_43_43_2_f_0(*SharedLibFileName_26, (MR_String) " \\");
  Var_189 = mercury__string__f_43_43_2_f_0((MR_String) "-o ", Var_191);
  Var_187 = mercury__string__f_43_43_2_f_0((MR_String) " \044(ALL_LD_LIBFLAGS) ", Var_189);
  Var_186 = mercury__string__f_43_43_2_f_0(InstallNameOpt_44, Var_187);
  Var_184 = mercury__string__f_43_43_2_f_0((MR_String) "-- ", Var_186);
  SharedLibAction1Line1_52 = mercury__string__f_43_43_2_f_0((MR_String) "\044(ML) --make-shared-lib \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) ", Var_184);
  Var_194 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNamePicOs_51, (MR_String) " \\");
  SharedLibAction1Line2_53 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_194);
  Var_197 = mercury__string__f_43_43_2_f_0(All_MLPicObjs_33, (MR_String) " \044(ALL_MLLIBS)");
  SharedLibAction1Line3_54 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_197);
  {
    Var_202 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_202, 0) = ((MR_Box) (All_MLPicObjs_33));
    MR_hl_field(1, Var_202, 1) = ((MR_Box) (Var_130));
  }
  {
    Var_201 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_201, 0) = ((MR_Box) (ModuleMakeVarNamePicOs_51));
    MR_hl_field(1, Var_201, 1) = ((MR_Box) (Var_202));
  }
  {
    Var_207 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_207, 0) = ((MR_Box) (SharedLibAction1Line3_54));
    MR_hl_field(1, Var_207, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_206 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_206, 0) = ((MR_Box) (SharedLibAction1Line2_53));
    MR_hl_field(1, Var_206, 1) = ((MR_Box) (Var_207));
  }
  {
    Var_205 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_205, 0) = ((MR_Box) (SharedLibAction1Line1_52));
    MR_hl_field(1, Var_205, 1) = ((MR_Box) (Var_206));
  }
  {
    MmakeRuleSharedLib_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleSharedLib_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleSharedLib_55, 1) = ((MR_Box) ((MR_String) "shared_lib"));
    MR_hl_field(3, MmakeRuleSharedLib_55, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleSharedLib_55, 3) = ((MR_Box) (*SharedLibFileName_26));
    MR_hl_field(3, MmakeRuleSharedLib_55, 4) = ((MR_Box) (Var_201));
    MR_hl_field(3, MmakeRuleSharedLib_55, 5) = ((MR_Box) (Var_205));
  }
  {
    Var_213 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_213, 0) = ((MR_Box) (MmakeRuleSharedLib_55));
  }
  {
    Var_212 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_212, 0) = ((MR_Box) (Var_213));
    MR_hl_field(1, Var_212, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeFragmentSharedLib_56 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeFragmentSharedLib_56, 0) = ((MR_Box) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_2[32])));
    MR_hl_field(2, MmakeFragmentSharedLib_56, 1) = ((MR_Box) (Var_212));
    MR_hl_field(2, MmakeFragmentSharedLib_56, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  LibAction1_57 = mercury__string__f_43_43_2_f_0((MR_String) "rm -f ", *LibFileName_25);
  Var_221 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameOs_36, (MR_String) " \\");
  Var_219 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_221);
  Var_218 = mercury__string__f_43_43_2_f_0(*LibFileName_25, Var_219);
  LibAction2Line1_58 = mercury__string__f_43_43_2_f_0((MR_String) "\044(AR) \044(ALL_ARFLAGS) \044(AR_LIBFILE_OPT)", Var_218);
  LibAction2Line2_59 = mercury__string__f_43_43_2_f_0((MR_String) "\t", All_MLObjs_32);
  LibAction3_60 = mercury__string__f_43_43_2_f_0((MR_String) "\044(RANLIB) \044(ALL_RANLIBFLAGS) ", *LibFileName_25);
  {
    Var_228 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_228, 0) = ((MR_Box) (All_MLObjs_32));
    MR_hl_field(1, Var_228, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_227 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_227, 0) = ((MR_Box) (ModuleMakeVarNameOs_36));
    MR_hl_field(1, Var_227, 1) = ((MR_Box) (Var_228));
  }
  {
    Var_233 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_233, 0) = ((MR_Box) (LibAction3_60));
    MR_hl_field(1, Var_233, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_232 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_232, 0) = ((MR_Box) (LibAction2Line2_59));
    MR_hl_field(1, Var_232, 1) = ((MR_Box) (Var_233));
  }
  {
    Var_231 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_231, 0) = ((MR_Box) (LibAction2Line1_58));
    MR_hl_field(1, Var_231, 1) = ((MR_Box) (Var_232));
  }
  {
    Var_230 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_230, 0) = ((MR_Box) (LibAction1_57));
    MR_hl_field(1, Var_230, 1) = ((MR_Box) (Var_231));
  }
  {
    MmakeRuleLib_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleLib_61, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleLib_61, 1) = ((MR_Box) ((MR_String) "lib"));
    MR_hl_field(3, MmakeRuleLib_61, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleLib_61, 3) = ((MR_Box) (*LibFileName_25));
    MR_hl_field(3, MmakeRuleLib_61, 4) = ((MR_Box) (Var_227));
    MR_hl_field(3, MmakeRuleLib_61, 5) = ((MR_Box) (Var_230));
  }
  parse_tree__module_cmds__list_class_files_for_jar_mmake_3_p_0(Globals_16, ModuleMakeVarNameClasses_35, &ListClassFiles_62);
  Var_237 = mercury__string__f_43_43_2_f_0((MR_String) " ", ListClassFiles_62);
  Var_236 = mercury__string__f_43_43_2_f_0(*JarFileName_24, Var_237);
  JarAction1_63 = mercury__string__f_43_43_2_f_0((MR_String) "\044(JAR) \044(JAR_CREATE_FLAGS) ", Var_236);
  {
    Var_243 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_243, 0) = ((MR_Box) (JarAction1_63));
    MR_hl_field(1, Var_243, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRuleJar_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleJar_64, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleJar_64, 1) = ((MR_Box) ((MR_String) "jar"));
    MR_hl_field(3, MmakeRuleJar_64, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleJar_64, 3) = ((MR_Box) (*JarFileName_24));
    MR_hl_field(3, MmakeRuleJar_64, 4) = ((MR_Box) (Var_120));
    MR_hl_field(3, MmakeRuleJar_64, 5) = ((MR_Box) (Var_243));
  }
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentExtForExe_30, STATE_VARIABLE_MmakeFile_0_65, &STATE_VARIABLE_MmakeFile_245_245);
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentExecutable_41, STATE_VARIABLE_MmakeFile_245_245, &STATE_VARIABLE_MmakeFile_246_246);
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibTarget_50, STATE_VARIABLE_MmakeFile_246_246, &STATE_VARIABLE_MmakeFile_247_247);
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentSharedLib_56, STATE_VARIABLE_MmakeFile_247_247, &STATE_VARIABLE_MmakeFile_248_248);
  {
    Var_251 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_251, 0) = ((MR_Box) (MmakeRuleJar_64));
    MR_hl_field(1, Var_251, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_249 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_249, 0) = ((MR_Box) (MmakeRuleLib_61));
    MR_hl_field(1, Var_249, 1) = ((MR_Box) (Var_251));
  }
  libs__mmakefiles__add_mmake_entries_3_p_0(Var_249, STATE_VARIABLE_MmakeFile_248_248, STATE_VARIABLE_MmakeFile_66);
}

void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_dv_file_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_String SourceFileName_10,
  MR_Word ModuleName_11,
  MR_Word DepsMap_12)
{
  MR_Word Verbose_14;
  MR_String DvFileName_15;
  MR_String CreatingMsg_16;
  MR_Word DvResult_17;
  MR_String Var_55;

  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 72, &Verbose_14);
  parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.generate_dependencies_write_dv_file\'/7", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[0])), ModuleName_11, &DvFileName_15);
  Var_55 = mercury__string__f_43_43_2_f_0(DvFileName_15, (MR_String) "\'...\n");
  CreatingMsg_16 = mercury__string__f_43_43_2_f_0((MR_String) "% Creating auto-dependency file \140", Var_55);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_14, CreatingMsg_16);
  mercury__io__open_output_4_p_0(DvFileName_15, &DvResult_17);
  if (((MR_tag((MR_Word) DvResult_17)) == (MR_Integer) 1))
  {
    MR_Word IOError_22 = ((MR_Word) ((MR_hl_field(1, DvResult_17, (MR_Integer) 0))));
    MR_String IOErrorMessage_23;
    MR_String DepMessage_24;
    MR_String Var_58;
    MR_String Var_59;

    libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_14, (MR_String) " failed.\n");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_14);
    mercury__io__error_message_2_p_0(IOError_22, &IOErrorMessage_23);
    Var_58 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", IOErrorMessage_23);
    Var_59 = mercury__string__f_43_43_2_f_0(DvFileName_15, Var_58);
    DepMessage_24 = mercury__string__f_43_43_2_f_0((MR_String) "error opening file \140", Var_59);
    libs__file_util__report_error_4_p_0(ProgressStream_8, DepMessage_24);
  }
  else
  {
    MR_Word DvStream_18 = ((MR_Word) ((MR_hl_field(0, DvResult_17, (MR_Integer) 0))));
    MR_Word Cache0_19;
    MR_Word MmakeFile_20;
    MR_Word _Cache_21;

    mercury__map__init_1_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), &Cache0_19);
    parse_tree__write_deps_file__generate_dv_file_9_p_0(Globals_9, SourceFileName_10, ModuleName_11, DepsMap_12, &MmakeFile_20, Cache0_19, &_Cache_21);
    libs__mmakefiles__write_mmakefile_4_p_0(DvStream_18, MmakeFile_20);
    mercury__io__close_output_3_p_0(DvStream_18);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_14, (MR_String) "% done.\n");
  }
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_12(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv11_HeadVar__2_2;

  conv11_HeadVar__2_2 = libs__mmakefiles__mmake_entry_to_fragment_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv11_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_11(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv10_HeadVar__2_2;

  conv10_HeadVar__2_2 = libs__mmakefiles__mmake_entry_to_fragment_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv10_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_10(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv9_HeadVar__5_5;

  parse_tree__file_names__fact_table_file_name_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), &conv9_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv9_HeadVar__5_5));
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_9(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv8_HeadVar__5_5;

  parse_tree__file_names__fact_table_file_name_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), &conv8_HeadVar__5_5);
  *wrapper_arg_2 = ((MR_Box) (conv8_HeadVar__5_5));
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
  MR_String conv6_LambdaHeadVar__2_153;

  parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1573__1_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Tuple) (wrapper_arg_1)), &conv6_LambdaHeadVar__2_153);
  *wrapper_arg_2 = ((MR_Box) (conv6_LambdaHeadVar__2_153));
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_7(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv5_LambdaHeadVar__2_145;

  conv5_LambdaHeadVar__2_145 = parse_tree__write_deps_file__IntroducedFrom__func__generate_dv_file__1564__1_1_f_0(((MR_Tuple) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_LambdaHeadVar__2_145));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1539__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
  MR_Word STATE_VARIABLE_Cache_0_107,
  MR_Word * STATE_VARIABLE_Cache_108)
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
  MR_Word HasSubmodules_32;
  MR_Word ModulesWithSubModules_39;
  MR_Word ModulesWithSubModulesSourceFileNames_40;
  MR_Word MmakeVarModuleParentMods_41;
  MR_Word Target_42;
  MR_Word ForeignModules_44;
  MR_Word ForeignModulesFileNames_47;
  MR_Word MmakeVarForeignModules_48;
  MR_Word MakeFileName_49;
  MR_Word ForeignFileNames_55;
  MR_Word MmakeVarForeignFileNames_56;
  MR_Word FactTableFileNames_57;
  MR_Word FactTableFileNamesOs_58;
  MR_Word FactTableFileNamesPicOs_59;
  MR_Word MmakeVarForeignDlls_60;
  MR_Word MmakeVarInitCs_61;
  MR_Word MmakeVarAllCs_62;
  MR_Word MmakeVarDlls_63;
  MR_Word MmakeVarAllOs_64;
  MR_Word MmakeVarAllPicOs_65;
  MR_Word MmakeVarUseds_66;
  MR_Word MmakeVarAllJavas_67;
  MR_Word MmakeVarClassesJava_68;
  MR_Word MmakeVarClassesNonJava_69;
  MR_Word MmakeFragmentVarClasses_70;
  MR_Word MmakeVarAllCss_71;
  MR_Word MmakeVarDates_72;
  MR_Word MmakeVarDate0s_73;
  MR_Word MmakeVarDate3s_74;
  MR_Word MmakeVarOptDates_75;
  MR_Word MmakeVarTransOptDates_76;
  MR_Word MmakeVarCDates_77;
  MR_Word MmakeVarJavaDates_78;
  MR_Word MmakeVarCsDates_79;
  MR_Word MmakeVarDs_80;
  MR_String ModuleDepFileExtStr_81;
  MR_Word MmakeVarModuleDeps_82;
  MR_Word MihSources_84;
  MR_Word MhSources_85;
  MR_Word MmakeVarMihs_86;
  MR_Word MmakeVarMhs_87;
  MR_Word MmakeVarMihsToClean_88;
  MR_Word MmakeVarAllMihs_89;
  MR_Word MmakeVarMhsToClean_90;
  MR_Word MmakeVarAllMhs_91;
  MR_Word MmakeVarInts_92;
  MR_Word MmakeVarInt0s_93;
  MR_Word MmakeVarInt0sToClean_94;
  MR_Word MmakeVarAllInt0s_95;
  MR_Word MmakeVarInt3s_96;
  MR_Word MmakeVarAllOpts_97;
  MR_Word MmakeVarOpts_98;
  MR_Word MmakeVarAllTransOpts_99;
  MR_Word MmakeVarTransOpts_100;
  MR_Word MmakeVarAnalysiss_101;
  MR_Word MmakeVarRequests_102;
  MR_Word MmakeVarImdgs_103;
  MR_Word MmakeVarProfs_104;
  MR_Word MmakeFragmentsA_105;
  MR_Word MmakeFragmentsB_106;
  MR_Word Var_113;
  MR_String Var_114;
  MR_Word Var_116;
  MR_String Var_119;
  MR_Word Var_121;
  MR_String Var_124;
  MR_Word Var_126;
  MR_Word STATE_VARIABLE_Cache_130_130;
  MR_String Var_133;
  MR_Word STATE_VARIABLE_Cache_138_138;
  MR_String Var_141;
  MR_String Var_150;
  MR_String Var_159;
  MR_Word Var_161;
  MR_Word Var_165;
  MR_String Var_169;
  MR_String Var_171;
  MR_String Var_176;
  MR_String Var_178;
  MR_String Var_183;
  MR_String Var_185;
  MR_String Var_190;
  MR_String Var_192;
  MR_String Var_197;
  MR_Word Var_199;
  MR_String Var_200;
  MR_String Var_205;
  MR_Word Var_207;
  MR_String Var_208;
  MR_String Var_213;
  MR_String Var_215;
  MR_String Var_220;
  MR_String Var_222;
  MR_String Var_227;
  MR_Word Var_229;
  MR_String Var_230;
  MR_Word Var_235;
  MR_String Var_236;
  MR_String Var_242;
  MR_String Var_247;
  MR_String Var_249;
  MR_String Var_254;
  MR_String Var_256;
  MR_String Var_261;
  MR_String Var_263;
  MR_String Var_268;
  MR_String Var_270;
  MR_String Var_275;
  MR_String Var_277;
  MR_String Var_282;
  MR_String Var_284;
  MR_String Var_289;
  MR_String Var_291;
  MR_String Var_296;
  MR_String Var_298;
  MR_String Var_303;
  MR_String Var_305;
  MR_String Var_310;
  MR_String Var_312;
  MR_String Var_319;
  MR_String Var_321;
  MR_String Var_341;
  MR_String Var_343;
  MR_String Var_345;
  MR_String Var_347;
  MR_String Var_352;
  MR_String Var_354;
  MR_String Var_359;
  MR_String Var_361;
  MR_String Var_366;
  MR_String Var_368;
  MR_String Var_373;
  MR_Word Var_375;
  MR_String Var_376;
  MR_Word Var_381;
  MR_String Var_382;
  MR_String Var_388;
  MR_String Var_390;
  MR_String Var_395;
  MR_String Var_397;
  MR_String Var_402;
  MR_String Var_404;
  MR_String Var_409;
  MR_String Var_411;
  MR_String Var_416;
  MR_String Var_418;
  MR_String Var_423;
  MR_String Var_425;
  MR_String Var_430;
  MR_String Var_432;
  MR_String Var_437;
  MR_String Var_439;
  MR_String Var_444;
  MR_String Var_446;
  MR_String Var_451;
  MR_String Var_453;
  MR_String Var_458;
  MR_String Var_460;
  MR_String Var_465;
  MR_String Var_467;
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
  MR_Word Var_519;
  MR_Word Var_520;
  MR_Word Var_522;
  MR_Word Var_523;
  MR_Word Var_524;
  MR_Word Var_525;
  MR_String Var_601;
  MR_String Var_604;
  MR_String Var_607;
  MR_String Var_610;
  MR_String Var_613;
  MR_String Var_616;
  MR_String Var_619;
  MR_String Var_622;
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
  MR_String Var_663;
  MR_String Var_664;
  MR_String Var_673;
  MR_String Var_676;
  MR_String Var_679;
  MR_String Var_682;
  MR_String Var_685;
  MR_String Var_688;
  MR_String Var_691;
  MR_String Var_694;
  MR_String Var_697;
  MR_String Var_700;
  MR_String Var_703;
  MR_String Var_706;
  MR_String Var_709;
  MR_String Var_712;
  MR_String Var_715;
  MR_String Var_718;
  MR_String Var_721;
  MR_String Var_724;
  MR_Box conv7_STATE_VARIABLE_IO_110;

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
  mercury__list__sort_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[12]), Modules1_22, &Modules_23);
  parse_tree__file_names__module_name_to_make_var_name_2_p_0(ModuleName_12, &ModuleMakeVarName_24);
  {
    Var_113 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_113, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[8]));
    MR_hl_field(0, Var_113, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_9_p_0_2));
    MR_hl_field(0, Var_113, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_113, 3) = ((MR_Box) (DepsMap_13));
  }
  mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_113, Modules_23, &SourceFiles0_25);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFiles0_25, &SourceFiles_26);
  Var_114 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".ms");
  Var_116 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[2]), SourceFiles_26);
  {
    MmakeVarModuleMs_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarModuleMs_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarModuleMs_27, 1) = ((MR_Box) (Var_114));
    MR_hl_field(3, MmakeVarModuleMs_27, 2) = ((MR_Box) (Var_116));
  }
  Var_119 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".errs");
  Var_121 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[3]), SourceFiles_26);
  {
    MmakeVarModuleErrs_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarModuleErrs_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarModuleErrs_28, 1) = ((MR_Box) (Var_119));
    MR_hl_field(3, MmakeVarModuleErrs_28, 2) = ((MR_Box) (Var_121));
  }
  Var_124 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".dep_errs");
  Var_126 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_3[4]), SourceFiles_26);
  {
    MmakeVarModuleDepErrs_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarModuleDepErrs_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarModuleDepErrs_29, 1) = ((MR_Box) (Var_124));
    MR_hl_field(3, MmakeVarModuleDepErrs_29, 2) = ((MR_Box) (Var_126));
  }
  parse_tree__write_deps_file__make_module_file_names_with_ext_8_p_0(Globals_10, (MR_Word) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_4[3])), Modules_23, &ModulesSourceFileNames_30, STATE_VARIABLE_Cache_0_107, &STATE_VARIABLE_Cache_130_130);
  Var_133 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods");
  {
    MmakeVarModuleMods_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarModuleMods_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarModuleMods_31, 1) = ((MR_Box) (Var_133));
    MR_hl_field(3, MmakeVarModuleMods_31, 2) = ((MR_Box) (ModulesSourceFileNames_30));
  }
  {
    HasSubmodules_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HasSubmodules_32, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[3]));
    MR_hl_field(0, HasSubmodules_32, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_9_p_0_6));
    MR_hl_field(0, HasSubmodules_32, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, HasSubmodules_32, 3) = ((MR_Box) (DepsMap_13));
  }
  mercury__list__filter_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HasSubmodules_32, Modules_23, &ModulesWithSubModules_39);
  parse_tree__write_deps_file__make_module_file_names_with_ext_8_p_0(Globals_10, (MR_Word) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_4[3])), ModulesWithSubModules_39, &ModulesWithSubModulesSourceFileNames_40, STATE_VARIABLE_Cache_130_130, &STATE_VARIABLE_Cache_138_138);
  Var_141 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".parent_mods");
  {
    MmakeVarModuleParentMods_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarModuleParentMods_41, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarModuleParentMods_41, 1) = ((MR_Box) (Var_141));
    MR_hl_field(3, MmakeVarModuleParentMods_41, 2) = ((MR_Box) (ModulesWithSubModulesSourceFileNames_40));
  }
  libs__globals__get_target_2_p_0(Globals_10, &Target_42);
  ForeignModules_44 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_3[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[13]), (MR_Word) ((MR_Unsigned) 0U));
  parse_tree__write_deps_file__make_module_file_names_with_ext_8_p_0(Globals_10, (MR_Word) (MR_mkword(2, &parse_tree__write_deps_file_scalar_common_4[3])), ForeignModules_44, &ForeignModulesFileNames_47, STATE_VARIABLE_Cache_138_138, STATE_VARIABLE_Cache_108);
  Var_150 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".foreign");
  {
    MmakeVarForeignModules_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarForeignModules_48, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarForeignModules_48, 1) = ((MR_Box) (Var_150));
    MR_hl_field(3, MmakeVarForeignModules_48, 2) = ((MR_Box) (ForeignModulesFileNames_47));
  }
  {
    MakeFileName_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MakeFileName_49, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_10[0]));
    MR_hl_field(0, MakeFileName_49, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_9_p_0_8));
    MR_hl_field(0, MakeFileName_49, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, MakeFileName_49, 3) = ((MR_Box) (Globals_10));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__write_deps_file_scalar_common_3[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), MakeFileName_49, (MR_Word) ((MR_Unsigned) 0U), &ForeignFileNames_55, ((MR_Box) ((MR_Integer) 0)), &conv7_STATE_VARIABLE_IO_110);
  Var_159 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".foreign_cs");
  {
    MmakeVarForeignFileNames_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarForeignFileNames_56, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarForeignFileNames_56, 1) = ((MR_Box) (Var_159));
    MR_hl_field(3, MmakeVarForeignFileNames_56, 2) = ((MR_Box) (ForeignFileNames_55));
  }
  parse_tree__write_deps_file__get_fact_table_file_names_3_p_0(DepsMap_13, Modules_23, &FactTableFileNames_57);
  {
    Var_161 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_161, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_10[1]));
    MR_hl_field(0, Var_161, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_9_p_0_9));
    MR_hl_field(0, Var_161, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_161, 3) = ((MR_Box) (Globals_10));
    MR_hl_field(0, Var_161, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_deps_file.generate_dv_file\'/9"));
    MR_hl_field(0, Var_161, 5) = ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[8])));
  }
  mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_161, FactTableFileNames_57, &FactTableFileNamesOs_58);
  {
    Var_165 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_165, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_10[1]));
    MR_hl_field(0, Var_165, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_9_p_0_10));
    MR_hl_field(0, Var_165, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_165, 3) = ((MR_Box) (Globals_10));
    MR_hl_field(0, Var_165, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_deps_file.generate_dv_file\'/9"));
    MR_hl_field(0, Var_165, 5) = ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[27])));
  }
  mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_165, FactTableFileNames_57, &FactTableFileNamesPicOs_59);
  Var_169 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".foreign_dlls");
  Var_601 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".foreign:%=\044(dlls_subdir)%.dll)");
  Var_171 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_601);
  {
    MmakeVarForeignDlls_60 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarForeignDlls_60, 0) = ((MR_Box) (Var_169));
    MR_hl_field(2, MmakeVarForeignDlls_60, 1) = ((MR_Box) (Var_171));
  }
  Var_176 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".init_cs");
  Var_604 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(cs_subdir)%.c)");
  Var_178 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_604);
  {
    MmakeVarInitCs_61 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarInitCs_61, 0) = ((MR_Box) (Var_176));
    MR_hl_field(2, MmakeVarInitCs_61, 1) = ((MR_Box) (Var_178));
  }
  Var_183 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".all_cs");
  Var_607 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(cs_subdir)%.c)");
  Var_185 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_607);
  {
    MmakeVarAllCs_62 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllCs_62, 0) = ((MR_Box) (Var_183));
    MR_hl_field(2, MmakeVarAllCs_62, 1) = ((MR_Box) (Var_185));
  }
  Var_190 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".dlls");
  Var_610 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(dlls_subdir)%.dll)");
  Var_192 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_610);
  {
    MmakeVarDlls_63 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarDlls_63, 0) = ((MR_Box) (Var_190));
    MR_hl_field(2, MmakeVarDlls_63, 1) = ((MR_Box) (Var_192));
  }
  Var_197 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".all_os");
  Var_613 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(os_subdir)%.\044O)");
  Var_200 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_613);
  {
    Var_199 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_199, 0) = ((MR_Box) (Var_200));
    MR_hl_field(1, Var_199, 1) = ((MR_Box) (FactTableFileNamesOs_58));
  }
  {
    MmakeVarAllOs_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarAllOs_64, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarAllOs_64, 1) = ((MR_Box) (Var_197));
    MR_hl_field(3, MmakeVarAllOs_64, 2) = ((MR_Box) (Var_199));
  }
  Var_205 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".all_pic_os");
  Var_616 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(os_subdir)%.\044(EXT_FOR_PIC_OBJECTS))");
  Var_208 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_616);
  {
    Var_207 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_207, 0) = ((MR_Box) (Var_208));
    MR_hl_field(1, Var_207, 1) = ((MR_Box) (FactTableFileNamesPicOs_59));
  }
  {
    MmakeVarAllPicOs_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarAllPicOs_65, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarAllPicOs_65, 1) = ((MR_Box) (Var_205));
    MR_hl_field(3, MmakeVarAllPicOs_65, 2) = ((MR_Box) (Var_207));
  }
  Var_213 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".useds");
  Var_619 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(useds_subdir)%.used)");
  Var_215 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_619);
  {
    MmakeVarUseds_66 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarUseds_66, 0) = ((MR_Box) (Var_213));
    MR_hl_field(2, MmakeVarUseds_66, 1) = ((MR_Box) (Var_215));
  }
  Var_220 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".all_javas");
  Var_622 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(javas_subdir)%.java)");
  Var_222 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_622);
  {
    MmakeVarAllJavas_67 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllJavas_67, 0) = ((MR_Box) (Var_220));
    MR_hl_field(2, MmakeVarAllJavas_67, 1) = ((MR_Box) (Var_222));
  }
  Var_227 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".classes");
  Var_625 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(classes_subdir)%.class)");
  Var_230 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_625);
  Var_628 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(classes_subdir)%\\\044\044*.class))");
  Var_236 = mercury__string__f_43_43_2_f_0((MR_String) "\044(wildcard \044(", Var_628);
  {
    Var_235 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_235, 0) = ((MR_Box) (Var_236));
    MR_hl_field(1, Var_235, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_229 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_229, 0) = ((MR_Box) (Var_230));
    MR_hl_field(1, Var_229, 1) = ((MR_Box) (Var_235));
  }
  {
    MmakeVarClassesJava_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarClassesJava_68, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarClassesJava_68, 1) = ((MR_Box) (Var_227));
    MR_hl_field(3, MmakeVarClassesJava_68, 2) = ((MR_Box) (Var_229));
  }
  Var_242 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".classes");
  {
    MmakeVarClassesNonJava_69 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarClassesNonJava_69, 0) = ((MR_Box) (Var_242));
    MR_hl_field(2, MmakeVarClassesNonJava_69, 1) = ((MR_Box) ((MR_String) ""));
  }
  {
    MmakeFragmentVarClasses_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MmakeFragmentVarClasses_70, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[10]));
    MR_hl_field(1, MmakeFragmentVarClasses_70, 1) = ((MR_Box) (MmakeVarClassesJava_68));
    MR_hl_field(1, MmakeFragmentVarClasses_70, 2) = ((MR_Box) (MmakeVarClassesNonJava_69));
  }
  Var_247 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".all_css");
  Var_631 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(css_subdir)%.cs)");
  Var_249 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_631);
  {
    MmakeVarAllCss_71 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllCss_71, 0) = ((MR_Box) (Var_247));
    MR_hl_field(2, MmakeVarAllCss_71, 1) = ((MR_Box) (Var_249));
  }
  Var_254 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".dates");
  Var_634 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(dates_subdir)%.date)");
  Var_256 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_634);
  {
    MmakeVarDates_72 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarDates_72, 0) = ((MR_Box) (Var_254));
    MR_hl_field(2, MmakeVarDates_72, 1) = ((MR_Box) (Var_256));
  }
  Var_261 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".date0s");
  Var_637 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(date0s_subdir)%.date0)");
  Var_263 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_637);
  {
    MmakeVarDate0s_73 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarDate0s_73, 0) = ((MR_Box) (Var_261));
    MR_hl_field(2, MmakeVarDate0s_73, 1) = ((MR_Box) (Var_263));
  }
  Var_268 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".date3s");
  Var_640 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(date3s_subdir)%.date3)");
  Var_270 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_640);
  {
    MmakeVarDate3s_74 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarDate3s_74, 0) = ((MR_Box) (Var_268));
    MR_hl_field(2, MmakeVarDate3s_74, 1) = ((MR_Box) (Var_270));
  }
  Var_275 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".optdates");
  Var_643 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(optdates_subdir)%.optdate)");
  Var_277 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_643);
  {
    MmakeVarOptDates_75 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarOptDates_75, 0) = ((MR_Box) (Var_275));
    MR_hl_field(2, MmakeVarOptDates_75, 1) = ((MR_Box) (Var_277));
  }
  Var_282 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".trans_opt_dates");
  Var_646 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(trans_opt_dates_subdir)%.trans_opt_date)");
  Var_284 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_646);
  {
    MmakeVarTransOptDates_76 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarTransOptDates_76, 0) = ((MR_Box) (Var_282));
    MR_hl_field(2, MmakeVarTransOptDates_76, 1) = ((MR_Box) (Var_284));
  }
  Var_289 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".c_dates");
  Var_649 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(c_dates_subdir)%.c_date)");
  Var_291 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_649);
  {
    MmakeVarCDates_77 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarCDates_77, 0) = ((MR_Box) (Var_289));
    MR_hl_field(2, MmakeVarCDates_77, 1) = ((MR_Box) (Var_291));
  }
  Var_296 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".java_dates");
  Var_652 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(java_dates_subdir)%.java_date)");
  Var_298 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_652);
  {
    MmakeVarJavaDates_78 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarJavaDates_78, 0) = ((MR_Box) (Var_296));
    MR_hl_field(2, MmakeVarJavaDates_78, 1) = ((MR_Box) (Var_298));
  }
  Var_303 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".cs_dates");
  Var_655 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(cs_dates_subdir)%.cs_date)");
  Var_305 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_655);
  {
    MmakeVarCsDates_79 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarCsDates_79, 0) = ((MR_Box) (Var_303));
    MR_hl_field(2, MmakeVarCsDates_79, 1) = ((MR_Box) (Var_305));
  }
  Var_310 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".ds");
  Var_658 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(ds_subdir)%.d)");
  Var_312 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_658);
  {
    MmakeVarDs_80 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarDs_80, 0) = ((MR_Box) (Var_310));
    MR_hl_field(2, MmakeVarDs_80, 1) = ((MR_Box) (Var_312));
  }
  ModuleDepFileExtStr_81 = parse_tree__file_names__extension_to_string_2_f_0(Globals_10, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[9])));
  Var_319 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".module_deps");
  Var_661 = mercury__string__f_43_43_2_f_0(ModuleDepFileExtStr_81, (MR_String) ")");
  Var_663 = mercury__string__f_43_43_2_f_0((MR_String) ".mods:%=\044(module_deps_subdir)%", Var_661);
  Var_664 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, Var_663);
  Var_321 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_664);
  {
    MmakeVarModuleDeps_82 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarModuleDeps_82, 0) = ((MR_Box) (Var_319));
    MR_hl_field(2, MmakeVarModuleDeps_82, 1) = ((MR_Box) (Var_321));
  }
  switch (Target_42) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word HighLevelCode_83;
        MR_String Var_335;
        MR_String Var_670;

        libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 312, &HighLevelCode_83);
        switch (HighLevelCode_83) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MihSources_84 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_329;
              MR_String Var_667;

              Var_667 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
              Var_329 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_667);
              {
                MihSources_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MihSources_84, 0) = ((MR_Box) (Var_329));
                MR_hl_field(1, MihSources_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
        }
        Var_670 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=%.mh)");
        Var_335 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_670);
        {
          MhSources_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MhSources_85, 0) = ((MR_Box) (Var_335));
          MR_hl_field(1, MhSources_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
  Var_341 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mihs");
  {
    MmakeVarMihs_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarMihs_86, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarMihs_86, 1) = ((MR_Box) (Var_341));
    MR_hl_field(3, MmakeVarMihs_86, 2) = ((MR_Box) (MihSources_84));
  }
  Var_343 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mhs");
  {
    MmakeVarMhs_87 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarMhs_87, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarMhs_87, 1) = ((MR_Box) (Var_343));
    MR_hl_field(3, MmakeVarMhs_87, 2) = ((MR_Box) (MhSources_85));
  }
  Var_345 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mihs_to_clean");
  Var_673 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
  Var_347 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_673);
  {
    MmakeVarMihsToClean_88 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarMihsToClean_88, 0) = ((MR_Box) (Var_345));
    MR_hl_field(2, MmakeVarMihsToClean_88, 1) = ((MR_Box) (Var_347));
  }
  Var_352 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".all_mihs");
  Var_676 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
  Var_354 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_676);
  {
    MmakeVarAllMihs_89 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllMihs_89, 0) = ((MR_Box) (Var_352));
    MR_hl_field(2, MmakeVarAllMihs_89, 1) = ((MR_Box) (Var_354));
  }
  Var_359 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mhs_to_clean");
  Var_679 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=%.mh)");
  Var_361 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_679);
  {
    MmakeVarMhsToClean_90 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarMhsToClean_90, 0) = ((MR_Box) (Var_359));
    MR_hl_field(2, MmakeVarMhsToClean_90, 1) = ((MR_Box) (Var_361));
  }
  Var_366 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".all_mhs");
  Var_682 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=%.mh)");
  Var_368 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_682);
  {
    MmakeVarAllMhs_91 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllMhs_91, 0) = ((MR_Box) (Var_366));
    MR_hl_field(2, MmakeVarAllMhs_91, 1) = ((MR_Box) (Var_368));
  }
  Var_373 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".ints");
  Var_685 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(ints_subdir)%.int)");
  Var_376 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_685);
  Var_688 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(int2s_subdir)%.int2)");
  Var_382 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_688);
  {
    Var_381 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_381, 0) = ((MR_Box) (Var_382));
    MR_hl_field(1, Var_381, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_375 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_375, 0) = ((MR_Box) (Var_376));
    MR_hl_field(1, Var_375, 1) = ((MR_Box) (Var_381));
  }
  {
    MmakeVarInts_92 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarInts_92, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarInts_92, 1) = ((MR_Box) (Var_373));
    MR_hl_field(3, MmakeVarInts_92, 2) = ((MR_Box) (Var_375));
  }
  Var_388 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".int0s");
  Var_691 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".parent_mods:%=\044(int0s_subdir)%.int0)");
  Var_390 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_691);
  {
    MmakeVarInt0s_93 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarInt0s_93, 0) = ((MR_Box) (Var_388));
    MR_hl_field(2, MmakeVarInt0s_93, 1) = ((MR_Box) (Var_390));
  }
  Var_395 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".int0s_to_clean");
  Var_694 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(int0s_subdir)%.int0)");
  Var_397 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_694);
  {
    MmakeVarInt0sToClean_94 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarInt0sToClean_94, 0) = ((MR_Box) (Var_395));
    MR_hl_field(2, MmakeVarInt0sToClean_94, 1) = ((MR_Box) (Var_397));
  }
  Var_402 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".all_int0s");
  Var_697 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(int0s_subdir)%.int0)");
  Var_404 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_697);
  {
    MmakeVarAllInt0s_95 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllInt0s_95, 0) = ((MR_Box) (Var_402));
    MR_hl_field(2, MmakeVarAllInt0s_95, 1) = ((MR_Box) (Var_404));
  }
  Var_409 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".int3s");
  Var_700 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(int3s_subdir)%.int3)");
  Var_411 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_700);
  {
    MmakeVarInt3s_96 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarInt3s_96, 0) = ((MR_Box) (Var_409));
    MR_hl_field(2, MmakeVarInt3s_96, 1) = ((MR_Box) (Var_411));
  }
  Var_416 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".all_opts");
  Var_703 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(opts_subdir)%.opt)");
  Var_418 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_703);
  {
    MmakeVarAllOpts_97 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllOpts_97, 0) = ((MR_Box) (Var_416));
    MR_hl_field(2, MmakeVarAllOpts_97, 1) = ((MR_Box) (Var_418));
  }
  Var_423 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".opts");
  Var_706 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(opts_subdir)%.opt)");
  Var_425 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_706);
  {
    MmakeVarOpts_98 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarOpts_98, 0) = ((MR_Box) (Var_423));
    MR_hl_field(2, MmakeVarOpts_98, 1) = ((MR_Box) (Var_425));
  }
  Var_430 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".all_trans_opts");
  Var_709 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(trans_opts_subdir)%.trans_opt)");
  Var_432 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_709);
  {
    MmakeVarAllTransOpts_99 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllTransOpts_99, 0) = ((MR_Box) (Var_430));
    MR_hl_field(2, MmakeVarAllTransOpts_99, 1) = ((MR_Box) (Var_432));
  }
  Var_437 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".trans_opts");
  Var_712 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(trans_opts_subdir)%.trans_opt)");
  Var_439 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_712);
  {
    MmakeVarTransOpts_100 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarTransOpts_100, 0) = ((MR_Box) (Var_437));
    MR_hl_field(2, MmakeVarTransOpts_100, 1) = ((MR_Box) (Var_439));
  }
  Var_444 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".analyses");
  Var_715 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(analyses_subdir)%.analysis)");
  Var_446 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_715);
  {
    MmakeVarAnalysiss_101 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAnalysiss_101, 0) = ((MR_Box) (Var_444));
    MR_hl_field(2, MmakeVarAnalysiss_101, 1) = ((MR_Box) (Var_446));
  }
  Var_451 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".requests");
  Var_718 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(requests_subdir)%.request)");
  Var_453 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_718);
  {
    MmakeVarRequests_102 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarRequests_102, 0) = ((MR_Box) (Var_451));
    MR_hl_field(2, MmakeVarRequests_102, 1) = ((MR_Box) (Var_453));
  }
  Var_458 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".imdgs");
  Var_721 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=\044(imdgs_subdir)%.imdg)");
  Var_460 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_721);
  {
    MmakeVarImdgs_103 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarImdgs_103, 0) = ((MR_Box) (Var_458));
    MR_hl_field(2, MmakeVarImdgs_103, 1) = ((MR_Box) (Var_460));
  }
  Var_465 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".profs");
  Var_724 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".mods:%=%.prof)");
  Var_467 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_724);
  {
    MmakeVarProfs_104 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarProfs_104, 0) = ((MR_Box) (Var_465));
    MR_hl_field(2, MmakeVarProfs_104, 1) = ((MR_Box) (Var_467));
  }
  {
    Var_488 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_488, 0) = ((MR_Box) (MmakeVarAllJavas_67));
    MR_hl_field(1, Var_488, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_487 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_487, 0) = ((MR_Box) (MmakeVarUseds_66));
    MR_hl_field(1, Var_487, 1) = ((MR_Box) (Var_488));
  }
  {
    Var_486 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_486, 0) = ((MR_Box) (MmakeVarAllPicOs_65));
    MR_hl_field(1, Var_486, 1) = ((MR_Box) (Var_487));
  }
  {
    Var_485 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_485, 0) = ((MR_Box) (MmakeVarAllOs_64));
    MR_hl_field(1, Var_485, 1) = ((MR_Box) (Var_486));
  }
  {
    Var_484 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_484, 0) = ((MR_Box) (MmakeVarDlls_63));
    MR_hl_field(1, Var_484, 1) = ((MR_Box) (Var_485));
  }
  {
    Var_483 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_483, 0) = ((MR_Box) (MmakeVarAllCs_62));
    MR_hl_field(1, Var_483, 1) = ((MR_Box) (Var_484));
  }
  {
    Var_482 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_482, 0) = ((MR_Box) (MmakeVarInitCs_61));
    MR_hl_field(1, Var_482, 1) = ((MR_Box) (Var_483));
  }
  {
    Var_481 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_481, 0) = ((MR_Box) (MmakeVarForeignDlls_60));
    MR_hl_field(1, Var_481, 1) = ((MR_Box) (Var_482));
  }
  {
    Var_480 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_480, 0) = ((MR_Box) (MmakeVarForeignFileNames_56));
    MR_hl_field(1, Var_480, 1) = ((MR_Box) (Var_481));
  }
  {
    Var_479 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_479, 0) = ((MR_Box) (MmakeVarForeignModules_48));
    MR_hl_field(1, Var_479, 1) = ((MR_Box) (Var_480));
  }
  {
    Var_478 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_478, 0) = ((MR_Box) (MmakeVarModuleParentMods_41));
    MR_hl_field(1, Var_478, 1) = ((MR_Box) (Var_479));
  }
  {
    Var_477 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_477, 0) = ((MR_Box) (MmakeVarModuleMods_31));
    MR_hl_field(1, Var_477, 1) = ((MR_Box) (Var_478));
  }
  {
    Var_476 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_476, 0) = ((MR_Box) (MmakeVarModuleErrs_28));
    MR_hl_field(1, Var_476, 1) = ((MR_Box) (Var_477));
  }
  {
    Var_475 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_475, 0) = ((MR_Box) (MmakeVarModuleDepErrs_29));
    MR_hl_field(1, Var_475, 1) = ((MR_Box) (Var_476));
  }
  {
    Var_474 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_474, 0) = ((MR_Box) (MmakeVarModuleMs_27));
    MR_hl_field(1, Var_474, 1) = ((MR_Box) (Var_475));
  }
  {
    Var_473 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_473, 0) = ((MR_Box) (MmakeStartComment_20));
    MR_hl_field(1, Var_473, 1) = ((MR_Box) (Var_474));
  }
  MmakeFragmentsA_105 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[14]), Var_473);
  {
    Var_520 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_520, 0) = ((MR_Box) (MmakeVarProfs_104));
    MR_hl_field(1, Var_520, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_519 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_519, 0) = ((MR_Box) (MmakeVarImdgs_103));
    MR_hl_field(1, Var_519, 1) = ((MR_Box) (Var_520));
  }
  {
    Var_518 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_518, 0) = ((MR_Box) (MmakeVarRequests_102));
    MR_hl_field(1, Var_518, 1) = ((MR_Box) (Var_519));
  }
  {
    Var_517 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_517, 0) = ((MR_Box) (MmakeVarAnalysiss_101));
    MR_hl_field(1, Var_517, 1) = ((MR_Box) (Var_518));
  }
  {
    Var_516 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_516, 0) = ((MR_Box) (MmakeVarTransOpts_100));
    MR_hl_field(1, Var_516, 1) = ((MR_Box) (Var_517));
  }
  {
    Var_515 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_515, 0) = ((MR_Box) (MmakeVarAllTransOpts_99));
    MR_hl_field(1, Var_515, 1) = ((MR_Box) (Var_516));
  }
  {
    Var_514 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_514, 0) = ((MR_Box) (MmakeVarOpts_98));
    MR_hl_field(1, Var_514, 1) = ((MR_Box) (Var_515));
  }
  {
    Var_513 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_513, 0) = ((MR_Box) (MmakeVarAllOpts_97));
    MR_hl_field(1, Var_513, 1) = ((MR_Box) (Var_514));
  }
  {
    Var_512 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_512, 0) = ((MR_Box) (MmakeVarInt3s_96));
    MR_hl_field(1, Var_512, 1) = ((MR_Box) (Var_513));
  }
  {
    Var_511 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_511, 0) = ((MR_Box) (MmakeVarAllInt0s_95));
    MR_hl_field(1, Var_511, 1) = ((MR_Box) (Var_512));
  }
  {
    Var_510 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_510, 0) = ((MR_Box) (MmakeVarInt0sToClean_94));
    MR_hl_field(1, Var_510, 1) = ((MR_Box) (Var_511));
  }
  {
    Var_509 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_509, 0) = ((MR_Box) (MmakeVarInt0s_93));
    MR_hl_field(1, Var_509, 1) = ((MR_Box) (Var_510));
  }
  {
    Var_508 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_508, 0) = ((MR_Box) (MmakeVarInts_92));
    MR_hl_field(1, Var_508, 1) = ((MR_Box) (Var_509));
  }
  {
    Var_507 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_507, 0) = ((MR_Box) (MmakeVarAllMhs_91));
    MR_hl_field(1, Var_507, 1) = ((MR_Box) (Var_508));
  }
  {
    Var_506 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_506, 0) = ((MR_Box) (MmakeVarMhsToClean_90));
    MR_hl_field(1, Var_506, 1) = ((MR_Box) (Var_507));
  }
  {
    Var_505 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_505, 0) = ((MR_Box) (MmakeVarAllMihs_89));
    MR_hl_field(1, Var_505, 1) = ((MR_Box) (Var_506));
  }
  {
    Var_504 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_504, 0) = ((MR_Box) (MmakeVarMihsToClean_88));
    MR_hl_field(1, Var_504, 1) = ((MR_Box) (Var_505));
  }
  {
    Var_503 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_503, 0) = ((MR_Box) (MmakeVarMhs_87));
    MR_hl_field(1, Var_503, 1) = ((MR_Box) (Var_504));
  }
  {
    Var_502 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_502, 0) = ((MR_Box) (MmakeVarMihs_86));
    MR_hl_field(1, Var_502, 1) = ((MR_Box) (Var_503));
  }
  {
    Var_501 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_501, 0) = ((MR_Box) (MmakeVarModuleDeps_82));
    MR_hl_field(1, Var_501, 1) = ((MR_Box) (Var_502));
  }
  {
    Var_500 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_500, 0) = ((MR_Box) (MmakeVarDs_80));
    MR_hl_field(1, Var_500, 1) = ((MR_Box) (Var_501));
  }
  {
    Var_499 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_499, 0) = ((MR_Box) (MmakeVarCsDates_79));
    MR_hl_field(1, Var_499, 1) = ((MR_Box) (Var_500));
  }
  {
    Var_498 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_498, 0) = ((MR_Box) (MmakeVarJavaDates_78));
    MR_hl_field(1, Var_498, 1) = ((MR_Box) (Var_499));
  }
  {
    Var_497 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_497, 0) = ((MR_Box) (MmakeVarCDates_77));
    MR_hl_field(1, Var_497, 1) = ((MR_Box) (Var_498));
  }
  {
    Var_496 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_496, 0) = ((MR_Box) (MmakeVarTransOptDates_76));
    MR_hl_field(1, Var_496, 1) = ((MR_Box) (Var_497));
  }
  {
    Var_495 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_495, 0) = ((MR_Box) (MmakeVarOptDates_75));
    MR_hl_field(1, Var_495, 1) = ((MR_Box) (Var_496));
  }
  {
    Var_494 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_494, 0) = ((MR_Box) (MmakeVarDate3s_74));
    MR_hl_field(1, Var_494, 1) = ((MR_Box) (Var_495));
  }
  {
    Var_493 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_493, 0) = ((MR_Box) (MmakeVarDate0s_73));
    MR_hl_field(1, Var_493, 1) = ((MR_Box) (Var_494));
  }
  {
    Var_492 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_492, 0) = ((MR_Box) (MmakeVarDates_72));
    MR_hl_field(1, Var_492, 1) = ((MR_Box) (Var_493));
  }
  {
    Var_491 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_491, 0) = ((MR_Box) (MmakeVarAllCss_71));
    MR_hl_field(1, Var_491, 1) = ((MR_Box) (Var_492));
  }
  MmakeFragmentsB_106 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[15]), Var_491);
  Var_522 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), MmakeFragmentsA_105);
  Var_524 = mercury__cord__singleton_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), ((MR_Box) (MmakeFragmentVarClasses_70)));
  Var_525 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), MmakeFragmentsB_106);
  Var_523 = mercury__cord__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Var_524, Var_525);
  *MmakeFile_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Var_522, Var_523);
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
      MR_Word BurdenedModule_15;
      MR_Word ParseTreeModuleSrc_16;
      MR_Word Var_19;
      MR_Word STATE_VARIABLE_FactTableFileNames_20_20;
      MR_Box conv0_Var_19;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_FactTableFileNames_0_3;

      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), HeadVar__1_1, ((MR_Box) (Module_10)), &conv0_Var_19);
      Var_19 = ((MR_Word) (conv0_Var_19));
      BurdenedModule_15 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 1))));
      ParseTreeModuleSrc_16 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_15, (MR_Integer) 1))));
      parse_tree__get_dependencies__get_fact_tables_2_p_0(ParseTreeModuleSrc_16, &FactTableFileNames_12);
      mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFileNames_12, STATE_VARIABLE_FactTableFileNames_0_3, &STATE_VARIABLE_FactTableFileNames_20_20);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Modules_11;
      next_value_of_STATE_VARIABLE_FactTableFileNames_0_3 = STATE_VARIABLE_FactTableFileNames_20_20;
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
    MR_Word BurdenedModule_12;
    MR_Word Baggage_13;
    MR_Word ModuleErrors_14;
    MR_Word FatalErrors_15;
    MR_Word Var_16;
    MR_Box conv0_Var_16;

    parse_tree__write_deps_file__select_ok_modules_3_p_0(DepsMap_1, ModuleNames0_7, &ModuleNamesTail_9);
    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_1, ((MR_Box) (ModuleName_6)), &conv0_Var_16);
    Var_16 = ((MR_Word) (conv0_Var_16));
    BurdenedModule_12 = ((MR_Word) ((MR_hl_field(0, Var_16, (MR_Integer) 1))));
    Baggage_13 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_12, (MR_Integer) 0))));
    ModuleErrors_14 = ((MR_Word) ((MR_hl_field(0, Baggage_13, (MR_Integer) 7))));
    FatalErrors_15 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_14, (MR_Integer) 0))));
    succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_15);
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

void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_d_files_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word Globals_13,
  MR_Word BurdenedModules_14,
  MR_Word IntDepsGraph_15,
  MR_Word ImpDepsGraph_16,
  MR_Word IndirectDepsGraph_17,
  MR_Word IndirectOptDepsGraph_18,
  MR_Word TransOptDepsGraph_19,
  MR_Word TransOptOrder_20)
{
  MR_Word Cache0_22;
  MR_Word _Cache_23;

  mercury__map__init_1_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), &Cache0_22);
  parse_tree__write_deps_file__generate_dependencies_write_d_files_loop_13_p_0(ProgressStream_12, Globals_13, BurdenedModules_14, IntDepsGraph_15, ImpDepsGraph_16, IndirectDepsGraph_17, IndirectOptDepsGraph_18, TransOptDepsGraph_19, TransOptOrder_20, Cache0_22, &_Cache_23);
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_d_files_loop_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word Globals_2,
  MR_Word HeadVar__3_3,
  MR_Word IntDepsGraph_4,
  MR_Word ImpDepsGraph_5,
  MR_Word IndirectDepsGraph_6,
  MR_Word IndirectOptDepsGraph_7,
  MR_Word TransOptDepsGraph_8,
  MR_Word TransOptOrder_9,
  MR_Word STATE_VARIABLE_Cache_0_10,
  MR_Word * STATE_VARIABLE_Cache_11)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_Cache_11 = STATE_VARIABLE_Cache_0_10;
    else
    {
      MR_Word BurdenedModule_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word BurdenedModules_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_Cache_44_44;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Word next_value_of_STATE_VARIABLE_Cache_0_10;

      parse_tree__write_deps_file__generate_dependencies_write_d_file_13_p_0(ProgressStream_1, Globals_2, BurdenedModule_30, IntDepsGraph_4, ImpDepsGraph_5, IndirectDepsGraph_6, IndirectOptDepsGraph_7, TransOptDepsGraph_8, TransOptOrder_9, STATE_VARIABLE_Cache_0_10, &STATE_VARIABLE_Cache_44_44);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = BurdenedModules_31;
      next_value_of_STATE_VARIABLE_Cache_0_10 = STATE_VARIABLE_Cache_44_44;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_Cache_0_10 = next_value_of_STATE_VARIABLE_Cache_0_10;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_d_file_13_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1427__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_d_file_13_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__3_17;

  parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1460__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_17));
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dependencies_write_d_file_13_p_0(
  MR_Word ProgressStream_14,
  MR_Word Globals_15,
  MR_Word BurdenedModule_16,
  MR_Word IntDepsGraph_17,
  MR_Word ImpDepsGraph_18,
  MR_Word IndirectDepsGraph_19,
  MR_Word IndirectOptDepsGraph_20,
  MR_Word TransOptDepsGraph_21,
  MR_Word FullTransOptOrder_22,
  MR_Word STATE_VARIABLE_Cache_0_48,
  MR_Word * STATE_VARIABLE_Cache_49)
{
  MR_bool succeeded;
  MR_Word Baggage_25 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_16, (MR_Integer) 0))));
  MR_Word ParseTreeModuleSrc_26 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_16, (MR_Integer) 1))));
  MR_Word ModuleName_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_26, (MR_Integer) 0))));
  MR_Word IndirectOptDeps_28;
  MR_Word Intermod_29;
  MR_Word IntDeps_30;
  MR_Word ImpDeps_31;
  MR_Word IndirectDeps_32;
  MR_Word TransOptDeps0_33;
  MR_Word TransOptDeps_34;
  MR_Word IntermodDeps_35;
  MR_Word NotThisModule_36;
  MR_Word TailTransOptOrder_38;
  MR_Word TransOptOrder_41;
  MR_Word TransOptRuleInfo_42;
  MR_Word MaybeInclTransOptRule_43;
  MR_Word ModuleErrors_44;
  MR_Word FatalErrors_45;
  MR_Word ModuleKey_105;
  MR_Word TransOptOrderList_40;

  succeeded = mercury__digraph__search_key_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IndirectOptDepsGraph_20, ((MR_Box) (ModuleName_27)), &ModuleKey_105);
  if (succeeded)
  {
    MR_Word DepsKeysSet_106;
    MR_Word AddKeyDep_107;
    MR_Word DependenciesList_108;
    MR_Box conv1_DependenciesList_108;

    mercury__digraph__lookup_key_set_from_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IndirectOptDepsGraph_20, ModuleKey_105, &DepsKeysSet_106);
    {
      AddKeyDep_107 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, AddKeyDep_107, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_9[1]));
      MR_hl_field(0, AddKeyDep_107, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dependencies_write_d_file_13_p_0_1));
      MR_hl_field(0, AddKeyDep_107, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, AddKeyDep_107, 3) = ((MR_Box) (IndirectOptDepsGraph_20));
    }
    mercury__sparse_bitset__foldr_4_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[3]), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[2]), AddKeyDep_107, DepsKeysSet_106, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_DependenciesList_108);
    DependenciesList_108 = ((MR_Word) (conv1_DependenciesList_108));
    mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DependenciesList_108, &IndirectOptDeps_28);
  }
  else
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &IndirectOptDeps_28);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 502, &Intermod_29);
  switch (Intermod_29) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(IntDepsGraph_17, ModuleName_27, &IntDeps_30);
        parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(ImpDepsGraph_18, ModuleName_27, &ImpDeps_31);
        parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(IndirectDepsGraph_19, ModuleName_27, &IndirectDeps_32);
      }
      break;
    case (MR_Integer) 1:
      {
        IntDeps_30 = IndirectOptDeps_28;
        ImpDeps_31 = IndirectOptDeps_28;
        IndirectDeps_32 = IndirectOptDeps_28;
      }
      break;
  }
  parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0(TransOptDepsGraph_21, ModuleName_27, &TransOptDeps0_33);
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_27)), TransOptDeps0_33, &TransOptDeps_34);
  {
    IntermodDeps_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, IntermodDeps_35, 0) = ((MR_Box) (IntDeps_30));
    MR_hl_field(1, IntermodDeps_35, 1) = ((MR_Box) (ImpDeps_31));
    MR_hl_field(1, IntermodDeps_35, 2) = ((MR_Box) (IndirectDeps_32));
    MR_hl_field(1, IntermodDeps_35, 3) = ((MR_Box) (IndirectOptDeps_28));
    MR_hl_field(1, IntermodDeps_35, 4) = ((MR_Box) (TransOptDeps_34));
  }
  {
    NotThisModule_36 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, NotThisModule_36, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[2]));
    MR_hl_field(0, NotThisModule_36, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dependencies_write_d_file_13_p_0_2));
    MR_hl_field(0, NotThisModule_36, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, NotThisModule_36, 3) = ((MR_Box) (ModuleName_27));
  }
  mercury__list__drop_while_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NotThisModule_36, FullTransOptOrder_22, &TailTransOptOrder_38);
  succeeded = (TailTransOptOrder_38 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    TransOptOrderList_40 = ((MR_Word) ((MR_hl_field(1, TailTransOptOrder_38, (MR_Integer) 1))));
    mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptOrderList_40, &TransOptOrder_41);
  }
  else
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), &TransOptOrder_41);
  {
    TransOptRuleInfo_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TransOptRuleInfo_42, 0) = ((MR_Box) (TransOptOrder_41));
  }
  {
    MaybeInclTransOptRule_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MaybeInclTransOptRule_43, 0) = ((MR_Box) (TransOptRuleInfo_42));
  }
  ModuleErrors_44 = ((MR_Word) ((MR_hl_field(0, Baggage_25, (MR_Integer) 7))));
  FatalErrors_45 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_44, (MR_Integer) 0))));
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&parse_tree__parse_error__parse_tree__parse_error__type_ctor_info_fatal_read_module_error_0), FatalErrors_45);
  if (succeeded)
  {
    MR_Word AugCompUnit_46;
    MR_Word BurdenedAugCompUnit_47;

    parse_tree__prog_item__init_aug_compilation_unit_2_p_0(ParseTreeModuleSrc_26, &AugCompUnit_46);
    {
      BurdenedAugCompUnit_47 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, BurdenedAugCompUnit_47, 0) = ((MR_Box) (Baggage_25));
      MR_hl_field(0, BurdenedAugCompUnit_47, 1) = ((MR_Box) (AugCompUnit_46));
    }
    parse_tree__write_deps_file__write_dependency_file_fn_cache_10_p_0(ProgressStream_14, Globals_15, BurdenedAugCompUnit_47, IntermodDeps_35, IndirectOptDeps_28, MaybeInclTransOptRule_43, STATE_VARIABLE_Cache_0_48, STATE_VARIABLE_Cache_49);
  }
  else
    *STATE_VARIABLE_Cache_49 = STATE_VARIABLE_Cache_0_48;
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

  parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1460__1_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_LambdaHeadVar__3_17);
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
      MR_hl_field(0, AddKeyDep_9, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_9[1]));
      MR_hl_field(0, AddKeyDep_9, 1) = ((MR_Box) (parse_tree__write_deps_file__get_dependencies_from_graph_3_p_0_1));
      MR_hl_field(0, AddKeyDep_9, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, AddKeyDep_9, 3) = ((MR_Box) (DepsGraph_4));
    }
    mercury__sparse_bitset__foldr_4_p_0((MR_Word) (&parse_tree__write_deps_file_scalar_common_2[3]), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[2]), AddKeyDep_9, DepsKeysSet_8, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_DependenciesList_14);
    DependenciesList_14 = ((MR_Word) (conv1_DependenciesList_14));
    mercury__set__list_to_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DependenciesList_14, Dependencies_6);
  }
  else
    mercury__set__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Dependencies_6);
}

void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Globals_10,
  MR_Word BurdenedAugCompUnit_11,
  MR_Word IntermodDeps_12,
  MR_Word AllDeps_13,
  MR_Word MaybeInclTransOptRule_14)
{
  MR_Word Cache0_16;
  MR_Word _Cache_17;

  mercury__map__init_1_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), &Cache0_16);
  parse_tree__write_deps_file__write_dependency_file_fn_cache_10_p_0(ProgressStream_9, Globals_10, BurdenedAugCompUnit_11, IntermodDeps_12, AllDeps_13, MaybeInclTransOptRule_14, Cache0_16, &_Cache_17);
}

static void MR_CALL 
parse_tree__write_deps_file__write_dependency_file_fn_cache_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Globals_12,
  MR_Word BurdenedAugCompUnit_13,
  MR_Word IntermodDeps_14,
  MR_Word AllDeps_15,
  MR_Word MaybeInclTransOptRule_16,
  MR_Word STATE_VARIABLE_Cache_0_41,
  MR_Word * STATE_VARIABLE_Cache_42)
{
  MR_Word AugCompUnit_20 = ((MR_Word) ((MR_hl_field(0, BurdenedAugCompUnit_13, (MR_Integer) 1))));
  MR_Word ParseTreeModuleSrc_21 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_20, (MR_Integer) 0))));
  MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_21, (MR_Integer) 0))));
  MR_String DependencyFileName_23;
  MR_Word TmpDependencyFileNameRes_24;
  MR_String Var_49;

  parse_tree__file_names__module_name_to_file_name_create_dirs_7_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_deps_file.write_dependency_file_fn_cache\'/10", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[2])), ModuleName_22, &DependencyFileName_23);
  Var_49 = mercury__dir__dirname_1_f_0(DependencyFileName_23);
  mercury__io__file__make_temp_file_6_p_0(Var_49, (MR_String) "tmp_d", (MR_String) "", &TmpDependencyFileNameRes_24);
  if (((MR_tag((MR_Word) TmpDependencyFileNameRes_24)) == (MR_Integer) 1))
  {
    MR_Word Error_25 = ((MR_Word) ((MR_hl_field(1, TmpDependencyFileNameRes_24, (MR_Integer) 0))));
    MR_String Message_26;
    MR_String Var_54;

    Var_54 = mercury__io__error_message_1_f_0(Error_25);
    Message_26 = mercury__string__f_43_43_2_f_0((MR_String) "Could not create temporary file: ", Var_54);
    libs__file_util__report_error_4_p_0(ProgressStream_11, Message_26);
    *STATE_VARIABLE_Cache_42 = STATE_VARIABLE_Cache_0_41;
  }
  else
  {
    MR_String TmpDependencyFileName_27 = ((MR_String) ((MR_hl_field(0, TmpDependencyFileNameRes_24, (MR_Integer) 0))));
    MR_Word Verbose_28;
    MR_Word Result_29;

    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 72, &Verbose_28);
    switch (Verbose_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) "% Writing auto-dependency file \140");
          mercury__io__write_string_4_p_0(ProgressStream_11, DependencyFileName_23);
          mercury__io__write_string_4_p_0(ProgressStream_11, (MR_String) "\'...");
          mercury__io__flush_output_3_p_0(ProgressStream_11);
        }
        break;
    }
    mercury__io__open_output_4_p_0(TmpDependencyFileName_27, &Result_29);
    if (((MR_tag((MR_Word) Result_29)) == (MR_Integer) 1))
    {
      MR_Word IOError_30 = ((MR_Word) ((MR_hl_field(1, Result_29, (MR_Integer) 0))));
      MR_String IOErrorMessage_31;
      MR_String Message_107;
      MR_String Var_170;
      MR_String Var_171;

      libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_28, (MR_String) " failed.\n");
      libs__file_util__maybe_flush_output_4_p_0(ProgressStream_11, Verbose_28);
      mercury__io__error_message_2_p_0(IOError_30, &IOErrorMessage_31);
      Var_170 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", IOErrorMessage_31);
      Var_171 = mercury__string__f_43_43_2_f_0(TmpDependencyFileName_27, Var_170);
      Message_107 = mercury__string__f_43_43_2_f_0((MR_String) "error opening temporary file \140", Var_171);
      libs__file_util__report_error_4_p_0(ProgressStream_11, Message_107);
      *STATE_VARIABLE_Cache_42 = STATE_VARIABLE_Cache_0_41;
    }
    else
    {
      MR_Word DepStream_32 = ((MR_Word) ((MR_hl_field(0, Result_29, (MR_Integer) 0))));
      MR_Word MmakeFile_33;
      MR_Word FirstRenameResult_34;

      parse_tree__write_deps_file__generate_d_file_10_p_0(Globals_12, BurdenedAugCompUnit_13, IntermodDeps_14, AllDeps_15, MaybeInclTransOptRule_16, &MmakeFile_33, STATE_VARIABLE_Cache_0_41, STATE_VARIABLE_Cache_42);
      libs__mmakefiles__write_mmakefile_4_p_0(DepStream_32, MmakeFile_33);
      mercury__io__close_output_3_p_0(DepStream_32);
      mercury__io__file__rename_file_5_p_0(TmpDependencyFileName_27, DependencyFileName_23, &FirstRenameResult_34);
      if ((FirstRenameResult_34 == (MR_Word) ((MR_Unsigned) 0U)))
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_28, (MR_String) " done.\n");
      else
      {
        MR_Word RemoveResult_36;

        mercury__io__file__remove_file_4_p_0(DependencyFileName_23, &RemoveResult_36);
        if ((RemoveResult_36 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word SecondRenameResult_39;

          mercury__io__file__rename_file_5_p_0(TmpDependencyFileName_27, DependencyFileName_23, &SecondRenameResult_39);
          if ((SecondRenameResult_39 == (MR_Word) ((MR_Unsigned) 0U)))
            libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_28, (MR_String) " done.\n");
          else
          {
            MR_Word Error5_40 = ((MR_Word) ((MR_hl_field(1, SecondRenameResult_39, (MR_Integer) 0))));
            MR_String Message_109;
            MR_String ErrorMsg_110;
            MR_String Var_159;
            MR_String Var_160;
            MR_String Var_162;
            MR_String Var_163;

            libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_28, (MR_String) " failed.\n");
            libs__file_util__maybe_flush_output_4_p_0(ProgressStream_11, Verbose_28);
            mercury__io__error_message_2_p_0(Error5_40, &ErrorMsg_110);
            Var_159 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", ErrorMsg_110);
            Var_160 = mercury__string__f_43_43_2_f_0(DependencyFileName_23, Var_159);
            Var_162 = mercury__string__f_43_43_2_f_0((MR_String) "\' as \140", Var_160);
            Var_163 = mercury__string__f_43_43_2_f_0(TmpDependencyFileName_27, Var_162);
            Message_109 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t rename file \140", Var_163);
            libs__file_util__report_error_4_p_0(ProgressStream_11, Message_109);
          }
        }
        else
        {
          MR_Word Error4_37 = ((MR_Word) ((MR_hl_field(1, RemoveResult_36, (MR_Integer) 0))));
          MR_String ErrorMsg_38;
          MR_String Message_108;
          MR_String Var_166;
          MR_String Var_167;

          libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_28, (MR_String) " failed.\n");
          libs__file_util__maybe_flush_output_4_p_0(ProgressStream_11, Verbose_28);
          mercury__io__error_message_2_p_0(Error4_37, &ErrorMsg_38);
          Var_166 = mercury__string__f_43_43_2_f_0((MR_String) "\': ", ErrorMsg_38);
          Var_167 = mercury__string__f_43_43_2_f_0(DependencyFileName_23, Var_166);
          Message_108 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t remove file \140", Var_167);
          libs__file_util__report_error_4_p_0(ProgressStream_11, Message_108);
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__4_90;

  parse_tree__write_deps_file__IntroducedFrom__pred__generate_d_file__320__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_90);
  *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_90));
}

static void MR_CALL 
parse_tree__write_deps_file__generate_d_file_10_p_0(
  MR_Word Globals_11,
  MR_Word BurdenedAugCompUnit_12,
  MR_Word IntermodDeps_13,
  MR_Word AllDeps_14,
  MR_Word MaybeInclTransOptRule_15,
  MR_Word * STATE_VARIABLE_MmakeFile_82,
  MR_Word STATE_VARIABLE_Cache_0_83,
  MR_Word * STATE_VARIABLE_Cache_84)
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
  MR_Word InclMap_28;
  MR_Word PublicChildren_36;
  MR_Word LongDeps0_37;
  MR_Word FactTableFileNamesSet_44;
  MR_Word ForeignIncludeFiles_45;
  MR_String Version_46;
  MR_String FullArch_47;
  MR_Word MmakeStartComment_48;
  MR_String ModuleMakeVarName_49;
  MR_Word LongDeps_50;
  MR_Word ShortDeps0_51;
  MR_Word ShortDeps1_52;
  MR_Word ShortDeps_53;
  MR_String TransOptDateFileName_54;
  MR_Word MmakeRulesTransOpt_55;
  MR_String ObjFileName_56;
  MR_Word MmakeVarsFactTables_57;
  MR_Word FactTableSourceGroups_58;
  MR_Word MmakeRulesFactTables_59;
  MR_String ErrFileName_61;
  MR_String OptDateFileName_62;
  MR_String CDateFileName_63;
  MR_String JavaDateFileName_64;
  MR_String PicObjFileName_65;
  MR_String Int0FileName_66;
  MR_Word MmakeRuleDateFileDeps_67;
  MR_Word MmakeRulesNestedDeps_68;
  MR_Word MmakeRulesIntermod_69;
  MR_String CFileName_70;
  MR_Word MmakeRulesCHeaders_71;
  MR_Word MmakeFragmentModuleDep_72;
  MR_String DateFileName_73;
  MR_String Date0FileName_74;
  MR_Word MmakeRulesParentDates_75;
  MR_Word MmakeRulesForeignImports_76;
  MR_String Date3FileName_77;
  MR_Word MmakeRulesInstallShadows_78;
  MR_Word MmakeRulesSubDirShorthand_79;
  MR_Word HaveMap_80;
  MR_Word MmakeRulesPatterns_81;
  MR_Word Var_91;
  MR_Word STATE_VARIABLE_Cache_96_96;
  MR_Word STATE_VARIABLE_Cache_99_99;
  MR_Word STATE_VARIABLE_Cache_107_107;
  MR_Word STATE_VARIABLE_Cache_112_112;
  MR_Word STATE_VARIABLE_Cache_117_117;
  MR_Word STATE_VARIABLE_Cache_122_122;
  MR_Word STATE_VARIABLE_Cache_127_127;
  MR_Word STATE_VARIABLE_Cache_132_132;
  MR_Word STATE_VARIABLE_Cache_135_135;
  MR_Word STATE_VARIABLE_Cache_137_137;
  MR_Word STATE_VARIABLE_Cache_139_139;
  MR_Word STATE_VARIABLE_Cache_143_143;
  MR_Word STATE_VARIABLE_Cache_146_146;
  MR_Word STATE_VARIABLE_Cache_148_148;
  MR_Word STATE_VARIABLE_Cache_152_152;
  MR_Word STATE_VARIABLE_Cache_157_157;
  MR_Word STATE_VARIABLE_Cache_160_160;
  MR_Word STATE_VARIABLE_Cache_162_162;
  MR_Word STATE_VARIABLE_Cache_166_166;
  MR_Word STATE_VARIABLE_Cache_169_169;
  MR_Word STATE_VARIABLE_MmakeFile_174_174;
  MR_Word STATE_VARIABLE_MmakeFile_175_175;
  MR_Word STATE_VARIABLE_MmakeFile_176_176;
  MR_Word STATE_VARIABLE_MmakeFile_177_177;
  MR_Word STATE_VARIABLE_MmakeFile_178_178;
  MR_Word STATE_VARIABLE_MmakeFile_179_179;
  MR_Word STATE_VARIABLE_MmakeFile_180_180;
  MR_Word STATE_VARIABLE_MmakeFile_181_181;
  MR_Word STATE_VARIABLE_MmakeFile_182_182;
  MR_Word STATE_VARIABLE_MmakeFile_183_183;
  MR_Word STATE_VARIABLE_MmakeFile_184_184;
  MR_Word STATE_VARIABLE_MmakeFile_185_185;
  MR_Word STATE_VARIABLE_MmakeFile_186_186;
  MR_Word STATE_VARIABLE_MmakeFile_187_187;
  MR_Box conv1_PublicChildren_36;
  MR_String SourceFileBase_60;

  ModuleNameString_26 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_25);
  Ancestors_27 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_25);
  InclMap_28 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_24, (MR_Integer) 2))));
  Var_91 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[11]), InclMap_28, ((MR_Box) (Var_91)), &conv1_PublicChildren_36);
  PublicChildren_36 = ((MR_Word) (conv1_PublicChildren_36));
  if ((IntermodDeps_13 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word IndirectIntSpecs_38;
    MR_Word Var_92 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_24, (MR_Integer) 3))));

    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_maybe_implicit_import_and_or_use_0), Var_92, &LongDeps0_37);
    IndirectIntSpecs_38 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_20, (MR_Integer) 3))));
    mercury__map__keys_as_set_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0), IndirectIntSpecs_38, &ShortDeps0_51);
  }
  else
  {
    MR_Word IntDeps_40 = ((MR_Word) ((MR_hl_field(1, IntermodDeps_13, (MR_Integer) 0))));
    MR_Word ImpDeps_41 = ((MR_Word) ((MR_hl_field(1, IntermodDeps_13, (MR_Integer) 1))));

    ShortDeps0_51 = ((MR_Word) ((MR_hl_field(1, IntermodDeps_13, (MR_Integer) 2))));
    mercury__set__union_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntDeps_40, ImpDeps_41, &LongDeps0_37);
  }
  parse_tree__get_dependencies__get_fact_tables_2_p_0(ParseTreeModuleSrc_24, &FactTableFileNamesSet_44);
  parse_tree__get_dependencies__get_foreign_include_file_infos_2_p_0(ParseTreeModuleSrc_24, &ForeignIncludeFiles_45);
  mercury__library__version_2_p_0(&Version_46, &FullArch_47);
  {
    MmakeStartComment_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MmakeStartComment_48, 0) = ((MR_Box) ((MR_String) "module dependencies"));
    MR_hl_field(0, MmakeStartComment_48, 1) = ((MR_Box) (ModuleNameString_26));
    MR_hl_field(0, MmakeStartComment_48, 2) = ((MR_Box) (SourceFileName_21));
    MR_hl_field(0, MmakeStartComment_48, 3) = ((MR_Box) (Version_46));
    MR_hl_field(0, MmakeStartComment_48, 4) = ((MR_Box) (FullArch_47));
  }
  parse_tree__file_names__module_name_to_make_var_name_2_p_0(ModuleName_25, &ModuleMakeVarName_49);
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_25)), LongDeps0_37, &LongDeps_50);
  mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ShortDeps0_51, LongDeps_50, &ShortDeps1_52);
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_25)), ShortDeps1_52, &ShortDeps_53);
  parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[5])), ModuleName_25, &TransOptDateFileName_54, STATE_VARIABLE_Cache_0_83, &STATE_VARIABLE_Cache_96_96);
  parse_tree__write_deps_file__construct_trans_opt_deps_rule_9_p_0(Globals_11, MaybeInclTransOptRule_15, IntermodDeps_13, TransOptDateFileName_54, &MmakeRulesTransOpt_55, STATE_VARIABLE_Cache_96_96, &STATE_VARIABLE_Cache_99_99);
  succeeded = mercury__string__remove_suffix_3_p_0(SourceFileName_21, (MR_String) ".m", &SourceFileBase_60);
  if (succeeded)
    ErrFileName_61 = mercury__string__f_43_43_2_f_0(SourceFileBase_60, (MR_String) ".err");
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_String) "source file name doesn\'t end in \140.m\'");
      return;
    }
  parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[6])), ModuleName_25, &OptDateFileName_62, STATE_VARIABLE_Cache_99_99, &STATE_VARIABLE_Cache_107_107);
  parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[7])), ModuleName_25, &CDateFileName_63, STATE_VARIABLE_Cache_107_107, &STATE_VARIABLE_Cache_112_112);
  parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[8])), ModuleName_25, &ObjFileName_56, STATE_VARIABLE_Cache_112_112, &STATE_VARIABLE_Cache_117_117);
  parse_tree__write_deps_file__construct_fact_tables_entries_7_p_0(ModuleMakeVarName_49, SourceFileName_21, ObjFileName_56, FactTableFileNamesSet_44, &MmakeVarsFactTables_57, &FactTableSourceGroups_58, &MmakeRulesFactTables_59);
  parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[9])), ModuleName_25, &JavaDateFileName_64, STATE_VARIABLE_Cache_117_117, &STATE_VARIABLE_Cache_122_122);
  parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[10])), ModuleName_25, &PicObjFileName_65, STATE_VARIABLE_Cache_122_122, &STATE_VARIABLE_Cache_127_127);
  parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[3])), ModuleName_25, &Int0FileName_66, STATE_VARIABLE_Cache_127_127, &STATE_VARIABLE_Cache_132_132);
  parse_tree__write_deps_file__construct_date_file_deps_rule_20_p_0(Globals_11, ModuleName_25, SourceFileName_21, Ancestors_27, LongDeps_50, ShortDeps_53, PublicChildren_36, Int0FileName_66, OptDateFileName_62, TransOptDateFileName_54, ForeignIncludeFiles_45, CDateFileName_63, JavaDateFileName_64, ErrFileName_61, FactTableSourceGroups_58, &MmakeRuleDateFileDeps_67, STATE_VARIABLE_Cache_132_132, &STATE_VARIABLE_Cache_135_135);
  parse_tree__write_deps_file__construct_build_nested_children_first_rule_8_p_0(Globals_11, ModuleName_25, MaybeTopModule_23, &MmakeRulesNestedDeps_68, STATE_VARIABLE_Cache_135_135, &STATE_VARIABLE_Cache_137_137);
  parse_tree__write_deps_file__construct_intermod_rules_14_p_0(Globals_11, ModuleName_25, LongDeps_50, AllDeps_14, ErrFileName_61, TransOptDateFileName_54, CDateFileName_63, JavaDateFileName_64, ObjFileName_56, &MmakeRulesIntermod_69, STATE_VARIABLE_Cache_137_137, &STATE_VARIABLE_Cache_139_139);
  parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[11])), ModuleName_25, &CFileName_70, STATE_VARIABLE_Cache_139_139, &STATE_VARIABLE_Cache_143_143);
  parse_tree__write_deps_file__construct_c_header_rules_11_p_0(Globals_11, ModuleName_25, AllDeps_14, CFileName_70, ObjFileName_56, PicObjFileName_65, &MmakeRulesCHeaders_71, STATE_VARIABLE_Cache_143_143, &STATE_VARIABLE_Cache_146_146);
  parse_tree__write_deps_file__construct_module_dep_fragment_8_p_0(Globals_11, ModuleName_25, CFileName_70, &MmakeFragmentModuleDep_72, STATE_VARIABLE_Cache_146_146, &STATE_VARIABLE_Cache_148_148);
  parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[4])), ModuleName_25, &DateFileName_73, STATE_VARIABLE_Cache_148_148, &STATE_VARIABLE_Cache_152_152);
  parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[5])), ModuleName_25, &Date0FileName_74, STATE_VARIABLE_Cache_152_152, &STATE_VARIABLE_Cache_157_157);
  parse_tree__write_deps_file__construct_self_and_parent_date_date0_rules_12_p_0(Globals_11, SourceFileName_21, Date0FileName_74, DateFileName_73, Ancestors_27, LongDeps_50, ShortDeps_53, &MmakeRulesParentDates_75, STATE_VARIABLE_Cache_157_157, &STATE_VARIABLE_Cache_160_160);
  parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0(Globals_11, AugCompUnit_20, IntermodDeps_13, SourceFileModuleName_22, ObjFileName_56, PicObjFileName_65, &MmakeRulesForeignImports_76, STATE_VARIABLE_Cache_160_160, &STATE_VARIABLE_Cache_162_162);
  parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_11, (MR_String) "predicate \140parse_tree.write_deps_file.generate_d_file\'/10", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[6])), ModuleName_25, &Date3FileName_77, STATE_VARIABLE_Cache_162_162, &STATE_VARIABLE_Cache_166_166);
  parse_tree__write_deps_file__construct_install_shadow_rules_13_p_0(Globals_11, ModuleName_25, Int0FileName_66, Date0FileName_74, DateFileName_73, Date3FileName_77, OptDateFileName_62, TransOptDateFileName_54, &MmakeRulesInstallShadows_78, STATE_VARIABLE_Cache_166_166, &STATE_VARIABLE_Cache_169_169);
  parse_tree__write_deps_file__construct_subdir_short_rules_7_p_0(Globals_11, ModuleName_25, &MmakeRulesSubDirShorthand_79, STATE_VARIABLE_Cache_169_169, STATE_VARIABLE_Cache_84);
  parse_tree__source_file_map__have_source_file_map_3_p_0(&HaveMap_80);
  parse_tree__write_deps_file__construct_any_needed_pattern_rules_12_p_0(HaveMap_80, ModuleName_25, SourceFileModuleName_22, SourceFileName_21, Date0FileName_74, DateFileName_73, Date3FileName_77, OptDateFileName_62, TransOptDateFileName_54, CDateFileName_63, JavaDateFileName_64, &MmakeRulesPatterns_81);
  libs__mmakefiles__start_mmakefile_1_p_0(&STATE_VARIABLE_MmakeFile_174_174);
  libs__mmakefiles__add_mmake_entry_3_p_0(MmakeStartComment_48, STATE_VARIABLE_MmakeFile_174_174, &STATE_VARIABLE_MmakeFile_175_175);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesTransOpt_55, STATE_VARIABLE_MmakeFile_175_175, &STATE_VARIABLE_MmakeFile_176_176);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeVarsFactTables_57, STATE_VARIABLE_MmakeFile_176_176, &STATE_VARIABLE_MmakeFile_177_177);
  libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleDateFileDeps_67, STATE_VARIABLE_MmakeFile_177_177, &STATE_VARIABLE_MmakeFile_178_178);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesFactTables_59, STATE_VARIABLE_MmakeFile_178_178, &STATE_VARIABLE_MmakeFile_179_179);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesNestedDeps_68, STATE_VARIABLE_MmakeFile_179_179, &STATE_VARIABLE_MmakeFile_180_180);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesIntermod_69, STATE_VARIABLE_MmakeFile_180_180, &STATE_VARIABLE_MmakeFile_181_181);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesCHeaders_71, STATE_VARIABLE_MmakeFile_181_181, &STATE_VARIABLE_MmakeFile_182_182);
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentModuleDep_72, STATE_VARIABLE_MmakeFile_182_182, &STATE_VARIABLE_MmakeFile_183_183);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesParentDates_75, STATE_VARIABLE_MmakeFile_183_183, &STATE_VARIABLE_MmakeFile_184_184);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesForeignImports_76, STATE_VARIABLE_MmakeFile_184_184, &STATE_VARIABLE_MmakeFile_185_185);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesInstallShadows_78, STATE_VARIABLE_MmakeFile_185_185, &STATE_VARIABLE_MmakeFile_186_186);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesSubDirShorthand_79, STATE_VARIABLE_MmakeFile_186_186, &STATE_VARIABLE_MmakeFile_187_187);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesPatterns_81, STATE_VARIABLE_MmakeFile_187_187, STATE_VARIABLE_MmakeFile_82);
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
  MR_Word conv1_MmakeRule_12;
  MR_Word conv0_STATE_VARIABLE_Cache_20;

  parse_tree__write_deps_file__construct_subdirs_shorthand_rule_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_MmakeRule_12, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_20);
  *wrapper_arg_2 = ((MR_Box) (conv1_MmakeRule_12));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_20));
}

static void MR_CALL 
parse_tree__write_deps_file__construct_subdir_short_rules_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * MmakeRulesSubDirShorthand_10,
  MR_Word STATE_VARIABLE_Cache_0_15,
  MR_Word * STATE_VARIABLE_Cache_16)
{
  MR_Word SubdirSetting_13;

  libs__globals__get_subdir_setting_2_p_0(Globals_8, &SubdirSetting_13);
  switch (SubdirSetting_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *MmakeRulesSubDirShorthand_10 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Cache_16 = STATE_VARIABLE_Cache_0_15;
      }
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_Word Var_37;
        MR_Box conv3_STATE_VARIABLE_Cache_16;
        MR_Box conv2_STATE_VARIABLE_IO_18;

        {
          Var_37 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_37, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[0]));
          MR_hl_field(0, Var_37, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_subdir_short_rules_7_p_0_1));
          MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_37, 3) = ((MR_Box) (Globals_8));
          MR_hl_field(0, Var_37, 4) = ((MR_Box) (ModuleName_9));
        }
        mercury__list__map_foldl2_7_p_2((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_37, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[26])), MmakeRulesSubDirShorthand_10, ((MR_Box) (STATE_VARIABLE_Cache_0_15)), &conv3_STATE_VARIABLE_Cache_16, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_18);
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
  MR_Word STATE_VARIABLE_Cache_36_36;
  MR_Word STATE_VARIABLE_Cache_41_41;
  MR_Word STATE_VARIABLE_Cache_46_46;
  MR_Word STATE_VARIABLE_Cache_51_51;
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

  parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_14, (MR_String) "predicate \140parse_tree.write_deps_file.construct_install_shadow_rules\'/13", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[7])), ModuleName_15, &IntFileName_25, STATE_VARIABLE_Cache_0_30, &STATE_VARIABLE_Cache_36_36);
  parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_14, (MR_String) "predicate \140parse_tree.write_deps_file.construct_install_shadow_rules\'/13", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[8])), ModuleName_15, &Int2FileName_26, STATE_VARIABLE_Cache_36_36, &STATE_VARIABLE_Cache_41_41);
  parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_14, (MR_String) "predicate \140parse_tree.write_deps_file.construct_install_shadow_rules\'/13", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[11])), ModuleName_15, &Int3FileName_27, STATE_VARIABLE_Cache_41_41, &STATE_VARIABLE_Cache_46_46);
  parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_14, (MR_String) "predicate \140parse_tree.write_deps_file.construct_install_shadow_rules\'/13", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[17])), ModuleName_15, &OptFileName_28, STATE_VARIABLE_Cache_46_46, &STATE_VARIABLE_Cache_51_51);
  parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_14, (MR_String) "predicate \140parse_tree.write_deps_file.construct_install_shadow_rules\'/13", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[12])), ModuleName_15, &TransOptFileName_29, STATE_VARIABLE_Cache_51_51, STATE_VARIABLE_Cache_31);
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (Date0FileName_17));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_65 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_59, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_59, 1) = ((MR_Box) ((MR_String) "int0_on_date0"));
    MR_hl_field(3, Var_59, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_59, 3) = ((MR_Box) (Int0FileName_16));
    MR_hl_field(3, Var_59, 4) = ((MR_Box) (Var_62));
    MR_hl_field(3, Var_59, 5) = ((MR_Box) (Var_64));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (DateFileName_18));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_74 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_68, 1) = ((MR_Box) ((MR_String) "int_on_date"));
    MR_hl_field(3, Var_68, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_68, 3) = ((MR_Box) (IntFileName_25));
    MR_hl_field(3, Var_68, 4) = ((MR_Box) (Var_71));
    MR_hl_field(3, Var_68, 5) = ((MR_Box) (Var_73));
  }
  Var_83 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_77 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_77, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_77, 1) = ((MR_Box) ((MR_String) "int2_on_date"));
    MR_hl_field(3, Var_77, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_77, 3) = ((MR_Box) (Int2FileName_26));
    MR_hl_field(3, Var_77, 4) = ((MR_Box) (Var_71));
    MR_hl_field(3, Var_77, 5) = ((MR_Box) (Var_82));
  }
  {
    Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_89, 0) = ((MR_Box) (Date3FileName_19));
    MR_hl_field(1, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_92 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_86, 1) = ((MR_Box) ((MR_String) "int3_on_date3"));
    MR_hl_field(3, Var_86, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_86, 3) = ((MR_Box) (Int3FileName_27));
    MR_hl_field(3, Var_86, 4) = ((MR_Box) (Var_89));
    MR_hl_field(3, Var_86, 5) = ((MR_Box) (Var_91));
  }
  {
    Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_98, 0) = ((MR_Box) (OptDateFileName_20));
    MR_hl_field(1, Var_98, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_101 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_100, 0) = ((MR_Box) (Var_101));
    MR_hl_field(1, Var_100, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_95 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_95, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_95, 1) = ((MR_Box) ((MR_String) "opt_on_opt_date"));
    MR_hl_field(3, Var_95, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_95, 3) = ((MR_Box) (OptFileName_28));
    MR_hl_field(3, Var_95, 4) = ((MR_Box) (Var_98));
    MR_hl_field(3, Var_95, 5) = ((MR_Box) (Var_100));
  }
  {
    Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_107, 0) = ((MR_Box) (TransOptDateFileName_21));
    MR_hl_field(1, Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_110 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_109, 0) = ((MR_Box) (Var_110));
    MR_hl_field(1, Var_109, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_104 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_104, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_104, 1) = ((MR_Box) ((MR_String) "trans_opt_on_trans_opt_date"));
    MR_hl_field(3, Var_104, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_104, 3) = ((MR_Box) (TransOptFileName_29));
    MR_hl_field(3, Var_104, 4) = ((MR_Box) (Var_107));
    MR_hl_field(3, Var_104, 5) = ((MR_Box) (Var_109));
  }
  {
    Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_103, 0) = ((MR_Box) (Var_104));
    MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_94, 0) = ((MR_Box) (Var_95));
    MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_103));
  }
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) (Var_94));
  }
  {
    Var_76 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_76, 0) = ((MR_Box) (Var_77));
    MR_hl_field(1, Var_76, 1) = ((MR_Box) (Var_85));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (Var_68));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_76));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRulesInstallShadows_22 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_59));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_67));
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
  MR_Word conv10_LambdaHeadVar__2_69;

  succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__construct_foreign_import_rules__1004__1_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv10_LambdaHeadVar__2_69);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv10_LambdaHeadVar__2_69));
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

  succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__construct_foreign_import_rules__998__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
  MR_Word STATE_VARIABLE_Cache_0_50,
  MR_Word * STATE_VARIABLE_Cache_51)
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
    MR_Word STATE_VARIABLE_FIMSpecs_54_54;
    MR_Word STATE_VARIABLE_FIMSpecs_56_56;
    MR_Word STATE_VARIABLE_FIMSpecs_58_58;
    MR_Word STATE_VARIABLE_FIMSpecs_60_60;
    MR_Word STATE_VARIABLE_FIMSpecs_62_62;
    MR_Word STATE_VARIABLE_FIMSpecs_64_64;
    MR_Word Var_67;
    MR_Box conv1_STATE_VARIABLE_FIMSpecs_56_56;
    MR_Box conv3_STATE_VARIABLE_FIMSpecs_58_58;
    MR_Box conv5_STATE_VARIABLE_FIMSpecs_60_60;
    MR_Box conv7_STATE_VARIABLE_FIMSpecs_62_62;
    MR_Box conv9_STATE_VARIABLE_FIMSpecs_64_64;

    parse_tree__get_dependencies__get_fim_specs_2_p_0(ParseTreeModuleSrc_21, &STATE_VARIABLE_FIMSpecs_54_54);
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_ancestor_int_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[6]), AncestorIntSpecs_22, ((MR_Box) (STATE_VARIABLE_FIMSpecs_54_54)), &conv1_STATE_VARIABLE_FIMSpecs_56_56);
    STATE_VARIABLE_FIMSpecs_56_56 = ((MR_Word) (conv1_STATE_VARIABLE_FIMSpecs_56_56));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_direct_int1_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[7]), DirectInt1Specs_23, ((MR_Box) (STATE_VARIABLE_FIMSpecs_56_56)), &conv3_STATE_VARIABLE_FIMSpecs_58_58);
    STATE_VARIABLE_FIMSpecs_58_58 = ((MR_Word) (conv3_STATE_VARIABLE_FIMSpecs_58_58));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_indirect_int2_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[8]), IndirectInt2Specs_24, ((MR_Box) (STATE_VARIABLE_FIMSpecs_58_58)), &conv5_STATE_VARIABLE_FIMSpecs_60_60);
    STATE_VARIABLE_FIMSpecs_60_60 = ((MR_Word) (conv5_STATE_VARIABLE_FIMSpecs_60_60));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_parse_tree_plain_opt_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[9]), PlainOpts_25, ((MR_Box) (STATE_VARIABLE_FIMSpecs_60_60)), &conv7_STATE_VARIABLE_FIMSpecs_62_62);
    STATE_VARIABLE_FIMSpecs_62_62 = ((MR_Word) (conv7_STATE_VARIABLE_FIMSpecs_62_62));
    mercury__map__foldl_values_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_spec_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[1]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[10]), IntForOptSpecs_27, ((MR_Box) (STATE_VARIABLE_FIMSpecs_62_62)), &conv9_STATE_VARIABLE_FIMSpecs_64_64);
    STATE_VARIABLE_FIMSpecs_64_64 = ((MR_Word) (conv9_STATE_VARIABLE_FIMSpecs_64_64));
    libs__globals__get_backend_foreign_languages_2_p_0(Globals_12, &BackendLangs_37);
    {
      IsBackendFIM_38 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, IsBackendFIM_38, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[1]));
      MR_hl_field(0, IsBackendFIM_38, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_6));
      MR_hl_field(0, IsBackendFIM_38, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, IsBackendFIM_38, 3) = ((MR_Box) (BackendLangs_37));
    }
    mercury__set__filter_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), IsBackendFIM_38, STATE_VARIABLE_FIMSpecs_64_64, &FIMSpecs_36);
    {
      Var_67 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_67, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[6]));
      MR_hl_field(0, Var_67, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_foreign_import_rules_11_p_0_7));
      MR_hl_field(0, Var_67, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_67, 3) = ((MR_Box) (SourceFileModuleName_15));
    }
    mercury__set__filter_map_3_p_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_67, FIMSpecs_36, &ForeignImportedModuleNamesSet_34);
  }
  else
    ForeignImportedModuleNamesSet_34 = ((MR_Word) ((MR_hl_field(1, IntermodDeps_14, (MR_Integer) 3))));
  ForeignImportedModuleNames_42 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ForeignImportedModuleNamesSet_34);
  if ((ForeignImportedModuleNames_42 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MmakeRulesForeignImports_18 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Cache_51 = STATE_VARIABLE_Cache_0_50;
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
          MR_Word MmakeRuleForeignImports_48;
          MR_Word Var_71;

          {
            Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_71, 0) = ((MR_Box) (PicObjFileName_17));
            MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            ForeignImportTargets_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ForeignImportTargets_46, 0) = ((MR_Box) (ObjFileName_16));
            MR_hl_field(0, ForeignImportTargets_46, 1) = ((MR_Box) (Var_71));
          }
          parse_tree__write_deps_file__gather_foreign_import_deps_9_p_0(Globals_12, (MR_Word) (&parse_tree__write_deps_file_scalar_common_4[3]), ForeignImportTargets_46, ForeignImportedModuleNames_42, &MmakeRuleForeignImports_48, STATE_VARIABLE_Cache_0_50, STATE_VARIABLE_Cache_51);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MmakeRulesForeignImports_18 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (MmakeRuleForeignImports_48));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *MmakeRulesForeignImports_18 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Cache_51 = STATE_VARIABLE_Cache_0_50;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ClassFileName_49;
          MR_Word STATE_VARIABLE_Cache_79_79;
          MR_Word ForeignImportTargets_90;
          MR_Word MmakeRuleForeignImports_92;

          parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_deps_file.construct_foreign_import_rules\'/11", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[20])), ModuleName_30, &ClassFileName_49, STATE_VARIABLE_Cache_0_50, &STATE_VARIABLE_Cache_79_79);
          {
            ForeignImportTargets_90 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ForeignImportTargets_90, 0) = ((MR_Box) (ClassFileName_49));
            MR_hl_field(0, ForeignImportTargets_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          parse_tree__write_deps_file__gather_foreign_import_deps_9_p_0(Globals_12, (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[19])), ForeignImportTargets_90, ForeignImportedModuleNames_42, &MmakeRuleForeignImports_92, STATE_VARIABLE_Cache_79_79, STATE_VARIABLE_Cache_51);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MmakeRulesForeignImports_18 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (MmakeRuleForeignImports_92));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__gather_foreign_import_deps_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_String conv1_FileName_14;
  MR_Word conv0_STATE_VARIABLE_Cache_22;

  parse_tree__write_deps_file__make_module_file_name_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_22);
  *wrapper_arg_2 = ((MR_Box) (conv1_FileName_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_22));
}

static void MR_CALL 
parse_tree__write_deps_file__gather_foreign_import_deps_9_p_0(
  MR_Word Globals_10,
  MR_Word ForeignImportExt_11,
  MR_Word ForeignImportTargets_12,
  MR_Word ForeignImportedModuleNames_13,
  MR_Word * MmakeRule_14,
  MR_Word STATE_VARIABLE_Cache_0_20,
  MR_Word * STATE_VARIABLE_Cache_21)
{
  MR_Word ForeignImportedFileNames_17;
  MR_String ForeignImportExtStr_18;
  MR_String RuleName_19;
  MR_String Var_27;
  MR_Word Var_31;
  MR_Box conv3_STATE_VARIABLE_Cache_21;
  MR_Box conv2_STATE_VARIABLE_IO_23;

  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (parse_tree__write_deps_file__gather_foreign_import_deps_9_p_0_1));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (Globals_10));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_deps_file.make_module_file_names_with_ext\'/8"));
    MR_hl_field(0, Var_31, 5) = ((MR_Box) (ForeignImportExt_11));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_31, ForeignImportedModuleNames_13, &ForeignImportedFileNames_17, ((MR_Box) (STATE_VARIABLE_Cache_0_20)), &conv3_STATE_VARIABLE_Cache_21, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_23);
  *STATE_VARIABLE_Cache_21 = ((MR_Word) (conv3_STATE_VARIABLE_Cache_21));
  ForeignImportExtStr_18 = parse_tree__file_names__extension_to_string_2_f_0(Globals_10, ForeignImportExt_11);
  Var_27 = mercury__string__remove_prefix_if_present_2_f_0((MR_String) ".", ForeignImportExtStr_18);
  RuleName_19 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_deps_for_", Var_27);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRule_14 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, base, 1) = ((MR_Box) (RuleName_19));
    MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, base, 3) = ((MR_Box) (ForeignImportTargets_12));
    MR_hl_field(3, base, 4) = ((MR_Box) (ForeignImportedFileNames_17));
    MR_hl_field(3, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__construct_self_and_parent_date_date0_rules_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_String conv1_FileName_14;
  MR_Word conv0_STATE_VARIABLE_Cache_22;

  parse_tree__write_deps_file__make_module_file_name_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_22);
  *wrapper_arg_2 = ((MR_Box) (conv1_FileName_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_22));
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
  MR_Word Var_35;
  MR_Word STATE_VARIABLE_Cache_36_36;
  MR_Word Var_40;
  MR_Word STATE_VARIABLE_Cache_41_41;
  MR_Word Var_45;
  MR_Word STATE_VARIABLE_Cache_46_46;
  MR_Word Var_50;
  MR_Word STATE_VARIABLE_Cache_51_51;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_70;
  MR_Word Var_71;
  MR_Word Var_73;
  MR_Word Var_77;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_86;
  MR_Word Var_88;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_96;
  MR_Word Var_99;
  MR_Word Var_103;
  MR_Box conv3_STATE_VARIABLE_Cache_36_36;
  MR_Box conv2_STATE_VARIABLE_IO_37_37;

  Var_35 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_17);
  {
    Var_103 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_103, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0]));
    MR_hl_field(0, Var_103, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_self_and_parent_date_date0_rules_12_p_0_1));
    MR_hl_field(0, Var_103, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_103, 3) = ((MR_Box) (Globals_13));
    MR_hl_field(0, Var_103, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_deps_file.make_module_file_names_with_ext\'/8"));
    MR_hl_field(0, Var_103, 5) = ((MR_Box) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[4])));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_103, Var_35, &AncestorDateFileNames_23, ((MR_Box) (STATE_VARIABLE_Cache_0_30)), &conv3_STATE_VARIABLE_Cache_36_36, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_37_37);
  STATE_VARIABLE_Cache_36_36 = ((MR_Word) (conv3_STATE_VARIABLE_Cache_36_36));
  Var_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_17);
  parse_tree__write_deps_file__make_module_file_names_with_ext_8_p_0(Globals_13, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[3])), Var_40, &AncestorInt0FileNames_24, STATE_VARIABLE_Cache_36_36, &STATE_VARIABLE_Cache_41_41);
  Var_45 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), LongDeps_18);
  parse_tree__write_deps_file__make_module_file_names_with_ext_8_p_0(Globals_13, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[11])), Var_45, &LongDepInt3FileNames_25, STATE_VARIABLE_Cache_41_41, &STATE_VARIABLE_Cache_46_46);
  Var_50 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ShortDeps_19);
  parse_tree__write_deps_file__make_module_file_names_with_ext_8_p_0(Globals_13, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[11])), Var_50, &ShortDepInt3FileNames_26, STATE_VARIABLE_Cache_46_46, &STATE_VARIABLE_Cache_51_51);
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (Date0FileName_15));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) (AncestorDateFileNames_23));
  }
  {
    Var_59 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_59, 0) = ((MR_Box) (DateFileName_16));
    MR_hl_field(0, Var_59, 1) = ((MR_Box) (Var_60));
  }
  {
    Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_57, 0) = ((MR_Box) ((MR_String) "date files"));
    MR_hl_field(0, Var_57, 1) = ((MR_Box) (Var_59));
  }
  {
    Var_56 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_56, 0) = ((MR_Box) (Var_57));
    MR_hl_field(0, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_64 = libs__mmakefiles__make_singleton_file_name_group_2_f_0((MR_String) "source", SourceFileName_14);
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_68 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "ancestor int0", AncestorInt0FileNames_24);
  Var_71 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "long dep int3s", LongDepInt3FileNames_25);
  Var_73 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "short dep int3s", ShortDepInt3FileNames_26);
  Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_71, Var_73);
  Var_67 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_68, Var_70);
  Var_62 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_63, Var_67);
  {
    MmakeRuleParentDates_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleParentDates_27, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, MmakeRuleParentDates_27, 1) = ((MR_Box) ((MR_String) "self_and_parent_date_deps"));
    MR_hl_field(3, MmakeRuleParentDates_27, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleParentDates_27, 3) = ((MR_Box) (Var_56));
    MR_hl_field(3, MmakeRuleParentDates_27, 4) = ((MR_Box) (Var_62));
    MR_hl_field(3, MmakeRuleParentDates_27, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_77 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_17);
  parse_tree__write_deps_file__make_module_file_names_with_ext_8_p_0(Globals_13, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[5])), Var_77, &AncestorDate0FileNames_28, STATE_VARIABLE_Cache_51_51, STATE_VARIABLE_Cache_31);
  {
    Var_86 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_86, 0) = ((MR_Box) (Date0FileName_15));
    MR_hl_field(0, Var_86, 1) = ((MR_Box) (AncestorDate0FileNames_28));
  }
  {
    Var_84 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_84, 0) = ((MR_Box) ((MR_String) "date0s"));
    MR_hl_field(0, Var_84, 1) = ((MR_Box) (Var_86));
  }
  {
    Var_83 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_83, 0) = ((MR_Box) (Var_84));
    MR_hl_field(0, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_90 = libs__mmakefiles__make_singleton_file_name_group_2_f_0((MR_String) "source", SourceFileName_14);
  {
    Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_89, 0) = ((MR_Box) (Var_90));
    MR_hl_field(1, Var_89, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_94 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "long dep int3s", LongDepInt3FileNames_25);
  Var_96 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "short dep int3s", ShortDepInt3FileNames_26);
  Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_94, Var_96);
  Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_89, Var_93);
  {
    MmakeRuleParentDate0s_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleParentDate0s_29, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, MmakeRuleParentDate0s_29, 1) = ((MR_Box) ((MR_String) "self_and_parent_date0_deps"));
    MR_hl_field(3, MmakeRuleParentDate0s_29, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleParentDate0s_29, 3) = ((MR_Box) (Var_83));
    MR_hl_field(3, MmakeRuleParentDate0s_29, 4) = ((MR_Box) (Var_88));
    MR_hl_field(3, MmakeRuleParentDate0s_29, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_99, 0) = ((MR_Box) (MmakeRuleParentDate0s_29));
    MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRulesParentDates_20 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (MmakeRuleParentDates_27));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_99));
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
  MR_Word STATE_VARIABLE_Cache_23_23;
  MR_Word Var_33;
  MR_Word Var_36;
  MR_Word Var_39;
  MR_Word Var_42;

  parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.construct_module_dep_fragment\'/8", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[19])), ModuleName_10, &JavaFileName_15, STATE_VARIABLE_Cache_0_17, &STATE_VARIABLE_Cache_23_23);
  parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_9, (MR_String) "predicate \140parse_tree.write_deps_file.construct_module_dep_fragment\'/8", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[9])), ModuleName_10, &ModuleDepFileName_16, STATE_VARIABLE_Cache_23_23, STATE_VARIABLE_Cache_18);
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (JavaFileName_15));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_33, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_33, 1) = ((MR_Box) ((MR_String) "module_dep_on_java"));
    MR_hl_field(3, Var_33, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_33, 3) = ((MR_Box) (ModuleDepFileName_16));
    MR_hl_field(3, Var_33, 4) = ((MR_Box) (Var_36));
    MR_hl_field(3, Var_33, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) (CFileName_11));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_39, 1) = ((MR_Box) ((MR_String) "module_dep_on_c"));
    MR_hl_field(3, Var_39, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_39, 3) = ((MR_Box) (ModuleDepFileName_16));
    MR_hl_field(3, Var_39, 4) = ((MR_Box) (Var_42));
    MR_hl_field(3, Var_39, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *MmakeFragmentModuleDep_12 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[10]));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_33));
    MR_hl_field(1, base, 2) = ((MR_Box) (Var_39));
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
  MR_String conv1_FileName_14;
  MR_Word conv0_STATE_VARIABLE_Cache_22;

  parse_tree__write_deps_file__make_module_file_name_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_22);
  *wrapper_arg_2 = ((MR_Box) (conv1_FileName_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_22));
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
  MR_Word STATE_VARIABLE_Cache_39_39;
  MR_Word STATE_VARIABLE_Cache_48_48;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_61;
  MR_Word Var_64;

  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 312, &HighLevelCode_21);
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
    MR_Word Var_38;
    MR_Word Var_68;
    MR_Box conv3_STATE_VARIABLE_Cache_39_39;
    MR_Box conv2_STATE_VARIABLE_IO_40_40;

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
    Var_38 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllDeps_14);
    {
      Var_68 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_68, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0]));
      MR_hl_field(0, Var_68, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_c_header_rules_11_p_0_1));
      MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_68, 3) = ((MR_Box) (Globals_12));
      MR_hl_field(0, Var_68, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_deps_file.make_module_file_names_with_ext\'/8"));
      MR_hl_field(0, Var_68, 5) = ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[18])));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_68, Var_38, &AllDepsFileNames_24, ((MR_Box) (STATE_VARIABLE_Cache_0_30)), &conv3_STATE_VARIABLE_Cache_39_39, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_40_40);
    STATE_VARIABLE_Cache_39_39 = ((MR_Word) (conv3_STATE_VARIABLE_Cache_39_39));
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
    STATE_VARIABLE_Cache_39_39 = STATE_VARIABLE_Cache_0_30;
  }
  parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_deps_file.construct_c_header_rules\'/11", (MR_Word) (&parse_tree__write_deps_file_scalar_common_4[3]), ModuleName_13, &MhHeaderFileName_27, STATE_VARIABLE_Cache_39_39, &STATE_VARIABLE_Cache_48_48);
  parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_12, (MR_String) "predicate \140parse_tree.write_deps_file.construct_c_header_rules\'/11", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[18])), ModuleName_13, &MihHeaderFileName_28, STATE_VARIABLE_Cache_48_48, STATE_VARIABLE_Cache_31);
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (MihHeaderFileName_28));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_58 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_58, 0) = ((MR_Box) (MhHeaderFileName_27));
    MR_hl_field(0, Var_58, 1) = ((MR_Box) (Var_59));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (CFileName_15));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRuleMhMihOnC_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleMhMihOnC_29, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, MmakeRuleMhMihOnC_29, 1) = ((MR_Box) ((MR_String) "mh_and_mih_on_c"));
    MR_hl_field(3, MmakeRuleMhMihOnC_29, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleMhMihOnC_29, 3) = ((MR_Box) (Var_58));
    MR_hl_field(3, MmakeRuleMhMihOnC_29, 4) = ((MR_Box) (Var_61));
    MR_hl_field(3, MmakeRuleMhMihOnC_29, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (MmakeRuleMhMihOnC_29));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  *MmakeRulesCHeaders_18 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), MmakeRulesObjOnMihs_26, Var_64);
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__construct_intermod_rules_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__2_2;

  conv4_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__write_deps_file__construct_intermod_rules_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_String conv1_FileName_14;
  MR_Word conv0_STATE_VARIABLE_Cache_22;

  parse_tree__write_deps_file__make_module_file_name_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_22);
  *wrapper_arg_2 = ((MR_Box) (conv1_FileName_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_22));
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
  MR_Word STATE_VARIABLE_Cache_58_58;

  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 504, &UseOptFiles_27);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 502, &Intermod_28);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_15, (MR_Integer) 692, &IntermodDirs_29);
  switch (Intermod_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MmakeRulesMhDeps_32 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_Cache_58_58 = STATE_VARIABLE_Cache_0_49;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word AllDepsFileNames_30;
        MR_Word MmakeRuleMhDeps_31;
        MR_Word Var_57;
        MR_Word Var_115;
        MR_Box conv3_STATE_VARIABLE_Cache_58_58;
        MR_Box conv2_STATE_VARIABLE_IO_59_59;

        Var_57 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllDeps_18);
        {
          Var_115 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_115, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0]));
          MR_hl_field(0, Var_115, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_intermod_rules_14_p_0_1));
          MR_hl_field(0, Var_115, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(0, Var_115, 3) = ((MR_Box) (Globals_15));
          MR_hl_field(0, Var_115, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_deps_file.make_module_file_names_with_ext\'/8"));
          MR_hl_field(0, Var_115, 5) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[3]));
        }
        mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_115, Var_57, &AllDepsFileNames_30, ((MR_Box) (STATE_VARIABLE_Cache_0_49)), &conv3_STATE_VARIABLE_Cache_58_58, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_59_59);
        STATE_VARIABLE_Cache_58_58 = ((MR_Word) (conv3_STATE_VARIABLE_Cache_58_58));
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
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_71;
    MR_Word STATE_VARIABLE_Cache_72_72;
    MR_Word Var_77;
    MR_Word STATE_VARIABLE_Cache_80_80;
    MR_Word Var_84;
    MR_Word STATE_VARIABLE_Cache_85_85;
    MR_Word Var_90;

    {
      Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_67, 0) = ((MR_Box) (JavaDateFileName_22));
      MR_hl_field(1, Var_67, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_66, 0) = ((MR_Box) (CDateFileName_21));
      MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_67));
    }
    {
      Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_65, 0) = ((MR_Box) (ErrFileName_19));
      MR_hl_field(1, Var_65, 1) = ((MR_Box) (Var_66));
    }
    {
      Targets_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Targets_33, 0) = ((MR_Box) (TransOptDateFileName_20));
      MR_hl_field(0, Targets_33, 1) = ((MR_Box) (Var_65));
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 506, &TransOpt_34);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 505, &UseTransOpt_35);
    mercury__bool__not_2_p_0(UseTransOpt_35, &BuildOptFiles_36);
    Var_71 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), LongDeps_17);
    {
      BaseDeps_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, BaseDeps_37, 0) = ((MR_Box) (ModuleName_16));
      MR_hl_field(1, BaseDeps_37, 1) = ((MR_Box) (Var_71));
    }
    succeeded = (TransOpt_34 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (UseTransOpt_35 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word TransOptDeps1_39;

      parse_tree__write_deps_file__get_both_opt_deps_10_p_0(Globals_15, BuildOptFiles_36, IntermodDirs_29, BaseDeps_37, &OptDeps_38, &TransOptDeps1_39, STATE_VARIABLE_Cache_58_58, &STATE_VARIABLE_Cache_72_72);
      {
        MaybeTransOptDeps1_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeTransOptDeps1_40, 0) = ((MR_Box) (TransOptDeps1_39));
      }
    }
    else
    {
      parse_tree__write_deps_file__get_opt_deps_8_p_0(Globals_15, BuildOptFiles_36, IntermodDirs_29, (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[17])), BaseDeps_37, &OptDeps_38);
      MaybeTransOptDeps1_40 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Cache_72_72 = STATE_VARIABLE_Cache_58_58;
    }
    Var_77 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_2[0]), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[5]), OptDeps_38);
    OptInt0Deps_41 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_77);
    parse_tree__write_deps_file__make_module_file_names_with_ext_8_p_0(Globals_15, (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[17])), OptDeps_38, &OptDepsFileNames_42, STATE_VARIABLE_Cache_72_72, &STATE_VARIABLE_Cache_80_80);
    Var_84 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), OptInt0Deps_41);
    parse_tree__write_deps_file__make_module_file_names_with_ext_8_p_0(Globals_15, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[3])), Var_84, &OptInt0DepsFileNames_43, STATE_VARIABLE_Cache_80_80, &STATE_VARIABLE_Cache_85_85);
    Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), OptDepsFileNames_42, OptInt0DepsFileNames_43);
    {
      MmakeRuleDateOptInt0Deps_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_44, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_44, 1) = ((MR_Box) ((MR_String) "dates_on_opts_and_int0s"));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_44, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_44, 3) = ((MR_Box) (Targets_33));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_44, 4) = ((MR_Box) (Var_90));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_44, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    if ((MaybeTransOptDeps1_40 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_105;

      {
        Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_105, 0) = ((MR_Box) (MmakeRuleDateOptInt0Deps_44));
        MR_hl_field(1, Var_105, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *MmakeRulesIntermod_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), MmakeRulesMhDeps_32, Var_105);
      *STATE_VARIABLE_Cache_50 = STATE_VARIABLE_Cache_85_85;
    }
    else
    {
      MR_Word TransOptDeps2_45 = ((MR_Word) ((MR_hl_field(1, MaybeTransOptDeps1_40, (MR_Integer) 0))));
      MR_Word ErrDateTargets_46;
      MR_Word TransOptDepsOptFileNames_47;
      MR_Word MmakeRuleTransOptOpts_48;
      MR_Word Var_102;
      MR_Word Var_103;

      {
        ErrDateTargets_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ErrDateTargets_46, 0) = ((MR_Box) (ErrFileName_19));
        MR_hl_field(0, ErrDateTargets_46, 1) = ((MR_Box) (Var_66));
      }
      parse_tree__write_deps_file__make_module_file_names_with_ext_8_p_0(Globals_15, (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[12])), TransOptDeps2_45, &TransOptDepsOptFileNames_47, STATE_VARIABLE_Cache_85_85, STATE_VARIABLE_Cache_50);
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
        Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_103, 0) = ((MR_Box) (MmakeRuleTransOptOpts_48));
        MR_hl_field(1, Var_103, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_102, 0) = ((MR_Box) (MmakeRuleDateOptInt0Deps_44));
        MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_103));
      }
      *MmakeRulesIntermod_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), MmakeRulesMhDeps_32, Var_102);
    }
  }
  else
  {
    *MmakeRulesIntermod_24 = MmakeRulesMhDeps_32;
    *STATE_VARIABLE_Cache_50 = STATE_VARIABLE_Cache_58_58;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_names_with_ext_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_String conv1_FileName_14;
  MR_Word conv0_STATE_VARIABLE_Cache_22;

  parse_tree__write_deps_file__make_module_file_name_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_22);
  *wrapper_arg_2 = ((MR_Box) (conv1_FileName_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_22));
}

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_names_with_ext_8_p_0(
  MR_Word Globals_9,
  MR_Word Ext_10,
  MR_Word Modules_11,
  MR_Word * FileNames_12,
  MR_Word STATE_VARIABLE_Cache_0_15,
  MR_Word * STATE_VARIABLE_Cache_16)
{
  MR_Word Var_19;
  MR_Box conv3_STATE_VARIABLE_Cache_16;
  MR_Box conv2_STATE_VARIABLE_IO_18;

  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (parse_tree__write_deps_file__make_module_file_names_with_ext_8_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_deps_file.make_module_file_names_with_ext\'/8"));
    MR_hl_field(0, Var_19, 5) = ((MR_Box) (Ext_10));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, Modules_11, FileNames_12, ((MR_Box) (STATE_VARIABLE_Cache_0_15)), &conv3_STATE_VARIABLE_Cache_16, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_18);
  *STATE_VARIABLE_Cache_16 = ((MR_Word) (conv3_STATE_VARIABLE_Cache_16));
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
          MR_Word STATE_VARIABLE_Cache_56_56;

          parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_both_opt_deps\'/10", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[17])), Dep_23, &OptName_33, STATE_VARIABLE_Cache_49_49, &STATE_VARIABLE_Cache_56_56);
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
          parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_both_opt_deps\'/10", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[12])), Dep_23, &TransOptName_37, STATE_VARIABLE_Cache_56_56, STATE_VARIABLE_Cache_8);
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
            MR_String OptName_66;
            MR_Word MaybeOptDir_67;
            MR_String TransOptName_68;
            MR_Word MaybeTransOptDir_69;
            MR_Word STATE_VARIABLE_Cache_56_72;

            parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_both_opt_deps\'/10", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[17])), Dep_23, &OptName_66, STATE_VARIABLE_Cache_49_49, &STATE_VARIABLE_Cache_56_72);
            parse_tree__find_module__search_for_file_returning_dir_5_p_0(IntermodDirs_3, OptName_66, &MaybeOptDir_67);
            if (((MR_tag((MR_Word) MaybeOptDir_67)) == (MR_Integer) 1))
              *HeadVar__5_5 = STATE_VARIABLE_OptDeps_47_47;
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__5_5 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Dep_23));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_47_47));
              }
            parse_tree__write_deps_file__make_module_file_name_9_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_both_opt_deps\'/10", (MR_Word) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[12])), Dep_23, &TransOptName_68, STATE_VARIABLE_Cache_56_72, STATE_VARIABLE_Cache_8);
            parse_tree__find_module__search_for_file_returning_dir_5_p_0(IntermodDirs_3, TransOptName_68, &MaybeTransOptDir_69);
            if (((MR_tag((MR_Word) MaybeTransOptDir_69)) == (MR_Integer) 1))
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
parse_tree__write_deps_file__make_module_file_name_9_p_0(
  MR_Word Globals_10,
  MR_String From_11,
  MR_Word Ext_12,
  MR_Word ModuleName_13,
  MR_String * FileName_14,
  MR_Word STATE_VARIABLE_Cache_0_21,
  MR_Word * STATE_VARIABLE_Cache_22)
{
  MR_bool succeeded;
  MR_Word ExtMap0_17;
  MR_Box conv0_ExtMap0_17;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), STATE_VARIABLE_Cache_0_21, ((MR_Box) (Ext_12)), &conv0_ExtMap0_17);
  if (succeeded)
  {
    ExtMap0_17 = ((MR_Word) (conv0_ExtMap0_17));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_String CachedFileName_18;
    MR_Box conv1_CachedFileName_18;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtMap0_17, ((MR_Box) (ModuleName_13)), &conv1_CachedFileName_18);
    if (succeeded)
    {
      CachedFileName_18 = ((MR_String) (conv1_CachedFileName_18));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *FileName_14 = CachedFileName_18;
      *STATE_VARIABLE_Cache_22 = STATE_VARIABLE_Cache_0_21;
    }
    else
    {
      MR_Word ExtMap_20;

      parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_10, From_11, Ext_12, ModuleName_13, FileName_14);
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (*FileName_14)), ExtMap0_17, &ExtMap_20);
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), ((MR_Box) (Ext_12)), ((MR_Box) (ExtMap_20)), STATE_VARIABLE_Cache_0_21, STATE_VARIABLE_Cache_22);
    }
  }
  else
  {
    MR_Word ExtMap_33;

    parse_tree__file_names__module_name_to_file_name_5_p_0(Globals_10, From_11, Ext_12, ModuleName_13, FileName_14);
    ExtMap_33 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (*FileName_14)));
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[0]), ((MR_Box) (Ext_12)), ((MR_Box) (ExtMap_33)), STATE_VARIABLE_Cache_0_21, STATE_VARIABLE_Cache_22);
  }
}

void MR_CALL 
parse_tree__write_deps_file__get_opt_deps_8_p_0(
  MR_Word Globals_1,
  MR_Word BuildOptFiles_2,
  MR_Word IntermodDirs_3,
  MR_Word Ext_4,
  MR_Word HeadVar__5_5,
  MR_Word * HeadVar__6_6)
{
  if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Dep_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 0))));
    MR_Word Deps_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__5_5, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_OptDeps_35_35;

    parse_tree__write_deps_file__get_opt_deps_8_p_0(Globals_1, BuildOptFiles_2, IntermodDirs_3, Ext_4, Deps_21, &STATE_VARIABLE_OptDeps_35_35);
    switch (BuildOptFiles_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String OptName_28;
          MR_Word MaybeOptDir_29;

          parse_tree__file_names__module_name_to_search_file_name_5_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_opt_deps\'/8", Ext_4, Dep_20, &OptName_28);
          parse_tree__find_module__search_for_file_5_p_0(IntermodDirs_3, OptName_28, &MaybeOptDir_29);
          if (((MR_tag((MR_Word) MaybeOptDir_29)) == (MR_Integer) 1))
            *HeadVar__6_6 = STATE_VARIABLE_OptDeps_35_35;
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Dep_20));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_35_35));
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Result1_24;

          parse_tree__find_module__search_for_module_source_5_p_0(IntermodDirs_3, Dep_20, &Result1_24);
          if (((MR_tag((MR_Word) Result1_24)) == (MR_Integer) 1))
          {
            MR_String OptName_40;
            MR_Word MaybeOptDir_41;

            parse_tree__file_names__module_name_to_search_file_name_5_p_0(Globals_1, (MR_String) "predicate \140parse_tree.write_deps_file.get_opt_deps\'/8", Ext_4, Dep_20, &OptName_40);
            parse_tree__find_module__search_for_file_5_p_0(IntermodDirs_3, OptName_40, &MaybeOptDir_41);
            if (((MR_tag((MR_Word) MaybeOptDir_41)) == (MR_Integer) 1))
              *HeadVar__6_6 = STATE_VARIABLE_OptDeps_35_35;
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__6_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Dep_20));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_35_35));
              }
          }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Dep_20));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_OptDeps_35_35));
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
  MR_Word conv1_MmakeRule_14;
  MR_Word conv0_STATE_VARIABLE_Cache_21;

  parse_tree__write_deps_file__gather_nested_deps_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_MmakeRule_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_21);
  *wrapper_arg_2 = ((MR_Box) (conv1_MmakeRule_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_21));
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
    MR_Word Var_35;
    MR_Box conv3_STATE_VARIABLE_Cache_20;
    MR_Box conv2_STATE_VARIABLE_IO_22;

    {
      Var_35 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_35, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[1]));
      MR_hl_field(0, Var_35, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_build_nested_children_first_rule_8_p_0_1));
      MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_35, 3) = ((MR_Box) (Globals_9));
      MR_hl_field(0, Var_35, 4) = ((MR_Box) (ModuleName_10));
      MR_hl_field(0, Var_35, 5) = ((MR_Box) (NestedModuleNames_15));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_35, (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_2[16])), MmakeRulesNestedDeps_12, ((MR_Box) (STATE_VARIABLE_Cache_0_19)), &conv3_STATE_VARIABLE_Cache_20, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_22);
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
  MR_Word STATE_VARIABLE_Cache_72_72;
  MR_Word STATE_VARIABLE_Cache_77_77;
  MR_Word STATE_VARIABLE_Cache_82_82;
  MR_Word Var_87;
  MR_Word STATE_VARIABLE_Cache_88_88;
  MR_Word Var_93;
  MR_Word Var_97;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word Var_102;
  MR_Word Var_103;
  MR_Word Var_104;
  MR_Word Var_105;

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
  Var_64 = libs__mmakefiles__make_singleton_file_name_group_2_f_0((MR_String) "source", SourceFileName_23);
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
    MR_Word Var_67;

    Var_67 = libs__mmakefiles__make_singleton_file_name_group_2_f_0((MR_String) "int0", Int0FileName_28);
    {
      Int0FileNameGroups_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Int0FileNameGroups_42, 0) = ((MR_Box) (Var_67));
      MR_hl_field(1, Int0FileNameGroups_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  parse_tree__write_deps_file__make_module_file_name_group_with_ext_9_p_0(Globals_21, (MR_String) "ancestors", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[3])), Ancestors_24, &AncestorSourceGroups_43, STATE_VARIABLE_Cache_0_52, &STATE_VARIABLE_Cache_72_72);
  parse_tree__write_deps_file__make_module_file_name_group_with_ext_9_p_0(Globals_21, (MR_String) "long deps", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[7])), LongDeps_25, &LongDepsSourceGroups_44, STATE_VARIABLE_Cache_72_72, &STATE_VARIABLE_Cache_77_77);
  parse_tree__write_deps_file__make_module_file_name_group_with_ext_9_p_0(Globals_21, (MR_String) "short deps", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[8])), ShortDeps_26, &ShortDepsSourceGroups_45, STATE_VARIABLE_Cache_77_77, &STATE_VARIABLE_Cache_82_82);
  Var_87 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)));
  parse_tree__write_deps_file__make_module_file_name_group_with_ext_9_p_0(Globals_21, (MR_String) "type_repn self dep", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[7])), Var_87, &TypeRepnSelfDepGroups_46, STATE_VARIABLE_Cache_82_82, &STATE_VARIABLE_Cache_88_88);
  Var_93 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_22);
  parse_tree__write_deps_file__make_module_file_name_group_with_ext_9_p_0(Globals_21, (MR_String) "type_repn ancestor dep", (MR_Word) (MR_mkword(1, &parse_tree__write_deps_file_scalar_common_4[7])), Var_93, &TypeRepnAncestorsDepGroups_47, STATE_VARIABLE_Cache_88_88, STATE_VARIABLE_Cache_53);
  ForeignIncludeFiles_48 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ForeignIncludeFilesSet_31);
  {
    Var_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_97, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0]));
    MR_hl_field(0, Var_97, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_date_file_deps_rule_20_p_0_1));
    MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_97, 3) = ((MR_Box) (SourceFileName_23));
  }
  ForeignImportFileNames_49 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_97, ForeignIncludeFiles_48);
  ForeignImportFileNameGroup_50 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "foreign imports", ForeignImportFileNames_49);
  Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), ForeignImportFileNameGroup_50, FactTableSourceGroups_35);
  Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), TypeRepnAncestorsDepGroups_47, Var_105);
  Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), TypeRepnSelfDepGroups_46, Var_104);
  Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), ShortDepsSourceGroups_45, Var_103);
  Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), LongDepsSourceGroups_44, Var_102);
  Var_100 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), AncestorSourceGroups_43, Var_101);
  Var_99 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Int0FileNameGroups_42, Var_100);
  SourceGroups_51 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), SourceFileNameGroup_41, Var_99);
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
parse_tree__write_deps_file__make_module_file_name_group_with_ext_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_String conv1_FileName_14;
  MR_Word conv0_STATE_VARIABLE_Cache_22;

  parse_tree__write_deps_file__make_module_file_name_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_22);
  *wrapper_arg_2 = ((MR_Box) (conv1_FileName_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_22));
}

static void MR_CALL 
parse_tree__write_deps_file__make_module_file_name_group_with_ext_9_p_0(
  MR_Word Globals_10,
  MR_String GroupName_11,
  MR_Word Ext_12,
  MR_Word ModuleSet_13,
  MR_Word * Groups_14,
  MR_Word STATE_VARIABLE_Cache_0_19,
  MR_Word * STATE_VARIABLE_Cache_20)
{
  MR_Word Modules_17;
  MR_Word FileNames_18;
  MR_Word Var_24;
  MR_Box conv3_STATE_VARIABLE_Cache_20;
  MR_Box conv2_STATE_VARIABLE_IO_22;

  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleSet_13, &Modules_17);
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0]));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (parse_tree__write_deps_file__make_module_file_name_group_with_ext_9_p_0_1));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) (Globals_10));
    MR_hl_field(0, Var_24, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_deps_file.make_module_file_names_with_ext\'/8"));
    MR_hl_field(0, Var_24, 5) = ((MR_Box) (Ext_12));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, Modules_17, &FileNames_18, ((MR_Box) (STATE_VARIABLE_Cache_0_19)), &conv3_STATE_VARIABLE_Cache_20, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_22);
  *STATE_VARIABLE_Cache_20 = ((MR_Word) (conv3_STATE_VARIABLE_Cache_20));
  *Groups_14 = libs__mmakefiles__make_file_name_group_2_f_0(GroupName_11, FileNames_18);
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
    MR_Word MmakeVarFactTablesAllOs_19;
    MR_Word MmakeVarFactTablesAllCs_20;
    MR_Word FactTableSourceGroup_21;
    MR_Word MmakeRuleFactOs_22;
    MR_Word MmakeRuleFactCs_23;
    MR_String Var_24;
    MR_String Var_26;
    MR_String Var_28;
    MR_String Var_30;
    MR_String Var_32;
    MR_String Var_34;
    MR_String Var_36;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_42;
    MR_String Var_43;
    MR_String Var_45;
    MR_String Var_51;
    MR_String Var_53;
    MR_Word Var_55;
    MR_String Var_56;
    MR_String Var_58;
    MR_Word Var_60;
    MR_String Var_65;
    MR_String Var_67;
    MR_Word Var_69;
    MR_Word Var_72;

    Var_24 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables");
    {
      MmakeVarFactTables_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeVarFactTables_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, MmakeVarFactTables_18, 1) = ((MR_Box) (Var_24));
      MR_hl_field(3, MmakeVarFactTables_18, 2) = ((MR_Box) (FactTableFileNames_15));
    }
    Var_26 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables.all_os");
    Var_30 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables:%=\044(os_subdir)%.\044O)");
    Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_30);
    {
      MmakeVarFactTablesAllOs_19 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, MmakeVarFactTablesAllOs_19, 0) = ((MR_Box) (Var_26));
      MR_hl_field(2, MmakeVarFactTablesAllOs_19, 1) = ((MR_Box) (Var_28));
    }
    Var_32 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables.all_cs");
    Var_36 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables:%=\044(cs_subdir)%.c)");
    Var_34 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_36);
    {
      MmakeVarFactTablesAllCs_20 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, MmakeVarFactTablesAllCs_20, 0) = ((MR_Box) (Var_32));
      MR_hl_field(2, MmakeVarFactTablesAllCs_20, 1) = ((MR_Box) (Var_34));
    }
    {
      Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_39, 0) = ((MR_Box) (MmakeVarFactTablesAllCs_20));
      MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_38, 0) = ((MR_Box) (MmakeVarFactTablesAllOs_19));
      MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_39));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MmakeVarsFactTables_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MmakeVarFactTables_18));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_38));
    }
    Var_45 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables)");
    Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_45);
    {
      Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_42, 0) = ((MR_Box) (Var_43));
      MR_hl_field(0, Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      FactTableSourceGroup_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FactTableSourceGroup_21, 0) = ((MR_Box) ((MR_String) "fact tables"));
      MR_hl_field(0, FactTableSourceGroup_21, 1) = ((MR_Box) (Var_42));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *FactTableSourceGroups_13 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (FactTableSourceGroup_21));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_53 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables.all_os)");
    Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_53);
    Var_58 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables)");
    Var_56 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_58);
    {
      Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_60, 0) = ((MR_Box) (SourceFileName_9));
      MR_hl_field(1, Var_60, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (Var_56));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_60));
    }
    {
      MmakeRuleFactOs_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleFactOs_22, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleFactOs_22, 1) = ((MR_Box) ((MR_String) "fact_table_os"));
      MR_hl_field(3, MmakeRuleFactOs_22, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, MmakeRuleFactOs_22, 3) = ((MR_Box) (Var_51));
      MR_hl_field(3, MmakeRuleFactOs_22, 4) = ((MR_Box) (Var_55));
      MR_hl_field(3, MmakeRuleFactOs_22, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_67 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_8, (MR_String) ".fact_tables.all_cs)");
    Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_67);
    {
      Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_69, 0) = ((MR_Box) (ObjFileName_10));
      MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRuleFactCs_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleFactCs_23, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleFactCs_23, 1) = ((MR_Box) ((MR_String) "fact_table_cs"));
      MR_hl_field(3, MmakeRuleFactCs_23, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, MmakeRuleFactCs_23, 3) = ((MR_Box) (Var_65));
      MR_hl_field(3, MmakeRuleFactCs_23, 4) = ((MR_Box) (Var_69));
      MR_hl_field(3, MmakeRuleFactCs_23, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_72, 0) = ((MR_Box) (MmakeRuleFactCs_23));
      MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MmakeRulesFactTables_14 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MmakeRuleFactOs_22));
      MR_hl_field(1, base, 1) = ((MR_Box) (Var_72));
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
  MR_String conv1_FileName_14;
  MR_Word conv0_STATE_VARIABLE_Cache_22;

  parse_tree__write_deps_file__make_module_file_name_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_22);
  *wrapper_arg_2 = ((MR_Box) (conv1_FileName_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_22));
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
    MR_Word Var_35;
    MR_Word Var_45;
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
    Var_35 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptDeps_24);
    {
      Var_45 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_45, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0]));
      MR_hl_field(0, Var_45, 1) = ((MR_Box) (parse_tree__write_deps_file__construct_trans_opt_deps_rule_9_p_0_1));
      MR_hl_field(0, Var_45, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_45, 3) = ((MR_Box) (Globals_10));
      MR_hl_field(0, Var_45, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.write_deps_file.make_module_file_names_with_ext\'/8"));
      MR_hl_field(0, Var_45, 5) = ((MR_Box) (MR_mkword(3, &parse_tree__write_deps_file_scalar_common_2[12])));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__write_deps_file_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_45, Var_35, &TransOptDepsFileNames_26, ((MR_Box) (STATE_VARIABLE_Cache_0_28)), &conv3_STATE_VARIABLE_Cache_29, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_31);
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
parse_tree__write_deps_file____Unify____cache_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_deps_file____Unify____cache_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file____Compare____cache_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_deps_file____Compare____cache_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____file_name_cache_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__write_deps_file____Unify____file_name_cache_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__write_deps_file____Compare____file_name_cache_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__write_deps_file____Compare____file_name_cache_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

	MR_register_type_ctor_info(&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_cache_stats_0);
	MR_register_type_ctor_info(&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_file_name_cache_stats_0);
	MR_register_type_ctor_info(&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_maybe_include_trans_opt_rule_0);
	MR_register_type_ctor_info(&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_maybe_intermod_deps_0);
	MR_register_type_ctor_info(&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_maybe_mmake_var_0);
	MR_register_type_ctor_info(&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_module_file_name_cache_0);
	MR_register_type_ctor_info(&parse_tree__write_deps_file__parse_tree__write_deps_file__type_ctor_info_trans_opt_rule_info_0);
}

void mercury__parse_tree__write_deps_file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__parse_tree__write_deps_file__required_init(void)
{
	parse_tree__write_deps_file__user_init_pred_160_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__write_deps_file__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.write_deps_file.
