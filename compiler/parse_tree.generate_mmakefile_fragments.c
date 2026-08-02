/*
** Automatically generated from `generate_mmakefile_fragments.m'
** by the Mercury compiler,
** version rotd-2026-08-02
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


// :- module parse_tree.generate_mmakefile_fragments.
// :- implementation.

/*
INIT mercury__parse_tree__generate_mmakefile_fragments__init
ENDINIT
*/

#include "parse_tree.generate_mmakefile_fragments.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.mmakefiles.mih"
#include "libs.op_mode.mih"
#include "libs.optdb_help.mih"
#include "libs.optimization_options.mih"
#include "libs.option_categories.mih"
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
#include "parse_tree.make_module_file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "recompilation.item_types.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"



struct parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0_s {
  MR_Word parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__DepsMap_2;
  MR_bool parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__succeeded;
  jmp_buf parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__commit_0;
  MR_Word parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__TypeCtorInfo_48_48;
  MR_Word parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__ParseTreeModuleSrc_6;
  MR_Word parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__IncludeMap_7;
  MR_Word parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__Var_8;
  MR_Word parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__BurdenedModule_9;
  MR_Word parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__Var_4;
  MR_Box parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__conv1_Var_4;
  MR_Box parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__conv0_Var_8;
};

struct parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0_s {
  MR_Word parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__DepsMap_13;
  MR_bool parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__succeeded;
  jmp_buf parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__commit_0;
  MR_Word parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__TypeCtorInfo_402_402;
  MR_Word parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__ParseTreeModuleSrc_40;
  MR_Word parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__IncludeMap_41;
  MR_Word parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__Var_82;
  MR_Word parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__BurdenedModule_363;
  MR_Word parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__Var_38;
  MR_Box parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__conv1_Var_38;
  MR_Box parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__conv0_Var_82;
};


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_mmakefile_fragments__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__generate_mmakefile_fragments__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__make_module_file_names__type_ctor_info_module_name_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_mmakefile_fragments__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__make_module_file_names__type_ctor_info_module_name_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_mmakefile_fragments__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__generate_mmakefile_fragments____vpti_tuple_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_mmakefile_fragments__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_all_mih_deps_0[1];

static const MR_FA_TypeInfo_Struct1 parse_tree__generate_mmakefile_fragments__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_NotagFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__notag_functor_desc_all_mih_deps_0;

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_d_file_deps_0_0[7];

static const MR_ConstString parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_names_d_file_deps_0_0[7];

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_d_file_deps_0_0;

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_d_file_deps_0_0[1];

static const MR_DuPtagLayout parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_d_file_deps_0[1];

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_d_file_deps_0[1];

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_d_file_deps_0[1];

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_intermod_deps_0_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__generate_mmakefile_fragments__list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__generate_mmakefile_fragments__maybe__ti_maybe_1list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_intermod_deps_0_1[2];

static const MR_ConstString parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_names_intermod_deps_0_1[2];

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_intermod_deps_0_1;

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_intermod_deps_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_intermod_deps_0_1[1];

static const MR_DuPtagLayout parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_intermod_deps_0[2];

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_intermod_deps_0[2];

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_intermod_deps_0[2];

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_intermod_only_fim_deps_0[1];

static const MR_NotagFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__notag_functor_desc_intermod_only_fim_deps_0;

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_include_trans_opt_rule_0_0;

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_maybe_include_trans_opt_rule_0_1[1];

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_include_trans_opt_rule_0_1;

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_include_trans_opt_rule_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_include_trans_opt_rule_0_1[1];

static const MR_DuPtagLayout parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_maybe_include_trans_opt_rule_0[2];

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_maybe_include_trans_opt_rule_0[2];

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_maybe_include_trans_opt_rule_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__generate_mmakefile_fragments__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__generate_mmakefile_fragments__pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0;

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_trans_opt_deps_0_0;

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_maybe_trans_opt_deps_0_1[1];

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_trans_opt_deps_0_1;

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_trans_opt_deps_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_trans_opt_deps_0_1[1];

static const MR_DuPtagLayout parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_maybe_trans_opt_deps_0[2];

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_maybe_trans_opt_deps_0[2];

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_maybe_trans_opt_deps_0[2];

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_module_own_fim_deps_0[1];

static const MR_NotagFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__notag_functor_desc_module_own_fim_deps_0;

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_trans_opt_rule_info_0_0[1];

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_trans_opt_rule_info_0_0;

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_trans_opt_rule_info_0_1[1];

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_trans_opt_rule_info_0_1;

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_trans_opt_rule_info_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_trans_opt_rule_info_0_1[1];

static const MR_DuPtagLayout parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_trans_opt_rule_info_0[2];

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_trans_opt_rule_info_0[2];

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_trans_opt_rule_info_0[2];

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments__IntroducedFrom__pred__generate_dv_file_define_mod_misc_vars__1262__1_2_p_0(
  MR_Word DepsMap_7,
  MR_Word LambdaHeadVar__1_29);

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments__IntroducedFrom__pred__generate_dep_mmakefile__1676__1_2_p_0(
  MR_Word StaticLibDirNames_37,
  MR_Word SharedLibDirNames_41);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__IntroducedFrom__pred__generate_d_mmakefile__287__1_4_p_0(
  MR_Word LambdaHeadVar__1_83,
  MR_Word LambdaHeadVar__2_84,
  MR_Word LambdaHeadVar__3_85,
  MR_Word * LambdaHeadVar__4_86);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____maybe_mmake_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____maybe_mmake_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__get_source_file_3_p_0(
  MR_Word DepsMap_4,
  MR_Word ModuleName_5,
  MR_String * FileName_6);

static MR_String MR_CALL 
parse_tree__generate_mmakefile_fragments__remove_suffix_files_cmd_2_f_0(
  MR_String ModuleMakeVarName_4,
  MR_String Extension_5);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_dep_file_collective_target_rule_4_p_0(
  MR_String ModuleNameStr_5,
  MR_String ModuleMakeVarName_6,
  MR_Tuple HeadVar__3_3,
  MR_Word * MmakeRule_9);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__compare_module_names_3_p_0(
  MR_Word Sym1_4,
  MR_Word Sym2_5,
  MR_Word * Result_6);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_subdirs_shorthand_rule_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word Ext_9,
  MR_Word * MmakeRule_10,
  MR_Word STATE_VARIABLE_Cache_0_16,
  MR_Word * STATE_VARIABLE_Cache_17);

static MR_String MR_CALL 
parse_tree__generate_mmakefile_fragments__foreign_include_file_path_name_2_f_0(
  MR_String SourceFileName_4,
  MR_Word IncludeFile_5);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_nested_deps_rule_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word NestedDepSet_10,
  MR_Word Ext_11,
  MR_Word * MmakeRule_12,
  MR_Word STATE_VARIABLE_Cache_0_17,
  MR_Word * STATE_VARIABLE_Cache_18);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_mmakefile_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_mmakefile_7_p_0_1(
  MR_Box closure_arg);

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_clean_targets_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_clean_targets_14_p_0(
  MR_Word ModuleName_15,
  MR_String ModuleMakeVarName_16,
  MR_String ExeFileName_17,
  MR_String InitCFileName_18,
  MR_String InitObjFileName_19,
  MR_String InitPicObjFileName_20,
  MR_String InitFileName_21,
  MR_String StaticLibFileName_22,
  MR_String SharedLibFileName_23,
  MR_String JarFileName_24,
  MR_String DepFileName_25,
  MR_String DvFileName_26,
  MR_Word STATE_VARIABLE_MmakeFile_0_37,
  MR_Word * STATE_VARIABLE_MmakeFile_38);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_collective_targets_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_collective_targets_4_p_0(
  MR_Word ModuleName_5,
  MR_String ModuleMakeVarName_6,
  MR_Word STATE_VARIABLE_MmakeFile_0_10,
  MR_Word * STATE_VARIABLE_MmakeFile_11);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_proposed_9_p_0(
  MR_Word Globals_10,
  MR_Word DepsMap_11,
  MR_Word MainModuleName_12,
  MR_String ModuleMVN_13,
  MR_Word MmcMakeDeps_14,
  MR_Word Intermod_15,
  MR_Word TransOpt_16,
  MR_Word STATE_VARIABLE_MmakeFile_0_25,
  MR_Word * STATE_VARIABLE_MmakeFile_26);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_proposed_gs_gas_c_9_p_0(
  MR_Word Globals_10,
  MR_Word MainModuleName_11,
  MR_String LibModuleNameStr_12,
  MR_String ModuleMVN_13,
  MR_Word MmcMakeDeps_14,
  MR_Word Intermod_15,
  MR_Word TransOpt_16,
  MR_String * LibGsGasInstallTargetName_17,
  MR_Word * MmakeRuleLibInstallGsGas_18);

static MR_Word MR_CALL 
parse_tree__generate_mmakefile_fragments__proposed_cond_gas_action_lines_3_f_0(
  MR_String CondName_5,
  MR_String MmakeVarName_6,
  MR_String ExtDir_7);

static MR_Word MR_CALL 
parse_tree__generate_mmakefile_fragments__proposed_cond_gs_action_lines_3_f_0(
  MR_String CondName_5,
  MR_String MmakeVarName_6,
  MR_String ExtDir_7);

static MR_Word MR_CALL 
parse_tree__generate_mmakefile_fragments__proposed_gs_action_lines_2_f_0(
  MR_String MmakeVarName_4,
  MR_String ExtDir_5);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_proposed_ngs_pgs_5_p_0(
  MR_Word DepsMap_6,
  MR_String ModuleMVN_7,
  MR_String LibModuleNameStr_8,
  MR_String * LibNgsPgsInstallTargetName_9,
  MR_Word * MmakeRuleLibInstallNgsPgs_10);

static MR_Word MR_CALL 
parse_tree__generate_mmakefile_fragments__proposed_action_lines_2_f_0(
  MR_String MmakeVarName_4,
  MR_String ExtDir_5);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_4(
  void * env_ptr_arg);

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0(
  MR_Word DepsMap_2);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0(
  MR_Word ModuleName_12,
  MR_Word DepsMap_13,
  MR_String ModuleMakeVarName_14,
  MR_Word MmcMakeDeps_15,
  MR_Word Intermod_16,
  MR_Word TransOpt_17,
  MR_Word MaybeModuleDepsVarPair_18,
  MR_Word MaybeOptsVarPair_19,
  MR_Word MaybeTransOptsVarPair_20,
  MR_Word STATE_VARIABLE_MmakeFile_0_69,
  MR_Word * STATE_VARIABLE_MmakeFile_70);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_init_targets_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_String ModuleMakeVarName_12,
  MR_String InitCFileName_13,
  MR_String InitFileName_14,
  MR_String * DepFileName_15,
  MR_String * DvFileName_16,
  MR_Word STATE_VARIABLE_MmakeFile_0_33,
  MR_Word * STATE_VARIABLE_MmakeFile_34);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_exec_library_targets_13_p_0(
  MR_Word Globals_14,
  MR_Word ModuleName_15,
  MR_String ModuleMakeVarName_16,
  MR_String InitFileName_17,
  MR_String InitObjFileName_18,
  MR_Word MaybeOptsVar_19,
  MR_Word MaybeTransOptsVar_20,
  MR_String ExeFileName_21,
  MR_String JarFileName_22,
  MR_String StaticLibFileName_23,
  MR_String SharedLibFileName_24,
  MR_Word STATE_VARIABLE_MmakeFile_0_57,
  MR_Word * STATE_VARIABLE_MmakeFile_58);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__list_class_files_for_jar_mmake_3_p_0(
  MR_Word Globals_4,
  MR_String ClassFiles_5,
  MR_String * ListClassFiles_6);

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_mmakefile_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_mmakefile_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_mmakefile_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_mmakefile_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_mmakefile_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_mmakefile_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_smart_recomp_vars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_smart_recomp_vars_2_p_0(
  MR_String ModuleMakeVarName_3,
  MR_Word * SmartRecompFragments_4);

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_csharp_vars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_csharp_vars_2_p_0(
  MR_String ModuleMakeVarName_3,
  MR_Word * CsharpFragments_4);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_java_vars_2_p_0(
  MR_String ModuleMakeVarName_3,
  MR_Word * JavaFragments_4);

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_5_p_0(
  MR_Word Globals_6,
  MR_Word DepsMap_7,
  MR_Word Modules_8,
  MR_String ModuleMakeVarName_9,
  MR_Word * CFragments_10);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__get_fact_table_file_names_3_p_0(
  MR_Word DepsMap_4,
  MR_Word Modules_5,
  MR_Word * FactTableFileNames_6);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__acc_fact_table_file_names_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_FactTableFileNames_0_3,
  MR_Word * STATE_VARIABLE_FactTableFileNames_4);

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_opt_vars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_opt_vars_2_p_0(
  MR_String ModuleMakeVarName_3,
  MR_Word * OptFragments_4);

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_intn_vars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_intn_vars_2_p_0(
  MR_String ModuleMakeVarName_3,
  MR_Word * IntnFragments_4);

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_mod_misc_vars_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_mod_misc_vars_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_mod_misc_vars_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_mod_misc_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_mod_misc_vars_5_p_0(
  MR_Word Globals_6,
  MR_Word DepsMap_7,
  MR_Word Modules_8,
  MR_String ModuleMakeVarName_9,
  MR_Word * ModMiscFragments_10);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__select_no_fatal_error_modules_3_p_0(
  MR_Word DepsMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_d_mmakefile_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_rules_for_nondefault_file_names_11_p_0(
  MR_Word HaveMap_12,
  MR_Word SourceFileTopModuleName_13,
  MR_String SourceFileName_14,
  MR_String Date0FileName_15,
  MR_String DateFileName_16,
  MR_String Date3FileName_17,
  MR_String OptDateFileName_18,
  MR_String TransOptDateFileName_19,
  MR_String CDateFileName_20,
  MR_String JavaDateFileName_21,
  MR_Word * MmakeRulesNonDefault_22);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_subdir_short_rules_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_subdir_short_rules_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleName_7,
  MR_Word * MmakeRulesSubDirShorthand_8,
  MR_Word STATE_VARIABLE_Cache_0_12,
  MR_Word * STATE_VARIABLE_Cache_13);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_install_shadow_rules_11_p_0(
  MR_Word Globals_12,
  MR_Word ModuleName_13,
  MR_String Int0FileName_14,
  MR_String Date0FileName_15,
  MR_String DateFileName_16,
  MR_String Date3FileName_17,
  MR_String OptDateFileName_18,
  MR_String TransOptDateFileName_19,
  MR_Word * MmakeRulesInstallShadows_20,
  MR_Word STATE_VARIABLE_Cache_0_27,
  MR_Word * STATE_VARIABLE_Cache_28);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_foreign_import_rules_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word DFileDeps_12,
  MR_Word IntermodDeps_13,
  MR_String ObjFileName_14,
  MR_String PicObjFileName_15,
  MR_Word * MmakeRulesForeignImports_16,
  MR_Word STATE_VARIABLE_Cache_0_45,
  MR_Word * STATE_VARIABLE_Cache_46);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_self_and_parent_date_date0_rules_10_p_0(
  MR_Word Globals_11,
  MR_String SourceFileName_12,
  MR_String Date0FileName_13,
  MR_String DateFileName_14,
  MR_Word Ancestors_15,
  MR_Word DirectDeps_16,
  MR_Word IndirectDeps_17,
  MR_Word * MmakeRulesParentDates_18,
  MR_Word STATE_VARIABLE_Cache_0_27,
  MR_Word * STATE_VARIABLE_Cache_28);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_module_dep_fragment_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_String CFileName_9,
  MR_Word * MmakeFragmentModuleDep_10,
  MR_Word STATE_VARIABLE_Cache_0_14,
  MR_Word * STATE_VARIABLE_Cache_15);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_mih_header_rules_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word AllMihDeps_12,
  MR_String CFileName_13,
  MR_String ObjFileName_14,
  MR_String PicObjFileName_15,
  MR_Word * MmakeRulesCHeaders_16,
  MR_Word STATE_VARIABLE_Cache_0_28,
  MR_Word * STATE_VARIABLE_Cache_29);

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_intermod_rules_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_intermod_rules_9_p_0(
  MR_Word Globals_10,
  MR_Word IntermodDeps_11,
  MR_String ErrFileName_12,
  MR_String TransOptDateFileName_13,
  MR_String CDateFileName_14,
  MR_String JavaDateFileName_15,
  MR_Word * MmakeRulesIntermod_16,
  MR_Word STATE_VARIABLE_Cache_0_29,
  MR_Word * STATE_VARIABLE_Cache_30);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_build_nested_children_first_rule_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_build_nested_children_first_rule_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word MaybeTopModule_9,
  MR_Word * MmakeRulesNestedDeps_10,
  MR_Word STATE_VARIABLE_Cache_0_14,
  MR_Word * STATE_VARIABLE_Cache_15);

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_date_file_deps_rule_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_date_file_deps_rule_18_p_0(
  MR_Word Globals_19,
  MR_Word ModuleName_20,
  MR_String SourceFileName_21,
  MR_Word Ancestors_22,
  MR_Word DirectDeps_23,
  MR_Word IndirectDeps_24,
  MR_Word PublicChildren_25,
  MR_String Int0FileName_26,
  MR_String OptDateFileName_27,
  MR_String TransOptDateFileName_28,
  MR_Word ForeignIncludeFilesSet_29,
  MR_String CDateFileName_30,
  MR_String JavaDateFileName_31,
  MR_String ErrFileName_32,
  MR_Word FactTableSourceGroups_33,
  MR_Word * MmakeRuleDateFileDeps_34,
  MR_Word STATE_VARIABLE_Cache_0_49,
  MR_Word * STATE_VARIABLE_Cache_50);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_fact_tables_entries_7_p_0(
  MR_String ModuleMakeVarName_8,
  MR_String SourceFileName_9,
  MR_String ObjFileName_10,
  MR_Word FactTableFileNamesSet_11,
  MR_Word * MmakeVarsFactTables_12,
  MR_Word * FactTableSourceGroups_13,
  MR_Word * MmakeRulesFactTables_14);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_trans_opt_deps_rule_7_p_0(
  MR_Word Globals_8,
  MR_Word MaybeInclTransOptRule_9,
  MR_Word MaybeTransOptDeps0_10,
  MR_String TransOptDateFileName_11,
  MR_Word * MmakeRulesTransOpt_12,
  MR_Word STATE_VARIABLE_Cache_0_21,
  MR_Word * STATE_VARIABLE_Cache_22);

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____all_mih_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____all_mih_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____d_file_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____d_file_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____intermod_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____intermod_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____intermod_only_fim_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____intermod_only_fim_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____maybe_include_trans_opt_rule_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____maybe_include_trans_opt_rule_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____maybe_mmake_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____maybe_mmake_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____maybe_trans_opt_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____maybe_trans_opt_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____module_own_fim_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____module_own_fim_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____trans_opt_rule_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____trans_opt_rule_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_1[177][2];

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_2[4][4];

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_3[14][3];

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_4[11][1];

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_5[5][6];

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_6[1][10];

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_7[5][5];

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_8[2][9];

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_9[2][7];




static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_1[177][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 8U)
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 9U)
  },
  /* row  12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row  13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 8U)
  },
  /* row  14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 5U)
  },
  /* row  16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row  17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  18 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[8]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  19 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[18])))
  },
  /* row  20 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[19])))
  },
  /* row  21 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[20])))
  },
  /* row  22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  25 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  27 */
  {
    ((MR_Box) (MR_mkword(2, &parse_tree__generate_mmakefile_fragments_scalar_common_4[5]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  28 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[27])))
  },
  /* row  29 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[28])))
  },
  /* row  30 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[29])))
  },
  /* row  31 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[30])))
  },
  /* row  32 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[31])))
  },
  /* row  33 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row  34 */
  {
    ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE)")),
    ((MR_Box) ((MR_String) ""))
  },
  /* row  35 */
  {
    ((MR_Box) ((MR_String) "\044(ALL_MLLIBS)")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_String) "\044(EXT_FOR_SHARED_LIB)")),
    ((MR_Box) ((MR_String) "\044(A)"))
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_String) "done")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_String) "\t} || exit 1; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[37])))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044(INSTALL_INT_DIR)\"/*.\044\044ext \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[38])))
  },
  /* row  40 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[39])))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_String) "\t\t{ test -d \"\044\044dir\" || \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[40])))
  },
  /* row  42 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \"\044\044dir\" || { \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[41])))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_String) "\tdir=\"\044(INSTALL_INT_DIR)/Mercury/\044\044{ext}s\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[43])))
  },
  /* row  45 */
  {
    ((MR_Box) ((MR_String) "install_lib_dirs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) ((MR_String) "install_grade_dirs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  47 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[38])))
  },
  /* row  48 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044(INSTALL_GRADE_INT_DIR)\"/*.\044\044ext \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[47])))
  },
  /* row  49 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[48])))
  },
  /* row  50 */
  {
    ((MR_Box) ((MR_String) "\t\t{ test -d \"\044\044dir\" || \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[49])))
  },
  /* row  51 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \"\044\044dir\" || { \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[50])))
  },
  /* row  52 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[51])))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_String) "\tdir=\"\044(INSTALL_GRADE_INT_DIR)/Mercury/\044\044{ext}s\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[52])))
  },
  /* row  54 */
  {
    ((MR_Box) ((MR_String) "} || exit 1")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  55 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_INT_DIR)/Mercury/mhs; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[54])))
  },
  /* row  56 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044(INSTALL_INT_DIR)/*.mh \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[55])))
  },
  /* row  57 */
  {
    ((MR_Box) ((MR_String) "\t} && \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_INT_DIR)/Mercury/mhs; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[57])))
  },
  /* row  59 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[58])))
  },
  /* row  60 */
  {
    ((MR_Box) ((MR_String) "\t{ test -d \044(INSTALL_INT_DIR)/Mercury/mhs || \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[59])))
  },
  /* row  61 */
  {
    ((MR_Box) ((MR_String) "\044(LN_S) .. \044(INSTALL_INT_DIR)/Mercury/mhs || { \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[60])))
  },
  /* row  62 */
  {
    ((MR_Box) ((MR_String) "rm -rf \044(INSTALL_INT_DIR)/Mercury/mhs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[61])))
  },
  /* row  63 */
  {
    ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'.")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[62])))
  },
  /* row  64 */
  {
    ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[63])))
  },
  /* row  65 */
  {
    ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option.")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[64])))
  },
  /* row  66 */
  {
    ((MR_Box) ((MR_String) "done")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[65])))
  },
  /* row  67 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INC_DIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[66])))
  },
  /* row  68 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[67])))
  },
  /* row  69 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[54])))
  },
  /* row  70 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[69])))
  },
  /* row  71 */
  {
    ((MR_Box) ((MR_String) "\t} && \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[70])))
  },
  /* row  72 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_INT_DIR)/Mercury/mihs; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[71])))
  },
  /* row  73 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[72])))
  },
  /* row  74 */
  {
    ((MR_Box) ((MR_String) "\t{ test -d \044(INSTALL_INT_DIR)/Mercury/mihs || \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[73])))
  },
  /* row  75 */
  {
    ((MR_Box) ((MR_String) "\044(LN_S) .. \044(INSTALL_INT_DIR)/Mercury/mihs || { \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[74])))
  },
  /* row  76 */
  {
    ((MR_Box) ((MR_String) "rm -rf \044(INSTALL_INT_DIR)/Mercury/mihs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[75])))
  },
  /* row  77 */
  {
    ((MR_Box) ((MR_String) "} || exit 1")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[76])))
  },
  /* row  78 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_GRADE_INC_SUBDIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[77])))
  },
  /* row  79 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[78])))
  },
  /* row  80 */
  {
    ((MR_Box) ((MR_String) "\t} && \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[79])))
  },
  /* row  81 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \044(INSTALL_GRADE_INC_SUBDIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[80])))
  },
  /* row  82 */
  {
    ((MR_Box) ((MR_String) "\t{ test -d \044(INSTALL_GRADE_INC_SUBDIR) || \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[81])))
  },
  /* row  83 */
  {
    ((MR_Box) ((MR_String) "\044(LN_S) .. \044(INSTALL_GRADE_INC_SUBDIR) || { \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[82])))
  },
  /* row  84 */
  {
    ((MR_Box) ((MR_String) "rm -rf \044(INSTALL_GRADE_INC_SUBDIR)")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[83])))
  },
  /* row  85 */
  {
    ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'.")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[84])))
  },
  /* row  86 */
  {
    ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[85])))
  },
  /* row  87 */
  {
    ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option.")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[86])))
  },
  /* row  88 */
  {
    ((MR_Box) ((MR_String) "done")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[87])))
  },
  /* row  89 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_GRADE_INC_DIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[88])))
  },
  /* row  90 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[89])))
  },
  /* row  91 */
  {
    ((MR_Box) ((MR_String) "\ttrue; } && \\")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  92 */
  {
    ((MR_Box) ((MR_String) "\t*.\044A *.\044(EXT_FOR_SHARED_LIB) tmp_dir || \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[91])))
  },
  /* row  93 */
  {
    ((MR_Box) ((MR_String) "{ mv -f \044(deps_subdir)\044*.dep \044(deps_subdir)\044*.dv \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[92])))
  },
  /* row  94 */
  {
    ((MR_Box) ((MR_String) "done && \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[93])))
  },
  /* row  95 */
  {
    ((MR_Box) ((MR_String) "\tfi; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[94])))
  },
  /* row  96 */
  {
    ((MR_Box) ((MR_String) "\t\ttrue; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[95])))
  },
  /* row  97 */
  {
    ((MR_Box) ((MR_String) "\t\tmv -f \044\044file tmp_dir > /dev/null 2>&1; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[96])))
  },
  /* row  98 */
  {
    ((MR_Box) ((MR_String) "\tif test \"\044\044file\" != x; then \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[97])))
  },
  /* row  99 */
  {
    ((MR_Box) ((MR_String) "for file in x \044\044grade_files; do \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[98])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_String) "done && \\")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_String) "\tfi; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[100])))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_String) "\t\t\t*.jar *.dll *.err *.dep_err; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[101])))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_String) "\t\t\t*.\044A *.\044(EXT_FOR_SHARED_LIB) \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_String) "\t\trm -f \044(deps_subdir)\044*.dep \044(deps_subdir)\044*.dv \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_String) "\t\tdone; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_String) "\t\t\tfi; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[105])))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\trm -f \044\044file; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[106])))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_String) "\t\t\tif test \"\044\044file\" != x; then \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_String) "\t\tfor file in x \044\044grade_files; do \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[108])))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_String) "\t\tfi; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\texit 1; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[110])))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_String) "\tmv -f tmp_dir/* .; rmdir tmp_dir; true; }")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_String) "{ mv -f tmp_dir/*.dep tmp_dir/*.dv \044(deps_subdir).; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[112])))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_String) "done && \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[113])))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_String) "\tfi; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[114])))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_String) "\t\ttrue; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[115])))
  },
  /* row 117 */
  {
    ((MR_Box) ((MR_String) "\t\t\t> /dev/null 2>&1; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[116])))
  },
  /* row 118 */
  {
    ((MR_Box) ((MR_String) "\t\tmv -f tmp_dir/\140basename \044\044file\140 \044\044file \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[117])))
  },
  /* row 119 */
  {
    ((MR_Box) ((MR_String) "\tif test \"\044\044file\" != x; then \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[118])))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_String) "for file in x \044\044grade_files; do \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[119])))
  },
  /* row 121 */
  {
    ((MR_Box) ((MR_String) "fi")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_String) ".all_trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 123 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[122])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 124 */
  {
    ((MR_Box) ((MR_String) ".all_opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 125 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[124])),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[123])))
  },
  /* row 126 */
  {
    ((MR_Box) ((MR_String) ".all_int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 127 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[126])),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[125])))
  },
  /* row 128 */
  {
    ((MR_Box) ((MR_String) ".all_ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 129 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[128])),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[127])))
  },
  /* row 130 */
  {
    ((MR_Box) ((MR_String) ".classes")),
    ((MR_Box) ((MR_String) ".classes"))
  },
  /* row 131 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[130])),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[129])))
  },
  /* row 132 */
  {
    ((MR_Box) ((MR_String) ".javas")),
    ((MR_Box) ((MR_String) ".all_javas"))
  },
  /* row 133 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[132])),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[131])))
  },
  /* row 134 */
  {
    ((MR_Box) ((MR_String) ".trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 135 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[134])),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[133])))
  },
  /* row 136 */
  {
    ((MR_Box) ((MR_String) ".opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 137 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[136])),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[135])))
  },
  /* row 138 */
  {
    ((MR_Box) ((MR_String) ".int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 139 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[138])),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[137])))
  },
  /* row 140 */
  {
    ((MR_Box) ((MR_String) ".ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 141 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[140])),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[139])))
  },
  /* row 142 */
  {
    ((MR_Box) ((MR_String) ".check")),
    ((MR_Box) ((MR_String) ".errs"))
  },
  /* row 143 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[142])),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[141])))
  },
  /* row 144 */
  {
    ((MR_Box) ((MR_String) ".foreign_cs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 145 */
  {
    ((MR_Box) ((MR_String) ".errs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[144])))
  },
  /* row 146 */
  {
    ((MR_Box) ((MR_String) ".dep_errs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[145])))
  },
  /* row 147 */
  {
    ((MR_Box) ((MR_String) ".profs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[146])))
  },
  /* row 148 */
  {
    ((MR_Box) ((MR_String) ".all_javas")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[147])))
  },
  /* row 149 */
  {
    ((MR_Box) ((MR_String) ".useds")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[148])))
  },
  /* row 150 */
  {
    ((MR_Box) ((MR_String) ".java_dates")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[149])))
  },
  /* row 151 */
  {
    ((MR_Box) ((MR_String) ".c_dates")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[150])))
  },
  /* row 152 */
  {
    ((MR_Box) ((MR_String) ".all_pic_os")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[151])))
  },
  /* row 153 */
  {
    ((MR_Box) ((MR_String) ".all_os")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[152])))
  },
  /* row 154 */
  {
    ((MR_Box) ((MR_String) ".mihs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[153])))
  },
  /* row 155 */
  {
    ((MR_Box) ((MR_String) ".all_cs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[154])))
  },
  /* row 156 */
  {
    ((MR_Box) ((MR_String) ".dirs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[155])))
  },
  /* row 157 */
  {
    ((MR_Box) ((MR_String) ".classes")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 158 */
  {
    ((MR_Box) ((MR_String) ".foreign_dlls")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[157])))
  },
  /* row 159 */
  {
    ((MR_Box) ((MR_String) ".dlls")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[158])))
  },
  /* row 160 */
  {
    ((MR_Box) ((MR_String) ".mihs_to_clean")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[159])))
  },
  /* row 161 */
  {
    ((MR_Box) ((MR_String) ".mhs_to_clean")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[160])))
  },
  /* row 162 */
  {
    ((MR_Box) ((MR_String) ".module_deps")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[161])))
  },
  /* row 163 */
  {
    ((MR_Box) ((MR_String) ".ds")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[162])))
  },
  /* row 164 */
  {
    ((MR_Box) ((MR_String) ".imdgs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[163])))
  },
  /* row 165 */
  {
    ((MR_Box) ((MR_String) ".requests")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[164])))
  },
  /* row 166 */
  {
    ((MR_Box) ((MR_String) ".analyses")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[165])))
  },
  /* row 167 */
  {
    ((MR_Box) ((MR_String) ".trans_opts")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[166])))
  },
  /* row 168 */
  {
    ((MR_Box) ((MR_String) ".opts")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[167])))
  },
  /* row 169 */
  {
    ((MR_Box) ((MR_String) ".int3s")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[168])))
  },
  /* row 170 */
  {
    ((MR_Box) ((MR_String) ".int0s_to_clean")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[169])))
  },
  /* row 171 */
  {
    ((MR_Box) ((MR_String) ".ints")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[170])))
  },
  /* row 172 */
  {
    ((MR_Box) ((MR_String) ".trans_opt_dates")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[171])))
  },
  /* row 173 */
  {
    ((MR_Box) ((MR_String) ".optdates")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[172])))
  },
  /* row 174 */
  {
    ((MR_Box) ((MR_String) ".date3s")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[173])))
  },
  /* row 175 */
  {
    ((MR_Box) ((MR_String) ".date0s")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[174])))
  },
  /* row 176 */
  {
    ((MR_Box) ((MR_String) ".dates")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[175])))
  },
};

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_2[4][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_5[3])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_mmakefile_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".m"))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_5[3])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_mmakefile_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".dep_err"))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_5[3])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_mmakefile_5_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".err"))
  },
};

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_3[14][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[1])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[0])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__construct_intermod_rules_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_9[0])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_d_mmakefile_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[1])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_mod_misc_vars_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[1])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_mod_misc_vars_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[3])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_mod_misc_vars_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[3])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_intn_vars_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[3])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_opt_vars_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[3])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[3])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_csharp_vars_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[3])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_smart_recomp_vars_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_5[1])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_mmakefile_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[3])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_mmakefile_5_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_5[4])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dep_mmakefile_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_4[11][1] = {
  /* row   0 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 5U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 4U) },
  /* row   3 */
  { (MR_Box) ((MR_Unsigned) 6U) },
  /* row   4 */
  { (MR_Box) ((MR_Unsigned) 1U) },
  /* row   5 */
  { (MR_Box) ((MR_Unsigned) 2U) },
  /* row   6 */
  { (MR_Box) ((MR_Unsigned) 10U) },
  /* row   7 */
  { ((MR_Box) ((MR_String) "java")) },
  /* row   8 */
  { (MR_Box) ((MR_Unsigned) 3U) },
  /* row   9 */
  { (MR_Box) ((MR_Unsigned) 9U) },
  /* row  10 */
  { (MR_Box) ((MR_Unsigned) 8U) },
};

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_5[5][6] = {
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
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_6[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__make_module_file_names__type_ctor_info_module_name_info_0)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__make_module_file_names__type_ctor_info_module_name_info_0))
  },
};

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_7[5][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments__list__pti_list_1__plain_builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_8[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__make_module_file_names__type_ctor_info_module_name_info_0)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__make_module_file_names__type_ctor_info_module_name_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_9[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments____vpti_tuple_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_mmakefile_fragments__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__generate_mmakefile_fragments__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__make_module_file_names__type_ctor_info_module_name_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_module_name_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_mmakefile_fragments__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__make_module_file_names__type_ctor_info_module_name_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__make_module_file_names__type_ctor_info_module_name_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_mmakefile_fragments__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__generate_mmakefile_fragments____vpti_tuple_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_mmakefile_fragments__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_all_mih_deps_0[1] = { (MR_Integer) 0 };

static const MR_FA_TypeInfo_Struct1 parse_tree__generate_mmakefile_fragments__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_NotagFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__notag_functor_desc_all_mih_deps_0 = {
  (MR_String) "all_mih_deps",
  (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_all_mih_deps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Unify____all_mih_deps_0_0_10001)),
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Compare____all_mih_deps_0_0_10001)),
  (MR_String) "parse_tree.generate_mmakefile_fragments",
  (MR_String) "all_mih_deps",
  { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__notag_functor_desc_all_mih_deps_0 },
  { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__notag_functor_desc_all_mih_deps_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_all_mih_deps_0,

};

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_d_file_deps_0_0[7] = {
  (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_module_own_fim_deps_0),
  (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_intermod_only_fim_deps_0),
  (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_all_mih_deps_0),
  (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_maybe_include_trans_opt_rule_0),
  (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_maybe_trans_opt_deps_0)
};

