/*
** Automatically generated from `generate_mmakefile_fragments.m'
** by the Mercury compiler,
** version rotd-2024-10-02
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
#include "set_tree234.mih"
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
#include "parse_tree.get_dependencies.mih"
#include "parse_tree.make_module_file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "recompilation.item_types.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0_s {
  MR_Word parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__DepsMap_13;
  MR_bool parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__succeeded;
  jmp_buf parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__commit_0;
  MR_Word parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__TypeCtorInfo_377_377;
  MR_Word parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41;
  MR_Word parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__IncludeMap_42;
  MR_Word parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__Var_83;
  MR_Word parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__BurdenedModule_340;
  MR_Word parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__Var_38;
  MR_Box parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__conv1_Var_38;
  MR_Box parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__conv0_Var_83;
};


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_mmakefile_fragments__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__generate_mmakefile_fragments__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_mmakefile_fragments__tree234__pti_tree234_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_mmakefile_fragments__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_mmakefile_fragments__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__generate_mmakefile_fragments____vpti_tuple_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_mmakefile_fragments__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__generate_mmakefile_fragments____vpti_tuple_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_names__type_ctor_info_ext_0;

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_intermod_deps_0_0[2];

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_intermod_deps_0_0;

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_intermod_deps_0_0[1];

static const MR_DuPtagLayout parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_intermod_deps_0[1];

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_intermod_deps_0[1];

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_intermod_deps_0[1];

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_include_trans_opt_rule_0_0;

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_maybe_include_trans_opt_rule_0_1[1];

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_include_trans_opt_rule_0_1;

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_include_trans_opt_rule_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_include_trans_opt_rule_0_1[1];

static const MR_DuPtagLayout parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_maybe_include_trans_opt_rule_0[2];

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_maybe_include_trans_opt_rule_0[2];

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_maybe_include_trans_opt_rule_0[2];

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_intermod_mh_deps_0_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__generate_mmakefile_fragments__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_maybe_intermod_mh_deps_0_1[1];

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_intermod_mh_deps_0_1;

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_intermod_mh_deps_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_intermod_mh_deps_0_1[1];

static const MR_DuPtagLayout parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_maybe_intermod_mh_deps_0[2];

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_maybe_intermod_mh_deps_0[2];

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_maybe_intermod_mh_deps_0[2];

static const MR_FA_TypeInfo_Struct1 parse_tree__generate_mmakefile_fragments__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__generate_mmakefile_fragments__pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0;

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_opt_file_deps_0_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__generate_mmakefile_fragments__list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__generate_mmakefile_fragments__maybe__ti_maybe_1list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_maybe_opt_file_deps_0_1[2];

static const MR_ConstString parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_names_maybe_opt_file_deps_0_1[2];

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_opt_file_deps_0_1;

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_opt_file_deps_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_opt_file_deps_0_1[1];

static const MR_DuPtagLayout parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_maybe_opt_file_deps_0[2];

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_maybe_opt_file_deps_0[2];

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_maybe_opt_file_deps_0[2];

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_trans_opt_deps_0_0;

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_maybe_trans_opt_deps_0_1[1];

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_trans_opt_deps_0_1;

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_trans_opt_deps_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_trans_opt_deps_0_1[1];

static const MR_DuPtagLayout parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_maybe_trans_opt_deps_0[2];

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_maybe_trans_opt_deps_0[2];

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_maybe_trans_opt_deps_0[2];

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_std_deps_0_0[4];

static const MR_ConstString parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_names_std_deps_0_0[4];

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_std_deps_0_0;

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_std_deps_0_0[1];

static const MR_DuPtagLayout parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_std_deps_0[1];

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_std_deps_0[1];

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_std_deps_0[1];

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_trans_opt_rule_info_0_0[1];

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_trans_opt_rule_info_0_0;

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_trans_opt_rule_info_0_1[1];

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_trans_opt_rule_info_0_1;

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_trans_opt_rule_info_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_trans_opt_rule_info_0_1[1];

static const MR_DuPtagLayout parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_trans_opt_rule_info_0[2];

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_trans_opt_rule_info_0[2];

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_trans_opt_rule_info_0[2];

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__IntroducedFrom__pred__generate_dv_file_define_c_foreign_vars__1434__1_6_p_0(
  MR_Word Globals_8,
  MR_Tuple LambdaHeadVar__1_44,
  MR_String * LambdaHeadVar__2_45,
  MR_String * LambdaHeadVar__3_46);

static MR_Word MR_CALL 
parse_tree__generate_mmakefile_fragments__IntroducedFrom__func__generate_dv_file_define_c_foreign_vars__1425__1_1_f_0(
  MR_Tuple LambdaHeadVar__1_36);

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments__IntroducedFrom__pred__generate_dv_file_define_mod_misc_vars__1139__1_2_p_0(
  MR_Word DepsMap_7,
  MR_Word LambdaHeadVar__1_30);

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments__IntroducedFrom__pred__generate_dep_file__1601__1_2_p_0(
  MR_Word StaticLibDirNames_37,
  MR_Word SharedLibDirNames_41);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__IntroducedFrom__pred__generate_d_file__167__1_4_p_0(
  MR_Word LambdaHeadVar__1_85,
  MR_Word LambdaHeadVar__2_86,
  MR_Word LambdaHeadVar__3_87,
  MR_Word * LambdaHeadVar__4_88);

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
parse_tree__generate_mmakefile_fragments__generate_dep_file_collective_target_4_p_0(
  MR_String ModuleNameStr_5,
  MR_String ModuleMakeVarName_6,
  MR_Tuple HeadVar__3_3,
  MR_Word * MmakeRule_9);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_foreign_vars_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_foreign_vars_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_foreign_vars_7_p_0(
  MR_Word Globals_8,
  MR_String ModuleMakeVarName_9,
  MR_Word * MmakeEntries_10,
  MR_Word STATE_VARIABLE_Cache_0_31,
  MR_Word * STATE_VARIABLE_Cache_32);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__compare_module_names_3_p_0(
  MR_Word Sym1_4,
  MR_Word Sym2_5,
  MR_Word * Result_6);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_subdirs_shorthand_rule_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word Ext_11,
  MR_Word * MmakeRule_12,
  MR_Word STATE_VARIABLE_Cache_0_19,
  MR_Word * STATE_VARIABLE_Cache_20);

static MR_String MR_CALL 
parse_tree__generate_mmakefile_fragments__foreign_include_file_path_name_2_f_0(
  MR_String SourceFileName_4,
  MR_Word IncludeFile_5);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__gather_nested_deps_9_p_0(
  MR_Word Globals_10,
  MR_Word ModuleName_11,
  MR_Word NestedDeps_12,
  MR_Word Ext_13,
  MR_Word * MmakeRule_14,
  MR_Word STATE_VARIABLE_Cache_0_20,
  MR_Word * STATE_VARIABLE_Cache_21);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_7_p_0_1(
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
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0(
  MR_Word ModuleName_12,
  MR_Word DepsMap_13,
  MR_String ModuleMakeVarName_14,
  MR_Word MmcMakeDeps_15,
  MR_Word Intermod_16,
  MR_Word TransOpt_17,
  MR_Word MaybeModuleDepsVarPair_18,
  MR_Word MaybeOptsVarPair_19,
  MR_Word MaybeTransOptsVarPair_20,
  MR_Word STATE_VARIABLE_MmakeFile_0_70,
  MR_Word * STATE_VARIABLE_MmakeFile_71);

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
parse_tree__generate_mmakefile_fragments__generate_dep_file_exec_library_targets_15_p_0(
  MR_Word Globals_16,
  MR_Word ModuleName_17,
  MR_String ModuleMakeVarName_18,
  MR_String InitFileName_19,
  MR_String InitObjFileName_20,
  MR_Word MaybeOptsVar_21,
  MR_Word MaybeTransOptsVar_22,
  MR_String ExeFileName_23,
  MR_String JarFileName_24,
  MR_String StaticLibFileName_25,
  MR_String SharedLibFileName_26,
  MR_Word STATE_VARIABLE_MmakeFile_0_65,
  MR_Word * STATE_VARIABLE_MmakeFile_66);

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_9_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_9_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_9_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_9_p_0_1(
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
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_9_p_0(
  MR_Word Globals_10,
  MR_Word DepsMap_11,
  MR_Word Modules_12,
  MR_String ModuleMakeVarName_13,
  MR_Word * CFragments_14,
  MR_Word STATE_VARIABLE_Cache_0_39,
  MR_Word * STATE_VARIABLE_Cache_40);

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
parse_tree__generate_mmakefile_fragments__generate_d_file_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_any_needed_pattern_rules_12_p_0(
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
parse_tree__generate_mmakefile_fragments__construct_subdir_short_rules_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_subdir_short_rules_7_p_0(
  MR_Word Globals_8,
  MR_Word ModuleName_9,
  MR_Word * MmakeRulesSubDirShorthand_10,
  MR_Word STATE_VARIABLE_Cache_0_15,
  MR_Word * STATE_VARIABLE_Cache_16);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_install_shadow_rules_13_p_0(
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

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_foreign_import_rules_10_p_0(
  MR_Word Globals_11,
  MR_Word ParseTreeModuleSrc_12,
  MR_Word ForeignImportedModuleNamesSet_13,
  MR_String ObjFileName_14,
  MR_String PicObjFileName_15,
  MR_Word * MmakeRulesForeignImports_16,
  MR_Word STATE_VARIABLE_Cache_0_28,
  MR_Word * STATE_VARIABLE_Cache_29);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_self_and_parent_date_date0_rules_12_p_0(
  MR_Word Globals_13,
  MR_String SourceFileName_14,
  MR_String Date0FileName_15,
  MR_String DateFileName_16,
  MR_Word Ancestors_17,
  MR_Word DirectDeps_18,
  MR_Word IndirectDeps_19,
  MR_Word * MmakeRulesParentDates_20,
  MR_Word STATE_VARIABLE_Cache_0_30,
  MR_Word * STATE_VARIABLE_Cache_31);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_module_dep_fragment_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_String CFileName_11,
  MR_Word * MmakeFragmentModuleDep_12,
  MR_Word STATE_VARIABLE_Cache_0_17,
  MR_Word * STATE_VARIABLE_Cache_18);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_c_header_rules_11_p_0(
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
parse_tree__generate_mmakefile_fragments__construct_intermod_rules_12_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_intermod_rules_12_p_0(
  MR_Word Globals_13,
  MR_Word IntermodDeps_14,
  MR_String ErrFileName_15,
  MR_String TransOptDateFileName_16,
  MR_String CDateFileName_17,
  MR_String JavaDateFileName_18,
  MR_String ObjFileName_19,
  MR_Word * MmakeRulesIntermod_20,
  MR_Word STATE_VARIABLE_Cache_0_40,
  MR_Word * STATE_VARIABLE_Cache_41);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_build_nested_children_first_rule_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_build_nested_children_first_rule_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_Word MaybeTopModule_11,
  MR_Word * MmakeRulesNestedDeps_12,
  MR_Word STATE_VARIABLE_Cache_0_19,
  MR_Word * STATE_VARIABLE_Cache_20);

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_date_file_deps_rule_20_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_date_file_deps_rule_20_p_0(
  MR_Word Globals_21,
  MR_Word ModuleName_22,
  MR_String SourceFileName_23,
  MR_Word Ancestors_24,
  MR_Word DirectDeps_25,
  MR_Word IndirectDeps_26,
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
parse_tree__generate_mmakefile_fragments__construct_fact_tables_entries_7_p_0(
  MR_String ModuleMakeVarName_8,
  MR_String SourceFileName_9,
  MR_String ObjFileName_10,
  MR_Word FactTableFileNamesSet_11,
  MR_Word * MmakeVarsFactTables_12,
  MR_Word * FactTableSourceGroups_13,
  MR_Word * MmakeRulesFactTables_14);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_trans_opt_deps_rule_9_p_0(
  MR_Word Globals_10,
  MR_Word MaybeInclTransOptRule_11,
  MR_Word StdDeps_12,
  MR_String TransOptDateFileName_13,
  MR_Word * MmakeRulesTransOpt_14,
  MR_Word STATE_VARIABLE_Cache_0_28,
  MR_Word * STATE_VARIABLE_Cache_29);

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
parse_tree__generate_mmakefile_fragments____Unify____maybe_include_trans_opt_rule_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____maybe_include_trans_opt_rule_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____maybe_intermod_mh_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____maybe_intermod_mh_deps_0_0_10001(
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
parse_tree__generate_mmakefile_fragments____Unify____maybe_opt_file_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____maybe_opt_file_deps_0_0_10001(
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
parse_tree__generate_mmakefile_fragments____Unify____std_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____std_deps_0_0_10001(
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


static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_1[133][2];

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_2[17][3];

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_3[5][4];

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_4[11][1];

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_5[5][6];

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_6[1][12];

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_7[6][5];

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_8[1][11];

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_9[2][7];

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_10[2][9];




static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_1[133][2] = {
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
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row   7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 6U)
  },
  /* row   9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 2U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row  10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 2U)
  },
  /* row  11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 7U)
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
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  23 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row  24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
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
    ((MR_Box) ((MR_String) "\044(EXT_FOR_SHARED_LIB)")),
    ((MR_Box) ((MR_String) "\044(A)"))
  },
  /* row  36 */
  {
    ((MR_Box) ((MR_String) "done")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  37 */
  {
    ((MR_Box) ((MR_String) "\t} || exit 1; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[36])))
  },
  /* row  38 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044(INSTALL_INT_DIR)\"/*.\044\044ext \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[37])))
  },
  /* row  39 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[38])))
  },
  /* row  40 */
  {
    ((MR_Box) ((MR_String) "\t\t{ test -d \"\044\044dir\" || \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[39])))
  },
  /* row  41 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \"\044\044dir\" || { \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[40])))
  },
  /* row  42 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[41])))
  },
  /* row  43 */
  {
    ((MR_Box) ((MR_String) "\tdir=\"\044(INSTALL_INT_DIR)/Mercury/\044\044{ext}s\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[42])))
  },
  /* row  44 */
  {
    ((MR_Box) ((MR_String) "install_lib_dirs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  45 */
  {
    ((MR_Box) ((MR_String) "install_grade_dirs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  46 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[37])))
  },
  /* row  47 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044(INSTALL_GRADE_INT_DIR)\"/*.\044\044ext \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[46])))
  },
  /* row  48 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[47])))
  },
  /* row  49 */
  {
    ((MR_Box) ((MR_String) "\t\t{ test -d \"\044\044dir\" || \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[48])))
  },
  /* row  50 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \"\044\044dir\" || { \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[49])))
  },
  /* row  51 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[50])))
  },
  /* row  52 */
  {
    ((MR_Box) ((MR_String) "\tdir=\"\044(INSTALL_GRADE_INT_DIR)/Mercury/\044\044{ext}s\"; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[51])))
  },
  /* row  53 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INC_DIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[36])))
  },
  /* row  54 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[53])))
  },
  /* row  55 */
  {
    ((MR_Box) ((MR_String) "} || exit 1")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  56 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[55])))
  },
  /* row  57 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[56])))
  },
  /* row  58 */
  {
    ((MR_Box) ((MR_String) "\t} && \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[57])))
  },
  /* row  59 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_INT_DIR)/Mercury/mihs; \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[58])))
  },
  /* row  60 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[59])))
  },
  /* row  61 */
  {
    ((MR_Box) ((MR_String) "\t{ test -d \044(INSTALL_INT_DIR)/Mercury/mihs || \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[60])))
  },
  /* row  62 */
  {
    ((MR_Box) ((MR_String) "\044(LN_S) .. \044(INSTALL_INT_DIR)/Mercury/mihs || { \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[61])))
  },
  /* row  63 */
  {
    ((MR_Box) ((MR_String) "rm -rf \044(INSTALL_INT_DIR)/Mercury/mihs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[62])))
  },
  /* row  64 */
  {
    ((MR_Box) ((MR_String) "} || exit 1")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[63])))
  },
  /* row  65 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_GRADE_INC_SUBDIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[64])))
  },
  /* row  66 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[65])))
  },
  /* row  67 */
  {
    ((MR_Box) ((MR_String) "\t} && \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[66])))
  },
  /* row  68 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \044(INSTALL_GRADE_INC_SUBDIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[67])))
  },
  /* row  69 */
  {
    ((MR_Box) ((MR_String) "\t{ test -d \044(INSTALL_GRADE_INC_SUBDIR) || \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[68])))
  },
  /* row  70 */
  {
    ((MR_Box) ((MR_String) "\044(LN_S) .. \044(INSTALL_GRADE_INC_SUBDIR) || { \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[69])))
  },
  /* row  71 */
  {
    ((MR_Box) ((MR_String) "rm -rf \044(INSTALL_GRADE_INC_SUBDIR)")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[70])))
  },
  /* row  72 */
  {
    ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'.")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[71])))
  },
  /* row  73 */
  {
    ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[72])))
  },
  /* row  74 */
  {
    ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option.")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[73])))
  },
  /* row  75 */
  {
    ((MR_Box) ((MR_String) "done")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[74])))
  },
  /* row  76 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_GRADE_INC_DIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[75])))
  },
  /* row  77 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[76])))
  },
  /* row  78 */
  {
    ((MR_Box) ((MR_String) ".all_trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row  79 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[78])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  80 */
  {
    ((MR_Box) ((MR_String) ".all_opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row  81 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[80])),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[79])))
  },
  /* row  82 */
  {
    ((MR_Box) ((MR_String) ".all_int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row  83 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[82])),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[81])))
  },
  /* row  84 */
  {
    ((MR_Box) ((MR_String) ".all_ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row  85 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[84])),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[83])))
  },
  /* row  86 */
  {
    ((MR_Box) ((MR_String) ".classes")),
    ((MR_Box) ((MR_String) ".classes"))
  },
  /* row  87 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[86])),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[85])))
  },
  /* row  88 */
  {
    ((MR_Box) ((MR_String) ".javas")),
    ((MR_Box) ((MR_String) ".all_javas"))
  },
  /* row  89 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[88])),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[87])))
  },
  /* row  90 */
  {
    ((MR_Box) ((MR_String) ".trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row  91 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[90])),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[89])))
  },
  /* row  92 */
  {
    ((MR_Box) ((MR_String) ".opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row  93 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[92])),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[91])))
  },
  /* row  94 */
  {
    ((MR_Box) ((MR_String) ".int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row  95 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[94])),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[93])))
  },
  /* row  96 */
  {
    ((MR_Box) ((MR_String) ".ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row  97 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[96])),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[95])))
  },
  /* row  98 */
  {
    ((MR_Box) ((MR_String) ".check")),
    ((MR_Box) ((MR_String) ".errs"))
  },
  /* row  99 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[98])),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[97])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_String) ".foreign_cs")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_String) ".errs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[100])))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_String) ".dep_errs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[101])))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_String) ".profs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_String) ".all_javas")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_String) ".useds")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_String) ".java_dates")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[105])))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_String) ".c_dates")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[106])))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_String) ".all_pic_os")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_String) ".all_os")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[108])))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_String) ".mihs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[109])))
  },
  /* row 111 */
  {
    ((MR_Box) ((MR_String) ".all_cs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[110])))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_String) ".dirs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[111])))
  },
  /* row 113 */
  {
    ((MR_Box) ((MR_String) ".classes")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_String) ".foreign_dlls")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[113])))
  },
  /* row 115 */
  {
    ((MR_Box) ((MR_String) ".dlls")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[114])))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_String) ".mihs_to_clean")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[115])))
  },
  /* row 117 */
  {
    ((MR_Box) ((MR_String) ".mhs_to_clean")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[116])))
  },
  /* row 118 */
  {
    ((MR_Box) ((MR_String) ".module_deps")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[117])))
  },
  /* row 119 */
  {
    ((MR_Box) ((MR_String) ".ds")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[118])))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_String) ".imdgs")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[119])))
  },
  /* row 121 */
  {
    ((MR_Box) ((MR_String) ".requests")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[120])))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_String) ".analyses")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[121])))
  },
  /* row 123 */
  {
    ((MR_Box) ((MR_String) ".trans_opts")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[122])))
  },
  /* row 124 */
  {
    ((MR_Box) ((MR_String) ".opts")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[123])))
  },
  /* row 125 */
  {
    ((MR_Box) ((MR_String) ".int3s")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[124])))
  },
  /* row 126 */
  {
    ((MR_Box) ((MR_String) ".int0s_to_clean")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[125])))
  },
  /* row 127 */
  {
    ((MR_Box) ((MR_String) ".ints")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[126])))
  },
  /* row 128 */
  {
    ((MR_Box) ((MR_String) ".trans_opt_dates")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[127])))
  },
  /* row 129 */
  {
    ((MR_Box) ((MR_String) ".optdates")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[128])))
  },
  /* row 130 */
  {
    ((MR_Box) ((MR_String) ".date3s")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[129])))
  },
  /* row 131 */
  {
    ((MR_Box) ((MR_String) ".date0s")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[130])))
  },
  /* row 132 */
  {
    ((MR_Box) ((MR_String) ".dates")),
    ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[131])))
  },
};

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_2[17][3] = {
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
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[1])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[0])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__construct_intermod_rules_12_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_9[0])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_d_file_11_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[1])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_mod_misc_vars_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[1])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_mod_misc_vars_5_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[3])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_mod_misc_vars_5_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   8 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[3])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_intn_vars_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   9 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[3])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_opt_vars_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  10 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[3])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  11 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[3])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_csharp_vars_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  12 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[3])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_smart_recomp_vars_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  13 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_5[1])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  14 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[3])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_9_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  15 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_5[4])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dep_file_7_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row  16 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[5])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_foreign_vars_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_3[5][4] = {
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
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_5[3])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_9_p_0_3)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".m"))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_5[3])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_9_p_0_4)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".dep_err"))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_5[3])),
    ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_9_p_0_5)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".err"))
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

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_6[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments__tree234__pti_tree234_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments__tree234__pti_tree234_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_7[6][5] = {
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
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments____vpti_tuple_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_8[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments__tree234__pti_tree234_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments__tree234__pti_tree234_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_9[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0)),
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

static /* final */ const MR_Box parse_tree__generate_mmakefile_fragments_scalar_common_10[2][9] = {
  /* row   0 */
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
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__generate_mmakefile_fragments____vpti_tuple_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_mmakefile_fragments__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__generate_mmakefile_fragments__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__generate_mmakefile_fragments__tree234__pti_tree234_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0),
    (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__generate_mmakefile_fragments__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
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

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__generate_mmakefile_fragments____vpti_tuple_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__file_names__type_ctor_info_ext_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_intermod_deps_0_0[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_maybe_intermod_mh_deps_0),
  (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_maybe_opt_file_deps_0)
};

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_intermod_deps_0_0 = {
  (MR_String) "intermod_deps",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_intermod_deps_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_intermod_deps_0_0[1] = { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_intermod_deps_0_0 };

static const MR_DuPtagLayout parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_intermod_deps_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_intermod_deps_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_intermod_deps_0[1] = { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_intermod_deps_0_0 };

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_intermod_deps_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_intermod_deps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Unify____intermod_deps_0_0_10001)),
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Compare____intermod_deps_0_0_10001)),
  (MR_String) "parse_tree.generate_mmakefile_fragments",
  (MR_String) "intermod_deps",
  { parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_intermod_deps_0 },
  { parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_intermod_deps_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_intermod_deps_0,

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

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_intermod_mh_deps_0_0 = {
  (MR_String) "no_intermod_mh_deps",
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

static const MR_FA_TypeInfo_Struct1 parse_tree__generate_mmakefile_fragments__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_maybe_intermod_mh_deps_0_1[1] = { (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0) };

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_intermod_mh_deps_0_1 = {
  (MR_String) "intermod_mh_deps",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_maybe_intermod_mh_deps_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_intermod_mh_deps_0_0[1] = { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_intermod_mh_deps_0_0 };

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_intermod_mh_deps_0_1[1] = { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_intermod_mh_deps_0_1 };

static const MR_DuPtagLayout parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_maybe_intermod_mh_deps_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_intermod_mh_deps_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_intermod_mh_deps_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_maybe_intermod_mh_deps_0[2] = {
  &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_intermod_mh_deps_0_1,
  &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_intermod_mh_deps_0_0
};

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_maybe_intermod_mh_deps_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_maybe_intermod_mh_deps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Unify____maybe_intermod_mh_deps_0_0_10001)),
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Compare____maybe_intermod_mh_deps_0_0_10001)),
  (MR_String) "parse_tree.generate_mmakefile_fragments",
  (MR_String) "maybe_intermod_mh_deps",
  { parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_maybe_intermod_mh_deps_0 },
  { parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_maybe_intermod_mh_deps_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_maybe_intermod_mh_deps_0,

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

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_opt_file_deps_0_0 = {
  (MR_String) "no_opt_file_deps",
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

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_maybe_opt_file_deps_0_1[2] = {
  (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__maybe__ti_maybe_1list__ti_list_1mdbcomp__sym_name__type_ctor_info_sym_name_0)
};

static const MR_ConstString parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_names_maybe_opt_file_deps_0_1[2] = {
  (MR_String) "ofd_plain_opt_modules",
  (MR_String) "ofd_trans_opt_modules"
};

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_opt_file_deps_0_1 = {
  (MR_String) "opt_file_deps",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_maybe_opt_file_deps_0_1,
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_names_maybe_opt_file_deps_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_opt_file_deps_0_0[1] = { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_opt_file_deps_0_0 };

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_opt_file_deps_0_1[1] = { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_opt_file_deps_0_1 };

static const MR_DuPtagLayout parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_maybe_opt_file_deps_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_opt_file_deps_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_maybe_opt_file_deps_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_maybe_opt_file_deps_0[2] = {
  &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_opt_file_deps_0_0,
  &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_maybe_opt_file_deps_0_1
};

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_maybe_opt_file_deps_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_maybe_opt_file_deps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Unify____maybe_opt_file_deps_0_0_10001)),
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Compare____maybe_opt_file_deps_0_0_10001)),
  (MR_String) "parse_tree.generate_mmakefile_fragments",
  (MR_String) "maybe_opt_file_deps",
  { parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_maybe_opt_file_deps_0 },
  { parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_maybe_opt_file_deps_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_maybe_opt_file_deps_0,

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

static const MR_PseudoTypeInfo parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_std_deps_0_0[4] = {
  (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__set_ordlist__ti_set_ordlist_1mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_maybe_trans_opt_deps_0)
};

static const MR_ConstString parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_names_std_deps_0_0[4] = {
  (MR_String) "sd_direct_deps",
  (MR_String) "sd_indirect_deps",
  (MR_String) "sd_fim_deps",
  (MR_String) "sd_trans_opt_deps"
};

static const MR_DuFunctorDesc parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_std_deps_0_0 = {
  (MR_String) "std_deps",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_types_std_deps_0_0,
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__field_names_std_deps_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_std_deps_0_0[1] = { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_std_deps_0_0 };

static const MR_DuPtagLayout parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_std_deps_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_stag_ordered_std_deps_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_std_deps_0[1] = { &parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_functor_desc_std_deps_0_0 };

static const MR_Integer parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_std_deps_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_std_deps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Unify____std_deps_0_0_10001)),
  ((MR_Box) (parse_tree__generate_mmakefile_fragments____Compare____std_deps_0_0_10001)),
  (MR_String) "parse_tree.generate_mmakefile_fragments",
  (MR_String) "std_deps",
  { parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_name_ordered_std_deps_0 },
  { parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__du_ptag_ordered_std_deps_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__functor_number_map_std_deps_0,

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

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__IntroducedFrom__pred__generate_dv_file_define_c_foreign_vars__1434__1_6_p_0(
  MR_Word Globals_8,
  MR_Tuple LambdaHeadVar__1_44,
  MR_String * LambdaHeadVar__2_45,
  MR_String * LambdaHeadVar__3_46)
{
  MR_String F0_26;
  MR_String FP0_27;
  MR_Word M_61 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_44, (MR_Integer) 0))));
  MR_Word NE_62 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_44, (MR_Integer) 1))));

  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_8, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dv_file_define_c_foreign_vars\'/7", NE_62, M_61, &F0_26, &FP0_27);
  *LambdaHeadVar__2_45 = mercury__string__f_43_43_2_f_0((MR_String) "\044(os_subdir)", F0_26);
  *LambdaHeadVar__3_46 = mercury__string__f_43_43_2_f_0((MR_String) "\044(os_subdir)", FP0_27);
}

