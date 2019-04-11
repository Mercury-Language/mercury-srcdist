/*
** Automatically generated from `write_deps_file.m'
** by the Mercury compiler,
** version rotd-2017-07-04
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



struct parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0_s {
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__DepsMap_19;
  MR_bool parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__succeeded;
  jmp_buf parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__commit_0;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__TypeCtorInfo_652_652;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__Var_91;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__Var_92;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625;
  MR_Word parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__Var_43;
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__conv1_Var_43;
  MR_Box parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__conv0_Var_91;
};


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__deps_map__type_ctor_info_deps_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__write_deps_file__pair__pti_pair_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__cord__pti_cord_1__plain_libs__mmakefiles__type_ctor_info_mmake_fragment_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__write_deps_file__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__write_deps_file__pair__ti_pair_2list__ti_list_1builtin__type_ctor_info_string_0builtin__type_ctor_info_string_0;

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0_10001(
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2);

static void MR_CALL 
parse_tree__write_deps_file____Compare____maybe_mmake_var_0_0_10001(
  MR_Box * parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3);

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
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1529__1_5_p_0(
  MR_Word parse_tree__write_deps_file__Globals_8,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_197,
  MR_String * parse_tree__write_deps_file__LambdaHeadVar__2_198);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1487__1_2_p_0(
  MR_Word parse_tree__write_deps_file__DepsMap_11,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_168);

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1352__1_4_p_0(
  MR_Word parse_tree__write_deps_file__DepsGraph_8,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_15,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__2_16,
  MR_Word * parse_tree__write_deps_file__LambdaHeadVar__3_17);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1323__1_2_p_0(
  MR_Word parse_tree__write_deps_file__ModuleName_22,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_47);

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__do_write_dependency_file__818__1_3_p_0(
  MR_Word parse_tree__write_deps_file__SourceFileModuleName_16,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_765,
  MR_Word * parse_tree__write_deps_file__LambdaHeadVar__2_766);

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

static MR_Word MR_CALL 
parse_tree__write_deps_file__mmakefile_header_comment_5_f_0(
  MR_String parse_tree__write_deps_file__What_7,
  MR_String parse_tree__write_deps_file__ModuleNameString_8,
  MR_String parse_tree__write_deps_file__SourceFileName_9,
  MR_String parse_tree__write_deps_file__Version_10,
  MR_String parse_tree__write_deps_file__Fullarch_11);

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

static MR_String MR_CALL 
parse_tree__write_deps_file__remove_files_cmd_1_f_0(
  MR_Word parse_tree__write_deps_file__Files_3);

static MR_String MR_CALL 
parse_tree__write_deps_file__remove_suffix_files_cmd_2_f_0(
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_4,
  MR_String parse_tree__write_deps_file__Extension_5);

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_18_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_18_p_0(
  MR_Word parse_tree__write_deps_file__Globals_19,
  MR_Word parse_tree__write_deps_file__DepStream_20,
  MR_Word parse_tree__write_deps_file__ModuleName_21,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_22,
  MR_String parse_tree__write_deps_file__ExeFileName_23,
  MR_String parse_tree__write_deps_file__InitCFileName_24,
  MR_String parse_tree__write_deps_file__InitObjFileName_25,
  MR_String parse_tree__write_deps_file__InitPicObjFileName_26,
  MR_String parse_tree__write_deps_file__InitFileName_27,
  MR_String parse_tree__write_deps_file__LibFileName_28,
  MR_String parse_tree__write_deps_file__SharedLibFileName_29,
  MR_String parse_tree__write_deps_file__JarFileName_30,
  MR_String parse_tree__write_deps_file__DepFileName_31,
  MR_String parse_tree__write_deps_file__DvFileName_32,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_43,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_44);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_9_p_0(
  MR_Word parse_tree__write_deps_file__Globals_10,
  MR_Word parse_tree__write_deps_file__DepStream_11,
  MR_Word parse_tree__write_deps_file__ModuleName_12,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_13,
  MR_Word parse_tree__write_deps_file__HeadVar__5_5,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_21,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_22);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_8_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box parse_tree__write_deps_file__wrapper_arg_4,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_5);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_8_p_0(
  MR_Word parse_tree__write_deps_file__Globals_9,
  MR_Word parse_tree__write_deps_file__DepStream_10,
  MR_Word parse_tree__write_deps_file__ModuleName_11,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_12,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_15,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_16);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_1(
  void * parse_tree__write_deps_file__env_ptr_arg);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_3(
  void * parse_tree__write_deps_file__env_ptr_arg);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_2(
  void * parse_tree__write_deps_file__env_ptr_arg);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_4(
  void * parse_tree__write_deps_file__env_ptr_arg);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0(
  MR_Word parse_tree__write_deps_file__Globals_16,
  MR_Word parse_tree__write_deps_file__DepStream_17,
  MR_Word parse_tree__write_deps_file__ModuleName_18,
  MR_Word parse_tree__write_deps_file__DepsMap_19,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_20,
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_21,
  MR_Word parse_tree__write_deps_file__Intermod_22,
  MR_Word parse_tree__write_deps_file__TransOpt_23,
  MR_Word parse_tree__write_deps_file__MaybeModuleDepsVarPair_24,
  MR_Word parse_tree__write_deps_file__MaybeOptsVarPair_25,
  MR_Word parse_tree__write_deps_file__MaybeTransOptsVarPair_26,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_65,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_66);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_init_targets_12_p_0(
  MR_Word parse_tree__write_deps_file__Globals_13,
  MR_Word parse_tree__write_deps_file__DepStream_14,
  MR_Word parse_tree__write_deps_file__ModuleName_15,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_16,
  MR_String parse_tree__write_deps_file__InitCFileName_17,
  MR_String parse_tree__write_deps_file__InitFileName_18,
  MR_String * parse_tree__write_deps_file__DepFileName_19,
  MR_String * parse_tree__write_deps_file__DvFileName_20,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_36,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_37);

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_exec_library_targets_16_p_0(
  MR_Word parse_tree__write_deps_file__Globals_17,
  MR_Word parse_tree__write_deps_file__DepStream_18,
  MR_Word parse_tree__write_deps_file__ModuleName_19,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_20,
  MR_String parse_tree__write_deps_file__InitFileName_21,
  MR_String parse_tree__write_deps_file__InitObjFileName_22,
  MR_Word parse_tree__write_deps_file__MaybeOptsVarPair_23,
  MR_Word parse_tree__write_deps_file__MaybeTransOptsVarPair_24,
  MR_String * parse_tree__write_deps_file__ExeFileName_25,
  MR_String * parse_tree__write_deps_file__JarFileName_26,
  MR_String * parse_tree__write_deps_file__LibFileName_27,
  MR_String * parse_tree__write_deps_file__SharedLibFileName_28,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_84,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_85);

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
parse_tree__write_deps_file__generate_dv_file_7_p_0_6(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_5(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_4(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

static MR_Box MR_CALL 
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
parse_tree__write_deps_file__write_subdirs_shorthand_rule_7_p_0(
  MR_Word parse_tree__write_deps_file__Globals_8,
  MR_Word parse_tree__write_deps_file__DepStream_9,
  MR_Word parse_tree__write_deps_file__ModuleName_10,
  MR_String parse_tree__write_deps_file__Ext_11,
  MR_Word * parse_tree__write_deps_file__MmakeRule_12);

static void MR_CALL 
parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(
  MR_Word parse_tree__write_deps_file__DepStream_1,
  MR_String parse_tree__write_deps_file__Suffix_2,
  MR_Word parse_tree__write_deps_file__HeadVar__3_3);

static void MR_CALL 
parse_tree__write_deps_file__write_extra_link_dependencies_list_7_p_0(
  MR_Word parse_tree__write_deps_file__Globals_1,
  MR_Word parse_tree__write_deps_file__DepStream_2,
  MR_String parse_tree__write_deps_file__Suffix_3,
  MR_Word parse_tree__write_deps_file__HeadVar__4_4,
  MR_Word * parse_tree__write_deps_file__HeadVar__5_5);

static MR_String MR_CALL 
parse_tree__write_deps_file__foreign_include_file_path_name_2_f_0(
  MR_String parse_tree__write_deps_file__SourceFileName_4,
  MR_Word parse_tree__write_deps_file__IncludeFile_5);

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
parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(
  MR_Word parse_tree__write_deps_file__DepStream_7,
  MR_String parse_tree__write_deps_file__Prefix_8,
  MR_String parse_tree__write_deps_file__Suffix_9,
  MR_Word parse_tree__write_deps_file__Basis_10);

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
parse_tree__write_deps_file__write_foreign_import_deps_8_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4);

static void MR_CALL 
parse_tree__write_deps_file__write_foreign_import_deps_8_p_0(
  MR_Word parse_tree__write_deps_file__DepStream_9,
  MR_Word parse_tree__write_deps_file__Globals_10,
  MR_String parse_tree__write_deps_file__ForeignImportExt_11,
  MR_Word parse_tree__write_deps_file__ForeignImportedModuleNames_12,
  MR_String parse_tree__write_deps_file__ForeignImportTarget_13,
  MR_Word * parse_tree__write_deps_file__MmakeRule_14);

static void MR_CALL 
parse_tree__write_deps_file__write_nested_deps_8_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4);

static void MR_CALL 
parse_tree__write_deps_file__write_nested_deps_8_p_0(
  MR_Word parse_tree__write_deps_file__DepStream_9,
  MR_Word parse_tree__write_deps_file__Globals_10,
  MR_Word parse_tree__write_deps_file__ModuleName_11,
  MR_Word parse_tree__write_deps_file__NestedDeps_12,
  MR_String parse_tree__write_deps_file__Ext_13,
  MR_Word * parse_tree__write_deps_file__MmakeRule_14);

static void MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_7_p_0_6(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4);

static void MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_7_p_0_5(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4);

static MR_bool MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_7_p_0_4(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2);

static MR_Box MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_7_p_0_3(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_7_p_0_2(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4);

static MR_Box MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_7_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1);

static void MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_7_p_0(
  MR_Word parse_tree__write_deps_file__DepStream_8,
  MR_Word parse_tree__write_deps_file__Globals_9,
  MR_Word parse_tree__write_deps_file__ModuleAndImports_10,
  MR_Word parse_tree__write_deps_file__AllDeps_11,
  MR_Word parse_tree__write_deps_file__MaybeTransOptDeps_12);

static void MR_CALL 
parse_tree__write_deps_file__maybe_output_module_order_5_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[184][2];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_2[8][3];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_3[2][7];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_4[6][6];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[2][11];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[3][5];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_7[1][1];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[2][10];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[2][8];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_10[2][4];

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_11[1][12];




static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_1[184][2] = {
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
    ((MR_Box) ((MR_String) "endif\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "\t\100:\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[14])))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) ".dll")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) ".class")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[17])))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) ".java")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[18])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) ".pic_o")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[19])))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) ".\044O")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) ".c")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "endif\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[23])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "\tdone\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "\t\t} || exit 1; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[25])))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044(INSTALL_INT_DIR)\"/*.\044\044ext \"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[26])))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "\t\t\t{ [ -d \"\044\044dir\" ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(LN_S) .. \"\044\044dir\" || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "\t\trm -rf \"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "\t\tdir=\"\044(INSTALL_INT_DIR)/Mercury/\044\044{ext}s\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[31])))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "; do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[32])))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) "done")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "\t} || exit 1; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[34])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044(INSTALL_INT_DIR)\"/*.\044\044ext \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \"\044\044dir\" ] || \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[37])))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \"\044\044dir\" || { \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[38])))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[39])))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_String) "\tdir=\"\044(INSTALL_INT_DIR)/Mercury/\044\044{ext}s\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[40])))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\t\"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[26])))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044(INSTALL_GRADE_INT_DIR)\"/*.\044\044ext \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[42])))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[43])))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_String) "\t\t\t{ [ -d \"\044\044dir\" ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[44])))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(LN_S) .. \"\044\044dir\" || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[45])))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_String) "\t\trm -rf \"\044\044dir\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[46])))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_String) "\t\tdir=\"\044(INSTALL_GRADE_INT_DIR)/Mercury/\044\044{ext}s\"; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[47])))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_String) "; do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[48])))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[35])))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044(INSTALL_GRADE_INT_DIR)\"/*.\044\044ext \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[50])))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \"\044\044dir\"; } && \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[51])))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \"\044\044dir\" ] || \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[52])))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \"\044\044dir\" || { \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[53])))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \"\044\044dir\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[54])))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_String) "\tdir=\"\044(INSTALL_GRADE_INT_DIR)/Mercury/\044\044{ext}s\"; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[55])))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_String) "\tdone\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[12])))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_INC_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[57])))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[58])))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_String) ".mhs); do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[59])))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INC_DIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[34])))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[61])))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_String) "\t} || exit 1\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[12])))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_INT_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[63])))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[64])))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_String) "\t\t} && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[65])))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_INT_DIR)/Mercury/mihs; \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[66])))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[67])))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \044(INSTALL_INT_DIR)/Mercury/mihs ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[68])))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \044(INSTALL_INT_DIR)/Mercury/mihs || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[69])))
  },
  /* row 71 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \044(INSTALL_INT_DIR)/Mercury/mihs\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[70])))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_String) "\t} || exit 1\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[71])))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_GRADE_INC_SUBDIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[72])))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[73])))
  },
  /* row 75 */
  {
    ((MR_Box) ((MR_String) "\t\t} && \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[74])))
  },
  /* row 76 */
  {
    ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL_MKDIR) \044(INSTALL_GRADE_INC_SUBDIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[75])))
  },
  /* row 77 */
  {
    ((MR_Box) ((MR_String) "\t\t{ [ -d \044(INSTALL_GRADE_INC_SUBDIR) ] || \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[76])))
  },
  /* row 78 */
  {
    ((MR_Box) ((MR_String) "\t\044(LN_S) .. \044(INSTALL_GRADE_INC_SUBDIR) || { \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[77])))
  },
  /* row 79 */
  {
    ((MR_Box) ((MR_String) "\trm -rf \044(INSTALL_GRADE_INC_SUBDIR)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[78])))
  },
  /* row 80 */
  {
    ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[79])))
  },
  /* row 81 */
  {
    ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails, then we just use\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[80])))
  },
  /* row 82 */
  {
    ((MR_Box) ((MR_String) "\t# The following is needed to support the \140--use-subdirs\' option\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[81])))
  },
  /* row 83 */
  {
    ((MR_Box) ((MR_String) "\tdone\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[82])))
  },
  /* row 84 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_GRADE_INC_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[83])))
  },
  /* row 85 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[84])))
  },
  /* row 86 */
  {
    ((MR_Box) ((MR_String) ".mihs); do \\\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[85])))
  },
  /* row 87 */
  {
    ((MR_Box) ((MR_String) "} || exit 1")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 88 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[87])))
  },
  /* row 89 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[88])))
  },
  /* row 90 */
  {
    ((MR_Box) ((MR_String) "\t} && \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[89])))
  },
  /* row 91 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_INT_DIR)/Mercury/mihs; \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[90])))
  },
  /* row 92 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[91])))
  },
  /* row 93 */
  {
    ((MR_Box) ((MR_String) "\t{ [ -d \044(INSTALL_INT_DIR)/Mercury/mihs ] || \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[92])))
  },
  /* row 94 */
  {
    ((MR_Box) ((MR_String) "\044(LN_S) .. \044(INSTALL_INT_DIR)/Mercury/mihs || { \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[93])))
  },
  /* row 95 */
  {
    ((MR_Box) ((MR_String) "rm -rf \044(INSTALL_INT_DIR)/Mercury/mihs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[94])))
  },
  /* row 96 */
  {
    ((MR_Box) ((MR_String) "} || exit 1")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[95])))
  },
  /* row 97 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_GRADE_INC_SUBDIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[96])))
  },
  /* row 98 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044(INSTALL_GRADE_INC_DIR)/*.mih \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[97])))
  },
  /* row 99 */
  {
    ((MR_Box) ((MR_String) "\t} && \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[98])))
  },
  /* row 100 */
  {
    ((MR_Box) ((MR_String) "\t\t\044(INSTALL_MKDIR) \044(INSTALL_GRADE_INC_SUBDIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[99])))
  },
  /* row 101 */
  {
    ((MR_Box) ((MR_String) "\t{ [ -d \044(INSTALL_GRADE_INC_SUBDIR) ] || \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[100])))
  },
  /* row 102 */
  {
    ((MR_Box) ((MR_String) "\044(LN_S) .. \044(INSTALL_GRADE_INC_SUBDIR) || { \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[101])))
  },
  /* row 103 */
  {
    ((MR_Box) ((MR_String) "rm -rf \044(INSTALL_GRADE_INC_SUBDIR)")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[102])))
  },
  /* row 104 */
  {
    ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'.")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[103])))
  },
  /* row 105 */
  {
    ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[104])))
  },
  /* row 106 */
  {
    ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option.")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[105])))
  },
  /* row 107 */
  {
    ((MR_Box) ((MR_String) "done")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[106])))
  },
  /* row 108 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_GRADE_INC_DIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[107])))
  },
  /* row 109 */
  {
    ((MR_Box) ((MR_String) "\t\044(INSTALL) \044\044hdr \044(INSTALL_INT_DIR); \\")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[108])))
  },
  /* row 110 */
  {
    ((MR_Box) ((MR_String) ".all_trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 111 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[110])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 112 */
  {
    ((MR_Box) ((MR_String) ".all_opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 113 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[112])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[111])))
  },
  /* row 114 */
  {
    ((MR_Box) ((MR_String) ".all_int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 115 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[114])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[113])))
  },
  /* row 116 */
  {
    ((MR_Box) ((MR_String) ".all_ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 117 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[116])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[115])))
  },
  /* row 118 */
  {
    ((MR_Box) ((MR_String) ".classes")),
    ((MR_Box) ((MR_String) ".classes"))
  },
  /* row 119 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[118])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[117])))
  },
  /* row 120 */
  {
    ((MR_Box) ((MR_String) ".javas")),
    ((MR_Box) ((MR_String) ".javas"))
  },
  /* row 121 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[120])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[119])))
  },
  /* row 122 */
  {
    ((MR_Box) ((MR_String) ".trans_opts")),
    ((MR_Box) ((MR_String) ".trans_opt_dates"))
  },
  /* row 123 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[122])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[121])))
  },
  /* row 124 */
  {
    ((MR_Box) ((MR_String) ".opts")),
    ((MR_Box) ((MR_String) ".optdates"))
  },
  /* row 125 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[124])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[123])))
  },
  /* row 126 */
  {
    ((MR_Box) ((MR_String) ".int3s")),
    ((MR_Box) ((MR_String) ".date3s"))
  },
  /* row 127 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[126])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[125])))
  },
  /* row 128 */
  {
    ((MR_Box) ((MR_String) ".ints")),
    ((MR_Box) ((MR_String) ".dates"))
  },
  /* row 129 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[128])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[127])))
  },
  /* row 130 */
  {
    ((MR_Box) ((MR_String) ".check")),
    ((MR_Box) ((MR_String) ".errs"))
  },
  /* row 131 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[130])),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[129])))
  },
  /* row 132 */
  {
    ((MR_Box) ((MR_String) ".foreign_cs) | xargs rm -f\n")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[14])))
  },
  /* row 133 */
  {
    ((MR_Box) ((MR_String) ".foreign_cs")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 134 */
  {
    ((MR_Box) ((MR_String) ".errs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[133])))
  },
  /* row 135 */
  {
    ((MR_Box) ((MR_String) ".profs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[134])))
  },
  /* row 136 */
  {
    ((MR_Box) ((MR_String) ".javas")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[135])))
  },
  /* row 137 */
  {
    ((MR_Box) ((MR_String) ".useds")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[136])))
  },
  /* row 138 */
  {
    ((MR_Box) ((MR_String) ".java_dates")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[137])))
  },
  /* row 139 */
  {
    ((MR_Box) ((MR_String) ".c_dates")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[138])))
  },
  /* row 140 */
  {
    ((MR_Box) ((MR_String) ".all_pic_os")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[139])))
  },
  /* row 141 */
  {
    ((MR_Box) ((MR_String) ".all_os")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[140])))
  },
  /* row 142 */
  {
    ((MR_Box) ((MR_String) ".mihs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[141])))
  },
  /* row 143 */
  {
    ((MR_Box) ((MR_String) ".cs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[142])))
  },
  /* row 144 */
  {
    ((MR_Box) ((MR_String) ".dirs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[143])))
  },
  /* row 145 */
  {
    ((MR_Box) ((MR_String) ".classes")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 146 */
  {
    ((MR_Box) ((MR_String) ".foreign_dlls")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[145])))
  },
  /* row 147 */
  {
    ((MR_Box) ((MR_String) ".dlls")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[146])))
  },
  /* row 148 */
  {
    ((MR_Box) ((MR_String) ".all_mihs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[147])))
  },
  /* row 149 */
  {
    ((MR_Box) ((MR_String) ".all_mhs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[148])))
  },
  /* row 150 */
  {
    ((MR_Box) ((MR_String) ".module_deps")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[149])))
  },
  /* row 151 */
  {
    ((MR_Box) ((MR_String) ".ds")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[150])))
  },
  /* row 152 */
  {
    ((MR_Box) ((MR_String) ".imdgs")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[151])))
  },
  /* row 153 */
  {
    ((MR_Box) ((MR_String) ".requests")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[152])))
  },
  /* row 154 */
  {
    ((MR_Box) ((MR_String) ".analysiss")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[153])))
  },
  /* row 155 */
  {
    ((MR_Box) ((MR_String) ".trans_opts")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[154])))
  },
  /* row 156 */
  {
    ((MR_Box) ((MR_String) ".opts")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[155])))
  },
  /* row 157 */
  {
    ((MR_Box) ((MR_String) ".int3s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[156])))
  },
  /* row 158 */
  {
    ((MR_Box) ((MR_String) ".all_int0s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[157])))
  },
  /* row 159 */
  {
    ((MR_Box) ((MR_String) ".ints")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[158])))
  },
  /* row 160 */
  {
    ((MR_Box) ((MR_String) ".trans_opt_dates")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[159])))
  },
  /* row 161 */
  {
    ((MR_Box) ((MR_String) ".optdates")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[160])))
  },
  /* row 162 */
  {
    ((MR_Box) ((MR_String) ".date3s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[161])))
  },
  /* row 163 */
  {
    ((MR_Box) ((MR_String) ".date0s")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[162])))
  },
  /* row 164 */
  {
    ((MR_Box) ((MR_String) ".dates")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[163])))
  },
  /* row 165 */
  {
    ((MR_Box) ((MR_String) " :")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 166 */
  {
    ((MR_Box) ((MR_String) ".fact_tables =")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 167 */
  {
    ((MR_Box) ((MR_String) ".fact_tables:%=\044(cs_subdir)%.c)\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 168 */
  {
    ((MR_Box) ((MR_String) ".fact_tables)")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 169 */
  {
    ((MR_Box) ((MR_String) " : ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 170 */
  {
    ((MR_Box) ((MR_String) "\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 171 */
  {
    ((MR_Box) ((MR_String) " \044(ERR_REDIRECT)\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 172 */
  {
    ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE)")),
    ((MR_Box) ((MR_String) ""))
  },
  /* row 173 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLLIBS_DEP))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 174 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLOBJS))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 175 */
  {
    ((MR_Box) ((MR_String) ",\044(ALL_MLOBJS)))")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 176 */
  {
    ((MR_Box) ((MR_String) "ifeq (\044(findstring java,\044(GRADE)),java)\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 177 */
  {
    ((MR_Box) ((MR_String) "else\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 178 */
  {
    ((MR_Box) ((MR_String) "\044(EXT_FOR_SHARED_LIB)")),
    ((MR_Box) ((MR_String) "\044(A)"))
  },
  /* row 179 */
  {
    ((MR_Box) ((MR_String) " :\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 180 */
  {
    ((MR_Box) ((MR_String) "install_lib_dirs")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 181 */
  {
    ((MR_Box) ((MR_String) "install_grade_dirs")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 182 */
  {
    ((MR_Box) ((MR_String) ")\n\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 183 */
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
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_1[6])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[0])),
    ((MR_Box) (parse_tree__write_deps_file__do_write_dependency_file_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[2])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[5])),
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

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_5[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_6[3][5] = {
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

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_7[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "java"))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_8[2][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
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
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_9[2][8] = {
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

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_10[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[4])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".m"))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[4])),
    ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) ".err"))
  },
};

static /* final */ const MR_Box parse_tree__write_deps_file_scalar_common_11[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
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



static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__write_deps_file__list__pti_list_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
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
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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

static MR_bool MR_CALL 
parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0_10001(
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;

    {
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file____Unify____maybe_mmake_var_0_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_2));
    }
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

    {
      parse_tree__write_deps_file____Compare____maybe_mmake_var_0_0(&parse_tree__write_deps_file__conv0_HeadVar__1_1, ((MR_Word) parse_tree__write_deps_file__wrapper_arg_2), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_3));
    }
    *parse_tree__write_deps_file__wrapper_arg_1 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__1_1));
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
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1323__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
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
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_11, (MR_Integer) 331, &parse_tree__write_deps_file__Intermod_24);
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
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FindModule_31, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[2]));
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
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1529__1_5_p_0(
  MR_Word parse_tree__write_deps_file__Globals_8,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_197,
  MR_String * parse_tree__write_deps_file__LambdaHeadVar__2_198)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_String parse_tree__write_deps_file__F0_45;
    MR_Word parse_tree__write_deps_file__M_874 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__LambdaHeadVar__1_197, (MR_Integer) 0)));
    MR_String parse_tree__write_deps_file__E_875 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__LambdaHeadVar__1_197, (MR_Integer) 1)));

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 0, parse_tree__write_deps_file__E_875, parse_tree__write_deps_file__M_874, &parse_tree__write_deps_file__F0_45);
    }
    {
      *parse_tree__write_deps_file__LambdaHeadVar__2_198 = mercury__string__f_43_43_2_f_0((MR_String) "\044(os_subdir)", parse_tree__write_deps_file__F0_45);
    }
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1487__1_2_p_0(
  MR_Word parse_tree__write_deps_file__DepsMap_11,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_168)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_916_916 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word parse_tree__write_deps_file__ModuleImports_32;
    MR_Word parse_tree__write_deps_file__Var_169;
    MR_Word parse_tree__write_deps_file__Var_170;
    MR_Box parse_tree__write_deps_file__conv0_Var_169;
    MR_Word parse_tree__write_deps_file__Var_31;
    MR_String parse_tree__write_deps_file__Var_878;
    MR_Word parse_tree__write_deps_file__Var_879;
    MR_Word parse_tree__write_deps_file__Var_880;
    MR_Word parse_tree__write_deps_file__Var_881;
    MR_Word parse_tree__write_deps_file__Var_882;
    MR_Word parse_tree__write_deps_file__Var_883;
    MR_Word parse_tree__write_deps_file__Var_884;
    MR_Word parse_tree__write_deps_file__Var_885;
    MR_Word parse_tree__write_deps_file__Var_886;
    MR_Word parse_tree__write_deps_file__Var_887;
    MR_Word parse_tree__write_deps_file__Var_888;
    MR_Word parse_tree__write_deps_file__Var_889;
    MR_Word parse_tree__write_deps_file__Var_890;
    MR_Word parse_tree__write_deps_file__Var_891;
    MR_Word parse_tree__write_deps_file__Var_892;
    MR_Word parse_tree__write_deps_file__Var_893;
    MR_Word parse_tree__write_deps_file__Var_894;
    MR_Word parse_tree__write_deps_file__Var_895;
    MR_Word parse_tree__write_deps_file__Var_896;
    MR_Word parse_tree__write_deps_file__Var_897;
    MR_Word parse_tree__write_deps_file__Var_898;
    MR_Word parse_tree__write_deps_file__Var_899;
    MR_Word parse_tree__write_deps_file__Var_900;
    MR_Word parse_tree__write_deps_file__Var_901;
    MR_Word parse_tree__write_deps_file__Var_902;
    MR_String parse_tree__write_deps_file__Var_903;

    {
      mercury__map__lookup_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_916_916, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_11, ((MR_Box) (parse_tree__write_deps_file__LambdaHeadVar__1_168)), &parse_tree__write_deps_file__conv0_Var_169);
    }
    parse_tree__write_deps_file__Var_169 = ((MR_Word) parse_tree__write_deps_file__conv0_Var_169);
    parse_tree__write_deps_file__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_169, (MR_Integer) 0)));
    parse_tree__write_deps_file__ModuleImports_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_169, (MR_Integer) 1)));
    parse_tree__write_deps_file__Var_878 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 0)));
    parse_tree__write_deps_file__Var_879 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 1)));
    parse_tree__write_deps_file__Var_880 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 2)));
    parse_tree__write_deps_file__Var_881 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 3)));
    parse_tree__write_deps_file__Var_882 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 4)));
    parse_tree__write_deps_file__Var_883 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 5)));
    parse_tree__write_deps_file__Var_884 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 6)));
    parse_tree__write_deps_file__Var_885 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 7)));
    parse_tree__write_deps_file__Var_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 8)));
    parse_tree__write_deps_file__Var_886 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 9)));
    parse_tree__write_deps_file__Var_887 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 10)));
    parse_tree__write_deps_file__Var_888 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 11)));
    parse_tree__write_deps_file__Var_889 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 12)));
    parse_tree__write_deps_file__Var_890 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 13)));
    parse_tree__write_deps_file__Var_891 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 14)));
    parse_tree__write_deps_file__Var_892 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 15)));
    parse_tree__write_deps_file__Var_893 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 16)));
    parse_tree__write_deps_file__Var_894 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 17)));
    parse_tree__write_deps_file__Var_895 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 18)));
    parse_tree__write_deps_file__Var_896 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 19)));
    parse_tree__write_deps_file__Var_897 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 20)));
    parse_tree__write_deps_file__Var_898 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 21)));
    parse_tree__write_deps_file__Var_899 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 22)));
    parse_tree__write_deps_file__Var_900 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 23)));
    parse_tree__write_deps_file__Var_901 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 24)));
    parse_tree__write_deps_file__Var_902 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 25)));
    parse_tree__write_deps_file__Var_903 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleImports_32, (MR_Integer) 26)));
    {
      parse_tree__write_deps_file__succeeded = mercury__set__non_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_916_916, parse_tree__write_deps_file__Var_170);
    }
    return parse_tree__write_deps_file__succeeded;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1352__1_4_p_0(
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
parse_tree__write_deps_file__IntroducedFrom__pred__generate_dependencies_write_d_file__1323__1_2_p_0(
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

static MR_bool MR_CALL 
parse_tree__write_deps_file__IntroducedFrom__pred__do_write_dependency_file__818__1_3_p_0(
  MR_Word parse_tree__write_deps_file__SourceFileModuleName_16,
  MR_Word parse_tree__write_deps_file__LambdaHeadVar__1_765,
  MR_Word * parse_tree__write_deps_file__LambdaHeadVar__2_766)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_String parse_tree__write_deps_file__Var_767;

    {
      *parse_tree__write_deps_file__LambdaHeadVar__2_766 = parse_tree__prog_foreign__foreign_import_module_name_from_module_2_f_0(parse_tree__write_deps_file__LambdaHeadVar__1_765, parse_tree__write_deps_file__SourceFileModuleName_16);
    }
    parse_tree__write_deps_file__succeeded = ((MR_tag((MR_Word) *parse_tree__write_deps_file__LambdaHeadVar__2_766)) == (MR_mktag((MR_Integer) 0)));
    if (parse_tree__write_deps_file__succeeded)
      {
        parse_tree__write_deps_file__Var_767 = ((MR_String) (MR_hl_field(MR_mktag(0), *parse_tree__write_deps_file__LambdaHeadVar__2_766, (MR_Integer) 0)));
        parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__Var_767, (MR_String) "mercury") == 0);
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
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__Cast_HeadVar1_4 = parse_tree__write_deps_file__HeadVar__2_2;
    MR_Word parse_tree__write_deps_file__Cast_HeadVar2_5 = parse_tree__write_deps_file__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_2[4], parse_tree__write_deps_file__HeadVar__1_1, ((MR_Box) (parse_tree__write_deps_file__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__write_deps_file__Cast_HeadVar2_5)));
    }
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

    {
      parse_tree__write_deps_file__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__write_deps_file_scalar_common_2[4], ((MR_Box) (parse_tree__write_deps_file__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__write_deps_file__Cast_HeadVar2_4)));
    }
    return parse_tree__write_deps_file__succeeded;
  }
}

static MR_String MR_CALL 
parse_tree__write_deps_file__add_suffix_2_f_0(
  MR_String parse_tree__write_deps_file__Suffix_4,
  MR_String parse_tree__write_deps_file__Str_5)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_String parse_tree__write_deps_file__HeadVar__3_3;

    {
      parse_tree__write_deps_file__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__Str_5, parse_tree__write_deps_file__Suffix_4);
    }
    return parse_tree__write_deps_file__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
parse_tree__write_deps_file__mmakefile_header_comment_5_f_0(
  MR_String parse_tree__write_deps_file__What_7,
  MR_String parse_tree__write_deps_file__ModuleNameString_8,
  MR_String parse_tree__write_deps_file__SourceFileName_9,
  MR_String parse_tree__write_deps_file__Version_10,
  MR_String parse_tree__write_deps_file__Fullarch_11)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__HeadVar__6_6;
    MR_Word parse_tree__write_deps_file__Var_12;
    MR_String parse_tree__write_deps_file__Var_13;
    MR_String parse_tree__write_deps_file__Var_15;
    MR_String parse_tree__write_deps_file__Var_16;
    MR_String parse_tree__write_deps_file__Var_18;
    MR_String parse_tree__write_deps_file__Var_20;
    MR_Word parse_tree__write_deps_file__Var_22;
    MR_String parse_tree__write_deps_file__Var_23;
    MR_String parse_tree__write_deps_file__Var_25;
    MR_Word parse_tree__write_deps_file__Var_27;
    MR_String parse_tree__write_deps_file__Var_28;
    MR_String parse_tree__write_deps_file__Var_30;
    MR_Word parse_tree__write_deps_file__Var_32;
    MR_String parse_tree__write_deps_file__Var_33;
    MR_String parse_tree__write_deps_file__Var_35;

    {
      parse_tree__write_deps_file__Var_20 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleNameString_8, (MR_String) "\'");
    }
    {
      parse_tree__write_deps_file__Var_18 = mercury__string__f_43_43_2_f_0((MR_String) "module \140", parse_tree__write_deps_file__Var_20);
    }
    {
      parse_tree__write_deps_file__Var_16 = mercury__string__f_43_43_2_f_0((MR_String) " for ", parse_tree__write_deps_file__Var_18);
    }
    {
      parse_tree__write_deps_file__Var_15 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__What_7, parse_tree__write_deps_file__Var_16);
    }
    {
      parse_tree__write_deps_file__Var_13 = mercury__string__f_43_43_2_f_0((MR_String) "Automatically generated ", parse_tree__write_deps_file__Var_15);
    }
    {
      parse_tree__write_deps_file__Var_25 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__SourceFileName_9, (MR_String) "\'");
    }
    {
      parse_tree__write_deps_file__Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "generated from source file \140", parse_tree__write_deps_file__Var_25);
    }
    {
      parse_tree__write_deps_file__Var_30 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__Version_10, (MR_String) ",");
    }
    {
      parse_tree__write_deps_file__Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "Generated by the Mercury compiler, version ", parse_tree__write_deps_file__Var_30);
    }
    {
      parse_tree__write_deps_file__Var_35 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__Fullarch_11, (MR_String) ".");
    }
    {
      parse_tree__write_deps_file__Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "configured for ", parse_tree__write_deps_file__Var_35);
    }
    {
      parse_tree__write_deps_file__Var_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_32, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_33));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_27, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_28));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_27, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_32));
    }
    {
      parse_tree__write_deps_file__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_22, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_23));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_22, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_27));
    }
    {
      parse_tree__write_deps_file__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_12, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_13));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_12, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_22));
    }
    {
      parse_tree__write_deps_file__HeadVar__6_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__6_6, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_12));
    }
    return parse_tree__write_deps_file__HeadVar__6_6;
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
                parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, (MR_Integer) 1, (MR_String) ".opt", parse_tree__write_deps_file__Dep_18, &parse_tree__write_deps_file__OptName_27);
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
                parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, (MR_Integer) 1, (MR_String) ".trans_opt", parse_tree__write_deps_file__Dep_18, &parse_tree__write_deps_file__TransOptName_31);
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
                    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, (MR_Integer) 1, (MR_String) ".opt", parse_tree__write_deps_file__Dep_18, &parse_tree__write_deps_file__OptName_56);
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
                    parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, (MR_Integer) 1, (MR_String) ".trans_opt", parse_tree__write_deps_file__Dep_18, &parse_tree__write_deps_file__TransOptName_58);
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

static MR_String MR_CALL 
parse_tree__write_deps_file__remove_files_cmd_1_f_0(
  MR_Word parse_tree__write_deps_file__Files_3)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_String parse_tree__write_deps_file__HeadVar__2_2;
    MR_String parse_tree__write_deps_file__Var_5;

    {
      parse_tree__write_deps_file__Var_5 = mercury__string__join_list_2_f_0((MR_String) " ", parse_tree__write_deps_file__Files_3);
    }
    {
      parse_tree__write_deps_file__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "-rm -f ", parse_tree__write_deps_file__Var_5);
    }
    return parse_tree__write_deps_file__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
parse_tree__write_deps_file__remove_suffix_files_cmd_2_f_0(
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_4,
  MR_String parse_tree__write_deps_file__Extension_5)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_String parse_tree__write_deps_file__HeadVar__3_3;
    MR_String parse_tree__write_deps_file__Var_13;
    MR_String parse_tree__write_deps_file__Var_14;

    {
      parse_tree__write_deps_file__Var_13 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__Extension_5, (MR_String) ") | xargs rm -f");
    }
    {
      parse_tree__write_deps_file__Var_14 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_4, parse_tree__write_deps_file__Var_13);
    }
    {
      parse_tree__write_deps_file__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "-echo \044(", parse_tree__write_deps_file__Var_14);
    }
    return parse_tree__write_deps_file__HeadVar__3_3;
  }
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_18_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
{
  {
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_String parse_tree__write_deps_file__conv0_HeadVar__3_3;

    {
      parse_tree__write_deps_file__conv0_HeadVar__3_3 = parse_tree__write_deps_file__remove_suffix_files_cmd_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
    }
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__3_3));
    return parse_tree__write_deps_file__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_clean_targets_18_p_0(
  MR_Word parse_tree__write_deps_file__Globals_19,
  MR_Word parse_tree__write_deps_file__DepStream_20,
  MR_Word parse_tree__write_deps_file__ModuleName_21,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_22,
  MR_String parse_tree__write_deps_file__ExeFileName_23,
  MR_String parse_tree__write_deps_file__InitCFileName_24,
  MR_String parse_tree__write_deps_file__InitObjFileName_25,
  MR_String parse_tree__write_deps_file__InitPicObjFileName_26,
  MR_String parse_tree__write_deps_file__InitFileName_27,
  MR_String parse_tree__write_deps_file__LibFileName_28,
  MR_String parse_tree__write_deps_file__SharedLibFileName_29,
  MR_String parse_tree__write_deps_file__JarFileName_30,
  MR_String parse_tree__write_deps_file__DepFileName_31,
  MR_String parse_tree__write_deps_file__DvFileName_32,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_43,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_44)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_405_405;
    MR_String parse_tree__write_deps_file__CleanTargetName_35;
    MR_String parse_tree__write_deps_file__RealCleanTargetName_36;
    MR_Word parse_tree__write_deps_file__CleanFiles_38;
    MR_Word parse_tree__write_deps_file__MmakeRulesClean_39;
    MR_Word parse_tree__write_deps_file__RealCleanFiles_41;
    MR_Word parse_tree__write_deps_file__MmakeRulesRealClean_42;
    MR_Word parse_tree__write_deps_file__Var_53;
    MR_Word parse_tree__write_deps_file__Var_56;
    MR_Word parse_tree__write_deps_file__Var_57;
    MR_Word parse_tree__write_deps_file__Var_60;
    MR_Word parse_tree__write_deps_file__Var_63;
    MR_Word parse_tree__write_deps_file__Var_64;
    MR_Word parse_tree__write_deps_file__Var_66;
    MR_Word parse_tree__write_deps_file__Var_67;
    MR_Word parse_tree__write_deps_file__Var_69;
    MR_Word parse_tree__write_deps_file__Var_71;
    MR_Word parse_tree__write_deps_file__Var_72;
    MR_Word parse_tree__write_deps_file__Var_74;
    MR_Word parse_tree__write_deps_file__Var_76;
    MR_Word parse_tree__write_deps_file__Var_77;
    MR_Word parse_tree__write_deps_file__Var_79;
    MR_Word parse_tree__write_deps_file__Var_80;
    MR_Word parse_tree__write_deps_file__Var_82;
    MR_Word parse_tree__write_deps_file__Var_84;
    MR_Word parse_tree__write_deps_file__Var_85;
    MR_Word parse_tree__write_deps_file__Var_87;
    MR_Word parse_tree__write_deps_file__Var_89;
    MR_Word parse_tree__write_deps_file__Var_90;
    MR_Word parse_tree__write_deps_file__Var_92;
    MR_Word parse_tree__write_deps_file__Var_93;
    MR_Word parse_tree__write_deps_file__Var_95;
    MR_Word parse_tree__write_deps_file__Var_97;
    MR_Word parse_tree__write_deps_file__Var_98;
    MR_Word parse_tree__write_deps_file__Var_100;
    MR_Word parse_tree__write_deps_file__Var_101;
    MR_Word parse_tree__write_deps_file__Var_103;
    MR_Word parse_tree__write_deps_file__Var_105;
    MR_Word parse_tree__write_deps_file__Var_106;
    MR_Word parse_tree__write_deps_file__Var_108;
    MR_Word parse_tree__write_deps_file__Var_110;
    MR_Word parse_tree__write_deps_file__Var_111;
    MR_Word parse_tree__write_deps_file__Var_113;
    MR_Word parse_tree__write_deps_file__Var_115;
    MR_Word parse_tree__write_deps_file__Var_116;
    MR_Word parse_tree__write_deps_file__Var_118;
    MR_Word parse_tree__write_deps_file__Var_120;
    MR_Word parse_tree__write_deps_file__Var_121;
    MR_Word parse_tree__write_deps_file__Var_123;
    MR_Word parse_tree__write_deps_file__Var_125;
    MR_Word parse_tree__write_deps_file__Var_126;
    MR_Word parse_tree__write_deps_file__Var_128;
    MR_Word parse_tree__write_deps_file__Var_130;
    MR_Word parse_tree__write_deps_file__Var_131;
    MR_Word parse_tree__write_deps_file__Var_133;
    MR_Word parse_tree__write_deps_file__Var_135;
    MR_Word parse_tree__write_deps_file__Var_165;
    MR_Word parse_tree__write_deps_file__Var_166;
    MR_Word parse_tree__write_deps_file__Var_168;
    MR_Word parse_tree__write_deps_file__Var_172;
    MR_Word parse_tree__write_deps_file__Var_175;
    MR_Word parse_tree__write_deps_file__Var_176;
    MR_Word parse_tree__write_deps_file__Var_180;
    MR_Word parse_tree__write_deps_file__Var_181;
    MR_Word parse_tree__write_deps_file__Var_182;
    MR_Word parse_tree__write_deps_file__Var_183;
    MR_String parse_tree__write_deps_file__Var_184;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_187_187;
    MR_Word parse_tree__write_deps_file__Var_189;
    MR_Word parse_tree__write_deps_file__Var_192;
    MR_Word parse_tree__write_deps_file__Var_196;
    MR_Word parse_tree__write_deps_file__Var_199;
    MR_Word parse_tree__write_deps_file__Var_200;
    MR_Word parse_tree__write_deps_file__Var_202;
    MR_Word parse_tree__write_deps_file__Var_203;
    MR_Word parse_tree__write_deps_file__Var_205;
    MR_Word parse_tree__write_deps_file__Var_206;
    MR_Word parse_tree__write_deps_file__Var_208;
    MR_Word parse_tree__write_deps_file__Var_210;
    MR_Word parse_tree__write_deps_file__Var_211;
    MR_Word parse_tree__write_deps_file__Var_213;
    MR_Word parse_tree__write_deps_file__Var_215;
    MR_Word parse_tree__write_deps_file__Var_216;
    MR_Word parse_tree__write_deps_file__Var_218;
    MR_Word parse_tree__write_deps_file__Var_220;
    MR_Word parse_tree__write_deps_file__Var_221;
    MR_Word parse_tree__write_deps_file__Var_223;
    MR_Word parse_tree__write_deps_file__Var_225;
    MR_Word parse_tree__write_deps_file__Var_226;
    MR_Word parse_tree__write_deps_file__Var_228;
    MR_Word parse_tree__write_deps_file__Var_230;
    MR_Word parse_tree__write_deps_file__Var_231;
    MR_Word parse_tree__write_deps_file__Var_233;
    MR_Word parse_tree__write_deps_file__Var_235;
    MR_Word parse_tree__write_deps_file__Var_236;
    MR_Word parse_tree__write_deps_file__Var_238;
    MR_Word parse_tree__write_deps_file__Var_240;
    MR_Word parse_tree__write_deps_file__Var_241;
    MR_Word parse_tree__write_deps_file__Var_243;
    MR_Word parse_tree__write_deps_file__Var_245;
    MR_Word parse_tree__write_deps_file__Var_246;
    MR_Word parse_tree__write_deps_file__Var_248;
    MR_Word parse_tree__write_deps_file__Var_250;
    MR_Word parse_tree__write_deps_file__Var_251;
    MR_Word parse_tree__write_deps_file__Var_253;
    MR_Word parse_tree__write_deps_file__Var_255;
    MR_Word parse_tree__write_deps_file__Var_256;
    MR_Word parse_tree__write_deps_file__Var_258;
    MR_Word parse_tree__write_deps_file__Var_260;
    MR_Word parse_tree__write_deps_file__Var_261;
    MR_Word parse_tree__write_deps_file__Var_263;
    MR_Word parse_tree__write_deps_file__Var_265;
    MR_Word parse_tree__write_deps_file__Var_266;
    MR_Word parse_tree__write_deps_file__Var_268;
    MR_Word parse_tree__write_deps_file__Var_270;
    MR_Word parse_tree__write_deps_file__Var_271;
    MR_Word parse_tree__write_deps_file__Var_273;
    MR_Word parse_tree__write_deps_file__Var_275;
    MR_Word parse_tree__write_deps_file__Var_276;
    MR_Word parse_tree__write_deps_file__Var_278;
    MR_Word parse_tree__write_deps_file__Var_280;
    MR_Word parse_tree__write_deps_file__Var_281;
    MR_Word parse_tree__write_deps_file__Var_283;
    MR_Word parse_tree__write_deps_file__Var_285;
    MR_Word parse_tree__write_deps_file__Var_286;
    MR_Word parse_tree__write_deps_file__Var_288;
    MR_Word parse_tree__write_deps_file__Var_290;
    MR_Word parse_tree__write_deps_file__Var_291;
    MR_Word parse_tree__write_deps_file__Var_293;
    MR_Word parse_tree__write_deps_file__Var_295;
    MR_Word parse_tree__write_deps_file__Var_296;
    MR_Word parse_tree__write_deps_file__Var_298;
    MR_Word parse_tree__write_deps_file__Var_300;
    MR_Word parse_tree__write_deps_file__Var_301;
    MR_Word parse_tree__write_deps_file__Var_303;
    MR_Word parse_tree__write_deps_file__Var_305;
    MR_Word parse_tree__write_deps_file__Var_309;
    MR_Word parse_tree__write_deps_file__Var_312;
    MR_Word parse_tree__write_deps_file__Var_313;
    MR_Word parse_tree__write_deps_file__Var_315;
    MR_Word parse_tree__write_deps_file__Var_316;
    MR_Word parse_tree__write_deps_file__Var_318;
    MR_Word parse_tree__write_deps_file__Var_319;
    MR_Word parse_tree__write_deps_file__Var_321;
    MR_Word parse_tree__write_deps_file__Var_322;
    MR_Word parse_tree__write_deps_file__Var_324;
    MR_Word parse_tree__write_deps_file__Var_325;
    MR_Word parse_tree__write_deps_file__Var_327;
    MR_Word parse_tree__write_deps_file__Var_328;
    MR_Word parse_tree__write_deps_file__Var_330;
    MR_String parse_tree__write_deps_file__Var_374;
    MR_Word parse_tree__write_deps_file__Var_376;
    MR_Word parse_tree__write_deps_file__Var_377;
    MR_Word parse_tree__write_deps_file__Var_378;
    MR_Word parse_tree__write_deps_file__Var_379;
    MR_Word parse_tree__write_deps_file__Var_380;
    MR_Word parse_tree__write_deps_file__Var_381;
    MR_Word parse_tree__write_deps_file__Var_383;
    MR_Word parse_tree__write_deps_file__Var_387;
    MR_Word parse_tree__write_deps_file__Var_390;
    MR_Word parse_tree__write_deps_file__Var_391;
    MR_Word parse_tree__write_deps_file__Var_396;
    MR_Word parse_tree__write_deps_file__Var_397;
    MR_Word parse_tree__write_deps_file__Var_399;
    MR_String parse_tree__write_deps_file__Var_400;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_19, (MR_Integer) 1, (MR_String) ".clean", parse_tree__write_deps_file__ModuleName_21, &parse_tree__write_deps_file__CleanTargetName_35);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_19, (MR_Integer) 1, (MR_String) ".realclean", parse_tree__write_deps_file__ModuleName_21, &parse_tree__write_deps_file__RealCleanTargetName_36);
    }
    parse_tree__write_deps_file__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[14]);
    {
      parse_tree__write_deps_file__Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_56, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_35));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_56, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_57));
    }
    {
      parse_tree__write_deps_file__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_53, 0) = ((MR_Box) ((MR_String) "clean_local : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_53, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_56));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__Var_53);
    }
    {
      parse_tree__write_deps_file__Var_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_135, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[132])));
    }
    {
      parse_tree__write_deps_file__Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_133, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_133, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_135));
    }
    {
      parse_tree__write_deps_file__Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_131, 0) = ((MR_Box) ((MR_String) ".errs) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_131, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_133));
    }
    {
      parse_tree__write_deps_file__Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_130, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_130, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_131));
    }
    {
      parse_tree__write_deps_file__Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_128, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_128, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_130));
    }
    {
      parse_tree__write_deps_file__Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_126, 0) = ((MR_Box) ((MR_String) ".profs) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_126, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_128));
    }
    {
      parse_tree__write_deps_file__Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_125, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_125, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_126));
    }
    {
      parse_tree__write_deps_file__Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_123, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_123, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_125));
    }
    {
      parse_tree__write_deps_file__Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_121, 0) = ((MR_Box) ((MR_String) ".javas) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_121, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_123));
    }
    {
      parse_tree__write_deps_file__Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_120, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_120, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_121));
    }
    {
      parse_tree__write_deps_file__Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_118, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_118, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_120));
    }
    {
      parse_tree__write_deps_file__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_116, 0) = ((MR_Box) ((MR_String) ".useds) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_116, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_118));
    }
    {
      parse_tree__write_deps_file__Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_115, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_115, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_116));
    }
    {
      parse_tree__write_deps_file__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_113, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_113, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_115));
    }
    {
      parse_tree__write_deps_file__Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_111, 0) = ((MR_Box) ((MR_String) ".java_dates) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_111, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_113));
    }
    {
      parse_tree__write_deps_file__Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_110, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_110, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_111));
    }
    {
      parse_tree__write_deps_file__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_108, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_108, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_110));
    }
    {
      parse_tree__write_deps_file__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_106, 0) = ((MR_Box) ((MR_String) ".c_dates) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_106, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_108));
    }
    {
      parse_tree__write_deps_file__Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_105, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_105, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_106));
    }
    {
      parse_tree__write_deps_file__Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_103, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_103, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_105));
    }
    {
      parse_tree__write_deps_file__Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_101, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_101, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_103));
    }
    {
      parse_tree__write_deps_file__Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_100, 0) = ((MR_Box) (parse_tree__write_deps_file__InitPicObjFileName_26));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_100, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_101));
    }
    {
      parse_tree__write_deps_file__Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_98, 0) = ((MR_Box) ((MR_String) ".all_pic_os) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_98, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_100));
    }
    {
      parse_tree__write_deps_file__Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_97, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_97, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_98));
    }
    {
      parse_tree__write_deps_file__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_95, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_95, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_97));
    }
    {
      parse_tree__write_deps_file__Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_93, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_93, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_95));
    }
    {
      parse_tree__write_deps_file__Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_92, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_25));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_92, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_93));
    }
    {
      parse_tree__write_deps_file__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_90, 0) = ((MR_Box) ((MR_String) ".all_os) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_90, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_92));
    }
    {
      parse_tree__write_deps_file__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_89, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_89, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_90));
    }
    {
      parse_tree__write_deps_file__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_87, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_87, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_89));
    }
    {
      parse_tree__write_deps_file__Var_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_85, 0) = ((MR_Box) ((MR_String) ".mihs) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_85, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_87));
    }
    {
      parse_tree__write_deps_file__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_84, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_84, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_85));
    }
    {
      parse_tree__write_deps_file__Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_82, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_82, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_84));
    }
    {
      parse_tree__write_deps_file__Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_80, 0) = ((MR_Box) ((MR_String) " | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_80, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_82));
    }
    {
      parse_tree__write_deps_file__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_79, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_24));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_79, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_80));
    }
    {
      parse_tree__write_deps_file__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_77, 0) = ((MR_Box) ((MR_String) ".cs) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_77, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_79));
    }
    {
      parse_tree__write_deps_file__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_76, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_76, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_77));
    }
    {
      parse_tree__write_deps_file__Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_74, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_74, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_76));
    }
    {
      parse_tree__write_deps_file__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_72, 0) = ((MR_Box) ((MR_String) ".dirs) | xargs rm -rf \n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_72, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_74));
    }
    {
      parse_tree__write_deps_file__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_71, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_71, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_72));
    }
    {
      parse_tree__write_deps_file__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_69, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_69, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_71));
    }
    {
      parse_tree__write_deps_file__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_67, 0) = ((MR_Box) ((MR_String) " :\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_67, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_69));
    }
    {
      parse_tree__write_deps_file__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_66, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_35));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_66, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_67));
    }
    {
      parse_tree__write_deps_file__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_64, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_64, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_66));
    }
    {
      parse_tree__write_deps_file__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_63, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_35));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_63, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_64));
    }
    {
      parse_tree__write_deps_file__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_60, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_60, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_63));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__Var_60);
    }
    {
      parse_tree__write_deps_file__Var_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_166, 0) = ((MR_Box) (parse_tree__write_deps_file__InitPicObjFileName_26));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_166, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_165, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_25));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_165, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_166));
    }
    {
      parse_tree__write_deps_file__CleanFiles_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__CleanFiles_38, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_24));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__CleanFiles_38, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_165));
    }
    {
      parse_tree__write_deps_file__Var_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_172, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_35));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_168 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_168, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_168, 1) = ((MR_Box) ((MR_String) "clean_local"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_168, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_168, 3) = ((MR_Box) ((MR_String) "clean_local"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_168, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_172));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_168, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__write_deps_file__TypeCtorInfo_405_405 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      parse_tree__write_deps_file__Var_182 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_182, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[4]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_182, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_clean_targets_18_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_182, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_182, 3) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
    }
    {
      parse_tree__write_deps_file__Var_181 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_405_405, parse_tree__write_deps_file__TypeCtorInfo_405_405, parse_tree__write_deps_file__Var_182, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[144]));
    }
    {
      parse_tree__write_deps_file__Var_184 = parse_tree__write_deps_file__remove_files_cmd_1_f_0(parse_tree__write_deps_file__CleanFiles_38);
    }
    {
      parse_tree__write_deps_file__Var_183 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_183, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_184));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_183, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_180 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_405_405, parse_tree__write_deps_file__Var_181, parse_tree__write_deps_file__Var_183);
    }
    {
      parse_tree__write_deps_file__Var_176 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_176, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_176, 1) = ((MR_Box) ((MR_String) "clean_target"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_176, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_176, 3) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_35));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_176, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_176, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_180));
    }
    {
      parse_tree__write_deps_file__Var_175 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_175, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_176));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_175, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__MmakeRulesClean_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeRulesClean_39, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_168));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeRulesClean_39, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_175));
    }
    {
      libs__mmakefiles__gather_mmake_entries_6_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__MmakeRulesClean_39, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_43, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_187_187);
    }
    {
      parse_tree__write_deps_file__Var_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_192, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_36));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_192, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_57));
    }
    {
      parse_tree__write_deps_file__Var_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_189, 0) = ((MR_Box) ((MR_String) "realclean_local : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_189, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_192));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__Var_189);
    }
    {
      parse_tree__write_deps_file__Var_305 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_305, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_305, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[183])));
    }
    {
      parse_tree__write_deps_file__Var_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_303, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_303, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_305));
    }
    {
      parse_tree__write_deps_file__Var_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_301, 0) = ((MR_Box) ((MR_String) ".foreign_dlls) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_301, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_303));
    }
    {
      parse_tree__write_deps_file__Var_300 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_300, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_300, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_301));
    }
    {
      parse_tree__write_deps_file__Var_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_298, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_298, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_300));
    }
    {
      parse_tree__write_deps_file__Var_296 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_296, 0) = ((MR_Box) ((MR_String) ".dlls) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_296, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_298));
    }
    {
      parse_tree__write_deps_file__Var_295 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_295, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_295, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_296));
    }
    {
      parse_tree__write_deps_file__Var_293 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_293, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_293, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_295));
    }
    {
      parse_tree__write_deps_file__Var_291 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_291, 0) = ((MR_Box) ((MR_String) ".all_mihs) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_291, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_293));
    }
    {
      parse_tree__write_deps_file__Var_290 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_290, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_290, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_291));
    }
    {
      parse_tree__write_deps_file__Var_288 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_288, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_288, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_290));
    }
    {
      parse_tree__write_deps_file__Var_286 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_286, 0) = ((MR_Box) ((MR_String) ".all_mhs) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_286, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_288));
    }
    {
      parse_tree__write_deps_file__Var_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_285, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_285, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_286));
    }
    {
      parse_tree__write_deps_file__Var_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_283, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_283, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_285));
    }
    {
      parse_tree__write_deps_file__Var_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_281, 0) = ((MR_Box) ((MR_String) ".module_deps) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_281, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_283));
    }
    {
      parse_tree__write_deps_file__Var_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_280, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_280, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_281));
    }
    {
      parse_tree__write_deps_file__Var_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_278, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_278, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_280));
    }
    {
      parse_tree__write_deps_file__Var_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_276, 0) = ((MR_Box) ((MR_String) ".ds) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_276, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_278));
    }
    {
      parse_tree__write_deps_file__Var_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_275, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_275, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_276));
    }
    {
      parse_tree__write_deps_file__Var_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_273, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_273, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_275));
    }
    {
      parse_tree__write_deps_file__Var_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_271, 0) = ((MR_Box) ((MR_String) ".imdgs) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_271, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_273));
    }
    {
      parse_tree__write_deps_file__Var_270 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_270, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_270, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_271));
    }
    {
      parse_tree__write_deps_file__Var_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_268, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_268, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_270));
    }
    {
      parse_tree__write_deps_file__Var_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_266, 0) = ((MR_Box) ((MR_String) ".requests) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_266, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_268));
    }
    {
      parse_tree__write_deps_file__Var_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_265, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_265, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_266));
    }
    {
      parse_tree__write_deps_file__Var_263 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_263, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_263, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_265));
    }
    {
      parse_tree__write_deps_file__Var_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_261, 0) = ((MR_Box) ((MR_String) ".analysiss) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_261, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_263));
    }
    {
      parse_tree__write_deps_file__Var_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_260, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_260, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_261));
    }
    {
      parse_tree__write_deps_file__Var_258 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_258, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_258, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_260));
    }
    {
      parse_tree__write_deps_file__Var_256 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_256, 0) = ((MR_Box) ((MR_String) ".trans_opts) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_256, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_258));
    }
    {
      parse_tree__write_deps_file__Var_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_255, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_255, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_256));
    }
    {
      parse_tree__write_deps_file__Var_253 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_253, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_253, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_255));
    }
    {
      parse_tree__write_deps_file__Var_251 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_251, 0) = ((MR_Box) ((MR_String) ".opts) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_251, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_253));
    }
    {
      parse_tree__write_deps_file__Var_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_250, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_250, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_251));
    }
    {
      parse_tree__write_deps_file__Var_248 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_248, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_248, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_250));
    }
    {
      parse_tree__write_deps_file__Var_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_246, 0) = ((MR_Box) ((MR_String) ".int3s) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_246, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_248));
    }
    {
      parse_tree__write_deps_file__Var_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_245, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_245, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_246));
    }
    {
      parse_tree__write_deps_file__Var_243 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_243, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_243, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_245));
    }
    {
      parse_tree__write_deps_file__Var_241 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_241, 0) = ((MR_Box) ((MR_String) ".all_int0s) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_241, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_243));
    }
    {
      parse_tree__write_deps_file__Var_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_240, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_240, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_241));
    }
    {
      parse_tree__write_deps_file__Var_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_238, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_238, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_240));
    }
    {
      parse_tree__write_deps_file__Var_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_236, 0) = ((MR_Box) ((MR_String) ".ints) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_236, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_238));
    }
    {
      parse_tree__write_deps_file__Var_235 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_235, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_235, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_236));
    }
    {
      parse_tree__write_deps_file__Var_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_233, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_233, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_235));
    }
    {
      parse_tree__write_deps_file__Var_231 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_231, 0) = ((MR_Box) ((MR_String) ".trans_opt_dates) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_231, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_233));
    }
    {
      parse_tree__write_deps_file__Var_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_230, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_230, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_231));
    }
    {
      parse_tree__write_deps_file__Var_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_228, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_228, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_230));
    }
    {
      parse_tree__write_deps_file__Var_226 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_226, 0) = ((MR_Box) ((MR_String) ".optdates) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_226, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_228));
    }
    {
      parse_tree__write_deps_file__Var_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_225, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_225, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_226));
    }
    {
      parse_tree__write_deps_file__Var_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_223, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_223, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_225));
    }
    {
      parse_tree__write_deps_file__Var_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_221, 0) = ((MR_Box) ((MR_String) ".date3s) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_221, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_223));
    }
    {
      parse_tree__write_deps_file__Var_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_220, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_220, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_221));
    }
    {
      parse_tree__write_deps_file__Var_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_218, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_218, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_220));
    }
    {
      parse_tree__write_deps_file__Var_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_216, 0) = ((MR_Box) ((MR_String) ".date0s) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_216, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_218));
    }
    {
      parse_tree__write_deps_file__Var_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_215, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_215, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_216));
    }
    {
      parse_tree__write_deps_file__Var_213 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_213, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_213, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_215));
    }
    {
      parse_tree__write_deps_file__Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_211, 0) = ((MR_Box) ((MR_String) ".dates) | xargs rm -f\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_211, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_213));
    }
    {
      parse_tree__write_deps_file__Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_210, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_210, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_211));
    }
    {
      parse_tree__write_deps_file__Var_208 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_208, 0) = ((MR_Box) ((MR_String) "\t-echo \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_208, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_210));
    }
    {
      parse_tree__write_deps_file__Var_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_206, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_206, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_208));
    }
    {
      parse_tree__write_deps_file__Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_205, 0) = ((MR_Box) (parse_tree__write_deps_file__CleanTargetName_35));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_205, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_206));
    }
    {
      parse_tree__write_deps_file__Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_203, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_203, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_205));
    }
    {
      parse_tree__write_deps_file__Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_202, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_36));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_202, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_203));
    }
    {
      parse_tree__write_deps_file__Var_200 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_200, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_200, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_202));
    }
    {
      parse_tree__write_deps_file__Var_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_199, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_36));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_199, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_200));
    }
    {
      parse_tree__write_deps_file__Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_196, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_196, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_199));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__Var_196);
    }
    {
      parse_tree__write_deps_file__Var_330 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_330, 0) = ((MR_Box) (parse_tree__write_deps_file__DvFileName_32));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_330, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[170])));
    }
    {
      parse_tree__write_deps_file__Var_328 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_328, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_328, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_330));
    }
    {
      parse_tree__write_deps_file__Var_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_327, 0) = ((MR_Box) (parse_tree__write_deps_file__DepFileName_31));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_327, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_328));
    }
    {
      parse_tree__write_deps_file__Var_325 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_325, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_325, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_327));
    }
    {
      parse_tree__write_deps_file__Var_324 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_324, 0) = ((MR_Box) (parse_tree__write_deps_file__JarFileName_30));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_324, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_325));
    }
    {
      parse_tree__write_deps_file__Var_322 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_322, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_322, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_324));
    }
    {
      parse_tree__write_deps_file__Var_321 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_321, 0) = ((MR_Box) (parse_tree__write_deps_file__SharedLibFileName_29));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_321, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_322));
    }
    {
      parse_tree__write_deps_file__Var_319 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_319, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_319, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_321));
    }
    {
      parse_tree__write_deps_file__Var_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_318, 0) = ((MR_Box) (parse_tree__write_deps_file__LibFileName_28));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_318, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_319));
    }
    {
      parse_tree__write_deps_file__Var_316 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_316, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_316, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_318));
    }
    {
      parse_tree__write_deps_file__Var_315 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_315, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_27));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_315, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_316));
    }
    {
      parse_tree__write_deps_file__Var_313 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_313, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_313, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_315));
    }
    {
      parse_tree__write_deps_file__Var_312 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_312, 0) = ((MR_Box) (parse_tree__write_deps_file__ExeFileName_23));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_312, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_313));
    }
    {
      parse_tree__write_deps_file__Var_309 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_309, 0) = ((MR_Box) ((MR_String) "\t-rm -f "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_309, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_312));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__Var_309);
    }
    {
      parse_tree__write_deps_file__Var_374 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ExeFileName_23, (MR_String) "\044(EXT_FOR_EXE) ");
    }
    {
      parse_tree__write_deps_file__Var_381 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_381, 0) = ((MR_Box) (parse_tree__write_deps_file__DvFileName_32));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_381, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_380 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_380, 0) = ((MR_Box) (parse_tree__write_deps_file__DepFileName_31));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_380, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_381));
    }
    {
      parse_tree__write_deps_file__Var_379 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_379, 0) = ((MR_Box) (parse_tree__write_deps_file__JarFileName_30));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_379, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_380));
    }
    {
      parse_tree__write_deps_file__Var_378 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_378, 0) = ((MR_Box) (parse_tree__write_deps_file__SharedLibFileName_29));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_378, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_379));
    }
    {
      parse_tree__write_deps_file__Var_377 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_377, 0) = ((MR_Box) (parse_tree__write_deps_file__LibFileName_28));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_377, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_378));
    }
    {
      parse_tree__write_deps_file__Var_376 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_376, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_27));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_376, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_377));
    }
    {
      parse_tree__write_deps_file__RealCleanFiles_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__RealCleanFiles_41, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_374));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__RealCleanFiles_41, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_376));
    }
    {
      parse_tree__write_deps_file__Var_387 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_387, 0) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_36));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_387, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_383 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_383, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_383, 1) = ((MR_Box) ((MR_String) "realclean_local"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_383, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_383, 3) = ((MR_Box) ((MR_String) "realclean_local"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_383, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_387));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_383, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_397 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_405_405, parse_tree__write_deps_file__TypeCtorInfo_405_405, parse_tree__write_deps_file__Var_182, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[164]));
    }
    {
      parse_tree__write_deps_file__Var_400 = parse_tree__write_deps_file__remove_files_cmd_1_f_0(parse_tree__write_deps_file__RealCleanFiles_41);
    }
    {
      parse_tree__write_deps_file__Var_399 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_399, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_400));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_399, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_396 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_405_405, parse_tree__write_deps_file__Var_397, parse_tree__write_deps_file__Var_399);
    }
    {
      parse_tree__write_deps_file__Var_391 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_391, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_391, 1) = ((MR_Box) ((MR_String) "realclean_target"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_391, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_391, 3) = ((MR_Box) (parse_tree__write_deps_file__RealCleanTargetName_36));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_391, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_172));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_391, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_396));
    }
    {
      parse_tree__write_deps_file__Var_390 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_390, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_391));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_390, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__MmakeRulesRealClean_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeRulesRealClean_42, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_383));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeRulesRealClean_42, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_390));
    }
    {
      libs__mmakefiles__gather_mmake_entries_6_p_0(parse_tree__write_deps_file__DepStream_20, parse_tree__write_deps_file__MmakeRulesRealClean_42, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_187_187, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_44);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_target_9_p_0(
  MR_Word parse_tree__write_deps_file__Globals_10,
  MR_Word parse_tree__write_deps_file__DepStream_11,
  MR_Word parse_tree__write_deps_file__ModuleName_12,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_13,
  MR_Word parse_tree__write_deps_file__HeadVar__5_5,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_21,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_22)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_String parse_tree__write_deps_file__Extension_14 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 0)));
    MR_String parse_tree__write_deps_file__VarExtension_15 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__HeadVar__5_5, (MR_Integer) 1)));
    MR_String parse_tree__write_deps_file__TargetName_18;
    MR_String parse_tree__write_deps_file__Source_19;
    MR_Word parse_tree__write_deps_file__MmakeRule_20;
    MR_Word parse_tree__write_deps_file__Var_27;
    MR_Word parse_tree__write_deps_file__Var_30;
    MR_Word parse_tree__write_deps_file__Var_31;
    MR_Word parse_tree__write_deps_file__Var_33;
    MR_Word parse_tree__write_deps_file__Var_34;
    MR_Word parse_tree__write_deps_file__Var_36;
    MR_Word parse_tree__write_deps_file__Var_37;
    MR_String parse_tree__write_deps_file__Var_47;
    MR_String parse_tree__write_deps_file__Var_49;
    MR_Word parse_tree__write_deps_file__Var_51;
    MR_String parse_tree__write_deps_file__Var_57;
    MR_String parse_tree__write_deps_file__Var_58;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_10, (MR_Integer) 1, parse_tree__write_deps_file__Extension_14, parse_tree__write_deps_file__ModuleName_12, &parse_tree__write_deps_file__TargetName_18);
    }
    {
      parse_tree__write_deps_file__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_37, 0) = ((MR_Box) (parse_tree__write_deps_file__VarExtension_15));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[182])));
    }
    {
      parse_tree__write_deps_file__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_36, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_13));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_36, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_37));
    }
    {
      parse_tree__write_deps_file__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_34, 0) = ((MR_Box) ((MR_String) " : \044("));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_34, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_36));
    }
    {
      parse_tree__write_deps_file__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_33, 0) = ((MR_Box) (parse_tree__write_deps_file__TargetName_18));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_33, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_34));
    }
    {
      parse_tree__write_deps_file__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_31, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_31, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_33));
    }
    {
      parse_tree__write_deps_file__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_30, 0) = ((MR_Box) (parse_tree__write_deps_file__TargetName_18));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_30, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_31));
    }
    {
      parse_tree__write_deps_file__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_27, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_27, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_30));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_11, parse_tree__write_deps_file__Var_27);
    }
    {
      parse_tree__write_deps_file__Var_57 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__VarExtension_15, (MR_String) ")");
    }
    {
      parse_tree__write_deps_file__Var_58 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_13, parse_tree__write_deps_file__Var_57);
    }
    {
      parse_tree__write_deps_file__Source_19 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_58);
    }
    {
      parse_tree__write_deps_file__Var_49 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__Extension_14, parse_tree__write_deps_file__VarExtension_15);
    }
    {
      parse_tree__write_deps_file__Var_47 = mercury__string__f_43_43_2_f_0((MR_String) "collective_target_", parse_tree__write_deps_file__Var_49);
    }
    {
      parse_tree__write_deps_file__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_51, 0) = ((MR_Box) (parse_tree__write_deps_file__Source_19));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__MmakeRule_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRule_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRule_20, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_47));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRule_20, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRule_20, 3) = ((MR_Box) (parse_tree__write_deps_file__TargetName_18));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRule_20, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_51));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRule_20, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_11, parse_tree__write_deps_file__MmakeRule_20, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_21, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_22);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_8_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box parse_tree__write_deps_file__wrapper_arg_4,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_5)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_Word parse_tree__write_deps_file__conv0_STATE_VARIABLE_MmakeFile_22;

    {
      parse_tree__write_deps_file__generate_dep_file_collective_target_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_2), &parse_tree__write_deps_file__conv0_STATE_VARIABLE_MmakeFile_22);
    }
    *parse_tree__write_deps_file__wrapper_arg_3 = ((MR_Box) (parse_tree__write_deps_file__conv0_STATE_VARIABLE_MmakeFile_22));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_collective_targets_8_p_0(
  MR_Word parse_tree__write_deps_file__Globals_9,
  MR_Word parse_tree__write_deps_file__DepStream_10,
  MR_Word parse_tree__write_deps_file__ModuleName_11,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_12,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_15,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_16)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__Var_19;
    MR_Box parse_tree__write_deps_file__conv2_STATE_VARIABLE_MmakeFile_16;
    MR_Box parse_tree__write_deps_file__conv1_STATE_VARIABLE_IO_18;

    {
      parse_tree__write_deps_file__Var_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_19, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_11[0]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_19, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dep_file_collective_targets_8_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_19, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_9));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_19, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_10));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_19, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_11));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_19, 6) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_12));
    }
    {
      mercury__list__foldl2_6_p_2((MR_Word) &parse_tree__write_deps_file_scalar_common_2[3], (MR_Word) &parse_tree__write_deps_file_scalar_common_1[5], (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Var_19, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[131]), ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_15)), &parse_tree__write_deps_file__conv2_STATE_VARIABLE_MmakeFile_16, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv1_STATE_VARIABLE_IO_18);
    }
    *parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_16 = ((MR_Word) parse_tree__write_deps_file__conv2_STATE_VARIABLE_MmakeFile_16);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_1(
  void * parse_tree__write_deps_file__env_ptr_arg)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

    MR_builtin_longjmp((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_3(
  void * parse_tree__write_deps_file__env_ptr_arg)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

    (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__Var_43 = ((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__conv1_Var_43);
    (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__Var_91 = ((MR_Word) (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__conv0_Var_91);
    {
      parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_2(parse_tree__write_deps_file__env_ptr);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_2(
  void * parse_tree__write_deps_file__env_ptr_arg)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

    {
      MR_Word parse_tree__write_deps_file__Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__Var_91, (MR_Integer) 0)));
      MR_String parse_tree__write_deps_file__Var_626;
      MR_Word parse_tree__write_deps_file__Var_627;
      MR_Word parse_tree__write_deps_file__Var_628;
      MR_Word parse_tree__write_deps_file__Var_629;
      MR_Word parse_tree__write_deps_file__Var_630;
      MR_Word parse_tree__write_deps_file__Var_631;
      MR_Word parse_tree__write_deps_file__Var_632;
      MR_Word parse_tree__write_deps_file__Var_633;
      MR_Word parse_tree__write_deps_file__Var_634;
      MR_Word parse_tree__write_deps_file__Var_635;
      MR_Word parse_tree__write_deps_file__Var_636;
      MR_Word parse_tree__write_deps_file__Var_637;
      MR_Word parse_tree__write_deps_file__Var_638;
      MR_Word parse_tree__write_deps_file__Var_639;
      MR_Word parse_tree__write_deps_file__Var_640;
      MR_Word parse_tree__write_deps_file__Var_641;
      MR_Word parse_tree__write_deps_file__Var_642;
      MR_Word parse_tree__write_deps_file__Var_643;
      MR_Word parse_tree__write_deps_file__Var_644;
      MR_Word parse_tree__write_deps_file__Var_645;
      MR_Word parse_tree__write_deps_file__Var_646;
      MR_Word parse_tree__write_deps_file__Var_647;
      MR_Word parse_tree__write_deps_file__Var_648;
      MR_Word parse_tree__write_deps_file__Var_649;
      MR_Word parse_tree__write_deps_file__Var_650;
      MR_String parse_tree__write_deps_file__Var_651;

      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__Var_91, (MR_Integer) 1)));
      parse_tree__write_deps_file__Var_626 = ((MR_String) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 0)));
      parse_tree__write_deps_file__Var_627 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 1)));
      parse_tree__write_deps_file__Var_628 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 2)));
      parse_tree__write_deps_file__Var_629 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 3)));
      parse_tree__write_deps_file__Var_630 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 4)));
      parse_tree__write_deps_file__Var_631 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 5)));
      parse_tree__write_deps_file__Var_632 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 6)));
      parse_tree__write_deps_file__Var_633 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 7)));
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__Var_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 8)));
      parse_tree__write_deps_file__Var_634 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 9)));
      parse_tree__write_deps_file__Var_635 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 10)));
      parse_tree__write_deps_file__Var_636 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 11)));
      parse_tree__write_deps_file__Var_637 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 12)));
      parse_tree__write_deps_file__Var_638 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 13)));
      parse_tree__write_deps_file__Var_639 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 14)));
      parse_tree__write_deps_file__Var_640 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 15)));
      parse_tree__write_deps_file__Var_641 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 16)));
      parse_tree__write_deps_file__Var_642 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 17)));
      parse_tree__write_deps_file__Var_643 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 18)));
      parse_tree__write_deps_file__Var_644 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 19)));
      parse_tree__write_deps_file__Var_645 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 20)));
      parse_tree__write_deps_file__Var_646 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 21)));
      parse_tree__write_deps_file__Var_647 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 22)));
      parse_tree__write_deps_file__Var_648 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 23)));
      parse_tree__write_deps_file__Var_649 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 24)));
      parse_tree__write_deps_file__Var_650 = ((MR_Word) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 25)));
      parse_tree__write_deps_file__Var_651 = ((MR_String) (MR_hl_field(MR_mktag(0), (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__ModuleAndImports_625, (MR_Integer) 26)));
      {
        (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__succeeded = mercury__set__non_empty_1_p_0((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__TypeCtorInfo_652_652, (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__Var_92);
      }
      if ((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__succeeded)
        {
          parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_1(parse_tree__write_deps_file__env_ptr);
        }
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_4(
  void * parse_tree__write_deps_file__env_ptr_arg)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0_s * parse_tree__write_deps_file__env_ptr = (struct parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0_s *) parse_tree__write_deps_file__env_ptr_arg;

    if (MR_builtin_setjmp((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__commit_0) == 0)
      {
        {
          (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__TypeCtorInfo_652_652 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
          {
            mercury__map__member_3_p_0((parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__TypeCtorInfo_652_652, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__DepsMap_19, &(parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__conv1_Var_43, &(parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__conv0_Var_91, parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_3, parse_tree__write_deps_file__env_ptr);
          }
        }
        (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (parse_tree__write_deps_file__env_ptr)->parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0(
  MR_Word parse_tree__write_deps_file__Globals_16,
  MR_Word parse_tree__write_deps_file__DepStream_17,
  MR_Word parse_tree__write_deps_file__ModuleName_18,
  MR_Word parse_tree__write_deps_file__DepsMap_19,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_20,
  MR_Word parse_tree__write_deps_file__MmcMakeDeps_21,
  MR_Word parse_tree__write_deps_file__Intermod_22,
  MR_Word parse_tree__write_deps_file__TransOpt_23,
  MR_Word parse_tree__write_deps_file__MaybeModuleDepsVarPair_24,
  MR_Word parse_tree__write_deps_file__MaybeOptsVarPair_25,
  MR_Word parse_tree__write_deps_file__MaybeTransOptsVarPair_26,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_65,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_66)
{
  {
    struct parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0_s parse_tree__write_deps_file__env;

    (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__DepsMap_19 = parse_tree__write_deps_file__DepsMap_19;
    {
      MR_Word parse_tree__write_deps_file__TypeCtorInfo_654_654;
      MR_Word parse_tree__write_deps_file__MaybeOptsVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MaybeOptsVarPair_25, (MR_Integer) 0)));
      MR_String parse_tree__write_deps_file__MaybeOptsVarSpace_30 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MaybeOptsVarPair_25, (MR_Integer) 1)));
      MR_Word parse_tree__write_deps_file__MaybeTransOptsVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MaybeTransOptsVarPair_26, (MR_Integer) 0)));
      MR_String parse_tree__write_deps_file__MaybeTransOptsVarSpace_32 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MaybeTransOptsVarPair_26, (MR_Integer) 1)));
      MR_Word parse_tree__write_deps_file__MaybeModuleDepsVar_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MaybeModuleDepsVarPair_24, (MR_Integer) 0)));
      MR_String parse_tree__write_deps_file__MaybeModuleDepsVarSpace_34 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MaybeModuleDepsVarPair_24, (MR_Integer) 1)));
      MR_String parse_tree__write_deps_file__LibInstallIntsTargetName_35;
      MR_String parse_tree__write_deps_file__LibInstallOptsTargetName_36;
      MR_String parse_tree__write_deps_file__LibInstallHdrsTargetName_37;
      MR_String parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_38;
      MR_String parse_tree__write_deps_file__ModuleMakeVarNameInts_39;
      MR_String parse_tree__write_deps_file__ModuleMakeVarNameInt3s_40;
      MR_String parse_tree__write_deps_file__MaybeSpaceOptStr_41;
      MR_String parse_tree__write_deps_file__SpaceInt0Str_45;
      MR_String parse_tree__write_deps_file__MaybeModuleVarNameInt0sSpace_47;
      MR_Word parse_tree__write_deps_file__MaybeModuleVarNameInt0s_48;
      MR_String parse_tree__write_deps_file__MaybeSpaceTransOptStr_49;
      MR_String parse_tree__write_deps_file__MaybeSpaceDepStr_50;
      MR_String parse_tree__write_deps_file__LibInstallIntsFiles_51;
      MR_Word parse_tree__write_deps_file__MmakeRuleLibInstallInts_52;
      MR_Word parse_tree__write_deps_file__LibInstallOptsSources_53;
      MR_Word parse_tree__write_deps_file__LibInstallOptsActions_54;
      MR_Word parse_tree__write_deps_file__MmakeRuleLibInstallOpts_56;
      MR_String parse_tree__write_deps_file__ModuleMakeVarNameMhs_57;
      MR_Word parse_tree__write_deps_file__MmakeRuleLibInstallHdrsNoMhs_58;
      MR_Word parse_tree__write_deps_file__MmakeRuleLibInstallHdrsMhs_59;
      MR_Word parse_tree__write_deps_file__MmakeFragmentLibInstallHdrs_60;
      MR_String parse_tree__write_deps_file__ModuleMakeVarNameMihs_61;
      MR_Word parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsNoMihs_62;
      MR_Word parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsMihs_63;
      MR_Word parse_tree__write_deps_file__MmakeFragmentLibInstallGradeHdrs_64;
      MR_String parse_tree__write_deps_file__Var_86;
      MR_String parse_tree__write_deps_file__Var_89;
      MR_String parse_tree__write_deps_file__Var_99;
      MR_String parse_tree__write_deps_file__Var_100;
      MR_String parse_tree__write_deps_file__Var_102;
      MR_String parse_tree__write_deps_file__Var_103;
      MR_String parse_tree__write_deps_file__Var_105;
      MR_String parse_tree__write_deps_file__Var_106;
      MR_String parse_tree__write_deps_file__Var_107;
      MR_String parse_tree__write_deps_file__Var_108;
      MR_Word parse_tree__write_deps_file__Var_110;
      MR_Word parse_tree__write_deps_file__Var_113;
      MR_Word parse_tree__write_deps_file__Var_114;
      MR_Word parse_tree__write_deps_file__Var_116;
      MR_Word parse_tree__write_deps_file__Var_117;
      MR_Word parse_tree__write_deps_file__Var_119;
      MR_Word parse_tree__write_deps_file__Var_120;
      MR_Word parse_tree__write_deps_file__Var_122;
      MR_Word parse_tree__write_deps_file__Var_123;
      MR_Word parse_tree__write_deps_file__Var_125;
      MR_Word parse_tree__write_deps_file__Var_126;
      MR_Word parse_tree__write_deps_file__Var_127;
      MR_Word parse_tree__write_deps_file__Var_128;
      MR_Word parse_tree__write_deps_file__Var_129;
      MR_Word parse_tree__write_deps_file__Var_131;
      MR_Word parse_tree__write_deps_file__Var_133;
      MR_Word parse_tree__write_deps_file__Var_134;
      MR_Word parse_tree__write_deps_file__Var_136;
      MR_Word parse_tree__write_deps_file__Var_138;
      MR_Word parse_tree__write_deps_file__Var_140;
      MR_Word parse_tree__write_deps_file__Var_142;
      MR_Word parse_tree__write_deps_file__Var_144;
      MR_Word parse_tree__write_deps_file__Var_146;
      MR_Word parse_tree__write_deps_file__Var_148;
      MR_Word parse_tree__write_deps_file__Var_150;
      MR_Word parse_tree__write_deps_file__Var_152;
      MR_Word parse_tree__write_deps_file__Var_154;
      MR_Word parse_tree__write_deps_file__Var_156;
      MR_Word parse_tree__write_deps_file__Var_158;
      MR_Word parse_tree__write_deps_file__Var_160;
      MR_Word parse_tree__write_deps_file__Var_162;
      MR_Word parse_tree__write_deps_file__Var_163;
      MR_Word parse_tree__write_deps_file__Var_164;
      MR_Word parse_tree__write_deps_file__Var_165;
      MR_Word parse_tree__write_deps_file__Var_187;
      MR_Word parse_tree__write_deps_file__Var_188;
      MR_Word parse_tree__write_deps_file__Var_189;
      MR_Word parse_tree__write_deps_file__Var_191;
      MR_Word parse_tree__write_deps_file__Var_192;
      MR_Word parse_tree__write_deps_file__Var_193;
      MR_Word parse_tree__write_deps_file__Var_194;
      MR_Word parse_tree__write_deps_file__Var_195;
      MR_Word parse_tree__write_deps_file__Var_198;
      MR_String parse_tree__write_deps_file__Var_199;
      MR_String parse_tree__write_deps_file__Var_201;
      MR_Word parse_tree__write_deps_file__Var_203;
      MR_Word parse_tree__write_deps_file__Var_205;
      MR_Word parse_tree__write_deps_file__Var_207;
      MR_Word parse_tree__write_deps_file__Var_209;
      MR_Word parse_tree__write_deps_file__Var_211;
      MR_Word parse_tree__write_deps_file__Var_213;
      MR_Word parse_tree__write_deps_file__Var_215;
      MR_Word parse_tree__write_deps_file__Var_217;
      MR_Word parse_tree__write_deps_file__Var_219;
      MR_Word parse_tree__write_deps_file__Var_221;
      MR_Word parse_tree__write_deps_file__Var_223;
      MR_Word parse_tree__write_deps_file__Var_225;
      MR_Word parse_tree__write_deps_file__Var_227;
      MR_String parse_tree__write_deps_file__Var_228;
      MR_String parse_tree__write_deps_file__Var_230;
      MR_String parse_tree__write_deps_file__Var_231;
      MR_String parse_tree__write_deps_file__Var_232;
      MR_String parse_tree__write_deps_file__Var_233;
      MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_252_252;
      MR_Word parse_tree__write_deps_file__Var_254;
      MR_Word parse_tree__write_deps_file__Var_257;
      MR_Word parse_tree__write_deps_file__Var_258;
      MR_Word parse_tree__write_deps_file__Var_260;
      MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_395_395;
      MR_Word parse_tree__write_deps_file__Var_397;
      MR_Word parse_tree__write_deps_file__Var_400;
      MR_Word parse_tree__write_deps_file__Var_401;
      MR_Word parse_tree__write_deps_file__Var_403;
      MR_Word parse_tree__write_deps_file__Var_404;
      MR_Word parse_tree__write_deps_file__Var_406;
      MR_Word parse_tree__write_deps_file__Var_408;
      MR_Word parse_tree__write_deps_file__Var_409;
      MR_Word parse_tree__write_deps_file__Var_411;
      MR_Word parse_tree__write_deps_file__Var_413;
      MR_Word parse_tree__write_deps_file__Var_415;
      MR_Word parse_tree__write_deps_file__Var_416;
      MR_Word parse_tree__write_deps_file__Var_418;
      MR_Word parse_tree__write_deps_file__Var_420;
      MR_Word parse_tree__write_deps_file__Var_422;
      MR_Word parse_tree__write_deps_file__Var_424;
      MR_Word parse_tree__write_deps_file__Var_442;
      MR_Word parse_tree__write_deps_file__Var_446;
      MR_String parse_tree__write_deps_file__Var_447;
      MR_Word parse_tree__write_deps_file__Var_455;
      MR_String parse_tree__write_deps_file__Var_456;
      MR_String parse_tree__write_deps_file__Var_458;
      MR_Word parse_tree__write_deps_file__Var_467;
      MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_469_469;
      MR_Word parse_tree__write_deps_file__Var_471;
      MR_Word parse_tree__write_deps_file__Var_474;
      MR_Word parse_tree__write_deps_file__Var_475;
      MR_Word parse_tree__write_deps_file__Var_477;
      MR_Word parse_tree__write_deps_file__Var_478;
      MR_Word parse_tree__write_deps_file__Var_480;
      MR_Word parse_tree__write_deps_file__Var_482;
      MR_Word parse_tree__write_deps_file__Var_483;
      MR_Word parse_tree__write_deps_file__Var_485;
      MR_Word parse_tree__write_deps_file__Var_487;
      MR_Word parse_tree__write_deps_file__Var_489;
      MR_Word parse_tree__write_deps_file__Var_490;
      MR_Word parse_tree__write_deps_file__Var_492;
      MR_Word parse_tree__write_deps_file__Var_494;
      MR_Word parse_tree__write_deps_file__Var_496;
      MR_Word parse_tree__write_deps_file__Var_498;
      MR_Word parse_tree__write_deps_file__Var_556;
      MR_Word parse_tree__write_deps_file__Var_560;
      MR_String parse_tree__write_deps_file__Var_561;
      MR_Word parse_tree__write_deps_file__Var_569;
      MR_String parse_tree__write_deps_file__Var_570;
      MR_String parse_tree__write_deps_file__Var_572;
      MR_Word parse_tree__write_deps_file__Var_621;
      MR_String parse_tree__write_deps_file__Var_656;
      MR_String parse_tree__write_deps_file__Var_659;

      {
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_16, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_18, (MR_String) ".install_ints", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallIntsTargetName_35);
      }
      {
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_16, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_18, (MR_String) ".install_opts", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallOptsTargetName_36);
      }
      {
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_16, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_18, (MR_String) ".install_hdrs", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallHdrsTargetName_37);
      }
      {
        parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_16, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_18, (MR_String) ".install_grade_hdrs", (MR_Integer) 1, &parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_38);
      }
      {
        parse_tree__write_deps_file__Var_86 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_20, (MR_String) ".ints)");
      }
      {
        parse_tree__write_deps_file__ModuleMakeVarNameInts_39 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_86);
      }
      {
        parse_tree__write_deps_file__Var_89 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_20, (MR_String) ".int3s)");
      }
      {
        parse_tree__write_deps_file__ModuleMakeVarNameInt3s_40 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_89);
      }
      switch (parse_tree__write_deps_file__Intermod_22) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          parse_tree__write_deps_file__MaybeSpaceOptStr_41 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          parse_tree__write_deps_file__MaybeSpaceOptStr_41 = (MR_String) " opt";
          break;
      }
      (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__succeeded = (parse_tree__write_deps_file__Intermod_22 == (MR_Integer) 1);
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__succeeded)
        {
          parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_4(&parse_tree__write_deps_file__env);
        }
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__succeeded)
        {
          MR_String parse_tree__write_deps_file__ModuleVarNameInt0s_46;
          MR_String parse_tree__write_deps_file__Var_94;

          parse_tree__write_deps_file__SpaceInt0Str_45 = (MR_String) " int0";
          {
            parse_tree__write_deps_file__Var_94 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_20, (MR_String) ".int0s)");
          }
          {
            parse_tree__write_deps_file__ModuleVarNameInt0s_46 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_94);
          }
          {
            parse_tree__write_deps_file__MaybeModuleVarNameInt0sSpace_47 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleVarNameInt0s_46, (MR_String) " ");
          }
          {
            parse_tree__write_deps_file__MaybeModuleVarNameInt0s_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeModuleVarNameInt0s_48, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleVarNameInt0s_46));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeModuleVarNameInt0s_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
      else
        {
          parse_tree__write_deps_file__SpaceInt0Str_45 = (MR_String) "";
          parse_tree__write_deps_file__MaybeModuleVarNameInt0sSpace_47 = (MR_String) "";
          parse_tree__write_deps_file__MaybeModuleVarNameInt0s_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
      switch (parse_tree__write_deps_file__TransOpt_23) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          parse_tree__write_deps_file__MaybeSpaceTransOptStr_49 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          parse_tree__write_deps_file__MaybeSpaceTransOptStr_49 = (MR_String) " trans_opt";
          break;
      }
      switch (parse_tree__write_deps_file__MmcMakeDeps_21) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          parse_tree__write_deps_file__MaybeSpaceDepStr_50 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          parse_tree__write_deps_file__MaybeSpaceDepStr_50 = (MR_String) " module_dep";
          break;
      }
      {
        parse_tree__write_deps_file__Var_108 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MaybeModuleDepsVarSpace_34, (MR_String) "\"");
      }
      {
        parse_tree__write_deps_file__Var_107 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MaybeTransOptsVarSpace_32, parse_tree__write_deps_file__Var_108);
      }
      {
        parse_tree__write_deps_file__Var_106 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MaybeOptsVarSpace_30, parse_tree__write_deps_file__Var_107);
      }
      {
        parse_tree__write_deps_file__Var_105 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MaybeModuleVarNameInt0sSpace_47, parse_tree__write_deps_file__Var_106);
      }
      {
        parse_tree__write_deps_file__Var_103 = mercury__string__f_43_43_2_f_0((MR_String) " ", parse_tree__write_deps_file__Var_105);
      }
      {
        parse_tree__write_deps_file__Var_102 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarNameInt3s_40, parse_tree__write_deps_file__Var_103);
      }
      {
        parse_tree__write_deps_file__Var_100 = mercury__string__f_43_43_2_f_0((MR_String) " ", parse_tree__write_deps_file__Var_102);
      }
      {
        parse_tree__write_deps_file__Var_99 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarNameInts_39, parse_tree__write_deps_file__Var_100);
      }
      {
        parse_tree__write_deps_file__LibInstallIntsFiles_51 = mercury__string__f_43_43_2_f_0((MR_String) "\"", parse_tree__write_deps_file__Var_99);
      }
      {
        parse_tree__write_deps_file__Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_165, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeSpaceDepStr_50));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_165, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[33])));
      }
      {
        parse_tree__write_deps_file__Var_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_164, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeSpaceTransOptStr_49));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_164, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_165));
      }
      {
        parse_tree__write_deps_file__Var_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_163, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeSpaceOptStr_41));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_163, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_164));
      }
      {
        parse_tree__write_deps_file__Var_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_162, 0) = ((MR_Box) (parse_tree__write_deps_file__SpaceInt0Str_45));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_162, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_163));
      }
      {
        parse_tree__write_deps_file__Var_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_160, 0) = ((MR_Box) ((MR_String) "\tfor ext in int int2 int3"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_160, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_162));
      }
      {
        parse_tree__write_deps_file__Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_158, 0) = ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_158, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_160));
      }
      {
        parse_tree__write_deps_file__Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_156, 0) = ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails, then we just use\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_156, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_158));
      }
      {
        parse_tree__write_deps_file__Var_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_154, 0) = ((MR_Box) ((MR_String) "\t# The following is needed to support the \140--use-subdirs\' option\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_154, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_156));
      }
      {
        parse_tree__write_deps_file__Var_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_152, 0) = ((MR_Box) ((MR_String) "\tdone\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_152, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_154));
      }
      {
        parse_tree__write_deps_file__Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_150, 0) = ((MR_Box) ((MR_String) "\t\tfi; \\\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_150, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_152));
      }
      {
        parse_tree__write_deps_file__Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_148, 0) = ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_148, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_150));
      }
      {
        parse_tree__write_deps_file__Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_146, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"installing \044\044target\"; \\\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_146, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_148));
      }
      {
        parse_tree__write_deps_file__Var_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_144, 0) = ((MR_Box) ((MR_String) "\t\telse \\\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_144, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_146));
      }
      {
        parse_tree__write_deps_file__Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_142, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"\044\044target unchanged\"; \\\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_142, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_144));
      }
      {
        parse_tree__write_deps_file__Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_140, 0) = ((MR_Box) ((MR_String) "\t\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_140, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_142));
      }
      {
        parse_tree__write_deps_file__Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_138, 0) = ((MR_Box) ((MR_String) "\t\ttarget=\"\044(INSTALL_INT_DIR)/\140basename \044\044file\140\"; \\\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_138, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_140));
      }
      {
        parse_tree__write_deps_file__Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_136, 0) = ((MR_Box) ((MR_String) "\tfor file in \044\044files; do \\\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_136, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_138));
      }
      {
        parse_tree__write_deps_file__Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_134, 0) = ((MR_Box) ((MR_String) "; \\\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_134, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_136));
      }
      {
        parse_tree__write_deps_file__Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_133, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallIntsFiles_51));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_133, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_134));
      }
      {
        parse_tree__write_deps_file__Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_131, 0) = ((MR_Box) ((MR_String) "\tfiles="));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_131, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_133));
      }
      {
        parse_tree__write_deps_file__Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_129, 0) = ((MR_Box) ((MR_String) " install_lib_dirs\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_129, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_131));
      }
      {
        parse_tree__write_deps_file__Var_128 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_128, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeModuleDepsVarSpace_34));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_128, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_129));
      }
      {
        parse_tree__write_deps_file__Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_127, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVarSpace_32));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_127, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_128));
      }
      {
        parse_tree__write_deps_file__Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_126, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVarSpace_30));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_126, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_127));
      }
      {
        parse_tree__write_deps_file__Var_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_125, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeModuleVarNameInt0sSpace_47));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_125, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_126));
      }
      {
        parse_tree__write_deps_file__Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_123, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_123, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_125));
      }
      {
        parse_tree__write_deps_file__Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_122, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameInt3s_40));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_122, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_123));
      }
      {
        parse_tree__write_deps_file__Var_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_120, 0) = ((MR_Box) ((MR_String) " "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_120, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_122));
      }
      {
        parse_tree__write_deps_file__Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_119, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameInts_39));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_119, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_120));
      }
      {
        parse_tree__write_deps_file__Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_117, 0) = ((MR_Box) ((MR_String) " : "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_117, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_119));
      }
      {
        parse_tree__write_deps_file__Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_116, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallIntsTargetName_35));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_116, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_117));
      }
      {
        parse_tree__write_deps_file__Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_114, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_114, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_116));
      }
      {
        parse_tree__write_deps_file__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_113, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallIntsTargetName_35));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_113, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_114));
      }
      {
        parse_tree__write_deps_file__Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_110, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_110, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_113));
      }
      {
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_17, parse_tree__write_deps_file__Var_110);
      }
      parse_tree__write_deps_file__TypeCtorInfo_654_654 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
      {
        parse_tree__write_deps_file__Var_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_189, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameInt3s_40));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_189, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_188, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameInts_39));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_188, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_189));
      }
      parse_tree__write_deps_file__Var_195 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[180]);
      {
        parse_tree__write_deps_file__Var_194 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_654_654, parse_tree__write_deps_file__MaybeModuleDepsVar_33, parse_tree__write_deps_file__Var_195);
      }
      {
        parse_tree__write_deps_file__Var_193 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_654_654, parse_tree__write_deps_file__MaybeTransOptsVar_31, parse_tree__write_deps_file__Var_194);
      }
      {
        parse_tree__write_deps_file__Var_192 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_654_654, parse_tree__write_deps_file__MaybeOptsVar_29, parse_tree__write_deps_file__Var_193);
      }
      {
        parse_tree__write_deps_file__Var_191 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_654_654, parse_tree__write_deps_file__MaybeModuleVarNameInt0s_48, parse_tree__write_deps_file__Var_192);
      }
      {
        parse_tree__write_deps_file__Var_187 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_654_654, parse_tree__write_deps_file__Var_188, parse_tree__write_deps_file__Var_191);
      }
      {
        parse_tree__write_deps_file__Var_201 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__LibInstallIntsFiles_51, (MR_String) "; \\");
      }
      {
        parse_tree__write_deps_file__Var_199 = mercury__string__f_43_43_2_f_0((MR_String) "files=", parse_tree__write_deps_file__Var_201);
      }
      {
        parse_tree__write_deps_file__Var_233 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MaybeSpaceDepStr_50, (MR_String) "; do \\");
      }
      {
        parse_tree__write_deps_file__Var_232 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MaybeSpaceTransOptStr_49, parse_tree__write_deps_file__Var_233);
      }
      {
        parse_tree__write_deps_file__Var_231 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MaybeSpaceOptStr_41, parse_tree__write_deps_file__Var_232);
      }
      {
        parse_tree__write_deps_file__Var_230 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__SpaceInt0Str_45, parse_tree__write_deps_file__Var_231);
      }
      {
        parse_tree__write_deps_file__Var_228 = mercury__string__f_43_43_2_f_0((MR_String) "for ext in int int2 int3", parse_tree__write_deps_file__Var_230);
      }
      {
        parse_tree__write_deps_file__Var_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_227, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_228));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_227, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[41])));
      }
      {
        parse_tree__write_deps_file__Var_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_225, 0) = ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'."));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_225, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_227));
      }
      {
        parse_tree__write_deps_file__Var_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_223, 0) = ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_223, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_225));
      }
      {
        parse_tree__write_deps_file__Var_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_221, 0) = ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option."));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_221, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_223));
      }
      {
        parse_tree__write_deps_file__Var_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_219, 0) = ((MR_Box) ((MR_String) "done"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_219, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_221));
      }
      {
        parse_tree__write_deps_file__Var_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_217, 0) = ((MR_Box) ((MR_String) "\tfi; \\"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_217, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_219));
      }
      {
        parse_tree__write_deps_file__Var_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_215, 0) = ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_215, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_217));
      }
      {
        parse_tree__write_deps_file__Var_213 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_213, 0) = ((MR_Box) ((MR_String) "\t\techo \"installing \044\044target\"; \\"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_213, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_215));
      }
      {
        parse_tree__write_deps_file__Var_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_211, 0) = ((MR_Box) ((MR_String) "\telse \\"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_211, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_213));
      }
      {
        parse_tree__write_deps_file__Var_209 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_209, 0) = ((MR_Box) ((MR_String) "\t\techo \"\044\044target unchanged\"; \\"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_209, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_211));
      }
      {
        parse_tree__write_deps_file__Var_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_207, 0) = ((MR_Box) ((MR_String) "\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_207, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_209));
      }
      {
        parse_tree__write_deps_file__Var_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_205, 0) = ((MR_Box) ((MR_String) "\ttarget=\"\044(INSTALL_INT_DIR)/\140basename \044\044file\140\"; \\"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_205, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_207));
      }
      {
        parse_tree__write_deps_file__Var_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_203, 0) = ((MR_Box) ((MR_String) "for file in \044\044files; do \\"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_203, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_205));
      }
      {
        parse_tree__write_deps_file__Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_198, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_199));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_198, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_203));
      }
      {
        parse_tree__write_deps_file__MmakeRuleLibInstallInts_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallInts_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallInts_52, 1) = ((MR_Box) ((MR_String) "lib_install_ints"));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallInts_52, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallInts_52, 3) = ((MR_Box) (parse_tree__write_deps_file__LibInstallIntsTargetName_35));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallInts_52, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_187));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallInts_52, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_198));
      }
      {
        libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_17, parse_tree__write_deps_file__MmakeRuleLibInstallInts_52, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_65, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_252_252);
      }
      {
        parse_tree__write_deps_file__Var_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_260, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsTargetName_36));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_260, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[169])));
      }
      {
        parse_tree__write_deps_file__Var_258 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_258, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_258, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_260));
      }
      {
        parse_tree__write_deps_file__Var_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_257, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsTargetName_36));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_257, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_258));
      }
      {
        parse_tree__write_deps_file__Var_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_254, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_254, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_257));
      }
      {
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_17, parse_tree__write_deps_file__Var_254);
      }
      (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__succeeded = (parse_tree__write_deps_file__Intermod_22 == (MR_Integer) 0);
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__succeeded)
        (parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__succeeded = (parse_tree__write_deps_file__TransOpt_23 == (MR_Integer) 0);
      if ((parse_tree__write_deps_file__env).parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0_env_0__succeeded)
        {
          MR_String parse_tree__write_deps_file__Var_266;

          {
            mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_17, (MR_String) "\n\t\100:\n\n");
          }
          parse_tree__write_deps_file__LibInstallOptsSources_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            parse_tree__write_deps_file__Var_266 = libs__mmakefiles__silent_noop_action_0_f_0();
          }
          {
            parse_tree__write_deps_file__LibInstallOptsActions_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibInstallOptsActions_54, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_266));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibInstallOptsActions_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
      else
        {
          MR_String parse_tree__write_deps_file__LibInstallOptsFiles_55;
          MR_Word parse_tree__write_deps_file__Var_268;
          MR_Word parse_tree__write_deps_file__Var_270;
          MR_Word parse_tree__write_deps_file__Var_271;
          MR_Word parse_tree__write_deps_file__Var_273;
          MR_Word parse_tree__write_deps_file__Var_275;
          MR_Word parse_tree__write_deps_file__Var_276;
          MR_Word parse_tree__write_deps_file__Var_277;
          MR_Word parse_tree__write_deps_file__Var_279;
          MR_Word parse_tree__write_deps_file__Var_281;
          MR_Word parse_tree__write_deps_file__Var_283;
          MR_Word parse_tree__write_deps_file__Var_285;
          MR_Word parse_tree__write_deps_file__Var_287;
          MR_Word parse_tree__write_deps_file__Var_289;
          MR_Word parse_tree__write_deps_file__Var_291;
          MR_Word parse_tree__write_deps_file__Var_293;
          MR_Word parse_tree__write_deps_file__Var_295;
          MR_Word parse_tree__write_deps_file__Var_297;
          MR_Word parse_tree__write_deps_file__Var_299;
          MR_Word parse_tree__write_deps_file__Var_301;
          MR_Word parse_tree__write_deps_file__Var_303;
          MR_Word parse_tree__write_deps_file__Var_305;
          MR_Word parse_tree__write_deps_file__Var_307;
          MR_Word parse_tree__write_deps_file__Var_309;
          MR_Word parse_tree__write_deps_file__Var_310;
          MR_Word parse_tree__write_deps_file__Var_332;
          MR_String parse_tree__write_deps_file__Var_337;
          MR_String parse_tree__write_deps_file__Var_338;
          MR_String parse_tree__write_deps_file__Var_340;
          MR_String parse_tree__write_deps_file__Var_342;
          MR_Word parse_tree__write_deps_file__Var_344;
          MR_Word parse_tree__write_deps_file__Var_346;
          MR_Word parse_tree__write_deps_file__Var_348;
          MR_Word parse_tree__write_deps_file__Var_350;
          MR_Word parse_tree__write_deps_file__Var_352;
          MR_Word parse_tree__write_deps_file__Var_354;
          MR_Word parse_tree__write_deps_file__Var_356;
          MR_Word parse_tree__write_deps_file__Var_358;
          MR_Word parse_tree__write_deps_file__Var_360;
          MR_Word parse_tree__write_deps_file__Var_362;
          MR_Word parse_tree__write_deps_file__Var_364;
          MR_Word parse_tree__write_deps_file__Var_366;
          MR_Word parse_tree__write_deps_file__Var_368;
          MR_String parse_tree__write_deps_file__Var_369;
          MR_String parse_tree__write_deps_file__Var_371;
          MR_String parse_tree__write_deps_file__Var_372;

          {
            parse_tree__write_deps_file__Var_310 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_310, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeSpaceTransOptStr_49));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_310, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[49])));
          }
          {
            parse_tree__write_deps_file__Var_309 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_309, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeSpaceOptStr_41));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_309, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_310));
          }
          {
            parse_tree__write_deps_file__Var_307 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_307, 0) = ((MR_Box) ((MR_String) "\tfor ext in "));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_307, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_309));
          }
          {
            parse_tree__write_deps_file__Var_305 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_305, 0) = ((MR_Box) ((MR_String) "\t# \140\044(INSTALL)\'.\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_305, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_307));
          }
          {
            parse_tree__write_deps_file__Var_303 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_303, 0) = ((MR_Box) ((MR_String) " then we just use\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_303, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_305));
          }
          {
            parse_tree__write_deps_file__Var_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_301, 0) = ((MR_Box) ((MR_String) "\t# We try using \140\044(LN_S)\', but if that fails,"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_301, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_303));
          }
          {
            parse_tree__write_deps_file__Var_299 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_299, 0) = ((MR_Box) ((MR_String) " \140--use-subdirs\' option\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_299, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_301));
          }
          {
            parse_tree__write_deps_file__Var_297 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_297, 0) = ((MR_Box) ((MR_String) "\t# The following is needed to support the"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_297, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_299));
          }
          {
            parse_tree__write_deps_file__Var_295 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_295, 0) = ((MR_Box) ((MR_String) "\tdone\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_295, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_297));
          }
          {
            parse_tree__write_deps_file__Var_293 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_293, 0) = ((MR_Box) ((MR_String) "\t\tfi; \\\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_293, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_295));
          }
          {
            parse_tree__write_deps_file__Var_291 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_291, 0) = ((MR_Box) ((MR_String) "\t\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_291, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_293));
          }
          {
            parse_tree__write_deps_file__Var_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_289, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"installing \044\044target\"; \\\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_289, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_291));
          }
          {
            parse_tree__write_deps_file__Var_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_287, 0) = ((MR_Box) ((MR_String) "\t\telse \\\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_287, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_289));
          }
          {
            parse_tree__write_deps_file__Var_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_285, 0) = ((MR_Box) ((MR_String) "\t\t\techo \"\044\044target unchanged\"; \\\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_285, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_287));
          }
          {
            parse_tree__write_deps_file__Var_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_283, 0) = ((MR_Box) ((MR_String) "\t\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_283, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_285));
          }
          {
            parse_tree__write_deps_file__Var_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_281, 0) = ((MR_Box) ((MR_String) "\t\ttarget=\"\044(INSTALL_GRADE_INT_DIR)/\140basename \044\044file\140\";\\\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_281, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_283));
          }
          {
            parse_tree__write_deps_file__Var_279 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_279, 0) = ((MR_Box) ((MR_String) "\tfor file in \044\044files; do \\\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_279, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_281));
          }
          {
            parse_tree__write_deps_file__Var_277 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_277, 0) = ((MR_Box) ((MR_String) "\"; \\\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_277, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_279));
          }
          {
            parse_tree__write_deps_file__Var_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_276, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVarSpace_32));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_276, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_277));
          }
          {
            parse_tree__write_deps_file__Var_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_275, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVarSpace_30));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_275, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_276));
          }
          {
            parse_tree__write_deps_file__Var_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_273, 0) = ((MR_Box) ((MR_String) "\tfiles=\""));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_273, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_275));
          }
          {
            parse_tree__write_deps_file__Var_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_271, 0) = ((MR_Box) ((MR_String) "install_grade_dirs\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_271, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_273));
          }
          {
            parse_tree__write_deps_file__Var_270 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_270, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVarSpace_32));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_270, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_271));
          }
          {
            parse_tree__write_deps_file__Var_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_268, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVarSpace_30));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_268, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_270));
          }
          {
            mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_17, parse_tree__write_deps_file__Var_268);
          }
          {
            parse_tree__write_deps_file__Var_332 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_654_654, parse_tree__write_deps_file__MaybeTransOptsVar_31, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[181]));
          }
          {
            parse_tree__write_deps_file__LibInstallOptsSources_53 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_654_654, parse_tree__write_deps_file__MaybeOptsVar_29, parse_tree__write_deps_file__Var_332);
          }
          {
            parse_tree__write_deps_file__Var_338 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MaybeTransOptsVarSpace_32, (MR_String) "\"");
          }
          {
            parse_tree__write_deps_file__Var_337 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MaybeOptsVarSpace_30, parse_tree__write_deps_file__Var_338);
          }
          {
            parse_tree__write_deps_file__LibInstallOptsFiles_55 = mercury__string__f_43_43_2_f_0((MR_String) "\"", parse_tree__write_deps_file__Var_337);
          }
          {
            parse_tree__write_deps_file__Var_342 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__LibInstallOptsFiles_55, (MR_String) "; \\");
          }
          {
            parse_tree__write_deps_file__Var_340 = mercury__string__f_43_43_2_f_0((MR_String) "files=", parse_tree__write_deps_file__Var_342);
          }
          {
            parse_tree__write_deps_file__Var_372 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MaybeSpaceTransOptStr_49, (MR_String) "; do \\");
          }
          {
            parse_tree__write_deps_file__Var_371 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__MaybeSpaceOptStr_41, parse_tree__write_deps_file__Var_372);
          }
          {
            parse_tree__write_deps_file__Var_369 = mercury__string__f_43_43_2_f_0((MR_String) "for ext in ", parse_tree__write_deps_file__Var_371);
          }
          {
            parse_tree__write_deps_file__Var_368 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_368, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_369));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_368, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[56])));
          }
          {
            parse_tree__write_deps_file__Var_366 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_366, 0) = ((MR_Box) ((MR_String) "# \140\044(INSTALL)\'."));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_366, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_368));
          }
          {
            parse_tree__write_deps_file__Var_364 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_364, 0) = ((MR_Box) ((MR_String) "# We try using \140\044(LN_S)\', but if that fails, then we just use"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_364, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_366));
          }
          {
            parse_tree__write_deps_file__Var_362 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_362, 0) = ((MR_Box) ((MR_String) "# The following is needed to support the \140--use-subdirs\' option"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_362, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_364));
          }
          {
            parse_tree__write_deps_file__Var_360 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_360, 0) = ((MR_Box) ((MR_String) "done"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_360, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_362));
          }
          {
            parse_tree__write_deps_file__Var_358 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_358, 0) = ((MR_Box) ((MR_String) "\tfi; \\"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_358, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_360));
          }
          {
            parse_tree__write_deps_file__Var_356 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_356, 0) = ((MR_Box) ((MR_String) "\t\t\044(INSTALL) \"\044\044file\" \"\044\044target\"; \\"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_356, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_358));
          }
          {
            parse_tree__write_deps_file__Var_354 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_354, 0) = ((MR_Box) ((MR_String) "\t\techo \"installing \044\044target\"; \\"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_354, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_356));
          }
          {
            parse_tree__write_deps_file__Var_352 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_352, 0) = ((MR_Box) ((MR_String) "\telse \\"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_352, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_354));
          }
          {
            parse_tree__write_deps_file__Var_350 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_350, 0) = ((MR_Box) ((MR_String) "\t\techo \"\044\044target unchanged\"; \\"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_350, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_352));
          }
          {
            parse_tree__write_deps_file__Var_348 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_348, 0) = ((MR_Box) ((MR_String) "\tif cmp -s \"\044\044file\" \"\044\044target\"; then \\"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_348, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_350));
          }
          {
            parse_tree__write_deps_file__Var_346 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_346, 0) = ((MR_Box) ((MR_String) "\ttarget=\"\044(INSTALL_GRADE_INT_DIR)/\140basename \044\044file\140\";\\"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_346, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_348));
          }
          {
            parse_tree__write_deps_file__Var_344 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_344, 0) = ((MR_Box) ((MR_String) "for file in \044\044files; do \\"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_344, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_346));
          }
          {
            parse_tree__write_deps_file__LibInstallOptsActions_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibInstallOptsActions_54, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_340));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__LibInstallOptsActions_54, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_344));
          }
        }
      {
        parse_tree__write_deps_file__MmakeRuleLibInstallOpts_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallOpts_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallOpts_56, 1) = ((MR_Box) ((MR_String) "lib_install_opts"));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallOpts_56, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallOpts_56, 3) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsTargetName_36));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallOpts_56, 4) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsSources_53));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallOpts_56, 5) = ((MR_Box) (parse_tree__write_deps_file__LibInstallOptsActions_54));
      }
      {
        libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_17, parse_tree__write_deps_file__MmakeRuleLibInstallOpts_56, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_252_252, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_395_395);
      }
      {
        parse_tree__write_deps_file__Var_424 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_424, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_20));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_424, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[60])));
      }
      {
        parse_tree__write_deps_file__Var_422 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_422, 0) = ((MR_Box) ((MR_String) "\tfor hdr in \044("));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_422, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_424));
      }
      {
        parse_tree__write_deps_file__Var_420 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_420, 0) = ((MR_Box) ((MR_String) "else\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_420, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_422));
      }
      {
        parse_tree__write_deps_file__Var_418 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_418, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_418, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_420));
      }
      {
        parse_tree__write_deps_file__Var_416 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_416, 0) = ((MR_Box) ((MR_String) ".mhs),)\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_416, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_418));
      }
      {
        parse_tree__write_deps_file__Var_415 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_415, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_20));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_415, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_416));
      }
      {
        parse_tree__write_deps_file__Var_413 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_413, 0) = ((MR_Box) ((MR_String) "ifeq (\044("));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_413, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_415));
      }
      {
        parse_tree__write_deps_file__Var_411 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_411, 0) = ((MR_Box) ((MR_String) "install_lib_dirs\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_411, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_413));
      }
      {
        parse_tree__write_deps_file__Var_409 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_409, 0) = ((MR_Box) ((MR_String) ".mhs) "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_409, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_411));
      }
      {
        parse_tree__write_deps_file__Var_408 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_408, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_20));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_408, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_409));
      }
      {
        parse_tree__write_deps_file__Var_406 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_406, 0) = ((MR_Box) ((MR_String) "\044("));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_406, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_408));
      }
      {
        parse_tree__write_deps_file__Var_404 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_404, 0) = ((MR_Box) ((MR_String) " : "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_404, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_406));
      }
      {
        parse_tree__write_deps_file__Var_403 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_403, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallHdrsTargetName_37));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_403, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_404));
      }
      {
        parse_tree__write_deps_file__Var_401 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_401, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_401, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_403));
      }
      {
        parse_tree__write_deps_file__Var_400 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_400, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallHdrsTargetName_37));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_400, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_401));
      }
      {
        parse_tree__write_deps_file__Var_397 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_397, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_397, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_400));
      }
      {
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_17, parse_tree__write_deps_file__Var_397);
      }
      {
        parse_tree__write_deps_file__Var_656 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_20, (MR_String) ".mhs)");
      }
      {
        parse_tree__write_deps_file__ModuleMakeVarNameMhs_57 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_656);
      }
      {
        parse_tree__write_deps_file__Var_442 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_442, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameMhs_57));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_442, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_195));
      }
      {
        parse_tree__write_deps_file__Var_447 = libs__mmakefiles__silent_noop_action_0_f_0();
      }
      {
        parse_tree__write_deps_file__Var_446 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_446, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_447));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_446, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__MmakeRuleLibInstallHdrsNoMhs_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsNoMhs_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsNoMhs_58, 1) = ((MR_Box) ((MR_String) "install_lib_hdrs_nomhs"));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsNoMhs_58, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsNoMhs_58, 3) = ((MR_Box) (parse_tree__write_deps_file__LibInstallHdrsTargetName_37));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsNoMhs_58, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_442));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsNoMhs_58, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_446));
      }
      {
        parse_tree__write_deps_file__Var_458 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarNameMhs_57, (MR_String) "; do \\");
      }
      {
        parse_tree__write_deps_file__Var_456 = mercury__string__f_43_43_2_f_0((MR_String) "for hdr in ", parse_tree__write_deps_file__Var_458);
      }
      {
        parse_tree__write_deps_file__Var_455 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_455, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_456));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_455, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[62])));
      }
      {
        parse_tree__write_deps_file__MmakeRuleLibInstallHdrsMhs_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsMhs_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsMhs_59, 1) = ((MR_Box) ((MR_String) "install_lib_hdrs_mhs"));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsMhs_59, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsMhs_59, 3) = ((MR_Box) (parse_tree__write_deps_file__LibInstallHdrsTargetName_37));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsMhs_59, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_442));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallHdrsMhs_59, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_455));
      }
      {
        parse_tree__write_deps_file__Var_467 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_467, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameMhs_57));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_467, 1) = ((MR_Box) ((MR_String) ""));
      }
      {
        parse_tree__write_deps_file__MmakeFragmentLibInstallHdrs_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentLibInstallHdrs_60, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_467));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentLibInstallHdrs_60, 1) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleLibInstallHdrsNoMhs_58));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentLibInstallHdrs_60, 2) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleLibInstallHdrsMhs_59));
      }
      {
        libs__mmakefiles__gather_mmake_fragment_6_p_0(parse_tree__write_deps_file__DepStream_17, parse_tree__write_deps_file__MmakeFragmentLibInstallHdrs_60, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_395_395, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_469_469);
      }
      {
        parse_tree__write_deps_file__Var_498 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_498, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_20));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_498, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[86])));
      }
      {
        parse_tree__write_deps_file__Var_496 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_496, 0) = ((MR_Box) ((MR_String) "\tfor hdr in \044("));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_496, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_498));
      }
      {
        parse_tree__write_deps_file__Var_494 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_494, 0) = ((MR_Box) ((MR_String) "else\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_494, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_496));
      }
      {
        parse_tree__write_deps_file__Var_492 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_492, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_492, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_494));
      }
      {
        parse_tree__write_deps_file__Var_490 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_490, 0) = ((MR_Box) ((MR_String) ".mihs),)\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_490, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_492));
      }
      {
        parse_tree__write_deps_file__Var_489 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_489, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_20));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_489, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_490));
      }
      {
        parse_tree__write_deps_file__Var_487 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_487, 0) = ((MR_Box) ((MR_String) "ifeq (\044("));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_487, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_489));
      }
      {
        parse_tree__write_deps_file__Var_485 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_485, 0) = ((MR_Box) ((MR_String) "install_grade_dirs\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_485, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_487));
      }
      {
        parse_tree__write_deps_file__Var_483 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_483, 0) = ((MR_Box) ((MR_String) ".mihs) "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_483, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_485));
      }
      {
        parse_tree__write_deps_file__Var_482 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_482, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_20));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_482, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_483));
      }
      {
        parse_tree__write_deps_file__Var_480 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_480, 0) = ((MR_Box) ((MR_String) "\044("));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_480, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_482));
      }
      {
        parse_tree__write_deps_file__Var_478 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_478, 0) = ((MR_Box) ((MR_String) " : "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_478, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_480));
      }
      {
        parse_tree__write_deps_file__Var_477 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_477, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_38));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_477, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_478));
      }
      {
        parse_tree__write_deps_file__Var_475 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_475, 0) = ((MR_Box) ((MR_String) "\n"));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_475, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_477));
      }
      {
        parse_tree__write_deps_file__Var_474 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_474, 0) = ((MR_Box) (parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_38));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_474, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_475));
      }
      {
        parse_tree__write_deps_file__Var_471 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_471, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_471, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_474));
      }
      {
        mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_17, parse_tree__write_deps_file__Var_471);
      }
      {
        parse_tree__write_deps_file__Var_659 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_20, (MR_String) ".mihs)");
      }
      {
        parse_tree__write_deps_file__ModuleMakeVarNameMihs_61 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_659);
      }
      {
        parse_tree__write_deps_file__Var_556 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_556, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameMihs_61));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_556, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[181])));
      }
      {
        parse_tree__write_deps_file__Var_561 = libs__mmakefiles__silent_noop_action_0_f_0();
      }
      {
        parse_tree__write_deps_file__Var_560 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_560, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_561));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_560, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsNoMihs_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsNoMihs_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsNoMihs_62, 1) = ((MR_Box) ((MR_String) "install_grade_hdrs_no_mihs"));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsNoMihs_62, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsNoMihs_62, 3) = ((MR_Box) (parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_38));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsNoMihs_62, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_556));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsNoMihs_62, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_560));
      }
      {
        parse_tree__write_deps_file__Var_572 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarNameMihs_61, (MR_String) "; do \\");
      }
      {
        parse_tree__write_deps_file__Var_570 = mercury__string__f_43_43_2_f_0((MR_String) "for hdr in ", parse_tree__write_deps_file__Var_572);
      }
      {
        parse_tree__write_deps_file__Var_569 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_569, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_570));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_569, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[109])));
      }
      {
        parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsMihs_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsMihs_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsMihs_63, 1) = ((MR_Box) ((MR_String) "install_grade_hdrs_mihs"));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsMihs_63, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsMihs_63, 3) = ((MR_Box) (parse_tree__write_deps_file__LibInstallGradeHdrsTargetName_38));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsMihs_63, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_556));
        MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsMihs_63, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_569));
      }
      {
        parse_tree__write_deps_file__Var_621 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_621, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameMihs_61));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_621, 1) = ((MR_Box) ((MR_String) ""));
      }
      {
        parse_tree__write_deps_file__MmakeFragmentLibInstallGradeHdrs_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentLibInstallGradeHdrs_64, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_621));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentLibInstallGradeHdrs_64, 1) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsNoMihs_62));
        MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentLibInstallGradeHdrs_64, 2) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleLibInstallGradeHdrsMihs_63));
      }
      {
        libs__mmakefiles__gather_mmake_fragment_6_p_0(parse_tree__write_deps_file__DepStream_17, parse_tree__write_deps_file__MmakeFragmentLibInstallGradeHdrs_64, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_469_469, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_66);
      }
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_init_targets_12_p_0(
  MR_Word parse_tree__write_deps_file__Globals_13,
  MR_Word parse_tree__write_deps_file__DepStream_14,
  MR_Word parse_tree__write_deps_file__ModuleName_15,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_16,
  MR_String parse_tree__write_deps_file__InitCFileName_17,
  MR_String parse_tree__write_deps_file__InitFileName_18,
  MR_String * parse_tree__write_deps_file__DepFileName_19,
  MR_String * parse_tree__write_deps_file__DvFileName_20,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_36,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_37)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_String parse_tree__write_deps_file__ModuleMakeVarNameCs_23;
    MR_String parse_tree__write_deps_file__InitAction1_24;
    MR_String parse_tree__write_deps_file__InitAction2_25;
    MR_String parse_tree__write_deps_file__InitAction3_26;
    MR_Word parse_tree__write_deps_file__MmakeRuleInitFile_27;
    MR_String parse_tree__write_deps_file__ModuleFileName_28;
    MR_String parse_tree__write_deps_file__ForceC2InitTarget_29;
    MR_Word parse_tree__write_deps_file__MmakeRuleForceInitCFile_30;
    MR_String parse_tree__write_deps_file__TmpInitCFileName_31;
    MR_String parse_tree__write_deps_file__ModuleMakeVarNameInitCs_32;
    MR_String parse_tree__write_deps_file__InitCAction1_33;
    MR_String parse_tree__write_deps_file__InitCAction2_34;
    MR_Word parse_tree__write_deps_file__MmakeRuleInitCFile_35;
    MR_String parse_tree__write_deps_file__Var_47;
    MR_String parse_tree__write_deps_file__Var_51;
    MR_String parse_tree__write_deps_file__Var_52;
    MR_Word parse_tree__write_deps_file__Var_55;
    MR_Word parse_tree__write_deps_file__Var_57;
    MR_Word parse_tree__write_deps_file__Var_59;
    MR_Word parse_tree__write_deps_file__Var_60;
    MR_Word parse_tree__write_deps_file__Var_62;
    MR_Word parse_tree__write_deps_file__Var_63;
    MR_Word parse_tree__write_deps_file__Var_65;
    MR_Word parse_tree__write_deps_file__Var_67;
    MR_Word parse_tree__write_deps_file__Var_68;
    MR_Word parse_tree__write_deps_file__Var_70;
    MR_Word parse_tree__write_deps_file__Var_72;
    MR_Word parse_tree__write_deps_file__Var_73;
    MR_Word parse_tree__write_deps_file__Var_75;
    MR_Word parse_tree__write_deps_file__Var_77;
    MR_Word parse_tree__write_deps_file__Var_78;
    MR_Word parse_tree__write_deps_file__Var_83;
    MR_Word parse_tree__write_deps_file__Var_84;
    MR_Word parse_tree__write_deps_file__Var_86;
    MR_Word parse_tree__write_deps_file__Var_87;
    MR_Word parse_tree__write_deps_file__Var_88;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_90_90;
    MR_String parse_tree__write_deps_file__Var_93;
    MR_Word parse_tree__write_deps_file__Var_95;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_104_104;
    MR_String parse_tree__write_deps_file__Var_108;
    MR_String parse_tree__write_deps_file__Var_111;
    MR_String parse_tree__write_deps_file__Var_113;
    MR_String parse_tree__write_deps_file__Var_114;
    MR_String parse_tree__write_deps_file__Var_116;
    MR_Word parse_tree__write_deps_file__Var_119;
    MR_Word parse_tree__write_deps_file__Var_121;
    MR_Word parse_tree__write_deps_file__Var_123;
    MR_Word parse_tree__write_deps_file__Var_124;
    MR_Word parse_tree__write_deps_file__Var_126;
    MR_Word parse_tree__write_deps_file__Var_127;
    MR_Word parse_tree__write_deps_file__Var_129;
    MR_Word parse_tree__write_deps_file__Var_131;
    MR_Word parse_tree__write_deps_file__Var_132;
    MR_Word parse_tree__write_deps_file__Var_134;
    MR_Word parse_tree__write_deps_file__Var_136;
    MR_Word parse_tree__write_deps_file__Var_142;
    MR_Word parse_tree__write_deps_file__Var_145;
    MR_Word parse_tree__write_deps_file__Var_146;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, (MR_Integer) 1, (MR_String) ".dep", parse_tree__write_deps_file__ModuleName_15, parse_tree__write_deps_file__DepFileName_19);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_13, (MR_Integer) 1, (MR_String) ".dv", parse_tree__write_deps_file__ModuleName_15, parse_tree__write_deps_file__DvFileName_20);
    }
    {
      parse_tree__write_deps_file__Var_47 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_16, (MR_String) ".cs)");
    }
    {
      parse_tree__write_deps_file__ModuleMakeVarNameCs_23 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_47);
    }
    {
      parse_tree__write_deps_file__InitAction1_24 = mercury__string__f_43_43_2_f_0((MR_String) "echo > ", parse_tree__write_deps_file__InitFileName_18);
    }
    {
      parse_tree__write_deps_file__Var_52 = mercury__string__f_43_43_2_f_0((MR_String) " >> ", parse_tree__write_deps_file__InitFileName_18);
    }
    {
      parse_tree__write_deps_file__Var_51 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarNameCs_23, parse_tree__write_deps_file__Var_52);
    }
    {
      parse_tree__write_deps_file__InitAction2_25 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MKLIBINIT) ", parse_tree__write_deps_file__Var_51);
    }
    {
      parse_tree__write_deps_file__InitAction3_26 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXTRA_INIT_COMMAND) >> ", parse_tree__write_deps_file__InitFileName_18);
    }
    parse_tree__write_deps_file__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[170]);
    {
      parse_tree__write_deps_file__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_77, 0) = ((MR_Box) (parse_tree__write_deps_file__InitAction3_26));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_77, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_78));
    }
    {
      parse_tree__write_deps_file__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_75, 0) = ((MR_Box) ((MR_String) "\t"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_75, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_77));
    }
    {
      parse_tree__write_deps_file__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_73, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_73, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_75));
    }
    {
      parse_tree__write_deps_file__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_72, 0) = ((MR_Box) (parse_tree__write_deps_file__InitAction2_25));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_72, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_73));
    }
    {
      parse_tree__write_deps_file__Var_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_70, 0) = ((MR_Box) ((MR_String) "\t"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_70, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_72));
    }
    {
      parse_tree__write_deps_file__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_68, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_68, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_70));
    }
    {
      parse_tree__write_deps_file__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_67, 0) = ((MR_Box) (parse_tree__write_deps_file__InitAction1_24));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_67, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_68));
    }
    {
      parse_tree__write_deps_file__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_65, 0) = ((MR_Box) ((MR_String) "\t"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_65, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_67));
    }
    {
      parse_tree__write_deps_file__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_63, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_63, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_65));
    }
    {
      parse_tree__write_deps_file__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_62, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameCs_23));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_62, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_63));
    }
    {
      parse_tree__write_deps_file__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_60, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_60, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_62));
    }
    {
      parse_tree__write_deps_file__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_59, 0) = ((MR_Box) (*parse_tree__write_deps_file__DepFileName_19));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_59, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_60));
    }
    {
      parse_tree__write_deps_file__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_57, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_57, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_59));
    }
    {
      parse_tree__write_deps_file__Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_55, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_18));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_55, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_57));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_14, parse_tree__write_deps_file__Var_55);
    }
    {
      parse_tree__write_deps_file__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_84, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameCs_23));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_83, 0) = ((MR_Box) (*parse_tree__write_deps_file__DepFileName_19));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_83, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_84));
    }
    {
      parse_tree__write_deps_file__Var_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_88, 0) = ((MR_Box) (parse_tree__write_deps_file__InitAction3_26));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_87, 0) = ((MR_Box) (parse_tree__write_deps_file__InitAction2_25));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_87, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_88));
    }
    {
      parse_tree__write_deps_file__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_86, 0) = ((MR_Box) (parse_tree__write_deps_file__InitAction1_24));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_86, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_87));
    }
    {
      parse_tree__write_deps_file__MmakeRuleInitFile_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitFile_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitFile_27, 1) = ((MR_Box) ((MR_String) "init_file"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitFile_27, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitFile_27, 3) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_18));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitFile_27, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_83));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitFile_27, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_86));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_14, parse_tree__write_deps_file__MmakeRuleInitFile_27, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_36, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_90_90);
    }
    {
      parse_tree__write_deps_file__ModuleFileName_28 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_15);
    }
    {
      parse_tree__write_deps_file__Var_93 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleFileName_28, (MR_String) "_init");
    }
    {
      parse_tree__write_deps_file__ForceC2InitTarget_29 = mercury__string__f_43_43_2_f_0((MR_String) "force-", parse_tree__write_deps_file__Var_93);
    }
    {
      parse_tree__write_deps_file__Var_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_95, 0) = ((MR_Box) (parse_tree__write_deps_file__ForceC2InitTarget_29));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[179])));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_14, parse_tree__write_deps_file__Var_95);
    }
    {
      parse_tree__write_deps_file__MmakeRuleForceInitCFile_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleForceInitCFile_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleForceInitCFile_30, 1) = ((MR_Box) ((MR_String) "force_init_c_file"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleForceInitCFile_30, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleForceInitCFile_30, 3) = ((MR_Box) (parse_tree__write_deps_file__ForceC2InitTarget_29));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleForceInitCFile_30, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleForceInitCFile_30, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_14, parse_tree__write_deps_file__MmakeRuleForceInitCFile_30, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_90_90, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_104_104);
    }
    {
      parse_tree__write_deps_file__TmpInitCFileName_31 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__InitCFileName_17, (MR_String) ".tmp");
    }
    {
      parse_tree__write_deps_file__Var_108 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_16, (MR_String) ".init_cs)");
    }
    {
      parse_tree__write_deps_file__ModuleMakeVarNameInitCs_32 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_108);
    }
    {
      parse_tree__write_deps_file__Var_116 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarNameInitCs_32, (MR_String) " \044(ALL_C2INITARGS)");
    }
    {
      parse_tree__write_deps_file__Var_114 = mercury__string__f_43_43_2_f_0((MR_String) " ", parse_tree__write_deps_file__Var_116);
    }
    {
      parse_tree__write_deps_file__Var_113 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__TmpInitCFileName_31, parse_tree__write_deps_file__Var_114);
    }
    {
      parse_tree__write_deps_file__Var_111 = mercury__string__f_43_43_2_f_0((MR_String) "--init-c-file ", parse_tree__write_deps_file__Var_113);
    }
    {
      parse_tree__write_deps_file__InitCAction1_33 = mercury__string__f_43_43_2_f_0((MR_String) "\100\044(C2INIT) \044(ALL_GRADEFLAGS) \044(ALL_C2INITFLAGS) ", parse_tree__write_deps_file__Var_111);
    }
    {
      parse_tree__write_deps_file__InitCAction2_34 = mercury__string__f_43_43_2_f_0((MR_String) "\100mercury_update_interface ", parse_tree__write_deps_file__InitCFileName_17);
    }
    {
      parse_tree__write_deps_file__Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_136, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCAction2_34));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_136, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_78));
    }
    {
      parse_tree__write_deps_file__Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_134, 0) = ((MR_Box) ((MR_String) "\t"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_134, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_136));
    }
    {
      parse_tree__write_deps_file__Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_132, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_132, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_134));
    }
    {
      parse_tree__write_deps_file__Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_131, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCAction1_33));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_131, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_132));
    }
    {
      parse_tree__write_deps_file__Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_129, 0) = ((MR_Box) ((MR_String) "\t"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_129, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_131));
    }
    {
      parse_tree__write_deps_file__Var_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_127, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_127, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_129));
    }
    {
      parse_tree__write_deps_file__Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_126, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameCs_23));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_126, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_127));
    }
    {
      parse_tree__write_deps_file__Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_124, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_124, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_126));
    }
    {
      parse_tree__write_deps_file__Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_123, 0) = ((MR_Box) (parse_tree__write_deps_file__ForceC2InitTarget_29));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_123, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_124));
    }
    {
      parse_tree__write_deps_file__Var_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_121, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_121, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_123));
    }
    {
      parse_tree__write_deps_file__Var_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_119, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_17));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_119, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_121));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_14, parse_tree__write_deps_file__Var_119);
    }
    {
      parse_tree__write_deps_file__Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_142, 0) = ((MR_Box) (parse_tree__write_deps_file__ForceC2InitTarget_29));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_142, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_84));
    }
    {
      parse_tree__write_deps_file__Var_146 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_146, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCAction2_34));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_146, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_145, 0) = ((MR_Box) (parse_tree__write_deps_file__InitCAction1_33));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_145, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_146));
    }
    {
      parse_tree__write_deps_file__MmakeRuleInitCFile_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitCFile_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitCFile_35, 1) = ((MR_Box) ((MR_String) "init_c_file"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitCFile_35, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitCFile_35, 3) = ((MR_Box) (parse_tree__write_deps_file__InitCFileName_17));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitCFile_35, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_142));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleInitCFile_35, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_145));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_14, parse_tree__write_deps_file__MmakeRuleInitCFile_35, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_104_104, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_37);
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__generate_dep_file_exec_library_targets_16_p_0(
  MR_Word parse_tree__write_deps_file__Globals_17,
  MR_Word parse_tree__write_deps_file__DepStream_18,
  MR_Word parse_tree__write_deps_file__ModuleName_19,
  MR_String parse_tree__write_deps_file__ModuleMakeVarName_20,
  MR_String parse_tree__write_deps_file__InitFileName_21,
  MR_String parse_tree__write_deps_file__InitObjFileName_22,
  MR_Word parse_tree__write_deps_file__MaybeOptsVarPair_23,
  MR_Word parse_tree__write_deps_file__MaybeTransOptsVarPair_24,
  MR_String * parse_tree__write_deps_file__ExeFileName_25,
  MR_String * parse_tree__write_deps_file__JarFileName_26,
  MR_String * parse_tree__write_deps_file__LibFileName_27,
  MR_String * parse_tree__write_deps_file__SharedLibFileName_28,
  MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_84,
  MR_Word * parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_85)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_456_456;
    MR_Word parse_tree__write_deps_file__MmakeRuleExtForExe_31;
    MR_Word parse_tree__write_deps_file__MmakeFragmentExtForExe_32;
    MR_String parse_tree__write_deps_file__All_MLLibsDep_33;
    MR_String parse_tree__write_deps_file__All_MLObjs_34;
    MR_String parse_tree__write_deps_file__All_MLPicObjs_35;
    MR_String parse_tree__write_deps_file__NL_All_MLLibsDep_36;
    MR_String parse_tree__write_deps_file__NL_All_MLObjs_37;
    MR_String parse_tree__write_deps_file__NL_All_MLPicObjs_38;
    MR_Word parse_tree__write_deps_file__IfJava_39;
    MR_Word parse_tree__write_deps_file__Else_40;
    MR_Word parse_tree__write_deps_file__EndIf_41;
    MR_String parse_tree__write_deps_file__ModuleMakeVarNameClasses_42;
    MR_Word parse_tree__write_deps_file__JavaMainRule_43;
    MR_String parse_tree__write_deps_file__ModuleMakeVarNameOs_44;
    MR_String parse_tree__write_deps_file__NonJavaMainRuleAction1Line1_45;
    MR_String parse_tree__write_deps_file__NonJavaMainRuleAction1Line2_46;
    MR_Word parse_tree__write_deps_file__NonJavaMainRule_47;
    MR_Word parse_tree__write_deps_file__Rules_48;
    MR_Word parse_tree__write_deps_file__MmakeRuleExecutableJava_49;
    MR_Word parse_tree__write_deps_file__MmakeRuleExecutableNonJava_50;
    MR_Word parse_tree__write_deps_file__MmakeFragmentExecutable_51;
    MR_String parse_tree__write_deps_file__LibTargetName_52;
    MR_String parse_tree__write_deps_file__MaybeSharedLibFileName_53;
    MR_Word parse_tree__write_deps_file__UseInstallName_54;
    MR_String parse_tree__write_deps_file__InstallNameOpt_55;
    MR_Word parse_tree__write_deps_file__MaybeOptsVar_56;
    MR_String parse_tree__write_deps_file__MaybeOptsVarSpace_57;
    MR_Word parse_tree__write_deps_file__MaybeTransOptsVar_58;
    MR_String parse_tree__write_deps_file__MaybeTransOptsVarSpace_59;
    MR_String parse_tree__write_deps_file__ModuleMakeVarNameInts_60;
    MR_String parse_tree__write_deps_file__ModuleMakeVarNameInt3s_61;
    MR_Word parse_tree__write_deps_file__AllInts_62;
    MR_Word parse_tree__write_deps_file__AllIntSources_63;
    MR_Word parse_tree__write_deps_file__JavaLibRule_64;
    MR_Word parse_tree__write_deps_file__NonJavaLibRule_65;
    MR_Word parse_tree__write_deps_file__LibRules_66;
    MR_Word parse_tree__write_deps_file__MmakeRuleLibTargetJava_67;
    MR_Word parse_tree__write_deps_file__MmakeRuleLibTargetNonJava_68;
    MR_Word parse_tree__write_deps_file__MmakeFragmentLibTarget_69;
    MR_String parse_tree__write_deps_file__ModuleMakeVarNamePicOs_70;
    MR_String parse_tree__write_deps_file__SharedLibAction1Line1_71;
    MR_String parse_tree__write_deps_file__SharedLibAction1Line2_72;
    MR_String parse_tree__write_deps_file__SharedLibAction1Line3_73;
    MR_Word parse_tree__write_deps_file__MmakeRuleSharedLib_74;
    MR_Word parse_tree__write_deps_file__MmakeFragmentSharedLib_75;
    MR_String parse_tree__write_deps_file__LibAction1_76;
    MR_String parse_tree__write_deps_file__LibAction2Line1_77;
    MR_String parse_tree__write_deps_file__LibAction2Line2_78;
    MR_String parse_tree__write_deps_file__LibAction3_79;
    MR_Word parse_tree__write_deps_file__MmakeRuleLib_80;
    MR_String parse_tree__write_deps_file__ListClassFiles_81;
    MR_String parse_tree__write_deps_file__JarAction1_82;
    MR_Word parse_tree__write_deps_file__MmakeRuleJar_83;
    MR_Word parse_tree__write_deps_file__Var_91;
    MR_Word parse_tree__write_deps_file__Var_94;
    MR_Word parse_tree__write_deps_file__Var_96;
    MR_Word parse_tree__write_deps_file__Var_97;
    MR_Word parse_tree__write_deps_file__Var_99;
    MR_Word parse_tree__write_deps_file__Var_100;
    MR_Word parse_tree__write_deps_file__Var_102;
    MR_Word parse_tree__write_deps_file__Var_110;
    MR_String parse_tree__write_deps_file__Var_111;
    MR_Word parse_tree__write_deps_file__Var_118;
    MR_Word parse_tree__write_deps_file__Var_119;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_122_122;
    MR_Word parse_tree__write_deps_file__Var_124;
    MR_Word parse_tree__write_deps_file__Var_126;
    MR_Word parse_tree__write_deps_file__Var_130;
    MR_Word parse_tree__write_deps_file__Var_132;
    MR_Word parse_tree__write_deps_file__Var_136;
    MR_Word parse_tree__write_deps_file__Var_138;
    MR_Word parse_tree__write_deps_file__Var_140;
    MR_String parse_tree__write_deps_file__Var_154;
    MR_Word parse_tree__write_deps_file__Var_156;
    MR_Word parse_tree__write_deps_file__Var_158;
    MR_String parse_tree__write_deps_file__Var_163;
    MR_String parse_tree__write_deps_file__Var_166;
    MR_String parse_tree__write_deps_file__Var_168;
    MR_String parse_tree__write_deps_file__Var_169;
    MR_String parse_tree__write_deps_file__Var_171;
    MR_String parse_tree__write_deps_file__Var_174;
    MR_String parse_tree__write_deps_file__Var_175;
    MR_String parse_tree__write_deps_file__Var_177;
    MR_Word parse_tree__write_deps_file__Var_179;
    MR_Word parse_tree__write_deps_file__Var_181;
    MR_Word parse_tree__write_deps_file__Var_182;
    MR_Word parse_tree__write_deps_file__Var_184;
    MR_Word parse_tree__write_deps_file__Var_185;
    MR_Word parse_tree__write_deps_file__Var_187;
    MR_Word parse_tree__write_deps_file__Var_188;
    MR_Word parse_tree__write_deps_file__Var_190;
    MR_Word parse_tree__write_deps_file__Var_191;
    MR_Word parse_tree__write_deps_file__Var_193;
    MR_String parse_tree__write_deps_file__Var_194;
    MR_String parse_tree__write_deps_file__Var_196;
    MR_Word parse_tree__write_deps_file__Var_198;
    MR_String parse_tree__write_deps_file__Var_199;
    MR_String parse_tree__write_deps_file__Var_201;
    MR_Word parse_tree__write_deps_file__Var_204;
    MR_Word parse_tree__write_deps_file__Var_205;
    MR_Word parse_tree__write_deps_file__Var_206;
    MR_Word parse_tree__write_deps_file__Var_210;
    MR_String parse_tree__write_deps_file__Var_215;
    MR_Word parse_tree__write_deps_file__Var_217;
    MR_Word parse_tree__write_deps_file__Var_218;
    MR_Word parse_tree__write_deps_file__Var_219;
    MR_Word parse_tree__write_deps_file__Var_220;
    MR_Word parse_tree__write_deps_file__Var_222;
    MR_Word parse_tree__write_deps_file__Var_223;
    MR_Word parse_tree__write_deps_file__Var_225;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_227_227;
    MR_String parse_tree__write_deps_file__Var_250;
    MR_String parse_tree__write_deps_file__Var_253;
    MR_Word parse_tree__write_deps_file__Var_255;
    MR_Word parse_tree__write_deps_file__Var_257;
    MR_Word parse_tree__write_deps_file__Var_258;
    MR_Word parse_tree__write_deps_file__Var_260;
    MR_Word parse_tree__write_deps_file__Var_261;
    MR_Word parse_tree__write_deps_file__Var_262;
    MR_Word parse_tree__write_deps_file__Var_263;
    MR_Word parse_tree__write_deps_file__Var_266;
    MR_Word parse_tree__write_deps_file__Var_267;
    MR_Word parse_tree__write_deps_file__Var_269;
    MR_Word parse_tree__write_deps_file__Var_270;
    MR_Word parse_tree__write_deps_file__Var_271;
    MR_Word parse_tree__write_deps_file__Var_273;
    MR_Word parse_tree__write_deps_file__Var_275;
    MR_Word parse_tree__write_deps_file__Var_276;
    MR_Word parse_tree__write_deps_file__Var_278;
    MR_Word parse_tree__write_deps_file__Var_280;
    MR_Word parse_tree__write_deps_file__Var_281;
    MR_Word parse_tree__write_deps_file__Var_283;
    MR_Word parse_tree__write_deps_file__Var_286;
    MR_Word parse_tree__write_deps_file__Var_287;
    MR_Word parse_tree__write_deps_file__Var_288;
    MR_Word parse_tree__write_deps_file__Var_289;
    MR_Word parse_tree__write_deps_file__Var_292;
    MR_Word parse_tree__write_deps_file__Var_293;
    MR_Word parse_tree__write_deps_file__Var_297;
    MR_Word parse_tree__write_deps_file__Var_301;
    MR_Word parse_tree__write_deps_file__Var_302;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_306_306;
    MR_String parse_tree__write_deps_file__Var_309;
    MR_String parse_tree__write_deps_file__Var_312;
    MR_String parse_tree__write_deps_file__Var_314;
    MR_String parse_tree__write_deps_file__Var_315;
    MR_String parse_tree__write_deps_file__Var_317;
    MR_String parse_tree__write_deps_file__Var_319;
    MR_String parse_tree__write_deps_file__Var_322;
    MR_String parse_tree__write_deps_file__Var_325;
    MR_Word parse_tree__write_deps_file__Var_327;
    MR_Word parse_tree__write_deps_file__Var_330;
    MR_Word parse_tree__write_deps_file__Var_331;
    MR_Word parse_tree__write_deps_file__Var_333;
    MR_Word parse_tree__write_deps_file__Var_334;
    MR_Word parse_tree__write_deps_file__Var_336;
    MR_Word parse_tree__write_deps_file__Var_337;
    MR_Word parse_tree__write_deps_file__Var_339;
    MR_Word parse_tree__write_deps_file__Var_340;
    MR_Word parse_tree__write_deps_file__Var_342;
    MR_Word parse_tree__write_deps_file__Var_344;
    MR_Word parse_tree__write_deps_file__Var_345;
    MR_Word parse_tree__write_deps_file__Var_347;
    MR_Word parse_tree__write_deps_file__Var_349;
    MR_Word parse_tree__write_deps_file__Var_350;
    MR_Word parse_tree__write_deps_file__Var_352;
    MR_Word parse_tree__write_deps_file__Var_354;
    MR_Word parse_tree__write_deps_file__Var_362;
    MR_Word parse_tree__write_deps_file__Var_363;
    MR_Word parse_tree__write_deps_file__Var_366;
    MR_Word parse_tree__write_deps_file__Var_367;
    MR_Word parse_tree__write_deps_file__Var_368;
    MR_Word parse_tree__write_deps_file__Var_373;
    MR_Word parse_tree__write_deps_file__Var_374;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_377_377;
    MR_String parse_tree__write_deps_file__Var_381;
    MR_String parse_tree__write_deps_file__Var_382;
    MR_String parse_tree__write_deps_file__Var_384;
    MR_Word parse_tree__write_deps_file__Var_388;
    MR_Word parse_tree__write_deps_file__Var_390;
    MR_Word parse_tree__write_deps_file__Var_392;
    MR_Word parse_tree__write_deps_file__Var_393;
    MR_Word parse_tree__write_deps_file__Var_395;
    MR_Word parse_tree__write_deps_file__Var_396;
    MR_Word parse_tree__write_deps_file__Var_398;
    MR_Word parse_tree__write_deps_file__Var_400;
    MR_Word parse_tree__write_deps_file__Var_401;
    MR_Word parse_tree__write_deps_file__Var_403;
    MR_Word parse_tree__write_deps_file__Var_405;
    MR_Word parse_tree__write_deps_file__Var_406;
    MR_Word parse_tree__write_deps_file__Var_408;
    MR_Word parse_tree__write_deps_file__Var_410;
    MR_Word parse_tree__write_deps_file__Var_411;
    MR_Word parse_tree__write_deps_file__Var_413;
    MR_Word parse_tree__write_deps_file__Var_415;
    MR_Word parse_tree__write_deps_file__Var_421;
    MR_Word parse_tree__write_deps_file__Var_422;
    MR_Word parse_tree__write_deps_file__Var_424;
    MR_Word parse_tree__write_deps_file__Var_425;
    MR_Word parse_tree__write_deps_file__Var_426;
    MR_Word parse_tree__write_deps_file__Var_427;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_429_429;
    MR_String parse_tree__write_deps_file__Var_432;
    MR_String parse_tree__write_deps_file__Var_433;
    MR_Word parse_tree__write_deps_file__Var_435;
    MR_Word parse_tree__write_deps_file__Var_437;
    MR_Word parse_tree__write_deps_file__Var_439;
    MR_Word parse_tree__write_deps_file__Var_440;
    MR_Word parse_tree__write_deps_file__Var_442;
    MR_Word parse_tree__write_deps_file__Var_444;
    MR_Word parse_tree__write_deps_file__Var_452;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_17, (MR_Integer) 1, (MR_String) "", parse_tree__write_deps_file__ModuleName_19, parse_tree__write_deps_file__ExeFileName_25);
    }
    {
      parse_tree__write_deps_file__Var_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_102, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_25));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[24])));
    }
    {
      parse_tree__write_deps_file__Var_100 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_100, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_100, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_102));
    }
    {
      parse_tree__write_deps_file__Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_99, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_25));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_99, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_100));
    }
    {
      parse_tree__write_deps_file__Var_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_97, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_97, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_99));
    }
    {
      parse_tree__write_deps_file__Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_96, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_25));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_96, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_97));
    }
    {
      parse_tree__write_deps_file__Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_94, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_94, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_96));
    }
    {
      parse_tree__write_deps_file__Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_91, 0) = ((MR_Box) ((MR_String) "ifneq (\044(EXT_FOR_EXE),)\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_91, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_94));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__Var_91);
    }
    {
      parse_tree__write_deps_file__Var_111 = mercury__string__f_43_43_2_f_0(*parse_tree__write_deps_file__ExeFileName_25, (MR_String) "\044(EXT_FOR_EXE)");
    }
    {
      parse_tree__write_deps_file__Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_110, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_111));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__MmakeRuleExtForExe_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExtForExe_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExtForExe_31, 1) = ((MR_Box) ((MR_String) "ext_for_exe"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExtForExe_31, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExtForExe_31, 3) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_25));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExtForExe_31, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_110));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExtForExe_31, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_119 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_119, 0) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleExtForExe_31));
    }
    {
      parse_tree__write_deps_file__Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_118, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_119));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__MmakeFragmentExtForExe_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeFragmentExtForExe_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__write_deps_file_scalar_common_1[172])));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeFragmentExtForExe_32, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_118));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeFragmentExtForExe_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      libs__mmakefiles__gather_mmake_fragment_6_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__MmakeFragmentExtForExe_32, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_0_84, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_122_122);
    }
    {
      parse_tree__write_deps_file__Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_126, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[173])));
    }
    {
      parse_tree__write_deps_file__Var_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_124, 0) = ((MR_Box) ((MR_String) "\044(foreach \100,"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_124, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_126));
    }
    {
      mercury__string__append_list_2_p_0(parse_tree__write_deps_file__Var_124, &parse_tree__write_deps_file__All_MLLibsDep_33);
    }
    {
      parse_tree__write_deps_file__Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_132, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_132, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[174])));
    }
    {
      parse_tree__write_deps_file__Var_130 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_130, 0) = ((MR_Box) ((MR_String) "\044(foreach \100,"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_130, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_132));
    }
    {
      mercury__string__append_list_2_p_0(parse_tree__write_deps_file__Var_130, &parse_tree__write_deps_file__All_MLObjs_34);
    }
    {
      parse_tree__write_deps_file__Var_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_140, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_20));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[175])));
    }
    {
      parse_tree__write_deps_file__Var_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_138, 0) = ((MR_Box) ((MR_String) "\044(foreach \100,"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_138, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_140));
    }
    {
      parse_tree__write_deps_file__Var_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_136, 0) = ((MR_Box) ((MR_String) "\044(patsubst %.o,%.\044(EXT_FOR_PIC_OBJECTS),"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_136, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_138));
    }
    {
      mercury__string__append_list_2_p_0(parse_tree__write_deps_file__Var_136, &parse_tree__write_deps_file__All_MLPicObjs_35);
    }
    {
      parse_tree__write_deps_file__NL_All_MLLibsDep_36 = mercury__string__f_43_43_2_f_0((MR_String) "\\\n\t\t", parse_tree__write_deps_file__All_MLLibsDep_33);
    }
    {
      parse_tree__write_deps_file__NL_All_MLObjs_37 = mercury__string__f_43_43_2_f_0((MR_String) "\\\n\t\t", parse_tree__write_deps_file__All_MLObjs_34);
    }
    {
      parse_tree__write_deps_file__NL_All_MLPicObjs_38 = mercury__string__f_43_43_2_f_0((MR_String) "\\\n\t\t", parse_tree__write_deps_file__All_MLPicObjs_35);
    }
    parse_tree__write_deps_file__IfJava_39 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[176]);
    parse_tree__write_deps_file__Else_40 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[177]);
    parse_tree__write_deps_file__EndIf_41 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[23]);
    {
      parse_tree__write_deps_file__Var_154 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_20, (MR_String) ".classes)");
    }
    {
      parse_tree__write_deps_file__ModuleMakeVarNameClasses_42 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_154);
    }
    {
      parse_tree__write_deps_file__Var_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_158, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameClasses_42));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[14])));
    }
    {
      parse_tree__write_deps_file__Var_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_156, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_156, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_158));
    }
    {
      parse_tree__write_deps_file__JavaMainRule_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaMainRule_43, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_25));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaMainRule_43, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_156));
    }
    {
      parse_tree__write_deps_file__Var_163 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_20, (MR_String) ".os)");
    }
    {
      parse_tree__write_deps_file__ModuleMakeVarNameOs_44 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_163);
    }
    {
      parse_tree__write_deps_file__Var_171 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__InitObjFileName_22, (MR_String) " \\");
    }
    {
      parse_tree__write_deps_file__Var_169 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXT_FOR_EXE) ", parse_tree__write_deps_file__Var_171);
    }
    {
      parse_tree__write_deps_file__Var_168 = mercury__string__f_43_43_2_f_0(*parse_tree__write_deps_file__ExeFileName_25, parse_tree__write_deps_file__Var_169);
    }
    {
      parse_tree__write_deps_file__Var_166 = mercury__string__f_43_43_2_f_0((MR_String) "\044(EXEFILE_OPT)", parse_tree__write_deps_file__Var_168);
    }
    {
      parse_tree__write_deps_file__NonJavaMainRuleAction1Line1_45 = mercury__string__f_43_43_2_f_0((MR_String) "\044(ML) \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) -- \044(ALL_LDFLAGS) ", parse_tree__write_deps_file__Var_166);
    }
    {
      parse_tree__write_deps_file__Var_177 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__NL_All_MLObjs_37, (MR_String) " \044(ALL_MLLIBS)");
    }
    {
      parse_tree__write_deps_file__Var_175 = mercury__string__f_43_43_2_f_0((MR_String) " ", parse_tree__write_deps_file__Var_177);
    }
    {
      parse_tree__write_deps_file__Var_174 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarNameOs_44, parse_tree__write_deps_file__Var_175);
    }
    {
      parse_tree__write_deps_file__NonJavaMainRuleAction1Line2_46 = mercury__string__f_43_43_2_f_0((MR_String) "\t", parse_tree__write_deps_file__Var_174);
    }
    {
      parse_tree__write_deps_file__Var_196 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__NonJavaMainRuleAction1Line1_45, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_194 = mercury__string__f_43_43_2_f_0((MR_String) "\t", parse_tree__write_deps_file__Var_196);
    }
    {
      parse_tree__write_deps_file__Var_201 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__NonJavaMainRuleAction1Line2_46, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_199 = mercury__string__f_43_43_2_f_0((MR_String) "\t", parse_tree__write_deps_file__Var_201);
    }
    {
      parse_tree__write_deps_file__Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_198, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_199));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_198, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_193 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_193, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_194));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_193, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_198));
    }
    {
      parse_tree__write_deps_file__Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_191, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_191, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_193));
    }
    {
      parse_tree__write_deps_file__Var_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_190, 0) = ((MR_Box) (parse_tree__write_deps_file__NL_All_MLLibsDep_36));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_190, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_191));
    }
    {
      parse_tree__write_deps_file__Var_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_188, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_188, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_190));
    }
    {
      parse_tree__write_deps_file__Var_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_187, 0) = ((MR_Box) (parse_tree__write_deps_file__NL_All_MLObjs_37));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_187, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_188));
    }
    {
      parse_tree__write_deps_file__Var_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_185, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_185, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_187));
    }
    {
      parse_tree__write_deps_file__Var_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_184, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_184, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_185));
    }
    {
      parse_tree__write_deps_file__Var_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_182, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_182, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_184));
    }
    {
      parse_tree__write_deps_file__Var_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_181, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameOs_44));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_181, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_182));
    }
    {
      parse_tree__write_deps_file__Var_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_179, 0) = ((MR_Box) ((MR_String) "\044(EXT_FOR_EXE) : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_179, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_181));
    }
    {
      parse_tree__write_deps_file__NonJavaMainRule_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__NonJavaMainRule_47, 0) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_25));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__NonJavaMainRule_47, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_179));
    }
    parse_tree__write_deps_file__TypeCtorInfo_456_456 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      parse_tree__write_deps_file__Var_206 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_456_456, parse_tree__write_deps_file__NonJavaMainRule_47, parse_tree__write_deps_file__EndIf_41);
    }
    {
      parse_tree__write_deps_file__Var_205 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_456_456, parse_tree__write_deps_file__Else_40, parse_tree__write_deps_file__Var_206);
    }
    {
      parse_tree__write_deps_file__Var_204 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_456_456, parse_tree__write_deps_file__JavaMainRule_43, parse_tree__write_deps_file__Var_205);
    }
    {
      parse_tree__write_deps_file__Rules_48 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_456_456, parse_tree__write_deps_file__IfJava_39, parse_tree__write_deps_file__Var_204);
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__Rules_48);
    }
    {
      parse_tree__write_deps_file__Var_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_210, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameClasses_42));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__MmakeRuleExecutableJava_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableJava_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableJava_49, 1) = ((MR_Box) ((MR_String) "executable_java"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableJava_49, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableJava_49, 3) = ((MR_Box) (*parse_tree__write_deps_file__ExeFileName_25));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableJava_49, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_210));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableJava_49, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_215 = mercury__string__f_43_43_2_f_0(*parse_tree__write_deps_file__ExeFileName_25, (MR_String) "\044(EXT_FOR_EXE)");
    }
    {
      parse_tree__write_deps_file__Var_220 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_220, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLLibsDep_33));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_220, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_219, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjs_34));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_219, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_220));
    }
    {
      parse_tree__write_deps_file__Var_218 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_218, 0) = ((MR_Box) (parse_tree__write_deps_file__InitObjFileName_22));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_218, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_219));
    }
    {
      parse_tree__write_deps_file__Var_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_217, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameOs_44));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_217, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_218));
    }
    {
      parse_tree__write_deps_file__Var_223 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_223, 0) = ((MR_Box) (parse_tree__write_deps_file__NonJavaMainRuleAction1Line2_46));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_223, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_222, 0) = ((MR_Box) (parse_tree__write_deps_file__NonJavaMainRuleAction1Line1_45));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_222, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_223));
    }
    {
      parse_tree__write_deps_file__MmakeRuleExecutableNonJava_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableNonJava_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableNonJava_50, 1) = ((MR_Box) ((MR_String) "executable_non_java"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableNonJava_50, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableNonJava_50, 3) = ((MR_Box) (parse_tree__write_deps_file__Var_215));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableNonJava_50, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_217));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleExecutableNonJava_50, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_222));
    }
    parse_tree__write_deps_file__Var_225 = (MR_Word) &parse_tree__write_deps_file_scalar_common_7[0];
    {
      parse_tree__write_deps_file__MmakeFragmentExecutable_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentExecutable_51, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_225));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentExecutable_51, 1) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleExecutableJava_49));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentExecutable_51, 2) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleExecutableNonJava_50));
    }
    {
      libs__mmakefiles__gather_mmake_fragment_6_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__MmakeFragmentExecutable_51, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_122_122, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_227_227);
    }
    {
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_17, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_19, (MR_String) "", (MR_Integer) 1, &parse_tree__write_deps_file__LibTargetName_52);
    }
    {
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_17, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_19, (MR_String) ".\044A", (MR_Integer) 0, parse_tree__write_deps_file__LibFileName_27);
    }
    {
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_17, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_19, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 0, parse_tree__write_deps_file__SharedLibFileName_28);
    }
    {
      parse_tree__file_names__module_name_to_lib_file_name_8_p_0(parse_tree__write_deps_file__Globals_17, (MR_String) "lib", parse_tree__write_deps_file__ModuleName_19, (MR_String) ".\044(EXT_FOR_SHARED_LIB)", (MR_Integer) 1, &parse_tree__write_deps_file__MaybeSharedLibFileName_53);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_17, (MR_Integer) 1, (MR_String) ".jar", parse_tree__write_deps_file__ModuleName_19, parse_tree__write_deps_file__JarFileName_26);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_17, (MR_Integer) 618, &parse_tree__write_deps_file__UseInstallName_54);
    }
    switch (parse_tree__write_deps_file__UseInstallName_54) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__write_deps_file__InstallNameOpt_55 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__get_install_name_option_3_p_0(parse_tree__write_deps_file__Globals_17, *parse_tree__write_deps_file__SharedLibFileName_28, &parse_tree__write_deps_file__InstallNameOpt_55);
        }
        break;
    }
    parse_tree__write_deps_file__MaybeOptsVar_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MaybeOptsVarPair_23, (MR_Integer) 0)));
    parse_tree__write_deps_file__MaybeOptsVarSpace_57 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MaybeOptsVarPair_23, (MR_Integer) 1)));
    parse_tree__write_deps_file__MaybeTransOptsVar_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MaybeTransOptsVarPair_24, (MR_Integer) 0)));
    parse_tree__write_deps_file__MaybeTransOptsVarSpace_59 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MaybeTransOptsVarPair_24, (MR_Integer) 1)));
    {
      parse_tree__write_deps_file__Var_250 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_20, (MR_String) ".ints)");
    }
    {
      parse_tree__write_deps_file__ModuleMakeVarNameInts_60 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_250);
    }
    {
      parse_tree__write_deps_file__Var_253 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_20, (MR_String) ".int3s)");
    }
    {
      parse_tree__write_deps_file__ModuleMakeVarNameInt3s_61 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_253);
    }
    parse_tree__write_deps_file__Var_263 = (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[170]);
    {
      parse_tree__write_deps_file__Var_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_262, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_21));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_262, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_263));
    }
    {
      parse_tree__write_deps_file__Var_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_261, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeTransOptsVarSpace_59));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_261, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_262));
    }
    {
      parse_tree__write_deps_file__Var_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_260, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeOptsVarSpace_57));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_260, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_261));
    }
    {
      parse_tree__write_deps_file__Var_258 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_258, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_258, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_260));
    }
    {
      parse_tree__write_deps_file__Var_257 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_257, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameInt3s_61));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_257, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_258));
    }
    {
      parse_tree__write_deps_file__Var_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_255, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_255, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_257));
    }
    {
      parse_tree__write_deps_file__AllInts_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__AllInts_62, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameInts_60));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__AllInts_62, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_255));
    }
    {
      parse_tree__write_deps_file__Var_267 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_267, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameInt3s_61));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_267, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_266, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameInts_60));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_266, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_267));
    }
    {
      parse_tree__write_deps_file__Var_271 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_271, 0) = ((MR_Box) (parse_tree__write_deps_file__InitFileName_21));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_271, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_270 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_456_456, parse_tree__write_deps_file__MaybeTransOptsVar_58, parse_tree__write_deps_file__Var_271);
    }
    {
      parse_tree__write_deps_file__Var_269 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_456_456, parse_tree__write_deps_file__MaybeOptsVar_56, parse_tree__write_deps_file__Var_270);
    }
    {
      parse_tree__write_deps_file__AllIntSources_63 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_456_456, parse_tree__write_deps_file__Var_266, parse_tree__write_deps_file__Var_269);
    }
    {
      parse_tree__write_deps_file__Var_276 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_276, 0) = ((MR_Box) ((MR_String) " \\\n\t\t"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_276, 1) = ((MR_Box) (parse_tree__write_deps_file__AllInts_62));
    }
    {
      parse_tree__write_deps_file__Var_275 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_275, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_26));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_275, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_276));
    }
    {
      parse_tree__write_deps_file__Var_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_273, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_273, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_275));
    }
    {
      parse_tree__write_deps_file__JavaLibRule_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaLibRule_64, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_52));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__JavaLibRule_64, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_273));
    }
    {
      parse_tree__write_deps_file__Var_283 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_283, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeSharedLibFileName_53));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_283, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_276));
    }
    {
      parse_tree__write_deps_file__Var_281 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_281, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_281, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_283));
    }
    {
      parse_tree__write_deps_file__Var_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_280, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_27));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_280, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_281));
    }
    {
      parse_tree__write_deps_file__Var_278 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_278, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_278, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_280));
    }
    {
      parse_tree__write_deps_file__NonJavaLibRule_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__NonJavaLibRule_65, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_52));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__NonJavaLibRule_65, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_278));
    }
    {
      parse_tree__write_deps_file__Var_288 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_456_456, parse_tree__write_deps_file__NonJavaLibRule_65, parse_tree__write_deps_file__EndIf_41);
    }
    {
      parse_tree__write_deps_file__Var_287 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_456_456, parse_tree__write_deps_file__Else_40, parse_tree__write_deps_file__Var_288);
    }
    {
      parse_tree__write_deps_file__Var_286 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_456_456, parse_tree__write_deps_file__JavaLibRule_64, parse_tree__write_deps_file__Var_287);
    }
    {
      parse_tree__write_deps_file__LibRules_66 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_456_456, parse_tree__write_deps_file__IfJava_39, parse_tree__write_deps_file__Var_286);
    }
    {
      parse_tree__write_deps_file__Var_293 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_293, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_293, 1) = ((MR_Box) (parse_tree__write_deps_file__LibRules_66));
    }
    {
      parse_tree__write_deps_file__Var_292 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_292, 0) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_52));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_292, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_293));
    }
    {
      parse_tree__write_deps_file__Var_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_289, 0) = ((MR_Box) ((MR_String) ".PHONY : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_289, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_292));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__Var_289);
    }
    {
      parse_tree__write_deps_file__Var_297 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_297, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_26));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_297, 1) = ((MR_Box) (parse_tree__write_deps_file__AllIntSources_63));
    }
    {
      parse_tree__write_deps_file__MmakeRuleLibTargetJava_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetJava_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetJava_67, 1) = ((MR_Box) ((MR_String) "lib_target_java"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetJava_67, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetJava_67, 3) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_52));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetJava_67, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_297));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetJava_67, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_302 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_302, 0) = ((MR_Box) (parse_tree__write_deps_file__MaybeSharedLibFileName_53));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_302, 1) = ((MR_Box) (parse_tree__write_deps_file__AllIntSources_63));
    }
    {
      parse_tree__write_deps_file__Var_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_301, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_27));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_301, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_302));
    }
    {
      parse_tree__write_deps_file__MmakeRuleLibTargetNonJava_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetNonJava_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetNonJava_68, 1) = ((MR_Box) ((MR_String) "lib_target_non_java"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetNonJava_68, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetNonJava_68, 3) = ((MR_Box) (parse_tree__write_deps_file__LibTargetName_52));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetNonJava_68, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_301));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLibTargetNonJava_68, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__MmakeFragmentLibTarget_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentLibTarget_69, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_225));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentLibTarget_69, 1) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleLibTargetJava_67));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentLibTarget_69, 2) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleLibTargetNonJava_68));
    }
    {
      libs__mmakefiles__gather_mmake_fragment_6_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__MmakeFragmentLibTarget_69, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_227_227, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_306_306);
    }
    {
      parse_tree__write_deps_file__Var_309 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_20, (MR_String) ".pic_os)");
    }
    {
      parse_tree__write_deps_file__ModuleMakeVarNamePicOs_70 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_309);
    }
    {
      parse_tree__write_deps_file__Var_319 = mercury__string__f_43_43_2_f_0(*parse_tree__write_deps_file__SharedLibFileName_28, (MR_String) " \\");
    }
    {
      parse_tree__write_deps_file__Var_317 = mercury__string__f_43_43_2_f_0((MR_String) "-o ", parse_tree__write_deps_file__Var_319);
    }
    {
      parse_tree__write_deps_file__Var_315 = mercury__string__f_43_43_2_f_0((MR_String) " \044(ALL_LD_LIBFLAGS) ", parse_tree__write_deps_file__Var_317);
    }
    {
      parse_tree__write_deps_file__Var_314 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__InstallNameOpt_55, parse_tree__write_deps_file__Var_315);
    }
    {
      parse_tree__write_deps_file__Var_312 = mercury__string__f_43_43_2_f_0((MR_String) "-- ", parse_tree__write_deps_file__Var_314);
    }
    {
      parse_tree__write_deps_file__SharedLibAction1Line1_71 = mercury__string__f_43_43_2_f_0((MR_String) "\044(ML) --make-shared-lib \044(ALL_GRADEFLAGS) \044(ALL_MLFLAGS) ", parse_tree__write_deps_file__Var_312);
    }
    {
      parse_tree__write_deps_file__Var_322 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarNamePicOs_70, (MR_String) " \\");
    }
    {
      parse_tree__write_deps_file__SharedLibAction1Line2_72 = mercury__string__f_43_43_2_f_0((MR_String) "\t", parse_tree__write_deps_file__Var_322);
    }
    {
      parse_tree__write_deps_file__Var_325 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__All_MLPicObjs_35, (MR_String) " \044(ALL_MLLIBS)");
    }
    {
      parse_tree__write_deps_file__SharedLibAction1Line3_73 = mercury__string__f_43_43_2_f_0((MR_String) "\t", parse_tree__write_deps_file__Var_325);
    }
    {
      parse_tree__write_deps_file__Var_354 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_354, 0) = ((MR_Box) (parse_tree__write_deps_file__SharedLibAction1Line3_73));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_354, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[13])));
    }
    {
      parse_tree__write_deps_file__Var_352 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_352, 0) = ((MR_Box) ((MR_String) "\t"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_352, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_354));
    }
    {
      parse_tree__write_deps_file__Var_350 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_350, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_350, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_352));
    }
    {
      parse_tree__write_deps_file__Var_349 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_349, 0) = ((MR_Box) (parse_tree__write_deps_file__SharedLibAction1Line2_72));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_349, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_350));
    }
    {
      parse_tree__write_deps_file__Var_347 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_347, 0) = ((MR_Box) ((MR_String) "\t"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_347, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_349));
    }
    {
      parse_tree__write_deps_file__Var_345 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_345, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_345, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_347));
    }
    {
      parse_tree__write_deps_file__Var_344 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_344, 0) = ((MR_Box) (parse_tree__write_deps_file__SharedLibAction1Line1_71));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_344, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_345));
    }
    {
      parse_tree__write_deps_file__Var_342 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_342, 0) = ((MR_Box) ((MR_String) "\t"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_342, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_344));
    }
    {
      parse_tree__write_deps_file__Var_340 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_340, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_340, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_342));
    }
    {
      parse_tree__write_deps_file__Var_339 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_339, 0) = ((MR_Box) (parse_tree__write_deps_file__NL_All_MLLibsDep_36));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_339, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_340));
    }
    {
      parse_tree__write_deps_file__Var_337 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_337, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_337, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_339));
    }
    {
      parse_tree__write_deps_file__Var_336 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_336, 0) = ((MR_Box) (parse_tree__write_deps_file__NL_All_MLPicObjs_38));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_336, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_337));
    }
    {
      parse_tree__write_deps_file__Var_334 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_334, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_334, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_336));
    }
    {
      parse_tree__write_deps_file__Var_333 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_333, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNamePicOs_70));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_333, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_334));
    }
    {
      parse_tree__write_deps_file__Var_331 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_331, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_331, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_333));
    }
    {
      parse_tree__write_deps_file__Var_330 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_330, 0) = ((MR_Box) (*parse_tree__write_deps_file__SharedLibFileName_28));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_330, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_331));
    }
    {
      parse_tree__write_deps_file__Var_327 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_327, 0) = ((MR_Box) ((MR_String) "ifneq (\044(EXT_FOR_SHARED_LIB),\044A)\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_327, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_330));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__Var_327);
    }
    {
      parse_tree__write_deps_file__Var_363 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_363, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLPicObjs_35));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_363, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_220));
    }
    {
      parse_tree__write_deps_file__Var_362 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_362, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNamePicOs_70));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_362, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_363));
    }
    {
      parse_tree__write_deps_file__Var_368 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_368, 0) = ((MR_Box) (parse_tree__write_deps_file__SharedLibAction1Line3_73));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_368, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_367 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_367, 0) = ((MR_Box) (parse_tree__write_deps_file__SharedLibAction1Line2_72));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_367, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_368));
    }
    {
      parse_tree__write_deps_file__Var_366 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_366, 0) = ((MR_Box) (parse_tree__write_deps_file__SharedLibAction1Line1_71));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_366, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_367));
    }
    {
      parse_tree__write_deps_file__MmakeRuleSharedLib_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleSharedLib_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleSharedLib_74, 1) = ((MR_Box) ((MR_String) "shared_lib"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleSharedLib_74, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleSharedLib_74, 3) = ((MR_Box) (*parse_tree__write_deps_file__SharedLibFileName_28));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleSharedLib_74, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_362));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleSharedLib_74, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_366));
    }
    {
      parse_tree__write_deps_file__Var_374 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_374, 0) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleSharedLib_74));
    }
    {
      parse_tree__write_deps_file__Var_373 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_373, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_374));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_373, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__MmakeFragmentSharedLib_75 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeFragmentSharedLib_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(2), &parse_tree__write_deps_file_scalar_common_1[178])));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeFragmentSharedLib_75, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_373));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeFragmentSharedLib_75, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      libs__mmakefiles__gather_mmake_fragment_6_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__MmakeFragmentSharedLib_75, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_306_306, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_377_377);
    }
    {
      parse_tree__write_deps_file__LibAction1_76 = mercury__string__f_43_43_2_f_0((MR_String) "rm -f ", *parse_tree__write_deps_file__LibFileName_27);
    }
    {
      parse_tree__write_deps_file__Var_384 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarNameOs_44, (MR_String) " \\");
    }
    {
      parse_tree__write_deps_file__Var_382 = mercury__string__f_43_43_2_f_0((MR_String) " ", parse_tree__write_deps_file__Var_384);
    }
    {
      parse_tree__write_deps_file__Var_381 = mercury__string__f_43_43_2_f_0(*parse_tree__write_deps_file__LibFileName_27, parse_tree__write_deps_file__Var_382);
    }
    {
      parse_tree__write_deps_file__LibAction2Line1_77 = mercury__string__f_43_43_2_f_0((MR_String) "\044(AR) \044(ALL_ARFLAGS) \044(AR_LIBFILE_OPT)", parse_tree__write_deps_file__Var_381);
    }
    {
      parse_tree__write_deps_file__LibAction2Line2_78 = mercury__string__f_43_43_2_f_0((MR_String) "\t", parse_tree__write_deps_file__All_MLObjs_34);
    }
    {
      parse_tree__write_deps_file__LibAction3_79 = mercury__string__f_43_43_2_f_0((MR_String) "\044(RANLIB) \044(ALL_RANLIBFLAGS) ", *parse_tree__write_deps_file__LibFileName_27);
    }
    {
      parse_tree__write_deps_file__Var_415 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_415, 0) = ((MR_Box) (parse_tree__write_deps_file__LibAction3_79));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_415, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_263));
    }
    {
      parse_tree__write_deps_file__Var_413 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_413, 0) = ((MR_Box) ((MR_String) "\t"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_413, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_415));
    }
    {
      parse_tree__write_deps_file__Var_411 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_411, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_411, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_413));
    }
    {
      parse_tree__write_deps_file__Var_410 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_410, 0) = ((MR_Box) (parse_tree__write_deps_file__LibAction2Line2_78));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_410, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_411));
    }
    {
      parse_tree__write_deps_file__Var_408 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_408, 0) = ((MR_Box) ((MR_String) "\t"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_408, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_410));
    }
    {
      parse_tree__write_deps_file__Var_406 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_406, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_406, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_408));
    }
    {
      parse_tree__write_deps_file__Var_405 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_405, 0) = ((MR_Box) (parse_tree__write_deps_file__LibAction2Line1_77));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_405, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_406));
    }
    {
      parse_tree__write_deps_file__Var_403 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_403, 0) = ((MR_Box) ((MR_String) "\t"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_403, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_405));
    }
    {
      parse_tree__write_deps_file__Var_401 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_401, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_401, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_403));
    }
    {
      parse_tree__write_deps_file__Var_400 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_400, 0) = ((MR_Box) (parse_tree__write_deps_file__LibAction1_76));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_400, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_401));
    }
    {
      parse_tree__write_deps_file__Var_398 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_398, 0) = ((MR_Box) ((MR_String) "\t"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_398, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_400));
    }
    {
      parse_tree__write_deps_file__Var_396 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_396, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_396, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_398));
    }
    {
      parse_tree__write_deps_file__Var_395 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_395, 0) = ((MR_Box) (parse_tree__write_deps_file__NL_All_MLObjs_37));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_395, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_396));
    }
    {
      parse_tree__write_deps_file__Var_393 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_393, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_393, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_395));
    }
    {
      parse_tree__write_deps_file__Var_392 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_392, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameOs_44));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_392, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_393));
    }
    {
      parse_tree__write_deps_file__Var_390 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_390, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_390, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_392));
    }
    {
      parse_tree__write_deps_file__Var_388 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_388, 0) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_27));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_388, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_390));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__Var_388);
    }
    {
      parse_tree__write_deps_file__Var_422 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_422, 0) = ((MR_Box) (parse_tree__write_deps_file__All_MLObjs_34));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_422, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_421 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_421, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameOs_44));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_421, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_422));
    }
    {
      parse_tree__write_deps_file__Var_427 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_427, 0) = ((MR_Box) (parse_tree__write_deps_file__LibAction3_79));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_427, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_426 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_426, 0) = ((MR_Box) (parse_tree__write_deps_file__LibAction2Line2_78));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_426, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_427));
    }
    {
      parse_tree__write_deps_file__Var_425 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_425, 0) = ((MR_Box) (parse_tree__write_deps_file__LibAction2Line1_77));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_425, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_426));
    }
    {
      parse_tree__write_deps_file__Var_424 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_424, 0) = ((MR_Box) (parse_tree__write_deps_file__LibAction1_76));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_424, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_425));
    }
    {
      parse_tree__write_deps_file__MmakeRuleLib_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLib_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLib_80, 1) = ((MR_Box) ((MR_String) "lib"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLib_80, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLib_80, 3) = ((MR_Box) (*parse_tree__write_deps_file__LibFileName_27));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLib_80, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_421));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleLib_80, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_424));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__MmakeRuleLib_80, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_377_377, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_429_429);
    }
    {
      parse_tree__module_cmds__list_class_files_for_jar_mmake_3_p_0(parse_tree__write_deps_file__Globals_17, parse_tree__write_deps_file__ModuleMakeVarNameClasses_42, &parse_tree__write_deps_file__ListClassFiles_81);
    }
    {
      parse_tree__write_deps_file__Var_433 = mercury__string__f_43_43_2_f_0((MR_String) " ", parse_tree__write_deps_file__ListClassFiles_81);
    }
    {
      parse_tree__write_deps_file__Var_432 = mercury__string__f_43_43_2_f_0(*parse_tree__write_deps_file__JarFileName_26, parse_tree__write_deps_file__Var_433);
    }
    {
      parse_tree__write_deps_file__JarAction1_82 = mercury__string__f_43_43_2_f_0((MR_String) "\044(JAR) \044(JAR_CREATE_FLAGS) ", parse_tree__write_deps_file__Var_432);
    }
    {
      parse_tree__write_deps_file__Var_444 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_444, 0) = ((MR_Box) (parse_tree__write_deps_file__JarAction1_82));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_444, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_263));
    }
    {
      parse_tree__write_deps_file__Var_442 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_442, 0) = ((MR_Box) ((MR_String) "\t"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_442, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_444));
    }
    {
      parse_tree__write_deps_file__Var_440 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_440, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_440, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_442));
    }
    {
      parse_tree__write_deps_file__Var_439 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_439, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarNameClasses_42));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_439, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_440));
    }
    {
      parse_tree__write_deps_file__Var_437 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_437, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_437, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_439));
    }
    {
      parse_tree__write_deps_file__Var_435 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_435, 0) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_26));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_435, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_437));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__Var_435);
    }
    {
      parse_tree__write_deps_file__Var_452 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_452, 0) = ((MR_Box) (parse_tree__write_deps_file__JarAction1_82));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_452, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__MmakeRuleJar_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleJar_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleJar_83, 1) = ((MR_Box) ((MR_String) "jar"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleJar_83, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleJar_83, 3) = ((MR_Box) (*parse_tree__write_deps_file__JarFileName_26));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleJar_83, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_210));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleJar_83, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_452));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_18, parse_tree__write_deps_file__MmakeRuleJar_83, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_429_429, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_85);
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
    MR_String parse_tree__write_deps_file__ModuleNameString_15;
    MR_String parse_tree__write_deps_file__Version_16;
    MR_String parse_tree__write_deps_file__Fullarch_17;
    MR_Word parse_tree__write_deps_file__MmakeEntryHeader_18;
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
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_49_49;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_70_70;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_102_102;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_104_104;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_106_106;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_108_108;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_110_110;

    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# vim: ts=8 sw=8 noexpandtab ft=make\n\n");
    }
    {
      libs__mmakefiles__start_mmakefile_4_p_0(parse_tree__write_deps_file__DepStream_12, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_49_49);
    }
    {
      parse_tree__write_deps_file__ModuleNameString_15 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_10);
    }
    {
      mercury__library__version_2_p_0(&parse_tree__write_deps_file__Version_16, &parse_tree__write_deps_file__Fullarch_17);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Automatically generated dependencies for module \140");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleNameString_15);
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Generated by the Mercury compiler, version ");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Version_16);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n# configured for ");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Fullarch_17);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".\n\n");
    }
    {
      parse_tree__write_deps_file__MmakeEntryHeader_18 = parse_tree__write_deps_file__mmakefile_header_comment_5_f_0((MR_String) "dependencies", parse_tree__write_deps_file__ModuleNameString_15, parse_tree__write_deps_file__SourceFileName_9, parse_tree__write_deps_file__Version_16, parse_tree__write_deps_file__Fullarch_17);
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeEntryHeader_18, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_49_49, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_70_70);
    }
    {
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__ModuleMakeVarName_19);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 0, (MR_String) ".init", parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__InitFileName_20);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 0, (MR_String) "_init.c", parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__InitCFileName_21);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 0, (MR_String) "_init.\044O", parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__InitObjFileName_22);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 0, (MR_String) "_init.pic_o", parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__InitPicObjFileName_23);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 128, &parse_tree__write_deps_file__MmcMakeDeps_24);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 331, &parse_tree__write_deps_file__Intermod_25);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 335, &parse_tree__write_deps_file__TransOpt_26);
    }
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
          MR_String parse_tree__write_deps_file__Var_88;

          {
            parse_tree__write_deps_file__Var_88 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_19, (MR_String) ".module_deps)");
          }
          {
            parse_tree__write_deps_file__ModuleDepsVar_27 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_88);
          }
          {
            parse_tree__write_deps_file__MaybeModuleDepsVar_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeModuleDepsVar_28, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepsVar_27));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeModuleDepsVar_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__write_deps_file__MaybeModuleDepsVarSpace_29 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleDepsVar_27, (MR_String) " ");
          }
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
          MR_String parse_tree__write_deps_file__Var_93;

          {
            parse_tree__write_deps_file__Var_93 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_19, (MR_String) ".opts)");
          }
          {
            parse_tree__write_deps_file__OptsVar_30 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_93);
          }
          {
            parse_tree__write_deps_file__MaybeOptsVar_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeOptsVar_31, 0) = ((MR_Box) (parse_tree__write_deps_file__OptsVar_30));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeOptsVar_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__write_deps_file__MaybeOptsVarSpace_32 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__OptsVar_30, (MR_String) " ");
          }
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
          MR_String parse_tree__write_deps_file__Var_98;

          {
            parse_tree__write_deps_file__Var_98 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_19, (MR_String) ".trans_opts)");
          }
          {
            parse_tree__write_deps_file__TransOptsVar_33 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_98);
          }
          {
            parse_tree__write_deps_file__MaybeTransOptsVar_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeTransOptsVar_34, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptsVar_33));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeTransOptsVar_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            parse_tree__write_deps_file__MaybeTransOptsVarSpace_35 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__TransOptsVar_33, (MR_String) " ");
          }
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
    {
      parse_tree__write_deps_file__generate_dep_file_exec_library_targets_16_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__ModuleMakeVarName_19, parse_tree__write_deps_file__InitFileName_20, parse_tree__write_deps_file__InitObjFileName_22, parse_tree__write_deps_file__MaybeOptsVarPair_37, parse_tree__write_deps_file__MaybeTransOptsVarPair_38, &parse_tree__write_deps_file__ExeFileName_39, &parse_tree__write_deps_file__JarFileName_40, &parse_tree__write_deps_file__LibFileName_41, &parse_tree__write_deps_file__SharedLibFileName_42, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_70_70, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_102_102);
    }
    {
      parse_tree__write_deps_file__generate_dep_file_init_targets_12_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__ModuleMakeVarName_19, parse_tree__write_deps_file__InitCFileName_21, parse_tree__write_deps_file__InitFileName_20, &parse_tree__write_deps_file__DepFileName_43, &parse_tree__write_deps_file__DvFileName_44, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_102_102, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_104_104);
    }
    {
      parse_tree__write_deps_file__generate_dep_file_install_targets_15_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__DepsMap_11, parse_tree__write_deps_file__ModuleMakeVarName_19, parse_tree__write_deps_file__MmcMakeDeps_24, parse_tree__write_deps_file__Intermod_25, parse_tree__write_deps_file__TransOpt_26, parse_tree__write_deps_file__MaybeModuleDepsVarPair_36, parse_tree__write_deps_file__MaybeOptsVarPair_37, parse_tree__write_deps_file__MaybeTransOptsVarPair_38, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_104_104, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_106_106);
    }
    {
      parse_tree__write_deps_file__generate_dep_file_collective_targets_8_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__ModuleMakeVarName_19, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_106_106, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_108_108);
    }
    {
      parse_tree__write_deps_file__generate_dep_file_clean_targets_18_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleName_10, parse_tree__write_deps_file__ModuleMakeVarName_19, parse_tree__write_deps_file__ExeFileName_39, parse_tree__write_deps_file__InitCFileName_21, parse_tree__write_deps_file__InitObjFileName_22, parse_tree__write_deps_file__InitPicObjFileName_23, parse_tree__write_deps_file__InitFileName_20, parse_tree__write_deps_file__LibFileName_41, parse_tree__write_deps_file__SharedLibFileName_42, parse_tree__write_deps_file__JarFileName_40, parse_tree__write_deps_file__DepFileName_43, parse_tree__write_deps_file__DvFileName_44, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_108_108, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_110_110);
    }
    {
      libs__mmakefiles__end_mmakefile_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_110_110);
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
parse_tree__write_deps_file__generate_dv_file_7_p_0_6(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_String parse_tree__write_deps_file__conv4_LambdaHeadVar__2_198;

    {
      parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1529__1_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv4_LambdaHeadVar__2_198);
    }
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv4_LambdaHeadVar__2_198));
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_5(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;

    {
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__generate_dv_file__1487__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
    return parse_tree__write_deps_file__succeeded;
  }
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_4(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
{
  {
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_String parse_tree__write_deps_file__conv3_HeadVar__3_3;

    {
      parse_tree__write_deps_file__conv3_HeadVar__3_3 = parse_tree__write_deps_file__add_suffix_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
    }
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv3_HeadVar__3_3));
    return parse_tree__write_deps_file__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__generate_dv_file_7_p_0_3(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
{
  {
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_String parse_tree__write_deps_file__conv2_HeadVar__3_3;

    {
      parse_tree__write_deps_file__conv2_HeadVar__3_3 = parse_tree__write_deps_file__add_suffix_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1));
    }
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv2_HeadVar__3_3));
    return parse_tree__write_deps_file__wrapper_arg_2;
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
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_904_904;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_911_911;
    MR_String parse_tree__write_deps_file__ModuleNameString_15;
    MR_String parse_tree__write_deps_file__Version_16;
    MR_String parse_tree__write_deps_file__Fullarch_17;
    MR_Word parse_tree__write_deps_file__MmakeEntryHeader_18;
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
    MR_String parse_tree__write_deps_file__ForeignVarName_48;
    MR_Word parse_tree__write_deps_file__ForeignBasis_49;
    MR_Word parse_tree__write_deps_file__MmakeVarForeignDlls_50;
    MR_String parse_tree__write_deps_file__ModsVarName_51;
    MR_Word parse_tree__write_deps_file__Basis_52;
    MR_Word parse_tree__write_deps_file__MmakeVarInitCs_53;
    MR_Word parse_tree__write_deps_file__ExtraLinkObjs_54;
    MR_Word parse_tree__write_deps_file__ExtraLinkObjFileNamesC_55;
    MR_Word parse_tree__write_deps_file__MmakeVarCs_56;
    MR_Word parse_tree__write_deps_file__MmakeVarDlls_57;
    MR_Word parse_tree__write_deps_file__ExtraLinkObjFileNamesOs_58;
    MR_Word parse_tree__write_deps_file__MmakeVarAllOs_59;
    MR_Word parse_tree__write_deps_file__ExtraLinkObjFileNamesPicOs_60;
    MR_Word parse_tree__write_deps_file__MmakeVarAllPicOs_61;
    MR_Word parse_tree__write_deps_file__MmakeVarOs_62;
    MR_Word parse_tree__write_deps_file__MmakeVarPicOs_63;
    MR_Word parse_tree__write_deps_file__MmakeVarUseds_64;
    MR_Word parse_tree__write_deps_file__MmakeVarJavas_65;
    MR_Word parse_tree__write_deps_file__MmakeVarClasses_66;
    MR_Word parse_tree__write_deps_file__MmakeVarDirs_67;
    MR_Word parse_tree__write_deps_file__MmakeVarDirOs_68;
    MR_Word parse_tree__write_deps_file__MmakeVarDates_69;
    MR_Word parse_tree__write_deps_file__MmakeVarDate0s_70;
    MR_Word parse_tree__write_deps_file__MmakeVarDate3s_71;
    MR_Word parse_tree__write_deps_file__MmakeVarOptDates_72;
    MR_Word parse_tree__write_deps_file__MmakeVarTransOptDates_73;
    MR_Word parse_tree__write_deps_file__MmakeVarCDates_74;
    MR_Word parse_tree__write_deps_file__MmakeVarJavaDates_75;
    MR_Word parse_tree__write_deps_file__MmakeVarDs_76;
    MR_Word parse_tree__write_deps_file__MmakeVarModuleDeps_77;
    MR_Word parse_tree__write_deps_file__HighLevelCode_78;
    MR_Word parse_tree__write_deps_file__MihSources_79;
    MR_Word parse_tree__write_deps_file__MmakeVarMihs_80;
    MR_Word parse_tree__write_deps_file__MhSources_81;
    MR_Word parse_tree__write_deps_file__MmakeVarMhs_82;
    MR_Word parse_tree__write_deps_file__MmakeVarAllMihs_83;
    MR_Word parse_tree__write_deps_file__MmakeVarAllMhs_84;
    MR_Word parse_tree__write_deps_file__MmakeVarInts_85;
    MR_String parse_tree__write_deps_file__ParentModsVarName_86;
    MR_Word parse_tree__write_deps_file__ParentBasis_87;
    MR_Word parse_tree__write_deps_file__MmakeVarInt0s_88;
    MR_Word parse_tree__write_deps_file__MmakeVarAllInt0s_89;
    MR_Word parse_tree__write_deps_file__MmakeVarInt3s_90;
    MR_Word parse_tree__write_deps_file__MmakeVarOpts_91;
    MR_Word parse_tree__write_deps_file__MmakeVarTransOpts_92;
    MR_Word parse_tree__write_deps_file__MmakeVarAnalysiss_93;
    MR_Word parse_tree__write_deps_file__MmakeVarRequests_94;
    MR_Word parse_tree__write_deps_file__MmakeVarImdgs_95;
    MR_Word parse_tree__write_deps_file__MmakeVarProfs_96;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_101_101;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_122_122;
    MR_Word parse_tree__write_deps_file__Var_125;
    MR_String parse_tree__write_deps_file__Var_133;
    MR_Word parse_tree__write_deps_file__Var_135;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_138_138;
    MR_String parse_tree__write_deps_file__Var_147;
    MR_Word parse_tree__write_deps_file__Var_149;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_152_152;
    MR_String parse_tree__write_deps_file__Var_163;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_165_165;
    MR_Word parse_tree__write_deps_file__Var_167;
    MR_String parse_tree__write_deps_file__Var_180;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_182_182;
    MR_String parse_tree__write_deps_file__Var_193;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_195_195;
    MR_String parse_tree__write_deps_file__Var_211;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_213_213;
    MR_String parse_tree__write_deps_file__Var_225;
    MR_String parse_tree__write_deps_file__Var_227;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_232_232;
    MR_String parse_tree__write_deps_file__Var_244;
    MR_String parse_tree__write_deps_file__Var_246;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_251_251;
    MR_String parse_tree__write_deps_file__Var_263;
    MR_Word parse_tree__write_deps_file__Var_265;
    MR_String parse_tree__write_deps_file__Var_266;
    MR_String parse_tree__write_deps_file__Var_268;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_270_270;
    MR_String parse_tree__write_deps_file__Var_280;
    MR_String parse_tree__write_deps_file__Var_282;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_287_287;
    MR_String parse_tree__write_deps_file__Var_299;
    MR_Word parse_tree__write_deps_file__Var_301;
    MR_String parse_tree__write_deps_file__Var_302;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_307_307;
    MR_String parse_tree__write_deps_file__Var_319;
    MR_Word parse_tree__write_deps_file__Var_321;
    MR_String parse_tree__write_deps_file__Var_322;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_327_327;
    MR_String parse_tree__write_deps_file__Var_335;
    MR_String parse_tree__write_deps_file__Var_337;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_342_342;
    MR_String parse_tree__write_deps_file__Var_350;
    MR_String parse_tree__write_deps_file__Var_352;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_357_357;
    MR_String parse_tree__write_deps_file__Var_367;
    MR_String parse_tree__write_deps_file__Var_369;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_374_374;
    MR_String parse_tree__write_deps_file__Var_384;
    MR_String parse_tree__write_deps_file__Var_386;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_391_391;
    MR_String parse_tree__write_deps_file__Var_408;
    MR_Word parse_tree__write_deps_file__Var_410;
    MR_String parse_tree__write_deps_file__Var_411;
    MR_Word parse_tree__write_deps_file__Var_416;
    MR_String parse_tree__write_deps_file__Var_417;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_423_423;
    MR_String parse_tree__write_deps_file__Var_433;
    MR_String parse_tree__write_deps_file__Var_435;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_440_440;
    MR_String parse_tree__write_deps_file__Var_450;
    MR_String parse_tree__write_deps_file__Var_452;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_457_457;
    MR_String parse_tree__write_deps_file__Var_467;
    MR_String parse_tree__write_deps_file__Var_469;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_474_474;
    MR_String parse_tree__write_deps_file__Var_484;
    MR_String parse_tree__write_deps_file__Var_486;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_491_491;
    MR_String parse_tree__write_deps_file__Var_501;
    MR_String parse_tree__write_deps_file__Var_503;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_508_508;
    MR_String parse_tree__write_deps_file__Var_518;
    MR_String parse_tree__write_deps_file__Var_520;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_525_525;
    MR_String parse_tree__write_deps_file__Var_535;
    MR_String parse_tree__write_deps_file__Var_537;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_542_542;
    MR_String parse_tree__write_deps_file__Var_552;
    MR_String parse_tree__write_deps_file__Var_554;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_559_559;
    MR_String parse_tree__write_deps_file__Var_569;
    MR_String parse_tree__write_deps_file__Var_571;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_576_576;
    MR_String parse_tree__write_deps_file__Var_586;
    MR_String parse_tree__write_deps_file__Var_588;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_593_593;
    MR_String parse_tree__write_deps_file__Var_599;
    MR_String parse_tree__write_deps_file__Var_603;
    MR_String parse_tree__write_deps_file__Var_605;
    MR_String parse_tree__write_deps_file__Var_611;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_613_613;
    MR_String parse_tree__write_deps_file__Var_630;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_632_632;
    MR_String parse_tree__write_deps_file__Var_648;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_650_650;
    MR_String parse_tree__write_deps_file__Var_660;
    MR_String parse_tree__write_deps_file__Var_662;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_667_667;
    MR_String parse_tree__write_deps_file__Var_677;
    MR_String parse_tree__write_deps_file__Var_679;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_684_684;
    MR_String parse_tree__write_deps_file__Var_699;
    MR_Word parse_tree__write_deps_file__Var_701;
    MR_String parse_tree__write_deps_file__Var_702;
    MR_Word parse_tree__write_deps_file__Var_707;
    MR_String parse_tree__write_deps_file__Var_708;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_714_714;
    MR_String parse_tree__write_deps_file__Var_726;
    MR_String parse_tree__write_deps_file__Var_728;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_733_733;
    MR_String parse_tree__write_deps_file__Var_743;
    MR_String parse_tree__write_deps_file__Var_745;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_750_750;
    MR_String parse_tree__write_deps_file__Var_760;
    MR_String parse_tree__write_deps_file__Var_762;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_767_767;
    MR_String parse_tree__write_deps_file__Var_777;
    MR_String parse_tree__write_deps_file__Var_779;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_784_784;
    MR_String parse_tree__write_deps_file__Var_794;
    MR_String parse_tree__write_deps_file__Var_796;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_801_801;
    MR_String parse_tree__write_deps_file__Var_811;
    MR_String parse_tree__write_deps_file__Var_813;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_818_818;
    MR_String parse_tree__write_deps_file__Var_828;
    MR_String parse_tree__write_deps_file__Var_830;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_835_835;
    MR_String parse_tree__write_deps_file__Var_845;
    MR_String parse_tree__write_deps_file__Var_847;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_852_852;
    MR_String parse_tree__write_deps_file__Var_862;
    MR_String parse_tree__write_deps_file__Var_864;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_869_869;
    MR_String parse_tree__write_deps_file__Var_921;
    MR_String parse_tree__write_deps_file__Var_924;
    MR_String parse_tree__write_deps_file__Var_927;
    MR_String parse_tree__write_deps_file__Var_930;
    MR_String parse_tree__write_deps_file__Var_933;
    MR_String parse_tree__write_deps_file__Var_936;
    MR_String parse_tree__write_deps_file__Var_939;
    MR_String parse_tree__write_deps_file__Var_942;
    MR_String parse_tree__write_deps_file__Var_945;
    MR_String parse_tree__write_deps_file__Var_948;
    MR_String parse_tree__write_deps_file__Var_951;
    MR_String parse_tree__write_deps_file__Var_954;
    MR_String parse_tree__write_deps_file__Var_957;
    MR_String parse_tree__write_deps_file__Var_960;
    MR_String parse_tree__write_deps_file__Var_963;
    MR_String parse_tree__write_deps_file__Var_966;
    MR_String parse_tree__write_deps_file__Var_969;
    MR_String parse_tree__write_deps_file__Var_972;
    MR_String parse_tree__write_deps_file__Var_975;
    MR_String parse_tree__write_deps_file__Var_978;
    MR_String parse_tree__write_deps_file__Var_981;
    MR_String parse_tree__write_deps_file__Var_984;
    MR_String parse_tree__write_deps_file__Var_986;
    MR_String parse_tree__write_deps_file__Var_987;
    MR_String parse_tree__write_deps_file__Var_996;
    MR_String parse_tree__write_deps_file__Var_999;
    MR_String parse_tree__write_deps_file__Var_1002;
    MR_String parse_tree__write_deps_file__Var_1005;
    MR_String parse_tree__write_deps_file__Var_1008;
    MR_String parse_tree__write_deps_file__Var_1011;
    MR_String parse_tree__write_deps_file__Var_1014;
    MR_String parse_tree__write_deps_file__Var_1017;
    MR_String parse_tree__write_deps_file__Var_1020;
    MR_String parse_tree__write_deps_file__Var_1023;
    MR_String parse_tree__write_deps_file__Var_1026;
    MR_String parse_tree__write_deps_file__Var_1029;
    MR_String parse_tree__write_deps_file__Var_1032;
    MR_Box parse_tree__write_deps_file__conv5_STATE_VARIABLE_IO_203_203;

    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# vim: ts=8 sw=8 noexpandtab ft=make\n\n");
    }
    {
      libs__mmakefiles__start_mmakefile_4_p_0(parse_tree__write_deps_file__DepStream_12, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_101_101);
    }
    {
      parse_tree__write_deps_file__ModuleNameString_15 = mdbcomp__sym_name__sym_name_to_string_1_f_0(parse_tree__write_deps_file__ModuleName_10);
    }
    {
      mercury__library__version_2_p_0(&parse_tree__write_deps_file__Version_16, &parse_tree__write_deps_file__Fullarch_17);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Automatically generated dependency variables for module \140");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleNameString_15);
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
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "# Generated by the Mercury compiler, version ");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Version_16);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ",\n# configured for ");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__Fullarch_17);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".\n\n");
    }
    {
      parse_tree__write_deps_file__MmakeEntryHeader_18 = parse_tree__write_deps_file__mmakefile_header_comment_5_f_0((MR_String) "dependency variables", parse_tree__write_deps_file__ModuleNameString_15, parse_tree__write_deps_file__SourceFileName_9, parse_tree__write_deps_file__Version_16, parse_tree__write_deps_file__Fullarch_17);
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeEntryHeader_18, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_101_101, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_122_122);
    }
    parse_tree__write_deps_file__TypeCtorInfo_904_904 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    {
      mercury__map__keys_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_904_904, (MR_Word) &parse_tree__deps_map__parse_tree__deps_map__type_ctor_info_deps_0, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__Modules0_19);
    }
    {
      parse_tree__write_deps_file__select_ok_modules_3_p_0(parse_tree__write_deps_file__Modules0_19, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__Modules1_20);
    }
    {
      mercury__list__sort_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_904_904, (MR_Word) &parse_tree__write_deps_file_scalar_common_2[6], parse_tree__write_deps_file__Modules1_20, &parse_tree__write_deps_file__Modules_21);
    }
    {
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      parse_tree__write_deps_file__Var_125 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_125, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[3]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_125, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_2));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_125, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_125, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_11));
    }
    parse_tree__write_deps_file__TypeCtorInfo_911_911 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__map_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_904_904, parse_tree__write_deps_file__TypeCtorInfo_911_911, parse_tree__write_deps_file__Var_125, parse_tree__write_deps_file__Modules_21, &parse_tree__write_deps_file__SourceFiles0_23);
    }
    {
      mercury__list__sort_and_remove_dups_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_911_911, parse_tree__write_deps_file__SourceFiles0_23, &parse_tree__write_deps_file__SourceFiles_24);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ms =");
    }
    {
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".m", parse_tree__write_deps_file__SourceFiles_24);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_133 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".ms");
    }
    {
      parse_tree__write_deps_file__Var_135 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_911_911, parse_tree__write_deps_file__TypeCtorInfo_911_911, (MR_Word) &parse_tree__write_deps_file_scalar_common_10[0], parse_tree__write_deps_file__SourceFiles_24);
    }
    {
      parse_tree__write_deps_file__MmakeVarModuleMs_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarModuleMs_25, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_133));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarModuleMs_25, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_135));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarModuleMs_25, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_122_122, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_138_138);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".errs =");
    }
    {
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".err", parse_tree__write_deps_file__SourceFiles_24);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_147 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".errs");
    }
    {
      parse_tree__write_deps_file__Var_149 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_911_911, parse_tree__write_deps_file__TypeCtorInfo_911_911, (MR_Word) &parse_tree__write_deps_file_scalar_common_10[1], parse_tree__write_deps_file__SourceFiles_24);
    }
    {
      parse_tree__write_deps_file__MmakeVarModuleErrs_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarModuleErrs_26, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_147));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarModuleErrs_26, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_149));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarModuleErrs_26, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_138_138, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_152_152);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mods =");
    }
    {
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", parse_tree__write_deps_file__Modules_21);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_8, (MR_String) "", parse_tree__write_deps_file__Modules_21, &parse_tree__write_deps_file__ModulesSourceFileNames_27);
    }
    {
      parse_tree__write_deps_file__Var_163 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods");
    }
    {
      parse_tree__write_deps_file__MmakeVarModuleMods_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarModuleMods_28, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_163));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarModuleMods_28, 1) = ((MR_Box) (parse_tree__write_deps_file__ModulesSourceFileNames_27));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarModuleMods_28, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_152_152, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_165_165);
    }
    {
      parse_tree__write_deps_file__Var_167 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_167, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_167, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_5));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_167, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_167, 3) = ((MR_Box) (parse_tree__write_deps_file__DepsMap_11));
    }
    {
      parse_tree__write_deps_file__ModulesWithSubModules_29 = mercury__list__filter_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_904_904, parse_tree__write_deps_file__Var_167, parse_tree__write_deps_file__Modules_21);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".parent_mods =");
    }
    {
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", parse_tree__write_deps_file__ModulesWithSubModules_29);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_8, (MR_String) "", parse_tree__write_deps_file__ModulesWithSubModules_29, &parse_tree__write_deps_file__ModulesWithSubModulesSourceFileNames_33);
    }
    {
      parse_tree__write_deps_file__Var_180 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".parent_mods");
    }
    {
      parse_tree__write_deps_file__MmakeVarModuleParentMods_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarModuleParentMods_34, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_180));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarModuleParentMods_34, 1) = ((MR_Box) (parse_tree__write_deps_file__ModulesWithSubModulesSourceFileNames_33));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarModuleParentMods_34, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_165_165, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_182_182);
    }
    {
      libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_8, &parse_tree__write_deps_file__Target_35);
    }
    parse_tree__write_deps_file__ForeignModulesAndExts_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      parse_tree__write_deps_file__ForeignModules_37 = mercury__assoc_list__keys_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_904_904, parse_tree__write_deps_file__TypeCtorInfo_911_911, parse_tree__write_deps_file__ForeignModulesAndExts_36);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign =");
    }
    {
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) "", parse_tree__write_deps_file__ForeignModules_37);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n\n");
    }
    {
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_8, (MR_String) "", parse_tree__write_deps_file__ForeignModules_37, &parse_tree__write_deps_file__ForeignModulesFileNames_38);
    }
    {
      parse_tree__write_deps_file__Var_193 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".foreign");
    }
    {
      parse_tree__write_deps_file__MmakeVarForeignModules_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarForeignModules_39, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_193));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarForeignModules_39, 1) = ((MR_Box) (parse_tree__write_deps_file__ForeignModulesFileNames_38));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarForeignModules_39, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_182_182, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_195_195);
    }
    {
      parse_tree__write_deps_file__MakeFileName_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_40, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_9[1]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_40, 1) = ((MR_Box) (parse_tree__write_deps_file__generate_dv_file_7_p_0_6));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__MakeFileName_40, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_8));
    }
    {
      mercury__list__map_foldl_5_p_2((MR_Word) &parse_tree__write_deps_file_scalar_common_2[1], parse_tree__write_deps_file__TypeCtorInfo_911_911, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__MakeFileName_40, parse_tree__write_deps_file__ForeignModulesAndExts_36, &parse_tree__write_deps_file__ForeignFileNames_46, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv5_STATE_VARIABLE_IO_203_203);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign_cs = ");
    }
    {
      parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "", parse_tree__write_deps_file__ForeignFileNames_46);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_211 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".foreign_cs");
    }
    {
      parse_tree__write_deps_file__MmakeVarForeignFileNames_47 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarForeignFileNames_47, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_211));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarForeignFileNames_47, 1) = ((MR_Box) (parse_tree__write_deps_file__ForeignFileNames_46));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarForeignFileNames_47, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_195_195, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_213_213);
    }
    {
      parse_tree__write_deps_file__ForeignVarName_48 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".foreign");
    }
    {
      parse_tree__write_deps_file__ForeignBasis_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignBasis_49, 0) = ((MR_Box) (parse_tree__write_deps_file__ForeignVarName_48));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignBasis_49, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".foreign_dlls = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dlls_subdir)", (MR_String) ".dll", parse_tree__write_deps_file__ForeignBasis_49);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_225 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".foreign_dlls");
    }
    {
      parse_tree__write_deps_file__Var_921 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".foreign:%=\044(dlls_subdir)%.dll)");
    }
    {
      parse_tree__write_deps_file__Var_227 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_921);
    }
    {
      parse_tree__write_deps_file__MmakeVarForeignDlls_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarForeignDlls_50, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_225));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarForeignDlls_50, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_227));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarForeignDlls_50, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_213_213, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_232_232);
    }
    {
      parse_tree__write_deps_file__ModsVarName_51 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods");
    }
    {
      parse_tree__write_deps_file__Basis_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Basis_52, 0) = ((MR_Box) (parse_tree__write_deps_file__ModsVarName_51));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Basis_52, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".init_cs = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(cs_subdir)", (MR_String) ".c", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_244 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".init_cs");
    }
    {
      parse_tree__write_deps_file__Var_924 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(cs_subdir)%.c)");
    }
    {
      parse_tree__write_deps_file__Var_246 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_924);
    }
    {
      parse_tree__write_deps_file__MmakeVarInitCs_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarInitCs_53, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_244));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarInitCs_53, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_246));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarInitCs_53, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_232_232, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_251_251);
    }
    {
      parse_tree__write_deps_file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_101_99_116_115_95_95_91_51_93_95_48_4_p_0(parse_tree__write_deps_file__Modules_21, parse_tree__write_deps_file__DepsMap_11, &parse_tree__write_deps_file__ExtraLinkObjs_54);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".cs = \044(");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".init_cs) ");
    }
    {
      parse_tree__write_deps_file__write_extra_link_dependencies_list_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) ".c", parse_tree__write_deps_file__ExtraLinkObjs_54, &parse_tree__write_deps_file__ExtraLinkObjFileNamesC_55);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_263 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".cs");
    }
    {
      parse_tree__write_deps_file__Var_268 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".init_cs)");
    }
    {
      parse_tree__write_deps_file__Var_266 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_268);
    }
    {
      parse_tree__write_deps_file__Var_265 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_265, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_266));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_265, 1) = ((MR_Box) (parse_tree__write_deps_file__ExtraLinkObjFileNamesC_55));
    }
    {
      parse_tree__write_deps_file__MmakeVarCs_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarCs_56, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_263));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarCs_56, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_265));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarCs_56, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_251_251, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_270_270);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dlls = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dlls_subdir)", (MR_String) ".dll", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_280 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".dlls");
    }
    {
      parse_tree__write_deps_file__Var_927 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(dlls_subdir)%.dll)");
    }
    {
      parse_tree__write_deps_file__Var_282 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_927);
    }
    {
      parse_tree__write_deps_file__MmakeVarDlls_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarDlls_57, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_280));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarDlls_57, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_282));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarDlls_57, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_270_270, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_287_287);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_os = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(os_subdir)", (MR_String) ".\044O", parse_tree__write_deps_file__Basis_52);
    }
    {
      parse_tree__write_deps_file__write_extra_link_dependencies_list_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) ".\044O", parse_tree__write_deps_file__ExtraLinkObjs_54, &parse_tree__write_deps_file__ExtraLinkObjFileNamesOs_58);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_299 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".all_os");
    }
    {
      parse_tree__write_deps_file__Var_930 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(os_subdir)%.\044O)");
    }
    {
      parse_tree__write_deps_file__Var_302 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_930);
    }
    {
      parse_tree__write_deps_file__Var_301 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_301, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_302));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_301, 1) = ((MR_Box) (parse_tree__write_deps_file__ExtraLinkObjFileNamesOs_58));
    }
    {
      parse_tree__write_deps_file__MmakeVarAllOs_59 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarAllOs_59, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_299));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarAllOs_59, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_301));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarAllOs_59, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_287_287, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_307_307);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_pic_os = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(os_subdir)", (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)", parse_tree__write_deps_file__Basis_52);
    }
    {
      parse_tree__write_deps_file__write_extra_link_dependencies_list_7_p_0(parse_tree__write_deps_file__Globals_8, parse_tree__write_deps_file__DepStream_12, (MR_String) ".\044(EXT_FOR_PIC_OBJECTS)", parse_tree__write_deps_file__ExtraLinkObjs_54, &parse_tree__write_deps_file__ExtraLinkObjFileNamesPicOs_60);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_319 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".all_pic_os");
    }
    {
      parse_tree__write_deps_file__Var_933 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(os_subdir)%.\044(EXT_FOR_PIC_OBJECTS))");
    }
    {
      parse_tree__write_deps_file__Var_322 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_933);
    }
    {
      parse_tree__write_deps_file__Var_321 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_321, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_322));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_321, 1) = ((MR_Box) (parse_tree__write_deps_file__ExtraLinkObjFileNamesPicOs_60));
    }
    {
      parse_tree__write_deps_file__MmakeVarAllPicOs_61 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarAllPicOs_61, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_319));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarAllPicOs_61, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_321));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarAllPicOs_61, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_307_307, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_327_327);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".os = \044(");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_os)\n");
    }
    {
      parse_tree__write_deps_file__Var_335 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".os");
    }
    {
      parse_tree__write_deps_file__Var_936 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".all_os)");
    }
    {
      parse_tree__write_deps_file__Var_337 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_936);
    }
    {
      parse_tree__write_deps_file__MmakeVarOs_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarOs_62, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_335));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarOs_62, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_337));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarOs_62, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_327_327, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_342_342);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".pic_os = \044(");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_pic_os)\n");
    }
    {
      parse_tree__write_deps_file__Var_350 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".pic_os");
    }
    {
      parse_tree__write_deps_file__Var_939 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".all_pic_os)");
    }
    {
      parse_tree__write_deps_file__Var_352 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_939);
    }
    {
      parse_tree__write_deps_file__MmakeVarPicOs_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarPicOs_63, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_350));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarPicOs_63, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_352));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarPicOs_63, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_342_342, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_357_357);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".useds = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(useds_subdir)", (MR_String) ".used", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_367 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".useds");
    }
    {
      parse_tree__write_deps_file__Var_942 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(used_subdir)%.used)");
    }
    {
      parse_tree__write_deps_file__Var_369 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_942);
    }
    {
      parse_tree__write_deps_file__MmakeVarUseds_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarUseds_64, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_367));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarUseds_64, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_369));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarUseds_64, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_357_357, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_374_374);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".javas = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(javas_subdir)", (MR_String) ".java", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_384 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".javas");
    }
    {
      parse_tree__write_deps_file__Var_945 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(javas_subdir)%.java)");
    }
    {
      parse_tree__write_deps_file__Var_386 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_945);
    }
    {
      parse_tree__write_deps_file__MmakeVarJavas_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarJavas_65, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_384));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarJavas_65, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_386));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarJavas_65, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_374_374, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_391_391);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".classes = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(classes_subdir)", (MR_String) ".class", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) " ");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(wildcard ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(classes_subdir)", (MR_String) "\\\044\044*.class", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ")\n");
    }
    {
      parse_tree__write_deps_file__Var_408 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".classes");
    }
    {
      parse_tree__write_deps_file__Var_948 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(classes_subdir)%.class)");
    }
    {
      parse_tree__write_deps_file__Var_411 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_948);
    }
    {
      parse_tree__write_deps_file__Var_951 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(classes_subdir)%\\\044\044*.class))");
    }
    {
      parse_tree__write_deps_file__Var_417 = mercury__string__f_43_43_2_f_0((MR_String) "\044(wildcard \044(", parse_tree__write_deps_file__Var_951);
    }
    {
      parse_tree__write_deps_file__Var_416 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_416, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_417));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_416, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_410 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_410, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_411));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_410, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_416));
    }
    {
      parse_tree__write_deps_file__MmakeVarClasses_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarClasses_66, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_408));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarClasses_66, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_410));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarClasses_66, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_391_391, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_423_423);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dirs = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dirs_subdir)", (MR_String) ".dir", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_433 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".dirs");
    }
    {
      parse_tree__write_deps_file__Var_954 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(dirs_subdir)%.dir)");
    }
    {
      parse_tree__write_deps_file__Var_435 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_954);
    }
    {
      parse_tree__write_deps_file__MmakeVarDirs_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarDirs_67, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_433));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarDirs_67, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_435));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarDirs_67, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_423_423, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_440_440);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dir_os = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dirs_subdir)", (MR_String) ".dir/*.\044O", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_450 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".dir_os");
    }
    {
      parse_tree__write_deps_file__Var_957 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(dirs_subdir)%.dir/*.\044O)");
    }
    {
      parse_tree__write_deps_file__Var_452 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_957);
    }
    {
      parse_tree__write_deps_file__MmakeVarDirOs_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarDirOs_68, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_450));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarDirOs_68, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_452));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarDirOs_68, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_440_440, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_457_457);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".dates = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(dates_subdir)", (MR_String) ".date", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_467 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".dates");
    }
    {
      parse_tree__write_deps_file__Var_960 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(dates_subdir)%.date)");
    }
    {
      parse_tree__write_deps_file__Var_469 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_960);
    }
    {
      parse_tree__write_deps_file__MmakeVarDates_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarDates_69, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_467));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarDates_69, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_469));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarDates_69, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_457_457, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_474_474);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".date0s = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(date0s_subdir)", (MR_String) ".date0", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_484 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".date0s");
    }
    {
      parse_tree__write_deps_file__Var_963 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(date0s_subdir)%.date0)");
    }
    {
      parse_tree__write_deps_file__Var_486 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_963);
    }
    {
      parse_tree__write_deps_file__MmakeVarDate0s_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarDate0s_70, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_484));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarDate0s_70, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_486));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarDate0s_70, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_474_474, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_491_491);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".date3s = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(date3s_subdir)", (MR_String) ".date3", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_501 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".date3s");
    }
    {
      parse_tree__write_deps_file__Var_966 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(date3s_subdir)%.date3)");
    }
    {
      parse_tree__write_deps_file__Var_503 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_966);
    }
    {
      parse_tree__write_deps_file__MmakeVarDate3s_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarDate3s_71, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_501));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarDate3s_71, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_503));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarDate3s_71, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_491_491, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_508_508);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".optdates = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(optdates_subdir)", (MR_String) ".optdate", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_518 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".optdates");
    }
    {
      parse_tree__write_deps_file__Var_969 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(optdates_subdir)%.optdate)");
    }
    {
      parse_tree__write_deps_file__Var_520 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_969);
    }
    {
      parse_tree__write_deps_file__MmakeVarOptDates_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarOptDates_72, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_518));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarOptDates_72, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_520));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarOptDates_72, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_508_508, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_525_525);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".trans_opt_dates = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(trans_opt_dates_subdir)", (MR_String) ".trans_opt_date", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_535 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".trans_opt_dates");
    }
    {
      parse_tree__write_deps_file__Var_972 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(trans_opt_dates_subdir)%.trans_opt_date)");
    }
    {
      parse_tree__write_deps_file__Var_537 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_972);
    }
    {
      parse_tree__write_deps_file__MmakeVarTransOptDates_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarTransOptDates_73, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_535));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarTransOptDates_73, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_537));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarTransOptDates_73, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_525_525, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_542_542);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".c_dates = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(c_dates_subdir)", (MR_String) ".c_date", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_552 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".c_dates");
    }
    {
      parse_tree__write_deps_file__Var_975 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(c_dates_subdir)%.c_date)");
    }
    {
      parse_tree__write_deps_file__Var_554 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_975);
    }
    {
      parse_tree__write_deps_file__MmakeVarCDates_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarCDates_74, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_552));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarCDates_74, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_554));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarCDates_74, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_542_542, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_559_559);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".java_dates = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(java_dates_subdir)", (MR_String) ".java_date", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_569 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".java_dates");
    }
    {
      parse_tree__write_deps_file__Var_978 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(java_dates_subdir)%.java_date)");
    }
    {
      parse_tree__write_deps_file__Var_571 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_978);
    }
    {
      parse_tree__write_deps_file__MmakeVarJavaDates_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarJavaDates_75, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_569));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarJavaDates_75, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_571));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarJavaDates_75, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_559_559, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_576_576);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ds = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(ds_subdir)", (MR_String) ".d", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_586 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".ds");
    }
    {
      parse_tree__write_deps_file__Var_981 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(ds_subdir)%.d)");
    }
    {
      parse_tree__write_deps_file__Var_588 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_981);
    }
    {
      parse_tree__write_deps_file__MmakeVarDs_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarDs_76, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_586));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarDs_76, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_588));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarDs_76, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_576_576, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_593_593);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".module_deps = ");
    }
    {
      parse_tree__write_deps_file__Var_599 = make__make_module_dep_file_extension_0_f_0();
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(module_deps_subdir)", parse_tree__write_deps_file__Var_599, parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_603 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".module_deps");
    }
    {
      parse_tree__write_deps_file__Var_611 = make__make_module_dep_file_extension_0_f_0();
    }
    {
      parse_tree__write_deps_file__Var_984 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__Var_611, (MR_String) ")");
    }
    {
      parse_tree__write_deps_file__Var_986 = mercury__string__f_43_43_2_f_0((MR_String) ".mods:%=\044(module_deps_subdir)%", parse_tree__write_deps_file__Var_984);
    }
    {
      parse_tree__write_deps_file__Var_987 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, parse_tree__write_deps_file__Var_986);
    }
    {
      parse_tree__write_deps_file__Var_605 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_987);
    }
    {
      parse_tree__write_deps_file__MmakeVarModuleDeps_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarModuleDeps_77, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_603));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarModuleDeps_77, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_605));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarModuleDeps_77, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_593_593, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_613_613);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mihs = ");
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 263, &parse_tree__write_deps_file__HighLevelCode_78);
    }
    switch (parse_tree__write_deps_file__HighLevelCode_78) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__write_deps_file__MihSources_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        switch (parse_tree__write_deps_file__Target_35) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String parse_tree__write_deps_file__Var_622;
              MR_String parse_tree__write_deps_file__Var_990;

              {
                parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(mihs_subdir)", (MR_String) ".mih", parse_tree__write_deps_file__Basis_52);
              }
              {
                parse_tree__write_deps_file__Var_990 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
              }
              {
                parse_tree__write_deps_file__Var_622 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_990);
              }
              {
                parse_tree__write_deps_file__MihSources_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MihSources_79, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_622));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MihSources_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 2:
            parse_tree__write_deps_file__MihSources_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_630 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mihs");
    }
    {
      parse_tree__write_deps_file__MmakeVarMihs_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarMihs_80, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_630));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarMihs_80, 1) = ((MR_Box) (parse_tree__write_deps_file__MihSources_79));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarMihs_80, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_613_613, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_632_632);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".mhs = ");
    }
    switch (parse_tree__write_deps_file__Target_35) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String parse_tree__write_deps_file__Var_640;
          MR_String parse_tree__write_deps_file__Var_993;

          {
            parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "", (MR_String) ".mh", parse_tree__write_deps_file__Basis_52);
          }
          {
            parse_tree__write_deps_file__Var_993 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=%.mh)");
          }
          {
            parse_tree__write_deps_file__Var_640 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_993);
          }
          {
            parse_tree__write_deps_file__MhSources_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MhSources_81, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_640));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MhSources_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 3:
      case (MR_Integer) 2:
        parse_tree__write_deps_file__MhSources_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_648 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mhs");
    }
    {
      parse_tree__write_deps_file__MmakeVarMhs_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarMhs_82, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_648));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarMhs_82, 1) = ((MR_Box) (parse_tree__write_deps_file__MhSources_81));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarMhs_82, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_632_632, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_650_650);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_mihs = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(mihs_subdir)", (MR_String) ".mih", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_660 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".all_mihs");
    }
    {
      parse_tree__write_deps_file__Var_996 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(mihs_subdir)%.mih)");
    }
    {
      parse_tree__write_deps_file__Var_662 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_996);
    }
    {
      parse_tree__write_deps_file__MmakeVarAllMihs_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarAllMihs_83, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_660));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarAllMihs_83, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_662));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarAllMihs_83, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_650_650, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_667_667);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_mhs = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "", (MR_String) ".mh", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_677 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".all_mhs");
    }
    {
      parse_tree__write_deps_file__Var_999 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=%.mh)");
    }
    {
      parse_tree__write_deps_file__Var_679 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_999);
    }
    {
      parse_tree__write_deps_file__MmakeVarAllMhs_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarAllMhs_84, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_677));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarAllMhs_84, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_679));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarAllMhs_84, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_667_667, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_684_684);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".ints = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(ints_subdir)", (MR_String) ".int", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) " ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(int2s_subdir)", (MR_String) ".int2", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_699 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".ints");
    }
    {
      parse_tree__write_deps_file__Var_1002 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(ints_subdir)%.int)");
    }
    {
      parse_tree__write_deps_file__Var_702 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_1002);
    }
    {
      parse_tree__write_deps_file__Var_1005 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(int2s_subdir)%.int2)");
    }
    {
      parse_tree__write_deps_file__Var_708 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_1005);
    }
    {
      parse_tree__write_deps_file__Var_707 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_707, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_708));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_707, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_701 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_701, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_702));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_701, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_707));
    }
    {
      parse_tree__write_deps_file__MmakeVarInts_85 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarInts_85, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_699));
      MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarInts_85, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_701));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarInts_85, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_684_684, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_714_714);
    }
    {
      parse_tree__write_deps_file__ParentModsVarName_86 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".parent_mods");
    }
    {
      parse_tree__write_deps_file__ParentBasis_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ParentBasis_87, 0) = ((MR_Box) (parse_tree__write_deps_file__ParentModsVarName_86));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ParentBasis_87, 1) = ((MR_Box) ((MR_String) ""));
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".int0s = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(int0s_subdir)", (MR_String) ".int0", parse_tree__write_deps_file__ParentBasis_87);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_726 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".int0s");
    }
    {
      parse_tree__write_deps_file__Var_1008 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".parent_mods:%=\044(int0s_subdir)%.int0)");
    }
    {
      parse_tree__write_deps_file__Var_728 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_1008);
    }
    {
      parse_tree__write_deps_file__MmakeVarInt0s_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarInt0s_88, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_726));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarInt0s_88, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_728));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarInt0s_88, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_714_714, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_733_733);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".all_int0s = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(int0s_subdir)", (MR_String) ".int0", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_743 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".all_int0s");
    }
    {
      parse_tree__write_deps_file__Var_1011 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(int0s_subdir)%.int0)");
    }
    {
      parse_tree__write_deps_file__Var_745 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_1011);
    }
    {
      parse_tree__write_deps_file__MmakeVarAllInt0s_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarAllInt0s_89, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_743));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarAllInt0s_89, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_745));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarAllInt0s_89, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_733_733, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_750_750);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".int3s = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(int3s_subdir)", (MR_String) ".int3", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_760 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".int3s");
    }
    {
      parse_tree__write_deps_file__Var_1014 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(int3s_subdir)%.int3)");
    }
    {
      parse_tree__write_deps_file__Var_762 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_1014);
    }
    {
      parse_tree__write_deps_file__MmakeVarInt3s_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarInt3s_90, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_760));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarInt3s_90, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_762));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarInt3s_90, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_750_750, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_767_767);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".opts = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(opts_subdir)", (MR_String) ".opt", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_777 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".opts");
    }
    {
      parse_tree__write_deps_file__Var_1017 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(opts_subdir)%.opt)");
    }
    {
      parse_tree__write_deps_file__Var_779 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_1017);
    }
    {
      parse_tree__write_deps_file__MmakeVarOpts_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarOpts_91, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_777));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarOpts_91, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_779));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarOpts_91, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_767_767, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_784_784);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".trans_opts = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(trans_opts_subdir)", (MR_String) ".trans_opt", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_794 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".trans_opts");
    }
    {
      parse_tree__write_deps_file__Var_1020 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(trans_opts_subdir)%.trans_opt)");
    }
    {
      parse_tree__write_deps_file__Var_796 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_1020);
    }
    {
      parse_tree__write_deps_file__MmakeVarTransOpts_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarTransOpts_92, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_794));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarTransOpts_92, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_796));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarTransOpts_92, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_784_784, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_801_801);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".analysiss = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(analysiss_subdir)", (MR_String) ".analysis", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_811 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".analysiss");
    }
    {
      parse_tree__write_deps_file__Var_1023 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(analysiss_subdir)%.analysis)");
    }
    {
      parse_tree__write_deps_file__Var_813 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_1023);
    }
    {
      parse_tree__write_deps_file__MmakeVarAnalysiss_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarAnalysiss_93, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_811));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarAnalysiss_93, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_813));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarAnalysiss_93, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_801_801, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_818_818);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".requests = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(requests_subdir)", (MR_String) ".request", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_828 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".requests");
    }
    {
      parse_tree__write_deps_file__Var_1026 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(requests_subdir)%.request)");
    }
    {
      parse_tree__write_deps_file__Var_830 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_1026);
    }
    {
      parse_tree__write_deps_file__MmakeVarRequests_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarRequests_94, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_828));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarRequests_94, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_830));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarRequests_94, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_818_818, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_835_835);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".imdgs = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\044(imdgs_subdir)", (MR_String) ".imdg", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n");
    }
    {
      parse_tree__write_deps_file__Var_845 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".imdgs");
    }
    {
      parse_tree__write_deps_file__Var_1029 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=\044(imdgs_subdir)%.imdg)");
    }
    {
      parse_tree__write_deps_file__Var_847 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_1029);
    }
    {
      parse_tree__write_deps_file__MmakeVarImdgs_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarImdgs_95, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_845));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarImdgs_95, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_847));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarImdgs_95, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_835_835, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_852_852);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__ModuleMakeVarName_22);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) ".profs = ");
    }
    {
      parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "", (MR_String) ".prof", parse_tree__write_deps_file__Basis_52);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_12, (MR_String) "\n\n");
    }
    {
      parse_tree__write_deps_file__Var_862 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".profs");
    }
    {
      parse_tree__write_deps_file__Var_1032 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_22, (MR_String) ".mods:%=%.prof)");
    }
    {
      parse_tree__write_deps_file__Var_864 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_1032);
    }
    {
      parse_tree__write_deps_file__MmakeVarProfs_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarProfs_96, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_862));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarProfs_96, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_864));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__MmakeVarProfs_96, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_852_852, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_869_869);
    }
    {
      libs__mmakefiles__end_mmakefile_4_p_0(parse_tree__write_deps_file__DepStream_12, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_869_869);
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
      parse_tree__write_deps_file__IntroducedFrom__pred__get_dependencies_from_graph__1352__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_2), &parse_tree__write_deps_file__conv0_LambdaHeadVar__3_17);
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
parse_tree__write_deps_file__write_subdirs_shorthand_rule_7_p_0(
  MR_Word parse_tree__write_deps_file__Globals_8,
  MR_Word parse_tree__write_deps_file__DepStream_9,
  MR_Word parse_tree__write_deps_file__ModuleName_10,
  MR_String parse_tree__write_deps_file__Ext_11,
  MR_Word * parse_tree__write_deps_file__MmakeRule_12)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_String parse_tree__write_deps_file__ModuleStr_14;
    MR_String parse_tree__write_deps_file__Target_15;
    MR_String parse_tree__write_deps_file__ShorthandTarget_16;
    MR_String parse_tree__write_deps_file__Var_30;
    MR_Word parse_tree__write_deps_file__Var_33;

    {
      parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__ModuleStr_14);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_8, (MR_Integer) 1, parse_tree__write_deps_file__Ext_11, parse_tree__write_deps_file__ModuleName_10, &parse_tree__write_deps_file__Target_15);
    }
    {
      parse_tree__write_deps_file__ShorthandTarget_16 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleStr_14, parse_tree__write_deps_file__Ext_11);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_9, (MR_String) ".PHONY: ");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_9, parse_tree__write_deps_file__ShorthandTarget_16);
    }
    {
      mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_9);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_9, parse_tree__write_deps_file__ShorthandTarget_16);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_9, (MR_String) ": ");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_9, parse_tree__write_deps_file__Target_15);
    }
    {
      mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_9);
    }
    {
      parse_tree__write_deps_file__Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "subdir_shorthand_for_", parse_tree__write_deps_file__Ext_11);
    }
    {
      parse_tree__write_deps_file__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_33, 0) = ((MR_Box) (parse_tree__write_deps_file__Target_15));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__write_deps_file__MmakeRule_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_30));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__write_deps_file__ShorthandTarget_16));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_33));
      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
parse_tree__write_deps_file__write_extra_link_dependencies_list_7_p_0(
  MR_Word parse_tree__write_deps_file__Globals_1,
  MR_Word parse_tree__write_deps_file__DepStream_2,
  MR_String parse_tree__write_deps_file__Suffix_3,
  MR_Word parse_tree__write_deps_file__HeadVar__4_4,
  MR_Word * parse_tree__write_deps_file__HeadVar__5_5)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;

    if ((parse_tree__write_deps_file__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *parse_tree__write_deps_file__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_String parse_tree__write_deps_file__ExtraLink_17;
        MR_Word parse_tree__write_deps_file__Module_18;
        MR_Word parse_tree__write_deps_file__ExtraLinks_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 1)));
        MR_String parse_tree__write_deps_file__FileName_20;
        MR_Word parse_tree__write_deps_file__FileNames_21;
        MR_Word parse_tree__write_deps_file__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__HeadVar__4_4, (MR_Integer) 0)));

        parse_tree__write_deps_file__ExtraLink_17 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_25, (MR_Integer) 0)));
        parse_tree__write_deps_file__Module_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_25, (MR_Integer) 1)));
        {
          parse_tree__file_names__extra_link_obj_file_name_8_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__Module_18, parse_tree__write_deps_file__ExtraLink_17, parse_tree__write_deps_file__Suffix_3, (MR_Integer) 1, &parse_tree__write_deps_file__FileName_20);
        }
        {
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, (MR_String) " \\\n\t");
        }
        {
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_2, parse_tree__write_deps_file__FileName_20);
        }
        {
          parse_tree__write_deps_file__write_extra_link_dependencies_list_7_p_0(parse_tree__write_deps_file__Globals_1, parse_tree__write_deps_file__DepStream_2, parse_tree__write_deps_file__Suffix_3, parse_tree__write_deps_file__ExtraLinks_19, &parse_tree__write_deps_file__FileNames_21);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *parse_tree__write_deps_file__HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (parse_tree__write_deps_file__FileName_20));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (parse_tree__write_deps_file__FileNames_21));
        }
      }
  }
}

static MR_String MR_CALL 
parse_tree__write_deps_file__foreign_include_file_path_name_2_f_0(
  MR_String parse_tree__write_deps_file__SourceFileName_4,
  MR_Word parse_tree__write_deps_file__IncludeFile_5)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_String parse_tree__write_deps_file__IncludePath_6;
    MR_String parse_tree__write_deps_file__IncludeFileName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IncludeFile_5, (MR_Integer) 1)));
    MR_Word parse_tree__write_deps_file___Lang_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IncludeFile_5, (MR_Integer) 0)));

    {
      parse_tree__file_names__make_include_file_path_3_p_0(parse_tree__write_deps_file__SourceFileName_4, parse_tree__write_deps_file__IncludeFileName_8, &parse_tree__write_deps_file__IncludePath_6);
    }
    return parse_tree__write_deps_file__IncludePath_6;
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
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_12, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_9[0]));
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
parse_tree__write_deps_file__write_compact_dependencies_list_6_p_0(
  MR_Word parse_tree__write_deps_file__DepStream_7,
  MR_String parse_tree__write_deps_file__Prefix_8,
  MR_String parse_tree__write_deps_file__Suffix_9,
  MR_Word parse_tree__write_deps_file__Basis_10)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_String parse_tree__write_deps_file__VarName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Basis_10, (MR_Integer) 0)));
    MR_String parse_tree__write_deps_file__OldSuffix_13 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Basis_10, (MR_Integer) 1)));

    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_7, (MR_String) "\044(");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_7, parse_tree__write_deps_file__VarName_12);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_7, (MR_String) ":%");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_7, parse_tree__write_deps_file__OldSuffix_13);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_7, (MR_String) "=");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_7, parse_tree__write_deps_file__Prefix_8);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_7, (MR_String) "%");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_7, parse_tree__write_deps_file__Suffix_9);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_7, (MR_String) ")");
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

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv0_HeadVar__5_5);
    }
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
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_25_25;
    MR_Word parse_tree__write_deps_file__FileNames_14;
    MR_Word parse_tree__write_deps_file__Var_17;
    MR_Word parse_tree__write_deps_file__Var_18;
    MR_Box parse_tree__write_deps_file__conv1_STATE_VARIABLE_IO_16;

    {
      parse_tree__write_deps_file__Var_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_17, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_17, 1) = ((MR_Box) (parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_17, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_8));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_17, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_17, 5) = ((MR_Box) (parse_tree__write_deps_file__Suffix_10));
    }
    parse_tree__write_deps_file__TypeCtorInfo_25_25 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    {
      parse_tree__write_deps_file__Var_18 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_25_25, parse_tree__write_deps_file__Modules_11);
    }
    {
      mercury__list__map_foldl_5_p_2(parse_tree__write_deps_file__TypeCtorInfo_25_25, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Var_17, parse_tree__write_deps_file__Var_18, &parse_tree__write_deps_file__FileNames_14, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv1_STATE_VARIABLE_IO_16);
    }
    {
      *parse_tree__write_deps_file__Groups_12 = libs__mmakefiles__make_file_name_group_2_f_0(parse_tree__write_deps_file__GroupName_9, parse_tree__write_deps_file__FileNames_14);
    }
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

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv0_HeadVar__5_5);
    }
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
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__Var_14;
    MR_Box parse_tree__write_deps_file__conv1_STATE_VARIABLE_IO_13;

    {
      parse_tree__write_deps_file__Var_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, 1) = ((MR_Box) (parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_7));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_14, 5) = ((MR_Box) (parse_tree__write_deps_file__Suffix_8));
    }
    {
      mercury__list__map_foldl_5_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Var_14, parse_tree__write_deps_file__Modules_9, parse_tree__write_deps_file__FileNames_10, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv1_STATE_VARIABLE_IO_13);
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
              parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_1, (MR_Integer) 1, parse_tree__write_deps_file__Suffix_3, parse_tree__write_deps_file__Module_16, &parse_tree__write_deps_file__FileName_19);
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
parse_tree__write_deps_file__write_foreign_import_deps_8_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_String parse_tree__write_deps_file__conv0_HeadVar__5_5;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv0_HeadVar__5_5);
    }
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__write_foreign_import_deps_8_p_0(
  MR_Word parse_tree__write_deps_file__DepStream_9,
  MR_Word parse_tree__write_deps_file__Globals_10,
  MR_String parse_tree__write_deps_file__ForeignImportExt_11,
  MR_Word parse_tree__write_deps_file__ForeignImportedModuleNames_12,
  MR_String parse_tree__write_deps_file__ForeignImportTarget_13,
  MR_Word * parse_tree__write_deps_file__MmakeRule_14)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__ForeignImportedFileNames_16;
    MR_String parse_tree__write_deps_file__Var_28;
    MR_Word parse_tree__write_deps_file__Var_39;
    MR_Box parse_tree__write_deps_file__conv1_STATE_VARIABLE_IO_18;

    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_9, (MR_String) "\n\n");
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_9, parse_tree__write_deps_file__ForeignImportTarget_13);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_9, (MR_String) " : ");
    }
    {
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_10, parse_tree__write_deps_file__DepStream_9, parse_tree__write_deps_file__ForeignImportExt_11, parse_tree__write_deps_file__ForeignImportedModuleNames_12);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_9, (MR_String) "\n\n");
    }
    {
      parse_tree__write_deps_file__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_39, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_39, 1) = ((MR_Box) (parse_tree__write_deps_file__write_foreign_import_deps_8_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_39, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_10));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_39, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_39, 5) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportExt_11));
    }
    {
      mercury__list__map_foldl_5_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Var_39, parse_tree__write_deps_file__ForeignImportedModuleNames_12, &parse_tree__write_deps_file__ForeignImportedFileNames_16, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv1_STATE_VARIABLE_IO_18);
    }
    {
      parse_tree__write_deps_file__Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_deps_for_", parse_tree__write_deps_file__ForeignImportExt_11);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__write_deps_file__MmakeRule_14 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_28));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportTarget_13));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportedFileNames_16));
      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__write_nested_deps_8_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_String parse_tree__write_deps_file__conv0_HeadVar__5_5;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv0_HeadVar__5_5);
    }
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__write_nested_deps_8_p_0(
  MR_Word parse_tree__write_deps_file__DepStream_9,
  MR_Word parse_tree__write_deps_file__Globals_10,
  MR_Word parse_tree__write_deps_file__ModuleName_11,
  MR_Word parse_tree__write_deps_file__NestedDeps_12,
  MR_String parse_tree__write_deps_file__Ext_13,
  MR_Word * parse_tree__write_deps_file__MmakeRule_14)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_String parse_tree__write_deps_file__ExtName_16;
    MR_Word parse_tree__write_deps_file__NestedDepsFileNames_17;
    MR_Word parse_tree__write_deps_file__Var_22;
    MR_Word parse_tree__write_deps_file__Var_25;
    MR_String parse_tree__write_deps_file__Var_33;
    MR_Word parse_tree__write_deps_file__Var_44;
    MR_Box parse_tree__write_deps_file__conv1_STATE_VARIABLE_IO_19;

    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_10, (MR_Integer) 1, parse_tree__write_deps_file__Ext_13, parse_tree__write_deps_file__ModuleName_11, &parse_tree__write_deps_file__ExtName_16);
    }
    {
      parse_tree__write_deps_file__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_25, 0) = ((MR_Box) (parse_tree__write_deps_file__ExtName_16));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[169])));
    }
    {
      parse_tree__write_deps_file__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_22, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_22, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_25));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_9, parse_tree__write_deps_file__Var_22);
    }
    {
      parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_10, parse_tree__write_deps_file__DepStream_9, parse_tree__write_deps_file__Ext_13, parse_tree__write_deps_file__NestedDeps_12);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_9, (MR_String) "\n\n");
    }
    {
      parse_tree__write_deps_file__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_44, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_44, 1) = ((MR_Box) (parse_tree__write_deps_file__write_nested_deps_8_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_44, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_10));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_44, 4) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_44, 5) = ((MR_Box) (parse_tree__write_deps_file__Ext_13));
    }
    {
      mercury__list__map_foldl_5_p_2((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Var_44, parse_tree__write_deps_file__NestedDeps_12, &parse_tree__write_deps_file__NestedDepsFileNames_17, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv1_STATE_VARIABLE_IO_19);
    }
    {
      parse_tree__write_deps_file__Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "nested_deps_for_", parse_tree__write_deps_file__Ext_13);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      *parse_tree__write_deps_file__MmakeRule_14 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_33));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (parse_tree__write_deps_file__ExtName_16));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (parse_tree__write_deps_file__NestedDepsFileNames_17));
      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_7_p_0_6(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_Word parse_tree__write_deps_file__conv7_MmakeRule_12;

    {
      parse_tree__write_deps_file__write_subdirs_shorthand_rule_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv7_MmakeRule_12);
    }
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv7_MmakeRule_12));
  }
}

static void MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_7_p_0_5(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_Word parse_tree__write_deps_file__conv5_MmakeRule_14;

    {
      parse_tree__write_deps_file__write_foreign_import_deps_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv5_MmakeRule_14);
    }
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv5_MmakeRule_14));
  }
}

static MR_bool MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_7_p_0_4(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_Word parse_tree__write_deps_file__conv4_LambdaHeadVar__2_766;

    {
      parse_tree__write_deps_file__succeeded = parse_tree__write_deps_file__IntroducedFrom__pred__do_write_dependency_file__818__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv4_LambdaHeadVar__2_766);
    }
    if (parse_tree__write_deps_file__succeeded)
      {
        *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv4_LambdaHeadVar__2_766));
        parse_tree__write_deps_file__succeeded = MR_TRUE;
      }
    return parse_tree__write_deps_file__succeeded;
  }
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_7_p_0_3(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
{
  {
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_Word parse_tree__write_deps_file__conv3_HeadVar__2_2;

    {
      parse_tree__write_deps_file__conv3_HeadVar__2_2 = mdbcomp__sym_name__get_ancestors_set_1_f_0(((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv3_HeadVar__2_2));
    return parse_tree__write_deps_file__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_7_p_0_2(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_2,
  MR_Box parse_tree__write_deps_file__wrapper_arg_3,
  MR_Box * parse_tree__write_deps_file__wrapper_arg_4)
{
  {
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_Word parse_tree__write_deps_file__conv1_MmakeRule_14;

    {
      parse_tree__write_deps_file__write_nested_deps_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 6))), ((MR_String) parse_tree__write_deps_file__wrapper_arg_1), &parse_tree__write_deps_file__conv1_MmakeRule_14);
    }
    *parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv1_MmakeRule_14));
  }
}

static MR_Box MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_7_p_0_1(
  MR_Box parse_tree__write_deps_file__closure_arg,
  MR_Box parse_tree__write_deps_file__wrapper_arg_1)
{
  {
    MR_Box parse_tree__write_deps_file__wrapper_arg_2;
    MR_Box parse_tree__write_deps_file__closure = parse_tree__write_deps_file__closure_arg;
    MR_String parse_tree__write_deps_file__conv0_IncludePath_6;

    {
      parse_tree__write_deps_file__conv0_IncludePath_6 = parse_tree__write_deps_file__foreign_include_file_path_name_2_f_0(((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__write_deps_file__wrapper_arg_1));
    }
    parse_tree__write_deps_file__wrapper_arg_2 = ((MR_Box) (parse_tree__write_deps_file__conv0_IncludePath_6));
    return parse_tree__write_deps_file__wrapper_arg_2;
  }
}

static void MR_CALL 
parse_tree__write_deps_file__do_write_dependency_file_7_p_0(
  MR_Word parse_tree__write_deps_file__DepStream_8,
  MR_Word parse_tree__write_deps_file__Globals_9,
  MR_Word parse_tree__write_deps_file__ModuleAndImports_10,
  MR_Word parse_tree__write_deps_file__AllDeps_11,
  MR_Word parse_tree__write_deps_file__MaybeTransOptDeps_12)
{
  {
    MR_bool parse_tree__write_deps_file__succeeded;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_1103_1103;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_1104_1104;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_1106_1106;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_1107_1107;
    MR_Word parse_tree__write_deps_file__TypeCtorInfo_1119_1119;
    MR_String parse_tree__write_deps_file__SourceFileName_15;
    MR_Word parse_tree__write_deps_file__SourceFileModuleName_16;
    MR_Word parse_tree__write_deps_file__ModuleName_17;
    MR_Word parse_tree__write_deps_file__ParentDeps_19;
    MR_Word parse_tree__write_deps_file__IntDeps_20;
    MR_Word parse_tree__write_deps_file__ImpDeps_21;
    MR_Word parse_tree__write_deps_file__InclDeps_24;
    MR_Word parse_tree__write_deps_file__NestedDeps_25;
    MR_Word parse_tree__write_deps_file__FactDeps0_26;
    MR_Word parse_tree__write_deps_file__ForeignImportModules0_27;
    MR_Word parse_tree__write_deps_file__ForeignIncludeFilesCord_28;
    MR_Word parse_tree__write_deps_file__ContainsForeignCode_29;
    MR_Word parse_tree__write_deps_file__SrcItemBlocks_31;
    MR_Word parse_tree__write_deps_file__DirectIntItemBlocksCord_32;
    MR_Word parse_tree__write_deps_file__IndirectIntItemBlocksCord_33;
    MR_Word parse_tree__write_deps_file__OptItemBlocksCord_34;
    MR_Word parse_tree__write_deps_file__IntForOptItemBlocksCord_35;
    MR_String parse_tree__write_deps_file__ModuleMakeVarName_42;
    MR_Word parse_tree__write_deps_file__LongDeps0_43;
    MR_Word parse_tree__write_deps_file__ShortDeps0_44;
    MR_Word parse_tree__write_deps_file__LongDeps_45;
    MR_Word parse_tree__write_deps_file__ShortDeps1_46;
    MR_Word parse_tree__write_deps_file__ShortDeps_47;
    MR_Word parse_tree__write_deps_file__FactDeps_48;
    MR_String parse_tree__write_deps_file__TransOptDateFileName_49;
    MR_String parse_tree__write_deps_file__ErrFileName_61;
    MR_String parse_tree__write_deps_file__OptDateFileName_62;
    MR_String parse_tree__write_deps_file__CDateFileName_63;
    MR_String parse_tree__write_deps_file__ObjFileName_64;
    MR_String parse_tree__write_deps_file__JavaDateFileName_65;
    MR_String parse_tree__write_deps_file__PicObjFileName_66;
    MR_String parse_tree__write_deps_file__Int0FileName_67;
    MR_Word parse_tree__write_deps_file__ParentDepsSourceGroups_71;
    MR_Word parse_tree__write_deps_file__LongDepsSourceGroups_72;
    MR_Word parse_tree__write_deps_file__ShortDepsSourceGroups_73;
    MR_Word parse_tree__write_deps_file__ForeignIncludeFiles_74;
    MR_Word parse_tree__write_deps_file__ForeignImportFileNames_75;
    MR_Word parse_tree__write_deps_file__UseOptFiles_87;
    MR_Word parse_tree__write_deps_file__Intermod_88;
    MR_Word parse_tree__write_deps_file__IntermodDirs_89;
    MR_Word parse_tree__write_deps_file__HighLevelCode_107;
    MR_Word parse_tree__write_deps_file__CompilationTarget_108;
    MR_String parse_tree__write_deps_file__CFileName_110;
    MR_String parse_tree__write_deps_file__MhHeaderFileName_111;
    MR_String parse_tree__write_deps_file__MihHeaderFileName_112;
    MR_Word parse_tree__write_deps_file__MmakeRuleMhMihOnC_113;
    MR_String parse_tree__write_deps_file__JavaFileName_114;
    MR_String parse_tree__write_deps_file__ModuleDepFileName_115;
    MR_Word parse_tree__write_deps_file__MmakeFragmentModuleDep_116;
    MR_String parse_tree__write_deps_file__DateFileName_117;
    MR_String parse_tree__write_deps_file__Date0FileName_118;
    MR_Word parse_tree__write_deps_file__ParentDepDateFileNames_119;
    MR_Word parse_tree__write_deps_file__ParentDepInt0FileNames_120;
    MR_Word parse_tree__write_deps_file__LongDepInt3FileNames_121;
    MR_Word parse_tree__write_deps_file__ShortDepInt3FileNames_122;
    MR_Word parse_tree__write_deps_file__MmakeRuleParentDates_123;
    MR_Word parse_tree__write_deps_file__ParentDepDate0FileNames_124;
    MR_Word parse_tree__write_deps_file__MmakeRuleParentDate0s_125;
    MR_Word parse_tree__write_deps_file__HaveMap_126;
    MR_String parse_tree__write_deps_file__ModuleArg_127;
    MR_Word parse_tree__write_deps_file__ForeignImportModules_129;
    MR_Word parse_tree__write_deps_file__ForeignImports_171;
    MR_Word parse_tree__write_deps_file__ForeignImportedModuleNames_174;
    MR_String parse_tree__write_deps_file__IntFileName_181;
    MR_String parse_tree__write_deps_file__Int2FileName_182;
    MR_String parse_tree__write_deps_file__Int3FileName_183;
    MR_String parse_tree__write_deps_file__OptFileName_184;
    MR_String parse_tree__write_deps_file__TransOptFileName_185;
    MR_String parse_tree__write_deps_file__Date3FileName_186;
    MR_Word parse_tree__write_deps_file__MmakeRulesInstallShadows_187;
    MR_Word parse_tree__write_deps_file__UseSubdirs_188;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_196_196;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_217_217;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_263_263;
    MR_Word parse_tree__write_deps_file__Var_287;
    MR_Word parse_tree__write_deps_file__Var_290;
    MR_Word parse_tree__write_deps_file__Var_291;
    MR_Word parse_tree__write_deps_file__Var_293;
    MR_Word parse_tree__write_deps_file__Var_294;
    MR_Word parse_tree__write_deps_file__Var_296;
    MR_Word parse_tree__write_deps_file__Var_297;
    MR_Word parse_tree__write_deps_file__Var_299;
    MR_Word parse_tree__write_deps_file__Var_300;
    MR_Word parse_tree__write_deps_file__Var_302;
    MR_Word parse_tree__write_deps_file__Var_307;
    MR_Word parse_tree__write_deps_file__Var_308;
    MR_Word parse_tree__write_deps_file__Var_309;
    MR_Word parse_tree__write_deps_file__Var_310;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_315_315;
    MR_Word parse_tree__write_deps_file__Var_316;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_323_323;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_342_342;
    MR_Word parse_tree__write_deps_file__Var_343;
    MR_Word parse_tree__write_deps_file__Var_344;
    MR_Word parse_tree__write_deps_file__Var_346;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_347_347;
    MR_Word parse_tree__write_deps_file__Var_348;
    MR_Word parse_tree__write_deps_file__Var_371;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_420_420;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_435_435;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_458_458;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_533_533;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_558_558;
    MR_Word parse_tree__write_deps_file__Var_569;
    MR_Word parse_tree__write_deps_file__Var_572;
    MR_Word parse_tree__write_deps_file__Var_573;
    MR_Word parse_tree__write_deps_file__Var_575;
    MR_Word parse_tree__write_deps_file__Var_576;
    MR_Word parse_tree__write_deps_file__Var_578;
    MR_Word parse_tree__write_deps_file__Var_584;
    MR_Word parse_tree__write_deps_file__Var_585;
    MR_Word parse_tree__write_deps_file__Var_587;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_590_590;
    MR_String parse_tree__write_deps_file__Var_596;
    MR_Word parse_tree__write_deps_file__Var_598;
    MR_Word parse_tree__write_deps_file__Var_601;
    MR_Word parse_tree__write_deps_file__Var_603;
    MR_Word parse_tree__write_deps_file__Var_604;
    MR_Word parse_tree__write_deps_file__Var_606;
    MR_Word parse_tree__write_deps_file__Var_607;
    MR_Word parse_tree__write_deps_file__Var_609;
    MR_Word parse_tree__write_deps_file__Var_611;
    MR_Word parse_tree__write_deps_file__Var_612;
    MR_Word parse_tree__write_deps_file__Var_614;
    MR_Word parse_tree__write_deps_file__Var_622;
    MR_Word parse_tree__write_deps_file__Var_625;
    MR_Word parse_tree__write_deps_file__Var_628;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_634_634;
    MR_Word parse_tree__write_deps_file__Var_642;
    MR_Word parse_tree__write_deps_file__Var_645;
    MR_Word parse_tree__write_deps_file__Var_646;
    MR_Word parse_tree__write_deps_file__Var_648;
    MR_Word parse_tree__write_deps_file__Var_652;
    MR_Word parse_tree__write_deps_file__Var_655;
    MR_Word parse_tree__write_deps_file__Var_666;
    MR_Word parse_tree__write_deps_file__Var_669;
    MR_Word parse_tree__write_deps_file__Var_672;
    MR_Word parse_tree__write_deps_file__Var_675;
    MR_Word parse_tree__write_deps_file__Var_679;
    MR_Word parse_tree__write_deps_file__Var_680;
    MR_Word parse_tree__write_deps_file__Var_682;
    MR_Word parse_tree__write_deps_file__Var_683;
    MR_Word parse_tree__write_deps_file__Var_685;
    MR_Word parse_tree__write_deps_file__Var_686;
    MR_Word parse_tree__write_deps_file__Var_687;
    MR_Word parse_tree__write_deps_file__Var_689;
    MR_Word parse_tree__write_deps_file__Var_690;
    MR_Word parse_tree__write_deps_file__Var_692;
    MR_Word parse_tree__write_deps_file__Var_693;
    MR_Word parse_tree__write_deps_file__Var_695;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_698_698;
    MR_Word parse_tree__write_deps_file__Var_700;
    MR_Word parse_tree__write_deps_file__Var_719;
    MR_Word parse_tree__write_deps_file__Var_723;
    MR_Word parse_tree__write_deps_file__Var_724;
    MR_Word parse_tree__write_deps_file__Var_726;
    MR_Word parse_tree__write_deps_file__Var_728;
    MR_Word parse_tree__write_deps_file__Var_729;
    MR_Word parse_tree__write_deps_file__Var_730;
    MR_Word parse_tree__write_deps_file__Var_732;
    MR_Word parse_tree__write_deps_file__Var_733;
    MR_Word parse_tree__write_deps_file__Var_735;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_738_738;
    MR_Word parse_tree__write_deps_file__Var_764;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_781_781;
    MR_Word parse_tree__write_deps_file__Var_801;
    MR_Word parse_tree__write_deps_file__Var_804;
    MR_Word parse_tree__write_deps_file__Var_805;
    MR_Word parse_tree__write_deps_file__Var_807;
    MR_Word parse_tree__write_deps_file__Var_808;
    MR_Word parse_tree__write_deps_file__Var_810;
    MR_Word parse_tree__write_deps_file__Var_812;
    MR_Word parse_tree__write_deps_file__Var_813;
    MR_Word parse_tree__write_deps_file__Var_815;
    MR_Word parse_tree__write_deps_file__Var_816;
    MR_Word parse_tree__write_deps_file__Var_818;
    MR_Word parse_tree__write_deps_file__Var_820;
    MR_Word parse_tree__write_deps_file__Var_821;
    MR_Word parse_tree__write_deps_file__Var_823;
    MR_Word parse_tree__write_deps_file__Var_824;
    MR_Word parse_tree__write_deps_file__Var_826;
    MR_Word parse_tree__write_deps_file__Var_828;
    MR_Word parse_tree__write_deps_file__Var_829;
    MR_Word parse_tree__write_deps_file__Var_831;
    MR_Word parse_tree__write_deps_file__Var_832;
    MR_Word parse_tree__write_deps_file__Var_834;
    MR_Word parse_tree__write_deps_file__Var_836;
    MR_Word parse_tree__write_deps_file__Var_837;
    MR_Word parse_tree__write_deps_file__Var_839;
    MR_Word parse_tree__write_deps_file__Var_840;
    MR_Word parse_tree__write_deps_file__Var_842;
    MR_Word parse_tree__write_deps_file__Var_844;
    MR_Word parse_tree__write_deps_file__Var_845;
    MR_Word parse_tree__write_deps_file__Var_847;
    MR_Word parse_tree__write_deps_file__Var_855;
    MR_Word parse_tree__write_deps_file__Var_860;
    MR_String parse_tree__write_deps_file__Var_861;
    MR_Word parse_tree__write_deps_file__Var_863;
    MR_Word parse_tree__write_deps_file__Var_864;
    MR_Word parse_tree__write_deps_file__Var_867;
    MR_Word parse_tree__write_deps_file__Var_869;
    MR_String parse_tree__write_deps_file__Var_870;
    MR_Word parse_tree__write_deps_file__Var_872;
    MR_Word parse_tree__write_deps_file__Var_873;
    MR_Word parse_tree__write_deps_file__Var_878;
    MR_String parse_tree__write_deps_file__Var_879;
    MR_Word parse_tree__write_deps_file__Var_881;
    MR_Word parse_tree__write_deps_file__Var_882;
    MR_Word parse_tree__write_deps_file__Var_885;
    MR_Word parse_tree__write_deps_file__Var_887;
    MR_String parse_tree__write_deps_file__Var_888;
    MR_Word parse_tree__write_deps_file__Var_890;
    MR_Word parse_tree__write_deps_file__Var_891;
    MR_Word parse_tree__write_deps_file__Var_894;
    MR_Word parse_tree__write_deps_file__Var_896;
    MR_String parse_tree__write_deps_file__Var_897;
    MR_Word parse_tree__write_deps_file__Var_899;
    MR_Word parse_tree__write_deps_file__Var_900;
    MR_Word parse_tree__write_deps_file__Var_903;
    MR_Word parse_tree__write_deps_file__Var_905;
    MR_String parse_tree__write_deps_file__Var_906;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_909_909;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_927_927;
    MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_1090_1090;
    MR_Word parse_tree__write_deps_file__TargetGroup_1093;
    MR_Word parse_tree__write_deps_file__TargetGroups_1094;
    MR_Word parse_tree__write_deps_file___ModuleNameContext_18;
    MR_Word parse_tree__write_deps_file___Children_23;
    MR_Word parse_tree__write_deps_file___ContainsForeignExport_30;
    MR_Word parse_tree__write_deps_file___ModuleVersionNumbersCord_36;
    MR_Word parse_tree__write_deps_file___Specs_37;
    MR_Word parse_tree__write_deps_file___Error_38;
    MR_Word parse_tree__write_deps_file___Timestamps_39;
    MR_Word parse_tree__write_deps_file___HasMain_40;
    MR_String parse_tree__write_deps_file___Dir_41;
    MR_String parse_tree__write_deps_file__SourceFileBase_60;
    MR_String parse_tree__write_deps_file__Var_1140;

    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) "# vim: ts=8 sw=8 noexpandtab ft=make\n\n");
    }
    {
      libs__mmakefiles__start_mmakefile_4_p_0(parse_tree__write_deps_file__DepStream_8, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_196_196);
    }
    parse_tree__write_deps_file__SourceFileName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 0)));
    parse_tree__write_deps_file__SourceFileModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 1)));
    parse_tree__write_deps_file__ModuleName_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 2)));
    parse_tree__write_deps_file___ModuleNameContext_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 3)));
    parse_tree__write_deps_file__ParentDeps_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 4)));
    parse_tree__write_deps_file__IntDeps_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 5)));
    parse_tree__write_deps_file__ImpDeps_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 6)));
    parse_tree__write_deps_file__ShortDeps0_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 7)));
    parse_tree__write_deps_file___Children_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 8)));
    parse_tree__write_deps_file__InclDeps_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 9)));
    parse_tree__write_deps_file__NestedDeps_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 10)));
    parse_tree__write_deps_file__FactDeps0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 11)));
    parse_tree__write_deps_file__ForeignImportModules0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 12)));
    parse_tree__write_deps_file__ForeignIncludeFilesCord_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 13)));
    parse_tree__write_deps_file__ContainsForeignCode_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 14)));
    parse_tree__write_deps_file___ContainsForeignExport_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 15)));
    parse_tree__write_deps_file__SrcItemBlocks_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 16)));
    parse_tree__write_deps_file__DirectIntItemBlocksCord_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 17)));
    parse_tree__write_deps_file__IndirectIntItemBlocksCord_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 18)));
    parse_tree__write_deps_file__OptItemBlocksCord_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 19)));
    parse_tree__write_deps_file__IntForOptItemBlocksCord_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 20)));
    parse_tree__write_deps_file___ModuleVersionNumbersCord_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 21)));
    parse_tree__write_deps_file___Specs_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 22)));
    parse_tree__write_deps_file___Error_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 23)));
    parse_tree__write_deps_file___Timestamps_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 24)));
    parse_tree__write_deps_file___HasMain_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 25)));
    parse_tree__write_deps_file___Dir_41 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_10, (MR_Integer) 26)));
    {
      parse_tree__file_names__module_name_to_make_var_name_2_p_0(parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__ModuleMakeVarName_42);
    }
    parse_tree__write_deps_file__TypeCtorInfo_1103_1103 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    {
      mercury__set__union_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__IntDeps_20, parse_tree__write_deps_file__ImpDeps_21, &parse_tree__write_deps_file__LongDeps0_43);
    }
    {
      mercury__set__delete_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, ((MR_Box) (parse_tree__write_deps_file__ModuleName_17)), parse_tree__write_deps_file__LongDeps0_43, &parse_tree__write_deps_file__LongDeps_45);
    }
    {
      mercury__set__difference_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__ShortDeps0_44, parse_tree__write_deps_file__LongDeps_45, &parse_tree__write_deps_file__ShortDeps1_46);
    }
    {
      mercury__set__delete_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, ((MR_Box) (parse_tree__write_deps_file__ModuleName_17)), parse_tree__write_deps_file__ShortDeps1_46, &parse_tree__write_deps_file__ShortDeps_47);
    }
    parse_tree__write_deps_file__TypeCtorInfo_1104_1104 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__sort_and_remove_dups_2_p_0(parse_tree__write_deps_file__TypeCtorInfo_1104_1104, parse_tree__write_deps_file__FactDeps0_26, &parse_tree__write_deps_file__FactDeps_48);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".trans_opt_date", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__TransOptDateFileName_49);
    }
    if ((parse_tree__write_deps_file__MaybeTransOptDeps_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_217_217 = parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_196_196;
    else
      {
        MR_Word parse_tree__write_deps_file__TransOptDeps0_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeTransOptDeps_12, (MR_Integer) 0)));
        MR_Word parse_tree__write_deps_file__TransOptDateDeps_51;
        MR_Word parse_tree__write_deps_file__TransOptDateDepsFileNames_52;
        MR_Word parse_tree__write_deps_file__MmakeRuleTransOpt_53;
        MR_Word parse_tree__write_deps_file__Var_201;
        MR_Word parse_tree__write_deps_file__Var_202;
        MR_Word parse_tree__write_deps_file__Var_212;

        {
          parse_tree__write_deps_file__Var_201 = mercury__set__list_to_set_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__TransOptDeps0_50);
        }
        {
          mercury__set__intersect_3_p_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__Var_201, parse_tree__write_deps_file__LongDeps_45, &parse_tree__write_deps_file__TransOptDateDeps_51);
        }
        {
          parse_tree__write_deps_file__Var_202 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_202, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_49));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_202, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[165])));
        }
        {
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Var_202);
        }
        {
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__DepStream_8, (MR_String) ".trans_opt", parse_tree__write_deps_file__TransOptDateDeps_51);
        }
        {
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) "\n\n");
        }
        {
          parse_tree__write_deps_file__Var_212 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__TransOptDateDeps_51);
        }
        {
          parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".trans_opt", parse_tree__write_deps_file__Var_212, &parse_tree__write_deps_file__TransOptDateDepsFileNames_52);
        }
        {
          parse_tree__write_deps_file__MmakeRuleTransOpt_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOpt_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOpt_53, 1) = ((MR_Box) ((MR_String) "trans_opt_deps"));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOpt_53, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOpt_53, 3) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_49));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOpt_53, 4) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateDepsFileNames_52));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOpt_53, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__MmakeRuleTransOpt_53, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_196_196, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_217_217);
        }
      }
    if ((parse_tree__write_deps_file__FactDeps_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_263_263 = parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_217_217;
    else
      {
        MR_Word parse_tree__write_deps_file__MmakeVarFactTables_56;
        MR_Word parse_tree__write_deps_file__MmakeVarFactTablesOs_57;
        MR_Word parse_tree__write_deps_file__MmakeVarFactTablesCs_58;
        MR_Word parse_tree__write_deps_file__MmakeVarsFactTables_59;
        MR_Word parse_tree__write_deps_file__Var_219;
        MR_Word parse_tree__write_deps_file__Var_222;
        MR_String parse_tree__write_deps_file__Var_229;
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_231_231;
        MR_Word parse_tree__write_deps_file__Var_233;
        MR_Word parse_tree__write_deps_file__Var_236;
        MR_Word parse_tree__write_deps_file__Var_237;
        MR_Word parse_tree__write_deps_file__Var_239;
        MR_Word parse_tree__write_deps_file__Var_240;
        MR_Word parse_tree__write_deps_file__Var_242;
        MR_Word parse_tree__write_deps_file__Var_243;
        MR_Word parse_tree__write_deps_file__Var_245;
        MR_String parse_tree__write_deps_file__Var_249;
        MR_String parse_tree__write_deps_file__Var_251;
        MR_String parse_tree__write_deps_file__Var_253;
        MR_String parse_tree__write_deps_file__Var_255;
        MR_String parse_tree__write_deps_file__Var_257;
        MR_String parse_tree__write_deps_file__Var_259;
        MR_Word parse_tree__write_deps_file__Var_261;

        {
          parse_tree__write_deps_file__Var_222 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_222, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_42));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_222, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[166])));
        }
        {
          parse_tree__write_deps_file__Var_219 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_219, 0) = ((MR_Box) ((MR_String) "\n\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_219, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_222));
        }
        {
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Var_219);
        }
        {
          parse_tree__write_deps_file__write_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) "", parse_tree__write_deps_file__FactDeps_48);
        }
        {
          mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_8);
        }
        {
          parse_tree__write_deps_file__Var_229 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_42, (MR_String) ".fact_tables");
        }
        {
          parse_tree__write_deps_file__MmakeVarFactTables_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarFactTables_56, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_229));
          MR_hl_field(MR_mktag(2), parse_tree__write_deps_file__MmakeVarFactTables_56, 1) = ((MR_Box) (parse_tree__write_deps_file__FactDeps_48));
        }
        {
          libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__MmakeVarFactTables_56, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_217_217, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_231_231);
        }
        {
          parse_tree__write_deps_file__Var_245 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_245, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_42));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_245, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[167])));
        }
        {
          parse_tree__write_deps_file__Var_243 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_243, 0) = ((MR_Box) ((MR_String) ".fact_tables.cs = \044("));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_243, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_245));
        }
        {
          parse_tree__write_deps_file__Var_242 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_242, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_42));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_242, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_243));
        }
        {
          parse_tree__write_deps_file__Var_240 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_240, 0) = ((MR_Box) ((MR_String) ".fact_tables:%=\044(os_subdir)%.\044O)\n\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_240, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_242));
        }
        {
          parse_tree__write_deps_file__Var_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_239, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_42));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_239, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_240));
        }
        {
          parse_tree__write_deps_file__Var_237 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_237, 0) = ((MR_Box) ((MR_String) ".fact_tables.os = \044("));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_237, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_239));
        }
        {
          parse_tree__write_deps_file__Var_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_236, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_42));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_236, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_237));
        }
        {
          parse_tree__write_deps_file__Var_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_233, 0) = ((MR_Box) ((MR_String) "\n\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_233, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_236));
        }
        {
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Var_233);
        }
        {
          parse_tree__write_deps_file__Var_249 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_42, (MR_String) ".fact_tables.os");
        }
        {
          parse_tree__write_deps_file__Var_253 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_42, (MR_String) ".fact_tables:%=\044(os_subdir)%.\044O)");
        }
        {
          parse_tree__write_deps_file__Var_251 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_253);
        }
        {
          parse_tree__write_deps_file__MmakeVarFactTablesOs_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarFactTablesOs_57, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_249));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarFactTablesOs_57, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_251));
        }
        {
          parse_tree__write_deps_file__Var_255 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_42, (MR_String) ".fact_tables.cs");
        }
        {
          parse_tree__write_deps_file__Var_259 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_42, (MR_String) ".fact_tables:%=\044(cs_subdir)%.c)");
        }
        {
          parse_tree__write_deps_file__Var_257 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_259);
        }
        {
          parse_tree__write_deps_file__MmakeVarFactTablesCs_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarFactTablesCs_58, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_255));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarFactTablesCs_58, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_257));
        }
        {
          parse_tree__write_deps_file__Var_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_261, 0) = ((MR_Box) (parse_tree__write_deps_file__MmakeVarFactTablesCs_58));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_261, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__MmakeVarsFactTables_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarsFactTables_59, 0) = ((MR_Box) (parse_tree__write_deps_file__MmakeVarFactTablesOs_57));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeVarsFactTables_59, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_261));
        }
        {
          libs__mmakefiles__gather_mmake_entries_6_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__MmakeVarsFactTables_59, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_231_231, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_263_263);
        }
      }
    {
      parse_tree__write_deps_file__succeeded = mercury__string__remove_suffix_3_p_0(parse_tree__write_deps_file__SourceFileName_15, (MR_String) ".m", &parse_tree__write_deps_file__SourceFileBase_60);
    }
    if (parse_tree__write_deps_file__succeeded)
      {
        {
          parse_tree__write_deps_file__ErrFileName_61 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__SourceFileBase_60, (MR_String) ".err");
        }
      }
    else
      {
        {
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.write_deps_file.do_write_dependency_file\'/7", (MR_String) "source file name doesn\'t end in \140.m\'");
          return;
        }
      }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".optdate", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__OptDateFileName_62);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".c_date", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__CDateFileName_63);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".\044O", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__ObjFileName_64);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".java_date", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__JavaDateFileName_65);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".pic_o", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__PicObjFileName_66);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".int0", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__Int0FileName_67);
    }
    {
      parse_tree__write_deps_file__Var_302 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_302, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_65));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_302, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_300 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_300, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_300, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_302));
    }
    {
      parse_tree__write_deps_file__Var_299 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_299, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_63));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_299, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_300));
    }
    {
      parse_tree__write_deps_file__Var_297 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_297, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_297, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_299));
    }
    {
      parse_tree__write_deps_file__Var_296 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_296, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrFileName_61));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_296, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_297));
    }
    {
      parse_tree__write_deps_file__Var_294 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_294, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_294, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_296));
    }
    {
      parse_tree__write_deps_file__Var_293 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_293, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_49));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_293, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_294));
    }
    {
      parse_tree__write_deps_file__Var_291 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_291, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_291, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_293));
    }
    {
      parse_tree__write_deps_file__Var_290 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_290, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_62));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_290, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_291));
    }
    {
      parse_tree__write_deps_file__Var_287 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_287, 0) = ((MR_Box) ((MR_String) "\n\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_287, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_290));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Var_287);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) " : ");
    }
    {
      parse_tree__write_deps_file__Var_310 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_310, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_63));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_310, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_302));
    }
    {
      parse_tree__write_deps_file__Var_309 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_309, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrFileName_61));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_309, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_310));
    }
    {
      parse_tree__write_deps_file__Var_308 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_308, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_49));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_308, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_309));
    }
    {
      parse_tree__write_deps_file__Var_307 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_307, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_62));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_307, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_308));
    }
    {
      parse_tree__write_deps_file__TargetGroup_1093 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__TargetGroup_1093, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__TargetGroup_1093, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_307));
    }
    {
      parse_tree__write_deps_file__TargetGroups_1094 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__TargetGroups_1094, 0) = ((MR_Box) (parse_tree__write_deps_file__TargetGroup_1093));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__TargetGroups_1094, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__SourceFileName_15);
    }
    {
      parse_tree__write_deps_file__Var_316 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(parse_tree__write_deps_file__SourceFileName_15);
    }
    {
      parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_315_315 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_315_315, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_316));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_315_315, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__InclDeps_24);
    }
    if (parse_tree__write_deps_file__succeeded)
      parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_323_323 = parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_315_315;
    else
      {
        MR_Word parse_tree__write_deps_file__Var_318;
        MR_Word parse_tree__write_deps_file__Var_321;
        MR_Word parse_tree__write_deps_file__Var_324;
        MR_Word parse_tree__write_deps_file__Var_325;

        {
          parse_tree__write_deps_file__Var_321 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_321, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0FileName_67));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_321, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__Var_318 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_318, 0) = ((MR_Box) ((MR_String) " "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_318, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_321));
        }
        {
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Var_318);
        }
        {
          parse_tree__write_deps_file__Var_325 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(parse_tree__write_deps_file__Int0FileName_67);
        }
        {
          parse_tree__write_deps_file__Var_324 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_324, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_325));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_324, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_323_323 = mercury__list__f_43_43_2_f_0((MR_Word) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0, parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_315_315, parse_tree__write_deps_file__Var_324);
        }
      }
    {
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__DepStream_8, (MR_String) ".int0", parse_tree__write_deps_file__ParentDeps_19);
    }
    {
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__DepStream_8, (MR_String) ".int", parse_tree__write_deps_file__LongDeps_45);
    }
    {
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__DepStream_8, (MR_String) ".int2", parse_tree__write_deps_file__ShortDeps_47);
    }
    {
      parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) "parent deps", (MR_String) ".int0", parse_tree__write_deps_file__ParentDeps_19, &parse_tree__write_deps_file__ParentDepsSourceGroups_71);
    }
    {
      parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) "long deps", (MR_String) ".int", parse_tree__write_deps_file__LongDeps_45, &parse_tree__write_deps_file__LongDepsSourceGroups_72);
    }
    {
      parse_tree__write_deps_file__make_module_file_name_group_with_suffix_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) "short deps", (MR_String) ".int2", parse_tree__write_deps_file__ShortDeps_47, &parse_tree__write_deps_file__ShortDepsSourceGroups_73);
    }
    parse_tree__write_deps_file__TypeCtorInfo_1106_1106 = (MR_Word) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0;
    {
      parse_tree__write_deps_file__Var_344 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_1106_1106, parse_tree__write_deps_file__LongDepsSourceGroups_72, parse_tree__write_deps_file__ShortDepsSourceGroups_73);
    }
    {
      parse_tree__write_deps_file__Var_343 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_1106_1106, parse_tree__write_deps_file__ParentDepsSourceGroups_71, parse_tree__write_deps_file__Var_344);
    }
    {
      parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_342_342 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_1106_1106, parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_323_323, parse_tree__write_deps_file__Var_343);
    }
    parse_tree__write_deps_file__TypeCtorInfo_1107_1107 = (MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_include_file_info_0;
    {
      parse_tree__write_deps_file__ForeignIncludeFiles_74 = mercury__cord__list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_1107_1107, parse_tree__write_deps_file__ForeignIncludeFilesCord_28);
    }
    {
      parse_tree__write_deps_file__write_foreign_include_file_dependencies_list_5_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__SourceFileName_15, parse_tree__write_deps_file__ForeignIncludeFiles_74);
    }
    {
      parse_tree__write_deps_file__Var_346 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_346, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_346, 1) = ((MR_Box) (parse_tree__write_deps_file__do_write_dependency_file_7_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_346, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_346, 3) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_15));
    }
    {
      parse_tree__write_deps_file__ForeignImportFileNames_75 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_1107_1107, parse_tree__write_deps_file__TypeCtorInfo_1104_1104, parse_tree__write_deps_file__Var_346, parse_tree__write_deps_file__ForeignIncludeFiles_74);
    }
    {
      parse_tree__write_deps_file__Var_348 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "foreign imports", parse_tree__write_deps_file__ForeignImportFileNames_75);
    }
    {
      parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_347_347 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_1106_1106, parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_342_342, parse_tree__write_deps_file__Var_348);
    }
    parse_tree__write_deps_file__Var_371 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    if ((parse_tree__write_deps_file__FactDeps_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word parse_tree__write_deps_file__MmakeRuleDateFileDeps_79;

        {
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) "\n\n");
        }
        {
          parse_tree__write_deps_file__MmakeRuleDateFileDeps_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_79, 1) = ((MR_Box) ((MR_String) "date_file_deps"));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_79, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_79, 3) = ((MR_Box) (parse_tree__write_deps_file__TargetGroups_1094));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_79, 4) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_347_347));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_79, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_371));
        }
        {
          libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__MmakeRuleDateFileDeps_79, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_263_263, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_420_420);
        }
      }
    else
      {
        MR_Word parse_tree__write_deps_file__FactTableSourceGroup_78;
        MR_Word parse_tree__write_deps_file__MmakeRuleFactOs_82;
        MR_Word parse_tree__write_deps_file__MmakeRuleFactCs_83;
        MR_Word parse_tree__write_deps_file__MmakeRulesFactOsCs_84;
        MR_Word parse_tree__write_deps_file__Var_350;
        MR_Word parse_tree__write_deps_file__Var_353;
        MR_Word parse_tree__write_deps_file__Var_358;
        MR_String parse_tree__write_deps_file__Var_359;
        MR_String parse_tree__write_deps_file__Var_361;
        MR_Word parse_tree__write_deps_file__Var_365;
        MR_Word parse_tree__write_deps_file__Var_374;
        MR_Word parse_tree__write_deps_file__Var_377;
        MR_Word parse_tree__write_deps_file__Var_378;
        MR_Word parse_tree__write_deps_file__Var_380;
        MR_Word parse_tree__write_deps_file__Var_381;
        MR_Word parse_tree__write_deps_file__Var_383;
        MR_Word parse_tree__write_deps_file__Var_384;
        MR_Word parse_tree__write_deps_file__Var_386;
        MR_Word parse_tree__write_deps_file__Var_388;
        MR_Word parse_tree__write_deps_file__Var_389;
        MR_Word parse_tree__write_deps_file__Var_391;
        MR_String parse_tree__write_deps_file__Var_397;
        MR_String parse_tree__write_deps_file__Var_399;
        MR_Word parse_tree__write_deps_file__Var_401;
        MR_String parse_tree__write_deps_file__Var_402;
        MR_String parse_tree__write_deps_file__Var_404;
        MR_Word parse_tree__write_deps_file__Var_406;
        MR_String parse_tree__write_deps_file__Var_411;
        MR_String parse_tree__write_deps_file__Var_413;
        MR_Word parse_tree__write_deps_file__Var_415;
        MR_Word parse_tree__write_deps_file__Var_418;
        MR_Word parse_tree__write_deps_file__MmakeRuleDateFileDeps_1141;
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_364_1143;
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_372_1145;

        {
          parse_tree__write_deps_file__Var_353 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_353, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_42));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_353, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[168])));
        }
        {
          parse_tree__write_deps_file__Var_350 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_350, 0) = ((MR_Box) ((MR_String) " \\\n\t\044("));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_350, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_353));
        }
        {
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Var_350);
        }
        {
          parse_tree__write_deps_file__Var_361 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_42, (MR_String) ".fact_tables)");
        }
        {
          parse_tree__write_deps_file__Var_359 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_361);
        }
        {
          parse_tree__write_deps_file__Var_358 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_358, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_359));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_358, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__FactTableSourceGroup_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FactTableSourceGroup_78, 0) = ((MR_Box) ((MR_String) "fact tables"));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__FactTableSourceGroup_78, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_358));
        }
        {
          parse_tree__write_deps_file__Var_365 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_365, 0) = ((MR_Box) (parse_tree__write_deps_file__FactTableSourceGroup_78));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_365, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_364_1143 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_1106_1106, parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_347_347, parse_tree__write_deps_file__Var_365);
        }
        {
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) "\n\n");
        }
        {
          parse_tree__write_deps_file__MmakeRuleDateFileDeps_1141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_1141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_1141, 1) = ((MR_Box) ((MR_String) "date_file_deps"));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_1141, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_1141, 3) = ((MR_Box) (parse_tree__write_deps_file__TargetGroups_1094));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_1141, 4) = ((MR_Box) (parse_tree__write_deps_file__STATE_VARIABLE_SourceGroups_364_1143));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateFileDeps_1141, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_371));
        }
        {
          libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__MmakeRuleDateFileDeps_1141, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_263_263, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_372_1145);
        }
        {
          parse_tree__write_deps_file__Var_391 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_391, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_64));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_391, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[14])));
        }
        {
          parse_tree__write_deps_file__Var_389 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_389, 0) = ((MR_Box) ((MR_String) ".fact_tables.cs) : "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_389, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_391));
        }
        {
          parse_tree__write_deps_file__Var_388 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_388, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_42));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_388, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_389));
        }
        {
          parse_tree__write_deps_file__Var_386 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_386, 0) = ((MR_Box) ((MR_String) "\044("));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_386, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_388));
        }
        {
          parse_tree__write_deps_file__Var_384 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_384, 0) = ((MR_Box) ((MR_String) "\n\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_384, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_386));
        }
        {
          parse_tree__write_deps_file__Var_383 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_383, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_15));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_383, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_384));
        }
        {
          parse_tree__write_deps_file__Var_381 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_381, 0) = ((MR_Box) ((MR_String) ".fact_tables) "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_381, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_383));
        }
        {
          parse_tree__write_deps_file__Var_380 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_380, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_42));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_380, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_381));
        }
        {
          parse_tree__write_deps_file__Var_378 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_378, 0) = ((MR_Box) ((MR_String) ".fact_tables.os) : \044("));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_378, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_380));
        }
        {
          parse_tree__write_deps_file__Var_377 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_377, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleMakeVarName_42));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_377, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_378));
        }
        {
          parse_tree__write_deps_file__Var_374 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_374, 0) = ((MR_Box) ((MR_String) "\044("));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_374, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_377));
        }
        {
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Var_374);
        }
        {
          parse_tree__write_deps_file__Var_399 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_42, (MR_String) ".fact_tables.os)");
        }
        {
          parse_tree__write_deps_file__Var_397 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_399);
        }
        {
          parse_tree__write_deps_file__Var_404 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_42, (MR_String) ".fact_tables)");
        }
        {
          parse_tree__write_deps_file__Var_402 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_404);
        }
        {
          parse_tree__write_deps_file__Var_406 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_406, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_15));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_406, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__Var_401 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_401, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_402));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_401, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_406));
        }
        {
          parse_tree__write_deps_file__MmakeRuleFactOs_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactOs_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactOs_82, 1) = ((MR_Box) ((MR_String) "fact_table_os"));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactOs_82, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactOs_82, 3) = ((MR_Box) (parse_tree__write_deps_file__Var_397));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactOs_82, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_401));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactOs_82, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__Var_413 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleMakeVarName_42, (MR_String) ".fact_tables.cs)");
        }
        {
          parse_tree__write_deps_file__Var_411 = mercury__string__f_43_43_2_f_0((MR_String) "\044(", parse_tree__write_deps_file__Var_413);
        }
        {
          parse_tree__write_deps_file__Var_415 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_415, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_64));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_415, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__MmakeRuleFactCs_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactCs_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactCs_83, 1) = ((MR_Box) ((MR_String) "fact_table_cs"));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactCs_83, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactCs_83, 3) = ((MR_Box) (parse_tree__write_deps_file__Var_411));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactCs_83, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_415));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleFactCs_83, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__Var_418 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_418, 0) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleFactCs_83));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_418, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__MmakeRulesFactOsCs_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeRulesFactOsCs_84, 0) = ((MR_Box) (parse_tree__write_deps_file__MmakeRuleFactOs_82));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeRulesFactOsCs_84, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_418));
        }
        {
          libs__mmakefiles__gather_mmake_entries_6_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__MmakeRulesFactOsCs_84, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_372_1145, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_420_420);
        }
      }
    {
      parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__NestedDeps_25);
    }
    if (parse_tree__write_deps_file__succeeded)
      parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_435_435 = parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_420_420;
    else
      {
        MR_Word parse_tree__write_deps_file__MmakeRulesNestedDeps_86;
        MR_Word parse_tree__write_deps_file__Var_432;
        MR_Word parse_tree__write_deps_file__Var_434;
        MR_Box parse_tree__write_deps_file__conv2_STATE_VARIABLE_IO_433_433;

        {
          parse_tree__write_deps_file__Var_434 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__NestedDeps_25);
        }
        {
          parse_tree__write_deps_file__Var_432 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_432, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[0]));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_432, 1) = ((MR_Box) (parse_tree__write_deps_file__do_write_dependency_file_7_p_0_2));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_432, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_432, 3) = ((MR_Box) (parse_tree__write_deps_file__DepStream_8));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_432, 4) = ((MR_Box) (parse_tree__write_deps_file__Globals_9));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_432, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_17));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_432, 6) = ((MR_Box) (parse_tree__write_deps_file__Var_434));
        }
        {
          mercury__list__map_foldl_5_p_2(parse_tree__write_deps_file__TypeCtorInfo_1104_1104, (MR_Word) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Var_432, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[11]), &parse_tree__write_deps_file__MmakeRulesNestedDeps_86, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv2_STATE_VARIABLE_IO_433_433);
        }
        {
          libs__mmakefiles__gather_mmake_entries_6_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__MmakeRulesNestedDeps_86, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_420_420, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_435_435);
        }
      }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 333, &parse_tree__write_deps_file__UseOptFiles_87);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 331, &parse_tree__write_deps_file__Intermod_88);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 651, &parse_tree__write_deps_file__IntermodDirs_89);
    }
    switch (parse_tree__write_deps_file__Intermod_88) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_458_458 = parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_435_435;
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__write_deps_file__AllDepsFileNames_90;
          MR_Word parse_tree__write_deps_file__MmakeRuleMhDeps_91;
          MR_Word parse_tree__write_deps_file__Var_440;
          MR_Word parse_tree__write_deps_file__Var_443;
          MR_Word parse_tree__write_deps_file__Var_448;
          MR_Word parse_tree__write_deps_file__Var_453;

          {
            parse_tree__write_deps_file__Var_443 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_443, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_64));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_443, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[169])));
          }
          {
            parse_tree__write_deps_file__Var_440 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_440, 0) = ((MR_Box) ((MR_String) "\n\n"));
            MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_440, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_443));
          }
          {
            mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Var_440);
          }
          {
            parse_tree__write_deps_file__Var_448 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__AllDeps_11);
          }
          {
            parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__DepStream_8, (MR_String) ".mh", parse_tree__write_deps_file__Var_448);
          }
          {
            mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) "\n\n");
          }
          {
            parse_tree__write_deps_file__Var_453 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__AllDeps_11);
          }
          {
            parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".mh", parse_tree__write_deps_file__Var_453, &parse_tree__write_deps_file__AllDepsFileNames_90);
          }
          {
            parse_tree__write_deps_file__MmakeRuleMhDeps_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhDeps_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhDeps_91, 1) = ((MR_Box) ((MR_String) "machine_dependent_header_deps"));
            MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhDeps_91, 2) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhDeps_91, 3) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_64));
            MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhDeps_91, 4) = ((MR_Box) (parse_tree__write_deps_file__AllDepsFileNames_90));
            MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhDeps_91, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__MmakeRuleMhDeps_91, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_435_435, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_458_458);
          }
        }
        break;
    }
    parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__Intermod_88 == (MR_Integer) 1);
    if (!(parse_tree__write_deps_file__succeeded))
      parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__UseOptFiles_87 == (MR_Integer) 1);
    if (parse_tree__write_deps_file__succeeded)
      {
        MR_Word parse_tree__write_deps_file__TransOpt_94;
        MR_Word parse_tree__write_deps_file__UseTransOpt_95;
        MR_Word parse_tree__write_deps_file__BuildOptFiles_96;
        MR_Word parse_tree__write_deps_file__OptDeps_97;
        MR_Word parse_tree__write_deps_file__MaybeTransOptDeps1_99;
        MR_Word parse_tree__write_deps_file__OptInt0Deps_100;
        MR_Word parse_tree__write_deps_file__OptDepsFileNames_101;
        MR_Word parse_tree__write_deps_file__OptInt0DepsFileNames_102;
        MR_Word parse_tree__write_deps_file__MmakeRuleDateOptInt0Deps_103;
        MR_Word parse_tree__write_deps_file__Var_460;
        MR_Word parse_tree__write_deps_file__Var_463;
        MR_Word parse_tree__write_deps_file__Var_464;
        MR_Word parse_tree__write_deps_file__Var_466;
        MR_Word parse_tree__write_deps_file__Var_467;
        MR_Word parse_tree__write_deps_file__Var_469;
        MR_Word parse_tree__write_deps_file__Var_470;
        MR_Word parse_tree__write_deps_file__Var_472;
        MR_Word parse_tree__write_deps_file__Var_489;
        MR_Word parse_tree__write_deps_file__Var_500;
        MR_Word parse_tree__write_deps_file__Var_504;
        MR_Word parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_506_506;
        MR_Word parse_tree__write_deps_file__Targets_1097;

        {
          parse_tree__write_deps_file__Var_472 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_472, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_65));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_472, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[169])));
        }
        {
          parse_tree__write_deps_file__Var_470 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_470, 0) = ((MR_Box) ((MR_String) " "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_470, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_472));
        }
        {
          parse_tree__write_deps_file__Var_469 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_469, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_63));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_469, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_470));
        }
        {
          parse_tree__write_deps_file__Var_467 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_467, 0) = ((MR_Box) ((MR_String) " "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_467, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_469));
        }
        {
          parse_tree__write_deps_file__Var_466 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_466, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrFileName_61));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_466, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_467));
        }
        {
          parse_tree__write_deps_file__Var_464 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_464, 0) = ((MR_Box) ((MR_String) " "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_464, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_466));
        }
        {
          parse_tree__write_deps_file__Var_463 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_463, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_49));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_463, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_464));
        }
        {
          parse_tree__write_deps_file__Var_460 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_460, 0) = ((MR_Box) ((MR_String) "\n\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_460, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_463));
        }
        {
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Var_460);
        }
        {
          parse_tree__write_deps_file__Targets_1097 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Targets_1097, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_49));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Targets_1097, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_309));
        }
        {
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 335, &parse_tree__write_deps_file__TransOpt_94);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 334, &parse_tree__write_deps_file__UseTransOpt_95);
        }
        {
          mercury__bool__not_2_p_0(parse_tree__write_deps_file__UseTransOpt_95, &parse_tree__write_deps_file__BuildOptFiles_96);
        }
        parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__TransOpt_94 == (MR_Integer) 1);
        if (!(parse_tree__write_deps_file__succeeded))
          parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__UseTransOpt_95 == (MR_Integer) 1);
        if (parse_tree__write_deps_file__succeeded)
          {
            MR_Word parse_tree__write_deps_file__TransOptDeps1_98;
            MR_Word parse_tree__write_deps_file__Var_482;
            MR_Word parse_tree__write_deps_file__Var_484;

            {
              parse_tree__write_deps_file__Var_484 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__LongDeps_45);
            }
            {
              parse_tree__write_deps_file__Var_482 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_482, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_17));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_482, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_484));
            }
            {
              parse_tree__write_deps_file__get_both_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__BuildOptFiles_96, parse_tree__write_deps_file__IntermodDirs_89, parse_tree__write_deps_file__Var_482, &parse_tree__write_deps_file__OptDeps_97, &parse_tree__write_deps_file__TransOptDeps1_98);
            }
            {
              parse_tree__write_deps_file__MaybeTransOptDeps1_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeTransOptDeps1_99, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDeps1_98));
            }
          }
        else
          {
            MR_Word parse_tree__write_deps_file__Var_486;
            MR_Word parse_tree__write_deps_file__Var_488;

            {
              parse_tree__write_deps_file__Var_488 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__LongDeps_45);
            }
            {
              parse_tree__write_deps_file__Var_486 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_486, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_17));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_486, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_488));
            }
            {
              parse_tree__write_deps_file__get_opt_deps_8_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__BuildOptFiles_96, parse_tree__write_deps_file__IntermodDirs_89, (MR_String) ".opt", parse_tree__write_deps_file__Var_486, &parse_tree__write_deps_file__OptDeps_97);
            }
            parse_tree__write_deps_file__MaybeTransOptDeps1_99 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        {
          parse_tree__write_deps_file__Var_489 = mercury__list__map_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, (MR_Word) &parse_tree__write_deps_file_scalar_common_1[0], (MR_Word) &parse_tree__write_deps_file_scalar_common_2[5], parse_tree__write_deps_file__OptDeps_97);
        }
        {
          parse_tree__write_deps_file__OptInt0Deps_100 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__Var_489);
        }
        {
          parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__DepStream_8, (MR_String) ".opt", parse_tree__write_deps_file__OptDeps_97);
        }
        {
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__DepStream_8, (MR_String) ".int0", parse_tree__write_deps_file__OptInt0Deps_100);
        }
        {
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) "\n\n");
        }
        {
          parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".opt", parse_tree__write_deps_file__OptDeps_97, &parse_tree__write_deps_file__OptDepsFileNames_101);
        }
        {
          parse_tree__write_deps_file__Var_500 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__OptInt0Deps_100);
        }
        {
          parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".int0", parse_tree__write_deps_file__Var_500, &parse_tree__write_deps_file__OptInt0DepsFileNames_102);
        }
        {
          parse_tree__write_deps_file__Var_504 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_1104_1104, parse_tree__write_deps_file__OptDepsFileNames_101, parse_tree__write_deps_file__OptInt0DepsFileNames_102);
        }
        {
          parse_tree__write_deps_file__MmakeRuleDateOptInt0Deps_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateOptInt0Deps_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateOptInt0Deps_103, 1) = ((MR_Box) ((MR_String) "dates_on_opts_and_int0s"));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateOptInt0Deps_103, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateOptInt0Deps_103, 3) = ((MR_Box) (parse_tree__write_deps_file__Targets_1097));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateOptInt0Deps_103, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_504));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleDateOptInt0Deps_103, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__MmakeRuleDateOptInt0Deps_103, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_458_458, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_506_506);
        }
        if ((parse_tree__write_deps_file__MaybeTransOptDeps1_99 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_533_533 = parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_506_506;
        else
          {
            MR_Word parse_tree__write_deps_file__TransOptDeps2_104 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MaybeTransOptDeps1_99, (MR_Integer) 0)));
            MR_Word parse_tree__write_deps_file__TransOptDepsOptFileNames_105;
            MR_Word parse_tree__write_deps_file__MmakeRuleTransOptOpts_106;
            MR_Word parse_tree__write_deps_file__Var_508;
            MR_Word parse_tree__write_deps_file__Targets_1098;

            {
              parse_tree__write_deps_file__Var_508 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_508, 0) = ((MR_Box) ((MR_String) "\n\n"));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_508, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_466));
            }
            {
              mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Var_508);
            }
            {
              parse_tree__write_deps_file__Targets_1098 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Targets_1098, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrFileName_61));
              MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Targets_1098, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_310));
            }
            {
              parse_tree__write_deps_file__write_dependencies_list_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__DepStream_8, (MR_String) ".trans_opt", parse_tree__write_deps_file__TransOptDeps2_104);
            }
            {
              mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) "\n\n");
            }
            {
              parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".trans_opt", parse_tree__write_deps_file__TransOptDeps2_104, &parse_tree__write_deps_file__TransOptDepsOptFileNames_105);
            }
            {
              parse_tree__write_deps_file__MmakeRuleTransOptOpts_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOptOpts_106, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOptOpts_106, 1) = ((MR_Box) ((MR_String) "dates_on_trans_opts\'_opts"));
              MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOptOpts_106, 2) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOptOpts_106, 3) = ((MR_Box) (parse_tree__write_deps_file__Targets_1098));
              MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOptOpts_106, 4) = ((MR_Box) (parse_tree__write_deps_file__TransOptDepsOptFileNames_105));
              MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleTransOptOpts_106, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__MmakeRuleTransOptOpts_106, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_506_506, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_533_533);
            }
          }
      }
    else
      parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_533_533 = parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_458_458;
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 263, &parse_tree__write_deps_file__HighLevelCode_107);
    }
    {
      libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_9, &parse_tree__write_deps_file__CompilationTarget_108);
    }
    parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__HighLevelCode_107 == (MR_Integer) 1);
    if (parse_tree__write_deps_file__succeeded)
      parse_tree__write_deps_file__succeeded = (parse_tree__write_deps_file__CompilationTarget_108 == (MR_Integer) 0);
    if (parse_tree__write_deps_file__succeeded)
      {
        MR_Word parse_tree__write_deps_file__MmakeRuleObjOnMihs_109;
        MR_Word parse_tree__write_deps_file__Var_536;
        MR_Word parse_tree__write_deps_file__Var_539;
        MR_Word parse_tree__write_deps_file__Var_540;
        MR_Word parse_tree__write_deps_file__Var_542;
        MR_Word parse_tree__write_deps_file__Var_546;
        MR_Word parse_tree__write_deps_file__Var_553;
        MR_Word parse_tree__write_deps_file__AllDepsFileNames_1099;
        MR_Word parse_tree__write_deps_file__Targets_1100;

        {
          parse_tree__write_deps_file__Var_542 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_542, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_64));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_542, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[165])));
        }
        {
          parse_tree__write_deps_file__Var_540 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_540, 0) = ((MR_Box) ((MR_String) " "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_540, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_542));
        }
        {
          parse_tree__write_deps_file__Var_539 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_539, 0) = ((MR_Box) (parse_tree__write_deps_file__PicObjFileName_66));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_539, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_540));
        }
        {
          parse_tree__write_deps_file__Var_536 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_536, 0) = ((MR_Box) ((MR_String) "\n\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_536, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_539));
        }
        {
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Var_536);
        }
        {
          parse_tree__write_deps_file__Var_546 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_546, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_64));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_546, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__Targets_1100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Targets_1100, 0) = ((MR_Box) (parse_tree__write_deps_file__PicObjFileName_66));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Targets_1100, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_546));
        }
        {
          parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__DepStream_8, (MR_String) ".mih", parse_tree__write_deps_file__AllDeps_11);
        }
        {
          mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) "\n\n");
        }
        {
          parse_tree__write_deps_file__Var_553 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__AllDeps_11);
        }
        {
          parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".mih", parse_tree__write_deps_file__Var_553, &parse_tree__write_deps_file__AllDepsFileNames_1099);
        }
        {
          parse_tree__write_deps_file__MmakeRuleObjOnMihs_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleObjOnMihs_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleObjOnMihs_109, 1) = ((MR_Box) ((MR_String) "objs_on_mihs"));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleObjOnMihs_109, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleObjOnMihs_109, 3) = ((MR_Box) (parse_tree__write_deps_file__Targets_1100));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleObjOnMihs_109, 4) = ((MR_Box) (parse_tree__write_deps_file__AllDepsFileNames_1099));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleObjOnMihs_109, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__MmakeRuleObjOnMihs_109, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_533_533, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_558_558);
        }
      }
    else
      parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_558_558 = parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_533_533;
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".c", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__CFileName_110);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".mh", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__MhHeaderFileName_111);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".mih", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__MihHeaderFileName_112);
    }
    {
      parse_tree__write_deps_file__Var_578 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_578, 0) = ((MR_Box) (parse_tree__write_deps_file__CFileName_110));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_578, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[170])));
    }
    {
      parse_tree__write_deps_file__Var_576 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_576, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_576, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_578));
    }
    {
      parse_tree__write_deps_file__Var_575 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_575, 0) = ((MR_Box) (parse_tree__write_deps_file__MihHeaderFileName_112));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_575, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_576));
    }
    {
      parse_tree__write_deps_file__Var_573 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_573, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_573, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_575));
    }
    {
      parse_tree__write_deps_file__Var_572 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_572, 0) = ((MR_Box) (parse_tree__write_deps_file__MhHeaderFileName_111));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_572, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_573));
    }
    {
      parse_tree__write_deps_file__Var_569 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_569, 0) = ((MR_Box) ((MR_String) "\n\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_569, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_572));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Var_569);
    }
    {
      parse_tree__write_deps_file__Var_585 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_585, 0) = ((MR_Box) (parse_tree__write_deps_file__MihHeaderFileName_112));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_585, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_584 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_584, 0) = ((MR_Box) (parse_tree__write_deps_file__MhHeaderFileName_111));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_584, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_585));
    }
    {
      parse_tree__write_deps_file__Var_587 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_587, 0) = ((MR_Box) (parse_tree__write_deps_file__CFileName_110));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_587, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__MmakeRuleMhMihOnC_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhMihOnC_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhMihOnC_113, 1) = ((MR_Box) ((MR_String) "mh_and_mih_on_c"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhMihOnC_113, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhMihOnC_113, 3) = ((MR_Box) (parse_tree__write_deps_file__Var_584));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhMihOnC_113, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_587));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleMhMihOnC_113, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__MmakeRuleMhMihOnC_113, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_558_558, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_590_590);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".java", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__JavaFileName_114);
    }
    {
      parse_tree__write_deps_file__Var_596 = make__make_module_dep_file_extension_0_f_0();
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, parse_tree__write_deps_file__Var_596, parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__ModuleDepFileName_115);
    }
    {
      parse_tree__write_deps_file__Var_614 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_614, 0) = ((MR_Box) (parse_tree__write_deps_file__CFileName_110));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_614, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[13])));
    }
    {
      parse_tree__write_deps_file__Var_612 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_612, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_612, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_614));
    }
    {
      parse_tree__write_deps_file__Var_611 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_611, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_115));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_611, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_612));
    }
    {
      parse_tree__write_deps_file__Var_609 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_609, 0) = ((MR_Box) ((MR_String) "else\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_609, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_611));
    }
    {
      parse_tree__write_deps_file__Var_607 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_607, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_607, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_609));
    }
    {
      parse_tree__write_deps_file__Var_606 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_606, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaFileName_114));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_606, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_607));
    }
    {
      parse_tree__write_deps_file__Var_604 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_604, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_604, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_606));
    }
    {
      parse_tree__write_deps_file__Var_603 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_603, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_115));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_603, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_604));
    }
    {
      parse_tree__write_deps_file__Var_601 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_601, 0) = ((MR_Box) ((MR_String) "ifeq (\044(findstring java,\044(GRADE)),java)\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_601, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_603));
    }
    {
      parse_tree__write_deps_file__Var_598 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_598, 0) = ((MR_Box) ((MR_String) "\n\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_598, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_601));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Var_598);
    }
    {
      parse_tree__write_deps_file__Var_625 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_625, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaFileName_114));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_625, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_622 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_622, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_622, 1) = ((MR_Box) ((MR_String) "module_dep_on_java"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_622, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_622, 3) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_115));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_622, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_625));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_622, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_628 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_628, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_628, 1) = ((MR_Box) ((MR_String) "module_dep_on_c"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_628, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_628, 3) = ((MR_Box) (parse_tree__write_deps_file__ModuleDepFileName_115));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_628, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_587));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_628, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__MmakeFragmentModuleDep_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentModuleDep_116, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_7[0]));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentModuleDep_116, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_622));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeFragmentModuleDep_116, 2) = ((MR_Box) (parse_tree__write_deps_file__Var_628));
    }
    {
      libs__mmakefiles__gather_mmake_fragment_6_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__MmakeFragmentModuleDep_116, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_590_590, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_634_634);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".date", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__DateFileName_117);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".date0", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__Date0FileName_118);
    }
    {
      parse_tree__write_deps_file__Var_648 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_648, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_118));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_648, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_646 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_646, 0) = ((MR_Box) ((MR_String) " "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_646, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_648));
    }
    {
      parse_tree__write_deps_file__Var_645 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_645, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_117));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_645, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_646));
    }
    {
      parse_tree__write_deps_file__Var_642 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_642, 0) = ((MR_Box) ((MR_String) "\n\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_642, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_645));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Var_642);
    }
    {
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__DepStream_8, (MR_String) ".date", parse_tree__write_deps_file__ParentDeps_19);
    }
    {
      parse_tree__write_deps_file__Var_655 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_655, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_15));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_655, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_652 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_652, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_652, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_655));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Var_652);
    }
    {
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__DepStream_8, (MR_String) ".int0", parse_tree__write_deps_file__ParentDeps_19);
    }
    {
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__DepStream_8, (MR_String) ".int3", parse_tree__write_deps_file__LongDeps_45);
    }
    {
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__DepStream_8, (MR_String) ".int3", parse_tree__write_deps_file__ShortDeps_47);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) "\n\n");
    }
    {
      parse_tree__write_deps_file__Var_666 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__ParentDeps_19);
    }
    {
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".date", parse_tree__write_deps_file__Var_666, &parse_tree__write_deps_file__ParentDepDateFileNames_119);
    }
    {
      parse_tree__write_deps_file__Var_669 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__ParentDeps_19);
    }
    {
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".int0", parse_tree__write_deps_file__Var_669, &parse_tree__write_deps_file__ParentDepInt0FileNames_120);
    }
    {
      parse_tree__write_deps_file__Var_672 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__LongDeps_45);
    }
    {
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".int3", parse_tree__write_deps_file__Var_672, &parse_tree__write_deps_file__LongDepInt3FileNames_121);
    }
    {
      parse_tree__write_deps_file__Var_675 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__ShortDeps_47);
    }
    {
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".int3", parse_tree__write_deps_file__Var_675, &parse_tree__write_deps_file__ShortDepInt3FileNames_122);
    }
    {
      parse_tree__write_deps_file__Var_683 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_683, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_118));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_683, 1) = ((MR_Box) (parse_tree__write_deps_file__ParentDepDateFileNames_119));
    }
    {
      parse_tree__write_deps_file__Var_682 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_682, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_117));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_682, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_683));
    }
    {
      parse_tree__write_deps_file__Var_680 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_680, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_680, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_682));
    }
    {
      parse_tree__write_deps_file__Var_679 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_679, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_680));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_679, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    parse_tree__write_deps_file__TypeCtorInfo_1119_1119 = (MR_Word) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_file_name_group_0;
    {
      parse_tree__write_deps_file__Var_687 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(parse_tree__write_deps_file__SourceFileName_15);
    }
    {
      parse_tree__write_deps_file__Var_686 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_686, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_687));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_686, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_690 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "parent dep int0", parse_tree__write_deps_file__ParentDepInt0FileNames_120);
    }
    {
      parse_tree__write_deps_file__Var_693 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "long dep int3s", parse_tree__write_deps_file__LongDepInt3FileNames_121);
    }
    {
      parse_tree__write_deps_file__Var_695 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "short dep int3s", parse_tree__write_deps_file__ShortDepInt3FileNames_122);
    }
    {
      parse_tree__write_deps_file__Var_692 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_1119_1119, parse_tree__write_deps_file__Var_693, parse_tree__write_deps_file__Var_695);
    }
    {
      parse_tree__write_deps_file__Var_689 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_1119_1119, parse_tree__write_deps_file__Var_690, parse_tree__write_deps_file__Var_692);
    }
    {
      parse_tree__write_deps_file__Var_685 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_1119_1119, parse_tree__write_deps_file__Var_686, parse_tree__write_deps_file__Var_689);
    }
    {
      parse_tree__write_deps_file__MmakeRuleParentDates_123 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDates_123, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDates_123, 1) = ((MR_Box) ((MR_String) "self_and_parent_date_deps"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDates_123, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDates_123, 3) = ((MR_Box) (parse_tree__write_deps_file__Var_679));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDates_123, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_685));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDates_123, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__MmakeRuleParentDates_123, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_634_634, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_698_698);
    }
    {
      parse_tree__write_deps_file__Var_700 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_700, 0) = ((MR_Box) ((MR_String) "\n\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_700, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_648));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Var_700);
    }
    {
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__DepStream_8, (MR_String) ".date0", parse_tree__write_deps_file__ParentDeps_19);
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Var_652);
    }
    {
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__DepStream_8, (MR_String) ".int3", parse_tree__write_deps_file__LongDeps_45);
    }
    {
      parse_tree__write_deps_file__write_dependencies_set_6_p_0(parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__DepStream_8, (MR_String) ".int3", parse_tree__write_deps_file__ShortDeps_47);
    }
    {
      mercury__io__write_string_4_p_0(parse_tree__write_deps_file__DepStream_8, (MR_String) "\n\n");
    }
    {
      parse_tree__write_deps_file__Var_719 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__ParentDeps_19);
    }
    {
      parse_tree__write_deps_file__make_module_file_names_with_suffix_6_p_0(parse_tree__write_deps_file__Globals_9, (MR_String) ".date0", parse_tree__write_deps_file__Var_719, &parse_tree__write_deps_file__ParentDepDate0FileNames_124);
    }
    {
      parse_tree__write_deps_file__Var_726 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_726, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_118));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_726, 1) = ((MR_Box) (parse_tree__write_deps_file__ParentDepDate0FileNames_124));
    }
    {
      parse_tree__write_deps_file__Var_724 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_724, 0) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_724, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_726));
    }
    {
      parse_tree__write_deps_file__Var_723 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_723, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_724));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_723, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_730 = libs__mmakefiles__make_singleton_file_name_group_1_f_0(parse_tree__write_deps_file__SourceFileName_15);
    }
    {
      parse_tree__write_deps_file__Var_729 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_729, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_730));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_729, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_733 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "long dep int3s", parse_tree__write_deps_file__LongDepInt3FileNames_121);
    }
    {
      parse_tree__write_deps_file__Var_735 = libs__mmakefiles__make_file_name_group_2_f_0((MR_String) "short dep int3s", parse_tree__write_deps_file__ShortDepInt3FileNames_122);
    }
    {
      parse_tree__write_deps_file__Var_732 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_1119_1119, parse_tree__write_deps_file__Var_733, parse_tree__write_deps_file__Var_735);
    }
    {
      parse_tree__write_deps_file__Var_728 = mercury__list__f_43_43_2_f_0(parse_tree__write_deps_file__TypeCtorInfo_1119_1119, parse_tree__write_deps_file__Var_729, parse_tree__write_deps_file__Var_732);
    }
    {
      parse_tree__write_deps_file__MmakeRuleParentDate0s_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDate0s_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDate0s_125, 1) = ((MR_Box) ((MR_String) "self_and_parent_date0_deps"));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDate0s_125, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDate0s_125, 3) = ((MR_Box) (parse_tree__write_deps_file__Var_723));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDate0s_125, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_728));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__MmakeRuleParentDate0s_125, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      libs__mmakefiles__gather_mmake_entry_6_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__MmakeRuleParentDate0s_125, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_698_698, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_738_738);
    }
    {
      parse_tree__source_file_map__have_source_file_map_3_p_0(&parse_tree__write_deps_file__HaveMap_126);
    }
    switch (parse_tree__write_deps_file__HaveMap_126) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__write_deps_file__ModuleArg_127 = parse_tree__write_deps_file__SourceFileName_15;
        break;
      case (MR_Integer) 1:
        {
          parse_tree__file_names__module_name_to_file_name_stem_2_p_0(parse_tree__write_deps_file__SourceFileModuleName_16, &parse_tree__write_deps_file__ModuleArg_127);
        }
        break;
    }
    switch (MR_tag((MR_Word) parse_tree__write_deps_file__ContainsForeignCode_29)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(parse_tree__write_deps_file__ContainsForeignCode_29)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            parse_tree__write_deps_file__ForeignImportModules_129 = parse_tree__write_deps_file__ForeignImportModules0_27;
            break;
          case (MR_Integer) 1:
            {
              MR_Word parse_tree__write_deps_file__TypeInfo_1121_1121;
              MR_Word parse_tree__write_deps_file__SrcForeignImportModules_131;
              MR_Word parse_tree__write_deps_file__IntItemBlocksCord_134;
              MR_Word parse_tree__write_deps_file__IntForeignImportModules_136;
              MR_Word parse_tree__write_deps_file__OptForeignImportModules_140;
              MR_Word parse_tree__write_deps_file__IntForOptForeignImportModules_144;
              MR_Word parse_tree__write_deps_file__Var_741;
              MR_Word parse_tree__write_deps_file__Var_742;
              MR_Word parse_tree__write_deps_file__Var_743;
              MR_Word parse_tree__write_deps_file___SrcLangSet_130;
              MR_Word parse_tree__write_deps_file__Var_132;
              MR_Word parse_tree__write_deps_file__Var_133;
              MR_Word parse_tree__write_deps_file___IntLangSet_135;
              MR_Word parse_tree__write_deps_file__Var_137;
              MR_Word parse_tree__write_deps_file__Var_138;
              MR_Word parse_tree__write_deps_file___OptLangSet_139;
              MR_Word parse_tree__write_deps_file__Var_141;
              MR_Word parse_tree__write_deps_file__Var_142;
              MR_Word parse_tree__write_deps_file___IntForOptLangSet_143;
              MR_Word parse_tree__write_deps_file__Var_145;
              MR_Word parse_tree__write_deps_file__Var_146;
              MR_Word parse_tree__write_deps_file__C0_147;
              MR_Word parse_tree__write_deps_file__CSharp0_148;
              MR_Word parse_tree__write_deps_file__Java0_149;
              MR_Word parse_tree__write_deps_file__Erlang0_150;

              {
                parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_src_module_section_0, parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__SrcItemBlocks_31, &parse_tree__write_deps_file___SrcLangSet_130, &parse_tree__write_deps_file__SrcForeignImportModules_131, &parse_tree__write_deps_file__Var_132, &parse_tree__write_deps_file__Var_133);
              }
              parse_tree__write_deps_file__TypeInfo_1121_1121 = (MR_Word) &parse_tree__write_deps_file_scalar_common_1[1];
              {
                parse_tree__write_deps_file__IntItemBlocksCord_134 = mercury__cord__f_43_43_2_f_0(parse_tree__write_deps_file__TypeInfo_1121_1121, parse_tree__write_deps_file__DirectIntItemBlocksCord_32, parse_tree__write_deps_file__IndirectIntItemBlocksCord_33);
              }
              {
                parse_tree__write_deps_file__Var_741 = mercury__cord__list_1_f_0(parse_tree__write_deps_file__TypeInfo_1121_1121, parse_tree__write_deps_file__IntItemBlocksCord_134);
              }
              {
                parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_module_section_0, parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__Var_741, &parse_tree__write_deps_file___IntLangSet_135, &parse_tree__write_deps_file__IntForeignImportModules_136, &parse_tree__write_deps_file__Var_137, &parse_tree__write_deps_file__Var_138);
              }
              {
                parse_tree__write_deps_file__Var_742 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[2], parse_tree__write_deps_file__OptItemBlocksCord_34);
              }
              {
                parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_opt_module_section_0, parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__Var_742, &parse_tree__write_deps_file___OptLangSet_139, &parse_tree__write_deps_file__OptForeignImportModules_140, &parse_tree__write_deps_file__Var_141, &parse_tree__write_deps_file__Var_142);
              }
              {
                parse_tree__write_deps_file__Var_743 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__write_deps_file_scalar_common_1[3], parse_tree__write_deps_file__IntForOptItemBlocksCord_35);
              }
              {
                parse_tree__prog_item__get_foreign_code_indicators_from_item_blocks_6_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_int_for_opt_module_section_0, parse_tree__write_deps_file__Globals_9, parse_tree__write_deps_file__Var_743, &parse_tree__write_deps_file___IntForOptLangSet_143, &parse_tree__write_deps_file__IntForOptForeignImportModules_144, &parse_tree__write_deps_file__Var_145, &parse_tree__write_deps_file__Var_146);
              }
              parse_tree__write_deps_file__C0_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_27, (MR_Integer) 0)));
              parse_tree__write_deps_file__CSharp0_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_27, (MR_Integer) 1)));
              parse_tree__write_deps_file__Java0_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_27, (MR_Integer) 2)));
              parse_tree__write_deps_file__Erlang0_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules0_27, (MR_Integer) 3)));
              {
                parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__C0_147);
              }
              if (parse_tree__write_deps_file__succeeded)
                {
                  {
                    parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__CSharp0_148);
                  }
                  if (parse_tree__write_deps_file__succeeded)
                    {
                      {
                        parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__Java0_149);
                      }
                      if (parse_tree__write_deps_file__succeeded)
                        {
                          parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__Erlang0_150);
                        }
                    }
                }
              if (parse_tree__write_deps_file__succeeded)
                {
                  MR_Word parse_tree__write_deps_file__SrcC_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_131, (MR_Integer) 0)));
                  MR_Word parse_tree__write_deps_file__SrcCSharp_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_131, (MR_Integer) 1)));
                  MR_Word parse_tree__write_deps_file__SrcJava_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_131, (MR_Integer) 2)));
                  MR_Word parse_tree__write_deps_file__SrcErlang_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__SrcForeignImportModules_131, (MR_Integer) 3)));
                  MR_Word parse_tree__write_deps_file__IntC_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_136, (MR_Integer) 0)));
                  MR_Word parse_tree__write_deps_file__IntCSharp_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_136, (MR_Integer) 1)));
                  MR_Word parse_tree__write_deps_file__IntJava_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_136, (MR_Integer) 2)));
                  MR_Word parse_tree__write_deps_file__IntErlang_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForeignImportModules_136, (MR_Integer) 3)));
                  MR_Word parse_tree__write_deps_file__OptC_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_140, (MR_Integer) 0)));
                  MR_Word parse_tree__write_deps_file__OptCSharp_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_140, (MR_Integer) 1)));
                  MR_Word parse_tree__write_deps_file__OptJava_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_140, (MR_Integer) 2)));
                  MR_Word parse_tree__write_deps_file__OptErlang_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__OptForeignImportModules_140, (MR_Integer) 3)));
                  MR_Word parse_tree__write_deps_file__IntForOptC_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_144, (MR_Integer) 0)));
                  MR_Word parse_tree__write_deps_file__IntForOptCSharp_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_144, (MR_Integer) 1)));
                  MR_Word parse_tree__write_deps_file__IntForOptJava_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_144, (MR_Integer) 2)));
                  MR_Word parse_tree__write_deps_file__IntForOptErlang_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__IntForOptForeignImportModules_144, (MR_Integer) 3)));
                  MR_Word parse_tree__write_deps_file__C_167;
                  MR_Word parse_tree__write_deps_file__CSharp_168;
                  MR_Word parse_tree__write_deps_file__Java_169;
                  MR_Word parse_tree__write_deps_file__Erlang_170;
                  MR_Word parse_tree__write_deps_file__Var_744;
                  MR_Word parse_tree__write_deps_file__Var_745;
                  MR_Word parse_tree__write_deps_file__Var_746;
                  MR_Word parse_tree__write_deps_file__Var_747;
                  MR_Word parse_tree__write_deps_file__Var_749;
                  MR_Word parse_tree__write_deps_file__Var_750;
                  MR_Word parse_tree__write_deps_file__Var_751;
                  MR_Word parse_tree__write_deps_file__Var_752;
                  MR_Word parse_tree__write_deps_file__Var_754;
                  MR_Word parse_tree__write_deps_file__Var_755;
                  MR_Word parse_tree__write_deps_file__Var_756;
                  MR_Word parse_tree__write_deps_file__Var_757;
                  MR_Word parse_tree__write_deps_file__Var_759;
                  MR_Word parse_tree__write_deps_file__Var_760;
                  MR_Word parse_tree__write_deps_file__Var_761;
                  MR_Word parse_tree__write_deps_file__Var_762;

                  {
                    parse_tree__write_deps_file__Var_747 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_747, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptC_163));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_747, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__write_deps_file__Var_746 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_746, 0) = ((MR_Box) (parse_tree__write_deps_file__OptC_159));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_746, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_747));
                  }
                  {
                    parse_tree__write_deps_file__Var_745 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_745, 0) = ((MR_Box) (parse_tree__write_deps_file__IntC_155));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_745, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_746));
                  }
                  {
                    parse_tree__write_deps_file__Var_744 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_744, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcC_151));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_744, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_745));
                  }
                  {
                    parse_tree__write_deps_file__C_167 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__Var_744);
                  }
                  {
                    parse_tree__write_deps_file__Var_752 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_752, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptCSharp_164));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_752, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__write_deps_file__Var_751 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_751, 0) = ((MR_Box) (parse_tree__write_deps_file__OptCSharp_160));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_751, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_752));
                  }
                  {
                    parse_tree__write_deps_file__Var_750 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_750, 0) = ((MR_Box) (parse_tree__write_deps_file__IntCSharp_156));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_750, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_751));
                  }
                  {
                    parse_tree__write_deps_file__Var_749 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_749, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcCSharp_152));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_749, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_750));
                  }
                  {
                    parse_tree__write_deps_file__CSharp_168 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__Var_749);
                  }
                  {
                    parse_tree__write_deps_file__Var_757 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_757, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptJava_165));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_757, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__write_deps_file__Var_756 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_756, 0) = ((MR_Box) (parse_tree__write_deps_file__OptJava_161));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_756, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_757));
                  }
                  {
                    parse_tree__write_deps_file__Var_755 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_755, 0) = ((MR_Box) (parse_tree__write_deps_file__IntJava_157));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_755, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_756));
                  }
                  {
                    parse_tree__write_deps_file__Var_754 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_754, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcJava_153));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_754, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_755));
                  }
                  {
                    parse_tree__write_deps_file__Java_169 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__Var_754);
                  }
                  {
                    parse_tree__write_deps_file__Var_762 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_762, 0) = ((MR_Box) (parse_tree__write_deps_file__IntForOptErlang_166));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_762, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    parse_tree__write_deps_file__Var_761 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_761, 0) = ((MR_Box) (parse_tree__write_deps_file__OptErlang_162));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_761, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_762));
                  }
                  {
                    parse_tree__write_deps_file__Var_760 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_760, 0) = ((MR_Box) (parse_tree__write_deps_file__IntErlang_158));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_760, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_761));
                  }
                  {
                    parse_tree__write_deps_file__Var_759 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_759, 0) = ((MR_Box) (parse_tree__write_deps_file__SrcErlang_154));
                    MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_759, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_760));
                  }
                  {
                    parse_tree__write_deps_file__Erlang_170 = mercury__set__union_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__Var_759);
                  }
                  {
                    parse_tree__write_deps_file__ForeignImportModules_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_129, 0) = ((MR_Box) (parse_tree__write_deps_file__C_167));
                    MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_129, 1) = ((MR_Box) (parse_tree__write_deps_file__CSharp_168));
                    MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_129, 2) = ((MR_Box) (parse_tree__write_deps_file__Java_169));
                    MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ForeignImportModules_129, 3) = ((MR_Box) (parse_tree__write_deps_file__Erlang_170));
                  }
                }
              else
                parse_tree__write_deps_file__ForeignImportModules_129 = parse_tree__write_deps_file__ForeignImportModules0_27;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        parse_tree__write_deps_file__ForeignImportModules_129 = parse_tree__write_deps_file__ForeignImportModules0_27;
        break;
    }
    {
      parse_tree__write_deps_file__ForeignImports_171 = parse_tree__prog_data_foreign__get_all_foreign_import_module_infos_1_f_0(parse_tree__write_deps_file__ForeignImportModules_129);
    }
    {
      parse_tree__write_deps_file__Var_764 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_764, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_764, 1) = ((MR_Box) (parse_tree__write_deps_file__do_write_dependency_file_7_p_0_4));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_764, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_764, 3) = ((MR_Box) (parse_tree__write_deps_file__SourceFileModuleName_16));
    }
    {
      mercury__set__filter_map_3_p_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0, parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__Var_764, parse_tree__write_deps_file__ForeignImports_171, &parse_tree__write_deps_file__ForeignImportedModuleNames_174);
    }
    {
      parse_tree__write_deps_file__succeeded = mercury__set__is_empty_1_p_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__ForeignImportedModuleNames_174);
    }
    if (parse_tree__write_deps_file__succeeded)
      parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_781_781 = parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_738_738;
    else
      {
        MR_Word parse_tree__write_deps_file__Target_175;
        MR_Word parse_tree__write_deps_file__ForeignImportTargets_176;
        MR_String parse_tree__write_deps_file__ForeignImportExt_177;
        MR_Word parse_tree__write_deps_file__MmakeRulesForeignImports_180;
        MR_Word parse_tree__write_deps_file__Var_778;
        MR_Word parse_tree__write_deps_file__Var_780;
        MR_Box parse_tree__write_deps_file__conv6_STATE_VARIABLE_IO_779_779;

        {
          libs__globals__get_target_2_p_0(parse_tree__write_deps_file__Globals_9, &parse_tree__write_deps_file__Target_175);
        }
        switch (parse_tree__write_deps_file__Target_175) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word parse_tree__write_deps_file__Var_768;

              {
                parse_tree__write_deps_file__Var_768 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_768, 0) = ((MR_Box) (parse_tree__write_deps_file__PicObjFileName_66));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_768, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                parse_tree__write_deps_file__ForeignImportTargets_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_176, 0) = ((MR_Box) (parse_tree__write_deps_file__ObjFileName_64));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_176, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_768));
              }
              parse_tree__write_deps_file__ForeignImportExt_177 = (MR_String) ".mh";
            }
            break;
          case (MR_Integer) 1:
            {
              parse_tree__write_deps_file__ForeignImportTargets_176 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              parse_tree__write_deps_file__ForeignImportExt_177 = (MR_String) ".cs";
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String parse_tree__write_deps_file__BeamFileName_179;

              {
                parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".beam", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__BeamFileName_179);
              }
              {
                parse_tree__write_deps_file__ForeignImportTargets_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_176, 0) = ((MR_Box) (parse_tree__write_deps_file__BeamFileName_179));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_176, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              parse_tree__write_deps_file__ForeignImportExt_177 = (MR_String) ".hrl";
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String parse_tree__write_deps_file__ClassFileName_178;

              {
                parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".class", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__ClassFileName_178);
              }
              {
                parse_tree__write_deps_file__ForeignImportTargets_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_176, 0) = ((MR_Box) (parse_tree__write_deps_file__ClassFileName_178));
                MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__ForeignImportTargets_176, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              parse_tree__write_deps_file__ForeignImportExt_177 = (MR_String) ".java";
            }
            break;
        }
        {
          parse_tree__write_deps_file__Var_780 = mercury__set__to_sorted_list_1_f_0(parse_tree__write_deps_file__TypeCtorInfo_1103_1103, parse_tree__write_deps_file__ForeignImportedModuleNames_174);
        }
        {
          parse_tree__write_deps_file__Var_778 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_778, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_5[1]));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_778, 1) = ((MR_Box) (parse_tree__write_deps_file__do_write_dependency_file_7_p_0_5));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_778, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_778, 3) = ((MR_Box) (parse_tree__write_deps_file__DepStream_8));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_778, 4) = ((MR_Box) (parse_tree__write_deps_file__Globals_9));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_778, 5) = ((MR_Box) (parse_tree__write_deps_file__ForeignImportExt_177));
          MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_778, 6) = ((MR_Box) (parse_tree__write_deps_file__Var_780));
        }
        {
          mercury__list__map_foldl_5_p_2(parse_tree__write_deps_file__TypeCtorInfo_1104_1104, (MR_Word) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Var_778, parse_tree__write_deps_file__ForeignImportTargets_176, &parse_tree__write_deps_file__MmakeRulesForeignImports_180, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv6_STATE_VARIABLE_IO_779_779);
        }
        {
          libs__mmakefiles__gather_mmake_entries_6_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__MmakeRulesForeignImports_180, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_738_738, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_781_781);
        }
      }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".int", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__IntFileName_181);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".int2", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__Int2FileName_182);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".int3", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__Int3FileName_183);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".opt", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__OptFileName_184);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".trans_opt", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__TransOptFileName_185);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 1, (MR_String) ".date3", parse_tree__write_deps_file__ModuleName_17, &parse_tree__write_deps_file__Date3FileName_186);
    }
    {
      parse_tree__write_deps_file__Var_847 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_847, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_49));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_847, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[16])));
    }
    {
      parse_tree__write_deps_file__Var_845 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_845, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_845, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_847));
    }
    {
      parse_tree__write_deps_file__Var_844 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_844, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptFileName_185));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_844, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_845));
    }
    {
      parse_tree__write_deps_file__Var_842 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_842, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_842, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_844));
    }
    {
      parse_tree__write_deps_file__Var_840 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_840, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_840, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_842));
    }
    {
      parse_tree__write_deps_file__Var_839 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_839, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_62));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_839, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_840));
    }
    {
      parse_tree__write_deps_file__Var_837 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_837, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_837, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_839));
    }
    {
      parse_tree__write_deps_file__Var_836 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_836, 0) = ((MR_Box) (parse_tree__write_deps_file__OptFileName_184));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_836, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_837));
    }
    {
      parse_tree__write_deps_file__Var_834 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_834, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_834, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_836));
    }
    {
      parse_tree__write_deps_file__Var_832 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_832, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_832, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_834));
    }
    {
      parse_tree__write_deps_file__Var_831 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_831, 0) = ((MR_Box) (parse_tree__write_deps_file__Date3FileName_186));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_831, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_832));
    }
    {
      parse_tree__write_deps_file__Var_829 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_829, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_829, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_831));
    }
    {
      parse_tree__write_deps_file__Var_828 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_828, 0) = ((MR_Box) (parse_tree__write_deps_file__Int3FileName_183));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_828, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_829));
    }
    {
      parse_tree__write_deps_file__Var_826 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_826, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_826, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_828));
    }
    {
      parse_tree__write_deps_file__Var_824 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_824, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_824, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_826));
    }
    {
      parse_tree__write_deps_file__Var_823 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_823, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_117));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_823, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_824));
    }
    {
      parse_tree__write_deps_file__Var_821 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_821, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_821, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_823));
    }
    {
      parse_tree__write_deps_file__Var_820 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_820, 0) = ((MR_Box) (parse_tree__write_deps_file__Int2FileName_182));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_820, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_821));
    }
    {
      parse_tree__write_deps_file__Var_818 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_818, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_818, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_820));
    }
    {
      parse_tree__write_deps_file__Var_816 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_816, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_816, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_818));
    }
    {
      parse_tree__write_deps_file__Var_815 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_815, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_117));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_815, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_816));
    }
    {
      parse_tree__write_deps_file__Var_813 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_813, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_813, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_815));
    }
    {
      parse_tree__write_deps_file__Var_812 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_812, 0) = ((MR_Box) (parse_tree__write_deps_file__IntFileName_181));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_812, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_813));
    }
    {
      parse_tree__write_deps_file__Var_810 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_810, 0) = ((MR_Box) ((MR_String) "\t\100:\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_810, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_812));
    }
    {
      parse_tree__write_deps_file__Var_808 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_808, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_808, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_810));
    }
    {
      parse_tree__write_deps_file__Var_807 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_807, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_118));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_807, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_808));
    }
    {
      parse_tree__write_deps_file__Var_805 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_805, 0) = ((MR_Box) ((MR_String) " : "));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_805, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_807));
    }
    {
      parse_tree__write_deps_file__Var_804 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_804, 0) = ((MR_Box) (parse_tree__write_deps_file__Int0FileName_67));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_804, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_805));
    }
    {
      parse_tree__write_deps_file__Var_801 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_801, 0) = ((MR_Box) ((MR_String) "\n"));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_801, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_804));
    }
    {
      mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Var_801);
    }
    {
      parse_tree__write_deps_file__Var_861 = libs__mmakefiles__silent_noop_action_0_f_0();
    }
    {
      parse_tree__write_deps_file__Var_860 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_860, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_861));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_860, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_855 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_855, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_855, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_855, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_855, 3) = ((MR_Box) (parse_tree__write_deps_file__Int0FileName_67));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_855, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_648));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_855, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_860));
    }
    {
      parse_tree__write_deps_file__Var_867 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_867, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_117));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_867, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_870 = libs__mmakefiles__silent_noop_action_0_f_0();
    }
    {
      parse_tree__write_deps_file__Var_869 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_869, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_870));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_869, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_864 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_864, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_864, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_864, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_864, 3) = ((MR_Box) (parse_tree__write_deps_file__IntFileName_181));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_864, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_867));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_864, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_869));
    }
    {
      parse_tree__write_deps_file__Var_879 = libs__mmakefiles__silent_noop_action_0_f_0();
    }
    {
      parse_tree__write_deps_file__Var_878 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_878, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_879));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_878, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_873 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_873, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_873, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_873, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_873, 3) = ((MR_Box) (parse_tree__write_deps_file__Int2FileName_182));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_873, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_867));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_873, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_878));
    }
    {
      parse_tree__write_deps_file__Var_885 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_885, 0) = ((MR_Box) (parse_tree__write_deps_file__Date3FileName_186));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_885, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_888 = libs__mmakefiles__silent_noop_action_0_f_0();
    }
    {
      parse_tree__write_deps_file__Var_887 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_887, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_888));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_887, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_882 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_882, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_882, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_882, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_882, 3) = ((MR_Box) (parse_tree__write_deps_file__Int3FileName_183));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_882, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_885));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_882, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_887));
    }
    {
      parse_tree__write_deps_file__Var_894 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_894, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_62));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_894, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_897 = libs__mmakefiles__silent_noop_action_0_f_0();
    }
    {
      parse_tree__write_deps_file__Var_896 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_896, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_897));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_896, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_891 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_891, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_891, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_891, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_891, 3) = ((MR_Box) (parse_tree__write_deps_file__OptFileName_184));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_891, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_894));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_891, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_896));
    }
    {
      parse_tree__write_deps_file__Var_903 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_903, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_49));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_903, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_906 = libs__mmakefiles__silent_noop_action_0_f_0();
    }
    {
      parse_tree__write_deps_file__Var_905 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_905, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_906));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_905, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_900 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_900, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_900, 1) = ((MR_Box) ((MR_String) ""));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_900, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_900, 3) = ((MR_Box) (parse_tree__write_deps_file__TransOptFileName_185));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_900, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_903));
      MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_900, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_905));
    }
    {
      parse_tree__write_deps_file__Var_899 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_899, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_900));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_899, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      parse_tree__write_deps_file__Var_890 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_890, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_891));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_890, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_899));
    }
    {
      parse_tree__write_deps_file__Var_881 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_881, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_882));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_881, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_890));
    }
    {
      parse_tree__write_deps_file__Var_872 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_872, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_873));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_872, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_881));
    }
    {
      parse_tree__write_deps_file__Var_863 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_863, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_864));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_863, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_872));
    }
    {
      parse_tree__write_deps_file__MmakeRulesInstallShadows_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeRulesInstallShadows_187, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_855));
      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeRulesInstallShadows_187, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_863));
    }
    {
      libs__mmakefiles__gather_mmake_entries_6_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__MmakeRulesInstallShadows_187, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_781_781, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_909_909);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_9, (MR_Integer) 648, &parse_tree__write_deps_file__UseSubdirs_188);
    }
    switch (parse_tree__write_deps_file__UseSubdirs_188) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_927_927 = parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_909_909;
        break;
      case (MR_Integer) 1:
        {
          MR_Word parse_tree__write_deps_file__MmakeRulesSubDirShorthand_190;
          MR_Word parse_tree__write_deps_file__Var_925;
          MR_Box parse_tree__write_deps_file__conv8_STATE_VARIABLE_IO_926_926;

          {
            mercury__io__nl_3_p_0(parse_tree__write_deps_file__DepStream_8);
          }
          {
            parse_tree__write_deps_file__Var_925 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_925, 0) = ((MR_Box) (&parse_tree__write_deps_file_scalar_common_8[0]));
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_925, 1) = ((MR_Box) (parse_tree__write_deps_file__do_write_dependency_file_7_p_0_6));
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_925, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_925, 3) = ((MR_Box) (parse_tree__write_deps_file__Globals_9));
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_925, 4) = ((MR_Box) (parse_tree__write_deps_file__DepStream_8));
            MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Var_925, 5) = ((MR_Box) (parse_tree__write_deps_file__ModuleName_17));
          }
          {
            mercury__list__map_foldl_5_p_2(parse_tree__write_deps_file__TypeCtorInfo_1104_1104, (MR_Word) &libs__mmakefiles__libs__mmakefiles__type_ctor_info_mmake_entry_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, parse_tree__write_deps_file__Var_925, (MR_Word) MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[22]), &parse_tree__write_deps_file__MmakeRulesSubDirShorthand_190, ((MR_Box) ((MR_Integer) 0)), &parse_tree__write_deps_file__conv8_STATE_VARIABLE_IO_926_926);
          }
          {
            libs__mmakefiles__gather_mmake_entries_6_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__MmakeRulesSubDirShorthand_190, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_909_909, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_927_927);
          }
        }
        break;
    }
    {
      parse_tree__write_deps_file__Var_1140 = parse_tree__source_file_map__default_source_file_1_f_0(parse_tree__write_deps_file__ModuleName_17);
    }
    parse_tree__write_deps_file__succeeded = (strcmp(parse_tree__write_deps_file__SourceFileName_15, parse_tree__write_deps_file__Var_1140) == 0);
    if (parse_tree__write_deps_file__succeeded)
      parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_1090_1090 = parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_927_927;
    else
      {
        MR_Word parse_tree__write_deps_file__MmakeRulesPattern_191;
        MR_Word parse_tree__write_deps_file__Var_929;
        MR_Word parse_tree__write_deps_file__Var_932;
        MR_Word parse_tree__write_deps_file__Var_933;
        MR_Word parse_tree__write_deps_file__Var_935;
        MR_Word parse_tree__write_deps_file__Var_936;
        MR_Word parse_tree__write_deps_file__Var_938;
        MR_Word parse_tree__write_deps_file__Var_940;
        MR_Word parse_tree__write_deps_file__Var_942;
        MR_Word parse_tree__write_deps_file__Var_943;
        MR_Word parse_tree__write_deps_file__Var_945;
        MR_Word parse_tree__write_deps_file__Var_946;
        MR_Word parse_tree__write_deps_file__Var_948;
        MR_Word parse_tree__write_deps_file__Var_949;
        MR_Word parse_tree__write_deps_file__Var_951;
        MR_Word parse_tree__write_deps_file__Var_953;
        MR_Word parse_tree__write_deps_file__Var_954;
        MR_Word parse_tree__write_deps_file__Var_956;
        MR_Word parse_tree__write_deps_file__Var_957;
        MR_Word parse_tree__write_deps_file__Var_959;
        MR_Word parse_tree__write_deps_file__Var_960;
        MR_Word parse_tree__write_deps_file__Var_962;
        MR_Word parse_tree__write_deps_file__Var_964;
        MR_Word parse_tree__write_deps_file__Var_965;
        MR_Word parse_tree__write_deps_file__Var_967;
        MR_Word parse_tree__write_deps_file__Var_968;
        MR_Word parse_tree__write_deps_file__Var_970;
        MR_Word parse_tree__write_deps_file__Var_971;
        MR_Word parse_tree__write_deps_file__Var_973;
        MR_Word parse_tree__write_deps_file__Var_975;
        MR_Word parse_tree__write_deps_file__Var_976;
        MR_Word parse_tree__write_deps_file__Var_978;
        MR_Word parse_tree__write_deps_file__Var_979;
        MR_Word parse_tree__write_deps_file__Var_981;
        MR_Word parse_tree__write_deps_file__Var_982;
        MR_Word parse_tree__write_deps_file__Var_984;
        MR_Word parse_tree__write_deps_file__Var_986;
        MR_Word parse_tree__write_deps_file__Var_988;
        MR_Word parse_tree__write_deps_file__Var_989;
        MR_Word parse_tree__write_deps_file__Var_991;
        MR_Word parse_tree__write_deps_file__Var_992;
        MR_Word parse_tree__write_deps_file__Var_994;
        MR_Word parse_tree__write_deps_file__Var_995;
        MR_Word parse_tree__write_deps_file__Var_997;
        MR_Word parse_tree__write_deps_file__Var_999;
        MR_Word parse_tree__write_deps_file__Var_1000;
        MR_Word parse_tree__write_deps_file__Var_1002;
        MR_Word parse_tree__write_deps_file__Var_1003;
        MR_Word parse_tree__write_deps_file__Var_1005;
        MR_Word parse_tree__write_deps_file__Var_1006;
        MR_Word parse_tree__write_deps_file__Var_1008;
        MR_Word parse_tree__write_deps_file__Var_1010;
        MR_Word parse_tree__write_deps_file__Var_1012;
        MR_Word parse_tree__write_deps_file__Var_1016;
        MR_Word parse_tree__write_deps_file__Var_1021;
        MR_String parse_tree__write_deps_file__Var_1022;
        MR_Word parse_tree__write_deps_file__Var_1025;
        MR_Word parse_tree__write_deps_file__Var_1026;
        MR_Word parse_tree__write_deps_file__Var_1031;
        MR_String parse_tree__write_deps_file__Var_1032;
        MR_Word parse_tree__write_deps_file__Var_1035;
        MR_Word parse_tree__write_deps_file__Var_1036;
        MR_Word parse_tree__write_deps_file__Var_1041;
        MR_String parse_tree__write_deps_file__Var_1042;
        MR_Word parse_tree__write_deps_file__Var_1045;
        MR_Word parse_tree__write_deps_file__Var_1046;
        MR_Word parse_tree__write_deps_file__Var_1051;
        MR_String parse_tree__write_deps_file__Var_1052;
        MR_Word parse_tree__write_deps_file__Var_1055;
        MR_Word parse_tree__write_deps_file__Var_1056;
        MR_Word parse_tree__write_deps_file__Var_1061;
        MR_String parse_tree__write_deps_file__Var_1062;
        MR_Word parse_tree__write_deps_file__Var_1065;
        MR_Word parse_tree__write_deps_file__Var_1066;
        MR_Word parse_tree__write_deps_file__Var_1071;
        MR_String parse_tree__write_deps_file__Var_1072;
        MR_String parse_tree__write_deps_file__Var_1074;
        MR_Word parse_tree__write_deps_file__Var_1077;
        MR_Word parse_tree__write_deps_file__Var_1078;
        MR_Word parse_tree__write_deps_file__Var_1083;
        MR_String parse_tree__write_deps_file__Var_1084;
        MR_String parse_tree__write_deps_file__Var_1086;

        {
          parse_tree__write_deps_file__Var_1012 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1012, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_127));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1012, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &parse_tree__write_deps_file_scalar_common_1[171])));
        }
        {
          parse_tree__write_deps_file__Var_1010 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1010, 0) = ((MR_Box) ((MR_String) "--java-only "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1010, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_1012));
        }
        {
          parse_tree__write_deps_file__Var_1008 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1008, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1008, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_1010));
        }
        {
          parse_tree__write_deps_file__Var_1006 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1006, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1006, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_1008));
        }
        {
          parse_tree__write_deps_file__Var_1005 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1005, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_15));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1005, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_1006));
        }
        {
          parse_tree__write_deps_file__Var_1003 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1003, 0) = ((MR_Box) ((MR_String) " : "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1003, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_1005));
        }
        {
          parse_tree__write_deps_file__Var_1002 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1002, 0) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_65));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1002, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_1003));
        }
        {
          parse_tree__write_deps_file__Var_1000 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1000, 0) = ((MR_Box) ((MR_String) " \044(ERR_REDIRECT)\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1000, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_1002));
        }
        {
          parse_tree__write_deps_file__Var_999 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_999, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_127));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_999, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_1000));
        }
        {
          parse_tree__write_deps_file__Var_997 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_997, 0) = ((MR_Box) ((MR_String) "\t\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_997, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_999));
        }
        {
          parse_tree__write_deps_file__Var_995 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_995, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_995, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_997));
        }
        {
          parse_tree__write_deps_file__Var_994 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_994, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_15));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_994, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_995));
        }
        {
          parse_tree__write_deps_file__Var_992 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_992, 0) = ((MR_Box) ((MR_String) " : "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_992, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_994));
        }
        {
          parse_tree__write_deps_file__Var_991 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_991, 0) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_63));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_991, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_992));
        }
        {
          parse_tree__write_deps_file__Var_989 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_989, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_989, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_991));
        }
        {
          parse_tree__write_deps_file__Var_988 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_988, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_127));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_988, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_989));
        }
        {
          parse_tree__write_deps_file__Var_986 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_986, 0) = ((MR_Box) ((MR_String) "\044(ALL_MCTOIFLAGS) "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_986, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_988));
        }
        {
          parse_tree__write_deps_file__Var_984 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_984, 0) = ((MR_Box) ((MR_String) "\t\044(MCTOI) \044(ALL_GRADEFLAGS) "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_984, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_986));
        }
        {
          parse_tree__write_deps_file__Var_982 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_982, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_982, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_984));
        }
        {
          parse_tree__write_deps_file__Var_981 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_981, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_15));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_981, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_982));
        }
        {
          parse_tree__write_deps_file__Var_979 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_979, 0) = ((MR_Box) ((MR_String) " : "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_979, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_981));
        }
        {
          parse_tree__write_deps_file__Var_978 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_978, 0) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_49));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_978, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_979));
        }
        {
          parse_tree__write_deps_file__Var_976 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_976, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_976, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_978));
        }
        {
          parse_tree__write_deps_file__Var_975 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_975, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_127));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_975, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_976));
        }
        {
          parse_tree__write_deps_file__Var_973 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_973, 0) = ((MR_Box) ((MR_String) "\t\044(MCOI) \044(ALL_GRADEFLAGS) \044(ALL_MCOIFLAGS) "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_973, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_975));
        }
        {
          parse_tree__write_deps_file__Var_971 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_971, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_971, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_973));
        }
        {
          parse_tree__write_deps_file__Var_970 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_970, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_15));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_970, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_971));
        }
        {
          parse_tree__write_deps_file__Var_968 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_968, 0) = ((MR_Box) ((MR_String) " : "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_968, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_970));
        }
        {
          parse_tree__write_deps_file__Var_967 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_967, 0) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_62));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_967, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_968));
        }
        {
          parse_tree__write_deps_file__Var_965 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_965, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_965, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_967));
        }
        {
          parse_tree__write_deps_file__Var_964 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_964, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_127));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_964, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_965));
        }
        {
          parse_tree__write_deps_file__Var_962 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_962, 0) = ((MR_Box) ((MR_String) "\t\044(MCSI) \044(ALL_GRADEFLAGS) \044(ALL_MCSIFLAGS) "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_962, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_964));
        }
        {
          parse_tree__write_deps_file__Var_960 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_960, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_960, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_962));
        }
        {
          parse_tree__write_deps_file__Var_959 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_959, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_15));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_959, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_960));
        }
        {
          parse_tree__write_deps_file__Var_957 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_957, 0) = ((MR_Box) ((MR_String) " : "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_957, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_959));
        }
        {
          parse_tree__write_deps_file__Var_956 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_956, 0) = ((MR_Box) (parse_tree__write_deps_file__Date3FileName_186));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_956, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_957));
        }
        {
          parse_tree__write_deps_file__Var_954 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_954, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_954, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_956));
        }
        {
          parse_tree__write_deps_file__Var_953 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_953, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_127));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_953, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_954));
        }
        {
          parse_tree__write_deps_file__Var_951 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_951, 0) = ((MR_Box) ((MR_String) "\t\044(MCI) \044(ALL_GRADEFLAGS) \044(ALL_MCIFLAGS) "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_951, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_953));
        }
        {
          parse_tree__write_deps_file__Var_949 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_949, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_949, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_951));
        }
        {
          parse_tree__write_deps_file__Var_948 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_948, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_15));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_948, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_949));
        }
        {
          parse_tree__write_deps_file__Var_946 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_946, 0) = ((MR_Box) ((MR_String) " : "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_946, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_948));
        }
        {
          parse_tree__write_deps_file__Var_945 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_945, 0) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_117));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_945, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_946));
        }
        {
          parse_tree__write_deps_file__Var_943 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_943, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_943, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_945));
        }
        {
          parse_tree__write_deps_file__Var_942 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_942, 0) = ((MR_Box) (parse_tree__write_deps_file__ModuleArg_127));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_942, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_943));
        }
        {
          parse_tree__write_deps_file__Var_940 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_940, 0) = ((MR_Box) ((MR_String) "\044(ALL_MCPIFLAGS) "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_940, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_942));
        }
        {
          parse_tree__write_deps_file__Var_938 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_938, 0) = ((MR_Box) ((MR_String) "\t\044(MCPI) \044(ALL_GRADEFLAGS) "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_938, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_940));
        }
        {
          parse_tree__write_deps_file__Var_936 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_936, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_936, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_938));
        }
        {
          parse_tree__write_deps_file__Var_935 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_935, 0) = ((MR_Box) (parse_tree__write_deps_file__SourceFileName_15));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_935, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_936));
        }
        {
          parse_tree__write_deps_file__Var_933 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_933, 0) = ((MR_Box) ((MR_String) " : "));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_933, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_935));
        }
        {
          parse_tree__write_deps_file__Var_932 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_932, 0) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_118));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_932, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_933));
        }
        {
          parse_tree__write_deps_file__Var_929 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_929, 0) = ((MR_Box) ((MR_String) "\n"));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_929, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_932));
        }
        {
          mercury__io__write_strings_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__Var_929);
        }
        {
          parse_tree__write_deps_file__Var_1022 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCPI) \044(ALL_GRADEFLAGS) \044(ALL_MCPIFLAGS) ", parse_tree__write_deps_file__ModuleArg_127);
        }
        {
          parse_tree__write_deps_file__Var_1021 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1021, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_1022));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1021, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__Var_1016 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1016, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1016, 1) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1016, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1016, 3) = ((MR_Box) (parse_tree__write_deps_file__Date0FileName_118));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1016, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_655));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1016, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_1021));
        }
        {
          parse_tree__write_deps_file__Var_1032 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCI) \044(ALL_GRADEFLAGS) \044(ALL_MCIFLAGS) ", parse_tree__write_deps_file__ModuleArg_127);
        }
        {
          parse_tree__write_deps_file__Var_1031 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1031, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_1032));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1031, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__Var_1026 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1026, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1026, 1) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1026, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1026, 3) = ((MR_Box) (parse_tree__write_deps_file__DateFileName_117));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1026, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_655));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1026, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_1031));
        }
        {
          parse_tree__write_deps_file__Var_1042 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCSI) \044(ALL_GRADEFLAGS) \044(ALL_MCSIFLAGS) ", parse_tree__write_deps_file__ModuleArg_127);
        }
        {
          parse_tree__write_deps_file__Var_1041 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1041, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_1042));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1041, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__Var_1036 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1036, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1036, 1) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1036, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1036, 3) = ((MR_Box) (parse_tree__write_deps_file__Date3FileName_186));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1036, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_655));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1036, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_1041));
        }
        {
          parse_tree__write_deps_file__Var_1052 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCOI) \044(ALL_GRADEFLAGS) \044(ALL_MCOIFLAGS) ", parse_tree__write_deps_file__ModuleArg_127);
        }
        {
          parse_tree__write_deps_file__Var_1051 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1051, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_1052));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1051, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__Var_1046 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1046, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1046, 1) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1046, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1046, 3) = ((MR_Box) (parse_tree__write_deps_file__OptDateFileName_62));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1046, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_655));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1046, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_1051));
        }
        {
          parse_tree__write_deps_file__Var_1062 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCTOI) \044(ALL_GRADEFLAGS) \044(ALL_MCTOIFLAGS) ", parse_tree__write_deps_file__ModuleArg_127);
        }
        {
          parse_tree__write_deps_file__Var_1061 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1061, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_1062));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1061, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__Var_1056 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1056, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1056, 1) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1056, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1056, 3) = ((MR_Box) (parse_tree__write_deps_file__TransOptDateFileName_49));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1056, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_655));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1056, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_1061));
        }
        {
          parse_tree__write_deps_file__Var_1074 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleArg_127, (MR_String) " \044(ERR_REDIRECT)");
        }
        {
          parse_tree__write_deps_file__Var_1072 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) ", parse_tree__write_deps_file__Var_1074);
        }
        {
          parse_tree__write_deps_file__Var_1071 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1071, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_1072));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1071, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__Var_1066 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1066, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1066, 1) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1066, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1066, 3) = ((MR_Box) (parse_tree__write_deps_file__CDateFileName_63));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1066, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_655));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1066, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_1071));
        }
        {
          parse_tree__write_deps_file__Var_1086 = mercury__string__f_43_43_2_f_0(parse_tree__write_deps_file__ModuleArg_127, (MR_String) " \044(ERR_REDIRECT)");
        }
        {
          parse_tree__write_deps_file__Var_1084 = mercury__string__f_43_43_2_f_0((MR_String) "\044(MCG) \044(ALL_GRADEFLAGS) \044(ALL_MCGFLAGS) --java-only ", parse_tree__write_deps_file__Var_1086);
        }
        {
          parse_tree__write_deps_file__Var_1083 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1083, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_1084));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1083, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__Var_1078 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1078, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1078, 1) = ((MR_Box) ((MR_String) ""));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1078, 2) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1078, 3) = ((MR_Box) (parse_tree__write_deps_file__JavaDateFileName_65));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1078, 4) = ((MR_Box) (parse_tree__write_deps_file__Var_655));
          MR_hl_field(MR_mktag(3), parse_tree__write_deps_file__Var_1078, 5) = ((MR_Box) (parse_tree__write_deps_file__Var_1083));
        }
        {
          parse_tree__write_deps_file__Var_1077 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1077, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_1078));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1077, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          parse_tree__write_deps_file__Var_1065 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1065, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_1066));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1065, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_1077));
        }
        {
          parse_tree__write_deps_file__Var_1055 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1055, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_1056));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1055, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_1065));
        }
        {
          parse_tree__write_deps_file__Var_1045 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1045, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_1046));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1045, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_1055));
        }
        {
          parse_tree__write_deps_file__Var_1035 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1035, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_1036));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1035, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_1045));
        }
        {
          parse_tree__write_deps_file__Var_1025 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1025, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_1026));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_1025, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_1035));
        }
        {
          parse_tree__write_deps_file__MmakeRulesPattern_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeRulesPattern_191, 0) = ((MR_Box) (parse_tree__write_deps_file__Var_1016));
          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__MmakeRulesPattern_191, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_1025));
        }
        {
          libs__mmakefiles__gather_mmake_entries_6_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__MmakeRulesPattern_191, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_927_927, &parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_1090_1090);
        }
      }
    {
      libs__mmakefiles__end_mmakefile_4_p_0(parse_tree__write_deps_file__DepStream_8, parse_tree__write_deps_file__STATE_VARIABLE_MmakeFile_1090_1090);
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
                parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__HeadVar__4_4, parse_tree__write_deps_file__Dep_20, &parse_tree__write_deps_file__OptName_28);
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
                    parse_tree__file_names__module_name_to_search_file_name_6_p_0(parse_tree__write_deps_file__HeadVar__1_1, parse_tree__write_deps_file__HeadVar__4_4, parse_tree__write_deps_file__Dep_20, &parse_tree__write_deps_file__OptName_43);
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
            parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_6, (MR_Integer) 0, (MR_String) ".order", parse_tree__write_deps_file__Module_7, &parse_tree__write_deps_file__OrdFileName_12);
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
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 0, (MR_String) ".dep", parse_tree__write_deps_file__ModuleName_9, &parse_tree__write_deps_file__DepFileName_13);
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
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 0, (MR_String) ".dv", parse_tree__write_deps_file__ModuleName_9, &parse_tree__write_deps_file__DvFileName_13);
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
    MR_String parse_tree__write_deps_file__Var_36;
    MR_String parse_tree__write_deps_file__Var_109;
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
    MR_String parse_tree__write_deps_file__Var_134;

    {
      libs__globals__lookup_bool_option_3_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 56, &parse_tree__write_deps_file__Verbose_12);
    }
    parse_tree__write_deps_file__Var_109 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 0)));
    parse_tree__write_deps_file__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 1)));
    parse_tree__write_deps_file__ModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 2)));
    parse_tree__write_deps_file__Var_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 3)));
    parse_tree__write_deps_file__Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 4)));
    parse_tree__write_deps_file__Var_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 5)));
    parse_tree__write_deps_file__Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 6)));
    parse_tree__write_deps_file__Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 7)));
    parse_tree__write_deps_file__Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 8)));
    parse_tree__write_deps_file__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 9)));
    parse_tree__write_deps_file__Var_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 10)));
    parse_tree__write_deps_file__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 11)));
    parse_tree__write_deps_file__Var_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 12)));
    parse_tree__write_deps_file__Var_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 13)));
    parse_tree__write_deps_file__Var_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 14)));
    parse_tree__write_deps_file__Var_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 15)));
    parse_tree__write_deps_file__Var_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 16)));
    parse_tree__write_deps_file__Var_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 17)));
    parse_tree__write_deps_file__Var_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 18)));
    parse_tree__write_deps_file__Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 19)));
    parse_tree__write_deps_file__Var_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 20)));
    parse_tree__write_deps_file__Var_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 21)));
    parse_tree__write_deps_file__Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 22)));
    parse_tree__write_deps_file__Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 23)));
    parse_tree__write_deps_file__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 24)));
    parse_tree__write_deps_file__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 25)));
    parse_tree__write_deps_file__Var_134 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__ModuleAndImports_8, (MR_Integer) 26)));
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(parse_tree__write_deps_file__Globals_7, (MR_Integer) 0, (MR_String) ".d", parse_tree__write_deps_file__ModuleName_13, &parse_tree__write_deps_file__DependencyFileName_14);
    }
    {
      parse_tree__write_deps_file__Var_36 = mercury__dir__dirname_1_f_0(parse_tree__write_deps_file__DependencyFileName_14);
    }
    {
      mercury__io__make_temp_file_6_p_0(parse_tree__write_deps_file__Var_36, (MR_String) "tmp_d", (MR_String) "", &parse_tree__write_deps_file__TmpDependencyFileNameRes_15);
    }
    if (((MR_tag((MR_Word) parse_tree__write_deps_file__TmpDependencyFileNameRes_15)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word parse_tree__write_deps_file__Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__TmpDependencyFileNameRes_15, (MR_Integer) 0)));
        MR_String parse_tree__write_deps_file__Message_17;
        MR_String parse_tree__write_deps_file__Var_93;

        {
          parse_tree__write_deps_file__Var_93 = mercury__io__error_message_1_f_0(parse_tree__write_deps_file__Error_16);
        }
        {
          parse_tree__write_deps_file__Message_17 = mercury__string__f_43_43_2_f_0((MR_String) "Could not create temporary file: ", parse_tree__write_deps_file__Var_93);
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
            MR_Word parse_tree__write_deps_file__Var_84;
            MR_Word parse_tree__write_deps_file__Var_86;
            MR_Word parse_tree__write_deps_file__Var_87;
            MR_Word parse_tree__write_deps_file__Var_89;
            MR_String parse_tree__write_deps_file__Message_95;

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
              parse_tree__write_deps_file__Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_89, 0) = ((MR_Box) (parse_tree__write_deps_file__IOErrorMessage_21));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              parse_tree__write_deps_file__Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_87, 0) = ((MR_Box) ((MR_String) "\' for output: "));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_87, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_89));
            }
            {
              parse_tree__write_deps_file__Var_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_86, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpDependencyFileName_18));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_86, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_87));
            }
            {
              parse_tree__write_deps_file__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_84, 0) = ((MR_Box) ((MR_String) "error opening temporary file \140"));
              MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_84, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_86));
            }
            {
              mercury__string__append_list_2_p_0(parse_tree__write_deps_file__Var_84, &parse_tree__write_deps_file__Message_95);
            }
            {
              libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_95);
            }
          }
        else
          {
            MR_Word parse_tree__write_deps_file__DepStream_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__write_deps_file__Result_19, (MR_Integer) 0)));
            MR_Word parse_tree__write_deps_file__FirstRenameResult_23;

            {
              parse_tree__write_deps_file__do_write_dependency_file_7_p_0(parse_tree__write_deps_file__DepStream_22, parse_tree__write_deps_file__Globals_7, parse_tree__write_deps_file__ModuleAndImports_8, parse_tree__write_deps_file__AllDeps_9, parse_tree__write_deps_file__MaybeTransOptDeps_10);
            }
            {
              mercury__io__close_output_3_p_0(parse_tree__write_deps_file__DepStream_22);
            }
            {
              mercury__io__rename_file_5_p_0(parse_tree__write_deps_file__TmpDependencyFileName_18, parse_tree__write_deps_file__DependencyFileName_14, &parse_tree__write_deps_file__FirstRenameResult_23);
            }
            if ((parse_tree__write_deps_file__FirstRenameResult_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " done.\n");
                }
              }
            else
              {
                MR_Word parse_tree__write_deps_file__RemoveResult_25;

                {
                  mercury__io__remove_file_4_p_0(parse_tree__write_deps_file__DependencyFileName_14, &parse_tree__write_deps_file__RemoveResult_25);
                }
                if ((parse_tree__write_deps_file__RemoveResult_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word parse_tree__write_deps_file__SecondRenameResult_28;

                    {
                      mercury__io__rename_file_5_p_0(parse_tree__write_deps_file__TmpDependencyFileName_18, parse_tree__write_deps_file__DependencyFileName_14, &parse_tree__write_deps_file__SecondRenameResult_28);
                    }
                    if ((parse_tree__write_deps_file__SecondRenameResult_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        {
                          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " done.\n");
                        }
                      }
                    else
                      {
                        MR_Word parse_tree__write_deps_file__Error5_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__SecondRenameResult_28, (MR_Integer) 0)));
                        MR_Word parse_tree__write_deps_file__Var_59;
                        MR_Word parse_tree__write_deps_file__Var_61;
                        MR_Word parse_tree__write_deps_file__Var_62;
                        MR_Word parse_tree__write_deps_file__Var_64;
                        MR_Word parse_tree__write_deps_file__Var_65;
                        MR_Word parse_tree__write_deps_file__Var_67;
                        MR_String parse_tree__write_deps_file__Message_97;
                        MR_String parse_tree__write_deps_file__ErrorMsg_98;

                        {
                          libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
                        }
                        {
                          libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
                        }
                        {
                          mercury__io__error_message_2_p_0(parse_tree__write_deps_file__Error5_29, &parse_tree__write_deps_file__ErrorMsg_98);
                        }
                        {
                          parse_tree__write_deps_file__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_67, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrorMsg_98));
                          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        }
                        {
                          parse_tree__write_deps_file__Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_65, 0) = ((MR_Box) ((MR_String) "\': "));
                          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_65, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_67));
                        }
                        {
                          parse_tree__write_deps_file__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_64, 0) = ((MR_Box) (parse_tree__write_deps_file__DependencyFileName_14));
                          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_64, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_65));
                        }
                        {
                          parse_tree__write_deps_file__Var_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_62, 0) = ((MR_Box) ((MR_String) "\' as \140"));
                          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_62, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_64));
                        }
                        {
                          parse_tree__write_deps_file__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_61, 0) = ((MR_Box) (parse_tree__write_deps_file__TmpDependencyFileName_18));
                          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_61, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_62));
                        }
                        {
                          parse_tree__write_deps_file__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_59, 0) = ((MR_Box) ((MR_String) "can\'t rename file \140"));
                          MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_59, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_61));
                        }
                        {
                          mercury__string__append_list_2_p_0(parse_tree__write_deps_file__Var_59, &parse_tree__write_deps_file__Message_97);
                        }
                        {
                          libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_97);
                        }
                      }
                  }
                else
                  {
                    MR_Word parse_tree__write_deps_file__Error4_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__RemoveResult_25, (MR_Integer) 0)));
                    MR_String parse_tree__write_deps_file__ErrorMsg_27;
                    MR_Word parse_tree__write_deps_file__Var_73;
                    MR_Word parse_tree__write_deps_file__Var_75;
                    MR_Word parse_tree__write_deps_file__Var_76;
                    MR_Word parse_tree__write_deps_file__Var_78;
                    MR_String parse_tree__write_deps_file__Message_96;

                    {
                      libs__file_util__maybe_write_string_4_p_0(parse_tree__write_deps_file__Verbose_12, (MR_String) " failed.\n");
                    }
                    {
                      libs__file_util__maybe_flush_output_3_p_0(parse_tree__write_deps_file__Verbose_12);
                    }
                    {
                      mercury__io__error_message_2_p_0(parse_tree__write_deps_file__Error4_26, &parse_tree__write_deps_file__ErrorMsg_27);
                    }
                    {
                      parse_tree__write_deps_file__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_78, 0) = ((MR_Box) (parse_tree__write_deps_file__ErrorMsg_27));
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      parse_tree__write_deps_file__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_76, 0) = ((MR_Box) ((MR_String) "\': "));
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_76, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_78));
                    }
                    {
                      parse_tree__write_deps_file__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_75, 0) = ((MR_Box) (parse_tree__write_deps_file__DependencyFileName_14));
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_75, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_76));
                    }
                    {
                      parse_tree__write_deps_file__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_73, 0) = ((MR_Box) ((MR_String) "can\'t remove file \140"));
                      MR_hl_field(MR_mktag(1), parse_tree__write_deps_file__Var_73, 1) = ((MR_Box) (parse_tree__write_deps_file__Var_75));
                    }
                    {
                      mercury__string__append_list_2_p_0(parse_tree__write_deps_file__Var_73, &parse_tree__write_deps_file__Message_96);
                    }
                    {
                      libs__file_util__report_error_3_p_0(parse_tree__write_deps_file__Message_96);
                    }
                  }
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