static const MR_ConstString parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_names_d_file_deps_0_0[7] = {
  (MR_String) "dfd_direct_deps",
  (MR_String) "dfd_indirect_deps",
  (MR_String) "dfd_own_fim_deps",
  (MR_String) "dfd_intermod_fim_deps",
  (MR_String) "dfd_all_mih_deps",
  (MR_String) "dfd_trans_opt",
  (MR_String) "dfd_trans_opt_deps"
};

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_d_file_deps_0_0 = {
  (MR_String) "d_file_deps",
  INT16_C(7),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_d_file_deps_0_0,
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_names_d_file_deps_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_d_file_deps_0_0[1] = { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_d_file_deps_0_0 };

static const MR_DuPtagLayout parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_d_file_deps_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_d_file_deps_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_d_file_deps_0[1] = { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_d_file_deps_0_0 };

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_d_file_deps_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_d_file_deps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Unify____d_file_deps_0_0_10001)),
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Compare____d_file_deps_0_0_10001)),
  (MR_String) "parse_tree.generate_mmakefile_fragments",
  (MR_String) "d_file_deps",
  { parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_d_file_deps_0 },
  { parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_d_file_deps_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_d_file_deps_0,

};

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_intermod_deps_0_0 = {
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

static const MR_FA_TypeInfo_Struct1 parse_tree__generate_mmakefile_fragments__list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__generate_mmakefile_fragments__maybe__ti_maybe_1list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  { (MR_TypeInfo) (&parse_tree__generate_mmakefile_fragments__list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_intermod_deps_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__maybe__ti_maybe_1list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_ConstString parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_names_intermod_deps_0_1[2] = {
  (MR_String) "ofd_plain_opt_modules",
  (MR_String) "ofd_trans_opt_modules"
};

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_intermod_deps_0_1 = {
  (MR_String) "intermod_deps",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_intermod_deps_0_1,
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_names_intermod_deps_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_intermod_deps_0_0[1] = { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_intermod_deps_0_0 };

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_intermod_deps_0_1[1] = { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_intermod_deps_0_1 };

static const MR_DuPtagLayout parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_intermod_deps_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_intermod_deps_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_intermod_deps_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_intermod_deps_0[2] = {
  &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_intermod_deps_0_1,
  &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_intermod_deps_0_0
};

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_intermod_deps_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_intermod_deps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Unify____intermod_deps_0_0_10001)),
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Compare____intermod_deps_0_0_10001)),
  (MR_String) "parse_tree.generate_mmakefile_fragments",
  (MR_String) "intermod_deps",
  { parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_intermod_deps_0 },
  { parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_intermod_deps_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_intermod_deps_0,

};

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_intermod_only_fim_deps_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__notag_functor_desc_intermod_only_fim_deps_0 = {
  (MR_String) "intermod_only_fim_deps",
  (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_intermod_only_fim_deps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Unify____intermod_only_fim_deps_0_0_10001)),
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Compare____intermod_only_fim_deps_0_0_10001)),
  (MR_String) "parse_tree.generate_mmakefile_fragments",
  (MR_String) "intermod_only_fim_deps",
  { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__notag_functor_desc_intermod_only_fim_deps_0 },
  { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__notag_functor_desc_intermod_only_fim_deps_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_intermod_only_fim_deps_0,

};

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_include_trans_opt_rule_0_0 = {
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

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_maybe_include_trans_opt_rule_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_trans_opt_rule_info_0) };

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_include_trans_opt_rule_0_1 = {
  (MR_String) "include_trans_opt_rule",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_maybe_include_trans_opt_rule_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_include_trans_opt_rule_0_0[1] = { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_include_trans_opt_rule_0_0 };

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_include_trans_opt_rule_0_1[1] = { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_include_trans_opt_rule_0_1 };

static const MR_DuPtagLayout parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_maybe_include_trans_opt_rule_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_include_trans_opt_rule_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_include_trans_opt_rule_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_maybe_include_trans_opt_rule_0[2] = {
  &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_include_trans_opt_rule_0_0,
  &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_include_trans_opt_rule_0_1
};

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_maybe_include_trans_opt_rule_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_maybe_include_trans_opt_rule_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Unify____maybe_include_trans_opt_rule_0_0_10001)),
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Compare____maybe_include_trans_opt_rule_0_0_10001)),
  (MR_String) "parse_tree.generate_mmakefile_fragments",
  (MR_String) "maybe_include_trans_opt_rule",
  { parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_maybe_include_trans_opt_rule_0 },
  { parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_maybe_include_trans_opt_rule_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_maybe_include_trans_opt_rule_0,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__generate_mmakefile_fragments__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__generate_mmakefile_fragments__pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&parse_tree__generate_mmakefile_fragments__list__ti_list_1builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_maybe_mmake_var_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Unify____maybe_mmake_var_0_0_10001)),
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Compare____maybe_mmake_var_0_0_10001)),
  (MR_String) "parse_tree.generate_mmakefile_fragments",
  (MR_String) "maybe_mmake_var",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_trans_opt_deps_0_0 = {
  (MR_String) "no_trans_opt_deps",
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

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_maybe_trans_opt_deps_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0) };

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_trans_opt_deps_0_1 = {
  (MR_String) "trans_opt_deps",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_maybe_trans_opt_deps_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_trans_opt_deps_0_0[1] = { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_trans_opt_deps_0_0 };

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_trans_opt_deps_0_1[1] = { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_trans_opt_deps_0_1 };

static const MR_DuPtagLayout parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_maybe_trans_opt_deps_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_trans_opt_deps_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_trans_opt_deps_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_maybe_trans_opt_deps_0[2] = {
  &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_trans_opt_deps_0_0,
  &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_trans_opt_deps_0_1
};

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_maybe_trans_opt_deps_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_maybe_trans_opt_deps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Unify____maybe_trans_opt_deps_0_0_10001)),
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Compare____maybe_trans_opt_deps_0_0_10001)),
  (MR_String) "parse_tree.generate_mmakefile_fragments",
  (MR_String) "maybe_trans_opt_deps",
  { parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_maybe_trans_opt_deps_0 },
  { parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_maybe_trans_opt_deps_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_maybe_trans_opt_deps_0,

};

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_module_own_fim_deps_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__notag_functor_desc_module_own_fim_deps_0 = {
  (MR_String) "module_own_fim_deps",
  (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_module_own_fim_deps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Unify____module_own_fim_deps_0_0_10001)),
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Compare____module_own_fim_deps_0_0_10001)),
  (MR_String) "parse_tree.generate_mmakefile_fragments",
  (MR_String) "module_own_fim_deps",
  { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__notag_functor_desc_module_own_fim_deps_0 },
  { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__notag_functor_desc_module_own_fim_deps_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_module_own_fim_deps_0,

};

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_trans_opt_rule_info_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0) };

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_trans_opt_rule_info_0_0 = {
  (MR_String) "trans_opt_deps_from_order",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_trans_opt_rule_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_trans_opt_rule_info_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0) };

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_trans_opt_rule_info_0_1 = {
  (MR_String) "trans_opt_deps_from_d_file",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_trans_opt_rule_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_trans_opt_rule_info_0_0[1] = { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_trans_opt_rule_info_0_0 };

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_trans_opt_rule_info_0_1[1] = { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_trans_opt_rule_info_0_1 };

static const MR_DuPtagLayout parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_trans_opt_rule_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_trans_opt_rule_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_trans_opt_rule_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_trans_opt_rule_info_0[2] = {
  &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_trans_opt_rule_info_0_1,
  &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_trans_opt_rule_info_0_0
};

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_trans_opt_rule_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_trans_opt_rule_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Unify____trans_opt_rule_info_0_0_10001)),
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Compare____trans_opt_rule_info_0_0_10001)),
  (MR_String) "parse_tree.generate_mmakefile_fragments",
  (MR_String) "trans_opt_rule_info",
  { parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_trans_opt_rule_info_0 },
  { parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_trans_opt_rule_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_trans_opt_rule_info_0,

};

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments__IntroducedFrom__pred__generate_dv_file_define_mod_misc_vars__1262__1_2_p_0(
  MR_Word DepsMap_7,
  MR_Word LambdaHeadVar__1_29)
{
  MR_bool succeeded;
  MR_Word BurdenedModule_16;
  MR_Word ParseTreeModuleSrc_17;
  MR_Word IncludeMap_18;
  MR_Word Var_30;
  MR_Box conv0_Var_30;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_7, ((MR_Box) (LambdaHeadVar__1_29)), &conv0_Var_30);
  Var_30 = ((MR_Word) (conv0_Var_30));
  BurdenedModule_16 = ((MR_Word) ((MR_hl_field(0, Var_30, 1))));
  ParseTreeModuleSrc_17 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_16, 1))));
  IncludeMap_18 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_17, 2))));
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), IncludeMap_18);
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments__IntroducedFrom__pred__generate_dep_mmakefile__1676__1_2_p_0(
  MR_Word StaticLibDirNames_37,
  MR_Word SharedLibDirNames_41)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[1]), ((MR_Box) (StaticLibDirNames_37)), ((MR_Box) (SharedLibDirNames_41)));
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__IntroducedFrom__pred__generate_d_mmakefile__287__1_4_p_0(
  MR_Word LambdaHeadVar__1_83,
  MR_Word LambdaHeadVar__2_84,
  MR_Word LambdaHeadVar__3_85,
  MR_Word * LambdaHeadVar__4_86)
{
  MR_Word Section_41 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__2_84, 0))) & (MR_Integer) 1);

  switch (Section_41) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *LambdaHeadVar__4_86 = LambdaHeadVar__3_85;
      break;
    case (MR_Integer) 0:
      mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (LambdaHeadVar__1_83)), LambdaHeadVar__3_85, LambdaHeadVar__4_86);
      break;
  }
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____maybe_mmake_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_3[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____maybe_mmake_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_3[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____intermod_deps_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____intermod_deps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_8 == CastX_7);
  }
  else
  {
    MR_Word TypeInfo_11_11;
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word ArgY2_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      ArgY2_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      TypeInfo_11_11 = (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
  }
  return succeeded;
}

void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____d_file_deps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_24 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_25 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_24 == CastY_25);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Word ArgX7_22 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Word ArgY7_23 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        parse_tree__generate_mmakefile_fragments____Compare____module_own_fim_deps_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          parse_tree__generate_mmakefile_fragments____Compare____intermod_only_fim_deps_0_0(&SubResult4_15, ArgX4_13, ArgY4_14);
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            parse_tree__generate_mmakefile_fragments____Compare____all_mih_deps_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              parse_tree__generate_mmakefile_fragments____Compare____maybe_include_trans_opt_rule_0_0(&SubResult6_21, ArgX6_19, ArgY6_20);
              succeeded = (SubResult6_21 != (MR_Integer) 0);
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
                parse_tree__generate_mmakefile_fragments____Compare____maybe_trans_opt_deps_0_0(HeadVar__1_1, ArgX7_22, ArgY7_23);
            }
          }
        }
      }
    }
  }
}

void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____module_own_fim_deps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____maybe_trans_opt_deps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____maybe_include_trans_opt_rule_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    parse_tree__generate_mmakefile_fragments____Compare____trans_opt_rule_info_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____trans_opt_rule_info_0_0(
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
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____intermod_only_fim_deps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____d_file_deps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_17 == CastY_18);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_20_20;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Word ArgX7_15 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Word ArgY7_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 6))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_20_20 = (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        succeeded = parse_tree__generate_mmakefile_fragments____Unify____module_own_fim_deps_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
        {
          succeeded = parse_tree__generate_mmakefile_fragments____Unify____intermod_only_fim_deps_0_0(ArgX4_9, ArgY4_10);
          if (succeeded)
          {
            succeeded = parse_tree__generate_mmakefile_fragments____Unify____all_mih_deps_0_0(ArgX5_11, ArgY5_12);
            if (succeeded)
            {
              succeeded = parse_tree__generate_mmakefile_fragments____Unify____maybe_include_trans_opt_rule_0_0(ArgX6_13, ArgY6_14);
              if (succeeded)
                succeeded = parse_tree__generate_mmakefile_fragments____Unify____maybe_trans_opt_deps_0_0(ArgX7_15, ArgY7_16);
            }
          }
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____module_own_fim_deps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____maybe_trans_opt_deps_0_0(
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
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____maybe_include_trans_opt_rule_0_0(
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
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = parse_tree__generate_mmakefile_fragments____Unify____trans_opt_rule_info_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____trans_opt_rule_info_0_0(
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      TypeInfo_9_9 = (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  else
  {
    MR_Word TypeInfo_10_10;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      TypeInfo_10_10 = (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____intermod_only_fim_deps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____all_mih_deps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word ArgY1_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____all_mih_deps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word ArgY1_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__get_source_file_3_p_0(
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
  BurdenedModule_9 = ((MR_Word) ((MR_hl_field(0, Deps_7, 1))));
  Baggage_10 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_9, 0))));
  SourceFileName_11 = ((MR_String) ((MR_hl_field(0, Baggage_10, 0))));
  succeeded = mercury__string__remove_suffix_3_p_0(SourceFileName_11, (MR_String) ".m", &SourceFileBase_12);
  if (succeeded)
    *FileName_6 = SourceFileBase_12;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.get_source_file\'/3", (MR_String) "source file name doesn\'t end in \140.m\'");
      return;
    }
}

static MR_String MR_CALL 
parse_tree__generate_mmakefile_fragments__remove_suffix_files_cmd_2_f_0(
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
parse_tree__generate_mmakefile_fragments__construct_dep_file_collective_target_rule_4_p_0(
  MR_String ModuleNameStr_5,
  MR_String ModuleMakeVarName_6,
  MR_Tuple HeadVar__3_3,
  MR_Word * MmakeRule_9)
{
  MR_String ExtStr_7 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
  MR_String VarExtension_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 1))));
  MR_String TargetName_10;
  MR_String Source_11;
  MR_String Var_18;
  MR_String Var_20;
  MR_Word Var_22;
  MR_String Var_26;
  MR_String Var_27;

  TargetName_10 = mercury__string__f_43_43_2_f_0(ModuleNameStr_5, ExtStr_7);
  Var_26 = mercury__string__f_43_43_2_f_0(VarExtension_8, (MR_String) ")");
  Var_27 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_6, Var_26);
  Source_11 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_27);
  Var_20 = mercury__string__f_43_43_2_f_0(ExtStr_7, VarExtension_8);
  Var_18 = mercury__string__f_43_43_2_f_0((MR_String) "collective_target_", Var_20);
  {
    Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_22, 0) = ((MR_Box) (Source_11));
    MR_hl_field(1, Var_22, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRule_9 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Var_18));
    MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, base, 3) = ((MR_Box) (TargetName_10));
    MR_hl_field(3, base, 4) = ((MR_Box) (Var_22));
    MR_hl_field(3, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__compare_module_names_3_p_0(
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
parse_tree__generate_mmakefile_fragments__construct_subdirs_shorthand_rule_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word Ext_9,
  MR_Word * MmakeRule_10,
  MR_Word STATE_VARIABLE_Cache_0_16,
  MR_Word * STATE_VARIABLE_Cache_17)
{
  MR_String ModuleStr_12;
  MR_String Target_13;
  MR_String ExtStr_14;
  MR_String ShorthandTarget_15;
  MR_String Var_20;
  MR_Word Var_23;

  parse_tree__file_names__module_name_to_file_name_stem_2_p_0(ModuleName_8, &ModuleStr_12);
  parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_7, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_subdirs_shorthand_rule\'/6", Ext_9, ModuleName_8, &Target_13, STATE_VARIABLE_Cache_0_16, STATE_VARIABLE_Cache_17);
  ExtStr_14 = parse_tree__file_names__extension_to_string_2_f_0(Globals_7, Ext_9);
  ShorthandTarget_15 = mercury__string__f_43_43_2_f_0(ModuleStr_12, ExtStr_14);
  Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "subdir_shorthand_for_", ExtStr_14);
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (Target_13));
    MR_hl_field(1, Var_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRule_10 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Var_20));
    MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, base, 3) = ((MR_Box) (ShorthandTarget_15));
    MR_hl_field(3, base, 4) = ((MR_Box) (Var_23));
    MR_hl_field(3, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static MR_String MR_CALL 
parse_tree__generate_mmakefile_fragments__foreign_include_file_path_name_2_f_0(
  MR_String SourceFileName_4,
  MR_Word IncludeFile_5)
{
  MR_String IncludePath_6;
  MR_String IncludeFileName_8 = ((MR_String) ((MR_hl_field(0, IncludeFile_5, 1))));

  parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_4, IncludeFileName_8, &IncludePath_6);
  return IncludePath_6;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_nested_deps_rule_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word NestedDepSet_10,
  MR_Word Ext_11,
  MR_Word * MmakeRule_12,
  MR_Word STATE_VARIABLE_Cache_0_17,
  MR_Word * STATE_VARIABLE_Cache_18)
{
  MR_String ModuleExtName_14;
  MR_Word NestedDepsFileNames_15;
  MR_String ExtStr_16;
  MR_Word STATE_VARIABLE_Cache_1_20;
  MR_String Var_22;

  parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_8, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_nested_deps_rule\'/7", Ext_11, ModuleName_9, &ModuleExtName_14, STATE_VARIABLE_Cache_0_17, &STATE_VARIABLE_Cache_1_20);
  parse_tree__make_module_file_names__convert_module_name_set_to_file_names_6_p_0(Globals_8, Ext_11, NestedDepSet_10, &NestedDepsFileNames_15, STATE_VARIABLE_Cache_1_20, STATE_VARIABLE_Cache_18);
  ExtStr_16 = parse_tree__file_names__extension_to_string_2_f_0(Globals_8, Ext_11);
  Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "nested_deps_for_", ExtStr_16);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRule_12 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Var_22));
    MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, base, 3) = ((MR_Box) (ModuleExtName_14));
    MR_hl_field(3, base, 4) = ((MR_Box) (NestedDepsFileNames_15));
    MR_hl_field(3, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_mmakefile_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__file_names__create_any_dirs_on_path_3_p_0(((MR_Word) (wrapper_arg_1)));
}

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_mmakefile_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__generate_mmakefile_fragments__IntroducedFrom__pred__generate_dep_mmakefile__1676__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))));
  return succeeded;
}