static MR_Word MR_CALL 
parse_tree__generate_mmakefile_fragments__IntroducedFrom__func__generate_dv_file_define_c_foreign_vars__1425__1_1_f_0(
  MR_Tuple LambdaHeadVar__1_36)
{
  MR_Word LambdaHeadVar__2_37 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_36, (MR_Integer) 0))));

  return LambdaHeadVar__2_37;
}

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments__IntroducedFrom__pred__generate_dv_file_define_mod_misc_vars__1139__1_2_p_0(
  MR_Word DepsMap_7,
  MR_Word LambdaHeadVar__1_30)
{
  MR_bool succeeded;
  MR_Word BurdenedModule_17;
  MR_Word ParseTreeModuleSrc_18;
  MR_Word IncludeMap_19;
  MR_Word Var_31;
  MR_Box conv0_Var_31;

  mercury__map__lookup_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), DepsMap_7, ((MR_Box) (LambdaHeadVar__1_30)), &conv0_Var_31);
  Var_31 = ((MR_Word) (conv0_Var_31));
  BurdenedModule_17 = ((MR_Word) ((MR_hl_field(0, Var_31, (MR_Integer) 1))));
  ParseTreeModuleSrc_18 = ((MR_Word) ((MR_hl_field(0, BurdenedModule_17, (MR_Integer) 1))));
  IncludeMap_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_18, (MR_Integer) 2))));
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), IncludeMap_19);
  succeeded = !(succeeded);
  return succeeded;
}

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments__IntroducedFrom__pred__generate_dep_file__1601__1_2_p_0(
  MR_Word StaticLibDirNames_37,
  MR_Word SharedLibDirNames_41)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[1]), ((MR_Box) (StaticLibDirNames_37)), ((MR_Box) (SharedLibDirNames_41)));
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__IntroducedFrom__pred__generate_d_file__167__1_4_p_0(
  MR_Word LambdaHeadVar__1_85,
  MR_Word LambdaHeadVar__2_86,
  MR_Word LambdaHeadVar__3_87,
  MR_Word * LambdaHeadVar__4_88)
{
  MR_Word Section_36 = ((MR_Unsigned) ((MR_hl_field(0, LambdaHeadVar__2_86, (MR_Integer) 0))) & (MR_Integer) 1);

  switch (Section_36) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *LambdaHeadVar__4_88 = LambdaHeadVar__3_87;
      break;
    case (MR_Integer) 0:
      mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (LambdaHeadVar__1_85)), LambdaHeadVar__3_87, LambdaHeadVar__4_88);
      break;
  }
}