void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_mmakefile_7_p_0(
  MR_Word Globals_8,
  MR_String SourceFileName_9,
  MR_Word ModuleName_10,
  MR_Word DepsMap_11,
  MR_Word * STATE_VARIABLE_MmakeFile_65)
{
  MR_bool succeeded;
  MR_String ModuleNameStr_14;
  MR_String Version_15;
  MR_String FullArch_16;
  MR_Word MmakeStartComment_17;
  MR_String ModuleMakeVarName_18;
  MR_Word InitDirNames_19;
  MR_String InitFileName_21;
  MR_Word InitCDirNames_23;
  MR_String InitCFileName_25;
  MR_Word InitObjDirNames_27;
  MR_String InitObjFileName_29;
  MR_Word InitPicObjDirNames_31;
  MR_String InitPicObjFileName_33;
  MR_String ExeFileName_35;
  MR_Word StaticLibDirNames_37;
  MR_String StaticLibFileName_39;
  MR_Word SharedLibDirNames_41;
  MR_String SharedLibFileName_43;
  MR_String JarFileName_45;
  MR_Word DirNamesList_47;
  MR_Word MmcMakeDeps_48;
  MR_Word Intermod_49;
  MR_Word TransOpt_50;
  MR_Word MaybeModuleDepsVar_52;
  MR_String MaybeModuleDepsVarSpace_53;
  MR_Word MaybeOptsVar_55;
  MR_String MaybeOptsVarSpace_56;
  MR_Word MaybeTransOptsVar_58;
  MR_String MaybeTransOptsVarSpace_59;
  MR_Word MaybeModuleDepsVarPair_60;
  MR_Word MaybeOptsVarPair_61;
  MR_Word MaybeTransOptsVarPair_62;
  MR_String DepFileName_63;
  MR_String DvFileName_64;
  MR_Word Var_95;
  MR_Word Var_98;
  MR_Word Var_99;
  MR_Word Var_100;
  MR_Word Var_101;
  MR_Word STATE_VARIABLE_MmakeFile_1_123;
  MR_Word STATE_VARIABLE_MmakeFile_2_124;
  MR_Word STATE_VARIABLE_MmakeFile_3_125;
  MR_Word STATE_VARIABLE_MmakeFile_4_126;
  MR_Word STATE_VARIABLE_MmakeFile_5_127;
  MR_Word STATE_VARIABLE_MmakeFile_6_128;
  MR_Word STATE_VARIABLE_MmakeFile_7_129;
  MR_Word _InitDirNamesProposed_20;
  MR_String _InitFileNameProposed_22;
  MR_Word _InitCDirNamesProposed_24;
  MR_String _InitCFileNameProposed_26;
  MR_Word _InitObjDirNamesProposed_28;
  MR_String _InitObjFileNameProposed_30;
  MR_Word _InitPicObjDirNamesProposed_32;
  MR_String _InitPicObjFileNameProposed_34;
  MR_String _ExeFileNameProposed_36;
  MR_Word _StaticLibDirNamesProposed_38;
  MR_String _StaticLibFileNameProposed_40;
  MR_Word _SharedLibDirNamesProposed_42;
  MR_String _SharedLibFileNameProposed_44;
  MR_String _JarFileNameProposed_46;
  MR_Box conv0_STATE_VARIABLE_IO_67;

  ModuleNameStr_14 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_10);
  mercury__library__version_2_p_0(&Version_15, &FullArch_16);
  {
    MmakeStartComment_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MmakeStartComment_17, 0) = ((MR_Box) ((MR_String) "program dependencies"));
    MR_hl_field(0, MmakeStartComment_17, 1) = ((MR_Box) (ModuleNameStr_14));
    MR_hl_field(0, MmakeStartComment_17, 2) = ((MR_Box) (SourceFileName_9));
    MR_hl_field(0, MmakeStartComment_17, 3) = ((MR_Box) (Version_15));
    MR_hl_field(0, MmakeStartComment_17, 4) = ((MR_Box) (FullArch_16));
  }
  parse_tree__file_names__module_name_to_make_var_name_2_p_0(ModuleName_10, &ModuleMakeVarName_18);
  parse_tree__file_names__module_name_to_file_name_return_dirs_8_p_0(Globals_8, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_mmakefile\'/7", (MR_Word) (MR_mkword(2, &parse_tree__generate_mmakefile_fragments_scalar_common_4[0])), ModuleName_10, &InitDirNames_19, &_InitDirNamesProposed_20, &InitFileName_21, &_InitFileNameProposed_22);
  parse_tree__file_names__module_name_to_file_name_return_dirs_8_p_0(Globals_8, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_mmakefile\'/7", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[11])), ModuleName_10, &InitCDirNames_23, &_InitCDirNamesProposed_24, &InitCFileName_25, &_InitCFileNameProposed_26);
  parse_tree__file_names__module_name_to_file_name_return_dirs_8_p_0(Globals_8, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_mmakefile\'/7", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[12])), ModuleName_10, &InitObjDirNames_27, &_InitObjDirNamesProposed_28, &InitObjFileName_29, &_InitObjFileNameProposed_30);
  parse_tree__file_names__module_name_to_file_name_return_dirs_8_p_0(Globals_8, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_mmakefile\'/7", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[13])), ModuleName_10, &InitPicObjDirNames_31, &_InitPicObjDirNamesProposed_32, &InitPicObjFileName_33, &_InitPicObjFileNameProposed_34);
  parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_8, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_mmakefile\'/7", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[14])), ModuleName_10, &ExeFileName_35, &_ExeFileNameProposed_36);
  parse_tree__file_names__module_name_to_lib_file_name_return_dirs_9_p_0(Globals_8, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_mmakefile\'/7", (MR_String) "lib", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[15])), ModuleName_10, &StaticLibDirNames_37, &_StaticLibDirNamesProposed_38, &StaticLibFileName_39, &_StaticLibFileNameProposed_40);
  parse_tree__file_names__module_name_to_lib_file_name_return_dirs_9_p_0(Globals_8, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_mmakefile\'/7", (MR_String) "lib", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[16])), ModuleName_10, &SharedLibDirNames_41, &_SharedLibDirNamesProposed_42, &SharedLibFileName_43, &_SharedLibFileNameProposed_44);
  parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_8, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_mmakefile\'/7", (MR_Word) (MR_mkword(2, &parse_tree__generate_mmakefile_fragments_scalar_common_4[4])), ModuleName_10, &JarFileName_45, &_JarFileNameProposed_46);
  {
    Var_95 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_95, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[4]));
    MR_hl_field(0, Var_95, 1) = ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dep_mmakefile_7_p_0_1));
    MR_hl_field(0, Var_95, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_95, 3) = ((MR_Box) (StaticLibDirNames_37));
    MR_hl_field(0, Var_95, 4) = ((MR_Box) (SharedLibDirNames_41));
  }
  mercury__require__expect_3_p_0(Var_95, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_mmakefile\'/7", (MR_String) "StaticLibDirNames != SharedLibDirNames");
  {
    Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_101, 0) = ((MR_Box) (StaticLibDirNames_37));
    MR_hl_field(1, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_100, 0) = ((MR_Box) (InitPicObjDirNames_31));
    MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_101));
  }
  {
    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_99, 0) = ((MR_Box) (InitObjDirNames_27));
    MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_100));
  }
  {
    Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_98, 0) = ((MR_Box) (InitCDirNames_23));
    MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_99));
  }
  {
    DirNamesList_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, DirNamesList_47, 0) = ((MR_Box) (InitDirNames_19));
    MR_hl_field(1, DirNamesList_47, 1) = ((MR_Box) (Var_98));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_3[13]), DirNamesList_47, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_67);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 792, &MmcMakeDeps_48);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 429, &Intermod_49);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 432, &TransOpt_50);
  switch (MmcMakeDeps_48) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MaybeModuleDepsVar_52 = (MR_Word) ((MR_Unsigned) 0U);
        MaybeModuleDepsVarSpace_53 = (MR_String) "";
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String ModuleDepsVar_51;
        MR_String Var_109;

        Var_109 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".module_deps)");
        ModuleDepsVar_51 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_109);
        {
          MaybeModuleDepsVar_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeModuleDepsVar_52, 0) = ((MR_Box) (ModuleDepsVar_51));
          MR_hl_field(1, MaybeModuleDepsVar_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        MaybeModuleDepsVarSpace_53 = mercury__string__f_43_43_2_f_0(ModuleDepsVar_51, (MR_String) " ");
      }
      break;
  }
  switch (Intermod_49) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MaybeOptsVar_55 = (MR_Word) ((MR_Unsigned) 0U);
        MaybeOptsVarSpace_56 = (MR_String) "";
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String OptsVar_54;
        MR_String Var_114;

        Var_114 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".all_opts)");
        OptsVar_54 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_114);
        {
          MaybeOptsVar_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeOptsVar_55, 0) = ((MR_Box) (OptsVar_54));
          MR_hl_field(1, MaybeOptsVar_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        MaybeOptsVarSpace_56 = mercury__string__f_43_43_2_f_0(OptsVar_54, (MR_String) " ");
      }
      break;
  }
  switch (TransOpt_50) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MaybeTransOptsVar_58 = (MR_Word) ((MR_Unsigned) 0U);
        MaybeTransOptsVarSpace_59 = (MR_String) "";
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String TransOptsVar_57;
        MR_String Var_119;

        Var_119 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".all_trans_opts)");
        TransOptsVar_57 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_119);
        {
          MaybeTransOptsVar_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeTransOptsVar_58, 0) = ((MR_Box) (TransOptsVar_57));
          MR_hl_field(1, MaybeTransOptsVar_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        MaybeTransOptsVarSpace_59 = mercury__string__f_43_43_2_f_0(TransOptsVar_57, (MR_String) " ");
      }
      break;
  }
  {
    MaybeModuleDepsVarPair_60 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MaybeModuleDepsVarPair_60, 0) = ((MR_Box) (MaybeModuleDepsVar_52));
    MR_hl_field(0, MaybeModuleDepsVarPair_60, 1) = ((MR_Box) (MaybeModuleDepsVarSpace_53));
  }
  {
    MaybeOptsVarPair_61 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MaybeOptsVarPair_61, 0) = ((MR_Box) (MaybeOptsVar_55));
    MR_hl_field(0, MaybeOptsVarPair_61, 1) = ((MR_Box) (MaybeOptsVarSpace_56));
  }
  {
    MaybeTransOptsVarPair_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MaybeTransOptsVarPair_62, 0) = ((MR_Box) (MaybeTransOptsVar_58));
    MR_hl_field(0, MaybeTransOptsVarPair_62, 1) = ((MR_Box) (MaybeTransOptsVarSpace_59));
  }
  libs__mmakefiles__start_mmakefile_1_p_0(&STATE_VARIABLE_MmakeFile_1_123);
  libs__mmakefiles__add_mmake_entry_3_p_0(MmakeStartComment_17, STATE_VARIABLE_MmakeFile_1_123, &STATE_VARIABLE_MmakeFile_2_124);
  parse_tree__generate_mmakefile_fragments__generate_dep_file_exec_library_targets_13_p_0(Globals_8, ModuleName_10, ModuleMakeVarName_18, InitFileName_21, InitObjFileName_29, MaybeOptsVar_55, MaybeTransOptsVar_58, ExeFileName_35, JarFileName_45, StaticLibFileName_39, SharedLibFileName_43, STATE_VARIABLE_MmakeFile_2_124, &STATE_VARIABLE_MmakeFile_3_125);
  parse_tree__generate_mmakefile_fragments__generate_dep_file_init_targets_9_p_0(Globals_8, ModuleName_10, ModuleMakeVarName_18, InitCFileName_25, InitFileName_21, &DepFileName_63, &DvFileName_64, STATE_VARIABLE_MmakeFile_3_125, &STATE_VARIABLE_MmakeFile_4_126);
  parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0(ModuleName_10, DepsMap_11, ModuleMakeVarName_18, MmcMakeDeps_48, Intermod_49, TransOpt_50, MaybeModuleDepsVarPair_60, MaybeOptsVarPair_61, MaybeTransOptsVarPair_62, STATE_VARIABLE_MmakeFile_4_126, &STATE_VARIABLE_MmakeFile_5_127);
  parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_proposed_9_p_0(Globals_8, DepsMap_11, ModuleName_10, ModuleMakeVarName_18, MmcMakeDeps_48, Intermod_49, TransOpt_50, STATE_VARIABLE_MmakeFile_5_127, &STATE_VARIABLE_MmakeFile_6_128);
  parse_tree__generate_mmakefile_fragments__generate_dep_file_collective_targets_4_p_0(ModuleName_10, ModuleMakeVarName_18, STATE_VARIABLE_MmakeFile_6_128, &STATE_VARIABLE_MmakeFile_7_129);
  parse_tree__generate_mmakefile_fragments__generate_dep_file_clean_targets_14_p_0(ModuleName_10, ModuleMakeVarName_18, ExeFileName_35, InitCFileName_25, InitObjFileName_29, InitPicObjFileName_33, InitFileName_21, StaticLibFileName_39, SharedLibFileName_43, JarFileName_45, DepFileName_63, DvFileName_64, STATE_VARIABLE_MmakeFile_7_129, STATE_VARIABLE_MmakeFile_65);
}

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_clean_targets_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = parse_tree__generate_mmakefile_fragments__remove_suffix_files_cmd_2_f_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_clean_targets_14_p_0(
  MR_Word ModuleName_15,
  MR_String ModuleMakeVarName_16,
  MR_String ExeFileName_17,
  MR_String InitCFileName_18,
  MR_String InitObjFileName_19,
  MR_String InitPicObjFileName_20,
  MR_String InitFileName_21,
  MR_String StaticLibFileName_22,
  MR_String SharedLibFileName_23,
  MR_String JarFileName_24,
  MR_String DepFileName_25,
  MR_String DvFileName_26,
  MR_Word STATE_VARIABLE_MmakeFile_0_37,
  MR_Word * STATE_VARIABLE_MmakeFile_38)
{
  MR_String ModuleNameStr_28;
  MR_String CleanTargetName_29;
  MR_String RealCleanTargetName_30;
  MR_Word CleanFiles_32;
  MR_Word MmakeRulesClean_33;
  MR_Word RealCleanFiles_35;
  MR_Word MmakeRulesRealClean_36;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_70;
  MR_Word Var_74;
  MR_Word Var_77;
  MR_Word Var_78;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_String Var_86;
  MR_String Var_129;
  MR_Word Var_131;
  MR_Word Var_132;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Word Var_135;
  MR_Word Var_136;
  MR_Word Var_138;
  MR_Word Var_142;
  MR_Word Var_145;
  MR_Word Var_146;
  MR_Word Var_151;
  MR_Word Var_152;
  MR_Word Var_154;
  MR_String Var_155;
  MR_Word Var_158;
  MR_String Var_166;
  MR_String Var_169;

  ModuleNameStr_28 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_15);
  CleanTargetName_29 = mercury__string__f_43_43_2_f_0(ModuleNameStr_28, (MR_String) ".clean");
  RealCleanTargetName_30 = mercury__string__f_43_43_2_f_0(ModuleNameStr_28, (MR_String) ".realclean");
  {
    Var_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_68, 0) = ((MR_Box) (InitPicObjFileName_20));
    MR_hl_field(1, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_67, 0) = ((MR_Box) (InitObjFileName_19));
    MR_hl_field(1, Var_67, 1) = ((MR_Box) (Var_68));
  }
  {
    CleanFiles_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, CleanFiles_32, 0) = ((MR_Box) (InitCFileName_18));
    MR_hl_field(1, CleanFiles_32, 1) = ((MR_Box) (Var_67));
  }
  {
    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_74, 0) = ((MR_Box) (CleanTargetName_29));
    MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_70, 1) = ((MR_Box) ((MR_String) "clean_local"));
    MR_hl_field(3, Var_70, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_70, 3) = ((MR_Box) ((MR_String) "clean_local"));
    MR_hl_field(3, Var_70, 4) = ((MR_Box) (Var_74));
    MR_hl_field(3, Var_70, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_84 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_84, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_5[3]));
    MR_hl_field(0, Var_84, 1) = ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dep_file_clean_targets_14_p_0_1));
    MR_hl_field(0, Var_84, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_84, 3) = ((MR_Box) (ModuleMakeVarName_16));
  }
  Var_83 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_84, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[156])));
  Var_166 = mercury__string__join_list_2_f_0((MR_String) " ", CleanFiles_32);
  Var_86 = mercury__string__f_43_43_2_f_0((MR_String) "-rm -f ", Var_166);
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_82 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_83, Var_85);
  {
    Var_78 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_78, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_78, 1) = ((MR_Box) ((MR_String) "clean_target"));
    MR_hl_field(3, Var_78, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, Var_78, 3) = ((MR_Box) (CleanTargetName_29));
    MR_hl_field(3, Var_78, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_78, 5) = ((MR_Box) (Var_82));
  }
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) (Var_78));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRulesClean_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MmakeRulesClean_33, 0) = ((MR_Box) (Var_70));
    MR_hl_field(1, MmakeRulesClean_33, 1) = ((MR_Box) (Var_77));
  }
  Var_129 = mercury__string__f_43_43_2_f_0(ExeFileName_17, (MR_String) "\044(EXT_FOR_EXE) ");
  {
    Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_136, 0) = ((MR_Box) (DvFileName_26));
    MR_hl_field(1, Var_136, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_135, 0) = ((MR_Box) (DepFileName_25));
    MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_136));
  }
  {
    Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_134, 0) = ((MR_Box) (JarFileName_24));
    MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_135));
  }
  {
    Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_133, 0) = ((MR_Box) (SharedLibFileName_23));
    MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_134));
  }
  {
    Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_132, 0) = ((MR_Box) (StaticLibFileName_22));
    MR_hl_field(1, Var_132, 1) = ((MR_Box) (Var_133));
  }
  {
    Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_131, 0) = ((MR_Box) (InitFileName_21));
    MR_hl_field(1, Var_131, 1) = ((MR_Box) (Var_132));
  }
  {
    RealCleanFiles_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, RealCleanFiles_35, 0) = ((MR_Box) (Var_129));
    MR_hl_field(1, RealCleanFiles_35, 1) = ((MR_Box) (Var_131));
  }
  {
    Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_142, 0) = ((MR_Box) (RealCleanTargetName_30));
    MR_hl_field(1, Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_138 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_138, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_138, 1) = ((MR_Box) ((MR_String) "realclean_local"));
    MR_hl_field(3, Var_138, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_138, 3) = ((MR_Box) ((MR_String) "realclean_local"));
    MR_hl_field(3, Var_138, 4) = ((MR_Box) (Var_142));
    MR_hl_field(3, Var_138, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_152 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_84, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[176])));
  Var_169 = mercury__string__join_list_2_f_0((MR_String) " ", RealCleanFiles_35);
  Var_155 = mercury__string__f_43_43_2_f_0((MR_String) "-rm -f ", Var_169);
  {
    Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_154, 0) = ((MR_Box) (Var_155));
    MR_hl_field(1, Var_154, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_151 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_152, Var_154);
  {
    Var_146 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_146, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_146, 1) = ((MR_Box) ((MR_String) "realclean_target"));
    MR_hl_field(3, Var_146, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, Var_146, 3) = ((MR_Box) (RealCleanTargetName_30));
    MR_hl_field(3, Var_146, 4) = ((MR_Box) (Var_74));
    MR_hl_field(3, Var_146, 5) = ((MR_Box) (Var_151));
  }
  {
    Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_145, 0) = ((MR_Box) (Var_146));
    MR_hl_field(1, Var_145, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRulesRealClean_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MmakeRulesRealClean_36, 0) = ((MR_Box) (Var_138));
    MR_hl_field(1, MmakeRulesRealClean_36, 1) = ((MR_Box) (Var_145));
  }
  Var_158 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), MmakeRulesClean_33, MmakeRulesRealClean_36);
  libs__mmakefiles__add_mmake_entries_3_p_0(Var_158, STATE_VARIABLE_MmakeFile_0_37, STATE_VARIABLE_MmakeFile_38);
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_collective_targets_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MmakeRule_9;

  parse_tree__generate_mmakefile_fragments__construct_dep_file_collective_target_rule_4_p_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Tuple) (wrapper_arg_1)), &conv0_MmakeRule_9);
  *wrapper_arg_2 = ((MR_Box) (conv0_MmakeRule_9));
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_collective_targets_4_p_0(
  MR_Word ModuleName_5,
  MR_String ModuleMakeVarName_6,
  MR_Word STATE_VARIABLE_MmakeFile_0_10,
  MR_Word * STATE_VARIABLE_MmakeFile_11)
{
  MR_String ModuleNameStr_8;
  MR_Word MmakeRules_9;
  MR_Word Var_12;

  ModuleNameStr_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_5);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_9[1]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dep_file_collective_targets_4_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) (ModuleNameStr_8));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (ModuleMakeVarName_6));
  }
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[0]), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), Var_12, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[143])), &MmakeRules_9);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRules_9, STATE_VARIABLE_MmakeFile_0_10, STATE_VARIABLE_MmakeFile_11);
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_proposed_9_p_0(
  MR_Word Globals_10,
  MR_Word DepsMap_11,
  MR_Word MainModuleName_12,
  MR_String ModuleMVN_13,
  MR_Word MmcMakeDeps_14,
  MR_Word Intermod_15,
  MR_Word TransOpt_16,
  MR_Word STATE_VARIABLE_MmakeFile_0_25,
  MR_Word * STATE_VARIABLE_MmakeFile_26)
{
  MR_String MainModuleNameStr_18;
  MR_String LibModuleNameStr_19;
  MR_String NgsPgsTarget_20;
  MR_Word MmakeRuleLibInstallNgsPgs_21;
  MR_String GsGasTarget_22;
  MR_Word MmakeRuleLibInstallGsGas_23;
  MR_Word MmakeRuleLibInstallAll_24;
  MR_Word STATE_VARIABLE_MmakeFile_1_28;
  MR_Word STATE_VARIABLE_MmakeFile_2_29;
  MR_String LibAllInstallTargetName_30;
  MR_String DependTarget_31;
  MR_Word ActionsSave_32;
  MR_Word ActionsGsGas_33;
  MR_Word Var_38;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word Var_44;
  MR_String Var_45;
  MR_String Var_47;
  MR_String Var_49;
  MR_Word Var_53;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_59;
  MR_String Var_60;
  MR_String Var_62;
  MR_Word Var_64;
  MR_Word Var_66;
  MR_String Var_67;
  MR_String Var_69;
  MR_Word Var_71;
  MR_Word Var_73;
  MR_Word Var_75;
  MR_Word Var_77;
  MR_Word Var_79;
  MR_String Var_80;
  MR_String Var_82;
  MR_Word Var_87;
  MR_Word Var_89;
  MR_Word Var_90;

  MainModuleNameStr_18 = mdbcomp__sym_name__sym_name_to_string_1_f_0(MainModuleName_12);
  LibModuleNameStr_19 = mercury__string__f_43_43_2_f_0((MR_String) "lib", MainModuleNameStr_18);
  parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_proposed_ngs_pgs_5_p_0(DepsMap_11, ModuleMVN_13, LibModuleNameStr_19, &NgsPgsTarget_20, &MmakeRuleLibInstallNgsPgs_21);
  parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_proposed_gs_gas_c_9_p_0(Globals_10, MainModuleName_12, LibModuleNameStr_19, ModuleMVN_13, MmcMakeDeps_14, Intermod_15, TransOpt_16, &GsGasTarget_22, &MmakeRuleLibInstallGsGas_23);
  LibAllInstallTargetName_30 = mercury__string__f_43_43_2_f_0(LibModuleNameStr_19, (MR_String) ".install_all_files");
  DependTarget_31 = mercury__string__f_43_43_2_f_0(MainModuleNameStr_18, (MR_String) ".depend");
  Var_49 = mercury__string__f_43_43_2_f_0(MainModuleNameStr_18, (MR_String) ".\044(e)))\" && \\");
  Var_47 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_49);
  Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "grade_files=\"\044(foreach e,\044(GRADE_SUBDIR_MVEXTS),", Var_47);
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[99])));
  }
  {
    Var_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_42, 0) = ((MR_Box) ((MR_String) "mkdir tmp_dir && \\"));
    MR_hl_field(1, Var_42, 1) = ((MR_Box) (Var_44));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) ((MR_String) "rm -rf tmp_dir && \\"));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_42));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) ((MR_String) "mkdir tmp_dir && \\"));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_40));
  }
  {
    ActionsSave_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ActionsSave_32, 0) = ((MR_Box) ((MR_String) "rm -rf tmp_dir && \\"));
    MR_hl_field(1, ActionsSave_32, 1) = ((MR_Box) (Var_38));
  }
  Var_62 = mercury__string__f_43_43_2_f_0(DependTarget_31, (MR_String) " || exit 1; \\");
  Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t\t", Var_62);
  Var_69 = mercury__string__f_43_43_2_f_0(GsGasTarget_22, (MR_String) " || \\");
  Var_67 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t\t", Var_69);
  Var_82 = mercury__string__f_43_43_2_f_0(LibModuleNameStr_19, (MR_String) ".install_gs_gas || \\");
  Var_80 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\t\t", Var_82);
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[111])));
  }
  {
    Var_77 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_77, 0) = ((MR_Box) ((MR_String) "\t\t\t\t--install-prefix \044(INSTALL_PREFIX) \\"));
    MR_hl_field(1, Var_77, 1) = ((MR_Box) (Var_79));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) ((MR_String) "\t\t\tmmc --make --grade=\044\044grade \\"));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_77));
  }
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) ((MR_String) "\t\telse \\"));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_75));
  }
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) ((MR_String) "\t\t\t\texit 1; \\"));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_73));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_71));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) ((MR_String) "\t\t\t\044(MMAKE) GRADE=\044\044grade \\"));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_66));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) (Var_64));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) ((MR_String) "\t\t\t\044(MMAKE) GRADE=\044\044grade \\"));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_59));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) ((MR_String) "\t\tif mmake_grade_test c \"\044\044grade\"; then \\"));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_57));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) ((MR_String) "\tif test \"\044\044grade\" != \"\044(GRADE)\"; then \\"));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_55));
  }
  {
    ActionsGsGas_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ActionsGsGas_33, 0) = ((MR_Box) ((MR_String) "for grade in \044(ALL_LIBGRADES); do \\"));
    MR_hl_field(1, ActionsGsGas_33, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (NgsPgsTarget_20));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ActionsGsGas_33, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[120])));
  Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ActionsSave_32, Var_90);
  {
    MmakeRuleLibInstallAll_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleLibInstallAll_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleLibInstallAll_24, 1) = ((MR_Box) ((MR_String) "install__all_files"));
    MR_hl_field(3, MmakeRuleLibInstallAll_24, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, MmakeRuleLibInstallAll_24, 3) = ((MR_Box) (LibAllInstallTargetName_30));
    MR_hl_field(3, MmakeRuleLibInstallAll_24, 4) = ((MR_Box) (Var_87));
    MR_hl_field(3, MmakeRuleLibInstallAll_24, 5) = ((MR_Box) (Var_89));
  }
  libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleLibInstallAll_24, STATE_VARIABLE_MmakeFile_0_25, &STATE_VARIABLE_MmakeFile_1_28);
  libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleLibInstallNgsPgs_21, STATE_VARIABLE_MmakeFile_1_28, &STATE_VARIABLE_MmakeFile_2_29);
  libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleLibInstallGsGas_23, STATE_VARIABLE_MmakeFile_2_29, STATE_VARIABLE_MmakeFile_26);
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_proposed_gs_gas_c_9_p_0(
  MR_Word Globals_10,
  MR_Word MainModuleName_11,
  MR_String LibModuleNameStr_12,
  MR_String ModuleMVN_13,
  MR_Word MmcMakeDeps_14,
  MR_Word Intermod_15,
  MR_Word TransOpt_16,
  MR_String * LibGsGasInstallTargetName_17,
  MR_Word * MmakeRuleLibInstallGsGas_18)
{
  MR_String ModuleDepsMVN_19;
  MR_String PlainOptsMVN_20;
  MR_String TransOptsMVN_21;
  MR_String MihsMVN_22;
  MR_Word ActionsMDs0_23;
  MR_Word ActionsPlainOpts0_24;
  MR_Word ActionsTransOpts0_25;
  MR_Word ActionsMihs_26;
  MR_String Init_31;
  MR_String A_33;
  MR_String So_35;
  MR_Word ActionsInits_36;
  MR_Word ActionsAsSos_37;
  MR_Word MaybeModuleDepsMVN_38;
  MR_Word ActionsMDs_39;
  MR_Word MaybePlainOptsMVN_40;
  MR_Word ActionsPlainOpts_41;
  MR_Word MaybeTransOptsMVN_42;
  MR_Word ActionsTransOpts_43;
  MR_Word GsGasInstallActions_44;
  MR_String Var_78;
  MR_String Var_79;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_87;
  MR_Word Var_88;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_95;
  MR_Word Var_96;
  MR_Word Var_97;
  MR_String Var_101;
  MR_String Var_104;
  MR_String Var_107;
  MR_String Var_110;
  MR_String Var_30;
  MR_String Var_32;
  MR_String Var_34;

  *LibGsGasInstallTargetName_17 = mercury__string__f_43_43_2_f_0(LibModuleNameStr_12, (MR_String) ".install_gs_gas_files_c");
  Var_101 = mercury__string__f_43_43_2_f_0(ModuleMVN_13, (MR_String) ".module_deps)");
  ModuleDepsMVN_19 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_101);
  Var_104 = mercury__string__f_43_43_2_f_0(ModuleMVN_13, (MR_String) ".opts)");
  PlainOptsMVN_20 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_104);
  Var_107 = mercury__string__f_43_43_2_f_0(ModuleMVN_13, (MR_String) ".trans_opts)");
  TransOptsMVN_21 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_107);
  Var_110 = mercury__string__f_43_43_2_f_0(ModuleMVN_13, (MR_String) ".mihs)");
  MihsMVN_22 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_110);
  ActionsMDs0_23 = parse_tree__generate_mmakefile_fragments__proposed_gs_action_lines_2_f_0(ModuleDepsMVN_19, (MR_String) "module_deps");
  ActionsPlainOpts0_24 = parse_tree__generate_mmakefile_fragments__proposed_gs_action_lines_2_f_0(PlainOptsMVN_20, (MR_String) "opts");
  ActionsTransOpts0_25 = parse_tree__generate_mmakefile_fragments__proposed_gs_action_lines_2_f_0(TransOptsMVN_21, (MR_String) "trans_opts");
  ActionsMihs_26 = parse_tree__generate_mmakefile_fragments__proposed_cond_gs_action_lines_3_f_0((MR_String) "hlc", MihsMVN_22, (MR_String) "mihs");
  parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_10, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_file_install_targets_proposed_gs_gas_c\'/9", (MR_Word) (MR_mkword(2, &parse_tree__generate_mmakefile_fragments_scalar_common_4[0])), MainModuleName_11, &Var_30, &Init_31);
  parse_tree__file_names__module_name_to_lib_file_name_7_p_0(Globals_10, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_file_install_targets_proposed_gs_gas_c\'/9", (MR_String) "lib", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[15])), MainModuleName_11, &Var_32, &A_33);
  parse_tree__file_names__module_name_to_lib_file_name_7_p_0(Globals_10, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_file_install_targets_proposed_gs_gas_c\'/9", (MR_String) "lib", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[16])), MainModuleName_11, &Var_34, &So_35);
  ActionsInits_36 = parse_tree__generate_mmakefile_fragments__proposed_cond_gs_action_lines_3_f_0((MR_String) "hlc", Init_31, (MR_String) "inits");
  Var_79 = mercury__string__f_43_43_2_f_0((MR_String) " ", So_35);
  Var_78 = mercury__string__f_43_43_2_f_0(A_33, Var_79);
  ActionsAsSos_37 = parse_tree__generate_mmakefile_fragments__proposed_cond_gas_action_lines_3_f_0((MR_String) "c", Var_78, (MR_String) "lib");
  switch (MmcMakeDeps_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MaybeModuleDepsMVN_38 = (MR_Word) ((MR_Unsigned) 0U);
        ActionsMDs_39 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        {
          MaybeModuleDepsMVN_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeModuleDepsMVN_38, 0) = ((MR_Box) (ModuleDepsMVN_19));
          MR_hl_field(1, MaybeModuleDepsMVN_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ActionsMDs_39 = ActionsMDs0_23;
      }
      break;
  }
  switch (Intermod_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MaybePlainOptsMVN_40 = (MR_Word) ((MR_Unsigned) 0U);
        ActionsPlainOpts_41 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        {
          MaybePlainOptsMVN_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybePlainOptsMVN_40, 0) = ((MR_Box) (PlainOptsMVN_20));
          MR_hl_field(1, MaybePlainOptsMVN_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ActionsPlainOpts_41 = ActionsPlainOpts0_24;
      }
      break;
  }
  switch (TransOpt_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MaybeTransOptsMVN_42 = (MR_Word) ((MR_Unsigned) 0U);
        ActionsTransOpts_43 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        {
          MaybeTransOptsMVN_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeTransOptsMVN_42, 0) = ((MR_Box) (TransOptsMVN_21));
          MR_hl_field(1, MaybeTransOptsMVN_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        ActionsTransOpts_43 = ActionsTransOpts0_25;
      }
      break;
  }
  Var_88 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ActionsInits_36, ActionsAsSos_37);
  Var_87 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ActionsMihs_26, Var_88);
  Var_86 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ActionsTransOpts_43, Var_87);
  Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ActionsPlainOpts_41, Var_86);
  GsGasInstallActions_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ActionsMDs_39, Var_85);
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) (So_35));
    MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_96 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_96, 0) = ((MR_Box) (A_33));
    MR_hl_field(1, Var_96, 1) = ((MR_Box) (Var_97));
  }
  {
    Var_95 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_95, 0) = ((MR_Box) (Init_31));
    MR_hl_field(1, Var_95, 1) = ((MR_Box) (Var_96));
  }
  {
    Var_94 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_94, 0) = ((MR_Box) (MihsMVN_22));
    MR_hl_field(1, Var_94, 1) = ((MR_Box) (Var_95));
  }
  Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTransOptsMVN_42, Var_94);
  Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybePlainOptsMVN_40, Var_93);
  Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeModuleDepsMVN_38, Var_92);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRuleLibInstallGsGas_18 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = ((MR_Box) ((MR_String) "install_gs_gas_files"));
    MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, base, 3) = ((MR_Box) (*LibGsGasInstallTargetName_17));
    MR_hl_field(3, base, 4) = ((MR_Box) (Var_91));
    MR_hl_field(3, base, 5) = ((MR_Box) (GsGasInstallActions_44));
  }
}

static MR_Word MR_CALL 
parse_tree__generate_mmakefile_fragments__proposed_cond_gas_action_lines_3_f_0(
  MR_String CondName_5,
  MR_String MmakeVarName_6,
  MR_String ExtDir_7)
{
  MR_Word HeadVar__4_4;
  MR_String Var_8;
  MR_String StartLine_10;
  MR_Word MidLines_11;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_String Var_28;
  MR_String Line1_30;
  MR_String Line2_31;
  MR_Word Var_48;
  MR_String Var_51;
  MR_String Var_53;
  MR_String Var_54;
  MR_String Var_56;
  MR_String Var_57;
  MR_String Var_59;

  Var_8 = mercury__string__f_43_43_2_f_0(ExtDir_7, (MR_String) "/\044(GRADESTRING)/\044(FULLARCH)");
  Var_28 = mercury__string__f_43_43_2_f_0(CondName_5, (MR_String) " \044(GRADE); then \\");
  StartLine_10 = mercury__string__f_43_43_2_f_0((MR_String) "if mmake_grade_test ", Var_28);
  Var_51 = mercury__string__f_43_43_2_f_0(Var_8, (MR_String) " && \\");
  Var_53 = mercury__string__f_43_43_2_f_0((MR_String) "\044(INSTALL_MKDIR) \044(INSTALL_PREFIX)/MercurySystem/", Var_51);
  Line1_30 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_53);
  Var_54 = mercury__string__f_43_43_2_f_0(Var_8, (MR_String) " ; \\");
  Var_56 = mercury__string__f_43_43_2_f_0((MR_String) " \044(INSTALL_PREFIX)/MercurySystem/", Var_54);
  Var_57 = mercury__string__f_43_43_2_f_0(MmakeVarName_6, Var_56);
  Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "\044(INSTALL) ", Var_57);
  Line2_31 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_59);
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Line2_31));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MidLines_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MidLines_11, 0) = ((MR_Box) (Line1_30));
    MR_hl_field(1, MidLines_11, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (StartLine_10));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MidLines_11, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[121])));
  HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_21, Var_23);
  return HeadVar__4_4;
}

static MR_Word MR_CALL 
parse_tree__generate_mmakefile_fragments__proposed_cond_gs_action_lines_3_f_0(
  MR_String CondName_5,
  MR_String MmakeVarName_6,
  MR_String ExtDir_7)
{
  MR_Word HeadVar__4_4;
  MR_String Var_8;
  MR_String StartLine_10;
  MR_Word MidLines_11;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_String Var_28;
  MR_String Line1_30;
  MR_String Line2_31;
  MR_Word Var_48;
  MR_String Var_51;
  MR_String Var_53;
  MR_String Var_54;
  MR_String Var_56;
  MR_String Var_57;
  MR_String Var_59;

  Var_8 = mercury__string__f_43_43_2_f_0(ExtDir_7, (MR_String) "/\044(GRADESTRING)");
  Var_28 = mercury__string__f_43_43_2_f_0(CondName_5, (MR_String) " \044(GRADE); then \\");
  StartLine_10 = mercury__string__f_43_43_2_f_0((MR_String) "if mmake_grade_test ", Var_28);
  Var_51 = mercury__string__f_43_43_2_f_0(Var_8, (MR_String) " && \\");
  Var_53 = mercury__string__f_43_43_2_f_0((MR_String) "\044(INSTALL_MKDIR) \044(INSTALL_PREFIX)/MercurySystem/", Var_51);
  Line1_30 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_53);
  Var_54 = mercury__string__f_43_43_2_f_0(Var_8, (MR_String) " ; \\");
  Var_56 = mercury__string__f_43_43_2_f_0((MR_String) " \044(INSTALL_PREFIX)/MercurySystem/", Var_54);
  Var_57 = mercury__string__f_43_43_2_f_0(MmakeVarName_6, Var_56);
  Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "\044(INSTALL) ", Var_57);
  Line2_31 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_59);
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Line2_31));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MidLines_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MidLines_11, 0) = ((MR_Box) (Line1_30));
    MR_hl_field(1, MidLines_11, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (StartLine_10));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MidLines_11, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[121])));
  HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_21, Var_23);
  return HeadVar__4_4;
}

static MR_Word MR_CALL 
parse_tree__generate_mmakefile_fragments__proposed_gs_action_lines_2_f_0(
  MR_String MmakeVarName_4,
  MR_String ExtDir_5)
{
  MR_Word HeadVar__3_3;
  MR_String Var_6;
  MR_String Line1_10;
  MR_String Line2_11;
  MR_Word Var_28;
  MR_String Var_31;
  MR_String Var_33;
  MR_String Var_34;
  MR_String Var_36;
  MR_String Var_37;
  MR_String Var_39;

  Var_6 = mercury__string__f_43_43_2_f_0(ExtDir_5, (MR_String) "/\044(GRADESTRING)");
  Var_31 = mercury__string__f_43_43_2_f_0(Var_6, (MR_String) " && \\");
  Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "\044(INSTALL_MKDIR) \044(INSTALL_PREFIX)/MercurySystem/", Var_31);
  Line1_10 = mercury__string__f_43_43_2_f_0((MR_String) "", Var_33);
  Var_34 = mercury__string__f_43_43_2_f_0(Var_6, (MR_String) "");
  Var_36 = mercury__string__f_43_43_2_f_0((MR_String) " \044(INSTALL_PREFIX)/MercurySystem/", Var_34);
  Var_37 = mercury__string__f_43_43_2_f_0(MmakeVarName_4, Var_36);
  Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "\044(INSTALL) ", Var_37);
  Line2_11 = mercury__string__f_43_43_2_f_0((MR_String) "", Var_39);
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (Line2_11));
    MR_hl_field(1, Var_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Line1_10));
    MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Var_28));
  }
  return HeadVar__3_3;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_proposed_ngs_pgs_5_p_0(
  MR_Word DepsMap_6,
  MR_String ModuleMVN_7,
  MR_String LibModuleNameStr_8,
  MR_String * LibNgsPgsInstallTargetName_9,
  MR_Word * MmakeRuleLibInstallNgsPgs_10)
{
  MR_bool succeeded;
  MR_String Int0sMVN_11;
  MR_String Int12sMVN_12;
  MR_String Int3sMVN_13;
  MR_String MhsMVN_14;
  MR_Word MaybeInt0sMVN_15;
  MR_Word ActionsInt0_16;
  MR_Word ActionsInt12_17;
  MR_Word ActionsInt3_18;
  MR_Word ActionsMh_19;
  MR_Word NgsPgsInstallActions_20;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_String Var_54;
  MR_String Var_57;
  MR_String Var_60;
  MR_String Var_63;

  *LibNgsPgsInstallTargetName_9 = mercury__string__f_43_43_2_f_0(LibModuleNameStr_8, (MR_String) ".install_ngs_pgs_files");
  Var_54 = mercury__string__f_43_43_2_f_0(ModuleMVN_7, (MR_String) ".int0s)");
  Int0sMVN_11 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_54);
  Var_57 = mercury__string__f_43_43_2_f_0(ModuleMVN_7, (MR_String) ".ints)");
  Int12sMVN_12 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_57);
  Var_60 = mercury__string__f_43_43_2_f_0(ModuleMVN_7, (MR_String) ".int3s)");
  Int3sMVN_13 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_60);
  Var_63 = mercury__string__f_43_43_2_f_0(ModuleMVN_7, (MR_String) ".mhs)");
  MhsMVN_14 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_63);
  succeeded = parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0(DepsMap_6);
  if (succeeded)
  {
    MR_String Line2_68;
    MR_Word Var_85;
    MR_String Var_94;
    MR_String Var_96;

    {
      MaybeInt0sMVN_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeInt0sMVN_15, 0) = ((MR_Box) (Int0sMVN_11));
      MR_hl_field(1, MaybeInt0sMVN_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_94 = mercury__string__f_43_43_2_f_0(Int0sMVN_11, (MR_String) " \044(INSTALL_PREFIX)/MercurySystem/int0s");
    Var_96 = mercury__string__f_43_43_2_f_0((MR_String) "\044(INSTALL) ", Var_94);
    Line2_68 = mercury__string__f_43_43_2_f_0((MR_String) "", Var_96);
    {
      Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_85, 0) = ((MR_Box) (Line2_68));
      MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      ActionsInt0_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, ActionsInt0_16, 0) = ((MR_Box) ((MR_String) "\044(INSTALL_MKDIR) \044(INSTALL_PREFIX)/MercurySystem/int0s && \\"));
      MR_hl_field(1, ActionsInt0_16, 1) = ((MR_Box) (Var_85));
    }
  }
  else
  {
    MaybeInt0sMVN_15 = (MR_Word) ((MR_Unsigned) 0U);
    ActionsInt0_16 = (MR_Word) ((MR_Unsigned) 0U);
  }
  ActionsInt12_17 = parse_tree__generate_mmakefile_fragments__proposed_action_lines_2_f_0(Int12sMVN_12, (MR_String) "ints");
  ActionsInt3_18 = parse_tree__generate_mmakefile_fragments__proposed_action_lines_2_f_0(Int3sMVN_13, (MR_String) "int3s");
  ActionsMh_19 = parse_tree__generate_mmakefile_fragments__proposed_action_lines_2_f_0(MhsMVN_14, (MR_String) "mhs");
  Var_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ActionsInt3_18, ActionsMh_19);
  Var_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ActionsInt12_17, Var_44);
  NgsPgsInstallActions_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ActionsInt0_16, Var_43);
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (MhsMVN_14));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Int3sMVN_13));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_50));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (Int12sMVN_12));
    MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
  }
  Var_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeInt0sMVN_15, Var_48);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRuleLibInstallNgsPgs_10 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, base, 1) = ((MR_Box) ((MR_String) "install_ngs_pgs_files"));
    MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, base, 3) = ((MR_Box) (*LibNgsPgsInstallTargetName_9));
    MR_hl_field(3, base, 4) = ((MR_Box) (Var_47));
    MR_hl_field(3, base, 5) = ((MR_Box) (NgsPgsInstallActions_20));
  }
}

static MR_Word MR_CALL 
parse_tree__generate_mmakefile_fragments__proposed_action_lines_2_f_0(
  MR_String MmakeVarName_4,
  MR_String ExtDir_5)
{
  MR_Word HeadVar__3_3;
  MR_String Line1_8;
  MR_String Line2_9;
  MR_Word Var_26;
  MR_String Var_29;
  MR_String Var_31;
  MR_String Var_32;
  MR_String Var_34;
  MR_String Var_35;
  MR_String Var_37;

  Var_29 = mercury__string__f_43_43_2_f_0(ExtDir_5, (MR_String) " && \\");
  Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "\044(INSTALL_MKDIR) \044(INSTALL_PREFIX)/MercurySystem/", Var_29);
  Line1_8 = mercury__string__f_43_43_2_f_0((MR_String) "", Var_31);
  Var_32 = mercury__string__f_43_43_2_f_0(ExtDir_5, (MR_String) "");
  Var_34 = mercury__string__f_43_43_2_f_0((MR_String) " \044(INSTALL_PREFIX)/MercurySystem/", Var_32);
  Var_35 = mercury__string__f_43_43_2_f_0(MmakeVarName_4, Var_34);
  Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "\044(INSTALL) ", Var_35);
  Line2_9 = mercury__string__f_43_43_2_f_0((MR_String) "", Var_37);
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Line2_9));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Line1_8));
    MR_hl_field(1, HeadVar__3_3, 1) = ((MR_Box) (Var_26));
  }
  return HeadVar__3_3;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_1(
  void * env_ptr_arg)
{
  struct parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0_s * env_ptr = (struct parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_3(
  void * env_ptr_arg)
{
  struct parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0_s * env_ptr = (struct parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__Var_4 = ((MR_Word) ((env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__conv1_Var_4));
  (env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__Var_8 = ((MR_Word) ((env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__conv0_Var_8));
  parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_2(env_ptr);
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_2(
  void * env_ptr_arg)
{
  struct parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0_s * env_ptr = (struct parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_5;
    MR_Word Var_10;
    MR_Word Var_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
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

    (env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__BurdenedModule_9 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__Var_8, 1))));
    (env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__ParseTreeModuleSrc_6 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__BurdenedModule_9, 1))));
    (env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__IncludeMap_7 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__ParseTreeModuleSrc_6, 2))));
    (env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__succeeded = mercury__map__is_empty_1_p_0((env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__TypeCtorInfo_48_48, (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__IncludeMap_7);
    (env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__succeeded = !((env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__succeeded);
    if ((env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__succeeded)
      parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_1(env_ptr);
  }
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_4(
  void * env_ptr_arg)
{
  struct parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0_s * env_ptr = (struct parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__commit_0) == 0)
    {
      {
        (env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__TypeCtorInfo_48_48 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
        mercury__map__member_3_p_0((env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__TypeCtorInfo_48_48, (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), (env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__DepsMap_2, &(env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__conv1_Var_4, &(env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__conv0_Var_8, parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_3, env_ptr);
      }
      (env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__succeeded = MR_TRUE;
}

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0(
  MR_Word DepsMap_2)
{
  struct parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0_s env;

  (env).parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__DepsMap_2 = DepsMap_2;
  parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_4(&env);
  return (env).parse_tree__generate_mmakefile_fragments__some_module_in_deps_map_has_a_submodule_1_p_0_env_0__succeeded;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_1(
  void * env_ptr_arg)
{
  struct parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0_s * env_ptr = (struct parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_3(
  void * env_ptr_arg)
{
  struct parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0_s * env_ptr = (struct parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__Var_38 = ((MR_Word) ((env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__conv1_Var_38));
  (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__Var_82 = ((MR_Word) ((env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__conv0_Var_82));
  parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_2(env_ptr);
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_2(
  void * env_ptr_arg)
{
  struct parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0_s * env_ptr = (struct parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_39;
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
    MR_Word Var_398;
    MR_Word Var_399;
    MR_Word Var_400;
    MR_Word Var_401;

    (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__BurdenedModule_363 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__Var_82, 1))));
    (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__ParseTreeModuleSrc_40 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__BurdenedModule_363, 1))));
    (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__IncludeMap_41 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__ParseTreeModuleSrc_40, 2))));
    (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__succeeded = mercury__map__is_empty_1_p_0((env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__TypeCtorInfo_402_402, (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__IncludeMap_41);
    (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__succeeded = !((env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__succeeded);
    if ((env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__succeeded)
      parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_1(env_ptr);
  }
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_4(
  void * env_ptr_arg)
{
  struct parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0_s * env_ptr = (struct parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__commit_0) == 0)
    {
      {
        (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__TypeCtorInfo_402_402 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
        mercury__map__member_3_p_0((env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__TypeCtorInfo_402_402, (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__DepsMap_13, &(env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__conv1_Var_38, &(env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__conv0_Var_82, parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_3, env_ptr);
      }
      (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0(
  MR_Word ModuleName_12,
  MR_Word DepsMap_13,
  MR_String ModuleMakeVarName_14,
  MR_Word MmcMakeDeps_15,
  MR_Word Intermod_16,
  MR_Word TransOpt_17,
  MR_Word MaybeModuleDepsVarPair_18,
  MR_Word MaybeOptsVarPair_19,
  MR_Word MaybeTransOptsVarPair_20,
  MR_Word STATE_VARIABLE_MmakeFile_0_69,
  MR_Word * STATE_VARIABLE_MmakeFile_70)
{
  struct parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0_s env;

  (env).parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__DepsMap_13 = DepsMap_13;
  {
    MR_Word MaybeOptsVar_22 = ((MR_Word) ((MR_hl_field(0, MaybeOptsVarPair_19, 0))));
    MR_String MaybeOptsVarSpace_23 = ((MR_String) ((MR_hl_field(0, MaybeOptsVarPair_19, 1))));
    MR_Word MaybeTransOptsVar_24 = ((MR_Word) ((MR_hl_field(0, MaybeTransOptsVarPair_20, 0))));
    MR_String MaybeTransOptsVarSpace_25 = ((MR_String) ((MR_hl_field(0, MaybeTransOptsVarPair_20, 1))));
    MR_Word MaybeModuleDepsVar_26 = ((MR_Word) ((MR_hl_field(0, MaybeModuleDepsVarPair_18, 0))));
    MR_String MaybeModuleDepsVarSpace_27 = ((MR_String) ((MR_hl_field(0, MaybeModuleDepsVarPair_18, 1))));
    MR_String ModuleNameStr_28;
    MR_String LibModuleNameStr_29;
    MR_String LibInstallIntsTargetName_30;
    MR_String LibInstallOptsTargetName_31;
    MR_String LibInstallHdrsTargetName_32;
    MR_String LibInstallGradeHdrsTargetName_33;
    MR_String ModuleMakeVarNameInts_34;
    MR_String ModuleMakeVarNameInt3s_35;
    MR_String MaybeSpaceOptStr_36;
    MR_String SpaceInt0Str_42;
    MR_String MaybeModuleVarNameInt0sSpace_44;
    MR_Word MaybeModuleVarNameInt0s_45;
    MR_String MaybeSpaceTransOptStr_46;
    MR_String MaybeSpaceDepStr_47;
    MR_String LibInstallIntsFiles_48;
    MR_Word LibInstallIntsFilesActions_50;
    MR_Word MmakeRuleLibInstallInts_51;
    MR_Word LibInstallOptsSources_52;
    MR_Word LibInstallOptsActions_53;
    MR_Word MmakeRuleLibInstallOpts_56;
    MR_String ModuleMakeVarNameMhs_57;
    MR_Word MmakeRuleLibInstallHdrsNoMhs_58;
    MR_Word LibInstallHdrsMhsActions_60;
    MR_Word MmakeRuleLibInstallHdrsMhs_61;
    MR_Word MmakeFragmentLibInstallHdrsMaybeMhs_62;
    MR_String ModuleMakeVarNameMihs_63;
    MR_Word MmakeRuleLibInstallGradeHdrsNoMihs_64;
    MR_Word LibInstallGradeHdrsMihsActions_66;
    MR_Word MmakeRuleLibInstallGradeHdrsMihs_67;
    MR_Word MmakeFragmentLibInstallGradeHdrsMaybeMihs_68;
    MR_String Var_77;
    MR_String Var_80;
    MR_String Var_89;
    MR_String Var_90;
    MR_String Var_92;
    MR_String Var_93;
    MR_String Var_95;
    MR_String Var_96;
    MR_String Var_97;
    MR_String Var_98;
    MR_String Var_100;
    MR_String Var_102;
    MR_Word Var_104;
    MR_Word Var_106;
    MR_Word Var_108;
    MR_Word Var_110;
    MR_Word Var_112;
    MR_Word Var_114;
    MR_Word Var_116;
    MR_Word Var_118;
    MR_Word Var_120;
    MR_Word Var_122;
    MR_Word Var_124;
    MR_Word Var_126;
    MR_Word Var_128;
    MR_String Var_129;
    MR_String Var_131;
    MR_String Var_132;
    MR_String Var_133;
    MR_String Var_134;
    MR_Word Var_155;
    MR_Word Var_156;
    MR_Word Var_157;
    MR_Word Var_159;
    MR_Word Var_160;
    MR_Word Var_161;
    MR_Word Var_162;
    MR_Word Var_237;
    MR_Word Var_241;
    MR_String Var_242;
    MR_String Var_244;
    MR_String Var_246;
    MR_Word Var_285;
    MR_Word Var_293;
    MR_Word Var_297;
    MR_String Var_298;
    MR_String Var_300;
    MR_String Var_302;
    MR_Word Var_357;
    MR_Word STATE_VARIABLE_MmakeFile_1_359;
    MR_Word STATE_VARIABLE_MmakeFile_2_360;
    MR_Word STATE_VARIABLE_MmakeFile_3_361;
    MR_String Var_407;
    MR_String Var_410;

    ModuleNameStr_28 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_12);
    LibModuleNameStr_29 = mercury__string__f_43_43_2_f_0((MR_String) "lib", ModuleNameStr_28);
    LibInstallIntsTargetName_30 = mercury__string__f_43_43_2_f_0(LibModuleNameStr_29, (MR_String) ".install_ints");
    LibInstallOptsTargetName_31 = mercury__string__f_43_43_2_f_0(LibModuleNameStr_29, (MR_String) ".install_opts");
    LibInstallHdrsTargetName_32 = mercury__string__f_43_43_2_f_0(LibModuleNameStr_29, (MR_String) ".install_hdrs");
    LibInstallGradeHdrsTargetName_33 = mercury__string__f_43_43_2_f_0(LibModuleNameStr_29, (MR_String) ".install_grade_hdrs");
    Var_77 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_14, (MR_String) ".ints)");
    ModuleMakeVarNameInts_34 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_77);
    Var_80 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_14, (MR_String) ".int3s)");
    ModuleMakeVarNameInt3s_35 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_80);
    switch (Intermod_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeSpaceOptStr_36 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        MaybeSpaceOptStr_36 = (MR_String) " opt";
        break;
    }
    parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_4(&env);
    if ((env).parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__succeeded)
    {
      MR_String ModuleVarNameInt0s_43;
      MR_String Var_84;

      SpaceInt0Str_42 = (MR_String) " int0";
      Var_84 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_14, (MR_String) ".int0s)");
      ModuleVarNameInt0s_43 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_84);
      MaybeModuleVarNameInt0sSpace_44 = mercury__string__f_43_43_2_f_0(ModuleVarNameInt0s_43, (MR_String) " ");
      {
        MaybeModuleVarNameInt0s_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeModuleVarNameInt0s_45, 0) = ((MR_Box) (ModuleVarNameInt0s_43));
        MR_hl_field(1, MaybeModuleVarNameInt0s_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      SpaceInt0Str_42 = (MR_String) "";
      MaybeModuleVarNameInt0sSpace_44 = (MR_String) "";
      MaybeModuleVarNameInt0s_45 = (MR_Word) ((MR_Unsigned) 0U);
    }
    switch (TransOpt_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeSpaceTransOptStr_46 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        MaybeSpaceTransOptStr_46 = (MR_String) " trans_opt";
        break;
    }
    switch (MmcMakeDeps_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeSpaceDepStr_47 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        MaybeSpaceDepStr_47 = (MR_String) " module_dep";
        break;
    }
    Var_98 = mercury__string__f_43_43_2_f_0(MaybeModuleDepsVarSpace_27, (MR_String) "\"");
    Var_97 = mercury__string__f_43_43_2_f_0(MaybeTransOptsVarSpace_25, Var_98);
    Var_96 = mercury__string__f_43_43_2_f_0(MaybeOptsVarSpace_23, Var_97);
    Var_95 = mercury__string__f_43_43_2_f_0(MaybeModuleVarNameInt0sSpace_44, Var_96);
    Var_93 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_95);
    Var_92 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInt3s_35, Var_93);
    Var_90 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_92);
    Var_89 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInts_34, Var_90);
    LibInstallIntsFiles_48 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_89);
    Var_102 = mercury__string__f_43_43_2_f_0(LibInstallIntsFiles_48, (MR_String) "; \\");
    Var_100 = mercury__string__f_43_43_2_f_0((MR_String) "files=", Var_102);
    Var_134 = mercury__string__f_43_43_2_f_0(MaybeSpaceDepStr_47, (MR_String) "; do \\");
    Var_133 = mercury__string__f_43_43_2_f_0(MaybeSpaceTransOptStr_46, Var_134);
    Var_132 = mercury__string__f_43_43_2_f_0(MaybeSpaceOptStr_36, Var_133);
    Var_131 = mercury__string__f_43_43_2_f_0(SpaceInt0Str_42, Var_132);
    Var_129 = mercury__string__f_43_43_2_f_0((MR_String) "for ext in int int2 int3", Var_131);
    {
      Var_128 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_128, 0) = ((MR_Box) (Var_129));
      MR_hl_field(1, Var_128, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[44])));
    }
    {
      Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_126, 0) = ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'."));
      MR_hl_field(1, Var_126, 1) = ((MR_Box) (Var_128));
    }
    {
      Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_124, 0) = ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use"));
      MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_126));
    }
    {
      Var_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_122, 0) = ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option."));
      MR_hl_field(1, Var_122, 1) = ((MR_Box) (Var_124));
    }
    {
      Var_120 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_120, 0) = ((MR_Box) ((MR_String) "done"));
      MR_hl_field(1, Var_120, 1) = ((MR_Box) (Var_122));
    }
    {
      Var_118 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_118, 0) = ((MR_Box) ((MR_String) "\tfi; \\"));
      MR_hl_field(1, Var_118, 1) = ((MR_Box) (Var_120));
    }
    {
      Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_116, 0) = ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\"));
      MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_118));
    }
    {
      Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_114, 0) = ((MR_Box) ((MR_String) "\t\techo \"installing \044\044target\"; \\"));
      MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_116));
    }
    {
      Var_112 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_112, 0) = ((MR_Box) ((MR_String) "\telse \\"));
      MR_hl_field(1, Var_112, 1) = ((MR_Box) (Var_114));
    }
    {
      Var_110 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_110, 0) = ((MR_Box) ((MR_String) "\t\techo \"\044\044target unchanged\"; \\"));
      MR_hl_field(1, Var_110, 1) = ((MR_Box) (Var_112));
    }
    {
      Var_108 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_108, 0) = ((MR_Box) ((MR_String) "\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\"));
      MR_hl_field(1, Var_108, 1) = ((MR_Box) (Var_110));
    }
    {
      Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_106, 0) = ((MR_Box) ((MR_String) "\ttarget=\"\044(INSTALL_INT_DIR)/\140basename \044\044file\140\"; \\"));
      MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_108));
    }
    {
      Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_104, 0) = ((MR_Box) ((MR_String) "for file in \044\044files; do \\"));
      MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_106));
    }
    {
      LibInstallIntsFilesActions_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, LibInstallIntsFilesActions_50, 0) = ((MR_Box) (Var_100));
      MR_hl_field(1, LibInstallIntsFilesActions_50, 1) = ((MR_Box) (Var_104));
    }
    {
      Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_157, 0) = ((MR_Box) (ModuleMakeVarNameInt3s_35));
      MR_hl_field(1, Var_157, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_156, 0) = ((MR_Box) (ModuleMakeVarNameInts_34));
      MR_hl_field(1, Var_156, 1) = ((MR_Box) (Var_157));
    }
    Var_162 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeModuleDepsVar_26, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[45])));
    Var_161 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTransOptsVar_24, Var_162);
    Var_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeOptsVar_22, Var_161);
    Var_159 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeModuleVarNameInt0s_45, Var_160);
    Var_155 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_156, Var_159);
    {
      MmakeRuleLibInstallInts_51 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallInts_51, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallInts_51, 1) = ((MR_Box) ((MR_String) "lib_install_ints"));
      MR_hl_field(3, MmakeRuleLibInstallInts_51, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallInts_51, 3) = ((MR_Box) (LibInstallIntsTargetName_30));
      MR_hl_field(3, MmakeRuleLibInstallInts_51, 4) = ((MR_Box) (Var_155));
      MR_hl_field(3, MmakeRuleLibInstallInts_51, 5) = ((MR_Box) (LibInstallIntsFilesActions_50));
    }
    (env).parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__succeeded = (Intermod_16 == (MR_Integer) 0);
    if ((env).parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__succeeded)
      (env).parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__succeeded = (TransOpt_17 == (MR_Integer) 0);
    if ((env).parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_legacy_11_p_0_env_0__succeeded)
    {
      MR_String Var_166;

      LibInstallOptsSources_52 = (MR_Word) ((MR_Unsigned) 0U);
      Var_166 = libs__mmakefiles__silent_noop_action_0_f_0();
      {
        LibInstallOptsActions_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, LibInstallOptsActions_53, 0) = ((MR_Box) (Var_166));
        MR_hl_field(1, LibInstallOptsActions_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_String LibInstallOptsFiles_54;
      MR_Word Var_168;
      MR_String Var_173;
      MR_String Var_174;
      MR_String Var_176;
      MR_String Var_178;
      MR_Word Var_180;
      MR_Word Var_182;
      MR_Word Var_184;
      MR_Word Var_186;
      MR_Word Var_188;
      MR_Word Var_190;
      MR_Word Var_192;
      MR_Word Var_194;
      MR_Word Var_196;
      MR_Word Var_198;
      MR_Word Var_200;
      MR_Word Var_202;
      MR_Word Var_204;
      MR_String Var_205;
      MR_String Var_207;
      MR_String Var_208;

      Var_168 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTransOptsVar_24, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[46])));
      LibInstallOptsSources_52 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeOptsVar_22, Var_168);
      Var_174 = mercury__string__f_43_43_2_f_0(MaybeTransOptsVarSpace_25, (MR_String) "\"");
      Var_173 = mercury__string__f_43_43_2_f_0(MaybeOptsVarSpace_23, Var_174);
      LibInstallOptsFiles_54 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_173);
      Var_178 = mercury__string__f_43_43_2_f_0(LibInstallOptsFiles_54, (MR_String) "; \\");
      Var_176 = mercury__string__f_43_43_2_f_0((MR_String) "files=", Var_178);
      Var_208 = mercury__string__f_43_43_2_f_0(MaybeSpaceTransOptStr_46, (MR_String) "; do \\");
      Var_207 = mercury__string__f_43_43_2_f_0(MaybeSpaceOptStr_36, Var_208);
      Var_205 = mercury__string__f_43_43_2_f_0((MR_String) "for ext in ", Var_207);
      {
        Var_204 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_204, 0) = ((MR_Box) (Var_205));
        MR_hl_field(1, Var_204, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[53])));
      }
      {
        Var_202 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_202, 0) = ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'."));
        MR_hl_field(1, Var_202, 1) = ((MR_Box) (Var_204));
      }
      {
        Var_200 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_200, 0) = ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use"));
        MR_hl_field(1, Var_200, 1) = ((MR_Box) (Var_202));
      }
      {
        Var_198 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_198, 0) = ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option"));
        MR_hl_field(1, Var_198, 1) = ((MR_Box) (Var_200));
      }
      {
        Var_196 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_196, 0) = ((MR_Box) ((MR_String) "done"));
        MR_hl_field(1, Var_196, 1) = ((MR_Box) (Var_198));
      }
      {
        Var_194 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_194, 0) = ((MR_Box) ((MR_String) "\tfi; \\"));
        MR_hl_field(1, Var_194, 1) = ((MR_Box) (Var_196));
      }
      {
        Var_192 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_192, 0) = ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\"));
        MR_hl_field(1, Var_192, 1) = ((MR_Box) (Var_194));
      }
      {
        Var_190 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_190, 0) = ((MR_Box) ((MR_String) "\t\techo \"installing \044\044target\"; \\"));
        MR_hl_field(1, Var_190, 1) = ((MR_Box) (Var_192));
      }
      {
        Var_188 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_188, 0) = ((MR_Box) ((MR_String) "\telse \\"));
        MR_hl_field(1, Var_188, 1) = ((MR_Box) (Var_190));
      }
      {
        Var_186 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_186, 0) = ((MR_Box) ((MR_String) "\t\techo \"\044\044target unchanged\"; \\"));
        MR_hl_field(1, Var_186, 1) = ((MR_Box) (Var_188));
      }
      {
        Var_184 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_184, 0) = ((MR_Box) ((MR_String) "\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\"));
        MR_hl_field(1, Var_184, 1) = ((MR_Box) (Var_186));
      }
      {
        Var_182 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_182, 0) = ((MR_Box) ((MR_String) "\ttarget=\"\044(INSTALL_GRADE_INT_DIR)/\140basename \044\044file\140\";\\"));
        MR_hl_field(1, Var_182, 1) = ((MR_Box) (Var_184));
      }
      {
        Var_180 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_180, 0) = ((MR_Box) ((MR_String) "for file in \044\044files; do \\"));
        MR_hl_field(1, Var_180, 1) = ((MR_Box) (Var_182));
      }
      {
        LibInstallOptsActions_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, LibInstallOptsActions_53, 0) = ((MR_Box) (Var_176));
        MR_hl_field(1, LibInstallOptsActions_53, 1) = ((MR_Box) (Var_180));
      }
    }
    {
      MmakeRuleLibInstallOpts_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallOpts_56, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallOpts_56, 1) = ((MR_Box) ((MR_String) "lib_install_opts"));
      MR_hl_field(3, MmakeRuleLibInstallOpts_56, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallOpts_56, 3) = ((MR_Box) (LibInstallOptsTargetName_31));
      MR_hl_field(3, MmakeRuleLibInstallOpts_56, 4) = ((MR_Box) (LibInstallOptsSources_52));
      MR_hl_field(3, MmakeRuleLibInstallOpts_56, 5) = ((MR_Box) (LibInstallOptsActions_53));
    }
    Var_407 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_14, (MR_String) ".mhs)");
    ModuleMakeVarNameMhs_57 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_407);
    {
      Var_237 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_237, 0) = ((MR_Box) (ModuleMakeVarNameMhs_57));
      MR_hl_field(1, Var_237, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[45])));
    }
    Var_242 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_241 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_241, 0) = ((MR_Box) (Var_242));
      MR_hl_field(1, Var_241, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRuleLibInstallHdrsNoMhs_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_58, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_58, 1) = ((MR_Box) ((MR_String) "install_lib_hdrs_nomhs"));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_58, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_58, 3) = ((MR_Box) (LibInstallHdrsTargetName_32));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_58, 4) = ((MR_Box) (Var_237));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_58, 5) = ((MR_Box) (Var_241));
    }
    Var_246 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameMhs_57, (MR_String) "; do \\");
    Var_244 = mercury__string__f_43_43_2_f_0((MR_String) "for hdr in ", Var_246);
    {
      LibInstallHdrsMhsActions_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, LibInstallHdrsMhsActions_60, 0) = ((MR_Box) (Var_244));
      MR_hl_field(1, LibInstallHdrsMhsActions_60, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[68])));
    }
    {
      MmakeRuleLibInstallHdrsMhs_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_61, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_61, 1) = ((MR_Box) ((MR_String) "install_lib_hdrs_mhs"));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_61, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_61, 3) = ((MR_Box) (LibInstallHdrsTargetName_32));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_61, 4) = ((MR_Box) (Var_237));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_61, 5) = ((MR_Box) (LibInstallHdrsMhsActions_60));
    }
    {
      Var_285 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_285, 0) = ((MR_Box) (ModuleMakeVarNameMhs_57));
      MR_hl_field(1, Var_285, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      MmakeFragmentLibInstallHdrsMaybeMhs_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MmakeFragmentLibInstallHdrsMaybeMhs_62, 0) = ((MR_Box) (Var_285));
      MR_hl_field(1, MmakeFragmentLibInstallHdrsMaybeMhs_62, 1) = ((MR_Box) (MmakeRuleLibInstallHdrsNoMhs_58));
      MR_hl_field(1, MmakeFragmentLibInstallHdrsMaybeMhs_62, 2) = ((MR_Box) (MmakeRuleLibInstallHdrsMhs_61));
    }
    Var_410 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_14, (MR_String) ".mihs)");
    ModuleMakeVarNameMihs_63 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_410);
    {
      Var_293 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_293, 0) = ((MR_Box) (ModuleMakeVarNameMihs_63));
      MR_hl_field(1, Var_293, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[46])));
    }
    Var_298 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_297 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_297, 0) = ((MR_Box) (Var_298));
      MR_hl_field(1, Var_297, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRuleLibInstallGradeHdrsNoMihs_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_64, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_64, 1) = ((MR_Box) ((MR_String) "install_grade_hdrs_no_mihs"));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_64, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_64, 3) = ((MR_Box) (LibInstallGradeHdrsTargetName_33));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_64, 4) = ((MR_Box) (Var_293));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_64, 5) = ((MR_Box) (Var_297));
    }
    Var_302 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameMihs_63, (MR_String) "; do \\");
    Var_300 = mercury__string__f_43_43_2_f_0((MR_String) "for hdr in ", Var_302);
    {
      LibInstallGradeHdrsMihsActions_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, LibInstallGradeHdrsMihsActions_66, 0) = ((MR_Box) (Var_300));
      MR_hl_field(1, LibInstallGradeHdrsMihsActions_66, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[90])));
    }
    {
      MmakeRuleLibInstallGradeHdrsMihs_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_67, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_67, 1) = ((MR_Box) ((MR_String) "install_grade_hdrs_mihs"));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_67, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_67, 3) = ((MR_Box) (LibInstallGradeHdrsTargetName_33));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_67, 4) = ((MR_Box) (Var_293));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_67, 5) = ((MR_Box) (LibInstallGradeHdrsMihsActions_66));
    }
    {
      Var_357 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_357, 0) = ((MR_Box) (ModuleMakeVarNameMihs_63));
      MR_hl_field(1, Var_357, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      MmakeFragmentLibInstallGradeHdrsMaybeMihs_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MmakeFragmentLibInstallGradeHdrsMaybeMihs_68, 0) = ((MR_Box) (Var_357));
      MR_hl_field(1, MmakeFragmentLibInstallGradeHdrsMaybeMihs_68, 1) = ((MR_Box) (MmakeRuleLibInstallGradeHdrsNoMihs_64));
      MR_hl_field(1, MmakeFragmentLibInstallGradeHdrsMaybeMihs_68, 2) = ((MR_Box) (MmakeRuleLibInstallGradeHdrsMihs_67));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleLibInstallInts_51, STATE_VARIABLE_MmakeFile_0_69, &STATE_VARIABLE_MmakeFile_1_359);
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleLibInstallOpts_56, STATE_VARIABLE_MmakeFile_1_359, &STATE_VARIABLE_MmakeFile_2_360);
    libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibInstallHdrsMaybeMhs_62, STATE_VARIABLE_MmakeFile_2_360, &STATE_VARIABLE_MmakeFile_3_361);
    libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibInstallGradeHdrsMaybeMihs_68, STATE_VARIABLE_MmakeFile_3_361, STATE_VARIABLE_MmakeFile_70);
  }
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_init_targets_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_String ModuleMakeVarName_12,
  MR_String InitCFileName_13,
  MR_String InitFileName_14,
  MR_String * DepFileName_15,
  MR_String * DvFileName_16,
  MR_Word STATE_VARIABLE_MmakeFile_0_33,
  MR_Word * STATE_VARIABLE_MmakeFile_34)
{
  MR_String ModuleMakeVarNameCs_20;
  MR_String InitAction1_21;
  MR_String InitAction2_22;
  MR_String InitAction3_23;
  MR_Word MmakeRuleInitFile_24;
  MR_String ModuleFileName_25;
  MR_String ForceC2InitTarget_26;
  MR_Word MmakeRuleForceInitCFile_27;
  MR_String TmpInitCFileName_28;
  MR_String ModuleMakeVarNameInitCs_29;
  MR_Word InitCAction1_30;
  MR_String InitCAction2_31;
  MR_Word MmakeRuleInitCFile_32;
  MR_String Var_42;
  MR_String Var_46;
  MR_String Var_47;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_String Var_60;
  MR_String Var_68;
  MR_Word Var_70;
  MR_Word Var_72;
  MR_String Var_73;
  MR_Word Var_75;
  MR_String Var_76;
  MR_Word Var_82;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_88;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_String _DepFileNameProposed_18;
  MR_String _DvFileNameProposed_19;

  parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_10, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_file_init_targets\'/9", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[9])), ModuleName_11, DepFileName_15, &_DepFileNameProposed_18);
  parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_10, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_file_init_targets\'/9", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[10])), ModuleName_11, DvFileName_16, &_DvFileNameProposed_19);
  Var_42 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_12, (MR_String) ".all_cs)");
  ModuleMakeVarNameCs_20 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_42);
  InitAction1_21 = mercury__string__f_43_43_2_f_0((MR_String) "echo > ", InitFileName_14);
  Var_47 = mercury__string__f_43_43_2_f_0((MR_String) " >> ", InitFileName_14);
  Var_46 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameCs_20, Var_47);
  InitAction2_22 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MKLIBINIT) ", Var_46);
  InitAction3_23 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXTRA_INIT_COMMAND) >> ", InitFileName_14);
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (ModuleMakeVarNameCs_20));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (*DepFileName_15));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (InitAction3_23));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (InitAction2_22));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_57));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (InitAction1_21));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_56));
  }
  {
    MmakeRuleInitFile_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleInitFile_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleInitFile_24, 1) = ((MR_Box) ((MR_String) "init_file"));
    MR_hl_field(3, MmakeRuleInitFile_24, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleInitFile_24, 3) = ((MR_Box) (InitFileName_14));
    MR_hl_field(3, MmakeRuleInitFile_24, 4) = ((MR_Box) (Var_52));
    MR_hl_field(3, MmakeRuleInitFile_24, 5) = ((MR_Box) (Var_55));
  }
  ModuleFileName_25 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_11);
  Var_60 = mercury__string__f_43_43_2_f_0(ModuleFileName_25, (MR_String) "_init");
  ForceC2InitTarget_26 = mercury__string__f_43_43_2_f_0((MR_String) "force-", Var_60);
  {
    MmakeRuleForceInitCFile_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleForceInitCFile_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleForceInitCFile_27, 1) = ((MR_Box) ((MR_String) "force_init_c_file"));
    MR_hl_field(3, MmakeRuleForceInitCFile_27, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleForceInitCFile_27, 3) = ((MR_Box) (ForceC2InitTarget_26));
    MR_hl_field(3, MmakeRuleForceInitCFile_27, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeRuleForceInitCFile_27, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  TmpInitCFileName_28 = mercury__string__f_43_43_2_f_0(InitCFileName_13, (MR_String) ".tmp");
  Var_68 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_12, (MR_String) ".init_cs)");
  ModuleMakeVarNameInitCs_29 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_68);
  Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "--init-c-file ", TmpInitCFileName_28);
  Var_76 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInitCs_29, (MR_String) " \044(ALL_C2INITARGS)");
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) (Var_75));
  }
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) ((MR_String) "\100\044(C2INIT) \044(ALL_GRADEFLAGS) \044(ALL_C2INITFLAGS)"));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_72));
  }
  InitCAction1_30 = libs__mmakefiles__make_multiline_action_1_f_0(Var_70);
  InitCAction2_31 = mercury__string__f_43_43_2_f_0((MR_String) "\100mercury_update_interface ", InitCFileName_13);
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (ForceC2InitTarget_26));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_86 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_86, 0) = ((MR_Box) (InitCAction2_31));
    MR_hl_field(1, Var_86, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_85 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), InitCAction1_30, Var_86);
  {
    MmakeRuleInitCFile_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleInitCFile_32, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleInitCFile_32, 1) = ((MR_Box) ((MR_String) "init_c_file"));
    MR_hl_field(3, MmakeRuleInitCFile_32, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleInitCFile_32, 3) = ((MR_Box) (InitCFileName_13));
    MR_hl_field(3, MmakeRuleInitCFile_32, 4) = ((MR_Box) (Var_82));
    MR_hl_field(3, MmakeRuleInitCFile_32, 5) = ((MR_Box) (Var_85));
  }
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (MmakeRuleInitCFile_32));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_90, 0) = ((MR_Box) (MmakeRuleForceInitCFile_27));
    MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_91));
  }
  {
    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_88, 0) = ((MR_Box) (MmakeRuleInitFile_24));
    MR_hl_field(1, Var_88, 1) = ((MR_Box) (Var_90));
  }
  libs__mmakefiles__add_mmake_entries_3_p_0(Var_88, STATE_VARIABLE_MmakeFile_0_33, STATE_VARIABLE_MmakeFile_34);
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_exec_library_targets_13_p_0(
  MR_Word Globals_14,
  MR_Word ModuleName_15,
  MR_String ModuleMakeVarName_16,
  MR_String InitFileName_17,
  MR_String InitObjFileName_18,
  MR_Word MaybeOptsVar_19,
  MR_Word MaybeTransOptsVar_20,
  MR_String ExeFileName_21,
  MR_String JarFileName_22,
  MR_String StaticLibFileName_23,
  MR_String SharedLibFileName_24,
  MR_Word STATE_VARIABLE_MmakeFile_0_57,
  MR_Word * STATE_VARIABLE_MmakeFile_58)
{
  MR_Word MmakeRuleExtForExe_26;
  MR_Word MmakeFragmentExtForExe_27;
  MR_String All_MLLibsDep_28;
  MR_String All_MLObjs_29;
  MR_String All_MLPicObjs_30;
  MR_String ModuleMakeVarNameClasses_31;
  MR_String ModuleMakeVarNameOs_32;
  MR_Word CMainRuleAction1Lines_33;
  MR_Word MmakeRuleExecutableJava_34;
  MR_Word MmakeRuleExecutableC_35;
  MR_Word MmakeFragmentExecutable_36;
  MR_Word UseInstallName_37;
  MR_String InstallNameOpt_38;
  MR_String LibTargetName_39;
  MR_String ModuleMakeVarNameInts_40;
  MR_String ModuleMakeVarNameInt3s_41;
  MR_Word IntsOptsVars_42;
  MR_Word MmakeRuleLibTargetJava_43;
  MR_Word MmakeRuleLibTargetC_44;
  MR_Word MmakeFragmentLibTarget_45;
  MR_String ModuleMakeVarNamePicOs_46;
  MR_Word SharedLibAction1_47;
  MR_Word MmakeRuleSharedLib_48;
  MR_Word MmakeFragmentSharedLib_49;
  MR_String LibAction1_50;
  MR_Word LibAction2_51;
  MR_String LibAction3_52;
  MR_Word MmakeRuleLib_53;
  MR_String ListClassFiles_54;
  MR_String JarAction1_55;
  MR_Word MmakeRuleJar_56;
  MR_Word Var_61;
  MR_String Var_62;
  MR_Word Var_69;
  MR_Word Var_70;
  MR_String Var_74;
  MR_String Var_77;
  MR_String Var_80;
  MR_String Var_82;
  MR_String Var_85;
  MR_String Var_88;
  MR_Word Var_90;
  MR_Word Var_92;
  MR_String Var_93;
  MR_String Var_95;
  MR_Word Var_97;
  MR_String Var_98;
  MR_String Var_99;
  MR_Word Var_101;
  MR_String Var_102;
  MR_Word Var_107;
  MR_String Var_112;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_117;
  MR_String Var_123;
  MR_String Var_125;
  MR_String Var_128;
  MR_Word Var_130;
  MR_Word Var_131;
  MR_Word Var_133;
  MR_Word Var_136;
  MR_Word Var_140;
  MR_Word Var_141;
  MR_Word Var_142;
  MR_String Var_147;
  MR_Word Var_149;
  MR_Word Var_151;
  MR_String Var_152;
  MR_Word Var_154;
  MR_String Var_155;
  MR_Word Var_157;
  MR_Word Var_158;
  MR_Word Var_164;
  MR_Word Var_165;
  MR_Word Var_171;
  MR_Word Var_172;
  MR_Word Var_176;
  MR_String Var_177;
  MR_Word Var_179;
  MR_Word Var_180;
  MR_Word Var_188;
  MR_Word Var_189;
  MR_Word Var_191;
  MR_Word Var_192;
  MR_String Var_195;
  MR_String Var_196;
  MR_Word Var_202;
  MR_Word STATE_VARIABLE_MmakeFile_1_204;
  MR_Word STATE_VARIABLE_MmakeFile_2_205;
  MR_Word STATE_VARIABLE_MmakeFile_3_206;
  MR_Word STATE_VARIABLE_MmakeFile_4_207;
  MR_Word Var_208;
  MR_Word Var_210;

  Var_62 = mercury__string__f_43_43_2_f_0(ExeFileName_21, (MR_String) "\044(EXT_FOR_EXE)");
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (Var_62));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRuleExtForExe_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleExtForExe_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleExtForExe_26, 1) = ((MR_Box) ((MR_String) "ext_for_exe"));
    MR_hl_field(3, MmakeRuleExtForExe_26, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, MmakeRuleExtForExe_26, 3) = ((MR_Box) (ExeFileName_21));
    MR_hl_field(3, MmakeRuleExtForExe_26, 4) = ((MR_Box) (Var_61));
    MR_hl_field(3, MmakeRuleExtForExe_26, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_70 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_70, 0) = ((MR_Box) (MmakeRuleExtForExe_26));
  }
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeFragmentExtForExe_27 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeFragmentExtForExe_27, 0) = ((MR_Box) (MR_mkword(2, &parse_tree__generate_mmakefile_fragments_scalar_common_1[34])));
    MR_hl_field(2, MmakeFragmentExtForExe_27, 1) = ((MR_Box) (Var_69));
    MR_hl_field(2, MmakeFragmentExtForExe_27, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_74 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_16, (MR_String) ",\044(ALL_MLLIBS_DEP))");
  All_MLLibsDep_28 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", Var_74);
  Var_77 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_16, (MR_String) ",\044(ALL_MLOBJS))");
  All_MLObjs_29 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", Var_77);
  Var_82 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_16, (MR_String) ",\044(ALL_MLOBJS)))");
  Var_80 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", Var_82);
  All_MLPicObjs_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(patsubst %.o,%.\044(EXT_FOR_PIC_OBJECTS),", Var_80);
  Var_85 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_16, (MR_String) ".classes)");
  ModuleMakeVarNameClasses_31 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_85);
  Var_88 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_16, (MR_String) ".all_os)");
  ModuleMakeVarNameOs_32 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_88);
  Var_95 = mercury__string__f_43_43_2_f_0(ExeFileName_21, (MR_String) "\044(EXT_FOR_EXE)");
  Var_93 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXEFILE_OPT)", Var_95);
  Var_99 = mercury__string__f_43_43_2_f_0((MR_String) " ", ModuleMakeVarNameOs_32);
  Var_98 = mercury__string__f_43_43_2_f_0(InitObjFileName_18, Var_99);
  Var_102 = mercury__string__f_43_43_2_f_0(All_MLObjs_29, (MR_String) " \044(ALL_MLLIBS)");
  {
    Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_101, 0) = ((MR_Box) (Var_102));
    MR_hl_field(1, Var_101, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) (Var_98));
    MR_hl_field(1, Var_97, 1) = ((MR_Box) (Var_101));
  }
  {
    Var_92 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_92, 0) = ((MR_Box) (Var_93));
    MR_hl_field(1, Var_92, 1) = ((MR_Box) (Var_97));
  }
  {
    Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_90, 0) = ((MR_Box) ((MR_String) "\044(ML) \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) -- \044(ALL_LDFLAGS)"));
    MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_92));
  }
  CMainRuleAction1Lines_33 = libs__mmakefiles__make_multiline_action_1_f_0(Var_90);
  {
    Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_107, 0) = ((MR_Box) (ModuleMakeVarNameClasses_31));
    MR_hl_field(1, Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRuleExecutableJava_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleExecutableJava_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleExecutableJava_34, 1) = ((MR_Box) ((MR_String) "executable_java"));
    MR_hl_field(3, MmakeRuleExecutableJava_34, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleExecutableJava_34, 3) = ((MR_Box) (ExeFileName_21));
    MR_hl_field(3, MmakeRuleExecutableJava_34, 4) = ((MR_Box) (Var_107));
    MR_hl_field(3, MmakeRuleExecutableJava_34, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_112 = mercury__string__f_43_43_2_f_0(ExeFileName_21, (MR_String) "\044(EXT_FOR_EXE)");
  {
    Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_117, 0) = ((MR_Box) (All_MLLibsDep_28));
    MR_hl_field(1, Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_116, 0) = ((MR_Box) (All_MLObjs_29));
    MR_hl_field(1, Var_116, 1) = ((MR_Box) (Var_117));
  }
  {
    Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_115, 0) = ((MR_Box) (InitObjFileName_18));
    MR_hl_field(1, Var_115, 1) = ((MR_Box) (Var_116));
  }
  {
    Var_114 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_114, 0) = ((MR_Box) (ModuleMakeVarNameOs_32));
    MR_hl_field(1, Var_114, 1) = ((MR_Box) (Var_115));
  }
  {
    MmakeRuleExecutableC_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleExecutableC_35, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleExecutableC_35, 1) = ((MR_Box) ((MR_String) "executable_c"));
    MR_hl_field(3, MmakeRuleExecutableC_35, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleExecutableC_35, 3) = ((MR_Box) (Var_112));
    MR_hl_field(3, MmakeRuleExecutableC_35, 4) = ((MR_Box) (Var_114));
    MR_hl_field(3, MmakeRuleExecutableC_35, 5) = ((MR_Box) (CMainRuleAction1Lines_33));
  }
  {
    MmakeFragmentExecutable_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MmakeFragmentExecutable_36, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_4[7]));
    MR_hl_field(1, MmakeFragmentExecutable_36, 1) = ((MR_Box) (MmakeRuleExecutableJava_34));
    MR_hl_field(1, MmakeFragmentExecutable_36, 2) = ((MR_Box) (MmakeRuleExecutableC_35));
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 636, &UseInstallName_37);
  switch (UseInstallName_37) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      InstallNameOpt_38 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      libs__file_util__get_install_name_option_3_p_0(Globals_14, SharedLibFileName_24, &InstallNameOpt_38);
      break;
  }
  Var_123 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_15);
  LibTargetName_39 = mercury__string__f_43_43_2_f_0((MR_String) "lib", Var_123);
  Var_125 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_16, (MR_String) ".ints)");
  ModuleMakeVarNameInts_40 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_125);
  Var_128 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_16, (MR_String) ".int3s)");
  ModuleMakeVarNameInt3s_41 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_128);
  {
    Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_131, 0) = ((MR_Box) (ModuleMakeVarNameInt3s_41));
    MR_hl_field(1, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_130, 0) = ((MR_Box) (ModuleMakeVarNameInts_40));
    MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_131));
  }
  Var_133 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeOptsVar_19, MaybeTransOptsVar_20);
  IntsOptsVars_42 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_130, Var_133);
  {
    Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_136, 0) = ((MR_Box) (JarFileName_22));
    MR_hl_field(1, Var_136, 1) = ((MR_Box) (IntsOptsVars_42));
  }
  {
    MmakeRuleLibTargetJava_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleLibTargetJava_43, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleLibTargetJava_43, 1) = ((MR_Box) ((MR_String) "lib_target_java"));
    MR_hl_field(3, MmakeRuleLibTargetJava_43, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, MmakeRuleLibTargetJava_43, 3) = ((MR_Box) (LibTargetName_39));
    MR_hl_field(3, MmakeRuleLibTargetJava_43, 4) = ((MR_Box) (Var_136));
    MR_hl_field(3, MmakeRuleLibTargetJava_43, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_142, 0) = ((MR_Box) (InitFileName_17));
    MR_hl_field(1, Var_142, 1) = ((MR_Box) (IntsOptsVars_42));
  }
  {
    Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_141, 0) = ((MR_Box) (SharedLibFileName_24));
    MR_hl_field(1, Var_141, 1) = ((MR_Box) (Var_142));
  }
  {
    Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_140, 0) = ((MR_Box) (StaticLibFileName_23));
    MR_hl_field(1, Var_140, 1) = ((MR_Box) (Var_141));
  }
  {
    MmakeRuleLibTargetC_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleLibTargetC_44, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleLibTargetC_44, 1) = ((MR_Box) ((MR_String) "lib_target_c"));
    MR_hl_field(3, MmakeRuleLibTargetC_44, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, MmakeRuleLibTargetC_44, 3) = ((MR_Box) (LibTargetName_39));
    MR_hl_field(3, MmakeRuleLibTargetC_44, 4) = ((MR_Box) (Var_140));
    MR_hl_field(3, MmakeRuleLibTargetC_44, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeFragmentLibTarget_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MmakeFragmentLibTarget_45, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_4[7]));
    MR_hl_field(1, MmakeFragmentLibTarget_45, 1) = ((MR_Box) (MmakeRuleLibTargetJava_43));
    MR_hl_field(1, MmakeFragmentLibTarget_45, 2) = ((MR_Box) (MmakeRuleLibTargetC_44));
  }
  Var_147 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_16, (MR_String) ".all_pic_os)");
  ModuleMakeVarNamePicOs_46 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_147);
  Var_152 = mercury__string__f_43_43_2_f_0(InstallNameOpt_38, (MR_String) " \044(ALL_LD_LIBFLAGS)");
  Var_155 = mercury__string__f_43_43_2_f_0((MR_String) "-o ", SharedLibFileName_24);
  {
    Var_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_158, 0) = ((MR_Box) (All_MLPicObjs_30));
    MR_hl_field(1, Var_158, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[35])));
  }
  {
    Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_157, 0) = ((MR_Box) (ModuleMakeVarNamePicOs_46));
    MR_hl_field(1, Var_157, 1) = ((MR_Box) (Var_158));
  }
  {
    Var_154 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_154, 0) = ((MR_Box) (Var_155));
    MR_hl_field(1, Var_154, 1) = ((MR_Box) (Var_157));
  }
  {
    Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_151, 0) = ((MR_Box) (Var_152));
    MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_154));
  }
  {
    Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_149, 0) = ((MR_Box) ((MR_String) "\044(ML) --make-shared-lib \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) -- "));
    MR_hl_field(1, Var_149, 1) = ((MR_Box) (Var_151));
  }
  SharedLibAction1_47 = libs__mmakefiles__make_multiline_action_1_f_0(Var_149);
  {
    Var_165 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_165, 0) = ((MR_Box) (All_MLPicObjs_30));
    MR_hl_field(1, Var_165, 1) = ((MR_Box) (Var_117));
  }
  {
    Var_164 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_164, 0) = ((MR_Box) (ModuleMakeVarNamePicOs_46));
    MR_hl_field(1, Var_164, 1) = ((MR_Box) (Var_165));
  }
  {
    MmakeRuleSharedLib_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleSharedLib_48, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleSharedLib_48, 1) = ((MR_Box) ((MR_String) "shared_lib"));
    MR_hl_field(3, MmakeRuleSharedLib_48, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleSharedLib_48, 3) = ((MR_Box) (SharedLibFileName_24));
    MR_hl_field(3, MmakeRuleSharedLib_48, 4) = ((MR_Box) (Var_164));
    MR_hl_field(3, MmakeRuleSharedLib_48, 5) = ((MR_Box) (SharedLibAction1_47));
  }
  {
    Var_172 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_172, 0) = ((MR_Box) (MmakeRuleSharedLib_48));
  }
  {
    Var_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_171, 0) = ((MR_Box) (Var_172));
    MR_hl_field(1, Var_171, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeFragmentSharedLib_49 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeFragmentSharedLib_49, 0) = ((MR_Box) (MR_mkword(2, &parse_tree__generate_mmakefile_fragments_scalar_common_1[36])));
    MR_hl_field(2, MmakeFragmentSharedLib_49, 1) = ((MR_Box) (Var_171));
    MR_hl_field(2, MmakeFragmentSharedLib_49, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  LibAction1_50 = mercury__string__f_43_43_2_f_0((MR_String) "rm -f ", StaticLibFileName_23);
  Var_177 = mercury__string__f_43_43_2_f_0((MR_String) "\044(AR) \044(ALL_ARFLAGS) \044(AR_LIBFILE_OPT)", StaticLibFileName_23);
  {
    Var_180 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_180, 0) = ((MR_Box) (All_MLObjs_29));
    MR_hl_field(1, Var_180, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_179 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_179, 0) = ((MR_Box) (ModuleMakeVarNameOs_32));
    MR_hl_field(1, Var_179, 1) = ((MR_Box) (Var_180));
  }
  {
    Var_176 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_176, 0) = ((MR_Box) (Var_177));
    MR_hl_field(1, Var_176, 1) = ((MR_Box) (Var_179));
  }
  LibAction2_51 = libs__mmakefiles__make_multiline_action_1_f_0(Var_176);
  LibAction3_52 = mercury__string__f_43_43_2_f_0((MR_String) "\044(RANLIB) \044(ALL_RANLIBFLAGS) ", StaticLibFileName_23);
  {
    Var_189 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_189, 0) = ((MR_Box) (LibAction1_50));
    MR_hl_field(1, Var_189, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_192 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_192, 0) = ((MR_Box) (LibAction3_52));
    MR_hl_field(1, Var_192, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_191 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), LibAction2_51, Var_192);
  Var_188 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_189, Var_191);
  {
    MmakeRuleLib_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleLib_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleLib_53, 1) = ((MR_Box) ((MR_String) "lib"));
    MR_hl_field(3, MmakeRuleLib_53, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleLib_53, 3) = ((MR_Box) (StaticLibFileName_23));
    MR_hl_field(3, MmakeRuleLib_53, 4) = ((MR_Box) (Var_179));
    MR_hl_field(3, MmakeRuleLib_53, 5) = ((MR_Box) (Var_188));
  }
  parse_tree__generate_mmakefile_fragments__list_class_files_for_jar_mmake_3_p_0(Globals_14, ModuleMakeVarNameClasses_31, &ListClassFiles_54);
  Var_196 = mercury__string__f_43_43_2_f_0((MR_String) " ", ListClassFiles_54);
  Var_195 = mercury__string__f_43_43_2_f_0(JarFileName_22, Var_196);
  JarAction1_55 = mercury__string__f_43_43_2_f_0((MR_String) "\044(JAR) \044(JAR_CREATE_FLAGS) ", Var_195);
  {
    Var_202 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_202, 0) = ((MR_Box) (JarAction1_55));
    MR_hl_field(1, Var_202, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRuleJar_56 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleJar_56, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleJar_56, 1) = ((MR_Box) ((MR_String) "jar"));
    MR_hl_field(3, MmakeRuleJar_56, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleJar_56, 3) = ((MR_Box) (JarFileName_22));
    MR_hl_field(3, MmakeRuleJar_56, 4) = ((MR_Box) (Var_107));
    MR_hl_field(3, MmakeRuleJar_56, 5) = ((MR_Box) (Var_202));
  }
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentExtForExe_27, STATE_VARIABLE_MmakeFile_0_57, &STATE_VARIABLE_MmakeFile_1_204);
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentExecutable_36, STATE_VARIABLE_MmakeFile_1_204, &STATE_VARIABLE_MmakeFile_2_205);
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibTarget_45, STATE_VARIABLE_MmakeFile_2_205, &STATE_VARIABLE_MmakeFile_3_206);
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentSharedLib_49, STATE_VARIABLE_MmakeFile_3_206, &STATE_VARIABLE_MmakeFile_4_207);
  {
    Var_210 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_210, 0) = ((MR_Box) (MmakeRuleJar_56));
    MR_hl_field(1, Var_210, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_208 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_208, 0) = ((MR_Box) (MmakeRuleLib_53));
    MR_hl_field(1, Var_208, 1) = ((MR_Box) (Var_210));
  }
  libs__mmakefiles__add_mmake_entries_3_p_0(Var_208, STATE_VARIABLE_MmakeFile_4_207, STATE_VARIABLE_MmakeFile_58);
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__list_class_files_for_jar_mmake_3_p_0(
  MR_Word Globals_4,
  MR_String ClassFiles_5,
  MR_String * ListClassFiles_6)
{
  MR_Word ClassSubDirPath_7;
  MR_Word _ClassSubDirPathProposed_8;

  parse_tree__file_names__get_java_dir_path_4_p_0(Globals_4, (MR_Integer) 1, &ClassSubDirPath_7, &_ClassSubDirPathProposed_8);
  if ((ClassSubDirPath_7 == (MR_Word) ((MR_Unsigned) 0U)))
    *ListClassFiles_6 = ClassFiles_5;
  else
  {
    MR_String ClassSubDir_11;
    MR_String Var_14;
    MR_String Var_15;
    MR_String Var_17;
    MR_String Var_19;
    MR_String Var_20;
    MR_String Var_22;
    MR_String Var_24;

    ClassSubDir_11 = mercury__dir__relative_path_name_from_components_1_f_0(ClassSubDirPath_7);
    Var_24 = mercury__string__f_43_43_2_f_0(ClassSubDir_11, (MR_String) "/| |\'\140");
    Var_22 = mercury__string__f_43_43_2_f_0((MR_String) " | sed \'s| \'", Var_24);
    Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_22);
    Var_19 = mercury__string__f_43_43_2_f_0(ClassFiles_5, Var_20);
    Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "\t\t\140echo \" ", Var_19);
    Var_15 = mercury__string__f_43_43_2_f_0((MR_String) " \\\n", Var_17);
    Var_14 = mercury__string__f_43_43_2_f_0(ClassSubDir_11, Var_15);
    *ListClassFiles_6 = mercury__string__f_43_43_2_f_0((MR_String) "-C ", Var_14);
  }
}

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_mmakefile_5_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__2_2;

  conv5_HeadVar__2_2 = libs__mmakefiles__mmake_entry_to_fragment_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv5_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_mmakefile_5_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv4_HeadVar__3_3;

  conv4_HeadVar__3_3 = mercury__string__add_suffix_2_f_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_mmakefile_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv3_HeadVar__3_3;

  conv3_HeadVar__3_3 = mercury__string__add_suffix_2_f_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__3_3));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_mmakefile_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv2_HeadVar__3_3;

  conv2_HeadVar__3_3 = mercury__string__add_suffix_2_f_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__3_3));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_mmakefile_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv1_FileName_6;

  parse_tree__generate_mmakefile_fragments__get_source_file_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_FileName_6));
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_mmakefile_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_6;

  parse_tree__generate_mmakefile_fragments__compare_module_names_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_Result_6));
}