void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____std_deps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
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

        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          parse_tree__generate_mmakefile_fragments____Compare____maybe_trans_opt_deps_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____std_deps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]), ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    if (succeeded)
    {
      TypeInfo_14_14 = (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
      {
        TypeInfo_15_15 = (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
        if (succeeded)
          succeeded = parse_tree__generate_mmakefile_fragments____Unify____maybe_trans_opt_deps_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
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
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____maybe_mmake_var_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____maybe_mmake_var_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

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
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_6)), ((MR_Box) (ArgY1_7)));
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
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
      succeeded = parse_tree__generate_mmakefile_fragments____Unify____trans_opt_rule_info_0_0(ArgX1_5, ArgY1_6);
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
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]);
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
      TypeInfo_10_10 = (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_10_10, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
    }
  }
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
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    parse_tree__generate_mmakefile_fragments____Compare____maybe_intermod_mh_deps_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      parse_tree__generate_mmakefile_fragments____Compare____maybe_opt_file_deps_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____maybe_opt_file_deps_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[2]), &SubResult1_6, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____maybe_intermod_mh_deps_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____intermod_deps_0_0(
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

    succeeded = parse_tree__generate_mmakefile_fragments____Unify____maybe_intermod_mh_deps_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = parse_tree__generate_mmakefile_fragments____Unify____maybe_opt_file_deps_0_0(ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____maybe_opt_file_deps_0_0(
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
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word TypeInfo_11_11;
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_8;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      ArgY2_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      TypeInfo_11_11 = (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
      if (succeeded)
      {
        TypeInfo_12_12 = (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[3]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments____Unify____maybe_intermod_mh_deps_0_0(
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
    MR_Word TypeInfo_9_9;
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      TypeInfo_9_9 = (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX1_5)), ((MR_Box) (ArgY1_6)));
    }
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
parse_tree__generate_mmakefile_fragments__generate_dep_file_collective_target_4_p_0(
  MR_String ModuleNameStr_5,
  MR_String ModuleMakeVarName_6,
  MR_Tuple HeadVar__3_3,
  MR_Word * MmakeRule_9)
{
  MR_String ExtStr_7 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_String VarExtension_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_foreign_vars_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_String conv2_LambdaHeadVar__2_45;
  MR_String conv1_LambdaHeadVar__3_46;

  parse_tree__generate_mmakefile_fragments__IntroducedFrom__pred__generate_dv_file_define_c_foreign_vars__1434__1_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Tuple) (wrapper_arg_1)), &conv2_LambdaHeadVar__2_45, &conv1_LambdaHeadVar__3_46);
  *wrapper_arg_2 = ((MR_Box) (conv2_LambdaHeadVar__2_45));
  *wrapper_arg_3 = ((MR_Box) (conv1_LambdaHeadVar__3_46));
}

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_foreign_vars_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_37;

  conv0_LambdaHeadVar__2_37 = parse_tree__generate_mmakefile_fragments__IntroducedFrom__func__generate_dv_file_define_c_foreign_vars__1425__1_1_f_0(((MR_Tuple) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_37));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_foreign_vars_7_p_0(
  MR_Word Globals_8,
  MR_String ModuleMakeVarName_9,
  MR_Word * MmakeEntries_10,
  MR_Word STATE_VARIABLE_Cache_0_31,
  MR_Word * STATE_VARIABLE_Cache_32)
{
  MR_Word ForeignModules_15;
  MR_Word ForeignModulesFileNames_18;
  MR_Word MmakeVarForeignModules_19;
  MR_Word MakeFileName_20;
  MR_Word ForeignFileNames_28;
  MR_Word MmakeVarForeignFileNames_30;
  MR_String Var_42;
  MR_String Var_53;
  MR_Word Var_55;
  MR_Word Target_13;
  MR_Word _ForeignFileNamesProposed_29;
  MR_Box conv3_STATE_VARIABLE_IO_34;

  libs__globals__get_target_2_p_0(Globals_8, &Target_13);
  ForeignModules_15 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_3[0]), (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[16]), (MR_Word) ((MR_Unsigned) 0U));
  parse_tree__make_module_file_names__make_module_file_names_with_ext_8_p_0(Globals_8, (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[14])), ForeignModules_15, &ForeignModulesFileNames_18, STATE_VARIABLE_Cache_0_31, STATE_VARIABLE_Cache_32);
  Var_42 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".foreign");
  {
    MmakeVarForeignModules_19 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarForeignModules_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarForeignModules_19, 1) = ((MR_Box) (Var_42));
    MR_hl_field(3, MmakeVarForeignModules_19, 2) = ((MR_Box) (ForeignModulesFileNames_18));
  }
  {
    MakeFileName_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MakeFileName_20, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_10[1]));
    MR_hl_field(0, MakeFileName_20, 1) = ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_foreign_vars_7_p_0_2));
    MR_hl_field(0, MakeFileName_20, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, MakeFileName_20, 3) = ((MR_Box) (Globals_8));
  }
  mercury__list__map2_foldl_6_p_2((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_3[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), MakeFileName_20, (MR_Word) ((MR_Unsigned) 0U), &ForeignFileNames_28, &_ForeignFileNamesProposed_29, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_34);
  Var_53 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".foreign_cs");
  {
    MmakeVarForeignFileNames_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarForeignFileNames_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarForeignFileNames_30, 1) = ((MR_Box) (Var_53));
    MR_hl_field(3, MmakeVarForeignFileNames_30, 2) = ((MR_Box) (ForeignFileNames_28));
  }
  {
    Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_55, 0) = ((MR_Box) (MmakeVarForeignFileNames_30));
    MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *MmakeEntries_10 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (MmakeVarForeignModules_19));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_55));
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
parse_tree__generate_mmakefile_fragments__construct_subdirs_shorthand_rule_8_p_0(
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
  parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_9, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_subdirs_shorthand_rule\'/8", Ext_11, ModuleName_10, &Target_16, STATE_VARIABLE_Cache_0_19, STATE_VARIABLE_Cache_20);
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
parse_tree__generate_mmakefile_fragments__foreign_include_file_path_name_2_f_0(
  MR_String SourceFileName_4,
  MR_Word IncludeFile_5)
{
  MR_String IncludePath_6;
  MR_String IncludeFileName_8 = ((MR_String) ((MR_hl_field(0, IncludeFile_5, (MR_Integer) 1))));

  parse_tree__file_names__make_include_file_path_3_p_0(SourceFileName_4, IncludeFileName_8, &IncludePath_6);
  return IncludePath_6;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__gather_nested_deps_9_p_0(
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

  parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_10, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.gather_nested_deps\'/9", Ext_13, ModuleName_11, &ModuleExtName_17, STATE_VARIABLE_Cache_0_20, &STATE_VARIABLE_Cache_25_25);
  parse_tree__make_module_file_names__make_module_file_names_with_ext_8_p_0(Globals_10, Ext_13, NestedDeps_12, &NestedDepsFileNames_18, STATE_VARIABLE_Cache_25_25, STATE_VARIABLE_Cache_21);
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
parse_tree__generate_mmakefile_fragments__generate_dep_file_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  parse_tree__file_names__create_any_dirs_on_path_3_p_0(((MR_Word) (wrapper_arg_1)));
}

static MR_bool MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__generate_mmakefile_fragments__IntroducedFrom__pred__generate_dep_file__1601__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_7_p_0(
  MR_Word Globals_8,
  MR_String SourceFileName_9,
  MR_Word ModuleName_10,
  MR_Word DepsMap_11,
  MR_Word * STATE_VARIABLE_MmakeFile_65)
{
  MR_bool succeeded;
  MR_String ModuleNameString_14;
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
  MR_Word STATE_VARIABLE_MmakeFile_123_123;
  MR_Word STATE_VARIABLE_MmakeFile_124_124;
  MR_Word STATE_VARIABLE_MmakeFile_125_125;
  MR_Word STATE_VARIABLE_MmakeFile_127_127;
  MR_Word STATE_VARIABLE_MmakeFile_128_128;
  MR_Word STATE_VARIABLE_MmakeFile_129_129;
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
  MR_Box conv0_STATE_VARIABLE_IO_104_104;

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
  parse_tree__file_names__module_name_to_file_name_return_dirs_8_p_0(Globals_8, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_file\'/7", (MR_Word) (MR_mkword(2, &parse_tree__generate_mmakefile_fragments_scalar_common_4[0])), ModuleName_10, &InitDirNames_19, &_InitDirNamesProposed_20, &InitFileName_21, &_InitFileNameProposed_22);
  parse_tree__file_names__module_name_to_file_name_return_dirs_8_p_0(Globals_8, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_file\'/7", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[11])), ModuleName_10, &InitCDirNames_23, &_InitCDirNamesProposed_24, &InitCFileName_25, &_InitCFileNameProposed_26);
  parse_tree__file_names__module_name_to_file_name_return_dirs_8_p_0(Globals_8, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_file\'/7", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[12])), ModuleName_10, &InitObjDirNames_27, &_InitObjDirNamesProposed_28, &InitObjFileName_29, &_InitObjFileNameProposed_30);
  parse_tree__file_names__module_name_to_file_name_return_dirs_8_p_0(Globals_8, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_file\'/7", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[13])), ModuleName_10, &InitPicObjDirNames_31, &_InitPicObjDirNamesProposed_32, &InitPicObjFileName_33, &_InitPicObjFileNameProposed_34);
  parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_8, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_file\'/7", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[14])), ModuleName_10, &ExeFileName_35, &_ExeFileNameProposed_36);
  parse_tree__file_names__module_name_to_lib_file_name_return_dirs_9_p_0(Globals_8, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_file\'/7", (MR_String) "lib", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[15])), ModuleName_10, &StaticLibDirNames_37, &_StaticLibDirNamesProposed_38, &StaticLibFileName_39, &_StaticLibFileNameProposed_40);
  parse_tree__file_names__module_name_to_lib_file_name_return_dirs_9_p_0(Globals_8, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_file\'/7", (MR_String) "lib", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[16])), ModuleName_10, &SharedLibDirNames_41, &_SharedLibDirNamesProposed_42, &SharedLibFileName_43, &_SharedLibFileNameProposed_44);
  parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_8, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_file\'/7", (MR_Word) (MR_mkword(2, &parse_tree__generate_mmakefile_fragments_scalar_common_4[4])), ModuleName_10, &JarFileName_45, &_JarFileNameProposed_46);
  {
    Var_95 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_95, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[4]));
    MR_hl_field(0, Var_95, 1) = ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dep_file_7_p_0_1));
    MR_hl_field(0, Var_95, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_95, 3) = ((MR_Box) (StaticLibDirNames_37));
    MR_hl_field(0, Var_95, 4) = ((MR_Box) (SharedLibDirNames_41));
  }
  mercury__require__expect_3_p_0(Var_95, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dep_file\'/7", (MR_String) "StaticLibDirNames != SharedLibDirNames");
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
  mercury__list__foldl_4_p_2((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[15]), DirNamesList_47, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_104_104);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 175, &MmcMakeDeps_48);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 520, &Intermod_49);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 524, &TransOpt_50);
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
  libs__mmakefiles__start_mmakefile_1_p_0(&STATE_VARIABLE_MmakeFile_123_123);
  libs__mmakefiles__add_mmake_entry_3_p_0(MmakeStartComment_17, STATE_VARIABLE_MmakeFile_123_123, &STATE_VARIABLE_MmakeFile_124_124);
  parse_tree__generate_mmakefile_fragments__generate_dep_file_exec_library_targets_15_p_0(Globals_8, ModuleName_10, ModuleMakeVarName_18, InitFileName_21, InitObjFileName_29, MaybeOptsVar_55, MaybeTransOptsVar_58, ExeFileName_35, JarFileName_45, StaticLibFileName_39, SharedLibFileName_43, STATE_VARIABLE_MmakeFile_124_124, &STATE_VARIABLE_MmakeFile_125_125);
  parse_tree__generate_mmakefile_fragments__generate_dep_file_init_targets_9_p_0(Globals_8, ModuleName_10, ModuleMakeVarName_18, InitCFileName_25, InitFileName_21, &DepFileName_63, &DvFileName_64, STATE_VARIABLE_MmakeFile_125_125, &STATE_VARIABLE_MmakeFile_127_127);
  parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0(ModuleName_10, DepsMap_11, ModuleMakeVarName_18, MmcMakeDeps_48, Intermod_49, TransOpt_50, MaybeModuleDepsVarPair_60, MaybeOptsVarPair_61, MaybeTransOptsVarPair_62, STATE_VARIABLE_MmakeFile_127_127, &STATE_VARIABLE_MmakeFile_128_128);
  parse_tree__generate_mmakefile_fragments__generate_dep_file_collective_targets_4_p_0(ModuleName_10, ModuleMakeVarName_18, STATE_VARIABLE_MmakeFile_128_128, &STATE_VARIABLE_MmakeFile_129_129);
  parse_tree__generate_mmakefile_fragments__generate_dep_file_clean_targets_14_p_0(ModuleName_10, ModuleMakeVarName_18, ExeFileName_35, InitCFileName_25, InitObjFileName_29, InitPicObjFileName_33, InitFileName_21, StaticLibFileName_39, SharedLibFileName_43, JarFileName_45, DepFileName_63, DvFileName_64, STATE_VARIABLE_MmakeFile_129_129, STATE_VARIABLE_MmakeFile_65);
}

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_clean_targets_14_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__3_3;

  conv0_HeadVar__3_3 = parse_tree__generate_mmakefile_fragments__remove_suffix_files_cmd_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
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
  Var_83 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_84, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[112])));
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
  Var_152 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_84, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[132])));
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

  parse_tree__generate_mmakefile_fragments__generate_dep_file_collective_target_4_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Tuple) (wrapper_arg_1)), &conv0_MmakeRule_9);
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
  mercury__list__map_3_p_0((MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_3[1]), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), Var_12, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[99])), &MmakeRules_9);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRules_9, STATE_VARIABLE_MmakeFile_0_10, STATE_VARIABLE_MmakeFile_11);
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_1(
  void * env_ptr_arg)
{
  struct parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0_s * env_ptr = (struct parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_3(
  void * env_ptr_arg)
{
  struct parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0_s * env_ptr = (struct parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__Var_38 = ((MR_Word) ((env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__conv1_Var_38));
  (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__Var_83 = ((MR_Word) ((env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__conv0_Var_83));
  parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_2(env_ptr);
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_2(
  void * env_ptr_arg)
{
  struct parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0_s * env_ptr = (struct parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Word Var_39 = ((((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__Var_83, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    MR_Word Var_40 = ((MR_Unsigned) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__Var_83, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__Var_83, (MR_Integer) 0)));
    MR_Word Var_341;
    MR_Word Var_342;
    MR_Word Var_343;
    MR_Word Var_344;
    MR_Word Var_345;
    MR_Word Var_346;
    MR_Word Var_347;
    MR_Word Var_348;
    MR_Word Var_349;
    MR_Word Var_350;
    MR_Word Var_351;
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
    MR_Word Var_376;

    (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__BurdenedModule_340 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__Var_83, (MR_Integer) 1))));
    Var_341 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__BurdenedModule_340, (MR_Integer) 0))));
    (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__BurdenedModule_340, (MR_Integer) 1))));
    Var_342 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 0))));
    Var_343 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 1))));
    (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__IncludeMap_42 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 2))));
    Var_344 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 3))));
    Var_345 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 4))));
    Var_346 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 5))));
    Var_347 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 6))));
    Var_348 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 7))));
    Var_349 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 8))));
    Var_350 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 9))));
    Var_351 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 10))));
    Var_352 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 11))));
    Var_353 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 12))));
    Var_354 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 13))));
    Var_355 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 14))));
    Var_356 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 15))));
    Var_357 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 16))));
    Var_358 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 17))));
    Var_359 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 18))));
    Var_360 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 19))));
    Var_361 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 20))));
    Var_362 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 21))));
    Var_363 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 22))));
    Var_364 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 23))));
    Var_365 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 24))));
    Var_366 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 25))));
    Var_367 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 26))));
    Var_368 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 27))));
    Var_369 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 28))));
    Var_370 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 29))));
    Var_371 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 30))));
    Var_372 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 31))));
    Var_373 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 32))));
    Var_374 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 33))));
    Var_375 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 34))));
    Var_376 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__ParseTreeModuleSrc_41, (MR_Integer) 35))));
    (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__succeeded = mercury__map__is_empty_1_p_0((env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__TypeCtorInfo_377_377, (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__IncludeMap_42);
    (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__succeeded = !((env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__succeeded);
    if ((env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__succeeded)
      parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_1(env_ptr);
  }
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_4(
  void * env_ptr_arg)
{
  struct parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0_s * env_ptr = (struct parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__commit_0) == 0)
    {
      {
        (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__TypeCtorInfo_377_377 = (MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0);
        mercury__map__member_3_p_0((env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__TypeCtorInfo_377_377, (MR_Word) (&parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0), (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__DepsMap_13, &(env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__conv1_Var_38, &(env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__conv0_Var_83, parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_3, env_ptr);
      }
      (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0(
  MR_Word ModuleName_12,
  MR_Word DepsMap_13,
  MR_String ModuleMakeVarName_14,
  MR_Word MmcMakeDeps_15,
  MR_Word Intermod_16,
  MR_Word TransOpt_17,
  MR_Word MaybeModuleDepsVarPair_18,
  MR_Word MaybeOptsVarPair_19,
  MR_Word MaybeTransOptsVarPair_20,
  MR_Word STATE_VARIABLE_MmakeFile_0_70,
  MR_Word * STATE_VARIABLE_MmakeFile_71)
{
  struct parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0_s env;

  (env).parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__DepsMap_13 = DepsMap_13;
  {
    MR_Word MaybeOptsVar_22 = ((MR_Word) ((MR_hl_field(0, MaybeOptsVarPair_19, (MR_Integer) 0))));
    MR_String MaybeOptsVarSpace_23 = ((MR_String) ((MR_hl_field(0, MaybeOptsVarPair_19, (MR_Integer) 1))));
    MR_Word MaybeTransOptsVar_24 = ((MR_Word) ((MR_hl_field(0, MaybeTransOptsVarPair_20, (MR_Integer) 0))));
    MR_String MaybeTransOptsVarSpace_25 = ((MR_String) ((MR_hl_field(0, MaybeTransOptsVarPair_20, (MR_Integer) 1))));
    MR_Word MaybeModuleDepsVar_26 = ((MR_Word) ((MR_hl_field(0, MaybeModuleDepsVarPair_18, (MR_Integer) 0))));
    MR_String MaybeModuleDepsVarSpace_27 = ((MR_String) ((MR_hl_field(0, MaybeModuleDepsVarPair_18, (MR_Integer) 1))));
    MR_String ModuleNameStr_28;
    MR_String LibModuleNameStr_29;
    MR_String LibInstallIntsTargetName_30;
    MR_String LibInstallOptsTargetName_31;
    MR_String LibInstallHdrsTargetName_32;
    MR_String LibInstallGradeHdrsTargetName_33;
    MR_String ModuleMakeVarNameInts_34;
    MR_String ModuleMakeVarNameInt3s_35;
    MR_String MaybeSpaceOptStr_36;
    MR_String SpaceInt0Str_43;
    MR_String MaybeModuleVarNameInt0sSpace_45;
    MR_Word MaybeModuleVarNameInt0s_46;
    MR_String MaybeSpaceTransOptStr_47;
    MR_String MaybeSpaceDepStr_48;
    MR_String LibInstallIntsFiles_49;
    MR_Word LibInstallIntsFilesActions_51;
    MR_Word MmakeRuleLibInstallInts_52;
    MR_Word LibInstallOptsSources_53;
    MR_Word LibInstallOptsActions_54;
    MR_Word MmakeRuleLibInstallOpts_57;
    MR_String ModuleMakeVarNameMhs_58;
    MR_Word MmakeRuleLibInstallHdrsNoMhs_59;
    MR_Word LibInstallHdrsMhsActions_61;
    MR_Word MmakeRuleLibInstallHdrsMhs_62;
    MR_Word MmakeFragmentLibInstallHdrsMaybeMhs_63;
    MR_String ModuleMakeVarNameMihs_64;
    MR_Word MmakeRuleLibInstallGradeHdrsNoMihs_65;
    MR_Word LibInstallGradeHdrsMihsActions_67;
    MR_Word MmakeRuleLibInstallGradeHdrsMihs_68;
    MR_Word MmakeFragmentLibInstallGradeHdrsMaybeMihs_69;
    MR_String Var_78;
    MR_String Var_81;
    MR_String Var_90;
    MR_String Var_91;
    MR_String Var_93;
    MR_String Var_94;
    MR_String Var_96;
    MR_String Var_97;
    MR_String Var_98;
    MR_String Var_99;
    MR_String Var_101;
    MR_String Var_103;
    MR_Word Var_105;
    MR_Word Var_107;
    MR_Word Var_109;
    MR_Word Var_111;
    MR_Word Var_113;
    MR_Word Var_115;
    MR_Word Var_117;
    MR_Word Var_119;
    MR_Word Var_121;
    MR_Word Var_123;
    MR_Word Var_125;
    MR_Word Var_127;
    MR_Word Var_129;
    MR_String Var_130;
    MR_String Var_132;
    MR_String Var_133;
    MR_String Var_134;
    MR_String Var_135;
    MR_Word Var_156;
    MR_Word Var_157;
    MR_Word Var_158;
    MR_Word Var_160;
    MR_Word Var_161;
    MR_Word Var_162;
    MR_Word Var_163;
    MR_Word Var_238;
    MR_Word Var_242;
    MR_String Var_243;
    MR_String Var_245;
    MR_String Var_247;
    MR_Word Var_262;
    MR_Word Var_270;
    MR_Word Var_274;
    MR_String Var_275;
    MR_String Var_277;
    MR_String Var_279;
    MR_Word Var_334;
    MR_Word STATE_VARIABLE_MmakeFile_336_336;
    MR_Word STATE_VARIABLE_MmakeFile_337_337;
    MR_Word STATE_VARIABLE_MmakeFile_338_338;
    MR_String Var_382;
    MR_String Var_385;

    ModuleNameStr_28 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_12);
    LibModuleNameStr_29 = mercury__string__f_43_43_2_f_0((MR_String) "lib", ModuleNameStr_28);
    LibInstallIntsTargetName_30 = mercury__string__f_43_43_2_f_0(LibModuleNameStr_29, (MR_String) ".install_ints");
    LibInstallOptsTargetName_31 = mercury__string__f_43_43_2_f_0(LibModuleNameStr_29, (MR_String) ".install_opts");
    LibInstallHdrsTargetName_32 = mercury__string__f_43_43_2_f_0(LibModuleNameStr_29, (MR_String) ".install_hdrs");
    LibInstallGradeHdrsTargetName_33 = mercury__string__f_43_43_2_f_0(LibModuleNameStr_29, (MR_String) ".install_grade_hdrs");
    Var_78 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_14, (MR_String) ".ints)");
    ModuleMakeVarNameInts_34 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_78);
    Var_81 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_14, (MR_String) ".int3s)");
    ModuleMakeVarNameInt3s_35 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_81);
    switch (Intermod_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeSpaceOptStr_36 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        MaybeSpaceOptStr_36 = (MR_String) " opt";
        break;
    }
    parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_4(&env);
    if ((env).parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__succeeded)
    {
      MR_String ModuleVarNameInt0s_44;
      MR_String Var_85;

      SpaceInt0Str_43 = (MR_String) " int0";
      Var_85 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_14, (MR_String) ".int0s)");
      ModuleVarNameInt0s_44 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_85);
      MaybeModuleVarNameInt0sSpace_45 = mercury__string__f_43_43_2_f_0(ModuleVarNameInt0s_44, (MR_String) " ");
      {
        MaybeModuleVarNameInt0s_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeModuleVarNameInt0s_46, 0) = ((MR_Box) (ModuleVarNameInt0s_44));
        MR_hl_field(1, MaybeModuleVarNameInt0s_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      SpaceInt0Str_43 = (MR_String) "";
      MaybeModuleVarNameInt0sSpace_45 = (MR_String) "";
      MaybeModuleVarNameInt0s_46 = (MR_Word) ((MR_Unsigned) 0U);
    }
    switch (TransOpt_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeSpaceTransOptStr_47 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        MaybeSpaceTransOptStr_47 = (MR_String) " trans_opt";
        break;
    }
    switch (MmcMakeDeps_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MaybeSpaceDepStr_48 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        MaybeSpaceDepStr_48 = (MR_String) " module_dep";
        break;
    }
    Var_99 = mercury__string__f_43_43_2_f_0(MaybeModuleDepsVarSpace_27, (MR_String) "\"");
    Var_98 = mercury__string__f_43_43_2_f_0(MaybeTransOptsVarSpace_25, Var_99);
    Var_97 = mercury__string__f_43_43_2_f_0(MaybeOptsVarSpace_23, Var_98);
    Var_96 = mercury__string__f_43_43_2_f_0(MaybeModuleVarNameInt0sSpace_45, Var_97);
    Var_94 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_96);
    Var_93 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInt3s_35, Var_94);
    Var_91 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_93);
    Var_90 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInts_34, Var_91);
    LibInstallIntsFiles_49 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_90);
    Var_103 = mercury__string__f_43_43_2_f_0(LibInstallIntsFiles_49, (MR_String) "; \\");
    Var_101 = mercury__string__f_43_43_2_f_0((MR_String) "files=", Var_103);
    Var_135 = mercury__string__f_43_43_2_f_0(MaybeSpaceDepStr_48, (MR_String) "; do \\");
    Var_134 = mercury__string__f_43_43_2_f_0(MaybeSpaceTransOptStr_47, Var_135);
    Var_133 = mercury__string__f_43_43_2_f_0(MaybeSpaceOptStr_36, Var_134);
    Var_132 = mercury__string__f_43_43_2_f_0(SpaceInt0Str_43, Var_133);
    Var_130 = mercury__string__f_43_43_2_f_0((MR_String) "for ext in mh int int2 int3", Var_132);
    {
      Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_129, 0) = ((MR_Box) (Var_130));
      MR_hl_field(1, Var_129, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[43])));
    }
    {
      Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_127, 0) = ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'."));
      MR_hl_field(1, Var_127, 1) = ((MR_Box) (Var_129));
    }
    {
      Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_125, 0) = ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use"));
      MR_hl_field(1, Var_125, 1) = ((MR_Box) (Var_127));
    }
    {
      Var_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_123, 0) = ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option."));
      MR_hl_field(1, Var_123, 1) = ((MR_Box) (Var_125));
    }
    {
      Var_121 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_121, 0) = ((MR_Box) ((MR_String) "done"));
      MR_hl_field(1, Var_121, 1) = ((MR_Box) (Var_123));
    }
    {
      Var_119 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_119, 0) = ((MR_Box) ((MR_String) "\tfi; \\"));
      MR_hl_field(1, Var_119, 1) = ((MR_Box) (Var_121));
    }
    {
      Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_117, 0) = ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\"));
      MR_hl_field(1, Var_117, 1) = ((MR_Box) (Var_119));
    }
    {
      Var_115 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_115, 0) = ((MR_Box) ((MR_String) "\t\techo \"installing \044\044target\"; \\"));
      MR_hl_field(1, Var_115, 1) = ((MR_Box) (Var_117));
    }
    {
      Var_113 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_113, 0) = ((MR_Box) ((MR_String) "\telse \\"));
      MR_hl_field(1, Var_113, 1) = ((MR_Box) (Var_115));
    }
    {
      Var_111 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_111, 0) = ((MR_Box) ((MR_String) "\t\techo \"\044\044target unchanged\"; \\"));
      MR_hl_field(1, Var_111, 1) = ((MR_Box) (Var_113));
    }
    {
      Var_109 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_109, 0) = ((MR_Box) ((MR_String) "\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\"));
      MR_hl_field(1, Var_109, 1) = ((MR_Box) (Var_111));
    }
    {
      Var_107 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_107, 0) = ((MR_Box) ((MR_String) "\ttarget=\"\044(INSTALL_INT_DIR)/\140basename \044\044file\140\"; \\"));
      MR_hl_field(1, Var_107, 1) = ((MR_Box) (Var_109));
    }
    {
      Var_105 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_105, 0) = ((MR_Box) ((MR_String) "for file in \044\044files; do \\"));
      MR_hl_field(1, Var_105, 1) = ((MR_Box) (Var_107));
    }
    {
      LibInstallIntsFilesActions_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, LibInstallIntsFilesActions_51, 0) = ((MR_Box) (Var_101));
      MR_hl_field(1, LibInstallIntsFilesActions_51, 1) = ((MR_Box) (Var_105));
    }
    {
      Var_158 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_158, 0) = ((MR_Box) (ModuleMakeVarNameInt3s_35));
      MR_hl_field(1, Var_158, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_157, 0) = ((MR_Box) (ModuleMakeVarNameInts_34));
      MR_hl_field(1, Var_157, 1) = ((MR_Box) (Var_158));
    }
    Var_163 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeModuleDepsVar_26, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[44])));
    Var_162 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTransOptsVar_24, Var_163);
    Var_161 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeOptsVar_22, Var_162);
    Var_160 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeModuleVarNameInt0s_46, Var_161);
    Var_156 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_157, Var_160);
    {
      MmakeRuleLibInstallInts_52 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallInts_52, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallInts_52, 1) = ((MR_Box) ((MR_String) "lib_install_ints"));
      MR_hl_field(3, MmakeRuleLibInstallInts_52, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallInts_52, 3) = ((MR_Box) (LibInstallIntsTargetName_30));
      MR_hl_field(3, MmakeRuleLibInstallInts_52, 4) = ((MR_Box) (Var_156));
      MR_hl_field(3, MmakeRuleLibInstallInts_52, 5) = ((MR_Box) (LibInstallIntsFilesActions_51));
    }
    (env).parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__succeeded = (Intermod_16 == (MR_Integer) 0);
    if ((env).parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__succeeded)
      (env).parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__succeeded = (TransOpt_17 == (MR_Integer) 0);
    if ((env).parse_tree__generate_mmakefile_fragments__generate_dep_file_install_targets_11_p_0_env_0__succeeded)
    {
      MR_String Var_167;

      LibInstallOptsSources_53 = (MR_Word) ((MR_Unsigned) 0U);
      Var_167 = libs__mmakefiles__silent_noop_action_0_f_0();
      {
        LibInstallOptsActions_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, LibInstallOptsActions_54, 0) = ((MR_Box) (Var_167));
        MR_hl_field(1, LibInstallOptsActions_54, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_String LibInstallOptsFiles_55;
      MR_Word Var_169;
      MR_String Var_174;
      MR_String Var_175;
      MR_String Var_177;
      MR_String Var_179;
      MR_Word Var_181;
      MR_Word Var_183;
      MR_Word Var_185;
      MR_Word Var_187;
      MR_Word Var_189;
      MR_Word Var_191;
      MR_Word Var_193;
      MR_Word Var_195;
      MR_Word Var_197;
      MR_Word Var_199;
      MR_Word Var_201;
      MR_Word Var_203;
      MR_Word Var_205;
      MR_String Var_206;
      MR_String Var_208;
      MR_String Var_209;

      Var_169 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTransOptsVar_24, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[45])));
      LibInstallOptsSources_53 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeOptsVar_22, Var_169);
      Var_175 = mercury__string__f_43_43_2_f_0(MaybeTransOptsVarSpace_25, (MR_String) "\"");
      Var_174 = mercury__string__f_43_43_2_f_0(MaybeOptsVarSpace_23, Var_175);
      LibInstallOptsFiles_55 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_174);
      Var_179 = mercury__string__f_43_43_2_f_0(LibInstallOptsFiles_55, (MR_String) "; \\");
      Var_177 = mercury__string__f_43_43_2_f_0((MR_String) "files=", Var_179);
      Var_209 = mercury__string__f_43_43_2_f_0(MaybeSpaceTransOptStr_47, (MR_String) "; do \\");
      Var_208 = mercury__string__f_43_43_2_f_0(MaybeSpaceOptStr_36, Var_209);
      Var_206 = mercury__string__f_43_43_2_f_0((MR_String) "for ext in ", Var_208);
      {
        Var_205 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_205, 0) = ((MR_Box) (Var_206));
        MR_hl_field(1, Var_205, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[52])));
      }
      {
        Var_203 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_203, 0) = ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'."));
        MR_hl_field(1, Var_203, 1) = ((MR_Box) (Var_205));
      }
      {
        Var_201 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_201, 0) = ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use"));
        MR_hl_field(1, Var_201, 1) = ((MR_Box) (Var_203));
      }
      {
        Var_199 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_199, 0) = ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option"));
        MR_hl_field(1, Var_199, 1) = ((MR_Box) (Var_201));
      }
      {
        Var_197 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_197, 0) = ((MR_Box) ((MR_String) "done"));
        MR_hl_field(1, Var_197, 1) = ((MR_Box) (Var_199));
      }
      {
        Var_195 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_195, 0) = ((MR_Box) ((MR_String) "\tfi; \\"));
        MR_hl_field(1, Var_195, 1) = ((MR_Box) (Var_197));
      }
      {
        Var_193 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_193, 0) = ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\"));
        MR_hl_field(1, Var_193, 1) = ((MR_Box) (Var_195));
      }
      {
        Var_191 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_191, 0) = ((MR_Box) ((MR_String) "\t\techo \"installing \044\044target\"; \\"));
        MR_hl_field(1, Var_191, 1) = ((MR_Box) (Var_193));
      }
      {
        Var_189 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_189, 0) = ((MR_Box) ((MR_String) "\telse \\"));
        MR_hl_field(1, Var_189, 1) = ((MR_Box) (Var_191));
      }
      {
        Var_187 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_187, 0) = ((MR_Box) ((MR_String) "\t\techo \"\044\044target unchanged\"; \\"));
        MR_hl_field(1, Var_187, 1) = ((MR_Box) (Var_189));
      }
      {
        Var_185 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_185, 0) = ((MR_Box) ((MR_String) "\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\"));
        MR_hl_field(1, Var_185, 1) = ((MR_Box) (Var_187));
      }
      {
        Var_183 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_183, 0) = ((MR_Box) ((MR_String) "\ttarget=\"\044(INSTALL_GRADE_INT_DIR)/\140basename \044\044file\140\";\\"));
        MR_hl_field(1, Var_183, 1) = ((MR_Box) (Var_185));
      }
      {
        Var_181 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_181, 0) = ((MR_Box) ((MR_String) "for file in \044\044files; do \\"));
        MR_hl_field(1, Var_181, 1) = ((MR_Box) (Var_183));
      }
      {
        LibInstallOptsActions_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, LibInstallOptsActions_54, 0) = ((MR_Box) (Var_177));
        MR_hl_field(1, LibInstallOptsActions_54, 1) = ((MR_Box) (Var_181));
      }
    }
    {
      MmakeRuleLibInstallOpts_57 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallOpts_57, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallOpts_57, 1) = ((MR_Box) ((MR_String) "lib_install_opts"));
      MR_hl_field(3, MmakeRuleLibInstallOpts_57, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallOpts_57, 3) = ((MR_Box) (LibInstallOptsTargetName_31));
      MR_hl_field(3, MmakeRuleLibInstallOpts_57, 4) = ((MR_Box) (LibInstallOptsSources_53));
      MR_hl_field(3, MmakeRuleLibInstallOpts_57, 5) = ((MR_Box) (LibInstallOptsActions_54));
    }
    Var_382 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_14, (MR_String) ".mhs)");
    ModuleMakeVarNameMhs_58 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_382);
    {
      Var_238 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_238, 0) = ((MR_Box) (ModuleMakeVarNameMhs_58));
      MR_hl_field(1, Var_238, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[44])));
    }
    Var_243 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_242 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_242, 0) = ((MR_Box) (Var_243));
      MR_hl_field(1, Var_242, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRuleLibInstallHdrsNoMhs_59 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_59, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_59, 1) = ((MR_Box) ((MR_String) "install_lib_hdrs_nomhs"));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_59, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_59, 3) = ((MR_Box) (LibInstallHdrsTargetName_32));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_59, 4) = ((MR_Box) (Var_238));
      MR_hl_field(3, MmakeRuleLibInstallHdrsNoMhs_59, 5) = ((MR_Box) (Var_242));
    }
    Var_247 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameMhs_58, (MR_String) "; do \\");
    Var_245 = mercury__string__f_43_43_2_f_0((MR_String) "for hdr in ", Var_247);
    {
      LibInstallHdrsMhsActions_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, LibInstallHdrsMhsActions_61, 0) = ((MR_Box) (Var_245));
      MR_hl_field(1, LibInstallHdrsMhsActions_61, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[54])));
    }
    {
      MmakeRuleLibInstallHdrsMhs_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_62, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_62, 1) = ((MR_Box) ((MR_String) "install_lib_hdrs_mhs"));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_62, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_62, 3) = ((MR_Box) (LibInstallHdrsTargetName_32));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_62, 4) = ((MR_Box) (Var_238));
      MR_hl_field(3, MmakeRuleLibInstallHdrsMhs_62, 5) = ((MR_Box) (LibInstallHdrsMhsActions_61));
    }
    {
      Var_262 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_262, 0) = ((MR_Box) (ModuleMakeVarNameMhs_58));
      MR_hl_field(1, Var_262, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      MmakeFragmentLibInstallHdrsMaybeMhs_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MmakeFragmentLibInstallHdrsMaybeMhs_63, 0) = ((MR_Box) (Var_262));
      MR_hl_field(1, MmakeFragmentLibInstallHdrsMaybeMhs_63, 1) = ((MR_Box) (MmakeRuleLibInstallHdrsNoMhs_59));
      MR_hl_field(1, MmakeFragmentLibInstallHdrsMaybeMhs_63, 2) = ((MR_Box) (MmakeRuleLibInstallHdrsMhs_62));
    }
    Var_385 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_14, (MR_String) ".mihs)");
    ModuleMakeVarNameMihs_64 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_385);
    {
      Var_270 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_270, 0) = ((MR_Box) (ModuleMakeVarNameMihs_64));
      MR_hl_field(1, Var_270, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[45])));
    }
    Var_275 = libs__mmakefiles__silent_noop_action_0_f_0();
    {
      Var_274 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_274, 0) = ((MR_Box) (Var_275));
      MR_hl_field(1, Var_274, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRuleLibInstallGradeHdrsNoMihs_65 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_65, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_65, 1) = ((MR_Box) ((MR_String) "install_grade_hdrs_no_mihs"));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_65, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_65, 3) = ((MR_Box) (LibInstallGradeHdrsTargetName_33));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_65, 4) = ((MR_Box) (Var_270));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsNoMihs_65, 5) = ((MR_Box) (Var_274));
    }
    Var_279 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameMihs_64, (MR_String) "; do \\");
    Var_277 = mercury__string__f_43_43_2_f_0((MR_String) "for hdr in ", Var_279);
    {
      LibInstallGradeHdrsMihsActions_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, LibInstallGradeHdrsMihsActions_67, 0) = ((MR_Box) (Var_277));
      MR_hl_field(1, LibInstallGradeHdrsMihsActions_67, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[77])));
    }
    {
      MmakeRuleLibInstallGradeHdrsMihs_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_68, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_68, 1) = ((MR_Box) ((MR_String) "install_grade_hdrs_mihs"));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_68, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_68, 3) = ((MR_Box) (LibInstallGradeHdrsTargetName_33));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_68, 4) = ((MR_Box) (Var_270));
      MR_hl_field(3, MmakeRuleLibInstallGradeHdrsMihs_68, 5) = ((MR_Box) (LibInstallGradeHdrsMihsActions_67));
    }
    {
      Var_334 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_334, 0) = ((MR_Box) (ModuleMakeVarNameMihs_64));
      MR_hl_field(1, Var_334, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      MmakeFragmentLibInstallGradeHdrsMaybeMihs_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MmakeFragmentLibInstallGradeHdrsMaybeMihs_69, 0) = ((MR_Box) (Var_334));
      MR_hl_field(1, MmakeFragmentLibInstallGradeHdrsMaybeMihs_69, 1) = ((MR_Box) (MmakeRuleLibInstallGradeHdrsNoMihs_65));
      MR_hl_field(1, MmakeFragmentLibInstallGradeHdrsMaybeMihs_69, 2) = ((MR_Box) (MmakeRuleLibInstallGradeHdrsMihs_68));
    }
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleLibInstallInts_52, STATE_VARIABLE_MmakeFile_0_70, &STATE_VARIABLE_MmakeFile_336_336);
    libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleLibInstallOpts_57, STATE_VARIABLE_MmakeFile_336_336, &STATE_VARIABLE_MmakeFile_337_337);
    libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibInstallHdrsMaybeMhs_63, STATE_VARIABLE_MmakeFile_337_337, &STATE_VARIABLE_MmakeFile_338_338);
    libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibInstallGradeHdrsMaybeMihs_69, STATE_VARIABLE_MmakeFile_338_338, STATE_VARIABLE_MmakeFile_71);
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
  MR_String InitCAction1_30;
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
  MR_String Var_71;
  MR_String Var_73;
  MR_String Var_74;
  MR_String Var_76;
  MR_Word Var_81;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_Word Var_87;
  MR_Word Var_89;
  MR_Word Var_90;
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
  Var_76 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameInitCs_29, (MR_String) " \044(ALL_C2INITARGS)");
  Var_74 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_76);
  Var_73 = mercury__string__f_43_43_2_f_0(TmpInitCFileName_28, Var_74);
  Var_71 = mercury__string__f_43_43_2_f_0((MR_String) "--init-c-file ", Var_73);
  InitCAction1_30 = mercury__string__f_43_43_2_f_0((MR_String) "\100\044(C2INIT) \044(ALL_GRADEFLAGS) \044(ALL_C2INITFLAGS) ", Var_71);
  InitCAction2_31 = mercury__string__f_43_43_2_f_0((MR_String) "\100mercury_update_interface ", InitCFileName_13);
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) (ForceC2InitTarget_26));
    MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_53));
  }
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (InitCAction2_31));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (InitCAction1_30));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_85));
  }
  {
    MmakeRuleInitCFile_32 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleInitCFile_32, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleInitCFile_32, 1) = ((MR_Box) ((MR_String) "init_c_file"));
    MR_hl_field(3, MmakeRuleInitCFile_32, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleInitCFile_32, 3) = ((MR_Box) (InitCFileName_13));
    MR_hl_field(3, MmakeRuleInitCFile_32, 4) = ((MR_Box) (Var_81));
    MR_hl_field(3, MmakeRuleInitCFile_32, 5) = ((MR_Box) (Var_84));
  }
  {
    Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_90, 0) = ((MR_Box) (MmakeRuleInitCFile_32));
    MR_hl_field(1, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_89 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_89, 0) = ((MR_Box) (MmakeRuleForceInitCFile_27));
    MR_hl_field(1, Var_89, 1) = ((MR_Box) (Var_90));
  }
  {
    Var_87 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_87, 0) = ((MR_Box) (MmakeRuleInitFile_24));
    MR_hl_field(1, Var_87, 1) = ((MR_Box) (Var_89));
  }
  libs__mmakefiles__add_mmake_entries_3_p_0(Var_87, STATE_VARIABLE_MmakeFile_0_33, STATE_VARIABLE_MmakeFile_34);
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dep_file_exec_library_targets_15_p_0(
  MR_Word Globals_16,
  MR_Word ModuleName_17,
  MR_String ModuleMakeVarName_18,
  MR_String InitFileName_19,
  MR_String InitObjFileName_20,
  MR_Word MaybeOptsVar_21,
  MR_Word MaybeTransOptsVar_22,
  MR_String ExeFileName_23,
  MR_String JarFileName_24,
  MR_String StaticLibFileName_25,
  MR_String SharedLibFileName_26,
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
  MR_Word UseInstallName_42;
  MR_String InstallNameOpt_43;
  MR_String LibTargetName_44;
  MR_String ModuleMakeVarNameInts_45;
  MR_String ModuleMakeVarNameInt3s_46;
  MR_Word IntsOptsInitVars_47;
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
  MR_Word Var_71;
  MR_String Var_72;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_String Var_84;
  MR_String Var_87;
  MR_String Var_90;
  MR_String Var_92;
  MR_String Var_96;
  MR_String Var_99;
  MR_String Var_102;
  MR_String Var_104;
  MR_String Var_105;
  MR_String Var_107;
  MR_String Var_110;
  MR_String Var_111;
  MR_String Var_113;
  MR_Word Var_117;
  MR_String Var_122;
  MR_Word Var_124;
  MR_Word Var_125;
  MR_Word Var_126;
  MR_Word Var_127;
  MR_Word Var_129;
  MR_Word Var_130;
  MR_String Var_136;
  MR_String Var_138;
  MR_String Var_141;
  MR_Word Var_143;
  MR_Word Var_144;
  MR_Word Var_146;
  MR_Word Var_147;
  MR_Word Var_148;
  MR_Word Var_152;
  MR_Word Var_156;
  MR_Word Var_157;
  MR_String Var_162;
  MR_String Var_165;
  MR_String Var_167;
  MR_String Var_168;
  MR_String Var_170;
  MR_String Var_172;
  MR_String Var_175;
  MR_String Var_178;
  MR_Word Var_182;
  MR_Word Var_183;
  MR_Word Var_186;
  MR_Word Var_187;
  MR_Word Var_188;
  MR_Word Var_193;
  MR_Word Var_194;
  MR_String Var_199;
  MR_String Var_200;
  MR_String Var_202;
  MR_Word Var_208;
  MR_Word Var_209;
  MR_Word Var_211;
  MR_Word Var_212;
  MR_Word Var_213;
  MR_Word Var_214;
  MR_String Var_217;
  MR_String Var_218;
  MR_Word Var_224;
  MR_Word STATE_VARIABLE_MmakeFile_226_226;
  MR_Word STATE_VARIABLE_MmakeFile_227_227;
  MR_Word STATE_VARIABLE_MmakeFile_228_228;
  MR_Word STATE_VARIABLE_MmakeFile_229_229;
  MR_Word Var_230;
  MR_Word Var_232;

  Var_72 = mercury__string__f_43_43_2_f_0(ExeFileName_23, (MR_String) "\044(EXT_FOR_EXE)");
  {
    Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_71, 0) = ((MR_Box) (Var_72));
    MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRuleExtForExe_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleExtForExe_29, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleExtForExe_29, 1) = ((MR_Box) ((MR_String) "ext_for_exe"));
    MR_hl_field(3, MmakeRuleExtForExe_29, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, MmakeRuleExtForExe_29, 3) = ((MR_Box) (ExeFileName_23));
    MR_hl_field(3, MmakeRuleExtForExe_29, 4) = ((MR_Box) (Var_71));
    MR_hl_field(3, MmakeRuleExtForExe_29, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_80 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_80, 0) = ((MR_Box) (MmakeRuleExtForExe_29));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (Var_80));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeFragmentExtForExe_30 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeFragmentExtForExe_30, 0) = ((MR_Box) (MR_mkword(2, &parse_tree__generate_mmakefile_fragments_scalar_common_1[34])));
    MR_hl_field(2, MmakeFragmentExtForExe_30, 1) = ((MR_Box) (Var_79));
    MR_hl_field(2, MmakeFragmentExtForExe_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_84 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ",\044(ALL_MLLIBS_DEP))");
  All_MLLibsDep_31 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", Var_84);
  Var_87 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ",\044(ALL_MLOBJS))");
  All_MLObjs_32 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", Var_87);
  Var_92 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ",\044(ALL_MLOBJS)))");
  Var_90 = mercury__string__f_43_43_2_f_0((MR_String) "\044(foreach \100,", Var_92);
  All_MLPicObjs_33 = mercury__string__f_43_43_2_f_0((MR_String) "\044(patsubst %.o,%.\044(EXT_FOR_PIC_OBJECTS),", Var_90);
  NL_All_MLObjs_34 = mercury__string__f_43_43_2_f_0((MR_String) "\\\n\t\t", All_MLObjs_32);
  Var_96 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".classes)");
  ModuleMakeVarNameClasses_35 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_96);
  Var_99 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".all_os)");
  ModuleMakeVarNameOs_36 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_99);
  Var_107 = mercury__string__f_43_43_2_f_0(InitObjFileName_20, (MR_String) " \\");
  Var_105 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXT_FOR_EXE) ", Var_107);
  Var_104 = mercury__string__f_43_43_2_f_0(ExeFileName_23, Var_105);
  Var_102 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXEFILE_OPT)", Var_104);
  NonJavaMainRuleAction1Line1_37 = mercury__string__f_43_43_2_f_0((MR_String) "\044(ML) \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) -- \044(ALL_LDFLAGS) ", Var_102);
  Var_113 = mercury__string__f_43_43_2_f_0(NL_All_MLObjs_34, (MR_String) " \044(ALL_MLLIBS)");
  Var_111 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_113);
  Var_110 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameOs_36, Var_111);
  NonJavaMainRuleAction1Line2_38 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_110);
  {
    Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_117, 0) = ((MR_Box) (ModuleMakeVarNameClasses_35));
    MR_hl_field(1, Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRuleExecutableJava_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleExecutableJava_39, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleExecutableJava_39, 1) = ((MR_Box) ((MR_String) "executable_java"));
    MR_hl_field(3, MmakeRuleExecutableJava_39, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleExecutableJava_39, 3) = ((MR_Box) (ExeFileName_23));
    MR_hl_field(3, MmakeRuleExecutableJava_39, 4) = ((MR_Box) (Var_117));
    MR_hl_field(3, MmakeRuleExecutableJava_39, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_122 = mercury__string__f_43_43_2_f_0(ExeFileName_23, (MR_String) "\044(EXT_FOR_EXE)");
  {
    Var_127 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_127, 0) = ((MR_Box) (All_MLLibsDep_31));
    MR_hl_field(1, Var_127, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_126, 0) = ((MR_Box) (All_MLObjs_32));
    MR_hl_field(1, Var_126, 1) = ((MR_Box) (Var_127));
  }
  {
    Var_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_125, 0) = ((MR_Box) (InitObjFileName_20));
    MR_hl_field(1, Var_125, 1) = ((MR_Box) (Var_126));
  }
  {
    Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_124, 0) = ((MR_Box) (ModuleMakeVarNameOs_36));
    MR_hl_field(1, Var_124, 1) = ((MR_Box) (Var_125));
  }
  {
    Var_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_130, 0) = ((MR_Box) (NonJavaMainRuleAction1Line2_38));
    MR_hl_field(1, Var_130, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_129, 0) = ((MR_Box) (NonJavaMainRuleAction1Line1_37));
    MR_hl_field(1, Var_129, 1) = ((MR_Box) (Var_130));
  }
  {
    MmakeRuleExecutableNonJava_40 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleExecutableNonJava_40, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleExecutableNonJava_40, 1) = ((MR_Box) ((MR_String) "executable_non_java"));
    MR_hl_field(3, MmakeRuleExecutableNonJava_40, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleExecutableNonJava_40, 3) = ((MR_Box) (Var_122));
    MR_hl_field(3, MmakeRuleExecutableNonJava_40, 4) = ((MR_Box) (Var_124));
    MR_hl_field(3, MmakeRuleExecutableNonJava_40, 5) = ((MR_Box) (Var_129));
  }
  {
    MmakeFragmentExecutable_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MmakeFragmentExecutable_41, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_4[7]));
    MR_hl_field(1, MmakeFragmentExecutable_41, 1) = ((MR_Box) (MmakeRuleExecutableJava_39));
    MR_hl_field(1, MmakeFragmentExecutable_41, 2) = ((MR_Box) (MmakeRuleExecutableNonJava_40));
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 675, &UseInstallName_42);
  switch (UseInstallName_42) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      InstallNameOpt_43 = (MR_String) "";
      break;
    case (MR_Integer) 1:
      libs__file_util__get_install_name_option_3_p_0(Globals_16, SharedLibFileName_26, &InstallNameOpt_43);
      break;
  }
  Var_136 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_17);
  LibTargetName_44 = mercury__string__f_43_43_2_f_0((MR_String) "lib", Var_136);
  Var_138 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".ints)");
  ModuleMakeVarNameInts_45 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_138);
  Var_141 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".int3s)");
  ModuleMakeVarNameInt3s_46 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_141);
  {
    Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_144, 0) = ((MR_Box) (ModuleMakeVarNameInt3s_46));
    MR_hl_field(1, Var_144, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_143, 0) = ((MR_Box) (ModuleMakeVarNameInts_45));
    MR_hl_field(1, Var_143, 1) = ((MR_Box) (Var_144));
  }
  {
    Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_148, 0) = ((MR_Box) (InitFileName_19));
    MR_hl_field(1, Var_148, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_147 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeTransOptsVar_22, Var_148);
  Var_146 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), MaybeOptsVar_21, Var_147);
  IntsOptsInitVars_47 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_143, Var_146);
  {
    Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_152, 0) = ((MR_Box) (JarFileName_24));
    MR_hl_field(1, Var_152, 1) = ((MR_Box) (IntsOptsInitVars_47));
  }
  {
    MmakeRuleLibTargetJava_48 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleLibTargetJava_48, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleLibTargetJava_48, 1) = ((MR_Box) ((MR_String) "lib_target_java"));
    MR_hl_field(3, MmakeRuleLibTargetJava_48, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, MmakeRuleLibTargetJava_48, 3) = ((MR_Box) (LibTargetName_44));
    MR_hl_field(3, MmakeRuleLibTargetJava_48, 4) = ((MR_Box) (Var_152));
    MR_hl_field(3, MmakeRuleLibTargetJava_48, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_157 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_157, 0) = ((MR_Box) (SharedLibFileName_26));
    MR_hl_field(1, Var_157, 1) = ((MR_Box) (IntsOptsInitVars_47));
  }
  {
    Var_156 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_156, 0) = ((MR_Box) (StaticLibFileName_25));
    MR_hl_field(1, Var_156, 1) = ((MR_Box) (Var_157));
  }
  {
    MmakeRuleLibTargetNonJava_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleLibTargetNonJava_49, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleLibTargetNonJava_49, 1) = ((MR_Box) ((MR_String) "lib_target_non_java"));
    MR_hl_field(3, MmakeRuleLibTargetNonJava_49, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(3, MmakeRuleLibTargetNonJava_49, 3) = ((MR_Box) (LibTargetName_44));
    MR_hl_field(3, MmakeRuleLibTargetNonJava_49, 4) = ((MR_Box) (Var_156));
    MR_hl_field(3, MmakeRuleLibTargetNonJava_49, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeFragmentLibTarget_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MmakeFragmentLibTarget_50, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_4[7]));
    MR_hl_field(1, MmakeFragmentLibTarget_50, 1) = ((MR_Box) (MmakeRuleLibTargetJava_48));
    MR_hl_field(1, MmakeFragmentLibTarget_50, 2) = ((MR_Box) (MmakeRuleLibTargetNonJava_49));
  }
  Var_162 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_18, (MR_String) ".all_pic_os)");
  ModuleMakeVarNamePicOs_51 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_162);
  Var_172 = mercury__string__f_43_43_2_f_0(SharedLibFileName_26, (MR_String) " \\");
  Var_170 = mercury__string__f_43_43_2_f_0((MR_String) "-o ", Var_172);
  Var_168 = mercury__string__f_43_43_2_f_0((MR_String) " \044(ALL_LD_LIBFLAGS) ", Var_170);
  Var_167 = mercury__string__f_43_43_2_f_0(InstallNameOpt_43, Var_168);
  Var_165 = mercury__string__f_43_43_2_f_0((MR_String) "-- ", Var_167);
  SharedLibAction1Line1_52 = mercury__string__f_43_43_2_f_0((MR_String) "\044(ML) --make-shared-lib \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) ", Var_165);
  Var_175 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNamePicOs_51, (MR_String) " \\");
  SharedLibAction1Line2_53 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_175);
  Var_178 = mercury__string__f_43_43_2_f_0(All_MLPicObjs_33, (MR_String) " \044(ALL_MLLIBS)");
  SharedLibAction1Line3_54 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_178);
  {
    Var_183 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_183, 0) = ((MR_Box) (All_MLPicObjs_33));
    MR_hl_field(1, Var_183, 1) = ((MR_Box) (Var_127));
  }
  {
    Var_182 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_182, 0) = ((MR_Box) (ModuleMakeVarNamePicOs_51));
    MR_hl_field(1, Var_182, 1) = ((MR_Box) (Var_183));
  }
  {
    Var_188 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_188, 0) = ((MR_Box) (SharedLibAction1Line3_54));
    MR_hl_field(1, Var_188, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_187 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_187, 0) = ((MR_Box) (SharedLibAction1Line2_53));
    MR_hl_field(1, Var_187, 1) = ((MR_Box) (Var_188));
  }
  {
    Var_186 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_186, 0) = ((MR_Box) (SharedLibAction1Line1_52));
    MR_hl_field(1, Var_186, 1) = ((MR_Box) (Var_187));
  }
  {
    MmakeRuleSharedLib_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleSharedLib_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleSharedLib_55, 1) = ((MR_Box) ((MR_String) "shared_lib"));
    MR_hl_field(3, MmakeRuleSharedLib_55, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleSharedLib_55, 3) = ((MR_Box) (SharedLibFileName_26));
    MR_hl_field(3, MmakeRuleSharedLib_55, 4) = ((MR_Box) (Var_182));
    MR_hl_field(3, MmakeRuleSharedLib_55, 5) = ((MR_Box) (Var_186));
  }
  {
    Var_194 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_194, 0) = ((MR_Box) (MmakeRuleSharedLib_55));
  }
  {
    Var_193 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_193, 0) = ((MR_Box) (Var_194));
    MR_hl_field(1, Var_193, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeFragmentSharedLib_56 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeFragmentSharedLib_56, 0) = ((MR_Box) (MR_mkword(2, &parse_tree__generate_mmakefile_fragments_scalar_common_1[35])));
    MR_hl_field(2, MmakeFragmentSharedLib_56, 1) = ((MR_Box) (Var_193));
    MR_hl_field(2, MmakeFragmentSharedLib_56, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  LibAction1_57 = mercury__string__f_43_43_2_f_0((MR_String) "rm -f ", StaticLibFileName_25);
  Var_202 = mercury__string__f_43_43_2_f_0(ModuleMakeVarNameOs_36, (MR_String) " \\");
  Var_200 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_202);
  Var_199 = mercury__string__f_43_43_2_f_0(StaticLibFileName_25, Var_200);
  LibAction2Line1_58 = mercury__string__f_43_43_2_f_0((MR_String) "\044(AR) \044(ALL_ARFLAGS) \044(AR_LIBFILE_OPT)", Var_199);
  LibAction2Line2_59 = mercury__string__f_43_43_2_f_0((MR_String) "\t", All_MLObjs_32);
  LibAction3_60 = mercury__string__f_43_43_2_f_0((MR_String) "\044(RANLIB) \044(ALL_RANLIBFLAGS) ", StaticLibFileName_25);
  {
    Var_209 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_209, 0) = ((MR_Box) (All_MLObjs_32));
    MR_hl_field(1, Var_209, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_208 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_208, 0) = ((MR_Box) (ModuleMakeVarNameOs_36));
    MR_hl_field(1, Var_208, 1) = ((MR_Box) (Var_209));
  }
  {
    Var_214 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_214, 0) = ((MR_Box) (LibAction3_60));
    MR_hl_field(1, Var_214, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_213 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_213, 0) = ((MR_Box) (LibAction2Line2_59));
    MR_hl_field(1, Var_213, 1) = ((MR_Box) (Var_214));
  }
  {
    Var_212 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_212, 0) = ((MR_Box) (LibAction2Line1_58));
    MR_hl_field(1, Var_212, 1) = ((MR_Box) (Var_213));
  }
  {
    Var_211 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_211, 0) = ((MR_Box) (LibAction1_57));
    MR_hl_field(1, Var_211, 1) = ((MR_Box) (Var_212));
  }
  {
    MmakeRuleLib_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleLib_61, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleLib_61, 1) = ((MR_Box) ((MR_String) "lib"));
    MR_hl_field(3, MmakeRuleLib_61, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleLib_61, 3) = ((MR_Box) (StaticLibFileName_25));
    MR_hl_field(3, MmakeRuleLib_61, 4) = ((MR_Box) (Var_208));
    MR_hl_field(3, MmakeRuleLib_61, 5) = ((MR_Box) (Var_211));
  }
  parse_tree__module_cmds__list_class_files_for_jar_mmake_3_p_0(Globals_16, ModuleMakeVarNameClasses_35, &ListClassFiles_62);
  Var_218 = mercury__string__f_43_43_2_f_0((MR_String) " ", ListClassFiles_62);
  Var_217 = mercury__string__f_43_43_2_f_0(JarFileName_24, Var_218);
  JarAction1_63 = mercury__string__f_43_43_2_f_0((MR_String) "\044(JAR) \044(JAR_CREATE_FLAGS) ", Var_217);
  {
    Var_224 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_224, 0) = ((MR_Box) (JarAction1_63));
    MR_hl_field(1, Var_224, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MmakeRuleJar_64 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeRuleJar_64, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, MmakeRuleJar_64, 1) = ((MR_Box) ((MR_String) "jar"));
    MR_hl_field(3, MmakeRuleJar_64, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(3, MmakeRuleJar_64, 3) = ((MR_Box) (JarFileName_24));
    MR_hl_field(3, MmakeRuleJar_64, 4) = ((MR_Box) (Var_117));
    MR_hl_field(3, MmakeRuleJar_64, 5) = ((MR_Box) (Var_224));
  }
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentExtForExe_30, STATE_VARIABLE_MmakeFile_0_65, &STATE_VARIABLE_MmakeFile_226_226);
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentExecutable_41, STATE_VARIABLE_MmakeFile_226_226, &STATE_VARIABLE_MmakeFile_227_227);
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentLibTarget_50, STATE_VARIABLE_MmakeFile_227_227, &STATE_VARIABLE_MmakeFile_228_228);
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentSharedLib_56, STATE_VARIABLE_MmakeFile_228_228, &STATE_VARIABLE_MmakeFile_229_229);
  {
    Var_232 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_232, 0) = ((MR_Box) (MmakeRuleJar_64));
    MR_hl_field(1, Var_232, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_230 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_230, 0) = ((MR_Box) (MmakeRuleLib_61));
    MR_hl_field(1, Var_230, 1) = ((MR_Box) (Var_232));
  }
  libs__mmakefiles__add_mmake_entries_3_p_0(Var_230, STATE_VARIABLE_MmakeFile_229_229, STATE_VARIABLE_MmakeFile_66);
}

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_9_p_0_6(
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
parse_tree__generate_mmakefile_fragments__generate_dv_file_9_p_0_5(
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
parse_tree__generate_mmakefile_fragments__generate_dv_file_9_p_0_4(
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
parse_tree__generate_mmakefile_fragments__generate_dv_file_9_p_0_3(
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
parse_tree__generate_mmakefile_fragments__generate_dv_file_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv1_FileName_6;

  parse_tree__generate_mmakefile_fragments__get_source_file_3_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_FileName_6));
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_9_p_0_1(
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
parse_tree__generate_mmakefile_fragments__generate_dv_file_9_p_0(
  MR_Word Globals_10,
  MR_String SourceFileName_11,
  MR_Word ModuleName_12,
  MR_Word DepsMap_13,
  MR_Word * MmakeFile_14,
  MR_Word STATE_VARIABLE_Cache_0_38,
  MR_Word * STATE_VARIABLE_Cache_39)
{
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
  MR_Word MmakeVarModuleDepErrs_28;
  MR_Word MmakeVarModuleErrs_29;
  MR_Word StartFragments_30;
  MR_Word ModMiscFragments_31;
  MR_Word IntnFragments_32;
  MR_Word OptFragments_33;
  MR_Word CFragments_34;
  MR_Word JavaFragments_35;
  MR_Word CsharpFragments_36;
  MR_Word SmartRecompFragments_37;
  MR_Word Var_44;
  MR_String Var_45;
  MR_Word Var_47;
  MR_String Var_50;
  MR_Word Var_52;
  MR_String Var_55;
  MR_Word Var_57;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_68;
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
  MR_Word Var_80;
  MR_Word Var_81;

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
  parse_tree__generate_mmakefile_fragments__select_no_fatal_error_modules_3_p_0(DepsMap_13, Modules0_21, &Modules1_22);
  mercury__list__sort_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[13]), Modules1_22, &Modules_23);
  parse_tree__file_names__module_name_to_make_var_name_2_p_0(ModuleName_12, &ModuleMakeVarName_24);
  {
    Var_44 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_44, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_5[2]));
    MR_hl_field(0, Var_44, 1) = ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_9_p_0_2));
    MR_hl_field(0, Var_44, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_44, 3) = ((MR_Box) (DepsMap_13));
  }
  mercury__list__map_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_44, Modules_23, &SourceFiles0_25);
  mercury__list__sort_and_remove_dups_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), SourceFiles0_25, &SourceFiles_26);
  Var_45 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".ms");
  Var_47 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_3[2]), SourceFiles_26);
  {
    MmakeVarModuleMs_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarModuleMs_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarModuleMs_27, 1) = ((MR_Box) (Var_45));
    MR_hl_field(3, MmakeVarModuleMs_27, 2) = ((MR_Box) (Var_47));
  }
  Var_50 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".dep_errs");
  Var_52 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_3[3]), SourceFiles_26);
  {
    MmakeVarModuleDepErrs_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarModuleDepErrs_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarModuleDepErrs_28, 1) = ((MR_Box) (Var_50));
    MR_hl_field(3, MmakeVarModuleDepErrs_28, 2) = ((MR_Box) (Var_52));
  }
  Var_55 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_24, (MR_String) ".errs");
  Var_57 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_3[4]), SourceFiles_26);
  {
    MmakeVarModuleErrs_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarModuleErrs_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarModuleErrs_29, 1) = ((MR_Box) (Var_55));
    MR_hl_field(3, MmakeVarModuleErrs_29, 2) = ((MR_Box) (Var_57));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (MmakeVarModuleErrs_29));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (MmakeVarModuleDepErrs_28));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (MmakeVarModuleMs_27));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (MmakeStartComment_20));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
  }
  StartFragments_30 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[14]), Var_61);
  parse_tree__generate_mmakefile_fragments__generate_dv_file_define_mod_misc_vars_5_p_0(Globals_10, DepsMap_13, Modules_23, ModuleMakeVarName_24, &ModMiscFragments_31);
  parse_tree__generate_mmakefile_fragments__generate_dv_file_define_intn_vars_2_p_0(ModuleMakeVarName_24, &IntnFragments_32);
  parse_tree__generate_mmakefile_fragments__generate_dv_file_define_opt_vars_2_p_0(ModuleMakeVarName_24, &OptFragments_33);
  parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_9_p_0(Globals_10, DepsMap_13, Modules_23, ModuleMakeVarName_24, &CFragments_34, STATE_VARIABLE_Cache_0_38, STATE_VARIABLE_Cache_39);
  parse_tree__generate_mmakefile_fragments__generate_dv_file_define_java_vars_2_p_0(ModuleMakeVarName_24, &JavaFragments_35);
  parse_tree__generate_mmakefile_fragments__generate_dv_file_define_csharp_vars_2_p_0(ModuleMakeVarName_24, &CsharpFragments_36);
  parse_tree__generate_mmakefile_fragments__generate_dv_file_define_smart_recomp_vars_2_p_0(ModuleMakeVarName_24, &SmartRecompFragments_37);
  Var_68 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), StartFragments_30);
  Var_70 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), ModMiscFragments_31);
  Var_72 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), IntnFragments_32);
  Var_74 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), OptFragments_33);
  Var_76 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), CFragments_34);
  Var_78 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), JavaFragments_35);
  Var_80 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), CsharpFragments_36);
  Var_81 = mercury__cord__from_list_1_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), SmartRecompFragments_37);
  Var_79 = mercury__cord__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Var_80, Var_81);
  Var_77 = mercury__cord__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Var_78, Var_79);
  Var_75 = mercury__cord__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Var_76, Var_77);
  Var_73 = mercury__cord__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Var_74, Var_75);
  Var_71 = mercury__cord__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Var_72, Var_73);
  Var_69 = mercury__cord__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Var_70, Var_71);
  *MmakeFile_14 = mercury__cord__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), Var_68, Var_69);
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
  *SmartRecompFragments_4 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[12]), Var_38);
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
  *CsharpFragments_4 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[11]), Var_38);
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_java_vars_2_p_0(
  MR_String ModuleMakeVarName_3,
  MR_Word * JavaFragments_4)
{
  MR_Word MmakeVarAllJavas_5;
  MR_Word MmakeVarJavaDates_6;
  MR_Word MmakeVarClassesJava_7;
  MR_Word MmakeVarClassesNonJava_8;
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
    MmakeVarClassesNonJava_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarClassesNonJava_8, 0) = ((MR_Box) (Var_39));
    MR_hl_field(2, MmakeVarClassesNonJava_8, 1) = ((MR_Box) ((MR_String) ""));
  }
  {
    MmakeFragmentVarClasses_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, MmakeFragmentVarClasses_9, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_4[7]));
    MR_hl_field(1, MmakeFragmentVarClasses_9, 1) = ((MR_Box) (MmakeVarClassesJava_7));
    MR_hl_field(1, MmakeFragmentVarClasses_9, 2) = ((MR_Box) (MmakeVarClassesNonJava_8));
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
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_9_p_0_3(
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
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_String conv3_HeadVar__5_5;
  MR_String conv2_HeadVar__6_6;

  parse_tree__file_names__fact_table_file_name_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), &conv3_HeadVar__5_5, &conv2_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv3_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__6_6));
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_String conv1_HeadVar__5_5;
  MR_String conv0_HeadVar__6_6;

  parse_tree__file_names__fact_table_file_name_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), &conv1_HeadVar__5_5, &conv0_HeadVar__6_6);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__5_5));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_9_p_0(
  MR_Word Globals_10,
  MR_Word DepsMap_11,
  MR_Word Modules_12,
  MR_String ModuleMakeVarName_13,
  MR_Word * CFragments_14,
  MR_Word STATE_VARIABLE_Cache_0_39,
  MR_Word * STATE_VARIABLE_Cache_40)
{
  MR_Word MmakeVarAllCs_17;
  MR_Word MmakeVarInitCs_18;
  MR_Word MmakeVarCDates_19;
  MR_Word FactTableFileNames_20;
  MR_Word FactTableFileNamesOs_21;
  MR_Word FactTableFileNamesPicOs_23;
  MR_Word MmakeVarAllOs_25;
  MR_Word MmakeVarAllPicOs_26;
  MR_Word MmakeVarForeignModules_27;
  MR_Word MmakeVarForeignFileNames_28;
  MR_Word Target_29;
  MR_Word MihSources_31;
  MR_Word MhSources_32;
  MR_Word MmakeVarMihs_33;
  MR_Word MmakeVarMhs_34;
  MR_Word MmakeVarMihsToClean_35;
  MR_Word MmakeVarAllMihs_36;
  MR_Word MmakeVarMhsToClean_37;
  MR_Word MmakeVarAllMhs_38;
  MR_String Var_43;
  MR_String Var_45;
  MR_String Var_50;
  MR_String Var_52;
  MR_String Var_57;
  MR_String Var_59;
  MR_Word Var_64;
  MR_Word Var_68;
  MR_String Var_72;
  MR_Word Var_74;
  MR_String Var_75;
  MR_String Var_80;
  MR_Word Var_82;
  MR_String Var_83;
  MR_String Var_88;
  MR_String Var_91;
  MR_String Var_107;
  MR_String Var_109;
  MR_String Var_111;
  MR_String Var_113;
  MR_String Var_118;
  MR_String Var_120;
  MR_String Var_125;
  MR_String Var_127;
  MR_String Var_132;
  MR_String Var_134;
  MR_Word Var_140;
  MR_Word Var_141;
  MR_Word Var_142;
  MR_Word Var_143;
  MR_Word Var_144;
  MR_Word Var_145;
  MR_Word Var_146;
  MR_Word Var_147;
  MR_Word Var_148;
  MR_Word Var_149;
  MR_Word Var_150;
  MR_Word Var_151;
  MR_Word Var_152;
  MR_String Var_166;
  MR_String Var_169;
  MR_String Var_172;
  MR_String Var_175;
  MR_String Var_178;
  MR_String Var_187;
  MR_String Var_190;
  MR_String Var_193;
  MR_String Var_196;
  MR_Word _FactTableFileNamesOsProposed_22;
  MR_Word _FactTableFileNamesPicOsProposed_24;

  Var_43 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".all_cs");
  Var_166 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".mods:%=\044(cs_subdir)%.c)");
  Var_45 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_166);
  {
    MmakeVarAllCs_17 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllCs_17, 0) = ((MR_Box) (Var_43));
    MR_hl_field(2, MmakeVarAllCs_17, 1) = ((MR_Box) (Var_45));
  }
  Var_50 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".init_cs");
  Var_169 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".mods:%=\044(cs_subdir)%.c)");
  Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_169);
  {
    MmakeVarInitCs_18 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarInitCs_18, 0) = ((MR_Box) (Var_50));
    MR_hl_field(2, MmakeVarInitCs_18, 1) = ((MR_Box) (Var_52));
  }
  Var_57 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".c_dates");
  Var_172 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".mods:%=\044(c_dates_subdir)%.c_date)");
  Var_59 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_172);
  {
    MmakeVarCDates_19 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarCDates_19, 0) = ((MR_Box) (Var_57));
    MR_hl_field(2, MmakeVarCDates_19, 1) = ((MR_Box) (Var_59));
  }
  parse_tree__generate_mmakefile_fragments__get_fact_table_file_names_3_p_0(DepsMap_11, Modules_12, &FactTableFileNames_20);
  {
    Var_64 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_64, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_10[0]));
    MR_hl_field(0, Var_64, 1) = ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_9_p_0_1));
    MR_hl_field(0, Var_64, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_64, 3) = ((MR_Box) (Globals_10));
    MR_hl_field(0, Var_64, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dv_file_define_c_vars\'/9"));
    MR_hl_field(0, Var_64, 5) = ((MR_Box) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[7])));
  }
  mercury__list__map2_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_64, FactTableFileNames_20, &FactTableFileNamesOs_21, &_FactTableFileNamesOsProposed_22);
  {
    Var_68 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_68, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_10[0]));
    MR_hl_field(0, Var_68, 1) = ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_c_vars_9_p_0_2));
    MR_hl_field(0, Var_68, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_68, 3) = ((MR_Box) (Globals_10));
    MR_hl_field(0, Var_68, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_dv_file_define_c_vars\'/9"));
    MR_hl_field(0, Var_68, 5) = ((MR_Box) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[33])));
  }
  mercury__list__map2_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_68, FactTableFileNames_20, &FactTableFileNamesPicOs_23, &_FactTableFileNamesPicOsProposed_24);
  Var_72 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".all_os");
  Var_175 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".mods:%=\044(os_subdir)%.\044O)");
  Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_175);
  {
    Var_74 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_74, 0) = ((MR_Box) (Var_75));
    MR_hl_field(1, Var_74, 1) = ((MR_Box) (FactTableFileNamesOs_21));
  }
  {
    MmakeVarAllOs_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarAllOs_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarAllOs_25, 1) = ((MR_Box) (Var_72));
    MR_hl_field(3, MmakeVarAllOs_25, 2) = ((MR_Box) (Var_74));
  }
  Var_80 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".all_pic_os");
  Var_178 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".mods:%=\044(os_subdir)%.\044(EXT_FOR_PIC_OBJECTS))");
  Var_83 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_178);
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (Var_83));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) (FactTableFileNamesPicOs_23));
  }
  {
    MmakeVarAllPicOs_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarAllPicOs_26, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarAllPicOs_26, 1) = ((MR_Box) (Var_80));
    MR_hl_field(3, MmakeVarAllPicOs_26, 2) = ((MR_Box) (Var_82));
  }
  Var_88 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".foreign");
  {
    MmakeVarForeignModules_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarForeignModules_27, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarForeignModules_27, 1) = ((MR_Box) (Var_88));
    MR_hl_field(3, MmakeVarForeignModules_27, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_91 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".foreign_cs");
  {
    MmakeVarForeignFileNames_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarForeignFileNames_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarForeignFileNames_28, 1) = ((MR_Box) (Var_91));
    MR_hl_field(3, MmakeVarForeignFileNames_28, 2) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  libs__globals__get_target_2_p_0(Globals_10, &Target_29);
  switch (Target_29) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word HighLevelCode_30;
        MR_String Var_101;
        MR_String Var_184;

        libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 330, &HighLevelCode_30);
        switch (HighLevelCode_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MihSources_31 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_95;
              MR_String Var_181;

              Var_181 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
              Var_95 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_181);
              {
                MihSources_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, MihSources_31, 0) = ((MR_Box) (Var_95));
                MR_hl_field(1, MihSources_31, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
            }
            break;
        }
        Var_184 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".mods:%=\044(mhs_subdir)%.mh)");
        Var_101 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_184);
        {
          MhSources_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MhSources_32, 0) = ((MR_Box) (Var_101));
          MR_hl_field(1, MhSources_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        MihSources_31 = (MR_Word) ((MR_Unsigned) 0U);
        MhSources_32 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
  }
  Var_107 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".mihs");
  {
    MmakeVarMihs_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarMihs_33, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarMihs_33, 1) = ((MR_Box) (Var_107));
    MR_hl_field(3, MmakeVarMihs_33, 2) = ((MR_Box) (MihSources_31));
  }
  Var_109 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".mhs");
  {
    MmakeVarMhs_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarMhs_34, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarMhs_34, 1) = ((MR_Box) (Var_109));
    MR_hl_field(3, MmakeVarMhs_34, 2) = ((MR_Box) (MhSources_32));
  }
  Var_111 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".mihs_to_clean");
  Var_187 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
  Var_113 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_187);
  {
    MmakeVarMihsToClean_35 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarMihsToClean_35, 0) = ((MR_Box) (Var_111));
    MR_hl_field(2, MmakeVarMihsToClean_35, 1) = ((MR_Box) (Var_113));
  }
  Var_118 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".all_mihs");
  Var_190 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
  Var_120 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_190);
  {
    MmakeVarAllMihs_36 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllMihs_36, 0) = ((MR_Box) (Var_118));
    MR_hl_field(2, MmakeVarAllMihs_36, 1) = ((MR_Box) (Var_120));
  }
  Var_125 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".mhs_to_clean");
  Var_193 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".mods:%=\044(mhs_subdir)%.mh)");
  Var_127 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_193);
  {
    MmakeVarMhsToClean_37 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarMhsToClean_37, 0) = ((MR_Box) (Var_125));
    MR_hl_field(2, MmakeVarMhsToClean_37, 1) = ((MR_Box) (Var_127));
  }
  Var_132 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".all_mhs");
  Var_196 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_13, (MR_String) ".mods:%=\044(mhs_subdir)%.mh)");
  Var_134 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_196);
  {
    MmakeVarAllMhs_38 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllMhs_38, 0) = ((MR_Box) (Var_132));
    MR_hl_field(2, MmakeVarAllMhs_38, 1) = ((MR_Box) (Var_134));
  }
  {
    Var_152 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_152, 0) = ((MR_Box) (MmakeVarAllMhs_38));
    MR_hl_field(1, Var_152, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_151 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_151, 0) = ((MR_Box) (MmakeVarMhsToClean_37));
    MR_hl_field(1, Var_151, 1) = ((MR_Box) (Var_152));
  }
  {
    Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_150, 0) = ((MR_Box) (MmakeVarAllMihs_36));
    MR_hl_field(1, Var_150, 1) = ((MR_Box) (Var_151));
  }
  {
    Var_149 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_149, 0) = ((MR_Box) (MmakeVarMihsToClean_35));
    MR_hl_field(1, Var_149, 1) = ((MR_Box) (Var_150));
  }
  {
    Var_148 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_148, 0) = ((MR_Box) (MmakeVarMhs_34));
    MR_hl_field(1, Var_148, 1) = ((MR_Box) (Var_149));
  }
  {
    Var_147 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_147, 0) = ((MR_Box) (MmakeVarMihs_33));
    MR_hl_field(1, Var_147, 1) = ((MR_Box) (Var_148));
  }
  {
    Var_146 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_146, 0) = ((MR_Box) (MmakeVarForeignFileNames_28));
    MR_hl_field(1, Var_146, 1) = ((MR_Box) (Var_147));
  }
  {
    Var_145 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_145, 0) = ((MR_Box) (MmakeVarForeignModules_27));
    MR_hl_field(1, Var_145, 1) = ((MR_Box) (Var_146));
  }
  {
    Var_144 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_144, 0) = ((MR_Box) (MmakeVarAllPicOs_26));
    MR_hl_field(1, Var_144, 1) = ((MR_Box) (Var_145));
  }
  {
    Var_143 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_143, 0) = ((MR_Box) (MmakeVarAllOs_25));
    MR_hl_field(1, Var_143, 1) = ((MR_Box) (Var_144));
  }
  {
    Var_142 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_142, 0) = ((MR_Box) (MmakeVarCDates_19));
    MR_hl_field(1, Var_142, 1) = ((MR_Box) (Var_143));
  }
  {
    Var_141 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_141, 0) = ((MR_Box) (MmakeVarInitCs_18));
    MR_hl_field(1, Var_141, 1) = ((MR_Box) (Var_142));
  }
  {
    Var_140 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_140, 0) = ((MR_Box) (MmakeVarAllCs_17));
    MR_hl_field(1, Var_140, 1) = ((MR_Box) (Var_141));
  }
  *CFragments_14 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[10]), Var_140);
  *STATE_VARIABLE_Cache_40 = STATE_VARIABLE_Cache_0_39;
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
  *OptFragments_4 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[9]), Var_54);
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
  MR_Word MmakeVarInts_5;
  MR_Word MmakeVarInt0s_6;
  MR_Word MmakeVarInt0sToClean_7;
  MR_Word MmakeVarAllInt0s_8;
  MR_Word MmakeVarInt3s_9;
  MR_Word MmakeVarDates_10;
  MR_Word MmakeVarDate0s_11;
  MR_Word MmakeVarDate3s_12;
  MR_String Var_13;
  MR_Word Var_15;
  MR_String Var_16;
  MR_Word Var_21;
  MR_String Var_22;
  MR_String Var_28;
  MR_String Var_30;
  MR_String Var_35;
  MR_String Var_37;
  MR_String Var_42;
  MR_String Var_44;
  MR_String Var_49;
  MR_String Var_51;
  MR_String Var_56;
  MR_String Var_58;
  MR_String Var_63;
  MR_String Var_65;
  MR_String Var_70;
  MR_String Var_72;
  MR_Word Var_78;
  MR_Word Var_79;
  MR_Word Var_80;
  MR_Word Var_81;
  MR_Word Var_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_85;
  MR_String Var_92;
  MR_String Var_95;
  MR_String Var_98;
  MR_String Var_101;
  MR_String Var_104;
  MR_String Var_107;
  MR_String Var_110;
  MR_String Var_113;
  MR_String Var_116;

  Var_13 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".ints");
  Var_92 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(ints_subdir)%.int)");
  Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_92);
  Var_95 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(int2s_subdir)%.int2)");
  Var_22 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_95);
  {
    Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_21, 0) = ((MR_Box) (Var_22));
    MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (Var_16));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_21));
  }
  {
    MmakeVarInts_5 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarInts_5, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarInts_5, 1) = ((MR_Box) (Var_13));
    MR_hl_field(3, MmakeVarInts_5, 2) = ((MR_Box) (Var_15));
  }
  Var_28 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".int0s");
  Var_98 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".parent_mods:%=\044(int0s_subdir)%.int0)");
  Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_98);
  {
    MmakeVarInt0s_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarInt0s_6, 0) = ((MR_Box) (Var_28));
    MR_hl_field(2, MmakeVarInt0s_6, 1) = ((MR_Box) (Var_30));
  }
  Var_35 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".int0s_to_clean");
  Var_101 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(int0s_subdir)%.int0)");
  Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_101);
  {
    MmakeVarInt0sToClean_7 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarInt0sToClean_7, 0) = ((MR_Box) (Var_35));
    MR_hl_field(2, MmakeVarInt0sToClean_7, 1) = ((MR_Box) (Var_37));
  }
  Var_42 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".all_int0s");
  Var_104 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(int0s_subdir)%.int0)");
  Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_104);
  {
    MmakeVarAllInt0s_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarAllInt0s_8, 0) = ((MR_Box) (Var_42));
    MR_hl_field(2, MmakeVarAllInt0s_8, 1) = ((MR_Box) (Var_44));
  }
  Var_49 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".int3s");
  Var_107 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(int3s_subdir)%.int3)");
  Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_107);
  {
    MmakeVarInt3s_9 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarInt3s_9, 0) = ((MR_Box) (Var_49));
    MR_hl_field(2, MmakeVarInt3s_9, 1) = ((MR_Box) (Var_51));
  }
  Var_56 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".dates");
  Var_110 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(dates_subdir)%.date)");
  Var_58 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_110);
  {
    MmakeVarDates_10 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarDates_10, 0) = ((MR_Box) (Var_56));
    MR_hl_field(2, MmakeVarDates_10, 1) = ((MR_Box) (Var_58));
  }
  Var_63 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".date0s");
  Var_113 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(date0s_subdir)%.date0)");
  Var_65 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_113);
  {
    MmakeVarDate0s_11 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarDate0s_11, 0) = ((MR_Box) (Var_63));
    MR_hl_field(2, MmakeVarDate0s_11, 1) = ((MR_Box) (Var_65));
  }
  Var_70 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".date3s");
  Var_116 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_3, (MR_String) ".mods:%=\044(date3s_subdir)%.date3)");
  Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_116);
  {
    MmakeVarDate3s_12 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarDate3s_12, 0) = ((MR_Box) (Var_70));
    MR_hl_field(2, MmakeVarDate3s_12, 1) = ((MR_Box) (Var_72));
  }
  {
    Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_85, 0) = ((MR_Box) (MmakeVarDate3s_12));
    MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_84, 0) = ((MR_Box) (MmakeVarDate0s_11));
    MR_hl_field(1, Var_84, 1) = ((MR_Box) (Var_85));
  }
  {
    Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_83, 0) = ((MR_Box) (MmakeVarDates_10));
    MR_hl_field(1, Var_83, 1) = ((MR_Box) (Var_84));
  }
  {
    Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_82, 0) = ((MR_Box) (MmakeVarInt3s_9));
    MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_83));
  }
  {
    Var_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_81, 0) = ((MR_Box) (MmakeVarAllInt0s_8));
    MR_hl_field(1, Var_81, 1) = ((MR_Box) (Var_82));
  }
  {
    Var_80 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_80, 0) = ((MR_Box) (MmakeVarInt0sToClean_7));
    MR_hl_field(1, Var_80, 1) = ((MR_Box) (Var_81));
  }
  {
    Var_79 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_79, 0) = ((MR_Box) (MmakeVarInt0s_6));
    MR_hl_field(1, Var_79, 1) = ((MR_Box) (Var_80));
  }
  {
    Var_78 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_78, 0) = ((MR_Box) (MmakeVarInts_5));
    MR_hl_field(1, Var_78, 1) = ((MR_Box) (Var_79));
  }
  *IntnFragments_4 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[8]), Var_78);
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

  succeeded = parse_tree__generate_mmakefile_fragments__IntroducedFrom__pred__generate_dv_file_define_mod_misc_vars__1139__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
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
  MR_Word ModulesWithSubmodules_20;
  MR_Word ModuleWithSubmodulesNameStrs_21;
  MR_Word MmakeVarModuleParentMods_22;
  MR_Word MmakeVarDs_23;
  MR_String ModuleDepFileExtStr_24;
  MR_Word MmakeVarModuleDeps_25;
  MR_Word MmakeVarProfs_26;
  MR_String Var_28;
  MR_String Var_33;
  MR_String Var_35;
  MR_String Var_37;
  MR_String Var_44;
  MR_String Var_46;
  MR_String Var_53;
  MR_String Var_55;
  MR_Word Var_61;
  MR_Word Var_62;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_String Var_118;
  MR_String Var_121;
  MR_String Var_123;
  MR_String Var_124;
  MR_String Var_127;

  ModuleNameStrs_11 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[5]), Modules_8);
  Var_28 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".mods");
  {
    MmakeVarModuleMods_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarModuleMods_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarModuleMods_12, 1) = ((MR_Box) (Var_28));
    MR_hl_field(3, MmakeVarModuleMods_12, 2) = ((MR_Box) (ModuleNameStrs_11));
  }
  {
    HasSubmodules_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, HasSubmodules_13, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_7[2]));
    MR_hl_field(0, HasSubmodules_13, 1) = ((MR_Box) (parse_tree__generate_mmakefile_fragments__generate_dv_file_define_mod_misc_vars_5_p_0_2));
    MR_hl_field(0, HasSubmodules_13, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, HasSubmodules_13, 3) = ((MR_Box) (DepsMap_7));
  }
  mercury__list__filter_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), HasSubmodules_13, Modules_8, &ModulesWithSubmodules_20);
  ModuleWithSubmodulesNameStrs_21 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[6]), ModulesWithSubmodules_20);
  Var_33 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".parent_mods");
  {
    MmakeVarModuleParentMods_22 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, MmakeVarModuleParentMods_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, MmakeVarModuleParentMods_22, 1) = ((MR_Box) (Var_33));
    MR_hl_field(3, MmakeVarModuleParentMods_22, 2) = ((MR_Box) (ModuleWithSubmodulesNameStrs_21));
  }
  Var_35 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".ds");
  Var_118 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".mods:%=\044(ds_subdir)%.d)");
  Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_118);
  {
    MmakeVarDs_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarDs_23, 0) = ((MR_Box) (Var_35));
    MR_hl_field(2, MmakeVarDs_23, 1) = ((MR_Box) (Var_37));
  }
  ModuleDepFileExtStr_24 = parse_tree__file_names__extension_to_string_2_f_0(Globals_6, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[6])));
  Var_44 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".module_deps");
  Var_121 = mercury__string__f_43_43_2_f_0(ModuleDepFileExtStr_24, (MR_String) ")");
  Var_123 = mercury__string__f_43_43_2_f_0((MR_String) ".mods:%=\044(module_deps_subdir)%", Var_121);
  Var_124 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, Var_123);
  Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_124);
  {
    MmakeVarModuleDeps_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarModuleDeps_25, 0) = ((MR_Box) (Var_44));
    MR_hl_field(2, MmakeVarModuleDeps_25, 1) = ((MR_Box) (Var_46));
  }
  Var_53 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".profs");
  Var_127 = mercury__string__f_43_43_2_f_0(ModuleMakeVarName_9, (MR_String) ".mods:%=%.prof)");
  Var_55 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", Var_127);
  {
    MmakeVarProfs_26 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, MmakeVarProfs_26, 0) = ((MR_Box) (Var_53));
    MR_hl_field(2, MmakeVarProfs_26, 1) = ((MR_Box) (Var_55));
  }
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (MmakeVarProfs_26));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (MmakeVarModuleDeps_25));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_65));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (MmakeVarDs_23));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
  }
  {
    Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_62, 0) = ((MR_Box) (MmakeVarModuleParentMods_22));
    MR_hl_field(1, Var_62, 1) = ((MR_Box) (Var_63));
  }
  {
    Var_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_61, 0) = ((MR_Box) (MmakeVarModuleMods_12));
    MR_hl_field(1, Var_61, 1) = ((MR_Box) (Var_62));
  }
  *ModMiscFragments_10 = mercury__list__map_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_fragment_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[7]), Var_61);
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
    MR_Word ModuleName_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ModuleNames0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ModuleNamesTail_9;
    MR_Word BurdenedModule_12;
    MR_Word Baggage_13;
    MR_Word ModuleErrors_14;
    MR_Word FatalErrors_15;
    MR_Word Var_16;
    MR_Box conv0_Var_16;

    parse_tree__generate_mmakefile_fragments__select_no_fatal_error_modules_3_p_0(DepsMap_1, ModuleNames0_7, &ModuleNamesTail_9);
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

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_d_file_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__4_88;

  parse_tree__generate_mmakefile_fragments__IntroducedFrom__pred__generate_d_file__167__1_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_LambdaHeadVar__4_88);
  *wrapper_arg_4 = ((MR_Box) (conv0_LambdaHeadVar__4_88));
}