void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_mmakefile_5_p_0(
  MR_Word Globals_6,
  MR_String SourceFileName_7,
  MR_Word ModuleName_8,
  MR_Word DepsMap_9,
  MR_Word * MmakeFile_10)
{
  MR_String ModuleNameStr_11;
  MR_String Version_12;
  MR_String FullArch_13;
  MR_Word MmakeStartComment_14;
  MR_Word Modules0_15;
  MR_Word Modules1_16;
  MR_Word Modules_17;
  MR_String ModuleMakeVarName_18;
  MR_Word SourceFiles0_19;
  MR_Word SourceFiles_20;
  MR_Word MmakeVarModuleMs_21;
  MR_Word MmakeVarModuleDepErrs_22;
  MR_Word MmakeVarModuleErrs_23;
  MR_Word StartFragments_24;
  MR_Word ModMiscFragments_25;
  MR_Word IntnFragments_26;
  MR_Word OptFragments_27;
  MR_Word CFragments_28;
  MR_Word JavaFragments_29;
  MR_Word CsharpFragments_30;
  MR_Word SmartRecompFragments_31;
  MR_Word Var_34;
  MR_String Var_35;
  MR_Word Var_37;
  MR_String Var_40;
  MR_Word Var_42;
  MR_String Var_45;
  MR_Word Var_47;
  MR_Word Var_51;
  MR_Word Var_52;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_68;
  MR_Word Var_69;

  ModuleNameStr_11 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_8);
  mercury__library__version_2_p_0(&Version_12, &FullArch_13);
  {
    MmakeStartComment_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MmakeStartComment_14, 0) = ((MR_Box) ((MR_String) "dependency variables"));
    MR_hl_field(0, MmakeStartComment_14, 1) = ((MR_Box) (ModuleNameStr_11));
    MR_hl_field(0, MmakeStartComment_14, 2) = ((MR_Box) (SourceFileName_7));
    MR_hl_field(0, MmakeStartComment_14, 3) = ((MR_Box) (Version_12));
    MR_hl_field(0, MmakeStartComment_14, 4) = ((MR_Box) (FullArch_13));
  }
  mercury__map__keys_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_9, &Modules0_15);
  parse_tree__generate_mmakefile_fragments__select_no_fatal_error_modules_3_p_0(DepsMap_9, Modules0_15, &Modules1_16);
  mercury__list__sort_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_3[11]), Modules1_16, &Modules_17);
  parse_tree__file_names__module_name_to_make_var_name_2_p_0(ModuleName_8, &ModuleMakeVarName_18);
  {
    Var_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_34, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_5[2]));
    MR_hl_field(0, Var_34, 1) = ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_mmakefile_5_p_0_2));
    MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_34, 3) = ((MR_Box) (DepsMap_9));
  }
  mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_34, Modules_17, &SourceFiles0_19);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFiles0_19, &SourceFiles_20);
  Var_35 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".ms");
  Var_37 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[1]), SourceFiles_20);
  {
    MmakeVarModuleMs_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarModuleMs_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarModuleMs_21, 1) = ((MR_Box) (Var_35));
    MR_hl_field(3, MmakeVarModuleMs_21, 2) = ((MR_Box) (Var_37));
  }
  Var_40 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".dep_errs");
  Var_42 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[2]), SourceFiles_20);
  {
    MmakeVarModuleDepErrs_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarModuleDepErrs_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarModuleDepErrs_22, 1) = ((MR_Box) (Var_40));
    MR_hl_field(3, MmakeVarModuleDepErrs_22, 2) = ((MR_Box) (Var_42));
  }
  Var_45 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".errs");
  Var_47 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[3]), SourceFiles_20);
  {
    MmakeVarModuleErrs_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarModuleErrs_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarModuleErrs_23, 1) = ((MR_Box) (Var_45));
    MR_hl_field(3, MmakeVarModuleErrs_23, 2) = ((MR_Box) (Var_47));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (MmakeVarModuleErrs_23));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (MmakeVarModuleDepErrs_22));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
  }
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (MmakeVarModuleMs_21));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (MmakeStartComment_14));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) (Var_52));
  }
  StartFragments_24 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_3[12]), Var_51);
  parse_tree__generate_mmakefile_fragments__generate_dv_file_define_mod_misc_vars_5_p_0(Globals_6, DepsMap_9, Modules_17, ModuleMakeVarName_18, &ModMiscFragments_25);
  parse_tree__generate_mmakefile_fragments__generate_dv_file_define_intn_vars_2_p_0(ModuleMakeVarName_18, &IntnFragments_26);
  parse_tree__generate_mmakefile_fragments__generate_dv_file_define_opt_vars_2_p_0(ModuleMakeVarName_18, &OptFragments_27);
  parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_5_p_0(Globals_6, DepsMap_9, Modules_17, ModuleMakeVarName_18, &CFragments_28);
  parse_tree__generate_mmakefile_fragments__generate_dv_file_define_java_vars_2_p_0(ModuleMakeVarName_18, &JavaFragments_29);
  parse_tree__generate_mmakefile_fragments__generate_dv_file_define_csharp_vars_2_p_0(ModuleMakeVarName_18, &CsharpFragments_30);
  parse_tree__generate_mmakefile_fragments__generate_dv_file_define_smart_recomp_vars_2_p_0(ModuleMakeVarName_18, &SmartRecompFragments_31);
  Var_56 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), StartFragments_24);
  Var_58 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), ModMiscFragments_25);
  Var_60 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), IntnFragments_26);
  Var_62 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), OptFragments_27);
  Var_64 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), CFragments_28);
  Var_66 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), JavaFragments_29);
  Var_68 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), CsharpFragments_30);
  Var_69 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), SmartRecompFragments_31);
  Var_67 = mercury__cord__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Var_68, Var_69);
  Var_65 = mercury__cord__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Var_66, Var_67);
  Var_63 = mercury__cord__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Var_64, Var_65);
  Var_61 = mercury__cord__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Var_62, Var_63);
  Var_59 = mercury__cord__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Var_60, Var_61);
  Var_57 = mercury__cord__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Var_58, Var_59);
  *MmakeFile_10 = mercury__cord__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Var_56, Var_57);
}

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_smart_recomp_vars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = libs__mmakefiles__mmake_entry_to_fragment_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_smart_recomp_vars_2_p_0(
  MR_String ModuleMakeVarName_3,
  MR_Word * SmartRecompFragments_4)
{
  MR_Word MmakeVarUseds_5;
  MR_Word MmakeVarAnalysiss_6;
  MR_Word MmakeVarRequests_7;
  MR_Word MmakeVarImdgs_8;
  MR_String Var_9;
  MR_String Var_11;
  MR_String Var_16;
  MR_String Var_18;
  MR_String Var_23;
  MR_String Var_25;
  MR_String Var_30;
  MR_String Var_32;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_String Var_48;
  MR_String Var_51;
  MR_String Var_54;
  MR_String Var_57;

  Var_9 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".useds");
  Var_48 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(useds_subdir)%.used)");
  Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_48);
  {
    MmakeVarUseds_5 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarUseds_5, 0) = ((MR_Box) (Var_9));
    MR_hl_field(2, MmakeVarUseds_5, 1) = ((MR_Box) (Var_11));
  }
  Var_16 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".analyses");
  Var_51 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(analyses_subdir)%.analysis)");
  Var_18 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_51);
  {
    MmakeVarAnalysiss_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAnalysiss_6, 0) = ((MR_Box) (Var_16));
    MR_hl_field(2, MmakeVarAnalysiss_6, 1) = ((MR_Box) (Var_18));
  }
  Var_23 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".requests");
  Var_54 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(requests_subdir)%.request)");
  Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_54);
  {
    MmakeVarRequests_7 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarRequests_7, 0) = ((MR_Box) (Var_23));
    MR_hl_field(2, MmakeVarRequests_7, 1) = ((MR_Box) (Var_25));
  }
  Var_30 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".imdgs");
  Var_57 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(imdgs_subdir)%.imdg)");
  Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_57);
  {
    MmakeVarImdgs_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarImdgs_8, 0) = ((MR_Box) (Var_30));
    MR_hl_field(2, MmakeVarImdgs_8, 1) = ((MR_Box) (Var_32));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (MmakeVarImdgs_8));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (MmakeVarRequests_7));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_41));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (MmakeVarAnalysiss_6));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_40));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (MmakeVarUseds_5));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_39));
  }
  *SmartRecompFragments_4 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_3[10]), Var_38);
}

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_csharp_vars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = libs__mmakefiles__mmake_entry_to_fragment_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_csharp_vars_2_p_0(
  MR_String ModuleMakeVarName_3,
  MR_Word * CsharpFragments_4)
{
  MR_Word MmakeVarAllCss_5;
  MR_Word MmakeVarCsDates_6;
  MR_Word MmakeVarDlls_7;
  MR_Word MmakeVarForeignDlls_8;
  MR_String Var_9;
  MR_String Var_11;
  MR_String Var_16;
  MR_String Var_18;
  MR_String Var_23;
  MR_String Var_25;
  MR_String Var_30;
  MR_String Var_32;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_String Var_48;
  MR_String Var_51;
  MR_String Var_54;
  MR_String Var_57;

  Var_9 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".all_css");
  Var_48 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(css_subdir)%.cs)");
  Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_48);
  {
    MmakeVarAllCss_5 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllCss_5, 0) = ((MR_Box) (Var_9));
    MR_hl_field(2, MmakeVarAllCss_5, 1) = ((MR_Box) (Var_11));
  }
  Var_16 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".cs_dates");
  Var_51 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(cs_dates_subdir)%.cs_date)");
  Var_18 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_51);
  {
    MmakeVarCsDates_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarCsDates_6, 0) = ((MR_Box) (Var_16));
    MR_hl_field(2, MmakeVarCsDates_6, 1) = ((MR_Box) (Var_18));
  }
  Var_23 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".dlls");
  Var_54 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(dlls_subdir)%.dll)");
  Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_54);
  {
    MmakeVarDlls_7 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarDlls_7, 0) = ((MR_Box) (Var_23));
    MR_hl_field(2, MmakeVarDlls_7, 1) = ((MR_Box) (Var_25));
  }
  Var_30 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".foreign_dlls");
  Var_57 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".foreign:%=\044(dlls_subdir)%.dll)");
  Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_57);
  {
    MmakeVarForeignDlls_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarForeignDlls_8, 0) = ((MR_Box) (Var_30));
    MR_hl_field(2, MmakeVarForeignDlls_8, 1) = ((MR_Box) (Var_32));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (MmakeVarForeignDlls_8));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_40, 0) = ((MR_Box) (MmakeVarDlls_7));
    MR_hl_field(1, Var_40, 1) = ((MR_Box) (Var_41));
  }
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (MmakeVarCsDates_6));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) (Var_40));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (MmakeVarAllCss_5));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_39));
  }
  *CsharpFragments_4 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_3[9]), Var_38);
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_java_vars_2_p_0(
  MR_String ModuleMakeVarName_3,
  MR_Word * JavaFragments_4)
{
  MR_Word MmakeVarAllJavas_5;
  MR_Word MmakeVarJavaDates_6;
  MR_Word MmakeVarClassesJava_7;
  MR_Word MmakeVarClassesC_8;
  MR_Word MmakeFragmentVarClasses_9;
  MR_String Var_10;
  MR_String Var_12;
  MR_String Var_17;
  MR_String Var_19;
  MR_String Var_24;
  MR_Word Var_26;
  MR_String Var_27;
  MR_Word Var_32;
  MR_String Var_33;
  MR_String Var_39;
  MR_Word Var_44;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_String Var_50;
  MR_String Var_53;
  MR_String Var_56;
  MR_String Var_59;

  Var_10 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".all_javas");
  Var_50 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(javas_subdir)%.java)");
  Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_50);
  {
    MmakeVarAllJavas_5 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllJavas_5, 0) = ((MR_Box) (Var_10));
    MR_hl_field(2, MmakeVarAllJavas_5, 1) = ((MR_Box) (Var_12));
  }
  Var_17 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".java_dates");
  Var_53 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(java_dates_subdir)%.java_date)");
  Var_19 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_53);
  {
    MmakeVarJavaDates_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarJavaDates_6, 0) = ((MR_Box) (Var_17));
    MR_hl_field(2, MmakeVarJavaDates_6, 1) = ((MR_Box) (Var_19));
  }
  Var_24 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".classes");
  Var_56 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(classes_subdir)%.class)");
  Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_56);
  Var_59 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(classes_subdir)%\\\044\044*.class))");
  Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "\044(wildcard \044(", Var_59);
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) (Var_32));
  }
  {
    MmakeVarClassesJava_7 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarClassesJava_7, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarClassesJava_7, 1) = ((MR_Box) (Var_24));
    MR_hl_field(3, MmakeVarClassesJava_7, 2) = ((MR_Box) (Var_26));
  }
  Var_39 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".classes");
  {
    MmakeVarClassesC_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarClassesC_8, 0) = ((MR_Box) (Var_39));
    MR_hl_field(2, MmakeVarClassesC_8, 1) = ((MR_Box) ((MR_String) ""));
  }
  {
    MmakeFragmentVarClasses_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MmakeFragmentVarClasses_9, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_4[7]));
    MR_hl_field(1, MmakeFragmentVarClasses_9, 1) = ((MR_Box) (MmakeVarClassesJava_7));
    MR_hl_field(1, MmakeFragmentVarClasses_9, 2) = ((MR_Box) (MmakeVarClassesC_8));
  }
  Var_44 = libs__mmakefiles__mmake_entry_to_fragment_1_f_0(MmakeVarAllJavas_5);
  Var_46 = libs__mmakefiles__mmake_entry_to_fragment_1_f_0(MmakeVarJavaDates_6);
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (MmakeFragmentVarClasses_9));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (Var_46));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_47));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *JavaFragments_4 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_44));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_45));
  }
}

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv4_HeadVar__2_2;

  conv4_HeadVar__2_2 = libs__mmakefiles__mmake_entry_to_fragment_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv4_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_String conv3_HeadVar__5_5;
  MR_String conv2_HeadVar__6_6;

  parse_tree__file_names__fact_table_file_name_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_String) (wrapper_arg_1)), &conv3_HeadVar__5_5, &conv2_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__6_6));
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__5_5;
  MR_String conv0_HeadVar__6_6;

  parse_tree__file_names__fact_table_file_name_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_String) (wrapper_arg_1)), &conv1_HeadVar__5_5, &conv0_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_5_p_0(
  MR_Word Globals_6,
  MR_Word DepsMap_7,
  MR_Word Modules_8,
  MR_String ModuleMakeVarName_9,
  MR_Word * CFragments_10)
{
  MR_Word MmakeVarAllCs_11;
  MR_Word MmakeVarInitCs_12;
  MR_Word MmakeVarCDates_13;
  MR_Word FactTableFileNames_14;
  MR_Word FactTableFileNamesOs_15;
  MR_Word FactTableFileNamesPicOs_17;
  MR_Word MmakeVarAllOs_19;
  MR_Word MmakeVarAllPicOs_20;
  MR_Word MmakeVarForeignModules_21;
  MR_Word MmakeVarForeignFileNames_22;
  MR_Word Target_23;
  MR_Word MihSources_25;
  MR_Word MhSources_26;
  MR_Word MmakeVarMihs_27;
  MR_Word MmakeVarMhs_28;
  MR_Word MmakeVarMihsToClean_29;
  MR_Word MmakeVarAllMihs_30;
  MR_Word MmakeVarMhsToClean_31;
  MR_Word MmakeVarAllMhs_32;
  MR_String Var_33;
  MR_String Var_35;
  MR_String Var_40;
  MR_String Var_42;
  MR_String Var_47;
  MR_String Var_49;
  MR_Word Var_54;
  MR_Word Var_58;
  MR_String Var_62;
  MR_Word Var_64;
  MR_String Var_65;
  MR_String Var_70;
  MR_Word Var_72;
  MR_String Var_73;
  MR_String Var_78;
  MR_String Var_81;
  MR_String Var_97;
  MR_String Var_99;
  MR_String Var_101;
  MR_String Var_103;
  MR_String Var_108;
  MR_String Var_110;
  MR_String Var_115;
  MR_String Var_117;
  MR_String Var_122;
  MR_String Var_124;
  MR_Word Var_130;
  MR_Word Var_131;
  MR_Word Var_132;
  MR_Word Var_133;
  MR_Word Var_134;
  MR_Word Var_135;
  MR_Word Var_136;
  MR_Word Var_137;
  MR_Word Var_138;
  MR_Word Var_139;
  MR_Word Var_140;
  MR_Word Var_141;
  MR_Word Var_142;
  MR_String Var_156;
  MR_String Var_159;
  MR_String Var_162;
  MR_String Var_165;
  MR_String Var_168;
  MR_String Var_177;
  MR_String Var_180;
  MR_String Var_183;
  MR_String Var_186;
  MR_Word _FactTableFileNamesOsProposed_16;
  MR_Word _FactTableFileNamesPicOsProposed_18;

  Var_33 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".all_cs");
  Var_156 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".mods:%=\044(cs_subdir)%.c)");
  Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_156);
  {
    MmakeVarAllCs_11 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllCs_11, 0) = ((MR_Box) (Var_33));
    MR_hl_field(2, MmakeVarAllCs_11, 1) = ((MR_Box) (Var_35));
  }
  Var_40 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".init_cs");
  Var_159 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".mods:%=\044(cs_subdir)%.c)");
  Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_159);
  {
    MmakeVarInitCs_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarInitCs_12, 0) = ((MR_Box) (Var_40));
    MR_hl_field(2, MmakeVarInitCs_12, 1) = ((MR_Box) (Var_42));
  }
  Var_47 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".c_dates");
  Var_162 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".mods:%=\044(c_dates_subdir)%.c_date)");
  Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_162);
  {
    MmakeVarCDates_13 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarCDates_13, 0) = ((MR_Box) (Var_47));
    MR_hl_field(2, MmakeVarCDates_13, 1) = ((MR_Box) (Var_49));
  }
  parse_tree__generate_mmakefile_fragments__get_fact_table_file_names_3_p_0(DepsMap_7, Modules_8, &FactTableFileNames_14);
  {
    Var_54 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_54, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_8[1]));
    MR_hl_field(0, Var_54, 1) = ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_5_p_0_1));
    MR_hl_field(0, Var_54, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_54, 3) = ((MR_Box) (Globals_6));
    MR_hl_field(0, Var_54, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dv_file_define_c_vars\'/5"));
    MR_hl_field(0, Var_54, 5) = ((MR_Box) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[7])));
  }
  mercury__list__map2_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_54, FactTableFileNames_14, &FactTableFileNamesOs_15, &_FactTableFileNamesOsProposed_16);
  {
    Var_58 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_58, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_8[1]));
    MR_hl_field(0, Var_58, 1) = ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_5_p_0_2));
    MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_58, 3) = ((MR_Box) (Globals_6));
    MR_hl_field(0, Var_58, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dv_file_define_c_vars\'/5"));
    MR_hl_field(0, Var_58, 5) = ((MR_Box) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[33])));
  }
  mercury__list__map2_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_58, FactTableFileNames_14, &FactTableFileNamesPicOs_17, &_FactTableFileNamesPicOsProposed_18);
  Var_62 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".all_os");
  Var_165 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".mods:%=\044(os_subdir)%.\044O)");
  Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_165);
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (Var_65));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (FactTableFileNamesOs_15));
  }
  {
    MmakeVarAllOs_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarAllOs_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarAllOs_19, 1) = ((MR_Box) (Var_62));
    MR_hl_field(3, MmakeVarAllOs_19, 2) = ((MR_Box) (Var_64));
  }
  Var_70 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".all_pic_os");
  Var_168 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".mods:%=\044(os_subdir)%.\044(EXT_FOR_PIC_OBJECTS))");
  Var_73 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_168);
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) (FactTableFileNamesPicOs_17));
  }
  {
    MmakeVarAllPicOs_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarAllPicOs_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarAllPicOs_20, 1) = ((MR_Box) (Var_70));
    MR_hl_field(3, MmakeVarAllPicOs_20, 2) = ((MR_Box) (Var_72));
  }
  Var_78 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".foreign");
  {
    MmakeVarForeignModules_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarForeignModules_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarForeignModules_21, 1) = ((MR_Box) (Var_78));
    MR_hl_field(3, MmakeVarForeignModules_21, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_81 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".foreign_cs");
  {
    MmakeVarForeignFileNames_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarForeignFileNames_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarForeignFileNames_22, 1) = ((MR_Box) (Var_81));
    MR_hl_field(3, MmakeVarForeignFileNames_22, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  libs__globals__get_target_2_p_0(Globals_6, &Target_23);
  switch (Target_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word HighLevelCode_24;
        MR_String Var_91;
        MR_String Var_174;

        libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 55, &HighLevelCode_24);
        switch (HighLevelCode_24) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MihSources_25 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_85;
              MR_String Var_171;

              Var_171 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
              Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_171);
              {
                MihSources_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MihSources_25, 0) = ((MR_Box) (Var_85));
                MR_hl_field(1, MihSources_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
        }
        Var_174 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".mods:%=\044(mhs_subdir)%.mh)");
        Var_91 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_174);
        {
          MhSources_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MhSources_26, 0) = ((MR_Box) (Var_91));
          MR_hl_field(1, MhSources_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MihSources_25 = (MR_Word) ((MR_Unsigned) 0U);
        MhSources_26 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
  Var_97 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".mihs");
  {
    MmakeVarMihs_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarMihs_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarMihs_27, 1) = ((MR_Box) (Var_97));
    MR_hl_field(3, MmakeVarMihs_27, 2) = ((MR_Box) (MihSources_25));
  }
  Var_99 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".mhs");
  {
    MmakeVarMhs_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarMhs_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarMhs_28, 1) = ((MR_Box) (Var_99));
    MR_hl_field(3, MmakeVarMhs_28, 2) = ((MR_Box) (MhSources_26));
  }
  Var_101 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".mihs_to_clean");
  Var_177 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
  Var_103 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_177);
  {
    MmakeVarMihsToClean_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarMihsToClean_29, 0) = ((MR_Box) (Var_101));
    MR_hl_field(2, MmakeVarMihsToClean_29, 1) = ((MR_Box) (Var_103));
  }
  Var_108 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".all_mihs");
  Var_180 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
  Var_110 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_180);
  {
    MmakeVarAllMihs_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllMihs_30, 0) = ((MR_Box) (Var_108));
    MR_hl_field(2, MmakeVarAllMihs_30, 1) = ((MR_Box) (Var_110));
  }
  Var_115 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".mhs_to_clean");
  Var_183 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".mods:%=\044(mhs_subdir)%.mh)");
  Var_117 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_183);
  {
    MmakeVarMhsToClean_31 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarMhsToClean_31, 0) = ((MR_Box) (Var_115));
    MR_hl_field(2, MmakeVarMhsToClean_31, 1) = ((MR_Box) (Var_117));
  }
  Var_122 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".all_mhs");
  Var_186 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".mods:%=\044(mhs_subdir)%.mh)");
  Var_124 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_186);
  {
    MmakeVarAllMhs_32 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllMhs_32, 0) = ((MR_Box) (Var_122));
    MR_hl_field(2, MmakeVarAllMhs_32, 1) = ((MR_Box) (Var_124));
  }
  {
    Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_142, 0) = ((MR_Box) (MmakeVarAllMhs_32));
    MR_hl_field(1, Var_142, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_141, 0) = ((MR_Box) (MmakeVarMhsToClean_31));
    MR_hl_field(1, Var_141, 1) = ((MR_Box) (Var_142));
  }
  {
    Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_140, 0) = ((MR_Box) (MmakeVarAllMihs_30));
    MR_hl_field(1, Var_140, 1) = ((MR_Box) (Var_141));
  }
  {
    Var_139 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_139, 0) = ((MR_Box) (MmakeVarMihsToClean_29));
    MR_hl_field(1, Var_139, 1) = ((MR_Box) (Var_140));
  }
  {
    Var_138 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_138, 0) = ((MR_Box) (MmakeVarMhs_28));
    MR_hl_field(1, Var_138, 1) = ((MR_Box) (Var_139));
  }
  {
    Var_137 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_137, 0) = ((MR_Box) (MmakeVarMihs_27));
    MR_hl_field(1, Var_137, 1) = ((MR_Box) (Var_138));
  }
  {
    Var_136 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_136, 0) = ((MR_Box) (MmakeVarForeignFileNames_22));
    MR_hl_field(1, Var_136, 1) = ((MR_Box) (Var_137));
  }
  {
    Var_135 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_135, 0) = ((MR_Box) (MmakeVarForeignModules_21));
    MR_hl_field(1, Var_135, 1) = ((MR_Box) (Var_136));
  }
  {
    Var_134 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_134, 0) = ((MR_Box) (MmakeVarAllPicOs_20));
    MR_hl_field(1, Var_134, 1) = ((MR_Box) (Var_135));
  }
  {
    Var_133 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_133, 0) = ((MR_Box) (MmakeVarAllOs_19));
    MR_hl_field(1, Var_133, 1) = ((MR_Box) (Var_134));
  }
  {
    Var_132 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_132, 0) = ((MR_Box) (MmakeVarCDates_13));
    MR_hl_field(1, Var_132, 1) = ((MR_Box) (Var_133));
  }
  {
    Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_131, 0) = ((MR_Box) (MmakeVarInitCs_12));
    MR_hl_field(1, Var_131, 1) = ((MR_Box) (Var_132));
  }
  {
    Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_130, 0) = ((MR_Box) (MmakeVarAllCs_11));
    MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_131));
  }
  *CFragments_10 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_3[8]), Var_130);
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__get_fact_table_file_names_3_p_0(
  MR_Word DepsMap_4,
  MR_Word Modules_5,
  MR_Word * FactTableFileNames_6)
{
  MR_Word FactTableFileNamesSet_7;
  MR_Word Var_8;

  Var_8 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  parse_tree__generate_mmakefile_fragments__acc_fact_table_file_names_4_p_0(DepsMap_4, Modules_5, Var_8, &FactTableFileNamesSet_7);
  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFileNamesSet_7, FactTableFileNames_6);
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__acc_fact_table_file_names_4_p_0(
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
      MR_Word Module_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Modules_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word FactTableFileNames_12;
      MR_Word BurdenedModule_14;
      MR_Word ParseTreeModuleSrc_15;
      MR_Word Var_18;
      MR_Word STATE_VARIABLE_FactTableFileNames_1_19;
      MR_Box conv0_Var_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_FactTableFileNames_0_3;

      mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), HeadVar__1_1, ((MR_Box) (Module_10)), &conv0_Var_18);
      Var_18 = ((MR_Word) (conv0_Var_18));
      BurdenedModule_14 = ((MR_Word) ((MR_hl_field(0, Var_18, 1))));
      ParseTreeModuleSrc_15 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_14, 1))));
      parse_tree__get_dependencies__get_fact_tables_2_p_0(ParseTreeModuleSrc_15, &FactTableFileNames_12);
      mercury__set__union_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), FactTableFileNames_12, STATE_VARIABLE_FactTableFileNames_0_3, &STATE_VARIABLE_FactTableFileNames_1_19);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Modules_11;
      next_value_of_STATE_VARIABLE_FactTableFileNames_0_3 = STATE_VARIABLE_FactTableFileNames_1_19;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_FactTableFileNames_0_3 = next_value_of_STATE_VARIABLE_FactTableFileNames_0_3;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_opt_vars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = libs__mmakefiles__mmake_entry_to_fragment_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_opt_vars_2_p_0(
  MR_String ModuleMakeVarName_3,
  MR_Word * OptFragments_4)
{
  MR_Word MmakeVarAllOpts_5;
  MR_Word MmakeVarOpts_6;
  MR_Word MmakeVarAllTransOpts_7;
  MR_Word MmakeVarTransOpts_8;
  MR_Word MmakeVarOptDates_9;
  MR_Word MmakeVarTransOptDates_10;
  MR_String Var_11;
  MR_String Var_13;
  MR_String Var_18;
  MR_String Var_20;
  MR_String Var_25;
  MR_String Var_27;
  MR_String Var_32;
  MR_String Var_34;
  MR_String Var_39;
  MR_String Var_41;
  MR_String Var_46;
  MR_String Var_48;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_56;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_59;
  MR_String Var_66;
  MR_String Var_69;
  MR_String Var_72;
  MR_String Var_75;
  MR_String Var_78;
  MR_String Var_81;

  Var_11 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".all_opts");
  Var_66 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(opts_subdir)%.opt)");
  Var_13 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_66);
  {
    MmakeVarAllOpts_5 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllOpts_5, 0) = ((MR_Box) (Var_11));
    MR_hl_field(2, MmakeVarAllOpts_5, 1) = ((MR_Box) (Var_13));
  }
  Var_18 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".opts");
  Var_69 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(opts_subdir)%.opt)");
  Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_69);
  {
    MmakeVarOpts_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarOpts_6, 0) = ((MR_Box) (Var_18));
    MR_hl_field(2, MmakeVarOpts_6, 1) = ((MR_Box) (Var_20));
  }
  Var_25 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".all_trans_opts");
  Var_72 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(trans_opts_subdir)%.trans_opt)");
  Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_72);
  {
    MmakeVarAllTransOpts_7 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllTransOpts_7, 0) = ((MR_Box) (Var_25));
    MR_hl_field(2, MmakeVarAllTransOpts_7, 1) = ((MR_Box) (Var_27));
  }
  Var_32 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".trans_opts");
  Var_75 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(trans_opts_subdir)%.trans_opt)");
  Var_34 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_75);
  {
    MmakeVarTransOpts_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarTransOpts_8, 0) = ((MR_Box) (Var_32));
    MR_hl_field(2, MmakeVarTransOpts_8, 1) = ((MR_Box) (Var_34));
  }
  Var_39 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".optdates");
  Var_78 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(optdates_subdir)%.optdate)");
  Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_78);
  {
    MmakeVarOptDates_9 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarOptDates_9, 0) = ((MR_Box) (Var_39));
    MR_hl_field(2, MmakeVarOptDates_9, 1) = ((MR_Box) (Var_41));
  }
  Var_46 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".trans_opt_dates");
  Var_81 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(trans_opt_dates_subdir)%.trans_opt_date)");
  Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_81);
  {
    MmakeVarTransOptDates_10 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarTransOptDates_10, 0) = ((MR_Box) (Var_46));
    MR_hl_field(2, MmakeVarTransOptDates_10, 1) = ((MR_Box) (Var_48));
  }
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (MmakeVarTransOptDates_10));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (MmakeVarOptDates_9));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) (Var_59));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (MmakeVarTransOpts_8));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_58));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (MmakeVarAllTransOpts_7));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) (Var_57));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (MmakeVarOpts_6));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_56));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (MmakeVarAllOpts_5));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_55));
  }
  *OptFragments_4 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_3[7]), Var_54);
}

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_intn_vars_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = libs__mmakefiles__mmake_entry_to_fragment_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_intn_vars_2_p_0(
  MR_String ModuleMakeVarName_3,
  MR_Word * IntnFragments_4)
{
  MR_Word MmakeVarInt1s_5;
  MR_Word MmakeVarInt2s_6;
  MR_Word MmakeVarInts_7;
  MR_Word MmakeVarInt3s_8;
  MR_Word MmakeVarInt0s_9;
  MR_Word MmakeVarInt0sToClean_10;
  MR_Word MmakeVarAllInt0s_11;
  MR_Word MmakeVarDates_12;
  MR_Word MmakeVarDate0s_13;
  MR_Word MmakeVarDate3s_14;
  MR_String Var_15;
  MR_Word Var_17;
  MR_String Var_18;
  MR_String Var_24;
  MR_Word Var_26;
  MR_String Var_27;
  MR_String Var_33;
  MR_Word Var_35;
  MR_String Var_36;
  MR_Word Var_41;
  MR_String Var_42;
  MR_String Var_48;
  MR_String Var_50;
  MR_String Var_55;
  MR_String Var_57;
  MR_String Var_62;
  MR_String Var_64;
  MR_String Var_69;
  MR_String Var_71;
  MR_String Var_76;
  MR_String Var_78;
  MR_String Var_83;
  MR_String Var_85;
  MR_String Var_90;
  MR_String Var_92;
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
  MR_String Var_114;
  MR_String Var_117;
  MR_String Var_120;
  MR_String Var_123;
  MR_String Var_126;
  MR_String Var_129;
  MR_String Var_132;
  MR_String Var_135;
  MR_String Var_138;
  MR_String Var_141;
  MR_String Var_144;

  Var_15 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".int1s");
  Var_114 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(int1s_subdir)%.int)");
  Var_18 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_114);
  {
    Var_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_17, 0) = ((MR_Box) (Var_18));
    MR_hl_field(1, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeVarInt1s_5 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarInt1s_5, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarInt1s_5, 1) = ((MR_Box) (Var_15));
    MR_hl_field(3, MmakeVarInt1s_5, 2) = ((MR_Box) (Var_17));
  }
  Var_24 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".int2s");
  Var_117 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(int2s_subdir)%.int2)");
  Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_117);
  {
    Var_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_26, 0) = ((MR_Box) (Var_27));
    MR_hl_field(1, Var_26, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeVarInt2s_6 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarInt2s_6, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarInt2s_6, 1) = ((MR_Box) (Var_24));
    MR_hl_field(3, MmakeVarInt2s_6, 2) = ((MR_Box) (Var_26));
  }
  Var_33 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".ints");
  Var_120 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(ints_subdir)%.int)");
  Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_120);
  Var_123 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(int2s_subdir)%.int2)");
  Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_123);
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_41));
  }
  {
    MmakeVarInts_7 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarInts_7, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarInts_7, 1) = ((MR_Box) (Var_33));
    MR_hl_field(3, MmakeVarInts_7, 2) = ((MR_Box) (Var_35));
  }
  Var_48 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".int3s");
  Var_126 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(int3s_subdir)%.int3)");
  Var_50 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_126);
  {
    MmakeVarInt3s_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarInt3s_8, 0) = ((MR_Box) (Var_48));
    MR_hl_field(2, MmakeVarInt3s_8, 1) = ((MR_Box) (Var_50));
  }
  Var_55 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".int0s");
  Var_129 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".parent_mods:%=\044(int0s_subdir)%.int0)");
  Var_57 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_129);
  {
    MmakeVarInt0s_9 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarInt0s_9, 0) = ((MR_Box) (Var_55));
    MR_hl_field(2, MmakeVarInt0s_9, 1) = ((MR_Box) (Var_57));
  }
  Var_62 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".int0s_to_clean");
  Var_132 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(int0s_subdir)%.int0)");
  Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_132);
  {
    MmakeVarInt0sToClean_10 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarInt0sToClean_10, 0) = ((MR_Box) (Var_62));
    MR_hl_field(2, MmakeVarInt0sToClean_10, 1) = ((MR_Box) (Var_64));
  }
  Var_69 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".all_int0s");
  Var_135 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(int0s_subdir)%.int0)");
  Var_71 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_135);
  {
    MmakeVarAllInt0s_11 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllInt0s_11, 0) = ((MR_Box) (Var_69));
    MR_hl_field(2, MmakeVarAllInt0s_11, 1) = ((MR_Box) (Var_71));
  }
  Var_76 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".dates");
  Var_138 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(dates_subdir)%.date)");
  Var_78 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_138);
  {
    MmakeVarDates_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarDates_12, 0) = ((MR_Box) (Var_76));
    MR_hl_field(2, MmakeVarDates_12, 1) = ((MR_Box) (Var_78));
  }
  Var_83 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".date0s");
  Var_141 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(date0s_subdir)%.date0)");
  Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_141);
  {
    MmakeVarDate0s_13 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarDate0s_13, 0) = ((MR_Box) (Var_83));
    MR_hl_field(2, MmakeVarDate0s_13, 1) = ((MR_Box) (Var_85));
  }
  Var_90 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".date3s");
  Var_144 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(date3s_subdir)%.date3)");
  Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_144);
  {
    MmakeVarDate3s_14 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarDate3s_14, 0) = ((MR_Box) (Var_90));
    MR_hl_field(2, MmakeVarDate3s_14, 1) = ((MR_Box) (Var_92));
  }
  {
    Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_107, 0) = ((MR_Box) (MmakeVarDate3s_14));
    MR_hl_field(1, Var_107, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_106 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_106, 0) = ((MR_Box) (MmakeVarDate0s_13));
    MR_hl_field(1, Var_106, 1) = ((MR_Box) (Var_107));
  }
  {
    Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_105, 0) = ((MR_Box) (MmakeVarDates_12));
    MR_hl_field(1, Var_105, 1) = ((MR_Box) (Var_106));
  }
  {
    Var_104 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_104, 0) = ((MR_Box) (MmakeVarInt3s_8));
    MR_hl_field(1, Var_104, 1) = ((MR_Box) (Var_105));
  }
  {
    Var_103 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_103, 0) = ((MR_Box) (MmakeVarAllInt0s_11));
    MR_hl_field(1, Var_103, 1) = ((MR_Box) (Var_104));
  }
  {
    Var_102 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_102, 0) = ((MR_Box) (MmakeVarInt0sToClean_10));
    MR_hl_field(1, Var_102, 1) = ((MR_Box) (Var_103));
  }
  {
    Var_101 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_101, 0) = ((MR_Box) (MmakeVarInt0s_9));
    MR_hl_field(1, Var_101, 1) = ((MR_Box) (Var_102));
  }
  {
    Var_100 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_100, 0) = ((MR_Box) (MmakeVarInts_7));
    MR_hl_field(1, Var_100, 1) = ((MR_Box) (Var_101));
  }
  {
    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_99, 0) = ((MR_Box) (MmakeVarInt2s_6));
    MR_hl_field(1, Var_99, 1) = ((MR_Box) (Var_100));
  }
  {
    Var_98 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_98, 0) = ((MR_Box) (MmakeVarInt1s_5));
    MR_hl_field(1, Var_98, 1) = ((MR_Box) (Var_99));
  }
  *IntnFragments_4 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_3[6]), Var_98);
}

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_mod_misc_vars_5_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__2_2;

  conv2_HeadVar__2_2 = libs__mmakefiles__mmake_entry_to_fragment_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv2_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_mod_misc_vars_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__2_2;

  conv1_HeadVar__2_2 = mdbcomp__sym_name__sym_name_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_mod_misc_vars_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__generate_mmakefile_fragments__IntroducedFrom__pred__generate_dv_file_define_mod_misc_vars__1262__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_mod_misc_vars_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = mdbcomp__sym_name__sym_name_to_string_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_mod_misc_vars_5_p_0(
  MR_Word Globals_6,
  MR_Word DepsMap_7,
  MR_Word Modules_8,
  MR_String ModuleMakeVarName_9,
  MR_Word * ModMiscFragments_10)
{
  MR_bool succeeded;
  MR_Word ModuleNameStrs_11;
  MR_Word MmakeVarModuleMods_12;
  MR_Word HasSubmodules_13;
  MR_Word ModulesWithSubmodules_19;
  MR_Word ModuleWithSubmodulesNameStrs_20;
  MR_Word MmakeVarModuleParentMods_21;
  MR_Word MmakeVarDs_22;
  MR_String ModuleDepFileExtStr_23;
  MR_Word MmakeVarModuleDeps_24;
  MR_Word MmakeVarProfs_25;
  MR_String Var_27;
  MR_String Var_32;
  MR_String Var_34;
  MR_String Var_36;
  MR_String Var_43;
  MR_String Var_45;
  MR_String Var_52;
  MR_String Var_54;
  MR_Word Var_60;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_String Var_119;
  MR_String Var_122;
  MR_String Var_124;
  MR_String Var_125;
  MR_String Var_128;

  ModuleNameStrs_11 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_3[3]), Modules_8);
  Var_27 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".mods");
  {
    MmakeVarModuleMods_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarModuleMods_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarModuleMods_12, 1) = ((MR_Box) (Var_27));
    MR_hl_field(3, MmakeVarModuleMods_12, 2) = ((MR_Box) (ModuleNameStrs_11));
  }
  {
    HasSubmodules_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HasSubmodules_13, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[2]));
    MR_hl_field(0, HasSubmodules_13, 1) = ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_mod_misc_vars_5_p_0_2));
    MR_hl_field(0, HasSubmodules_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, HasSubmodules_13, 3) = ((MR_Box) (DepsMap_7));
  }
  mercury__list__filter_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HasSubmodules_13, Modules_8, &ModulesWithSubmodules_19);
  ModuleWithSubmodulesNameStrs_20 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_3[4]), ModulesWithSubmodules_19);
  Var_32 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".parent_mods");
  {
    MmakeVarModuleParentMods_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarModuleParentMods_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarModuleParentMods_21, 1) = ((MR_Box) (Var_32));
    MR_hl_field(3, MmakeVarModuleParentMods_21, 2) = ((MR_Box) (ModuleWithSubmodulesNameStrs_20));
  }
  Var_34 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".ds");
  Var_119 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".mods:%=\044(ds_subdir)%.d)");
  Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_119);
  {
    MmakeVarDs_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarDs_22, 0) = ((MR_Box) (Var_34));
    MR_hl_field(2, MmakeVarDs_22, 1) = ((MR_Box) (Var_36));
  }
  ModuleDepFileExtStr_23 = parse_tree__file_names__extension_to_string_2_f_0(Globals_6, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[6])));
  Var_43 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".module_deps");
  Var_122 = mercury__string__f_43_43_2_f_0(ModuleDepFileExtStr_23, (MR_String) ")");
  Var_124 = mercury__string__f_43_43_2_f_0((MR_String) ".mods:%=\044(module_deps_subdir)%", Var_122);
  Var_125 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, Var_124);
  Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_125);
  {
    MmakeVarModuleDeps_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarModuleDeps_24, 0) = ((MR_Box) (Var_43));
    MR_hl_field(2, MmakeVarModuleDeps_24, 1) = ((MR_Box) (Var_45));
  }
  Var_52 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".profs");
  Var_128 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".mods:%=%.prof)");
  Var_54 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_128);
  {
    MmakeVarProfs_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarProfs_25, 0) = ((MR_Box) (Var_52));
    MR_hl_field(2, MmakeVarProfs_25, 1) = ((MR_Box) (Var_54));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (MmakeVarProfs_25));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (MmakeVarModuleDeps_24));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (MmakeVarDs_22));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (MmakeVarModuleParentMods_21));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
  }
  {
    Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_60, 0) = ((MR_Box) (MmakeVarModuleMods_12));
    MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_61));
  }
  *ModMiscFragments_10 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_3[5]), Var_60);
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__select_no_fatal_error_modules_3_p_0(
  MR_Word DepsMap_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word ModuleName_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ModuleNames0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word ModuleNamesTail_9;
    MR_Word BurdenedModule_11;
    MR_Word Baggage_12;
    MR_Word ModuleErrors_13;
    MR_Word FatalErrors_14;
    MR_Word Var_15;
    MR_Box conv0_Var_15;

    parse_tree__generate_mmakefile_fragments__select_no_fatal_error_modules_3_p_0(DepsMap_1, ModuleNames0_7, &ModuleNamesTail_9);
    mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_1, ((MR_Box) (ModuleName_6)), &conv0_Var_15);
    Var_15 = ((MR_Word) (conv0_Var_15));
    BurdenedModule_11 = ((MR_Word) ((MR_hl_field(0, Var_15, 1))));
    Baggage_12 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_11, 0))));
    ModuleErrors_13 = ((MR_Word) ((MR_hl_field(0, Baggage_12, 7))));
    FatalErrors_14 = ((MR_Word) ((MR_hl_field(0, ModuleErrors_13, 0))));
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
parse_tree__generate_mmakefile_fragments__generate_d_mmakefile_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__4_86;

  parse_tree__generate_mmakefile_fragments__IntroducedFrom__pred__generate_d_mmakefile__287__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_86);
  *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_86));
}

void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_d_mmakefile_10_p_0(
  MR_Word Globals_11,
  MR_Word Baggage_12,
  MR_Word ParseTreeModuleSrc_13,
  MR_Word DFileDeps_14,
  MR_Word IntermodDeps_15,
  MR_Word * STATE_VARIABLE_MmakeFile_78,
  MR_Word STATE_VARIABLE_Cache_0_79,
  MR_Word * STATE_VARIABLE_Cache_80)
{
  MR_bool succeeded;
  MR_String SourceFileName_19 = ((MR_String) ((MR_hl_field(0, Baggage_12, 0))));
  MR_Word SourceFileTopModuleName_20 = ((MR_Word) ((MR_hl_field(0, Baggage_12, 2))));
  MR_Word MaybeTopModule_21 = ((MR_Word) ((MR_hl_field(0, Baggage_12, 3))));
  MR_Word ModuleName_22 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_13, 0))));
  MR_String ModuleNameStr_23;
  MR_Word DirectDeps0_24;
  MR_Word IndirectDeps0_25;
  MR_Word AllMihDeps_28;
  MR_Word MaybeInclTransOptRule_29;
  MR_Word MaybeTransOptDeps_30;
  MR_Word DirectDeps_31;
  MR_Word IndirectDeps1_32;
  MR_Word IndirectDeps_33;
  MR_Word Ancestors_34;
  MR_Word InclMap_35;
  MR_Word PublicChildren_43;
  MR_Word FactTableFileNamesSet_44;
  MR_Word ForeignIncludeFiles_45;
  MR_String Version_46;
  MR_String FullArch_47;
  MR_Word MmakeStartComment_48;
  MR_String ModuleMakeVarName_49;
  MR_String TransOptDateFileName_50;
  MR_Word MmakeRulesTransOpt_51;
  MR_String ObjFileName_52;
  MR_Word MmakeVarsFactTables_53;
  MR_Word FactTableSourceGroups_54;
  MR_Word MmakeRulesFactTables_55;
  MR_String ErrFileName_57;
  MR_String OptDateFileName_58;
  MR_String CDateFileName_59;
  MR_String JavaDateFileName_60;
  MR_String PicObjFileName_61;
  MR_String Int0FileName_62;
  MR_Word MmakeRuleDateFileDeps_63;
  MR_Word MmakeRulesNestedDeps_64;
  MR_Word MmakeRulesIntermod_65;
  MR_String CFileName_66;
  MR_Word MmakeRulesCHeaders_67;
  MR_Word MmakeFragmentModuleDep_68;
  MR_String DateFileName_69;
  MR_String Date0FileName_70;
  MR_Word MmakeRulesParentDates_71;
  MR_Word MmakeRulesForeignImports_72;
  MR_String Date3FileName_73;
  MR_Word MmakeRulesInstallShadows_74;
  MR_Word MmakeRulesSubDirShorthand_75;
  MR_Word MmakeRulesNonDefault_76;
  MR_Word Var_87;
  MR_Word STATE_VARIABLE_Cache_1_91;
  MR_Word STATE_VARIABLE_Cache_2_93;
  MR_Word STATE_VARIABLE_Cache_3_100;
  MR_Word STATE_VARIABLE_Cache_4_104;
  MR_Word STATE_VARIABLE_Cache_5_108;
  MR_Word STATE_VARIABLE_Cache_6_112;
  MR_Word STATE_VARIABLE_Cache_7_116;
  MR_Word STATE_VARIABLE_Cache_8_120;
  MR_Word STATE_VARIABLE_Cache_9_122;
  MR_Word STATE_VARIABLE_Cache_10_123;
  MR_Word STATE_VARIABLE_Cache_11_124;
  MR_Word STATE_VARIABLE_Cache_12_127;
  MR_Word STATE_VARIABLE_Cache_13_129;
  MR_Word STATE_VARIABLE_Cache_14_130;
  MR_Word STATE_VARIABLE_Cache_15_133;
  MR_Word STATE_VARIABLE_Cache_16_137;
  MR_Word STATE_VARIABLE_Cache_17_139;
  MR_Word STATE_VARIABLE_Cache_18_140;
  MR_Word STATE_VARIABLE_Cache_19_143;
  MR_Word STATE_VARIABLE_Cache_20_145;
  MR_Word STATE_VARIABLE_MmakeFile_1_148;
  MR_Word STATE_VARIABLE_MmakeFile_2_149;
  MR_Word STATE_VARIABLE_MmakeFile_3_150;
  MR_Word STATE_VARIABLE_MmakeFile_4_151;
  MR_Word STATE_VARIABLE_MmakeFile_5_152;
  MR_Word STATE_VARIABLE_MmakeFile_6_153;
  MR_Word STATE_VARIABLE_MmakeFile_7_154;
  MR_Word STATE_VARIABLE_MmakeFile_8_155;
  MR_Word STATE_VARIABLE_MmakeFile_9_156;
  MR_Word STATE_VARIABLE_MmakeFile_10_157;
  MR_Word STATE_VARIABLE_MmakeFile_11_158;
  MR_Word STATE_VARIABLE_MmakeFile_12_159;
  MR_Word STATE_VARIABLE_MmakeFile_13_160;
  MR_Word STATE_VARIABLE_MmakeFile_14_161;
  MR_Box conv1_PublicChildren_43;
  MR_String SourceFileBase_56;
  MR_String Var_266;

  ModuleNameStr_23 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_22);
  DirectDeps0_24 = ((MR_Word) ((MR_hl_field(0, DFileDeps_14, 0))));
  IndirectDeps0_25 = ((MR_Word) ((MR_hl_field(0, DFileDeps_14, 1))));
  AllMihDeps_28 = ((MR_Word) ((MR_hl_field(0, DFileDeps_14, 4))));
  MaybeInclTransOptRule_29 = ((MR_Word) ((MR_hl_field(0, DFileDeps_14, 5))));
  MaybeTransOptDeps_30 = ((MR_Word) ((MR_hl_field(0, DFileDeps_14, 6))));
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)), DirectDeps0_24, &DirectDeps_31);
  mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IndirectDeps0_25, DirectDeps_31, &IndirectDeps1_32);
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)), IndirectDeps1_32, &IndirectDeps_33);
  Ancestors_34 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_22);
  InclMap_35 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_13, 2))));
  Var_87 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_parse_tree__parse_tree__prog_parse_tree__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_3[2]), InclMap_35, ((MR_Box) (Var_87)), &conv1_PublicChildren_43);
  PublicChildren_43 = ((MR_Word) (conv1_PublicChildren_43));
  parse_tree__get_dependencies__get_fact_tables_2_p_0(ParseTreeModuleSrc_13, &FactTableFileNamesSet_44);
  parse_tree__get_dependencies__get_foreign_include_file_infos_2_p_0(ParseTreeModuleSrc_13, &ForeignIncludeFiles_45);
  mercury__library__version_2_p_0(&Version_46, &FullArch_47);
  {
    MmakeStartComment_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MmakeStartComment_48, 0) = ((MR_Box) ((MR_String) "module dependencies"));
    MR_hl_field(0, MmakeStartComment_48, 1) = ((MR_Box) (ModuleNameStr_23));
    MR_hl_field(0, MmakeStartComment_48, 2) = ((MR_Box) (SourceFileName_19));
    MR_hl_field(0, MmakeStartComment_48, 3) = ((MR_Box) (Version_46));
    MR_hl_field(0, MmakeStartComment_48, 4) = ((MR_Box) (FullArch_47));
  }
  parse_tree__file_names__module_name_to_make_var_name_2_p_0(ModuleName_22, &ModuleMakeVarName_49);
  parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_11, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_mmakefile\'/10", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[4])), ModuleName_22, &TransOptDateFileName_50, STATE_VARIABLE_Cache_0_79, &STATE_VARIABLE_Cache_1_91);
  parse_tree__generate_mmakefile_fragments__construct_trans_opt_deps_rule_7_p_0(Globals_11, MaybeInclTransOptRule_29, MaybeTransOptDeps_30, TransOptDateFileName_50, &MmakeRulesTransOpt_51, STATE_VARIABLE_Cache_1_91, &STATE_VARIABLE_Cache_2_93);
  succeeded = mercury__string__remove_suffix_3_p_0(SourceFileName_19, (MR_String) ".m", &SourceFileBase_56);
  if (succeeded)
    ErrFileName_57 = mercury__string__f_43_43_2_f_0(SourceFileBase_56, (MR_String) ".err");
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_mmakefile\'/10", (MR_String) "source file name doesn\'t end in \140.m\'");
      return;
    }
  parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_11, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_mmakefile\'/10", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[5])), ModuleName_22, &OptDateFileName_58, STATE_VARIABLE_Cache_2_93, &STATE_VARIABLE_Cache_3_100);
  parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_11, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_mmakefile\'/10", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[6])), ModuleName_22, &CDateFileName_59, STATE_VARIABLE_Cache_3_100, &STATE_VARIABLE_Cache_4_104);
  parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_11, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_mmakefile\'/10", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[7])), ModuleName_22, &ObjFileName_52, STATE_VARIABLE_Cache_4_104, &STATE_VARIABLE_Cache_5_108);
  parse_tree__generate_mmakefile_fragments__construct_fact_tables_entries_7_p_0(ModuleMakeVarName_49, SourceFileName_19, ObjFileName_52, FactTableFileNamesSet_44, &MmakeVarsFactTables_53, &FactTableSourceGroups_54, &MmakeRulesFactTables_55);
  parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_11, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_mmakefile\'/10", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[8])), ModuleName_22, &JavaDateFileName_60, STATE_VARIABLE_Cache_5_108, &STATE_VARIABLE_Cache_6_112);
  parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_11, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_mmakefile\'/10", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[9])), ModuleName_22, &PicObjFileName_61, STATE_VARIABLE_Cache_6_112, &STATE_VARIABLE_Cache_7_116);
  parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_11, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_mmakefile\'/10", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[0])), ModuleName_22, &Int0FileName_62, STATE_VARIABLE_Cache_7_116, &STATE_VARIABLE_Cache_8_120);
  parse_tree__generate_mmakefile_fragments__construct_date_file_deps_rule_18_p_0(Globals_11, ModuleName_22, SourceFileName_19, Ancestors_34, DirectDeps_31, IndirectDeps_33, PublicChildren_43, Int0FileName_62, OptDateFileName_58, TransOptDateFileName_50, ForeignIncludeFiles_45, CDateFileName_59, JavaDateFileName_60, ErrFileName_57, FactTableSourceGroups_54, &MmakeRuleDateFileDeps_63, STATE_VARIABLE_Cache_8_120, &STATE_VARIABLE_Cache_9_122);
  parse_tree__generate_mmakefile_fragments__construct_build_nested_children_first_rule_6_p_0(Globals_11, ModuleName_22, MaybeTopModule_21, &MmakeRulesNestedDeps_64, STATE_VARIABLE_Cache_9_122, &STATE_VARIABLE_Cache_10_123);
  parse_tree__generate_mmakefile_fragments__construct_intermod_rules_9_p_0(Globals_11, IntermodDeps_15, ErrFileName_57, TransOptDateFileName_50, CDateFileName_59, JavaDateFileName_60, &MmakeRulesIntermod_65, STATE_VARIABLE_Cache_10_123, &STATE_VARIABLE_Cache_11_124);
  parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_11, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_mmakefile\'/10", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[10])), ModuleName_22, &CFileName_66, STATE_VARIABLE_Cache_11_124, &STATE_VARIABLE_Cache_12_127);
  parse_tree__generate_mmakefile_fragments__construct_mih_header_rules_9_p_0(Globals_11, ModuleName_22, AllMihDeps_28, CFileName_66, ObjFileName_52, PicObjFileName_61, &MmakeRulesCHeaders_67, STATE_VARIABLE_Cache_12_127, &STATE_VARIABLE_Cache_13_129);
  parse_tree__generate_mmakefile_fragments__construct_module_dep_fragment_6_p_0(Globals_11, ModuleName_22, CFileName_66, &MmakeFragmentModuleDep_68, STATE_VARIABLE_Cache_13_129, &STATE_VARIABLE_Cache_14_130);
  parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_11, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_mmakefile\'/10", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[1])), ModuleName_22, &DateFileName_69, STATE_VARIABLE_Cache_14_130, &STATE_VARIABLE_Cache_15_133);
  parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_11, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_mmakefile\'/10", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[2])), ModuleName_22, &Date0FileName_70, STATE_VARIABLE_Cache_15_133, &STATE_VARIABLE_Cache_16_137);
  parse_tree__generate_mmakefile_fragments__construct_self_and_parent_date_date0_rules_10_p_0(Globals_11, SourceFileName_19, Date0FileName_70, DateFileName_69, Ancestors_34, DirectDeps_31, IndirectDeps_33, &MmakeRulesParentDates_71, STATE_VARIABLE_Cache_16_137, &STATE_VARIABLE_Cache_17_139);
  parse_tree__generate_mmakefile_fragments__construct_foreign_import_rules_9_p_0(Globals_11, ModuleName_22, DFileDeps_14, IntermodDeps_15, ObjFileName_52, PicObjFileName_61, &MmakeRulesForeignImports_72, STATE_VARIABLE_Cache_17_139, &STATE_VARIABLE_Cache_18_140);
  parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_11, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_mmakefile\'/10", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[3])), ModuleName_22, &Date3FileName_73, STATE_VARIABLE_Cache_18_140, &STATE_VARIABLE_Cache_19_143);
  parse_tree__generate_mmakefile_fragments__construct_install_shadow_rules_11_p_0(Globals_11, ModuleName_22, Int0FileName_62, Date0FileName_70, DateFileName_69, Date3FileName_73, OptDateFileName_58, TransOptDateFileName_50, &MmakeRulesInstallShadows_74, STATE_VARIABLE_Cache_19_143, &STATE_VARIABLE_Cache_20_145);
  parse_tree__generate_mmakefile_fragments__construct_subdir_short_rules_5_p_0(Globals_11, ModuleName_22, &MmakeRulesSubDirShorthand_75, STATE_VARIABLE_Cache_20_145, STATE_VARIABLE_Cache_80);
  Var_266 = parse_tree__source_file_map__default_source_file_name_1_f_0(ModuleName_22);
  succeeded = (strcmp(SourceFileName_19, Var_266) == 0);
  if (succeeded)
    MmakeRulesNonDefault_76 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word HaveMap_77;

    parse_tree__source_file_map__have_source_file_map_3_p_0(&HaveMap_77);
    parse_tree__generate_mmakefile_fragments__construct_rules_for_nondefault_file_names_11_p_0(HaveMap_77, SourceFileTopModuleName_20, SourceFileName_19, Date0FileName_70, DateFileName_69, Date3FileName_73, OptDateFileName_58, TransOptDateFileName_50, CDateFileName_59, JavaDateFileName_60, &MmakeRulesNonDefault_76);
  }
  libs__mmakefiles__start_mmakefile_1_p_0(&STATE_VARIABLE_MmakeFile_1_148);
  libs__mmakefiles__add_mmake_entry_3_p_0(MmakeStartComment_48, STATE_VARIABLE_MmakeFile_1_148, &STATE_VARIABLE_MmakeFile_2_149);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesTransOpt_51, STATE_VARIABLE_MmakeFile_2_149, &STATE_VARIABLE_MmakeFile_3_150);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeVarsFactTables_53, STATE_VARIABLE_MmakeFile_3_150, &STATE_VARIABLE_MmakeFile_4_151);
  libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleDateFileDeps_63, STATE_VARIABLE_MmakeFile_4_151, &STATE_VARIABLE_MmakeFile_5_152);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesFactTables_55, STATE_VARIABLE_MmakeFile_5_152, &STATE_VARIABLE_MmakeFile_6_153);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesNestedDeps_64, STATE_VARIABLE_MmakeFile_6_153, &STATE_VARIABLE_MmakeFile_7_154);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesIntermod_65, STATE_VARIABLE_MmakeFile_7_154, &STATE_VARIABLE_MmakeFile_8_155);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesCHeaders_67, STATE_VARIABLE_MmakeFile_8_155, &STATE_VARIABLE_MmakeFile_9_156);
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentModuleDep_68, STATE_VARIABLE_MmakeFile_9_156, &STATE_VARIABLE_MmakeFile_10_157);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesParentDates_71, STATE_VARIABLE_MmakeFile_10_157, &STATE_VARIABLE_MmakeFile_11_158);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesForeignImports_72, STATE_VARIABLE_MmakeFile_11_158, &STATE_VARIABLE_MmakeFile_12_159);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesInstallShadows_74, STATE_VARIABLE_MmakeFile_12_159, &STATE_VARIABLE_MmakeFile_13_160);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesSubDirShorthand_75, STATE_VARIABLE_MmakeFile_13_160, &STATE_VARIABLE_MmakeFile_14_161);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesNonDefault_76, STATE_VARIABLE_MmakeFile_14_161, STATE_VARIABLE_MmakeFile_78);
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_rules_for_nondefault_file_names_11_p_0(
  MR_Word HaveMap_12,
  MR_Word SourceFileTopModuleName_13,
  MR_String SourceFileName_14,
  MR_String Date0FileName_15,
  MR_String DateFileName_16,
  MR_String Date3FileName_17,
  MR_String OptDateFileName_18,
  MR_String TransOptDateFileName_19,
  MR_String CDateFileName_20,
  MR_String JavaDateFileName_21,
  MR_Word * MmakeRulesNonDefault_22)
{
  MR_String ModuleArg_23;
  MR_Word Var_24;
  MR_Word Var_27;
  MR_Word Var_29;
  MR_String Var_30;
  MR_Word Var_33;
  MR_Word Var_34;
  MR_Word Var_39;
  MR_String Var_40;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_49;
  MR_String Var_50;
  MR_Word Var_53;
  MR_Word Var_54;
  MR_Word Var_59;
  MR_String Var_60;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_69;
  MR_String Var_70;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_79;
  MR_String Var_80;
  MR_String Var_82;
  MR_Word Var_85;
  MR_Word Var_86;
  MR_Word Var_91;
  MR_String Var_92;
  MR_String Var_94;

  switch (HaveMap_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(SourceFileTopModuleName_13, &ModuleArg_23);
      break;
    case (MR_Integer) 0:
      ModuleArg_23 = SourceFileName_14;
      break;
  }
  {
    Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_27, 0) = ((MR_Box) (SourceFileName_14));
    MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCPI) \044(ALL_GRADEFLAGS) \044(ALL_MCPIFLAGS) ", ModuleArg_23);
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_24, 1) = ((MR_Box) ((MR_String) "date0_on_src"));
    MR_hl_field(3, Var_24, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_24, 3) = ((MR_Box) (Date0FileName_15));
    MR_hl_field(3, Var_24, 4) = ((MR_Box) (Var_27));
    MR_hl_field(3, Var_24, 5) = ((MR_Box) (Var_29));
  }
  Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCI) \044(ALL_GRADEFLAGS) \044(ALL_MCIFLAGS) ", ModuleArg_23);
  {
    Var_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_39, 0) = ((MR_Box) (Var_40));
    MR_hl_field(1, Var_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_34, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_34, 1) = ((MR_Box) ((MR_String) "date_on_src"));
    MR_hl_field(3, Var_34, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_34, 3) = ((MR_Box) (DateFileName_16));
    MR_hl_field(3, Var_34, 4) = ((MR_Box) (Var_27));
    MR_hl_field(3, Var_34, 5) = ((MR_Box) (Var_39));
  }
  Var_50 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCSI) \044(ALL_GRADEFLAGS) \044(ALL_MCSIFLAGS) ", ModuleArg_23);
  {
    Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_49, 0) = ((MR_Box) (Var_50));
    MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_44, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_44, 1) = ((MR_Box) ((MR_String) "date3_on_src"));
    MR_hl_field(3, Var_44, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_44, 3) = ((MR_Box) (Date3FileName_17));
    MR_hl_field(3, Var_44, 4) = ((MR_Box) (Var_27));
    MR_hl_field(3, Var_44, 5) = ((MR_Box) (Var_49));
  }
  Var_60 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCOI) \044(ALL_GRADEFLAGS) \044(ALL_MCOIFLAGS) ", ModuleArg_23);
  {
    Var_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_59, 0) = ((MR_Box) (Var_60));
    MR_hl_field(1, Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_54 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_54, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_54, 1) = ((MR_Box) ((MR_String) "opt_date_on_src"));
    MR_hl_field(3, Var_54, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_54, 3) = ((MR_Box) (OptDateFileName_18));
    MR_hl_field(3, Var_54, 4) = ((MR_Box) (Var_27));
    MR_hl_field(3, Var_54, 5) = ((MR_Box) (Var_59));
  }
  Var_70 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCTOI) \044(ALL_GRADEFLAGS) \044(ALL_MCTOIFLAGS) ", ModuleArg_23);
  {
    Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_69, 0) = ((MR_Box) (Var_70));
    MR_hl_field(1, Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_64, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_64, 1) = ((MR_Box) ((MR_String) "trans_opt_date_on_src"));
    MR_hl_field(3, Var_64, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_64, 3) = ((MR_Box) (TransOptDateFileName_19));
    MR_hl_field(3, Var_64, 4) = ((MR_Box) (Var_27));
    MR_hl_field(3, Var_64, 5) = ((MR_Box) (Var_69));
  }
  Var_82 = mercury__string__f_43_43_2_f_0(ModuleArg_23, (MR_String) " \044(ERR_REDIRECT)");
  Var_80 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) ", Var_82);
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_74, 1) = ((MR_Box) ((MR_String) "c_date_on_src"));
    MR_hl_field(3, Var_74, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_74, 3) = ((MR_Box) (CDateFileName_20));
    MR_hl_field(3, Var_74, 4) = ((MR_Box) (Var_27));
    MR_hl_field(3, Var_74, 5) = ((MR_Box) (Var_79));
  }
  Var_94 = mercury__string__f_43_43_2_f_0(ModuleArg_23, (MR_String) " \044(ERR_REDIRECT)");
  Var_92 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) --java-only ", Var_94);
  {
    Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_91, 0) = ((MR_Box) (Var_92));
    MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_86 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_86, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_86, 1) = ((MR_Box) ((MR_String) "java_date_on_src"));
    MR_hl_field(3, Var_86, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_86, 3) = ((MR_Box) (JavaDateFileName_21));
    MR_hl_field(3, Var_86, 4) = ((MR_Box) (Var_27));
    MR_hl_field(3, Var_86, 5) = ((MR_Box) (Var_91));
  }
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (Var_86));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_73 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_73, 0) = ((MR_Box) (Var_74));
    MR_hl_field(1, Var_73, 1) = ((MR_Box) (Var_85));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_73));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (Var_54));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_63));
  }
  {
    Var_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_43, 0) = ((MR_Box) (Var_44));
    MR_hl_field(1, Var_43, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_33, 0) = ((MR_Box) (Var_34));
    MR_hl_field(1, Var_33, 1) = ((MR_Box) (Var_43));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRulesNonDefault_22 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_24));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_33));
  }
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_subdir_short_rules_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MmakeRule_10;
  MR_Word conv0_STATE_VARIABLE_Cache_17;

  parse_tree__generate_mmakefile_fragments__construct_subdirs_shorthand_rule_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_MmakeRule_10, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_17);
  *wrapper_arg_2 = ((MR_Box) (conv1_MmakeRule_10));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_17));
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_subdir_short_rules_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleName_7,
  MR_Word * MmakeRulesSubDirShorthand_8,
  MR_Word STATE_VARIABLE_Cache_0_12,
  MR_Word * STATE_VARIABLE_Cache_13)
{
  MR_Word SubdirSetting_10;

  libs__globals__get_subdir_setting_2_p_0(Globals_6, &SubdirSetting_10);
  switch (SubdirSetting_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *MmakeRulesSubDirShorthand_8 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Cache_13 = STATE_VARIABLE_Cache_0_12;
      }
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 1:
      {
        MR_Word Var_32;
        MR_Box conv2_STATE_VARIABLE_Cache_13;

        {
          Var_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_32, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_8[0]));
          MR_hl_field(0, Var_32, 1) = ((MR_Box) (parse_tree__generate_mmakefile_fragments__construct_subdir_short_rules_5_p_0_1));
          MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_32, 3) = ((MR_Box) (Globals_6));
          MR_hl_field(0, Var_32, 4) = ((MR_Box) (ModuleName_7));
        }
        mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_module_file_name_cache_0), Var_32, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[32])), MmakeRulesSubDirShorthand_8, ((MR_Box) (STATE_VARIABLE_Cache_0_12)), &conv2_STATE_VARIABLE_Cache_13);
        *STATE_VARIABLE_Cache_13 = ((MR_Word) (conv2_STATE_VARIABLE_Cache_13));
      }
      break;
  }
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_install_shadow_rules_11_p_0(
  MR_Word Globals_12,
  MR_Word ModuleName_13,
  MR_String Int0FileName_14,
  MR_String Date0FileName_15,
  MR_String DateFileName_16,
  MR_String Date3FileName_17,
  MR_String OptDateFileName_18,
  MR_String TransOptDateFileName_19,
  MR_Word * MmakeRulesInstallShadows_20,
  MR_Word STATE_VARIABLE_Cache_0_27,
  MR_Word * STATE_VARIABLE_Cache_28)
{
  MR_String IntFileName_22;
  MR_String Int2FileName_23;
  MR_String Int3FileName_24;
  MR_String OptFileName_25;
  MR_String TransOptFileName_26;
  MR_Word STATE_VARIABLE_Cache_1_31;
  MR_Word STATE_VARIABLE_Cache_2_35;
  MR_Word STATE_VARIABLE_Cache_3_39;
  MR_Word STATE_VARIABLE_Cache_4_43;
  MR_Word Var_49;
  MR_Word Var_52;
  MR_Word Var_54;
  MR_String Var_55;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_61;
  MR_Word Var_63;
  MR_String Var_64;
  MR_Word Var_66;
  MR_Word Var_67;
  MR_Word Var_72;
  MR_String Var_73;
  MR_Word Var_75;
  MR_Word Var_76;
  MR_Word Var_79;
  MR_Word Var_81;
  MR_String Var_82;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_88;
  MR_Word Var_90;
  MR_String Var_91;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_97;
  MR_Word Var_99;
  MR_String Var_100;

  parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_12, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_install_shadow_rules\'/11", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[4])), ModuleName_13, &IntFileName_22, STATE_VARIABLE_Cache_0_27, &STATE_VARIABLE_Cache_1_31);
  parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_12, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_install_shadow_rules\'/11", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[5])), ModuleName_13, &Int2FileName_23, STATE_VARIABLE_Cache_1_31, &STATE_VARIABLE_Cache_2_35);
  parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_12, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_install_shadow_rules\'/11", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[8])), ModuleName_13, &Int3FileName_24, STATE_VARIABLE_Cache_2_35, &STATE_VARIABLE_Cache_3_39);
  parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_12, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_install_shadow_rules\'/11", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[22])), ModuleName_13, &OptFileName_25, STATE_VARIABLE_Cache_3_39, &STATE_VARIABLE_Cache_4_43);
  parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_12, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_install_shadow_rules\'/11", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[17])), ModuleName_13, &TransOptFileName_26, STATE_VARIABLE_Cache_4_43, STATE_VARIABLE_Cache_28);
  {
    Var_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_52, 0) = ((MR_Box) (Date0FileName_15));
    MR_hl_field(1, Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_55 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (Var_55));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_49, 1) = ((MR_Box) ((MR_String) "int0_on_date0"));
    MR_hl_field(3, Var_49, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_49, 3) = ((MR_Box) (Int0FileName_14));
    MR_hl_field(3, Var_49, 4) = ((MR_Box) (Var_52));
    MR_hl_field(3, Var_49, 5) = ((MR_Box) (Var_54));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (DateFileName_16));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_64 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (Var_64));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_58 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_58, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_58, 1) = ((MR_Box) ((MR_String) "int_on_date"));
    MR_hl_field(3, Var_58, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_58, 3) = ((MR_Box) (IntFileName_22));
    MR_hl_field(3, Var_58, 4) = ((MR_Box) (Var_61));
    MR_hl_field(3, Var_58, 5) = ((MR_Box) (Var_63));
  }
  Var_73 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_72, 0) = ((MR_Box) (Var_73));
    MR_hl_field(1, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_67 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_67, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_67, 1) = ((MR_Box) ((MR_String) "int2_on_date"));
    MR_hl_field(3, Var_67, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_67, 3) = ((MR_Box) (Int2FileName_23));
    MR_hl_field(3, Var_67, 4) = ((MR_Box) (Var_61));
    MR_hl_field(3, Var_67, 5) = ((MR_Box) (Var_72));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (Date3FileName_17));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_82 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) (Var_82));
    MR_hl_field(1, Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_76 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_76, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_76, 1) = ((MR_Box) ((MR_String) "int3_on_date3"));
    MR_hl_field(3, Var_76, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_76, 3) = ((MR_Box) (Int3FileName_24));
    MR_hl_field(3, Var_76, 4) = ((MR_Box) (Var_79));
    MR_hl_field(3, Var_76, 5) = ((MR_Box) (Var_81));
  }
  {
    Var_88 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_88, 0) = ((MR_Box) (OptDateFileName_18));
    MR_hl_field(1, Var_88, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_91 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
    MR_hl_field(1, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_85 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_85, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_85, 1) = ((MR_Box) ((MR_String) "opt_on_opt_date"));
    MR_hl_field(3, Var_85, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_85, 3) = ((MR_Box) (OptFileName_25));
    MR_hl_field(3, Var_85, 4) = ((MR_Box) (Var_88));
    MR_hl_field(3, Var_85, 5) = ((MR_Box) (Var_90));
  }
  {
    Var_97 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_97, 0) = ((MR_Box) (TransOptDateFileName_19));
    MR_hl_field(1, Var_97, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_100 = libs__mmakefiles__silent_noop_action_0_f_0();
  {
    Var_99 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_99, 0) = ((MR_Box) (Var_100));
    MR_hl_field(1, Var_99, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_94 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_94, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_94, 1) = ((MR_Box) ((MR_String) "trans_opt_on_trans_opt_date"));
    MR_hl_field(3, Var_94, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_94, 3) = ((MR_Box) (TransOptFileName_26));
    MR_hl_field(3, Var_94, 4) = ((MR_Box) (Var_97));
    MR_hl_field(3, Var_94, 5) = ((MR_Box) (Var_99));
  }
  {
    Var_93 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_93, 0) = ((MR_Box) (Var_94));
    MR_hl_field(1, Var_93, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (Var_85));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_93));
  }
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (Var_76));
    MR_hl_field(1, Var_75, 1) = ((MR_Box) (Var_84));
  }
  {
    Var_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_66, 0) = ((MR_Box) (Var_67));
    MR_hl_field(1, Var_66, 1) = ((MR_Box) (Var_75));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (Var_58));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_66));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRulesInstallShadows_20 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (Var_49));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_57));
  }
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_foreign_import_rules_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word DFileDeps_12,
  MR_Word IntermodDeps_13,
  MR_String ObjFileName_14,
  MR_String PicObjFileName_15,
  MR_Word * MmakeRulesForeignImports_16,
  MR_Word STATE_VARIABLE_Cache_0_45,
  MR_Word * STATE_VARIABLE_Cache_46)
{
  MR_Word Target_18;

  libs__globals__get_target_2_p_0(Globals_10, &Target_18);
  switch (Target_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word TargetGroup_19;
        MR_Word MhOrJavaExt_20;
        MR_Word DirectModuleSet_22;
        MR_Word IndirectModuleSet_23;
        MR_Word ModuleOwnFIMDeps_24;
        MR_Word IntermodOnlyFIMDeps_25;
        MR_Word OwnFIMModuleSet_29;
        MR_Word OwnMhModuleSet_30;
        MR_Word OwnMhFileNames_31;
        MR_Word OwnMhGroups_32;
        MR_Word IntermodMhGroups_33;
        MR_Word AllMhGroups_39;
        MR_Word Var_48;
        MR_Word Var_49;
        MR_Word Var_60;
        MR_Word Var_61;
        MR_Word Var_62;
        MR_Word STATE_VARIABLE_Cache_2_64;

        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (PicObjFileName_15));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_48, 0) = ((MR_Box) (ObjFileName_14));
          MR_hl_field(0, Var_48, 1) = ((MR_Box) (Var_49));
        }
        {
          TargetGroup_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TargetGroup_19, 0) = ((MR_Box) ((MR_String) "object_files"));
          MR_hl_field(0, TargetGroup_19, 1) = ((MR_Box) (Var_48));
        }
        MhOrJavaExt_20 = (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[24]));
        DirectModuleSet_22 = ((MR_Word) ((MR_hl_field(0, DFileDeps_12, 0))));
        IndirectModuleSet_23 = ((MR_Word) ((MR_hl_field(0, DFileDeps_12, 1))));
        ModuleOwnFIMDeps_24 = ((MR_Word) ((MR_hl_field(0, DFileDeps_12, 2))));
        IntermodOnlyFIMDeps_25 = ((MR_Word) ((MR_hl_field(0, DFileDeps_12, 3))));
        OwnFIMModuleSet_29 = (MR_Word) (ModuleOwnFIMDeps_24);
        {
          Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_62, 0) = ((MR_Box) (OwnFIMModuleSet_29));
          MR_hl_field(1, Var_62, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_61, 0) = ((MR_Box) (IndirectModuleSet_23));
          MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
        }
        {
          Var_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_60, 0) = ((MR_Box) (DirectModuleSet_22));
          MR_hl_field(1, Var_60, 1) = ((MR_Box) (Var_61));
        }
        OwnMhModuleSet_30 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_60);
        parse_tree__make_module_file_names__convert_module_name_set_to_file_names_6_p_0(Globals_10, MhOrJavaExt_20, OwnMhModuleSet_30, &OwnMhFileNames_31, STATE_VARIABLE_Cache_0_45, &STATE_VARIABLE_Cache_2_64);
        OwnMhGroups_32 = libs__mmakefiles__construct_file_name_maybe_group_2_f_0((MR_String) "own_mh_deps", OwnMhFileNames_31);
        if ((IntermodDeps_13 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          IntermodMhGroups_33 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Cache_46 = STATE_VARIABLE_Cache_2_64;
        }
        else
        {
          MR_Word IntermodFIMModuleSet0_36 = (MR_Word) (IntermodOnlyFIMDeps_25);
          MR_Word IntermodMhModuleSet_37;
          MR_Word IntermodMhFileNames_38;

          mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntermodFIMModuleSet0_36, OwnMhModuleSet_30, &IntermodMhModuleSet_37);
          parse_tree__make_module_file_names__convert_module_name_set_to_file_names_6_p_0(Globals_10, MhOrJavaExt_20, IntermodMhModuleSet_37, &IntermodMhFileNames_38, STATE_VARIABLE_Cache_2_64, STATE_VARIABLE_Cache_46);
          IntermodMhGroups_33 = libs__mmakefiles__construct_file_name_maybe_group_2_f_0((MR_String) "intermod_only_mh_deps", IntermodMhFileNames_38);
        }
        AllMhGroups_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), OwnMhGroups_32, IntermodMhGroups_33);
        if ((AllMhGroups_39 == (MR_Word) ((MR_Unsigned) 0U)))
          *MmakeRulesForeignImports_16 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_String MhOrJavaExtStr_42;
          MR_String RuleName_43;
          MR_Word MmakeRuleForeignImports_44;
          MR_String Var_69;
          MR_Word Var_72;

          MhOrJavaExtStr_42 = parse_tree__file_names__extension_to_string_2_f_0(Globals_10, MhOrJavaExt_20);
          Var_69 = mercury__string__remove_prefix_if_present_2_f_0((MR_String) ".", MhOrJavaExtStr_42);
          RuleName_43 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_deps_for_", Var_69);
          {
            Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_72, 0) = ((MR_Box) (TargetGroup_19));
            MR_hl_field(0, Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MmakeRuleForeignImports_44 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, MmakeRuleForeignImports_44, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, MmakeRuleForeignImports_44, 1) = ((MR_Box) (RuleName_43));
            MR_hl_field(3, MmakeRuleForeignImports_44, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, MmakeRuleForeignImports_44, 3) = ((MR_Box) (Var_72));
            MR_hl_field(3, MmakeRuleForeignImports_44, 4) = ((MR_Box) (AllMhGroups_39));
            MR_hl_field(3, MmakeRuleForeignImports_44, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MmakeRulesForeignImports_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (MmakeRuleForeignImports_44));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String ClassFileName_21;
        MR_Word Var_57;
        MR_Word TargetGroup_107;
        MR_Word MhOrJavaExt_108;
        MR_Word DirectModuleSet_109;
        MR_Word IndirectModuleSet_110;
        MR_Word ModuleOwnFIMDeps_111;
        MR_Word IntermodOnlyFIMDeps_112;
        MR_Word OwnFIMModuleSet_116;
        MR_Word OwnMhModuleSet_117;
        MR_Word OwnMhFileNames_118;
        MR_Word OwnMhGroups_119;
        MR_Word IntermodMhGroups_120;
        MR_Word AllMhGroups_124;
        MR_Word STATE_VARIABLE_Cache_1_128;
        MR_Word Var_129;
        MR_Word Var_130;
        MR_Word Var_131;
        MR_Word STATE_VARIABLE_Cache_2_133;

        parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_10, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_foreign_import_rules\'/9", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[26])), ModuleName_11, &ClassFileName_21, STATE_VARIABLE_Cache_0_45, &STATE_VARIABLE_Cache_1_128);
        {
          Var_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_57, 0) = ((MR_Box) (ClassFileName_21));
          MR_hl_field(0, Var_57, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          TargetGroup_107 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TargetGroup_107, 0) = ((MR_Box) ((MR_String) "class_files"));
          MR_hl_field(0, TargetGroup_107, 1) = ((MR_Box) (Var_57));
        }
        MhOrJavaExt_108 = (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[25]));
        DirectModuleSet_109 = ((MR_Word) ((MR_hl_field(0, DFileDeps_12, 0))));
        IndirectModuleSet_110 = ((MR_Word) ((MR_hl_field(0, DFileDeps_12, 1))));
        ModuleOwnFIMDeps_111 = ((MR_Word) ((MR_hl_field(0, DFileDeps_12, 2))));
        IntermodOnlyFIMDeps_112 = ((MR_Word) ((MR_hl_field(0, DFileDeps_12, 3))));
        OwnFIMModuleSet_116 = (MR_Word) (ModuleOwnFIMDeps_111);
        {
          Var_131 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_131, 0) = ((MR_Box) (OwnFIMModuleSet_116));
          MR_hl_field(1, Var_131, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_130, 0) = ((MR_Box) (IndirectModuleSet_110));
          MR_hl_field(1, Var_130, 1) = ((MR_Box) (Var_131));
        }
        {
          Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_129, 0) = ((MR_Box) (DirectModuleSet_109));
          MR_hl_field(1, Var_129, 1) = ((MR_Box) (Var_130));
        }
        OwnMhModuleSet_117 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_129);
        parse_tree__make_module_file_names__convert_module_name_set_to_file_names_6_p_0(Globals_10, MhOrJavaExt_108, OwnMhModuleSet_117, &OwnMhFileNames_118, STATE_VARIABLE_Cache_1_128, &STATE_VARIABLE_Cache_2_133);
        OwnMhGroups_119 = libs__mmakefiles__construct_file_name_maybe_group_2_f_0((MR_String) "own_mh_deps", OwnMhFileNames_118);
        if ((IntermodDeps_13 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          IntermodMhGroups_120 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Cache_46 = STATE_VARIABLE_Cache_2_133;
        }
        else
        {
          MR_Word IntermodFIMModuleSet0_81 = (MR_Word) (IntermodOnlyFIMDeps_112);
          MR_Word IntermodMhModuleSet_82;
          MR_Word IntermodMhFileNames_83;

          mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IntermodFIMModuleSet0_81, OwnMhModuleSet_117, &IntermodMhModuleSet_82);
          parse_tree__make_module_file_names__convert_module_name_set_to_file_names_6_p_0(Globals_10, MhOrJavaExt_108, IntermodMhModuleSet_82, &IntermodMhFileNames_83, STATE_VARIABLE_Cache_2_133, STATE_VARIABLE_Cache_46);
          IntermodMhGroups_120 = libs__mmakefiles__construct_file_name_maybe_group_2_f_0((MR_String) "intermod_only_mh_deps", IntermodMhFileNames_83);
        }
        AllMhGroups_124 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), OwnMhGroups_119, IntermodMhGroups_120);
        if ((AllMhGroups_124 == (MR_Word) ((MR_Unsigned) 0U)))
          *MmakeRulesForeignImports_16 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_String MhOrJavaExtStr_89;
          MR_String RuleName_90;
          MR_Word MmakeRuleForeignImports_91;
          MR_String Var_93;
          MR_Word Var_96;

          MhOrJavaExtStr_89 = parse_tree__file_names__extension_to_string_2_f_0(Globals_10, MhOrJavaExt_108);
          Var_93 = mercury__string__remove_prefix_if_present_2_f_0((MR_String) ".", MhOrJavaExtStr_89);
          RuleName_90 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_deps_for_", Var_93);
          {
            Var_96 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_96, 0) = ((MR_Box) (TargetGroup_107));
            MR_hl_field(0, Var_96, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MmakeRuleForeignImports_91 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, MmakeRuleForeignImports_91, 0) = ((MR_Box) ((MR_Unsigned) 4U));
            MR_hl_field(3, MmakeRuleForeignImports_91, 1) = ((MR_Box) (RuleName_90));
            MR_hl_field(3, MmakeRuleForeignImports_91, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, MmakeRuleForeignImports_91, 3) = ((MR_Box) (Var_96));
            MR_hl_field(3, MmakeRuleForeignImports_91, 4) = ((MR_Box) (AllMhGroups_124));
            MR_hl_field(3, MmakeRuleForeignImports_91, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MmakeRulesForeignImports_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (MmakeRuleForeignImports_91));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *MmakeRulesForeignImports_16 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_Cache_46 = STATE_VARIABLE_Cache_0_45;
      }
      break;
  }
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_self_and_parent_date_date0_rules_10_p_0(
  MR_Word Globals_11,
  MR_String SourceFileName_12,
  MR_String Date0FileName_13,
  MR_String DateFileName_14,
  MR_Word Ancestors_15,
  MR_Word DirectDeps_16,
  MR_Word IndirectDeps_17,
  MR_Word * MmakeRulesParentDates_18,
  MR_Word STATE_VARIABLE_Cache_0_27,
  MR_Word * STATE_VARIABLE_Cache_28)
{
  MR_Word AncestorDateFileNames_20;
  MR_Word AncestorInt0FileNames_21;
  MR_Word DirectDepInt3FileNames_22;
  MR_Word IndirectDepInt3FileNames_23;
  MR_Word MmakeRuleParentDates_24;
  MR_Word AncestorDate0FileNames_25;
  MR_Word MmakeRuleParentDate0s_26;
  MR_Word STATE_VARIABLE_Cache_1_30;
  MR_Word STATE_VARIABLE_Cache_2_33;
  MR_Word STATE_VARIABLE_Cache_3_36;
  MR_Word STATE_VARIABLE_Cache_4_39;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_46;
  MR_Word Var_47;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_54;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word Var_60;
  MR_Word Var_68;
  MR_Word Var_69;
  MR_Word Var_71;
  MR_Word Var_73;
  MR_Word Var_74;
  MR_Word Var_75;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_81;
  MR_Word Var_84;

  parse_tree__make_module_file_names__convert_module_name_set_to_file_names_6_p_0(Globals_11, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[1])), Ancestors_15, &AncestorDateFileNames_20, STATE_VARIABLE_Cache_0_27, &STATE_VARIABLE_Cache_1_30);
  parse_tree__make_module_file_names__convert_module_name_set_to_file_names_6_p_0(Globals_11, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[0])), Ancestors_15, &AncestorInt0FileNames_21, STATE_VARIABLE_Cache_1_30, &STATE_VARIABLE_Cache_2_33);
  parse_tree__make_module_file_names__convert_module_name_set_to_file_names_6_p_0(Globals_11, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[8])), DirectDeps_16, &DirectDepInt3FileNames_22, STATE_VARIABLE_Cache_2_33, &STATE_VARIABLE_Cache_3_36);
  parse_tree__make_module_file_names__convert_module_name_set_to_file_names_6_p_0(Globals_11, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[8])), IndirectDeps_17, &IndirectDepInt3FileNames_23, STATE_VARIABLE_Cache_3_36, &STATE_VARIABLE_Cache_4_39);
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Date0FileName_13));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (AncestorDateFileNames_20));
  }
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_46, 0) = ((MR_Box) (DateFileName_14));
    MR_hl_field(0, Var_46, 1) = ((MR_Box) (Var_47));
  }
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) ((MR_String) "date files"));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (Var_46));
  }
  {
    Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_43, 0) = ((MR_Box) (Var_44));
    MR_hl_field(0, Var_43, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_51 = libs__mmakefiles__construct_singleton_file_name_group_2_f_0((MR_String) "source", SourceFileName_12);
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_55 = libs__mmakefiles__construct_file_name_maybe_group_2_f_0((MR_String) "ancestor int0", AncestorInt0FileNames_21);
  Var_58 = libs__mmakefiles__construct_file_name_maybe_group_2_f_0((MR_String) "direct dep int3s", DirectDepInt3FileNames_22);
  Var_60 = libs__mmakefiles__construct_file_name_maybe_group_2_f_0((MR_String) "indirect dep int3s", IndirectDepInt3FileNames_23);
  Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_58, Var_60);
  Var_54 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_55, Var_57);
  Var_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_50, Var_54);
  {
    MmakeRuleParentDates_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleParentDates_24, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, MmakeRuleParentDates_24, 1) = ((MR_Box) ((MR_String) "self_and_parent_date_deps"));
    MR_hl_field(3, MmakeRuleParentDates_24, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleParentDates_24, 3) = ((MR_Box) (Var_43));
    MR_hl_field(3, MmakeRuleParentDates_24, 4) = ((MR_Box) (Var_49));
    MR_hl_field(3, MmakeRuleParentDates_24, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  parse_tree__make_module_file_names__convert_module_name_set_to_file_names_6_p_0(Globals_11, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[2])), Ancestors_15, &AncestorDate0FileNames_25, STATE_VARIABLE_Cache_4_39, STATE_VARIABLE_Cache_28);
  {
    Var_71 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_71, 0) = ((MR_Box) (Date0FileName_13));
    MR_hl_field(0, Var_71, 1) = ((MR_Box) (AncestorDate0FileNames_25));
  }
  {
    Var_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_69, 0) = ((MR_Box) ((MR_String) "date0s"));
    MR_hl_field(0, Var_69, 1) = ((MR_Box) (Var_71));
  }
  {
    Var_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_68, 0) = ((MR_Box) (Var_69));
    MR_hl_field(0, Var_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_75 = libs__mmakefiles__construct_singleton_file_name_group_2_f_0((MR_String) "source", SourceFileName_12);
  {
    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
    MR_hl_field(1, Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_79 = libs__mmakefiles__construct_file_name_maybe_group_2_f_0((MR_String) "direct dep int3s", DirectDepInt3FileNames_22);
  Var_81 = libs__mmakefiles__construct_file_name_maybe_group_2_f_0((MR_String) "indirect dep int3s", IndirectDepInt3FileNames_23);
  Var_78 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_79, Var_81);
  Var_73 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Var_74, Var_78);
  {
    MmakeRuleParentDate0s_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleParentDate0s_26, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, MmakeRuleParentDate0s_26, 1) = ((MR_Box) ((MR_String) "self_and_parent_date0_deps"));
    MR_hl_field(3, MmakeRuleParentDate0s_26, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleParentDate0s_26, 3) = ((MR_Box) (Var_68));
    MR_hl_field(3, MmakeRuleParentDate0s_26, 4) = ((MR_Box) (Var_73));
    MR_hl_field(3, MmakeRuleParentDate0s_26, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (MmakeRuleParentDate0s_26));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRulesParentDates_18 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (MmakeRuleParentDates_24));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_84));
  }
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_module_dep_fragment_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_String CFileName_9,
  MR_Word * MmakeFragmentModuleDep_10,
  MR_Word STATE_VARIABLE_Cache_0_14,
  MR_Word * STATE_VARIABLE_Cache_15)
{
  MR_String JavaFileName_12;
  MR_String ModuleDepFileName_13;
  MR_Word STATE_VARIABLE_Cache_1_18;
  MR_Word Var_26;
  MR_Word Var_29;
  MR_Word Var_32;
  MR_Word Var_35;

  parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_7, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_module_dep_fragment\'/6", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[25])), ModuleName_8, &JavaFileName_12, STATE_VARIABLE_Cache_0_14, &STATE_VARIABLE_Cache_1_18);
  parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_7, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_module_dep_fragment\'/6", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[6])), ModuleName_8, &ModuleDepFileName_13, STATE_VARIABLE_Cache_1_18, STATE_VARIABLE_Cache_15);
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (JavaFileName_12));
    MR_hl_field(1, Var_29, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_26, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_26, 1) = ((MR_Box) ((MR_String) "module_dep_on_java"));
    MR_hl_field(3, Var_26, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_26, 3) = ((MR_Box) (ModuleDepFileName_13));
    MR_hl_field(3, Var_26, 4) = ((MR_Box) (Var_29));
    MR_hl_field(3, Var_26, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (CFileName_9));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_32, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_32, 1) = ((MR_Box) ((MR_String) "module_dep_on_c"));
    MR_hl_field(3, Var_32, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, Var_32, 3) = ((MR_Box) (ModuleDepFileName_13));
    MR_hl_field(3, Var_32, 4) = ((MR_Box) (Var_35));
    MR_hl_field(3, Var_32, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *MmakeFragmentModuleDep_10 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_4[7]));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_26));
    MR_hl_field(1, base, 2) = ((MR_Box) (Var_32));
  }
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_mih_header_rules_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word AllMihDeps_12,
  MR_String CFileName_13,
  MR_String ObjFileName_14,
  MR_String PicObjFileName_15,
  MR_Word * MmakeRulesCHeaders_16,
  MR_Word STATE_VARIABLE_Cache_0_28,
  MR_Word * STATE_VARIABLE_Cache_29)
{
  MR_bool succeeded;
  MR_Word HighLevelCode_18;
  MR_Word CompilationTarget_19;
  MR_Word MmakeRulesObjOnMihs_24;
  MR_String MhHeaderFileName_25;
  MR_String MihHeaderFileName_26;
  MR_Word MmakeRuleMhMihOnC_27;
  MR_Word STATE_VARIABLE_Cache_1_34;
  MR_Word STATE_VARIABLE_Cache_2_42;
  MR_Word Var_50;
  MR_Word Var_51;
  MR_Word Var_53;
  MR_Word Var_56;

  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 55, &HighLevelCode_18);
  libs__globals__get_target_2_p_0(Globals_10, &CompilationTarget_19);
  succeeded = (HighLevelCode_18 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (CompilationTarget_19 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word Targets_20;
    MR_Word AllMihModules_21;
    MR_Word AllMihFileNames_22;
    MR_Word MmakeRuleObjOnMihs_23;
    MR_Word Var_31;

    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (PicObjFileName_15));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Targets_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Targets_20, 0) = ((MR_Box) (ObjFileName_14));
      MR_hl_field(0, Targets_20, 1) = ((MR_Box) (Var_31));
    }
    AllMihModules_21 = (MR_Word) (AllMihDeps_12);
    parse_tree__make_module_file_names__convert_module_name_set_to_file_names_6_p_0(Globals_10, (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[23])), AllMihModules_21, &AllMihFileNames_22, STATE_VARIABLE_Cache_0_28, &STATE_VARIABLE_Cache_1_34);
    {
      MmakeRuleObjOnMihs_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleObjOnMihs_23, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, MmakeRuleObjOnMihs_23, 1) = ((MR_Box) ((MR_String) "objs_on_mihs"));
      MR_hl_field(3, MmakeRuleObjOnMihs_23, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, MmakeRuleObjOnMihs_23, 3) = ((MR_Box) (Targets_20));
      MR_hl_field(3, MmakeRuleObjOnMihs_23, 4) = ((MR_Box) (AllMihFileNames_22));
      MR_hl_field(3, MmakeRuleObjOnMihs_23, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRulesObjOnMihs_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MmakeRulesObjOnMihs_24, 0) = ((MR_Box) (MmakeRuleObjOnMihs_23));
      MR_hl_field(1, MmakeRulesObjOnMihs_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  else
  {
    MmakeRulesObjOnMihs_24 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Cache_1_34 = STATE_VARIABLE_Cache_0_28;
  }
  parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_10, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_mih_header_rules\'/9", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[24])), ModuleName_11, &MhHeaderFileName_25, STATE_VARIABLE_Cache_1_34, &STATE_VARIABLE_Cache_2_42);
  parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(Globals_10, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_mih_header_rules\'/9", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[23])), ModuleName_11, &MihHeaderFileName_26, STATE_VARIABLE_Cache_2_42, STATE_VARIABLE_Cache_29);
  {
    Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_51, 0) = ((MR_Box) (MihHeaderFileName_26));
    MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_50, 0) = ((MR_Box) (MhHeaderFileName_25));
    MR_hl_field(0, Var_50, 1) = ((MR_Box) (Var_51));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (CFileName_13));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRuleMhMihOnC_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleMhMihOnC_27, 0) = ((MR_Box) ((MR_Unsigned) 2U));
    MR_hl_field(3, MmakeRuleMhMihOnC_27, 1) = ((MR_Box) ((MR_String) "mh_and_mih_on_c"));
    MR_hl_field(3, MmakeRuleMhMihOnC_27, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleMhMihOnC_27, 3) = ((MR_Box) (Var_50));
    MR_hl_field(3, MmakeRuleMhMihOnC_27, 4) = ((MR_Box) (Var_53));
    MR_hl_field(3, MmakeRuleMhMihOnC_27, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (MmakeRuleMhMihOnC_27));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  *MmakeRulesCHeaders_16 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), MmakeRulesObjOnMihs_24, Var_56);
}

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_intermod_rules_9_p_0_1(
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
parse_tree__generate_mmakefile_fragments__construct_intermod_rules_9_p_0(
  MR_Word Globals_10,
  MR_Word IntermodDeps_11,
  MR_String ErrFileName_12,
  MR_String TransOptDateFileName_13,
  MR_String CDateFileName_14,
  MR_String JavaDateFileName_15,
  MR_Word * MmakeRulesIntermod_16,
  MR_Word STATE_VARIABLE_Cache_0_29,
  MR_Word * STATE_VARIABLE_Cache_30)
{
  if ((IntermodDeps_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MmakeRulesIntermod_16 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Cache_30 = STATE_VARIABLE_Cache_0_29;
  }
  else
  {
    MR_Word PlainOptDeps_18 = ((MR_Word) ((MR_hl_field(1, IntermodDeps_11, 0))));
    MR_Word MaybeTransOptDeps_19 = ((MR_Word) ((MR_hl_field(1, IntermodDeps_11, 1))));
    MR_Word Targets_20;
    MR_Word PlainOptInt0Deps_21;
    MR_Word PlainOptDepsFileNames_22;
    MR_Word PlainOptInt0DepsFileNames_23;
    MR_Word MmakeRuleDateOptInt0Deps_24;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_Cache_1_38;
    MR_Word STATE_VARIABLE_Cache_2_41;
    MR_Word Var_45;

    {
      Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_33, 0) = ((MR_Box) (JavaDateFileName_15));
      MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (CDateFileName_14));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_33));
    }
    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (ErrFileName_12));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (Var_32));
    }
    {
      Targets_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Targets_20, 0) = ((MR_Box) (TransOptDateFileName_13));
      MR_hl_field(0, Targets_20, 1) = ((MR_Box) (Var_31));
    }
    Var_35 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_3[1]), PlainOptDeps_18);
    PlainOptInt0Deps_21 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_35);
    parse_tree__make_module_file_names__convert_module_name_list_to_file_names_6_p_0(Globals_10, (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[22])), PlainOptDeps_18, &PlainOptDepsFileNames_22, STATE_VARIABLE_Cache_0_29, &STATE_VARIABLE_Cache_1_38);
    parse_tree__make_module_file_names__convert_module_name_set_to_file_names_6_p_0(Globals_10, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[0])), PlainOptInt0Deps_21, &PlainOptInt0DepsFileNames_23, STATE_VARIABLE_Cache_1_38, &STATE_VARIABLE_Cache_2_41);
    Var_45 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PlainOptDepsFileNames_22, PlainOptInt0DepsFileNames_23);
    {
      MmakeRuleDateOptInt0Deps_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_24, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_24, 1) = ((MR_Box) ((MR_String) "dates_on_opts_and_int0s"));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_24, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_24, 3) = ((MR_Box) (Targets_20));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_24, 4) = ((MR_Box) (Var_45));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_24, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    if ((MaybeTransOptDeps_19 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MmakeRulesIntermod_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MmakeRuleDateOptInt0Deps_24));
        MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *STATE_VARIABLE_Cache_30 = STATE_VARIABLE_Cache_2_41;
    }
    else
    {
      MR_Word TransOptDeps_25 = ((MR_Word) ((MR_hl_field(1, MaybeTransOptDeps_19, 0))));
      MR_Word ErrDateTargets_26;
      MR_Word TransOptDepsOptFileNames_27;
      MR_Word MmakeRuleTransOptOpts_28;
      MR_Word Var_56;

      {
        ErrDateTargets_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ErrDateTargets_26, 0) = ((MR_Box) (ErrFileName_12));
        MR_hl_field(0, ErrDateTargets_26, 1) = ((MR_Box) (Var_32));
      }
      parse_tree__make_module_file_names__convert_module_name_list_to_file_names_6_p_0(Globals_10, (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[17])), TransOptDeps_25, &TransOptDepsOptFileNames_27, STATE_VARIABLE_Cache_2_41, STATE_VARIABLE_Cache_30);
      {
        MmakeRuleTransOptOpts_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, MmakeRuleTransOptOpts_28, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, MmakeRuleTransOptOpts_28, 1) = ((MR_Box) ((MR_String) "dates_on_trans_opts"));
        MR_hl_field(3, MmakeRuleTransOptOpts_28, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(3, MmakeRuleTransOptOpts_28, 3) = ((MR_Box) (ErrDateTargets_26));
        MR_hl_field(3, MmakeRuleTransOptOpts_28, 4) = ((MR_Box) (TransOptDepsOptFileNames_27));
        MR_hl_field(3, MmakeRuleTransOptOpts_28, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_56, 0) = ((MR_Box) (MmakeRuleTransOptOpts_28));
        MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *MmakeRulesIntermod_16 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MmakeRuleDateOptInt0Deps_24));
        MR_hl_field(1, base, 1) = ((MR_Box) (Var_56));
      }
    }
  }
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_build_nested_children_first_rule_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_MmakeRule_12;
  MR_Word conv0_STATE_VARIABLE_Cache_18;

  parse_tree__generate_mmakefile_fragments__construct_nested_deps_rule_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_MmakeRule_12, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_18);
  *wrapper_arg_2 = ((MR_Box) (conv1_MmakeRule_12));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_18));
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_build_nested_children_first_rule_6_p_0(
  MR_Word Globals_7,
  MR_Word ModuleName_8,
  MR_Word MaybeTopModule_9,
  MR_Word * MmakeRulesNestedDeps_10,
  MR_Word STATE_VARIABLE_Cache_0_14,
  MR_Word * STATE_VARIABLE_Cache_15)
{
  MR_bool succeeded;
  MR_Word NestedModuleNameSet_12;

  NestedModuleNameSet_12 = parse_tree__module_baggage__get_nested_children_of_top_module_1_f_0(MaybeTopModule_9);
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NestedModuleNameSet_12);
  if (succeeded)
  {
    *MmakeRulesNestedDeps_10 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Cache_15 = STATE_VARIABLE_Cache_0_14;
  }
  else
  {
    MR_Word Var_28;
    MR_Box conv2_STATE_VARIABLE_Cache_15;

    {
      Var_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_28, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_6[0]));
      MR_hl_field(0, Var_28, 1) = ((MR_Box) (parse_tree__generate_mmakefile_fragments__construct_build_nested_children_first_rule_6_p_0_1));
      MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_28, 3) = ((MR_Box) (Globals_7));
      MR_hl_field(0, Var_28, 4) = ((MR_Box) (ModuleName_8));
      MR_hl_field(0, Var_28, 5) = ((MR_Box) (NestedModuleNameSet_12));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_module_file_name_cache_0), Var_28, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[21])), MmakeRulesNestedDeps_10, ((MR_Box) (STATE_VARIABLE_Cache_0_14)), &conv2_STATE_VARIABLE_Cache_15);
    *STATE_VARIABLE_Cache_15 = ((MR_Word) (conv2_STATE_VARIABLE_Cache_15));
  }
}

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_date_file_deps_rule_18_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_IncludePath_6;

  conv0_IncludePath_6 = parse_tree__generate_mmakefile_fragments__foreign_include_file_path_name_2_f_0(((MR_String) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_IncludePath_6));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_date_file_deps_rule_18_p_0(
  MR_Word Globals_19,
  MR_Word ModuleName_20,
  MR_String SourceFileName_21,
  MR_Word Ancestors_22,
  MR_Word DirectDeps_23,
  MR_Word IndirectDeps_24,
  MR_Word PublicChildren_25,
  MR_String Int0FileName_26,
  MR_String OptDateFileName_27,
  MR_String TransOptDateFileName_28,
  MR_Word ForeignIncludeFilesSet_29,
  MR_String CDateFileName_30,
  MR_String JavaDateFileName_31,
  MR_String ErrFileName_32,
  MR_Word FactTableSourceGroups_33,
  MR_Word * MmakeRuleDateFileDeps_34,
  MR_Word STATE_VARIABLE_Cache_0_49,
  MR_Word * STATE_VARIABLE_Cache_50)
{
  MR_bool succeeded;
  MR_Word TargetGroup_36;
  MR_Word TargetGroups_37;
  MR_Word SourceFileNameGroup_38;
  MR_Word Int0FileNameGroups_39;
  MR_Word AncestorSourceGroups_40;
  MR_Word DirectDepsSourceGroups_41;
  MR_Word IndirectDepsSourceGroups_42;
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
  MR_Word STATE_VARIABLE_Cache_1_67;
  MR_Word STATE_VARIABLE_Cache_2_71;
  MR_Word STATE_VARIABLE_Cache_3_75;
  MR_Word Var_79;
  MR_Word STATE_VARIABLE_Cache_4_80;
  MR_Word Var_84;
  MR_Word Var_87;
  MR_Word Var_89;
  MR_Word Var_90;
  MR_Word Var_91;
  MR_Word Var_92;
  MR_Word Var_93;
  MR_Word Var_94;
  MR_Word Var_95;

  {
    Var_56 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_56, 0) = ((MR_Box) (JavaDateFileName_31));
    MR_hl_field(1, Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (CDateFileName_30));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) (Var_56));
  }
  {
    Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_54, 0) = ((MR_Box) (ErrFileName_32));
    MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_53, 0) = ((MR_Box) (TransOptDateFileName_28));
    MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
  }
  {
    Var_52 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_52, 0) = ((MR_Box) (OptDateFileName_27));
    MR_hl_field(0, Var_52, 1) = ((MR_Box) (Var_53));
  }
  {
    TargetGroup_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TargetGroup_36, 0) = ((MR_Box) ((MR_String) "dates_and_err"));
    MR_hl_field(0, TargetGroup_36, 1) = ((MR_Box) (Var_52));
  }
  {
    TargetGroups_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TargetGroups_37, 0) = ((MR_Box) (TargetGroup_36));
    MR_hl_field(0, TargetGroups_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_59 = libs__mmakefiles__construct_singleton_file_name_group_2_f_0((MR_String) "source", SourceFileName_21);
  {
    SourceFileNameGroup_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SourceFileNameGroup_38, 0) = ((MR_Box) (Var_59));
    MR_hl_field(1, SourceFileNameGroup_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  succeeded = mercury__set__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), PublicChildren_25);
  if (succeeded)
    Int0FileNameGroups_39 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_62;

    Var_62 = libs__mmakefiles__construct_singleton_file_name_group_2_f_0((MR_String) "int0", Int0FileName_26);
    {
      Int0FileNameGroups_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Int0FileNameGroups_39, 0) = ((MR_Box) (Var_62));
      MR_hl_field(1, Int0FileNameGroups_39, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  parse_tree__make_module_file_names__convert_module_name_set_to_file_name_group_7_p_0(Globals_19, (MR_String) "ancestors", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[0])), Ancestors_22, &AncestorSourceGroups_40, STATE_VARIABLE_Cache_0_49, &STATE_VARIABLE_Cache_1_67);
  parse_tree__make_module_file_names__convert_module_name_set_to_file_name_group_7_p_0(Globals_19, (MR_String) "direct deps", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[4])), DirectDeps_23, &DirectDepsSourceGroups_41, STATE_VARIABLE_Cache_1_67, &STATE_VARIABLE_Cache_2_71);
  parse_tree__make_module_file_names__convert_module_name_set_to_file_name_group_7_p_0(Globals_19, (MR_String) "indirect deps", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[5])), IndirectDeps_24, &IndirectDepsSourceGroups_42, STATE_VARIABLE_Cache_2_71, &STATE_VARIABLE_Cache_3_75);
  Var_79 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_20)));
  parse_tree__make_module_file_names__convert_module_name_set_to_file_name_group_7_p_0(Globals_19, (MR_String) "type_repn self dep", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[4])), Var_79, &TypeRepnSelfDepGroups_43, STATE_VARIABLE_Cache_3_75, &STATE_VARIABLE_Cache_4_80);
  Var_84 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_20);
  parse_tree__make_module_file_names__convert_module_name_set_to_file_name_group_7_p_0(Globals_19, (MR_String) "type_repn ancestor dep", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[4])), Var_84, &TypeRepnAncestorsDepGroups_44, STATE_VARIABLE_Cache_4_80, STATE_VARIABLE_Cache_50);
  ForeignIncludeFiles_45 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ForeignIncludeFilesSet_29);
  {
    Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_87, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_5[0]));
    MR_hl_field(0, Var_87, 1) = ((MR_Box) (parse_tree__generate_mmakefile_fragments__construct_date_file_deps_rule_18_p_0_1));
    MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_87, 3) = ((MR_Box) (SourceFileName_21));
  }
  ForeignImportFileNames_46 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_87, ForeignIncludeFiles_45);
  ForeignImportFileNameGroup_47 = libs__mmakefiles__construct_file_name_maybe_group_2_f_0((MR_String) "foreign imports", ForeignImportFileNames_46);
  Var_95 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), ForeignImportFileNameGroup_47, FactTableSourceGroups_33);
  Var_94 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), TypeRepnAncestorsDepGroups_44, Var_95);
  Var_93 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), TypeRepnSelfDepGroups_43, Var_94);
  Var_92 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), IndirectDepsSourceGroups_42, Var_93);
  Var_91 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), DirectDepsSourceGroups_41, Var_92);
  Var_90 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), AncestorSourceGroups_40, Var_91);
  Var_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), Int0FileNameGroups_39, Var_90);
  SourceGroups_48 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), SourceFileNameGroup_38, Var_89);
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    *MmakeRuleDateFileDeps_34 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, base, 1) = ((MR_Box) ((MR_String) "date_file_deps"));
    MR_hl_field(3, base, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, base, 3) = ((MR_Box) (TargetGroups_37));
    MR_hl_field(3, base, 4) = ((MR_Box) (SourceGroups_48));
    MR_hl_field(3, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_fact_tables_entries_7_p_0(
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
parse_tree__generate_mmakefile_fragments__construct_trans_opt_deps_rule_7_p_0(
  MR_Word Globals_8,
  MR_Word MaybeInclTransOptRule_9,
  MR_Word MaybeTransOptDeps0_10,
  MR_String TransOptDateFileName_11,
  MR_Word * MmakeRulesTransOpt_12,
  MR_Word STATE_VARIABLE_Cache_0_21,
  MR_Word * STATE_VARIABLE_Cache_22)
{
  if ((MaybeInclTransOptRule_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MmakeRulesTransOpt_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Cache_22 = STATE_VARIABLE_Cache_0_21;
  }
  else
  {
    MR_Word TransOptRuleInfo_14 = ((MR_Word) ((MR_hl_field(1, MaybeInclTransOptRule_9, 0))));
    MR_Word TransOptDeps_17;
    MR_Word TransOptDepsFileNames_19;
    MR_Word MmakeRuleTransOpt_20;

    if (((MR_tag((MR_Word) TransOptRuleInfo_14)) == (MR_Integer) 1))
      TransOptDeps_17 = ((MR_Word) ((MR_hl_field(1, TransOptRuleInfo_14, 0))));
    else
    {
      MR_Word TransOptOrder_15 = ((MR_Word) ((MR_hl_field(0, TransOptRuleInfo_14, 0))));

      if ((MaybeTransOptDeps0_10 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_trans_opt_deps_rule\'/7", (MR_String) "no trans_opt_deps");
          return;
        }
      else
      {
        MR_Word TransOptDeps0_16 = ((MR_Word) ((MR_hl_field(1, MaybeTransOptDeps0_10, 0))));

        mercury__set__intersect_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptOrder_15, TransOptDeps0_16, &TransOptDeps_17);
      }
    }
    parse_tree__make_module_file_names__convert_module_name_set_to_file_names_6_p_0(Globals_8, (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[17])), TransOptDeps_17, &TransOptDepsFileNames_19, STATE_VARIABLE_Cache_0_21, STATE_VARIABLE_Cache_22);
    {
      MmakeRuleTransOpt_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleTransOpt_20, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleTransOpt_20, 1) = ((MR_Box) ((MR_String) "trans_opt_deps"));
      MR_hl_field(3, MmakeRuleTransOpt_20, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, MmakeRuleTransOpt_20, 3) = ((MR_Box) (TransOptDateFileName_11));
      MR_hl_field(3, MmakeRuleTransOpt_20, 4) = ((MR_Box) (TransOptDepsFileNames_19));
      MR_hl_field(3, MmakeRuleTransOpt_20, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *MmakeRulesTransOpt_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (MmakeRuleTransOpt_20));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____all_mih_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__generate_mmakefile_fragments____Unify____all_mih_deps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____all_mih_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__generate_mmakefile_fragments____Compare____all_mih_deps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____d_file_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__generate_mmakefile_fragments____Unify____d_file_deps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____d_file_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__generate_mmakefile_fragments____Compare____d_file_deps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____intermod_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__generate_mmakefile_fragments____Unify____intermod_deps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____intermod_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__generate_mmakefile_fragments____Compare____intermod_deps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____intermod_only_fim_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__generate_mmakefile_fragments____Unify____intermod_only_fim_deps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____intermod_only_fim_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__generate_mmakefile_fragments____Compare____intermod_only_fim_deps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____maybe_include_trans_opt_rule_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__generate_mmakefile_fragments____Unify____maybe_include_trans_opt_rule_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____maybe_include_trans_opt_rule_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__generate_mmakefile_fragments____Compare____maybe_include_trans_opt_rule_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____maybe_mmake_var_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__generate_mmakefile_fragments____Unify____maybe_mmake_var_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____maybe_mmake_var_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__generate_mmakefile_fragments____Compare____maybe_mmake_var_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____maybe_trans_opt_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__generate_mmakefile_fragments____Unify____maybe_trans_opt_deps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____maybe_trans_opt_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__generate_mmakefile_fragments____Compare____maybe_trans_opt_deps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____module_own_fim_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__generate_mmakefile_fragments____Unify____module_own_fim_deps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____module_own_fim_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__generate_mmakefile_fragments____Compare____module_own_fim_deps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____trans_opt_rule_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__generate_mmakefile_fragments____Unify____trans_opt_rule_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____trans_opt_rule_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__generate_mmakefile_fragments____Compare____trans_opt_rule_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__generate_mmakefile_fragments__init(void)
{
}

void mercury__parse_tree__generate_mmakefile_fragments__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_all_mih_deps_0);
  MR_register_type_ctor_info(&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_d_file_deps_0);
  MR_register_type_ctor_info(&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_intermod_deps_0);
  MR_register_type_ctor_info(&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_intermod_only_fim_deps_0);
  MR_register_type_ctor_info(&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_maybe_include_trans_opt_rule_0);
  MR_register_type_ctor_info(&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_maybe_mmake_var_0);
  MR_register_type_ctor_info(&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_maybe_trans_opt_deps_0);
  MR_register_type_ctor_info(&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_module_own_fim_deps_0);
  MR_register_type_ctor_info(&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_trans_opt_rule_info_0);
}

void mercury__parse_tree__generate_mmakefile_fragments__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__generate_mmakefile_fragments__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.generate_mmakefile_fragments.