void MR_CALL 
parse_tree__generate_mmakefile_fragments__generate_d_file_11_p_0(
  MR_Word Globals_12,
  MR_Word BurdenedAugCompUnit_13,
  MR_Word StdDeps_14,
  MR_Word IntermodDeps_15,
  MR_Word AllDeps_16,
  MR_Word MaybeInclTransOptRule_17,
  MR_Word * STATE_VARIABLE_MmakeFile_80,
  MR_Word STATE_VARIABLE_Cache_0_81,
  MR_Word * STATE_VARIABLE_Cache_82)
{
  MR_bool succeeded;
  MR_Word Baggage_21 = ((MR_Word) ((MR_hl_field(0, BurdenedAugCompUnit_13, (MR_Integer) 0))));
  MR_Word AugCompUnit_22 = ((MR_Word) ((MR_hl_field(0, BurdenedAugCompUnit_13, (MR_Integer) 1))));
  MR_String SourceFileName_23 = ((MR_String) ((MR_hl_field(0, Baggage_21, (MR_Integer) 0))));
  MR_Word SourceFileModuleName_24 = ((MR_Word) ((MR_hl_field(0, Baggage_21, (MR_Integer) 2))));
  MR_Word MaybeTopModule_25 = ((MR_Word) ((MR_hl_field(0, Baggage_21, (MR_Integer) 3))));
  MR_Word ParseTreeModuleSrc_26 = ((MR_Word) ((MR_hl_field(0, AugCompUnit_22, (MR_Integer) 0))));
  MR_Word ModuleName_27 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_26, (MR_Integer) 0))));
  MR_String ModuleNameString_28;
  MR_Word Ancestors_29;
  MR_Word InclMap_30;
  MR_Word PublicChildren_38;
  MR_Word DirectDeps0_39;
  MR_Word IndirectDeps0_40;
  MR_Word ForeignImportedModuleNamesSet_41;
  MR_Word DirectDeps_43;
  MR_Word IndirectDeps1_44;
  MR_Word IndirectDeps_45;
  MR_Word FactTableFileNamesSet_46;
  MR_Word ForeignIncludeFiles_47;
  MR_String Version_48;
  MR_String FullArch_49;
  MR_Word MmakeStartComment_50;
  MR_String ModuleMakeVarName_51;
  MR_String TransOptDateFileName_52;
  MR_Word MmakeRulesTransOpt_53;
  MR_String ObjFileName_54;
  MR_Word MmakeVarsFactTables_55;
  MR_Word FactTableSourceGroups_56;
  MR_Word MmakeRulesFactTables_57;
  MR_String ErrFileName_59;
  MR_String OptDateFileName_60;
  MR_String CDateFileName_61;
  MR_String JavaDateFileName_62;
  MR_String PicObjFileName_63;
  MR_String Int0FileName_64;
  MR_Word MmakeRuleDateFileDeps_65;
  MR_Word MmakeRulesNestedDeps_66;
  MR_Word MmakeRulesIntermod_67;
  MR_String CFileName_68;
  MR_Word MmakeRulesCHeaders_69;
  MR_Word MmakeFragmentModuleDep_70;
  MR_String DateFileName_71;
  MR_String Date0FileName_72;
  MR_Word MmakeRulesParentDates_73;
  MR_Word MmakeRulesForeignImports_74;
  MR_String Date3FileName_75;
  MR_Word MmakeRulesInstallShadows_76;
  MR_Word MmakeRulesSubDirShorthand_77;
  MR_Word HaveMap_78;
  MR_Word MmakeRulesPatterns_79;
  MR_Word Var_89;
  MR_Word STATE_VARIABLE_Cache_93_93;
  MR_Word STATE_VARIABLE_Cache_96_96;
  MR_Word STATE_VARIABLE_Cache_104_104;
  MR_Word STATE_VARIABLE_Cache_109_109;
  MR_Word STATE_VARIABLE_Cache_114_114;
  MR_Word STATE_VARIABLE_Cache_119_119;
  MR_Word STATE_VARIABLE_Cache_124_124;
  MR_Word STATE_VARIABLE_Cache_129_129;
  MR_Word STATE_VARIABLE_Cache_132_132;
  MR_Word STATE_VARIABLE_Cache_134_134;
  MR_Word STATE_VARIABLE_Cache_136_136;
  MR_Word STATE_VARIABLE_Cache_140_140;
  MR_Word STATE_VARIABLE_Cache_143_143;
  MR_Word STATE_VARIABLE_Cache_145_145;
  MR_Word STATE_VARIABLE_Cache_149_149;
  MR_Word STATE_VARIABLE_Cache_154_154;
  MR_Word STATE_VARIABLE_Cache_157_157;
  MR_Word STATE_VARIABLE_Cache_159_159;
  MR_Word STATE_VARIABLE_Cache_163_163;
  MR_Word STATE_VARIABLE_Cache_166_166;
  MR_Word STATE_VARIABLE_MmakeFile_171_171;
  MR_Word STATE_VARIABLE_MmakeFile_172_172;
  MR_Word STATE_VARIABLE_MmakeFile_173_173;
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
  MR_Box conv1_PublicChildren_38;
  MR_String SourceFileBase_58;

  ModuleNameString_28 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_27);
  Ancestors_29 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_27);
  InclMap_30 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_26, (MR_Integer) 2))));
  Var_89 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  mercury__map__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_include_module_info_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[4]), InclMap_30, ((MR_Box) (Var_89)), &conv1_PublicChildren_38);
  PublicChildren_38 = ((MR_Word) (conv1_PublicChildren_38));
  DirectDeps0_39 = ((MR_Word) ((MR_hl_field(0, StdDeps_14, (MR_Integer) 0))));
  IndirectDeps0_40 = ((MR_Word) ((MR_hl_field(0, StdDeps_14, (MR_Integer) 1))));
  ForeignImportedModuleNamesSet_41 = ((MR_Word) ((MR_hl_field(0, StdDeps_14, (MR_Integer) 2))));
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_27)), DirectDeps0_39, &DirectDeps_43);
  mercury__set__difference_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IndirectDeps0_40, DirectDeps_43, &IndirectDeps1_44);
  mercury__set__delete_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_27)), IndirectDeps1_44, &IndirectDeps_45);
  parse_tree__get_dependencies__get_fact_tables_2_p_0(ParseTreeModuleSrc_26, &FactTableFileNamesSet_46);
  parse_tree__get_dependencies__get_foreign_include_file_infos_2_p_0(ParseTreeModuleSrc_26, &ForeignIncludeFiles_47);
  mercury__library__version_2_p_0(&Version_48, &FullArch_49);
  {
    MmakeStartComment_50 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, MmakeStartComment_50, 0) = ((MR_Box) ((MR_String) "module dependencies"));
    MR_hl_field(0, MmakeStartComment_50, 1) = ((MR_Box) (ModuleNameString_28));
    MR_hl_field(0, MmakeStartComment_50, 2) = ((MR_Box) (SourceFileName_23));
    MR_hl_field(0, MmakeStartComment_50, 3) = ((MR_Box) (Version_48));
    MR_hl_field(0, MmakeStartComment_50, 4) = ((MR_Box) (FullArch_49));
  }
  parse_tree__file_names__module_name_to_make_var_name_2_p_0(ModuleName_27, &ModuleMakeVarName_51);
  parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_12, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_file\'/11", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[4])), ModuleName_27, &TransOptDateFileName_52, STATE_VARIABLE_Cache_0_81, &STATE_VARIABLE_Cache_93_93);
  parse_tree__generate_mmakefile_fragments__construct_trans_opt_deps_rule_9_p_0(Globals_12, MaybeInclTransOptRule_17, StdDeps_14, TransOptDateFileName_52, &MmakeRulesTransOpt_53, STATE_VARIABLE_Cache_93_93, &STATE_VARIABLE_Cache_96_96);
  succeeded = mercury__string__remove_suffix_3_p_0(SourceFileName_23, (MR_String) ".m", &SourceFileBase_58);
  if (succeeded)
    ErrFileName_59 = mercury__string__f_43_43_2_f_0(SourceFileBase_58, (MR_String) ".err");
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_file\'/11", (MR_String) "source file name doesn\'t end in \140.m\'");
      return;
    }
  parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_12, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_file\'/11", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[5])), ModuleName_27, &OptDateFileName_60, STATE_VARIABLE_Cache_96_96, &STATE_VARIABLE_Cache_104_104);
  parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_12, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_file\'/11", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[6])), ModuleName_27, &CDateFileName_61, STATE_VARIABLE_Cache_104_104, &STATE_VARIABLE_Cache_109_109);
  parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_12, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_file\'/11", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[7])), ModuleName_27, &ObjFileName_54, STATE_VARIABLE_Cache_109_109, &STATE_VARIABLE_Cache_114_114);
  parse_tree__generate_mmakefile_fragments__construct_fact_tables_entries_7_p_0(ModuleMakeVarName_51, SourceFileName_23, ObjFileName_54, FactTableFileNamesSet_46, &MmakeVarsFactTables_55, &FactTableSourceGroups_56, &MmakeRulesFactTables_57);
  parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_12, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_file\'/11", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[8])), ModuleName_27, &JavaDateFileName_62, STATE_VARIABLE_Cache_114_114, &STATE_VARIABLE_Cache_119_119);
  parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_12, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_file\'/11", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[9])), ModuleName_27, &PicObjFileName_63, STATE_VARIABLE_Cache_119_119, &STATE_VARIABLE_Cache_124_124);
  parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_12, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_file\'/11", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[0])), ModuleName_27, &Int0FileName_64, STATE_VARIABLE_Cache_124_124, &STATE_VARIABLE_Cache_129_129);
  parse_tree__generate_mmakefile_fragments__construct_date_file_deps_rule_20_p_0(Globals_12, ModuleName_27, SourceFileName_23, Ancestors_29, DirectDeps_43, IndirectDeps_45, PublicChildren_38, Int0FileName_64, OptDateFileName_60, TransOptDateFileName_52, ForeignIncludeFiles_47, CDateFileName_61, JavaDateFileName_62, ErrFileName_59, FactTableSourceGroups_56, &MmakeRuleDateFileDeps_65, STATE_VARIABLE_Cache_129_129, &STATE_VARIABLE_Cache_132_132);
  parse_tree__generate_mmakefile_fragments__construct_build_nested_children_first_rule_8_p_0(Globals_12, ModuleName_27, MaybeTopModule_25, &MmakeRulesNestedDeps_66, STATE_VARIABLE_Cache_132_132, &STATE_VARIABLE_Cache_134_134);
  parse_tree__generate_mmakefile_fragments__construct_intermod_rules_12_p_0(Globals_12, IntermodDeps_15, ErrFileName_59, TransOptDateFileName_52, CDateFileName_61, JavaDateFileName_62, ObjFileName_54, &MmakeRulesIntermod_67, STATE_VARIABLE_Cache_134_134, &STATE_VARIABLE_Cache_136_136);
  parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_12, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_file\'/11", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[10])), ModuleName_27, &CFileName_68, STATE_VARIABLE_Cache_136_136, &STATE_VARIABLE_Cache_140_140);
  parse_tree__generate_mmakefile_fragments__construct_c_header_rules_11_p_0(Globals_12, ModuleName_27, AllDeps_16, CFileName_68, ObjFileName_54, PicObjFileName_63, &MmakeRulesCHeaders_69, STATE_VARIABLE_Cache_140_140, &STATE_VARIABLE_Cache_143_143);
  parse_tree__generate_mmakefile_fragments__construct_module_dep_fragment_8_p_0(Globals_12, ModuleName_27, CFileName_68, &MmakeFragmentModuleDep_70, STATE_VARIABLE_Cache_143_143, &STATE_VARIABLE_Cache_145_145);
  parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_12, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_file\'/11", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[1])), ModuleName_27, &DateFileName_71, STATE_VARIABLE_Cache_145_145, &STATE_VARIABLE_Cache_149_149);
  parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_12, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_file\'/11", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[2])), ModuleName_27, &Date0FileName_72, STATE_VARIABLE_Cache_149_149, &STATE_VARIABLE_Cache_154_154);
  parse_tree__generate_mmakefile_fragments__construct_self_and_parent_date_date0_rules_12_p_0(Globals_12, SourceFileName_23, Date0FileName_72, DateFileName_71, Ancestors_29, DirectDeps_43, IndirectDeps_45, &MmakeRulesParentDates_73, STATE_VARIABLE_Cache_154_154, &STATE_VARIABLE_Cache_157_157);
  parse_tree__generate_mmakefile_fragments__construct_foreign_import_rules_10_p_0(Globals_12, ParseTreeModuleSrc_26, ForeignImportedModuleNamesSet_41, ObjFileName_54, PicObjFileName_63, &MmakeRulesForeignImports_74, STATE_VARIABLE_Cache_157_157, &STATE_VARIABLE_Cache_159_159);
  parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_12, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.generate_d_file\'/11", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[3])), ModuleName_27, &Date3FileName_75, STATE_VARIABLE_Cache_159_159, &STATE_VARIABLE_Cache_163_163);
  parse_tree__generate_mmakefile_fragments__construct_install_shadow_rules_13_p_0(Globals_12, ModuleName_27, Int0FileName_64, Date0FileName_72, DateFileName_71, Date3FileName_75, OptDateFileName_60, TransOptDateFileName_52, &MmakeRulesInstallShadows_76, STATE_VARIABLE_Cache_163_163, &STATE_VARIABLE_Cache_166_166);
  parse_tree__generate_mmakefile_fragments__construct_subdir_short_rules_7_p_0(Globals_12, ModuleName_27, &MmakeRulesSubDirShorthand_77, STATE_VARIABLE_Cache_166_166, STATE_VARIABLE_Cache_82);
  parse_tree__source_file_map__have_source_file_map_3_p_0(&HaveMap_78);
  parse_tree__generate_mmakefile_fragments__construct_any_needed_pattern_rules_12_p_0(HaveMap_78, ModuleName_27, SourceFileModuleName_24, SourceFileName_23, Date0FileName_72, DateFileName_71, Date3FileName_75, OptDateFileName_60, TransOptDateFileName_52, CDateFileName_61, JavaDateFileName_62, &MmakeRulesPatterns_79);
  libs__mmakefiles__start_mmakefile_1_p_0(&STATE_VARIABLE_MmakeFile_171_171);
  libs__mmakefiles__add_mmake_entry_3_p_0(MmakeStartComment_50, STATE_VARIABLE_MmakeFile_171_171, &STATE_VARIABLE_MmakeFile_172_172);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesTransOpt_53, STATE_VARIABLE_MmakeFile_172_172, &STATE_VARIABLE_MmakeFile_173_173);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeVarsFactTables_55, STATE_VARIABLE_MmakeFile_173_173, &STATE_VARIABLE_MmakeFile_174_174);
  libs__mmakefiles__add_mmake_entry_3_p_0(MmakeRuleDateFileDeps_65, STATE_VARIABLE_MmakeFile_174_174, &STATE_VARIABLE_MmakeFile_175_175);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesFactTables_57, STATE_VARIABLE_MmakeFile_175_175, &STATE_VARIABLE_MmakeFile_176_176);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesNestedDeps_66, STATE_VARIABLE_MmakeFile_176_176, &STATE_VARIABLE_MmakeFile_177_177);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesIntermod_67, STATE_VARIABLE_MmakeFile_177_177, &STATE_VARIABLE_MmakeFile_178_178);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesCHeaders_69, STATE_VARIABLE_MmakeFile_178_178, &STATE_VARIABLE_MmakeFile_179_179);
  libs__mmakefiles__add_mmake_fragment_3_p_0(MmakeFragmentModuleDep_70, STATE_VARIABLE_MmakeFile_179_179, &STATE_VARIABLE_MmakeFile_180_180);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesParentDates_73, STATE_VARIABLE_MmakeFile_180_180, &STATE_VARIABLE_MmakeFile_181_181);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesForeignImports_74, STATE_VARIABLE_MmakeFile_181_181, &STATE_VARIABLE_MmakeFile_182_182);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesInstallShadows_76, STATE_VARIABLE_MmakeFile_182_182, &STATE_VARIABLE_MmakeFile_183_183);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesSubDirShorthand_77, STATE_VARIABLE_MmakeFile_183_183, &STATE_VARIABLE_MmakeFile_184_184);
  libs__mmakefiles__add_mmake_entries_3_p_0(MmakeRulesPatterns_79, STATE_VARIABLE_MmakeFile_184_184, STATE_VARIABLE_MmakeFile_80);
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_any_needed_pattern_rules_12_p_0(
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
parse_tree__generate_mmakefile_fragments__construct_subdir_short_rules_7_p_0_1(
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

  parse_tree__generate_mmakefile_fragments__construct_subdirs_shorthand_rule_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv1_MmakeRule_12, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_20);
  *wrapper_arg_2 = ((MR_Box) (conv1_MmakeRule_12));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_20));
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_subdir_short_rules_7_p_0(
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
          MR_hl_field(0, Var_37, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_8[0]));
          MR_hl_field(0, Var_37, 1) = ((MR_Box) (parse_tree__generate_mmakefile_fragments__construct_subdir_short_rules_7_p_0_1));
          MR_hl_field(0, Var_37, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_37, 3) = ((MR_Box) (Globals_8));
          MR_hl_field(0, Var_37, 4) = ((MR_Box) (ModuleName_9));
        }
        mercury__list__map_foldl2_7_p_2((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_37, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[32])), MmakeRulesSubDirShorthand_10, ((MR_Box) (STATE_VARIABLE_Cache_0_15)), &conv3_STATE_VARIABLE_Cache_16, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_18);
        *STATE_VARIABLE_Cache_16 = ((MR_Word) (conv3_STATE_VARIABLE_Cache_16));
      }
      break;
  }
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_install_shadow_rules_13_p_0(
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

  parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_14, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_install_shadow_rules\'/13", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[4])), ModuleName_15, &IntFileName_25, STATE_VARIABLE_Cache_0_30, &STATE_VARIABLE_Cache_36_36);
  parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_14, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_install_shadow_rules\'/13", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[5])), ModuleName_15, &Int2FileName_26, STATE_VARIABLE_Cache_36_36, &STATE_VARIABLE_Cache_41_41);
  parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_14, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_install_shadow_rules\'/13", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[8])), ModuleName_15, &Int3FileName_27, STATE_VARIABLE_Cache_41_41, &STATE_VARIABLE_Cache_46_46);
  parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_14, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_install_shadow_rules\'/13", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[23])), ModuleName_15, &OptFileName_28, STATE_VARIABLE_Cache_46_46, &STATE_VARIABLE_Cache_51_51);
  parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_14, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_install_shadow_rules\'/13", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[17])), ModuleName_15, &TransOptFileName_29, STATE_VARIABLE_Cache_51_51, STATE_VARIABLE_Cache_31);
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

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_foreign_import_rules_10_p_0(
  MR_Word Globals_11,
  MR_Word ParseTreeModuleSrc_12,
  MR_Word ForeignImportedModuleNamesSet_13,
  MR_String ObjFileName_14,
  MR_String PicObjFileName_15,
  MR_Word * MmakeRulesForeignImports_16,
  MR_Word STATE_VARIABLE_Cache_0_28,
  MR_Word * STATE_VARIABLE_Cache_29)
{
  MR_Word ModuleName_19 = ((MR_Word) ((MR_hl_field(0, ParseTreeModuleSrc_12, (MR_Integer) 0))));
  MR_Word ForeignImportedModuleNames_20;

  ForeignImportedModuleNames_20 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ForeignImportedModuleNamesSet_13);
  if ((ForeignImportedModuleNames_20 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MmakeRulesForeignImports_16 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Cache_29 = STATE_VARIABLE_Cache_0_28;
  }
  else
  {
    MR_Word Target_23;

    libs__globals__get_target_2_p_0(Globals_11, &Target_23);
    switch (Target_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ForeignImportTargets_24;
          MR_Word ForeignImportExt_25;
          MR_Word MmakeRuleForeignImports_26;
          MR_Word Var_32;
          MR_Word ForeignImportedFileNames_87;
          MR_String ForeignImportExtStr_88;
          MR_String RuleName_89;
          MR_String Var_91;

          {
            Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_32, 0) = ((MR_Box) (PicObjFileName_15));
            MR_hl_field(1, Var_32, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            ForeignImportTargets_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ForeignImportTargets_24, 0) = ((MR_Box) (ObjFileName_14));
            MR_hl_field(0, ForeignImportTargets_24, 1) = ((MR_Box) (Var_32));
          }
          ForeignImportExt_25 = (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[22]));
          parse_tree__make_module_file_names__make_module_file_names_with_ext_8_p_0(Globals_11, ForeignImportExt_25, ForeignImportedModuleNames_20, &ForeignImportedFileNames_87, STATE_VARIABLE_Cache_0_28, STATE_VARIABLE_Cache_29);
          ForeignImportExtStr_88 = parse_tree__file_names__extension_to_string_2_f_0(Globals_11, ForeignImportExt_25);
          Var_91 = mercury__string__remove_prefix_if_present_2_f_0((MR_String) ".", ForeignImportExtStr_88);
          RuleName_89 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_deps_for_", Var_91);
          {
            MmakeRuleForeignImports_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, MmakeRuleForeignImports_26, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, MmakeRuleForeignImports_26, 1) = ((MR_Box) (RuleName_89));
            MR_hl_field(3, MmakeRuleForeignImports_26, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, MmakeRuleForeignImports_26, 3) = ((MR_Box) (ForeignImportTargets_24));
            MR_hl_field(3, MmakeRuleForeignImports_26, 4) = ((MR_Box) (ForeignImportedFileNames_87));
            MR_hl_field(3, MmakeRuleForeignImports_26, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MmakeRulesForeignImports_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (MmakeRuleForeignImports_26));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *MmakeRulesForeignImports_16 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Cache_29 = STATE_VARIABLE_Cache_0_28;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ClassFileName_27;
          MR_Word STATE_VARIABLE_Cache_40_40;
          MR_Word ForeignImportTargets_48;
          MR_Word ForeignImportExt_49;
          MR_Word MmakeRuleForeignImports_50;
          MR_Word ForeignImportedFileNames_95;
          MR_String ForeignImportExtStr_96;
          MR_String RuleName_97;
          MR_String Var_99;

          parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_11, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_foreign_import_rules\'/10", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[26])), ModuleName_19, &ClassFileName_27, STATE_VARIABLE_Cache_0_28, &STATE_VARIABLE_Cache_40_40);
          {
            ForeignImportTargets_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, ForeignImportTargets_48, 0) = ((MR_Box) (ClassFileName_27));
            MR_hl_field(0, ForeignImportTargets_48, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          ForeignImportExt_49 = (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[25]));
          parse_tree__make_module_file_names__make_module_file_names_with_ext_8_p_0(Globals_11, ForeignImportExt_49, ForeignImportedModuleNames_20, &ForeignImportedFileNames_95, STATE_VARIABLE_Cache_40_40, STATE_VARIABLE_Cache_29);
          ForeignImportExtStr_96 = parse_tree__file_names__extension_to_string_2_f_0(Globals_11, ForeignImportExt_49);
          Var_99 = mercury__string__remove_prefix_if_present_2_f_0((MR_String) ".", ForeignImportExtStr_96);
          RuleName_97 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_deps_for_", Var_99);
          {
            MmakeRuleForeignImports_50 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(3, MmakeRuleForeignImports_50, 0) = ((MR_Box) ((MR_Unsigned) 2U));
            MR_hl_field(3, MmakeRuleForeignImports_50, 1) = ((MR_Box) (RuleName_97));
            MR_hl_field(3, MmakeRuleForeignImports_50, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
            MR_hl_field(3, MmakeRuleForeignImports_50, 3) = ((MR_Box) (ForeignImportTargets_48));
            MR_hl_field(3, MmakeRuleForeignImports_50, 4) = ((MR_Box) (ForeignImportedFileNames_95));
            MR_hl_field(3, MmakeRuleForeignImports_50, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *MmakeRulesForeignImports_16 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (MmakeRuleForeignImports_50));
            MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_self_and_parent_date_date0_rules_12_p_0(
  MR_Word Globals_13,
  MR_String SourceFileName_14,
  MR_String Date0FileName_15,
  MR_String DateFileName_16,
  MR_Word Ancestors_17,
  MR_Word DirectDeps_18,
  MR_Word IndirectDeps_19,
  MR_Word * MmakeRulesParentDates_20,
  MR_Word STATE_VARIABLE_Cache_0_30,
  MR_Word * STATE_VARIABLE_Cache_31)
{
  MR_Word AncestorDateFileNames_23;
  MR_Word AncestorInt0FileNames_24;
  MR_Word DirectDepInt3FileNames_25;
  MR_Word IndirectDepInt3FileNames_26;
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

  Var_35 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_17);
  parse_tree__make_module_file_names__make_module_file_names_with_ext_8_p_0(Globals_13, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[1])), Var_35, &AncestorDateFileNames_23, STATE_VARIABLE_Cache_0_30, &STATE_VARIABLE_Cache_36_36);
  Var_40 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Ancestors_17);
  parse_tree__make_module_file_names__make_module_file_names_with_ext_8_p_0(Globals_13, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[0])), Var_40, &AncestorInt0FileNames_24, STATE_VARIABLE_Cache_36_36, &STATE_VARIABLE_Cache_41_41);
  Var_45 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), DirectDeps_18);
  parse_tree__make_module_file_names__make_module_file_names_with_ext_8_p_0(Globals_13, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[8])), Var_45, &DirectDepInt3FileNames_25, STATE_VARIABLE_Cache_41_41, &STATE_VARIABLE_Cache_46_46);
  Var_50 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), IndirectDeps_19);
  parse_tree__make_module_file_names__make_module_file_names_with_ext_8_p_0(Globals_13, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[8])), Var_50, &IndirectDepInt3FileNames_26, STATE_VARIABLE_Cache_46_46, &STATE_VARIABLE_Cache_51_51);
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
  Var_71 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "direct dep int3s", DirectDepInt3FileNames_25);
  Var_73 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "indirect dep int3s", IndirectDepInt3FileNames_26);
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
  parse_tree__make_module_file_names__make_module_file_names_with_ext_8_p_0(Globals_13, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[2])), Var_77, &AncestorDate0FileNames_28, STATE_VARIABLE_Cache_51_51, STATE_VARIABLE_Cache_31);
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
  Var_94 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "direct dep int3s", DirectDepInt3FileNames_25);
  Var_96 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "indirect dep int3s", IndirectDepInt3FileNames_26);
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
parse_tree__generate_mmakefile_fragments__construct_module_dep_fragment_8_p_0(
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

  parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_9, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_module_dep_fragment\'/8", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[25])), ModuleName_10, &JavaFileName_15, STATE_VARIABLE_Cache_0_17, &STATE_VARIABLE_Cache_23_23);
  parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_9, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_module_dep_fragment\'/8", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[6])), ModuleName_10, &ModuleDepFileName_16, STATE_VARIABLE_Cache_23_23, STATE_VARIABLE_Cache_18);
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
    MR_hl_field(1, base, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_4[7]));
    MR_hl_field(1, base, 1) = ((MR_Box) (Var_33));
    MR_hl_field(1, base, 2) = ((MR_Box) (Var_39));
  }
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_c_header_rules_11_p_0(
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

  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 330, &HighLevelCode_21);
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
    parse_tree__make_module_file_names__make_module_file_names_with_ext_8_p_0(Globals_12, (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[24])), Var_38, &AllDepsFileNames_24, STATE_VARIABLE_Cache_0_30, &STATE_VARIABLE_Cache_39_39);
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
  parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_12, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_c_header_rules\'/11", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[22])), ModuleName_13, &MhHeaderFileName_27, STATE_VARIABLE_Cache_39_39, &STATE_VARIABLE_Cache_48_48);
  parse_tree__make_module_file_names__make_module_file_name_9_p_0(Globals_12, (MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_c_header_rules\'/11", (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[24])), ModuleName_13, &MihHeaderFileName_28, STATE_VARIABLE_Cache_48_48, STATE_VARIABLE_Cache_31);
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
parse_tree__generate_mmakefile_fragments__construct_intermod_rules_12_p_0_1(
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
parse_tree__generate_mmakefile_fragments__construct_intermod_rules_12_p_0(
  MR_Word Globals_13,
  MR_Word IntermodDeps_14,
  MR_String ErrFileName_15,
  MR_String TransOptDateFileName_16,
  MR_String CDateFileName_17,
  MR_String JavaDateFileName_18,
  MR_String ObjFileName_19,
  MR_Word * MmakeRulesIntermod_20,
  MR_Word STATE_VARIABLE_Cache_0_40,
  MR_Word * STATE_VARIABLE_Cache_41)
{
  MR_Word MaybeMhDeps_23 = ((MR_Word) ((MR_hl_field(0, IntermodDeps_14, (MR_Integer) 0))));
  MR_Word MaybeOptFileDeps_24 = ((MR_Word) ((MR_hl_field(0, IntermodDeps_14, (MR_Integer) 1))));
  MR_Word MmakeRulesMhDeps_28;
  MR_Word STATE_VARIABLE_Cache_46_46;

  if ((MaybeMhDeps_23 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MmakeRulesMhDeps_28 = (MR_Word) ((MR_Unsigned) 0U);
    STATE_VARIABLE_Cache_46_46 = STATE_VARIABLE_Cache_0_40;
  }
  else
  {
    MR_Word AllDeps_25 = ((MR_Word) ((MR_hl_field(1, MaybeMhDeps_23, (MR_Integer) 0))));
    MR_Word AllDepsFileNames_26;
    MR_Word MmakeRuleMhDeps_27;
    MR_Word Var_45;

    Var_45 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), AllDeps_25);
    parse_tree__make_module_file_names__make_module_file_names_with_ext_8_p_0(Globals_13, (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[22])), Var_45, &AllDepsFileNames_26, STATE_VARIABLE_Cache_0_40, &STATE_VARIABLE_Cache_46_46);
    {
      MmakeRuleMhDeps_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleMhDeps_27, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, MmakeRuleMhDeps_27, 1) = ((MR_Box) ((MR_String) "machine_dependent_header_deps"));
      MR_hl_field(3, MmakeRuleMhDeps_27, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, MmakeRuleMhDeps_27, 3) = ((MR_Box) (ObjFileName_19));
      MR_hl_field(3, MmakeRuleMhDeps_27, 4) = ((MR_Box) (AllDepsFileNames_26));
      MR_hl_field(3, MmakeRuleMhDeps_27, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MmakeRulesMhDeps_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MmakeRulesMhDeps_28, 0) = ((MR_Box) (MmakeRuleMhDeps_27));
      MR_hl_field(1, MmakeRulesMhDeps_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  }
  if ((MaybeOptFileDeps_24 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *MmakeRulesIntermod_20 = MmakeRulesMhDeps_28;
    *STATE_VARIABLE_Cache_41 = STATE_VARIABLE_Cache_46_46;
  }
  else
  {
    MR_Word PlainOptDeps_29 = ((MR_Word) ((MR_hl_field(1, MaybeOptFileDeps_24, (MR_Integer) 0))));
    MR_Word MaybeTransOptDeps_30 = ((MR_Word) ((MR_hl_field(1, MaybeOptFileDeps_24, (MR_Integer) 1))));
    MR_Word Targets_31;
    MR_Word PlainOptInt0Deps_32;
    MR_Word PlainOptDepsFileNames_33;
    MR_Word PlainOptInt0DepsFileNames_34;
    MR_Word MmakeRuleDateOptInt0Deps_35;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_57;
    MR_Word STATE_VARIABLE_Cache_60_60;
    MR_Word Var_64;
    MR_Word STATE_VARIABLE_Cache_65_65;
    MR_Word Var_70;

    {
      Var_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_55, 0) = ((MR_Box) (JavaDateFileName_18));
      MR_hl_field(1, Var_55, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_54 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_54, 0) = ((MR_Box) (CDateFileName_17));
      MR_hl_field(1, Var_54, 1) = ((MR_Box) (Var_55));
    }
    {
      Var_53 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_53, 0) = ((MR_Box) (ErrFileName_15));
      MR_hl_field(1, Var_53, 1) = ((MR_Box) (Var_54));
    }
    {
      Targets_31 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Targets_31, 0) = ((MR_Box) (TransOptDateFileName_16));
      MR_hl_field(0, Targets_31, 1) = ((MR_Box) (Var_53));
    }
    Var_57 = mercury__list__map_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_1[0]), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[3]), PlainOptDeps_29);
    PlainOptInt0Deps_32 = mercury__set__union_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_57);
    parse_tree__make_module_file_names__make_module_file_names_with_ext_8_p_0(Globals_13, (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[23])), PlainOptDeps_29, &PlainOptDepsFileNames_33, STATE_VARIABLE_Cache_46_46, &STATE_VARIABLE_Cache_60_60);
    Var_64 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), PlainOptInt0Deps_32);
    parse_tree__make_module_file_names__make_module_file_names_with_ext_8_p_0(Globals_13, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[0])), Var_64, &PlainOptInt0DepsFileNames_34, STATE_VARIABLE_Cache_60_60, &STATE_VARIABLE_Cache_65_65);
    Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), PlainOptDepsFileNames_33, PlainOptInt0DepsFileNames_34);
    {
      MmakeRuleDateOptInt0Deps_35 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_35, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_35, 1) = ((MR_Box) ((MR_String) "dates_on_opts_and_int0s"));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_35, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_35, 3) = ((MR_Box) (Targets_31));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_35, 4) = ((MR_Box) (Var_70));
      MR_hl_field(3, MmakeRuleDateOptInt0Deps_35, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    if ((MaybeTransOptDeps_30 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Var_85;

      {
        Var_85 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_85, 0) = ((MR_Box) (MmakeRuleDateOptInt0Deps_35));
        MR_hl_field(1, Var_85, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      *MmakeRulesIntermod_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), MmakeRulesMhDeps_28, Var_85);
      *STATE_VARIABLE_Cache_41 = STATE_VARIABLE_Cache_65_65;
    }
    else
    {
      MR_Word TransOptDeps_36 = ((MR_Word) ((MR_hl_field(1, MaybeTransOptDeps_30, (MR_Integer) 0))));
      MR_Word ErrDateTargets_37;
      MR_Word TransOptDepsOptFileNames_38;
      MR_Word MmakeRuleTransOptOpts_39;
      MR_Word Var_82;
      MR_Word Var_83;

      {
        ErrDateTargets_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ErrDateTargets_37, 0) = ((MR_Box) (ErrFileName_15));
        MR_hl_field(0, ErrDateTargets_37, 1) = ((MR_Box) (Var_54));
      }
      parse_tree__make_module_file_names__make_module_file_names_with_ext_8_p_0(Globals_13, (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[17])), TransOptDeps_36, &TransOptDepsOptFileNames_38, STATE_VARIABLE_Cache_65_65, STATE_VARIABLE_Cache_41);
      {
        MmakeRuleTransOptOpts_39 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, MmakeRuleTransOptOpts_39, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(3, MmakeRuleTransOptOpts_39, 1) = ((MR_Box) ((MR_String) "dates_on_trans_opts"));
        MR_hl_field(3, MmakeRuleTransOptOpts_39, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(3, MmakeRuleTransOptOpts_39, 3) = ((MR_Box) (ErrDateTargets_37));
        MR_hl_field(3, MmakeRuleTransOptOpts_39, 4) = ((MR_Box) (TransOptDepsOptFileNames_38));
        MR_hl_field(3, MmakeRuleTransOptOpts_39, 5) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_83, 0) = ((MR_Box) (MmakeRuleTransOptOpts_39));
        MR_hl_field(1, Var_83, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_82, 0) = ((MR_Box) (MmakeRuleDateOptInt0Deps_35));
        MR_hl_field(1, Var_82, 1) = ((MR_Box) (Var_83));
      }
      *MmakeRulesIntermod_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), MmakeRulesMhDeps_28, Var_82);
    }
  }
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_build_nested_children_first_rule_8_p_0_1(
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

  parse_tree__generate_mmakefile_fragments__gather_nested_deps_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_MmakeRule_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_21);
  *wrapper_arg_2 = ((MR_Box) (conv1_MmakeRule_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_21));
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_build_nested_children_first_rule_8_p_0(
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
      MR_hl_field(0, Var_35, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_6[0]));
      MR_hl_field(0, Var_35, 1) = ((MR_Box) (parse_tree__generate_mmakefile_fragments__construct_build_nested_children_first_rule_8_p_0_1));
      MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_35, 3) = ((MR_Box) (Globals_9));
      MR_hl_field(0, Var_35, 4) = ((MR_Box) (ModuleName_10));
      MR_hl_field(0, Var_35, 5) = ((MR_Box) (NestedModuleNames_15));
    }
    mercury__list__map_foldl2_7_p_2((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0), (MR_Word) (&parse_tree__generate_mmakefile_fragments_scalar_common_2[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_35, (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_1[21])), MmakeRulesNestedDeps_12, ((MR_Box) (STATE_VARIABLE_Cache_0_19)), &conv3_STATE_VARIABLE_Cache_20, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_22);
    *STATE_VARIABLE_Cache_20 = ((MR_Word) (conv3_STATE_VARIABLE_Cache_20));
  }
}

static MR_Box MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_date_file_deps_rule_20_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_IncludePath_6;

  conv0_IncludePath_6 = parse_tree__generate_mmakefile_fragments__foreign_include_file_path_name_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_IncludePath_6));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments__construct_date_file_deps_rule_20_p_0(
  MR_Word Globals_21,
  MR_Word ModuleName_22,
  MR_String SourceFileName_23,
  MR_Word Ancestors_24,
  MR_Word DirectDeps_25,
  MR_Word IndirectDeps_26,
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
  MR_Word DirectDepsSourceGroups_44;
  MR_Word IndirectDepsSourceGroups_45;
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
  parse_tree__make_module_file_names__make_module_file_name_group_with_ext_9_p_0(Globals_21, (MR_String) "ancestors", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[0])), Ancestors_24, &AncestorSourceGroups_43, STATE_VARIABLE_Cache_0_52, &STATE_VARIABLE_Cache_72_72);
  parse_tree__make_module_file_names__make_module_file_name_group_with_ext_9_p_0(Globals_21, (MR_String) "direct deps", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[4])), DirectDeps_25, &DirectDepsSourceGroups_44, STATE_VARIABLE_Cache_72_72, &STATE_VARIABLE_Cache_77_77);
  parse_tree__make_module_file_names__make_module_file_name_group_with_ext_9_p_0(Globals_21, (MR_String) "indirect deps", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[5])), IndirectDeps_26, &IndirectDepsSourceGroups_45, STATE_VARIABLE_Cache_77_77, &STATE_VARIABLE_Cache_82_82);
  Var_87 = mercury__set__make_singleton_set_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_22)));
  parse_tree__make_module_file_names__make_module_file_name_group_with_ext_9_p_0(Globals_21, (MR_String) "type_repn self dep", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[4])), Var_87, &TypeRepnSelfDepGroups_46, STATE_VARIABLE_Cache_82_82, &STATE_VARIABLE_Cache_88_88);
  Var_93 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_22);
  parse_tree__make_module_file_names__make_module_file_name_group_with_ext_9_p_0(Globals_21, (MR_String) "type_repn ancestor dep", (MR_Word) (MR_mkword(1, &parse_tree__generate_mmakefile_fragments_scalar_common_4[4])), Var_93, &TypeRepnAncestorsDepGroups_47, STATE_VARIABLE_Cache_88_88, STATE_VARIABLE_Cache_53);
  ForeignIncludeFiles_48 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), ForeignIncludeFilesSet_31);
  {
    Var_97 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_97, 0) = ((MR_Box) (&parse_tree__generate_mmakefile_fragments_scalar_common_5[0]));
    MR_hl_field(0, Var_97, 1) = ((MR_Box) (parse_tree__generate_mmakefile_fragments__construct_date_file_deps_rule_20_p_0_1));
    MR_hl_field(0, Var_97, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_97, 3) = ((MR_Box) (SourceFileName_23));
  }
  ForeignImportFileNames_49 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_97, ForeignIncludeFiles_48);
  ForeignImportFileNameGroup_50 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "foreign imports", ForeignImportFileNames_49);
  Var_105 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), ForeignImportFileNameGroup_50, FactTableSourceGroups_35);
  Var_104 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), TypeRepnAncestorsDepGroups_47, Var_105);
  Var_103 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), TypeRepnSelfDepGroups_46, Var_104);
  Var_102 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), IndirectDepsSourceGroups_45, Var_103);
  Var_101 = mercury__list__f_43_43_2_f_0((MR_Word) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0), DirectDepsSourceGroups_44, Var_102);
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
parse_tree__generate_mmakefile_fragments__construct_trans_opt_deps_rule_9_p_0(
  MR_Word Globals_10,
  MR_Word MaybeInclTransOptRule_11,
  MR_Word StdDeps_12,
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

    if (((MR_tag((MR_Word) TransOptRuleInfo_17)) == (MR_Integer) 1))
      TransOptDeps_24 = ((MR_Word) ((MR_hl_field(1, TransOptRuleInfo_17, (MR_Integer) 0))));
    else
    {
      MR_Word TransOptOrder_18 = ((MR_Word) ((MR_hl_field(0, TransOptRuleInfo_17, (MR_Integer) 0))));
      MR_Word MaybeTransOptDeps0_22 = ((MR_Word) ((MR_hl_field(0, StdDeps_12, (MR_Integer) 3))));

      if ((MaybeTransOptDeps0_22 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.generate_mmakefile_fragments.construct_trans_opt_deps_rule\'/9", (MR_String) "no trans_opt_deps");
          return;
        }
      else
      {
        MR_Word TransOptDeps0_23 = ((MR_Word) ((MR_hl_field(1, MaybeTransOptDeps0_22, (MR_Integer) 0))));

        mercury__set__intersect_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptOrder_18, TransOptDeps0_23, &TransOptDeps_24);
      }
    }
    Var_35 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), TransOptDeps_24);
    parse_tree__make_module_file_names__make_module_file_names_with_ext_8_p_0(Globals_10, (MR_Word) (MR_mkword(3, &parse_tree__generate_mmakefile_fragments_scalar_common_1[17])), Var_35, &TransOptDepsFileNames_26, STATE_VARIABLE_Cache_0_28, STATE_VARIABLE_Cache_29);
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
parse_tree__generate_mmakefile_fragments____Unify____maybe_intermod_mh_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__generate_mmakefile_fragments____Unify____maybe_intermod_mh_deps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____maybe_intermod_mh_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__generate_mmakefile_fragments____Compare____maybe_intermod_mh_deps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
parse_tree__generate_mmakefile_fragments____Unify____maybe_opt_file_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__generate_mmakefile_fragments____Unify____maybe_opt_file_deps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____maybe_opt_file_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__generate_mmakefile_fragments____Compare____maybe_opt_file_deps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
parse_tree__generate_mmakefile_fragments____Unify____std_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__generate_mmakefile_fragments____Unify____std_deps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__generate_mmakefile_fragments____Compare____std_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__generate_mmakefile_fragments____Compare____std_deps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

	MR_register_type_ctor_info(&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_intermod_deps_0);
	MR_register_type_ctor_info(&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_maybe_include_trans_opt_rule_0);
	MR_register_type_ctor_info(&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_maybe_intermod_mh_deps_0);
	MR_register_type_ctor_info(&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_maybe_mmake_var_0);
	MR_register_type_ctor_info(&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_maybe_opt_file_deps_0);
	MR_register_type_ctor_info(&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_maybe_trans_opt_deps_0);
	MR_register_type_ctor_info(&parse_tree__generate_mmakefile_fragments__parse_tree__generate_mmakefile_fragments__type_ctor_info_std_deps_0);
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
